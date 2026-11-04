// Lean compiler output
// Module: Lean.Meta.Sym.Simp.ControlFlow
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.App import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Util import Lean.Meta.Sym.Reduce import Lean.Meta.WHNF import Lean.Meta.AppBuilder import Init.Sym.Lemmas
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_reduceMatcherApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_markAsNotDone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ite_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(217, 231, 214, 152, 207, 100, 121, 38)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ite_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(28, 219, 17, 217, 43, 100, 109, 98)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(149, 115, 5, 135, 85, 70, 205, 95)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(85, 26, 223, 35, 242, 130, 83, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(73, 84, 15, 184, 226, 12, 142, 9)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 21, 178, 198, 97, 164, 246, 137)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dite_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(78, 119, 178, 178, 249, 126, 188, 7)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dite_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(65, 218, 189, 96, 14, 237, 238, 210)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(72, 238, 116, 219, 106, 19, 52, 46)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(222, 109, 208, 251, 158, 238, 173, 82)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(235, 125, 60, 240, 134, 62, 119, 130)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "classical"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(51, 190, 117, 255, 101, 89, 4, 100)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "uite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(222, 30, 223, 18, 117, 44, 111, 105)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(122, 115, 208, 198, 190, 254, 95, 184)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(110, 1, 60, 220, 137, 224, 158, 45)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 233, 207, 250, 103, 144, 161, 137)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(16, 215, 57, 166, 49, 41, 228, 20)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(198, 84, 237, 149, 138, 141, 36, 167)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "udite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(75, 51, 78, 128, 30, 3, 115, 57)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "udite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(158, 210, 154, 160, 211, 78, 113, 227)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "udite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__20 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(248, 126, 183, 194, 151, 12, 187, 39)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cond_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(98, 92, 93, 112, 12, 94, 108, 230)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cond_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(159, 102, 104, 109, 28, 196, 37, 90)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cond_cond_congr"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 228, 101, 80, 96, 119, 204, 25)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cond_cond_eq_false"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 151, 22, 186, 118, 232, 224)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "cond_cond_eq_true"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(52, 237, 153, 45, 203, 196, 217, 147)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___y_11_; lean_object* v___x_14_; uint8_t v_debug_15_; 
v___x_14_ = lean_st_ref_get(v___y_4_);
v_debug_15_ = lean_ctor_get_uint8(v___x_14_, sizeof(void*)*13);
lean_dec(v___x_14_);
if (v_debug_15_ == 0)
{
v___y_11_ = v___y_4_;
goto v___jp_10_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_1_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v___x_17_; 
lean_dec_ref_known(v___x_16_, 1);
v___x_17_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_dec_ref_known(v___x_17_, 1);
v___y_11_ = v___y_4_;
goto v___jp_10_;
}
else
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_25_; 
lean_dec_ref(v_a_2_);
lean_dec_ref(v_f_1_);
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_25_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_25_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_18_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
else
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_33_; 
lean_dec_ref(v_a_2_);
lean_dec_ref(v_f_1_);
v_a_26_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_33_ == 0)
{
v___x_28_ = v___x_16_;
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v___x_16_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_33_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_31_; 
if (v_isShared_29_ == 0)
{
v___x_31_ = v___x_28_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v_a_26_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
v___jp_10_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = l_Lean_Expr_app___override(v_f_1_, v_a_2_);
v___x_13_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_12_, v___y_11_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg___boxed(lean_object* v_f_34_, lean_object* v_a_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_34_, v_a_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(lean_object* v_f_44_, lean_object* v_a_u2081_45_, lean_object* v_a_u2082_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_44_, v_a_u2081_45_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_59_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc(v_a_58_);
lean_dec_ref_known(v___x_57_, 1);
v___x_59_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_58_, v_a_u2082_46_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
return v___x_59_;
}
else
{
lean_dec_ref(v_a_u2082_46_);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1___boxed(lean_object* v_f_60_, lean_object* v_a_u2081_61_, lean_object* v_a_u2082_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(v_f_60_, v_a_u2081_61_, v_a_u2082_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(lean_object* v_f_74_, lean_object* v_a_u2081_75_, lean_object* v_a_u2082_76_, lean_object* v_a_u2083_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(v_f_74_, v_a_u2081_75_, v_a_u2082_76_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_90_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc(v_a_89_);
lean_dec_ref_known(v___x_88_, 1);
v___x_90_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_89_, v_a_u2083_77_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
return v___x_90_;
}
else
{
lean_dec_ref(v_a_u2083_77_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0___boxed(lean_object* v_f_91_, lean_object* v_a_u2081_92_, lean_object* v_a_u2082_93_, lean_object* v_a_u2083_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v_f_91_, v_a_u2081_92_, v_a_u2082_93_, v_a_u2083_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object* v_f_106_, lean_object* v_a_u2081_107_, lean_object* v_a_u2082_108_, lean_object* v_a_u2083_109_, lean_object* v_a_u2084_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v_f_106_, v_a_u2081_107_, v_a_u2082_108_, v_a_u2083_109_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_123_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref_known(v___x_121_, 1);
v___x_123_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_122_, v_a_u2084_110_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
return v___x_123_;
}
else
{
lean_dec_ref(v_a_u2084_110_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object* v_f_124_, lean_object* v_a_u2081_125_, lean_object* v_a_u2082_126_, lean_object* v_a_u2083_127_, lean_object* v_a_u2084_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v_f_124_, v_a_u2081_125_, v_a_u2082_126_, v_a_u2083_127_, v_a_u2084_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v___y_129_);
return v_res_139_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_box(0);
v___x_153_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7));
v___x_154_ = l_Lean_mkConst(v___x_153_, v___x_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t v___x_168_, lean_object* v_e_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = l_Lean_Expr_cleanupAnnotations(v_e_169_);
v___x_184_ = l_Lean_Expr_isApp(v___x_183_);
if (v___x_184_ == 0)
{
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = l_Lean_Expr_appFnCleanup___redArg(v___x_183_);
v___x_186_ = l_Lean_Expr_isApp(v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v___x_185_);
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = l_Lean_Expr_appFnCleanup___redArg(v___x_185_);
v___x_188_ = l_Lean_Expr_isApp(v___x_187_);
if (v___x_188_ == 0)
{
lean_dec_ref(v___x_187_);
lean_dec_ref(v___x_185_);
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = l_Lean_Expr_appFnCleanup___redArg(v___x_187_);
v___x_190_ = l_Lean_Expr_isApp(v___x_189_);
if (v___x_190_ == 0)
{
lean_dec_ref(v___x_189_);
lean_dec_ref(v___x_187_);
lean_dec_ref(v___x_185_);
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = l_Lean_Expr_appFnCleanup___redArg(v___x_189_);
v___x_192_ = l_Lean_Expr_isApp(v___x_191_);
if (v___x_192_ == 0)
{
lean_dec_ref(v___x_191_);
lean_dec_ref(v___x_189_);
lean_dec_ref(v___x_187_);
lean_dec_ref(v___x_185_);
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_193_ = l_Lean_Expr_appFnCleanup___redArg(v___x_191_);
v___x_194_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1));
v___x_195_ = l_Lean_Expr_isConstOf(v___x_193_, v___x_194_);
if (v___x_195_ == 0)
{
lean_dec_ref(v___x_193_);
lean_dec_ref(v___x_191_);
lean_dec_ref(v___x_189_);
lean_dec_ref(v___x_187_);
lean_dec_ref(v___x_185_);
lean_dec_ref(v___x_183_);
lean_dec_ref(v_e_169_);
goto v___jp_180_;
}
else
{
lean_object* v_arg_196_; lean_object* v_arg_197_; lean_object* v_arg_198_; lean_object* v_arg_199_; lean_object* v_arg_200_; lean_object* v___x_201_; 
v_arg_196_ = lean_ctor_get(v___x_183_, 1);
lean_inc_ref(v_arg_196_);
lean_dec_ref(v___x_183_);
v_arg_197_ = lean_ctor_get(v___x_185_, 1);
lean_inc_ref(v_arg_197_);
lean_dec_ref(v___x_185_);
v_arg_198_ = lean_ctor_get(v___x_187_, 1);
lean_inc_ref(v_arg_198_);
lean_dec_ref(v___x_187_);
v_arg_199_ = lean_ctor_get(v___x_189_, 1);
lean_inc_ref_n(v_arg_199_, 2);
lean_dec_ref(v___x_189_);
v_arg_200_ = lean_ctor_get(v___x_191_, 1);
lean_inc_ref(v_arg_200_);
lean_dec_ref(v___x_191_);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
lean_inc(v___y_174_);
lean_inc_ref(v___y_173_);
lean_inc(v___y_172_);
lean_inc_ref(v___y_171_);
lean_inc(v___y_170_);
v___x_201_ = lean_sym_simp(v_arg_199_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
if (lean_obj_tag(v_a_202_) == 0)
{
uint8_t v_contextDependent_203_; lean_object* v___x_204_; 
lean_dec_ref(v_e_169_);
v_contextDependent_203_ = lean_ctor_get_uint8(v_a_202_, 1);
lean_dec_ref_known(v_a_202_, 0);
v___x_204_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_199_, v___y_173_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_246_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_246_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_246_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_246_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
uint8_t v___x_209_; 
v___x_209_ = lean_unbox(v_a_205_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_del_object(v___x_207_);
v___x_210_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_199_, v___y_173_);
lean_dec_ref(v_arg_199_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_229_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_229_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint8_t v___x_215_; 
v___x_215_ = lean_unbox(v_a_211_);
lean_dec(v_a_211_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_218_; 
lean_dec(v_a_205_);
lean_dec_ref(v_arg_200_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v___x_193_);
v___x_216_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_195_, v_contextDependent_203_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_216_);
v___x_218_ = v___x_213_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_227_; 
v___x_220_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3));
v___x_221_ = l_Lean_Expr_constLevels_x21(v___x_193_);
lean_dec_ref(v___x_193_);
v___x_222_ = l_Lean_mkConst(v___x_220_, v___x_221_);
lean_inc_ref(v_arg_196_);
v___x_223_ = l_Lean_mkApp4(v___x_222_, v_arg_200_, v_arg_198_, v_arg_197_, v_arg_196_);
v___x_224_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_224_, 0, v_arg_196_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_unbox(v_a_205_);
lean_dec(v_a_205_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*2, v___x_225_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*2 + 1, v_contextDependent_203_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_224_);
v___x_227_ = v___x_213_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_224_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec(v_a_205_);
lean_dec_ref(v_arg_200_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v___x_193_);
v_a_230_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_210_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_210_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
lean_dec(v_a_205_);
lean_dec_ref(v_arg_199_);
v___x_238_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5));
v___x_239_ = l_Lean_Expr_constLevels_x21(v___x_193_);
lean_dec_ref(v___x_193_);
v___x_240_ = l_Lean_mkConst(v___x_238_, v___x_239_);
lean_inc_ref(v_arg_197_);
v___x_241_ = l_Lean_mkApp4(v___x_240_, v_arg_200_, v_arg_198_, v_arg_197_, v_arg_196_);
v___x_242_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_242_, 0, v_arg_197_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*2, v___x_168_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*2 + 1, v_contextDependent_203_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_242_);
v___x_244_ = v___x_207_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v_arg_200_);
lean_dec_ref(v_arg_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v___x_193_);
v_a_247_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_204_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_204_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
else
{
lean_object* v_e_x27_255_; lean_object* v_proof_256_; uint8_t v_contextDependent_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_arg_200_);
lean_dec_ref(v_arg_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v___x_193_);
v_e_x27_255_ = lean_ctor_get(v_a_202_, 0);
v_proof_256_ = lean_ctor_get(v_a_202_, 1);
v_contextDependent_257_ = lean_ctor_get_uint8(v_a_202_, sizeof(void*)*2 + 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_a_202_);
if (v_isSharedCheck_369_ == 0)
{
v___x_259_ = v_a_202_;
v_isShared_260_ = v_isSharedCheck_369_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_proof_256_);
lean_inc(v_e_x27_255_);
lean_dec(v_a_202_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_369_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_255_, v___y_173_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_360_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_360_ == 0)
{
v___x_264_ = v___x_261_;
v_isShared_265_ = v_isSharedCheck_360_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_360_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
uint8_t v___x_266_; 
v___x_266_ = lean_unbox(v_a_262_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
lean_del_object(v___x_264_);
v___x_267_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_255_, v___y_173_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_342_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_342_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_342_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_342_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
uint8_t v___x_272_; 
v___x_272_ = lean_unbox(v_a_268_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
lean_del_object(v___x_270_);
lean_dec(v_a_262_);
v___x_273_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8);
lean_inc_ref(v_e_x27_255_);
v___x_274_ = l_Lean_Expr_app___override(v___x_273_, v_e_x27_255_);
v___x_275_ = lean_box(0);
v___x_276_ = l_Lean_Meta_trySynthInstance(v___x_274_, v___x_275_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_323_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_323_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_323_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_323_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
lean_del_object(v___x_279_);
lean_dec(v_a_268_);
v_a_281_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v_a_277_, 1);
v___x_282_ = l_Lean_Meta_Sym_shareCommon(v_a_281_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc_n(v_a_283_, 2);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = lean_unsigned_to_nat(4u);
v___x_285_ = l_Lean_Expr_getBoundedAppFn(v___x_284_, v_e_169_);
lean_inc_ref(v_e_x27_255_);
v___x_286_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_285_, v_e_x27_255_, v_a_283_, v_arg_197_, v_arg_196_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_300_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_300_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_300_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_300_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_291_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12));
v___x_292_ = l_Lean_Expr_replaceFn(v_e_169_, v___x_291_);
v___x_293_ = l_Lean_mkApp3(v___x_292_, v_e_x27_255_, v_a_283_, v_proof_256_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_293_);
lean_ctor_set(v___x_259_, 0, v_a_287_);
v___x_295_ = v___x_259_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_287_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_293_);
lean_ctor_set_uint8(v_reuseFailAlloc_299_, sizeof(void*)*2 + 1, v_contextDependent_257_);
v___x_295_ = v_reuseFailAlloc_299_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*2, v___x_195_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_295_);
v___x_297_ = v___x_289_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec(v_a_283_);
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_e_169_);
v_a_301_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_286_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_286_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v_e_169_);
v_a_309_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_282_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_282_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
else
{
lean_object* v___x_317_; uint8_t v___x_318_; uint8_t v___x_319_; lean_object* v___x_321_; 
lean_dec(v_a_277_);
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v_e_169_);
v___x_317_ = lean_alloc_ctor(0, 0, 2);
v___x_318_ = lean_unbox(v_a_268_);
lean_ctor_set_uint8(v___x_317_, 0, v___x_318_);
v___x_319_ = lean_unbox(v_a_268_);
lean_dec(v_a_268_);
lean_ctor_set_uint8(v___x_317_, 1, v___x_319_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_317_);
v___x_321_ = v___x_279_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_317_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_a_268_);
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v_e_169_);
v_a_324_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_276_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_276_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v_a_268_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
v___x_332_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14));
v___x_333_ = l_Lean_Expr_replaceFn(v_e_169_, v___x_332_);
v___x_334_ = l_Lean_Expr_app___override(v___x_333_, v_proof_256_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_334_);
lean_ctor_set(v___x_259_, 0, v_arg_196_);
v___x_336_ = v___x_259_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_arg_196_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v___x_334_);
v___x_336_ = v_reuseFailAlloc_341_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
uint8_t v___x_337_; lean_object* v___x_339_; 
v___x_337_ = lean_unbox(v_a_262_);
lean_dec(v_a_262_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*2, v___x_337_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*2 + 1, v_contextDependent_257_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_336_);
v___x_339_ = v___x_270_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_336_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec(v_a_262_);
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v_e_169_);
v_a_343_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_267_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_267_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec(v_a_262_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_196_);
v___x_351_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16));
v___x_352_ = l_Lean_Expr_replaceFn(v_e_169_, v___x_351_);
v___x_353_ = l_Lean_Expr_app___override(v___x_352_, v_proof_256_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_353_);
lean_ctor_set(v___x_259_, 0, v_arg_197_);
v___x_355_ = v___x_259_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_arg_197_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v___x_353_);
lean_ctor_set_uint8(v_reuseFailAlloc_359_, sizeof(void*)*2 + 1, v_contextDependent_257_);
v___x_355_ = v_reuseFailAlloc_359_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_357_; 
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*2, v___x_168_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v___x_355_);
v___x_357_ = v___x_264_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
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
else
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_368_; 
lean_del_object(v___x_259_);
lean_dec_ref(v_proof_256_);
lean_dec_ref(v_e_x27_255_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v_e_169_);
v_a_361_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_368_ == 0)
{
v___x_363_ = v___x_261_;
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_261_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_366_; 
if (v_isShared_364_ == 0)
{
v___x_366_ = v___x_363_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_a_361_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_200_);
lean_dec_ref(v_arg_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_197_);
lean_dec_ref(v_arg_196_);
lean_dec_ref(v___x_193_);
lean_dec_ref(v_e_169_);
return v___x_201_;
}
}
}
}
}
}
}
v___jp_180_:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_181_, 0, v___x_168_);
lean_ctor_set_uint8(v___x_181_, 1, v___x_168_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object* v___x_370_, lean_object* v_e_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
uint8_t v___x_17102__boxed_382_; lean_object* v_res_383_; 
v___x_17102__boxed_382_ = lean_unbox(v___x_370_);
v_res_383_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(v___x_17102__boxed_382_, v_e_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(lean_object* v_e_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_){
_start:
{
lean_object* v_numArgs_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v_numArgs_395_ = l_Lean_Expr_getAppNumArgs(v_e_384_);
v___x_396_ = lean_unsigned_to_nat(5u);
v___x_397_ = lean_nat_dec_lt(v_numArgs_395_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___f_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_398_ = lean_box(v___x_397_);
v___f_399_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_399_, 0, v___x_398_);
v___x_400_ = lean_nat_sub(v_numArgs_395_, v___x_396_);
lean_dec(v_numArgs_395_);
v___x_401_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_384_, v___x_400_, v___f_399_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
lean_dec(v___x_400_);
return v___x_401_;
}
else
{
uint8_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec(v_numArgs_395_);
lean_dec_ref(v_e_384_);
v___x_402_ = 0;
v___x_403_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_403_, 0, v___x_397_);
lean_ctor_set_uint8(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___boxed(lean_object* v_e_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(v_e_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(lean_object* v_f_417_, lean_object* v_a_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_417_, v_a_418_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___boxed(lean_object* v_f_430_, lean_object* v_a_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(v_f_430_, v_a_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
return v_res_442_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_box(0);
v___x_450_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3));
v___x_451_ = l_Lean_mkConst(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4);
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = lean_mk_empty_array_with_capacity(v___x_453_);
v___x_455_ = lean_array_push(v___x_454_, v___x_452_);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_box(0);
v___x_465_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10));
v___x_466_ = l_Lean_mkConst(v___x_465_, v___x_464_);
return v___x_466_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_467_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11);
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = lean_mk_empty_array_with_capacity(v___x_468_);
v___x_470_ = lean_array_push(v___x_469_, v___x_467_);
return v___x_470_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_482_ = lean_box(0);
v___x_483_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19));
v___x_484_ = l_Lean_mkConst(v___x_483_, v___x_482_);
return v___x_484_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = l_Lean_mkBVar(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_box(0);
v___x_492_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23));
v___x_493_ = l_Lean_mkConst(v___x_492_, v___x_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t v___x_505_, lean_object* v_e_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = l_Lean_Expr_cleanupAnnotations(v_e_506_);
v___x_521_ = l_Lean_Expr_isApp(v___x_520_);
if (v___x_521_ == 0)
{
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = l_Lean_Expr_appFnCleanup___redArg(v___x_520_);
v___x_523_ = l_Lean_Expr_isApp(v___x_522_);
if (v___x_523_ == 0)
{
lean_dec_ref(v___x_522_);
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = l_Lean_Expr_appFnCleanup___redArg(v___x_522_);
v___x_525_ = l_Lean_Expr_isApp(v___x_524_);
if (v___x_525_ == 0)
{
lean_dec_ref(v___x_524_);
lean_dec_ref(v___x_522_);
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = l_Lean_Expr_appFnCleanup___redArg(v___x_524_);
v___x_527_ = l_Lean_Expr_isApp(v___x_526_);
if (v___x_527_ == 0)
{
lean_dec_ref(v___x_526_);
lean_dec_ref(v___x_524_);
lean_dec_ref(v___x_522_);
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_528_ = l_Lean_Expr_appFnCleanup___redArg(v___x_526_);
v___x_529_ = l_Lean_Expr_isApp(v___x_528_);
if (v___x_529_ == 0)
{
lean_dec_ref(v___x_528_);
lean_dec_ref(v___x_526_);
lean_dec_ref(v___x_524_);
lean_dec_ref(v___x_522_);
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_530_ = l_Lean_Expr_appFnCleanup___redArg(v___x_528_);
v___x_531_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1));
v___x_532_ = l_Lean_Expr_isConstOf(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec_ref(v___x_530_);
lean_dec_ref(v___x_528_);
lean_dec_ref(v___x_526_);
lean_dec_ref(v___x_524_);
lean_dec_ref(v___x_522_);
lean_dec_ref(v___x_520_);
lean_dec_ref(v_e_506_);
goto v___jp_517_;
}
else
{
lean_object* v_arg_533_; lean_object* v_arg_534_; lean_object* v_arg_535_; lean_object* v_arg_536_; lean_object* v_arg_537_; lean_object* v___x_538_; 
v_arg_533_ = lean_ctor_get(v___x_520_, 1);
lean_inc_ref(v_arg_533_);
lean_dec_ref(v___x_520_);
v_arg_534_ = lean_ctor_get(v___x_522_, 1);
lean_inc_ref(v_arg_534_);
lean_dec_ref(v___x_522_);
v_arg_535_ = lean_ctor_get(v___x_524_, 1);
lean_inc_ref(v_arg_535_);
lean_dec_ref(v___x_524_);
v_arg_536_ = lean_ctor_get(v___x_526_, 1);
lean_inc_ref_n(v_arg_536_, 2);
lean_dec_ref(v___x_526_);
v_arg_537_ = lean_ctor_get(v___x_528_, 1);
lean_inc_ref(v_arg_537_);
lean_dec_ref(v___x_528_);
lean_inc(v___y_515_);
lean_inc_ref(v___y_514_);
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
lean_inc(v___y_511_);
lean_inc_ref(v___y_510_);
lean_inc(v___y_509_);
lean_inc_ref(v___y_508_);
lean_inc(v___y_507_);
v___x_538_ = lean_sym_simp(v_arg_536_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_538_, 1);
if (lean_obj_tag(v_a_539_) == 0)
{
uint8_t v_contextDependent_540_; lean_object* v___x_541_; 
lean_dec_ref(v_e_506_);
v_contextDependent_540_ = lean_ctor_get_uint8(v_a_539_, 1);
lean_dec_ref_known(v_a_539_, 0);
v___x_541_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_536_, v___y_510_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; uint8_t v___x_543_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref_known(v___x_541_, 1);
v___x_543_ = lean_unbox(v_a_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_536_, v___y_510_);
lean_dec_ref(v_arg_536_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_581_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_581_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_581_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_581_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
uint8_t v___x_549_; 
v___x_549_ = lean_unbox(v_a_545_);
lean_dec(v_a_545_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; lean_object* v___x_552_; 
lean_dec(v_a_542_);
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
v___x_550_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_532_, v_contextDependent_540_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_550_);
v___x_552_ = v___x_547_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
else
{
lean_object* v___x_554_; uint8_t v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_del_object(v___x_547_);
v___x_554_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5);
v___x_555_ = lean_unbox(v_a_542_);
v___x_556_ = lean_unbox(v_a_542_);
lean_inc_ref(v_arg_533_);
v___x_557_ = l_Lean_Expr_betaRev(v_arg_533_, v___x_554_, v___x_555_, v___x_556_);
v___x_558_ = l_Lean_Meta_Sym_shareCommonInc(v___x_557_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_572_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_572_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_572_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_572_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; lean_object* v___x_570_; 
v___x_563_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7));
v___x_564_ = l_Lean_Expr_constLevels_x21(v___x_530_);
lean_dec_ref(v___x_530_);
v___x_565_ = l_Lean_mkConst(v___x_563_, v___x_564_);
v___x_566_ = l_Lean_mkApp4(v___x_565_, v_arg_537_, v_arg_535_, v_arg_534_, v_arg_533_);
v___x_567_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_567_, 0, v_a_559_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_unbox(v_a_542_);
lean_dec(v_a_542_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*2, v___x_568_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*2 + 1, v_contextDependent_540_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_567_);
v___x_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_567_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec(v_a_542_);
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
v_a_573_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_558_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_558_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_dec(v_a_542_);
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
v_a_582_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_544_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_544_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec(v_a_542_);
lean_dec_ref(v_arg_536_);
v___x_590_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12);
lean_inc_ref(v_arg_534_);
v___x_591_ = l_Lean_Expr_betaRev(v_arg_534_, v___x_590_, v___x_505_, v___x_505_);
v___x_592_ = l_Lean_Meta_Sym_shareCommonInc(v___x_591_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_605_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_605_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_605_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_605_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_597_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14));
v___x_598_ = l_Lean_Expr_constLevels_x21(v___x_530_);
lean_dec_ref(v___x_530_);
v___x_599_ = l_Lean_mkConst(v___x_597_, v___x_598_);
v___x_600_ = l_Lean_mkApp4(v___x_599_, v_arg_537_, v_arg_535_, v_arg_534_, v_arg_533_);
v___x_601_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_601_, 0, v_a_593_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
lean_ctor_set_uint8(v___x_601_, sizeof(void*)*2, v___x_505_);
lean_ctor_set_uint8(v___x_601_, sizeof(void*)*2 + 1, v_contextDependent_540_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_601_);
v___x_603_ = v___x_595_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
v_a_606_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_592_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
v_a_614_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_541_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_541_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
else
{
lean_object* v_e_x27_622_; lean_object* v_proof_623_; uint8_t v_contextDependent_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_838_; 
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v___x_530_);
v_e_x27_622_ = lean_ctor_get(v_a_539_, 0);
v_proof_623_ = lean_ctor_get(v_a_539_, 1);
v_contextDependent_624_ = lean_ctor_get_uint8(v_a_539_, sizeof(void*)*2 + 1);
v_isSharedCheck_838_ = !lean_is_exclusive(v_a_539_);
if (v_isSharedCheck_838_ == 0)
{
v___x_626_ = v_a_539_;
v_isShared_627_ = v_isSharedCheck_838_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_proof_623_);
lean_inc(v_e_x27_622_);
lean_dec(v_a_539_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_838_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_622_, v___y_510_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; uint8_t v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = lean_unbox(v_a_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_622_, v___y_510_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; uint8_t v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = lean_unbox(v_a_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_a_629_);
v___x_634_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8);
lean_inc_ref(v_e_x27_622_);
v___x_635_ = l_Lean_Expr_app___override(v___x_634_, v_e_x27_622_);
v___x_636_ = lean_box(0);
v___x_637_ = l_Lean_Meta_trySynthInstance(v___x_635_, v___x_636_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_734_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_734_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_734_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_734_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
if (lean_obj_tag(v_a_638_) == 1)
{
lean_object* v_a_642_; lean_object* v___x_643_; 
lean_del_object(v___x_640_);
v_a_642_ = lean_ctor_get(v_a_638_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v_a_638_, 1);
v___x_643_ = l_Lean_Meta_Sym_shareCommon(v_a_642_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = lean_unsigned_to_nat(4u);
v___x_646_ = l_Lean_Expr_getBoundedAppFn(v___x_645_, v_e_506_);
v___x_647_ = l_Lean_Meta_Sym_shareCommon(v_proof_623_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_649_; uint8_t v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; uint8_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_n(v_a_648_, 2);
lean_dec_ref_known(v___x_647_, 1);
v___x_649_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16));
v___x_650_ = 0;
v___x_651_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20);
v___x_652_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21);
lean_inc_ref_n(v_e_x27_622_, 2);
lean_inc_ref(v_arg_536_);
v___x_653_ = l_Lean_mkApp4(v___x_651_, v_arg_536_, v_e_x27_622_, v_a_648_, v___x_652_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_mk_empty_array_with_capacity(v___x_654_);
lean_inc_ref(v___x_655_);
v___x_656_ = lean_array_push(v___x_655_, v___x_653_);
v___x_657_ = lean_unbox(v_a_632_);
v___x_658_ = lean_unbox(v_a_632_);
v___x_659_ = l_Lean_Expr_betaRev(v_arg_534_, v___x_656_, v___x_657_, v___x_658_);
lean_dec_ref(v___x_656_);
v___x_660_ = l_Lean_mkLambda(v___x_649_, v___x_650_, v_e_x27_622_, v___x_659_);
v___x_661_ = l_Lean_Meta_Sym_shareCommonInc(v___x_660_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; uint8_t v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v___x_661_, 1);
lean_inc_ref_n(v_e_x27_622_, 2);
v___x_663_ = l_Lean_mkNot(v_e_x27_622_);
v___x_664_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24);
lean_inc(v_a_648_);
v___x_665_ = l_Lean_mkApp4(v___x_664_, v_arg_536_, v_e_x27_622_, v_a_648_, v___x_652_);
v___x_666_ = lean_array_push(v___x_655_, v___x_665_);
v___x_667_ = lean_unbox(v_a_632_);
v___x_668_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
v___x_669_ = l_Lean_Expr_betaRev(v_arg_533_, v___x_666_, v___x_667_, v___x_668_);
lean_dec_ref(v___x_666_);
v___x_670_ = l_Lean_mkLambda(v___x_649_, v___x_650_, v___x_663_, v___x_669_);
v___x_671_ = l_Lean_Meta_Sym_shareCommonInc(v___x_670_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; lean_object* v___x_673_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
lean_inc(v_a_644_);
lean_inc_ref(v_e_x27_622_);
v___x_673_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_646_, v_e_x27_622_, v_a_644_, v_a_662_, v_a_672_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_687_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_687_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_678_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26));
v___x_679_ = l_Lean_Expr_replaceFn(v_e_506_, v___x_678_);
v___x_680_ = l_Lean_mkApp3(v___x_679_, v_e_x27_622_, v_a_644_, v_a_648_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_680_);
lean_ctor_set(v___x_626_, 0, v_a_674_);
v___x_682_ = v___x_626_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_674_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_680_);
lean_ctor_set_uint8(v_reuseFailAlloc_686_, sizeof(void*)*2 + 1, v_contextDependent_624_);
v___x_682_ = v_reuseFailAlloc_686_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_684_; 
lean_ctor_set_uint8(v___x_682_, sizeof(void*)*2, v___x_532_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_682_);
v___x_684_ = v___x_676_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec(v_a_648_);
lean_dec(v_a_644_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_e_506_);
v_a_688_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_673_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_673_);
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
lean_dec(v_a_662_);
lean_dec(v_a_648_);
lean_dec_ref(v___x_646_);
lean_dec(v_a_644_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_e_506_);
v_a_696_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_671_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_671_);
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
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v___x_655_);
lean_dec(v_a_648_);
lean_dec_ref(v___x_646_);
lean_dec(v_a_644_);
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_704_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_661_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_661_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v___x_646_);
lean_dec(v_a_644_);
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_712_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_647_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_647_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_720_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_643_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_643_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v___x_728_; uint8_t v___x_729_; uint8_t v___x_730_; lean_object* v___x_732_; 
lean_dec(v_a_638_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v___x_728_ = lean_alloc_ctor(0, 0, 2);
v___x_729_ = lean_unbox(v_a_632_);
lean_ctor_set_uint8(v___x_728_, 0, v___x_729_);
v___x_730_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
lean_ctor_set_uint8(v___x_728_, 1, v___x_730_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_728_);
v___x_732_ = v___x_640_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_728_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_735_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_637_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_637_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec(v_a_632_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_534_);
lean_inc_ref(v_proof_623_);
v___x_743_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_536_, v_proof_623_);
v___x_744_ = l_Lean_Meta_Sym_shareCommon(v___x_743_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = lean_unsigned_to_nat(1u);
v___x_747_ = lean_mk_empty_array_with_capacity(v___x_746_);
v___x_748_ = lean_array_push(v___x_747_, v_a_745_);
v___x_749_ = lean_unbox(v_a_629_);
v___x_750_ = lean_unbox(v_a_629_);
v___x_751_ = l_Lean_Expr_betaRev(v_arg_533_, v___x_748_, v___x_749_, v___x_750_);
lean_dec_ref(v___x_748_);
v___x_752_ = l_Lean_Meta_Sym_shareCommonInc(v___x_751_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_767_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_767_ == 0)
{
v___x_755_ = v___x_752_;
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_757_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28));
v___x_758_ = l_Lean_Expr_replaceFn(v_e_506_, v___x_757_);
v___x_759_ = l_Lean_Expr_app___override(v___x_758_, v_proof_623_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_759_);
lean_ctor_set(v___x_626_, 0, v_a_753_);
v___x_761_ = v___x_626_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_753_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_766_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
uint8_t v___x_762_; lean_object* v___x_764_; 
v___x_762_ = lean_unbox(v_a_629_);
lean_dec(v_a_629_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*2, v___x_762_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*2 + 1, v_contextDependent_624_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_761_);
v___x_764_ = v___x_755_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_761_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_506_);
v_a_768_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_752_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_752_);
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
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_776_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_744_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_744_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_784_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_631_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_631_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v_a_629_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_533_);
lean_inc_ref(v_proof_623_);
v___x_792_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_536_, v_proof_623_);
v___x_793_ = l_Lean_Meta_Sym_shareCommon(v___x_792_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_793_, 1);
v___x_795_ = lean_unsigned_to_nat(1u);
v___x_796_ = lean_mk_empty_array_with_capacity(v___x_795_);
v___x_797_ = lean_array_push(v___x_796_, v_a_794_);
v___x_798_ = l_Lean_Expr_betaRev(v_arg_534_, v___x_797_, v___x_505_, v___x_505_);
lean_dec_ref(v___x_797_);
v___x_799_ = l_Lean_Meta_Sym_shareCommonInc(v___x_798_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_813_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_813_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_804_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30));
v___x_805_ = l_Lean_Expr_replaceFn(v_e_506_, v___x_804_);
v___x_806_ = l_Lean_Expr_app___override(v___x_805_, v_proof_623_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_806_);
lean_ctor_set(v___x_626_, 0, v_a_800_);
v___x_808_ = v___x_626_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_800_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v___x_806_);
lean_ctor_set_uint8(v_reuseFailAlloc_812_, sizeof(void*)*2 + 1, v_contextDependent_624_);
v___x_808_ = v_reuseFailAlloc_812_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_810_; 
lean_ctor_set_uint8(v___x_808_, sizeof(void*)*2, v___x_505_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 0, v___x_808_);
v___x_810_ = v___x_802_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_506_);
v_a_814_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_799_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_799_);
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
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_e_506_);
v_a_822_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_793_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_793_);
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
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v_e_506_);
v_a_830_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_628_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_628_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_537_);
lean_dec_ref(v_arg_536_);
lean_dec_ref(v_arg_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_533_);
lean_dec_ref(v___x_530_);
lean_dec_ref(v_e_506_);
return v___x_538_;
}
}
}
}
}
}
}
v___jp_517_:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_518_, 0, v___x_505_);
lean_ctor_set_uint8(v___x_518_, 1, v___x_505_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object* v___x_839_, lean_object* v_e_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
uint8_t v___x_31188__boxed_851_; lean_object* v_res_852_; 
v___x_31188__boxed_851_ = lean_unbox(v___x_839_);
v_res_852_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(v___x_31188__boxed_851_, v_e_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object* v_e_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_numArgs_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v_numArgs_864_ = l_Lean_Expr_getAppNumArgs(v_e_853_);
v___x_865_ = lean_unsigned_to_nat(5u);
v___x_866_ = lean_nat_dec_lt(v_numArgs_864_, v___x_865_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___f_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_867_ = lean_box(v___x_866_);
v___f_868_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_868_, 0, v___x_867_);
v___x_869_ = lean_nat_sub(v_numArgs_864_, v___x_865_);
lean_dec(v_numArgs_864_);
v___x_870_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_853_, v___x_869_, v___f_868_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v___x_869_);
return v___x_870_;
}
else
{
uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec(v_numArgs_864_);
lean_dec_ref(v_e_853_);
v___x_871_ = 0;
v___x_872_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_872_, 0, v___x_866_);
lean_ctor_set_uint8(v___x_872_, 1, v___x_871_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object* v_e_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
return v_res_885_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_box(0);
v___x_901_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__5));
v___x_902_ = l_Lean_mkConst(v___x_901_, v___x_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0(uint8_t v___x_914_, lean_object* v_e_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = l_Lean_Expr_cleanupAnnotations(v_e_915_);
v___x_930_ = l_Lean_Expr_isApp(v___x_929_);
if (v___x_930_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = l_Lean_Expr_appFnCleanup___redArg(v___x_929_);
v___x_932_ = l_Lean_Expr_isApp(v___x_931_);
if (v___x_932_ == 0)
{
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = l_Lean_Expr_appFnCleanup___redArg(v___x_931_);
v___x_934_ = l_Lean_Expr_isApp(v___x_933_);
if (v___x_934_ == 0)
{
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = l_Lean_Expr_appFnCleanup___redArg(v___x_933_);
v___x_936_ = l_Lean_Expr_isApp(v___x_935_);
if (v___x_936_ == 0)
{
lean_dec_ref(v___x_935_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = l_Lean_Expr_appFnCleanup___redArg(v___x_935_);
v___x_938_ = l_Lean_Expr_isApp(v___x_937_);
if (v___x_938_ == 0)
{
lean_dec_ref(v___x_937_);
lean_dec_ref(v___x_935_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_939_ = l_Lean_Expr_appFnCleanup___redArg(v___x_937_);
v___x_940_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1));
v___x_941_ = l_Lean_Expr_isConstOf(v___x_939_, v___x_940_);
if (v___x_941_ == 0)
{
lean_dec_ref(v___x_939_);
lean_dec_ref(v___x_937_);
lean_dec_ref(v___x_935_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v_e_915_);
goto v___jp_926_;
}
else
{
lean_object* v_arg_942_; lean_object* v_arg_943_; lean_object* v_arg_944_; lean_object* v_arg_945_; lean_object* v_arg_946_; lean_object* v___x_947_; 
v_arg_942_ = lean_ctor_get(v___x_929_, 1);
lean_inc_ref(v_arg_942_);
lean_dec_ref(v___x_929_);
v_arg_943_ = lean_ctor_get(v___x_931_, 1);
lean_inc_ref(v_arg_943_);
lean_dec_ref(v___x_931_);
v_arg_944_ = lean_ctor_get(v___x_933_, 1);
lean_inc_ref(v_arg_944_);
lean_dec_ref(v___x_933_);
v_arg_945_ = lean_ctor_get(v___x_935_, 1);
lean_inc_ref_n(v_arg_945_, 2);
lean_dec_ref(v___x_935_);
v_arg_946_ = lean_ctor_get(v___x_937_, 1);
lean_inc_ref(v_arg_946_);
lean_dec_ref(v___x_937_);
lean_inc(v___y_924_);
lean_inc_ref(v___y_923_);
lean_inc(v___y_922_);
lean_inc_ref(v___y_921_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
lean_inc(v___y_916_);
v___x_947_ = lean_sym_simp(v_arg_945_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
if (lean_obj_tag(v_a_948_) == 0)
{
uint8_t v_contextDependent_949_; lean_object* v___x_950_; 
lean_dec_ref(v_e_915_);
v_contextDependent_949_ = lean_ctor_get_uint8(v_a_948_, 1);
lean_dec_ref_known(v_a_948_, 0);
v___x_950_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_945_, v___y_919_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_992_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_992_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_992_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_992_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
uint8_t v___x_955_; 
v___x_955_ = lean_unbox(v_a_951_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
lean_del_object(v___x_953_);
v___x_956_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_945_, v___y_919_);
lean_dec_ref(v_arg_945_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_975_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_975_ == 0)
{
v___x_959_ = v___x_956_;
v_isShared_960_ = v_isSharedCheck_975_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_956_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_975_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
uint8_t v___x_961_; 
v___x_961_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v___x_964_; 
lean_dec(v_a_951_);
lean_dec_ref(v_arg_946_);
lean_dec_ref(v_arg_944_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v___x_939_);
v___x_962_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_941_, v_contextDependent_949_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_962_);
v___x_964_ = v___x_959_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_962_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_973_; 
v___x_966_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__2));
v___x_967_ = l_Lean_Expr_constLevels_x21(v___x_939_);
lean_dec_ref(v___x_939_);
v___x_968_ = l_Lean_mkConst(v___x_966_, v___x_967_);
lean_inc_ref(v_arg_942_);
v___x_969_ = l_Lean_mkApp4(v___x_968_, v_arg_944_, v_arg_946_, v_arg_943_, v_arg_942_);
v___x_970_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_970_, 0, v_arg_942_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_unbox(v_a_951_);
lean_dec(v_a_951_);
lean_ctor_set_uint8(v___x_970_, sizeof(void*)*2, v___x_971_);
lean_ctor_set_uint8(v___x_970_, sizeof(void*)*2 + 1, v_contextDependent_949_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_970_);
v___x_973_ = v___x_959_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_970_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v_a_951_);
lean_dec_ref(v_arg_946_);
lean_dec_ref(v_arg_944_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v___x_939_);
v_a_976_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_956_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_956_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
else
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
lean_dec(v_a_951_);
lean_dec_ref(v_arg_945_);
v___x_984_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__3));
v___x_985_ = l_Lean_Expr_constLevels_x21(v___x_939_);
lean_dec_ref(v___x_939_);
v___x_986_ = l_Lean_mkConst(v___x_984_, v___x_985_);
lean_inc_ref(v_arg_943_);
v___x_987_ = l_Lean_mkApp4(v___x_986_, v_arg_944_, v_arg_946_, v_arg_943_, v_arg_942_);
v___x_988_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_988_, 0, v_arg_943_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
lean_ctor_set_uint8(v___x_988_, sizeof(void*)*2, v___x_914_);
lean_ctor_set_uint8(v___x_988_, sizeof(void*)*2 + 1, v_contextDependent_949_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_988_);
v___x_990_ = v___x_953_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
lean_dec_ref(v_arg_946_);
lean_dec_ref(v_arg_945_);
lean_dec_ref(v_arg_944_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v___x_939_);
v_a_993_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_950_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_950_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
else
{
lean_object* v_e_x27_1001_; lean_object* v_proof_1002_; uint8_t v_contextDependent_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref(v_arg_946_);
lean_dec_ref(v_arg_945_);
lean_dec_ref(v_arg_944_);
lean_dec_ref(v___x_939_);
v_e_x27_1001_ = lean_ctor_get(v_a_948_, 0);
v_proof_1002_ = lean_ctor_get(v_a_948_, 1);
v_contextDependent_1003_ = lean_ctor_get_uint8(v_a_948_, sizeof(void*)*2 + 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_a_948_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1005_ = v_a_948_;
v_isShared_1006_ = v_isSharedCheck_1114_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_proof_1002_);
lean_inc(v_e_x27_1001_);
lean_dec(v_a_948_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1114_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1001_, v___y_919_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1105_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1105_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1105_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_unbox(v_a_1008_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
lean_del_object(v___x_1010_);
v___x_1013_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_1001_, v___y_919_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1087_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1016_ = v___x_1013_;
v_isShared_1017_ = v_isSharedCheck_1087_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1013_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1087_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
uint8_t v___x_1018_; 
v___x_1018_ = lean_unbox(v_a_1014_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
lean_del_object(v___x_1016_);
lean_dec(v_a_1008_);
v___x_1019_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v___y_917_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1068_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1068_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1068_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
uint8_t v_fixUDecidableInsts_1024_; 
v_fixUDecidableInsts_1024_ = lean_ctor_get_uint8(v_a_1020_, sizeof(void*)*2);
lean_dec(v_a_1020_);
if (v_fixUDecidableInsts_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_del_object(v___x_1022_);
lean_dec(v_a_1014_);
v___x_1025_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6);
lean_inc_ref(v_e_x27_1001_);
v___x_1026_ = l_Lean_Expr_app___override(v___x_1025_, v_e_x27_1001_);
v___x_1027_ = l_Lean_Meta_Sym_shareCommon(v___x_1026_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v___x_1029_ = lean_unsigned_to_nat(4u);
v___x_1030_ = l_Lean_Expr_getBoundedAppFn(v___x_1029_, v_e_915_);
lean_inc_ref(v_e_x27_1001_);
v___x_1031_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_1030_, v_e_x27_1001_, v_a_1028_, v_arg_943_, v_arg_942_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1045_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1034_ = v___x_1031_;
v_isShared_1035_ = v_isSharedCheck_1045_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1031_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1045_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1036_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__8));
v___x_1037_ = l_Lean_Expr_replaceFn(v_e_915_, v___x_1036_);
v___x_1038_ = l_Lean_mkAppB(v___x_1037_, v_e_x27_1001_, v_proof_1002_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v___x_1038_);
lean_ctor_set(v___x_1005_, 0, v_a_1032_);
v___x_1040_ = v___x_1005_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1032_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v___x_1038_);
lean_ctor_set_uint8(v_reuseFailAlloc_1044_, sizeof(void*)*2 + 1, v_contextDependent_1003_);
v___x_1040_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*2, v___x_941_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1040_);
v___x_1042_ = v___x_1034_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_e_915_);
v_a_1046_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1031_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1031_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v_e_915_);
v_a_1054_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1027_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1027_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
else
{
lean_object* v___x_1062_; uint8_t v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1066_; 
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v_e_915_);
v___x_1062_ = lean_alloc_ctor(0, 0, 2);
v___x_1063_ = lean_unbox(v_a_1014_);
lean_ctor_set_uint8(v___x_1062_, 0, v___x_1063_);
v___x_1064_ = lean_unbox(v_a_1014_);
lean_dec(v_a_1014_);
lean_ctor_set_uint8(v___x_1062_, 1, v___x_1064_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1062_);
v___x_1066_ = v___x_1022_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1062_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec(v_a_1014_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v_e_915_);
v_a_1069_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1019_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1019_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
lean_dec(v_a_1014_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
v___x_1077_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__9));
v___x_1078_ = l_Lean_Expr_replaceFn(v_e_915_, v___x_1077_);
v___x_1079_ = l_Lean_Expr_app___override(v___x_1078_, v_proof_1002_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v___x_1079_);
lean_ctor_set(v___x_1005_, 0, v_arg_942_);
v___x_1081_ = v___x_1005_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_arg_942_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
uint8_t v___x_1082_; lean_object* v___x_1084_; 
v___x_1082_ = lean_unbox(v_a_1008_);
lean_dec(v_a_1008_);
lean_ctor_set_uint8(v___x_1081_, sizeof(void*)*2, v___x_1082_);
lean_ctor_set_uint8(v___x_1081_, sizeof(void*)*2 + 1, v_contextDependent_1003_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v___x_1081_);
v___x_1084_ = v___x_1016_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1081_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_a_1008_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v_e_915_);
v_a_1088_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1013_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1013_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
lean_dec(v_a_1008_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_942_);
v___x_1096_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__10));
v___x_1097_ = l_Lean_Expr_replaceFn(v_e_915_, v___x_1096_);
v___x_1098_ = l_Lean_Expr_app___override(v___x_1097_, v_proof_1002_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v___x_1098_);
lean_ctor_set(v___x_1005_, 0, v_arg_943_);
v___x_1100_ = v___x_1005_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_arg_943_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v___x_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1104_, sizeof(void*)*2 + 1, v_contextDependent_1003_);
v___x_1100_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1102_; 
lean_ctor_set_uint8(v___x_1100_, sizeof(void*)*2, v___x_914_);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 0, v___x_1100_);
v___x_1102_ = v___x_1010_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_del_object(v___x_1005_);
lean_dec_ref(v_proof_1002_);
lean_dec_ref(v_e_x27_1001_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v_e_915_);
v_a_1106_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1007_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1007_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_946_);
lean_dec_ref(v_arg_945_);
lean_dec_ref(v_arg_944_);
lean_dec_ref(v_arg_943_);
lean_dec_ref(v_arg_942_);
lean_dec_ref(v___x_939_);
lean_dec_ref(v_e_915_);
return v___x_947_;
}
}
}
}
}
}
}
v___jp_926_:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_927_, 0, v___x_914_);
lean_ctor_set_uint8(v___x_927_, 1, v___x_914_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___boxed(lean_object* v___x_1115_, lean_object* v_e_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
uint8_t v___x_13979__boxed_1127_; lean_object* v_res_1128_; 
v___x_13979__boxed_1127_ = lean_unbox(v___x_1115_);
v_res_1128_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0(v___x_13979__boxed_1127_, v_e_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte(lean_object* v_e_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v_numArgs_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; 
v_numArgs_1140_ = l_Lean_Expr_getAppNumArgs(v_e_1129_);
v___x_1141_ = lean_unsigned_to_nat(5u);
v___x_1142_ = lean_nat_dec_lt(v_numArgs_1140_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; lean_object* v___f_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1143_ = lean_box(v___x_1142_);
v___f_1144_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1144_, 0, v___x_1143_);
v___x_1145_ = lean_nat_sub(v_numArgs_1140_, v___x_1141_);
lean_dec(v_numArgs_1140_);
v___x_1146_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1129_, v___x_1145_, v___f_1144_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_);
lean_dec(v___x_1145_);
return v___x_1146_;
}
else
{
uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
lean_dec(v_numArgs_1140_);
lean_dec_ref(v_e_1129_);
v___x_1147_ = 0;
v___x_1148_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1148_, 0, v___x_1142_);
lean_ctor_set_uint8(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___boxed(lean_object* v_e_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte(v_e_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
return v_res_1161_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__3));
v___x_1172_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__2));
v___x_1173_ = l_Lean_mkConst(v___x_1172_, v___x_1171_);
return v___x_1173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_box(0);
v___x_1178_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__6));
v___x_1179_ = l_Lean_mkConst(v___x_1178_, v___x_1177_);
return v___x_1179_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__7);
v___x_1181_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__4);
v___x_1182_ = l_Lean_Expr_app___override(v___x_1181_, v___x_1180_);
return v___x_1182_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1183_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__8);
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_mk_empty_array_with_capacity(v___x_1184_);
v___x_1186_ = lean_array_push(v___x_1185_, v___x_1183_);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__12));
v___x_1195_ = l_Lean_mkConst(v___x_1194_, v___x_1193_);
return v___x_1195_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1196_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__13);
v___x_1197_ = lean_unsigned_to_nat(1u);
v___x_1198_ = lean_mk_empty_array_with_capacity(v___x_1197_);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1196_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0(uint8_t v___x_1218_, lean_object* v_e_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = l_Lean_Expr_cleanupAnnotations(v_e_1219_);
v___x_1234_ = l_Lean_Expr_isApp(v___x_1233_);
if (v___x_1234_ == 0)
{
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1233_);
v___x_1236_ = l_Lean_Expr_isApp(v___x_1235_);
if (v___x_1236_ == 0)
{
lean_dec_ref(v___x_1235_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1235_);
v___x_1238_ = l_Lean_Expr_isApp(v___x_1237_);
if (v___x_1238_ == 0)
{
lean_dec_ref(v___x_1237_);
lean_dec_ref(v___x_1235_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1237_);
v___x_1240_ = l_Lean_Expr_isApp(v___x_1239_);
if (v___x_1240_ == 0)
{
lean_dec_ref(v___x_1239_);
lean_dec_ref(v___x_1237_);
lean_dec_ref(v___x_1235_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1239_);
v___x_1242_ = l_Lean_Expr_isApp(v___x_1241_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v___x_1237_);
lean_dec_ref(v___x_1235_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1243_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1241_);
v___x_1244_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0));
v___x_1245_ = l_Lean_Expr_isConstOf(v___x_1243_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_dec_ref(v___x_1243_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v___x_1237_);
lean_dec_ref(v___x_1235_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_e_1219_);
goto v___jp_1230_;
}
else
{
lean_object* v_arg_1246_; lean_object* v_arg_1247_; lean_object* v_arg_1248_; lean_object* v_arg_1249_; lean_object* v_arg_1250_; lean_object* v___x_1251_; 
v_arg_1246_ = lean_ctor_get(v___x_1233_, 1);
lean_inc_ref(v_arg_1246_);
lean_dec_ref(v___x_1233_);
v_arg_1247_ = lean_ctor_get(v___x_1235_, 1);
lean_inc_ref(v_arg_1247_);
lean_dec_ref(v___x_1235_);
v_arg_1248_ = lean_ctor_get(v___x_1237_, 1);
lean_inc_ref(v_arg_1248_);
lean_dec_ref(v___x_1237_);
v_arg_1249_ = lean_ctor_get(v___x_1239_, 1);
lean_inc_ref_n(v_arg_1249_, 2);
lean_dec_ref(v___x_1239_);
v_arg_1250_ = lean_ctor_get(v___x_1241_, 1);
lean_inc_ref(v_arg_1250_);
lean_dec_ref(v___x_1241_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
lean_inc_ref(v___y_1225_);
lean_inc(v___y_1224_);
lean_inc_ref(v___y_1223_);
lean_inc(v___y_1222_);
lean_inc_ref(v___y_1221_);
lean_inc(v___y_1220_);
v___x_1251_ = lean_sym_simp(v_arg_1249_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1251_, 1);
if (lean_obj_tag(v_a_1252_) == 0)
{
uint8_t v_contextDependent_1253_; lean_object* v___x_1254_; 
lean_dec_ref(v_e_1219_);
v_contextDependent_1253_ = lean_ctor_get_uint8(v_a_1252_, 1);
lean_dec_ref_known(v_a_1252_, 0);
v___x_1254_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_1249_, v___y_1223_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; uint8_t v___x_1256_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v___x_1256_ = lean_unbox(v_a_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_1249_, v___y_1223_);
lean_dec_ref(v_arg_1249_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1294_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1294_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1294_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
uint8_t v___x_1262_; 
v___x_1262_ = lean_unbox(v_a_1258_);
lean_dec(v_a_1258_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
lean_dec(v_a_1255_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
v___x_1263_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1245_, v_contextDependent_1253_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 0, v___x_1263_);
v___x_1265_ = v___x_1260_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
else
{
lean_object* v___x_1267_; uint8_t v___x_1268_; uint8_t v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_del_object(v___x_1260_);
v___x_1267_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__9);
v___x_1268_ = lean_unbox(v_a_1255_);
v___x_1269_ = lean_unbox(v_a_1255_);
lean_inc_ref(v_arg_1246_);
v___x_1270_ = l_Lean_Expr_betaRev(v_arg_1246_, v___x_1267_, v___x_1268_, v___x_1269_);
v___x_1271_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1270_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1285_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1274_ = v___x_1271_;
v_isShared_1275_ = v_isSharedCheck_1285_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1271_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1285_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; lean_object* v___x_1283_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__10));
v___x_1277_ = l_Lean_Expr_constLevels_x21(v___x_1243_);
lean_dec_ref(v___x_1243_);
v___x_1278_ = l_Lean_mkConst(v___x_1276_, v___x_1277_);
v___x_1279_ = l_Lean_mkApp4(v___x_1278_, v_arg_1248_, v_arg_1250_, v_arg_1247_, v_arg_1246_);
v___x_1280_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1280_, 0, v_a_1272_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_unbox(v_a_1255_);
lean_dec(v_a_1255_);
lean_ctor_set_uint8(v___x_1280_, sizeof(void*)*2, v___x_1281_);
lean_ctor_set_uint8(v___x_1280_, sizeof(void*)*2 + 1, v_contextDependent_1253_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1280_);
v___x_1283_ = v___x_1274_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1280_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec(v_a_1255_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
v_a_1286_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1271_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1271_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec(v_a_1255_);
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
v_a_1295_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1257_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1257_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
lean_dec(v_a_1255_);
lean_dec_ref(v_arg_1249_);
v___x_1303_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__14);
lean_inc_ref(v_arg_1247_);
v___x_1304_ = l_Lean_Expr_betaRev(v_arg_1247_, v___x_1303_, v___x_1218_, v___x_1218_);
v___x_1305_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1304_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1318_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1318_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1318_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__15));
v___x_1311_ = l_Lean_Expr_constLevels_x21(v___x_1243_);
lean_dec_ref(v___x_1243_);
v___x_1312_ = l_Lean_mkConst(v___x_1310_, v___x_1311_);
v___x_1313_ = l_Lean_mkApp4(v___x_1312_, v_arg_1248_, v_arg_1250_, v_arg_1247_, v_arg_1246_);
v___x_1314_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1314_, 0, v_a_1306_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*2, v___x_1218_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*2 + 1, v_contextDependent_1253_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1314_);
v___x_1316_ = v___x_1308_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
v_a_1319_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1305_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1305_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
v_a_1327_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1254_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1254_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
else
{
lean_object* v_e_x27_1335_; lean_object* v_proof_1336_; uint8_t v_contextDependent_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1546_; 
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v___x_1243_);
v_e_x27_1335_ = lean_ctor_get(v_a_1252_, 0);
v_proof_1336_ = lean_ctor_get(v_a_1252_, 1);
v_contextDependent_1337_ = lean_ctor_get_uint8(v_a_1252_, sizeof(void*)*2 + 1);
v_isSharedCheck_1546_ = !lean_is_exclusive(v_a_1252_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1339_ = v_a_1252_;
v_isShared_1340_ = v_isSharedCheck_1546_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_proof_1336_);
lean_inc(v_e_x27_1335_);
lean_dec(v_a_1252_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1546_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; 
v___x_1341_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1335_, v___y_1223_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; uint8_t v___x_1343_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1343_ = lean_unbox(v_a_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_1335_, v___y_1223_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; uint8_t v___x_1346_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = lean_unbox(v_a_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; 
lean_dec(v_a_1342_);
v___x_1347_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v___y_1221_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1442_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1442_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1442_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
uint8_t v_fixUDecidableInsts_1352_; 
v_fixUDecidableInsts_1352_ = lean_ctor_get_uint8(v_a_1348_, sizeof(void*)*2);
lean_dec(v_a_1348_);
if (v_fixUDecidableInsts_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_del_object(v___x_1350_);
lean_dec(v_a_1345_);
v___x_1353_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__6);
lean_inc_ref(v_e_x27_1335_);
v___x_1354_ = l_Lean_Expr_app___override(v___x_1353_, v_e_x27_1335_);
v___x_1355_ = l_Lean_Meta_Sym_shareCommon(v___x_1354_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v___x_1357_ = lean_unsigned_to_nat(4u);
v___x_1358_ = l_Lean_Expr_getBoundedAppFn(v___x_1357_, v_e_1219_);
v___x_1359_ = l_Lean_Meta_Sym_shareCommon(v_proof_1336_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc_n(v_a_1360_, 2);
lean_dec_ref_known(v___x_1359_, 1);
v___x_1361_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16));
v___x_1362_ = 0;
v___x_1363_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20);
v___x_1364_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21);
lean_inc_ref_n(v_e_x27_1335_, 2);
lean_inc_ref(v_arg_1249_);
v___x_1365_ = l_Lean_mkApp4(v___x_1363_, v_arg_1249_, v_e_x27_1335_, v_a_1360_, v___x_1364_);
v___x_1366_ = lean_unsigned_to_nat(1u);
v___x_1367_ = lean_mk_empty_array_with_capacity(v___x_1366_);
lean_inc_ref(v___x_1367_);
v___x_1368_ = lean_array_push(v___x_1367_, v___x_1365_);
v___x_1369_ = l_Lean_Expr_betaRev(v_arg_1247_, v___x_1368_, v_fixUDecidableInsts_1352_, v_fixUDecidableInsts_1352_);
lean_dec_ref(v___x_1368_);
v___x_1370_ = l_Lean_mkLambda(v___x_1361_, v___x_1362_, v_e_x27_1335_, v___x_1369_);
v___x_1371_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1370_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
lean_dec_ref_known(v___x_1371_, 1);
lean_inc_ref_n(v_e_x27_1335_, 2);
v___x_1373_ = l_Lean_mkNot(v_e_x27_1335_);
v___x_1374_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24);
lean_inc(v_a_1360_);
v___x_1375_ = l_Lean_mkApp4(v___x_1374_, v_arg_1249_, v_e_x27_1335_, v_a_1360_, v___x_1364_);
v___x_1376_ = lean_array_push(v___x_1367_, v___x_1375_);
v___x_1377_ = l_Lean_Expr_betaRev(v_arg_1246_, v___x_1376_, v_fixUDecidableInsts_1352_, v_fixUDecidableInsts_1352_);
lean_dec_ref(v___x_1376_);
v___x_1378_ = l_Lean_mkLambda(v___x_1361_, v___x_1362_, v___x_1373_, v___x_1377_);
v___x_1379_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1378_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v_a_1380_; lean_object* v___x_1381_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_a_1380_);
lean_dec_ref_known(v___x_1379_, 1);
lean_inc_ref(v_e_x27_1335_);
v___x_1381_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_1358_, v_e_x27_1335_, v_a_1356_, v_a_1372_, v_a_1380_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1395_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1384_ = v___x_1381_;
v_isShared_1385_ = v_isSharedCheck_1395_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1395_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1386_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__17));
v___x_1387_ = l_Lean_Expr_replaceFn(v_e_1219_, v___x_1386_);
v___x_1388_ = l_Lean_mkAppB(v___x_1387_, v_e_x27_1335_, v_a_1360_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1388_);
lean_ctor_set(v___x_1339_, 0, v_a_1382_);
v___x_1390_ = v___x_1339_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1382_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v___x_1388_);
lean_ctor_set_uint8(v_reuseFailAlloc_1394_, sizeof(void*)*2 + 1, v_contextDependent_1337_);
v___x_1390_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
lean_object* v___x_1392_; 
lean_ctor_set_uint8(v___x_1390_, sizeof(void*)*2, v___x_1245_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 0, v___x_1390_);
v___x_1392_ = v___x_1384_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
else
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
lean_dec(v_a_1360_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_e_1219_);
v_a_1396_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1398_ = v___x_1381_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1381_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_a_1372_);
lean_dec(v_a_1360_);
lean_dec_ref(v___x_1358_);
lean_dec(v_a_1356_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_e_1219_);
v_a_1404_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1379_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1379_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec_ref(v___x_1367_);
lean_dec(v_a_1360_);
lean_dec_ref(v___x_1358_);
lean_dec(v_a_1356_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1412_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1371_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1371_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
lean_dec_ref(v___x_1358_);
lean_dec(v_a_1356_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1420_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1359_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1359_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1420_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1428_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1355_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1355_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_object* v___x_1436_; uint8_t v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1440_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v___x_1436_ = lean_alloc_ctor(0, 0, 2);
v___x_1437_ = lean_unbox(v_a_1345_);
lean_ctor_set_uint8(v___x_1436_, 0, v___x_1437_);
v___x_1438_ = lean_unbox(v_a_1345_);
lean_dec(v_a_1345_);
lean_ctor_set_uint8(v___x_1436_, 1, v___x_1438_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1436_);
v___x_1440_ = v___x_1350_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1436_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec(v_a_1345_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1443_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1347_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1347_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
else
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_dec(v_a_1345_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1247_);
lean_inc_ref(v_proof_1336_);
v___x_1451_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_1249_, v_proof_1336_);
v___x_1452_ = l_Lean_Meta_Sym_shareCommon(v___x_1451_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = lean_unsigned_to_nat(1u);
v___x_1455_ = lean_mk_empty_array_with_capacity(v___x_1454_);
v___x_1456_ = lean_array_push(v___x_1455_, v_a_1453_);
v___x_1457_ = lean_unbox(v_a_1342_);
v___x_1458_ = lean_unbox(v_a_1342_);
v___x_1459_ = l_Lean_Expr_betaRev(v_arg_1246_, v___x_1456_, v___x_1457_, v___x_1458_);
lean_dec_ref(v___x_1456_);
v___x_1460_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1459_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1475_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1475_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1475_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1465_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__19));
v___x_1466_ = l_Lean_Expr_replaceFn(v_e_1219_, v___x_1465_);
v___x_1467_ = l_Lean_Expr_app___override(v___x_1466_, v_proof_1336_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1467_);
lean_ctor_set(v___x_1339_, 0, v_a_1461_);
v___x_1469_ = v___x_1339_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1461_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
uint8_t v___x_1470_; lean_object* v___x_1472_; 
v___x_1470_ = lean_unbox(v_a_1342_);
lean_dec(v_a_1342_);
lean_ctor_set_uint8(v___x_1469_, sizeof(void*)*2, v___x_1470_);
lean_ctor_set_uint8(v___x_1469_, sizeof(void*)*2 + 1, v_contextDependent_1337_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1469_);
v___x_1472_ = v___x_1463_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1469_);
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
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec(v_a_1342_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_1219_);
v_a_1476_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1460_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1460_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
lean_dec(v_a_1342_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1484_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1452_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1452_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
lean_dec(v_a_1342_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1492_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1344_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1344_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec(v_a_1342_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1246_);
lean_inc_ref(v_proof_1336_);
v___x_1500_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_1249_, v_proof_1336_);
v___x_1501_ = l_Lean_Meta_Sym_shareCommon(v___x_1500_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_unsigned_to_nat(1u);
v___x_1504_ = lean_mk_empty_array_with_capacity(v___x_1503_);
v___x_1505_ = lean_array_push(v___x_1504_, v_a_1502_);
v___x_1506_ = l_Lean_Expr_betaRev(v_arg_1247_, v___x_1505_, v___x_1218_, v___x_1218_);
lean_dec_ref(v___x_1505_);
v___x_1507_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1506_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1521_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1510_ = v___x_1507_;
v_isShared_1511_ = v_isSharedCheck_1521_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1507_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1521_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1516_; 
v___x_1512_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__21));
v___x_1513_ = l_Lean_Expr_replaceFn(v_e_1219_, v___x_1512_);
v___x_1514_ = l_Lean_Expr_app___override(v___x_1513_, v_proof_1336_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1514_);
lean_ctor_set(v___x_1339_, 0, v_a_1508_);
v___x_1516_ = v___x_1339_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1508_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1514_);
lean_ctor_set_uint8(v_reuseFailAlloc_1520_, sizeof(void*)*2 + 1, v_contextDependent_1337_);
v___x_1516_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1518_; 
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*2, v___x_1218_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1516_);
v___x_1518_ = v___x_1510_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_1219_);
v_a_1522_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1507_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1507_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_e_1219_);
v_a_1530_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1501_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1501_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_proof_1336_);
lean_dec_ref(v_e_x27_1335_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1219_);
v_a_1538_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1341_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1341_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_1250_);
lean_dec_ref(v_arg_1249_);
lean_dec_ref(v_arg_1248_);
lean_dec_ref(v_arg_1247_);
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_e_1219_);
return v___x_1251_;
}
}
}
}
}
}
}
v___jp_1230_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1231_, 0, v___x_1218_);
lean_ctor_set_uint8(v___x_1231_, 1, v___x_1218_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___boxed(lean_object* v___x_1547_, lean_object* v_e_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
uint8_t v___x_31538__boxed_1559_; lean_object* v_res_1560_; 
v___x_31538__boxed_1559_ = lean_unbox(v___x_1547_);
v_res_1560_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0(v___x_31538__boxed_1559_, v_e_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte(lean_object* v_e_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v_numArgs_1572_; lean_object* v___x_1573_; uint8_t v___x_1574_; 
v_numArgs_1572_ = l_Lean_Expr_getAppNumArgs(v_e_1561_);
v___x_1573_ = lean_unsigned_to_nat(5u);
v___x_1574_ = lean_nat_dec_lt(v_numArgs_1572_, v___x_1573_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___f_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1575_ = lean_box(v___x_1574_);
v___f_1576_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1576_, 0, v___x_1575_);
v___x_1577_ = lean_nat_sub(v_numArgs_1572_, v___x_1573_);
lean_dec(v_numArgs_1572_);
v___x_1578_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1561_, v___x_1577_, v___f_1576_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec(v___x_1577_);
return v___x_1578_;
}
else
{
uint8_t v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec(v_numArgs_1572_);
lean_dec_ref(v_e_1561_);
v___x_1579_ = 0;
v___x_1580_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1580_, 0, v___x_1574_);
lean_ctor_set_uint8(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
return v___x_1581_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___boxed(lean_object* v_e_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte(v_e_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_);
lean_dec(v_a_1591_);
lean_dec_ref(v_a_1590_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
lean_dec(v_a_1583_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0(uint8_t v___x_1618_, lean_object* v_e_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___x_1633_; uint8_t v___x_1634_; 
v___x_1633_ = l_Lean_Expr_cleanupAnnotations(v_e_1619_);
v___x_1634_ = l_Lean_Expr_isApp(v___x_1633_);
if (v___x_1634_ == 0)
{
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_e_1619_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1635_; uint8_t v___x_1636_; 
v___x_1635_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1633_);
v___x_1636_ = l_Lean_Expr_isApp(v___x_1635_);
if (v___x_1636_ == 0)
{
lean_dec_ref(v___x_1635_);
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_e_1619_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1637_; uint8_t v___x_1638_; 
v___x_1637_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1635_);
v___x_1638_ = l_Lean_Expr_isApp(v___x_1637_);
if (v___x_1638_ == 0)
{
lean_dec_ref(v___x_1637_);
lean_dec_ref(v___x_1635_);
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_e_1619_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1639_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1637_);
v___x_1640_ = l_Lean_Expr_isApp(v___x_1639_);
if (v___x_1640_ == 0)
{
lean_dec_ref(v___x_1639_);
lean_dec_ref(v___x_1637_);
lean_dec_ref(v___x_1635_);
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_e_1619_);
goto v___jp_1630_;
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1641_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1639_);
v___x_1642_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1));
v___x_1643_ = l_Lean_Expr_isConstOf(v___x_1641_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_dec_ref(v___x_1641_);
lean_dec_ref(v___x_1639_);
lean_dec_ref(v___x_1637_);
lean_dec_ref(v___x_1635_);
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_e_1619_);
goto v___jp_1630_;
}
else
{
lean_object* v_arg_1644_; lean_object* v_arg_1645_; lean_object* v_arg_1646_; lean_object* v_arg_1647_; lean_object* v___x_1648_; 
v_arg_1644_ = lean_ctor_get(v___x_1633_, 1);
lean_inc_ref(v_arg_1644_);
lean_dec_ref(v___x_1633_);
v_arg_1645_ = lean_ctor_get(v___x_1635_, 1);
lean_inc_ref(v_arg_1645_);
lean_dec_ref(v___x_1635_);
v_arg_1646_ = lean_ctor_get(v___x_1637_, 1);
lean_inc_ref_n(v_arg_1646_, 2);
lean_dec_ref(v___x_1637_);
v_arg_1647_ = lean_ctor_get(v___x_1639_, 1);
lean_inc_ref(v_arg_1647_);
lean_dec_ref(v___x_1639_);
lean_inc(v___y_1628_);
lean_inc_ref(v___y_1627_);
lean_inc(v___y_1626_);
lean_inc_ref(v___y_1625_);
lean_inc(v___y_1624_);
lean_inc_ref(v___y_1623_);
lean_inc(v___y_1622_);
lean_inc_ref(v___y_1621_);
lean_inc(v___y_1620_);
v___x_1648_ = lean_sym_simp(v_arg_1646_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
if (lean_obj_tag(v_a_1649_) == 0)
{
uint8_t v_contextDependent_1650_; lean_object* v___x_1651_; 
lean_dec_ref(v_e_1619_);
v_contextDependent_1650_ = lean_ctor_get_uint8(v_a_1649_, 1);
lean_dec_ref_known(v_a_1649_, 0);
v___x_1651_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1623_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1695_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1695_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1695_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
size_t v___x_1656_; size_t v___x_1657_; uint8_t v___x_1658_; 
v___x_1656_ = lean_ptr_addr(v_arg_1646_);
lean_dec_ref(v_arg_1646_);
v___x_1657_ = lean_ptr_addr(v_a_1652_);
lean_dec(v_a_1652_);
v___x_1658_ = lean_usize_dec_eq(v___x_1656_, v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
lean_del_object(v___x_1654_);
v___x_1659_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1623_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1678_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1678_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1678_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
size_t v___x_1664_; uint8_t v___x_1665_; 
v___x_1664_ = lean_ptr_addr(v_a_1660_);
lean_dec(v_a_1660_);
v___x_1665_ = lean_usize_dec_eq(v___x_1656_, v___x_1664_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
lean_dec_ref(v_arg_1647_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v___x_1641_);
v___x_1666_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1643_, v_contextDependent_1650_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 0, v___x_1666_);
v___x_1668_ = v___x_1662_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v___x_1666_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1670_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3));
v___x_1671_ = l_Lean_Expr_constLevels_x21(v___x_1641_);
lean_dec_ref(v___x_1641_);
v___x_1672_ = l_Lean_mkConst(v___x_1670_, v___x_1671_);
lean_inc_ref(v_arg_1644_);
v___x_1673_ = l_Lean_mkApp3(v___x_1672_, v_arg_1647_, v_arg_1645_, v_arg_1644_);
v___x_1674_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1674_, 0, v_arg_1644_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
lean_ctor_set_uint8(v___x_1674_, sizeof(void*)*2, v___x_1658_);
lean_ctor_set_uint8(v___x_1674_, sizeof(void*)*2 + 1, v_contextDependent_1650_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 0, v___x_1674_);
v___x_1676_ = v___x_1662_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec_ref(v_arg_1647_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v___x_1641_);
v_a_1679_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1659_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1659_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1687_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5));
v___x_1688_ = l_Lean_Expr_constLevels_x21(v___x_1641_);
lean_dec_ref(v___x_1641_);
v___x_1689_ = l_Lean_mkConst(v___x_1687_, v___x_1688_);
lean_inc_ref(v_arg_1645_);
v___x_1690_ = l_Lean_mkApp3(v___x_1689_, v_arg_1647_, v_arg_1645_, v_arg_1644_);
v___x_1691_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1691_, 0, v_arg_1645_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*2, v___x_1618_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*2 + 1, v_contextDependent_1650_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v___x_1691_);
v___x_1693_ = v___x_1654_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_dec_ref(v_arg_1647_);
lean_dec_ref(v_arg_1646_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v___x_1641_);
v_a_1696_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1651_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1651_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
else
{
lean_object* v_e_x27_1704_; lean_object* v_proof_1705_; uint8_t v_contextDependent_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref(v_arg_1647_);
lean_dec_ref(v_arg_1646_);
lean_dec_ref(v___x_1641_);
v_e_x27_1704_ = lean_ctor_get(v_a_1649_, 0);
v_proof_1705_ = lean_ctor_get(v_a_1649_, 1);
v_contextDependent_1706_ = lean_ctor_get_uint8(v_a_1649_, sizeof(void*)*2 + 1);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_a_1649_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1708_ = v_a_1649_;
v_isShared_1709_ = v_isSharedCheck_1786_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_proof_1705_);
lean_inc(v_e_x27_1704_);
lean_dec(v_a_1649_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1786_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1623_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1777_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1777_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1777_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
size_t v___x_1715_; size_t v___x_1716_; uint8_t v___x_1717_; 
v___x_1715_ = lean_ptr_addr(v_e_x27_1704_);
v___x_1716_ = lean_ptr_addr(v_a_1711_);
lean_dec(v_a_1711_);
v___x_1717_ = lean_usize_dec_eq(v___x_1715_, v___x_1716_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
lean_del_object(v___x_1713_);
v___x_1718_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1623_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1759_; 
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1721_ = v___x_1718_;
v_isShared_1722_ = v_isSharedCheck_1759_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1718_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1759_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
size_t v___x_1723_; uint8_t v___x_1724_; 
v___x_1723_ = lean_ptr_addr(v_a_1719_);
lean_dec(v_a_1719_);
v___x_1724_ = lean_usize_dec_eq(v___x_1715_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_del_object(v___x_1721_);
v___x_1725_ = lean_unsigned_to_nat(3u);
v___x_1726_ = l_Lean_Expr_getBoundedAppFn(v___x_1725_, v_e_1619_);
lean_inc_ref(v_e_x27_1704_);
v___x_1727_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v___x_1726_, v_e_x27_1704_, v_arg_1645_, v_arg_1644_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1741_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1730_ = v___x_1727_;
v_isShared_1731_ = v_isSharedCheck_1741_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v___x_1727_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1741_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1732_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7));
v___x_1733_ = l_Lean_Expr_replaceFn(v_e_1619_, v___x_1732_);
v___x_1734_ = l_Lean_mkAppB(v___x_1733_, v_e_x27_1704_, v_proof_1705_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1734_);
lean_ctor_set(v___x_1708_, 0, v_a_1728_);
v___x_1736_ = v___x_1708_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1728_);
lean_ctor_set(v_reuseFailAlloc_1740_, 1, v___x_1734_);
lean_ctor_set_uint8(v_reuseFailAlloc_1740_, sizeof(void*)*2 + 1, v_contextDependent_1706_);
v___x_1736_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1738_; 
lean_ctor_set_uint8(v___x_1736_, sizeof(void*)*2, v___x_1643_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1736_);
v___x_1738_ = v___x_1730_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_del_object(v___x_1708_);
lean_dec_ref(v_proof_1705_);
lean_dec_ref(v_e_x27_1704_);
lean_dec_ref(v_e_1619_);
v_a_1742_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1727_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1727_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
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
else
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
lean_dec_ref(v_e_x27_1704_);
lean_dec_ref(v_arg_1645_);
v___x_1750_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9));
v___x_1751_ = l_Lean_Expr_replaceFn(v_e_1619_, v___x_1750_);
v___x_1752_ = l_Lean_Expr_app___override(v___x_1751_, v_proof_1705_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1752_);
lean_ctor_set(v___x_1708_, 0, v_arg_1644_);
v___x_1754_ = v___x_1708_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_arg_1644_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v___x_1752_);
lean_ctor_set_uint8(v_reuseFailAlloc_1758_, sizeof(void*)*2 + 1, v_contextDependent_1706_);
v___x_1754_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
lean_ctor_set_uint8(v___x_1754_, sizeof(void*)*2, v___x_1717_);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v___x_1754_);
v___x_1756_ = v___x_1721_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
else
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1767_; 
lean_del_object(v___x_1708_);
lean_dec_ref(v_proof_1705_);
lean_dec_ref(v_e_x27_1704_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v_e_1619_);
v_a_1760_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1762_ = v___x_1718_;
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1718_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1763_ == 0)
{
v___x_1765_ = v___x_1762_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
lean_dec_ref(v_e_x27_1704_);
lean_dec_ref(v_arg_1644_);
v___x_1768_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11));
v___x_1769_ = l_Lean_Expr_replaceFn(v_e_1619_, v___x_1768_);
v___x_1770_ = l_Lean_Expr_app___override(v___x_1769_, v_proof_1705_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1770_);
lean_ctor_set(v___x_1708_, 0, v_arg_1645_);
v___x_1772_ = v___x_1708_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_arg_1645_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___x_1770_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*2 + 1, v_contextDependent_1706_);
v___x_1772_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
lean_ctor_set_uint8(v___x_1772_, sizeof(void*)*2, v___x_1618_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1772_);
v___x_1774_ = v___x_1713_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_del_object(v___x_1708_);
lean_dec_ref(v_proof_1705_);
lean_dec_ref(v_e_x27_1704_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v_e_1619_);
v_a_1778_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1710_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1710_);
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
}
}
else
{
lean_dec_ref(v_arg_1647_);
lean_dec_ref(v_arg_1646_);
lean_dec_ref(v_arg_1645_);
lean_dec_ref(v_arg_1644_);
lean_dec_ref(v___x_1641_);
lean_dec_ref(v_e_1619_);
return v___x_1648_;
}
}
}
}
}
}
v___jp_1630_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1631_, 0, v___x_1618_);
lean_ctor_set_uint8(v___x_1631_, 1, v___x_1618_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed(lean_object* v___x_1787_, lean_object* v_e_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
uint8_t v___x_10977__boxed_1799_; lean_object* v_res_1800_; 
v___x_10977__boxed_1799_ = lean_unbox(v___x_1787_);
v_res_1800_ = l_Lean_Meta_Sym_Simp_simpCond___lam__0(v___x_10977__boxed_1799_, v_e_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object* v_e_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v_numArgs_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v_numArgs_1812_ = l_Lean_Expr_getAppNumArgs(v_e_1801_);
v___x_1813_ = lean_unsigned_to_nat(4u);
v___x_1814_ = lean_nat_dec_lt(v_numArgs_1812_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1815_ = lean_box(v___x_1814_);
v___f_1816_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1816_, 0, v___x_1815_);
v___x_1817_ = lean_nat_sub(v_numArgs_1812_, v___x_1813_);
lean_dec(v_numArgs_1812_);
v___x_1818_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1801_, v___x_1817_, v___f_1816_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
lean_dec(v___x_1817_);
return v___x_1818_;
}
else
{
uint8_t v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_dec(v_numArgs_1812_);
lean_dec_ref(v_e_1801_);
v___x_1819_ = 0;
v___x_1820_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1820_, 0, v___x_1814_);
lean_ctor_set_uint8(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object* v_e_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_Sym_Simp_simpCond(v_e_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
lean_dec(v_a_1823_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object* v_declName_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v_env_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1837_ = lean_st_ref_get(v___y_1835_);
v_env_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc_ref(v_env_1838_);
lean_dec(v___x_1837_);
v___x_1839_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1838_, v_declName_1834_);
v___x_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object* v_declName_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1841_, v___y_1842_);
lean_dec(v___y_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object* v_declName_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1845_, v___y_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object* v_declName_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(v_declName_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object* v_declName_1871_, lean_object* v_e_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Lean_Meta_Sym_reduceMatcherApp_x3f(v_e_1872_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
if (lean_obj_tag(v_a_1884_) == 1)
{
lean_object* v_val_1885_; lean_object* v___x_1886_; 
lean_dec_ref(v_e_1872_);
lean_dec(v_declName_1871_);
v_val_1885_ = lean_ctor_get(v_a_1884_, 0);
lean_inc_n(v_val_1885_, 2);
lean_dec_ref_known(v_a_1884_, 1);
v___x_1886_ = l_Lean_Meta_Sym_mkEqRefl(v_val_1885_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1896_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1896_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1896_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
uint8_t v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1894_; 
v___x_1891_ = 0;
v___x_1892_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1892_, 0, v_val_1885_);
lean_ctor_set(v___x_1892_, 1, v_a_1887_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*2, v___x_1891_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*2 + 1, v___x_1891_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v___x_1892_);
v___x_1894_ = v___x_1889_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_val_1885_);
v_a_1897_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1886_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1886_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
else
{
lean_object* v___x_1905_; lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1884_);
v___x_1905_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1871_, v_a_1881_);
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1933_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1933_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
if (lean_obj_tag(v_a_1906_) == 1)
{
lean_object* v_val_1910_; lean_object* v_numParams_1911_; lean_object* v_numDiscrs_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
lean_del_object(v___x_1908_);
v_val_1910_ = lean_ctor_get(v_a_1906_, 0);
lean_inc(v_val_1910_);
lean_dec_ref_known(v_a_1906_, 1);
v_numParams_1911_ = lean_ctor_get(v_val_1910_, 0);
lean_inc(v_numParams_1911_);
v_numDiscrs_1912_ = lean_ctor_get(v_val_1910_, 1);
lean_inc(v_numDiscrs_1912_);
lean_dec(v_val_1910_);
v___x_1913_ = lean_unsigned_to_nat(1u);
v___x_1914_ = lean_nat_add(v_numParams_1911_, v___x_1913_);
lean_dec(v_numParams_1911_);
v___x_1915_ = lean_nat_add(v___x_1914_, v_numDiscrs_1912_);
lean_dec(v_numDiscrs_1912_);
v___x_1916_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_1872_, v___x_1914_, v___x_1915_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_);
lean_dec(v___x_1915_);
lean_dec(v___x_1914_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
if (lean_obj_tag(v_a_1917_) == 0)
{
lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1927_; 
lean_inc_ref(v_a_1917_);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; 
v_unused_1928_ = lean_ctor_get(v___x_1916_, 0);
lean_dec(v_unused_1928_);
v___x_1919_ = v___x_1916_;
v_isShared_1920_ = v_isSharedCheck_1927_;
goto v_resetjp_1918_;
}
else
{
lean_dec(v___x_1916_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1927_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
uint8_t v_contextDependent_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1925_; 
v_contextDependent_1921_ = lean_ctor_get_uint8(v_a_1917_, 1);
lean_dec_ref_known(v_a_1917_, 0);
v___x_1922_ = 1;
v___x_1923_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1922_, v_contextDependent_1921_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1923_);
v___x_1925_ = v___x_1919_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
else
{
return v___x_1916_;
}
}
else
{
return v___x_1916_;
}
}
else
{
lean_object* v___x_1929_; lean_object* v___x_1931_; 
lean_dec(v_a_1906_);
lean_dec_ref(v_e_1872_);
v___x_1929_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0));
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 0, v___x_1929_);
v___x_1931_ = v___x_1908_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec_ref(v_e_1872_);
lean_dec(v_declName_1871_);
v_a_1934_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1883_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1883_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object* v_declName_1942_, lean_object* v_e_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1942_, v_e_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
lean_dec(v_a_1952_);
lean_dec_ref(v_a_1951_);
lean_dec(v_a_1950_);
lean_dec_ref(v_a_1949_);
lean_dec(v_a_1948_);
lean_dec_ref(v_a_1947_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec(v_a_1944_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object* v_e_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_){
_start:
{
uint8_t v___x_1966_; 
v___x_1966_ = l_Lean_Expr_isApp(v_e_1955_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
lean_dec_ref(v_e_1955_);
v___x_1967_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1967_, 0, v___x_1966_);
lean_ctor_set_uint8(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
return v___x_1968_;
}
else
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lean_Expr_getAppFn(v_e_1955_);
if (lean_obj_tag(v___x_1969_) == 4)
{
lean_object* v_declName_1970_; lean_object* v___x_1971_; uint8_t v___x_1972_; 
v_declName_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_declName_1970_);
lean_dec_ref_known(v___x_1969_, 2);
v___x_1971_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1));
v___x_1972_ = lean_name_eq(v_declName_1970_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1));
v___x_1974_ = lean_name_eq(v_declName_1970_, v___x_1973_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1));
v___x_1976_ = lean_name_eq(v_declName_1970_, v___x_1975_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte___lam__0___closed__1));
v___x_1978_ = lean_name_eq(v_declName_1970_, v___x_1977_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; uint8_t v___x_1980_; 
v___x_1979_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte___lam__0___closed__0));
v___x_1980_ = lean_name_eq(v_declName_1970_, v___x_1979_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; 
v___x_1981_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1970_, v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1981_;
}
else
{
lean_object* v___x_1982_; 
lean_dec(v_declName_1970_);
v___x_1982_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUDIte(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1982_;
}
}
else
{
lean_object* v___x_1983_; 
lean_dec(v_declName_1970_);
v___x_1983_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpUIte(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1983_;
}
}
else
{
lean_object* v___x_1984_; 
lean_dec(v_declName_1970_);
v___x_1984_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1984_;
}
}
else
{
lean_object* v___x_1985_; 
lean_dec(v_declName_1970_);
v___x_1985_ = l_Lean_Meta_Sym_Simp_simpCond(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1985_;
}
}
else
{
lean_object* v___x_1986_; 
lean_dec(v_declName_1970_);
v___x_1986_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
return v___x_1986_;
}
}
else
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_dec_ref(v___x_1969_);
lean_dec_ref(v_e_1955_);
v___x_1987_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0));
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
return v___x_1988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object* v_e_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec_ref(v_a_1995_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
lean_dec(v_a_1990_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl(lean_object* v_e_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2021_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2015_ = v___x_2012_;
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2012_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2021_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2017_; lean_object* v___x_2019_; 
v___x_2017_ = l_Lean_Meta_Sym_Simp_Result_markAsNotDone(v_a_2013_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 0, v___x_2017_);
v___x_2019_ = v___x_2015_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
else
{
return v___x_2012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_reduceControl___boxed(lean_object* v_e_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lean_Meta_Sym_Simp_reduceControl(v_e_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec(v_a_2029_);
lean_dec_ref(v_a_2028_);
lean_dec(v_a_2027_);
lean_dec_ref(v_a_2026_);
lean_dec(v_a_2025_);
lean_dec_ref(v_a_2024_);
lean_dec(v_a_2023_);
return v_res_2033_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif
