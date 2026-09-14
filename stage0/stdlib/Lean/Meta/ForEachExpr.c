// Lean compiler output
// Module: Lean.Meta.ForEachExpr
// Imports: public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg();
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_MetavarContext_setMVarUserNameTemporarily(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitLambda___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitLambda___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_visitLambda___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0;
static const lean_closure_object l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_setMVarUserNamesAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_setMVarUserNamesAt___closed__0 = (const lean_object*)&l_Lean_Meta_setMVarUserNamesAt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(lean_object* v_inst_1_, lean_object* v_inst_2_, lean_object* v_binderName_3_, uint8_t v_binderInfo_4_, lean_object* v_d_5_, lean_object* v___f_6_, lean_object* v_____r_7_){
_start:
{
uint8_t v___x_8_; lean_object* v___x_9_; 
v___x_8_ = 0;
v___x_9_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1_, v_inst_2_, v_binderName_3_, v_binderInfo_4_, v_d_5_, v___f_6_, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_binderName_12_, lean_object* v_binderInfo_13_, lean_object* v_d_14_, lean_object* v___f_15_, lean_object* v_____r_16_){
_start:
{
uint8_t v_binderInfo_63__boxed_17_; lean_object* v_res_18_; 
v_binderInfo_63__boxed_17_ = lean_unbox(v_binderInfo_13_);
v_res_18_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(v_inst_10_, v_inst_11_, v_binderName_12_, v_binderInfo_63__boxed_17_, v_d_14_, v___f_15_, v_____r_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_f_21_, lean_object* v_fvars_22_, lean_object* v_a_23_){
_start:
{
if (lean_obj_tag(v_a_23_) == 6)
{
lean_object* v_toBind_24_; lean_object* v_binderName_25_; lean_object* v_binderType_26_; lean_object* v_body_27_; uint8_t v_binderInfo_28_; lean_object* v___f_29_; lean_object* v_d_30_; lean_object* v___x_31_; lean_object* v___f_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v_toBind_24_ = lean_ctor_get(v_inst_19_, 1);
lean_inc(v_toBind_24_);
v_binderName_25_ = lean_ctor_get(v_a_23_, 0);
lean_inc(v_binderName_25_);
v_binderType_26_ = lean_ctor_get(v_a_23_, 1);
lean_inc_ref(v_binderType_26_);
v_body_27_ = lean_ctor_get(v_a_23_, 2);
lean_inc_ref(v_body_27_);
v_binderInfo_28_ = lean_ctor_get_uint8(v_a_23_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_23_, 3);
lean_inc(v_f_21_);
lean_inc_ref(v_inst_20_);
lean_inc_ref(v_inst_19_);
lean_inc_ref(v_fvars_22_);
v___f_29_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_29_, 0, v_fvars_22_);
lean_closure_set(v___f_29_, 1, v_inst_19_);
lean_closure_set(v___f_29_, 2, v_inst_20_);
lean_closure_set(v___f_29_, 3, v_f_21_);
lean_closure_set(v___f_29_, 4, v_body_27_);
v_d_30_ = lean_expr_instantiate_rev(v_binderType_26_, v_fvars_22_);
lean_dec_ref(v_fvars_22_);
lean_dec_ref(v_binderType_26_);
v___x_31_ = lean_box(v_binderInfo_28_);
lean_inc_ref(v_d_30_);
v___f_32_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_32_, 0, v_inst_20_);
lean_closure_set(v___f_32_, 1, v_inst_19_);
lean_closure_set(v___f_32_, 2, v_binderName_25_);
lean_closure_set(v___f_32_, 3, v___x_31_);
lean_closure_set(v___f_32_, 4, v_d_30_);
lean_closure_set(v___f_32_, 5, v___f_29_);
v___x_33_ = lean_apply_1(v_f_21_, v_d_30_);
v___x_34_ = lean_apply_4(v_toBind_24_, lean_box(0), lean_box(0), v___x_33_, v___f_32_);
return v___x_34_;
}
else
{
lean_object* v___x_35_; lean_object* v___x_36_; 
lean_dec_ref(v_inst_20_);
lean_dec_ref(v_inst_19_);
v___x_35_ = lean_expr_instantiate_rev(v_a_23_, v_fvars_22_);
lean_dec_ref(v_fvars_22_);
lean_dec_ref(v_a_23_);
v___x_36_ = lean_apply_1(v_f_21_, v___x_35_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0(lean_object* v_fvars_37_, lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_f_40_, lean_object* v_body_41_, lean_object* v_x_42_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_array_push(v_fvars_37_, v_x_42_);
v___x_44_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_38_, v_inst_39_, v_f_40_, v___x_43_, v_body_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit(lean_object* v_m_45_, lean_object* v_inst_46_, lean_object* v_inst_47_, lean_object* v_f_48_, lean_object* v_fvars_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_46_, v_inst_47_, v_f_48_, v_fvars_49_, v_a_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___redArg(lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_f_56_, lean_object* v_e_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_59_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_54_, v_inst_55_, v_f_56_, v___x_58_, v_e_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda(lean_object* v_m_60_, lean_object* v_inst_61_, lean_object* v_inst_62_, lean_object* v_f_63_, lean_object* v_e_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_visitLambda___redArg(v_inst_61_, v_inst_62_, v_f_63_, v_e_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_f_68_, lean_object* v_fvars_69_, lean_object* v_a_70_){
_start:
{
if (lean_obj_tag(v_a_70_) == 7)
{
lean_object* v_toBind_71_; lean_object* v_binderName_72_; lean_object* v_binderType_73_; lean_object* v_body_74_; uint8_t v_binderInfo_75_; lean_object* v___f_76_; lean_object* v_d_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_toBind_71_ = lean_ctor_get(v_inst_66_, 1);
lean_inc(v_toBind_71_);
v_binderName_72_ = lean_ctor_get(v_a_70_, 0);
lean_inc(v_binderName_72_);
v_binderType_73_ = lean_ctor_get(v_a_70_, 1);
lean_inc_ref(v_binderType_73_);
v_body_74_ = lean_ctor_get(v_a_70_, 2);
lean_inc_ref(v_body_74_);
v_binderInfo_75_ = lean_ctor_get_uint8(v_a_70_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_70_, 3);
lean_inc(v_f_68_);
lean_inc_ref(v_inst_67_);
lean_inc_ref(v_inst_66_);
lean_inc_ref(v_fvars_69_);
v___f_76_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_76_, 0, v_fvars_69_);
lean_closure_set(v___f_76_, 1, v_inst_66_);
lean_closure_set(v___f_76_, 2, v_inst_67_);
lean_closure_set(v___f_76_, 3, v_f_68_);
lean_closure_set(v___f_76_, 4, v_body_74_);
v_d_77_ = lean_expr_instantiate_rev(v_binderType_73_, v_fvars_69_);
lean_dec_ref(v_fvars_69_);
lean_dec_ref(v_binderType_73_);
v___x_78_ = lean_box(v_binderInfo_75_);
lean_inc_ref(v_d_77_);
v___f_79_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_79_, 0, v_inst_67_);
lean_closure_set(v___f_79_, 1, v_inst_66_);
lean_closure_set(v___f_79_, 2, v_binderName_72_);
lean_closure_set(v___f_79_, 3, v___x_78_);
lean_closure_set(v___f_79_, 4, v_d_77_);
lean_closure_set(v___f_79_, 5, v___f_76_);
v___x_80_ = lean_apply_1(v_f_68_, v_d_77_);
v___x_81_ = lean_apply_4(v_toBind_71_, lean_box(0), lean_box(0), v___x_80_, v___f_79_);
return v___x_81_;
}
else
{
lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec_ref(v_inst_67_);
lean_dec_ref(v_inst_66_);
v___x_82_ = lean_expr_instantiate_rev(v_a_70_, v_fvars_69_);
lean_dec_ref(v_fvars_69_);
lean_dec_ref(v_a_70_);
v___x_83_ = lean_apply_1(v_f_68_, v___x_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0(lean_object* v_fvars_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_f_87_, lean_object* v_body_88_, lean_object* v_x_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_array_push(v_fvars_84_, v_x_89_);
v___x_91_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_85_, v_inst_86_, v_f_87_, v___x_90_, v_body_88_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit(lean_object* v_m_92_, lean_object* v_inst_93_, lean_object* v_inst_94_, lean_object* v_f_95_, lean_object* v_fvars_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_93_, v_inst_94_, v_f_95_, v_fvars_96_, v_a_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___redArg(lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_f_101_, lean_object* v_e_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_104_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_99_, v_inst_100_, v_f_101_, v___x_103_, v_e_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall(lean_object* v_m_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_f_108_, lean_object* v_e_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_visitForall___redArg(v_inst_106_, v_inst_107_, v_f_108_, v_e_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1(lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_declName_113_, lean_object* v_d_114_, lean_object* v_v_115_, lean_object* v___f_116_, lean_object* v_____r_117_){
_start:
{
uint8_t v___x_118_; uint8_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = 0;
v___x_119_ = 0;
v___x_120_ = l_Lean_Meta_withLetDecl___redArg(v_inst_111_, v_inst_112_, v_declName_113_, v_d_114_, v_v_115_, v___f_116_, v___x_118_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2(lean_object* v_f_121_, lean_object* v_v_122_, lean_object* v_toBind_123_, lean_object* v___f_124_, lean_object* v_____r_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_apply_1(v_f_121_, v_v_122_);
v___x_127_ = lean_apply_4(v_toBind_123_, lean_box(0), lean_box(0), v___x_126_, v___f_124_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_f_130_, lean_object* v_fvars_131_, lean_object* v_a_132_){
_start:
{
if (lean_obj_tag(v_a_132_) == 8)
{
lean_object* v_toBind_133_; lean_object* v_declName_134_; lean_object* v_type_135_; lean_object* v_value_136_; lean_object* v_body_137_; lean_object* v___f_138_; lean_object* v_d_139_; lean_object* v_v_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_toBind_133_ = lean_ctor_get(v_inst_128_, 1);
lean_inc_n(v_toBind_133_, 2);
v_declName_134_ = lean_ctor_get(v_a_132_, 0);
lean_inc(v_declName_134_);
v_type_135_ = lean_ctor_get(v_a_132_, 1);
lean_inc_ref(v_type_135_);
v_value_136_ = lean_ctor_get(v_a_132_, 2);
lean_inc_ref(v_value_136_);
v_body_137_ = lean_ctor_get(v_a_132_, 3);
lean_inc_ref(v_body_137_);
lean_dec_ref_known(v_a_132_, 4);
lean_inc_n(v_f_130_, 2);
lean_inc_ref(v_inst_129_);
lean_inc_ref(v_inst_128_);
lean_inc_ref(v_fvars_131_);
v___f_138_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_138_, 0, v_fvars_131_);
lean_closure_set(v___f_138_, 1, v_inst_128_);
lean_closure_set(v___f_138_, 2, v_inst_129_);
lean_closure_set(v___f_138_, 3, v_f_130_);
lean_closure_set(v___f_138_, 4, v_body_137_);
v_d_139_ = lean_expr_instantiate_rev(v_type_135_, v_fvars_131_);
lean_dec_ref(v_type_135_);
v_v_140_ = lean_expr_instantiate_rev(v_value_136_, v_fvars_131_);
lean_dec_ref(v_fvars_131_);
lean_dec_ref(v_value_136_);
lean_inc_ref(v_v_140_);
lean_inc_ref(v_d_139_);
v___f_141_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1), 7, 6);
lean_closure_set(v___f_141_, 0, v_inst_129_);
lean_closure_set(v___f_141_, 1, v_inst_128_);
lean_closure_set(v___f_141_, 2, v_declName_134_);
lean_closure_set(v___f_141_, 3, v_d_139_);
lean_closure_set(v___f_141_, 4, v_v_140_);
lean_closure_set(v___f_141_, 5, v___f_138_);
v___f_142_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2), 5, 4);
lean_closure_set(v___f_142_, 0, v_f_130_);
lean_closure_set(v___f_142_, 1, v_v_140_);
lean_closure_set(v___f_142_, 2, v_toBind_133_);
lean_closure_set(v___f_142_, 3, v___f_141_);
v___x_143_ = lean_apply_1(v_f_130_, v_d_139_);
v___x_144_ = lean_apply_4(v_toBind_133_, lean_box(0), lean_box(0), v___x_143_, v___f_142_);
return v___x_144_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref(v_inst_129_);
lean_dec_ref(v_inst_128_);
v___x_145_ = lean_expr_instantiate_rev(v_a_132_, v_fvars_131_);
lean_dec_ref(v_fvars_131_);
lean_dec_ref(v_a_132_);
v___x_146_ = lean_apply_1(v_f_130_, v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0(lean_object* v_fvars_147_, lean_object* v_inst_148_, lean_object* v_inst_149_, lean_object* v_f_150_, lean_object* v_body_151_, lean_object* v_x_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_array_push(v_fvars_147_, v_x_152_);
v___x_154_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_148_, v_inst_149_, v_f_150_, v___x_153_, v_body_151_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit(lean_object* v_m_155_, lean_object* v_inst_156_, lean_object* v_inst_157_, lean_object* v_f_158_, lean_object* v_fvars_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_156_, v_inst_157_, v_f_158_, v_fvars_159_, v_a_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___redArg(lean_object* v_inst_162_, lean_object* v_inst_163_, lean_object* v_f_164_, lean_object* v_e_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_167_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_162_, v_inst_163_, v_f_164_, v___x_166_, v_e_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet(lean_object* v_m_168_, lean_object* v_inst_169_, lean_object* v_inst_170_, lean_object* v_f_171_, lean_object* v_e_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Meta_visitLet___redArg(v_inst_169_, v_inst_170_, v_f_171_, v_e_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0(lean_object* v_toApplicative_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_toPure_177_; lean_object* v___x_178_; 
v_toPure_177_ = lean_ctor_get(v_toApplicative_174_, 1);
lean_inc(v_toPure_177_);
lean_dec_ref(v_toApplicative_174_);
v___x_178_ = lean_apply_2(v_toPure_177_, lean_box(0), v_a_175_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1(lean_object* v___x_179_, lean_object* v___x_180_, lean_object* v_e_181_, lean_object* v_a_182_, lean_object* v_s_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_box(0);
v___x_185_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_179_, v___x_180_, v_s_183_, v_e_181_, v_a_182_);
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2(lean_object* v_toApplicative_187_, lean_object* v___x_188_, lean_object* v___x_189_, lean_object* v_e_190_, lean_object* v___y_191_, lean_object* v_x_192_, lean_object* v_toBind_193_, lean_object* v_a_194_){
_start:
{
lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___f_195_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_195_, 0, v_toApplicative_187_);
lean_closure_set(v___f_195_, 1, v_a_194_);
v___f_196_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_196_, 0, v___x_188_);
lean_closure_set(v___f_196_, 1, v___x_189_);
lean_closure_set(v___f_196_, 2, v_e_190_);
lean_closure_set(v___f_196_, 3, v_a_194_);
lean_inc(v___y_191_);
v___x_197_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_197_, 0, lean_box(0));
lean_closure_set(v___x_197_, 1, lean_box(0));
lean_closure_set(v___x_197_, 2, lean_box(0));
lean_closure_set(v___x_197_, 3, v___y_191_);
lean_closure_set(v___x_197_, 4, v___f_196_);
v___x_198_ = lean_apply_2(v_x_192_, lean_box(0), v___x_197_);
v___x_199_ = lean_apply_4(v_toBind_193_, lean_box(0), lean_box(0), v___x_198_, v___f_195_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_200_, lean_object* v___x_201_, lean_object* v___x_202_, lean_object* v_e_203_, lean_object* v___y_204_, lean_object* v_x_205_, lean_object* v_toBind_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2(v_toApplicative_200_, v___x_201_, v___x_202_, v_e_203_, v___y_204_, v_x_205_, v_toBind_206_, v_a_207_);
lean_dec(v___y_204_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(lean_object* v_toApplicative_209_, lean_object* v___x_210_, lean_object* v___x_211_, lean_object* v_e_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_toPure_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_toPure_214_ = lean_ctor_get(v_toApplicative_209_, 1);
lean_inc(v_toPure_214_);
lean_dec_ref(v_toApplicative_209_);
v___x_215_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_210_, v___x_211_, v_a_213_, v_e_212_);
v___x_216_ = lean_apply_2(v_toPure_214_, lean_box(0), v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_217_, lean_object* v___x_218_, lean_object* v___x_219_, lean_object* v_e_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(v_toApplicative_217_, v___x_218_, v___x_219_, v_e_220_, v_a_221_);
lean_dec_ref(v_a_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6(lean_object* v_fn_223_, lean_object* v_e_224_, lean_object* v_toBind_225_, lean_object* v___f_226_, lean_object* v___f_227_, lean_object* v_toApplicative_228_, lean_object* v_a_229_){
_start:
{
if (lean_obj_tag(v_a_229_) == 0)
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
lean_dec_ref(v_toApplicative_228_);
v___x_230_ = lean_apply_1(v_fn_223_, v_e_224_);
lean_inc(v_toBind_225_);
v___x_231_ = lean_apply_4(v_toBind_225_, lean_box(0), lean_box(0), v___x_230_, v___f_226_);
v___x_232_ = lean_apply_4(v_toBind_225_, lean_box(0), lean_box(0), v___x_231_, v___f_227_);
return v___x_232_;
}
else
{
lean_object* v_val_233_; lean_object* v_toPure_234_; lean_object* v___x_235_; 
lean_dec(v___f_227_);
lean_dec(v___f_226_);
lean_dec(v_toBind_225_);
lean_dec_ref(v_e_224_);
lean_dec(v_fn_223_);
v_val_233_ = lean_ctor_get(v_a_229_, 0);
lean_inc(v_val_233_);
lean_dec_ref_known(v_a_229_, 1);
v_toPure_234_ = lean_ctor_get(v_toApplicative_228_, 1);
lean_inc(v_toPure_234_);
lean_dec_ref(v_toApplicative_228_);
v___x_235_ = lean_apply_2(v_toPure_234_, lean_box(0), v_val_233_);
return v___x_235_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_MonadCacheT_instMonadControl___redArg();
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___boxed(lean_object* v_inst_239_, lean_object* v_inst_240_, lean_object* v_fn_241_, lean_object* v_x_242_, lean_object* v_e_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_239_, v_inst_240_, v_fn_241_, v_x_242_, v_e_243_, v___y_244_);
lean_dec(v___y_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4___boxed(lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_fn_248_, lean_object* v_x_249_, lean_object* v_arg_250_, lean_object* v___y_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4(v_inst_246_, v_inst_247_, v_fn_248_, v_x_249_, v_arg_250_, v___y_251_, v_a_252_);
lean_dec(v___y_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(lean_object* v_toApplicative_254_, lean_object* v_e_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_fn_258_, lean_object* v_x_259_, lean_object* v___x_260_, lean_object* v___x_261_, lean_object* v___y_262_, lean_object* v_toBind_263_, uint8_t v_a_264_){
_start:
{
if (v_a_264_ == 0)
{
lean_object* v_toPure_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v___x_261_);
lean_dec_ref(v___x_260_);
lean_dec(v_x_259_);
lean_dec(v_fn_258_);
lean_dec_ref(v_inst_257_);
lean_dec_ref(v_inst_256_);
lean_dec_ref(v_e_255_);
v_toPure_265_ = lean_ctor_get(v_toApplicative_254_, 1);
lean_inc(v_toPure_265_);
lean_dec_ref(v_toApplicative_254_);
v___x_266_ = lean_box(0);
v___x_267_ = lean_apply_2(v_toPure_265_, lean_box(0), v___x_266_);
return v___x_267_;
}
else
{
switch(lean_obj_tag(v_e_255_))
{
case 7:
{
lean_object* v___x_268_; lean_object* v___x_1591__overap_269_; lean_object* v___x_270_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v_toApplicative_254_);
v___x_268_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___boxed), 6, 4);
lean_closure_set(v___x_268_, 0, v_inst_256_);
lean_closure_set(v___x_268_, 1, v_inst_257_);
lean_closure_set(v___x_268_, 2, v_fn_258_);
lean_closure_set(v___x_268_, 3, v_x_259_);
v___x_1591__overap_269_ = l_Lean_Meta_visitForall___redArg(v___x_260_, v___x_261_, v___x_268_, v_e_255_);
lean_inc(v___y_262_);
v___x_270_ = lean_apply_1(v___x_1591__overap_269_, v___y_262_);
return v___x_270_;
}
case 6:
{
lean_object* v___x_271_; lean_object* v___x_1597__overap_272_; lean_object* v___x_273_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v_toApplicative_254_);
v___x_271_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___boxed), 6, 4);
lean_closure_set(v___x_271_, 0, v_inst_256_);
lean_closure_set(v___x_271_, 1, v_inst_257_);
lean_closure_set(v___x_271_, 2, v_fn_258_);
lean_closure_set(v___x_271_, 3, v_x_259_);
v___x_1597__overap_272_ = l_Lean_Meta_visitLambda___redArg(v___x_260_, v___x_261_, v___x_271_, v_e_255_);
lean_inc(v___y_262_);
v___x_273_ = lean_apply_1(v___x_1597__overap_272_, v___y_262_);
return v___x_273_;
}
case 8:
{
lean_object* v___x_274_; lean_object* v___x_1604__overap_275_; lean_object* v___x_276_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v_toApplicative_254_);
v___x_274_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___boxed), 6, 4);
lean_closure_set(v___x_274_, 0, v_inst_256_);
lean_closure_set(v___x_274_, 1, v_inst_257_);
lean_closure_set(v___x_274_, 2, v_fn_258_);
lean_closure_set(v___x_274_, 3, v_x_259_);
v___x_1604__overap_275_ = l_Lean_Meta_visitLet___redArg(v___x_260_, v___x_261_, v___x_274_, v_e_255_);
lean_inc(v___y_262_);
v___x_276_ = lean_apply_1(v___x_1604__overap_275_, v___y_262_);
return v___x_276_;
}
case 5:
{
lean_object* v_fn_277_; lean_object* v_arg_278_; lean_object* v___f_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec_ref(v___x_261_);
lean_dec_ref(v___x_260_);
lean_dec_ref(v_toApplicative_254_);
v_fn_277_ = lean_ctor_get(v_e_255_, 0);
lean_inc_ref(v_fn_277_);
v_arg_278_ = lean_ctor_get(v_e_255_, 1);
lean_inc_ref(v_arg_278_);
lean_dec_ref_known(v_e_255_, 2);
lean_inc(v___y_262_);
lean_inc(v_x_259_);
lean_inc(v_fn_258_);
lean_inc_ref(v_inst_257_);
lean_inc_ref(v_inst_256_);
v___f_279_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4___boxed), 7, 6);
lean_closure_set(v___f_279_, 0, v_inst_256_);
lean_closure_set(v___f_279_, 1, v_inst_257_);
lean_closure_set(v___f_279_, 2, v_fn_258_);
lean_closure_set(v___f_279_, 3, v_x_259_);
lean_closure_set(v___f_279_, 4, v_arg_278_);
lean_closure_set(v___f_279_, 5, v___y_262_);
v___x_280_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_256_, v_inst_257_, v_fn_258_, v_x_259_, v_fn_277_, v___y_262_);
v___x_281_ = lean_apply_4(v_toBind_263_, lean_box(0), lean_box(0), v___x_280_, v___f_279_);
return v___x_281_;
}
case 10:
{
lean_object* v_expr_282_; lean_object* v___x_283_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v___x_261_);
lean_dec_ref(v___x_260_);
lean_dec_ref(v_toApplicative_254_);
v_expr_282_ = lean_ctor_get(v_e_255_, 1);
lean_inc_ref(v_expr_282_);
lean_dec_ref_known(v_e_255_, 2);
v___x_283_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_256_, v_inst_257_, v_fn_258_, v_x_259_, v_expr_282_, v___y_262_);
return v___x_283_;
}
case 11:
{
lean_object* v_struct_284_; lean_object* v___x_285_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v___x_261_);
lean_dec_ref(v___x_260_);
lean_dec_ref(v_toApplicative_254_);
v_struct_284_ = lean_ctor_get(v_e_255_, 2);
lean_inc_ref(v_struct_284_);
lean_dec_ref_known(v_e_255_, 3);
v___x_285_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_256_, v_inst_257_, v_fn_258_, v_x_259_, v_struct_284_, v___y_262_);
return v___x_285_;
}
default: 
{
lean_object* v_toPure_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec(v_toBind_263_);
lean_dec_ref(v___x_261_);
lean_dec_ref(v___x_260_);
lean_dec(v_x_259_);
lean_dec(v_fn_258_);
lean_dec_ref(v_inst_257_);
lean_dec_ref(v_inst_256_);
lean_dec_ref(v_e_255_);
v_toPure_286_ = lean_ctor_get(v_toApplicative_254_, 1);
lean_inc(v_toPure_286_);
lean_dec_ref(v_toApplicative_254_);
v___x_287_ = lean_box(0);
v___x_288_ = lean_apply_2(v_toPure_286_, lean_box(0), v___x_287_);
return v___x_288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed(lean_object* v_toApplicative_289_, lean_object* v_e_290_, lean_object* v_inst_291_, lean_object* v_inst_292_, lean_object* v_fn_293_, lean_object* v_x_294_, lean_object* v___x_295_, lean_object* v___x_296_, lean_object* v___y_297_, lean_object* v_toBind_298_, lean_object* v_a_299_){
_start:
{
uint8_t v_a_boxed_300_; lean_object* v_res_301_; 
v_a_boxed_300_ = lean_unbox(v_a_299_);
v_res_301_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(v_toApplicative_289_, v_e_290_, v_inst_291_, v_inst_292_, v_fn_293_, v_x_294_, v___x_295_, v___x_296_, v___y_297_, v_toBind_298_, v_a_boxed_300_);
lean_dec(v___y_297_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(lean_object* v_inst_302_, lean_object* v_inst_303_, lean_object* v_fn_304_, lean_object* v_x_305_, lean_object* v_e_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___f_310_; lean_object* v___f_311_; lean_object* v___x_312_; lean_object* v_toApplicative_313_; lean_object* v_toBind_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___f_318_; lean_object* v___f_319_; lean_object* v___f_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_inc_ref(v_inst_302_);
v___x_308_ = l_Lean_MonadCacheT_instMonad___redArg(v_inst_302_);
v___x_309_ = lean_obj_once(&l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0, &l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0);
lean_inc_ref_n(v_inst_303_, 2);
v___f_310_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_310_, 0, v___x_309_);
lean_closure_set(v___f_310_, 1, v_inst_303_);
v___f_311_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_311_, 0, v___x_309_);
lean_closure_set(v___f_311_, 1, v_inst_303_);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___f_310_);
lean_ctor_set(v___x_312_, 1, v___f_311_);
v_toApplicative_313_ = lean_ctor_get(v_inst_302_, 0);
lean_inc_ref_n(v_toApplicative_313_, 4);
v_toBind_314_ = lean_ctor_get(v_inst_302_, 1);
lean_inc_n(v_toBind_314_, 5);
v___x_315_ = ((lean_object*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1));
v___x_316_ = ((lean_object*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__2));
lean_inc_n(v_x_305_, 2);
lean_inc_n(v___y_307_, 3);
lean_inc_ref_n(v_e_306_, 3);
v___f_317_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_317_, 0, v_toApplicative_313_);
lean_closure_set(v___f_317_, 1, v___x_315_);
lean_closure_set(v___f_317_, 2, v___x_316_);
lean_closure_set(v___f_317_, 3, v_e_306_);
lean_closure_set(v___f_317_, 4, v___y_307_);
lean_closure_set(v___f_317_, 5, v_x_305_);
lean_closure_set(v___f_317_, 6, v_toBind_314_);
v___f_318_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_318_, 0, v_toApplicative_313_);
lean_closure_set(v___f_318_, 1, v___x_315_);
lean_closure_set(v___f_318_, 2, v___x_316_);
lean_closure_set(v___f_318_, 3, v_e_306_);
lean_inc(v_fn_304_);
v___f_319_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed), 11, 10);
lean_closure_set(v___f_319_, 0, v_toApplicative_313_);
lean_closure_set(v___f_319_, 1, v_e_306_);
lean_closure_set(v___f_319_, 2, v_inst_302_);
lean_closure_set(v___f_319_, 3, v_inst_303_);
lean_closure_set(v___f_319_, 4, v_fn_304_);
lean_closure_set(v___f_319_, 5, v_x_305_);
lean_closure_set(v___f_319_, 6, v___x_308_);
lean_closure_set(v___f_319_, 7, v___x_312_);
lean_closure_set(v___f_319_, 8, v___y_307_);
lean_closure_set(v___f_319_, 9, v_toBind_314_);
v___f_320_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6), 7, 6);
lean_closure_set(v___f_320_, 0, v_fn_304_);
lean_closure_set(v___f_320_, 1, v_e_306_);
lean_closure_set(v___f_320_, 2, v_toBind_314_);
lean_closure_set(v___f_320_, 3, v___f_319_);
lean_closure_set(v___f_320_, 4, v___f_317_);
lean_closure_set(v___f_320_, 5, v_toApplicative_313_);
v___x_321_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_321_, 0, lean_box(0));
lean_closure_set(v___x_321_, 1, lean_box(0));
lean_closure_set(v___x_321_, 2, v___y_307_);
v___x_322_ = lean_apply_2(v_x_305_, lean_box(0), v___x_321_);
v___x_323_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_322_, v___f_318_);
v___x_324_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_323_, v___f_320_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4(lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_fn_327_, lean_object* v_x_328_, lean_object* v_arg_329_, lean_object* v___y_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_325_, v_inst_326_, v_fn_327_, v_x_328_, v_arg_329_, v___y_330_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit(lean_object* v_m_333_, lean_object* v_inst_334_, lean_object* v_inst_335_, lean_object* v_fn_336_, lean_object* v_x_337_, lean_object* v_x_338_, lean_object* v_e_339_, lean_object* v___y_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_334_, v_inst_335_, v_fn_336_, v_x_338_, v_e_339_, v___y_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___boxed(lean_object* v_m_342_, lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_fn_345_, lean_object* v_x_346_, lean_object* v_x_347_, lean_object* v_e_348_, lean_object* v___y_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit(v_m_342_, v_inst_343_, v_inst_344_, v_fn_345_, v_x_346_, v_x_347_, v_e_348_, v___y_349_);
lean_dec(v___y_349_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0(lean_object* v_x_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_apply_1(v_x_351_, lean_box(0));
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed(lean_object* v_x_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_Meta_forEachExpr_x27___redArg___lam__0(v_x_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__1(lean_object* v_inst_366_, lean_object* v_00_u03b1_367_, lean_object* v_x_368_){
_start:
{
lean_object* v___f_369_; lean_object* v___x_370_; 
v___f_369_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_369_, 0, v_x_368_);
v___x_370_ = lean_apply_2(v_inst_366_, lean_box(0), v___f_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__2(lean_object* v_toPure_371_, lean_object* v_____x_372_){
_start:
{
lean_object* v_fst_373_; lean_object* v___x_374_; 
v_fst_373_ = lean_ctor_get(v_____x_372_, 0);
lean_inc(v_fst_373_);
lean_dec_ref(v_____x_372_);
v___x_374_ = lean_apply_2(v_toPure_371_, lean_box(0), v_fst_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__3(lean_object* v_a_375_, lean_object* v_toPure_376_, lean_object* v_s_377_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_a_375_);
lean_ctor_set(v___x_378_, 1, v_s_377_);
v___x_379_ = lean_apply_2(v_toPure_376_, lean_box(0), v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__4(lean_object* v_toPure_380_, lean_object* v_ref_381_, lean_object* v_x_382_, lean_object* v_toBind_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___f_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___f_385_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__3), 3, 2);
lean_closure_set(v___f_385_, 0, v_a_384_);
lean_closure_set(v___f_385_, 1, v_toPure_380_);
v___x_386_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_386_, 0, lean_box(0));
lean_closure_set(v___x_386_, 1, lean_box(0));
lean_closure_set(v___x_386_, 2, v_ref_381_);
v___x_387_ = lean_apply_2(v_x_382_, lean_box(0), v___x_386_);
v___x_388_ = lean_apply_4(v_toBind_383_, lean_box(0), lean_box(0), v___x_387_, v___f_385_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__5(lean_object* v_toPure_389_, lean_object* v_x_390_, lean_object* v_toBind_391_, lean_object* v_inst_392_, lean_object* v_inst_393_, lean_object* v_fn_394_, lean_object* v_input_395_, lean_object* v_ref_396_){
_start:
{
lean_object* v___f_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_inc(v_toBind_391_);
lean_inc(v_x_390_);
lean_inc(v_ref_396_);
v___f_397_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__4), 5, 4);
lean_closure_set(v___f_397_, 0, v_toPure_389_);
lean_closure_set(v___f_397_, 1, v_ref_396_);
lean_closure_set(v___f_397_, 2, v_x_390_);
lean_closure_set(v___f_397_, 3, v_toBind_391_);
v___x_398_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_392_, v_inst_393_, v_fn_394_, v_x_390_, v_input_395_, v_ref_396_);
lean_dec(v_ref_396_);
v___x_399_ = lean_apply_4(v_toBind_391_, lean_box(0), lean_box(0), v___x_398_, v___f_397_);
return v___x_399_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_box(0);
v___x_401_ = lean_unsigned_to_nat(16u);
v___x_402_ = lean_mk_array(v___x_401_, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__1(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__0, &l_Lean_Meta_forEachExpr_x27___redArg___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__0);
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_403_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__1, &l_Lean_Meta_forEachExpr_x27___redArg___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__1);
v___x_407_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_407_, 0, lean_box(0));
lean_closure_set(v___x_407_, 1, lean_box(0));
lean_closure_set(v___x_407_, 2, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg(lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_inst_410_, lean_object* v_input_411_, lean_object* v_fn_412_){
_start:
{
lean_object* v_toApplicative_413_; lean_object* v_toBind_414_; lean_object* v_toPure_415_; lean_object* v_x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___f_419_; lean_object* v___f_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_toApplicative_413_ = lean_ctor_get(v_inst_408_, 0);
v_toBind_414_ = lean_ctor_get(v_inst_408_, 1);
lean_inc_n(v_toBind_414_, 3);
v_toPure_415_ = lean_ctor_get(v_toApplicative_413_, 1);
lean_inc_n(v_toPure_415_, 2);
lean_inc(v_inst_409_);
v_x_416_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__1), 3, 1);
lean_closure_set(v_x_416_, 0, v_inst_409_);
v___x_417_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__2, &l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2);
v___x_418_ = l_Lean_Meta_forEachExpr_x27___redArg___lam__1(v_inst_409_, lean_box(0), v___x_417_);
v___f_419_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_419_, 0, v_toPure_415_);
v___f_420_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__5), 8, 7);
lean_closure_set(v___f_420_, 0, v_toPure_415_);
lean_closure_set(v___f_420_, 1, v_x_416_);
lean_closure_set(v___f_420_, 2, v_toBind_414_);
lean_closure_set(v___f_420_, 3, v_inst_408_);
lean_closure_set(v___f_420_, 4, v_inst_410_);
lean_closure_set(v___f_420_, 5, v_fn_412_);
lean_closure_set(v___f_420_, 6, v_input_411_);
v___x_421_ = lean_apply_4(v_toBind_414_, lean_box(0), lean_box(0), v___x_418_, v___f_420_);
v___x_422_ = lean_apply_4(v_toBind_414_, lean_box(0), lean_box(0), v___x_421_, v___f_419_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27(lean_object* v_m_423_, lean_object* v_inst_424_, lean_object* v_inst_425_, lean_object* v_inst_426_, lean_object* v_input_427_, lean_object* v_fn_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Meta_forEachExpr_x27___redArg(v_inst_424_, v_inst_425_, v_inst_426_, v_input_427_, v_fn_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__0(lean_object* v_toPure_430_, lean_object* v_____r_431_){
_start:
{
uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = 1;
v___x_433_ = lean_box(v___x_432_);
v___x_434_ = lean_apply_2(v_toPure_430_, lean_box(0), v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__1(lean_object* v_f_435_, lean_object* v_toBind_436_, lean_object* v___f_437_, lean_object* v_e_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_apply_1(v_f_435_, v_e_438_);
v___x_440_ = lean_apply_4(v_toBind_436_, lean_box(0), lean_box(0), v___x_439_, v___f_437_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg(lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_inst_443_, lean_object* v_e_444_, lean_object* v_f_445_){
_start:
{
lean_object* v_toApplicative_446_; lean_object* v_toBind_447_; lean_object* v_toPure_448_; lean_object* v___f_449_; lean_object* v___f_450_; lean_object* v___x_451_; 
v_toApplicative_446_ = lean_ctor_get(v_inst_441_, 0);
v_toBind_447_ = lean_ctor_get(v_inst_441_, 1);
v_toPure_448_ = lean_ctor_get(v_toApplicative_446_, 1);
lean_inc(v_toPure_448_);
v___f_449_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___redArg___lam__0), 2, 1);
lean_closure_set(v___f_449_, 0, v_toPure_448_);
lean_inc(v_toBind_447_);
v___f_450_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___redArg___lam__1), 4, 3);
lean_closure_set(v___f_450_, 0, v_f_445_);
lean_closure_set(v___f_450_, 1, v_toBind_447_);
lean_closure_set(v___f_450_, 2, v___f_449_);
v___x_451_ = l_Lean_Meta_forEachExpr_x27___redArg(v_inst_441_, v_inst_442_, v_inst_443_, v_e_444_, v___f_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr(lean_object* v_m_452_, lean_object* v_inst_453_, lean_object* v_inst_454_, lean_object* v_inst_455_, lean_object* v_e_456_, lean_object* v_f_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_Meta_forEachExpr___redArg(v_inst_453_, v_inst_454_, v_inst_455_, v_e_456_, v_f_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(lean_object* v_toPure_459_, lean_object* v_____do__lift_460_){
_start:
{
lean_object* v_userName_461_; uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_userName_461_ = lean_ctor_get(v_____do__lift_460_, 0);
v___x_462_ = l_Lean_Name_isAnonymous(v_userName_461_);
v___x_463_ = lean_box(v___x_462_);
v___x_464_ = lean_apply_2(v_toPure_459_, lean_box(0), v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed(lean_object* v_toPure_465_, lean_object* v_____do__lift_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(v_toPure_465_, v_____do__lift_466_);
lean_dec_ref(v_____do__lift_466_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(lean_object* v_inst_468_, lean_object* v_inst_469_, lean_object* v_x_470_){
_start:
{
lean_object* v_toApplicative_471_; 
v_toApplicative_471_ = lean_ctor_get(v_inst_468_, 0);
lean_inc_ref(v_toApplicative_471_);
if (lean_obj_tag(v_x_470_) == 2)
{
lean_object* v_toBind_472_; lean_object* v_toPure_473_; lean_object* v_mvarId_474_; lean_object* v___f_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_toBind_472_ = lean_ctor_get(v_inst_468_, 1);
lean_inc(v_toBind_472_);
lean_dec_ref(v_inst_468_);
v_toPure_473_ = lean_ctor_get(v_toApplicative_471_, 1);
lean_inc(v_toPure_473_);
lean_dec_ref(v_toApplicative_471_);
v_mvarId_474_ = lean_ctor_get(v_x_470_, 0);
lean_inc(v_mvarId_474_);
lean_dec_ref_known(v_x_470_, 1);
v___f_475_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_475_, 0, v_toPure_473_);
v___x_476_ = lean_alloc_closure((void*)(l_Lean_MVarId_getDecl___boxed), 6, 1);
lean_closure_set(v___x_476_, 0, v_mvarId_474_);
v___x_477_ = lean_apply_2(v_inst_469_, lean_box(0), v___x_476_);
v___x_478_ = lean_apply_4(v_toBind_472_, lean_box(0), lean_box(0), v___x_477_, v___f_475_);
return v___x_478_;
}
else
{
lean_object* v_toPure_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec_ref(v_x_470_);
lean_dec(v_inst_469_);
lean_dec_ref(v_inst_468_);
v_toPure_479_ = lean_ctor_get(v_toApplicative_471_, 1);
lean_inc(v_toPure_479_);
lean_dec_ref(v_toApplicative_471_);
v___x_480_ = 0;
v___x_481_ = lean_box(v___x_480_);
v___x_482_ = lean_apply_2(v_toPure_479_, lean_box(0), v___x_481_);
return v___x_482_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName(lean_object* v_m_483_, lean_object* v_inst_484_, lean_object* v_inst_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(v_inst_484_, v_inst_485_, v_x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(lean_object* v_k_488_, lean_object* v_b_489_, lean_object* v_c_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; 
lean_inc(v___y_494_);
lean_inc_ref(v___y_493_);
lean_inc(v___y_492_);
lean_inc_ref(v___y_491_);
v___x_496_ = lean_apply_7(v_k_488_, v_b_489_, v_c_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, lean_box(0));
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed(lean_object* v_k_497_, lean_object* v_b_498_, lean_object* v_c_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(v_k_497_, v_b_498_, v_c_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(lean_object* v_type_506_, lean_object* v_maxFVars_x3f_507_, lean_object* v_k_508_, uint8_t v_cleanupAnnotations_509_, uint8_t v_whnfType_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___f_516_; lean_object* v___x_517_; 
v___f_516_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_516_, 0, v_k_508_);
v___x_517_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_506_, v_maxFVars_x3f_507_, v___f_516_, v_cleanupAnnotations_509_, v_whnfType_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_517_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_517_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___boxed(lean_object* v_type_534_, lean_object* v_maxFVars_x3f_535_, lean_object* v_k_536_, lean_object* v_cleanupAnnotations_537_, lean_object* v_whnfType_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_544_; uint8_t v_whnfType_boxed_545_; lean_object* v_res_546_; 
v_cleanupAnnotations_boxed_544_ = lean_unbox(v_cleanupAnnotations_537_);
v_whnfType_boxed_545_ = lean_unbox(v_whnfType_538_);
v_res_546_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_type_534_, v_maxFVars_x3f_535_, v_k_536_, v_cleanupAnnotations_boxed_544_, v_whnfType_boxed_545_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(lean_object* v_00_u03b1_547_, lean_object* v_type_548_, lean_object* v_maxFVars_x3f_549_, lean_object* v_k_550_, uint8_t v_cleanupAnnotations_551_, uint8_t v_whnfType_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_type_548_, v_maxFVars_x3f_549_, v_k_550_, v_cleanupAnnotations_551_, v_whnfType_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___boxed(lean_object* v_00_u03b1_559_, lean_object* v_type_560_, lean_object* v_maxFVars_x3f_561_, lean_object* v_k_562_, lean_object* v_cleanupAnnotations_563_, lean_object* v_whnfType_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_570_; uint8_t v_whnfType_boxed_571_; lean_object* v_res_572_; 
v_cleanupAnnotations_boxed_570_ = lean_unbox(v_cleanupAnnotations_563_);
v_whnfType_boxed_571_ = lean_unbox(v_whnfType_564_);
v_res_572_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(v_00_u03b1_559_, v_type_560_, v_maxFVars_x3f_561_, v_k_562_, v_cleanupAnnotations_boxed_570_, v_whnfType_boxed_571_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(lean_object* v_e_573_, lean_object* v___y_574_){
_start:
{
uint8_t v___x_576_; 
v___x_576_ = l_Lean_Expr_hasMVar(v_e_573_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v_e_573_);
return v___x_577_;
}
else
{
lean_object* v___x_578_; lean_object* v_mctx_579_; lean_object* v___x_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_583_; lean_object* v_cache_584_; lean_object* v_zetaDeltaFVarIds_585_; lean_object* v_postponed_586_; lean_object* v_diag_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_596_; 
v___x_578_ = lean_st_ref_get(v___y_574_);
v_mctx_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc_ref(v_mctx_579_);
lean_dec(v___x_578_);
v___x_580_ = l_Lean_instantiateMVarsCore(v_mctx_579_, v_e_573_);
v_fst_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_fst_581_);
v_snd_582_ = lean_ctor_get(v___x_580_, 1);
lean_inc(v_snd_582_);
lean_dec_ref(v___x_580_);
v___x_583_ = lean_st_ref_take(v___y_574_);
v_cache_584_ = lean_ctor_get(v___x_583_, 1);
v_zetaDeltaFVarIds_585_ = lean_ctor_get(v___x_583_, 2);
v_postponed_586_ = lean_ctor_get(v___x_583_, 3);
v_diag_587_ = lean_ctor_get(v___x_583_, 4);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v___x_583_, 0);
lean_dec(v_unused_597_);
v___x_589_ = v___x_583_;
v_isShared_590_ = v_isSharedCheck_596_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_diag_587_);
lean_inc(v_postponed_586_);
lean_inc(v_zetaDeltaFVarIds_585_);
lean_inc(v_cache_584_);
lean_dec(v___x_583_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_596_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v_snd_582_);
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_snd_582_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v_cache_584_);
lean_ctor_set(v_reuseFailAlloc_595_, 2, v_zetaDeltaFVarIds_585_);
lean_ctor_set(v_reuseFailAlloc_595_, 3, v_postponed_586_);
lean_ctor_set(v_reuseFailAlloc_595_, 4, v_diag_587_);
v___x_592_ = v_reuseFailAlloc_595_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_st_ref_put(v___y_574_, v___x_592_);
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v_fst_581_);
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg___boxed(lean_object* v_e_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_598_, v___y_599_);
lean_dec(v___y_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(lean_object* v_e_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_602_, v___y_604_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___boxed(lean_object* v_e_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(v_e_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(lean_object* v_a_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v_val_619_, lean_object* v___x_620_, lean_object* v_xs_621_, lean_object* v_x_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_628_ = lean_array_get_size(v_xs_621_);
v___x_629_ = lean_nat_dec_lt(v_a_616_, v___x_628_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; 
lean_dec(v___x_620_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_617_);
return v___x_630_;
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_array_get_borrowed(v___x_618_, v_xs_621_, v_a_616_);
v___x_632_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_631_, v___y_623_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = l_Lean_LocalDecl_userName(v_a_633_);
lean_dec(v_a_633_);
v___x_635_ = l_Lean_Core_mkFreshUserName(v___x_634_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_661_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_661_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_661_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_661_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_mctx_644_; lean_object* v_cache_645_; lean_object* v_zetaDeltaFVarIds_646_; lean_object* v_postponed_647_; lean_object* v_diag_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_660_; 
v___x_640_ = lean_st_ref_take(v_val_619_);
lean_inc(v___x_620_);
v___x_641_ = lean_array_push(v___x_640_, v___x_620_);
v___x_642_ = lean_st_ref_put(v_val_619_, v___x_641_);
v___x_643_ = lean_st_ref_take(v___y_624_);
v_mctx_644_ = lean_ctor_get(v___x_643_, 0);
v_cache_645_ = lean_ctor_get(v___x_643_, 1);
v_zetaDeltaFVarIds_646_ = lean_ctor_get(v___x_643_, 2);
v_postponed_647_ = lean_ctor_get(v___x_643_, 3);
v_diag_648_ = lean_ctor_get(v___x_643_, 4);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_660_ == 0)
{
v___x_650_ = v___x_643_;
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_diag_648_);
lean_inc(v_postponed_647_);
lean_inc(v_zetaDeltaFVarIds_646_);
lean_inc(v_cache_645_);
lean_inc(v_mctx_644_);
lean_dec(v___x_643_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = l_Lean_MetavarContext_setMVarUserNameTemporarily(v_mctx_644_, v___x_620_, v_a_636_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_652_);
v___x_654_ = v___x_650_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_cache_645_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_zetaDeltaFVarIds_646_);
lean_ctor_set(v_reuseFailAlloc_659_, 3, v_postponed_647_);
lean_ctor_set(v_reuseFailAlloc_659_, 4, v_diag_648_);
v___x_654_ = v_reuseFailAlloc_659_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = lean_st_ref_put(v___y_624_, v___x_654_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_617_);
v___x_657_ = v___x_638_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_617_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec(v___x_620_);
v_a_662_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_635_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_635_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec(v___x_620_);
v_a_670_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_632_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_632_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed(lean_object* v_a_678_, lean_object* v___x_679_, lean_object* v___x_680_, lean_object* v_val_681_, lean_object* v___x_682_, lean_object* v_xs_683_, lean_object* v_x_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(v_a_678_, v___x_679_, v___x_680_, v_val_681_, v___x_682_, v_xs_683_, v_x_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec_ref(v_x_684_);
lean_dec_ref(v_xs_683_);
lean_dec(v_val_681_);
lean_dec_ref(v___x_680_);
lean_dec(v_a_678_);
return v_res_690_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(lean_object* v_a_691_, lean_object* v_as_692_, size_t v_i_693_, size_t v_stop_694_){
_start:
{
uint8_t v___x_695_; 
v___x_695_ = lean_usize_dec_eq(v_i_693_, v_stop_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_array_uget_borrowed(v_as_692_, v_i_693_);
v___x_697_ = lean_expr_eqv(v_a_691_, v___x_696_);
if (v___x_697_ == 0)
{
size_t v___x_698_; size_t v___x_699_; 
v___x_698_ = ((size_t)1ULL);
v___x_699_ = lean_usize_add(v_i_693_, v___x_698_);
v_i_693_ = v___x_699_;
goto _start;
}
else
{
return v___x_697_;
}
}
else
{
uint8_t v___x_701_; 
v___x_701_ = 0;
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1___boxed(lean_object* v_a_702_, lean_object* v_as_703_, lean_object* v_i_704_, lean_object* v_stop_705_){
_start:
{
size_t v_i_boxed_706_; size_t v_stop_boxed_707_; uint8_t v_res_708_; lean_object* v_r_709_; 
v_i_boxed_706_ = lean_unbox_usize(v_i_704_);
lean_dec(v_i_704_);
v_stop_boxed_707_ = lean_unbox_usize(v_stop_705_);
lean_dec(v_stop_705_);
v_res_708_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(v_a_702_, v_as_703_, v_i_boxed_706_, v_stop_boxed_707_);
lean_dec_ref(v_as_703_);
lean_dec_ref(v_a_702_);
v_r_709_ = lean_box(v_res_708_);
return v_r_709_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(lean_object* v_as_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_array_get_size(v_as_710_);
v___x_714_ = lean_nat_dec_lt(v___x_712_, v___x_713_);
if (v___x_714_ == 0)
{
return v___x_714_;
}
else
{
if (v___x_714_ == 0)
{
return v___x_714_;
}
else
{
size_t v___x_715_; size_t v___x_716_; uint8_t v___x_717_; 
v___x_715_ = ((size_t)0ULL);
v___x_716_ = lean_usize_of_nat(v___x_713_);
v___x_717_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(v_a_711_, v_as_710_, v___x_715_, v___x_716_);
return v___x_717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1___boxed(lean_object* v_as_718_, lean_object* v_a_719_){
_start:
{
uint8_t v_res_720_; lean_object* v_r_721_; 
v_res_720_ = l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(v_as_718_, v_a_719_);
lean_dec_ref(v_a_719_);
lean_dec_ref(v_as_718_);
v_r_721_ = lean_box(v_res_720_);
return v_r_721_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(lean_object* v_upperBound_722_, lean_object* v___x_723_, lean_object* v_val_724_, lean_object* v_e_725_, lean_object* v_isTarget_726_, lean_object* v_a_727_, lean_object* v_b_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_a_735_; uint8_t v___x_739_; 
v___x_739_ = lean_nat_dec_lt(v_a_727_, v_upperBound_722_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
lean_dec(v_a_727_);
lean_dec(v_val_724_);
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_b_728_);
return v___x_740_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___y_745_; uint8_t v___x_776_; 
v___x_741_ = lean_box(0);
v___x_742_ = l_Lean_instInhabitedExpr;
v___x_743_ = lean_array_fget_borrowed(v___x_723_, v_a_727_);
v___x_776_ = l_Lean_Expr_isMVar(v___x_743_);
if (v___x_776_ == 0)
{
v___y_745_ = v___x_776_;
goto v___jp_744_;
}
else
{
uint8_t v___x_777_; 
v___x_777_ = l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(v_isTarget_726_, v___x_743_);
v___y_745_ = v___x_777_;
goto v___jp_744_;
}
v___jp_744_:
{
if (v___y_745_ == 0)
{
v_a_735_ = v___x_741_;
goto v___jp_734_;
}
else
{
lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v___x_746_ = l_Lean_Expr_mvarId_x21(v___x_743_);
lean_inc(v___x_746_);
lean_inc(v_val_724_);
lean_inc(v_a_727_);
v___f_747_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed), 12, 5);
lean_closure_set(v___f_747_, 0, v_a_727_);
lean_closure_set(v___f_747_, 1, v___x_741_);
lean_closure_set(v___f_747_, 2, v___x_742_);
lean_closure_set(v___f_747_, 3, v_val_724_);
lean_closure_set(v___f_747_, 4, v___x_746_);
v___x_748_ = l_Lean_MVarId_getDecl(v___x_746_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v_userName_750_; uint8_t v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v_userName_750_ = lean_ctor_get(v_a_749_, 0);
lean_inc(v_userName_750_);
lean_dec(v_a_749_);
v___x_751_ = l_Lean_Name_isAnonymous(v_userName_750_);
lean_dec(v_userName_750_);
if (v___x_751_ == 0)
{
lean_dec_ref(v___f_747_);
v_a_735_ = v___x_741_;
goto v___jp_734_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = l_Lean_Expr_getAppFn(v_e_725_);
lean_inc(v___y_732_);
lean_inc_ref(v___y_731_);
lean_inc(v___y_730_);
lean_inc_ref(v___y_729_);
v___x_753_ = lean_infer_type(v___x_752_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v___x_758_; lean_object* v___x_759_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = lean_unsigned_to_nat(1u);
v___x_756_ = lean_nat_add(v_a_727_, v___x_755_);
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = 0;
v___x_759_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_a_754_, v___x_757_, v___f_747_, v___x_758_, v___x_758_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_dec_ref_known(v___x_759_, 1);
v_a_735_ = v___x_741_;
goto v___jp_734_;
}
else
{
lean_dec(v_a_727_);
lean_dec(v_val_724_);
return v___x_759_;
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec_ref(v___f_747_);
lean_dec(v_a_727_);
lean_dec(v_val_724_);
v_a_760_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_753_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_753_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec_ref(v___f_747_);
lean_dec(v_a_727_);
lean_dec(v_val_724_);
v_a_768_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_748_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_748_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
}
}
v___jp_734_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_unsigned_to_nat(1u);
v___x_737_ = lean_nat_add(v_a_727_, v___x_736_);
lean_dec(v_a_727_);
v_a_727_ = v___x_737_;
v_b_728_ = v_a_735_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___boxed(lean_object* v_upperBound_778_, lean_object* v___x_779_, lean_object* v_val_780_, lean_object* v_e_781_, lean_object* v_isTarget_782_, lean_object* v_a_783_, lean_object* v_b_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v_upperBound_778_, v___x_779_, v_val_780_, v_e_781_, v_isTarget_782_, v_a_783_, v_b_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec_ref(v_isTarget_782_);
lean_dec_ref(v_e_781_);
lean_dec_ref(v___x_779_);
lean_dec(v_upperBound_778_);
return v_res_790_;
}
}
static lean_object* _init_l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0(void){
_start:
{
lean_object* v___x_791_; lean_object* v_dummy_792_; 
v___x_791_ = lean_box(0);
v_dummy_792_ = l_Lean_Expr_sort___override(v___x_791_);
return v_dummy_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0(lean_object* v_val_793_, lean_object* v_isTarget_794_, lean_object* v___x_795_, lean_object* v_e_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
uint8_t v___x_802_; 
v___x_802_ = l_Lean_Expr_isApp(v_e_796_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec_ref(v_e_796_);
lean_dec(v___x_795_);
lean_dec(v_val_793_);
v___x_803_ = lean_box(0);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
else
{
lean_object* v_dummy_805_; lean_object* v_nargs_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_dummy_805_ = lean_obj_once(&l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0, &l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0_once, _init_l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0);
v_nargs_806_ = l_Lean_Expr_getAppNumArgs(v_e_796_);
lean_inc(v_nargs_806_);
v___x_807_ = lean_mk_array(v_nargs_806_, v_dummy_805_);
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = lean_nat_sub(v_nargs_806_, v___x_808_);
lean_dec(v_nargs_806_);
lean_inc_ref(v_e_796_);
v___x_810_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_796_, v___x_807_, v___x_809_);
v___x_811_ = lean_array_get_size(v___x_810_);
v___x_812_ = lean_box(0);
v___x_813_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v___x_811_, v___x_810_, v_val_793_, v_e_796_, v_isTarget_794_, v___x_795_, v___x_812_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec_ref(v_e_796_);
lean_dec_ref(v___x_810_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v___x_813_, 0);
lean_dec(v_unused_821_);
v___x_815_ = v___x_813_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_dec(v___x_813_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_812_);
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_812_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
return v___x_813_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed(lean_object* v_val_822_, lean_object* v_isTarget_823_, lean_object* v___x_824_, lean_object* v_e_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lean_Meta_setMVarUserNamesAt___lam__0(v_val_822_, v_isTarget_823_, v___x_824_, v_e_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v_isTarget_823_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(lean_object* v_k_832_, lean_object* v___y_833_, lean_object* v_b_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; 
lean_inc(v___y_838_);
lean_inc_ref(v___y_837_);
lean_inc(v___y_836_);
lean_inc_ref(v___y_835_);
lean_inc(v___y_833_);
v___x_840_ = lean_apply_7(v_k_832_, v_b_834_, v___y_833_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, lean_box(0));
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed(lean_object* v_k_841_, lean_object* v___y_842_, lean_object* v_b_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(v_k_841_, v___y_842_, v_b_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_842_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(lean_object* v_name_850_, uint8_t v_bi_851_, lean_object* v_type_852_, lean_object* v_k_853_, uint8_t v_kind_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v___f_861_; lean_object* v___x_862_; 
lean_inc(v___y_855_);
v___f_861_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_861_, 0, v_k_853_);
lean_closure_set(v___f_861_, 1, v___y_855_);
v___x_862_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_850_, v_bi_851_, v_type_852_, v___f_861_, v_kind_854_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
if (lean_obj_tag(v___x_862_) == 0)
{
return v___x_862_;
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___boxed(lean_object* v_name_871_, lean_object* v_bi_872_, lean_object* v_type_873_, lean_object* v_k_874_, lean_object* v_kind_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
uint8_t v_bi_boxed_882_; uint8_t v_kind_boxed_883_; lean_object* v_res_884_; 
v_bi_boxed_882_ = lean_unbox(v_bi_872_);
v_kind_boxed_883_ = lean_unbox(v_kind_875_);
v_res_884_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_name_871_, v_bi_boxed_882_, v_type_873_, v_k_874_, v_kind_boxed_883_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed(lean_object* v_fvars_885_, lean_object* v_f_886_, lean_object* v_body_887_, lean_object* v_x_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(v_fvars_885_, v_f_886_, v_body_887_, v_x_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(lean_object* v_f_896_, lean_object* v_fvars_897_, lean_object* v_a_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
if (lean_obj_tag(v_a_898_) == 6)
{
lean_object* v_binderName_905_; lean_object* v_binderType_906_; lean_object* v_body_907_; uint8_t v_binderInfo_908_; lean_object* v___f_909_; lean_object* v_d_910_; lean_object* v___x_911_; 
v_binderName_905_ = lean_ctor_get(v_a_898_, 0);
lean_inc(v_binderName_905_);
v_binderType_906_ = lean_ctor_get(v_a_898_, 1);
lean_inc_ref(v_binderType_906_);
v_body_907_ = lean_ctor_get(v_a_898_, 2);
lean_inc_ref(v_body_907_);
v_binderInfo_908_ = lean_ctor_get_uint8(v_a_898_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_898_, 3);
lean_inc_ref(v_f_896_);
lean_inc_ref(v_fvars_897_);
v___f_909_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed), 10, 3);
lean_closure_set(v___f_909_, 0, v_fvars_897_);
lean_closure_set(v___f_909_, 1, v_f_896_);
lean_closure_set(v___f_909_, 2, v_body_907_);
v_d_910_ = lean_expr_instantiate_rev(v_binderType_906_, v_fvars_897_);
lean_dec_ref(v_fvars_897_);
lean_dec_ref(v_binderType_906_);
lean_inc(v___y_903_);
lean_inc_ref(v___y_902_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v___y_899_);
lean_inc_ref(v_d_910_);
v___x_911_ = lean_apply_7(v_f_896_, v_d_910_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, lean_box(0));
if (lean_obj_tag(v___x_911_) == 0)
{
uint8_t v___x_912_; lean_object* v___x_913_; 
lean_dec_ref_known(v___x_911_, 1);
v___x_912_ = 0;
v___x_913_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_binderName_905_, v_binderInfo_908_, v_d_910_, v___f_909_, v___x_912_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
return v___x_913_;
}
else
{
lean_dec_ref(v_d_910_);
lean_dec_ref(v___f_909_);
lean_dec(v_binderName_905_);
return v___x_911_;
}
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = lean_expr_instantiate_rev(v_a_898_, v_fvars_897_);
lean_dec_ref(v_fvars_897_);
lean_dec_ref(v_a_898_);
lean_inc(v___y_903_);
lean_inc_ref(v___y_902_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v___y_899_);
v___x_915_ = lean_apply_7(v_f_896_, v___x_914_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, lean_box(0));
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(lean_object* v_fvars_916_, lean_object* v_f_917_, lean_object* v_body_918_, lean_object* v_x_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = lean_array_push(v_fvars_916_, v_x_919_);
v___x_927_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_917_, v___x_926_, v_body_918_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___boxed(lean_object* v_f_928_, lean_object* v_fvars_929_, lean_object* v_a_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_928_, v_fvars_929_, v_a_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(lean_object* v_f_938_, lean_object* v_e_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_947_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_938_, v___x_946_, v_e_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10___boxed(lean_object* v_f_948_, lean_object* v_e_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(v_f_948_, v_e_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_object* v_00_u03b1_957_, lean_object* v_x_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = lean_apply_1(v_x_958_, lean_box(0));
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0___boxed(lean_object* v_00_u03b1_966_, lean_object* v_x_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(v_00_u03b1_966_, v_x_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_974_, lean_object* v_f_975_, lean_object* v_body_976_, lean_object* v_x_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(v_fvars_974_, v_f_975_, v_body_976_, v_x_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(lean_object* v_f_985_, lean_object* v_fvars_986_, lean_object* v_a_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
if (lean_obj_tag(v_a_987_) == 7)
{
lean_object* v_binderName_994_; lean_object* v_binderType_995_; lean_object* v_body_996_; uint8_t v_binderInfo_997_; lean_object* v___f_998_; lean_object* v_d_999_; lean_object* v___x_1000_; 
v_binderName_994_ = lean_ctor_get(v_a_987_, 0);
lean_inc(v_binderName_994_);
v_binderType_995_ = lean_ctor_get(v_a_987_, 1);
lean_inc_ref(v_binderType_995_);
v_body_996_ = lean_ctor_get(v_a_987_, 2);
lean_inc_ref(v_body_996_);
v_binderInfo_997_ = lean_ctor_get_uint8(v_a_987_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_987_, 3);
lean_inc_ref(v_f_985_);
lean_inc_ref(v_fvars_986_);
v___f_998_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed), 10, 3);
lean_closure_set(v___f_998_, 0, v_fvars_986_);
lean_closure_set(v___f_998_, 1, v_f_985_);
lean_closure_set(v___f_998_, 2, v_body_996_);
v_d_999_ = lean_expr_instantiate_rev(v_binderType_995_, v_fvars_986_);
lean_dec_ref(v_fvars_986_);
lean_dec_ref(v_binderType_995_);
lean_inc(v___y_992_);
lean_inc_ref(v___y_991_);
lean_inc(v___y_990_);
lean_inc_ref(v___y_989_);
lean_inc(v___y_988_);
lean_inc_ref(v_d_999_);
v___x_1000_ = lean_apply_7(v_f_985_, v_d_999_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, lean_box(0));
if (lean_obj_tag(v___x_1000_) == 0)
{
uint8_t v___x_1001_; lean_object* v___x_1002_; 
lean_dec_ref_known(v___x_1000_, 1);
v___x_1001_ = 0;
v___x_1002_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_binderName_994_, v_binderInfo_997_, v_d_999_, v___f_998_, v___x_1001_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
return v___x_1002_;
}
else
{
lean_dec_ref(v_d_999_);
lean_dec_ref(v___f_998_);
lean_dec(v_binderName_994_);
return v___x_1000_;
}
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_expr_instantiate_rev(v_a_987_, v_fvars_986_);
lean_dec_ref(v_fvars_986_);
lean_dec_ref(v_a_987_);
lean_inc(v___y_992_);
lean_inc_ref(v___y_991_);
lean_inc(v___y_990_);
lean_inc_ref(v___y_989_);
lean_inc(v___y_988_);
v___x_1004_ = lean_apply_7(v_f_985_, v___x_1003_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, lean_box(0));
return v___x_1004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(lean_object* v_fvars_1005_, lean_object* v_f_1006_, lean_object* v_body_1007_, lean_object* v_x_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_array_push(v_fvars_1005_, v_x_1008_);
v___x_1016_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_1006_, v___x_1015_, v_body_1007_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___boxed(lean_object* v_f_1017_, lean_object* v_fvars_1018_, lean_object* v_a_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_1017_, v_fvars_1018_, v_a_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(lean_object* v_f_1027_, lean_object* v_e_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_1036_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_1027_, v___x_1035_, v_e_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9___boxed(lean_object* v_f_1037_, lean_object* v_e_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(v_f_1037_, v_e_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(lean_object* v_a_1046_, lean_object* v_x_1047_){
_start:
{
if (lean_obj_tag(v_x_1047_) == 0)
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_box(0);
return v___x_1048_;
}
else
{
lean_object* v_key_1049_; lean_object* v_value_1050_; lean_object* v_tail_1051_; uint8_t v___x_1052_; 
v_key_1049_ = lean_ctor_get(v_x_1047_, 0);
v_value_1050_ = lean_ctor_get(v_x_1047_, 1);
v_tail_1051_ = lean_ctor_get(v_x_1047_, 2);
v___x_1052_ = lean_expr_eqv(v_key_1049_, v_a_1046_);
if (v___x_1052_ == 0)
{
v_x_1047_ = v_tail_1051_;
goto _start;
}
else
{
lean_object* v___x_1054_; 
lean_inc(v_value_1050_);
v___x_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1054_, 0, v_value_1050_);
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_a_1055_, lean_object* v_x_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1055_, v_x_1056_);
lean_dec(v_x_1056_);
lean_dec_ref(v_a_1055_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_m_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_buckets_1060_; lean_object* v___x_1061_; uint64_t v___x_1062_; uint64_t v___x_1063_; uint64_t v___x_1064_; uint64_t v_fold_1065_; uint64_t v___x_1066_; uint64_t v___x_1067_; uint64_t v___x_1068_; size_t v___x_1069_; size_t v___x_1070_; size_t v___x_1071_; size_t v___x_1072_; size_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_buckets_1060_ = lean_ctor_get(v_m_1058_, 1);
v___x_1061_ = lean_array_get_size(v_buckets_1060_);
v___x_1062_ = l_Lean_Expr_hash(v_a_1059_);
v___x_1063_ = 32ULL;
v___x_1064_ = lean_uint64_shift_right(v___x_1062_, v___x_1063_);
v_fold_1065_ = lean_uint64_xor(v___x_1062_, v___x_1064_);
v___x_1066_ = 16ULL;
v___x_1067_ = lean_uint64_shift_right(v_fold_1065_, v___x_1066_);
v___x_1068_ = lean_uint64_xor(v_fold_1065_, v___x_1067_);
v___x_1069_ = lean_uint64_to_usize(v___x_1068_);
v___x_1070_ = lean_usize_of_nat(v___x_1061_);
v___x_1071_ = ((size_t)1ULL);
v___x_1072_ = lean_usize_sub(v___x_1070_, v___x_1071_);
v___x_1073_ = lean_usize_land(v___x_1069_, v___x_1072_);
v___x_1074_ = lean_array_uget_borrowed(v_buckets_1060_, v___x_1073_);
v___x_1075_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1059_, v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_m_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_m_1076_, v_a_1077_);
lean_dec_ref(v_a_1077_);
lean_dec_ref(v_m_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(lean_object* v_a_1079_, lean_object* v_b_1080_, lean_object* v_x_1081_){
_start:
{
if (lean_obj_tag(v_x_1081_) == 0)
{
lean_dec(v_b_1080_);
lean_dec_ref(v_a_1079_);
return v_x_1081_;
}
else
{
lean_object* v_key_1082_; lean_object* v_value_1083_; lean_object* v_tail_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1096_; 
v_key_1082_ = lean_ctor_get(v_x_1081_, 0);
v_value_1083_ = lean_ctor_get(v_x_1081_, 1);
v_tail_1084_ = lean_ctor_get(v_x_1081_, 2);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_x_1081_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1086_ = v_x_1081_;
v_isShared_1087_ = v_isSharedCheck_1096_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_tail_1084_);
lean_inc(v_value_1083_);
lean_inc(v_key_1082_);
lean_dec(v_x_1081_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1096_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
uint8_t v___x_1088_; 
v___x_1088_ = lean_expr_eqv(v_key_1082_, v_a_1079_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1089_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1079_, v_b_1080_, v_tail_1084_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 2, v___x_1089_);
v___x_1091_ = v___x_1086_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_key_1082_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_value_1083_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
else
{
lean_object* v___x_1094_; 
lean_dec(v_value_1083_);
lean_dec(v_key_1082_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 1, v_b_1080_);
lean_ctor_set(v___x_1086_, 0, v_a_1079_);
v___x_1094_ = v___x_1086_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1079_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_b_1080_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_tail_1084_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
if (lean_obj_tag(v_x_1098_) == 0)
{
return v_x_1097_;
}
else
{
lean_object* v_key_1099_; lean_object* v_value_1100_; lean_object* v_tail_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1124_; 
v_key_1099_ = lean_ctor_get(v_x_1098_, 0);
v_value_1100_ = lean_ctor_get(v_x_1098_, 1);
v_tail_1101_ = lean_ctor_get(v_x_1098_, 2);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_x_1098_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1103_ = v_x_1098_;
v_isShared_1104_ = v_isSharedCheck_1124_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_tail_1101_);
lean_inc(v_value_1100_);
lean_inc(v_key_1099_);
lean_dec(v_x_1098_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1124_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; uint64_t v___x_1106_; uint64_t v___x_1107_; uint64_t v___x_1108_; uint64_t v_fold_1109_; uint64_t v___x_1110_; uint64_t v___x_1111_; uint64_t v___x_1112_; size_t v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1105_ = lean_array_get_size(v_x_1097_);
v___x_1106_ = l_Lean_Expr_hash(v_key_1099_);
v___x_1107_ = 32ULL;
v___x_1108_ = lean_uint64_shift_right(v___x_1106_, v___x_1107_);
v_fold_1109_ = lean_uint64_xor(v___x_1106_, v___x_1108_);
v___x_1110_ = 16ULL;
v___x_1111_ = lean_uint64_shift_right(v_fold_1109_, v___x_1110_);
v___x_1112_ = lean_uint64_xor(v_fold_1109_, v___x_1111_);
v___x_1113_ = lean_uint64_to_usize(v___x_1112_);
v___x_1114_ = lean_usize_of_nat(v___x_1105_);
v___x_1115_ = ((size_t)1ULL);
v___x_1116_ = lean_usize_sub(v___x_1114_, v___x_1115_);
v___x_1117_ = lean_usize_land(v___x_1113_, v___x_1116_);
v___x_1118_ = lean_array_uget_borrowed(v_x_1097_, v___x_1117_);
lean_inc(v___x_1118_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 2, v___x_1118_);
v___x_1120_ = v___x_1103_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_key_1099_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_value_1100_);
lean_ctor_set(v_reuseFailAlloc_1123_, 2, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_array_uset(v_x_1097_, v___x_1117_, v___x_1120_);
v_x_1097_ = v___x_1121_;
v_x_1098_ = v_tail_1101_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(lean_object* v_i_1125_, lean_object* v_source_1126_, lean_object* v_target_1127_){
_start:
{
lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1128_ = lean_array_get_size(v_source_1126_);
v___x_1129_ = lean_nat_dec_lt(v_i_1125_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_dec_ref(v_source_1126_);
lean_dec(v_i_1125_);
return v_target_1127_;
}
else
{
lean_object* v_es_1130_; lean_object* v___x_1131_; lean_object* v_source_1132_; lean_object* v_target_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_es_1130_ = lean_array_fget(v_source_1126_, v_i_1125_);
v___x_1131_ = lean_box(0);
v_source_1132_ = lean_array_fset(v_source_1126_, v_i_1125_, v___x_1131_);
v_target_1133_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(v_target_1127_, v_es_1130_);
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = lean_nat_add(v_i_1125_, v___x_1134_);
lean_dec(v_i_1125_);
v_i_1125_ = v___x_1135_;
v_source_1126_ = v_source_1132_;
v_target_1127_ = v_target_1133_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(lean_object* v_data_1137_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v_nbuckets_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1138_ = lean_array_get_size(v_data_1137_);
v___x_1139_ = lean_unsigned_to_nat(2u);
v_nbuckets_1140_ = lean_nat_mul(v___x_1138_, v___x_1139_);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = lean_box(0);
v___x_1143_ = lean_mk_array(v_nbuckets_1140_, v___x_1142_);
v___x_1144_ = lean_array_propagate_mark(v_data_1137_, v___x_1143_);
v___x_1145_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(v___x_1141_, v_data_1137_, v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(lean_object* v_a_1146_, lean_object* v_x_1147_){
_start:
{
if (lean_obj_tag(v_x_1147_) == 0)
{
uint8_t v___x_1148_; 
v___x_1148_ = 0;
return v___x_1148_;
}
else
{
lean_object* v_key_1149_; lean_object* v_tail_1150_; uint8_t v___x_1151_; 
v_key_1149_ = lean_ctor_get(v_x_1147_, 0);
v_tail_1150_ = lean_ctor_get(v_x_1147_, 2);
v___x_1151_ = lean_expr_eqv(v_key_1149_, v_a_1146_);
if (v___x_1151_ == 0)
{
v_x_1147_ = v_tail_1150_;
goto _start;
}
else
{
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_a_1153_, lean_object* v_x_1154_){
_start:
{
uint8_t v_res_1155_; lean_object* v_r_1156_; 
v_res_1155_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1153_, v_x_1154_);
lean_dec(v_x_1154_);
lean_dec_ref(v_a_1153_);
v_r_1156_ = lean_box(v_res_1155_);
return v_r_1156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(lean_object* v_m_1157_, lean_object* v_a_1158_, lean_object* v_b_1159_){
_start:
{
lean_object* v_size_1160_; lean_object* v_buckets_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1204_; 
v_size_1160_ = lean_ctor_get(v_m_1157_, 0);
v_buckets_1161_ = lean_ctor_get(v_m_1157_, 1);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_m_1157_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1163_ = v_m_1157_;
v_isShared_1164_ = v_isSharedCheck_1204_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_buckets_1161_);
lean_inc(v_size_1160_);
lean_dec(v_m_1157_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1204_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; uint64_t v___x_1166_; uint64_t v___x_1167_; uint64_t v___x_1168_; uint64_t v_fold_1169_; uint64_t v___x_1170_; uint64_t v___x_1171_; uint64_t v___x_1172_; size_t v___x_1173_; size_t v___x_1174_; size_t v___x_1175_; size_t v___x_1176_; size_t v___x_1177_; lean_object* v_bkt_1178_; uint8_t v___x_1179_; 
v___x_1165_ = lean_array_get_size(v_buckets_1161_);
v___x_1166_ = l_Lean_Expr_hash(v_a_1158_);
v___x_1167_ = 32ULL;
v___x_1168_ = lean_uint64_shift_right(v___x_1166_, v___x_1167_);
v_fold_1169_ = lean_uint64_xor(v___x_1166_, v___x_1168_);
v___x_1170_ = 16ULL;
v___x_1171_ = lean_uint64_shift_right(v_fold_1169_, v___x_1170_);
v___x_1172_ = lean_uint64_xor(v_fold_1169_, v___x_1171_);
v___x_1173_ = lean_uint64_to_usize(v___x_1172_);
v___x_1174_ = lean_usize_of_nat(v___x_1165_);
v___x_1175_ = ((size_t)1ULL);
v___x_1176_ = lean_usize_sub(v___x_1174_, v___x_1175_);
v___x_1177_ = lean_usize_land(v___x_1173_, v___x_1176_);
v_bkt_1178_ = lean_array_uget_borrowed(v_buckets_1161_, v___x_1177_);
v___x_1179_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1158_, v_bkt_1178_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; lean_object* v_size_x27_1181_; lean_object* v___x_1182_; lean_object* v_buckets_x27_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1180_ = lean_unsigned_to_nat(1u);
v_size_x27_1181_ = lean_nat_add(v_size_1160_, v___x_1180_);
lean_dec(v_size_1160_);
lean_inc(v_bkt_1178_);
v___x_1182_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1182_, 0, v_a_1158_);
lean_ctor_set(v___x_1182_, 1, v_b_1159_);
lean_ctor_set(v___x_1182_, 2, v_bkt_1178_);
v_buckets_x27_1183_ = lean_array_uset(v_buckets_1161_, v___x_1177_, v___x_1182_);
v___x_1184_ = lean_unsigned_to_nat(4u);
v___x_1185_ = lean_nat_mul(v_size_x27_1181_, v___x_1184_);
v___x_1186_ = lean_unsigned_to_nat(3u);
v___x_1187_ = lean_nat_div(v___x_1185_, v___x_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_array_get_size(v_buckets_x27_1183_);
v___x_1189_ = lean_nat_dec_le(v___x_1187_, v___x_1188_);
lean_dec(v___x_1187_);
if (v___x_1189_ == 0)
{
lean_object* v_val_1190_; lean_object* v___x_1192_; 
v_val_1190_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(v_buckets_x27_1183_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v_val_1190_);
lean_ctor_set(v___x_1163_, 0, v_size_x27_1181_);
v___x_1192_ = v___x_1163_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_size_x27_1181_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_val_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
else
{
lean_object* v___x_1195_; 
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v_buckets_x27_1183_);
lean_ctor_set(v___x_1163_, 0, v_size_x27_1181_);
v___x_1195_ = v___x_1163_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_size_x27_1181_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_buckets_x27_1183_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
else
{
lean_object* v___x_1197_; lean_object* v_buckets_x27_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
lean_inc(v_bkt_1178_);
v___x_1197_ = lean_box(0);
v_buckets_x27_1198_ = lean_array_uset(v_buckets_1161_, v___x_1177_, v___x_1197_);
v___x_1199_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1158_, v_b_1159_, v_bkt_1178_);
v___x_1200_ = lean_array_uset(v_buckets_x27_1198_, v___x_1177_, v___x_1199_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v___x_1200_);
v___x_1202_ = v___x_1163_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_size_1160_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(lean_object* v___y_1205_, lean_object* v_e_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1209_ = lean_st_ref_take(v___y_1205_);
v___x_1210_ = lean_box(0);
v___x_1211_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(v___x_1209_, v_e_1206_, v_a_1207_);
v___x_1212_ = lean_st_ref_put(v___y_1205_, v___x_1211_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v___y_1213_, lean_object* v_e_1214_, lean_object* v_a_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(v___y_1213_, v_e_1214_, v_a_1215_);
lean_dec(v___y_1213_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(lean_object* v_name_1218_, lean_object* v_type_1219_, lean_object* v_val_1220_, lean_object* v_k_1221_, uint8_t v_nondep_1222_, uint8_t v_kind_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___f_1230_; lean_object* v___x_1231_; 
lean_inc(v___y_1224_);
v___f_1230_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1230_, 0, v_k_1221_);
lean_closure_set(v___f_1230_, 1, v___y_1224_);
v___x_1231_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1218_, v_type_1219_, v_val_1220_, v___f_1230_, v_nondep_1222_, v_kind_1223_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1231_) == 0)
{
return v___x_1231_;
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg___boxed(lean_object* v_name_1240_, lean_object* v_type_1241_, lean_object* v_val_1242_, lean_object* v_k_1243_, lean_object* v_nondep_1244_, lean_object* v_kind_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v_nondep_boxed_1252_; uint8_t v_kind_boxed_1253_; lean_object* v_res_1254_; 
v_nondep_boxed_1252_ = lean_unbox(v_nondep_1244_);
v_kind_boxed_1253_ = lean_unbox(v_kind_1245_);
v_res_1254_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_name_1240_, v_type_1241_, v_val_1242_, v_k_1243_, v_nondep_boxed_1252_, v_kind_boxed_1253_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed(lean_object* v_fvars_1255_, lean_object* v_f_1256_, lean_object* v_body_1257_, lean_object* v_x_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(v_fvars_1255_, v_f_1256_, v_body_1257_, v_x_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v___y_1259_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(lean_object* v_f_1266_, lean_object* v_fvars_1267_, lean_object* v_a_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
if (lean_obj_tag(v_a_1268_) == 8)
{
lean_object* v_declName_1275_; lean_object* v_type_1276_; lean_object* v_value_1277_; lean_object* v_body_1278_; lean_object* v___f_1279_; lean_object* v_d_1280_; lean_object* v_v_1281_; lean_object* v___x_1282_; 
v_declName_1275_ = lean_ctor_get(v_a_1268_, 0);
lean_inc(v_declName_1275_);
v_type_1276_ = lean_ctor_get(v_a_1268_, 1);
lean_inc_ref(v_type_1276_);
v_value_1277_ = lean_ctor_get(v_a_1268_, 2);
lean_inc_ref(v_value_1277_);
v_body_1278_ = lean_ctor_get(v_a_1268_, 3);
lean_inc_ref(v_body_1278_);
lean_dec_ref_known(v_a_1268_, 4);
lean_inc_ref_n(v_f_1266_, 2);
lean_inc_ref(v_fvars_1267_);
v___f_1279_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1279_, 0, v_fvars_1267_);
lean_closure_set(v___f_1279_, 1, v_f_1266_);
lean_closure_set(v___f_1279_, 2, v_body_1278_);
v_d_1280_ = lean_expr_instantiate_rev(v_type_1276_, v_fvars_1267_);
lean_dec_ref(v_type_1276_);
v_v_1281_ = lean_expr_instantiate_rev(v_value_1277_, v_fvars_1267_);
lean_dec_ref(v_fvars_1267_);
lean_dec_ref(v_value_1277_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v_d_1280_);
v___x_1282_ = lean_apply_7(v_f_1266_, v_d_1280_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, lean_box(0));
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v___x_1283_; 
lean_dec_ref_known(v___x_1282_, 1);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v_v_1281_);
v___x_1283_ = lean_apply_7(v_f_1266_, v_v_1281_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, lean_box(0));
if (lean_obj_tag(v___x_1283_) == 0)
{
uint8_t v___x_1284_; uint8_t v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref_known(v___x_1283_, 1);
v___x_1284_ = 0;
v___x_1285_ = 0;
v___x_1286_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_declName_1275_, v_d_1280_, v_v_1281_, v___f_1279_, v___x_1284_, v___x_1285_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
return v___x_1286_;
}
else
{
lean_dec_ref(v_v_1281_);
lean_dec_ref(v_d_1280_);
lean_dec_ref(v___f_1279_);
lean_dec(v_declName_1275_);
return v___x_1283_;
}
}
else
{
lean_dec_ref(v_v_1281_);
lean_dec_ref(v_d_1280_);
lean_dec_ref(v___f_1279_);
lean_dec(v_declName_1275_);
lean_dec_ref(v_f_1266_);
return v___x_1282_;
}
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_expr_instantiate_rev(v_a_1268_, v_fvars_1267_);
lean_dec_ref(v_fvars_1267_);
lean_dec_ref(v_a_1268_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
v___x_1288_ = lean_apply_7(v_f_1266_, v___x_1287_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, lean_box(0));
return v___x_1288_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(lean_object* v_fvars_1289_, lean_object* v_f_1290_, lean_object* v_body_1291_, lean_object* v_x_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = lean_array_push(v_fvars_1289_, v_x_1292_);
v___x_1300_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1290_, v___x_1299_, v_body_1291_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___boxed(lean_object* v_f_1301_, lean_object* v_fvars_1302_, lean_object* v_a_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1301_, v_fvars_1302_, v_a_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(lean_object* v_f_1311_, lean_object* v_e_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_1320_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1311_, v___x_1319_, v_e_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11___boxed(lean_object* v_f_1321_, lean_object* v_e_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(v_f_1321_, v_e_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed(lean_object* v_fn_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(v_fn_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(lean_object* v_fn_1339_, lean_object* v_e_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_a_1348_; lean_object* v___y_1360_; lean_object* v___f_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_inc_ref(v_fn_1339_);
v___f_1362_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed), 8, 1);
lean_closure_set(v___f_1362_, 0, v_fn_1339_);
lean_inc(v___y_1341_);
v___x_1363_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1363_, 0, lean_box(0));
lean_closure_set(v___x_1363_, 1, lean_box(0));
lean_closure_set(v___x_1363_, 2, v___y_1341_);
v___x_1364_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_box(0), v___x_1363_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1398_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1398_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_a_1365_, v_e_1340_);
lean_dec(v_a_1365_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v___x_1370_; 
lean_del_object(v___x_1367_);
lean_inc_ref(v_fn_1339_);
lean_inc(v___y_1345_);
lean_inc_ref(v___y_1344_);
lean_inc(v___y_1343_);
lean_inc_ref(v___y_1342_);
lean_inc_ref(v_e_1340_);
v___x_1370_ = lean_apply_6(v_fn_1339_, v_e_1340_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, lean_box(0));
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; uint8_t v___x_1372_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = lean_unbox(v_a_1371_);
lean_dec(v_a_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; 
lean_dec_ref(v___f_1362_);
lean_dec_ref(v_fn_1339_);
v___x_1373_ = lean_box(0);
v_a_1348_ = v___x_1373_;
goto v___jp_1347_;
}
else
{
switch(lean_obj_tag(v_e_1340_))
{
case 7:
{
lean_object* v___x_1374_; 
lean_dec_ref(v_fn_1339_);
lean_inc_ref(v_e_1340_);
v___x_1374_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(v___f_1362_, v_e_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1374_;
goto v___jp_1359_;
}
case 6:
{
lean_object* v___x_1375_; 
lean_dec_ref(v_fn_1339_);
lean_inc_ref(v_e_1340_);
v___x_1375_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(v___f_1362_, v_e_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1375_;
goto v___jp_1359_;
}
case 8:
{
lean_object* v___x_1376_; 
lean_dec_ref(v_fn_1339_);
lean_inc_ref(v_e_1340_);
v___x_1376_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(v___f_1362_, v_e_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1376_;
goto v___jp_1359_;
}
case 5:
{
lean_object* v_fn_1377_; lean_object* v_arg_1378_; lean_object* v___x_1379_; 
lean_dec_ref(v___f_1362_);
v_fn_1377_ = lean_ctor_get(v_e_1340_, 0);
v_arg_1378_ = lean_ctor_get(v_e_1340_, 1);
lean_inc_ref(v_fn_1377_);
lean_inc_ref(v_fn_1339_);
v___x_1379_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1339_, v_fn_1377_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v___x_1380_; 
lean_dec_ref_known(v___x_1379_, 1);
lean_inc_ref(v_arg_1378_);
v___x_1380_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1339_, v_arg_1378_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1380_;
goto v___jp_1359_;
}
else
{
lean_dec_ref(v_fn_1339_);
v___y_1360_ = v___x_1379_;
goto v___jp_1359_;
}
}
case 10:
{
lean_object* v_expr_1381_; lean_object* v___x_1382_; 
lean_dec_ref(v___f_1362_);
v_expr_1381_ = lean_ctor_get(v_e_1340_, 1);
lean_inc_ref(v_expr_1381_);
v___x_1382_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1339_, v_expr_1381_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1382_;
goto v___jp_1359_;
}
case 11:
{
lean_object* v_struct_1383_; lean_object* v___x_1384_; 
lean_dec_ref(v___f_1362_);
v_struct_1383_ = lean_ctor_get(v_e_1340_, 2);
lean_inc_ref(v_struct_1383_);
v___x_1384_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1339_, v_struct_1383_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
v___y_1360_ = v___x_1384_;
goto v___jp_1359_;
}
default: 
{
lean_object* v___x_1385_; 
lean_dec_ref(v___f_1362_);
lean_dec_ref(v_fn_1339_);
v___x_1385_ = lean_box(0);
v_a_1348_ = v___x_1385_;
goto v___jp_1347_;
}
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec_ref(v___f_1362_);
lean_dec_ref(v_e_1340_);
lean_dec_ref(v_fn_1339_);
v_a_1386_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1370_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1370_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
else
{
lean_object* v_val_1394_; lean_object* v___x_1396_; 
lean_dec_ref(v___f_1362_);
lean_dec_ref(v_e_1340_);
lean_dec_ref(v_fn_1339_);
v_val_1394_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_val_1394_);
lean_dec_ref_known(v___x_1369_, 1);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v_val_1394_);
v___x_1396_ = v___x_1367_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_val_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec_ref(v___f_1362_);
lean_dec_ref(v_e_1340_);
lean_dec_ref(v_fn_1339_);
v_a_1399_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1364_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1364_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
v___jp_1347_:
{
lean_object* v___f_1349_; lean_object* v___x_1350_; 
lean_inc(v___y_1341_);
v___f_1349_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1349_, 0, v___y_1341_);
lean_closure_set(v___f_1349_, 1, v_e_1340_);
lean_closure_set(v___f_1349_, 2, v_a_1348_);
v___x_1350_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_box(0), v___f_1349_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; 
v_unused_1358_ = lean_ctor_get(v___x_1350_, 0);
lean_dec(v_unused_1358_);
v___x_1352_ = v___x_1350_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_dec(v___x_1350_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v_a_1348_);
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1348_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
else
{
return v___x_1350_;
}
}
v___jp_1359_:
{
if (lean_obj_tag(v___y_1360_) == 0)
{
lean_object* v_a_1361_; 
v_a_1361_ = lean_ctor_get(v___y_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___y_1360_, 1);
v_a_1348_ = v_a_1361_;
goto v___jp_1347_;
}
else
{
lean_dec_ref(v_e_1340_);
return v___y_1360_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(lean_object* v_fn_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v___x_1415_; 
v___x_1415_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___boxed(lean_object* v_fn_1416_, lean_object* v_e_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1416_, v_e_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_object* v_00_u03b1_1425_, lean_object* v_x_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = lean_apply_1(v_x_1426_, lean_box(0));
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0___boxed(lean_object* v_00_u03b1_1434_, lean_object* v_x_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(v_00_u03b1_1434_, v_x_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(lean_object* v_input_1442_, lean_object* v_fn_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_a_1451_; lean_object* v___x_1452_; 
v___x_1449_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__2, &l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2);
v___x_1450_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_box(0), v___x_1449_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1443_, v_input_1442_, v_a_1451_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1454_, 0, lean_box(0));
lean_closure_set(v___x_1454_, 1, lean_box(0));
lean_closure_set(v___x_1454_, 2, v_a_1451_);
v___x_1455_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_box(0), v___x_1454_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1462_ == 0)
{
lean_object* v_unused_1463_; 
v_unused_1463_ = lean_ctor_get(v___x_1455_, 0);
lean_dec(v_unused_1463_);
v___x_1457_ = v___x_1455_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_dec(v___x_1455_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v_a_1453_);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1453_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
else
{
lean_dec(v_a_1451_);
return v___x_1452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___boxed(lean_object* v_input_1464_, lean_object* v_fn_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(v_input_1464_, v_fn_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(lean_object* v_f_1472_, lean_object* v_e_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; 
lean_inc(v___y_1477_);
lean_inc_ref(v___y_1476_);
lean_inc(v___y_1475_);
lean_inc_ref(v___y_1474_);
v___x_1479_ = lean_apply_6(v_f_1472_, v_e_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, lean_box(0));
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1488_; 
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v___x_1479_, 0);
lean_dec(v_unused_1489_);
v___x_1481_ = v___x_1479_;
v_isShared_1482_ = v_isSharedCheck_1488_;
goto v_resetjp_1480_;
}
else
{
lean_dec(v___x_1479_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1488_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1483_ = 1;
v___x_1484_ = lean_box(v___x_1483_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1484_);
v___x_1486_ = v___x_1481_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
v_a_1490_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1479_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1479_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed(lean_object* v_f_1498_, lean_object* v_e_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(v_f_1498_, v_e_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(lean_object* v_e_1506_, lean_object* v_f_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___f_1513_; lean_object* v___x_1514_; 
v___f_1513_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1513_, 0, v_f_1507_);
v___x_1514_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(v_e_1506_, v___f_1513_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___boxed(lean_object* v_e_1515_, lean_object* v_f_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(v_e_1515_, v_f_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt(lean_object* v_e_1525_, lean_object* v_isTarget_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___f_1535_; lean_object* v___x_1536_; lean_object* v_a_1537_; lean_object* v___x_1538_; 
v___x_1532_ = lean_unsigned_to_nat(0u);
v___x_1533_ = ((lean_object*)(l_Lean_Meta_setMVarUserNamesAt___closed__0));
v___x_1534_ = lean_st_mk_ref(v___x_1533_);
lean_inc(v___x_1534_);
v___f_1535_ = lean_alloc_closure((void*)(l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1535_, 0, v___x_1534_);
lean_closure_set(v___f_1535_, 1, v_isTarget_1526_);
lean_closure_set(v___f_1535_, 2, v___x_1532_);
v___x_1536_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_1525_, v___y_1528_);
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(v_a_1537_, v___f_1535_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1546_; 
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1546_ == 0)
{
lean_object* v_unused_1547_; 
v_unused_1547_ = lean_ctor_get(v___x_1538_, 0);
lean_dec(v_unused_1547_);
v___x_1540_ = v___x_1538_;
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
else
{
lean_dec(v___x_1538_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = lean_st_ref_get(v___x_1534_);
lean_dec(v___x_1534_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 0, v___x_1542_);
v___x_1544_ = v___x_1540_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v___x_1534_);
v_a_1548_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1538_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1538_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___boxed(lean_object* v_e_1556_, lean_object* v_isTarget_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_Meta_setMVarUserNamesAt(v_e_1556_, v_isTarget_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(lean_object* v_upperBound_1564_, lean_object* v___x_1565_, lean_object* v_val_1566_, lean_object* v_e_1567_, lean_object* v_isTarget_1568_, lean_object* v_inst_1569_, lean_object* v_R_1570_, lean_object* v_a_1571_, lean_object* v_b_1572_, lean_object* v_c_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v_upperBound_1564_, v___x_1565_, v_val_1566_, v_e_1567_, v_isTarget_1568_, v_a_1571_, v_b_1572_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___boxed(lean_object* v_upperBound_1580_, lean_object* v___x_1581_, lean_object* v_val_1582_, lean_object* v_e_1583_, lean_object* v_isTarget_1584_, lean_object* v_inst_1585_, lean_object* v_R_1586_, lean_object* v_a_1587_, lean_object* v_b_1588_, lean_object* v_c_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(v_upperBound_1580_, v___x_1581_, v_val_1582_, v_e_1583_, v_isTarget_1584_, v_inst_1585_, v_R_1586_, v_a_1587_, v_b_1588_, v_c_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec_ref(v_isTarget_1584_);
lean_dec_ref(v_e_1583_);
lean_dec_ref(v___x_1581_);
lean_dec(v_upperBound_1580_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_1596_, lean_object* v_m_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_m_1597_, v_a_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b2_1600_, lean_object* v_m_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(v_00_u03b2_1600_, v_m_1601_, v_a_1602_);
lean_dec_ref(v_a_1602_);
lean_dec_ref(v_m_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_1604_, lean_object* v_m_1605_, lean_object* v_a_1606_, lean_object* v_b_1607_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(v_m_1605_, v_a_1606_, v_b_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_1609_, lean_object* v_a_1610_, lean_object* v_x_1611_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1610_, v_x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03b2_1613_, lean_object* v_a_1614_, lean_object* v_x_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(v_00_u03b2_1613_, v_a_1614_, v_x_1615_);
lean_dec(v_x_1615_);
lean_dec_ref(v_a_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_1617_, lean_object* v_a_1618_, lean_object* v_x_1619_){
_start:
{
uint8_t v___x_1620_; 
v___x_1620_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1618_, v_x_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b2_1621_, lean_object* v_a_1622_, lean_object* v_x_1623_){
_start:
{
uint8_t v_res_1624_; lean_object* v_r_1625_; 
v_res_1624_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(v_00_u03b2_1621_, v_a_1622_, v_x_1623_);
lean_dec(v_x_1623_);
lean_dec_ref(v_a_1622_);
v_r_1625_ = lean_box(v_res_1624_);
return v_r_1625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11(lean_object* v_00_u03b2_1626_, lean_object* v_data_1627_){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(v_data_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12(lean_object* v_00_u03b2_1629_, lean_object* v_a_1630_, lean_object* v_b_1631_, lean_object* v_x_1632_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1630_, v_b_1631_, v_x_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(lean_object* v_00_u03b1_1634_, lean_object* v_name_1635_, uint8_t v_bi_1636_, lean_object* v_type_1637_, lean_object* v_k_1638_, uint8_t v_kind_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_name_1635_, v_bi_1636_, v_type_1637_, v_k_1638_, v_kind_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___boxed(lean_object* v_00_u03b1_1647_, lean_object* v_name_1648_, lean_object* v_bi_1649_, lean_object* v_type_1650_, lean_object* v_k_1651_, lean_object* v_kind_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
uint8_t v_bi_boxed_1659_; uint8_t v_kind_boxed_1660_; lean_object* v_res_1661_; 
v_bi_boxed_1659_ = lean_unbox(v_bi_1649_);
v_kind_boxed_1660_ = lean_unbox(v_kind_1652_);
v_res_1661_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(v_00_u03b1_1647_, v_name_1648_, v_bi_boxed_1659_, v_type_1650_, v_k_1651_, v_kind_boxed_1660_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(lean_object* v_00_u03b1_1662_, lean_object* v_name_1663_, lean_object* v_type_1664_, lean_object* v_val_1665_, lean_object* v_k_1666_, uint8_t v_nondep_1667_, uint8_t v_kind_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_name_1663_, v_type_1664_, v_val_1665_, v_k_1666_, v_nondep_1667_, v_kind_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___boxed(lean_object* v_00_u03b1_1676_, lean_object* v_name_1677_, lean_object* v_type_1678_, lean_object* v_val_1679_, lean_object* v_k_1680_, lean_object* v_nondep_1681_, lean_object* v_kind_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
uint8_t v_nondep_boxed_1689_; uint8_t v_kind_boxed_1690_; lean_object* v_res_1691_; 
v_nondep_boxed_1689_ = lean_unbox(v_nondep_1681_);
v_kind_boxed_1690_ = lean_unbox(v_kind_1682_);
v_res_1691_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(v_00_u03b1_1676_, v_name_1677_, v_type_1678_, v_val_1679_, v_k_1680_, v_nondep_boxed_1689_, v_kind_boxed_1690_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12(lean_object* v_00_u03b2_1692_, lean_object* v_i_1693_, lean_object* v_source_1694_, lean_object* v_target_1695_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(v_i_1693_, v_source_1694_, v_target_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16(lean_object* v_00_u03b2_1697_, lean_object* v_x_1698_, lean_object* v_x_1699_){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(v_x_1698_, v_x_1699_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(lean_object* v_as_1701_, size_t v_sz_1702_, size_t v_i_1703_, lean_object* v_b_1704_, lean_object* v___y_1705_){
_start:
{
uint8_t v___x_1707_; 
v___x_1707_ = lean_usize_dec_lt(v_i_1703_, v_sz_1702_);
if (v___x_1707_ == 0)
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_b_1704_);
return v___x_1708_;
}
else
{
lean_object* v___x_1709_; lean_object* v_a_1710_; lean_object* v___x_1711_; lean_object* v_mctx_1712_; lean_object* v_cache_1713_; lean_object* v_zetaDeltaFVarIds_1714_; lean_object* v_postponed_1715_; lean_object* v_diag_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1729_; 
v___x_1709_ = lean_box(0);
v_a_1710_ = lean_array_uget_borrowed(v_as_1701_, v_i_1703_);
v___x_1711_ = lean_st_ref_take(v___y_1705_);
v_mctx_1712_ = lean_ctor_get(v___x_1711_, 0);
v_cache_1713_ = lean_ctor_get(v___x_1711_, 1);
v_zetaDeltaFVarIds_1714_ = lean_ctor_get(v___x_1711_, 2);
v_postponed_1715_ = lean_ctor_get(v___x_1711_, 3);
v_diag_1716_ = lean_ctor_get(v___x_1711_, 4);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1718_ = v___x_1711_;
v_isShared_1719_ = v_isSharedCheck_1729_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_diag_1716_);
lean_inc(v_postponed_1715_);
lean_inc(v_zetaDeltaFVarIds_1714_);
lean_inc(v_cache_1713_);
lean_inc(v_mctx_1712_);
lean_dec(v___x_1711_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1729_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1720_ = lean_box(0);
lean_inc(v_a_1710_);
v___x_1721_ = l_Lean_MetavarContext_setMVarUserNameTemporarily(v_mctx_1712_, v_a_1710_, v___x_1720_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1721_);
v___x_1723_ = v___x_1718_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_cache_1713_);
lean_ctor_set(v_reuseFailAlloc_1728_, 2, v_zetaDeltaFVarIds_1714_);
lean_ctor_set(v_reuseFailAlloc_1728_, 3, v_postponed_1715_);
lean_ctor_set(v_reuseFailAlloc_1728_, 4, v_diag_1716_);
v___x_1723_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; size_t v___x_1725_; size_t v___x_1726_; 
v___x_1724_ = lean_st_ref_put(v___y_1705_, v___x_1723_);
v___x_1725_ = ((size_t)1ULL);
v___x_1726_ = lean_usize_add(v_i_1703_, v___x_1725_);
v_i_1703_ = v___x_1726_;
v_b_1704_ = v___x_1709_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg___boxed(lean_object* v_as_1730_, lean_object* v_sz_1731_, lean_object* v_i_1732_, lean_object* v_b_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
size_t v_sz_boxed_1736_; size_t v_i_boxed_1737_; lean_object* v_res_1738_; 
v_sz_boxed_1736_ = lean_unbox_usize(v_sz_1731_);
lean_dec(v_sz_1731_);
v_i_boxed_1737_ = lean_unbox_usize(v_i_1732_);
lean_dec(v_i_1732_);
v_res_1738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_as_1730_, v_sz_boxed_1736_, v_i_boxed_1737_, v_b_1733_, v___y_1734_);
lean_dec(v___y_1734_);
lean_dec_ref(v_as_1730_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames(lean_object* v_toReset_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; size_t v_sz_1746_; size_t v___x_1747_; lean_object* v___x_1748_; 
v___x_1745_ = lean_box(0);
v_sz_1746_ = lean_array_size(v_toReset_1739_);
v___x_1747_ = ((size_t)0ULL);
v___x_1748_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_toReset_1739_, v_sz_1746_, v___x_1747_, v___x_1745_, v___y_1741_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1755_ == 0)
{
lean_object* v_unused_1756_; 
v_unused_1756_ = lean_ctor_get(v___x_1748_, 0);
lean_dec(v_unused_1756_);
v___x_1750_ = v___x_1748_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_dec(v___x_1748_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1745_);
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1745_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
else
{
return v___x_1748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames___boxed(lean_object* v_toReset_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_Meta_resetMVarUserNames(v_toReset_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_toReset_1757_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(lean_object* v_as_1764_, size_t v_sz_1765_, size_t v_i_1766_, lean_object* v_b_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_as_1764_, v_sz_1765_, v_i_1766_, v_b_1767_, v___y_1769_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___boxed(lean_object* v_as_1774_, lean_object* v_sz_1775_, lean_object* v_i_1776_, lean_object* v_b_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
size_t v_sz_boxed_1783_; size_t v_i_boxed_1784_; lean_object* v_res_1785_; 
v_sz_boxed_1783_ = lean_unbox_usize(v_sz_1775_);
lean_dec(v_sz_1775_);
v_i_boxed_1784_ = lean_unbox_usize(v_i_1776_);
lean_dec(v_i_1776_);
v_res_1785_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(v_as_1774_, v_sz_boxed_1783_, v_i_boxed_1784_, v_b_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_as_1774_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(lean_object* v_x_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
if (lean_obj_tag(v_x_1786_) == 2)
{
lean_object* v_mvarId_1792_; lean_object* v___x_1793_; 
v_mvarId_1792_ = lean_ctor_get(v_x_1786_, 0);
lean_inc(v_mvarId_1792_);
lean_dec_ref_known(v_x_1786_, 1);
v___x_1793_ = l_Lean_MVarId_getDecl(v_mvarId_1792_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1804_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1796_ = v___x_1793_;
v_isShared_1797_ = v_isSharedCheck_1804_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1793_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1804_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v_userName_1798_; uint8_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1802_; 
v_userName_1798_ = lean_ctor_get(v_a_1794_, 0);
lean_inc(v_userName_1798_);
lean_dec(v_a_1794_);
v___x_1799_ = l_Lean_Name_isAnonymous(v_userName_1798_);
lean_dec(v_userName_1798_);
v___x_1800_ = lean_box(v___x_1799_);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 0, v___x_1800_);
v___x_1802_ = v___x_1796_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
v_a_1805_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1793_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1793_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
uint8_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec_ref(v_x_1786_);
v___x_1813_ = 0;
v___x_1814_ = lean_box(v___x_1813_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
return v___x_1815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0___boxed(lean_object* v_x_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(v_x_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0(lean_object* v_val_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v_a_x3f_1828_){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = lean_st_ref_get(v_val_1823_);
v___x_1831_ = l_Lean_Meta_resetMVarUserNames(v___x_1830_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec(v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0___boxed(lean_object* v_val_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v_a_x3f_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v_val_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v_a_x3f_1837_);
lean_dec(v_a_x3f_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v_val_1832_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(lean_object* v_xs_1840_, lean_object* v_as_1841_, size_t v_sz_1842_, size_t v_i_1843_, lean_object* v_b_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_usize_dec_lt(v_i_1843_, v_sz_1842_);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; 
lean_dec_ref(v_xs_1840_);
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_b_1844_);
return v___x_1852_;
}
else
{
lean_object* v___x_1853_; lean_object* v_a_1854_; lean_object* v___x_1855_; 
v___x_1853_ = lean_box(0);
v_a_1854_ = lean_array_uget_borrowed(v_as_1841_, v_i_1843_);
lean_inc(v___y_1849_);
lean_inc_ref(v___y_1848_);
lean_inc(v___y_1847_);
lean_inc_ref(v___y_1846_);
lean_inc(v_a_1854_);
v___x_1855_ = lean_infer_type(v_a_1854_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1857_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
lean_inc_ref(v_xs_1840_);
v___x_1857_ = l_Lean_Meta_setMVarUserNamesAt(v_a_1856_, v_xs_1840_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; size_t v___x_1862_; size_t v___x_1863_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v___x_1859_ = lean_st_ref_take(v___y_1845_);
v___x_1860_ = l_Array_append___redArg(v___x_1859_, v_a_1858_);
lean_dec(v_a_1858_);
v___x_1861_ = lean_st_ref_put(v___y_1845_, v___x_1860_);
v___x_1862_ = ((size_t)1ULL);
v___x_1863_ = lean_usize_add(v_i_1843_, v___x_1862_);
v_i_1843_ = v___x_1863_;
v_b_1844_ = v___x_1853_;
goto _start;
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec_ref(v_xs_1840_);
v_a_1865_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1857_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1857_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_dec_ref(v_xs_1840_);
v_a_1873_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1855_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1855_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2___boxed(lean_object* v_xs_1881_, lean_object* v_as_1882_, lean_object* v_sz_1883_, lean_object* v_i_1884_, lean_object* v_b_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
size_t v_sz_boxed_1892_; size_t v_i_boxed_1893_; lean_object* v_res_1894_; 
v_sz_boxed_1892_ = lean_unbox_usize(v_sz_1883_);
lean_dec(v_sz_1883_);
v_i_boxed_1893_ = lean_unbox_usize(v_i_1884_);
lean_dec(v_i_1884_);
v_res_1894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(v_xs_1881_, v_as_1882_, v_sz_boxed_1892_, v_i_boxed_1893_, v_b_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v_as_1882_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(lean_object* v_xs_1895_, lean_object* v_as_1896_, size_t v_sz_1897_, size_t v_i_1898_, lean_object* v_b_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
uint8_t v___x_1906_; 
v___x_1906_ = lean_usize_dec_lt(v_i_1898_, v_sz_1897_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; 
lean_dec_ref(v_xs_1895_);
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v_b_1899_);
return v___x_1907_;
}
else
{
lean_object* v___x_1908_; lean_object* v_a_1909_; lean_object* v___x_1910_; 
v___x_1908_ = lean_box(0);
v_a_1909_ = lean_array_uget_borrowed(v_as_1896_, v_i_1898_);
lean_inc(v___y_1904_);
lean_inc_ref(v___y_1903_);
lean_inc(v___y_1902_);
lean_inc_ref(v___y_1901_);
lean_inc(v_a_1909_);
v___x_1910_ = lean_infer_type(v_a_1909_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1912_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
lean_inc_ref(v_xs_1895_);
v___x_1912_ = l_Lean_Meta_setMVarUserNamesAt(v_a_1911_, v_xs_1895_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; size_t v___x_1917_; size_t v___x_1918_; lean_object* v___x_1919_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = lean_st_ref_take(v___y_1900_);
v___x_1915_ = l_Array_append___redArg(v___x_1914_, v_a_1913_);
lean_dec(v_a_1913_);
v___x_1916_ = lean_st_ref_put(v___y_1900_, v___x_1915_);
v___x_1917_ = ((size_t)1ULL);
v___x_1918_ = lean_usize_add(v_i_1898_, v___x_1917_);
v___x_1919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(v_xs_1895_, v_as_1896_, v_sz_1897_, v___x_1918_, v___x_1908_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1919_;
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v_xs_1895_);
v_a_1920_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1912_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1912_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v_xs_1895_);
v_a_1928_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1910_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1910_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2___boxed(lean_object* v_xs_1936_, lean_object* v_as_1937_, lean_object* v_sz_1938_, lean_object* v_i_1939_, lean_object* v_b_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
size_t v_sz_boxed_1947_; size_t v_i_boxed_1948_; lean_object* v_res_1949_; 
v_sz_boxed_1947_ = lean_unbox_usize(v_sz_1938_);
lean_dec(v_sz_1938_);
v_i_boxed_1948_ = lean_unbox_usize(v_i_1939_);
lean_dec(v_i_1939_);
v_res_1949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(v_xs_1936_, v_as_1937_, v_sz_boxed_1947_, v_i_boxed_1948_, v_b_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v_as_1937_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(lean_object* v_as_1950_, size_t v_i_1951_, size_t v_stop_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
uint8_t v___x_1958_; 
v___x_1958_ = lean_usize_dec_eq(v_i_1951_, v_stop_1952_);
if (v___x_1958_ == 0)
{
uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1959_ = 1;
v___x_1960_ = lean_array_uget_borrowed(v_as_1950_, v_i_1951_);
lean_inc(v___x_1960_);
v___x_1961_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(v___x_1960_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1974_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
uint8_t v___x_1966_; 
v___x_1966_ = lean_unbox(v_a_1962_);
lean_dec(v_a_1962_);
if (v___x_1966_ == 0)
{
size_t v___x_1967_; size_t v___x_1968_; 
lean_del_object(v___x_1964_);
v___x_1967_ = ((size_t)1ULL);
v___x_1968_ = lean_usize_add(v_i_1951_, v___x_1967_);
v_i_1951_ = v___x_1968_;
goto _start;
}
else
{
lean_object* v___x_1970_; lean_object* v___x_1972_; 
v___x_1970_ = lean_box(v___x_1959_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___x_1970_);
v___x_1972_ = v___x_1964_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
return v___x_1961_;
}
}
else
{
uint8_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = 0;
v___x_1976_ = lean_box(v___x_1975_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1___boxed(lean_object* v_as_1978_, lean_object* v_i_1979_, lean_object* v_stop_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
size_t v_i_boxed_1986_; size_t v_stop_boxed_1987_; lean_object* v_res_1988_; 
v_i_boxed_1986_ = lean_unbox_usize(v_i_1979_);
lean_dec(v_i_1979_);
v_stop_boxed_1987_ = lean_unbox_usize(v_stop_1980_);
lean_dec(v_stop_1980_);
v_res_1988_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(v_as_1978_, v_i_boxed_1986_, v_stop_boxed_1987_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec_ref(v_as_1978_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27(lean_object* v_xs_1989_, lean_object* v_type_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
uint8_t v_a_1997_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2001_ = lean_unsigned_to_nat(0u);
v___x_2002_ = lean_array_get_size(v_xs_1989_);
v___x_2003_ = lean_nat_dec_lt(v___x_2001_, v___x_2002_);
if (v___x_2003_ == 0)
{
v_a_1997_ = v___x_2003_;
goto v___jp_1996_;
}
else
{
if (v___x_2003_ == 0)
{
v_a_1997_ = v___x_2003_;
goto v___jp_1996_;
}
else
{
size_t v___x_2004_; size_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2004_ = ((size_t)0ULL);
v___x_2005_ = lean_usize_of_nat(v___x_2002_);
v___x_2006_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(v_xs_1989_, v___x_2004_, v___x_2005_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; uint8_t v___x_2008_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
v___x_2008_ = lean_unbox(v_a_2007_);
if (v___x_2008_ == 0)
{
uint8_t v___x_2009_; 
v___x_2009_ = lean_unbox(v_a_2007_);
lean_dec(v_a_2007_);
v_a_1997_ = v___x_2009_;
goto v___jp_1996_;
}
else
{
lean_object* v___x_2010_; size_t v_sz_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v_a_2015_; lean_object* v___x_2034_; 
lean_dec(v_a_2007_);
v___x_2010_ = lean_box(0);
v_sz_2011_ = lean_array_size(v_xs_1989_);
v___x_2012_ = ((lean_object*)(l_Lean_Meta_setMVarUserNamesAt___closed__0));
v___x_2013_ = lean_st_mk_ref(v___x_2012_);
lean_inc_ref(v_xs_1989_);
v___x_2034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(v_xs_1989_, v_xs_1989_, v_sz_2011_, v___x_2004_, v___x_2010_, v___x_2013_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v___x_2035_; 
lean_dec_ref_known(v___x_2034_, 1);
lean_inc_ref(v_xs_1989_);
lean_inc_ref(v_type_1990_);
v___x_2035_ = l_Lean_Meta_setMVarUserNamesAt(v_type_1990_, v_xs_1989_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; uint8_t v___x_2041_; lean_object* v___x_2042_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref_known(v___x_2035_, 1);
v___x_2037_ = lean_st_ref_take(v___x_2013_);
v___x_2038_ = l_Array_append___redArg(v___x_2037_, v_a_2036_);
lean_dec(v_a_2036_);
v___x_2039_ = lean_st_ref_put(v___x_2013_, v___x_2038_);
v___x_2040_ = 0;
v___x_2041_ = 1;
v___x_2042_ = l_Lean_Meta_mkForallFVars(v_xs_1989_, v_type_1990_, v___x_2040_, v___x_2003_, v___x_2003_, v___x_2041_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec_ref(v_xs_1989_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2068_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2068_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2068_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
lean_inc(v_a_2043_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set_tag(v___x_2045_, 1);
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v___x_2013_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___x_2048_);
lean_dec_ref(v___x_2048_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2057_; 
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2057_ == 0)
{
lean_object* v_unused_2058_; 
v_unused_2058_ = lean_ctor_get(v___x_2049_, 0);
lean_dec(v_unused_2058_);
v___x_2051_ = v___x_2049_;
v_isShared_2052_ = v_isSharedCheck_2057_;
goto v_resetjp_2050_;
}
else
{
lean_dec(v___x_2049_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2057_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2053_ = lean_st_ref_get(v___x_2013_);
lean_dec(v___x_2013_);
lean_dec(v___x_2053_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v_a_2043_);
v___x_2055_ = v___x_2051_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2043_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_dec(v_a_2043_);
lean_dec(v___x_2013_);
v_a_2059_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2049_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2049_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
}
else
{
lean_object* v_a_2069_; 
v_a_2069_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2042_, 1);
v_a_2015_ = v_a_2069_;
goto v___jp_2014_;
}
}
else
{
lean_object* v_a_2070_; 
lean_dec_ref(v_type_1990_);
lean_dec_ref(v_xs_1989_);
v_a_2070_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2070_);
lean_dec_ref_known(v___x_2035_, 1);
v_a_2015_ = v_a_2070_;
goto v___jp_2014_;
}
}
else
{
lean_object* v_a_2071_; 
lean_dec_ref(v_type_1990_);
lean_dec_ref(v_xs_1989_);
v_a_2071_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2071_);
lean_dec_ref_known(v___x_2034_, 1);
v_a_2015_ = v_a_2071_;
goto v___jp_2014_;
}
v___jp_2014_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_box(0);
v___x_2017_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v___x_2013_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___x_2016_);
lean_dec(v___x_2013_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2024_ == 0)
{
lean_object* v_unused_2025_; 
v_unused_2025_ = lean_ctor_get(v___x_2017_, 0);
lean_dec(v_unused_2025_);
v___x_2019_ = v___x_2017_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_dec(v___x_2017_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 1);
lean_ctor_set(v___x_2019_, 0, v_a_2015_);
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2015_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v_a_2015_);
v_a_2026_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_2017_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2017_);
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
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_dec_ref(v_type_1990_);
lean_dec_ref(v_xs_1989_);
v_a_2072_ = lean_ctor_get(v___x_2006_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2006_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2006_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2006_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
}
v___jp_1996_:
{
uint8_t v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = 1;
v___x_1999_ = 1;
v___x_2000_ = l_Lean_Meta_mkForallFVars(v_xs_1989_, v_type_1990_, v_a_1997_, v___x_1998_, v___x_1998_, v___x_1999_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec_ref(v_xs_1989_);
return v___x_2000_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___boxed(lean_object* v_xs_2080_, lean_object* v_type_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_Meta_mkForallFVars_x27(v_xs_2080_, v_type_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ForEachExpr(builtin);
}
#ifdef __cplusplus
}
#endif
