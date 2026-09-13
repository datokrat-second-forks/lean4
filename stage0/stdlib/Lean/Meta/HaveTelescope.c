// Lean compiler output
// Module: Lean.Meta.HaveTelescope
// Imports: public import Lean.Meta.Basic public import Lean.Meta.MonadSimp import Lean.Util.CollectFVars import Lean.Util.CollectLooseBVars import Lean.Meta.AppBuilder import Init.While
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectLooseBVars(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo;
static const lean_array_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "_have_telescope_info_dummy_"};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 236, 171, 204, 19, 216, 21, 195)}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1;
static const lean_array_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0 = (const lean_object*)&l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_unused_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "have_unused'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "have_body_congr_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "have_val_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_body_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "have_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "have telescope; simplifying body "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(224, 171, 76, 175, 220, 234, 86, 123)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 102, 186, 241, 230, 68, 112, 189)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(231, 39, 204, 185, 148, 242, 27, 8)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "have telescope; unused "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "have telescope; fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "have telescope; non-fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(255, 213, 12, 50, 85, 170, 122, 222)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(238, 251, 30, 34, 208, 131, 54, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(33, 35, 129, 148, 230, 9, 239, 46)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.HaveTelescope"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.HaveTelescope.0.Lean.Meta.simpHaveTelescopeAux"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "assertion violation: !rb.exprType.hasLooseBVar 0\n        "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_simp_let_unused_dummy"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 140, 102, 13, 80, 16, 156, 102)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.simpHaveTelescope"};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "assertion violation: !info.haveInfo.isEmpty\n  "};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__0, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_instInhabitedLocalDecl_default;
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_10_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__2, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_instInhabitedHaveInfo_default;
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_box(0);
v___x_19_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_20_ = l_Lean_Expr_const___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_22_ = l_Lean_Level_param___override(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4);
v___x_24_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3);
v___x_25_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_26_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_27_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
lean_ctor_set(v___x_27_, 2, v___x_25_);
lean_ctor_set(v___x_27_, 3, v___x_24_);
lean_ctor_set(v___x_27_, 4, v___x_24_);
lean_ctor_set(v___x_27_, 5, v___x_23_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object* v_lctx_30_, lean_object* v_x_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_keyedConfig_37_; uint8_t v_trackZetaDelta_38_; lean_object* v_zetaDeltaSet_39_; lean_object* v_localInstances_40_; lean_object* v_defEqCtx_x3f_41_; lean_object* v_synthPendingDepth_42_; lean_object* v_customCanUnfoldPredicate_x3f_43_; uint8_t v_univApprox_44_; uint8_t v_inTypeClassResolution_45_; uint8_t v_cacheInferType_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_keyedConfig_37_ = lean_ctor_get(v___y_32_, 0);
v_trackZetaDelta_38_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7);
v_zetaDeltaSet_39_ = lean_ctor_get(v___y_32_, 1);
v_localInstances_40_ = lean_ctor_get(v___y_32_, 3);
v_defEqCtx_x3f_41_ = lean_ctor_get(v___y_32_, 4);
v_synthPendingDepth_42_ = lean_ctor_get(v___y_32_, 5);
v_customCanUnfoldPredicate_x3f_43_ = lean_ctor_get(v___y_32_, 6);
v_univApprox_44_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_45_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 2);
v_cacheInferType_46_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_43_);
lean_inc(v_synthPendingDepth_42_);
lean_inc(v_defEqCtx_x3f_41_);
lean_inc_ref(v_localInstances_40_);
lean_inc(v_zetaDeltaSet_39_);
lean_inc_ref(v_keyedConfig_37_);
v___x_47_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_47_, 0, v_keyedConfig_37_);
lean_ctor_set(v___x_47_, 1, v_zetaDeltaSet_39_);
lean_ctor_set(v___x_47_, 2, v_lctx_30_);
lean_ctor_set(v___x_47_, 3, v_localInstances_40_);
lean_ctor_set(v___x_47_, 4, v_defEqCtx_x3f_41_);
lean_ctor_set(v___x_47_, 5, v_synthPendingDepth_42_);
lean_ctor_set(v___x_47_, 6, v_customCanUnfoldPredicate_x3f_43_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7, v_trackZetaDelta_38_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 1, v_univApprox_44_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 2, v_inTypeClassResolution_45_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 3, v_cacheInferType_46_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
v___x_48_ = lean_apply_5(v_x_31_, v___x_47_, v___y_33_, v___y_34_, v___y_35_, lean_box(0));
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object* v_lctx_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_lctx_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object* v_00_u03b1_57_, lean_object* v_lctx_58_, lean_object* v_x_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_lctx_58_, v_x_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object* v_00_u03b1_66_, lean_object* v_lctx_67_, lean_object* v_x_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(v_00_u03b1_66_, v_lctx_67_, v_x_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9___redArg(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
return v_x_75_;
}
else
{
lean_object* v_key_77_; lean_object* v_value_78_; lean_object* v_tail_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_102_; 
v_key_77_ = lean_ctor_get(v_x_76_, 0);
v_value_78_ = lean_ctor_get(v_x_76_, 1);
v_tail_79_ = lean_ctor_get(v_x_76_, 2);
v_isSharedCheck_102_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_102_ == 0)
{
v___x_81_ = v_x_76_;
v_isShared_82_ = v_isSharedCheck_102_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_tail_79_);
lean_inc(v_value_78_);
lean_inc(v_key_77_);
lean_dec(v_x_76_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_102_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; uint64_t v_fold_87_; uint64_t v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_83_ = lean_array_get_size(v_x_75_);
v___x_84_ = lean_uint64_of_nat(v_key_77_);
v___x_85_ = 32ULL;
v___x_86_ = lean_uint64_shift_right(v___x_84_, v___x_85_);
v_fold_87_ = lean_uint64_xor(v___x_84_, v___x_86_);
v___x_88_ = 16ULL;
v___x_89_ = lean_uint64_shift_right(v_fold_87_, v___x_88_);
v___x_90_ = lean_uint64_xor(v_fold_87_, v___x_89_);
v___x_91_ = lean_uint64_to_usize(v___x_90_);
v___x_92_ = lean_usize_of_nat(v___x_83_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_sub(v___x_92_, v___x_93_);
v___x_95_ = lean_usize_land(v___x_91_, v___x_94_);
v___x_96_ = lean_array_uget_borrowed(v_x_75_, v___x_95_);
lean_inc(v___x_96_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 2, v___x_96_);
v___x_98_ = v___x_81_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_key_77_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_value_78_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v___x_96_);
v___x_98_ = v_reuseFailAlloc_101_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_uset(v_x_75_, v___x_95_, v___x_98_);
v_x_75_ = v___x_99_;
v_x_76_ = v_tail_79_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object* v_i_103_, lean_object* v_source_104_, lean_object* v_target_105_){
_start:
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_array_get_size(v_source_104_);
v___x_107_ = lean_nat_dec_lt(v_i_103_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_source_104_);
lean_dec(v_i_103_);
return v_target_105_;
}
else
{
lean_object* v_es_108_; lean_object* v___x_109_; lean_object* v_source_110_; lean_object* v_target_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_es_108_ = lean_array_fget(v_source_104_, v_i_103_);
v___x_109_ = lean_box(0);
v_source_110_ = lean_array_fset(v_source_104_, v_i_103_, v___x_109_);
v_target_111_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9___redArg(v_target_105_, v_es_108_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v_i_103_, v___x_112_);
lean_dec(v_i_103_);
v_i_103_ = v___x_113_;
v_source_104_ = v_source_110_;
v_target_105_ = v_target_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object* v_data_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_nbuckets_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_116_ = lean_array_get_size(v_data_115_);
v___x_117_ = lean_unsigned_to_nat(2u);
v_nbuckets_118_ = lean_nat_mul(v___x_116_, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_box(0);
v___x_121_ = lean_mk_array(v_nbuckets_118_, v___x_120_);
v___x_122_ = lean_array_propagate_mark(v_data_115_, v___x_121_);
v___x_123_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v___x_119_, v_data_115_, v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object* v_a_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
else
{
lean_object* v_key_127_; lean_object* v_tail_128_; uint8_t v___x_129_; 
v_key_127_ = lean_ctor_get(v_x_125_, 0);
v_tail_128_ = lean_ctor_get(v_x_125_, 2);
v___x_129_ = lean_nat_dec_eq(v_key_127_, v_a_124_);
if (v___x_129_ == 0)
{
v_x_125_ = v_tail_128_;
goto _start;
}
else
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object* v_a_131_, lean_object* v_x_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_131_, v_x_132_);
lean_dec(v_x_132_);
lean_dec(v_a_131_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object* v_m_135_, lean_object* v_a_136_, lean_object* v_b_137_){
_start:
{
lean_object* v_size_138_; lean_object* v_buckets_139_; lean_object* v___x_140_; uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v_fold_144_; uint64_t v___x_145_; uint64_t v___x_146_; uint64_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v___x_150_; size_t v___x_151_; size_t v___x_152_; lean_object* v_bkt_153_; uint8_t v___x_154_; 
v_size_138_ = lean_ctor_get(v_m_135_, 0);
v_buckets_139_ = lean_ctor_get(v_m_135_, 1);
v___x_140_ = lean_array_get_size(v_buckets_139_);
v___x_141_ = lean_uint64_of_nat(v_a_136_);
v___x_142_ = 32ULL;
v___x_143_ = lean_uint64_shift_right(v___x_141_, v___x_142_);
v_fold_144_ = lean_uint64_xor(v___x_141_, v___x_143_);
v___x_145_ = 16ULL;
v___x_146_ = lean_uint64_shift_right(v_fold_144_, v___x_145_);
v___x_147_ = lean_uint64_xor(v_fold_144_, v___x_146_);
v___x_148_ = lean_uint64_to_usize(v___x_147_);
v___x_149_ = lean_usize_of_nat(v___x_140_);
v___x_150_ = ((size_t)1ULL);
v___x_151_ = lean_usize_sub(v___x_149_, v___x_150_);
v___x_152_ = lean_usize_land(v___x_148_, v___x_151_);
v_bkt_153_ = lean_array_uget_borrowed(v_buckets_139_, v___x_152_);
v___x_154_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_136_, v_bkt_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_175_; 
lean_inc_ref(v_buckets_139_);
lean_inc(v_size_138_);
v_isSharedCheck_175_ = !lean_is_exclusive(v_m_135_);
if (v_isSharedCheck_175_ == 0)
{
lean_object* v_unused_176_; lean_object* v_unused_177_; 
v_unused_176_ = lean_ctor_get(v_m_135_, 1);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_m_135_, 0);
lean_dec(v_unused_177_);
v___x_156_ = v_m_135_;
v_isShared_157_ = v_isSharedCheck_175_;
goto v_resetjp_155_;
}
else
{
lean_dec(v_m_135_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_175_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v_size_x27_159_; lean_object* v___x_160_; lean_object* v_buckets_x27_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_158_ = lean_unsigned_to_nat(1u);
v_size_x27_159_ = lean_nat_add(v_size_138_, v___x_158_);
lean_dec(v_size_138_);
lean_inc(v_bkt_153_);
v___x_160_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_160_, 0, v_a_136_);
lean_ctor_set(v___x_160_, 1, v_b_137_);
lean_ctor_set(v___x_160_, 2, v_bkt_153_);
v_buckets_x27_161_ = lean_array_uset(v_buckets_139_, v___x_152_, v___x_160_);
v___x_162_ = lean_unsigned_to_nat(4u);
v___x_163_ = lean_nat_mul(v_size_x27_159_, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(3u);
v___x_165_ = lean_nat_div(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_array_get_size(v_buckets_x27_161_);
v___x_167_ = lean_nat_dec_le(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
if (v___x_167_ == 0)
{
lean_object* v_val_168_; lean_object* v___x_170_; 
v_val_168_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_buckets_x27_161_);
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 1, v_val_168_);
lean_ctor_set(v___x_156_, 0, v_size_x27_159_);
v___x_170_ = v___x_156_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_val_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
else
{
lean_object* v___x_173_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 1, v_buckets_x27_161_);
lean_ctor_set(v___x_156_, 0, v_size_x27_159_);
v___x_173_ = v___x_156_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_buckets_x27_161_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
else
{
lean_dec(v_b_137_);
lean_dec(v_a_136_);
return v_m_135_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object* v_numHaves_178_, lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
if (lean_obj_tag(v_x_180_) == 0)
{
return v_x_179_;
}
else
{
lean_object* v_key_181_; lean_object* v_tail_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_key_181_ = lean_ctor_get(v_x_180_, 0);
v_tail_182_ = lean_ctor_get(v_x_180_, 2);
v___x_183_ = lean_nat_sub(v_numHaves_178_, v_key_181_);
v___x_184_ = lean_unsigned_to_nat(1u);
v___x_185_ = lean_nat_sub(v___x_183_, v___x_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_x_179_, v___x_185_, v___x_186_);
v_x_179_ = v___x_187_;
v_x_180_ = v_tail_182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object* v_numHaves_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_189_, v_x_190_, v_x_191_);
lean_dec(v_x_191_);
lean_dec(v_numHaves_189_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object* v_numHaves_193_, lean_object* v_as_194_, size_t v_i_195_, size_t v_stop_196_, lean_object* v_b_197_){
_start:
{
uint8_t v___x_198_; 
v___x_198_ = lean_usize_dec_eq(v_i_195_, v_stop_196_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; size_t v___x_201_; size_t v___x_202_; 
v___x_199_ = lean_array_uget_borrowed(v_as_194_, v_i_195_);
v___x_200_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_193_, v_b_197_, v___x_199_);
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_195_, v___x_201_);
v_i_195_ = v___x_202_;
v_b_197_ = v___x_200_;
goto _start;
}
else
{
return v_b_197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object* v_numHaves_204_, lean_object* v_as_205_, lean_object* v_i_206_, lean_object* v_stop_207_, lean_object* v_b_208_){
_start:
{
size_t v_i_boxed_209_; size_t v_stop_boxed_210_; lean_object* v_res_211_; 
v_i_boxed_209_ = lean_unbox_usize(v_i_206_);
lean_dec(v_i_206_);
v_stop_boxed_210_ = lean_unbox_usize(v_stop_207_);
lean_dec(v_stop_207_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_204_, v_as_205_, v_i_boxed_209_, v_stop_boxed_210_, v_b_208_);
lean_dec_ref(v_as_205_);
lean_dec(v_numHaves_204_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object* v_numHaves_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_buckets_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_216_ = l_Lean_Expr_collectLooseBVars(v_a_213_, v___x_214_);
v_buckets_217_ = lean_ctor_get(v___x_216_, 1);
lean_inc_ref(v_buckets_217_);
lean_dec_ref(v___x_216_);
v___x_218_ = lean_array_get_size(v_buckets_217_);
v___x_219_ = lean_nat_dec_lt(v___x_214_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v_buckets_217_);
return v___x_215_;
}
else
{
size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; 
v___x_220_ = ((size_t)0ULL);
v___x_221_ = lean_usize_of_nat(v___x_218_);
v___x_222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_212_, v_buckets_217_, v___x_220_, v___x_221_, v___x_215_);
lean_dec_ref(v_buckets_217_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object* v_numHaves_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_223_, v_a_224_);
lean_dec(v_numHaves_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object* v_fvars_226_, lean_object* v___x_227_, lean_object* v_n_228_, lean_object* v_j_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_zero_231_; uint8_t v_isZero_232_; 
v_zero_231_ = lean_unsigned_to_nat(0u);
v_isZero_232_ = lean_nat_dec_eq(v_j_229_, v_zero_231_);
if (v_isZero_232_ == 1)
{
lean_dec(v_j_229_);
return v_a_230_;
}
else
{
lean_object* v_one_233_; lean_object* v_n_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v_one_233_ = lean_unsigned_to_nat(1u);
v_n_234_ = lean_nat_sub(v_j_229_, v_one_233_);
v___x_235_ = lean_nat_sub(v_n_228_, v_j_229_);
lean_dec(v_j_229_);
v___x_236_ = lean_array_fget_borrowed(v_fvars_226_, v___x_235_);
v___x_237_ = l_Lean_Expr_fvarId_x21(v___x_236_);
v___x_238_ = l_Lean_FVarIdSet_contains(v___x_227_, v___x_237_);
lean_dec(v___x_237_);
if (v___x_238_ == 0)
{
lean_dec(v___x_235_);
v_j_229_ = v_n_234_;
goto _start;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_box(0);
v___x_241_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_a_230_, v___x_235_, v___x_240_);
v_j_229_ = v_n_234_;
v_a_230_ = v___x_241_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object* v_fvars_243_, lean_object* v___x_244_, lean_object* v_n_245_, lean_object* v_j_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_fvars_243_, v___x_244_, v_n_245_, v_j_246_, v_a_247_);
lean_dec(v_n_245_);
lean_dec(v___x_244_);
lean_dec_ref(v_fvars_243_);
return v_res_248_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
v___x_250_ = lean_unsigned_to_nat(16u);
v___x_251_ = lean_mk_array(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_257_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_258_ = lean_box(1);
v___x_259_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_260_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v___x_258_);
lean_ctor_set(v___x_260_, 2, v___x_257_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object* v_body_261_, lean_object* v_fvars_262_, lean_object* v_info_263_, lean_object* v_bodyDeps_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___x_270_; 
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc_ref(v___y_265_);
lean_inc_ref(v_body_261_);
v___x_270_ = lean_infer_type(v_body_261_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_n(v_a_271_, 2);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = l_Lean_Meta_getLevel(v_a_271_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_299_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_299_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_299_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_299_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_fvarSet_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_haveInfo_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_293_; 
v___x_277_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_278_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3);
lean_inc(v_a_271_);
v___x_279_ = l_Lean_collectFVars(v___x_278_, v_a_271_);
v_fvarSet_280_ = lean_ctor_get(v___x_279_, 1);
lean_inc(v_fvarSet_280_);
lean_dec_ref(v___x_279_);
v___x_281_ = lean_array_get_size(v_fvars_262_);
v___x_282_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_fvars_262_, v_fvarSet_280_, v___x_281_, v___x_281_, v___x_277_);
lean_dec(v_fvarSet_280_);
v_haveInfo_283_ = lean_ctor_get(v_info_263_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v_info_263_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; 
v_unused_294_ = lean_ctor_get(v_info_263_, 5);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_info_263_, 4);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_info_263_, 3);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_info_263_, 2);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_info_263_, 1);
lean_dec(v_unused_298_);
v___x_285_ = v_info_263_;
v_isShared_286_ = v_isSharedCheck_293_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_haveInfo_283_);
lean_dec(v_info_263_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_293_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 5, v_a_273_);
lean_ctor_set(v___x_285_, 4, v_a_271_);
lean_ctor_set(v___x_285_, 3, v_body_261_);
lean_ctor_set(v___x_285_, 2, v___x_282_);
lean_ctor_set(v___x_285_, 1, v_bodyDeps_264_);
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_haveInfo_283_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_bodyDeps_264_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v_body_261_);
lean_ctor_set(v_reuseFailAlloc_292_, 4, v_a_271_);
lean_ctor_set(v_reuseFailAlloc_292_, 5, v_a_273_);
v___x_288_ = v_reuseFailAlloc_292_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_290_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_288_);
v___x_290_ = v___x_275_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_271_);
lean_dec_ref(v_bodyDeps_264_);
lean_dec_ref(v_info_263_);
lean_dec_ref(v_body_261_);
v_a_300_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_272_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_272_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec_ref(v_bodyDeps_264_);
lean_dec_ref(v_info_263_);
lean_dec_ref(v_body_261_);
v_a_308_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_270_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_270_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object* v_body_316_, lean_object* v_fvars_317_, lean_object* v_info_318_, lean_object* v_bodyDeps_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(v_body_316_, v_fvars_317_, v_info_318_, v_bodyDeps_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec_ref(v_fvars_317_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg(lean_object* v___y_326_){
_start:
{
lean_object* v___x_328_; lean_object* v_ngen_329_; lean_object* v_namePrefix_330_; lean_object* v_idx_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_360_; 
v___x_328_ = lean_st_ref_get(v___y_326_);
v_ngen_329_ = lean_ctor_get(v___x_328_, 2);
lean_inc_ref(v_ngen_329_);
lean_dec(v___x_328_);
v_namePrefix_330_ = lean_ctor_get(v_ngen_329_, 0);
v_idx_331_ = lean_ctor_get(v_ngen_329_, 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v_ngen_329_);
if (v_isSharedCheck_360_ == 0)
{
v___x_333_ = v_ngen_329_;
v_isShared_334_ = v_isSharedCheck_360_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_idx_331_);
lean_inc(v_namePrefix_330_);
lean_dec(v_ngen_329_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_360_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_r_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
lean_inc(v_idx_331_);
lean_inc(v_namePrefix_330_);
v_r_335_ = l_Lean_Name_num___override(v_namePrefix_330_, v_idx_331_);
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_nat_add(v_idx_331_, v___x_336_);
lean_dec(v_idx_331_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 1, v___x_337_);
v___x_339_ = v___x_333_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_namePrefix_330_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_359_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; lean_object* v_env_341_; lean_object* v_nextMacroScope_342_; lean_object* v_auxDeclNGen_343_; lean_object* v_traceState_344_; lean_object* v_cache_345_; lean_object* v_messages_346_; lean_object* v_infoState_347_; lean_object* v_snapshotTasks_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_357_; 
v___x_340_ = lean_st_ref_take(v___y_326_);
v_env_341_ = lean_ctor_get(v___x_340_, 0);
v_nextMacroScope_342_ = lean_ctor_get(v___x_340_, 1);
v_auxDeclNGen_343_ = lean_ctor_get(v___x_340_, 3);
v_traceState_344_ = lean_ctor_get(v___x_340_, 4);
v_cache_345_ = lean_ctor_get(v___x_340_, 5);
v_messages_346_ = lean_ctor_get(v___x_340_, 6);
v_infoState_347_ = lean_ctor_get(v___x_340_, 7);
v_snapshotTasks_348_ = lean_ctor_get(v___x_340_, 8);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v___x_340_, 2);
lean_dec(v_unused_358_);
v___x_350_ = v___x_340_;
v_isShared_351_ = v_isSharedCheck_357_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_snapshotTasks_348_);
lean_inc(v_infoState_347_);
lean_inc(v_messages_346_);
lean_inc(v_cache_345_);
lean_inc(v_traceState_344_);
lean_inc(v_auxDeclNGen_343_);
lean_inc(v_nextMacroScope_342_);
lean_inc(v_env_341_);
lean_dec(v___x_340_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_357_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 2, v___x_339_);
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_env_341_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_nextMacroScope_342_);
lean_ctor_set(v_reuseFailAlloc_356_, 2, v___x_339_);
lean_ctor_set(v_reuseFailAlloc_356_, 3, v_auxDeclNGen_343_);
lean_ctor_set(v_reuseFailAlloc_356_, 4, v_traceState_344_);
lean_ctor_set(v_reuseFailAlloc_356_, 5, v_cache_345_);
lean_ctor_set(v_reuseFailAlloc_356_, 6, v_messages_346_);
lean_ctor_set(v_reuseFailAlloc_356_, 7, v_infoState_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 8, v_snapshotTasks_348_);
v___x_353_ = v_reuseFailAlloc_356_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_st_ref_put(v___y_326_, v___x_353_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v_r_335_);
return v___x_355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg___boxed(lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg(v___y_361_);
lean_dec(v___y_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_369_; lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_377_; 
v___x_369_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg(v___y_367_);
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_377_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_377_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_370_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object* v_e_384_, lean_object* v_numHaves_385_, lean_object* v_info_386_, lean_object* v_lctx_387_, lean_object* v_fvars_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; 
if (lean_obj_tag(v_e_384_) == 8)
{
uint8_t v_nondep_403_; 
v_nondep_403_ = lean_ctor_get_uint8(v_e_384_, sizeof(void*)*4 + 8);
if (v_nondep_403_ == 1)
{
lean_object* v_declName_404_; lean_object* v_type_405_; lean_object* v_value_406_; lean_object* v_body_407_; lean_object* v_typeBackDeps_408_; lean_object* v_valueBackDeps_409_; lean_object* v_t_410_; lean_object* v_v_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_declName_404_ = lean_ctor_get(v_e_384_, 0);
lean_inc(v_declName_404_);
v_type_405_ = lean_ctor_get(v_e_384_, 1);
lean_inc_ref_n(v_type_405_, 2);
v_value_406_ = lean_ctor_get(v_e_384_, 2);
lean_inc_ref_n(v_value_406_, 2);
v_body_407_ = lean_ctor_get(v_e_384_, 3);
lean_inc_ref(v_body_407_);
lean_dec_ref_known(v_e_384_, 4);
v_typeBackDeps_408_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_385_, v_type_405_);
v_valueBackDeps_409_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_385_, v_value_406_);
v_t_410_ = lean_expr_instantiate_rev(v_type_405_, v_fvars_388_);
lean_dec_ref(v_type_405_);
v_v_411_ = lean_expr_instantiate_rev(v_value_406_, v_fvars_388_);
lean_dec_ref(v_value_406_);
lean_inc_ref(v_t_410_);
v___x_412_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_412_, 0, v_t_410_);
lean_inc_ref(v_lctx_387_);
v___x_413_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_lctx_387_, v___x_412_, v_a_389_, v_a_390_, v_a_391_, v_a_392_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_415_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v___x_415_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(v_a_389_, v_a_390_, v_a_391_, v_a_392_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_haveInfo_417_; lean_object* v_bodyDeps_418_; lean_object* v_bodyTypeDeps_419_; lean_object* v_body_420_; lean_object* v_bodyType_421_; lean_object* v_level_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_440_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref_known(v___x_415_, 1);
v_haveInfo_417_ = lean_ctor_get(v_info_386_, 0);
v_bodyDeps_418_ = lean_ctor_get(v_info_386_, 1);
v_bodyTypeDeps_419_ = lean_ctor_get(v_info_386_, 2);
v_body_420_ = lean_ctor_get(v_info_386_, 3);
v_bodyType_421_ = lean_ctor_get(v_info_386_, 4);
v_level_422_ = lean_ctor_get(v_info_386_, 5);
v_isSharedCheck_440_ = !lean_is_exclusive(v_info_386_);
if (v_isSharedCheck_440_ == 0)
{
v___x_424_ = v_info_386_;
v_isShared_425_ = v_isSharedCheck_440_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_level_422_);
lean_inc(v_bodyType_421_);
lean_inc(v_body_420_);
lean_inc(v_bodyTypeDeps_419_);
lean_inc(v_bodyDeps_418_);
lean_inc(v_haveInfo_417_);
lean_dec(v_info_386_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_440_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = 0;
lean_inc(v_a_416_);
v___x_428_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set(v___x_428_, 1, v_a_416_);
lean_ctor_set(v___x_428_, 2, v_declName_404_);
lean_ctor_set(v___x_428_, 3, v_t_410_);
lean_ctor_set(v___x_428_, 4, v_v_411_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*5, v_nondep_403_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*5 + 1, v___x_427_);
lean_inc_ref(v___x_428_);
v___x_429_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_429_, 0, v_typeBackDeps_408_);
lean_ctor_set(v___x_429_, 1, v_valueBackDeps_409_);
lean_ctor_set(v___x_429_, 2, v___x_428_);
lean_ctor_set(v___x_429_, 3, v_a_414_);
v___x_430_ = lean_array_push(v_haveInfo_417_, v___x_429_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_430_);
v___x_432_ = v___x_424_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_bodyDeps_418_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_bodyTypeDeps_419_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v_body_420_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v_bodyType_421_);
lean_ctor_set(v_reuseFailAlloc_439_, 5, v_level_422_);
v___x_432_ = v_reuseFailAlloc_439_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_433_ = l_Lean_LocalContext_addDecl(v_lctx_387_, v___x_428_);
v___x_434_ = l_Lean_mkFVar(v_a_416_);
v___x_435_ = lean_array_push(v_fvars_388_, v___x_434_);
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_add(v_numHaves_385_, v___x_436_);
lean_dec(v_numHaves_385_);
v_e_384_ = v_body_407_;
v_numHaves_385_ = v___x_437_;
v_info_386_ = v___x_432_;
v_lctx_387_ = v___x_433_;
v_fvars_388_ = v___x_435_;
goto _start;
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec(v_a_414_);
lean_dec_ref(v_v_411_);
lean_dec_ref(v_t_410_);
lean_dec_ref(v_valueBackDeps_409_);
lean_dec_ref(v_typeBackDeps_408_);
lean_dec_ref(v_body_407_);
lean_dec(v_declName_404_);
lean_dec_ref(v_fvars_388_);
lean_dec_ref(v_lctx_387_);
lean_dec_ref(v_info_386_);
lean_dec(v_numHaves_385_);
v_a_441_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_415_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_415_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec_ref(v_v_411_);
lean_dec_ref(v_t_410_);
lean_dec_ref(v_valueBackDeps_409_);
lean_dec_ref(v_typeBackDeps_408_);
lean_dec_ref(v_body_407_);
lean_dec(v_declName_404_);
lean_dec_ref(v_fvars_388_);
lean_dec_ref(v_lctx_387_);
lean_dec_ref(v_info_386_);
lean_dec(v_numHaves_385_);
v_a_449_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_413_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_413_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
v___y_395_ = v_a_389_;
v___y_396_ = v_a_390_;
v___y_397_ = v_a_391_;
v___y_398_ = v_a_392_;
goto v___jp_394_;
}
}
else
{
v___y_395_ = v_a_389_;
v___y_396_ = v_a_390_;
v___y_397_ = v_a_391_;
v___y_398_ = v_a_392_;
goto v___jp_394_;
}
v___jp_394_:
{
lean_object* v_bodyDeps_399_; lean_object* v_body_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
lean_inc_ref(v_e_384_);
v_bodyDeps_399_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_385_, v_e_384_);
lean_dec(v_numHaves_385_);
v_body_400_ = lean_expr_instantiate_rev(v_e_384_, v_fvars_388_);
lean_dec_ref(v_e_384_);
v___f_401_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed), 9, 4);
lean_closure_set(v___f_401_, 0, v_body_400_);
lean_closure_set(v___f_401_, 1, v_fvars_388_);
lean_closure_set(v___f_401_, 2, v_info_386_);
lean_closure_set(v___f_401_, 3, v_bodyDeps_399_);
v___x_402_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_lctx_387_, v___f_401_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object* v_e_457_, lean_object* v_numHaves_458_, lean_object* v_info_459_, lean_object* v_lctx_460_, lean_object* v_fvars_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_457_, v_numHaves_458_, v_info_459_, v_lctx_460_, v_fvars_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
lean_dec(v_a_465_);
lean_dec_ref(v_a_464_);
lean_dec(v_a_463_);
lean_dec_ref(v_a_462_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object* v_00_u03b2_468_, lean_object* v_m_469_, lean_object* v_a_470_, lean_object* v_b_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_m_469_, v_a_470_, v_b_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object* v_fvars_473_, lean_object* v___x_474_, lean_object* v_n_475_, lean_object* v_j_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_fvars_473_, v___x_474_, v_n_475_, v_j_476_, v_a_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object* v_fvars_480_, lean_object* v___x_481_, lean_object* v_n_482_, lean_object* v_j_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(v_fvars_480_, v___x_481_, v_n_482_, v_j_483_, v_a_484_, v_a_485_);
lean_dec(v_n_482_);
lean_dec(v___x_481_);
lean_dec_ref(v_fvars_480_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7(lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___redArg(v___y_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7___boxed(lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5_spec__7(v___y_493_, v___y_494_, v___y_495_, v___y_496_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
return v_res_498_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object* v_00_u03b2_499_, lean_object* v_a_500_, lean_object* v_x_501_){
_start:
{
uint8_t v___x_502_; 
v___x_502_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_500_, v_x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object* v_00_u03b2_503_, lean_object* v_a_504_, lean_object* v_x_505_){
_start:
{
uint8_t v_res_506_; lean_object* v_r_507_; 
v_res_506_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(v_00_u03b2_503_, v_a_504_, v_x_505_);
lean_dec(v_x_505_);
lean_dec(v_a_504_);
v_r_507_ = lean_box(v_res_506_);
return v_r_507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object* v_00_u03b2_508_, lean_object* v_data_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_data_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_511_, lean_object* v_i_512_, lean_object* v_source_513_, lean_object* v_target_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v_i_512_, v_source_513_, v_target_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_516_, lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__9___redArg(v_x_517_, v_x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object* v_e_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
lean_object* v_lctx_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_lctx_526_ = lean_ctor_get(v_a_521_, 2);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_529_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
lean_inc_ref(v_lctx_526_);
v___x_530_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_520_, v___x_527_, v___x_529_, v_lctx_526_, v___x_528_, v_a_521_, v_a_522_, v_a_523_, v_a_524_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object* v_e_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_Meta_getHaveTelescopeInfo(v_e_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object* v_x_538_, lean_object* v_x_539_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
return v_x_538_;
}
else
{
lean_object* v_key_540_; lean_object* v_tail_541_; uint8_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_key_540_ = lean_ctor_get(v_x_539_, 0);
v_tail_541_ = lean_ctor_get(v_x_539_, 2);
v___x_542_ = 1;
v___x_543_ = lean_box(v___x_542_);
v___x_544_ = lean_array_set(v_x_538_, v_key_540_, v___x_543_);
v_x_538_ = v___x_544_;
v_x_539_ = v_tail_541_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_x_546_, v_x_547_);
lean_dec(v_x_547_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object* v_as_549_, size_t v_i_550_, size_t v_stop_551_, lean_object* v_b_552_){
_start:
{
uint8_t v___x_553_; 
v___x_553_ = lean_usize_dec_eq(v_i_550_, v_stop_551_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; size_t v___x_556_; size_t v___x_557_; 
v___x_554_ = lean_array_uget_borrowed(v_as_549_, v_i_550_);
v___x_555_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_b_552_, v___x_554_);
v___x_556_ = ((size_t)1ULL);
v___x_557_ = lean_usize_add(v_i_550_, v___x_556_);
v_i_550_ = v___x_557_;
v_b_552_ = v___x_555_;
goto _start;
}
else
{
return v_b_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object* v_as_559_, lean_object* v_i_560_, lean_object* v_stop_561_, lean_object* v_b_562_){
_start:
{
size_t v_i_boxed_563_; size_t v_stop_boxed_564_; lean_object* v_res_565_; 
v_i_boxed_563_ = lean_unbox_usize(v_i_560_);
lean_dec(v_i_560_);
v_stop_boxed_564_ = lean_unbox_usize(v_stop_561_);
lean_dec(v_stop_561_);
v_res_565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_as_559_, v_i_boxed_563_, v_stop_boxed_564_, v_b_562_);
lean_dec_ref(v_as_559_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object* v_arr_566_, lean_object* v_s_567_){
_start:
{
lean_object* v_buckets_568_; lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v_buckets_568_ = lean_ctor_get(v_s_567_, 1);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_array_get_size(v_buckets_568_);
v___x_571_ = lean_nat_dec_lt(v___x_569_, v___x_570_);
if (v___x_571_ == 0)
{
return v_arr_566_;
}
else
{
size_t v___x_572_; size_t v___x_573_; lean_object* v___x_574_; 
v___x_572_ = ((size_t)0ULL);
v___x_573_ = lean_usize_of_nat(v___x_570_);
v___x_574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_buckets_568_, v___x_572_, v___x_573_, v_arr_566_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object* v_arr_575_, lean_object* v_s_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_arr_575_, v_s_576_);
lean_dec_ref(v_s_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object* v_upperBound_578_, lean_object* v_numHaves_579_, lean_object* v___x_580_, lean_object* v_a_581_, lean_object* v_b_582_){
_start:
{
lean_object* v_a_585_; uint8_t v___x_589_; 
v___x_589_ = lean_nat_dec_lt(v_a_581_, v_upperBound_578_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
lean_dec(v_a_581_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v_b_582_);
return v___x_590_;
}
else
{
uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_591_ = 0;
v___x_592_ = lean_nat_sub(v_numHaves_579_, v_a_581_);
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = lean_nat_sub(v___x_592_, v___x_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(v___x_591_);
v___x_596_ = lean_array_get(v___x_595_, v_b_582_, v___x_594_);
lean_dec(v___x_595_);
v___x_597_ = lean_unbox(v___x_596_);
lean_dec(v___x_596_);
if (v___x_597_ == 0)
{
lean_dec(v___x_594_);
v_a_585_ = v_b_582_;
goto v___jp_584_;
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_typeBackDeps_600_; lean_object* v_valueBackDeps_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_598_ = l_Lean_Meta_instInhabitedHaveInfo_default;
v___x_599_ = lean_array_get_borrowed(v___x_598_, v___x_580_, v___x_594_);
lean_dec(v___x_594_);
v_typeBackDeps_600_ = lean_ctor_get(v___x_599_, 0);
v_valueBackDeps_601_ = lean_ctor_get(v___x_599_, 1);
v___x_602_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_b_582_, v_typeBackDeps_600_);
v___x_603_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v___x_602_, v_valueBackDeps_601_);
v_a_585_ = v___x_603_;
goto v___jp_584_;
}
}
v___jp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = lean_nat_add(v_a_581_, v___x_586_);
lean_dec(v_a_581_);
v_a_581_ = v___x_587_;
v_b_582_ = v_a_585_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object* v_upperBound_604_, lean_object* v_numHaves_605_, lean_object* v___x_606_, lean_object* v_a_607_, lean_object* v_b_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_604_, v_numHaves_605_, v___x_606_, v_a_607_, v_b_608_);
lean_dec_ref(v___x_606_);
lean_dec(v_numHaves_605_);
lean_dec(v_upperBound_604_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object* v_info_611_, lean_object* v_init_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_haveInfo_618_; lean_object* v_numHaves_619_; uint8_t v___x_620_; lean_object* v___x_621_; lean_object* v_used_622_; lean_object* v___x_623_; lean_object* v_used_624_; lean_object* v___x_625_; 
v_haveInfo_618_ = lean_ctor_get(v_info_611_, 0);
v_numHaves_619_ = lean_array_get_size(v_haveInfo_618_);
v___x_620_ = 0;
v___x_621_ = lean_box(v___x_620_);
v_used_622_ = lean_mk_array(v_numHaves_619_, v___x_621_);
v___x_623_ = lean_unsigned_to_nat(0u);
v_used_624_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_used_622_, v_init_612_);
v___x_625_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_numHaves_619_, v_numHaves_619_, v_haveInfo_618_, v___x_623_, v_used_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object* v_info_626_, lean_object* v_init_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_626_, v_init_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec_ref(v_init_627_);
lean_dec_ref(v_info_626_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object* v_upperBound_634_, lean_object* v_numHaves_635_, lean_object* v___x_636_, lean_object* v_inst_637_, lean_object* v_R_638_, lean_object* v_a_639_, lean_object* v_b_640_, lean_object* v_c_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_634_, v_numHaves_635_, v___x_636_, v_a_639_, v_b_640_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object* v_upperBound_648_, lean_object* v_numHaves_649_, lean_object* v___x_650_, lean_object* v_inst_651_, lean_object* v_R_652_, lean_object* v_a_653_, lean_object* v_b_654_, lean_object* v_c_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(v_upperBound_648_, v_numHaves_649_, v___x_650_, v_inst_651_, v_R_652_, v_a_653_, v_b_654_, v_c_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec_ref(v___x_650_);
lean_dec(v_numHaves_649_);
lean_dec(v_upperBound_648_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object* v_info_664_, uint8_t v_keepUnused_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_bodyDeps_671_; lean_object* v_bodyTypeDeps_672_; lean_object* v___x_673_; 
v_bodyDeps_671_ = lean_ctor_get(v_info_664_, 1);
v_bodyTypeDeps_672_ = lean_ctor_get(v_info_664_, 2);
v___x_673_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_664_, v_bodyTypeDeps_672_, v_a_666_, v_a_667_, v_a_668_, v_a_669_);
if (lean_obj_tag(v___x_673_) == 0)
{
if (v_keepUnused_665_ == 0)
{
lean_object* v_a_674_; lean_object* v___x_675_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_673_, 1);
v___x_675_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_664_, v_bodyDeps_671_, v_a_666_, v_a_667_, v_a_668_, v_a_669_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_684_ == 0)
{
v___x_678_ = v___x_675_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_675_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_a_674_);
lean_ctor_set(v___x_680_, 1, v_a_676_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_680_);
v___x_682_ = v___x_678_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec(v_a_674_);
v_a_685_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_675_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_675_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_702_; 
v_a_693_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_702_ == 0)
{
v___x_695_ = v___x_673_;
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_673_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_697_ = ((lean_object*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0));
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v_a_693_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_698_);
v___x_700_ = v___x_695_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_a_703_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_673_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_673_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object* v_info_711_, lean_object* v_keepUnused_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
uint8_t v_keepUnused_boxed_718_; lean_object* v_res_719_; 
v_keepUnused_boxed_718_ = lean_unbox(v_keepUnused_712_);
v_res_719_ = l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(v_info_711_, v_keepUnused_boxed_718_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec_ref(v_info_711_);
return v_res_719_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_box(0);
v___x_724_ = ((lean_object*)(l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1));
v___x_725_ = l_Lean_Expr_const___override(v___x_724_, v___x_723_);
return v___x_725_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3(void){
_start:
{
uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = 0;
v___x_727_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2);
v___x_728_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
lean_ctor_set(v___x_728_, 2, v___x_727_);
lean_ctor_set(v___x_728_, 3, v___x_727_);
lean_ctor_set(v___x_728_, 4, v___x_727_);
lean_ctor_set_uint8(v___x_728_, sizeof(void*)*5, v___x_726_);
return v___x_728_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default(void){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3);
return v___x_729_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult(void){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object* v_level_747_, lean_object* v_exprType_748_, lean_object* v_e_749_, uint8_t v___x_750_, lean_object* v_toPure_751_, lean_object* v_xs_752_, lean_object* v_____do__lift_753_){
_start:
{
if (lean_obj_tag(v_____do__lift_753_) == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_proof_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_755_ = lean_box(0);
v___x_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_756_, 0, v_level_747_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = l_Lean_mkConst(v___x_754_, v___x_756_);
lean_inc_ref_n(v_e_749_, 3);
lean_inc_ref(v_exprType_748_);
v_proof_758_ = l_Lean_mkAppB(v___x_757_, v_exprType_748_, v_e_749_);
v___x_759_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_759_, 0, v_e_749_);
lean_ctor_set(v___x_759_, 1, v_exprType_748_);
lean_ctor_set(v___x_759_, 2, v_e_749_);
lean_ctor_set(v___x_759_, 3, v_e_749_);
lean_ctor_set(v___x_759_, 4, v_proof_758_);
lean_ctor_set_uint8(v___x_759_, sizeof(void*)*5, v___x_750_);
v___x_760_ = lean_apply_2(v_toPure_751_, lean_box(0), v___x_759_);
return v___x_760_;
}
else
{
lean_object* v_e_761_; lean_object* v_h_762_; lean_object* v_expr_763_; lean_object* v_proof_764_; lean_object* v___x_769_; uint8_t v___x_770_; 
lean_dec(v_level_747_);
v_e_761_ = lean_ctor_get(v_____do__lift_753_, 0);
v_h_762_ = lean_ctor_get(v_____do__lift_753_, 1);
v_expr_763_ = lean_expr_abstract(v_e_761_, v_xs_752_);
v_proof_764_ = lean_expr_abstract(v_h_762_, v_xs_752_);
lean_inc_ref(v_proof_764_);
v___x_769_ = l_Lean_Expr_cleanupAnnotations(v_proof_764_);
v___x_770_ = l_Lean_Expr_isApp(v___x_769_);
if (v___x_770_ == 0)
{
lean_dec_ref(v___x_769_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v_arg_771_ = lean_ctor_get(v___x_769_, 1);
lean_inc_ref(v_arg_771_);
v___x_772_ = l_Lean_Expr_appFnCleanup___redArg(v___x_769_);
v___x_773_ = l_Lean_Expr_isApp(v___x_772_);
if (v___x_773_ == 0)
{
lean_dec_ref(v___x_772_);
lean_dec_ref(v_arg_771_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_arg_774_ = lean_ctor_get(v___x_772_, 1);
lean_inc_ref(v_arg_774_);
v___x_775_ = l_Lean_Expr_appFnCleanup___redArg(v___x_772_);
v___x_776_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4));
v___x_777_ = l_Lean_Expr_isConstOf(v___x_775_, v___x_776_);
lean_dec_ref(v___x_775_);
if (v___x_777_ == 0)
{
lean_dec_ref(v_arg_774_);
lean_dec_ref(v_arg_771_);
goto v___jp_765_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_778_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_779_ = lean_unsigned_to_nat(3u);
v___x_780_ = l_Lean_Expr_isAppOfArity(v_arg_774_, v___x_778_, v___x_779_);
lean_dec_ref(v_arg_774_);
if (v___x_780_ == 0)
{
lean_dec_ref(v_arg_771_);
goto v___jp_765_;
}
else
{
lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_781_ = l_Lean_Expr_cleanupAnnotations(v_arg_771_);
v___x_782_ = l_Lean_Expr_isApp(v___x_781_);
if (v___x_782_ == 0)
{
lean_dec_ref(v___x_781_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_arg_783_ = lean_ctor_get(v___x_781_, 1);
lean_inc_ref(v_arg_783_);
v___x_784_ = l_Lean_Expr_appFnCleanup___redArg(v___x_781_);
v___x_785_ = l_Lean_Expr_isApp(v___x_784_);
if (v___x_785_ == 0)
{
lean_dec_ref(v___x_784_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
v_arg_786_ = lean_ctor_get(v___x_784_, 1);
lean_inc_ref(v_arg_786_);
v___x_787_ = l_Lean_Expr_appFnCleanup___redArg(v___x_784_);
v___x_788_ = l_Lean_Expr_isConstOf(v___x_787_, v___x_776_);
lean_dec_ref(v___x_787_);
if (v___x_788_ == 0)
{
lean_dec_ref(v_arg_786_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = l_Lean_Expr_cleanupAnnotations(v_arg_786_);
v___x_790_ = l_Lean_Expr_isApp(v___x_789_);
if (v___x_790_ == 0)
{
lean_dec_ref(v___x_789_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_arg_791_ = lean_ctor_get(v___x_789_, 1);
lean_inc_ref(v_arg_791_);
v___x_792_ = l_Lean_Expr_appFnCleanup___redArg(v___x_789_);
v___x_793_ = l_Lean_Expr_isApp(v___x_792_);
if (v___x_793_ == 0)
{
lean_dec_ref(v___x_792_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v_arg_794_; uint8_t v___y_796_; lean_object* v___x_799_; uint8_t v___x_800_; 
v_arg_794_ = lean_ctor_get(v___x_792_, 1);
lean_inc_ref(v_arg_794_);
v___x_799_ = l_Lean_Expr_appFnCleanup___redArg(v___x_792_);
v___x_800_ = l_Lean_Expr_isApp(v___x_799_);
if (v___x_800_ == 0)
{
lean_dec_ref(v___x_799_);
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_801_ = l_Lean_Expr_appFnCleanup___redArg(v___x_799_);
v___x_802_ = l_Lean_Expr_isConstOf(v___x_801_, v___x_778_);
lean_dec_ref(v___x_801_);
if (v___x_802_ == 0)
{
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v___x_803_; 
v___x_803_ = l_Lean_Expr_getAppFn(v_arg_783_);
if (lean_obj_tag(v___x_803_) == 4)
{
lean_object* v_declName_804_; 
v_declName_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_declName_804_);
lean_dec_ref_known(v___x_803_, 2);
if (lean_obj_tag(v_declName_804_) == 1)
{
lean_object* v_pre_805_; 
v_pre_805_ = lean_ctor_get(v_declName_804_, 0);
if (lean_obj_tag(v_pre_805_) == 0)
{
lean_object* v_str_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v_str_806_ = lean_ctor_get(v_declName_804_, 1);
lean_inc_ref(v_str_806_);
lean_dec_ref_known(v_declName_804_, 2);
v___x_807_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6));
v___x_808_ = lean_string_dec_eq(v_str_806_, v___x_807_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_809_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7));
v___x_810_ = lean_string_dec_eq(v_str_806_, v___x_809_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8));
v___x_812_ = lean_string_dec_eq(v_str_806_, v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9));
v___x_814_ = lean_string_dec_eq(v_str_806_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10));
v___x_816_ = lean_string_dec_eq(v_str_806_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_817_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11));
v___x_818_ = lean_string_dec_eq(v_str_806_, v___x_817_);
lean_dec_ref(v_str_806_);
if (v___x_818_ == 0)
{
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v_str_806_);
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v_str_806_);
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v_str_806_);
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v_str_806_);
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref(v_str_806_);
v___y_796_ = v___x_777_;
goto v___jp_795_;
}
}
else
{
lean_dec_ref_known(v_declName_804_, 2);
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
}
else
{
lean_dec(v_declName_804_);
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
}
else
{
lean_dec_ref(v___x_803_);
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
}
}
v___jp_795_:
{
if (v___y_796_ == 0)
{
lean_dec_ref(v_arg_794_);
lean_dec_ref(v_arg_791_);
lean_dec_ref(v_arg_783_);
goto v___jp_765_;
}
else
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec_ref(v_proof_764_);
lean_dec_ref(v_e_749_);
v___x_797_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_797_, 0, v_arg_791_);
lean_ctor_set(v___x_797_, 1, v_exprType_748_);
lean_ctor_set(v___x_797_, 2, v_arg_794_);
lean_ctor_set(v___x_797_, 3, v_expr_763_);
lean_ctor_set(v___x_797_, 4, v_arg_783_);
lean_ctor_set_uint8(v___x_797_, sizeof(void*)*5, v___x_777_);
v___x_798_ = lean_apply_2(v_toPure_751_, lean_box(0), v___x_797_);
return v___x_798_;
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
v___jp_765_:
{
uint8_t v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = 1;
lean_inc_ref(v_expr_763_);
v___x_767_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_767_, 0, v_expr_763_);
lean_ctor_set(v___x_767_, 1, v_exprType_748_);
lean_ctor_set(v___x_767_, 2, v_e_749_);
lean_ctor_set(v___x_767_, 3, v_expr_763_);
lean_ctor_set(v___x_767_, 4, v_proof_764_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*5, v___x_766_);
v___x_768_ = lean_apply_2(v_toPure_751_, lean_box(0), v___x_767_);
return v___x_768_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object* v_level_819_, lean_object* v_exprType_820_, lean_object* v_e_821_, lean_object* v___x_822_, lean_object* v_toPure_823_, lean_object* v_xs_824_, lean_object* v_____do__lift_825_){
_start:
{
uint8_t v___x_7849__boxed_826_; lean_object* v_res_827_; 
v___x_7849__boxed_826_ = lean_unbox(v___x_822_);
v_res_827_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(v_level_819_, v_exprType_820_, v_e_821_, v___x_7849__boxed_826_, v_toPure_823_, v_xs_824_, v_____do__lift_825_);
lean_dec(v_____do__lift_825_);
lean_dec_ref(v_xs_824_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object* v_inst_828_, lean_object* v_bodyType_829_, lean_object* v_xs_830_, lean_object* v_level_831_, lean_object* v_e_832_, uint8_t v___x_833_, lean_object* v_toPure_834_, lean_object* v_body_835_, lean_object* v_toBind_836_, lean_object* v_____r_837_){
_start:
{
lean_object* v_simp_838_; lean_object* v_exprType_839_; lean_object* v___x_840_; lean_object* v___f_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_simp_838_ = lean_ctor_get(v_inst_828_, 2);
lean_inc(v_simp_838_);
lean_dec_ref(v_inst_828_);
v_exprType_839_ = lean_expr_abstract(v_bodyType_829_, v_xs_830_);
v___x_840_ = lean_box(v___x_833_);
v___f_841_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_841_, 0, v_level_831_);
lean_closure_set(v___f_841_, 1, v_exprType_839_);
lean_closure_set(v___f_841_, 2, v_e_832_);
lean_closure_set(v___f_841_, 3, v___x_840_);
lean_closure_set(v___f_841_, 4, v_toPure_834_);
lean_closure_set(v___f_841_, 5, v_xs_830_);
v___x_842_ = lean_apply_1(v_simp_838_, v_body_835_);
v___x_843_ = lean_apply_4(v_toBind_836_, lean_box(0), lean_box(0), v___x_842_, v___f_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object* v_inst_844_, lean_object* v_bodyType_845_, lean_object* v_xs_846_, lean_object* v_level_847_, lean_object* v_e_848_, lean_object* v___x_849_, lean_object* v_toPure_850_, lean_object* v_body_851_, lean_object* v_toBind_852_, lean_object* v_____r_853_){
_start:
{
uint8_t v___x_8002__boxed_854_; lean_object* v_res_855_; 
v___x_8002__boxed_854_ = lean_unbox(v___x_849_);
v_res_855_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(v_inst_844_, v_bodyType_845_, v_xs_846_, v_level_847_, v_e_848_, v___x_8002__boxed_854_, v_toPure_850_, v_body_851_, v_toBind_852_, v_____r_853_);
lean_dec_ref(v_bodyType_845_);
return v_res_855_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2));
v___x_861_ = l_Lean_stringToMessageData(v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object* v_cls_862_, lean_object* v_body_863_, lean_object* v___x_864_, lean_object* v___x_865_, lean_object* v_toMonadRef_866_, lean_object* v___x_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_toCold_876_; lean_object* v_options_877_; uint8_t v_hasTrace_878_; 
v_toCold_876_ = lean_ctor_get(v___y_870_, 0);
v_options_877_ = lean_ctor_get(v_toCold_876_, 2);
v_hasTrace_878_ = lean_ctor_get_uint8(v_options_877_, sizeof(void*)*1);
if (v_hasTrace_878_ == 0)
{
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec_ref(v___x_867_);
lean_dec_ref(v_toMonadRef_866_);
lean_dec_ref(v___x_865_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v_body_863_);
lean_dec(v_cls_862_);
goto v___jp_873_;
}
else
{
lean_object* v_inheritedTraceOptions_879_; lean_object* v___x_880_; lean_object* v___x_881_; uint8_t v___x_882_; 
v_inheritedTraceOptions_879_ = lean_ctor_get(v_toCold_876_, 11);
v___x_880_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_862_);
v___x_881_ = l_Lean_Name_append(v___x_880_, v_cls_862_);
v___x_882_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_879_, v_options_877_, v___x_881_);
lean_dec(v___x_881_);
if (v___x_882_ == 0)
{
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec_ref(v___x_867_);
lean_dec_ref(v_toMonadRef_866_);
lean_dec_ref(v___x_865_);
lean_dec_ref(v___x_864_);
lean_dec_ref(v_body_863_);
lean_dec(v_cls_862_);
goto v___jp_873_;
}
else
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_7471__overap_886_; lean_object* v___x_887_; 
v___x_883_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3);
v___x_884_ = l_Lean_MessageData_ofExpr(v_body_863_);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_7471__overap_886_ = l_Lean_addTrace___redArg(v___x_864_, v___x_865_, v_toMonadRef_866_, v___x_867_, v_cls_862_, v___x_885_);
v___x_887_ = lean_apply_5(v___x_7471__overap_886_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, lean_box(0));
return v___x_887_;
}
}
v___jp_873_:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_box(0);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object* v_cls_888_, lean_object* v_body_889_, lean_object* v___x_890_, lean_object* v___x_891_, lean_object* v_toMonadRef_892_, lean_object* v___x_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(v_cls_888_, v_body_889_, v___x_890_, v___x_891_, v_toMonadRef_892_, v___x_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object* v_declName_902_, lean_object* v_type_903_, lean_object* v___y_904_, lean_object* v_value_905_, uint8_t v___y_906_, lean_object* v___x_907_, uint8_t v___y_908_, lean_object* v_toPure_909_, lean_object* v_us_910_, uint8_t v___x_911_, lean_object* v_rb_912_){
_start:
{
lean_object* v_expr_913_; lean_object* v_exprType_914_; lean_object* v_exprInit_915_; lean_object* v_exprResult_916_; lean_object* v_proof_917_; uint8_t v_modified_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_945_; 
v_expr_913_ = lean_ctor_get(v_rb_912_, 0);
v_exprType_914_ = lean_ctor_get(v_rb_912_, 1);
v_exprInit_915_ = lean_ctor_get(v_rb_912_, 2);
v_exprResult_916_ = lean_ctor_get(v_rb_912_, 3);
v_proof_917_ = lean_ctor_get(v_rb_912_, 4);
v_modified_918_ = lean_ctor_get_uint8(v_rb_912_, sizeof(void*)*5);
v_isSharedCheck_945_ = !lean_is_exclusive(v_rb_912_);
if (v_isSharedCheck_945_ == 0)
{
v___x_920_ = v_rb_912_;
v_isShared_921_ = v_isSharedCheck_945_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_proof_917_);
lean_inc(v_exprResult_916_);
lean_inc(v_exprInit_915_);
lean_inc(v_exprType_914_);
lean_inc(v_expr_913_);
lean_dec(v_rb_912_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_945_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
uint8_t v___x_922_; lean_object* v___x_923_; lean_object* v_expr_924_; lean_object* v___x_925_; lean_object* v_exprType_926_; lean_object* v___x_927_; lean_object* v_exprInit_928_; lean_object* v_exprResult_929_; 
v___x_922_ = 0;
lean_inc_ref_n(v_type_903_, 4);
lean_inc_n(v_declName_902_, 4);
v___x_923_ = l_Lean_mkLambda(v_declName_902_, v___x_922_, v_type_903_, v_expr_913_);
lean_inc_ref_n(v___y_904_, 3);
lean_inc_ref(v___x_923_);
v_expr_924_ = l_Lean_Expr_app___override(v___x_923_, v___y_904_);
v___x_925_ = l_Lean_mkLambda(v_declName_902_, v___x_922_, v_type_903_, v_exprType_914_);
lean_inc_ref(v___x_925_);
v_exprType_926_ = l_Lean_Expr_app___override(v___x_925_, v___y_904_);
v___x_927_ = l_Lean_mkLambda(v_declName_902_, v___x_922_, v_type_903_, v_exprInit_915_);
lean_inc_ref(v___x_927_);
v_exprInit_928_ = l_Lean_Expr_app___override(v___x_927_, v_value_905_);
v_exprResult_929_ = l_Lean_Expr_letE___override(v_declName_902_, v_type_903_, v___y_904_, v_exprResult_916_, v___y_906_);
if (v_modified_918_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_proof_932_; lean_object* v___x_934_; 
lean_dec_ref(v___x_927_);
lean_dec_ref(v___x_925_);
lean_dec_ref(v___x_923_);
lean_dec_ref(v_proof_917_);
lean_dec(v_us_910_);
lean_dec_ref(v___y_904_);
lean_dec_ref(v_type_903_);
lean_dec(v_declName_902_);
v___x_930_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_931_ = l_Lean_mkConst(v___x_930_, v___x_907_);
lean_inc_ref(v_expr_924_);
lean_inc_ref(v_exprType_926_);
v_proof_932_ = l_Lean_mkAppB(v___x_931_, v_exprType_926_, v_expr_924_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 4, v_proof_932_);
lean_ctor_set(v___x_920_, 3, v_exprResult_929_);
lean_ctor_set(v___x_920_, 2, v_exprInit_928_);
lean_ctor_set(v___x_920_, 1, v_exprType_926_);
lean_ctor_set(v___x_920_, 0, v_expr_924_);
v___x_934_ = v___x_920_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_expr_924_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_exprType_926_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v_exprInit_928_);
lean_ctor_set(v_reuseFailAlloc_936_, 3, v_exprResult_929_);
lean_ctor_set(v_reuseFailAlloc_936_, 4, v_proof_932_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; 
lean_ctor_set_uint8(v___x_934_, sizeof(void*)*5, v___y_908_);
v___x_935_ = lean_apply_2(v_toPure_909_, lean_box(0), v___x_934_);
return v___x_935_;
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_proof_940_; lean_object* v___x_942_; 
lean_dec(v___x_907_);
v___x_937_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0));
v___x_938_ = l_Lean_mkConst(v___x_937_, v_us_910_);
lean_inc_ref(v_type_903_);
v___x_939_ = l_Lean_mkLambda(v_declName_902_, v___x_922_, v_type_903_, v_proof_917_);
v_proof_940_ = l_Lean_mkApp6(v___x_938_, v_type_903_, v___x_925_, v___y_904_, v___x_927_, v___x_923_, v___x_939_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 4, v_proof_940_);
lean_ctor_set(v___x_920_, 3, v_exprResult_929_);
lean_ctor_set(v___x_920_, 2, v_exprInit_928_);
lean_ctor_set(v___x_920_, 1, v_exprType_926_);
lean_ctor_set(v___x_920_, 0, v_expr_924_);
v___x_942_ = v___x_920_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_expr_924_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_exprType_926_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_exprInit_928_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_exprResult_929_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v_proof_940_);
v___x_942_ = v_reuseFailAlloc_944_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; 
lean_ctor_set_uint8(v___x_942_, sizeof(void*)*5, v___x_911_);
v___x_943_ = lean_apply_2(v_toPure_909_, lean_box(0), v___x_942_);
return v___x_943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object* v_declName_946_, lean_object* v_type_947_, lean_object* v___y_948_, lean_object* v_value_949_, lean_object* v___y_950_, lean_object* v___x_951_, lean_object* v___y_952_, lean_object* v_toPure_953_, lean_object* v_us_954_, lean_object* v___x_955_, lean_object* v_rb_956_){
_start:
{
uint8_t v___y_8097__boxed_957_; uint8_t v___y_8099__boxed_958_; uint8_t v___x_8100__boxed_959_; lean_object* v_res_960_; 
v___y_8097__boxed_957_ = lean_unbox(v___y_950_);
v___y_8099__boxed_958_ = lean_unbox(v___y_952_);
v___x_8100__boxed_959_ = lean_unbox(v___x_955_);
v_res_960_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(v_declName_946_, v_type_947_, v___y_948_, v_value_949_, v___y_8097__boxed_957_, v___x_951_, v___y_8099__boxed_958_, v_toPure_953_, v_us_954_, v___x_8100__boxed_959_, v_rb_956_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object* v___f_961_, lean_object* v_____x_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = lean_apply_1(v___f_961_, v_____x_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object* v___x_968_, lean_object* v_declName_969_, lean_object* v_type_970_, lean_object* v_value_971_, lean_object* v_us_972_, lean_object* v___x_973_, uint8_t v___x_974_, lean_object* v_toPure_975_, lean_object* v_rb_976_){
_start:
{
lean_object* v_expr_977_; lean_object* v_exprType_978_; lean_object* v_exprInit_979_; lean_object* v_exprResult_980_; lean_object* v_proof_981_; uint8_t v_modified_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1010_; 
v_expr_977_ = lean_ctor_get(v_rb_976_, 0);
v_exprType_978_ = lean_ctor_get(v_rb_976_, 1);
v_exprInit_979_ = lean_ctor_get(v_rb_976_, 2);
v_exprResult_980_ = lean_ctor_get(v_rb_976_, 3);
v_proof_981_ = lean_ctor_get(v_rb_976_, 4);
v_modified_982_ = lean_ctor_get_uint8(v_rb_976_, sizeof(void*)*5);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_rb_976_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_984_ = v_rb_976_;
v_isShared_985_ = v_isSharedCheck_1010_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_proof_981_);
lean_inc(v_exprResult_980_);
lean_inc(v_exprInit_979_);
lean_inc(v_exprType_978_);
lean_inc(v_expr_977_);
lean_dec(v_rb_976_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1010_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v_expr_986_; lean_object* v_exprType_987_; uint8_t v___x_988_; lean_object* v___x_989_; lean_object* v_exprInit_990_; lean_object* v_exprResult_991_; 
v_expr_986_ = lean_expr_lower_loose_bvars(v_expr_977_, v___x_968_, v___x_968_);
lean_dec_ref(v_expr_977_);
v_exprType_987_ = lean_expr_lower_loose_bvars(v_exprType_978_, v___x_968_, v___x_968_);
lean_dec_ref(v_exprType_978_);
v___x_988_ = 0;
lean_inc_ref(v_type_970_);
lean_inc(v_declName_969_);
v___x_989_ = l_Lean_mkLambda(v_declName_969_, v___x_988_, v_type_970_, v_exprInit_979_);
lean_inc_ref(v_value_971_);
lean_inc_ref(v___x_989_);
v_exprInit_990_ = l_Lean_Expr_app___override(v___x_989_, v_value_971_);
v_exprResult_991_ = lean_expr_lower_loose_bvars(v_exprResult_980_, v___x_968_, v___x_968_);
lean_dec_ref(v_exprResult_980_);
if (v_modified_982_ == 0)
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_proof_997_; lean_object* v___x_999_; 
lean_dec_ref(v___x_989_);
lean_dec_ref(v_proof_981_);
lean_dec(v_declName_969_);
v___x_992_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0));
v___x_993_ = l_Lean_mkConst(v___x_992_, v_us_972_);
v___x_994_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_995_ = l_Lean_mkConst(v___x_994_, v___x_973_);
lean_inc_ref_n(v_expr_986_, 3);
lean_inc_ref_n(v_exprType_987_, 2);
v___x_996_ = l_Lean_mkAppB(v___x_995_, v_exprType_987_, v_expr_986_);
v_proof_997_ = l_Lean_mkApp6(v___x_993_, v_type_970_, v_exprType_987_, v_value_971_, v_expr_986_, v_expr_986_, v___x_996_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v_proof_997_);
lean_ctor_set(v___x_984_, 3, v_exprResult_991_);
lean_ctor_set(v___x_984_, 2, v_exprInit_990_);
lean_ctor_set(v___x_984_, 1, v_exprType_987_);
lean_ctor_set(v___x_984_, 0, v_expr_986_);
v___x_999_ = v___x_984_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_expr_986_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_exprType_987_);
lean_ctor_set(v_reuseFailAlloc_1001_, 2, v_exprInit_990_);
lean_ctor_set(v_reuseFailAlloc_1001_, 3, v_exprResult_991_);
lean_ctor_set(v_reuseFailAlloc_1001_, 4, v_proof_997_);
v___x_999_ = v_reuseFailAlloc_1001_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; 
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*5, v___x_974_);
v___x_1000_ = lean_apply_2(v_toPure_975_, lean_box(0), v___x_999_);
return v___x_1000_;
}
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_proof_1005_; lean_object* v___x_1007_; 
lean_dec(v___x_973_);
v___x_1002_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1));
v___x_1003_ = l_Lean_mkConst(v___x_1002_, v_us_972_);
lean_inc_ref(v_type_970_);
v___x_1004_ = l_Lean_mkLambda(v_declName_969_, v___x_988_, v_type_970_, v_proof_981_);
lean_inc_ref(v_expr_986_);
lean_inc_ref(v_exprType_987_);
v_proof_1005_ = l_Lean_mkApp6(v___x_1003_, v_type_970_, v_exprType_987_, v_value_971_, v___x_989_, v_expr_986_, v___x_1004_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v_proof_1005_);
lean_ctor_set(v___x_984_, 3, v_exprResult_991_);
lean_ctor_set(v___x_984_, 2, v_exprInit_990_);
lean_ctor_set(v___x_984_, 1, v_exprType_987_);
lean_ctor_set(v___x_984_, 0, v_expr_986_);
v___x_1007_ = v___x_984_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_expr_986_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_exprType_987_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v_exprInit_990_);
lean_ctor_set(v_reuseFailAlloc_1009_, 3, v_exprResult_991_);
lean_ctor_set(v_reuseFailAlloc_1009_, 4, v_proof_1005_);
v___x_1007_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
lean_object* v___x_1008_; 
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*5, v___x_974_);
v___x_1008_ = lean_apply_2(v_toPure_975_, lean_box(0), v___x_1007_);
return v___x_1008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object* v___x_1011_, lean_object* v_declName_1012_, lean_object* v_type_1013_, lean_object* v_value_1014_, lean_object* v_us_1015_, lean_object* v___x_1016_, lean_object* v___x_1017_, lean_object* v_toPure_1018_, lean_object* v_rb_1019_){
_start:
{
uint8_t v___x_8187__boxed_1020_; lean_object* v_res_1021_; 
v___x_8187__boxed_1020_ = lean_unbox(v___x_1017_);
v_res_1021_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(v___x_1011_, v_declName_1012_, v_type_1013_, v_value_1014_, v_us_1015_, v___x_1016_, v___x_8187__boxed_1020_, v_toPure_1018_, v_rb_1019_);
lean_dec(v___x_1011_);
return v_res_1021_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2));
v___x_1027_ = l_Lean_stringToMessageData(v___x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object* v_cls_1028_, lean_object* v_declName_1029_, lean_object* v_val_1030_, lean_object* v___x_1031_, lean_object* v___x_1032_, lean_object* v_toMonadRef_1033_, lean_object* v___x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_toCold_1043_; lean_object* v_options_1044_; uint8_t v_hasTrace_1045_; 
v_toCold_1043_ = lean_ctor_get(v___y_1037_, 0);
v_options_1044_ = lean_ctor_get(v_toCold_1043_, 2);
v_hasTrace_1045_ = lean_ctor_get_uint8(v_options_1044_, sizeof(void*)*1);
if (v_hasTrace_1045_ == 0)
{
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec_ref(v___x_1031_);
lean_dec_ref(v_val_1030_);
lean_dec(v_declName_1029_);
lean_dec(v_cls_1028_);
goto v___jp_1040_;
}
else
{
lean_object* v_inheritedTraceOptions_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; uint8_t v___x_1049_; 
v_inheritedTraceOptions_1046_ = lean_ctor_get(v_toCold_1043_, 11);
v___x_1047_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1028_);
v___x_1048_ = l_Lean_Name_append(v___x_1047_, v_cls_1028_);
v___x_1049_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1046_, v_options_1044_, v___x_1048_);
lean_dec(v___x_1048_);
if (v___x_1049_ == 0)
{
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec_ref(v___x_1031_);
lean_dec_ref(v_val_1030_);
lean_dec(v_declName_1029_);
lean_dec(v_cls_1028_);
goto v___jp_1040_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_7815__overap_1057_; lean_object* v___x_1058_; 
v___x_1050_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1);
v___x_1051_ = l_Lean_MessageData_ofName(v_declName_1029_);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = l_Lean_MessageData_ofExpr(v_val_1030_);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_7815__overap_1057_ = l_Lean_addTrace___redArg(v___x_1031_, v___x_1032_, v_toMonadRef_1033_, v___x_1034_, v_cls_1028_, v___x_1056_);
v___x_1058_ = lean_apply_5(v___x_7815__overap_1057_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, lean_box(0));
return v___x_1058_;
}
}
v___jp_1040_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_box(0);
v___x_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object* v_cls_1059_, lean_object* v_declName_1060_, lean_object* v_val_1061_, lean_object* v___x_1062_, lean_object* v___x_1063_, lean_object* v_toMonadRef_1064_, lean_object* v___x_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(v_cls_1059_, v_declName_1060_, v_val_1061_, v___x_1062_, v___x_1063_, v_toMonadRef_1064_, v___x_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
return v_res_1071_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0));
v___x_1074_ = l_Lean_stringToMessageData(v___x_1073_);
return v___x_1074_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2));
v___x_1077_ = l_Lean_stringToMessageData(v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object* v_cls_1078_, lean_object* v_declName_1079_, lean_object* v_val_1080_, lean_object* v_val_x27_1081_, lean_object* v___x_1082_, lean_object* v___x_1083_, lean_object* v_toMonadRef_1084_, lean_object* v___x_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_toCold_1094_; lean_object* v_options_1095_; uint8_t v_hasTrace_1096_; 
v_toCold_1094_ = lean_ctor_get(v___y_1088_, 0);
v_options_1095_ = lean_ctor_get(v_toCold_1094_, 2);
v_hasTrace_1096_ = lean_ctor_get_uint8(v_options_1095_, sizeof(void*)*1);
if (v_hasTrace_1096_ == 0)
{
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v___x_1085_);
lean_dec_ref(v_toMonadRef_1084_);
lean_dec_ref(v___x_1083_);
lean_dec_ref(v___x_1082_);
lean_dec_ref(v_val_x27_1081_);
lean_dec_ref(v_val_1080_);
lean_dec(v_declName_1079_);
lean_dec(v_cls_1078_);
goto v___jp_1091_;
}
else
{
lean_object* v_inheritedTraceOptions_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v_inheritedTraceOptions_1097_ = lean_ctor_get(v_toCold_1094_, 11);
v___x_1098_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1078_);
v___x_1099_ = l_Lean_Name_append(v___x_1098_, v_cls_1078_);
v___x_1100_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1097_, v_options_1095_, v___x_1099_);
lean_dec(v___x_1099_);
if (v___x_1100_ == 0)
{
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v___x_1085_);
lean_dec_ref(v_toMonadRef_1084_);
lean_dec_ref(v___x_1083_);
lean_dec_ref(v___x_1082_);
lean_dec_ref(v_val_x27_1081_);
lean_dec_ref(v_val_1080_);
lean_dec(v_declName_1079_);
lean_dec(v_cls_1078_);
goto v___jp_1091_;
}
else
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_7559__overap_1112_; lean_object* v___x_1113_; 
v___x_1101_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1);
v___x_1102_ = l_Lean_MessageData_ofName(v_declName_1079_);
v___x_1103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = l_Lean_MessageData_ofExpr(v_val_1080_);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = l_Lean_MessageData_ofExpr(v_val_x27_1081_);
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_7559__overap_1112_ = l_Lean_addTrace___redArg(v___x_1082_, v___x_1083_, v_toMonadRef_1084_, v___x_1085_, v_cls_1078_, v___x_1111_);
v___x_1113_ = lean_apply_5(v___x_7559__overap_1112_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, lean_box(0));
return v___x_1113_;
}
}
v___jp_1091_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object* v_cls_1114_, lean_object* v_declName_1115_, lean_object* v_val_1116_, lean_object* v_val_x27_1117_, lean_object* v___x_1118_, lean_object* v___x_1119_, lean_object* v_toMonadRef_1120_, lean_object* v___x_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(v_cls_1114_, v_declName_1115_, v_val_1116_, v_val_x27_1117_, v___x_1118_, v___x_1119_, v_toMonadRef_1120_, v___x_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object* v_e_1128_, lean_object* v_xs_1129_, lean_object* v_h_1130_, uint8_t v___x_1131_, lean_object* v_toPure_1132_, lean_object* v_toBind_1133_, lean_object* v___f_1134_, lean_object* v_____r_1135_){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1136_ = lean_expr_abstract(v_e_1128_, v_xs_1129_);
v___x_1137_ = lean_expr_abstract(v_h_1130_, v_xs_1129_);
v___x_1138_ = lean_box(v___x_1131_);
v___x_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
lean_ctor_set(v___x_1139_, 1, v___x_1137_);
v___x_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1136_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_apply_2(v_toPure_1132_, lean_box(0), v___x_1140_);
v___x_1142_ = lean_apply_4(v_toBind_1133_, lean_box(0), lean_box(0), v___x_1141_, v___f_1134_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object* v_e_1143_, lean_object* v_xs_1144_, lean_object* v_h_1145_, lean_object* v___x_1146_, lean_object* v_toPure_1147_, lean_object* v_toBind_1148_, lean_object* v___f_1149_, lean_object* v_____r_1150_){
_start:
{
uint8_t v___x_8419__boxed_1151_; lean_object* v_res_1152_; 
v___x_8419__boxed_1151_ = lean_unbox(v___x_1146_);
v_res_1152_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(v_e_1143_, v_xs_1144_, v_h_1145_, v___x_8419__boxed_1151_, v_toPure_1147_, v_toBind_1148_, v___f_1149_, v_____r_1150_);
lean_dec_ref(v_h_1145_);
lean_dec_ref(v_xs_1144_);
lean_dec_ref(v_e_1143_);
return v_res_1152_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0));
v___x_1155_ = l_Lean_stringToMessageData(v___x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object* v_cls_1156_, lean_object* v_declName_1157_, lean_object* v_val_1158_, lean_object* v_e_1159_, lean_object* v___x_1160_, lean_object* v___x_1161_, lean_object* v_toMonadRef_1162_, lean_object* v___x_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_toCold_1172_; lean_object* v_options_1173_; uint8_t v_hasTrace_1174_; 
v_toCold_1172_ = lean_ctor_get(v___y_1166_, 0);
v_options_1173_ = lean_ctor_get(v_toCold_1172_, 2);
v_hasTrace_1174_ = lean_ctor_get_uint8(v_options_1173_, sizeof(void*)*1);
if (v_hasTrace_1174_ == 0)
{
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec_ref(v___x_1163_);
lean_dec_ref(v_toMonadRef_1162_);
lean_dec_ref(v___x_1161_);
lean_dec_ref(v___x_1160_);
lean_dec_ref(v_e_1159_);
lean_dec_ref(v_val_1158_);
lean_dec(v_declName_1157_);
lean_dec(v_cls_1156_);
goto v___jp_1169_;
}
else
{
lean_object* v_inheritedTraceOptions_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v_inheritedTraceOptions_1175_ = lean_ctor_get(v_toCold_1172_, 11);
v___x_1176_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1156_);
v___x_1177_ = l_Lean_Name_append(v___x_1176_, v_cls_1156_);
v___x_1178_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1175_, v_options_1173_, v___x_1177_);
lean_dec(v___x_1177_);
if (v___x_1178_ == 0)
{
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec_ref(v___x_1163_);
lean_dec_ref(v_toMonadRef_1162_);
lean_dec_ref(v___x_1161_);
lean_dec_ref(v___x_1160_);
lean_dec_ref(v_e_1159_);
lean_dec_ref(v_val_1158_);
lean_dec(v_declName_1157_);
lean_dec(v_cls_1156_);
goto v___jp_1169_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_7709__overap_1190_; lean_object* v___x_1191_; 
v___x_1179_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1);
v___x_1180_ = l_Lean_MessageData_ofName(v_declName_1157_);
v___x_1181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = l_Lean_MessageData_ofExpr(v_val_1158_);
v___x_1185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
v___x_1188_ = l_Lean_MessageData_ofExpr(v_e_1159_);
v___x_1189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_7709__overap_1190_ = l_Lean_addTrace___redArg(v___x_1160_, v___x_1161_, v_toMonadRef_1162_, v___x_1163_, v_cls_1156_, v___x_1189_);
v___x_1191_ = lean_apply_5(v___x_7709__overap_1190_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, lean_box(0));
return v___x_1191_;
}
}
v___jp_1169_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_box(0);
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
return v___x_1171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object* v_cls_1192_, lean_object* v_declName_1193_, lean_object* v_val_1194_, lean_object* v_e_1195_, lean_object* v___x_1196_, lean_object* v___x_1197_, lean_object* v_toMonadRef_1198_, lean_object* v___x_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(v_cls_1192_, v_declName_1193_, v_val_1194_, v_e_1195_, v___x_1196_, v___x_1197_, v_toMonadRef_1198_, v___x_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object* v_level_1215_, lean_object* v___x_1216_, lean_object* v_type_1217_, lean_object* v_value_1218_, uint8_t v___x_1219_, lean_object* v_toPure_1220_, lean_object* v_toBind_1221_, lean_object* v___f_1222_, lean_object* v_xs_1223_, uint8_t v___x_1224_, lean_object* v___f_1225_, lean_object* v_declName_1226_, lean_object* v_val_1227_, lean_object* v___x_1228_, lean_object* v___x_1229_, lean_object* v_toMonadRef_1230_, lean_object* v___x_1231_, lean_object* v_inst_1232_, lean_object* v_____do__lift_1233_){
_start:
{
if (lean_obj_tag(v_____do__lift_1233_) == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_dec(v_inst_1232_);
lean_dec_ref(v___x_1231_);
lean_dec_ref(v_toMonadRef_1230_);
lean_dec_ref(v___x_1229_);
lean_dec_ref(v___x_1228_);
lean_dec_ref(v_val_1227_);
lean_dec(v_declName_1226_);
lean_dec(v___f_1225_);
lean_dec_ref(v_xs_1223_);
v___x_1234_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1235_, 0, v_level_1215_);
lean_ctor_set(v___x_1235_, 1, v___x_1216_);
v___x_1236_ = l_Lean_mkConst(v___x_1234_, v___x_1235_);
lean_inc_ref(v_value_1218_);
v___x_1237_ = l_Lean_mkAppB(v___x_1236_, v_type_1217_, v_value_1218_);
v___x_1238_ = lean_box(v___x_1219_);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v___x_1237_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v_value_1218_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_apply_2(v_toPure_1220_, lean_box(0), v___x_1240_);
v___x_1242_ = lean_apply_4(v_toBind_1221_, lean_box(0), lean_box(0), v___x_1241_, v___f_1222_);
return v___x_1242_;
}
else
{
lean_object* v_e_1243_; lean_object* v_h_1244_; lean_object* v___x_1245_; lean_object* v___f_1246_; lean_object* v_cls_1247_; lean_object* v___f_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec(v___f_1222_);
lean_dec_ref(v_value_1218_);
lean_dec_ref(v_type_1217_);
lean_dec(v___x_1216_);
lean_dec(v_level_1215_);
v_e_1243_ = lean_ctor_get(v_____do__lift_1233_, 0);
lean_inc_ref_n(v_e_1243_, 2);
v_h_1244_ = lean_ctor_get(v_____do__lift_1233_, 1);
lean_inc_ref(v_h_1244_);
lean_dec_ref_known(v_____do__lift_1233_, 2);
v___x_1245_ = lean_box(v___x_1224_);
lean_inc(v_toBind_1221_);
v___f_1246_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_1246_, 0, v_e_1243_);
lean_closure_set(v___f_1246_, 1, v_xs_1223_);
lean_closure_set(v___f_1246_, 2, v_h_1244_);
lean_closure_set(v___f_1246_, 3, v___x_1245_);
lean_closure_set(v___f_1246_, 4, v_toPure_1220_);
lean_closure_set(v___f_1246_, 5, v_toBind_1221_);
lean_closure_set(v___f_1246_, 6, v___f_1225_);
v_cls_1247_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1248_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed), 13, 8);
lean_closure_set(v___f_1248_, 0, v_cls_1247_);
lean_closure_set(v___f_1248_, 1, v_declName_1226_);
lean_closure_set(v___f_1248_, 2, v_val_1227_);
lean_closure_set(v___f_1248_, 3, v_e_1243_);
lean_closure_set(v___f_1248_, 4, v___x_1228_);
lean_closure_set(v___f_1248_, 5, v___x_1229_);
lean_closure_set(v___f_1248_, 6, v_toMonadRef_1230_);
lean_closure_set(v___f_1248_, 7, v___x_1231_);
v___x_1249_ = lean_apply_2(v_inst_1232_, lean_box(0), v___f_1248_);
v___x_1250_ = lean_apply_4(v_toBind_1221_, lean_box(0), lean_box(0), v___x_1249_, v___f_1246_);
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_level_1251_ = _args[0];
lean_object* v___x_1252_ = _args[1];
lean_object* v_type_1253_ = _args[2];
lean_object* v_value_1254_ = _args[3];
lean_object* v___x_1255_ = _args[4];
lean_object* v_toPure_1256_ = _args[5];
lean_object* v_toBind_1257_ = _args[6];
lean_object* v___f_1258_ = _args[7];
lean_object* v_xs_1259_ = _args[8];
lean_object* v___x_1260_ = _args[9];
lean_object* v___f_1261_ = _args[10];
lean_object* v_declName_1262_ = _args[11];
lean_object* v_val_1263_ = _args[12];
lean_object* v___x_1264_ = _args[13];
lean_object* v___x_1265_ = _args[14];
lean_object* v_toMonadRef_1266_ = _args[15];
lean_object* v___x_1267_ = _args[16];
lean_object* v_inst_1268_ = _args[17];
lean_object* v_____do__lift_1269_ = _args[18];
_start:
{
uint8_t v___x_8559__boxed_1270_; uint8_t v___x_8561__boxed_1271_; lean_object* v_res_1272_; 
v___x_8559__boxed_1270_ = lean_unbox(v___x_1255_);
v___x_8561__boxed_1271_ = lean_unbox(v___x_1260_);
v_res_1272_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(v_level_1251_, v___x_1252_, v_type_1253_, v_value_1254_, v___x_8559__boxed_1270_, v_toPure_1256_, v_toBind_1257_, v___f_1258_, v_xs_1259_, v___x_8561__boxed_1271_, v___f_1261_, v_declName_1262_, v_val_1263_, v___x_1264_, v___x_1265_, v_toMonadRef_1266_, v___x_1267_, v_inst_1268_, v_____do__lift_1269_);
return v_res_1272_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5));
v___x_1283_ = lean_unsigned_to_nat(8u);
v___x_1284_ = lean_unsigned_to_nat(287u);
v___x_1285_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1286_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1287_ = l_mkPanicMessageWithDecl(v___x_1286_, v___x_1285_, v___x_1284_, v___x_1283_, v___x_1282_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object* v_declName_1288_, lean_object* v_type_1289_, lean_object* v_fst_1290_, lean_object* v___x_1291_, lean_object* v_value_1292_, uint8_t v___x_1293_, uint8_t v_fst_1294_, lean_object* v___x_1295_, uint8_t v___x_1296_, lean_object* v_toPure_1297_, lean_object* v_us_1298_, lean_object* v_snd_1299_, lean_object* v___x_1300_, lean_object* v_rb_1301_){
_start:
{
lean_object* v_expr_1302_; lean_object* v_exprType_1303_; lean_object* v_exprInit_1304_; lean_object* v_exprResult_1305_; lean_object* v_proof_1306_; uint8_t v_modified_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1352_; 
v_expr_1302_ = lean_ctor_get(v_rb_1301_, 0);
v_exprType_1303_ = lean_ctor_get(v_rb_1301_, 1);
v_exprInit_1304_ = lean_ctor_get(v_rb_1301_, 2);
v_exprResult_1305_ = lean_ctor_get(v_rb_1301_, 3);
v_proof_1306_ = lean_ctor_get(v_rb_1301_, 4);
v_modified_1307_ = lean_ctor_get_uint8(v_rb_1301_, sizeof(void*)*5);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_rb_1301_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1309_ = v_rb_1301_;
v_isShared_1310_ = v_isSharedCheck_1352_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_proof_1306_);
lean_inc(v_exprResult_1305_);
lean_inc(v_exprInit_1304_);
lean_inc(v_exprType_1303_);
lean_inc(v_expr_1302_);
lean_dec(v_rb_1301_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1352_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; uint8_t v___x_1312_; 
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_expr_has_loose_bvar(v_exprType_1303_, v___x_1311_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; lean_object* v___x_1314_; lean_object* v_expr_1315_; lean_object* v_exprType_1316_; lean_object* v___x_1317_; lean_object* v_exprInit_1318_; lean_object* v_exprResult_1319_; 
v___x_1313_ = 0;
lean_inc_ref_n(v_type_1289_, 3);
lean_inc_n(v_declName_1288_, 3);
v___x_1314_ = l_Lean_mkLambda(v_declName_1288_, v___x_1313_, v_type_1289_, v_expr_1302_);
lean_inc_ref_n(v_fst_1290_, 2);
lean_inc_ref(v___x_1314_);
v_expr_1315_ = l_Lean_Expr_app___override(v___x_1314_, v_fst_1290_);
v_exprType_1316_ = lean_expr_lower_loose_bvars(v_exprType_1303_, v___x_1291_, v___x_1291_);
lean_dec_ref(v_exprType_1303_);
v___x_1317_ = l_Lean_mkLambda(v_declName_1288_, v___x_1313_, v_type_1289_, v_exprInit_1304_);
lean_inc_ref(v_value_1292_);
lean_inc_ref(v___x_1317_);
v_exprInit_1318_ = l_Lean_Expr_app___override(v___x_1317_, v_value_1292_);
v_exprResult_1319_ = l_Lean_Expr_letE___override(v_declName_1288_, v_type_1289_, v_fst_1290_, v_exprResult_1305_, v___x_1293_);
if (v_fst_1294_ == 0)
{
lean_dec_ref(v_snd_1299_);
lean_dec_ref(v_fst_1290_);
if (v_modified_1307_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v_proof_1322_; lean_object* v___x_1324_; 
lean_dec_ref(v___x_1317_);
lean_dec_ref(v___x_1314_);
lean_dec_ref(v_proof_1306_);
lean_dec(v_us_1298_);
lean_dec_ref(v_value_1292_);
lean_dec_ref(v_type_1289_);
lean_dec(v_declName_1288_);
v___x_1320_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1321_ = l_Lean_mkConst(v___x_1320_, v___x_1295_);
lean_inc_ref(v_expr_1315_);
lean_inc_ref(v_exprType_1316_);
v_proof_1322_ = l_Lean_mkAppB(v___x_1321_, v_exprType_1316_, v_expr_1315_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 4, v_proof_1322_);
lean_ctor_set(v___x_1309_, 3, v_exprResult_1319_);
lean_ctor_set(v___x_1309_, 2, v_exprInit_1318_);
lean_ctor_set(v___x_1309_, 1, v_exprType_1316_);
lean_ctor_set(v___x_1309_, 0, v_expr_1315_);
v___x_1324_ = v___x_1309_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_expr_1315_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_exprType_1316_);
lean_ctor_set(v_reuseFailAlloc_1326_, 2, v_exprInit_1318_);
lean_ctor_set(v_reuseFailAlloc_1326_, 3, v_exprResult_1319_);
lean_ctor_set(v_reuseFailAlloc_1326_, 4, v_proof_1322_);
v___x_1324_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
lean_ctor_set_uint8(v___x_1324_, sizeof(void*)*5, v___x_1296_);
v___x_1325_ = lean_apply_2(v_toPure_1297_, lean_box(0), v___x_1324_);
return v___x_1325_;
}
}
else
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v_proof_1330_; lean_object* v___x_1332_; 
lean_dec(v___x_1295_);
v___x_1327_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0));
v___x_1328_ = l_Lean_mkConst(v___x_1327_, v_us_1298_);
lean_inc_ref(v_type_1289_);
v___x_1329_ = l_Lean_mkLambda(v_declName_1288_, v___x_1313_, v_type_1289_, v_proof_1306_);
lean_inc_ref(v_exprType_1316_);
v_proof_1330_ = l_Lean_mkApp6(v___x_1328_, v_type_1289_, v_exprType_1316_, v_value_1292_, v___x_1317_, v___x_1314_, v___x_1329_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 4, v_proof_1330_);
lean_ctor_set(v___x_1309_, 3, v_exprResult_1319_);
lean_ctor_set(v___x_1309_, 2, v_exprInit_1318_);
lean_ctor_set(v___x_1309_, 1, v_exprType_1316_);
lean_ctor_set(v___x_1309_, 0, v_expr_1315_);
v___x_1332_ = v___x_1309_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_expr_1315_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_exprType_1316_);
lean_ctor_set(v_reuseFailAlloc_1334_, 2, v_exprInit_1318_);
lean_ctor_set(v_reuseFailAlloc_1334_, 3, v_exprResult_1319_);
lean_ctor_set(v_reuseFailAlloc_1334_, 4, v_proof_1330_);
v___x_1332_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; 
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*5, v___x_1293_);
v___x_1333_ = lean_apply_2(v_toPure_1297_, lean_box(0), v___x_1332_);
return v___x_1333_;
}
}
}
else
{
lean_dec(v___x_1295_);
if (v_modified_1307_ == 0)
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_proof_1337_; lean_object* v___x_1339_; 
lean_dec_ref(v___x_1314_);
lean_dec_ref(v_proof_1306_);
lean_dec(v_declName_1288_);
v___x_1335_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1));
v___x_1336_ = l_Lean_mkConst(v___x_1335_, v_us_1298_);
lean_inc_ref(v_exprType_1316_);
v_proof_1337_ = l_Lean_mkApp6(v___x_1336_, v_type_1289_, v_exprType_1316_, v_value_1292_, v_fst_1290_, v___x_1317_, v_snd_1299_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 4, v_proof_1337_);
lean_ctor_set(v___x_1309_, 3, v_exprResult_1319_);
lean_ctor_set(v___x_1309_, 2, v_exprInit_1318_);
lean_ctor_set(v___x_1309_, 1, v_exprType_1316_);
lean_ctor_set(v___x_1309_, 0, v_expr_1315_);
v___x_1339_ = v___x_1309_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_expr_1315_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_exprType_1316_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v_exprInit_1318_);
lean_ctor_set(v_reuseFailAlloc_1341_, 3, v_exprResult_1319_);
lean_ctor_set(v_reuseFailAlloc_1341_, 4, v_proof_1337_);
v___x_1339_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1340_; 
lean_ctor_set_uint8(v___x_1339_, sizeof(void*)*5, v___x_1293_);
v___x_1340_ = lean_apply_2(v_toPure_1297_, lean_box(0), v___x_1339_);
return v___x_1340_;
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v_proof_1345_; lean_object* v___x_1347_; 
v___x_1342_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2));
v___x_1343_ = l_Lean_mkConst(v___x_1342_, v_us_1298_);
lean_inc_ref(v_type_1289_);
v___x_1344_ = l_Lean_mkLambda(v_declName_1288_, v___x_1313_, v_type_1289_, v_proof_1306_);
lean_inc_ref(v_exprType_1316_);
v_proof_1345_ = l_Lean_mkApp8(v___x_1343_, v_type_1289_, v_exprType_1316_, v_value_1292_, v_fst_1290_, v___x_1317_, v___x_1314_, v_snd_1299_, v___x_1344_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 4, v_proof_1345_);
lean_ctor_set(v___x_1309_, 3, v_exprResult_1319_);
lean_ctor_set(v___x_1309_, 2, v_exprInit_1318_);
lean_ctor_set(v___x_1309_, 1, v_exprType_1316_);
lean_ctor_set(v___x_1309_, 0, v_expr_1315_);
v___x_1347_ = v___x_1309_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_expr_1315_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_exprType_1316_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v_exprInit_1318_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v_exprResult_1319_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v_proof_1345_);
v___x_1347_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1348_; 
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*5, v___x_1293_);
v___x_1348_ = lean_apply_2(v_toPure_1297_, lean_box(0), v___x_1347_);
return v___x_1348_;
}
}
}
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_del_object(v___x_1309_);
lean_dec_ref(v_proof_1306_);
lean_dec_ref(v_exprResult_1305_);
lean_dec_ref(v_exprInit_1304_);
lean_dec_ref(v_exprType_1303_);
lean_dec_ref(v_expr_1302_);
lean_dec_ref(v_snd_1299_);
lean_dec(v_us_1298_);
lean_dec(v_toPure_1297_);
lean_dec(v___x_1295_);
lean_dec_ref(v_value_1292_);
lean_dec_ref(v_fst_1290_);
lean_dec_ref(v_type_1289_);
lean_dec(v_declName_1288_);
v___x_1350_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6);
v___x_1351_ = l_panic___redArg(v___x_1300_, v___x_1350_);
return v___x_1351_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object* v_declName_1353_, lean_object* v_type_1354_, lean_object* v_fst_1355_, lean_object* v___x_1356_, lean_object* v_value_1357_, lean_object* v___x_1358_, lean_object* v_fst_1359_, lean_object* v___x_1360_, lean_object* v___x_1361_, lean_object* v_toPure_1362_, lean_object* v_us_1363_, lean_object* v_snd_1364_, lean_object* v___x_1365_, lean_object* v_rb_1366_){
_start:
{
uint8_t v___x_8681__boxed_1367_; uint8_t v_fst_8682__boxed_1368_; uint8_t v___x_8684__boxed_1369_; lean_object* v_res_1370_; 
v___x_8681__boxed_1367_ = lean_unbox(v___x_1358_);
v_fst_8682__boxed_1368_ = lean_unbox(v_fst_1359_);
v___x_8684__boxed_1369_ = lean_unbox(v___x_1361_);
v_res_1370_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(v_declName_1353_, v_type_1354_, v_fst_1355_, v___x_1356_, v_value_1357_, v___x_8681__boxed_1367_, v_fst_8682__boxed_1368_, v___x_1360_, v___x_8684__boxed_1369_, v_toPure_1362_, v_us_1363_, v_snd_1364_, v___x_1365_, v_rb_1366_);
lean_dec(v___x_1365_);
lean_dec(v___x_1356_);
return v_res_1370_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_instMonadEIO___redArg();
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0);
v___x_1376_ = l_StateRefT_x27_instMonad___redArg(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1382_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1383_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1384_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1383_, v___x_1382_);
return v___x_1384_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9(void){
_start:
{
lean_object* v___x_1386_; lean_object* v___f_1387_; lean_object* v___x_1388_; 
v___x_1386_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8);
v___f_1387_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___x_1388_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1387_, v___x_1386_);
return v___x_1388_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1390_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1391_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1392_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11));
v___x_1393_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1392_, v___x_1391_, v___x_1390_);
return v___x_1393_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___f_1396_; lean_object* v___f_1397_; lean_object* v___x_1398_; 
v___x_1395_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12);
v___f_1396_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___f_1397_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10));
v___x_1398_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1397_, v___f_1396_, v___x_1395_);
return v___x_1398_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1400_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14));
v___x_1401_ = lean_unsigned_to_nat(34u);
v___x_1402_ = lean_unsigned_to_nat(217u);
v___x_1403_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1404_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1405_ = l_mkPanicMessageWithDecl(v___x_1404_, v___x_1403_, v___x_1402_, v___x_1401_, v___x_1400_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object* v_declName_1406_, lean_object* v_type_1407_, lean_object* v_value_1408_, uint8_t v___y_1409_, lean_object* v___x_1410_, lean_object* v_toPure_1411_, lean_object* v_us_1412_, uint8_t v___x_1413_, lean_object* v_decl_1414_, lean_object* v_x_1415_, lean_object* v_i_1416_, lean_object* v_xs_1417_, lean_object* v_inst_1418_, lean_object* v_inst_1419_, lean_object* v_inst_1420_, lean_object* v_inst_1421_, lean_object* v_info_1422_, lean_object* v_fixed_1423_, lean_object* v_used_1424_, lean_object* v_body_1425_, lean_object* v_toBind_1426_, lean_object* v_withNewLemmas_1427_, lean_object* v_val_x27_1428_, lean_object* v_val_1429_, uint8_t v___x_1430_, lean_object* v_____r_1431_){
_start:
{
uint8_t v___y_1433_; lean_object* v___y_1434_; uint8_t v___y_1451_; uint8_t v___x_1453_; 
v___x_1453_ = lean_expr_eqv(v_val_1429_, v_val_x27_1428_);
if (v___x_1453_ == 0)
{
v___y_1451_ = v___y_1409_;
goto v___jp_1450_;
}
else
{
v___y_1451_ = v___x_1430_;
goto v___jp_1450_;
}
v___jp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___f_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1435_ = lean_box(v___y_1409_);
v___x_1436_ = lean_box(v___y_1433_);
v___x_1437_ = lean_box(v___x_1413_);
v___f_1438_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_1438_, 0, v_declName_1406_);
lean_closure_set(v___f_1438_, 1, v_type_1407_);
lean_closure_set(v___f_1438_, 2, v___y_1434_);
lean_closure_set(v___f_1438_, 3, v_value_1408_);
lean_closure_set(v___f_1438_, 4, v___x_1435_);
lean_closure_set(v___f_1438_, 5, v___x_1410_);
lean_closure_set(v___f_1438_, 6, v___x_1436_);
lean_closure_set(v___f_1438_, 7, v_toPure_1411_);
lean_closure_set(v___f_1438_, 8, v_us_1412_);
lean_closure_set(v___f_1438_, 9, v___x_1437_);
v___x_1439_ = lean_box(0);
v___x_1440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_decl_1414_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_unsigned_to_nat(1u);
v___x_1442_ = lean_mk_empty_array_with_capacity(v___x_1441_);
lean_inc_ref(v_x_1415_);
v___x_1443_ = lean_array_push(v___x_1442_, v_x_1415_);
v___x_1444_ = lean_nat_add(v_i_1416_, v___x_1441_);
v___x_1445_ = lean_array_push(v_xs_1417_, v_x_1415_);
lean_inc_ref(v_inst_1420_);
lean_inc_ref(v_inst_1418_);
v___x_1446_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1418_, v_inst_1419_, v_inst_1420_, v_inst_1421_, v_info_1422_, v_fixed_1423_, v_used_1424_, v_body_1425_, v___x_1444_, v___x_1445_);
v___x_1447_ = lean_apply_4(v_toBind_1426_, lean_box(0), lean_box(0), v___x_1446_, v___f_1438_);
v___x_1448_ = lean_apply_3(v_withNewLemmas_1427_, lean_box(0), v___x_1443_, v___x_1447_);
v___x_1449_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1420_, v_inst_1418_, v___x_1440_, v___x_1448_);
return v___x_1449_;
}
v___jp_1450_:
{
if (v___y_1451_ == 0)
{
lean_inc_ref(v_value_1408_);
v___y_1433_ = v___y_1451_;
v___y_1434_ = v_value_1408_;
goto v___jp_1432_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_expr_abstract(v_val_x27_1428_, v_xs_1417_);
v___y_1433_ = v___y_1451_;
v___y_1434_ = v___x_1452_;
goto v___jp_1432_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_declName_1454_ = _args[0];
lean_object* v_type_1455_ = _args[1];
lean_object* v_value_1456_ = _args[2];
lean_object* v___y_1457_ = _args[3];
lean_object* v___x_1458_ = _args[4];
lean_object* v_toPure_1459_ = _args[5];
lean_object* v_us_1460_ = _args[6];
lean_object* v___x_1461_ = _args[7];
lean_object* v_decl_1462_ = _args[8];
lean_object* v_x_1463_ = _args[9];
lean_object* v_i_1464_ = _args[10];
lean_object* v_xs_1465_ = _args[11];
lean_object* v_inst_1466_ = _args[12];
lean_object* v_inst_1467_ = _args[13];
lean_object* v_inst_1468_ = _args[14];
lean_object* v_inst_1469_ = _args[15];
lean_object* v_info_1470_ = _args[16];
lean_object* v_fixed_1471_ = _args[17];
lean_object* v_used_1472_ = _args[18];
lean_object* v_body_1473_ = _args[19];
lean_object* v_toBind_1474_ = _args[20];
lean_object* v_withNewLemmas_1475_ = _args[21];
lean_object* v_val_x27_1476_ = _args[22];
lean_object* v_val_1477_ = _args[23];
lean_object* v___x_1478_ = _args[24];
lean_object* v_____r_1479_ = _args[25];
_start:
{
uint8_t v___y_8942__boxed_1480_; uint8_t v___x_8944__boxed_1481_; uint8_t v___x_8950__boxed_1482_; lean_object* v_res_1483_; 
v___y_8942__boxed_1480_ = lean_unbox(v___y_1457_);
v___x_8944__boxed_1481_ = lean_unbox(v___x_1461_);
v___x_8950__boxed_1482_ = lean_unbox(v___x_1478_);
v_res_1483_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(v_declName_1454_, v_type_1455_, v_value_1456_, v___y_8942__boxed_1480_, v___x_1458_, v_toPure_1459_, v_us_1460_, v___x_8944__boxed_1481_, v_decl_1462_, v_x_1463_, v_i_1464_, v_xs_1465_, v_inst_1466_, v_inst_1467_, v_inst_1468_, v_inst_1469_, v_info_1470_, v_fixed_1471_, v_used_1472_, v_body_1473_, v_toBind_1474_, v_withNewLemmas_1475_, v_val_x27_1476_, v_val_1477_, v___x_8950__boxed_1482_, v_____r_1479_);
lean_dec_ref(v_val_1477_);
lean_dec_ref(v_val_x27_1476_);
lean_dec(v_i_1464_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object* v_declName_1484_, lean_object* v_type_1485_, lean_object* v_value_1486_, uint8_t v___y_1487_, lean_object* v___x_1488_, lean_object* v_toPure_1489_, lean_object* v_us_1490_, uint8_t v___x_1491_, lean_object* v_decl_1492_, lean_object* v_x_1493_, lean_object* v_i_1494_, lean_object* v_xs_1495_, lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_info_1500_, lean_object* v_fixed_1501_, lean_object* v_used_1502_, lean_object* v_body_1503_, lean_object* v_toBind_1504_, lean_object* v_withNewLemmas_1505_, lean_object* v_val_1506_, uint8_t v___x_1507_, lean_object* v___x_1508_, lean_object* v___x_1509_, lean_object* v_toMonadRef_1510_, lean_object* v___x_1511_, lean_object* v_val_x27_1512_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___f_1516_; lean_object* v_cls_1517_; lean_object* v___f_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1513_ = lean_box(v___y_1487_);
v___x_1514_ = lean_box(v___x_1491_);
v___x_1515_ = lean_box(v___x_1507_);
lean_inc_ref(v_val_1506_);
lean_inc_ref(v_val_x27_1512_);
lean_inc(v_toBind_1504_);
lean_inc(v_inst_1497_);
lean_inc(v_declName_1484_);
v___f_1516_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed), 26, 25);
lean_closure_set(v___f_1516_, 0, v_declName_1484_);
lean_closure_set(v___f_1516_, 1, v_type_1485_);
lean_closure_set(v___f_1516_, 2, v_value_1486_);
lean_closure_set(v___f_1516_, 3, v___x_1513_);
lean_closure_set(v___f_1516_, 4, v___x_1488_);
lean_closure_set(v___f_1516_, 5, v_toPure_1489_);
lean_closure_set(v___f_1516_, 6, v_us_1490_);
lean_closure_set(v___f_1516_, 7, v___x_1514_);
lean_closure_set(v___f_1516_, 8, v_decl_1492_);
lean_closure_set(v___f_1516_, 9, v_x_1493_);
lean_closure_set(v___f_1516_, 10, v_i_1494_);
lean_closure_set(v___f_1516_, 11, v_xs_1495_);
lean_closure_set(v___f_1516_, 12, v_inst_1496_);
lean_closure_set(v___f_1516_, 13, v_inst_1497_);
lean_closure_set(v___f_1516_, 14, v_inst_1498_);
lean_closure_set(v___f_1516_, 15, v_inst_1499_);
lean_closure_set(v___f_1516_, 16, v_info_1500_);
lean_closure_set(v___f_1516_, 17, v_fixed_1501_);
lean_closure_set(v___f_1516_, 18, v_used_1502_);
lean_closure_set(v___f_1516_, 19, v_body_1503_);
lean_closure_set(v___f_1516_, 20, v_toBind_1504_);
lean_closure_set(v___f_1516_, 21, v_withNewLemmas_1505_);
lean_closure_set(v___f_1516_, 22, v_val_x27_1512_);
lean_closure_set(v___f_1516_, 23, v_val_1506_);
lean_closure_set(v___f_1516_, 24, v___x_1515_);
v_cls_1517_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1518_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_1518_, 0, v_cls_1517_);
lean_closure_set(v___f_1518_, 1, v_declName_1484_);
lean_closure_set(v___f_1518_, 2, v_val_1506_);
lean_closure_set(v___f_1518_, 3, v_val_x27_1512_);
lean_closure_set(v___f_1518_, 4, v___x_1508_);
lean_closure_set(v___f_1518_, 5, v___x_1509_);
lean_closure_set(v___f_1518_, 6, v_toMonadRef_1510_);
lean_closure_set(v___f_1518_, 7, v___x_1511_);
v___x_1519_ = lean_apply_2(v_inst_1497_, lean_box(0), v___f_1518_);
v___x_1520_ = lean_apply_4(v_toBind_1504_, lean_box(0), lean_box(0), v___x_1519_, v___f_1516_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_declName_1521_ = _args[0];
lean_object* v_type_1522_ = _args[1];
lean_object* v_value_1523_ = _args[2];
lean_object* v___y_1524_ = _args[3];
lean_object* v___x_1525_ = _args[4];
lean_object* v_toPure_1526_ = _args[5];
lean_object* v_us_1527_ = _args[6];
lean_object* v___x_1528_ = _args[7];
lean_object* v_decl_1529_ = _args[8];
lean_object* v_x_1530_ = _args[9];
lean_object* v_i_1531_ = _args[10];
lean_object* v_xs_1532_ = _args[11];
lean_object* v_inst_1533_ = _args[12];
lean_object* v_inst_1534_ = _args[13];
lean_object* v_inst_1535_ = _args[14];
lean_object* v_inst_1536_ = _args[15];
lean_object* v_info_1537_ = _args[16];
lean_object* v_fixed_1538_ = _args[17];
lean_object* v_used_1539_ = _args[18];
lean_object* v_body_1540_ = _args[19];
lean_object* v_toBind_1541_ = _args[20];
lean_object* v_withNewLemmas_1542_ = _args[21];
lean_object* v_val_1543_ = _args[22];
lean_object* v___x_1544_ = _args[23];
lean_object* v___x_1545_ = _args[24];
lean_object* v___x_1546_ = _args[25];
lean_object* v_toMonadRef_1547_ = _args[26];
lean_object* v___x_1548_ = _args[27];
lean_object* v_val_x27_1549_ = _args[28];
_start:
{
uint8_t v___y_8889__boxed_1550_; uint8_t v___x_8891__boxed_1551_; uint8_t v___x_8897__boxed_1552_; lean_object* v_res_1553_; 
v___y_8889__boxed_1550_ = lean_unbox(v___y_1524_);
v___x_8891__boxed_1551_ = lean_unbox(v___x_1528_);
v___x_8897__boxed_1552_ = lean_unbox(v___x_1544_);
v_res_1553_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(v_declName_1521_, v_type_1522_, v_value_1523_, v___y_8889__boxed_1550_, v___x_1525_, v_toPure_1526_, v_us_1527_, v___x_8891__boxed_1551_, v_decl_1529_, v_x_1530_, v_i_1531_, v_xs_1532_, v_inst_1533_, v_inst_1534_, v_inst_1535_, v_inst_1536_, v_info_1537_, v_fixed_1538_, v_used_1539_, v_body_1540_, v_toBind_1541_, v_withNewLemmas_1542_, v_val_1543_, v___x_8897__boxed_1552_, v___x_1545_, v___x_1546_, v_toMonadRef_1547_, v___x_1548_, v_val_x27_1549_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object* v_decl_1554_, lean_object* v_declName_1555_, lean_object* v_type_1556_, lean_object* v_value_1557_, uint8_t v___x_1558_, lean_object* v___x_1559_, uint8_t v___x_1560_, lean_object* v_toPure_1561_, lean_object* v_us_1562_, lean_object* v___x_1563_, lean_object* v_x_1564_, lean_object* v_i_1565_, lean_object* v_xs_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_inst_1570_, lean_object* v_info_1571_, lean_object* v_fixed_1572_, lean_object* v_used_1573_, lean_object* v_body_1574_, lean_object* v_toBind_1575_, lean_object* v_withNewLemmas_1576_, lean_object* v_____x_1577_){
_start:
{
lean_object* v_snd_1578_; lean_object* v_fst_1579_; lean_object* v_fst_1580_; lean_object* v_snd_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1601_; 
v_snd_1578_ = lean_ctor_get(v_____x_1577_, 1);
lean_inc(v_snd_1578_);
v_fst_1579_ = lean_ctor_get(v_____x_1577_, 0);
lean_inc(v_fst_1579_);
lean_dec_ref(v_____x_1577_);
v_fst_1580_ = lean_ctor_get(v_snd_1578_, 0);
v_snd_1581_ = lean_ctor_get(v_snd_1578_, 1);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_snd_1578_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1583_ = v_snd_1578_;
v_isShared_1584_ = v_isSharedCheck_1601_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_snd_1581_);
lean_inc(v_fst_1580_);
lean_dec(v_snd_1578_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1601_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_box(0);
if (v_isShared_1584_ == 0)
{
lean_ctor_set_tag(v___x_1583_, 1);
lean_ctor_set(v___x_1583_, 1, v___x_1585_);
lean_ctor_set(v___x_1583_, 0, v_decl_1554_);
v___x_1587_ = v___x_1583_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_decl_1554_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___f_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1588_ = lean_unsigned_to_nat(1u);
v___x_1589_ = lean_box(v___x_1558_);
v___x_1590_ = lean_box(v___x_1560_);
v___f_1591_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed), 14, 13);
lean_closure_set(v___f_1591_, 0, v_declName_1555_);
lean_closure_set(v___f_1591_, 1, v_type_1556_);
lean_closure_set(v___f_1591_, 2, v_fst_1579_);
lean_closure_set(v___f_1591_, 3, v___x_1588_);
lean_closure_set(v___f_1591_, 4, v_value_1557_);
lean_closure_set(v___f_1591_, 5, v___x_1589_);
lean_closure_set(v___f_1591_, 6, v_fst_1580_);
lean_closure_set(v___f_1591_, 7, v___x_1559_);
lean_closure_set(v___f_1591_, 8, v___x_1590_);
lean_closure_set(v___f_1591_, 9, v_toPure_1561_);
lean_closure_set(v___f_1591_, 10, v_us_1562_);
lean_closure_set(v___f_1591_, 11, v_snd_1581_);
lean_closure_set(v___f_1591_, 12, v___x_1563_);
v___x_1592_ = lean_mk_empty_array_with_capacity(v___x_1588_);
lean_inc_ref(v_x_1564_);
v___x_1593_ = lean_array_push(v___x_1592_, v_x_1564_);
v___x_1594_ = lean_nat_add(v_i_1565_, v___x_1588_);
v___x_1595_ = lean_array_push(v_xs_1566_, v_x_1564_);
lean_inc_ref(v_inst_1569_);
lean_inc_ref(v_inst_1567_);
v___x_1596_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1567_, v_inst_1568_, v_inst_1569_, v_inst_1570_, v_info_1571_, v_fixed_1572_, v_used_1573_, v_body_1574_, v___x_1594_, v___x_1595_);
v___x_1597_ = lean_apply_4(v_toBind_1575_, lean_box(0), lean_box(0), v___x_1596_, v___f_1591_);
v___x_1598_ = lean_apply_3(v_withNewLemmas_1576_, lean_box(0), v___x_1593_, v___x_1597_);
v___x_1599_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1569_, v_inst_1567_, v___x_1587_, v___x_1598_);
return v___x_1599_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_decl_1602_ = _args[0];
lean_object* v_declName_1603_ = _args[1];
lean_object* v_type_1604_ = _args[2];
lean_object* v_value_1605_ = _args[3];
lean_object* v___x_1606_ = _args[4];
lean_object* v___x_1607_ = _args[5];
lean_object* v___x_1608_ = _args[6];
lean_object* v_toPure_1609_ = _args[7];
lean_object* v_us_1610_ = _args[8];
lean_object* v___x_1611_ = _args[9];
lean_object* v_x_1612_ = _args[10];
lean_object* v_i_1613_ = _args[11];
lean_object* v_xs_1614_ = _args[12];
lean_object* v_inst_1615_ = _args[13];
lean_object* v_inst_1616_ = _args[14];
lean_object* v_inst_1617_ = _args[15];
lean_object* v_inst_1618_ = _args[16];
lean_object* v_info_1619_ = _args[17];
lean_object* v_fixed_1620_ = _args[18];
lean_object* v_used_1621_ = _args[19];
lean_object* v_body_1622_ = _args[20];
lean_object* v_toBind_1623_ = _args[21];
lean_object* v_withNewLemmas_1624_ = _args[22];
lean_object* v_____x_1625_ = _args[23];
_start:
{
uint8_t v___x_8913__boxed_1626_; uint8_t v___x_8915__boxed_1627_; lean_object* v_res_1628_; 
v___x_8913__boxed_1626_ = lean_unbox(v___x_1606_);
v___x_8915__boxed_1627_ = lean_unbox(v___x_1608_);
v_res_1628_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(v_decl_1602_, v_declName_1603_, v_type_1604_, v_value_1605_, v___x_8913__boxed_1626_, v___x_1607_, v___x_8915__boxed_1627_, v_toPure_1609_, v_us_1610_, v___x_1611_, v_x_1612_, v_i_1613_, v_xs_1614_, v_inst_1615_, v_inst_1616_, v_inst_1617_, v_inst_1618_, v_info_1619_, v_fixed_1620_, v_used_1621_, v_body_1622_, v_toBind_1623_, v_withNewLemmas_1624_, v_____x_1625_);
lean_dec(v_i_1613_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object** _args){
lean_object* v___x_1629_ = _args[0];
lean_object* v_declName_1630_ = _args[1];
lean_object* v_type_1631_ = _args[2];
lean_object* v_value_1632_ = _args[3];
lean_object* v_us_1633_ = _args[4];
lean_object* v___x_1634_ = _args[5];
lean_object* v___x_1635_ = _args[6];
lean_object* v_toPure_1636_ = _args[7];
lean_object* v_i_1637_ = _args[8];
lean_object* v_xs_1638_ = _args[9];
lean_object* v_inst_1639_ = _args[10];
lean_object* v_inst_1640_ = _args[11];
lean_object* v_inst_1641_ = _args[12];
lean_object* v_inst_1642_ = _args[13];
lean_object* v_info_1643_ = _args[14];
lean_object* v_fixed_1644_ = _args[15];
lean_object* v_used_1645_ = _args[16];
lean_object* v_body_1646_ = _args[17];
lean_object* v_toBind_1647_ = _args[18];
lean_object* v_____r_1648_ = _args[19];
_start:
{
uint8_t v___x_8872__boxed_1649_; lean_object* v_res_1650_; 
v___x_8872__boxed_1649_ = lean_unbox(v___x_1635_);
v_res_1650_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(v___x_1629_, v_declName_1630_, v_type_1631_, v_value_1632_, v_us_1633_, v___x_1634_, v___x_8872__boxed_1649_, v_toPure_1636_, v_i_1637_, v_xs_1638_, v_inst_1639_, v_inst_1640_, v_inst_1641_, v_inst_1642_, v_info_1643_, v_fixed_1644_, v_used_1645_, v_body_1646_, v_toBind_1647_, v_____r_1648_);
lean_dec(v_i_1637_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object* v_inst_1651_, lean_object* v_inst_1652_, lean_object* v_inst_1653_, lean_object* v_inst_1654_, lean_object* v_info_1655_, lean_object* v_fixed_1656_, lean_object* v_used_1657_, lean_object* v_e_1658_, lean_object* v_i_1659_, lean_object* v_xs_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v_toApplicative_1662_; lean_object* v_toFunctor_1663_; lean_object* v_toSeq_1664_; lean_object* v_toSeqLeft_1665_; lean_object* v_toSeqRight_1666_; lean_object* v___f_1667_; lean_object* v___f_1668_; lean_object* v___f_1669_; lean_object* v___f_1670_; lean_object* v___x_1671_; lean_object* v___f_1672_; lean_object* v___f_1673_; lean_object* v___f_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v_toApplicative_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1779_; 
v___x_1661_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1);
v_toApplicative_1662_ = lean_ctor_get(v___x_1661_, 0);
v_toFunctor_1663_ = lean_ctor_get(v_toApplicative_1662_, 0);
v_toSeq_1664_ = lean_ctor_get(v_toApplicative_1662_, 2);
v_toSeqLeft_1665_ = lean_ctor_get(v_toApplicative_1662_, 3);
v_toSeqRight_1666_ = lean_ctor_get(v_toApplicative_1662_, 4);
v___f_1667_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2));
v___f_1668_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1663_, 2);
v___f_1669_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1669_, 0, v_toFunctor_1663_);
v___f_1670_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1670_, 0, v_toFunctor_1663_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___f_1669_);
lean_ctor_set(v___x_1671_, 1, v___f_1670_);
lean_inc(v_toSeqRight_1666_);
v___f_1672_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1672_, 0, v_toSeqRight_1666_);
lean_inc(v_toSeqLeft_1665_);
v___f_1673_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1673_, 0, v_toSeqLeft_1665_);
lean_inc(v_toSeq_1664_);
v___f_1674_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1674_, 0, v_toSeq_1664_);
v___x_1675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1671_);
lean_ctor_set(v___x_1675_, 1, v___f_1667_);
lean_ctor_set(v___x_1675_, 2, v___f_1674_);
lean_ctor_set(v___x_1675_, 3, v___f_1673_);
lean_ctor_set(v___x_1675_, 4, v___f_1672_);
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
lean_ctor_set(v___x_1676_, 1, v___f_1668_);
v___x_1677_ = l_StateRefT_x27_instMonad___redArg(v___x_1676_);
v_toApplicative_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1779_ == 0)
{
lean_object* v_unused_1780_; 
v_unused_1780_ = lean_ctor_get(v___x_1677_, 1);
lean_dec(v_unused_1780_);
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1779_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_toApplicative_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1779_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v_toFunctor_1682_; lean_object* v_toSeq_1683_; lean_object* v_toSeqLeft_1684_; lean_object* v_toSeqRight_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1777_; 
v_toFunctor_1682_ = lean_ctor_get(v_toApplicative_1678_, 0);
v_toSeq_1683_ = lean_ctor_get(v_toApplicative_1678_, 2);
v_toSeqLeft_1684_ = lean_ctor_get(v_toApplicative_1678_, 3);
v_toSeqRight_1685_ = lean_ctor_get(v_toApplicative_1678_, 4);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_toApplicative_1678_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; 
v_unused_1778_ = lean_ctor_get(v_toApplicative_1678_, 1);
lean_dec(v_unused_1778_);
v___x_1687_ = v_toApplicative_1678_;
v_isShared_1688_ = v_isSharedCheck_1777_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_toSeqRight_1685_);
lean_inc(v_toSeqLeft_1684_);
lean_inc(v_toSeq_1683_);
lean_inc(v_toFunctor_1682_);
lean_dec(v_toApplicative_1678_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1777_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___f_1689_; lean_object* v___f_1690_; lean_object* v___f_1691_; lean_object* v___f_1692_; lean_object* v___x_1693_; lean_object* v___f_1694_; lean_object* v___f_1695_; lean_object* v___f_1696_; lean_object* v___x_1698_; 
v___f_1689_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4));
v___f_1690_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5));
lean_inc_ref(v_toFunctor_1682_);
v___f_1691_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1691_, 0, v_toFunctor_1682_);
v___f_1692_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1692_, 0, v_toFunctor_1682_);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___f_1691_);
lean_ctor_set(v___x_1693_, 1, v___f_1692_);
v___f_1694_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1694_, 0, v_toSeqRight_1685_);
v___f_1695_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1695_, 0, v_toSeqLeft_1684_);
v___f_1696_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1696_, 0, v_toSeq_1683_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v___f_1694_);
lean_ctor_set(v___x_1687_, 3, v___f_1695_);
lean_ctor_set(v___x_1687_, 2, v___f_1696_);
lean_ctor_set(v___x_1687_, 1, v___f_1689_);
lean_ctor_set(v___x_1687_, 0, v___x_1693_);
v___x_1698_ = v___x_1687_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1693_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___f_1689_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v___f_1696_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v___f_1695_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v___f_1694_);
v___x_1698_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
lean_object* v___x_1700_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___f_1690_);
lean_ctor_set(v___x_1680_, 0, v___x_1698_);
v___x_1700_ = v___x_1680_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v___f_1690_);
v___x_1700_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v_toApplicative_1703_; lean_object* v_toMonadRef_1704_; lean_object* v_haveInfo_1705_; lean_object* v_body_1706_; lean_object* v_bodyType_1707_; lean_object* v_level_1708_; lean_object* v_toBind_1709_; lean_object* v_toPure_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1701_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9);
v___x_1702_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13);
v_toApplicative_1703_ = lean_ctor_get(v_inst_1651_, 0);
v_toMonadRef_1704_ = lean_ctor_get(v___x_1702_, 0);
v_haveInfo_1705_ = lean_ctor_get(v_info_1655_, 0);
v_body_1706_ = lean_ctor_get(v_info_1655_, 3);
v_bodyType_1707_ = lean_ctor_get(v_info_1655_, 4);
v_level_1708_ = lean_ctor_get(v_info_1655_, 5);
v_toBind_1709_ = lean_ctor_get(v_inst_1651_, 1);
lean_inc(v_toBind_1709_);
v_toPure_1710_ = lean_ctor_get(v_toApplicative_1703_, 1);
lean_inc(v_toPure_1710_);
v___x_1711_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1712_ = lean_array_get_size(v_haveInfo_1705_);
v___x_1713_ = lean_nat_dec_lt(v_i_1659_, v___x_1712_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; lean_object* v___f_1715_; lean_object* v_cls_1716_; lean_object* v___f_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_inc(v_level_1708_);
lean_inc_ref(v_bodyType_1707_);
lean_inc_ref_n(v_body_1706_, 2);
lean_dec(v_i_1659_);
lean_dec_ref(v_used_1657_);
lean_dec_ref(v_fixed_1656_);
lean_dec_ref(v_info_1655_);
lean_dec_ref(v_inst_1653_);
lean_dec_ref(v_inst_1651_);
v___x_1714_ = lean_box(v___x_1713_);
lean_inc(v_toBind_1709_);
v___f_1715_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_1715_, 0, v_inst_1654_);
lean_closure_set(v___f_1715_, 1, v_bodyType_1707_);
lean_closure_set(v___f_1715_, 2, v_xs_1660_);
lean_closure_set(v___f_1715_, 3, v_level_1708_);
lean_closure_set(v___f_1715_, 4, v_e_1658_);
lean_closure_set(v___f_1715_, 5, v___x_1714_);
lean_closure_set(v___f_1715_, 6, v_toPure_1710_);
lean_closure_set(v___f_1715_, 7, v_body_1706_);
lean_closure_set(v___f_1715_, 8, v_toBind_1709_);
v_cls_1716_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1704_);
v___f_1717_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed), 11, 6);
lean_closure_set(v___f_1717_, 0, v_cls_1716_);
lean_closure_set(v___f_1717_, 1, v_body_1706_);
lean_closure_set(v___f_1717_, 2, v___x_1700_);
lean_closure_set(v___f_1717_, 3, v___x_1701_);
lean_closure_set(v___f_1717_, 4, v_toMonadRef_1704_);
lean_closure_set(v___f_1717_, 5, v___x_1711_);
v___x_1718_ = lean_apply_2(v_inst_1652_, lean_box(0), v___f_1717_);
v___x_1719_ = lean_apply_4(v_toBind_1709_, lean_box(0), lean_box(0), v___x_1718_, v___f_1715_);
return v___x_1719_;
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
lean_inc_ref(v_inst_1651_);
v___x_1721_ = l_instInhabitedOfMonad___redArg(v_inst_1651_, v___x_1720_);
if (lean_obj_tag(v_e_1658_) == 8)
{
uint8_t v_nondep_1725_; 
v_nondep_1725_ = lean_ctor_get_uint8(v_e_1658_, sizeof(void*)*4 + 8);
if (v_nondep_1725_ == 1)
{
lean_object* v_declName_1726_; lean_object* v_type_1727_; lean_object* v_value_1728_; lean_object* v_body_1729_; lean_object* v_hinfo_1730_; lean_object* v_decl_1731_; lean_object* v_level_1732_; lean_object* v_x_1733_; lean_object* v_val_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v_us_1737_; uint8_t v___y_1739_; uint8_t v___y_1740_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v_declName_1726_ = lean_ctor_get(v_e_1658_, 0);
lean_inc(v_declName_1726_);
v_type_1727_ = lean_ctor_get(v_e_1658_, 1);
lean_inc_ref(v_type_1727_);
v_value_1728_ = lean_ctor_get(v_e_1658_, 2);
lean_inc_ref(v_value_1728_);
v_body_1729_ = lean_ctor_get(v_e_1658_, 3);
lean_inc_ref(v_body_1729_);
lean_dec_ref_known(v_e_1658_, 4);
v_hinfo_1730_ = lean_array_fget_borrowed(v_haveInfo_1705_, v_i_1659_);
v_decl_1731_ = lean_ctor_get(v_hinfo_1730_, 2);
v_level_1732_ = lean_ctor_get(v_hinfo_1730_, 3);
lean_inc_ref(v_decl_1731_);
v_x_1733_ = l_Lean_LocalDecl_toExpr(v_decl_1731_);
v_val_1734_ = l_Lean_LocalDecl_value(v_decl_1731_, v___x_1713_);
v___x_1735_ = lean_box(0);
lean_inc(v_level_1708_);
v___x_1736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1736_, 0, v_level_1708_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
lean_inc_ref(v___x_1736_);
lean_inc(v_level_1732_);
v_us_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_1737_, 0, v_level_1732_);
lean_ctor_set(v_us_1737_, 1, v___x_1736_);
v___x_1765_ = lean_array_get_size(v_used_1657_);
v___x_1766_ = lean_nat_dec_lt(v_i_1659_, v___x_1765_);
if (v___x_1766_ == 0)
{
lean_inc_ref(v_decl_1731_);
goto v___jp_1749_;
}
else
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_array_fget_borrowed(v_used_1657_, v_i_1659_);
v___x_1768_ = lean_unbox(v___x_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v___f_1770_; lean_object* v_cls_1771_; lean_object* v___f_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_dec_ref(v_x_1733_);
lean_dec(v___x_1721_);
v___x_1769_ = lean_box(v___x_1713_);
lean_inc(v_toBind_1709_);
lean_inc(v_inst_1652_);
lean_inc(v_declName_1726_);
v___f_1770_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed), 20, 19);
lean_closure_set(v___f_1770_, 0, v___x_1735_);
lean_closure_set(v___f_1770_, 1, v_declName_1726_);
lean_closure_set(v___f_1770_, 2, v_type_1727_);
lean_closure_set(v___f_1770_, 3, v_value_1728_);
lean_closure_set(v___f_1770_, 4, v_us_1737_);
lean_closure_set(v___f_1770_, 5, v___x_1736_);
lean_closure_set(v___f_1770_, 6, v___x_1769_);
lean_closure_set(v___f_1770_, 7, v_toPure_1710_);
lean_closure_set(v___f_1770_, 8, v_i_1659_);
lean_closure_set(v___f_1770_, 9, v_xs_1660_);
lean_closure_set(v___f_1770_, 10, v_inst_1651_);
lean_closure_set(v___f_1770_, 11, v_inst_1652_);
lean_closure_set(v___f_1770_, 12, v_inst_1653_);
lean_closure_set(v___f_1770_, 13, v_inst_1654_);
lean_closure_set(v___f_1770_, 14, v_info_1655_);
lean_closure_set(v___f_1770_, 15, v_fixed_1656_);
lean_closure_set(v___f_1770_, 16, v_used_1657_);
lean_closure_set(v___f_1770_, 17, v_body_1729_);
lean_closure_set(v___f_1770_, 18, v_toBind_1709_);
v_cls_1771_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1704_);
v___f_1772_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed), 12, 7);
lean_closure_set(v___f_1772_, 0, v_cls_1771_);
lean_closure_set(v___f_1772_, 1, v_declName_1726_);
lean_closure_set(v___f_1772_, 2, v_val_1734_);
lean_closure_set(v___f_1772_, 3, v___x_1700_);
lean_closure_set(v___f_1772_, 4, v___x_1701_);
lean_closure_set(v___f_1772_, 5, v_toMonadRef_1704_);
lean_closure_set(v___f_1772_, 6, v___x_1711_);
v___x_1773_ = lean_apply_2(v_inst_1652_, lean_box(0), v___f_1772_);
v___x_1774_ = lean_apply_4(v_toBind_1709_, lean_box(0), lean_box(0), v___x_1773_, v___f_1770_);
return v___x_1774_;
}
else
{
lean_inc_ref(v_decl_1731_);
goto v___jp_1749_;
}
}
v___jp_1738_:
{
lean_object* v_withNewLemmas_1741_; lean_object* v_dsimp_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_withNewLemmas_1741_ = lean_ctor_get(v_inst_1654_, 0);
lean_inc(v_withNewLemmas_1741_);
v_dsimp_1742_ = lean_ctor_get(v_inst_1654_, 1);
lean_inc(v_dsimp_1742_);
v___x_1743_ = lean_box(v___y_1740_);
v___x_1744_ = lean_box(v___x_1713_);
v___x_1745_ = lean_box(v___y_1739_);
lean_inc_ref(v_toMonadRef_1704_);
lean_inc_ref(v_val_1734_);
lean_inc(v_toBind_1709_);
v___f_1746_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed), 29, 28);
lean_closure_set(v___f_1746_, 0, v_declName_1726_);
lean_closure_set(v___f_1746_, 1, v_type_1727_);
lean_closure_set(v___f_1746_, 2, v_value_1728_);
lean_closure_set(v___f_1746_, 3, v___x_1743_);
lean_closure_set(v___f_1746_, 4, v___x_1736_);
lean_closure_set(v___f_1746_, 5, v_toPure_1710_);
lean_closure_set(v___f_1746_, 6, v_us_1737_);
lean_closure_set(v___f_1746_, 7, v___x_1744_);
lean_closure_set(v___f_1746_, 8, v_decl_1731_);
lean_closure_set(v___f_1746_, 9, v_x_1733_);
lean_closure_set(v___f_1746_, 10, v_i_1659_);
lean_closure_set(v___f_1746_, 11, v_xs_1660_);
lean_closure_set(v___f_1746_, 12, v_inst_1651_);
lean_closure_set(v___f_1746_, 13, v_inst_1652_);
lean_closure_set(v___f_1746_, 14, v_inst_1653_);
lean_closure_set(v___f_1746_, 15, v_inst_1654_);
lean_closure_set(v___f_1746_, 16, v_info_1655_);
lean_closure_set(v___f_1746_, 17, v_fixed_1656_);
lean_closure_set(v___f_1746_, 18, v_used_1657_);
lean_closure_set(v___f_1746_, 19, v_body_1729_);
lean_closure_set(v___f_1746_, 20, v_toBind_1709_);
lean_closure_set(v___f_1746_, 21, v_withNewLemmas_1741_);
lean_closure_set(v___f_1746_, 22, v_val_1734_);
lean_closure_set(v___f_1746_, 23, v___x_1745_);
lean_closure_set(v___f_1746_, 24, v___x_1700_);
lean_closure_set(v___f_1746_, 25, v___x_1701_);
lean_closure_set(v___f_1746_, 26, v_toMonadRef_1704_);
lean_closure_set(v___f_1746_, 27, v___x_1711_);
v___x_1747_ = lean_apply_1(v_dsimp_1742_, v_val_1734_);
v___x_1748_ = lean_apply_4(v_toBind_1709_, lean_box(0), lean_box(0), v___x_1747_, v___f_1746_);
return v___x_1748_;
}
v___jp_1749_:
{
uint8_t v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1750_ = 0;
v___x_1751_ = lean_array_get_size(v_fixed_1656_);
v___x_1752_ = lean_nat_dec_lt(v_i_1659_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_dec(v___x_1721_);
v___y_1739_ = v___x_1750_;
v___y_1740_ = v___x_1713_;
goto v___jp_1738_;
}
else
{
lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = lean_array_fget_borrowed(v_fixed_1656_, v_i_1659_);
v___x_1754_ = lean_unbox(v___x_1753_);
if (v___x_1754_ == 0)
{
lean_object* v_withNewLemmas_1755_; lean_object* v_simp_1756_; lean_object* v___x_1757_; lean_object* v___f_1758_; lean_object* v___f_1759_; lean_object* v___x_1760_; lean_object* v___f_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_inc_n(v___x_1753_, 2);
lean_inc(v_level_1732_);
v_withNewLemmas_1755_ = lean_ctor_get(v_inst_1654_, 0);
lean_inc(v_withNewLemmas_1755_);
v_simp_1756_ = lean_ctor_get(v_inst_1654_, 2);
lean_inc(v_simp_1756_);
v___x_1757_ = lean_box(v___x_1713_);
lean_inc_n(v_toBind_1709_, 2);
lean_inc(v_inst_1652_);
lean_inc_ref(v_xs_1660_);
lean_inc(v_toPure_1710_);
lean_inc_ref(v_value_1728_);
lean_inc_ref(v_type_1727_);
lean_inc(v_declName_1726_);
v___f_1758_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed), 24, 23);
lean_closure_set(v___f_1758_, 0, v_decl_1731_);
lean_closure_set(v___f_1758_, 1, v_declName_1726_);
lean_closure_set(v___f_1758_, 2, v_type_1727_);
lean_closure_set(v___f_1758_, 3, v_value_1728_);
lean_closure_set(v___f_1758_, 4, v___x_1757_);
lean_closure_set(v___f_1758_, 5, v___x_1736_);
lean_closure_set(v___f_1758_, 6, v___x_1753_);
lean_closure_set(v___f_1758_, 7, v_toPure_1710_);
lean_closure_set(v___f_1758_, 8, v_us_1737_);
lean_closure_set(v___f_1758_, 9, v___x_1721_);
lean_closure_set(v___f_1758_, 10, v_x_1733_);
lean_closure_set(v___f_1758_, 11, v_i_1659_);
lean_closure_set(v___f_1758_, 12, v_xs_1660_);
lean_closure_set(v___f_1758_, 13, v_inst_1651_);
lean_closure_set(v___f_1758_, 14, v_inst_1652_);
lean_closure_set(v___f_1758_, 15, v_inst_1653_);
lean_closure_set(v___f_1758_, 16, v_inst_1654_);
lean_closure_set(v___f_1758_, 17, v_info_1655_);
lean_closure_set(v___f_1758_, 18, v_fixed_1656_);
lean_closure_set(v___f_1758_, 19, v_used_1657_);
lean_closure_set(v___f_1758_, 20, v_body_1729_);
lean_closure_set(v___f_1758_, 21, v_toBind_1709_);
lean_closure_set(v___f_1758_, 22, v_withNewLemmas_1755_);
v___f_1759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9), 2, 1);
lean_closure_set(v___f_1759_, 0, v___f_1758_);
v___x_1760_ = lean_box(v___x_1713_);
lean_inc_ref(v_toMonadRef_1704_);
lean_inc_ref(v_val_1734_);
lean_inc_ref(v___f_1759_);
v___f_1761_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_1761_, 0, v_level_1732_);
lean_closure_set(v___f_1761_, 1, v___x_1735_);
lean_closure_set(v___f_1761_, 2, v_type_1727_);
lean_closure_set(v___f_1761_, 3, v_value_1728_);
lean_closure_set(v___f_1761_, 4, v___x_1753_);
lean_closure_set(v___f_1761_, 5, v_toPure_1710_);
lean_closure_set(v___f_1761_, 6, v_toBind_1709_);
lean_closure_set(v___f_1761_, 7, v___f_1759_);
lean_closure_set(v___f_1761_, 8, v_xs_1660_);
lean_closure_set(v___f_1761_, 9, v___x_1760_);
lean_closure_set(v___f_1761_, 10, v___f_1759_);
lean_closure_set(v___f_1761_, 11, v_declName_1726_);
lean_closure_set(v___f_1761_, 12, v_val_1734_);
lean_closure_set(v___f_1761_, 13, v___x_1700_);
lean_closure_set(v___f_1761_, 14, v___x_1701_);
lean_closure_set(v___f_1761_, 15, v_toMonadRef_1704_);
lean_closure_set(v___f_1761_, 16, v___x_1711_);
lean_closure_set(v___f_1761_, 17, v_inst_1652_);
v___x_1762_ = lean_apply_1(v_simp_1756_, v_val_1734_);
v___x_1763_ = lean_apply_4(v_toBind_1709_, lean_box(0), lean_box(0), v___x_1762_, v___f_1761_);
return v___x_1763_;
}
else
{
uint8_t v___x_1764_; 
lean_dec(v___x_1721_);
v___x_1764_ = lean_unbox(v___x_1753_);
v___y_1739_ = v___x_1750_;
v___y_1740_ = v___x_1764_;
goto v___jp_1738_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1658_, 4);
lean_dec(v_toPure_1710_);
lean_dec(v_toBind_1709_);
lean_dec_ref(v___x_1700_);
lean_dec_ref(v_xs_1660_);
lean_dec(v_i_1659_);
lean_dec_ref(v_used_1657_);
lean_dec_ref(v_fixed_1656_);
lean_dec_ref(v_info_1655_);
lean_dec_ref(v_inst_1654_);
lean_dec_ref(v_inst_1653_);
lean_dec(v_inst_1652_);
lean_dec_ref(v_inst_1651_);
goto v___jp_1722_;
}
}
else
{
lean_dec(v_toPure_1710_);
lean_dec(v_toBind_1709_);
lean_dec_ref(v___x_1700_);
lean_dec_ref(v_xs_1660_);
lean_dec(v_i_1659_);
lean_dec_ref(v_e_1658_);
lean_dec_ref(v_used_1657_);
lean_dec_ref(v_fixed_1656_);
lean_dec_ref(v_info_1655_);
lean_dec_ref(v_inst_1654_);
lean_dec_ref(v_inst_1653_);
lean_dec(v_inst_1652_);
lean_dec_ref(v_inst_1651_);
goto v___jp_1722_;
}
v___jp_1722_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15);
v___x_1724_ = l_panic___redArg(v___x_1721_, v___x_1723_);
lean_dec(v___x_1721_);
return v___x_1724_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object* v___x_1781_, lean_object* v_declName_1782_, lean_object* v_type_1783_, lean_object* v_value_1784_, lean_object* v_us_1785_, lean_object* v___x_1786_, uint8_t v___x_1787_, lean_object* v_toPure_1788_, lean_object* v_i_1789_, lean_object* v_xs_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_inst_1794_, lean_object* v_info_1795_, lean_object* v_fixed_1796_, lean_object* v_used_1797_, lean_object* v_body_1798_, lean_object* v_toBind_1799_, lean_object* v_____r_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v_x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___f_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1801_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1));
v_x_1802_ = l_Lean_mkConst(v___x_1801_, v___x_1781_);
v___x_1803_ = lean_unsigned_to_nat(1u);
v___x_1804_ = lean_box(v___x_1787_);
v___f_1805_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed), 9, 8);
lean_closure_set(v___f_1805_, 0, v___x_1803_);
lean_closure_set(v___f_1805_, 1, v_declName_1782_);
lean_closure_set(v___f_1805_, 2, v_type_1783_);
lean_closure_set(v___f_1805_, 3, v_value_1784_);
lean_closure_set(v___f_1805_, 4, v_us_1785_);
lean_closure_set(v___f_1805_, 5, v___x_1786_);
lean_closure_set(v___f_1805_, 6, v___x_1804_);
lean_closure_set(v___f_1805_, 7, v_toPure_1788_);
v___x_1806_ = lean_nat_add(v_i_1789_, v___x_1803_);
v___x_1807_ = lean_array_push(v_xs_1790_, v_x_1802_);
v___x_1808_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1791_, v_inst_1792_, v_inst_1793_, v_inst_1794_, v_info_1795_, v_fixed_1796_, v_used_1797_, v_body_1798_, v___x_1806_, v___x_1807_);
v___x_1809_ = lean_apply_4(v_toBind_1799_, lean_box(0), lean_box(0), v___x_1808_, v___f_1805_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object* v_m_1810_, lean_object* v_inst_1811_, lean_object* v_inst_1812_, lean_object* v_inst_1813_, lean_object* v_inst_1814_, lean_object* v_info_1815_, lean_object* v_fixed_1816_, lean_object* v_used_1817_, lean_object* v_e_1818_, lean_object* v_i_1819_, lean_object* v_xs_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1811_, v_inst_1812_, v_inst_1813_, v_inst_1814_, v_info_1815_, v_fixed_1816_, v_used_1817_, v_e_1818_, v_i_1819_, v_xs_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t v_x_1822_){
_start:
{
switch(v_x_1822_)
{
case 0:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_unsigned_to_nat(0u);
return v___x_1823_;
}
case 1:
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_unsigned_to_nat(1u);
return v___x_1824_;
}
default: 
{
lean_object* v___x_1825_; 
v___x_1825_ = lean_unsigned_to_nat(2u);
return v___x_1825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object* v_x_1826_){
_start:
{
uint8_t v_x_boxed_1827_; lean_object* v_res_1828_; 
v_x_boxed_1827_ = lean_unbox(v_x_1826_);
v_res_1828_ = l_Lean_Meta_ZetaUnusedMode_ctorIdx(v_x_boxed_1827_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object* v_k_1829_){
_start:
{
lean_inc(v_k_1829_);
return v_k_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object* v_k_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(v_k_1830_);
lean_dec(v_k_1830_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object* v_motive_1832_, lean_object* v_ctorIdx_1833_, uint8_t v_t_1834_, lean_object* v_h_1835_, lean_object* v_k_1836_){
_start:
{
lean_inc(v_k_1836_);
return v_k_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object* v_motive_1837_, lean_object* v_ctorIdx_1838_, lean_object* v_t_1839_, lean_object* v_h_1840_, lean_object* v_k_1841_){
_start:
{
uint8_t v_t_boxed_1842_; lean_object* v_res_1843_; 
v_t_boxed_1842_ = lean_unbox(v_t_1839_);
v_res_1843_ = l_Lean_Meta_ZetaUnusedMode_ctorElim(v_motive_1837_, v_ctorIdx_1838_, v_t_boxed_1842_, v_h_1840_, v_k_1841_);
lean_dec(v_k_1841_);
lean_dec(v_ctorIdx_1838_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object* v_no_1844_){
_start:
{
lean_inc(v_no_1844_);
return v_no_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object* v_no_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(v_no_1845_);
lean_dec(v_no_1845_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object* v_motive_1847_, uint8_t v_t_1848_, lean_object* v_h_1849_, lean_object* v_no_1850_){
_start:
{
lean_inc(v_no_1850_);
return v_no_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object* v_motive_1851_, lean_object* v_t_1852_, lean_object* v_h_1853_, lean_object* v_no_1854_){
_start:
{
uint8_t v_t_boxed_1855_; lean_object* v_res_1856_; 
v_t_boxed_1855_ = lean_unbox(v_t_1852_);
v_res_1856_ = l_Lean_Meta_ZetaUnusedMode_no_elim(v_motive_1851_, v_t_boxed_1855_, v_h_1853_, v_no_1854_);
lean_dec(v_no_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object* v_singlePass_1857_){
_start:
{
lean_inc(v_singlePass_1857_);
return v_singlePass_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object* v_singlePass_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(v_singlePass_1858_);
lean_dec(v_singlePass_1858_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object* v_motive_1860_, uint8_t v_t_1861_, lean_object* v_h_1862_, lean_object* v_singlePass_1863_){
_start:
{
lean_inc(v_singlePass_1863_);
return v_singlePass_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object* v_motive_1864_, lean_object* v_t_1865_, lean_object* v_h_1866_, lean_object* v_singlePass_1867_){
_start:
{
uint8_t v_t_boxed_1868_; lean_object* v_res_1869_; 
v_t_boxed_1868_ = lean_unbox(v_t_1865_);
v_res_1869_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim(v_motive_1864_, v_t_boxed_1868_, v_h_1866_, v_singlePass_1867_);
lean_dec(v_singlePass_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object* v_twoPasses_1870_){
_start:
{
lean_inc(v_twoPasses_1870_);
return v_twoPasses_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object* v_twoPasses_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(v_twoPasses_1871_);
lean_dec(v_twoPasses_1871_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object* v_motive_1873_, uint8_t v_t_1874_, lean_object* v_h_1875_, lean_object* v_twoPasses_1876_){
_start:
{
lean_inc(v_twoPasses_1876_);
return v_twoPasses_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object* v_motive_1877_, lean_object* v_t_1878_, lean_object* v_h_1879_, lean_object* v_twoPasses_1880_){
_start:
{
uint8_t v_t_boxed_1881_; lean_object* v_res_1882_; 
v_t_boxed_1881_ = lean_unbox(v_t_1878_);
v_res_1882_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(v_motive_1877_, v_t_boxed_1881_, v_h_1879_, v_twoPasses_1880_);
lean_dec(v_twoPasses_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object* v_k_1883_, lean_object* v_b_1884_, lean_object* v_c_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v___x_1891_; 
lean_inc(v___y_1889_);
lean_inc_ref(v___y_1888_);
lean_inc(v___y_1887_);
lean_inc_ref(v___y_1886_);
v___x_1891_ = lean_apply_7(v_k_1883_, v_b_1884_, v_c_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, lean_box(0));
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object* v_k_1892_, lean_object* v_b_1893_, lean_object* v_c_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(v_k_1892_, v_b_1893_, v_c_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object* v_e_1901_, lean_object* v_k_1902_, uint8_t v_cleanupAnnotations_1903_, uint8_t v_preserveNondepLet_1904_, uint8_t v_nondepLetOnly_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___f_1911_; uint8_t v___x_1912_; uint8_t v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___f_1911_ = lean_alloc_closure((void*)(l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1911_, 0, v_k_1902_);
v___x_1912_ = 0;
v___x_1913_ = 1;
v___x_1914_ = lean_box(0);
v___x_1915_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1901_, v___x_1912_, v___x_1913_, v_preserveNondepLet_1904_, v_nondepLetOnly_1905_, v___x_1914_, v___f_1911_, v_cleanupAnnotations_1903_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1915_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1915_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
v_a_1924_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1915_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1915_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object* v_e_1932_, lean_object* v_k_1933_, lean_object* v_cleanupAnnotations_1934_, lean_object* v_preserveNondepLet_1935_, lean_object* v_nondepLetOnly_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1942_; uint8_t v_preserveNondepLet_boxed_1943_; uint8_t v_nondepLetOnly_boxed_1944_; lean_object* v_res_1945_; 
v_cleanupAnnotations_boxed_1942_ = lean_unbox(v_cleanupAnnotations_1934_);
v_preserveNondepLet_boxed_1943_ = lean_unbox(v_preserveNondepLet_1935_);
v_nondepLetOnly_boxed_1944_ = lean_unbox(v_nondepLetOnly_1936_);
v_res_1945_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1932_, v_k_1933_, v_cleanupAnnotations_boxed_1942_, v_preserveNondepLet_boxed_1943_, v_nondepLetOnly_boxed_1944_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object* v_00_u03b1_1946_, lean_object* v_e_1947_, lean_object* v_k_1948_, uint8_t v_cleanupAnnotations_1949_, uint8_t v_preserveNondepLet_1950_, uint8_t v_nondepLetOnly_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1957_; 
v___x_1957_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1947_, v_k_1948_, v_cleanupAnnotations_1949_, v_preserveNondepLet_1950_, v_nondepLetOnly_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object* v_00_u03b1_1958_, lean_object* v_e_1959_, lean_object* v_k_1960_, lean_object* v_cleanupAnnotations_1961_, lean_object* v_preserveNondepLet_1962_, lean_object* v_nondepLetOnly_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1969_; uint8_t v_preserveNondepLet_boxed_1970_; uint8_t v_nondepLetOnly_boxed_1971_; lean_object* v_res_1972_; 
v_cleanupAnnotations_boxed_1969_ = lean_unbox(v_cleanupAnnotations_1961_);
v_preserveNondepLet_boxed_1970_ = lean_unbox(v_preserveNondepLet_1962_);
v_nondepLetOnly_boxed_1971_ = lean_unbox(v_nondepLetOnly_1963_);
v_res_1972_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(v_00_u03b1_1958_, v_e_1959_, v_k_1960_, v_cleanupAnnotations_boxed_1969_, v_preserveNondepLet_boxed_1970_, v_nondepLetOnly_boxed_1971_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object* v_xs_1973_, lean_object* v_a_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
lean_object* v_snd_1979_; lean_object* v_fst_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2035_; 
v_snd_1979_ = lean_ctor_get(v_a_1974_, 1);
v_fst_1980_ = lean_ctor_get(v_a_1974_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_a_1974_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_1982_ = v_a_1974_;
v_isShared_1983_ = v_isSharedCheck_2035_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_snd_1979_);
lean_inc(v_fst_1980_);
lean_dec(v_a_1974_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2035_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v_fst_1984_; lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2034_; 
v_fst_1984_ = lean_ctor_get(v_snd_1979_, 0);
v_snd_1985_ = lean_ctor_get(v_snd_1979_, 1);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_snd_1979_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_1987_ = v_snd_1979_;
v_isShared_1988_ = v_isSharedCheck_2034_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_inc(v_fst_1984_);
lean_dec(v_snd_1979_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2034_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = lean_nat_dec_lt(v___x_1989_, v_snd_1985_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1992_; 
if (v_isShared_1988_ == 0)
{
v___x_1992_ = v___x_1987_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_fst_1984_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_snd_1985_);
v___x_1992_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1994_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_1992_);
v___x_1994_ = v___x_1982_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_fst_1980_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; 
v___x_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1994_);
return v___x_1995_;
}
}
}
else
{
lean_object* v_fvarSet_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v_fvarSet_1998_ = lean_ctor_get(v_fst_1980_, 1);
v___x_1999_ = l_Lean_instInhabitedExpr;
v___x_2000_ = lean_unsigned_to_nat(1u);
v___x_2001_ = lean_nat_sub(v_snd_1985_, v___x_2000_);
lean_dec(v_snd_1985_);
v___x_2002_ = lean_array_get_borrowed(v___x_1999_, v_xs_1973_, v___x_2001_);
v___x_2003_ = l_Lean_Expr_fvarId_x21(v___x_2002_);
v___x_2004_ = l_Lean_FVarIdSet_contains(v_fvarSet_1998_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2006_; 
lean_dec(v___x_2003_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v___x_2001_);
v___x_2006_ = v___x_1987_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_fst_1984_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v___x_2001_);
v___x_2006_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2008_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_2006_);
v___x_2008_ = v___x_1982_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_fst_1980_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
v_a_1974_ = v___x_2008_;
goto _start;
}
}
}
else
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_FVarId_getDecl___redArg(v___x_2003_, v___y_1975_, v___y_1976_, v___y_1977_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2020_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2014_ = l_Lean_LocalDecl_type(v_a_2013_);
v___x_2015_ = l_Lean_collectFVars(v_fst_1980_, v___x_2014_);
v___x_2016_ = l_Lean_LocalDecl_value(v_a_2013_, v___x_1990_);
lean_dec(v_a_2013_);
v___x_2017_ = l_Lean_collectFVars(v___x_2015_, v___x_2016_);
lean_inc(v___x_2002_);
v___x_2018_ = lean_array_push(v_fst_1984_, v___x_2002_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v___x_2001_);
lean_ctor_set(v___x_1987_, 0, v___x_2018_);
v___x_2020_ = v___x_1987_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2018_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v___x_2001_);
v___x_2020_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2022_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_2020_);
lean_ctor_set(v___x_1982_, 0, v___x_2017_);
v___x_2022_ = v___x_1982_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2017_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v_a_1974_ = v___x_2022_;
goto _start;
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec(v___x_2001_);
lean_del_object(v___x_1987_);
lean_dec(v_fst_1984_);
lean_del_object(v___x_1982_);
lean_dec(v_fst_1980_);
v_a_2026_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_2012_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2012_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object* v_xs_2036_, lean_object* v_a_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2036_, v_a_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec_ref(v_xs_2036_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object* v_e_2043_, lean_object* v_xs_2044_, lean_object* v_body_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v_s_2053_; lean_object* v_i_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2051_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_2052_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__3);
lean_inc_ref(v_body_2045_);
v_s_2053_ = l_Lean_collectFVars(v___x_2052_, v_body_2045_);
v_i_2054_ = lean_array_get_size(v_xs_2044_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2051_);
lean_ctor_set(v___x_2055_, 1, v_i_2054_);
v___x_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2056_, 0, v_s_2053_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
v___x_2057_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2044_, v___x_2056_, v___y_2046_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2073_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2060_ = v___x_2057_;
v_isShared_2061_ = v_isSharedCheck_2073_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2057_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2073_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v_snd_2062_; lean_object* v_fst_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_snd_2062_ = lean_ctor_get(v_a_2058_, 1);
lean_inc(v_snd_2062_);
lean_dec(v_a_2058_);
v_fst_2063_ = lean_ctor_get(v_snd_2062_, 0);
lean_inc(v_fst_2063_);
lean_dec(v_snd_2062_);
v___x_2064_ = lean_array_get_size(v_fst_2063_);
v___x_2065_ = lean_nat_dec_eq(v___x_2064_, v_i_2054_);
if (v___x_2065_ == 0)
{
uint8_t v___x_2066_; lean_object* v___x_2067_; uint8_t v___x_2068_; lean_object* v___x_2069_; 
lean_del_object(v___x_2060_);
lean_dec_ref(v_e_2043_);
v___x_2066_ = 1;
v___x_2067_ = l_Array_reverse___redArg(v_fst_2063_);
v___x_2068_ = 1;
v___x_2069_ = l_Lean_Meta_mkLetFVars(v___x_2067_, v_body_2045_, v___x_2066_, v___x_2065_, v___x_2068_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec_ref(v___x_2067_);
return v___x_2069_;
}
else
{
lean_object* v___x_2071_; 
lean_dec(v_fst_2063_);
lean_dec_ref(v_body_2045_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v_e_2043_);
v___x_2071_ = v___x_2060_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_e_2043_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_dec_ref(v_body_2045_);
lean_dec_ref(v_e_2043_);
v_a_2074_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2057_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2057_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object* v_e_2082_, lean_object* v_xs_2083_, lean_object* v_body_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lean_Meta_zetaUnused___lam__0(v_e_2082_, v_xs_2083_, v_body_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec_ref(v_xs_2083_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object* v_e_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v___f_2097_; uint8_t v___x_2098_; uint8_t v___x_2099_; lean_object* v___x_2100_; 
lean_inc_ref(v_e_2091_);
v___f_2097_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaUnused___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2097_, 0, v_e_2091_);
v___x_2098_ = 0;
v___x_2099_ = 1;
v___x_2100_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2091_, v___f_2097_, v___x_2098_, v___x_2099_, v___x_2098_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object* v_e_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_Meta_zetaUnused(v_e_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object* v_xs_2108_, lean_object* v_inst_2109_, lean_object* v_a_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2108_, v_a_2110_, v___y_2111_, v___y_2113_, v___y_2114_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object* v_xs_2117_, lean_object* v_inst_2118_, lean_object* v_a_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(v_xs_2117_, v_inst_2118_, v_a_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec_ref(v_xs_2117_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object* v_u_2130_, lean_object* v_source_2131_, lean_object* v_result_2132_, uint8_t v_keepUnused_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_){
_start:
{
uint8_t v_modified_2139_; 
v_modified_2139_ = lean_ctor_get_uint8(v_result_2132_, sizeof(void*)*5);
if (v_modified_2139_ == 0)
{
if (v_keepUnused_2133_ == 0)
{
lean_object* v_exprType_2140_; lean_object* v___x_2141_; 
v_exprType_2140_ = lean_ctor_get(v_result_2132_, 1);
lean_inc_ref(v_exprType_2140_);
lean_dec_ref(v_result_2132_);
lean_inc_ref(v_source_2131_);
v___x_2141_ = l_Lean_Meta_zetaUnused(v_source_2131_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2160_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2144_ = v___x_2141_;
v_isShared_2145_ = v_isSharedCheck_2160_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2141_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2160_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
uint8_t v___x_2146_; 
v___x_2146_ = lean_expr_eqv(v_a_2142_, v_source_2131_);
lean_dec_ref(v_source_2131_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2147_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2148_ = lean_box(0);
v___x_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2149_, 0, v_u_2130_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = l_Lean_mkConst(v___x_2147_, v___x_2149_);
lean_inc(v_a_2142_);
v___x_2151_ = l_Lean_mkAppB(v___x_2150_, v_exprType_2140_, v_a_2142_);
v___x_2152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2152_, 0, v_a_2142_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2152_);
v___x_2154_ = v___x_2144_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
else
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
lean_dec(v_a_2142_);
lean_dec_ref(v_exprType_2140_);
lean_dec(v_u_2130_);
v___x_2156_ = lean_box(0);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2156_);
v___x_2158_ = v___x_2144_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
else
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2168_; 
lean_dec_ref(v_exprType_2140_);
lean_dec_ref(v_source_2131_);
lean_dec(v_u_2130_);
v_a_2161_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2163_ = v___x_2141_;
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2141_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2166_; 
if (v_isShared_2164_ == 0)
{
v___x_2166_ = v___x_2163_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_a_2161_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
lean_dec_ref(v_result_2132_);
lean_dec_ref(v_source_2131_);
lean_dec(v_u_2130_);
v___x_2169_ = lean_box(0);
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
return v___x_2170_;
}
}
else
{
lean_object* v_expr_2171_; lean_object* v_exprType_2172_; lean_object* v_exprInit_2173_; lean_object* v_exprResult_2174_; lean_object* v_proof_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v_proof_2183_; 
v_expr_2171_ = lean_ctor_get(v_result_2132_, 0);
lean_inc_ref(v_expr_2171_);
v_exprType_2172_ = lean_ctor_get(v_result_2132_, 1);
lean_inc_ref_n(v_exprType_2172_, 3);
v_exprInit_2173_ = lean_ctor_get(v_result_2132_, 2);
lean_inc_ref(v_exprInit_2173_);
v_exprResult_2174_ = lean_ctor_get(v_result_2132_, 3);
lean_inc_ref_n(v_exprResult_2174_, 2);
v_proof_2175_ = lean_ctor_get(v_result_2132_, 4);
lean_inc_ref(v_proof_2175_);
lean_dec_ref(v_result_2132_);
v___x_2176_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_2177_ = lean_box(0);
v___x_2178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_u_2130_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
lean_inc_ref(v___x_2178_);
v___x_2179_ = l_Lean_mkConst(v___x_2176_, v___x_2178_);
lean_inc_ref(v___x_2179_);
v___x_2180_ = l_Lean_mkApp3(v___x_2179_, v_exprType_2172_, v_exprInit_2173_, v_expr_2171_);
v___x_2181_ = l_Lean_Meta_mkExpectedPropHint(v_proof_2175_, v___x_2180_);
lean_inc_ref(v_source_2131_);
v___x_2182_ = l_Lean_mkApp3(v___x_2179_, v_exprType_2172_, v_source_2131_, v_exprResult_2174_);
v_proof_2183_ = l_Lean_Meta_mkExpectedPropHint(v___x_2181_, v___x_2182_);
if (v_keepUnused_2133_ == 0)
{
lean_object* v___x_2184_; 
lean_inc_ref(v_exprResult_2174_);
v___x_2184_ = l_Lean_Meta_zetaUnused(v_exprResult_2174_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2204_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2204_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2204_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
uint8_t v___x_2189_; 
v___x_2189_ = lean_expr_eqv(v_a_2185_, v_exprResult_2174_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2190_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1));
lean_inc_ref(v___x_2178_);
v___x_2191_ = l_Lean_mkConst(v___x_2190_, v___x_2178_);
v___x_2192_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2193_ = l_Lean_mkConst(v___x_2192_, v___x_2178_);
lean_inc_n(v_a_2185_, 2);
lean_inc_ref(v_exprType_2172_);
v___x_2194_ = l_Lean_mkAppB(v___x_2193_, v_exprType_2172_, v_a_2185_);
v___x_2195_ = l_Lean_mkApp6(v___x_2191_, v_exprType_2172_, v_source_2131_, v_exprResult_2174_, v_a_2185_, v_proof_2183_, v___x_2194_);
v___x_2196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2196_, 0, v_a_2185_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 0, v___x_2196_);
v___x_2198_ = v___x_2187_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
else
{
lean_object* v___x_2200_; lean_object* v___x_2202_; 
lean_dec(v_a_2185_);
lean_dec_ref_known(v___x_2178_, 2);
lean_dec_ref(v_exprType_2172_);
lean_dec_ref(v_source_2131_);
v___x_2200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2200_, 0, v_exprResult_2174_);
lean_ctor_set(v___x_2200_, 1, v_proof_2183_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 0, v___x_2200_);
v___x_2202_ = v___x_2187_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v_proof_2183_);
lean_dec_ref_known(v___x_2178_, 2);
lean_dec_ref(v_exprResult_2174_);
lean_dec_ref(v_exprType_2172_);
lean_dec_ref(v_source_2131_);
v_a_2205_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2184_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2184_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
else
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
lean_dec_ref_known(v___x_2178_, 2);
lean_dec_ref(v_exprType_2172_);
lean_dec_ref(v_source_2131_);
v___x_2213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2213_, 0, v_exprResult_2174_);
lean_ctor_set(v___x_2213_, 1, v_proof_2183_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
return v___x_2214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object* v_u_2215_, lean_object* v_source_2216_, lean_object* v_result_2217_, lean_object* v_keepUnused_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_){
_start:
{
uint8_t v_keepUnused_boxed_2224_; lean_object* v_res_2225_; 
v_keepUnused_boxed_2224_ = lean_unbox(v_keepUnused_2218_);
v_res_2225_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(v_u_2215_, v_source_2216_, v_result_2217_, v_keepUnused_boxed_2224_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_);
lean_dec(v_a_2222_);
lean_dec_ref(v_a_2221_);
lean_dec(v_a_2220_);
lean_dec_ref(v_a_2219_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object* v_level_2226_, lean_object* v_e_2227_, lean_object* v_inst_2228_, uint8_t v_zetaUnusedMode_2229_, uint8_t v___x_2230_, uint8_t v___x_2231_, lean_object* v_r_2232_){
_start:
{
uint8_t v___y_2234_; 
switch(v_zetaUnusedMode_2229_)
{
case 0:
{
v___y_2234_ = v___x_2230_;
goto v___jp_2233_;
}
case 1:
{
v___y_2234_ = v___x_2230_;
goto v___jp_2233_;
}
default: 
{
v___y_2234_ = v___x_2231_;
goto v___jp_2233_;
}
}
v___jp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = lean_box(v___y_2234_);
v___x_2236_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed), 9, 4);
lean_closure_set(v___x_2236_, 0, v_level_2226_);
lean_closure_set(v___x_2236_, 1, v_e_2227_);
lean_closure_set(v___x_2236_, 2, v_r_2232_);
lean_closure_set(v___x_2236_, 3, v___x_2235_);
v___x_2237_ = lean_apply_2(v_inst_2228_, lean_box(0), v___x_2236_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object* v_level_2238_, lean_object* v_e_2239_, lean_object* v_inst_2240_, lean_object* v_zetaUnusedMode_2241_, lean_object* v___x_2242_, lean_object* v___x_2243_, lean_object* v_r_2244_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2245_; uint8_t v___x_289__boxed_2246_; uint8_t v___x_290__boxed_2247_; lean_object* v_res_2248_; 
v_zetaUnusedMode_boxed_2245_ = lean_unbox(v_zetaUnusedMode_2241_);
v___x_289__boxed_2246_ = lean_unbox(v___x_2242_);
v___x_290__boxed_2247_ = lean_unbox(v___x_2243_);
v_res_2248_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__0(v_level_2238_, v_e_2239_, v_inst_2240_, v_zetaUnusedMode_boxed_2245_, v___x_289__boxed_2246_, v___x_290__boxed_2247_, v_r_2244_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object* v___x_2249_, lean_object* v_inst_2250_, lean_object* v_inst_2251_, lean_object* v_inst_2252_, lean_object* v_inst_2253_, lean_object* v_info_2254_, lean_object* v_e_2255_, lean_object* v___x_2256_, lean_object* v_toBind_2257_, lean_object* v___f_2258_, lean_object* v_____x_2259_){
_start:
{
lean_object* v_fst_2260_; lean_object* v_snd_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_fst_2260_ = lean_ctor_get(v_____x_2259_, 0);
lean_inc(v_fst_2260_);
v_snd_2261_ = lean_ctor_get(v_____x_2259_, 1);
lean_inc(v_snd_2261_);
lean_dec_ref(v_____x_2259_);
v___x_2262_ = lean_mk_empty_array_with_capacity(v___x_2249_);
v___x_2263_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2250_, v_inst_2251_, v_inst_2252_, v_inst_2253_, v_info_2254_, v_fst_2260_, v_snd_2261_, v_e_2255_, v___x_2256_, v___x_2262_);
v___x_2264_ = lean_apply_4(v_toBind_2257_, lean_box(0), lean_box(0), v___x_2263_, v___f_2258_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object* v___x_2265_, lean_object* v_inst_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_inst_2269_, lean_object* v_info_2270_, lean_object* v_e_2271_, lean_object* v___x_2272_, lean_object* v_toBind_2273_, lean_object* v___f_2274_, lean_object* v_____x_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__1(v___x_2265_, v_inst_2266_, v_inst_2267_, v_inst_2268_, v_inst_2269_, v_info_2270_, v_e_2271_, v___x_2272_, v_toBind_2273_, v___f_2274_, v_____x_2275_);
lean_dec(v___x_2265_);
return v_res_2276_;
}
}
static lean_object* _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2279_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1));
v___x_2280_ = lean_unsigned_to_nat(2u);
v___x_2281_ = lean_unsigned_to_nat(456u);
v___x_2282_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0));
v___x_2283_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_2284_ = l_mkPanicMessageWithDecl(v___x_2283_, v___x_2282_, v___x_2281_, v___x_2280_, v___x_2279_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object* v_e_2285_, lean_object* v_inst_2286_, uint8_t v_zetaUnusedMode_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_inst_2290_, lean_object* v_toBind_2291_, lean_object* v___x_2292_, lean_object* v_info_2293_){
_start:
{
lean_object* v_haveInfo_2294_; lean_object* v_level_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
v_haveInfo_2294_ = lean_ctor_get(v_info_2293_, 0);
v_level_2295_ = lean_ctor_get(v_info_2293_, 5);
v___x_2296_ = lean_array_get_size(v_haveInfo_2294_);
v___x_2297_ = lean_unsigned_to_nat(0u);
v___x_2298_ = lean_nat_dec_eq(v___x_2296_, v___x_2297_);
if (v___x_2298_ == 0)
{
uint8_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___f_2303_; lean_object* v___f_2304_; uint8_t v___y_2306_; 
v___x_2299_ = 1;
v___x_2300_ = lean_box(v_zetaUnusedMode_2287_);
v___x_2301_ = lean_box(v___x_2299_);
v___x_2302_ = lean_box(v___x_2298_);
lean_inc_n(v_inst_2286_, 2);
lean_inc_ref(v_e_2285_);
lean_inc(v_level_2295_);
v___f_2303_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_2303_, 0, v_level_2295_);
lean_closure_set(v___f_2303_, 1, v_e_2285_);
lean_closure_set(v___f_2303_, 2, v_inst_2286_);
lean_closure_set(v___f_2303_, 3, v___x_2300_);
lean_closure_set(v___f_2303_, 4, v___x_2301_);
lean_closure_set(v___f_2303_, 5, v___x_2302_);
lean_inc(v_toBind_2291_);
lean_inc_ref(v_info_2293_);
v___f_2304_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_2304_, 0, v___x_2296_);
lean_closure_set(v___f_2304_, 1, v_inst_2288_);
lean_closure_set(v___f_2304_, 2, v_inst_2286_);
lean_closure_set(v___f_2304_, 3, v_inst_2289_);
lean_closure_set(v___f_2304_, 4, v_inst_2290_);
lean_closure_set(v___f_2304_, 5, v_info_2293_);
lean_closure_set(v___f_2304_, 6, v_e_2285_);
lean_closure_set(v___f_2304_, 7, v___x_2297_);
lean_closure_set(v___f_2304_, 8, v_toBind_2291_);
lean_closure_set(v___f_2304_, 9, v___f_2303_);
switch(v_zetaUnusedMode_2287_)
{
case 0:
{
v___y_2306_ = v___x_2299_;
goto v___jp_2305_;
}
case 2:
{
v___y_2306_ = v___x_2299_;
goto v___jp_2305_;
}
default: 
{
v___y_2306_ = v___x_2298_;
goto v___jp_2305_;
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2307_ = lean_box(v___y_2306_);
v___x_2308_ = lean_alloc_closure((void*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed), 7, 2);
lean_closure_set(v___x_2308_, 0, v_info_2293_);
lean_closure_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_apply_2(v_inst_2286_, lean_box(0), v___x_2308_);
v___x_2310_ = lean_apply_4(v_toBind_2291_, lean_box(0), lean_box(0), v___x_2309_, v___f_2304_);
return v___x_2310_;
}
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
lean_dec_ref(v_info_2293_);
lean_dec(v_toBind_2291_);
lean_dec_ref(v_inst_2290_);
lean_dec_ref(v_inst_2289_);
lean_dec_ref(v_inst_2288_);
lean_dec(v_inst_2286_);
lean_dec_ref(v_e_2285_);
v___x_2311_ = lean_obj_once(&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2, &l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once, _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2);
v___x_2312_ = l_panic___redArg(v___x_2292_, v___x_2311_);
return v___x_2312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object* v_e_2313_, lean_object* v_inst_2314_, lean_object* v_zetaUnusedMode_2315_, lean_object* v_inst_2316_, lean_object* v_inst_2317_, lean_object* v_inst_2318_, lean_object* v_toBind_2319_, lean_object* v___x_2320_, lean_object* v_info_2321_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2322_; lean_object* v_res_2323_; 
v_zetaUnusedMode_boxed_2322_ = lean_unbox(v_zetaUnusedMode_2315_);
v_res_2323_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__2(v_e_2313_, v_inst_2314_, v_zetaUnusedMode_boxed_2322_, v_inst_2316_, v_inst_2317_, v_inst_2318_, v_toBind_2319_, v___x_2320_, v_info_2321_);
lean_dec(v___x_2320_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object* v_inst_2324_, lean_object* v_inst_2325_, lean_object* v_inst_2326_, lean_object* v_inst_2327_, lean_object* v_e_2328_, uint8_t v_zetaUnusedMode_2329_){
_start:
{
lean_object* v_toBind_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___f_2336_; lean_object* v___x_2337_; 
v_toBind_2330_ = lean_ctor_get(v_inst_2324_, 1);
lean_inc_n(v_toBind_2330_, 2);
v___x_2331_ = lean_box(0);
lean_inc_ref(v_e_2328_);
v___x_2332_ = lean_alloc_closure((void*)(l_Lean_Meta_getHaveTelescopeInfo___boxed), 6, 1);
lean_closure_set(v___x_2332_, 0, v_e_2328_);
lean_inc(v_inst_2325_);
v___x_2333_ = lean_apply_2(v_inst_2325_, lean_box(0), v___x_2332_);
lean_inc_ref(v_inst_2324_);
v___x_2334_ = l_instInhabitedOfMonad___redArg(v_inst_2324_, v___x_2331_);
v___x_2335_ = lean_box(v_zetaUnusedMode_2329_);
v___f_2336_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2336_, 0, v_e_2328_);
lean_closure_set(v___f_2336_, 1, v_inst_2325_);
lean_closure_set(v___f_2336_, 2, v___x_2335_);
lean_closure_set(v___f_2336_, 3, v_inst_2324_);
lean_closure_set(v___f_2336_, 4, v_inst_2326_);
lean_closure_set(v___f_2336_, 5, v_inst_2327_);
lean_closure_set(v___f_2336_, 6, v_toBind_2330_);
lean_closure_set(v___f_2336_, 7, v___x_2334_);
v___x_2337_ = lean_apply_4(v_toBind_2330_, lean_box(0), lean_box(0), v___x_2333_, v___f_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object* v_inst_2338_, lean_object* v_inst_2339_, lean_object* v_inst_2340_, lean_object* v_inst_2341_, lean_object* v_e_2342_, lean_object* v_zetaUnusedMode_2343_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2344_; lean_object* v_res_2345_; 
v_zetaUnusedMode_boxed_2344_ = lean_unbox(v_zetaUnusedMode_2343_);
v_res_2345_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2338_, v_inst_2339_, v_inst_2340_, v_inst_2341_, v_e_2342_, v_zetaUnusedMode_boxed_2344_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object* v_m_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_inst_2349_, lean_object* v_inst_2350_, lean_object* v_e_2351_, uint8_t v_zetaUnusedMode_2352_){
_start:
{
lean_object* v___x_2353_; 
v___x_2353_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2347_, v_inst_2348_, v_inst_2349_, v_inst_2350_, v_e_2351_, v_zetaUnusedMode_2352_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object* v_m_2354_, lean_object* v_inst_2355_, lean_object* v_inst_2356_, lean_object* v_inst_2357_, lean_object* v_inst_2358_, lean_object* v_e_2359_, lean_object* v_zetaUnusedMode_2360_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2361_; lean_object* v_res_2362_; 
v_zetaUnusedMode_boxed_2361_ = lean_unbox(v_zetaUnusedMode_2360_);
v_res_2362_ = l_Lean_Meta_simpHaveTelescope(v_m_2354_, v_inst_2355_, v_inst_2356_, v_inst_2357_, v_inst_2358_, v_e_2359_, v_zetaUnusedMode_boxed_2361_);
return v_res_2362_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedHaveInfo_default = _init_l_Lean_Meta_instInhabitedHaveInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo_default);
l_Lean_Meta_instInhabitedHaveInfo = _init_l_Lean_Meta_instInhabitedHaveInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo);
l_Lean_Meta_instInhabitedHaveTelescopeInfo_default = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default);
l_Lean_Meta_instInhabitedHaveTelescopeInfo = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo);
l_Lean_Meta_instInhabitedSimpHaveResult_default = _init_l_Lean_Meta_instInhabitedSimpHaveResult_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpHaveResult_default);
l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult = _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult();
lean_mark_persistent(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HaveTelescope(builtin);
}
#ifdef __cplusplus
}
#endif
