// Lean compiler output
// Module: Lean.Meta.Order
// Imports: public import Lean.Meta.PProdN public import Lean.Meta.AppBuilder public import Init.Internal.Order.Basic
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_PProdN_genMk___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_eta(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CCPO"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__2 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 35, 8, 63, 189, 207, 68, 204)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__3 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__4 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__5 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "mkInstPiOfInstForall: unexpected type of "};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__6 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__6_value;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__7;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "instCompleteLatticePi"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__8 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__8_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__8_value),LEAN_SCALAR_PTR_LITERAL(216, 67, 57, 247, 147, 127, 99, 32)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__9 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instCCPOPi"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__10 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__10_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__10_value),LEAN_SCALAR_PTR_LITERAL(202, 4, 22, 67, 25, 201, 243, 223)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__11 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "mkFixOfMonFun: unexpected type of "};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__0 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__1;
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lfp_monotone"};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__2 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(226, 115, 213, 20, 156, 86, 56, 31)}};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__3 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value;
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__4 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__4_value;
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__4_value),LEAN_SCALAR_PTR_LITERAL(18, 104, 23, 57, 110, 104, 99, 16)}};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__5 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_toPartialOrder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "getUnderlyingOrder: unexpected type of "};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__0 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__0_value;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__1;
static const lean_string_object l_Lean_Meta_toPartialOrder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toPartialOrder"};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__2 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value;
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 4, 43, 255, 98, 225, 163, 244)}};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__3 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value;
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 35, 8, 63, 189, 207, 68, 204)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 24, 213, 158, 62, 23, 165, 45)}};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__4 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_propOrderCasts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ImplicationOrder"};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__0 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__0_value;
static const lean_string_object l_Lean_Meta_propOrderCasts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofProp"};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__1 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__1_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 240, 34, 128, 168, 240, 126, 19)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__1_value),LEAN_SCALAR_PTR_LITERAL(202, 241, 18, 13, 134, 10, 143, 75)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__2 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__2_value;
static const lean_string_object l_Lean_Meta_propOrderCasts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toProp"};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__3 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__3_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 240, 34, 128, 168, 240, 126, 19)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 113, 62, 124, 131, 67, 58, 37)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__4 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__4_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__2_value),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__4_value)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__5 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__5_value;
static const lean_string_object l_Lean_Meta_propOrderCasts___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ReverseImplicationOrder"};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__6 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__6_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 161, 0, 6, 7, 21, 122, 42)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__1_value),LEAN_SCALAR_PTR_LITERAL(41, 102, 177, 196, 248, 241, 143, 147)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__7 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__7_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 161, 0, 6, 7, 21, 122, 42)}};
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__3_value),LEAN_SCALAR_PTR_LITERAL(156, 131, 127, 239, 29, 67, 252, 73)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__8 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__8_value;
static const lean_ctor_object l_Lean_Meta_propOrderCasts___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_propOrderCasts___closed__7_value),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__8_value)}};
static const lean_object* l_Lean_Meta_propOrderCasts___closed__9 = (const lean_object*)&l_Lean_Meta_propOrderCasts___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_propOrderCasts(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_propOrderCasts___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 240, 34, 128, 168, 240, 126, 19)}};
static const lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_propOrderCasts___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 161, 0, 6, 7, 21, 122, 42)}};
static const lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_mapLambdaBody(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_cancelPropOrderCasts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_cancelPropOrderCasts___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_cancelPropOrderCasts___closed__0 = (const lean_object*)&l_Lean_Meta_cancelPropOrderCasts___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_mkInstCCPOPProd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "instCCPOPProd"};
static const lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 223, 146, 139, 208, 109, 106, 240)}};
static const lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "instCompleteLatticePProd"};
static const lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 129, 138, 58, 147, 185, 15, 195)}};
static const lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_mkPackedPPRodInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkInstCompleteLatticePProd___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__0 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__0_value;
static const lean_closure_object l_Lean_Meta_mkPackedPPRodInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkInstCCPOPProd___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__1 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__1_value;
static const lean_string_object l_Lean_Meta_mkPackedPPRodInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "mkPackedPPRoodInstance: unexpected types "};
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__2 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__3;
static const lean_string_object l_Lean_Meta_mkPackedPPRodInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__4 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__6));
v___x_64_ = l_Lean_stringToMessageData(v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object* v_x_75_, lean_object* v_inst_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_inst_76_);
v___x_82_ = lean_infer_type(v_inst_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_84_; uint8_t v___x_85_; uint8_t v___x_86_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_82_, 1);
v___x_84_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_85_ = l_Lean_Expr_isAppOf(v_a_83_, v___x_84_);
lean_dec(v_a_83_);
v___x_86_ = 1;
if (v___x_85_ == 0)
{
lean_object* v___x_87_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_inst_76_);
v___x_87_ = lean_infer_type(v_inst_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v_a_88_ = lean_ctor_get(v___x_87_, 0);
lean_inc(v_a_88_);
lean_dec_ref_known(v___x_87_, 1);
v___x_89_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_90_ = l_Lean_Expr_isAppOf(v_a_88_, v___x_89_);
lean_dec(v_a_88_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
lean_dec_ref(v_x_75_);
v___x_91_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__7, &l_Lean_Meta_mkInstPiOfInstForall___closed__7_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7);
v___x_92_ = l_Lean_MessageData_ofExpr(v_inst_76_);
v___x_93_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_93_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_94_;
}
else
{
lean_object* v___x_95_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_x_75_);
v___x_95_ = lean_infer_type(v_x_75_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_124_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_124_ == 0)
{
v___x_98_ = v___x_95_;
v_isShared_99_ = v_isSharedCheck_124_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_124_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; lean_object* v___x_104_; 
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = lean_mk_empty_array_with_capacity(v___x_100_);
v___x_102_ = lean_array_push(v___x_101_, v_x_75_);
v___x_103_ = 1;
v___x_104_ = l_Lean_Meta_mkLambdaFVars(v___x_102_, v_inst_76_, v___x_85_, v___x_86_, v___x_85_, v___x_86_, v___x_103_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec_ref(v___x_102_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_123_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_123_ == 0)
{
v___x_107_ = v___x_104_;
v_isShared_108_ = v_isSharedCheck_123_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_104_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_123_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__9));
if (v_isShared_108_ == 0)
{
lean_ctor_set_tag(v___x_107_, 1);
lean_ctor_set(v___x_107_, 0, v_a_96_);
v___x_111_ = v___x_107_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_96_);
v___x_111_ = v_reuseFailAlloc_122_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = lean_box(0);
if (v_isShared_99_ == 0)
{
lean_ctor_set_tag(v___x_98_, 1);
lean_ctor_set(v___x_98_, 0, v_a_105_);
v___x_114_ = v___x_98_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_105_);
v___x_114_ = v_reuseFailAlloc_121_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_115_ = lean_unsigned_to_nat(3u);
v___x_116_ = lean_mk_empty_array_with_capacity(v___x_115_);
v___x_117_ = lean_array_push(v___x_116_, v___x_111_);
v___x_118_ = lean_array_push(v___x_117_, v___x_112_);
v___x_119_ = lean_array_push(v___x_118_, v___x_114_);
v___x_120_ = l_Lean_Meta_mkAppOptM(v___x_109_, v___x_119_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_120_;
}
}
}
}
else
{
lean_del_object(v___x_98_);
lean_dec(v_a_96_);
return v___x_104_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_95_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_87_;
}
}
else
{
lean_object* v___x_125_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_x_75_);
v___x_125_ = lean_infer_type(v_x_75_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_125_) == 0)
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_155_; 
v_a_126_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_155_ == 0)
{
v___x_128_ = v___x_125_;
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_125_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; 
v___x_130_ = lean_unsigned_to_nat(1u);
v___x_131_ = lean_mk_empty_array_with_capacity(v___x_130_);
v___x_132_ = lean_array_push(v___x_131_, v_x_75_);
v___x_133_ = 0;
v___x_134_ = 1;
v___x_135_ = l_Lean_Meta_mkLambdaFVars(v___x_132_, v_inst_76_, v___x_133_, v___x_86_, v___x_133_, v___x_86_, v___x_134_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec_ref(v___x_132_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_154_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_154_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_154_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_154_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__11));
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 1);
lean_ctor_set(v___x_138_, 0, v_a_126_);
v___x_142_ = v___x_138_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_126_);
v___x_142_ = v_reuseFailAlloc_153_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_143_ = lean_box(0);
if (v_isShared_129_ == 0)
{
lean_ctor_set_tag(v___x_128_, 1);
lean_ctor_set(v___x_128_, 0, v_a_136_);
v___x_145_ = v___x_128_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_136_);
v___x_145_ = v_reuseFailAlloc_152_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_146_ = lean_unsigned_to_nat(3u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
v___x_148_ = lean_array_push(v___x_147_, v___x_142_);
v___x_149_ = lean_array_push(v___x_148_, v___x_143_);
v___x_150_ = lean_array_push(v___x_149_, v___x_145_);
v___x_151_ = l_Lean_Meta_mkAppOptM(v___x_140_, v___x_150_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_151_;
}
}
}
}
else
{
lean_del_object(v___x_128_);
lean_dec(v_a_126_);
return v___x_135_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_125_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object* v_x_156_, lean_object* v_inst_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_Meta_mkInstPiOfInstForall(v_x_156_, v_inst_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object* v_00_u03b1_164_, lean_object* v_msg_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object* v_00_u03b1_172_, lean_object* v_msg_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(v_00_u03b1_172_, v_msg_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object* v_as_180_, size_t v_sz_181_, size_t v_i_182_, lean_object* v_b_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
uint8_t v___x_189_; 
v___x_189_ = lean_usize_dec_lt(v_i_182_, v_sz_181_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v_b_183_);
return v___x_190_;
}
else
{
lean_object* v_a_191_; lean_object* v___x_192_; 
v_a_191_ = lean_array_uget_borrowed(v_as_180_, v_i_182_);
lean_inc(v_a_191_);
v___x_192_ = l_Lean_Meta_mkInstPiOfInstForall(v_a_191_, v_b_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; size_t v___x_194_; size_t v___x_195_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_192_, 1);
v___x_194_ = ((size_t)1ULL);
v___x_195_ = lean_usize_add(v_i_182_, v___x_194_);
v_i_182_ = v___x_195_;
v_b_183_ = v_a_193_;
goto _start;
}
else
{
return v___x_192_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object* v_as_197_, lean_object* v_sz_198_, lean_object* v_i_199_, lean_object* v_b_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
size_t v_sz_boxed_206_; size_t v_i_boxed_207_; lean_object* v_res_208_; 
v_sz_boxed_206_ = lean_unbox_usize(v_sz_198_);
lean_dec(v_sz_198_);
v_i_boxed_207_ = lean_unbox_usize(v_i_199_);
lean_dec(v_i_199_);
v_res_208_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v_as_197_, v_sz_boxed_206_, v_i_boxed_207_, v_b_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec_ref(v_as_197_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object* v_xs_209_, lean_object* v_inst_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___x_216_; size_t v_sz_217_; size_t v___x_218_; lean_object* v___x_219_; 
v___x_216_ = l_Array_reverse___redArg(v_xs_209_);
v_sz_217_ = lean_array_size(v___x_216_);
v___x_218_ = ((size_t)0ULL);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v___x_216_, v_sz_217_, v___x_218_, v_inst_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
lean_dec_ref(v___x_216_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object* v_xs_220_, lean_object* v_inst_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_220_, v_inst_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_227_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__1(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__0));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object* v_packedType_241_, lean_object* v_packedInst_242_, lean_object* v_hmono_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___x_249_; 
lean_inc(v_a_247_);
lean_inc_ref(v_a_246_);
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc_ref(v_packedInst_242_);
v___x_249_ = lean_infer_type(v_packedInst_242_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_298_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_298_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_298_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_298_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_255_ = l_Lean_Expr_isAppOf(v_a_250_, v___x_254_);
lean_dec(v_a_250_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; 
lean_inc(v_a_247_);
lean_inc_ref(v_a_246_);
lean_inc(v_a_245_);
lean_inc_ref(v_a_244_);
lean_inc_ref(v_packedInst_242_);
v___x_256_ = lean_infer_type(v_packedInst_242_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_283_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_283_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_283_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_283_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_262_ = l_Lean_Expr_isAppOf(v_a_257_, v___x_261_);
lean_dec(v_a_257_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
lean_del_object(v___x_259_);
lean_del_object(v___x_252_);
lean_dec_ref(v_hmono_243_);
lean_dec_ref(v_packedType_241_);
v___x_263_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__1, &l_Lean_Meta_mkFixOfMonFun___closed__1_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__1);
v___x_264_ = l_Lean_MessageData_ofExpr(v_packedInst_242_);
v___x_265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_265_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_267_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__3));
if (v_isShared_260_ == 0)
{
lean_ctor_set_tag(v___x_259_, 1);
lean_ctor_set(v___x_259_, 0, v_packedType_241_);
v___x_269_ = v___x_259_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_packedType_241_);
v___x_269_ = v_reuseFailAlloc_282_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_271_; 
if (v_isShared_253_ == 0)
{
lean_ctor_set_tag(v___x_252_, 1);
lean_ctor_set(v___x_252_, 0, v_packedInst_242_);
v___x_271_ = v___x_252_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_packedInst_242_);
v___x_271_ = v_reuseFailAlloc_281_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_272_ = lean_box(0);
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v_hmono_243_);
v___x_274_ = lean_unsigned_to_nat(4u);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_274_);
v___x_276_ = lean_array_push(v___x_275_, v___x_269_);
v___x_277_ = lean_array_push(v___x_276_, v___x_271_);
v___x_278_ = lean_array_push(v___x_277_, v___x_272_);
v___x_279_ = lean_array_push(v___x_278_, v___x_273_);
v___x_280_ = l_Lean_Meta_mkAppOptM(v___x_267_, v___x_279_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
return v___x_280_;
}
}
}
}
}
else
{
lean_del_object(v___x_252_);
lean_dec_ref(v_hmono_243_);
lean_dec_ref(v_packedInst_242_);
lean_dec_ref(v_packedType_241_);
return v___x_256_;
}
}
else
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__5));
if (v_isShared_253_ == 0)
{
lean_ctor_set_tag(v___x_252_, 1);
lean_ctor_set(v___x_252_, 0, v_packedType_241_);
v___x_286_ = v___x_252_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_packedType_241_);
v___x_286_ = v_reuseFailAlloc_297_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_287_, 0, v_packedInst_242_);
v___x_288_ = lean_box(0);
v___x_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_289_, 0, v_hmono_243_);
v___x_290_ = lean_unsigned_to_nat(4u);
v___x_291_ = lean_mk_empty_array_with_capacity(v___x_290_);
v___x_292_ = lean_array_push(v___x_291_, v___x_286_);
v___x_293_ = lean_array_push(v___x_292_, v___x_287_);
v___x_294_ = lean_array_push(v___x_293_, v___x_288_);
v___x_295_ = lean_array_push(v___x_294_, v___x_289_);
v___x_296_ = l_Lean_Meta_mkAppOptM(v___x_284_, v___x_295_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
return v___x_296_;
}
}
}
}
else
{
lean_dec_ref(v_hmono_243_);
lean_dec_ref(v_packedInst_242_);
lean_dec_ref(v_packedType_241_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object* v_packedType_299_, lean_object* v_packedInst_300_, lean_object* v_hmono_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_mkFixOfMonFun(v_packedType_299_, v_packedInst_300_, v_hmono_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
return v_res_307_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__1(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__0));
v___x_310_ = l_Lean_stringToMessageData(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object* v_packedInst_322_, lean_object* v_type_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v___x_329_; 
lean_inc(v_a_327_);
lean_inc_ref(v_a_326_);
lean_inc(v_a_325_);
lean_inc_ref(v_a_324_);
lean_inc_ref(v_packedInst_322_);
v___x_329_ = lean_infer_type(v_packedInst_322_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_366_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_366_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_366_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_366_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_335_ = l_Lean_Expr_isAppOf(v_a_330_, v___x_334_);
lean_dec(v_a_330_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
lean_del_object(v___x_332_);
lean_inc(v_a_327_);
lean_inc_ref(v_a_326_);
lean_inc(v_a_325_);
lean_inc_ref(v_a_324_);
lean_inc_ref(v_packedInst_322_);
v___x_336_ = lean_infer_type(v_packedInst_322_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_356_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_356_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_356_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_356_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_342_ = l_Lean_Expr_isAppOf(v_a_337_, v___x_341_);
lean_dec(v_a_337_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_del_object(v___x_339_);
lean_dec(v_type_323_);
v___x_343_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__1, &l_Lean_Meta_toPartialOrder___closed__1_once, _init_l_Lean_Meta_toPartialOrder___closed__1);
v___x_344_ = l_Lean_MessageData_ofExpr(v_packedInst_322_);
v___x_345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_343_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_345_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
return v___x_346_;
}
else
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__3));
if (v_isShared_340_ == 0)
{
lean_ctor_set_tag(v___x_339_, 1);
lean_ctor_set(v___x_339_, 0, v_packedInst_322_);
v___x_349_ = v___x_339_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_packedInst_322_);
v___x_349_ = v_reuseFailAlloc_355_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_350_ = lean_unsigned_to_nat(2u);
v___x_351_ = lean_mk_empty_array_with_capacity(v___x_350_);
v___x_352_ = lean_array_push(v___x_351_, v_type_323_);
v___x_353_ = lean_array_push(v___x_352_, v___x_349_);
v___x_354_ = l_Lean_Meta_mkAppOptM(v___x_347_, v___x_353_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
return v___x_354_;
}
}
}
}
else
{
lean_dec(v_type_323_);
lean_dec_ref(v_packedInst_322_);
return v___x_336_;
}
}
else
{
lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_357_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__4));
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 1);
lean_ctor_set(v___x_332_, 0, v_packedInst_322_);
v___x_359_ = v___x_332_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_packedInst_322_);
v___x_359_ = v_reuseFailAlloc_365_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_360_ = lean_unsigned_to_nat(2u);
v___x_361_ = lean_mk_empty_array_with_capacity(v___x_360_);
v___x_362_ = lean_array_push(v___x_361_, v_type_323_);
v___x_363_ = lean_array_push(v___x_362_, v___x_359_);
v___x_364_ = l_Lean_Meta_mkAppOptM(v___x_357_, v___x_363_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
return v___x_364_;
}
}
}
}
else
{
lean_dec(v_type_323_);
lean_dec_ref(v_packedInst_322_);
return v___x_329_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object* v_packedInst_367_, lean_object* v_type_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Meta_toPartialOrder(v_packedInst_367_, v_type_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_propOrderCasts(uint8_t v_isCoinductive_405_){
_start:
{
if (v_isCoinductive_405_ == 0)
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__5));
return v___x_406_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__9));
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_propOrderCasts___boxed(lean_object* v_isCoinductive_408_){
_start:
{
uint8_t v_isCoinductive_boxed_409_; lean_object* v_res_410_; 
v_isCoinductive_boxed_409_ = lean_unbox(v_isCoinductive_408_);
v_res_410_ = l_Lean_Meta_propOrderCasts(v_isCoinductive_boxed_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0(lean_object* v_k_411_, lean_object* v_b_412_, lean_object* v_c_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v___x_419_; 
lean_inc(v___y_417_);
lean_inc_ref(v___y_416_);
lean_inc(v___y_415_);
lean_inc_ref(v___y_414_);
v___x_419_ = lean_apply_7(v_k_411_, v_b_412_, v_c_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, lean_box(0));
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0___boxed(lean_object* v_k_420_, lean_object* v_b_421_, lean_object* v_c_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0(v_k_420_, v_b_421_, v_c_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(lean_object* v_type_429_, lean_object* v_k_430_, uint8_t v_cleanupAnnotations_431_, uint8_t v_whnfType_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___f_438_; lean_object* v___x_439_; 
v___f_438_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_438_, 0, v_k_430_);
v___x_439_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_429_, v___f_438_, v_cleanupAnnotations_431_, v_whnfType_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_a_440_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_439_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_439_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_a_448_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_439_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_439_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg___boxed(lean_object* v_type_456_, lean_object* v_k_457_, lean_object* v_cleanupAnnotations_458_, lean_object* v_whnfType_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_465_; uint8_t v_whnfType_boxed_466_; lean_object* v_res_467_; 
v_cleanupAnnotations_boxed_465_ = lean_unbox(v_cleanupAnnotations_458_);
v_whnfType_boxed_466_ = lean_unbox(v_whnfType_459_);
v_res_467_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(v_type_456_, v_k_457_, v_cleanupAnnotations_boxed_465_, v_whnfType_boxed_466_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0(lean_object* v_00_u03b1_468_, lean_object* v_type_469_, lean_object* v_k_470_, uint8_t v_cleanupAnnotations_471_, uint8_t v_whnfType_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(v_type_469_, v_k_470_, v_cleanupAnnotations_471_, v_whnfType_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___boxed(lean_object* v_00_u03b1_479_, lean_object* v_type_480_, lean_object* v_k_481_, lean_object* v_cleanupAnnotations_482_, lean_object* v_whnfType_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_489_; uint8_t v_whnfType_boxed_490_; lean_object* v_res_491_; 
v_cleanupAnnotations_boxed_489_ = lean_unbox(v_cleanupAnnotations_482_);
v_whnfType_boxed_490_ = lean_unbox(v_whnfType_483_);
v_res_491_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0(v_00_u03b1_479_, v_type_480_, v_k_481_, v_cleanupAnnotations_boxed_489_, v_whnfType_boxed_490_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0(uint8_t v_isCoinductive_500_, lean_object* v_xs_501_, lean_object* v_x_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_508_; lean_object* v___y_510_; 
v___x_508_ = 1;
if (v_isCoinductive_500_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__0));
v___y_510_ = v___x_516_;
goto v___jp_509_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = ((lean_object*)(l_Lean_Meta_mkPropOrderCarrier___lam__0___closed__1));
v___y_510_ = v___x_517_;
goto v___jp_509_;
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; 
v___x_511_ = lean_box(0);
lean_inc(v___y_510_);
v___x_512_ = l_Lean_mkConst(v___y_510_, v___x_511_);
v___x_513_ = 0;
v___x_514_ = 1;
v___x_515_ = l_Lean_Meta_mkForallFVars(v_xs_501_, v___x_512_, v___x_513_, v___x_508_, v___x_508_, v___x_514_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
return v___x_515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___lam__0___boxed(lean_object* v_isCoinductive_518_, lean_object* v_xs_519_, lean_object* v_x_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
uint8_t v_isCoinductive_boxed_526_; lean_object* v_res_527_; 
v_isCoinductive_boxed_526_ = lean_unbox(v_isCoinductive_518_);
v_res_527_ = l_Lean_Meta_mkPropOrderCarrier___lam__0(v_isCoinductive_boxed_526_, v_xs_519_, v_x_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec_ref(v_x_520_);
lean_dec_ref(v_xs_519_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier(uint8_t v_isCoinductive_528_, lean_object* v_predType_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v___x_535_; lean_object* v___f_536_; uint8_t v___x_537_; lean_object* v___x_538_; 
v___x_535_ = lean_box(v_isCoinductive_528_);
v___f_536_ = lean_alloc_closure((void*)(l_Lean_Meta_mkPropOrderCarrier___lam__0___boxed), 8, 1);
lean_closure_set(v___f_536_, 0, v___x_535_);
v___x_537_ = 0;
v___x_538_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(v_predType_529_, v___f_536_, v___x_537_, v___x_537_, v_a_530_, v_a_531_, v_a_532_, v_a_533_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPropOrderCarrier___boxed(lean_object* v_isCoinductive_539_, lean_object* v_predType_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
uint8_t v_isCoinductive_boxed_546_; lean_object* v_res_547_; 
v_isCoinductive_boxed_546_ = lean_unbox(v_isCoinductive_539_);
v_res_547_ = l_Lean_Meta_mkPropOrderCarrier(v_isCoinductive_boxed_546_, v_predType_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___lam__0(lean_object* v_c_548_, lean_object* v_e_549_, lean_object* v_xs_550_, lean_object* v_x_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; uint8_t v___x_562_; uint8_t v___x_563_; lean_object* v___x_564_; 
v___x_557_ = lean_box(0);
v___x_558_ = l_Lean_mkConst(v_c_548_, v___x_557_);
lean_inc_ref(v_xs_550_);
v___x_559_ = l_Lean_Expr_beta(v_e_549_, v_xs_550_);
v___x_560_ = l_Lean_Expr_app___override(v___x_558_, v___x_559_);
v___x_561_ = 0;
v___x_562_ = 1;
v___x_563_ = 1;
v___x_564_ = l_Lean_Meta_mkLambdaFVars(v_xs_550_, v___x_560_, v___x_561_, v___x_562_, v___x_561_, v___x_562_, v___x_563_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
lean_dec_ref(v_xs_550_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___lam__0___boxed(lean_object* v_c_565_, lean_object* v_e_566_, lean_object* v_xs_567_, lean_object* v_x_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Meta_mkPredCast___lam__0(v_c_565_, v_e_566_, v_xs_567_, v_x_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v_x_568_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast(lean_object* v_c_575_, lean_object* v_predType_576_, lean_object* v_e_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___f_583_; uint8_t v___x_584_; lean_object* v___x_585_; 
v___f_583_ = lean_alloc_closure((void*)(l_Lean_Meta_mkPredCast___lam__0___boxed), 9, 2);
lean_closure_set(v___f_583_, 0, v_c_575_);
lean_closure_set(v___f_583_, 1, v_e_577_);
v___x_584_ = 0;
v___x_585_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_mkPropOrderCarrier_spec__0___redArg(v_predType_576_, v___f_583_, v___x_584_, v___x_584_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPredCast___boxed(lean_object* v_c_586_, lean_object* v_predType_587_, lean_object* v_e_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Meta_mkPredCast(v_c_586_, v_predType_587_, v_e_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody(lean_object* v_a_595_){
_start:
{
if (lean_obj_tag(v_a_595_) == 6)
{
lean_object* v_body_596_; 
v_body_596_ = lean_ctor_get(v_a_595_, 2);
v_a_595_ = v_body_596_;
goto _start;
}
else
{
lean_inc_ref(v_a_595_);
return v_a_595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody___boxed(lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody(v_a_598_);
lean_dec_ref(v_a_598_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_mapLambdaBody(lean_object* v_e_600_, lean_object* v_f_601_){
_start:
{
if (lean_obj_tag(v_e_600_) == 6)
{
lean_object* v_binderName_602_; lean_object* v_binderType_603_; lean_object* v_body_604_; uint8_t v_binderInfo_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_binderName_602_ = lean_ctor_get(v_e_600_, 0);
lean_inc(v_binderName_602_);
v_binderType_603_ = lean_ctor_get(v_e_600_, 1);
lean_inc_ref(v_binderType_603_);
v_body_604_ = lean_ctor_get(v_e_600_, 2);
lean_inc_ref(v_body_604_);
v_binderInfo_605_ = lean_ctor_get_uint8(v_e_600_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_600_, 3);
v___x_606_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_mapLambdaBody(v_body_604_, v_f_601_);
v___x_607_ = l_Lean_Expr_lam___override(v_binderName_602_, v_binderType_603_, v___x_606_, v_binderInfo_605_);
return v___x_607_;
}
else
{
lean_object* v___x_608_; 
v___x_608_ = lean_apply_1(v_f_601_, v_e_600_);
return v___x_608_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable(lean_object* v_e_609_){
_start:
{
uint8_t v___y_611_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_618_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__4));
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = l_Lean_Expr_isAppOfArity(v_e_609_, v___x_618_, v___x_619_);
if (v___x_620_ == 0)
{
v___y_611_ = v___x_620_;
goto v___jp_610_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_621_ = l_Lean_Expr_appArg_x21(v_e_609_);
v___x_622_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__2));
v___x_623_ = l_Lean_Expr_isAppOfArity(v___x_621_, v___x_622_, v___x_619_);
lean_dec_ref(v___x_621_);
v___y_611_ = v___x_623_;
goto v___jp_610_;
}
v___jp_610_:
{
if (v___y_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_612_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__8));
v___x_613_ = lean_unsigned_to_nat(1u);
v___x_614_ = l_Lean_Expr_isAppOfArity(v_e_609_, v___x_612_, v___x_613_);
if (v___x_614_ == 0)
{
return v___x_614_;
}
else
{
lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_615_ = l_Lean_Expr_appArg_x21(v_e_609_);
v___x_616_ = ((lean_object*)(l_Lean_Meta_propOrderCasts___closed__7));
v___x_617_ = l_Lean_Expr_isAppOfArity(v___x_615_, v___x_616_, v___x_613_);
lean_dec_ref(v___x_615_);
return v___x_617_;
}
}
else
{
return v___y_611_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable___boxed(lean_object* v_e_624_){
_start:
{
uint8_t v_res_625_; lean_object* v_r_626_; 
v_res_625_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable(v_e_624_);
lean_dec_ref(v_e_624_);
v_r_626_ = lean_box(v_res_625_);
return v_r_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__0(lean_object* v_x_627_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = l_Lean_Expr_appArg_x21(v_x_627_);
v___x_629_ = l_Lean_Expr_appArg_x21(v___x_628_);
lean_dec_ref(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__0___boxed(lean_object* v_x_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Meta_cancelPropOrderCasts___lam__0(v_x_630_);
lean_dec_ref(v_x_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___lam__1(lean_object* v___f_633_, lean_object* v_e_634_){
_start:
{
uint8_t v___y_636_; uint8_t v___x_642_; 
v___x_642_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable(v_e_634_);
if (v___x_642_ == 0)
{
uint8_t v___x_643_; 
v___x_643_ = l_Lean_Expr_isLambda(v_e_634_);
if (v___x_643_ == 0)
{
v___y_636_ = v___x_642_;
goto v___jp_635_;
}
else
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_lambdaBody(v_e_634_);
v___x_645_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_isCancellable(v___x_644_);
lean_dec_ref(v___x_644_);
v___y_636_ = v___x_645_;
goto v___jp_635_;
}
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
lean_dec_ref(v___f_633_);
v___x_646_ = l_Lean_Expr_appArg_x21(v_e_634_);
lean_dec_ref(v_e_634_);
v___x_647_ = l_Lean_Expr_appArg_x21(v___x_646_);
lean_dec_ref(v___x_646_);
v___x_648_ = l_Lean_Meta_cancelPropOrderCasts(v___x_647_);
lean_dec_ref(v___x_647_);
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
v___jp_635_:
{
if (v___y_636_ == 0)
{
lean_object* v___x_637_; 
lean_dec_ref(v_e_634_);
lean_dec_ref(v___f_633_);
v___x_637_ = lean_box(0);
return v___x_637_;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_638_ = l___private_Lean_Meta_Order_0__Lean_Meta_cancelPropOrderCasts_mapLambdaBody(v_e_634_, v___f_633_);
v___x_639_ = l_Lean_Meta_cancelPropOrderCasts(v___x_638_);
lean_dec_ref(v___x_638_);
v___x_640_ = l_Lean_Expr_eta(v___x_639_);
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts(lean_object* v_e_650_){
_start:
{
lean_object* v___f_651_; lean_object* v___f_652_; lean_object* v___x_653_; 
v___f_651_ = ((lean_object*)(l_Lean_Meta_cancelPropOrderCasts___closed__0));
v___f_652_ = lean_alloc_closure((void*)(l_Lean_Meta_cancelPropOrderCasts___lam__1), 2, 1);
lean_closure_set(v___f_652_, 0, v___f_651_);
v___x_653_ = lean_replace_expr(v___f_652_, v_e_650_);
lean_dec_ref(v___f_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_cancelPropOrderCasts___boxed(lean_object* v_e_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_Meta_cancelPropOrderCasts(v_e_654_);
lean_dec_ref(v_e_654_);
return v_res_655_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__2(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = lean_box(0);
v___x_662_ = lean_unsigned_to_nat(4u);
v___x_663_ = lean_mk_empty_array_with_capacity(v___x_662_);
v___x_664_ = lean_array_push(v___x_663_, v___x_661_);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__3(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_box(0);
v___x_666_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__2, &l_Lean_Meta_mkInstCCPOPProd___closed__2_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__2);
v___x_667_ = lean_array_push(v___x_666_, v___x_665_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object* v_inst_u2081_668_, lean_object* v_inst_u2082_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_675_ = ((lean_object*)(l_Lean_Meta_mkInstCCPOPProd___closed__1));
v___x_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_676_, 0, v_inst_u2081_668_);
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_inst_u2082_669_);
v___x_678_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_679_ = lean_array_push(v___x_678_, v___x_676_);
v___x_680_ = lean_array_push(v___x_679_, v___x_677_);
v___x_681_ = l_Lean_Meta_mkAppOptM(v___x_675_, v___x_680_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object* v_inst_u2081_682_, lean_object* v_inst_u2082_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Meta_mkInstCCPOPProd(v_inst_u2081_682_, v_inst_u2082_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object* v_inst_u2081_695_, lean_object* v_inst_u2082_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_702_ = ((lean_object*)(l_Lean_Meta_mkInstCompleteLatticePProd___closed__1));
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v_inst_u2081_695_);
v___x_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_704_, 0, v_inst_u2082_696_);
v___x_705_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_706_ = lean_array_push(v___x_705_, v___x_703_);
v___x_707_ = lean_array_push(v___x_706_, v___x_704_);
v___x_708_ = l_Lean_Meta_mkAppOptM(v___x_702_, v___x_707_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object* v_inst_u2081_709_, lean_object* v_inst_u2082_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Meta_mkInstCompleteLatticePProd(v_inst_u2081_709_, v_inst_u2082_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
if (lean_obj_tag(v_a_717_) == 0)
{
lean_object* v___x_719_; 
v___x_719_ = l_List_reverse___redArg(v_a_718_);
return v___x_719_;
}
else
{
lean_object* v_head_720_; lean_object* v_tail_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_730_; 
v_head_720_ = lean_ctor_get(v_a_717_, 0);
v_tail_721_ = lean_ctor_get(v_a_717_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_a_717_);
if (v_isSharedCheck_730_ == 0)
{
v___x_723_ = v_a_717_;
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_tail_721_);
lean_inc(v_head_720_);
lean_dec(v_a_717_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_725_ = l_Lean_MessageData_ofExpr(v_head_720_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v_a_718_);
lean_ctor_set(v___x_723_, 0, v___x_725_);
v___x_727_ = v___x_723_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_a_718_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
v_a_717_ = v_tail_721_;
v_a_718_ = v___x_727_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t v_sz_731_, size_t v_i_732_, lean_object* v_bs_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = lean_usize_dec_lt(v_i_732_, v_sz_731_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_bs_733_);
return v___x_740_;
}
else
{
lean_object* v_v_741_; lean_object* v___x_742_; lean_object* v_bs_x27_743_; lean_object* v___x_744_; 
v_v_741_ = lean_array_uget(v_bs_733_, v_i_732_);
v___x_742_ = lean_unsigned_to_nat(0u);
v_bs_x27_743_ = lean_array_uset(v_bs_733_, v_i_732_, v___x_742_);
lean_inc(v___y_737_);
lean_inc_ref(v___y_736_);
lean_inc(v___y_735_);
lean_inc_ref(v___y_734_);
v___x_744_ = lean_infer_type(v_v_741_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; size_t v___x_746_; size_t v___x_747_; lean_object* v___x_748_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = ((size_t)1ULL);
v___x_747_ = lean_usize_add(v_i_732_, v___x_746_);
v___x_748_ = lean_array_uset(v_bs_x27_743_, v_i_732_, v_a_745_);
v_i_732_ = v___x_747_;
v_bs_733_ = v___x_748_;
goto _start;
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_bs_x27_743_);
v_a_750_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_744_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_744_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object* v_sz_758_, lean_object* v_i_759_, lean_object* v_bs_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
size_t v_sz_boxed_766_; size_t v_i_boxed_767_; lean_object* v_res_768_; 
v_sz_boxed_766_ = lean_unbox_usize(v_sz_758_);
lean_dec(v_sz_758_);
v_i_boxed_767_ = lean_unbox_usize(v_i_759_);
lean_dec(v_i_759_);
v_res_768_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_boxed_766_, v_i_boxed_767_, v_bs_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
return v_res_768_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object* v_as_769_, size_t v_i_770_, size_t v_stop_771_){
_start:
{
uint8_t v___x_772_; 
v___x_772_ = lean_usize_dec_eq(v_i_770_, v_stop_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_773_ = lean_array_uget_borrowed(v_as_769_, v_i_770_);
v___x_774_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_775_ = l_Lean_Expr_isAppOf(v___x_773_, v___x_774_);
if (v___x_775_ == 0)
{
uint8_t v___x_776_; 
v___x_776_ = 1;
return v___x_776_;
}
else
{
size_t v___x_777_; size_t v___x_778_; 
v___x_777_ = ((size_t)1ULL);
v___x_778_ = lean_usize_add(v_i_770_, v___x_777_);
v_i_770_ = v___x_778_;
goto _start;
}
}
else
{
uint8_t v___x_780_; 
v___x_780_ = 0;
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object* v_as_781_, lean_object* v_i_782_, lean_object* v_stop_783_){
_start:
{
size_t v_i_boxed_784_; size_t v_stop_boxed_785_; uint8_t v_res_786_; lean_object* v_r_787_; 
v_i_boxed_784_ = lean_unbox_usize(v_i_782_);
lean_dec(v_i_782_);
v_stop_boxed_785_ = lean_unbox_usize(v_stop_783_);
lean_dec(v_stop_783_);
v_res_786_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_as_781_, v_i_boxed_784_, v_stop_boxed_785_);
lean_dec_ref(v_as_781_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t v___x_788_, lean_object* v_as_789_, size_t v_i_790_, size_t v_stop_791_){
_start:
{
uint8_t v___x_796_; 
v___x_796_ = lean_usize_dec_eq(v_i_790_, v_stop_791_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_797_ = lean_array_uget_borrowed(v_as_789_, v_i_790_);
v___x_798_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_799_ = l_Lean_Expr_isAppOf(v___x_797_, v___x_798_);
if (v___x_799_ == 0)
{
if (v___x_788_ == 0)
{
goto v___jp_792_;
}
else
{
return v___x_788_;
}
}
else
{
goto v___jp_792_;
}
}
else
{
uint8_t v___x_800_; 
v___x_800_ = 0;
return v___x_800_;
}
v___jp_792_:
{
size_t v___x_793_; size_t v___x_794_; 
v___x_793_ = ((size_t)1ULL);
v___x_794_ = lean_usize_add(v_i_790_, v___x_793_);
v_i_790_ = v___x_794_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object* v___x_801_, lean_object* v_as_802_, lean_object* v_i_803_, lean_object* v_stop_804_){
_start:
{
uint8_t v___x_1163__boxed_805_; size_t v_i_boxed_806_; size_t v_stop_boxed_807_; uint8_t v_res_808_; lean_object* v_r_809_; 
v___x_1163__boxed_805_ = lean_unbox(v___x_801_);
v_i_boxed_806_ = lean_unbox_usize(v_i_803_);
lean_dec(v_i_803_);
v_stop_boxed_807_ = lean_unbox_usize(v_stop_804_);
lean_dec(v_stop_804_);
v_res_808_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_1163__boxed_805_, v_as_802_, v_i_boxed_806_, v_stop_boxed_807_);
lean_dec_ref(v_as_802_);
v_r_809_ = lean_box(v_res_808_);
return v_r_809_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__2));
v___x_814_ = l_Lean_stringToMessageData(v___x_813_);
return v___x_814_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__4));
v___x_817_ = l_Lean_stringToMessageData(v___x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object* v_insts_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___x_824_; size_t v_sz_825_; size_t v___x_826_; lean_object* v___x_827_; 
v___x_824_ = l_Lean_instInhabitedExpr;
v_sz_825_ = lean_array_size(v_insts_818_);
v___x_826_ = ((size_t)0ULL);
lean_inc_ref(v_insts_818_);
v___x_827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_825_, v___x_826_, v_insts_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_835_ = lean_unsigned_to_nat(0u);
v___x_836_ = lean_array_get_size(v_a_828_);
v___x_837_ = lean_nat_dec_lt(v___x_835_, v___x_836_);
if (v___x_837_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_832_;
}
else
{
if (v___x_837_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_832_;
}
else
{
size_t v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_usize_of_nat(v___x_836_);
v___x_839_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_a_828_, v___x_826_, v___x_838_);
if (v___x_839_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_832_;
}
else
{
if (v___x_837_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_829_;
}
else
{
if (v___x_837_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_829_;
}
else
{
uint8_t v___x_840_; 
v___x_840_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_839_, v_a_828_, v___x_826_, v___x_838_);
if (v___x_840_ == 0)
{
lean_dec(v_a_828_);
goto v___jp_829_;
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_841_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__3, &l_Lean_Meta_mkPackedPPRodInstance___closed__3_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3);
v___x_842_ = lean_array_to_list(v_a_828_);
v___x_843_ = lean_box(0);
v___x_844_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_842_, v___x_843_);
v___x_845_ = l_Lean_MessageData_ofList(v___x_844_);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_841_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__5, &l_Lean_Meta_mkPackedPPRodInstance___closed__5_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5);
v___x_848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_846_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = lean_array_to_list(v_insts_818_);
v___x_850_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_849_, v___x_843_);
v___x_851_ = l_Lean_MessageData_ofList(v___x_850_);
v___x_852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_852_, 0, v___x_848_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
v___x_853_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_852_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
return v___x_853_;
}
}
}
}
}
}
v___jp_829_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__0));
v___x_831_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_824_, v___x_830_, v_insts_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
return v___x_831_;
}
v___jp_832_:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__1));
v___x_834_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_824_, v___x_833_, v_insts_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
return v___x_834_;
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec_ref(v_insts_818_);
v_a_854_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_827_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_827_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object* v_insts_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_Meta_mkPackedPPRodInstance(v_insts_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_);
lean_dec(v_a_866_);
lean_dec_ref(v_a_865_);
lean_dec(v_a_864_);
lean_dec_ref(v_a_863_);
return v_res_868_;
}
}
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Order(builtin);
}
#ifdef __cplusplus
}
#endif
