// Lean compiler output
// Module: Std.Tactic.Do.Syntax
// Imports: public import Std.Do public import Std.WP.Tactic public import Std.Tactic.Do.ProofMode public import Init.Data.Array.GetLit public import Init.Grind.Interactive
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_caseArg;
lean_object* l_Lean_mkIdent(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_binderIdent;
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_simpLemma;
extern lean_object* l_Lean_Parser_Tactic_simpErase;
extern lean_object* l_Lean_Parser_Tactic_simpStar;
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_optConfig;
extern lean_object* l_Lean_Parser_Tactic_invariantAlts;
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_massumption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value;
static const lean_string_object l_Lean_Parser_Tactic_massumption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_massumption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_massumption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "massumption"};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__3_value),LEAN_SCALAR_PTR_LITERAL(115, 248, 144, 74, 231, 227, 47, 25)}};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_massumption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_massumption___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_massumption = (const lean_object*)&l_Lean_Parser_Tactic_massumption___closed__6_value;
static const lean_string_object l_Lean_Parser_Tactic_mclear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mclear"};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 161, 32, 25, 224, 212, 229, 174)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mclear___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mclear___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGt"};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__5_value),LEAN_SCALAR_PTR_LITERAL(185, 236, 32, 153, 169, 213, 53, 244)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__4_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mclear___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__10_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__8_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclear___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclear___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mclear = (const lean_object*)&l_Lean_Parser_Tactic_mclear___closed__13_value;
static const lean_string_object l_Lean_Parser_Tactic_mclearError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mclearError"};
static const lean_object* l_Lean_Parser_Tactic_mclearError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mclearError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 218, 126, 93, 176, 59, 180, 45)}};
static const lean_object* l_Lean_Parser_Tactic_mclearError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mclearError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mclearError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mclearError = (const lean_object*)&l_Lean_Parser_Tactic_mclearError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`mclear` expects an identifier"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mconstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mconstructor"};
static const lean_object* l_Lean_Parser_Tactic_mconstructor___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 154, 195, 216, 142, 75, 110, 212)}};
static const lean_object* l_Lean_Parser_Tactic_mconstructor___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mconstructor___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mconstructor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mconstructor___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mconstructor = (const lean_object*)&l_Lean_Parser_Tactic_mconstructor___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mexact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mexact"};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 177, 11, 252, 148, 218, 54, 90)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mexact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__4_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexact___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexact___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mexact = (const lean_object*)&l_Lean_Parser_Tactic_mexact___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mexactError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mexactError"};
static const lean_object* l_Lean_Parser_Tactic_mexactError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexactError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 49, 115, 16, 125, 241, 228, 129)}};
static const lean_object* l_Lean_Parser_Tactic_mexactError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexactError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexactError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mexactError = (const lean_object*)&l_Lean_Parser_Tactic_mexactError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "`mexact` expects a term"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mexfalso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mexfalso"};
static const lean_object* l_Lean_Parser_Tactic_mexfalso___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 221, 191, 226, 253, 105, 73, 187)}};
static const lean_object* l_Lean_Parser_Tactic_mexfalso___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mexfalso___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexfalso___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexfalso___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mexfalso = (const lean_object*)&l_Lean_Parser_Tactic_mexfalso___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mexists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mexists"};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 170, 199, 22, 25, 76, 35, 23)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_mexists___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mexists___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__5_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexists___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexists___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mexists = (const lean_object*)&l_Lean_Parser_Tactic_mexists___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mexistsError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mexistsError"};
static const lean_object* l_Lean_Parser_Tactic_mexistsError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mexistsError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 62, 10, 99, 255, 118, 254, 179)}};
static const lean_object* l_Lean_Parser_Tactic_mexistsError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mexistsError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mexistsError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mexistsError = (const lean_object*)&l_Lean_Parser_Tactic_mexistsError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "`mexists` expects at least one term"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mframe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mframe"};
static const lean_object* l_Lean_Parser_Tactic_mframe___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mframe___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 145, 19, 234, 215, 109, 237, 186)}};
static const lean_object* l_Lean_Parser_Tactic_mframe___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mframe___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mframe___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mframe___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mframe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mframe___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mframe___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mframe___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mframe = (const lean_object*)&l_Lean_Parser_Tactic_mframe___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mdup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mdup"};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 112, 88, 152, 42, 238, 157, 119)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mdup___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mdup___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mdup___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mdup = (const lean_object*)&l_Lean_Parser_Tactic_mdup___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mhave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mhave"};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 47, 33, 106, 233, 48, 163, 59)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mhave___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__4_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mhave___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__7_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__10_value;
static const lean_string_object l_Lean_Parser_Tactic_mhave___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__11_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__10_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__13_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__13_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__14_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhave___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__14_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhave___closed__15 = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__15_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mhave = (const lean_object*)&l_Lean_Parser_Tactic_mhave___closed__15_value;
static const lean_string_object l_Lean_Parser_Tactic_mhaveError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mhaveError"};
static const lean_object* l_Lean_Parser_Tactic_mhaveError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mhaveError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(252, 154, 28, 196, 0, 150, 160, 162)}};
static const lean_object* l_Lean_Parser_Tactic_mhaveError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mhaveError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mhaveError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mhaveError = (const lean_object*)&l_Lean_Parser_Tactic_mhaveError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "The syntax is `mhave h := term`"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mreplace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mreplace"};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 100, 86, 218, 99, 164, 72, 83)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__4_value),((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplace___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplace___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mreplace = (const lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic_mreplaceError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mreplaceError"};
static const lean_object* l_Lean_Parser_Tactic_mreplaceError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mreplaceError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 153, 89, 235, 55, 53, 209, 195)}};
static const lean_object* l_Lean_Parser_Tactic_mreplaceError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mreplaceError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mreplace___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mreplaceError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mreplaceError = (const lean_object*)&l_Lean_Parser_Tactic_mreplaceError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "The syntax is `mreplace h := term`"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mright___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mright"};
static const lean_object* l_Lean_Parser_Tactic_mright___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mright___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mright___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mright___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mright___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mright___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 115, 16, 212, 5, 110, 91, 32)}};
static const lean_object* l_Lean_Parser_Tactic_mright___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mright___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mright___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mright___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mright___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mright___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mright___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mright___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mright___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mright___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mright = (const lean_object*)&l_Lean_Parser_Tactic_mright___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mleft___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mleft"};
static const lean_object* l_Lean_Parser_Tactic_mleft___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mleft___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 82, 79, 80, 116, 5, 61, 30)}};
static const lean_object* l_Lean_Parser_Tactic_mleft___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mleft___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mleft___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mleft___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleft___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mleft___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mleft___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mleft___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mleft = (const lean_object*)&l_Lean_Parser_Tactic_mleft___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mpure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mpure"};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 40, 78, 170, 57, 132, 109, 163)}};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mpure___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mpure = (const lean_object*)&l_Lean_Parser_Tactic_mpure___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mpureError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mpureError"};
static const lean_object* l_Lean_Parser_Tactic_mpureError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 66, 241, 214, 212, 198, 154, 78)}};
static const lean_object* l_Lean_Parser_Tactic_mpureError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpureError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mpure___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mpureError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mpureError = (const lean_object*)&l_Lean_Parser_Tactic_mpureError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`mpure` expects an identifier"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mpureIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mpureIntro"};
static const lean_object* l_Lean_Parser_Tactic_mpureIntro___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 145, 131, 67, 32, 11, 101, 202)}};
static const lean_object* l_Lean_Parser_Tactic_mpureIntro___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mpureIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mpure_intro"};
static const lean_object* l_Lean_Parser_Tactic_mpureIntro___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mpureIntro___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mpureIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mpureIntro___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mpureIntro = (const lean_object*)&l_Lean_Parser_Tactic_mpureIntro___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mrenameI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mrenameI"};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 187, 19, 96, 44, 239, 241, 167)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mrenameI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mrename_i"};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mrenameI___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__4_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mrenameI___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__6_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameI___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__8_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameI___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__9_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mrenameI___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrenameI___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_mrenameI___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrenameI___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_mrenameI___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrenameI___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_mrenameI___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrenameI___closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mrenameI;
static const lean_string_object l_Lean_Parser_Tactic_mrenameIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mrenameIError"};
static const lean_object* l_Lean_Parser_Tactic_mrenameIError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameIError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 225, 118, 214, 208, 120, 62, 143)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameIError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrenameIError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrenameIError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrenameIError = (const lean_object*)&l_Lean_Parser_Tactic_mrenameIError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "`mrename_i` expects at least one identifier"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mspecialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mspecialize"};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 227, 189, 220, 199, 75, 123, 209)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecialize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__5_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__7_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecialize___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecialize___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__10_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecialize = (const lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__10_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecializeError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mspecializeError"};
static const lean_object* l_Lean_Parser_Tactic_mspecializeError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializeError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 232, 171, 171, 235, 8, 139, 53)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializeError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializeError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializeError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecializeError = (const lean_object*)&l_Lean_Parser_Tactic_mspecializeError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "The syntax is `mspecialize h term*`"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mspecializePure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "mspecializePure"};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 62, 145, 88, 202, 28, 127)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecializePure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mspecialize_pure"};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__4_value),((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mdup___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePure___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecializePure = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecializePureError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "mspecializePureError"};
static const lean_object* l_Lean_Parser_Tactic_mspecializePureError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePureError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 201, 76, 41, 194, 107, 188, 117)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePureError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecializePureError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecializePure___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecializePureError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecializePureError = (const lean_object*)&l_Lean_Parser_Tactic_mspecializePureError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "The syntax is `mspecialize_pure h term*`"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mstart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mstart"};
static const lean_object* l_Lean_Parser_Tactic_mstart___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mstart___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 72, 234, 250, 239, 149, 139, 165)}};
static const lean_object* l_Lean_Parser_Tactic_mstart___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mstart___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mstart___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mstart___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mstart___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mstart___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mstart___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mstart = (const lean_object*)&l_Lean_Parser_Tactic_mstart___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mstop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mstop"};
static const lean_object* l_Lean_Parser_Tactic_mstop___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mstop___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 209, 80, 25, 253, 26, 68, 170)}};
static const lean_object* l_Lean_Parser_Tactic_mstop___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mstop___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mstop___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mstop___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mstop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mstop___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mstop___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mstop___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mstop = (const lean_object*)&l_Lean_Parser_Tactic_mstop___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mleave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mleave"};
static const lean_object* l_Lean_Parser_Tactic_mleave___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mleave___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 47, 148, 137, 18, 118, 104, 201)}};
static const lean_object* l_Lean_Parser_Tactic_mleave___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mleave___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mleave___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mleave___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mleave___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mleave___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mleave___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mleave___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mleave = (const lean_object*)&l_Lean_Parser_Tactic_mleave___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tacticTry_"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(34, 109, 187, 155, 23, 130, 33, 152)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__14_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__17 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__17_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__19 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__19_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "down_pure"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__24 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__24_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(36, 197, 222, 185, 244, 118, 88, 121)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "apply_pure"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__27 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__27_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(206, 120, 248, 21, 90, 213, 12, 16)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entails_1"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__30 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__30_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(232, 115, 74, 9, 86, 110, 89, 43)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entails_2"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__33 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__33_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(89, 165, 111, 118, 68, 171, 3, 238)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entails_3"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__36 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__36_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(58, 53, 5, 18, 255, 102, 81, 210)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entails_4"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__39 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__39_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__39_value),LEAN_SCALAR_PTR_LITERAL(12, 179, 224, 65, 135, 127, 28, 141)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entails_5"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__42 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__42_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(77, 113, 174, 229, 127, 145, 206, 202)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "entails_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__45 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__45_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(212, 215, 177, 253, 123, 187, 70, 202)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "and_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__48 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__48_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(128, 230, 171, 178, 81, 245, 131, 18)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "and_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__51 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__51_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(213, 170, 166, 102, 176, 29, 41, 98)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "or_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__54 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__54_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(87, 241, 222, 128, 245, 96, 154, 86)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "or_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__57 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__57_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(225, 7, 241, 198, 168, 97, 147, 41)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__60 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__60_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(228, 34, 108, 108, 238, 250, 54, 128)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__63 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__63_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__63_value),LEAN_SCALAR_PTR_LITERAL(160, 94, 209, 202, 96, 68, 239, 91)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "imp_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__66 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__66_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__66_value),LEAN_SCALAR_PTR_LITERAL(241, 115, 224, 23, 79, 216, 194, 60)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imp_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__69 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__69_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(226, 222, 49, 108, 255, 239, 82, 221)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "iff_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__72 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__72_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__72_value),LEAN_SCALAR_PTR_LITERAL(136, 129, 130, 109, 161, 68, 184, 234)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "iff_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__75 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__75_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__75_value),LEAN_SCALAR_PTR_LITERAL(184, 226, 136, 56, 20, 69, 223, 188)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__78 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__78_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(20, 23, 167, 105, 240, 80, 123, 56)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exists_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__81 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__81_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(133, 73, 133, 104, 83, 140, 176, 220)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__84 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__84_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(206, 161, 121, 29, 154, 69, 38, 192)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "forall_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__87 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__87_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__87_value),LEAN_SCALAR_PTR_LITERAL(226, 96, 144, 126, 248, 213, 74, 126)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "SVal"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "curry_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__91 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__91_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__91_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 232, 222, 117, 10, 33, 66)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "curry_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__94 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__94_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__94_value),LEAN_SCALAR_PTR_LITERAL(25, 6, 34, 146, 48, 134, 184, 12)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "uncurry_cons"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__97 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__97_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__97_value),LEAN_SCALAR_PTR_LITERAL(214, 107, 154, 238, 63, 196, 161, 227)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "uncurry_nil"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__100 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__100_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__100_value),LEAN_SCALAR_PTR_LITERAL(219, 43, 211, 205, 6, 228, 81, 146)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getThe_here"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__103 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__103_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__103_value),LEAN_SCALAR_PTR_LITERAL(253, 3, 94, 86, 219, 251, 4, 111)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getThe_there"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__106 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__106_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(215, 208, 170, 119, 0, 201, 21, 191)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__106_value),LEAN_SCALAR_PTR_LITERAL(68, 55, 218, 34, 105, 15, 209, 114)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__110 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__110_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__111 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__111_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__110_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value_aux_3),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__111_value),LEAN_SCALAR_PTR_LITERAL(27, 17, 159, 44, 239, 63, 224, 32)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "entails_true"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__114 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__114_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__114_value),LEAN_SCALAR_PTR_LITERAL(246, 50, 98, 188, 214, 243, 38, 248)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "entails_false"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__117 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__117_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__109_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__117_value),LEAN_SCALAR_PTR_LITERAL(130, 197, 58, 234, 180, 192, 166, 113)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ULift"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "down_ite"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__121 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__121_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__121_value),LEAN_SCALAR_PTR_LITERAL(17, 61, 132, 74, 6, 181, 81, 222)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "down_dite"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__124 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__124_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__124_value),LEAN_SCALAR_PTR_LITERAL(189, 251, 117, 5, 56, 9, 77, 157)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "down_uite"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__127 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__127_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__127_value),LEAN_SCALAR_PTR_LITERAL(244, 179, 189, 100, 43, 171, 85, 131)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "down_udite"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__130 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__130_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__120_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__130_value),LEAN_SCALAR_PTR_LITERAL(163, 171, 107, 46, 220, 229, 24, 119)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Cursor"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "prefix_at"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__135 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__135_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__135_value),LEAN_SCALAR_PTR_LITERAL(39, 137, 90, 168, 17, 26, 81, 55)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "suffix_at"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__138 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__138_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__138_value),LEAN_SCALAR_PTR_LITERAL(130, 185, 98, 39, 217, 124, 11, 73)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "current_at"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__141 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__141_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__141_value),LEAN_SCALAR_PTR_LITERAL(253, 18, 249, 166, 110, 194, 192, 67)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tail_at"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__144 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__144_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__133_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__134_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__144_value),LEAN_SCALAR_PTR_LITERAL(59, 172, 53, 183, 108, 231, 109, 39)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "and_imp"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__147 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__147_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__147_value),LEAN_SCALAR_PTR_LITERAL(97, 187, 54, 56, 129, 238, 180, 43)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__148 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__148_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "and_true"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__150 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__150_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__151_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__150_value),LEAN_SCALAR_PTR_LITERAL(237, 177, 40, 201, 177, 145, 63, 28)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__151 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__151_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dite_eq_ite"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__153 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__153_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__153_value),LEAN_SCALAR_PTR_LITERAL(58, 201, 242, 159, 222, 42, 9, 203)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__154 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__154_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__156_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__156 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__156_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__156_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__153_value),LEAN_SCALAR_PTR_LITERAL(149, 196, 108, 209, 12, 117, 75, 64)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_prop"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__159 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__159_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__159_value),LEAN_SCALAR_PTR_LITERAL(169, 132, 191, 43, 249, 116, 95, 104)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__160 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__160_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "true_implies"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__162 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__162_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__162_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 24, 176, 31, 95, 144, 159)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__163 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__163_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__166_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__166 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__166_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__166_value),LEAN_SCALAR_PTR_LITERAL(124, 82, 43, 228, 241, 102, 135, 24)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__168 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__168_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "locationWildcard"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__169 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__169_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__169_value),LEAN_SCALAR_PTR_LITERAL(134, 218, 71, 35, 220, 118, 132, 17)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__171_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__171 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__171_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__0_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mcasesPat"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 56, 213, 10, 226, 216, 228, 157)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(25, 46, 1, 143, 254, 189, 115, 160)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "`(mcasesPat| "};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 56, 213, 10, 226, 216, 228, 157)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__10_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__11_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_quot___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesPat_quot = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_mcasesPat;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mcasesPatAlts"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 144, 167, 140, 164, 110, 77, 222)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPatAlts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesPatAlts = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mcasesPat_"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 196, 52, 121, 17, 165, 127, 126)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat___00__closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat___00__closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mcasesPat__;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mcasesPat-"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 11, 123, 49, 91, 91, 103, 235)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x2d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesPat_x2d = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x2d___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 12, .m_data = "mcasesPat⟨_⟩"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 121, 122, 163, 184, 200, 40, 28)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__5_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__9_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mcasesPat(_)"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 228, 45, 90, 25, 77, 183, 251)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPatAlts___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesPat_x28___x29 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 12, .m_data = "mcasesPat⌜_⌝"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 36, 80, 160, 33, 204, 14, 109)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌜"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌝"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__6_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mcasesPat_u231c___u231d;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 11, .m_data = "mcasesPat□_"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 18, 113, 191, 78, 186, 91, 235)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "□"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mcasesPat_u25a1__;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mcasesPat%_"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 208, 54, 86, 176, 179, 232, 169)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mcasesPat_x25__;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x25____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x25____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mcasesPat#_"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 139, 158, 197, 170, 161, 118, 161)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mcasesPat_x23__;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x23____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x23____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_clear_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_clear_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_tuple_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_tuple_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_alts_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_alts_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_stateful_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_stateful_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Parser.Tactic.MCasesPat.clear"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__0_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Parser.Tactic.MCasesPat.one"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__4_value;
static lean_once_cell_t l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6;
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Parser.Tactic.MCasesPat.tuple"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__9_value;
static const lean_string_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4;
static lean_once_cell_t l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5;
static const lean_ctor_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18_value)}};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165_value)}};
static const lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__7 = (const lean_object*)&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Parser.Tactic.MCasesPat.alts"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__10_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__11_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__12_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Parser.Tactic.MCasesPat.pure"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__13_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__13_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__14_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__15 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__15_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Parser.Tactic.MCasesPat.stateful"};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__16 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__16_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__16_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__17 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__17_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__18 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_instReprMCasesPat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_instReprMCasesPat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instReprMCasesPat = (const lean_object*)&l_Lean_Parser_Tactic_instReprMCasesPat___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instInhabitedMCasesPat_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instInhabitedMCasesPat_default___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMCasesPat_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instInhabitedMCasesPat_default = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMCasesPat_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instInhabitedMCasesPat = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMCasesPat_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_goAlts(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_MCasesPat_parse___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_MCasesPat_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_MCasesPat_parse___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mcases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mcases"};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 192, 12, 149, 146, 251, 197, 23)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mcases___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__6_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcases___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcases___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcases = (const lean_object*)&l_Lean_Parser_Tactic_mcases___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_mcasesError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mcasesError"};
static const lean_object* l_Lean_Parser_Tactic_mcasesError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 241, 134, 227, 96, 232, 12, 230)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mcasesError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcases___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mcasesError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mcasesError = (const lean_object*)&l_Lean_Parser_Tactic_mcasesError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "The syntax is `mcases h with pat`"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mrefinePat"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 59, 126, 63, 72, 199, 165, 9)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(147, 47, 224, 199, 194, 111, 137, 195)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`(mrefinePat| "};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 59, 126, 63, 72, 199, 165, 9)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePat_quot = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_mrefinePat;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mrefinePat_"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 205, 252, 11, 203, 77, 12, 3)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat___00__closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mrefinePat___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrefinePat___00__closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mrefinePat__;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mrefinePats"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePats___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 173, 91, 190, 46, 156, 169, 121)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePats___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__4_value),((lean_object*)&l_Lean_Parser_Tactic_mexists___closed__5_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePats___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePats___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__0_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__1_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePats___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePats = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "mrefinePat⟨_⟩"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 252, 110, 106, 145, 210, 7, 196)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePats___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mrefinePat(_)"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 235, 27, 55, 120, 135, 13, 209)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePat_x28___x29 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "mrefinePat⌜_⌝"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 247, 138, 95, 101, 152, 141, 145)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePat_u231c___u231d = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 12, .m_data = "mrefinePat□_"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 27, 205, 29, 81, 36, 207, 246)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mrefinePat_u25a1__;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mrefinePat\?_"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 112, 196, 176, 199, 255, 59, 175)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mrefinePat_x3f__;
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mrefinePat%_"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 246, 182, 233, 244, 232, 234, 234)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefinePat_x25__ = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x25____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x25____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mrefinePat#_"};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 43, 185, 96, 20, 2, 38, 80)}};
static const lean_object* l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mrefinePat_x23__;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x23____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x23____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_one_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_one_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_tuple_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_tuple_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_stateful_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_stateful_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_hole_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_hole_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Parser.Tactic.MRefinePat.one"};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__0_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Parser.Tactic.MRefinePat.tuple"};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__5_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Parser.Tactic.MRefinePat.pure"};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Parser.Tactic.MRefinePat.stateful"};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__11_value;
static const lean_string_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Parser.Tactic.MRefinePat.hole"};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__13_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_instReprMRefinePat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_instReprMRefinePat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instReprMRefinePat = (const lean_object*)&l_Lean_Parser_Tactic_instReprMRefinePat___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_instInhabitedMRefinePat_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_instInhabitedMRefinePat_default___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMRefinePat_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instInhabitedMRefinePat_default = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMRefinePat_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_instInhabitedMRefinePat = (const lean_object*)&l_Lean_Parser_Tactic_instInhabitedMRefinePat_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mrefine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mrefine"};
static const lean_object* l_Lean_Parser_Tactic_mrefine___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 147, 116, 116, 185, 89, 229, 87)}};
static const lean_object* l_Lean_Parser_Tactic_mrefine___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mrefine___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mrefinePat_quot___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefine___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefine___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefine___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefine = (const lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_mrefineError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mrefineError"};
static const lean_object* l_Lean_Parser_Tactic_mrefineError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrefineError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 98, 145, 116, 62, 236, 216, 113)}};
static const lean_object* l_Lean_Parser_Tactic_mrefineError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrefineError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrefine___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrefineError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrefineError = (const lean_object*)&l_Lean_Parser_Tactic_mrefineError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`mrefine` expects a pattern"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mintroPat_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mintroPat"};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 161, 137, 13, 29, 125, 30, 194)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 116, 95, 65, 248, 13, 22, 127)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mintroPat_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "`(mintroPat| "};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 161, 137, 13, 29, 125, 30, 194)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_quot___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mintroPat_quot = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_mintroPat;
static const lean_string_object l_Lean_Parser_Tactic_mintroPat___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mintroPat_"};
static const lean_object* l_Lean_Parser_Tactic_mintroPat___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 197, 23, 48, 210, 183, 157, 165)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mintroPat__ = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat___00__closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 11, .m_data = "mintroPat∀_"};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 201, 27, 44, 199, 236, 234, 55)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mintroPat_u2200__;
static const lean_string_object l_Lean_Parser_Tactic_mintro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mintro"};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 222, 62, 246, 205, 225, 8, 203)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__9_value),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_quot___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintro___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mintro = (const lean_object*)&l_Lean_Parser_Tactic_mintro___closed__6_value;
static const lean_string_object l_Lean_Parser_Tactic_mintroError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mintroError"};
static const lean_object* l_Lean_Parser_Tactic_mintroError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mintroError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 215, 98, 13, 248, 114, 226, 4)}};
static const lean_object* l_Lean_Parser_Tactic_mintroError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mintroError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mintro___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mintroError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mintroError = (const lean_object*)&l_Lean_Parser_Tactic_mintroError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "`mintro` expects at least one pattern"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mrevertPat"};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 192, 66, 162, 27, 20, 239, 196)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(64, 122, 103, 47, 167, 51, 211, 55)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`(mrevertPat| "};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 192, 66, 162, 27, 20, 239, 196)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mcasesPat_quot___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrevertPat_quot = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_mrevertPat;
static const lean_string_object l_Lean_Parser_Tactic_mrevertPat___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mrevertPat_"};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 56, 253, 143, 81, 27, 28, 109)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__11_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrevertPat__ = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat___00__closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 12, .m_data = "mrevertPat∀_"};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 101, 4, 189, 225, 175, 44, 14)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrevertPat_u2200__ = (const lean_object*)&l_Lean_Parser_Tactic_mrevertPat_u2200___00__closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic_mrevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mrevert"};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 105, 168, 208, 87, 76, 255, 172)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__9_value),((lean_object*)&l_Lean_Parser_Tactic_mrevertPat_quot___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecialize___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevert___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrevert = (const lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__6_value;
static const lean_string_object l_Lean_Parser_Tactic_mrevertError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "mrevertError"};
static const lean_object* l_Lean_Parser_Tactic_mrevertError___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 145, 230, 122, 141, 117, 57, 209)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertError___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mrevertError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mrevert___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_mrevertError___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mrevertError = (const lean_object*)&l_Lean_Parser_Tactic_mrevertError___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "`mrevert` expects at least one pattern"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevert__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevert__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mspecNoBind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mspecNoBind"};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 86, 213, 46, 163, 23, 151, 189)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecNoBind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mspec_no_bind"};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__9_value),((lean_object*)&l_Lean_Parser_Tactic_mexact___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoBind___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoBind___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecNoBind = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecNoSimp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mspecNoSimp"};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 95, 246, 218, 2, 114, 192, 99)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mspecNoSimp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mspec_no_simp"};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspecNoSimp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspecNoSimp___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspecNoSimp = (const lean_object*)&l_Lean_Parser_Tactic_mspecNoSimp___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_<;>_"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 118, 44, 159, 195, 11, 47, 176)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withReducible"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 44, 223, 192, 8, 197, 146, 83)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "with_reducible"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Spec"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bind"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(192, 253, 214, 83, 55, 75, 153, 163)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(197, 96, 240, 111, 180, 90, 55, 33)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_mspec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mspec"};
static const lean_object* l_Lean_Parser_Tactic_mspec___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 251, 147, 100, 37, 246, 67, 31)}};
static const lean_object* l_Lean_Parser_Tactic_mspec___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mspec___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__2_value),((lean_object*)&l_Lean_Parser_Tactic_mspecNoBind___closed__5_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspec___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mspec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mspec___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_mspec___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_mspec = (const lean_object*)&l_Lean_Parser_Tactic_mspec___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "allGoals"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 66, 138, 83, 251, 171, 29, 196)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "all_goals"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "true_intro_simp"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(158, 127, 133, 93, 20, 12, 235, 120)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticTrivial"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(91, 113, 211, 1, 53, 106, 100, 38)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "tacticMvcgen_trivial_extensible"};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 21, 190, 12, 230, 105, 17, 72)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mvcgen_trivial_extensible"};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticMvcgen_trivial"};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 21, 34, 5, 168, 1, 29, 164)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "mvcgen_trivial"};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__3_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_tacticMvcgen__trivial = (const lean_object*)&l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 232, 35, 17, 172, 62, 48, 174)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_vcAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcAlt"};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(172, 45, 84, 214, 166, 18, 7, 59)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_vcAlt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "| "};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlt___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlt___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlt___closed__6;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(13, 106, 54, 236, 164, 218, 24, 154)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlt___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlt___closed__8_value;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlt___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlt___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlt___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_vcAlt;
static const lean_string_object l_Lean_Parser_Tactic_vcAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "vcAlts"};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 11, 218, 136, 13, 239, 233, 239)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_vcAlts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "with "};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__2_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_vcAlts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__4_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_mrenameI___closed__9_value),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mhave___closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mclear___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__8_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__9_value;
static const lean_string_object l_Lean_Parser_Tactic_vcAlts___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__10_value),LEAN_SCALAR_PTR_LITERAL(246, 171, 180, 145, 132, 143, 108, 238)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__11_value;
static const lean_string_object l_Lean_Parser_Tactic_vcAlts___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGe"};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__12_value),LEAN_SCALAR_PTR_LITERAL(119, 36, 80, 74, 173, 106, 150, 68)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__13_value;
static const lean_ctor_object l_Lean_Parser_Tactic_vcAlts___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__13_value)}};
static const lean_object* l_Lean_Parser_Tactic_vcAlts___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic_vcAlts___closed__14_value;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlts___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlts___closed__15;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlts___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlts___closed__16;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlts___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlts___closed__17;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlts___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlts___closed__18;
static lean_once_cell_t l_Lean_Parser_Tactic_vcAlts___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_vcAlts___closed__19;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_vcAlts;
static const lean_string_object l_Lean_Parser_Tactic_mvcgen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvcgen"};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 16, 249, 94, 239, 227, 109, 158)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__3;
static const lean_string_object l_Lean_Parser_Tactic_mvcgen___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_mvcgen___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic_mvcgen___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__8_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__9_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__14;
static const lean_string_object l_Lean_Parser_Tactic_mvcgen___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__15 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__15_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgen___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__15_value)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgen___closed__16 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgen___closed__16_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__17;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__18;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__19;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__20;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__21;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__22;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__23;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgen___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgen___closed__24;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mvcgen;
static const lean_string_object l_Lean_Parser_Tactic_mvcgenHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mvcgenHint"};
static const lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_massumption___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgenHint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 105, 143, 226, 126, 5, 243, 226)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_mvcgenHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mvcgen\?"};
static const lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_mvcgenHint___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_mvcgenHint___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgenHint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgenHint___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_mvcgenHint___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_mvcgenHint___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mvcgenHint;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1(lean_object* v_x_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = ((lean_object*)(l_Lean_Parser_Tactic_mclearError___closed__1));
v___x_69_ = l_Lean_Syntax_isOfKind(v_x_65_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_box(1);
v___x_71_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v_a_67_);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___closed__0));
v___x_73_ = l_Lean_Macro_throwError___redArg(v___x_72_, v_a_66_, v_a_67_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v_a_74_; lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_a_75_ = lean_ctor_get(v___x_73_, 1);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_73_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_74_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
else
{
lean_object* v_a_83_; lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
v_a_83_ = lean_ctor_get(v___x_73_, 0);
v_a_84_ = lean_ctor_get(v___x_73_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_73_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_inc(v_a_83_);
lean_dec(v___x_73_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_83_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1___boxed(lean_object* v_x_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mclearError__1(v_x_92_, v_a_93_, v_a_94_);
lean_dec_ref(v_a_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1(lean_object* v_x_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = ((lean_object*)(l_Lean_Parser_Tactic_mexactError___closed__1));
v___x_154_ = l_Lean_Syntax_isOfKind(v_x_150_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_box(1);
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_a_152_);
return v___x_156_;
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___closed__0));
v___x_158_ = l_Lean_Macro_throwError___redArg(v___x_157_, v_a_151_, v_a_152_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
v_a_160_ = lean_ctor_get(v___x_158_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_158_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_inc(v_a_159_);
lean_dec(v___x_158_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_159_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_168_ = lean_ctor_get(v___x_158_, 0);
v_a_169_ = lean_ctor_get(v___x_158_, 1);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_158_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_inc(v_a_168_);
lean_dec(v___x_158_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_168_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1___boxed(lean_object* v_x_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexactError__1(v_x_177_, v_a_178_, v_a_179_);
lean_dec_ref(v_a_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1(lean_object* v_x_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l_Lean_Parser_Tactic_mexistsError___closed__1));
v___x_238_ = l_Lean_Syntax_isOfKind(v_x_234_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_box(1);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v_a_236_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___closed__0));
v___x_242_ = l_Lean_Macro_throwError___redArg(v___x_241_, v_a_235_, v_a_236_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_a_244_ = lean_ctor_get(v___x_242_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_242_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_243_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v_a_252_; lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
v_a_252_ = lean_ctor_get(v___x_242_, 0);
v_a_253_ = lean_ctor_get(v___x_242_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_242_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_inc(v_a_252_);
lean_dec(v___x_242_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_252_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1___boxed(lean_object* v_x_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mexistsError__1(v_x_261_, v_a_262_, v_a_263_);
lean_dec_ref(v_a_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1(lean_object* v_x_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = ((lean_object*)(l_Lean_Parser_Tactic_mhaveError___closed__1));
v___x_370_ = l_Lean_Syntax_isOfKind(v_x_366_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_box(1);
v___x_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_a_368_);
return v___x_372_;
}
else
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___closed__0));
v___x_374_ = l_Lean_Macro_throwError___redArg(v___x_373_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
v_a_376_ = lean_ctor_get(v___x_374_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_374_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_inc(v_a_375_);
lean_dec(v___x_374_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_375_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_384_ = lean_ctor_get(v___x_374_, 0);
v_a_385_ = lean_ctor_get(v___x_374_, 1);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_374_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_inc(v_a_384_);
lean_dec(v___x_374_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_384_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1___boxed(lean_object* v_x_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mhaveError__1(v_x_393_, v_a_394_, v_a_395_);
lean_dec_ref(v_a_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1(lean_object* v_x_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_Parser_Tactic_mreplaceError___closed__1));
v___x_443_ = l_Lean_Syntax_isOfKind(v_x_439_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(1);
v___x_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
lean_ctor_set(v___x_445_, 1, v_a_441_);
return v___x_445_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___closed__0));
v___x_447_ = l_Lean_Macro_throwError___redArg(v___x_446_, v_a_440_, v_a_441_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
v_a_449_ = lean_ctor_get(v___x_447_, 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_447_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_inc(v_a_448_);
lean_dec(v___x_447_);
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
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_448_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_457_ = lean_ctor_get(v___x_447_, 0);
v_a_458_ = lean_ctor_get(v___x_447_, 1);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_447_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_inc(v_a_457_);
lean_dec(v___x_447_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_457_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1___boxed(lean_object* v_x_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mreplaceError__1(v_x_466_, v_a_467_, v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1(lean_object* v_x_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = ((lean_object*)(l_Lean_Parser_Tactic_mpureError___closed__1));
v___x_536_ = l_Lean_Syntax_isOfKind(v_x_532_, v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_box(1);
v___x_538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v_a_534_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___closed__0));
v___x_540_ = l_Lean_Macro_throwError___redArg(v___x_539_, v_a_533_, v_a_534_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_a_542_ = lean_ctor_get(v___x_540_, 1);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_540_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_541_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_550_ = lean_ctor_get(v___x_540_, 0);
v_a_551_ = lean_ctor_get(v___x_540_, 1);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_540_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_inc(v_a_550_);
lean_dec(v___x_540_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_550_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1___boxed(lean_object* v_x_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mpureError__1(v_x_559_, v_a_560_, v_a_561_);
lean_dec_ref(v_a_560_);
return v_res_562_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrenameI___closed__10(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = l_Lean_binderIdent;
v___x_601_ = ((lean_object*)(l_Lean_Parser_Tactic_mrenameI___closed__9));
v___x_602_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_603_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_601_);
lean_ctor_set(v___x_603_, 2, v___x_600_);
return v___x_603_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrenameI___closed__11(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_obj_once(&l_Lean_Parser_Tactic_mrenameI___closed__10, &l_Lean_Parser_Tactic_mrenameI___closed__10_once, _init_l_Lean_Parser_Tactic_mrenameI___closed__10);
v___x_605_ = ((lean_object*)(l_Lean_Parser_Tactic_mrenameI___closed__5));
v___x_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
lean_ctor_set(v___x_606_, 1, v___x_604_);
return v___x_606_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrenameI___closed__12(void){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = lean_obj_once(&l_Lean_Parser_Tactic_mrenameI___closed__11, &l_Lean_Parser_Tactic_mrenameI___closed__11_once, _init_l_Lean_Parser_Tactic_mrenameI___closed__11);
v___x_608_ = ((lean_object*)(l_Lean_Parser_Tactic_mrenameI___closed__3));
v___x_609_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_610_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
lean_ctor_set(v___x_610_, 2, v___x_607_);
return v___x_610_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrenameI___closed__13(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_611_ = lean_obj_once(&l_Lean_Parser_Tactic_mrenameI___closed__12, &l_Lean_Parser_Tactic_mrenameI___closed__12_once, _init_l_Lean_Parser_Tactic_mrenameI___closed__12);
v___x_612_ = lean_unsigned_to_nat(1022u);
v___x_613_ = ((lean_object*)(l_Lean_Parser_Tactic_mrenameI___closed__1));
v___x_614_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v___x_612_);
lean_ctor_set(v___x_614_, 2, v___x_611_);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrenameI(void){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_obj_once(&l_Lean_Parser_Tactic_mrenameI___closed__13, &l_Lean_Parser_Tactic_mrenameI___closed__13_once, _init_l_Lean_Parser_Tactic_mrenameI___closed__13);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1(lean_object* v_x_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = ((lean_object*)(l_Lean_Parser_Tactic_mrenameIError___closed__1));
v___x_632_ = l_Lean_Syntax_isOfKind(v_x_628_, v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_box(1);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v_a_630_);
return v___x_634_;
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___closed__0));
v___x_636_ = l_Lean_Macro_throwError___redArg(v___x_635_, v_a_629_, v_a_630_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_a_638_ = lean_ctor_get(v___x_636_, 1);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_636_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_637_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
else
{
lean_object* v_a_646_; lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_646_ = lean_ctor_get(v___x_636_, 0);
v_a_647_ = lean_ctor_get(v___x_636_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_636_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_inc(v_a_646_);
lean_dec(v___x_636_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_646_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1___boxed(lean_object* v_x_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrenameIError__1(v_x_655_, v_a_656_, v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1(lean_object* v_x_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_709_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecializeError___closed__1));
v___x_710_ = l_Lean_Syntax_isOfKind(v_x_706_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_box(1);
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
lean_ctor_set(v___x_712_, 1, v_a_708_);
return v___x_712_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___closed__0));
v___x_714_ = l_Lean_Macro_throwError___redArg(v___x_713_, v_a_707_, v_a_708_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v_a_715_; lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
v_a_715_ = lean_ctor_get(v___x_714_, 0);
v_a_716_ = lean_ctor_get(v___x_714_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_714_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_inc(v_a_715_);
lean_dec(v___x_714_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_715_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
v_a_724_ = lean_ctor_get(v___x_714_, 0);
v_a_725_ = lean_ctor_get(v___x_714_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_714_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_inc(v_a_724_);
lean_dec(v___x_714_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_724_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1___boxed(lean_object* v_x_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializeError__1(v_x_733_, v_a_734_, v_a_735_);
lean_dec_ref(v_a_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1(lean_object* v_x_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecializePureError___closed__1));
v___x_784_ = l_Lean_Syntax_isOfKind(v_x_780_, v___x_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_box(1);
v___x_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v_a_782_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___closed__0));
v___x_788_ = l_Lean_Macro_throwError___redArg(v___x_787_, v_a_781_, v_a_782_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_a_790_ = lean_ctor_get(v___x_788_, 1);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_788_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_inc(v_a_789_);
lean_dec(v___x_788_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_789_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
else
{
lean_object* v_a_798_; lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
v_a_798_ = lean_ctor_get(v___x_788_, 0);
v_a_799_ = lean_ctor_get(v___x_788_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_788_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_inc(v_a_798_);
lean_dec(v___x_788_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_798_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1___boxed(lean_object* v_x_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecializePureError__1(v_x_807_, v_a_808_, v_a_809_);
lean_dec_ref(v_a_808_);
return v_res_810_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16(void){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Array_mkArray0___redArg();
return v___x_894_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__25));
v___x_913_ = l_Lean_mkIdent(v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__28));
v___x_921_ = l_Lean_mkIdent(v___x_920_);
return v___x_921_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__31));
v___x_929_ = l_Lean_mkIdent(v___x_928_);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__34));
v___x_937_ = l_Lean_mkIdent(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__37));
v___x_945_ = l_Lean_mkIdent(v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__40));
v___x_953_ = l_Lean_mkIdent(v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__43));
v___x_961_ = l_Lean_mkIdent(v___x_960_);
return v___x_961_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__46));
v___x_969_ = l_Lean_mkIdent(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__49));
v___x_977_ = l_Lean_mkIdent(v___x_976_);
return v___x_977_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__52));
v___x_985_ = l_Lean_mkIdent(v___x_984_);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__55));
v___x_993_ = l_Lean_mkIdent(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__58));
v___x_1001_ = l_Lean_mkIdent(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__61));
v___x_1009_ = l_Lean_mkIdent(v___x_1008_);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__64));
v___x_1017_ = l_Lean_mkIdent(v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__67));
v___x_1025_ = l_Lean_mkIdent(v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__70));
v___x_1033_ = l_Lean_mkIdent(v___x_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__73));
v___x_1041_ = l_Lean_mkIdent(v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__76));
v___x_1049_ = l_Lean_mkIdent(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__79));
v___x_1057_ = l_Lean_mkIdent(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__82));
v___x_1065_ = l_Lean_mkIdent(v___x_1064_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__85));
v___x_1073_ = l_Lean_mkIdent(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89(void){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__88));
v___x_1081_ = l_Lean_mkIdent(v___x_1080_);
return v___x_1081_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__92));
v___x_1090_ = l_Lean_mkIdent(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__95));
v___x_1098_ = l_Lean_mkIdent(v___x_1097_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__98));
v___x_1106_ = l_Lean_mkIdent(v___x_1105_);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__101));
v___x_1114_ = l_Lean_mkIdent(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__104));
v___x_1122_ = l_Lean_mkIdent(v___x_1121_);
return v___x_1122_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__107));
v___x_1130_ = l_Lean_mkIdent(v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__112));
v___x_1141_ = l_Lean_mkIdent(v___x_1140_);
return v___x_1141_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__115));
v___x_1149_ = l_Lean_mkIdent(v___x_1148_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__118));
v___x_1157_ = l_Lean_mkIdent(v___x_1156_);
return v___x_1157_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__122));
v___x_1164_ = l_Lean_mkIdent(v___x_1163_);
return v___x_1164_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126(void){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__125));
v___x_1170_ = l_Lean_mkIdent(v___x_1169_);
return v___x_1170_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__128));
v___x_1176_ = l_Lean_mkIdent(v___x_1175_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__131));
v___x_1182_ = l_Lean_mkIdent(v___x_1181_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__136));
v___x_1191_ = l_Lean_mkIdent(v___x_1190_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__139));
v___x_1198_ = l_Lean_mkIdent(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143(void){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__142));
v___x_1205_ = l_Lean_mkIdent(v___x_1204_);
return v___x_1205_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__145));
v___x_1212_ = l_Lean_mkIdent(v___x_1211_);
return v___x_1212_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__148));
v___x_1217_ = l_Lean_mkIdent(v___x_1216_);
return v___x_1217_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__151));
v___x_1222_ = l_Lean_mkIdent(v___x_1221_);
return v___x_1222_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__154));
v___x_1227_ = l_Lean_mkIdent(v___x_1226_);
return v___x_1227_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__157));
v___x_1233_ = l_Lean_mkIdent(v___x_1232_);
return v___x_1233_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__160));
v___x_1238_ = l_Lean_mkIdent(v___x_1237_);
return v___x_1238_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__163));
v___x_1243_ = l_Lean_mkIdent(v___x_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1(lean_object* v_x_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1263_ = ((lean_object*)(l_Lean_Parser_Tactic_mleave___closed__1));
v___x_1264_ = l_Lean_Syntax_isOfKind(v_x_1260_, v___x_1263_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = lean_box(1);
v___x_1266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v_a_1262_);
return v___x_1266_;
}
else
{
lean_object* v_ref_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v_ref_1267_ = lean_ctor_get(v_a_1261_, 5);
v___x_1268_ = 0;
v___x_1269_ = l_Lean_SourceInfo_fromRef(v_ref_1267_, v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1));
v___x_1271_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2));
lean_inc_n(v___x_1269_, 71);
v___x_1272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1269_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4));
v___x_1274_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6));
v___x_1275_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_1276_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10));
v___x_1277_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11));
v___x_1278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1269_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12));
v___x_1280_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13));
v___x_1281_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1269_);
lean_ctor_set(v___x_1281_, 1, v___x_1279_);
v___x_1282_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15));
v___x_1283_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16);
v___x_1284_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1269_);
lean_ctor_set(v___x_1284_, 1, v___x_1275_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_inc_ref_n(v___x_1284_, 91);
v___x_1285_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1282_, v___x_1284_);
v___x_1286_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__17));
v___x_1287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1269_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1275_, v___x_1287_);
v___x_1289_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18));
v___x_1290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1269_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20));
v___x_1292_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__26);
v___x_1293_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1292_);
v___x_1294_ = ((lean_object*)(l_Lean_Parser_Tactic_mexists___closed__3));
v___x_1295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1269_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29);
v___x_1297_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1296_);
v___x_1298_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__32);
v___x_1299_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1298_);
v___x_1300_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__35);
v___x_1301_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1300_);
v___x_1302_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__38);
v___x_1303_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1302_);
v___x_1304_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__41);
v___x_1305_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1304_);
v___x_1306_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__44);
v___x_1307_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1306_);
v___x_1308_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__47);
v___x_1309_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1308_);
v___x_1310_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__50);
v___x_1311_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1310_);
v___x_1312_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__53);
v___x_1313_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1312_);
v___x_1314_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__56);
v___x_1315_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1314_);
v___x_1316_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__59);
v___x_1317_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1316_);
v___x_1318_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__62);
v___x_1319_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1318_);
v___x_1320_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__65);
v___x_1321_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1320_);
v___x_1322_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__68);
v___x_1323_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1322_);
v___x_1324_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__71);
v___x_1325_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1324_);
v___x_1326_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__74);
v___x_1327_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1326_);
v___x_1328_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__77);
v___x_1329_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1328_);
v___x_1330_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__80);
v___x_1331_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1330_);
v___x_1332_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__83);
v___x_1333_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1332_);
v___x_1334_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__86);
v___x_1335_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1334_);
v___x_1336_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__89);
v___x_1337_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1336_);
v___x_1338_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__93);
v___x_1339_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1338_);
v___x_1340_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__96);
v___x_1341_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1340_);
v___x_1342_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__99);
v___x_1343_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1342_);
v___x_1344_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__102);
v___x_1345_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1344_);
v___x_1346_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__105);
v___x_1347_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1346_);
v___x_1348_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__108);
v___x_1349_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1348_);
v___x_1350_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__113);
v___x_1351_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1350_);
v___x_1352_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__116);
v___x_1353_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1352_);
v___x_1354_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__119);
v___x_1355_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1354_);
v___x_1356_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__123);
v___x_1357_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1356_);
v___x_1358_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__126);
v___x_1359_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1358_);
v___x_1360_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__129);
v___x_1361_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1360_);
v___x_1362_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__132);
v___x_1363_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1362_);
v___x_1364_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__137);
v___x_1365_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1364_);
v___x_1366_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__140);
v___x_1367_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1366_);
v___x_1368_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__143);
v___x_1369_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1368_);
v___x_1370_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__146);
v___x_1371_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1370_);
v___x_1372_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__149);
v___x_1373_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1372_);
v___x_1374_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__152);
v___x_1375_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1374_);
v___x_1376_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__155);
v___x_1377_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1376_);
v___x_1378_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__158);
v___x_1379_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1378_);
v___x_1380_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__161);
v___x_1381_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1380_);
v___x_1382_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__164);
v___x_1383_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1291_, v___x_1284_, v___x_1284_, v___x_1382_);
v___x_1384_ = lean_unsigned_to_nat(89u);
v___x_1385_ = lean_mk_empty_array_with_capacity(v___x_1384_);
v___x_1386_ = lean_array_push(v___x_1385_, v___x_1293_);
lean_inc_ref_n(v___x_1295_, 43);
v___x_1387_ = lean_array_push(v___x_1386_, v___x_1295_);
v___x_1388_ = lean_array_push(v___x_1387_, v___x_1297_);
v___x_1389_ = lean_array_push(v___x_1388_, v___x_1295_);
v___x_1390_ = lean_array_push(v___x_1389_, v___x_1299_);
v___x_1391_ = lean_array_push(v___x_1390_, v___x_1295_);
v___x_1392_ = lean_array_push(v___x_1391_, v___x_1301_);
v___x_1393_ = lean_array_push(v___x_1392_, v___x_1295_);
v___x_1394_ = lean_array_push(v___x_1393_, v___x_1303_);
v___x_1395_ = lean_array_push(v___x_1394_, v___x_1295_);
v___x_1396_ = lean_array_push(v___x_1395_, v___x_1305_);
v___x_1397_ = lean_array_push(v___x_1396_, v___x_1295_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1307_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1295_);
v___x_1400_ = lean_array_push(v___x_1399_, v___x_1309_);
v___x_1401_ = lean_array_push(v___x_1400_, v___x_1295_);
v___x_1402_ = lean_array_push(v___x_1401_, v___x_1311_);
v___x_1403_ = lean_array_push(v___x_1402_, v___x_1295_);
v___x_1404_ = lean_array_push(v___x_1403_, v___x_1313_);
v___x_1405_ = lean_array_push(v___x_1404_, v___x_1295_);
v___x_1406_ = lean_array_push(v___x_1405_, v___x_1315_);
v___x_1407_ = lean_array_push(v___x_1406_, v___x_1295_);
v___x_1408_ = lean_array_push(v___x_1407_, v___x_1317_);
v___x_1409_ = lean_array_push(v___x_1408_, v___x_1295_);
v___x_1410_ = lean_array_push(v___x_1409_, v___x_1319_);
v___x_1411_ = lean_array_push(v___x_1410_, v___x_1295_);
v___x_1412_ = lean_array_push(v___x_1411_, v___x_1321_);
v___x_1413_ = lean_array_push(v___x_1412_, v___x_1295_);
v___x_1414_ = lean_array_push(v___x_1413_, v___x_1323_);
v___x_1415_ = lean_array_push(v___x_1414_, v___x_1295_);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1325_);
v___x_1417_ = lean_array_push(v___x_1416_, v___x_1295_);
v___x_1418_ = lean_array_push(v___x_1417_, v___x_1327_);
v___x_1419_ = lean_array_push(v___x_1418_, v___x_1295_);
v___x_1420_ = lean_array_push(v___x_1419_, v___x_1329_);
v___x_1421_ = lean_array_push(v___x_1420_, v___x_1295_);
v___x_1422_ = lean_array_push(v___x_1421_, v___x_1331_);
v___x_1423_ = lean_array_push(v___x_1422_, v___x_1295_);
v___x_1424_ = lean_array_push(v___x_1423_, v___x_1333_);
v___x_1425_ = lean_array_push(v___x_1424_, v___x_1295_);
v___x_1426_ = lean_array_push(v___x_1425_, v___x_1335_);
v___x_1427_ = lean_array_push(v___x_1426_, v___x_1295_);
v___x_1428_ = lean_array_push(v___x_1427_, v___x_1337_);
v___x_1429_ = lean_array_push(v___x_1428_, v___x_1295_);
v___x_1430_ = lean_array_push(v___x_1429_, v___x_1339_);
v___x_1431_ = lean_array_push(v___x_1430_, v___x_1295_);
v___x_1432_ = lean_array_push(v___x_1431_, v___x_1341_);
v___x_1433_ = lean_array_push(v___x_1432_, v___x_1295_);
v___x_1434_ = lean_array_push(v___x_1433_, v___x_1343_);
v___x_1435_ = lean_array_push(v___x_1434_, v___x_1295_);
v___x_1436_ = lean_array_push(v___x_1435_, v___x_1345_);
v___x_1437_ = lean_array_push(v___x_1436_, v___x_1295_);
v___x_1438_ = lean_array_push(v___x_1437_, v___x_1347_);
v___x_1439_ = lean_array_push(v___x_1438_, v___x_1295_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1349_);
v___x_1441_ = lean_array_push(v___x_1440_, v___x_1295_);
v___x_1442_ = lean_array_push(v___x_1441_, v___x_1351_);
v___x_1443_ = lean_array_push(v___x_1442_, v___x_1295_);
v___x_1444_ = lean_array_push(v___x_1443_, v___x_1353_);
v___x_1445_ = lean_array_push(v___x_1444_, v___x_1295_);
v___x_1446_ = lean_array_push(v___x_1445_, v___x_1355_);
v___x_1447_ = lean_array_push(v___x_1446_, v___x_1295_);
v___x_1448_ = lean_array_push(v___x_1447_, v___x_1357_);
v___x_1449_ = lean_array_push(v___x_1448_, v___x_1295_);
v___x_1450_ = lean_array_push(v___x_1449_, v___x_1359_);
v___x_1451_ = lean_array_push(v___x_1450_, v___x_1295_);
v___x_1452_ = lean_array_push(v___x_1451_, v___x_1361_);
v___x_1453_ = lean_array_push(v___x_1452_, v___x_1295_);
v___x_1454_ = lean_array_push(v___x_1453_, v___x_1363_);
v___x_1455_ = lean_array_push(v___x_1454_, v___x_1295_);
v___x_1456_ = lean_array_push(v___x_1455_, v___x_1365_);
v___x_1457_ = lean_array_push(v___x_1456_, v___x_1295_);
v___x_1458_ = lean_array_push(v___x_1457_, v___x_1367_);
v___x_1459_ = lean_array_push(v___x_1458_, v___x_1295_);
v___x_1460_ = lean_array_push(v___x_1459_, v___x_1369_);
v___x_1461_ = lean_array_push(v___x_1460_, v___x_1295_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1371_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1295_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1373_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1295_);
v___x_1466_ = lean_array_push(v___x_1465_, v___x_1375_);
v___x_1467_ = lean_array_push(v___x_1466_, v___x_1295_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1377_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1295_);
v___x_1470_ = lean_array_push(v___x_1469_, v___x_1379_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1295_);
v___x_1472_ = lean_array_push(v___x_1471_, v___x_1381_);
v___x_1473_ = lean_array_push(v___x_1472_, v___x_1295_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1383_);
v___x_1475_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1269_);
lean_ctor_set(v___x_1475_, 1, v___x_1275_);
lean_ctor_set(v___x_1475_, 2, v___x_1474_);
v___x_1476_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165));
v___x_1477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1269_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1275_, v___x_1290_, v___x_1475_, v___x_1477_);
v___x_1479_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__167));
v___x_1480_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__168));
v___x_1481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1269_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__170));
v___x_1483_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__171));
v___x_1484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1269_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1482_, v___x_1484_);
v___x_1486_ = l_Lean_Syntax_node2(v___x_1269_, v___x_1479_, v___x_1481_, v___x_1485_);
v___x_1487_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1275_, v___x_1486_);
v___x_1488_ = l_Lean_Syntax_node6(v___x_1269_, v___x_1280_, v___x_1281_, v___x_1285_, v___x_1284_, v___x_1288_, v___x_1478_, v___x_1487_);
v___x_1489_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1275_, v___x_1488_);
v___x_1490_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1274_, v___x_1489_);
v___x_1491_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1273_, v___x_1490_);
v___x_1492_ = l_Lean_Syntax_node2(v___x_1269_, v___x_1276_, v___x_1278_, v___x_1491_);
v___x_1493_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1275_, v___x_1492_);
v___x_1494_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1274_, v___x_1493_);
v___x_1495_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1273_, v___x_1494_);
v___x_1496_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172));
v___x_1497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1269_);
lean_ctor_set(v___x_1497_, 1, v___x_1496_);
v___x_1498_ = l_Lean_Syntax_node3(v___x_1269_, v___x_1270_, v___x_1272_, v___x_1495_, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_ctor_set(v___x_1499_, 1, v_a_1262_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___boxed(lean_object* v_x_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1(v_x_1500_, v_a_1501_, v_a_1502_);
lean_dec_ref(v_a_1501_);
return v_res_1503_;
}
}
static lean_object* _init_l_Lean_Parser_Category_mcasesPat(void){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_box(0);
return v___x_1542_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat___00__closed__2(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1568_ = l_Lean_binderIdent;
v___x_1569_ = lean_unsigned_to_nat(1022u);
v___x_1570_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat___00__closed__1));
v___x_1571_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v___x_1569_);
lean_ctor_set(v___x_1571_, 2, v___x_1568_);
return v___x_1571_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat__(void){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat___00__closed__2, &l_Lean_Parser_Tactic_mcasesPat___00__closed__2_once, _init_l_Lean_Parser_Tactic_mcasesPat___00__closed__2);
return v___x_1572_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1647_ = l_Lean_binderIdent;
v___x_1648_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__3));
v___x_1649_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_1650_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
lean_ctor_set(v___x_1650_, 1, v___x_1648_);
lean_ctor_set(v___x_1650_, 2, v___x_1647_);
return v___x_1650_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7(void){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1654_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__6));
v___x_1655_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4, &l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__4);
v___x_1656_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_1657_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v___x_1655_);
lean_ctor_set(v___x_1657_, 2, v___x_1654_);
return v___x_1657_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1658_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7, &l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7_once, _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__7);
v___x_1659_ = lean_unsigned_to_nat(1024u);
v___x_1660_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1));
v___x_1661_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
lean_ctor_set(v___x_1661_, 1, v___x_1659_);
lean_ctor_set(v___x_1661_, 2, v___x_1658_);
return v___x_1661_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d(void){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8, &l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8_once, _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__8);
return v___x_1662_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4(void){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1672_ = l_Lean_binderIdent;
v___x_1673_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__3));
v___x_1674_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_1675_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
lean_ctor_set(v___x_1675_, 1, v___x_1673_);
lean_ctor_set(v___x_1675_, 2, v___x_1672_);
return v___x_1675_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5(void){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1676_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4, &l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4);
v___x_1677_ = lean_unsigned_to_nat(1022u);
v___x_1678_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1));
v___x_1679_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1677_);
lean_ctor_set(v___x_1679_, 2, v___x_1676_);
return v___x_1679_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_u25a1__(void){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5, &l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5_once, _init_l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__5);
return v___x_1680_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1690_ = l_Lean_binderIdent;
v___x_1691_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__3));
v___x_1692_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_1693_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
lean_ctor_set(v___x_1693_, 1, v___x_1691_);
lean_ctor_set(v___x_1693_, 2, v___x_1690_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1694_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4, &l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__4);
v___x_1695_ = lean_unsigned_to_nat(1022u);
v___x_1696_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1));
v___x_1697_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v___x_1695_);
lean_ctor_set(v___x_1697_, 2, v___x_1694_);
return v___x_1697_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x25__(void){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5, &l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5_once, _init_l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__5);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x25____1(lean_object* v_x_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1702_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x25___00__closed__1));
lean_inc(v_x_1699_);
v___x_1703_ = l_Lean_Syntax_isOfKind(v_x_1699_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_dec(v_x_1699_);
v___x_1704_ = lean_box(1);
v___x_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
lean_ctor_set(v___x_1705_, 1, v_a_1701_);
return v___x_1705_;
}
else
{
lean_object* v_ref_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v_ref_1706_ = lean_ctor_get(v_a_1700_, 5);
v___x_1707_ = lean_unsigned_to_nat(1u);
v___x_1708_ = l_Lean_Syntax_getArg(v_x_1699_, v___x_1707_);
lean_dec(v_x_1699_);
v___x_1709_ = 0;
v___x_1710_ = l_Lean_SourceInfo_fromRef(v_ref_1706_, v___x_1709_);
v___x_1711_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1));
v___x_1712_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2));
lean_inc_n(v___x_1710_, 2);
v___x_1713_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1710_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5));
v___x_1715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1710_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
v___x_1716_ = l_Lean_Syntax_node3(v___x_1710_, v___x_1711_, v___x_1713_, v___x_1708_, v___x_1715_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
lean_ctor_set(v___x_1717_, 1, v_a_1701_);
return v___x_1717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x25____1___boxed(lean_object* v_x_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x25____1(v_x_1718_, v_a_1719_, v_a_1720_);
lean_dec_ref(v_a_1719_);
return v_res_1721_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1731_ = l_Lean_binderIdent;
v___x_1732_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__3));
v___x_1733_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_1734_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
lean_ctor_set(v___x_1734_, 1, v___x_1732_);
lean_ctor_set(v___x_1734_, 2, v___x_1731_);
return v___x_1734_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5(void){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1735_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4, &l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4);
v___x_1736_ = lean_unsigned_to_nat(1022u);
v___x_1737_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1));
v___x_1738_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
lean_ctor_set(v___x_1738_, 1, v___x_1736_);
lean_ctor_set(v___x_1738_, 2, v___x_1735_);
return v___x_1738_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mcasesPat_x23__(void){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5, &l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5_once, _init_l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__5);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x23____1(lean_object* v_x_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_){
_start:
{
lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__1));
lean_inc(v_x_1740_);
v___x_1744_ = l_Lean_Syntax_isOfKind(v_x_1740_, v___x_1743_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_dec(v_x_1740_);
v___x_1745_ = lean_box(1);
v___x_1746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1745_);
lean_ctor_set(v___x_1746_, 1, v_a_1742_);
return v___x_1746_;
}
else
{
lean_object* v_ref_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v_ref_1747_ = lean_ctor_get(v_a_1741_, 5);
v___x_1748_ = lean_unsigned_to_nat(1u);
v___x_1749_ = l_Lean_Syntax_getArg(v_x_1740_, v___x_1748_);
lean_dec(v_x_1740_);
v___x_1750_ = 0;
v___x_1751_ = l_Lean_SourceInfo_fromRef(v_ref_1747_, v___x_1750_);
v___x_1752_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1));
v___x_1753_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2));
lean_inc(v___x_1751_);
v___x_1754_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1751_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = l_Lean_Syntax_node2(v___x_1751_, v___x_1752_, v___x_1754_, v___x_1749_);
v___x_1756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
lean_ctor_set(v___x_1756_, 1, v_a_1742_);
return v___x_1756_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x23____1___boxed(lean_object* v_x_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesPat_x23____1(v_x_1757_, v_a_1758_, v_a_1759_);
lean_dec_ref(v_a_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorIdx___impl(lean_object* v_x_1761_){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_obj_tag_nat(v_x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorIdx___impl___boxed(lean_object* v_x_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lean_Parser_Tactic_MCasesPat_ctorIdx___impl(v_x_1763_);
lean_dec(v_x_1763_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(lean_object* v_t_1765_, lean_object* v_k_1766_){
_start:
{
if (lean_obj_tag(v_t_1765_) == 1)
{
return v_k_1766_;
}
else
{
lean_object* v_name_1767_; lean_object* v___x_1768_; 
v_name_1767_ = lean_ctor_get(v_t_1765_, 0);
lean_inc(v_name_1767_);
lean_dec(v_t_1765_);
v___x_1768_ = lean_apply_1(v_k_1766_, v_name_1767_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim(lean_object* v_motive__1_1769_, lean_object* v_ctorIdx_1770_, lean_object* v_t_1771_, lean_object* v_h_1772_, lean_object* v_k_1773_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1771_, v_k_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_ctorElim___boxed(lean_object* v_motive__1_1775_, lean_object* v_ctorIdx_1776_, lean_object* v_t_1777_, lean_object* v_h_1778_, lean_object* v_k_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim(v_motive__1_1775_, v_ctorIdx_1776_, v_t_1777_, v_h_1778_, v_k_1779_);
lean_dec(v_ctorIdx_1776_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_one_elim___redArg(lean_object* v_t_1781_, lean_object* v_one_1782_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1781_, v_one_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_one_elim(lean_object* v_motive__1_1784_, lean_object* v_t_1785_, lean_object* v_h_1786_, lean_object* v_one_1787_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1785_, v_one_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_clear_elim___redArg(lean_object* v_t_1789_, lean_object* v_clear_1790_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1789_, v_clear_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_clear_elim(lean_object* v_motive__1_1792_, lean_object* v_t_1793_, lean_object* v_h_1794_, lean_object* v_clear_1795_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1793_, v_clear_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_tuple_elim___redArg(lean_object* v_t_1797_, lean_object* v_tuple_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1797_, v_tuple_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_tuple_elim(lean_object* v_motive__1_1800_, lean_object* v_t_1801_, lean_object* v_h_1802_, lean_object* v_tuple_1803_){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1801_, v_tuple_1803_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_alts_elim___redArg(lean_object* v_t_1805_, lean_object* v_alts_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1805_, v_alts_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_alts_elim(lean_object* v_motive__1_1808_, lean_object* v_t_1809_, lean_object* v_h_1810_, lean_object* v_alts_1811_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1809_, v_alts_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_pure_elim___redArg(lean_object* v_t_1813_, lean_object* v_pure_1814_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1813_, v_pure_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_pure_elim(lean_object* v_motive__1_1816_, lean_object* v_t_1817_, lean_object* v_h_1818_, lean_object* v_pure_1819_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1817_, v_pure_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_stateful_elim___redArg(lean_object* v_t_1821_, lean_object* v_stateful_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1821_, v_stateful_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_stateful_elim(lean_object* v_motive__1_1824_, lean_object* v_t_1825_, lean_object* v_h_1826_, lean_object* v_stateful_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Lean_Parser_Tactic_MCasesPat_ctorElim___redArg(v_t_1825_, v_stateful_1827_);
return v___x_1828_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_unsigned_to_nat(2u);
v___x_1839_ = lean_nat_to_int(v___x_1838_);
return v___x_1839_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6(void){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = lean_unsigned_to_nat(1u);
v___x_1841_ = lean_nat_to_int(v___x_1840_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1856_, lean_object* v_x_1857_, lean_object* v_x_1858_){
_start:
{
if (lean_obj_tag(v_x_1858_) == 0)
{
lean_dec(v_x_1856_);
return v_x_1857_;
}
else
{
lean_object* v_head_1859_; lean_object* v_tail_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1871_; 
v_head_1859_ = lean_ctor_get(v_x_1858_, 0);
v_tail_1860_ = lean_ctor_get(v_x_1858_, 1);
v_isSharedCheck_1871_ = !lean_is_exclusive(v_x_1858_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1862_ = v_x_1858_;
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_tail_1860_);
lean_inc(v_head_1859_);
lean_dec(v_x_1858_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
lean_inc(v_x_1856_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set_tag(v___x_1862_, 5);
lean_ctor_set(v___x_1862_, 1, v_x_1856_);
lean_ctor_set(v___x_1862_, 0, v_x_1857_);
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_x_1857_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_x_1856_);
v___x_1865_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1866_ = lean_unsigned_to_nat(0u);
v___x_1867_ = l_Lean_Parser_Tactic_instReprMCasesPat_repr(v_head_1859_, v___x_1866_);
v___x_1868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1865_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v_x_1857_ = v___x_1868_;
v_x_1858_ = v_tail_1860_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1(lean_object* v_x_1872_, lean_object* v_x_1873_, lean_object* v_x_1874_){
_start:
{
if (lean_obj_tag(v_x_1874_) == 0)
{
lean_dec(v_x_1872_);
return v_x_1873_;
}
else
{
lean_object* v_head_1875_; lean_object* v_tail_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1887_; 
v_head_1875_ = lean_ctor_get(v_x_1874_, 0);
v_tail_1876_ = lean_ctor_get(v_x_1874_, 1);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_x_1874_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1878_ = v_x_1874_;
v_isShared_1879_ = v_isSharedCheck_1887_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_tail_1876_);
lean_inc(v_head_1875_);
lean_dec(v_x_1874_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1887_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
lean_inc(v_x_1872_);
if (v_isShared_1879_ == 0)
{
lean_ctor_set_tag(v___x_1878_, 5);
lean_ctor_set(v___x_1878_, 1, v_x_1872_);
lean_ctor_set(v___x_1878_, 0, v_x_1873_);
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_x_1873_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_x_1872_);
v___x_1881_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = l_Lean_Parser_Tactic_instReprMCasesPat_repr(v_head_1875_, v___x_1882_);
v___x_1884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1881_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1_spec__3(v_x_1872_, v___x_1884_, v_tail_1876_);
return v___x_1885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0(lean_object* v_x_1888_, lean_object* v_x_1889_){
_start:
{
if (lean_obj_tag(v_x_1888_) == 0)
{
lean_object* v___x_1890_; 
lean_dec(v_x_1889_);
v___x_1890_ = lean_box(0);
return v___x_1890_;
}
else
{
lean_object* v_tail_1891_; 
v_tail_1891_ = lean_ctor_get(v_x_1888_, 1);
if (lean_obj_tag(v_tail_1891_) == 0)
{
lean_object* v_head_1892_; lean_object* v___x_1893_; 
lean_dec(v_x_1889_);
v_head_1892_ = lean_ctor_get(v_x_1888_, 0);
lean_inc(v_head_1892_);
lean_dec_ref_known(v_x_1888_, 2);
v___x_1893_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0___lam__0(v_head_1892_);
return v___x_1893_;
}
else
{
lean_object* v_head_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_inc(v_tail_1891_);
v_head_1894_ = lean_ctor_get(v_x_1888_, 0);
lean_inc(v_head_1894_);
lean_dec_ref_known(v_x_1888_, 2);
v___x_1895_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0___lam__0(v_head_1894_);
v___x_1896_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0_spec__1(v_x_1889_, v___x_1895_, v_tail_1891_);
return v___x_1896_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18));
v___x_1898_ = lean_string_length(v___x_1897_);
return v___x_1898_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = lean_obj_once(&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4, &l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4_once, _init_l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__4);
v___x_1900_ = lean_nat_to_int(v___x_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg(lean_object* v_a_1905_){
_start:
{
if (lean_obj_tag(v_a_1905_) == 0)
{
lean_object* v___x_1906_; 
v___x_1906_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__1));
return v___x_1906_;
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; uint8_t v___x_1915_; lean_object* v___x_1916_; 
v___x_1907_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__3));
v___x_1908_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0(v_a_1905_, v___x_1907_);
v___x_1909_ = lean_obj_once(&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5, &l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5_once, _init_l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5);
v___x_1910_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__6));
v___x_1911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
lean_ctor_set(v___x_1911_, 1, v___x_1908_);
v___x_1912_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__7));
v___x_1913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1909_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = 0;
v___x_1916_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1916_, 0, v___x_1914_);
lean_ctor_set_uint8(v___x_1916_, sizeof(void*)*1, v___x_1915_);
return v___x_1916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr(lean_object* v_x_1935_, lean_object* v_prec_1936_){
_start:
{
lean_object* v___y_1938_; 
switch(lean_obj_tag(v_x_1935_))
{
case 0:
{
lean_object* v_name_1944_; lean_object* v___y_1946_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v_name_1944_ = lean_ctor_get(v_x_1935_, 0);
lean_inc(v_name_1944_);
lean_dec_ref_known(v_x_1935_, 1);
v___x_1954_ = lean_unsigned_to_nat(1024u);
v___x_1955_ = lean_nat_dec_le(v___x_1954_, v_prec_1936_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_1946_ = v___x_1956_;
goto v___jp_1945_;
}
else
{
lean_object* v___x_1957_; 
v___x_1957_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_1946_ = v___x_1957_;
goto v___jp_1945_;
}
v___jp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1947_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__4));
v___x_1948_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_name_1944_);
v___x_1949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1947_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
lean_inc(v___y_1946_);
v___x_1950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___y_1946_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = 0;
v___x_1952_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set_uint8(v___x_1952_, sizeof(void*)*1, v___x_1951_);
v___x_1953_ = l_Repr_addAppParen(v___x_1952_, v_prec_1936_);
return v___x_1953_;
}
}
case 1:
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_unsigned_to_nat(1024u);
v___x_1959_ = lean_nat_dec_le(v___x_1958_, v_prec_1936_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; 
v___x_1960_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_1938_ = v___x_1960_;
goto v___jp_1937_;
}
else
{
lean_object* v___x_1961_; 
v___x_1961_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_1938_ = v___x_1961_;
goto v___jp_1937_;
}
}
case 2:
{
lean_object* v_args_1962_; lean_object* v___y_1964_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v_args_1962_ = lean_ctor_get(v_x_1935_, 0);
lean_inc(v_args_1962_);
lean_dec_ref_known(v_x_1935_, 1);
v___x_1972_ = lean_unsigned_to_nat(1024u);
v___x_1973_ = lean_nat_dec_le(v___x_1972_, v_prec_1936_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_1964_ = v___x_1974_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_1975_; 
v___x_1975_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_1964_ = v___x_1975_;
goto v___jp_1963_;
}
v___jp_1963_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1965_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__9));
v___x_1966_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg(v_args_1962_);
v___x_1967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1965_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
lean_inc(v___y_1964_);
v___x_1968_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___y_1964_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = 0;
v___x_1970_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1970_, 0, v___x_1968_);
lean_ctor_set_uint8(v___x_1970_, sizeof(void*)*1, v___x_1969_);
v___x_1971_ = l_Repr_addAppParen(v___x_1970_, v_prec_1936_);
return v___x_1971_;
}
}
case 3:
{
lean_object* v_args_1976_; lean_object* v___y_1978_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v_args_1976_ = lean_ctor_get(v_x_1935_, 0);
lean_inc(v_args_1976_);
lean_dec_ref_known(v_x_1935_, 1);
v___x_1986_ = lean_unsigned_to_nat(1024u);
v___x_1987_ = lean_nat_dec_le(v___x_1986_, v_prec_1936_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_1978_ = v___x_1988_;
goto v___jp_1977_;
}
else
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_1978_ = v___x_1989_;
goto v___jp_1977_;
}
v___jp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; uint8_t v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1979_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__12));
v___x_1980_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg(v_args_1976_);
v___x_1981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1979_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
lean_inc(v___y_1978_);
v___x_1982_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___y_1978_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = 0;
v___x_1984_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1984_, 0, v___x_1982_);
lean_ctor_set_uint8(v___x_1984_, sizeof(void*)*1, v___x_1983_);
v___x_1985_ = l_Repr_addAppParen(v___x_1984_, v_prec_1936_);
return v___x_1985_;
}
}
case 4:
{
lean_object* v_h_1990_; lean_object* v___y_1992_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
v_h_1990_ = lean_ctor_get(v_x_1935_, 0);
lean_inc(v_h_1990_);
lean_dec_ref_known(v_x_1935_, 1);
v___x_2000_ = lean_unsigned_to_nat(1024u);
v___x_2001_ = lean_nat_dec_le(v___x_2000_, v_prec_1936_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; 
v___x_2002_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_1992_ = v___x_2002_;
goto v___jp_1991_;
}
else
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_1992_ = v___x_2003_;
goto v___jp_1991_;
}
v___jp_1991_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1993_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__15));
v___x_1994_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_h_1990_);
v___x_1995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1993_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
lean_inc(v___y_1992_);
v___x_1996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___y_1992_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = 0;
v___x_1998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1998_, 0, v___x_1996_);
lean_ctor_set_uint8(v___x_1998_, sizeof(void*)*1, v___x_1997_);
v___x_1999_ = l_Repr_addAppParen(v___x_1998_, v_prec_1936_);
return v___x_1999_;
}
}
default: 
{
lean_object* v_h_2004_; lean_object* v___y_2006_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v_h_2004_ = lean_ctor_get(v_x_1935_, 0);
lean_inc(v_h_2004_);
lean_dec_ref_known(v_x_1935_, 1);
v___x_2014_ = lean_unsigned_to_nat(1024u);
v___x_2015_ = lean_nat_dec_le(v___x_2014_, v_prec_1936_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2006_ = v___x_2016_;
goto v___jp_2005_;
}
else
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2006_ = v___x_2017_;
goto v___jp_2005_;
}
v___jp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; uint8_t v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2007_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__18));
v___x_2008_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_h_2004_);
v___x_2009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
lean_inc(v___y_2006_);
v___x_2010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2010_, 0, v___y_2006_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
v___x_2011_ = 0;
v___x_2012_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2012_, 0, v___x_2010_);
lean_ctor_set_uint8(v___x_2012_, sizeof(void*)*1, v___x_2011_);
v___x_2013_ = l_Repr_addAppParen(v___x_2012_, v_prec_1936_);
return v___x_2013_;
}
}
}
v___jp_1937_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1939_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__1));
lean_inc(v___y_1938_);
v___x_1940_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___y_1938_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___x_1941_ = 0;
v___x_1942_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1942_, 0, v___x_1940_);
lean_ctor_set_uint8(v___x_1942_, sizeof(void*)*1, v___x_1941_);
v___x_1943_ = l_Repr_addAppParen(v___x_1942_, v_prec_1936_);
return v___x_1943_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__0___lam__0(lean_object* v___y_2018_){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_unsigned_to_nat(0u);
v___x_2020_ = l_Lean_Parser_Tactic_instReprMCasesPat_repr(v___y_2018_, v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMCasesPat_repr___boxed(lean_object* v_x_2021_, lean_object* v_prec_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_Parser_Tactic_instReprMCasesPat_repr(v_x_2021_, v_prec_2022_);
lean_dec(v_prec_2022_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0_spec__1(lean_object* v_a_2024_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_nat_to_int(v_a_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0(lean_object* v_a_2026_, lean_object* v_n_2027_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg(v_a_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___boxed(lean_object* v_a_2029_, lean_object* v_n_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0(v_a_2029_, v_n_2030_);
lean_dec(v_n_2030_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2(uint8_t v___x_2038_, uint8_t v___x_2039_, lean_object* v_as_2040_, size_t v_i_2041_, size_t v_stop_2042_, lean_object* v_b_2043_){
_start:
{
lean_object* v___y_2045_; uint8_t v___x_2049_; 
v___x_2049_ = lean_usize_dec_eq(v_i_2041_, v_stop_2042_);
if (v___x_2049_ == 0)
{
lean_object* v_fst_2050_; uint8_t v___x_2051_; 
v_fst_2050_ = lean_ctor_get(v_b_2043_, 0);
v___x_2051_ = lean_unbox(v_fst_2050_);
if (v___x_2051_ == 0)
{
lean_object* v_snd_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2060_; 
v_snd_2052_ = lean_ctor_get(v_b_2043_, 1);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_b_2043_);
if (v_isSharedCheck_2060_ == 0)
{
lean_object* v_unused_2061_; 
v_unused_2061_ = lean_ctor_get(v_b_2043_, 0);
lean_dec(v_unused_2061_);
v___x_2054_ = v_b_2043_;
v_isShared_2055_ = v_isSharedCheck_2060_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_snd_2052_);
lean_dec(v_b_2043_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2060_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2056_ = lean_box(v___x_2038_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2056_);
v___x_2058_ = v___x_2054_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v_snd_2052_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
v___y_2045_ = v___x_2058_;
goto v___jp_2044_;
}
}
}
else
{
lean_object* v_snd_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2072_; 
v_snd_2062_ = lean_ctor_get(v_b_2043_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_b_2043_);
if (v_isSharedCheck_2072_ == 0)
{
lean_object* v_unused_2073_; 
v_unused_2073_ = lean_ctor_get(v_b_2043_, 0);
lean_dec(v_unused_2073_);
v___x_2064_ = v_b_2043_;
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_snd_2062_);
lean_dec(v_b_2043_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2066_ = lean_array_uget_borrowed(v_as_2040_, v_i_2041_);
lean_inc(v___x_2066_);
v___x_2067_ = lean_array_push(v_snd_2062_, v___x_2066_);
v___x_2068_ = lean_box(v___x_2039_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 1, v___x_2067_);
lean_ctor_set(v___x_2064_, 0, v___x_2068_);
v___x_2070_ = v___x_2064_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v___x_2067_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
v___y_2045_ = v___x_2070_;
goto v___jp_2044_;
}
}
}
}
else
{
return v_b_2043_;
}
v___jp_2044_:
{
size_t v___x_2046_; size_t v___x_2047_; 
v___x_2046_ = ((size_t)1ULL);
v___x_2047_ = lean_usize_add(v_i_2041_, v___x_2046_);
v_i_2041_ = v___x_2047_;
v_b_2043_ = v___y_2045_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2___boxed(lean_object* v___x_2074_, lean_object* v___x_2075_, lean_object* v_as_2076_, lean_object* v_i_2077_, lean_object* v_stop_2078_, lean_object* v_b_2079_){
_start:
{
uint8_t v___x_928__boxed_2080_; uint8_t v___x_929__boxed_2081_; size_t v_i_boxed_2082_; size_t v_stop_boxed_2083_; lean_object* v_res_2084_; 
v___x_928__boxed_2080_ = lean_unbox(v___x_2074_);
v___x_929__boxed_2081_ = lean_unbox(v___x_2075_);
v_i_boxed_2082_ = lean_unbox_usize(v_i_2077_);
lean_dec(v_i_2077_);
v_stop_boxed_2083_ = lean_unbox_usize(v_stop_2078_);
lean_dec(v_stop_2078_);
v_res_2084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2(v___x_928__boxed_2080_, v___x_929__boxed_2081_, v_as_2076_, v_i_boxed_2082_, v_stop_boxed_2083_, v_b_2079_);
lean_dec_ref(v_as_2076_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0(size_t v_sz_2085_, size_t v_i_2086_, lean_object* v_bs_2087_){
_start:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_usize_dec_lt(v_i_2086_, v_sz_2085_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; 
v___x_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2089_, 0, v_bs_2087_);
return v___x_2089_;
}
else
{
lean_object* v_v_2090_; lean_object* v___x_2091_; lean_object* v_bs_x27_2092_; size_t v___x_2093_; size_t v___x_2094_; lean_object* v___x_2095_; 
v_v_2090_ = lean_array_uget(v_bs_2087_, v_i_2086_);
v___x_2091_ = lean_unsigned_to_nat(0u);
v_bs_x27_2092_ = lean_array_uset(v_bs_2087_, v_i_2086_, v___x_2091_);
v___x_2093_ = ((size_t)1ULL);
v___x_2094_ = lean_usize_add(v_i_2086_, v___x_2093_);
v___x_2095_ = lean_array_uset(v_bs_x27_2092_, v_i_2086_, v_v_2090_);
v_i_2086_ = v___x_2094_;
v_bs_2087_ = v___x_2095_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0___boxed(lean_object* v_sz_2097_, lean_object* v_i_2098_, lean_object* v_bs_2099_){
_start:
{
size_t v_sz_boxed_2100_; size_t v_i_boxed_2101_; lean_object* v_res_2102_; 
v_sz_boxed_2100_ = lean_unbox_usize(v_sz_2097_);
lean_dec(v_sz_2097_);
v_i_boxed_2101_ = lean_unbox_usize(v_i_2098_);
lean_dec(v_i_2098_);
v_res_2102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0(v_sz_boxed_2100_, v_i_boxed_2101_, v_bs_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_go(lean_object* v_a_2111_){
_start:
{
lean_object* v___y_2113_; lean_object* v___x_2138_; uint8_t v___x_2139_; 
v___x_2138_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat___00__closed__1));
lean_inc(v_a_2111_);
v___x_2139_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2138_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x2d___closed__1));
lean_inc(v_a_2111_);
v___x_2141_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2142_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u27e8___u27e9___closed__1));
lean_inc(v_a_2111_);
v___x_2143_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2142_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2144_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__1));
lean_inc(v_a_2111_);
v___x_2145_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2146_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__1));
lean_inc(v_a_2111_);
v___x_2147_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2146_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_x28___x29___closed__1));
lean_inc(v_a_2111_);
v___x_2149_ = l_Lean_Syntax_isOfKind(v_a_2111_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; 
lean_dec(v_a_2111_);
v___x_2150_ = lean_box(0);
return v___x_2150_;
}
else
{
lean_object* v___x_2151_; lean_object* v_pat_2152_; lean_object* v___x_2153_; 
v___x_2151_ = lean_unsigned_to_nat(1u);
v_pat_2152_ = l_Lean_Syntax_getArg(v_a_2111_, v___x_2151_);
lean_dec(v_a_2111_);
v___x_2153_ = l_Lean_Parser_Tactic_MCasesPat_parse_goAlts(v_pat_2152_);
return v___x_2153_;
}
}
else
{
lean_object* v___x_2154_; lean_object* v_h_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2154_ = lean_unsigned_to_nat(1u);
v_h_2155_ = l_Lean_Syntax_getArg(v_a_2111_, v___x_2154_);
lean_dec(v_a_2111_);
v___x_2156_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2156_, 0, v_h_2155_);
v___x_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
return v___x_2157_;
}
}
else
{
lean_object* v___x_2158_; lean_object* v_h_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2158_ = lean_unsigned_to_nat(1u);
v_h_2159_ = l_Lean_Syntax_getArg(v_a_2111_, v___x_2158_);
lean_dec(v_a_2111_);
v___x_2160_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_h_2159_);
v___x_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
return v___x_2161_;
}
}
else
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; 
v___x_2162_ = lean_unsigned_to_nat(1u);
v___x_2163_ = l_Lean_Syntax_getArg(v_a_2111_, v___x_2162_);
lean_dec(v_a_2111_);
v___x_2164_ = l_Lean_Syntax_getArgs(v___x_2163_);
lean_dec(v___x_2163_);
v___x_2165_ = lean_unsigned_to_nat(0u);
v___x_2166_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0));
v___x_2167_ = lean_array_get_size(v___x_2164_);
v___x_2168_ = lean_nat_dec_lt(v___x_2165_, v___x_2167_);
if (v___x_2168_ == 0)
{
lean_dec_ref(v___x_2164_);
v___y_2113_ = v___x_2166_;
goto v___jp_2112_;
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; size_t v___x_2171_; size_t v___x_2172_; lean_object* v___x_2173_; lean_object* v_snd_2174_; 
v___x_2169_ = lean_box(v___x_2168_);
v___x_2170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
lean_ctor_set(v___x_2170_, 1, v___x_2166_);
v___x_2171_ = ((size_t)0ULL);
v___x_2172_ = lean_usize_of_nat(v___x_2167_);
v___x_2173_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2(v___x_2143_, v___x_2141_, v___x_2164_, v___x_2171_, v___x_2172_, v___x_2170_);
lean_dec_ref(v___x_2164_);
v_snd_2174_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_snd_2174_);
lean_dec_ref(v___x_2173_);
v___y_2113_ = v_snd_2174_;
goto v___jp_2112_;
}
}
}
else
{
lean_object* v___x_2175_; 
lean_dec(v_a_2111_);
v___x_2175_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__1));
return v___x_2175_;
}
}
else
{
lean_object* v___x_2176_; lean_object* v_name_2177_; lean_object* v___x_2178_; uint8_t v___x_2179_; 
v___x_2176_ = lean_unsigned_to_nat(0u);
v_name_2177_ = l_Lean_Syntax_getArg(v_a_2111_, v___x_2176_);
lean_dec(v_a_2111_);
v___x_2178_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3));
lean_inc(v_name_2177_);
v___x_2179_ = l_Lean_Syntax_isOfKind(v_name_2177_, v___x_2178_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; 
lean_dec(v_name_2177_);
v___x_2180_ = lean_box(0);
return v___x_2180_;
}
else
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2181_, 0, v_name_2177_);
v___x_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
return v___x_2182_;
}
}
v___jp_2112_:
{
size_t v_sz_2114_; size_t v___x_2115_; lean_object* v___x_2116_; 
v_sz_2114_ = lean_array_size(v___y_2113_);
v___x_2115_ = ((size_t)0ULL);
v___x_2116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__0(v_sz_2114_, v___x_2115_, v___y_2113_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v___x_2117_; 
v___x_2117_ = lean_box(0);
return v___x_2117_;
}
else
{
lean_object* v_val_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2137_; 
v_val_2118_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2120_ = v___x_2116_;
v_isShared_2121_ = v_isSharedCheck_2137_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_val_2118_);
lean_dec(v___x_2116_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2137_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
size_t v_sz_2122_; lean_object* v___x_2123_; 
v_sz_2122_ = lean_array_size(v_val_2118_);
v___x_2123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1(v_sz_2122_, v___x_2115_, v_val_2118_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v___x_2124_; 
lean_del_object(v___x_2120_);
v___x_2124_ = lean_box(0);
return v___x_2124_;
}
else
{
lean_object* v_val_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2136_; 
v_val_2125_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2127_ = v___x_2123_;
v_isShared_2128_ = v_isSharedCheck_2136_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_val_2125_);
lean_dec(v___x_2123_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2136_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2129_ = lean_array_to_list(v_val_2125_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 2);
lean_ctor_set(v___x_2120_, 0, v___x_2129_);
v___x_2131_ = v___x_2120_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v___x_2131_);
v___x_2133_ = v___x_2127_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4(size_t v_sz_2183_, size_t v_i_2184_, lean_object* v_bs_2185_){
_start:
{
uint8_t v___x_2186_; 
v___x_2186_ = lean_usize_dec_lt(v_i_2184_, v_sz_2183_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2187_, 0, v_bs_2185_);
return v___x_2187_;
}
else
{
lean_object* v_v_2188_; lean_object* v___x_2189_; 
v_v_2188_ = lean_array_uget_borrowed(v_bs_2185_, v_i_2184_);
lean_inc(v_v_2188_);
v___x_2189_ = l_Lean_Parser_Tactic_MCasesPat_parse_go(v_v_2188_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v___x_2190_; 
lean_dec_ref(v_bs_2185_);
v___x_2190_ = lean_box(0);
return v___x_2190_;
}
else
{
lean_object* v_val_2191_; lean_object* v___x_2192_; lean_object* v_bs_x27_2193_; size_t v___x_2194_; size_t v___x_2195_; lean_object* v___x_2196_; 
v_val_2191_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_val_2191_);
lean_dec_ref_known(v___x_2189_, 1);
v___x_2192_ = lean_unsigned_to_nat(0u);
v_bs_x27_2193_ = lean_array_uset(v_bs_2185_, v_i_2184_, v___x_2192_);
v___x_2194_ = ((size_t)1ULL);
v___x_2195_ = lean_usize_add(v_i_2184_, v___x_2194_);
v___x_2196_ = lean_array_uset(v_bs_x27_2193_, v_i_2184_, v_val_2191_);
v_i_2184_ = v___x_2195_;
v_bs_2185_ = v___x_2196_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse_goAlts(lean_object* v_a_2198_){
_start:
{
lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2199_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPatAlts___closed__1));
lean_inc(v_a_2198_);
v___x_2200_ = l_Lean_Syntax_isOfKind(v_a_2198_, v___x_2199_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; 
lean_dec(v_a_2198_);
v___x_2201_ = lean_box(0);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v_args_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2202_ = lean_unsigned_to_nat(0u);
v___x_2203_ = l_Lean_Syntax_getArg(v_a_2198_, v___x_2202_);
lean_dec(v_a_2198_);
v_args_2204_ = l_Lean_Syntax_getArgs(v___x_2203_);
lean_dec(v___x_2203_);
v___x_2205_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_args_2204_);
lean_dec_ref(v_args_2204_);
v___x_2206_ = lean_array_get_size(v___x_2205_);
v___x_2207_ = lean_unsigned_to_nat(1u);
v___x_2208_ = lean_nat_dec_eq(v___x_2206_, v___x_2207_);
if (v___x_2208_ == 0)
{
size_t v_sz_2209_; size_t v___x_2210_; lean_object* v___x_2211_; 
v_sz_2209_ = lean_array_size(v___x_2205_);
v___x_2210_ = ((size_t)0ULL);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4(v_sz_2209_, v___x_2210_, v___x_2205_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v___x_2212_; 
v___x_2212_ = lean_box(0);
return v___x_2212_;
}
else
{
lean_object* v_val_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2222_; 
v_val_2213_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2215_ = v___x_2211_;
v_isShared_2216_ = v_isSharedCheck_2222_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_val_2213_);
lean_dec(v___x_2211_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2222_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2217_ = lean_array_to_list(v_val_2213_);
v___x_2218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v___x_2218_);
v___x_2220_ = v___x_2215_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
else
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_array_fget(v___x_2205_, v___x_2202_);
lean_dec_ref(v___x_2205_);
v___x_2224_ = l_Lean_Parser_Tactic_MCasesPat_parse_go(v___x_2223_);
return v___x_2224_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1(size_t v_sz_2225_, size_t v_i_2226_, lean_object* v_bs_2227_){
_start:
{
uint8_t v___x_2228_; 
v___x_2228_ = lean_usize_dec_lt(v_i_2226_, v_sz_2225_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; 
v___x_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2229_, 0, v_bs_2227_);
return v___x_2229_;
}
else
{
lean_object* v_v_2230_; lean_object* v___x_2231_; 
v_v_2230_ = lean_array_uget_borrowed(v_bs_2227_, v_i_2226_);
lean_inc(v_v_2230_);
v___x_2231_ = l_Lean_Parser_Tactic_MCasesPat_parse_goAlts(v_v_2230_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v___x_2232_; 
lean_dec_ref(v_bs_2227_);
v___x_2232_ = lean_box(0);
return v___x_2232_;
}
else
{
lean_object* v_val_2233_; lean_object* v___x_2234_; lean_object* v_bs_x27_2235_; size_t v___x_2236_; size_t v___x_2237_; lean_object* v___x_2238_; 
v_val_2233_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_val_2233_);
lean_dec_ref_known(v___x_2231_, 1);
v___x_2234_ = lean_unsigned_to_nat(0u);
v_bs_x27_2235_ = lean_array_uset(v_bs_2227_, v_i_2226_, v___x_2234_);
v___x_2236_ = ((size_t)1ULL);
v___x_2237_ = lean_usize_add(v_i_2226_, v___x_2236_);
v___x_2238_ = lean_array_uset(v_bs_x27_2235_, v_i_2226_, v_val_2233_);
v_i_2226_ = v___x_2237_;
v_bs_2227_ = v___x_2238_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1___boxed(lean_object* v_sz_2240_, lean_object* v_i_2241_, lean_object* v_bs_2242_){
_start:
{
size_t v_sz_boxed_2243_; size_t v_i_boxed_2244_; lean_object* v_res_2245_; 
v_sz_boxed_2243_ = lean_unbox_usize(v_sz_2240_);
lean_dec(v_sz_2240_);
v_i_boxed_2244_ = lean_unbox_usize(v_i_2241_);
lean_dec(v_i_2241_);
v_res_2245_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__1(v_sz_boxed_2243_, v_i_boxed_2244_, v_bs_2242_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4___boxed(lean_object* v_sz_2246_, lean_object* v_i_2247_, lean_object* v_bs_2248_){
_start:
{
size_t v_sz_boxed_2249_; size_t v_i_boxed_2250_; lean_object* v_res_2251_; 
v_sz_boxed_2249_ = lean_unbox_usize(v_sz_2246_);
lean_dec(v_sz_2246_);
v_i_boxed_2250_ = lean_unbox_usize(v_i_2247_);
lean_dec(v_i_2247_);
v_res_2251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MCasesPat_parse_goAlts_spec__4(v_sz_boxed_2249_, v_i_boxed_2250_, v_bs_2248_);
return v_res_2251_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_MCasesPat_parse___lam__0(lean_object* v_k_2258_){
_start:
{
lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___closed__1));
v___x_2260_ = lean_name_eq(v_k_2258_, v___x_2259_);
if (v___x_2260_ == 0)
{
uint8_t v___x_2261_; 
v___x_2261_ = 1;
return v___x_2261_;
}
else
{
uint8_t v___x_2262_; 
v___x_2262_ = 0;
return v___x_2262_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___lam__0___boxed(lean_object* v_k_2263_){
_start:
{
uint8_t v_res_2264_; lean_object* v_r_2265_; 
v_res_2264_ = l_Lean_Parser_Tactic_MCasesPat_parse___lam__0(v_k_2263_);
lean_dec(v_k_2263_);
v_r_2265_ = lean_box(v_res_2264_);
return v_r_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse(lean_object* v_pat_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v___f_2270_; lean_object* v___x_2271_; 
v___f_2270_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse___closed__0));
lean_inc_ref(v_a_2268_);
v___x_2271_ = l_Lean_expandMacros(v_pat_2267_, v___f_2270_, v_a_2268_, v_a_2269_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2283_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
v_a_2273_ = lean_ctor_get(v___x_2271_, 1);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2275_ = v___x_2271_;
v_isShared_2276_ = v_isSharedCheck_2283_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_inc(v_a_2272_);
lean_dec(v___x_2271_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2283_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; 
v___x_2277_ = l_Lean_Parser_Tactic_MCasesPat_parse_go(v_a_2272_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v___x_2278_; 
lean_del_object(v___x_2275_);
v___x_2278_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2273_);
return v___x_2278_;
}
else
{
lean_object* v_val_2279_; lean_object* v___x_2281_; 
v_val_2279_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_val_2279_);
lean_dec_ref_known(v___x_2277_, 1);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 0, v_val_2279_);
v___x_2281_ = v___x_2275_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_val_2279_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v_a_2273_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
else
{
lean_object* v_a_2284_; lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
v_a_2284_ = lean_ctor_get(v___x_2271_, 0);
v_a_2285_ = lean_ctor_get(v___x_2271_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2271_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_inc(v_a_2284_);
lean_dec(v___x_2271_);
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
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2284_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_a_2285_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MCasesPat_parse___boxed(lean_object* v_pat_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_Parser_Tactic_MCasesPat_parse(v_pat_2293_, v_a_2294_, v_a_2295_);
lean_dec_ref(v_a_2294_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1(lean_object* v_x_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2341_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesError___closed__1));
v___x_2342_ = l_Lean_Syntax_isOfKind(v_x_2338_, v___x_2341_);
if (v___x_2342_ == 0)
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_box(1);
v___x_2344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
lean_ctor_set(v___x_2344_, 1, v_a_2340_);
return v___x_2344_;
}
else
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2345_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___closed__0));
v___x_2346_ = l_Lean_Macro_throwError___redArg(v___x_2345_, v_a_2339_, v_a_2340_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
v_a_2348_ = lean_ctor_get(v___x_2346_, 1);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2346_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_inc(v_a_2347_);
lean_dec(v___x_2346_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2347_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
v_a_2356_ = lean_ctor_get(v___x_2346_, 0);
v_a_2357_ = lean_ctor_get(v___x_2346_, 1);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2346_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_inc(v_a_2356_);
lean_dec(v___x_2346_);
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
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2356_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_a_2357_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1___boxed(lean_object* v_x_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mcasesError__1(v_x_2365_, v_a_2366_, v_a_2367_);
lean_dec_ref(v_a_2366_);
return v_res_2368_;
}
}
static lean_object* _init_l_Lean_Parser_Category_mrefinePat(void){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_box(0);
return v___x_2398_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat___00__closed__2(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2405_ = l_Lean_binderIdent;
v___x_2406_ = lean_unsigned_to_nat(1022u);
v___x_2407_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat___00__closed__1));
v___x_2408_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___x_2406_);
lean_ctor_set(v___x_2408_, 2, v___x_2405_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat__(void){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_obj_once(&l_Lean_Parser_Tactic_mrefinePat___00__closed__2, &l_Lean_Parser_Tactic_mrefinePat___00__closed__2_once, _init_l_Lean_Parser_Tactic_mrefinePat___00__closed__2);
return v___x_2409_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2(void){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2489_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4, &l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__4);
v___x_2490_ = lean_unsigned_to_nat(1022u);
v___x_2491_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1));
v___x_2492_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2491_);
lean_ctor_set(v___x_2492_, 1, v___x_2490_);
lean_ctor_set(v___x_2492_, 2, v___x_2489_);
return v___x_2492_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_u25a1__(void){
_start:
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_obj_once(&l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2, &l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2_once, _init_l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__2);
return v___x_2493_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2503_ = l_Lean_binderIdent;
v___x_2504_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__3));
v___x_2505_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_2506_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
lean_ctor_set(v___x_2506_, 1, v___x_2504_);
lean_ctor_set(v___x_2506_, 2, v___x_2503_);
return v___x_2506_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2507_ = lean_obj_once(&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4, &l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4_once, _init_l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__4);
v___x_2508_ = lean_unsigned_to_nat(1022u);
v___x_2509_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1));
v___x_2510_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
lean_ctor_set(v___x_2510_, 1, v___x_2508_);
lean_ctor_set(v___x_2510_, 2, v___x_2507_);
return v___x_2510_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_x3f__(void){
_start:
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_obj_once(&l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5, &l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5_once, _init_l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__5);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x25____1(lean_object* v_x_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v___x_2530_; uint8_t v___x_2531_; 
v___x_2530_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x25___00__closed__1));
lean_inc(v_x_2527_);
v___x_2531_ = l_Lean_Syntax_isOfKind(v_x_2527_, v___x_2530_);
if (v___x_2531_ == 0)
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_dec(v_x_2527_);
v___x_2532_ = lean_box(1);
v___x_2533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
lean_ctor_set(v___x_2533_, 1, v_a_2529_);
return v___x_2533_;
}
else
{
lean_object* v_ref_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v_ref_2534_ = lean_ctor_get(v_a_2528_, 5);
v___x_2535_ = lean_unsigned_to_nat(1u);
v___x_2536_ = l_Lean_Syntax_getArg(v_x_2527_, v___x_2535_);
lean_dec(v_x_2527_);
v___x_2537_ = 0;
v___x_2538_ = l_Lean_SourceInfo_fromRef(v_ref_2534_, v___x_2537_);
v___x_2539_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1));
v___x_2540_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__2));
lean_inc_n(v___x_2538_, 2);
v___x_2541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2538_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
v___x_2542_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d___closed__5));
v___x_2543_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2538_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
v___x_2544_ = l_Lean_Syntax_node3(v___x_2538_, v___x_2539_, v___x_2541_, v___x_2536_, v___x_2543_);
v___x_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2544_);
lean_ctor_set(v___x_2545_, 1, v_a_2529_);
return v___x_2545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x25____1___boxed(lean_object* v_x_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x25____1(v_x_2546_, v_a_2547_, v_a_2548_);
lean_dec_ref(v_a_2547_);
return v_res_2549_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2556_ = lean_obj_once(&l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4, &l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4_once, _init_l_Lean_Parser_Tactic_mcasesPat_x23___00__closed__4);
v___x_2557_ = lean_unsigned_to_nat(1022u);
v___x_2558_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1));
v___x_2559_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v___x_2557_);
lean_ctor_set(v___x_2559_, 2, v___x_2556_);
return v___x_2559_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mrefinePat_x23__(void){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = lean_obj_once(&l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2, &l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2_once, _init_l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__2);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x23____1(lean_object* v_x_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v___x_2564_; uint8_t v___x_2565_; 
v___x_2564_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x23___00__closed__1));
lean_inc(v_x_2561_);
v___x_2565_ = l_Lean_Syntax_isOfKind(v_x_2561_, v___x_2564_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec(v_x_2561_);
v___x_2566_ = lean_box(1);
v___x_2567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
lean_ctor_set(v___x_2567_, 1, v_a_2563_);
return v___x_2567_;
}
else
{
lean_object* v_ref_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_ref_2568_ = lean_ctor_get(v_a_2562_, 5);
v___x_2569_ = lean_unsigned_to_nat(1u);
v___x_2570_ = l_Lean_Syntax_getArg(v_x_2561_, v___x_2569_);
lean_dec(v_x_2561_);
v___x_2571_ = 0;
v___x_2572_ = l_Lean_SourceInfo_fromRef(v_ref_2568_, v___x_2571_);
v___x_2573_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1));
v___x_2574_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat_u25a1___00__closed__2));
lean_inc(v___x_2572_);
v___x_2575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2572_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = l_Lean_Syntax_node2(v___x_2572_, v___x_2573_, v___x_2575_, v___x_2570_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
lean_ctor_set(v___x_2577_, 1, v_a_2563_);
return v___x_2577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x23____1___boxed(lean_object* v_x_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefinePat_x23____1(v_x_2578_, v_a_2579_, v_a_2580_);
lean_dec_ref(v_a_2579_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorIdx___impl(lean_object* v_x_2582_){
_start:
{
lean_object* v___x_2583_; 
v___x_2583_ = lean_obj_tag_nat(v_x_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorIdx___impl___boxed(lean_object* v_x_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Lean_Parser_Tactic_MRefinePat_ctorIdx___impl(v_x_2584_);
lean_dec_ref(v_x_2584_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(lean_object* v_t_2586_, lean_object* v_k_2587_){
_start:
{
lean_object* v_name_2588_; lean_object* v___x_2589_; 
v_name_2588_ = lean_ctor_get(v_t_2586_, 0);
lean_inc(v_name_2588_);
lean_dec_ref(v_t_2586_);
v___x_2589_ = lean_apply_1(v_k_2587_, v_name_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim(lean_object* v_motive__1_2590_, lean_object* v_ctorIdx_2591_, lean_object* v_t_2592_, lean_object* v_h_2593_, lean_object* v_k_2594_){
_start:
{
lean_object* v___x_2595_; 
v___x_2595_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2592_, v_k_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_ctorElim___boxed(lean_object* v_motive__1_2596_, lean_object* v_ctorIdx_2597_, lean_object* v_t_2598_, lean_object* v_h_2599_, lean_object* v_k_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim(v_motive__1_2596_, v_ctorIdx_2597_, v_t_2598_, v_h_2599_, v_k_2600_);
lean_dec(v_ctorIdx_2597_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_one_elim___redArg(lean_object* v_t_2602_, lean_object* v_one_2603_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2602_, v_one_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_one_elim(lean_object* v_motive__1_2605_, lean_object* v_t_2606_, lean_object* v_h_2607_, lean_object* v_one_2608_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2606_, v_one_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_tuple_elim___redArg(lean_object* v_t_2610_, lean_object* v_tuple_2611_){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2610_, v_tuple_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_tuple_elim(lean_object* v_motive__1_2613_, lean_object* v_t_2614_, lean_object* v_h_2615_, lean_object* v_tuple_2616_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2614_, v_tuple_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_pure_elim___redArg(lean_object* v_t_2618_, lean_object* v_pure_2619_){
_start:
{
lean_object* v___x_2620_; 
v___x_2620_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2618_, v_pure_2619_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_pure_elim(lean_object* v_motive__1_2621_, lean_object* v_t_2622_, lean_object* v_h_2623_, lean_object* v_pure_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2622_, v_pure_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_stateful_elim___redArg(lean_object* v_t_2626_, lean_object* v_stateful_2627_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2626_, v_stateful_2627_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_stateful_elim(lean_object* v_motive__1_2629_, lean_object* v_t_2630_, lean_object* v_h_2631_, lean_object* v_stateful_2632_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2630_, v_stateful_2632_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_hole_elim___redArg(lean_object* v_t_2634_, lean_object* v_hole_2635_){
_start:
{
lean_object* v___x_2636_; 
v___x_2636_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2634_, v_hole_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_hole_elim(lean_object* v_motive__1_2637_, lean_object* v_t_2638_, lean_object* v_h_2639_, lean_object* v_hole_2640_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_Parser_Tactic_MRefinePat_ctorElim___redArg(v_t_2638_, v_hole_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v_x_2656_){
_start:
{
if (lean_obj_tag(v_x_2656_) == 0)
{
lean_dec(v_x_2654_);
return v_x_2655_;
}
else
{
lean_object* v_head_2657_; lean_object* v_tail_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2669_; 
v_head_2657_ = lean_ctor_get(v_x_2656_, 0);
v_tail_2658_ = lean_ctor_get(v_x_2656_, 1);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_x_2656_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2660_ = v_x_2656_;
v_isShared_2661_ = v_isSharedCheck_2669_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tail_2658_);
lean_inc(v_head_2657_);
lean_dec(v_x_2656_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2669_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
lean_inc(v_x_2654_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set_tag(v___x_2660_, 5);
lean_ctor_set(v___x_2660_, 1, v_x_2654_);
lean_ctor_set(v___x_2660_, 0, v_x_2655_);
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_x_2655_);
lean_ctor_set(v_reuseFailAlloc_2668_, 1, v_x_2654_);
v___x_2663_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2664_ = lean_unsigned_to_nat(0u);
v___x_2665_ = l_Lean_Parser_Tactic_instReprMRefinePat_repr(v_head_2657_, v___x_2664_);
v___x_2666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2663_);
lean_ctor_set(v___x_2666_, 1, v___x_2665_);
v_x_2655_ = v___x_2666_;
v_x_2656_ = v_tail_2658_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1(lean_object* v_x_2670_, lean_object* v_x_2671_, lean_object* v_x_2672_){
_start:
{
if (lean_obj_tag(v_x_2672_) == 0)
{
lean_dec(v_x_2670_);
return v_x_2671_;
}
else
{
lean_object* v_head_2673_; lean_object* v_tail_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2685_; 
v_head_2673_ = lean_ctor_get(v_x_2672_, 0);
v_tail_2674_ = lean_ctor_get(v_x_2672_, 1);
v_isSharedCheck_2685_ = !lean_is_exclusive(v_x_2672_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2676_ = v_x_2672_;
v_isShared_2677_ = v_isSharedCheck_2685_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_tail_2674_);
lean_inc(v_head_2673_);
lean_dec(v_x_2672_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2685_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
lean_inc(v_x_2670_);
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 5);
lean_ctor_set(v___x_2676_, 1, v_x_2670_);
lean_ctor_set(v___x_2676_, 0, v_x_2671_);
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_x_2671_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_x_2670_);
v___x_2679_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = l_Lean_Parser_Tactic_instReprMRefinePat_repr(v_head_2673_, v___x_2680_);
v___x_2682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2679_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1_spec__2(v_x_2670_, v___x_2682_, v_tail_2674_);
return v___x_2683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0(lean_object* v_x_2686_, lean_object* v_x_2687_){
_start:
{
if (lean_obj_tag(v_x_2686_) == 0)
{
lean_object* v___x_2688_; 
lean_dec(v_x_2687_);
v___x_2688_ = lean_box(0);
return v___x_2688_;
}
else
{
lean_object* v_tail_2689_; 
v_tail_2689_ = lean_ctor_get(v_x_2686_, 1);
if (lean_obj_tag(v_tail_2689_) == 0)
{
lean_object* v_head_2690_; lean_object* v___x_2691_; 
lean_dec(v_x_2687_);
v_head_2690_ = lean_ctor_get(v_x_2686_, 0);
lean_inc(v_head_2690_);
lean_dec_ref_known(v_x_2686_, 2);
v___x_2691_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0___lam__0(v_head_2690_);
return v___x_2691_;
}
else
{
lean_object* v_head_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
lean_inc(v_tail_2689_);
v_head_2692_ = lean_ctor_get(v_x_2686_, 0);
lean_inc(v_head_2692_);
lean_dec_ref_known(v_x_2686_, 2);
v___x_2693_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0___lam__0(v_head_2692_);
v___x_2694_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0_spec__1(v_x_2687_, v___x_2693_, v_tail_2689_);
return v___x_2694_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___redArg(lean_object* v_a_2695_){
_start:
{
if (lean_obj_tag(v_a_2695_) == 0)
{
lean_object* v___x_2696_; 
v___x_2696_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__1));
return v___x_2696_;
}
else
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; 
v___x_2697_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__3));
v___x_2698_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0(v_a_2695_, v___x_2697_);
v___x_2699_ = lean_obj_once(&l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5, &l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5_once, _init_l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__5);
v___x_2700_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__6));
v___x_2701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
lean_ctor_set(v___x_2701_, 1, v___x_2698_);
v___x_2702_ = ((lean_object*)(l_List_repr___at___00Lean_Parser_Tactic_instReprMCasesPat_repr_spec__0___redArg___closed__7));
v___x_2703_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2699_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
v___x_2705_ = 0;
v___x_2706_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set_uint8(v___x_2706_, sizeof(void*)*1, v___x_2705_);
return v___x_2706_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr(lean_object* v_x_2725_, lean_object* v_prec_2726_){
_start:
{
switch(lean_obj_tag(v_x_2725_))
{
case 0:
{
lean_object* v_name_2727_; lean_object* v___y_2729_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v_name_2727_ = lean_ctor_get(v_x_2725_, 0);
lean_inc(v_name_2727_);
lean_dec_ref_known(v_x_2725_, 1);
v___x_2737_ = lean_unsigned_to_nat(1024u);
v___x_2738_ = lean_nat_dec_le(v___x_2737_, v_prec_2726_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2729_ = v___x_2739_;
goto v___jp_2728_;
}
else
{
lean_object* v___x_2740_; 
v___x_2740_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2729_ = v___x_2740_;
goto v___jp_2728_;
}
v___jp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; uint8_t v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2730_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__2));
v___x_2731_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_name_2727_);
v___x_2732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2730_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
lean_inc(v___y_2729_);
v___x_2733_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2733_, 0, v___y_2729_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
v___x_2734_ = 0;
v___x_2735_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2735_, 0, v___x_2733_);
lean_ctor_set_uint8(v___x_2735_, sizeof(void*)*1, v___x_2734_);
v___x_2736_ = l_Repr_addAppParen(v___x_2735_, v_prec_2726_);
return v___x_2736_;
}
}
case 1:
{
lean_object* v_args_2741_; lean_object* v___y_2743_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v_args_2741_ = lean_ctor_get(v_x_2725_, 0);
lean_inc(v_args_2741_);
lean_dec_ref_known(v_x_2725_, 1);
v___x_2751_ = lean_unsigned_to_nat(1024u);
v___x_2752_ = lean_nat_dec_le(v___x_2751_, v_prec_2726_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2743_ = v___x_2753_;
goto v___jp_2742_;
}
else
{
lean_object* v___x_2754_; 
v___x_2754_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2743_ = v___x_2754_;
goto v___jp_2742_;
}
v___jp_2742_:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; uint8_t v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2744_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__5));
v___x_2745_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___redArg(v_args_2741_);
v___x_2746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
lean_inc(v___y_2743_);
v___x_2747_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___y_2743_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = 0;
v___x_2749_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2749_, 0, v___x_2747_);
lean_ctor_set_uint8(v___x_2749_, sizeof(void*)*1, v___x_2748_);
v___x_2750_ = l_Repr_addAppParen(v___x_2749_, v_prec_2726_);
return v___x_2750_;
}
}
case 2:
{
lean_object* v_h_2755_; lean_object* v___y_2757_; lean_object* v___x_2765_; uint8_t v___x_2766_; 
v_h_2755_ = lean_ctor_get(v_x_2725_, 0);
lean_inc(v_h_2755_);
lean_dec_ref_known(v_x_2725_, 1);
v___x_2765_ = lean_unsigned_to_nat(1024u);
v___x_2766_ = lean_nat_dec_le(v___x_2765_, v_prec_2726_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2757_ = v___x_2767_;
goto v___jp_2756_;
}
else
{
lean_object* v___x_2768_; 
v___x_2768_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2757_ = v___x_2768_;
goto v___jp_2756_;
}
v___jp_2756_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2758_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__8));
v___x_2759_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_h_2755_);
v___x_2760_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
lean_inc(v___y_2757_);
v___x_2761_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___y_2757_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = 0;
v___x_2763_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2763_, 0, v___x_2761_);
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*1, v___x_2762_);
v___x_2764_ = l_Repr_addAppParen(v___x_2763_, v_prec_2726_);
return v___x_2764_;
}
}
case 3:
{
lean_object* v_h_2769_; lean_object* v___y_2771_; lean_object* v___x_2779_; uint8_t v___x_2780_; 
v_h_2769_ = lean_ctor_get(v_x_2725_, 0);
lean_inc(v_h_2769_);
lean_dec_ref_known(v_x_2725_, 1);
v___x_2779_ = lean_unsigned_to_nat(1024u);
v___x_2780_ = lean_nat_dec_le(v___x_2779_, v_prec_2726_);
if (v___x_2780_ == 0)
{
lean_object* v___x_2781_; 
v___x_2781_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2771_ = v___x_2781_;
goto v___jp_2770_;
}
else
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2771_ = v___x_2782_;
goto v___jp_2770_;
}
v___jp_2770_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; uint8_t v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2772_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__11));
v___x_2773_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_h_2769_);
v___x_2774_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2772_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
lean_inc(v___y_2771_);
v___x_2775_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___y_2771_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = 0;
v___x_2777_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*1, v___x_2776_);
v___x_2778_ = l_Repr_addAppParen(v___x_2777_, v_prec_2726_);
return v___x_2778_;
}
}
default: 
{
lean_object* v_name_2783_; lean_object* v___y_2785_; lean_object* v___x_2793_; uint8_t v___x_2794_; 
v_name_2783_ = lean_ctor_get(v_x_2725_, 0);
lean_inc(v_name_2783_);
lean_dec_ref_known(v_x_2725_, 1);
v___x_2793_ = lean_unsigned_to_nat(1024u);
v___x_2794_ = lean_nat_dec_le(v___x_2793_, v_prec_2726_);
if (v___x_2794_ == 0)
{
lean_object* v___x_2795_; 
v___x_2795_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__5);
v___y_2785_ = v___x_2795_;
goto v___jp_2784_;
}
else
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_obj_once(&l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6, &l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6_once, _init_l_Lean_Parser_Tactic_instReprMCasesPat_repr___closed__6);
v___y_2785_ = v___x_2796_;
goto v___jp_2784_;
}
v___jp_2784_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; uint8_t v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2786_ = ((lean_object*)(l_Lean_Parser_Tactic_instReprMRefinePat_repr___closed__14));
v___x_2787_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_name_2783_);
v___x_2788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2786_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
lean_inc(v___y_2785_);
v___x_2789_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___y_2785_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
v___x_2790_ = 0;
v___x_2791_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2791_, 0, v___x_2789_);
lean_ctor_set_uint8(v___x_2791_, sizeof(void*)*1, v___x_2790_);
v___x_2792_ = l_Repr_addAppParen(v___x_2791_, v_prec_2726_);
return v___x_2792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0_spec__0___lam__0(lean_object* v___y_2797_){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = lean_unsigned_to_nat(0u);
v___x_2799_ = l_Lean_Parser_Tactic_instReprMRefinePat_repr(v___y_2797_, v___x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_instReprMRefinePat_repr___boxed(lean_object* v_x_2800_, lean_object* v_prec_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_Lean_Parser_Tactic_instReprMRefinePat_repr(v_x_2800_, v_prec_2801_);
lean_dec(v_prec_2801_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0(lean_object* v_a_2803_, lean_object* v_n_2804_){
_start:
{
lean_object* v___x_2805_; 
v___x_2805_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___redArg(v_a_2803_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0___boxed(lean_object* v_a_2806_, lean_object* v_n_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_List_repr___at___00Lean_Parser_Tactic_instReprMRefinePat_repr_spec__0(v_a_2806_, v_n_2807_);
lean_dec(v_n_2807_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0(size_t v_sz_2815_, size_t v_i_2816_, lean_object* v_bs_2817_){
_start:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_usize_dec_lt(v_i_2816_, v_sz_2815_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; 
v___x_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2819_, 0, v_bs_2817_);
return v___x_2819_;
}
else
{
lean_object* v_v_2820_; lean_object* v___x_2821_; lean_object* v_bs_x27_2822_; size_t v___x_2823_; size_t v___x_2824_; lean_object* v___x_2825_; 
v_v_2820_ = lean_array_uget(v_bs_2817_, v_i_2816_);
v___x_2821_ = lean_unsigned_to_nat(0u);
v_bs_x27_2822_ = lean_array_uset(v_bs_2817_, v_i_2816_, v___x_2821_);
v___x_2823_ = ((size_t)1ULL);
v___x_2824_ = lean_usize_add(v_i_2816_, v___x_2823_);
v___x_2825_ = lean_array_uset(v_bs_x27_2822_, v_i_2816_, v_v_2820_);
v_i_2816_ = v___x_2824_;
v_bs_2817_ = v___x_2825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0___boxed(lean_object* v_sz_2827_, lean_object* v_i_2828_, lean_object* v_bs_2829_){
_start:
{
size_t v_sz_boxed_2830_; size_t v_i_boxed_2831_; lean_object* v_res_2832_; 
v_sz_boxed_2830_ = lean_unbox_usize(v_sz_2827_);
lean_dec(v_sz_2827_);
v_i_boxed_2831_ = lean_unbox_usize(v_i_2828_);
lean_dec(v_i_2828_);
v_res_2832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0(v_sz_boxed_2830_, v_i_boxed_2831_, v_bs_2829_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse_go(lean_object* v_a_2833_){
_start:
{
lean_object* v___y_2835_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v___x_2860_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat___00__closed__1));
lean_inc(v_a_2833_);
v___x_2861_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; uint8_t v___x_2863_; 
v___x_2862_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x3f___00__closed__1));
lean_inc(v_a_2833_);
v___x_2863_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2862_);
if (v___x_2863_ == 0)
{
lean_object* v___x_2864_; uint8_t v___x_2865_; 
v___x_2864_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u27e8___u27e9___closed__1));
lean_inc(v_a_2833_);
v___x_2865_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2864_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; uint8_t v___x_2867_; 
v___x_2866_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u231c___u231d___closed__1));
lean_inc(v_a_2833_);
v___x_2867_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2866_);
if (v___x_2867_ == 0)
{
lean_object* v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_u25a1___00__closed__1));
lean_inc(v_a_2833_);
v___x_2869_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2868_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; uint8_t v___x_2871_; 
v___x_2870_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePat_x28___x29___closed__1));
lean_inc(v_a_2833_);
v___x_2871_ = l_Lean_Syntax_isOfKind(v_a_2833_, v___x_2870_);
if (v___x_2871_ == 0)
{
lean_object* v___x_2872_; 
lean_dec(v_a_2833_);
v___x_2872_ = lean_box(0);
return v___x_2872_;
}
else
{
lean_object* v___x_2873_; lean_object* v_pat_2874_; 
v___x_2873_ = lean_unsigned_to_nat(1u);
v_pat_2874_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2873_);
lean_dec(v_a_2833_);
v_a_2833_ = v_pat_2874_;
goto _start;
}
}
else
{
lean_object* v___x_2876_; lean_object* v_h_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2876_ = lean_unsigned_to_nat(1u);
v_h_2877_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2876_);
lean_dec(v_a_2833_);
v___x_2878_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2878_, 0, v_h_2877_);
v___x_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2878_);
return v___x_2879_;
}
}
else
{
lean_object* v___x_2880_; lean_object* v_h_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2880_ = lean_unsigned_to_nat(1u);
v_h_2881_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2880_);
lean_dec(v_a_2833_);
v___x_2882_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2882_, 0, v_h_2881_);
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; uint8_t v___x_2887_; 
v___x_2884_ = lean_unsigned_to_nat(1u);
v___x_2885_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2884_);
lean_dec(v_a_2833_);
v___x_2886_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefinePats___closed__1));
lean_inc(v___x_2885_);
v___x_2887_ = l_Lean_Syntax_isOfKind(v___x_2885_, v___x_2886_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; 
lean_dec(v___x_2885_);
v___x_2888_ = lean_box(0);
return v___x_2888_;
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2889_ = lean_unsigned_to_nat(0u);
v___x_2890_ = l_Lean_Syntax_getArg(v___x_2885_, v___x_2889_);
lean_dec(v___x_2885_);
v___x_2891_ = l_Lean_Syntax_getArgs(v___x_2890_);
lean_dec(v___x_2890_);
v___x_2892_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0));
v___x_2893_ = lean_array_get_size(v___x_2891_);
v___x_2894_ = lean_nat_dec_lt(v___x_2889_, v___x_2893_);
if (v___x_2894_ == 0)
{
lean_dec_ref(v___x_2891_);
v___y_2835_ = v___x_2892_;
goto v___jp_2834_;
}
else
{
lean_object* v___x_2895_; lean_object* v___x_2896_; size_t v___x_2897_; size_t v___x_2898_; lean_object* v___x_2899_; lean_object* v_snd_2900_; 
v___x_2895_ = lean_box(v___x_2894_);
v___x_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
lean_ctor_set(v___x_2896_, 1, v___x_2892_);
v___x_2897_ = ((size_t)0ULL);
v___x_2898_ = lean_usize_of_nat(v___x_2893_);
v___x_2899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_MCasesPat_parse_go_spec__2(v___x_2887_, v___x_2863_, v___x_2891_, v___x_2897_, v___x_2898_, v___x_2896_);
lean_dec_ref(v___x_2891_);
v_snd_2900_ = lean_ctor_get(v___x_2899_, 1);
lean_inc(v_snd_2900_);
lean_dec_ref(v___x_2899_);
v___y_2835_ = v_snd_2900_;
goto v___jp_2834_;
}
}
}
}
else
{
lean_object* v___x_2901_; lean_object* v_name_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2901_ = lean_unsigned_to_nat(1u);
v_name_2902_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2901_);
lean_dec(v_a_2833_);
v___x_2903_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_name_2902_);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
else
{
lean_object* v___x_2905_; lean_object* v_name_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; 
v___x_2905_ = lean_unsigned_to_nat(0u);
v_name_2906_ = l_Lean_Syntax_getArg(v_a_2833_, v___x_2905_);
lean_dec(v_a_2833_);
v___x_2907_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3));
lean_inc(v_name_2906_);
v___x_2908_ = l_Lean_Syntax_isOfKind(v_name_2906_, v___x_2907_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; 
lean_dec(v_name_2906_);
v___x_2909_ = lean_box(0);
return v___x_2909_;
}
else
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_name_2906_);
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
return v___x_2911_;
}
}
v___jp_2834_:
{
size_t v_sz_2836_; size_t v___x_2837_; lean_object* v___x_2838_; 
v_sz_2836_ = lean_array_size(v___y_2835_);
v___x_2837_ = ((size_t)0ULL);
v___x_2838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__0(v_sz_2836_, v___x_2837_, v___y_2835_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_box(0);
return v___x_2839_;
}
else
{
lean_object* v_val_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2859_; 
v_val_2840_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2842_ = v___x_2838_;
v_isShared_2843_ = v_isSharedCheck_2859_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_val_2840_);
lean_dec(v___x_2838_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2859_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
size_t v_sz_2844_; lean_object* v___x_2845_; 
v_sz_2844_ = lean_array_size(v_val_2840_);
v___x_2845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1(v_sz_2844_, v___x_2837_, v_val_2840_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v___x_2846_; 
lean_del_object(v___x_2842_);
v___x_2846_ = lean_box(0);
return v___x_2846_;
}
else
{
lean_object* v_val_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2858_; 
v_val_2847_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2849_ = v___x_2845_;
v_isShared_2850_ = v_isSharedCheck_2858_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_val_2847_);
lean_dec(v___x_2845_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2858_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2851_; lean_object* v___x_2853_; 
v___x_2851_ = lean_array_to_list(v_val_2847_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v___x_2851_);
v___x_2853_ = v___x_2842_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2851_);
v___x_2853_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
lean_object* v___x_2855_; 
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 0, v___x_2853_);
v___x_2855_ = v___x_2849_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2853_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1(size_t v_sz_2912_, size_t v_i_2913_, lean_object* v_bs_2914_){
_start:
{
uint8_t v___x_2915_; 
v___x_2915_ = lean_usize_dec_lt(v_i_2913_, v_sz_2912_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2916_, 0, v_bs_2914_);
return v___x_2916_;
}
else
{
lean_object* v_v_2917_; lean_object* v___x_2918_; 
v_v_2917_ = lean_array_uget_borrowed(v_bs_2914_, v_i_2913_);
lean_inc(v_v_2917_);
v___x_2918_ = l_Lean_Parser_Tactic_MRefinePat_parse_go(v_v_2917_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v___x_2919_; 
lean_dec_ref(v_bs_2914_);
v___x_2919_ = lean_box(0);
return v___x_2919_;
}
else
{
lean_object* v_val_2920_; lean_object* v___x_2921_; lean_object* v_bs_x27_2922_; size_t v___x_2923_; size_t v___x_2924_; lean_object* v___x_2925_; 
v_val_2920_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_val_2920_);
lean_dec_ref_known(v___x_2918_, 1);
v___x_2921_ = lean_unsigned_to_nat(0u);
v_bs_x27_2922_ = lean_array_uset(v_bs_2914_, v_i_2913_, v___x_2921_);
v___x_2923_ = ((size_t)1ULL);
v___x_2924_ = lean_usize_add(v_i_2913_, v___x_2923_);
v___x_2925_ = lean_array_uset(v_bs_x27_2922_, v_i_2913_, v_val_2920_);
v_i_2913_ = v___x_2924_;
v_bs_2914_ = v___x_2925_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1___boxed(lean_object* v_sz_2927_, lean_object* v_i_2928_, lean_object* v_bs_2929_){
_start:
{
size_t v_sz_boxed_2930_; size_t v_i_boxed_2931_; lean_object* v_res_2932_; 
v_sz_boxed_2930_ = lean_unbox_usize(v_sz_2927_);
lean_dec(v_sz_2927_);
v_i_boxed_2931_ = lean_unbox_usize(v_i_2928_);
lean_dec(v_i_2928_);
v_res_2932_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic_MRefinePat_parse_go_spec__1(v_sz_boxed_2930_, v_i_boxed_2931_, v_bs_2929_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse(lean_object* v_pat_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v___f_2936_; lean_object* v___x_2937_; 
v___f_2936_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse___closed__0));
lean_inc_ref(v_a_2934_);
v___x_2937_ = l_Lean_expandMacros(v_pat_2933_, v___f_2936_, v_a_2934_, v_a_2935_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v_a_2938_; lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2949_; 
v_a_2938_ = lean_ctor_get(v___x_2937_, 0);
v_a_2939_ = lean_ctor_get(v___x_2937_, 1);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2941_ = v___x_2937_;
v_isShared_2942_ = v_isSharedCheck_2949_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_inc(v_a_2938_);
lean_dec(v___x_2937_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2949_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; 
v___x_2943_ = l_Lean_Parser_Tactic_MRefinePat_parse_go(v_a_2938_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v___x_2944_; 
lean_del_object(v___x_2941_);
v___x_2944_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2939_);
return v___x_2944_;
}
else
{
lean_object* v_val_2945_; lean_object* v___x_2947_; 
v_val_2945_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_val_2945_);
lean_dec_ref_known(v___x_2943_, 1);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v_val_2945_);
v___x_2947_ = v___x_2941_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_val_2945_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_a_2939_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
v_a_2950_ = lean_ctor_get(v___x_2937_, 0);
v_a_2951_ = lean_ctor_get(v___x_2937_, 1);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2937_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_inc(v_a_2950_);
lean_dec(v___x_2937_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2950_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_MRefinePat_parse___boxed(lean_object* v_pat_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Lean_Parser_Tactic_MRefinePat_parse(v_pat_2959_, v_a_2960_, v_a_2961_);
lean_dec_ref(v_a_2960_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1(lean_object* v_x_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v___x_2996_; uint8_t v___x_2997_; 
v___x_2996_ = ((lean_object*)(l_Lean_Parser_Tactic_mrefineError___closed__1));
v___x_2997_ = l_Lean_Syntax_isOfKind(v_x_2993_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_box(1);
v___x_2999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2998_);
lean_ctor_set(v___x_2999_, 1, v_a_2995_);
return v___x_2999_;
}
else
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___closed__0));
v___x_3001_ = l_Lean_Macro_throwError___redArg(v___x_3000_, v_a_2994_, v_a_2995_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
v_a_3003_ = lean_ctor_get(v___x_3001_, 1);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_3001_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_inc(v_a_3002_);
lean_dec(v___x_3001_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3002_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
else
{
lean_object* v_a_3011_; lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
v_a_3011_ = lean_ctor_get(v___x_3001_, 0);
v_a_3012_ = lean_ctor_get(v___x_3001_, 1);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_3001_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_inc(v_a_3011_);
lean_dec(v___x_3001_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3011_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1___boxed(lean_object* v_x_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrefineError__1(v_x_3020_, v_a_3021_, v_a_3022_);
lean_dec_ref(v_a_3021_);
return v_res_3023_;
}
}
static lean_object* _init_l_Lean_Parser_Category_mintroPat(void){
_start:
{
lean_object* v___x_3053_; 
v___x_3053_ = lean_box(0);
return v___x_3053_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3074_ = l_Lean_binderIdent;
v___x_3075_ = ((lean_object*)(l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__3));
v___x_3076_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3077_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v___x_3075_);
lean_ctor_set(v___x_3077_, 2, v___x_3074_);
return v___x_3077_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5(void){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3078_ = lean_obj_once(&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4, &l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4_once, _init_l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__4);
v___x_3079_ = lean_unsigned_to_nat(1022u);
v___x_3080_ = ((lean_object*)(l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__1));
v___x_3081_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
lean_ctor_set(v___x_3081_, 1, v___x_3079_);
lean_ctor_set(v___x_3081_, 2, v___x_3078_);
return v___x_3081_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mintroPat_u2200__(void){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_obj_once(&l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5, &l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5_once, _init_l_Lean_Parser_Tactic_mintroPat_u2200___00__closed__5);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1(lean_object* v_x_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_){
_start:
{
lean_object* v___x_3123_; uint8_t v___x_3124_; 
v___x_3123_ = ((lean_object*)(l_Lean_Parser_Tactic_mintroError___closed__1));
v___x_3124_ = l_Lean_Syntax_isOfKind(v_x_3120_, v___x_3123_);
if (v___x_3124_ == 0)
{
lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3125_ = lean_box(1);
v___x_3126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
lean_ctor_set(v___x_3126_, 1, v_a_3122_);
return v___x_3126_;
}
else
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___closed__0));
v___x_3128_ = l_Lean_Macro_throwError___redArg(v___x_3127_, v_a_3121_, v_a_3122_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
v_a_3130_ = lean_ctor_get(v___x_3128_, 1);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3128_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_inc(v_a_3129_);
lean_dec(v___x_3128_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3129_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3146_; 
v_a_3138_ = lean_ctor_get(v___x_3128_, 0);
v_a_3139_ = lean_ctor_get(v___x_3128_, 1);
v_isSharedCheck_3146_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3141_ = v___x_3128_;
v_isShared_3142_ = v_isSharedCheck_3146_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_inc(v_a_3138_);
lean_dec(v___x_3128_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3146_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3144_; 
if (v_isShared_3142_ == 0)
{
v___x_3144_ = v___x_3141_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_a_3138_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v_a_3139_);
v___x_3144_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
return v___x_3144_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1___boxed(lean_object* v_x_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintroError__1(v_x_3147_, v_a_3148_, v_a_3149_);
lean_dec_ref(v_a_3148_);
return v_res_3150_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3(void){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3158_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__2));
v___x_3159_ = l_String_toRawSubstring_x27(v___x_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1(lean_object* v_x_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; 
v___x_3167_ = ((lean_object*)(l_Lean_Parser_Tactic_mintro___closed__0));
v___x_3168_ = ((lean_object*)(l_Lean_Parser_Tactic_mintro___closed__1));
lean_inc(v_x_3164_);
v___x_3169_ = l_Lean_Syntax_isOfKind(v_x_3164_, v___x_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
lean_dec(v_x_3164_);
v___x_3170_ = lean_box(1);
v___x_3171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
lean_ctor_set(v___x_3171_, 1, v_a_3166_);
return v___x_3171_;
}
else
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; uint8_t v___x_3177_; 
v___x_3172_ = lean_unsigned_to_nat(0u);
v___x_3173_ = lean_unsigned_to_nat(1u);
v___x_3174_ = l_Lean_Syntax_getArg(v_x_3164_, v___x_3173_);
lean_dec(v_x_3164_);
v___x_3175_ = lean_unsigned_to_nat(2u);
v___x_3176_ = l_Lean_Syntax_getNumArgs(v___x_3174_);
v___x_3177_ = lean_nat_dec_le(v___x_3175_, v___x_3176_);
if (v___x_3177_ == 0)
{
uint8_t v___x_3178_; 
lean_dec(v___x_3176_);
lean_inc(v___x_3174_);
v___x_3178_ = l_Lean_Syntax_matchesNull(v___x_3174_, v___x_3173_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
lean_dec(v___x_3174_);
v___x_3179_ = lean_box(1);
v___x_3180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3179_);
lean_ctor_set(v___x_3180_, 1, v_a_3166_);
return v___x_3180_;
}
else
{
lean_object* v___x_3181_; lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3181_ = l_Lean_Syntax_getArg(v___x_3174_, v___x_3172_);
lean_dec(v___x_3174_);
v___x_3182_ = ((lean_object*)(l_Lean_Parser_Tactic_mintroPat___00__closed__1));
lean_inc(v___x_3181_);
v___x_3183_ = l_Lean_Syntax_isOfKind(v___x_3181_, v___x_3182_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; 
lean_dec(v___x_3181_);
v___x_3184_ = l_Lean_Macro_throwUnsupported___redArg(v_a_3166_);
return v___x_3184_;
}
else
{
lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
v___x_3185_ = l_Lean_Syntax_getArg(v___x_3181_, v___x_3172_);
lean_dec(v___x_3181_);
v___x_3186_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPat___00__closed__1));
lean_inc(v___x_3185_);
v___x_3187_ = l_Lean_Syntax_isOfKind(v___x_3185_, v___x_3186_);
if (v___x_3187_ == 0)
{
lean_object* v_quotContext_3188_; lean_object* v_currMacroScope_3189_; lean_object* v_ref_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v_quotContext_3188_ = lean_ctor_get(v_a_3165_, 1);
v_currMacroScope_3189_ = lean_ctor_get(v_a_3165_, 2);
v_ref_3190_ = lean_ctor_get(v_a_3165_, 5);
v___x_3191_ = l_Lean_SourceInfo_fromRef(v_ref_3190_, v___x_3187_);
v___x_3192_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1));
v___x_3193_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
lean_inc_n(v___x_3191_, 12);
v___x_3194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3191_);
lean_ctor_set(v___x_3194_, 1, v___x_3167_);
v___x_3195_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3));
v___x_3196_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3);
v___x_3197_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__4));
lean_inc(v_currMacroScope_3189_);
lean_inc(v_quotContext_3188_);
v___x_3198_ = l_Lean_addMacroScope(v_quotContext_3188_, v___x_3197_, v_currMacroScope_3189_);
v___x_3199_ = lean_box(0);
v___x_3200_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3191_);
lean_ctor_set(v___x_3200_, 1, v___x_3196_);
lean_ctor_set(v___x_3200_, 2, v___x_3198_);
lean_ctor_set(v___x_3200_, 3, v___x_3199_);
lean_inc_ref(v___x_3200_);
v___x_3201_ = l_Lean_Syntax_node1(v___x_3191_, v___x_3195_, v___x_3200_);
v___x_3202_ = l_Lean_Syntax_node1(v___x_3191_, v___x_3186_, v___x_3201_);
v___x_3203_ = l_Lean_Syntax_node1(v___x_3191_, v___x_3182_, v___x_3202_);
v___x_3204_ = l_Lean_Syntax_node1(v___x_3191_, v___x_3193_, v___x_3203_);
v___x_3205_ = l_Lean_Syntax_node2(v___x_3191_, v___x_3168_, v___x_3194_, v___x_3204_);
v___x_3206_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3207_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3191_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = ((lean_object*)(l_Lean_Parser_Tactic_mcases___closed__0));
v___x_3209_ = ((lean_object*)(l_Lean_Parser_Tactic_mcases___closed__1));
v___x_3210_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3191_);
lean_ctor_set(v___x_3210_, 1, v___x_3208_);
v___x_3211_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__6));
v___x_3212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3191_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = l_Lean_Syntax_node4(v___x_3191_, v___x_3209_, v___x_3210_, v___x_3200_, v___x_3212_, v___x_3185_);
v___x_3214_ = l_Lean_Syntax_node3(v___x_3191_, v___x_3193_, v___x_3205_, v___x_3207_, v___x_3213_);
v___x_3215_ = l_Lean_Syntax_node1(v___x_3191_, v___x_3192_, v___x_3214_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
lean_ctor_set(v___x_3216_, 1, v_a_3166_);
return v___x_3216_;
}
else
{
lean_object* v___x_3217_; lean_object* v___x_3218_; uint8_t v___x_3219_; 
v___x_3217_ = l_Lean_Syntax_getArg(v___x_3185_, v___x_3172_);
v___x_3218_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__3));
v___x_3219_ = l_Lean_Syntax_isOfKind(v___x_3217_, v___x_3218_);
if (v___x_3219_ == 0)
{
lean_object* v_quotContext_3220_; lean_object* v_currMacroScope_3221_; lean_object* v_ref_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v_quotContext_3220_ = lean_ctor_get(v_a_3165_, 1);
v_currMacroScope_3221_ = lean_ctor_get(v_a_3165_, 2);
v_ref_3222_ = lean_ctor_get(v_a_3165_, 5);
v___x_3223_ = l_Lean_SourceInfo_fromRef(v_ref_3222_, v___x_3219_);
v___x_3224_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1));
v___x_3225_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
lean_inc_n(v___x_3223_, 12);
v___x_3226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3223_);
lean_ctor_set(v___x_3226_, 1, v___x_3167_);
v___x_3227_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__3);
v___x_3228_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__4));
lean_inc(v_currMacroScope_3221_);
lean_inc(v_quotContext_3220_);
v___x_3229_ = l_Lean_addMacroScope(v_quotContext_3220_, v___x_3228_, v_currMacroScope_3221_);
v___x_3230_ = lean_box(0);
v___x_3231_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3223_);
lean_ctor_set(v___x_3231_, 1, v___x_3227_);
lean_ctor_set(v___x_3231_, 2, v___x_3229_);
lean_ctor_set(v___x_3231_, 3, v___x_3230_);
lean_inc_ref(v___x_3231_);
v___x_3232_ = l_Lean_Syntax_node1(v___x_3223_, v___x_3218_, v___x_3231_);
v___x_3233_ = l_Lean_Syntax_node1(v___x_3223_, v___x_3186_, v___x_3232_);
v___x_3234_ = l_Lean_Syntax_node1(v___x_3223_, v___x_3182_, v___x_3233_);
v___x_3235_ = l_Lean_Syntax_node1(v___x_3223_, v___x_3225_, v___x_3234_);
v___x_3236_ = l_Lean_Syntax_node2(v___x_3223_, v___x_3168_, v___x_3226_, v___x_3235_);
v___x_3237_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3223_);
lean_ctor_set(v___x_3238_, 1, v___x_3237_);
v___x_3239_ = ((lean_object*)(l_Lean_Parser_Tactic_mcases___closed__0));
v___x_3240_ = ((lean_object*)(l_Lean_Parser_Tactic_mcases___closed__1));
v___x_3241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3223_);
lean_ctor_set(v___x_3241_, 1, v___x_3239_);
v___x_3242_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__6));
v___x_3243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3223_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = l_Lean_Syntax_node4(v___x_3223_, v___x_3240_, v___x_3241_, v___x_3231_, v___x_3243_, v___x_3185_);
v___x_3245_ = l_Lean_Syntax_node3(v___x_3223_, v___x_3225_, v___x_3236_, v___x_3238_, v___x_3244_);
v___x_3246_ = l_Lean_Syntax_node1(v___x_3223_, v___x_3224_, v___x_3245_);
v___x_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3246_);
lean_ctor_set(v___x_3247_, 1, v_a_3166_);
return v___x_3247_;
}
else
{
lean_object* v___x_3248_; 
lean_dec(v___x_3185_);
v___x_3248_ = l_Lean_Macro_throwUnsupported___redArg(v_a_3166_);
return v___x_3248_;
}
}
}
}
}
else
{
lean_object* v_ref_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v_pats_3257_; uint8_t v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v_ref_3249_ = lean_ctor_get(v_a_3165_, 5);
v___x_3250_ = l_Lean_Syntax_getArg(v___x_3174_, v___x_3172_);
v___x_3251_ = l_Lean_Syntax_getArg(v___x_3174_, v___x_3173_);
v___x_3252_ = l_Lean_Syntax_getArgs(v___x_3174_);
lean_dec(v___x_3174_);
v___x_3253_ = l_Array_extract___redArg(v___x_3252_, v___x_3175_, v___x_3176_);
lean_dec_ref(v___x_3252_);
v___x_3254_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_3255_ = lean_box(2);
v___x_3256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
lean_ctor_set(v___x_3256_, 1, v___x_3254_);
lean_ctor_set(v___x_3256_, 2, v___x_3253_);
v_pats_3257_ = l_Lean_Syntax_getArgs(v___x_3256_);
lean_dec_ref_known(v___x_3256_, 3);
v___x_3258_ = 0;
v___x_3259_ = l_Lean_SourceInfo_fromRef(v_ref_3249_, v___x_3258_);
v___x_3260_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1));
lean_inc_n(v___x_3259_, 7);
v___x_3261_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3259_);
lean_ctor_set(v___x_3261_, 1, v___x_3167_);
v___x_3262_ = l_Lean_Syntax_node1(v___x_3259_, v___x_3254_, v___x_3250_);
lean_inc_ref(v___x_3261_);
v___x_3263_ = l_Lean_Syntax_node2(v___x_3259_, v___x_3168_, v___x_3261_, v___x_3262_);
v___x_3264_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3265_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3259_);
lean_ctor_set(v___x_3265_, 1, v___x_3264_);
v___x_3266_ = l_Array_mkArray1___redArg(v___x_3251_);
v___x_3267_ = l_Array_append___redArg(v___x_3266_, v_pats_3257_);
lean_dec_ref(v_pats_3257_);
v___x_3268_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3259_);
lean_ctor_set(v___x_3268_, 1, v___x_3254_);
lean_ctor_set(v___x_3268_, 2, v___x_3267_);
v___x_3269_ = l_Lean_Syntax_node2(v___x_3259_, v___x_3168_, v___x_3261_, v___x_3268_);
v___x_3270_ = l_Lean_Syntax_node3(v___x_3259_, v___x_3254_, v___x_3263_, v___x_3265_, v___x_3269_);
v___x_3271_ = l_Lean_Syntax_node1(v___x_3259_, v___x_3260_, v___x_3270_);
v___x_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
lean_ctor_set(v___x_3272_, 1, v_a_3166_);
return v___x_3272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___boxed(lean_object* v_x_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1(v_x_3273_, v_a_3274_, v_a_3275_);
lean_dec_ref(v_a_3274_);
return v_res_3276_;
}
}
static lean_object* _init_l_Lean_Parser_Category_mrevertPat(void){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = lean_box(0);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1(lean_object* v_x_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_){
_start:
{
lean_object* v___x_3381_; uint8_t v___x_3382_; 
v___x_3381_ = ((lean_object*)(l_Lean_Parser_Tactic_mrevertError___closed__1));
v___x_3382_ = l_Lean_Syntax_isOfKind(v_x_3378_, v___x_3381_);
if (v___x_3382_ == 0)
{
lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3383_ = lean_box(1);
v___x_3384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
lean_ctor_set(v___x_3384_, 1, v_a_3380_);
return v___x_3384_;
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___closed__0));
v___x_3386_ = l_Lean_Macro_throwError___redArg(v___x_3385_, v_a_3379_, v_a_3380_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3395_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_a_3388_ = lean_ctor_get(v___x_3386_, 1);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3390_ = v___x_3386_;
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v___x_3393_; 
if (v_isShared_3391_ == 0)
{
v___x_3393_ = v___x_3390_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3387_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_a_3388_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
else
{
lean_object* v_a_3396_; lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3396_ = lean_ctor_get(v___x_3386_, 0);
v_a_3397_ = lean_ctor_get(v___x_3386_, 1);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3386_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_inc(v_a_3396_);
lean_dec(v___x_3386_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3396_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1___boxed(lean_object* v_x_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevertError__1(v_x_3405_, v_a_3406_, v_a_3407_);
lean_dec_ref(v_a_3406_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevert__1(lean_object* v_x_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; uint8_t v___x_3414_; 
v___x_3412_ = ((lean_object*)(l_Lean_Parser_Tactic_mrevert___closed__0));
v___x_3413_ = ((lean_object*)(l_Lean_Parser_Tactic_mrevert___closed__1));
lean_inc(v_x_3409_);
v___x_3414_ = l_Lean_Syntax_isOfKind(v_x_3409_, v___x_3413_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
lean_dec(v_x_3409_);
v___x_3415_ = lean_box(1);
v___x_3416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
lean_ctor_set(v___x_3416_, 1, v_a_3411_);
return v___x_3416_;
}
else
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3417_ = lean_unsigned_to_nat(1u);
v___x_3418_ = l_Lean_Syntax_getArg(v_x_3409_, v___x_3417_);
lean_dec(v_x_3409_);
v___x_3419_ = lean_unsigned_to_nat(2u);
v___x_3420_ = l_Lean_Syntax_getNumArgs(v___x_3418_);
v___x_3421_ = lean_nat_dec_le(v___x_3419_, v___x_3420_);
if (v___x_3421_ == 0)
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
lean_dec(v___x_3420_);
lean_dec(v___x_3418_);
v___x_3422_ = lean_box(1);
v___x_3423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
lean_ctor_set(v___x_3423_, 1, v_a_3411_);
return v___x_3423_;
}
else
{
lean_object* v_ref_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v_pats_3433_; uint8_t v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v_ref_3424_ = lean_ctor_get(v_a_3410_, 5);
v___x_3425_ = lean_unsigned_to_nat(0u);
v___x_3426_ = l_Lean_Syntax_getArg(v___x_3418_, v___x_3425_);
v___x_3427_ = l_Lean_Syntax_getArg(v___x_3418_, v___x_3417_);
v___x_3428_ = l_Lean_Syntax_getArgs(v___x_3418_);
lean_dec(v___x_3418_);
v___x_3429_ = l_Array_extract___redArg(v___x_3428_, v___x_3419_, v___x_3420_);
lean_dec_ref(v___x_3428_);
v___x_3430_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_3431_ = lean_box(2);
v___x_3432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3431_);
lean_ctor_set(v___x_3432_, 1, v___x_3430_);
lean_ctor_set(v___x_3432_, 2, v___x_3429_);
v_pats_3433_ = l_Lean_Syntax_getArgs(v___x_3432_);
lean_dec_ref_known(v___x_3432_, 3);
v___x_3434_ = 0;
v___x_3435_ = l_Lean_SourceInfo_fromRef(v_ref_3424_, v___x_3434_);
v___x_3436_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__1));
lean_inc_n(v___x_3435_, 7);
v___x_3437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3435_);
lean_ctor_set(v___x_3437_, 1, v___x_3412_);
v___x_3438_ = l_Lean_Syntax_node1(v___x_3435_, v___x_3430_, v___x_3426_);
lean_inc_ref(v___x_3437_);
v___x_3439_ = l_Lean_Syntax_node2(v___x_3435_, v___x_3413_, v___x_3437_, v___x_3438_);
v___x_3440_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3441_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3435_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = l_Array_mkArray1___redArg(v___x_3427_);
v___x_3443_ = l_Array_append___redArg(v___x_3442_, v_pats_3433_);
lean_dec_ref(v_pats_3433_);
v___x_3444_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3435_);
lean_ctor_set(v___x_3444_, 1, v___x_3430_);
lean_ctor_set(v___x_3444_, 2, v___x_3443_);
v___x_3445_ = l_Lean_Syntax_node2(v___x_3435_, v___x_3413_, v___x_3437_, v___x_3444_);
v___x_3446_ = l_Lean_Syntax_node3(v___x_3435_, v___x_3430_, v___x_3439_, v___x_3441_, v___x_3445_);
v___x_3447_ = l_Lean_Syntax_node1(v___x_3435_, v___x_3436_, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
lean_ctor_set(v___x_3448_, 1, v_a_3411_);
return v___x_3448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevert__1___boxed(lean_object* v_x_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mrevert__1(v_x_3449_, v_a_3450_, v_a_3451_);
lean_dec_ref(v_a_3450_);
return v_res_3452_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__7));
v___x_3519_ = l_Lean_mkIdent(v___x_3518_);
return v___x_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1(lean_object* v_x_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_){
_start:
{
lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3549_; lean_object* v___x_3592_; uint8_t v___x_3593_; 
v___x_3592_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecNoSimp___closed__1));
lean_inc(v_x_3521_);
v___x_3593_ = l_Lean_Syntax_isOfKind(v_x_3521_, v___x_3592_);
if (v___x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
lean_dec(v_x_3521_);
v___x_3594_ = lean_box(1);
v___x_3595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
lean_ctor_set(v___x_3595_, 1, v_a_3523_);
return v___x_3595_;
}
else
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3596_ = lean_unsigned_to_nat(1u);
v___x_3597_ = l_Lean_Syntax_getArg(v_x_3521_, v___x_3596_);
lean_dec(v_x_3521_);
v___x_3598_ = l_Lean_Syntax_getOptional_x3f(v___x_3597_);
lean_dec(v___x_3597_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v___x_3599_; 
v___x_3599_ = lean_box(0);
v___y_3549_ = v___x_3599_;
goto v___jp_3548_;
}
else
{
lean_object* v_val_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
v_val_3600_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3598_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_val_3600_);
lean_dec(v___x_3598_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_val_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
v___y_3549_ = v___x_3605_;
goto v___jp_3548_;
}
}
}
}
v___jp_3524_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
lean_inc_ref(v___y_3528_);
v___x_3539_ = l_Array_append___redArg(v___y_3528_, v___y_3538_);
lean_dec_ref(v___y_3538_);
lean_inc(v___y_3533_);
lean_inc_n(v___y_3525_, 6);
v___x_3540_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3540_, 0, v___y_3525_);
lean_ctor_set(v___x_3540_, 1, v___y_3533_);
lean_ctor_set(v___x_3540_, 2, v___x_3539_);
v___x_3541_ = l_Lean_Syntax_node2(v___y_3525_, v___y_3529_, v___y_3530_, v___x_3540_);
lean_inc(v___y_3535_);
v___x_3542_ = l_Lean_Syntax_node3(v___y_3525_, v___y_3535_, v___y_3531_, v___y_3526_, v___x_3541_);
v___x_3543_ = l_Lean_Syntax_node1(v___y_3525_, v___y_3533_, v___x_3542_);
v___x_3544_ = l_Lean_Syntax_node1(v___y_3525_, v___y_3537_, v___x_3543_);
v___x_3545_ = l_Lean_Syntax_node1(v___y_3525_, v___y_3536_, v___x_3544_);
v___x_3546_ = l_Lean_Syntax_node3(v___y_3525_, v___y_3527_, v___y_3532_, v___x_3545_, v___y_3534_);
v___x_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
lean_ctor_set(v___x_3547_, 1, v_a_3523_);
return v___x_3547_;
}
v___jp_3548_:
{
lean_object* v_ref_3550_; uint8_t v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v_ref_3550_ = lean_ctor_get(v_a_3522_, 5);
v___x_3551_ = 0;
v___x_3552_ = l_Lean_SourceInfo_fromRef(v_ref_3550_, v___x_3551_);
v___x_3553_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1));
v___x_3554_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2));
lean_inc_n(v___x_3552_, 20);
v___x_3555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3552_);
lean_ctor_set(v___x_3555_, 1, v___x_3554_);
v___x_3556_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4));
v___x_3557_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6));
v___x_3558_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_3559_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__1));
v___x_3560_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10));
v___x_3561_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11));
v___x_3562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3552_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__3));
v___x_3564_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__4));
v___x_3565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3552_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
v___x_3566_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecNoBind___closed__1));
v___x_3567_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecNoBind___closed__2));
v___x_3568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3552_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__8);
v___x_3570_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3558_, v___x_3569_);
lean_inc_ref(v___x_3568_);
v___x_3571_ = l_Lean_Syntax_node2(v___x_3552_, v___x_3566_, v___x_3568_, v___x_3570_);
v___x_3572_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3558_, v___x_3571_);
v___x_3573_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3557_, v___x_3572_);
v___x_3574_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3556_, v___x_3573_);
v___x_3575_ = l_Lean_Syntax_node2(v___x_3552_, v___x_3563_, v___x_3565_, v___x_3574_);
v___x_3576_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3558_, v___x_3575_);
v___x_3577_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3557_, v___x_3576_);
v___x_3578_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3556_, v___x_3577_);
v___x_3579_ = l_Lean_Syntax_node2(v___x_3552_, v___x_3560_, v___x_3562_, v___x_3578_);
v___x_3580_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3558_, v___x_3579_);
v___x_3581_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3557_, v___x_3580_);
v___x_3582_ = l_Lean_Syntax_node1(v___x_3552_, v___x_3556_, v___x_3581_);
v___x_3583_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172));
v___x_3584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3552_);
lean_ctor_set(v___x_3584_, 1, v___x_3583_);
lean_inc_ref(v___x_3584_);
lean_inc_ref(v___x_3555_);
v___x_3585_ = l_Lean_Syntax_node3(v___x_3552_, v___x_3553_, v___x_3555_, v___x_3582_, v___x_3584_);
v___x_3586_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___closed__9));
v___x_3587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3552_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16);
if (lean_obj_tag(v___y_3549_) == 1)
{
lean_object* v_val_3589_; lean_object* v___x_3590_; 
v_val_3589_ = lean_ctor_get(v___y_3549_, 0);
lean_inc(v_val_3589_);
lean_dec_ref_known(v___y_3549_, 1);
v___x_3590_ = l_Array_mkArray1___redArg(v_val_3589_);
v___y_3525_ = v___x_3552_;
v___y_3526_ = v___x_3587_;
v___y_3527_ = v___x_3553_;
v___y_3528_ = v___x_3588_;
v___y_3529_ = v___x_3566_;
v___y_3530_ = v___x_3568_;
v___y_3531_ = v___x_3585_;
v___y_3532_ = v___x_3555_;
v___y_3533_ = v___x_3558_;
v___y_3534_ = v___x_3584_;
v___y_3535_ = v___x_3559_;
v___y_3536_ = v___x_3556_;
v___y_3537_ = v___x_3557_;
v___y_3538_ = v___x_3590_;
goto v___jp_3524_;
}
else
{
lean_object* v___x_3591_; 
lean_dec(v___y_3549_);
v___x_3591_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0));
v___y_3525_ = v___x_3552_;
v___y_3526_ = v___x_3587_;
v___y_3527_ = v___x_3553_;
v___y_3528_ = v___x_3588_;
v___y_3529_ = v___x_3566_;
v___y_3530_ = v___x_3568_;
v___y_3531_ = v___x_3585_;
v___y_3532_ = v___x_3555_;
v___y_3533_ = v___x_3558_;
v___y_3534_ = v___x_3584_;
v___y_3535_ = v___x_3559_;
v___y_3536_ = v___x_3556_;
v___y_3537_ = v___x_3557_;
v___y_3538_ = v___x_3591_;
goto v___jp_3524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1___boxed(lean_object* v_x_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspecNoSimp__1(v_x_3608_, v_a_3609_, v_a_3610_);
lean_dec_ref(v_a_3609_);
return v_res_3611_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__4));
v___x_3644_ = l_Lean_mkIdent(v___x_3643_);
return v___x_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1(lean_object* v_x_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_){
_start:
{
lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3740_; lean_object* v___x_3757_; uint8_t v___x_3758_; 
v___x_3757_ = ((lean_object*)(l_Lean_Parser_Tactic_mspec___closed__1));
lean_inc(v_x_3652_);
v___x_3758_ = l_Lean_Syntax_isOfKind(v_x_3652_, v___x_3757_);
if (v___x_3758_ == 0)
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
lean_dec(v_x_3652_);
v___x_3759_ = lean_box(1);
v___x_3760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
lean_ctor_set(v___x_3760_, 1, v_a_3654_);
return v___x_3760_;
}
else
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3761_ = lean_unsigned_to_nat(1u);
v___x_3762_ = l_Lean_Syntax_getArg(v_x_3652_, v___x_3761_);
lean_dec(v_x_3652_);
v___x_3763_ = l_Lean_Syntax_getOptional_x3f(v___x_3762_);
lean_dec(v___x_3762_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v___x_3764_; 
v___x_3764_ = lean_box(0);
v___y_3740_ = v___x_3764_;
goto v___jp_3739_;
}
else
{
lean_object* v_val_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
v_val_3765_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3763_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_val_3765_);
lean_dec(v___x_3763_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_val_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
v___y_3740_ = v___x_3770_;
goto v___jp_3739_;
}
}
}
}
v___jp_3655_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
lean_inc_ref_n(v___y_3659_, 2);
v___x_3666_ = l_Array_append___redArg(v___y_3659_, v___y_3665_);
lean_dec_ref(v___y_3665_);
lean_inc_n(v___y_3663_, 12);
lean_inc_n(v___y_3660_, 50);
v___x_3667_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3667_, 0, v___y_3660_);
lean_ctor_set(v___x_3667_, 1, v___y_3663_);
lean_ctor_set(v___x_3667_, 2, v___x_3666_);
lean_inc(v___y_3656_);
v___x_3668_ = l_Lean_Syntax_node2(v___y_3660_, v___y_3656_, v___y_3658_, v___x_3667_);
v___x_3669_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3669_, 0, v___y_3660_);
lean_ctor_set(v___x_3669_, 1, v___y_3663_);
lean_ctor_set(v___x_3669_, 2, v___y_3659_);
v___x_3670_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__1));
v___x_3671_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__2));
v___x_3672_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___y_3660_);
lean_ctor_set(v___x_3672_, 1, v___x_3671_);
v___x_3673_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10));
v___x_3674_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11));
v___x_3675_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___y_3660_);
lean_ctor_set(v___x_3675_, 1, v___x_3674_);
v___x_3676_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__12));
v___x_3677_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__13));
v___x_3678_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___y_3660_);
lean_ctor_set(v___x_3678_, 1, v___x_3676_);
v___x_3679_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__15));
lean_inc_ref_n(v___x_3669_, 8);
v___x_3680_ = l_Lean_Syntax_node1(v___y_3660_, v___x_3679_, v___x_3669_);
v___x_3681_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__17));
v___x_3682_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___y_3660_);
lean_ctor_set(v___x_3682_, 1, v___x_3681_);
v___x_3683_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3663_, v___x_3682_);
v___x_3684_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__18));
v___x_3685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___y_3660_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__20));
v___x_3687_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__5);
v___x_3688_ = l_Lean_Syntax_node3(v___y_3660_, v___x_3686_, v___x_3669_, v___x_3669_, v___x_3687_);
v___x_3689_ = ((lean_object*)(l_Lean_Parser_Tactic_mexists___closed__3));
v___x_3690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___y_3660_);
lean_ctor_set(v___x_3690_, 1, v___x_3689_);
v___x_3691_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__29);
v___x_3692_ = l_Lean_Syntax_node3(v___y_3660_, v___x_3686_, v___x_3669_, v___x_3669_, v___x_3691_);
v___x_3693_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3663_, v___x_3688_, v___x_3690_, v___x_3692_);
v___x_3694_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__165));
v___x_3695_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3695_, 0, v___y_3660_);
lean_ctor_set(v___x_3695_, 1, v___x_3694_);
v___x_3696_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3663_, v___x_3685_, v___x_3693_, v___x_3695_);
v___x_3697_ = l_Lean_Syntax_node6(v___y_3660_, v___x_3677_, v___x_3678_, v___x_3680_, v___x_3669_, v___x_3683_, v___x_3696_, v___x_3669_);
v___x_3698_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3663_, v___x_3697_);
lean_inc_n(v___y_3662_, 7);
v___x_3699_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3698_);
lean_inc_n(v___y_3661_, 7);
v___x_3700_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3699_);
lean_inc_ref(v___x_3675_);
v___x_3701_ = l_Lean_Syntax_node2(v___y_3660_, v___x_3673_, v___x_3675_, v___x_3700_);
v___x_3702_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3663_, v___x_3701_);
v___x_3703_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3702_);
v___x_3704_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172));
v___x_3706_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___y_3660_);
lean_ctor_set(v___x_3706_, 1, v___x_3705_);
lean_inc_ref_n(v___x_3706_, 3);
lean_inc_n(v___y_3657_, 3);
lean_inc_n(v___y_3664_, 4);
v___x_3707_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3664_, v___y_3657_, v___x_3704_, v___x_3706_);
v___x_3708_ = ((lean_object*)(l_Lean_Parser_Tactic_mpureIntro___closed__1));
v___x_3709_ = ((lean_object*)(l_Lean_Parser_Tactic_mpureIntro___closed__2));
v___x_3710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___y_3660_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
v___x_3711_ = l_Lean_Syntax_node1(v___y_3660_, v___x_3708_, v___x_3710_);
v___x_3712_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3713_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___y_3660_);
lean_ctor_set(v___x_3713_, 1, v___x_3712_);
v___x_3714_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7));
v___x_3715_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__8));
v___x_3716_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___y_3660_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
v___x_3717_ = l_Lean_Syntax_node1(v___y_3660_, v___x_3714_, v___x_3716_);
v___x_3718_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3663_, v___x_3711_, v___x_3713_, v___x_3717_);
v___x_3719_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3718_);
v___x_3720_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3719_);
v___x_3721_ = l_Lean_Syntax_node2(v___y_3660_, v___x_3673_, v___x_3675_, v___x_3720_);
v___x_3722_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3663_, v___x_3721_);
v___x_3723_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3722_);
v___x_3724_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3723_);
v___x_3725_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3664_, v___y_3657_, v___x_3724_, v___x_3706_);
v___x_3726_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3663_, v___x_3707_, v___x_3669_, v___x_3725_);
v___x_3727_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3726_);
v___x_3728_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3727_);
v___x_3729_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3664_, v___y_3657_, v___x_3728_, v___x_3706_);
v___x_3730_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3663_, v___x_3729_);
v___x_3731_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3730_);
v___x_3732_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3731_);
v___x_3733_ = l_Lean_Syntax_node2(v___y_3660_, v___x_3670_, v___x_3672_, v___x_3732_);
v___x_3734_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3663_, v___x_3668_, v___x_3669_, v___x_3733_);
v___x_3735_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3662_, v___x_3734_);
v___x_3736_ = l_Lean_Syntax_node1(v___y_3660_, v___y_3661_, v___x_3735_);
v___x_3737_ = l_Lean_Syntax_node3(v___y_3660_, v___y_3664_, v___y_3657_, v___x_3736_, v___x_3706_);
v___x_3738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3737_);
lean_ctor_set(v___x_3738_, 1, v_a_3654_);
return v___x_3738_;
}
v___jp_3739_:
{
lean_object* v_ref_3741_; uint8_t v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v_ref_3741_ = lean_ctor_get(v_a_3653_, 5);
v___x_3742_ = 0;
v___x_3743_ = l_Lean_SourceInfo_fromRef(v_ref_3741_, v___x_3742_);
v___x_3744_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1));
v___x_3745_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2));
lean_inc_n(v___x_3743_, 2);
v___x_3746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3743_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4));
v___x_3748_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6));
v___x_3749_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_3750_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecNoSimp___closed__1));
v___x_3751_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecNoSimp___closed__2));
v___x_3752_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3743_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16, &l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16_once, _init_l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__16);
if (lean_obj_tag(v___y_3740_) == 1)
{
lean_object* v_val_3754_; lean_object* v___x_3755_; 
v_val_3754_ = lean_ctor_get(v___y_3740_, 0);
lean_inc(v_val_3754_);
lean_dec_ref_known(v___y_3740_, 1);
v___x_3755_ = l_Array_mkArray1___redArg(v_val_3754_);
v___y_3656_ = v___x_3750_;
v___y_3657_ = v___x_3746_;
v___y_3658_ = v___x_3752_;
v___y_3659_ = v___x_3753_;
v___y_3660_ = v___x_3743_;
v___y_3661_ = v___x_3747_;
v___y_3662_ = v___x_3748_;
v___y_3663_ = v___x_3749_;
v___y_3664_ = v___x_3744_;
v___y_3665_ = v___x_3755_;
goto v___jp_3655_;
}
else
{
lean_object* v___x_3756_; 
lean_dec(v___y_3740_);
v___x_3756_ = ((lean_object*)(l_Lean_Parser_Tactic_MCasesPat_parse_go___closed__0));
v___y_3656_ = v___x_3750_;
v___y_3657_ = v___x_3746_;
v___y_3658_ = v___x_3752_;
v___y_3659_ = v___x_3753_;
v___y_3660_ = v___x_3743_;
v___y_3661_ = v___x_3747_;
v___y_3662_ = v___x_3748_;
v___y_3663_ = v___x_3749_;
v___y_3664_ = v___x_3744_;
v___y_3665_ = v___x_3756_;
goto v___jp_3655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___boxed(lean_object* v_x_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1(v_x_3773_, v_a_3774_, v_a_3775_);
lean_dec_ref(v_a_3774_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1(lean_object* v_x_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_){
_start:
{
lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___x_3820_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticMvcgen__trivial___closed__1));
v___x_3821_ = l_Lean_Syntax_isOfKind(v_x_3817_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3822_ = lean_box(1);
v___x_3823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
lean_ctor_set(v___x_3823_, 1, v_a_3819_);
return v___x_3823_;
}
else
{
lean_object* v_ref_3824_; uint8_t v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v_ref_3824_ = lean_ctor_get(v_a_3818_, 5);
v___x_3825_ = 0;
v___x_3826_ = l_Lean_SourceInfo_fromRef(v_ref_3824_, v___x_3825_);
v___x_3827_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__0));
v___x_3828_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__1));
lean_inc_n(v___x_3826_, 33);
v___x_3829_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3826_);
lean_ctor_set(v___x_3829_, 1, v___x_3827_);
v___x_3830_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__8));
v___x_3831_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__3));
v___x_3832_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___closed__4));
v___x_3833_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3826_);
lean_ctor_set(v___x_3833_, 1, v___x_3832_);
v___x_3834_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__4));
v___x_3835_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__6));
v___x_3836_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__1));
v___x_3837_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__2));
v___x_3838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3826_);
lean_ctor_set(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__10));
v___x_3840_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__11));
v___x_3841_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3826_);
lean_ctor_set(v___x_3841_, 1, v___x_3840_);
v___x_3842_ = ((lean_object*)(l_Lean_Parser_Tactic_mpureIntro___closed__1));
v___x_3843_ = ((lean_object*)(l_Lean_Parser_Tactic_mpureIntro___closed__2));
v___x_3844_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3826_);
lean_ctor_set(v___x_3844_, 1, v___x_3843_);
v___x_3845_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3842_, v___x_3844_);
v___x_3846_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3830_, v___x_3845_);
v___x_3847_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3835_, v___x_3846_);
v___x_3848_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3834_, v___x_3847_);
lean_inc_ref(v___x_3841_);
v___x_3849_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3839_, v___x_3841_, v___x_3848_);
v___x_3850_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3830_, v___x_3849_);
v___x_3851_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3835_, v___x_3850_);
v___x_3852_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3834_, v___x_3851_);
v___x_3853_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mleave__1___closed__172));
v___x_3854_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3826_);
lean_ctor_set(v___x_3854_, 1, v___x_3853_);
v___x_3855_ = l_Lean_Syntax_node3(v___x_3826_, v___x_3836_, v___x_3838_, v___x_3852_, v___x_3854_);
v___x_3856_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mintro__1___closed__5));
v___x_3857_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3826_);
lean_ctor_set(v___x_3857_, 1, v___x_3856_);
v___x_3858_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__7));
v___x_3859_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__mspec__1___closed__8));
v___x_3860_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3826_);
lean_ctor_set(v___x_3860_, 1, v___x_3859_);
v___x_3861_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3858_, v___x_3860_);
v___x_3862_ = l_Lean_Syntax_node3(v___x_3826_, v___x_3830_, v___x_3855_, v___x_3857_, v___x_3861_);
v___x_3863_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3835_, v___x_3862_);
v___x_3864_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3834_, v___x_3863_);
lean_inc_ref(v___x_3833_);
v___x_3865_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3831_, v___x_3833_, v___x_3864_);
v___x_3866_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__1));
v___x_3867_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticMvcgen__trivial__extensible___closed__2));
v___x_3868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3826_);
lean_ctor_set(v___x_3868_, 1, v___x_3867_);
v___x_3869_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3866_, v___x_3868_);
v___x_3870_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3830_, v___x_3869_);
v___x_3871_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3835_, v___x_3870_);
v___x_3872_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3834_, v___x_3871_);
v___x_3873_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3839_, v___x_3841_, v___x_3872_);
v___x_3874_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3830_, v___x_3873_);
v___x_3875_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3835_, v___x_3874_);
v___x_3876_ = l_Lean_Syntax_node1(v___x_3826_, v___x_3834_, v___x_3875_);
v___x_3877_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3831_, v___x_3833_, v___x_3876_);
v___x_3878_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3830_, v___x_3865_, v___x_3877_);
v___x_3879_ = l_Lean_Syntax_node2(v___x_3826_, v___x_3828_, v___x_3829_, v___x_3878_);
v___x_3880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
lean_ctor_set(v___x_3880_, 1, v_a_3819_);
return v___x_3880_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1___boxed(lean_object* v_x_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lean_Parser_Tactic___aux__Std__Tactic__Do__Syntax______macroRules__Lean__Parser__Tactic__tacticMvcgen__trivial__1(v_x_3881_, v_a_3882_, v_a_3883_);
lean_dec_ref(v_a_3882_);
return v_res_3884_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt___closed__4(void){
_start:
{
uint8_t v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3894_ = 0;
v___x_3895_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPatAlts___closed__3));
v___x_3896_ = ((lean_object*)(l_Lean_Parser_Tactic_mcasesPatAlts___closed__2));
v___x_3897_ = l_Lean_Parser_Tactic_caseArg;
v___x_3898_ = lean_alloc_ctor(11, 3, 1);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
lean_ctor_set(v___x_3898_, 1, v___x_3896_);
lean_ctor_set(v___x_3898_, 2, v___x_3895_);
lean_ctor_set_uint8(v___x_3898_, sizeof(void*)*3, v___x_3894_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt___closed__5(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlt___closed__4, &l_Lean_Parser_Tactic_vcAlt___closed__4_once, _init_l_Lean_Parser_Tactic_vcAlt___closed__4);
v___x_3900_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlt___closed__3));
v___x_3901_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3902_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
lean_ctor_set(v___x_3902_, 1, v___x_3900_);
lean_ctor_set(v___x_3902_, 2, v___x_3899_);
return v___x_3902_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt___closed__6(void){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3903_ = ((lean_object*)(l_Lean_Parser_Tactic_mdup___closed__5));
v___x_3904_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlt___closed__5, &l_Lean_Parser_Tactic_vcAlt___closed__5_once, _init_l_Lean_Parser_Tactic_vcAlt___closed__5);
v___x_3905_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3906_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3905_);
lean_ctor_set(v___x_3906_, 1, v___x_3904_);
lean_ctor_set(v___x_3906_, 2, v___x_3903_);
return v___x_3906_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt___closed__9(void){
_start:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3911_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlt___closed__8));
v___x_3912_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlt___closed__6, &l_Lean_Parser_Tactic_vcAlt___closed__6_once, _init_l_Lean_Parser_Tactic_vcAlt___closed__6);
v___x_3913_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3914_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
lean_ctor_set(v___x_3914_, 1, v___x_3912_);
lean_ctor_set(v___x_3914_, 2, v___x_3911_);
return v___x_3914_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt___closed__10(void){
_start:
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3915_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlt___closed__9, &l_Lean_Parser_Tactic_vcAlt___closed__9_once, _init_l_Lean_Parser_Tactic_vcAlt___closed__9);
v___x_3916_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlt___closed__1));
v___x_3917_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlt___closed__0));
v___x_3918_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3918_, 0, v___x_3917_);
lean_ctor_set(v___x_3918_, 1, v___x_3916_);
lean_ctor_set(v___x_3918_, 2, v___x_3915_);
return v___x_3918_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlt(void){
_start:
{
lean_object* v___x_3919_; 
v___x_3919_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlt___closed__10, &l_Lean_Parser_Tactic_vcAlt___closed__10_once, _init_l_Lean_Parser_Tactic_vcAlt___closed__10);
return v___x_3919_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts___closed__15(void){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3954_ = l_Lean_Parser_Tactic_vcAlt;
v___x_3955_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlts___closed__14));
v___x_3956_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3957_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
lean_ctor_set(v___x_3957_, 1, v___x_3955_);
lean_ctor_set(v___x_3957_, 2, v___x_3954_);
return v___x_3957_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts___closed__16(void){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlts___closed__15, &l_Lean_Parser_Tactic_vcAlts___closed__15_once, _init_l_Lean_Parser_Tactic_vcAlts___closed__15);
v___x_3959_ = ((lean_object*)(l_Lean_Parser_Tactic_mspecialize___closed__5));
v___x_3960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
lean_ctor_set(v___x_3960_, 1, v___x_3958_);
return v___x_3960_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts___closed__17(void){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3961_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlts___closed__16, &l_Lean_Parser_Tactic_vcAlts___closed__16_once, _init_l_Lean_Parser_Tactic_vcAlts___closed__16);
v___x_3962_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlts___closed__11));
v___x_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
lean_ctor_set(v___x_3963_, 1, v___x_3961_);
return v___x_3963_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts___closed__18(void){
_start:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3964_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlts___closed__17, &l_Lean_Parser_Tactic_vcAlts___closed__17_once, _init_l_Lean_Parser_Tactic_vcAlts___closed__17);
v___x_3965_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlts___closed__9));
v___x_3966_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3967_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3966_);
lean_ctor_set(v___x_3967_, 1, v___x_3965_);
lean_ctor_set(v___x_3967_, 2, v___x_3964_);
return v___x_3967_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts___closed__19(void){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3968_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlts___closed__18, &l_Lean_Parser_Tactic_vcAlts___closed__18_once, _init_l_Lean_Parser_Tactic_vcAlts___closed__18);
v___x_3969_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlts___closed__1));
v___x_3970_ = ((lean_object*)(l_Lean_Parser_Tactic_vcAlts___closed__0));
v___x_3971_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
lean_ctor_set(v___x_3971_, 1, v___x_3969_);
lean_ctor_set(v___x_3971_, 2, v___x_3968_);
return v___x_3971_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_vcAlts(void){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_obj_once(&l_Lean_Parser_Tactic_vcAlts___closed__19, &l_Lean_Parser_Tactic_vcAlts___closed__19_once, _init_l_Lean_Parser_Tactic_vcAlts___closed__19);
return v___x_3972_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__3(void){
_start:
{
lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; 
v___x_3982_ = l_Lean_Parser_Tactic_optConfig;
v___x_3983_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__2));
v___x_3984_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_3985_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3984_);
lean_ctor_set(v___x_3985_, 1, v___x_3983_);
lean_ctor_set(v___x_3985_, 2, v___x_3982_);
return v___x_3985_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__10(void){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3995_ = l_Lean_Parser_Tactic_simpLemma;
v___x_3996_ = l_Lean_Parser_Tactic_simpErase;
v___x_3997_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__9));
v___x_3998_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
lean_ctor_set(v___x_3998_, 1, v___x_3996_);
lean_ctor_set(v___x_3998_, 2, v___x_3995_);
return v___x_3998_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__11(void){
_start:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_3999_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__10, &l_Lean_Parser_Tactic_mvcgen___closed__10_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__10);
v___x_4000_ = l_Lean_Parser_Tactic_simpStar;
v___x_4001_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__9));
v___x_4002_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4002_, 0, v___x_4001_);
lean_ctor_set(v___x_4002_, 1, v___x_4000_);
lean_ctor_set(v___x_4002_, 2, v___x_3999_);
return v___x_4002_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__12(void){
_start:
{
uint8_t v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_4003_ = 1;
v___x_4004_ = ((lean_object*)(l_Lean_Parser_Tactic_mexists___closed__5));
v___x_4005_ = ((lean_object*)(l_Lean_Parser_Tactic_mexists___closed__3));
v___x_4006_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__11, &l_Lean_Parser_Tactic_mvcgen___closed__11_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__11);
v___x_4007_ = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
lean_ctor_set(v___x_4007_, 1, v___x_4005_);
lean_ctor_set(v___x_4007_, 2, v___x_4004_);
lean_ctor_set_uint8(v___x_4007_, sizeof(void*)*3, v___x_4003_);
return v___x_4007_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__13(void){
_start:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4008_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__12, &l_Lean_Parser_Tactic_mvcgen___closed__12_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__12);
v___x_4009_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__7));
v___x_4010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4009_);
lean_ctor_set(v___x_4010_, 1, v___x_4008_);
return v___x_4010_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__14(void){
_start:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4011_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__13, &l_Lean_Parser_Tactic_mvcgen___closed__13_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__13);
v___x_4012_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__5));
v___x_4013_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4014_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
lean_ctor_set(v___x_4014_, 1, v___x_4012_);
lean_ctor_set(v___x_4014_, 2, v___x_4011_);
return v___x_4014_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__17(void){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4018_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__16));
v___x_4019_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__14, &l_Lean_Parser_Tactic_mvcgen___closed__14_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__14);
v___x_4020_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4021_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4020_);
lean_ctor_set(v___x_4021_, 1, v___x_4019_);
lean_ctor_set(v___x_4021_, 2, v___x_4018_);
return v___x_4021_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__18(void){
_start:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4022_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__17, &l_Lean_Parser_Tactic_mvcgen___closed__17_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__17);
v___x_4023_ = ((lean_object*)(l_Lean_Parser_Tactic_mhave___closed__5));
v___x_4024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
lean_ctor_set(v___x_4024_, 1, v___x_4022_);
return v___x_4024_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__19(void){
_start:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4025_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__18, &l_Lean_Parser_Tactic_mvcgen___closed__18_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__18);
v___x_4026_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__3, &l_Lean_Parser_Tactic_mvcgen___closed__3_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__3);
v___x_4027_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4028_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4027_);
lean_ctor_set(v___x_4028_, 1, v___x_4026_);
lean_ctor_set(v___x_4028_, 2, v___x_4025_);
return v___x_4028_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__20(void){
_start:
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4029_ = l_Lean_Parser_Tactic_invariantAlts;
v___x_4030_ = ((lean_object*)(l_Lean_Parser_Tactic_mhave___closed__5));
v___x_4031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4031_, 0, v___x_4030_);
lean_ctor_set(v___x_4031_, 1, v___x_4029_);
return v___x_4031_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__21(void){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4032_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__20, &l_Lean_Parser_Tactic_mvcgen___closed__20_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__20);
v___x_4033_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__19, &l_Lean_Parser_Tactic_mvcgen___closed__19_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__19);
v___x_4034_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4035_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4034_);
lean_ctor_set(v___x_4035_, 1, v___x_4033_);
lean_ctor_set(v___x_4035_, 2, v___x_4032_);
return v___x_4035_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__22(void){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4036_ = l_Lean_Parser_Tactic_vcAlts;
v___x_4037_ = ((lean_object*)(l_Lean_Parser_Tactic_mhave___closed__5));
v___x_4038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4037_);
lean_ctor_set(v___x_4038_, 1, v___x_4036_);
return v___x_4038_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__23(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4039_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__22, &l_Lean_Parser_Tactic_mvcgen___closed__22_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__22);
v___x_4040_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__21, &l_Lean_Parser_Tactic_mvcgen___closed__21_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__21);
v___x_4041_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4042_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4041_);
lean_ctor_set(v___x_4042_, 1, v___x_4040_);
lean_ctor_set(v___x_4042_, 2, v___x_4039_);
return v___x_4042_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen___closed__24(void){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v___x_4043_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__23, &l_Lean_Parser_Tactic_mvcgen___closed__23_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__23);
v___x_4044_ = lean_unsigned_to_nat(1022u);
v___x_4045_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgen___closed__1));
v___x_4046_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4045_);
lean_ctor_set(v___x_4046_, 1, v___x_4044_);
lean_ctor_set(v___x_4046_, 2, v___x_4043_);
return v___x_4046_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgen(void){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__24, &l_Lean_Parser_Tactic_mvcgen___closed__24_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__24);
return v___x_4047_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgenHint___closed__4(void){
_start:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4058_ = l_Lean_Parser_Tactic_optConfig;
v___x_4059_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgenHint___closed__3));
v___x_4060_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4061_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4060_);
lean_ctor_set(v___x_4061_, 1, v___x_4059_);
lean_ctor_set(v___x_4061_, 2, v___x_4058_);
return v___x_4061_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgenHint___closed__5(void){
_start:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4062_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgen___closed__18, &l_Lean_Parser_Tactic_mvcgen___closed__18_once, _init_l_Lean_Parser_Tactic_mvcgen___closed__18);
v___x_4063_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgenHint___closed__4, &l_Lean_Parser_Tactic_mvcgenHint___closed__4_once, _init_l_Lean_Parser_Tactic_mvcgenHint___closed__4);
v___x_4064_ = ((lean_object*)(l_Lean_Parser_Tactic_mclear___closed__3));
v___x_4065_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
lean_ctor_set(v___x_4065_, 1, v___x_4063_);
lean_ctor_set(v___x_4065_, 2, v___x_4062_);
return v___x_4065_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgenHint___closed__6(void){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4066_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgenHint___closed__5, &l_Lean_Parser_Tactic_mvcgenHint___closed__5_once, _init_l_Lean_Parser_Tactic_mvcgenHint___closed__5);
v___x_4067_ = lean_unsigned_to_nat(1022u);
v___x_4068_ = ((lean_object*)(l_Lean_Parser_Tactic_mvcgenHint___closed__1));
v___x_4069_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
lean_ctor_set(v___x_4069_, 1, v___x_4067_);
lean_ctor_set(v___x_4069_, 2, v___x_4066_);
return v___x_4069_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_mvcgenHint(void){
_start:
{
lean_object* v___x_4070_; 
v___x_4070_ = lean_obj_once(&l_Lean_Parser_Tactic_mvcgenHint___closed__6, &l_Lean_Parser_Tactic_mvcgenHint___closed__6_once, _init_l_Lean_Parser_Tactic_mvcgenHint___closed__6);
return v___x_4070_;
}
}
lean_object* runtime_initialize_Std_Do(uint8_t builtin);
lean_object* runtime_initialize_Std_WP_Tactic(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Interactive(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_WP_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_Do_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_Tactic_mrenameI = _init_l_Lean_Parser_Tactic_mrenameI();
lean_mark_persistent(l_Lean_Parser_Tactic_mrenameI);
l_Lean_Parser_Category_mcasesPat = _init_l_Lean_Parser_Category_mcasesPat();
lean_mark_persistent(l_Lean_Parser_Category_mcasesPat);
l_Lean_Parser_Tactic_mcasesPat__ = _init_l_Lean_Parser_Tactic_mcasesPat__();
lean_mark_persistent(l_Lean_Parser_Tactic_mcasesPat__);
l_Lean_Parser_Tactic_mcasesPat_u231c___u231d = _init_l_Lean_Parser_Tactic_mcasesPat_u231c___u231d();
lean_mark_persistent(l_Lean_Parser_Tactic_mcasesPat_u231c___u231d);
l_Lean_Parser_Tactic_mcasesPat_u25a1__ = _init_l_Lean_Parser_Tactic_mcasesPat_u25a1__();
lean_mark_persistent(l_Lean_Parser_Tactic_mcasesPat_u25a1__);
l_Lean_Parser_Tactic_mcasesPat_x25__ = _init_l_Lean_Parser_Tactic_mcasesPat_x25__();
lean_mark_persistent(l_Lean_Parser_Tactic_mcasesPat_x25__);
l_Lean_Parser_Tactic_mcasesPat_x23__ = _init_l_Lean_Parser_Tactic_mcasesPat_x23__();
lean_mark_persistent(l_Lean_Parser_Tactic_mcasesPat_x23__);
l_Lean_Parser_Category_mrefinePat = _init_l_Lean_Parser_Category_mrefinePat();
lean_mark_persistent(l_Lean_Parser_Category_mrefinePat);
l_Lean_Parser_Tactic_mrefinePat__ = _init_l_Lean_Parser_Tactic_mrefinePat__();
lean_mark_persistent(l_Lean_Parser_Tactic_mrefinePat__);
l_Lean_Parser_Tactic_mrefinePat_u25a1__ = _init_l_Lean_Parser_Tactic_mrefinePat_u25a1__();
lean_mark_persistent(l_Lean_Parser_Tactic_mrefinePat_u25a1__);
l_Lean_Parser_Tactic_mrefinePat_x3f__ = _init_l_Lean_Parser_Tactic_mrefinePat_x3f__();
lean_mark_persistent(l_Lean_Parser_Tactic_mrefinePat_x3f__);
l_Lean_Parser_Tactic_mrefinePat_x23__ = _init_l_Lean_Parser_Tactic_mrefinePat_x23__();
lean_mark_persistent(l_Lean_Parser_Tactic_mrefinePat_x23__);
l_Lean_Parser_Category_mintroPat = _init_l_Lean_Parser_Category_mintroPat();
lean_mark_persistent(l_Lean_Parser_Category_mintroPat);
l_Lean_Parser_Tactic_mintroPat_u2200__ = _init_l_Lean_Parser_Tactic_mintroPat_u2200__();
lean_mark_persistent(l_Lean_Parser_Tactic_mintroPat_u2200__);
l_Lean_Parser_Category_mrevertPat = _init_l_Lean_Parser_Category_mrevertPat();
lean_mark_persistent(l_Lean_Parser_Category_mrevertPat);
l_Lean_Parser_Tactic_vcAlt = _init_l_Lean_Parser_Tactic_vcAlt();
lean_mark_persistent(l_Lean_Parser_Tactic_vcAlt);
l_Lean_Parser_Tactic_vcAlts = _init_l_Lean_Parser_Tactic_vcAlts();
lean_mark_persistent(l_Lean_Parser_Tactic_vcAlts);
l_Lean_Parser_Tactic_mvcgen = _init_l_Lean_Parser_Tactic_mvcgen();
lean_mark_persistent(l_Lean_Parser_Tactic_mvcgen);
l_Lean_Parser_Tactic_mvcgenHint = _init_l_Lean_Parser_Tactic_mvcgenHint();
lean_mark_persistent(l_Lean_Parser_Tactic_mvcgenHint);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do(uint8_t builtin);
lean_object* initialize_Std_WP_Tactic(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Grind_Interactive(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_WP_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Interactive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_Do_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif
