// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ConjunctivePre
// Imports: import Init.BinderNameHint public import Lean.Meta.Basic import Lean.Meta.Match.MatcherInfo public import Std.WP.Triple.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfoCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstAltPos(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(202, 119, 227, 254, 29, 206, 25, 24)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(124, 118, 39, 144, 78, 10, 170, 168)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(182, 255, 127, 189, 81, 246, 28, 251)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__11_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meet"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iInf"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "himp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__16_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__17_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__18_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fst"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "snd"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__27 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__27_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__28 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__29 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__29_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__30 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__30_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "binderNameHint"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__31 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__32 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__32_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__33 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__33_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__34 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__35 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__35_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__36 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__36_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__36_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__37 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__37_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__38 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__38_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f(lean_object* v_concl_22_){
_start:
{
lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = l_Lean_Expr_cleanupAnnotations(v_concl_22_);
v___x_24_ = l_Lean_Expr_isApp(v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; 
lean_dec_ref(v___x_23_);
v___x_25_ = lean_box(0);
return v___x_25_;
}
else
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = l_Lean_Expr_appFnCleanup___redArg(v___x_23_);
v___x_27_ = l_Lean_Expr_isApp(v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
lean_dec_ref(v___x_26_);
lean_dec_ref(v___x_23_);
v___x_28_ = lean_box(0);
return v___x_28_;
}
else
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = l_Lean_Expr_appFnCleanup___redArg(v___x_26_);
v___x_30_ = l_Lean_Expr_isApp(v___x_29_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
lean_dec_ref(v___x_29_);
lean_dec_ref(v___x_26_);
lean_dec_ref(v___x_23_);
v___x_31_ = lean_box(0);
return v___x_31_;
}
else
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = l_Lean_Expr_appFnCleanup___redArg(v___x_29_);
v___x_33_ = l_Lean_Expr_isApp(v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_29_);
lean_dec_ref(v___x_26_);
lean_dec_ref(v___x_23_);
v___x_34_ = lean_box(0);
return v___x_34_;
}
else
{
lean_object* v_arg_35_; lean_object* v_arg_36_; lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v_arg_35_ = lean_ctor_get(v___x_23_, 1);
lean_inc_ref(v_arg_35_);
lean_dec_ref(v___x_23_);
v_arg_36_ = lean_ctor_get(v___x_26_, 1);
lean_inc_ref(v_arg_36_);
lean_dec_ref(v___x_26_);
v___x_37_ = l_Lean_Expr_appFnCleanup___redArg(v___x_32_);
lean_dec_ref(v___x_32_);
v___x_38_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__4));
v___x_39_ = l_Lean_Expr_isConstOf(v___x_37_, v___x_38_);
if (v___x_39_ == 0)
{
uint8_t v___x_40_; 
v___x_40_ = l_Lean_Expr_isApp(v___x_37_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; 
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_41_ = lean_box(0);
return v___x_41_;
}
else
{
lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_42_ = l_Lean_Expr_appFnCleanup___redArg(v___x_37_);
v___x_43_ = l_Lean_Expr_isApp(v___x_42_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; 
lean_dec_ref(v___x_42_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_44_ = lean_box(0);
return v___x_44_;
}
else
{
lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_45_ = l_Lean_Expr_appFnCleanup___redArg(v___x_42_);
lean_dec_ref(v___x_42_);
v___x_46_ = l_Lean_Expr_isApp(v___x_45_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; 
lean_dec_ref(v___x_45_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_47_ = lean_box(0);
return v___x_47_;
}
else
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = l_Lean_Expr_appFnCleanup___redArg(v___x_45_);
lean_dec_ref(v___x_45_);
v___x_49_ = l_Lean_Expr_isApp(v___x_48_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
lean_dec_ref(v___x_48_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_50_ = lean_box(0);
return v___x_50_;
}
else
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = l_Lean_Expr_appFnCleanup___redArg(v___x_48_);
lean_dec_ref(v___x_48_);
v___x_52_ = l_Lean_Expr_isApp(v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
lean_dec_ref(v___x_51_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_53_ = lean_box(0);
return v___x_53_;
}
else
{
lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = l_Lean_Expr_appFnCleanup___redArg(v___x_51_);
lean_dec_ref(v___x_51_);
v___x_55_ = l_Lean_Expr_isApp(v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; 
lean_dec_ref(v___x_54_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_56_ = lean_box(0);
return v___x_56_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = l_Lean_Expr_appFnCleanup___redArg(v___x_54_);
lean_dec_ref(v___x_54_);
v___x_58_ = l_Lean_Expr_isApp(v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; 
lean_dec_ref(v___x_57_);
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_59_ = lean_box(0);
return v___x_59_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_60_ = l_Lean_Expr_appFnCleanup___redArg(v___x_57_);
lean_dec_ref(v___x_57_);
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__8));
v___x_62_ = l_Lean_Expr_isConstOf(v___x_60_, v___x_61_);
lean_dec_ref(v___x_60_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_36_);
lean_dec_ref(v_arg_35_);
lean_dec_ref(v___x_29_);
v___x_63_ = lean_box(0);
return v___x_63_;
}
else
{
lean_object* v_arg_64_; lean_object* v_arg_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_arg_64_ = lean_ctor_get(v___x_29_, 1);
lean_inc_ref(v_arg_64_);
lean_dec_ref(v___x_29_);
v_arg_65_ = lean_ctor_get(v___x_37_, 1);
lean_inc_ref(v_arg_65_);
lean_dec_ref(v___x_37_);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v_arg_36_);
lean_ctor_set(v___x_66_, 1, v_arg_35_);
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v_arg_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v_arg_64_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
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
lean_object* v___x_70_; uint8_t v___x_71_; 
lean_dec_ref(v___x_37_);
lean_dec_ref(v___x_29_);
v___x_70_ = l_Lean_Expr_cleanupAnnotations(v_arg_35_);
lean_dec_ref(v_arg_35_);
v___x_71_ = l_Lean_Expr_isApp(v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; 
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_72_ = lean_box(0);
return v___x_72_;
}
else
{
lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_73_ = l_Lean_Expr_appFnCleanup___redArg(v___x_70_);
v___x_74_ = l_Lean_Expr_isApp(v___x_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = l_Lean_Expr_appFnCleanup___redArg(v___x_73_);
v___x_77_ = l_Lean_Expr_isApp(v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; 
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
else
{
lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_79_ = l_Lean_Expr_appFnCleanup___redArg(v___x_76_);
v___x_80_ = l_Lean_Expr_isApp(v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; 
lean_dec_ref(v___x_79_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_81_ = lean_box(0);
return v___x_81_;
}
else
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = l_Lean_Expr_appFnCleanup___redArg(v___x_79_);
lean_dec_ref(v___x_79_);
v___x_83_ = l_Lean_Expr_isApp(v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
lean_dec_ref(v___x_82_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = l_Lean_Expr_appFnCleanup___redArg(v___x_82_);
lean_dec_ref(v___x_82_);
v___x_86_ = l_Lean_Expr_isApp(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
lean_dec_ref(v___x_85_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_87_ = lean_box(0);
return v___x_87_;
}
else
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = l_Lean_Expr_appFnCleanup___redArg(v___x_85_);
lean_dec_ref(v___x_85_);
v___x_89_ = l_Lean_Expr_isApp(v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
lean_dec_ref(v___x_88_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_90_ = lean_box(0);
return v___x_90_;
}
else
{
lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_91_ = l_Lean_Expr_appFnCleanup___redArg(v___x_88_);
lean_dec_ref(v___x_88_);
v___x_92_ = l_Lean_Expr_isApp(v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec_ref(v___x_91_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = l_Lean_Expr_appFnCleanup___redArg(v___x_91_);
lean_dec_ref(v___x_91_);
v___x_95_ = l_Lean_Expr_isApp(v___x_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
lean_dec_ref(v___x_94_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = l_Lean_Expr_appFnCleanup___redArg(v___x_94_);
lean_dec_ref(v___x_94_);
v___x_98_ = l_Lean_Expr_isApp(v___x_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
lean_dec_ref(v___x_97_);
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_99_ = lean_box(0);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_100_ = l_Lean_Expr_appFnCleanup___redArg(v___x_97_);
lean_dec_ref(v___x_97_);
v___x_101_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__10));
v___x_102_ = l_Lean_Expr_isConstOf(v___x_100_, v___x_101_);
lean_dec_ref(v___x_100_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
lean_dec_ref(v___x_76_);
lean_dec_ref(v___x_73_);
lean_dec_ref(v___x_70_);
lean_dec_ref(v_arg_36_);
v___x_103_ = lean_box(0);
return v___x_103_;
}
else
{
lean_object* v_arg_104_; lean_object* v_arg_105_; lean_object* v_arg_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_arg_104_ = lean_ctor_get(v___x_70_, 1);
lean_inc_ref(v_arg_104_);
lean_dec_ref(v___x_70_);
v_arg_105_ = lean_ctor_get(v___x_73_, 1);
lean_inc_ref(v_arg_105_);
lean_dec_ref(v___x_73_);
v_arg_106_ = lean_ctor_get(v___x_76_, 1);
lean_inc_ref(v_arg_106_);
lean_dec_ref(v___x_76_);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v_arg_105_);
lean_ctor_set(v___x_107_, 1, v_arg_104_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v_arg_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v_arg_36_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
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
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___boxed(lean_object* v_concl_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f(v_concl_111_);
lean_dec_ref(v_concl_111_);
return v_res_112_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0(lean_object* v_a_113_, lean_object* v_as_114_, size_t v_i_115_, size_t v_stop_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = lean_usize_dec_eq(v_i_115_, v_stop_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = lean_array_uget_borrowed(v_as_114_, v_i_115_);
v___x_119_ = l_Lean_instBEqMVarId_beq(v_a_113_, v___x_118_);
if (v___x_119_ == 0)
{
size_t v___x_120_; size_t v___x_121_; 
v___x_120_ = ((size_t)1ULL);
v___x_121_ = lean_usize_add(v_i_115_, v___x_120_);
v_i_115_ = v___x_121_;
goto _start;
}
else
{
return v___x_119_;
}
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0___boxed(lean_object* v_a_124_, lean_object* v_as_125_, lean_object* v_i_126_, lean_object* v_stop_127_){
_start:
{
size_t v_i_boxed_128_; size_t v_stop_boxed_129_; uint8_t v_res_130_; lean_object* v_r_131_; 
v_i_boxed_128_ = lean_unbox_usize(v_i_126_);
lean_dec(v_i_126_);
v_stop_boxed_129_ = lean_unbox_usize(v_stop_127_);
lean_dec(v_stop_127_);
v_res_130_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0(v_a_124_, v_as_125_, v_i_boxed_128_, v_stop_boxed_129_);
lean_dec_ref(v_as_125_);
lean_dec(v_a_124_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0(lean_object* v_as_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = lean_array_get_size(v_as_132_);
v___x_136_ = lean_nat_dec_lt(v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
return v___x_136_;
}
else
{
size_t v___x_137_; size_t v___x_138_; uint8_t v___x_139_; 
v___x_137_ = ((size_t)0ULL);
v___x_138_ = lean_usize_of_nat(v___x_135_);
v___x_139_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0_spec__0(v_a_133_, v_as_132_, v___x_137_, v___x_138_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0___boxed(lean_object* v_as_140_, lean_object* v_a_141_){
_start:
{
uint8_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0(v_as_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_as_140_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0(lean_object* v_mvarIds_144_, lean_object* v_s_145_){
_start:
{
if (lean_obj_tag(v_s_145_) == 2)
{
lean_object* v_mvarId_146_; uint8_t v___x_147_; 
v_mvarId_146_ = lean_ctor_get(v_s_145_, 0);
v___x_147_ = l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0(v_mvarIds_144_, v_mvarId_146_);
return v___x_147_;
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 0;
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0___boxed(lean_object* v_mvarIds_149_, lean_object* v_s_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0(v_mvarIds_149_, v_s_150_);
lean_dec_ref(v_s_150_);
lean_dec_ref(v_mvarIds_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(lean_object* v_mvarIds_153_, lean_object* v_e_154_){
_start:
{
lean_object* v___f_155_; lean_object* v___x_156_; 
v___f_155_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___lam__0___boxed), 2, 1);
lean_closure_set(v___f_155_, 0, v_mvarIds_153_);
v___x_156_ = lean_find_expr(v___f_155_, v_e_154_);
lean_dec_ref(v___f_155_);
if (lean_obj_tag(v___x_156_) == 0)
{
uint8_t v___x_157_; 
v___x_157_ = 0;
return v___x_157_;
}
else
{
uint8_t v___x_158_; 
lean_dec_ref_known(v___x_156_, 1);
v___x_158_ = 1;
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar___boxed(lean_object* v_mvarIds_159_, lean_object* v_e_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_mvarIds_159_, v_e_160_);
lean_dec_ref(v_e_160_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f(lean_object* v_env_243_, lean_object* v_x_244_){
_start:
{
lean_object* v_c_246_; 
if (lean_obj_tag(v_x_244_) == 1)
{
lean_object* v_pre_273_; 
v_pre_273_ = lean_ctor_get(v_x_244_, 0);
switch(lean_obj_tag(v_pre_273_))
{
case 1:
{
lean_object* v_pre_274_; 
v_pre_274_ = lean_ctor_get(v_pre_273_, 0);
switch(lean_obj_tag(v_pre_274_))
{
case 1:
{
lean_object* v_pre_275_; 
v_pre_275_ = lean_ctor_get(v_pre_274_, 0);
switch(lean_obj_tag(v_pre_275_))
{
case 0:
{
lean_object* v_str_276_; lean_object* v_str_277_; lean_object* v_str_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v_str_276_ = lean_ctor_get(v_x_244_, 1);
v_str_277_ = lean_ctor_get(v_pre_273_, 1);
v_str_278_ = lean_ctor_get(v_pre_274_, 1);
v___x_279_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__0));
v___x_280_ = lean_string_dec_eq(v_str_278_, v___x_279_);
if (v___x_280_ == 0)
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
else
{
lean_object* v___x_281_; uint8_t v___x_282_; 
lean_inc_ref(v_str_277_);
lean_inc_ref(v_str_276_);
lean_inc(v_pre_275_);
lean_dec_ref_known(v_x_244_, 2);
v___x_281_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__1));
v___x_282_ = lean_string_dec_eq(v_str_277_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = l_Lean_Name_str___override(v_pre_275_, v___x_279_);
v___x_284_ = l_Lean_Name_str___override(v___x_283_, v_str_277_);
v___x_285_ = l_Lean_Name_str___override(v___x_284_, v_str_276_);
v_c_246_ = v___x_285_;
goto v___jp_245_;
}
else
{
lean_object* v___x_286_; uint8_t v___x_287_; 
lean_dec_ref(v_str_277_);
v___x_286_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__13));
v___x_287_ = lean_string_dec_eq(v_str_276_, v___x_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__14));
v___x_289_ = lean_string_dec_eq(v_str_276_, v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__15));
v___x_291_ = lean_string_dec_eq(v_str_276_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = l_Lean_Name_str___override(v_pre_275_, v___x_279_);
v___x_293_ = l_Lean_Name_str___override(v___x_292_, v___x_281_);
v___x_294_ = l_Lean_Name_str___override(v___x_293_, v_str_276_);
v_c_246_ = v___x_294_;
goto v___jp_245_;
}
else
{
lean_dec_ref(v_str_276_);
lean_dec_ref(v_env_243_);
goto v___jp_269_;
}
}
else
{
lean_dec_ref(v_str_276_);
lean_dec_ref(v_env_243_);
goto v___jp_269_;
}
}
else
{
lean_dec_ref(v_str_276_);
lean_dec_ref(v_env_243_);
goto v___jp_265_;
}
}
}
}
case 1:
{
lean_object* v_pre_295_; 
v_pre_295_ = lean_ctor_get(v_pre_275_, 0);
if (lean_obj_tag(v_pre_295_) == 0)
{
lean_object* v_str_296_; lean_object* v_str_297_; lean_object* v_str_298_; lean_object* v_str_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v_str_296_ = lean_ctor_get(v_x_244_, 1);
v_str_297_ = lean_ctor_get(v_pre_273_, 1);
v_str_298_ = lean_ctor_get(v_pre_274_, 1);
v_str_299_ = lean_ctor_get(v_pre_275_, 1);
v___x_300_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__5));
v___x_301_ = lean_string_dec_eq(v_str_299_, v___x_300_);
if (v___x_301_ == 0)
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
else
{
lean_object* v___x_302_; uint8_t v___x_303_; 
lean_inc_ref(v_str_298_);
lean_inc_ref(v_str_297_);
lean_inc_ref(v_str_296_);
lean_inc(v_pre_295_);
lean_dec_ref_known(v_x_244_, 2);
v___x_302_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__6));
v___x_303_ = lean_string_dec_eq(v_str_298_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_304_ = l_Lean_Name_str___override(v_pre_295_, v___x_300_);
v___x_305_ = l_Lean_Name_str___override(v___x_304_, v_str_298_);
v___x_306_ = l_Lean_Name_str___override(v___x_305_, v_str_297_);
v___x_307_ = l_Lean_Name_str___override(v___x_306_, v_str_296_);
v_c_246_ = v___x_307_;
goto v___jp_245_;
}
else
{
uint8_t v___x_308_; 
lean_dec_ref(v_str_298_);
v___x_308_ = lean_string_dec_eq(v_str_297_, v___x_302_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = l_Lean_Name_str___override(v_pre_295_, v___x_300_);
v___x_310_ = l_Lean_Name_str___override(v___x_309_, v___x_302_);
v___x_311_ = l_Lean_Name_str___override(v___x_310_, v_str_297_);
v___x_312_ = l_Lean_Name_str___override(v___x_311_, v_str_296_);
v_c_246_ = v___x_312_;
goto v___jp_245_;
}
else
{
lean_object* v___x_313_; uint8_t v___x_314_; 
lean_dec_ref(v_str_297_);
v___x_313_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f___closed__9));
v___x_314_ = lean_string_dec_eq(v_str_296_, v___x_313_);
if (v___x_314_ == 0)
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_315_ = l_Lean_Name_str___override(v_pre_295_, v___x_300_);
v___x_316_ = l_Lean_Name_str___override(v___x_315_, v___x_302_);
v___x_317_ = l_Lean_Name_str___override(v___x_316_, v___x_302_);
v___x_318_ = l_Lean_Name_str___override(v___x_317_, v_str_296_);
v_c_246_ = v___x_318_;
goto v___jp_245_;
}
else
{
lean_object* v___x_319_; 
lean_dec_ref(v_str_296_);
lean_dec_ref(v_env_243_);
v___x_319_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__19));
return v___x_319_;
}
}
}
}
}
else
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
}
default: 
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
}
}
case 0:
{
lean_object* v_str_320_; lean_object* v_str_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v_str_320_ = lean_ctor_get(v_x_244_, 1);
v_str_321_ = lean_ctor_get(v_pre_273_, 1);
v___x_322_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__20));
v___x_323_ = lean_string_dec_eq(v_str_321_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__21));
v___x_325_ = lean_string_dec_eq(v_str_321_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__22));
v___x_327_ = lean_string_dec_eq(v_str_321_, v___x_326_);
if (v___x_327_ == 0)
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
else
{
lean_object* v___x_328_; uint8_t v___x_329_; 
lean_inc(v_pre_274_);
lean_inc_ref(v_str_320_);
lean_dec_ref_known(v_x_244_, 2);
v___x_328_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__23));
v___x_329_ = lean_string_dec_eq(v_str_320_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = l_Lean_Name_str___override(v_pre_274_, v___x_326_);
v___x_331_ = l_Lean_Name_str___override(v___x_330_, v_str_320_);
v_c_246_ = v___x_331_;
goto v___jp_245_;
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_265_;
}
}
}
else
{
lean_object* v___x_332_; uint8_t v___x_333_; 
lean_inc(v_pre_274_);
lean_inc_ref(v_str_320_);
lean_dec_ref_known(v_x_244_, 2);
v___x_332_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__24));
v___x_333_ = lean_string_dec_eq(v_str_320_, v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__25));
v___x_335_ = lean_string_dec_eq(v_str_320_, v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = l_Lean_Name_str___override(v_pre_274_, v___x_324_);
v___x_337_ = l_Lean_Name_str___override(v___x_336_, v_str_320_);
v_c_246_ = v___x_337_;
goto v___jp_245_;
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_267_;
}
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_267_;
}
}
}
else
{
lean_object* v___x_338_; uint8_t v___x_339_; 
lean_inc(v_pre_274_);
lean_inc_ref(v_str_320_);
lean_dec_ref_known(v_x_244_, 2);
v___x_338_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__26));
v___x_339_ = lean_string_dec_eq(v_str_320_, v___x_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__27));
v___x_341_ = lean_string_dec_eq(v_str_320_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__28));
v___x_343_ = lean_string_dec_eq(v_str_320_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = l_Lean_Name_str___override(v_pre_274_, v___x_322_);
v___x_345_ = l_Lean_Name_str___override(v___x_344_, v_str_320_);
v_c_246_ = v___x_345_;
goto v___jp_245_;
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_265_;
}
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_271_;
}
}
else
{
lean_dec_ref(v_str_320_);
lean_dec_ref(v_env_243_);
goto v___jp_271_;
}
}
}
default: 
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
}
}
case 0:
{
lean_object* v_str_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v_str_346_ = lean_ctor_get(v_x_244_, 1);
v___x_347_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__29));
v___x_348_ = lean_string_dec_eq(v_str_346_, v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__24));
v___x_350_ = lean_string_dec_eq(v_str_346_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_351_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__25));
v___x_352_ = lean_string_dec_eq(v_str_346_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_353_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__30));
v___x_354_ = lean_string_dec_eq(v_str_346_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__31));
v___x_356_ = lean_string_dec_eq(v_str_346_, v___x_355_);
if (v___x_356_ == 0)
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
else
{
lean_object* v___x_357_; 
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_env_243_);
v___x_357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__34));
return v___x_357_;
}
}
else
{
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_env_243_);
goto v___jp_265_;
}
}
else
{
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_env_243_);
goto v___jp_267_;
}
}
else
{
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_env_243_);
goto v___jp_267_;
}
}
else
{
lean_object* v___x_358_; 
lean_dec_ref_known(v_x_244_, 2);
lean_dec_ref(v_env_243_);
v___x_358_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__38));
return v___x_358_;
}
}
default: 
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
}
}
else
{
v_c_246_ = v_x_244_;
goto v___jp_245_;
}
v___jp_245_:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_Meta_getMatcherInfoCore_x3f(v_env_243_, v_c_246_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v___x_248_; 
v___x_248_ = lean_box(0);
return v___x_248_;
}
else
{
lean_object* v_val_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_264_; 
v_val_249_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_264_ == 0)
{
v___x_251_ = v___x_247_;
v_isShared_252_ = v_isSharedCheck_264_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_val_249_);
lean_dec(v___x_247_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_264_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_253_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_249_);
v___x_254_ = l_Lean_Meta_Match_MatcherInfo_getFirstAltPos(v_val_249_);
v___x_255_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_249_);
lean_dec(v_val_249_);
v___x_256_ = lean_unsigned_to_nat(1u);
v___x_257_ = lean_nat_add(v___x_254_, v___x_255_);
lean_dec(v___x_254_);
v___x_258_ = lean_box(0);
v___x_259_ = l_List_range_x27TR_go(v___x_256_, v___x_255_, v___x_257_, v___x_258_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_253_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_260_);
v___x_262_ = v___x_251_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
v___jp_265_:
{
lean_object* v___x_266_; 
v___x_266_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__3));
return v___x_266_;
}
v___jp_267_:
{
lean_object* v___x_268_; 
v___x_268_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__7));
return v___x_268_;
}
v___jp_269_:
{
lean_object* v___x_270_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__9));
return v___x_270_;
}
v___jp_271_:
{
lean_object* v___x_272_; 
v___x_272_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f___closed__12));
return v___x_272_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0(lean_object* v_qs_359_, uint8_t v___x_360_, lean_object* v_as_361_, size_t v_i_362_, size_t v_stop_363_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = lean_usize_dec_eq(v_i_362_, v_stop_363_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = lean_array_uget_borrowed(v_as_361_, v_i_362_);
lean_inc_ref(v_qs_359_);
v___x_370_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_359_, v___x_369_);
if (v___x_370_ == 0)
{
goto v___jp_364_;
}
else
{
if (v___x_360_ == 0)
{
goto v___jp_364_;
}
else
{
lean_dec_ref(v_qs_359_);
return v___x_360_;
}
}
}
else
{
uint8_t v___x_371_; 
lean_dec_ref(v_qs_359_);
v___x_371_ = 0;
return v___x_371_;
}
v___jp_364_:
{
size_t v___x_365_; size_t v___x_366_; 
v___x_365_ = ((size_t)1ULL);
v___x_366_ = lean_usize_add(v_i_362_, v___x_365_);
v_i_362_ = v___x_366_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0___boxed(lean_object* v_qs_372_, lean_object* v___x_373_, lean_object* v_as_374_, lean_object* v_i_375_, lean_object* v_stop_376_){
_start:
{
uint8_t v___x_793__boxed_377_; size_t v_i_boxed_378_; size_t v_stop_boxed_379_; uint8_t v_res_380_; lean_object* v_r_381_; 
v___x_793__boxed_377_ = lean_unbox(v___x_373_);
v_i_boxed_378_ = lean_unbox_usize(v_i_375_);
lean_dec(v_i_375_);
v_stop_boxed_379_ = lean_unbox_usize(v_stop_376_);
lean_dec(v_stop_376_);
v_res_380_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0(v_qs_372_, v___x_793__boxed_377_, v_as_374_, v_i_boxed_378_, v_stop_boxed_379_);
lean_dec_ref(v_as_374_);
v_r_381_ = lean_box(v_res_380_);
return v_r_381_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1(lean_object* v_a_382_, lean_object* v_x_383_){
_start:
{
if (lean_obj_tag(v_x_383_) == 0)
{
uint8_t v___x_384_; 
v___x_384_ = 0;
return v___x_384_;
}
else
{
lean_object* v_head_385_; lean_object* v_tail_386_; uint8_t v___x_387_; 
v_head_385_ = lean_ctor_get(v_x_383_, 0);
v_tail_386_ = lean_ctor_get(v_x_383_, 1);
v___x_387_ = lean_nat_dec_eq(v_a_382_, v_head_385_);
if (v___x_387_ == 0)
{
v_x_383_ = v_tail_386_;
goto _start;
}
else
{
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1___boxed(lean_object* v_a_389_, lean_object* v_x_390_){
_start:
{
uint8_t v_res_391_; lean_object* v_r_392_; 
v_res_391_ = l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1(v_a_389_, v_x_390_);
lean_dec(v_x_390_);
lean_dec(v_a_389_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0(void){
_start:
{
lean_object* v___x_393_; lean_object* v_dummy_394_; 
v___x_393_ = lean_box(0);
v_dummy_394_ = l_Lean_Expr_sort___override(v___x_393_);
return v_dummy_394_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn(lean_object* v_env_395_, lean_object* v_qs_396_, lean_object* v_e_397_){
_start:
{
uint8_t v___x_398_; 
lean_inc_ref(v_qs_396_);
v___x_398_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_396_, v_e_397_);
if (v___x_398_ == 0)
{
uint8_t v___x_399_; 
lean_dec_ref(v_e_397_);
lean_dec_ref(v_qs_396_);
lean_dec_ref(v_env_395_);
v___x_399_ = 1;
return v___x_399_;
}
else
{
uint8_t v___x_400_; lean_object* v_dom_402_; lean_object* v_body_403_; 
v___x_400_ = 0;
switch(lean_obj_tag(v_e_397_))
{
case 10:
{
lean_object* v_expr_406_; 
v_expr_406_ = lean_ctor_get(v_e_397_, 1);
lean_inc_ref(v_expr_406_);
lean_dec_ref_known(v_e_397_, 2);
v_e_397_ = v_expr_406_;
goto _start;
}
case 6:
{
lean_object* v_binderType_408_; lean_object* v_body_409_; 
v_binderType_408_ = lean_ctor_get(v_e_397_, 1);
lean_inc_ref(v_binderType_408_);
v_body_409_ = lean_ctor_get(v_e_397_, 2);
lean_inc_ref(v_body_409_);
lean_dec_ref_known(v_e_397_, 3);
v_dom_402_ = v_binderType_408_;
v_body_403_ = v_body_409_;
goto v___jp_401_;
}
case 7:
{
lean_object* v_binderType_410_; lean_object* v_body_411_; 
v_binderType_410_ = lean_ctor_get(v_e_397_, 1);
lean_inc_ref(v_binderType_410_);
v_body_411_ = lean_ctor_get(v_e_397_, 2);
lean_inc_ref(v_body_411_);
lean_dec_ref_known(v_e_397_, 3);
v_dom_402_ = v_binderType_410_;
v_body_403_ = v_body_411_;
goto v___jp_401_;
}
default: 
{
lean_object* v_dummy_412_; lean_object* v_nargs_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_args_417_; lean_object* v___x_418_; 
v_dummy_412_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0, &l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___closed__0);
v_nargs_413_ = l_Lean_Expr_getAppNumArgs(v_e_397_);
lean_inc(v_nargs_413_);
v___x_414_ = lean_mk_array(v_nargs_413_, v_dummy_412_);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_nat_sub(v_nargs_413_, v___x_415_);
lean_dec(v_nargs_413_);
lean_inc_ref(v_e_397_);
v_args_417_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_397_, v___x_414_, v___x_416_);
v___x_418_ = l_Lean_Expr_getAppFn(v_e_397_);
lean_dec_ref(v_e_397_);
switch(lean_obj_tag(v___x_418_))
{
case 2:
{
lean_object* v_mvarId_419_; uint8_t v___x_420_; 
lean_dec_ref(v_env_395_);
v_mvarId_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_mvarId_419_);
lean_dec_ref_known(v___x_418_, 1);
v___x_420_ = l_Array_contains___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar_spec__0(v_qs_396_, v_mvarId_419_);
lean_dec(v_mvarId_419_);
if (v___x_420_ == 0)
{
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
return v___x_400_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_422_ = lean_array_get_size(v_args_417_);
v___x_423_ = lean_nat_dec_lt(v___x_421_, v___x_422_);
if (v___x_423_ == 0)
{
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
return v___x_420_;
}
else
{
if (v___x_423_ == 0)
{
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
return v___x_420_;
}
else
{
size_t v___x_424_; size_t v___x_425_; uint8_t v___x_426_; 
v___x_424_ = ((size_t)0ULL);
v___x_425_ = lean_usize_of_nat(v___x_422_);
v___x_426_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__0(v_qs_396_, v___x_420_, v_args_417_, v___x_424_, v___x_425_);
lean_dec_ref(v_args_417_);
if (v___x_426_ == 0)
{
return v___x_423_;
}
else
{
return v___x_400_;
}
}
}
}
}
case 4:
{
lean_object* v_declName_427_; lean_object* v___x_428_; 
v_declName_427_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_declName_427_);
lean_dec_ref_known(v___x_418_, 2);
lean_inc_ref(v_env_395_);
v___x_428_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_conjunctiveArgs_x3f(v_env_395_, v_declName_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
lean_dec_ref(v_env_395_);
return v___x_400_;
}
else
{
lean_object* v_val_429_; lean_object* v_fst_430_; lean_object* v_snd_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_val_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_val_429_);
lean_dec_ref_known(v___x_428_, 1);
v_fst_430_ = lean_ctor_get(v_val_429_, 0);
lean_inc(v_fst_430_);
v_snd_431_ = lean_ctor_get(v_val_429_, 1);
lean_inc(v_snd_431_);
lean_dec(v_val_429_);
v___x_432_ = lean_array_get_size(v_args_417_);
v___x_433_ = lean_nat_dec_le(v_fst_430_, v___x_432_);
if (v___x_433_ == 0)
{
lean_dec(v_snd_431_);
lean_dec(v_fst_430_);
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
lean_dec_ref(v_env_395_);
return v___x_400_;
}
else
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = l_List_range(v___x_432_);
v___x_435_ = l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2(v_snd_431_, v_args_417_, v_qs_396_, v_fst_430_, v___x_432_, v_env_395_, v___x_434_);
lean_dec(v___x_434_);
lean_dec(v_fst_430_);
lean_dec_ref(v_args_417_);
lean_dec(v_snd_431_);
return v___x_435_;
}
}
}
default: 
{
lean_dec_ref(v___x_418_);
lean_dec_ref(v_args_417_);
lean_dec_ref(v_qs_396_);
lean_dec_ref(v_env_395_);
return v___x_400_;
}
}
}
}
v___jp_401_:
{
uint8_t v___x_404_; 
lean_inc_ref(v_qs_396_);
v___x_404_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_396_, v_dom_402_);
lean_dec_ref(v_dom_402_);
if (v___x_404_ == 0)
{
v_e_397_ = v_body_403_;
goto _start;
}
else
{
lean_dec_ref(v_body_403_);
lean_dec_ref(v_qs_396_);
lean_dec_ref(v_env_395_);
return v___x_400_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2(lean_object* v_snd_436_, lean_object* v_args_437_, lean_object* v_qs_438_, lean_object* v_fst_439_, lean_object* v___x_440_, lean_object* v_env_441_, lean_object* v_x_442_){
_start:
{
if (lean_obj_tag(v_x_442_) == 0)
{
uint8_t v___x_443_; 
lean_dec_ref(v_env_441_);
lean_dec_ref(v_qs_438_);
v___x_443_ = 1;
return v___x_443_;
}
else
{
lean_object* v_head_444_; lean_object* v_tail_445_; uint8_t v___y_447_; lean_object* v___x_449_; uint8_t v___x_450_; 
v_head_444_ = lean_ctor_get(v_x_442_, 0);
v_tail_445_ = lean_ctor_get(v_x_442_, 1);
v___x_449_ = l_Lean_instInhabitedExpr;
v___x_450_ = l_List_elem___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__1(v_head_444_, v_snd_436_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_array_get_borrowed(v___x_449_, v_args_437_, v_head_444_);
lean_inc_ref(v_qs_438_);
v___x_452_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_438_, v___x_451_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; 
v___x_453_ = lean_nat_dec_le(v_fst_439_, v___x_440_);
v___y_447_ = v___x_453_;
goto v___jp_446_;
}
else
{
lean_dec_ref(v_env_441_);
lean_dec_ref(v_qs_438_);
return v___x_450_;
}
}
else
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = lean_array_get_borrowed(v___x_449_, v_args_437_, v_head_444_);
lean_inc(v___x_454_);
lean_inc_ref(v_qs_438_);
lean_inc_ref(v_env_441_);
v___x_455_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn(v_env_441_, v_qs_438_, v___x_454_);
v___y_447_ = v___x_455_;
goto v___jp_446_;
}
v___jp_446_:
{
if (v___y_447_ == 0)
{
lean_dec_ref(v_env_441_);
lean_dec_ref(v_qs_438_);
return v___y_447_;
}
else
{
v_x_442_ = v_tail_445_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2___boxed(lean_object* v_snd_456_, lean_object* v_args_457_, lean_object* v_qs_458_, lean_object* v_fst_459_, lean_object* v___x_460_, lean_object* v_env_461_, lean_object* v_x_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_List_all___at___00__private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn_spec__2(v_snd_456_, v_args_457_, v_qs_458_, v_fst_459_, v___x_460_, v_env_461_, v_x_462_);
lean_dec(v_x_462_);
lean_dec(v___x_460_);
lean_dec(v_fst_459_);
lean_dec_ref(v_args_457_);
lean_dec(v_snd_456_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn___boxed(lean_object* v_env_465_, lean_object* v_qs_466_, lean_object* v_e_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn(v_env_465_, v_qs_466_, v_e_467_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1(lean_object* v_qs_473_, uint8_t v___x_474_, lean_object* v_as_475_, size_t v_sz_476_, size_t v_i_477_, lean_object* v_b_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
uint8_t v___x_484_; 
v___x_484_ = lean_usize_dec_lt(v_i_477_, v_sz_476_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; 
lean_dec_ref(v_qs_473_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_b_478_);
return v___x_485_;
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v_a_488_; lean_object* v___x_489_; 
lean_dec_ref(v_b_478_);
v___x_486_ = lean_box(0);
v___x_487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___closed__0));
v_a_488_ = lean_array_uget_borrowed(v_as_475_, v_i_477_);
lean_inc(v___y_482_);
lean_inc_ref(v___y_481_);
lean_inc(v___y_480_);
lean_inc_ref(v___y_479_);
lean_inc(v_a_488_);
v___x_489_ = lean_infer_type(v_a_488_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_504_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_504_ == 0)
{
v___x_492_ = v___x_489_;
v_isShared_493_ = v_isSharedCheck_504_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_489_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_504_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
uint8_t v___x_494_; 
lean_inc_ref(v_qs_473_);
v___x_494_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_473_, v_a_490_);
lean_dec(v_a_490_);
if (v___x_494_ == 0)
{
size_t v___x_495_; size_t v___x_496_; 
lean_del_object(v___x_492_);
v___x_495_ = ((size_t)1ULL);
v___x_496_ = lean_usize_add(v_i_477_, v___x_495_);
v_i_477_ = v___x_496_;
v_b_478_ = v___x_487_;
goto _start;
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_502_; 
lean_dec_ref(v_qs_473_);
v___x_498_ = lean_box(v___x_474_);
v___x_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_486_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_500_);
v___x_502_ = v___x_492_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_dec_ref(v_qs_473_);
v_a_505_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_489_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_489_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___boxed(lean_object* v_qs_513_, lean_object* v___x_514_, lean_object* v_as_515_, lean_object* v_sz_516_, lean_object* v_i_517_, lean_object* v_b_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
uint8_t v___x_2128__boxed_524_; size_t v_sz_boxed_525_; size_t v_i_boxed_526_; lean_object* v_res_527_; 
v___x_2128__boxed_524_ = lean_unbox(v___x_514_);
v_sz_boxed_525_ = lean_unbox_usize(v_sz_516_);
lean_dec(v_sz_516_);
v_i_boxed_526_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_res_527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1(v_qs_513_, v___x_2128__boxed_524_, v_as_515_, v_sz_boxed_525_, v_i_boxed_526_, v_b_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v_as_515_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0(lean_object* v_as_528_, size_t v_i_529_, size_t v_stop_530_, lean_object* v_b_531_){
_start:
{
lean_object* v___y_533_; uint8_t v___x_537_; 
v___x_537_ = lean_usize_dec_eq(v_i_529_, v_stop_530_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_array_uget_borrowed(v_as_528_, v_i_529_);
lean_inc(v___x_538_);
v___x_539_ = l_Lean_Expr_eta(v___x_538_);
if (lean_obj_tag(v___x_539_) == 2)
{
lean_object* v_mvarId_540_; lean_object* v___x_541_; 
v_mvarId_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_mvarId_540_);
lean_dec_ref_known(v___x_539_, 1);
v___x_541_ = lean_array_push(v_b_531_, v_mvarId_540_);
v___y_533_ = v___x_541_;
goto v___jp_532_;
}
else
{
lean_dec_ref(v___x_539_);
v___y_533_ = v_b_531_;
goto v___jp_532_;
}
}
else
{
return v_b_531_;
}
v___jp_532_:
{
size_t v___x_534_; size_t v___x_535_; 
v___x_534_ = ((size_t)1ULL);
v___x_535_ = lean_usize_add(v_i_529_, v___x_534_);
v_i_529_ = v___x_535_;
v_b_531_ = v___y_533_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0___boxed(lean_object* v_as_542_, lean_object* v_i_543_, lean_object* v_stop_544_, lean_object* v_b_545_){
_start:
{
size_t v_i_boxed_546_; size_t v_stop_boxed_547_; lean_object* v_res_548_; 
v_i_boxed_546_ = lean_unbox_usize(v_i_543_);
lean_dec(v_i_543_);
v_stop_boxed_547_ = lean_unbox_usize(v_stop_544_);
lean_dec(v_stop_544_);
v_res_548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0(v_as_542_, v_i_boxed_546_, v_stop_boxed_547_, v_b_545_);
lean_dec_ref(v_as_542_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0(lean_object* v_as_551_, lean_object* v_start_552_, lean_object* v_stop_553_){
_start:
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___closed__0));
v___x_555_ = lean_nat_dec_lt(v_start_552_, v_stop_553_);
if (v___x_555_ == 0)
{
return v___x_554_;
}
else
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_array_get_size(v_as_551_);
v___x_557_ = lean_nat_dec_le(v_stop_553_, v___x_556_);
if (v___x_557_ == 0)
{
uint8_t v___x_558_; 
v___x_558_ = lean_nat_dec_lt(v_start_552_, v___x_556_);
if (v___x_558_ == 0)
{
return v___x_554_;
}
else
{
size_t v___x_559_; size_t v___x_560_; lean_object* v___x_561_; 
v___x_559_ = lean_usize_of_nat(v_start_552_);
v___x_560_ = lean_usize_of_nat(v___x_556_);
v___x_561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0(v_as_551_, v___x_559_, v___x_560_, v___x_554_);
return v___x_561_;
}
}
else
{
size_t v___x_562_; size_t v___x_563_; lean_object* v___x_564_; 
v___x_562_ = lean_usize_of_nat(v_start_552_);
v___x_563_ = lean_usize_of_nat(v_stop_553_);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0_spec__0(v_as_551_, v___x_562_, v___x_563_, v___x_554_);
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0___boxed(lean_object* v_as_565_, lean_object* v_start_566_, lean_object* v_stop_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0(v_as_565_, v_start_566_, v_stop_567_);
lean_dec(v_stop_567_);
lean_dec(v_start_566_);
lean_dec_ref(v_as_565_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts(lean_object* v_concl_569_, lean_object* v_binders_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_specComponents_x3f(v_concl_569_);
if (lean_obj_tag(v___x_576_) == 1)
{
lean_object* v_val_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_635_; 
v_val_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_635_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_635_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_val_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_635_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v_snd_581_; lean_object* v_snd_582_; lean_object* v_fst_583_; lean_object* v_fst_584_; lean_object* v_fst_585_; lean_object* v_snd_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v_qs_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_snd_581_ = lean_ctor_get(v_val_577_, 1);
lean_inc(v_snd_581_);
v_snd_582_ = lean_ctor_get(v_snd_581_, 1);
lean_inc(v_snd_582_);
v_fst_583_ = lean_ctor_get(v_val_577_, 0);
lean_inc(v_fst_583_);
lean_dec(v_val_577_);
v_fst_584_ = lean_ctor_get(v_snd_581_, 0);
lean_inc(v_fst_584_);
lean_dec(v_snd_581_);
v_fst_585_ = lean_ctor_get(v_snd_582_, 0);
lean_inc(v_fst_585_);
v_snd_586_ = lean_ctor_get(v_snd_582_, 1);
lean_inc(v_snd_586_);
lean_dec(v_snd_582_);
v___x_587_ = lean_unsigned_to_nat(2u);
v___x_588_ = lean_mk_empty_array_with_capacity(v___x_587_);
v___x_589_ = lean_array_push(v___x_588_, v_fst_585_);
v___x_590_ = lean_array_push(v___x_589_, v_snd_586_);
v___x_591_ = lean_unsigned_to_nat(0u);
v___x_592_ = lean_array_get_size(v___x_590_);
v_qs_593_ = l_Array_filterMapM___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__0(v___x_590_, v___x_591_, v___x_592_);
lean_dec_ref(v___x_590_);
v___x_594_ = lean_array_get_size(v_qs_593_);
v___x_595_ = lean_nat_dec_eq(v___x_594_, v___x_591_);
if (v___x_595_ == 0)
{
uint8_t v___x_596_; 
lean_inc_ref(v_qs_593_);
v___x_596_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_occursMVar(v_qs_593_, v_fst_584_);
lean_dec(v_fst_584_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; size_t v_sz_598_; size_t v___x_599_; lean_object* v___x_600_; 
lean_del_object(v___x_579_);
v___x_597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1___closed__0));
v_sz_598_ = lean_array_size(v_binders_570_);
v___x_599_ = ((size_t)0ULL);
lean_inc_ref(v_qs_593_);
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts_spec__1(v_qs_593_, v___x_596_, v_binders_570_, v_sz_598_, v___x_599_, v___x_597_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_617_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_617_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_617_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_617_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v_fst_605_; 
v_fst_605_ = lean_ctor_get(v_a_601_, 0);
lean_inc(v_fst_605_);
lean_dec(v_a_601_);
if (lean_obj_tag(v_fst_605_) == 0)
{
lean_object* v___x_606_; lean_object* v_env_607_; uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_606_ = lean_st_ref_get(v_a_574_);
v_env_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc_ref(v_env_607_);
lean_dec(v___x_606_);
v___x_608_ = l___private_Lean_Elab_Tactic_Do_ConjunctivePre_0__Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveIn(v_env_607_, v_qs_593_, v_fst_583_);
v___x_609_ = lean_box(v___x_608_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_609_);
v___x_611_ = v___x_603_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_609_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
else
{
lean_object* v_val_613_; lean_object* v___x_615_; 
lean_dec_ref(v_qs_593_);
lean_dec(v_fst_583_);
v_val_613_ = lean_ctor_get(v_fst_605_, 0);
lean_inc(v_val_613_);
lean_dec_ref_known(v_fst_605_, 1);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v_val_613_);
v___x_615_ = v___x_603_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_val_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v_qs_593_);
lean_dec(v_fst_583_);
v_a_618_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_600_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_600_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_628_; 
lean_dec_ref(v_qs_593_);
lean_dec(v_fst_583_);
v___x_626_ = lean_box(v___x_595_);
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 0);
lean_ctor_set(v___x_579_, 0, v___x_626_);
v___x_628_ = v___x_579_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
else
{
uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
lean_dec_ref(v_qs_593_);
lean_dec(v_fst_584_);
lean_dec(v_fst_583_);
v___x_630_ = 0;
v___x_631_ = lean_box(v___x_630_);
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 0);
lean_ctor_set(v___x_579_, 0, v___x_631_);
v___x_633_ = v___x_579_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
else
{
uint8_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec(v___x_576_);
v___x_636_ = 0;
v___x_637_ = lean_box(v___x_636_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts___boxed(lean_object* v_concl_639_, lean_object* v_binders_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_isConjunctiveInPosts(v_concl_639_, v_binders_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec(v_a_642_);
lean_dec_ref(v_a_641_);
lean_dec_ref(v_binders_640_);
lean_dec_ref(v_concl_639_);
return v_res_646_;
}
}
lean_object* runtime_initialize_Init_BinderNameHint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Std_WP_Triple_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ConjunctivePre(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ConjunctivePre(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_BinderNameHint(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Std_WP_Triple_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ConjunctivePre(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_WP_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ConjunctivePre(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ConjunctivePre(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ConjunctivePre(builtin);
}
#ifdef __cplusplus
}
#endif
