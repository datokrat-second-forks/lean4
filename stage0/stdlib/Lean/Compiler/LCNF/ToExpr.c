// Lean compiler output
// Module: Lean.Compiler.LCNF.ToExpr
// Imports: public import Lean.Compiler.LCNF.Basic import Init.Omega
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetValue_toExpr(uint8_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Arg_toExpr___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_FVarIdMap_size___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 93, 203, 178, 149, 199, 118, 190)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lcUnreachable"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__3_value),LEAN_SCALAR_PTR_LITERAL(244, 152, 7, 242, 102, 125, 47, 175)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "oset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__6_value),LEAN_SCALAR_PTR_LITERAL(204, 56, 52, 158, 165, 233, 45, 89)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dummy"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__9_value),LEAN_SCALAR_PTR_LITERAL(209, 220, 178, 109, 127, 136, 95, 49)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__11_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__14_value),LEAN_SCALAR_PTR_LITERAL(124, 160, 46, 241, 188, 4, 130, 152)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__15_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__16;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sset"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__17_value),LEAN_SCALAR_PTR_LITERAL(46, 244, 58, 215, 190, 158, 72, 225)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__18_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__19;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "setTag"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__20 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__20_value),LEAN_SCALAR_PTR_LITERAL(249, 157, 207, 131, 172, 199, 30, 80)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__21_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__22;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inc"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__23 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__23_value),LEAN_SCALAR_PTR_LITERAL(79, 144, 50, 52, 33, 141, 134, 44)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__24 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__24_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__25;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__27 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__26 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__27_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__28 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__28_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__29;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__30 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__26_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__30_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__31 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__31_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__32;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__33 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__33_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__34 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__34_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__35;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__36 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__36_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__37 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__37_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__38;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__42 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__42_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__40 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__39 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__40_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__41 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__41_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__43;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__44;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__45 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__45_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__39_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__45_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__46 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__46_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__47;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toExprM___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "del"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__48 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__48_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toExprM___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__48_value),LEAN_SCALAR_PTR_LITERAL(59, 0, 194, 149, 61, 187, 104, 96)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__49 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toExprM___closed__49_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toExprM___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toExprM___closed__50;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(lean_object* v_offset_1_, lean_object* v_m_2_, lean_object* v_fvarId_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_m_2_, v_fvarId_3_);
if (lean_obj_tag(v___x_4_) == 0)
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Expr_fvar___override(v_fvarId_3_);
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
lean_dec(v_fvarId_3_);
v_val_6_ = lean_ctor_get(v___x_4_, 0);
lean_inc(v_val_6_);
lean_dec_ref_known(v___x_4_, 1);
v___x_7_ = lean_nat_sub(v_offset_1_, v_val_6_);
lean_dec(v_val_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_sub(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
v___x_10_ = l_Lean_Expr_bvar___override(v___x_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr___boxed(lean_object* v_offset_11_, lean_object* v_m_12_, lean_object* v_fvarId_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_offset_11_, v_m_12_, v_fvarId_13_);
lean_dec(v_m_12_);
lean_dec(v_offset_11_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(lean_object* v_m_15_, lean_object* v_o_16_, lean_object* v_e_17_){
_start:
{
switch(lean_obj_tag(v_e_17_))
{
case 1:
{
lean_object* v_fvarId_18_; lean_object* v___x_19_; 
v_fvarId_18_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_fvarId_18_);
lean_dec_ref_known(v_e_17_, 1);
v___x_19_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v_o_16_, v_m_15_, v_fvarId_18_);
return v___x_19_;
}
case 5:
{
lean_object* v_fn_20_; lean_object* v_arg_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_fn_20_ = lean_ctor_get(v_e_17_, 0);
lean_inc_ref(v_fn_20_);
v_arg_21_ = lean_ctor_get(v_e_17_, 1);
lean_inc_ref(v_arg_21_);
lean_dec_ref_known(v_e_17_, 2);
v___x_22_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_fn_20_);
v___x_23_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_arg_21_);
v___x_24_ = l_Lean_Expr_app___override(v___x_22_, v___x_23_);
return v___x_24_;
}
case 6:
{
lean_object* v_binderName_25_; lean_object* v_binderType_26_; lean_object* v_body_27_; uint8_t v_binderInfo_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_binderName_25_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_binderName_25_);
v_binderType_26_ = lean_ctor_get(v_e_17_, 1);
lean_inc_ref(v_binderType_26_);
v_body_27_ = lean_ctor_get(v_e_17_, 2);
lean_inc_ref(v_body_27_);
v_binderInfo_28_ = lean_ctor_get_uint8(v_e_17_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_17_, 3);
v___x_29_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_binderType_26_);
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = lean_nat_add(v_o_16_, v___x_30_);
v___x_32_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v___x_31_, v_body_27_);
lean_dec(v___x_31_);
v___x_33_ = l_Lean_Expr_lam___override(v_binderName_25_, v___x_29_, v___x_32_, v_binderInfo_28_);
return v___x_33_;
}
case 7:
{
lean_object* v_binderName_34_; lean_object* v_binderType_35_; lean_object* v_body_36_; uint8_t v_binderInfo_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v_binderName_34_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_binderName_34_);
v_binderType_35_ = lean_ctor_get(v_e_17_, 1);
lean_inc_ref(v_binderType_35_);
v_body_36_ = lean_ctor_get(v_e_17_, 2);
lean_inc_ref(v_body_36_);
v_binderInfo_37_ = lean_ctor_get_uint8(v_e_17_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_17_, 3);
v___x_38_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_binderType_35_);
v___x_39_ = lean_unsigned_to_nat(1u);
v___x_40_ = lean_nat_add(v_o_16_, v___x_39_);
v___x_41_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v___x_40_, v_body_36_);
lean_dec(v___x_40_);
v___x_42_ = l_Lean_Expr_forallE___override(v_binderName_34_, v___x_38_, v___x_41_, v_binderInfo_37_);
return v___x_42_;
}
case 8:
{
lean_object* v_declName_43_; lean_object* v_type_44_; lean_object* v_value_45_; lean_object* v_body_46_; uint8_t v_nondep_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_declName_43_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_declName_43_);
v_type_44_ = lean_ctor_get(v_e_17_, 1);
lean_inc_ref(v_type_44_);
v_value_45_ = lean_ctor_get(v_e_17_, 2);
lean_inc_ref(v_value_45_);
v_body_46_ = lean_ctor_get(v_e_17_, 3);
lean_inc_ref(v_body_46_);
v_nondep_47_ = lean_ctor_get_uint8(v_e_17_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_17_, 4);
v___x_48_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_type_44_);
v___x_49_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_value_45_);
v___x_50_ = lean_unsigned_to_nat(1u);
v___x_51_ = lean_nat_add(v_o_16_, v___x_50_);
v___x_52_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v___x_51_, v_body_46_);
lean_dec(v___x_51_);
v___x_53_ = l_Lean_Expr_letE___override(v_declName_43_, v___x_48_, v___x_49_, v___x_52_, v_nondep_47_);
return v___x_53_;
}
case 10:
{
lean_object* v_data_54_; lean_object* v_expr_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_data_54_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_data_54_);
v_expr_55_ = lean_ctor_get(v_e_17_, 1);
lean_inc_ref(v_expr_55_);
lean_dec_ref_known(v_e_17_, 2);
v___x_56_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_expr_55_);
v___x_57_ = l_Lean_Expr_mdata___override(v_data_54_, v___x_56_);
return v___x_57_;
}
case 11:
{
lean_object* v_typeName_58_; lean_object* v_idx_59_; lean_object* v_struct_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_typeName_58_ = lean_ctor_get(v_e_17_, 0);
lean_inc(v_typeName_58_);
v_idx_59_ = lean_ctor_get(v_e_17_, 1);
lean_inc(v_idx_59_);
v_struct_60_ = lean_ctor_get(v_e_17_, 2);
lean_inc_ref(v_struct_60_);
lean_dec_ref_known(v_e_17_, 3);
v___x_61_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_15_, v_o_16_, v_struct_60_);
v___x_62_ = l_Lean_Expr_proj___override(v_typeName_58_, v_idx_59_, v___x_61_);
return v___x_62_;
}
default: 
{
return v_e_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go___boxed(lean_object* v_m_63_, lean_object* v_o_64_, lean_object* v_e_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_63_, v_o_64_, v_e_65_);
lean_dec(v_o_64_);
lean_dec(v_m_63_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(lean_object* v_offset_67_, lean_object* v_m_68_, lean_object* v_e_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_68_, v_offset_67_, v_e_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27___boxed(lean_object* v_offset_71_, lean_object* v_m_72_, lean_object* v_e_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27(v_offset_71_, v_m_72_, v_e_73_);
lean_dec(v_m_72_);
lean_dec(v_offset_71_);
return v_res_74_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(lean_object* v_params_76_, lean_object* v_offset_77_, lean_object* v_m_78_, lean_object* v_i_79_, lean_object* v_e_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_nat_dec_lt(v___x_81_, v_i_79_);
if (v___x_82_ == 0)
{
lean_dec(v_i_79_);
lean_dec(v_offset_77_);
return v_e_80_;
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v_param_86_; lean_object* v_binderName_87_; lean_object* v_type_88_; lean_object* v___x_89_; lean_object* v_domain_90_; uint8_t v___x_91_; lean_object* v___x_92_; 
v___x_83_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___closed__0);
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = lean_nat_sub(v_i_79_, v___x_84_);
lean_dec(v_i_79_);
v_param_86_ = lean_array_get_borrowed(v___x_83_, v_params_76_, v___x_85_);
v_binderName_87_ = lean_ctor_get(v_param_86_, 1);
v_type_88_ = lean_ctor_get(v_param_86_, 2);
v___x_89_ = lean_nat_sub(v_offset_77_, v___x_84_);
lean_dec(v_offset_77_);
lean_inc_ref(v_type_88_);
v_domain_90_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v_m_78_, v___x_89_, v_type_88_);
v___x_91_ = 0;
lean_inc(v_binderName_87_);
v___x_92_ = l_Lean_Expr_lam___override(v_binderName_87_, v_domain_90_, v_e_80_, v___x_91_);
v_offset_77_ = v___x_89_;
v_i_79_ = v___x_85_;
v_e_80_ = v___x_92_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg___boxed(lean_object* v_params_94_, lean_object* v_offset_95_, lean_object* v_m_96_, lean_object* v_i_97_, lean_object* v_e_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_94_, v_offset_95_, v_m_96_, v_i_97_, v_e_98_);
lean_dec(v_m_96_);
lean_dec_ref(v_params_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(uint8_t v_pu_100_, lean_object* v_params_101_, lean_object* v_offset_102_, lean_object* v_m_103_, lean_object* v_i_104_, lean_object* v_e_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_101_, v_offset_102_, v_m_103_, v_i_104_, v_e_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___boxed(lean_object* v_pu_107_, lean_object* v_params_108_, lean_object* v_offset_109_, lean_object* v_m_110_, lean_object* v_i_111_, lean_object* v_e_112_){
_start:
{
uint8_t v_pu_boxed_113_; lean_object* v_res_114_; 
v_pu_boxed_113_ = lean_unbox(v_pu_107_);
v_res_114_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go(v_pu_boxed_113_, v_params_108_, v_offset_109_, v_m_110_, v_i_111_, v_e_112_);
lean_dec(v_m_110_);
lean_dec_ref(v_params_108_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(lean_object* v_params_115_, lean_object* v_e_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = lean_array_get_size(v_params_115_);
lean_inc(v___y_117_);
v___x_120_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_115_, v___y_117_, v___y_118_, v___x_119_, v_e_116_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___y_118_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg___boxed(lean_object* v_params_122_, lean_object* v_e_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___redArg(v_params_122_, v_e_123_, v___y_124_, v___y_125_);
lean_dec(v___y_124_);
lean_dec_ref(v_params_122_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(uint8_t v_pu_127_, lean_object* v_params_128_, lean_object* v_e_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = lean_array_get_size(v_params_128_);
lean_inc(v___y_130_);
v___x_133_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_128_, v___y_130_, v___y_131_, v___x_132_, v_e_129_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___y_131_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_mkLambdaM___boxed(lean_object* v_pu_135_, lean_object* v_params_136_, lean_object* v_e_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
uint8_t v_pu_boxed_140_; lean_object* v_res_141_; 
v_pu_boxed_140_ = lean_unbox(v_pu_135_);
v_res_141_ = l_Lean_Compiler_LCNF_ToExpr_mkLambdaM(v_pu_boxed_140_, v_params_136_, v_e_137_, v___y_138_, v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v_params_136_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(lean_object* v_fvarId_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v___y_143_, v___y_144_, v_fvarId_142_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___y_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM___boxed(lean_object* v_fvarId_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExprM(v_fvarId_147_, v___y_148_, v___y_149_);
lean_dec(v___y_148_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM(lean_object* v_e_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_153_, v___y_152_, v_e_151_);
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
lean_ctor_set(v___x_155_, 1, v___y_153_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_abstractM___boxed(lean_object* v_e_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Compiler_LCNF_ToExpr_abstractM(v_e_156_, v___y_157_, v___y_158_);
lean_dec(v___y_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(lean_object* v_fvarId_160_, lean_object* v_k_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
lean_inc(v___y_162_);
v___x_164_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_160_, v___y_162_, v___y_163_);
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = lean_nat_add(v___y_162_, v___x_165_);
v___x_167_ = lean_apply_2(v_k_161_, v___x_166_, v___x_164_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg___boxed(lean_object* v_fvarId_168_, lean_object* v_k_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Compiler_LCNF_ToExpr_withFVar___redArg(v_fvarId_168_, v_k_169_, v___y_170_, v___y_171_);
lean_dec(v___y_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar(lean_object* v_00_u03b1_173_, lean_object* v_fvarId_174_, lean_object* v_k_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_inc(v___y_176_);
v___x_178_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_174_, v___y_176_, v___y_177_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_nat_add(v___y_176_, v___x_179_);
v___x_181_ = lean_apply_2(v_k_175_, v___x_180_, v___x_178_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withFVar___boxed(lean_object* v_00_u03b1_182_, lean_object* v_fvarId_183_, lean_object* v_k_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Compiler_LCNF_ToExpr_withFVar(v_00_u03b1_182_, v_fvarId_183_, v_k_184_, v___y_185_, v___y_186_);
lean_dec(v___y_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(lean_object* v_params_188_, lean_object* v_k_189_, lean_object* v_i_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_array_get_size(v_params_188_);
v___x_194_ = lean_nat_dec_lt(v_i_190_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_dec(v_i_190_);
v___x_195_ = lean_apply_2(v_k_189_, v___y_191_, v___y_192_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; lean_object* v_fvarId_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_196_ = lean_array_fget_borrowed(v_params_188_, v_i_190_);
v_fvarId_197_ = lean_ctor_get(v___x_196_, 0);
v___x_198_ = lean_unsigned_to_nat(1u);
v___x_199_ = lean_nat_add(v_i_190_, v___x_198_);
lean_dec(v_i_190_);
lean_inc(v___y_191_);
lean_inc(v_fvarId_197_);
v___x_200_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_197_, v___y_191_, v___y_192_);
v___x_201_ = lean_nat_add(v___y_191_, v___x_198_);
lean_dec(v___y_191_);
v_i_190_ = v___x_199_;
v___y_191_ = v___x_201_;
v___y_192_ = v___x_200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg___boxed(lean_object* v_params_203_, lean_object* v_k_204_, lean_object* v_i_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_203_, v_k_204_, v_i_205_, v___y_206_, v___y_207_);
lean_dec_ref(v_params_203_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(uint8_t v_pu_209_, lean_object* v_00_u03b1_210_, lean_object* v_params_211_, lean_object* v_k_212_, lean_object* v_i_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v___x_216_; 
lean_inc(v___y_214_);
v___x_216_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_211_, v_k_212_, v_i_213_, v___y_214_, v___y_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___boxed(lean_object* v_pu_217_, lean_object* v_00_u03b1_218_, lean_object* v_params_219_, lean_object* v_k_220_, lean_object* v_i_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
uint8_t v_pu_boxed_224_; lean_object* v_res_225_; 
v_pu_boxed_224_ = lean_unbox(v_pu_217_);
v_res_225_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go(v_pu_boxed_224_, v_00_u03b1_218_, v_params_219_, v_k_220_, v_i_221_, v___y_222_, v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v_params_219_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(lean_object* v_params_226_, lean_object* v_k_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_228_);
v___x_231_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_226_, v_k_227_, v___x_230_, v___y_228_, v___y_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___redArg___boxed(lean_object* v_params_232_, lean_object* v_k_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Compiler_LCNF_ToExpr_withParams___redArg(v_params_232_, v_k_233_, v___y_234_, v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v_params_232_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams(uint8_t v_pu_237_, lean_object* v_00_u03b1_238_, lean_object* v_params_239_, lean_object* v_k_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_241_);
v___x_244_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___redArg(v_params_239_, v_k_240_, v___x_243_, v___y_241_, v___y_242_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_withParams___boxed(lean_object* v_pu_245_, lean_object* v_00_u03b1_246_, lean_object* v_params_247_, lean_object* v_k_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
uint8_t v_pu_boxed_251_; lean_object* v_res_252_; 
v_pu_boxed_251_ = lean_unbox(v_pu_245_);
v_res_252_ = l_Lean_Compiler_LCNF_ToExpr_withParams(v_pu_boxed_251_, v_00_u03b1_246_, v_params_247_, v_k_248_, v___y_249_, v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v_params_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run___redArg(lean_object* v_x_253_, lean_object* v_offset_254_, lean_object* v_levelMap_255_){
_start:
{
lean_object* v___x_256_; lean_object* v_fst_257_; 
v___x_256_ = lean_apply_2(v_x_253_, v_offset_254_, v_levelMap_255_);
v_fst_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_fst_257_);
lean_dec_ref(v___x_256_);
return v_fst_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run(lean_object* v_00_u03b1_258_, lean_object* v_x_259_, lean_object* v_offset_260_, lean_object* v_levelMap_261_){
_start:
{
lean_object* v___x_262_; lean_object* v_fst_263_; 
v___x_262_ = lean_apply_2(v_x_259_, v_offset_260_, v_levelMap_261_);
v_fst_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_fst_263_);
lean_dec_ref(v___x_262_);
return v_fst_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___lam__0(lean_object* v_x1_264_, lean_object* v_x2_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = l_Lean_FVarIdMap_size___redArg(v_x1_264_);
v___x_267_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_x2_265_, v___x_266_, v_x1_264_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg(lean_object* v_x_288_, lean_object* v_xs_289_){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___y_294_; lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_290_ = lean_box(1);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_array_get_size(v_xs_289_);
v___x_297_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9));
v___x_298_ = lean_nat_dec_lt(v___x_291_, v___x_292_);
if (v___x_298_ == 0)
{
lean_dec_ref(v_xs_289_);
v___y_294_ = v___x_290_;
goto v___jp_293_;
}
else
{
lean_object* v___f_299_; uint8_t v___x_300_; 
v___f_299_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10));
v___x_300_ = lean_nat_dec_le(v___x_292_, v___x_292_);
if (v___x_300_ == 0)
{
if (v___x_298_ == 0)
{
lean_dec_ref(v_xs_289_);
v___y_294_ = v___x_290_;
goto v___jp_293_;
}
else
{
size_t v___x_301_; size_t v___x_302_; lean_object* v___x_303_; 
v___x_301_ = ((size_t)0ULL);
v___x_302_ = lean_usize_of_nat(v___x_292_);
v___x_303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_297_, v___f_299_, v_xs_289_, v___x_301_, v___x_302_, v___x_290_);
v___y_294_ = v___x_303_;
goto v___jp_293_;
}
}
else
{
size_t v___x_304_; size_t v___x_305_; lean_object* v___x_306_; 
v___x_304_ = ((size_t)0ULL);
v___x_305_ = lean_usize_of_nat(v___x_292_);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_297_, v___f_299_, v_xs_289_, v___x_304_, v___x_305_, v___x_290_);
v___y_294_ = v___x_306_;
goto v___jp_293_;
}
}
v___jp_293_:
{
lean_object* v___x_295_; lean_object* v_fst_296_; 
v___x_295_ = lean_apply_2(v_x_288_, v___x_292_, v___y_294_);
v_fst_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_fst_296_);
lean_dec_ref(v___x_295_);
return v_fst_296_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ToExpr_run_x27(lean_object* v_00_u03b1_307_, lean_object* v_x_308_, lean_object* v_xs_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___y_314_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_310_ = lean_box(1);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_array_get_size(v_xs_309_);
v___x_317_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__9));
v___x_318_ = lean_nat_dec_lt(v___x_311_, v___x_312_);
if (v___x_318_ == 0)
{
lean_dec_ref(v_xs_309_);
v___y_314_ = v___x_310_;
goto v___jp_313_;
}
else
{
lean_object* v___f_319_; uint8_t v___x_320_; 
v___f_319_ = ((lean_object*)(l_Lean_Compiler_LCNF_ToExpr_run_x27___redArg___closed__10));
v___x_320_ = lean_nat_dec_le(v___x_312_, v___x_312_);
if (v___x_320_ == 0)
{
if (v___x_318_ == 0)
{
lean_dec_ref(v_xs_309_);
v___y_314_ = v___x_310_;
goto v___jp_313_;
}
else
{
size_t v___x_321_; size_t v___x_322_; lean_object* v___x_323_; 
v___x_321_ = ((size_t)0ULL);
v___x_322_ = lean_usize_of_nat(v___x_312_);
v___x_323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_317_, v___f_319_, v_xs_309_, v___x_321_, v___x_322_, v___x_310_);
v___y_314_ = v___x_323_;
goto v___jp_313_;
}
}
else
{
size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; 
v___x_324_ = ((size_t)0ULL);
v___x_325_ = lean_usize_of_nat(v___x_312_);
v___x_326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_317_, v___f_319_, v_xs_309_, v___x_324_, v___x_325_, v___x_310_);
v___y_314_ = v___x_326_;
goto v___jp_313_;
}
}
v___jp_313_:
{
lean_object* v___x_315_; lean_object* v_fst_316_; 
v___x_315_ = lean_apply_2(v_x_308_, v___x_312_, v___y_314_);
v_fst_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_fst_316_);
lean_dec_ref(v___x_315_);
return v_fst_316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(lean_object* v_arg_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = l_Lean_Compiler_LCNF_Arg_toExpr___redArg(v_arg_327_);
v___x_331_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_329_, v___y_328_, v___x_330_);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v___y_329_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg___boxed(lean_object* v_arg_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_arg_333_, v___y_334_, v___y_335_);
lean_dec(v___y_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(uint8_t v_pu_337_, lean_object* v_arg_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_arg_338_, v___y_339_, v___y_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___boxed(lean_object* v_pu_342_, lean_object* v_arg_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
uint8_t v_pu_boxed_346_; lean_object* v_res_347_; 
v_pu_boxed_346_ = lean_unbox(v_pu_342_);
v_res_347_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM(v_pu_boxed_346_, v_arg_343_, v___y_344_, v___y_345_);
lean_dec(v___y_344_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(size_t v_sz_348_, size_t v_i_349_, lean_object* v_bs_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
uint8_t v___x_353_; 
v___x_353_ = lean_usize_dec_lt(v_i_349_, v_sz_348_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v_bs_350_);
lean_ctor_set(v___x_354_, 1, v___y_352_);
return v___x_354_;
}
else
{
lean_object* v_v_355_; lean_object* v___x_356_; lean_object* v_fst_357_; lean_object* v_snd_358_; lean_object* v___x_359_; lean_object* v_bs_x27_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; 
v_v_355_ = lean_array_uget_borrowed(v_bs_350_, v_i_349_);
lean_inc(v_v_355_);
v___x_356_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_v_355_, v___y_351_, v___y_352_);
v_fst_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_fst_357_);
v_snd_358_ = lean_ctor_get(v___x_356_, 1);
lean_inc(v_snd_358_);
lean_dec_ref(v___x_356_);
v___x_359_ = lean_unsigned_to_nat(0u);
v_bs_x27_360_ = lean_array_uset(v_bs_350_, v_i_349_, v___x_359_);
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_349_, v___x_361_);
v___x_363_ = lean_array_uset(v_bs_x27_360_, v_i_349_, v_fst_357_);
v_i_349_ = v___x_362_;
v_bs_350_ = v___x_363_;
v___y_352_ = v_snd_358_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg___boxed(lean_object* v_sz_365_, lean_object* v_i_366_, lean_object* v_bs_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
size_t v_sz_boxed_370_; size_t v_i_boxed_371_; lean_object* v_res_372_; 
v_sz_boxed_370_ = lean_unbox_usize(v_sz_365_);
lean_dec(v_sz_365_);
v_i_boxed_371_ = lean_unbox_usize(v_i_366_);
lean_dec(v_i_366_);
v_res_372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(v_sz_boxed_370_, v_i_boxed_371_, v_bs_367_, v___y_368_, v___y_369_);
lean_dec(v___y_368_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(uint8_t v_pu_373_, size_t v_sz_374_, size_t v_i_375_, lean_object* v_bs_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
uint8_t v___x_379_; 
v___x_379_ = lean_usize_dec_lt(v_i_375_, v_sz_374_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; 
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v_bs_376_);
lean_ctor_set(v___x_380_, 1, v___y_378_);
return v___x_380_;
}
else
{
lean_object* v_v_381_; lean_object* v___x_382_; lean_object* v_bs_x27_383_; lean_object* v_fst_385_; lean_object* v_snd_386_; 
v_v_381_ = lean_array_uget(v_bs_376_, v_i_375_);
v___x_382_ = lean_unsigned_to_nat(0u);
v_bs_x27_383_ = lean_array_uset(v_bs_376_, v_i_375_, v___x_382_);
switch(lean_obj_tag(v_v_381_))
{
case 0:
{
lean_object* v_ctorName_391_; lean_object* v_params_392_; lean_object* v_code_393_; lean_object* v___x_394_; lean_object* v_fst_395_; lean_object* v_snd_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_ctorName_391_ = lean_ctor_get(v_v_381_, 0);
lean_inc(v_ctorName_391_);
v_params_392_ = lean_ctor_get(v_v_381_, 1);
lean_inc_ref(v_params_392_);
v_code_393_ = lean_ctor_get(v_v_381_, 2);
lean_inc_ref(v_code_393_);
lean_dec_ref_known(v_v_381_, 3);
lean_inc(v___y_377_);
v___x_394_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_373_, v_code_393_, v_params_392_, v_params_392_, v___x_382_, v___y_377_, v___y_378_);
lean_dec_ref(v_params_392_);
v_fst_395_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_fst_395_);
v_snd_396_ = lean_ctor_get(v___x_394_, 1);
lean_inc(v_snd_396_);
lean_dec_ref(v___x_394_);
v___x_397_ = lean_box(0);
v___x_398_ = l_Lean_mkConst(v_ctorName_391_, v___x_397_);
v___x_399_ = l_Lean_Expr_app___override(v___x_398_, v_fst_395_);
v_fst_385_ = v___x_399_;
v_snd_386_ = v_snd_396_;
goto v___jp_384_;
}
case 1:
{
lean_object* v_info_400_; lean_object* v_code_401_; lean_object* v___x_402_; lean_object* v_fst_403_; lean_object* v_snd_404_; lean_object* v_name_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_info_400_ = lean_ctor_get(v_v_381_, 0);
lean_inc_ref(v_info_400_);
v_code_401_ = lean_ctor_get(v_v_381_, 1);
lean_inc_ref(v_code_401_);
lean_dec_ref_known(v_v_381_, 2);
v___x_402_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_373_, v_code_401_, v___y_377_, v___y_378_);
v_fst_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_fst_403_);
v_snd_404_ = lean_ctor_get(v___x_402_, 1);
lean_inc(v_snd_404_);
lean_dec_ref(v___x_402_);
v_name_405_ = lean_ctor_get(v_info_400_, 0);
lean_inc(v_name_405_);
lean_dec_ref(v_info_400_);
v___x_406_ = lean_box(0);
v___x_407_ = l_Lean_mkConst(v_name_405_, v___x_406_);
v___x_408_ = l_Lean_Expr_app___override(v___x_407_, v_fst_403_);
v_fst_385_ = v___x_408_;
v_snd_386_ = v_snd_404_;
goto v___jp_384_;
}
default: 
{
lean_object* v_code_409_; lean_object* v___x_410_; lean_object* v_fst_411_; lean_object* v_snd_412_; 
v_code_409_ = lean_ctor_get(v_v_381_, 0);
lean_inc_ref(v_code_409_);
lean_dec_ref_known(v_v_381_, 1);
v___x_410_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_373_, v_code_409_, v___y_377_, v___y_378_);
v_fst_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_fst_411_);
v_snd_412_ = lean_ctor_get(v___x_410_, 1);
lean_inc(v_snd_412_);
lean_dec_ref(v___x_410_);
v_fst_385_ = v_fst_411_;
v_snd_386_ = v_snd_412_;
goto v___jp_384_;
}
}
v___jp_384_:
{
size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; 
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_add(v_i_375_, v___x_387_);
v___x_389_ = lean_array_uset(v_bs_x27_383_, v_i_375_, v_fst_385_);
v_i_375_ = v___x_388_;
v_bs_376_ = v___x_389_;
v___y_378_ = v_snd_386_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__2(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_box(0);
v___x_417_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__1));
v___x_418_ = l_Lean_mkConst(v___x_417_, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__5(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_box(0);
v___x_423_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__4));
v___x_424_ = l_Lean_mkConst(v___x_423_, v___x_422_);
return v___x_424_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__8(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_box(0);
v___x_429_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__7));
v___x_430_ = l_Lean_mkConst(v___x_429_, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_437_ = lean_box(0);
v___x_438_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__12));
v___x_439_ = l_Lean_mkConst(v___x_438_, v___x_437_);
return v___x_439_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__16(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_box(0);
v___x_444_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__15));
v___x_445_ = l_Lean_mkConst(v___x_444_, v___x_443_);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__19(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_box(0);
v___x_450_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__18));
v___x_451_ = l_Lean_mkConst(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__22(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lean_box(0);
v___x_456_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__21));
v___x_457_ = l_Lean_mkConst(v___x_456_, v___x_455_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__25(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = lean_box(0);
v___x_462_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__24));
v___x_463_ = l_Lean_mkConst(v___x_462_, v___x_461_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_box(0);
v___x_470_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__28));
v___x_471_ = l_Lean_mkConst(v___x_470_, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_box(0);
v___x_477_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__31));
v___x_478_ = l_Lean_mkConst(v___x_477_, v___x_476_);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__35(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_482_ = lean_box(0);
v___x_483_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__34));
v___x_484_ = l_Lean_mkConst(v___x_483_, v___x_482_);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_box(0);
v___x_489_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__37));
v___x_490_ = l_Lean_mkConst(v___x_489_, v___x_488_);
return v___x_490_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__43(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_499_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__42));
v___x_500_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__41));
v___x_501_ = l_Lean_mkConst(v___x_500_, v___x_499_);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__44(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__38, &l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38);
v___x_503_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__43, &l_Lean_Compiler_LCNF_Code_toExprM___closed__43_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__43);
v___x_504_ = l_Lean_Expr_app___override(v___x_503_, v___x_502_);
return v___x_504_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__47(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__42));
v___x_510_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__46));
v___x_511_ = l_Lean_mkConst(v___x_510_, v___x_509_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__50(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_box(0);
v___x_516_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__49));
v___x_517_ = l_Lean_mkConst(v___x_516_, v___x_515_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM(uint8_t v_pu_518_, lean_object* v_code_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
switch(lean_obj_tag(v_code_519_))
{
case 0:
{
lean_object* v_decl_522_; lean_object* v_k_523_; lean_object* v_fvarId_524_; lean_object* v_binderName_525_; lean_object* v_type_526_; lean_object* v_value_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_545_; 
v_decl_522_ = lean_ctor_get(v_code_519_, 0);
lean_inc_ref(v_decl_522_);
v_k_523_ = lean_ctor_get(v_code_519_, 1);
lean_inc_ref(v_k_523_);
lean_dec_ref_known(v_code_519_, 2);
v_fvarId_524_ = lean_ctor_get(v_decl_522_, 0);
lean_inc(v_fvarId_524_);
v_binderName_525_ = lean_ctor_get(v_decl_522_, 1);
lean_inc(v_binderName_525_);
v_type_526_ = lean_ctor_get(v_decl_522_, 2);
lean_inc_ref(v_type_526_);
v_value_527_ = lean_ctor_get(v_decl_522_, 3);
lean_inc(v_value_527_);
lean_dec_ref(v_decl_522_);
v___x_528_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_521_, v___y_520_, v_type_526_);
v___x_529_ = l_Lean_Compiler_LCNF_LetValue_toExpr(v_pu_518_, v_value_527_);
v___x_530_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_521_, v___y_520_, v___x_529_);
lean_inc(v___y_520_);
v___x_531_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_524_, v___y_520_, v___y_521_);
v___x_532_ = lean_unsigned_to_nat(1u);
v___x_533_ = lean_nat_add(v___y_520_, v___x_532_);
v___x_534_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_523_, v___x_533_, v___x_531_);
lean_dec(v___x_533_);
v_fst_535_ = lean_ctor_get(v___x_534_, 0);
v_snd_536_ = lean_ctor_get(v___x_534_, 1);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_545_ == 0)
{
v___x_538_ = v___x_534_;
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snd_536_);
lean_inc(v_fst_535_);
lean_dec(v___x_534_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
uint8_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = 1;
v___x_541_ = l_Lean_Expr_letE___override(v_binderName_525_, v___x_528_, v___x_530_, v_fst_535_, v___x_540_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_snd_536_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
case 3:
{
lean_object* v_fvarId_546_; lean_object* v_args_547_; lean_object* v___x_548_; size_t v_sz_549_; size_t v___x_550_; lean_object* v___x_551_; lean_object* v_fst_552_; lean_object* v_snd_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_561_; 
v_fvarId_546_ = lean_ctor_get(v_code_519_, 0);
lean_inc(v_fvarId_546_);
v_args_547_ = lean_ctor_get(v_code_519_, 1);
lean_inc_ref(v_args_547_);
lean_dec_ref_known(v_code_519_, 2);
v___x_548_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v___y_520_, v___y_521_, v_fvarId_546_);
v_sz_549_ = lean_array_size(v_args_547_);
v___x_550_ = ((size_t)0ULL);
v___x_551_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(v_sz_549_, v___x_550_, v_args_547_, v___y_520_, v___y_521_);
v_fst_552_ = lean_ctor_get(v___x_551_, 0);
v_snd_553_ = lean_ctor_get(v___x_551_, 1);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_561_ == 0)
{
v___x_555_ = v___x_551_;
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_snd_553_);
lean_inc(v_fst_552_);
lean_dec(v___x_551_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_557_ = l_Lean_mkAppN(v___x_548_, v_fst_552_);
lean_dec(v_fst_552_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_557_);
v___x_559_ = v___x_555_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_snd_553_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
case 4:
{
lean_object* v_cases_562_; lean_object* v_discr_563_; lean_object* v_alts_564_; size_t v_sz_565_; size_t v___x_566_; lean_object* v___x_567_; lean_object* v_fst_568_; lean_object* v_snd_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_583_; 
v_cases_562_ = lean_ctor_get(v_code_519_, 0);
lean_inc_ref(v_cases_562_);
lean_dec_ref_known(v_code_519_, 1);
v_discr_563_ = lean_ctor_get(v_cases_562_, 2);
lean_inc(v_discr_563_);
v_alts_564_ = lean_ctor_get(v_cases_562_, 3);
lean_inc_ref(v_alts_564_);
lean_dec_ref(v_cases_562_);
v_sz_565_ = lean_array_size(v_alts_564_);
v___x_566_ = ((size_t)0ULL);
v___x_567_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(v_pu_518_, v_sz_565_, v___x_566_, v_alts_564_, v___y_520_, v___y_521_);
v_fst_568_ = lean_ctor_get(v___x_567_, 0);
v_snd_569_ = lean_ctor_get(v___x_567_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_583_ == 0)
{
v___x_571_ = v___x_567_;
v_isShared_572_ = v_isSharedCheck_583_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_snd_569_);
lean_inc(v_fst_568_);
lean_dec(v___x_567_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_583_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_581_; 
v___x_573_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v___y_520_, v_snd_569_, v_discr_563_);
v___x_574_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__2, &l_Lean_Compiler_LCNF_Code_toExprM___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__2);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_mk_empty_array_with_capacity(v___x_575_);
v___x_577_ = lean_array_push(v___x_576_, v___x_573_);
v___x_578_ = l_Array_append___redArg(v___x_577_, v_fst_568_);
lean_dec(v_fst_568_);
v___x_579_ = l_Lean_mkAppN(v___x_574_, v___x_578_);
lean_dec_ref(v___x_578_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_579_);
v___x_581_ = v___x_571_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_snd_569_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
case 5:
{
lean_object* v_fvarId_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_fvarId_584_ = lean_ctor_get(v_code_519_, 0);
lean_inc(v_fvarId_584_);
lean_dec_ref_known(v_code_519_, 1);
v___x_585_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_FVarId_toExpr(v___y_520_, v___y_521_, v_fvarId_584_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___y_521_);
return v___x_586_;
}
case 6:
{
lean_object* v_type_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_type_587_ = lean_ctor_get(v_code_519_, 0);
lean_inc_ref(v_type_587_);
lean_dec_ref_known(v_code_519_, 1);
v___x_588_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_521_, v___y_520_, v_type_587_);
v___x_589_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__5, &l_Lean_Compiler_LCNF_Code_toExprM___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__5);
v___x_590_ = l_Lean_Expr_app___override(v___x_589_, v___x_588_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
lean_ctor_set(v___x_591_, 1, v___y_521_);
return v___x_591_;
}
case 7:
{
lean_object* v_fvarId_592_; lean_object* v_i_593_; lean_object* v_y_594_; lean_object* v_k_595_; lean_object* v___x_596_; lean_object* v_fst_597_; lean_object* v_snd_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_619_; 
v_fvarId_592_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_592_, 2);
v_i_593_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_i_593_);
v_y_594_ = lean_ctor_get(v_code_519_, 2);
lean_inc(v_y_594_);
v_k_595_ = lean_ctor_get(v_code_519_, 3);
lean_inc_ref(v_k_595_);
lean_dec_ref_known(v_code_519_, 4);
v___x_596_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_Arg_toExprM___redArg(v_y_594_, v___y_520_, v___y_521_);
v_fst_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_fst_597_);
v_snd_598_ = lean_ctor_get(v___x_596_, 1);
lean_inc(v_snd_598_);
lean_dec_ref(v___x_596_);
v___x_599_ = l_Lean_Expr_fvar___override(v_fvarId_592_);
lean_inc(v___y_520_);
v___x_600_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_592_, v___y_520_, v_snd_598_);
v___x_601_ = lean_unsigned_to_nat(1u);
v___x_602_ = lean_nat_add(v___y_520_, v___x_601_);
v___x_603_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_595_, v___x_602_, v___x_600_);
lean_dec(v___x_602_);
v_fst_604_ = lean_ctor_get(v___x_603_, 0);
v_snd_605_ = lean_ctor_get(v___x_603_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_619_ == 0)
{
v___x_607_ = v___x_603_;
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_snd_605_);
lean_inc(v_fst_604_);
lean_dec(v___x_603_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_609_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__8, &l_Lean_Compiler_LCNF_Code_toExprM___closed__8_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__8);
v___x_610_ = l_Lean_mkNatLit(v_i_593_);
v___x_611_ = l_Lean_mkApp3(v___x_609_, v___x_599_, v___x_610_, v_fst_597_);
v___x_612_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_613_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_614_ = 1;
v___x_615_ = l_Lean_Expr_letE___override(v___x_612_, v___x_613_, v___x_611_, v_fst_604_, v___x_614_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_615_);
v___x_617_ = v___x_607_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_snd_605_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
case 8:
{
lean_object* v_fvarId_620_; lean_object* v_i_621_; lean_object* v_y_622_; lean_object* v_k_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_fst_629_; lean_object* v_snd_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_645_; 
v_fvarId_620_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_620_, 2);
v_i_621_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_i_621_);
v_y_622_ = lean_ctor_get(v_code_519_, 2);
lean_inc(v_y_622_);
v_k_623_ = lean_ctor_get(v_code_519_, 3);
lean_inc_ref(v_k_623_);
lean_dec_ref_known(v_code_519_, 4);
v___x_624_ = l_Lean_Expr_fvar___override(v_fvarId_620_);
lean_inc(v___y_520_);
v___x_625_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_620_, v___y_520_, v___y_521_);
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = lean_nat_add(v___y_520_, v___x_626_);
v___x_628_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_623_, v___x_627_, v___x_625_);
lean_dec(v___x_627_);
v_fst_629_ = lean_ctor_get(v___x_628_, 0);
v_snd_630_ = lean_ctor_get(v___x_628_, 1);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_645_ == 0)
{
v___x_632_ = v___x_628_;
v_isShared_633_ = v_isSharedCheck_645_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_snd_630_);
lean_inc(v_fst_629_);
lean_dec(v___x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_645_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_value_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_634_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__16, &l_Lean_Compiler_LCNF_Code_toExprM___closed__16_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__16);
v___x_635_ = l_Lean_mkNatLit(v_i_621_);
v___x_636_ = l_Lean_Expr_fvar___override(v_y_622_);
v_value_637_ = l_Lean_mkApp3(v___x_634_, v___x_624_, v___x_635_, v___x_636_);
v___x_638_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_639_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_640_ = 1;
v___x_641_ = l_Lean_Expr_letE___override(v___x_638_, v___x_639_, v_value_637_, v_fst_629_, v___x_640_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_641_);
v___x_643_ = v___x_632_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_snd_630_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
case 9:
{
lean_object* v_fvarId_646_; lean_object* v_i_647_; lean_object* v_offset_648_; lean_object* v_y_649_; lean_object* v_ty_650_; lean_object* v_k_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_fst_657_; lean_object* v_snd_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_674_; 
v_fvarId_646_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_646_, 2);
v_i_647_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_i_647_);
v_offset_648_ = lean_ctor_get(v_code_519_, 2);
lean_inc(v_offset_648_);
v_y_649_ = lean_ctor_get(v_code_519_, 3);
lean_inc(v_y_649_);
v_ty_650_ = lean_ctor_get(v_code_519_, 4);
lean_inc_ref(v_ty_650_);
v_k_651_ = lean_ctor_get(v_code_519_, 5);
lean_inc_ref(v_k_651_);
lean_dec_ref_known(v_code_519_, 6);
v___x_652_ = l_Lean_Expr_fvar___override(v_fvarId_646_);
lean_inc(v___y_520_);
v___x_653_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_646_, v___y_520_, v___y_521_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_add(v___y_520_, v___x_654_);
v___x_656_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_651_, v___x_655_, v___x_653_);
lean_dec(v___x_655_);
v_fst_657_ = lean_ctor_get(v___x_656_, 0);
v_snd_658_ = lean_ctor_get(v___x_656_, 1);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_674_ == 0)
{
v___x_660_ = v___x_656_;
v_isShared_661_ = v_isSharedCheck_674_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_snd_658_);
lean_inc(v_fst_657_);
lean_dec(v___x_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_674_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v_value_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_662_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__19, &l_Lean_Compiler_LCNF_Code_toExprM___closed__19_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__19);
v___x_663_ = l_Lean_mkNatLit(v_i_647_);
v___x_664_ = l_Lean_mkNatLit(v_offset_648_);
v___x_665_ = l_Lean_Expr_fvar___override(v_y_649_);
v_value_666_ = l_Lean_mkApp5(v___x_662_, v___x_652_, v___x_663_, v___x_664_, v___x_665_, v_ty_650_);
v___x_667_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_668_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_669_ = 1;
v___x_670_ = l_Lean_Expr_letE___override(v___x_667_, v___x_668_, v_value_666_, v_fst_657_, v___x_669_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_670_);
v___x_672_ = v___x_660_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_snd_658_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
case 10:
{
lean_object* v_fvarId_675_; lean_object* v_cidx_676_; lean_object* v_k_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_fst_682_; lean_object* v_snd_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_698_; 
v_fvarId_675_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_675_, 2);
v_cidx_676_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_cidx_676_);
v_k_677_ = lean_ctor_get(v_code_519_, 2);
lean_inc_ref(v_k_677_);
lean_dec_ref_known(v_code_519_, 3);
lean_inc(v___y_520_);
v___x_678_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_675_, v___y_520_, v___y_521_);
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = lean_nat_add(v___y_520_, v___x_679_);
v___x_681_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_677_, v___x_680_, v___x_678_);
lean_dec(v___x_680_);
v_fst_682_ = lean_ctor_get(v___x_681_, 0);
v_snd_683_ = lean_ctor_get(v___x_681_, 1);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_698_ == 0)
{
v___x_685_ = v___x_681_;
v_isShared_686_ = v_isSharedCheck_698_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_snd_683_);
lean_inc(v_fst_682_);
lean_dec(v___x_681_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_698_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_687_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__22, &l_Lean_Compiler_LCNF_Code_toExprM___closed__22_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__22);
v___x_688_ = l_Lean_Expr_fvar___override(v_fvarId_675_);
v___x_689_ = l_Lean_mkNatLit(v_cidx_676_);
v___x_690_ = l_Lean_mkAppB(v___x_687_, v___x_688_, v___x_689_);
v___x_691_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_692_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_693_ = 1;
v___x_694_ = l_Lean_Expr_letE___override(v___x_691_, v___x_692_, v___x_690_, v_fst_682_, v___x_693_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_694_);
v___x_696_ = v___x_685_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_snd_683_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
case 11:
{
lean_object* v_fvarId_699_; lean_object* v_n_700_; uint8_t v_check_701_; uint8_t v_persistent_702_; lean_object* v_k_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_729_; 
v_fvarId_699_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_699_, 2);
v_n_700_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_n_700_);
v_check_701_ = lean_ctor_get_uint8(v_code_519_, sizeof(void*)*3);
v_persistent_702_ = lean_ctor_get_uint8(v_code_519_, sizeof(void*)*3 + 1);
v_k_703_ = lean_ctor_get(v_code_519_, 2);
lean_inc_ref(v_k_703_);
lean_dec_ref_known(v_code_519_, 3);
v___x_704_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__25, &l_Lean_Compiler_LCNF_Code_toExprM___closed__25_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__25);
v___x_705_ = l_Lean_Expr_fvar___override(v_fvarId_699_);
v___x_706_ = l_Lean_mkNatLit(v_n_700_);
if (v_check_701_ == 0)
{
lean_object* v___x_732_; 
v___x_732_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_729_ = v___x_732_;
goto v___jp_728_;
}
else
{
lean_object* v___x_733_; 
v___x_733_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_729_ = v___x_733_;
goto v___jp_728_;
}
v___jp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v_fst_714_; lean_object* v_snd_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_727_; 
lean_inc(v___y_520_);
v___x_710_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_699_, v___y_520_, v___y_521_);
v___x_711_ = lean_unsigned_to_nat(1u);
v___x_712_ = lean_nat_add(v___y_520_, v___x_711_);
v___x_713_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_703_, v___x_712_, v___x_710_);
lean_dec(v___x_712_);
v_fst_714_ = lean_ctor_get(v___x_713_, 0);
v_snd_715_ = lean_ctor_get(v___x_713_, 1);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_727_ == 0)
{
v___x_717_ = v___x_713_;
v_isShared_718_ = v_isSharedCheck_727_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_snd_715_);
lean_inc(v_fst_714_);
lean_dec(v___x_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_727_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v_value_719_; lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
lean_inc_ref(v___y_709_);
lean_inc_ref(v___y_708_);
v_value_719_ = l_Lean_mkApp4(v___x_704_, v___x_705_, v___x_706_, v___y_708_, v___y_709_);
v___x_720_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_721_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_722_ = 1;
v___x_723_ = l_Lean_Expr_letE___override(v___x_720_, v___x_721_, v_value_719_, v_fst_714_, v___x_722_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 0, v___x_723_);
v___x_725_ = v___x_717_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_snd_715_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
v___jp_728_:
{
if (v_persistent_702_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_708_ = v___y_729_;
v___y_709_ = v___x_730_;
goto v___jp_707_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_708_ = v___y_729_;
v___y_709_ = v___x_731_;
goto v___jp_707_;
}
}
}
case 12:
{
lean_object* v_fvarId_734_; lean_object* v_n_735_; uint8_t v_check_736_; uint8_t v_persistent_737_; lean_object* v_objs_x3f_738_; lean_object* v_k_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v_fst_744_; lean_object* v_snd_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_779_; 
v_fvarId_734_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_734_, 2);
v_n_735_ = lean_ctor_get(v_code_519_, 1);
lean_inc(v_n_735_);
v_check_736_ = lean_ctor_get_uint8(v_code_519_, sizeof(void*)*4);
v_persistent_737_ = lean_ctor_get_uint8(v_code_519_, sizeof(void*)*4 + 1);
v_objs_x3f_738_ = lean_ctor_get(v_code_519_, 2);
lean_inc(v_objs_x3f_738_);
v_k_739_ = lean_ctor_get(v_code_519_, 3);
lean_inc_ref(v_k_739_);
lean_dec_ref_known(v_code_519_, 4);
lean_inc(v___y_520_);
v___x_740_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_734_, v___y_520_, v___y_521_);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_add(v___y_520_, v___x_741_);
v___x_743_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_739_, v___x_742_, v___x_740_);
lean_dec(v___x_742_);
v_fst_744_ = lean_ctor_get(v___x_743_, 0);
v_snd_745_ = lean_ctor_get(v___x_743_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_779_ == 0)
{
v___x_747_ = v___x_743_;
v_isShared_748_ = v_isSharedCheck_779_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_snd_745_);
lean_inc(v_fst_744_);
lean_dec(v___x_743_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_779_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_774_; 
v___x_749_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__35, &l_Lean_Compiler_LCNF_Code_toExprM___closed__35_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__35);
v___x_750_ = l_Lean_Expr_fvar___override(v_fvarId_734_);
v___x_751_ = l_Lean_mkNatLit(v_n_735_);
if (v_check_736_ == 0)
{
lean_object* v___x_777_; 
v___x_777_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_774_ = v___x_777_;
goto v___jp_773_;
}
else
{
lean_object* v___x_778_; 
v___x_778_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_774_ = v___x_778_;
goto v___jp_773_;
}
v___jp_752_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
lean_inc_ref(v___y_754_);
lean_inc_ref(v___y_753_);
v___x_756_ = l_Lean_mkApp5(v___x_749_, v___x_750_, v___x_751_, v___y_753_, v___y_754_, v___y_755_);
v___x_757_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_758_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_759_ = 1;
v___x_760_ = l_Lean_Expr_letE___override(v___x_757_, v___x_758_, v___x_756_, v_fst_744_, v___x_759_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_760_);
v___x_762_ = v___x_747_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_snd_745_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
v___jp_764_:
{
lean_object* v___x_767_; 
v___x_767_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__38, &l_Lean_Compiler_LCNF_Code_toExprM___closed__38_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__38);
if (lean_obj_tag(v_objs_x3f_738_) == 0)
{
lean_object* v___x_768_; 
v___x_768_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__44, &l_Lean_Compiler_LCNF_Code_toExprM___closed__44_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__44);
v___y_753_ = v___y_765_;
v___y_754_ = v___y_766_;
v___y_755_ = v___x_768_;
goto v___jp_752_;
}
else
{
lean_object* v_val_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v_val_769_ = lean_ctor_get(v_objs_x3f_738_, 0);
lean_inc(v_val_769_);
lean_dec_ref_known(v_objs_x3f_738_, 1);
v___x_770_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__47, &l_Lean_Compiler_LCNF_Code_toExprM___closed__47_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__47);
v___x_771_ = l_Lean_mkNatLit(v_val_769_);
v___x_772_ = l_Lean_mkAppB(v___x_770_, v___x_767_, v___x_771_);
v___y_753_ = v___y_765_;
v___y_754_ = v___y_766_;
v___y_755_ = v___x_772_;
goto v___jp_752_;
}
}
v___jp_773_:
{
if (v_persistent_737_ == 0)
{
lean_object* v___x_775_; 
v___x_775_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__29, &l_Lean_Compiler_LCNF_Code_toExprM___closed__29_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__29);
v___y_765_ = v___y_774_;
v___y_766_ = v___x_775_;
goto v___jp_764_;
}
else
{
lean_object* v___x_776_; 
v___x_776_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__32, &l_Lean_Compiler_LCNF_Code_toExprM___closed__32_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__32);
v___y_765_ = v___y_774_;
v___y_766_ = v___x_776_;
goto v___jp_764_;
}
}
}
}
case 13:
{
lean_object* v_fvarId_780_; lean_object* v_k_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v_fst_786_; lean_object* v_snd_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_801_; 
v_fvarId_780_ = lean_ctor_get(v_code_519_, 0);
lean_inc_n(v_fvarId_780_, 2);
v_k_781_ = lean_ctor_get(v_code_519_, 1);
lean_inc_ref(v_k_781_);
lean_dec_ref_known(v_code_519_, 2);
lean_inc(v___y_520_);
v___x_782_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_780_, v___y_520_, v___y_521_);
v___x_783_ = lean_unsigned_to_nat(1u);
v___x_784_ = lean_nat_add(v___y_520_, v___x_783_);
v___x_785_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_781_, v___x_784_, v___x_782_);
lean_dec(v___x_784_);
v_fst_786_ = lean_ctor_get(v___x_785_, 0);
v_snd_787_ = lean_ctor_get(v___x_785_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_801_ == 0)
{
v___x_789_ = v___x_785_;
v_isShared_790_ = v_isSharedCheck_801_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_snd_787_);
lean_inc(v_fst_786_);
lean_dec(v___x_785_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_801_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_791_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__50, &l_Lean_Compiler_LCNF_Code_toExprM___closed__50_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__50);
v___x_792_ = l_Lean_Expr_fvar___override(v_fvarId_780_);
v___x_793_ = l_Lean_Expr_app___override(v___x_791_, v___x_792_);
v___x_794_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toExprM___closed__10));
v___x_795_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toExprM___closed__13, &l_Lean_Compiler_LCNF_Code_toExprM___closed__13_once, _init_l_Lean_Compiler_LCNF_Code_toExprM___closed__13);
v___x_796_ = 1;
v___x_797_ = l_Lean_Expr_letE___override(v___x_794_, v___x_795_, v___x_793_, v_fst_786_, v___x_796_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_797_);
v___x_799_ = v___x_789_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_snd_787_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
default: 
{
lean_object* v_decl_802_; lean_object* v_k_803_; lean_object* v_fvarId_804_; lean_object* v_binderName_805_; lean_object* v_type_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_fst_809_; lean_object* v_snd_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v_fst_815_; lean_object* v_snd_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_825_; 
v_decl_802_ = lean_ctor_get(v_code_519_, 0);
lean_inc_ref(v_decl_802_);
v_k_803_ = lean_ctor_get(v_code_519_, 1);
lean_inc_ref(v_k_803_);
lean_dec_ref(v_code_519_);
v_fvarId_804_ = lean_ctor_get(v_decl_802_, 0);
lean_inc(v_fvarId_804_);
v_binderName_805_ = lean_ctor_get(v_decl_802_, 1);
lean_inc(v_binderName_805_);
v_type_806_ = lean_ctor_get(v_decl_802_, 3);
lean_inc_ref(v_type_806_);
v___x_807_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Expr_abstract_x27_go(v___y_521_, v___y_520_, v_type_806_);
v___x_808_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_518_, v_decl_802_, v___y_520_, v___y_521_);
v_fst_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_fst_809_);
v_snd_810_ = lean_ctor_get(v___x_808_, 1);
lean_inc(v_snd_810_);
lean_dec_ref(v___x_808_);
lean_inc(v___y_520_);
v___x_811_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_804_, v___y_520_, v_snd_810_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_add(v___y_520_, v___x_812_);
v___x_814_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_518_, v_k_803_, v___x_813_, v___x_811_);
lean_dec(v___x_813_);
v_fst_815_ = lean_ctor_get(v___x_814_, 0);
v_snd_816_ = lean_ctor_get(v___x_814_, 1);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_825_ == 0)
{
v___x_818_ = v___x_814_;
v_isShared_819_ = v_isSharedCheck_825_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_snd_816_);
lean_inc(v_fst_815_);
lean_dec(v___x_814_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_825_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_820_ = 1;
v___x_821_ = l_Lean_Expr_letE___override(v_binderName_805_, v___x_807_, v_fst_809_, v_fst_815_, v___x_820_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_821_);
v___x_823_ = v___x_818_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_snd_816_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(uint8_t v_pu_826_, lean_object* v_value_827_, lean_object* v_params_828_, lean_object* v_params_829_, lean_object* v_i_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = lean_array_get_size(v_params_829_);
v___x_834_ = lean_nat_dec_lt(v_i_830_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v_fst_836_; lean_object* v_snd_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_i_830_);
v___x_835_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_826_, v_value_827_, v___y_831_, v___y_832_);
v_fst_836_ = lean_ctor_get(v___x_835_, 0);
v_snd_837_ = lean_ctor_get(v___x_835_, 1);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_846_ == 0)
{
v___x_839_ = v___x_835_;
v_isShared_840_ = v_isSharedCheck_846_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_snd_837_);
lean_inc(v_fst_836_);
lean_dec(v___x_835_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_846_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_841_ = lean_array_get_size(v_params_828_);
v___x_842_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_mkLambdaM_go___redArg(v_params_828_, v___y_831_, v_snd_837_, v___x_841_, v_fst_836_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v___x_842_);
v___x_844_ = v___x_839_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_snd_837_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v___x_847_; lean_object* v_fvarId_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_847_ = lean_array_fget_borrowed(v_params_829_, v_i_830_);
v_fvarId_848_ = lean_ctor_get(v___x_847_, 0);
v___x_849_ = lean_unsigned_to_nat(1u);
v___x_850_ = lean_nat_add(v_i_830_, v___x_849_);
lean_dec(v_i_830_);
lean_inc(v___y_831_);
lean_inc(v_fvarId_848_);
v___x_851_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_848_, v___y_831_, v___y_832_);
v___x_852_ = lean_nat_add(v___y_831_, v___x_849_);
lean_dec(v___y_831_);
v_i_830_ = v___x_850_;
v___y_831_ = v___x_852_;
v___y_832_ = v___x_851_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM(uint8_t v_pu_854_, lean_object* v_decl_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_params_858_; lean_object* v_value_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v_params_858_ = lean_ctor_get(v_decl_855_, 2);
lean_inc_ref(v_params_858_);
v_value_859_ = lean_ctor_get(v_decl_855_, 4);
lean_inc_ref(v_value_859_);
lean_dec_ref(v_decl_855_);
v___x_860_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_856_);
v___x_861_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_854_, v_value_859_, v_params_858_, v_params_858_, v___x_860_, v___y_856_, v___y_857_);
lean_dec_ref(v_params_858_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExprM___boxed(lean_object* v_pu_862_, lean_object* v_decl_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v_pu_boxed_866_; lean_object* v_res_867_; 
v_pu_boxed_866_ = lean_unbox(v_pu_862_);
v_res_867_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_boxed_866_, v_decl_863_, v___y_864_, v___y_865_);
lean_dec(v___y_864_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg___boxed(lean_object* v_pu_868_, lean_object* v_value_869_, lean_object* v_params_870_, lean_object* v_params_871_, lean_object* v_i_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
uint8_t v_pu_boxed_875_; lean_object* v_res_876_; 
v_pu_boxed_875_ = lean_unbox(v_pu_868_);
v_res_876_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_boxed_875_, v_value_869_, v_params_870_, v_params_871_, v_i_872_, v___y_873_, v___y_874_);
lean_dec_ref(v_params_871_);
lean_dec_ref(v_params_870_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3___boxed(lean_object* v_pu_877_, lean_object* v_sz_878_, lean_object* v_i_879_, lean_object* v_bs_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
uint8_t v_pu_boxed_883_; size_t v_sz_boxed_884_; size_t v_i_boxed_885_; lean_object* v_res_886_; 
v_pu_boxed_883_ = lean_unbox(v_pu_877_);
v_sz_boxed_884_ = lean_unbox_usize(v_sz_878_);
lean_dec(v_sz_878_);
v_i_boxed_885_ = lean_unbox_usize(v_i_879_);
lean_dec(v_i_879_);
v_res_886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__3(v_pu_boxed_883_, v_sz_boxed_884_, v_i_boxed_885_, v_bs_880_, v___y_881_, v___y_882_);
lean_dec(v___y_881_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExprM___boxed(lean_object* v_pu_887_, lean_object* v_code_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v_pu_boxed_891_; lean_object* v_res_892_; 
v_pu_boxed_891_ = lean_unbox(v_pu_887_);
v_res_892_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_boxed_891_, v_code_888_, v___y_889_, v___y_890_);
lean_dec(v___y_889_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(uint8_t v_pu_893_, lean_object* v_value_894_, lean_object* v_params_895_, uint8_t v_pu_896_, lean_object* v_params_897_, lean_object* v_i_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_901_; 
lean_inc(v___y_899_);
v___x_901_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___redArg(v_pu_893_, v_value_894_, v_params_895_, v_params_897_, v_i_898_, v___y_899_, v___y_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0___boxed(lean_object* v_pu_902_, lean_object* v_value_903_, lean_object* v_params_904_, lean_object* v_pu_905_, lean_object* v_params_906_, lean_object* v_i_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
uint8_t v_pu_boxed_910_; uint8_t v_pu_boxed_911_; lean_object* v_res_912_; 
v_pu_boxed_910_ = lean_unbox(v_pu_902_);
v_pu_boxed_911_ = lean_unbox(v_pu_905_);
v_res_912_ = l___private_Lean_Compiler_LCNF_ToExpr_0__Lean_Compiler_LCNF_ToExpr_withParams_go___at___00Lean_Compiler_LCNF_FunDecl_toExprM_spec__0(v_pu_boxed_910_, v_value_903_, v_params_904_, v_pu_boxed_911_, v_params_906_, v_i_907_, v___y_908_, v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v_params_906_);
lean_dec_ref(v_params_904_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(uint8_t v_pu_913_, size_t v_sz_914_, size_t v_i_915_, lean_object* v_bs_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___redArg(v_sz_914_, v_i_915_, v_bs_916_, v___y_917_, v___y_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2___boxed(lean_object* v_pu_920_, lean_object* v_sz_921_, lean_object* v_i_922_, lean_object* v_bs_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
uint8_t v_pu_boxed_926_; size_t v_sz_boxed_927_; size_t v_i_boxed_928_; lean_object* v_res_929_; 
v_pu_boxed_926_ = lean_unbox(v_pu_920_);
v_sz_boxed_927_ = lean_unbox_usize(v_sz_921_);
lean_dec(v_sz_921_);
v_i_boxed_928_ = lean_unbox_usize(v_i_922_);
lean_dec(v_i_922_);
v_res_929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toExprM_spec__2(v_pu_boxed_926_, v_sz_boxed_927_, v_i_boxed_928_, v_bs_923_, v___y_924_, v___y_925_);
lean_dec(v___y_924_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(lean_object* v_as_930_, size_t v_i_931_, size_t v_stop_932_, lean_object* v_b_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = lean_usize_dec_eq(v_i_931_, v_stop_932_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; size_t v___x_938_; size_t v___x_939_; 
v___x_935_ = lean_array_uget_borrowed(v_as_930_, v_i_931_);
v___x_936_ = l_Lean_FVarIdMap_size___redArg(v_b_933_);
lean_inc(v___x_935_);
v___x_937_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v___x_935_, v___x_936_, v_b_933_);
v___x_938_ = ((size_t)1ULL);
v___x_939_ = lean_usize_add(v_i_931_, v___x_938_);
v_i_931_ = v___x_939_;
v_b_933_ = v___x_937_;
goto _start;
}
else
{
return v_b_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0___boxed(lean_object* v_as_941_, lean_object* v_i_942_, lean_object* v_stop_943_, lean_object* v_b_944_){
_start:
{
size_t v_i_boxed_945_; size_t v_stop_boxed_946_; lean_object* v_res_947_; 
v_i_boxed_945_ = lean_unbox_usize(v_i_942_);
lean_dec(v_i_942_);
v_stop_boxed_946_ = lean_unbox_usize(v_stop_943_);
lean_dec(v_stop_943_);
v_res_947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_as_941_, v_i_boxed_945_, v_stop_boxed_946_, v_b_944_);
lean_dec_ref(v_as_941_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr(uint8_t v_pu_948_, lean_object* v_code_949_, lean_object* v_xs_950_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___y_955_; uint8_t v___x_958_; 
v___x_951_ = lean_box(1);
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = lean_array_get_size(v_xs_950_);
v___x_958_ = lean_nat_dec_lt(v___x_952_, v___x_953_);
if (v___x_958_ == 0)
{
v___y_955_ = v___x_951_;
goto v___jp_954_;
}
else
{
size_t v___x_959_; size_t v___x_960_; lean_object* v___x_961_; 
v___x_959_ = ((size_t)0ULL);
v___x_960_ = lean_usize_of_nat(v___x_953_);
v___x_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_xs_950_, v___x_959_, v___x_960_, v___x_951_);
v___y_955_ = v___x_961_;
goto v___jp_954_;
}
v___jp_954_:
{
lean_object* v___x_956_; lean_object* v_fst_957_; 
v___x_956_ = l_Lean_Compiler_LCNF_Code_toExprM(v_pu_948_, v_code_949_, v___x_953_, v___y_955_);
v_fst_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_fst_957_);
lean_dec_ref(v___x_956_);
return v_fst_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toExpr___boxed(lean_object* v_pu_962_, lean_object* v_code_963_, lean_object* v_xs_964_){
_start:
{
uint8_t v_pu_boxed_965_; lean_object* v_res_966_; 
v_pu_boxed_965_ = lean_unbox(v_pu_962_);
v_res_966_ = l_Lean_Compiler_LCNF_Code_toExpr(v_pu_boxed_965_, v_code_963_, v_xs_964_);
lean_dec_ref(v_xs_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr(uint8_t v_pu_967_, lean_object* v_decl_968_, lean_object* v_xs_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___y_974_; uint8_t v___x_977_; 
v___x_970_ = lean_box(1);
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = lean_array_get_size(v_xs_969_);
v___x_977_ = lean_nat_dec_lt(v___x_971_, v___x_972_);
if (v___x_977_ == 0)
{
v___y_974_ = v___x_970_;
goto v___jp_973_;
}
else
{
size_t v___x_978_; size_t v___x_979_; lean_object* v___x_980_; 
v___x_978_ = ((size_t)0ULL);
v___x_979_ = lean_usize_of_nat(v___x_972_);
v___x_980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Code_toExpr_spec__0(v_xs_969_, v___x_978_, v___x_979_, v___x_970_);
v___y_974_ = v___x_980_;
goto v___jp_973_;
}
v___jp_973_:
{
lean_object* v___x_975_; lean_object* v_fst_976_; 
v___x_975_ = l_Lean_Compiler_LCNF_FunDecl_toExprM(v_pu_967_, v_decl_968_, v___x_972_, v___y_974_);
v_fst_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_fst_976_);
lean_dec_ref(v___x_975_);
return v_fst_976_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toExpr___boxed(lean_object* v_pu_981_, lean_object* v_decl_982_, lean_object* v_xs_983_){
_start:
{
uint8_t v_pu_boxed_984_; lean_object* v_res_985_; 
v_pu_boxed_984_ = lean_unbox(v_pu_981_);
v_res_985_ = l_Lean_Compiler_LCNF_FunDecl_toExpr(v_pu_boxed_984_, v_decl_982_, v_xs_983_);
lean_dec_ref(v_xs_983_);
return v_res_985_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToExpr(builtin);
}
#ifdef __cplusplus
}
#endif
