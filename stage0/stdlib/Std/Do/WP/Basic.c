// Lean compiler output
// Module: Std.Do.WP.Basic
// Imports: public import Std.Do.PredTrans
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
lean_object* l_Std_Do_PredTrans_pure___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushExcept___redArg___lam__1(lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pure___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_bind___redArg___lam__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushArg___redArg___lam__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushOption___redArg___lam__1(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 11, .m_data = "termWp⟦_:_⟧"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_1),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 4, 176, 128, 111, 85, 188)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "wp⟦"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟧"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value;
LEAN_EXPORT const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "WP.wp"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(46, 215, 163, 54, 140, 34, 198, 104)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(252, 184, 149, 68, 51, 92, 194, 92)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(209, 91, 166, 6, 71, 210, 197, 93)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(111, 2, 24, 48, 222, 174, 4, 243)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(171, 239, 198, 100, 229, 128, 136, 1)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Do_unexpandWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(13, 5, 49, 23, 162, 70, 143, 74)}};
static const lean_object* l_Std_Do_unexpandWP___closed__0 = (const lean_object*)&l_Std_Do_unexpandWP___closed__0_value;
static lean_once_cell_t l_Std_Do_unexpandWP___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_unexpandWP___closed__1;
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Id_instWP___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Id_instWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Id_instWP___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_Id_instWP___closed__0 = (const lean_object*)&l_Std_Do_Id_instWP___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Do_Id_instWP = (const lean_object*)&l_Std_Do_Id_instWP___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_EStateM_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_EStateM_instWP___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_EStateM_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__0_value;
static const lean_closure_object l_Std_Do_EStateM_instWP___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_EStateM_instWP___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__0_value)} };
static const lean_object* l_Std_Do_EStateM_instWP___redArg___closed__1 = (const lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Do_EStateM_instWP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_EStateM_instWP___closed__0;
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_State_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_State_instWP___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_State_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_State_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Reader_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Reader_instWP___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Do_Reader_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_Reader_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Do_Reader_instWP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_Reader_instWP___closed__0;
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Except_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Except_instWP___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_Except_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_Except_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Option_instWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Option_instWP___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_Option_instWP___closed__0 = (const lean_object*)&l_Std_Do_Option_instWP___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Do_Option_instWP = (const lean_object*)&l_Std_Do_Option_instWP___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12));
v___x_83_ = l_String_toRawSubstring_x27(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19));
v___x_100_ = l_String_toRawSubstring_x27(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33));
v___x_130_ = l_String_toRawSubstring_x27(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(lean_object* v_x_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_136_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
lean_inc(v_x_133_);
v___x_137_ = l_Lean_Syntax_isOfKind(v_x_133_, v___x_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec(v_x_133_);
v___x_138_ = lean_box(1);
v___x_139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___y_135_);
return v___x_139_;
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = l_Lean_Syntax_getArg(v_x_133_, v___x_141_);
v___x_143_ = lean_unsigned_to_nat(2u);
v___x_144_ = l_Lean_Syntax_getArg(v_x_133_, v___x_143_);
lean_dec(v_x_133_);
lean_inc(v___x_144_);
v___x_145_ = l_Lean_Syntax_matchesNull(v___x_144_, v___x_140_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
lean_inc(v___x_144_);
v___x_146_ = l_Lean_Syntax_matchesNull(v___x_144_, v___x_143_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; 
lean_dec(v___x_144_);
lean_dec(v___x_142_);
v___x_147_ = lean_box(1);
v___x_148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___y_135_);
return v___x_148_;
}
else
{
lean_object* v_quotContext_149_; lean_object* v_currMacroScope_150_; lean_object* v_ref_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v_quotContext_149_ = lean_ctor_get(v___y_134_, 1);
v_currMacroScope_150_ = lean_ctor_get(v___y_134_, 2);
v_ref_151_ = lean_ctor_get(v___y_134_, 5);
v___x_152_ = l_Lean_Syntax_getArg(v___x_144_, v___x_141_);
lean_dec(v___x_144_);
v___x_153_ = l_Lean_SourceInfo_fromRef(v_ref_151_, v___x_145_);
v___x_154_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4));
v___x_155_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6));
v___x_156_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
v___x_157_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9));
lean_inc_n(v___x_153_, 14);
v___x_158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_153_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
v___x_159_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
v___x_160_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13);
v___x_161_ = lean_box(0);
lean_inc_n(v_currMacroScope_150_, 3);
lean_inc_n(v_quotContext_149_, 3);
v___x_162_ = l_Lean_addMacroScope(v_quotContext_149_, v___x_161_, v_currMacroScope_150_);
v___x_163_ = lean_box(0);
v___x_164_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16));
v___x_165_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_165_, 0, v___x_153_);
lean_ctor_set(v___x_165_, 1, v___x_160_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
lean_ctor_set(v___x_165_, 3, v___x_164_);
v___x_166_ = l_Lean_Syntax_node1(v___x_153_, v___x_159_, v___x_165_);
v___x_167_ = l_Lean_Syntax_node2(v___x_153_, v___x_156_, v___x_158_, v___x_166_);
v___x_168_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18));
v___x_169_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20);
v___x_170_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23));
v___x_171_ = l_Lean_addMacroScope(v_quotContext_149_, v___x_170_, v_currMacroScope_150_);
v___x_172_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26));
v___x_173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_173_, 0, v___x_153_);
lean_ctor_set(v___x_173_, 1, v___x_169_);
lean_ctor_set(v___x_173_, 2, v___x_171_);
lean_ctor_set(v___x_173_, 3, v___x_172_);
v___x_174_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_175_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30));
v___x_176_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14));
v___x_177_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_153_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = l_Lean_Syntax_node1(v___x_153_, v___x_174_, v___x_152_);
v___x_179_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31));
v___x_180_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_153_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
lean_inc_ref(v___x_180_);
lean_inc(v___x_167_);
v___x_181_ = l_Lean_Syntax_node5(v___x_153_, v___x_175_, v___x_167_, v___x_142_, v___x_177_, v___x_178_, v___x_180_);
v___x_182_ = l_Lean_Syntax_node1(v___x_153_, v___x_174_, v___x_181_);
v___x_183_ = l_Lean_Syntax_node2(v___x_153_, v___x_168_, v___x_173_, v___x_182_);
v___x_184_ = l_Lean_Syntax_node3(v___x_153_, v___x_155_, v___x_167_, v___x_183_, v___x_180_);
v___x_185_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32));
v___x_186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_153_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34);
v___x_188_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35));
v___x_189_ = l_Lean_addMacroScope(v_quotContext_149_, v___x_188_, v_currMacroScope_150_);
v___x_190_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_190_, 0, v___x_153_);
lean_ctor_set(v___x_190_, 1, v___x_187_);
lean_ctor_set(v___x_190_, 2, v___x_189_);
lean_ctor_set(v___x_190_, 3, v___x_163_);
v___x_191_ = l_Lean_Syntax_node3(v___x_153_, v___x_154_, v___x_184_, v___x_186_, v___x_190_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___y_135_);
return v___x_192_;
}
}
else
{
lean_object* v_quotContext_193_; lean_object* v_currMacroScope_194_; lean_object* v_ref_195_; uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v___x_144_);
v_quotContext_193_ = lean_ctor_get(v___y_134_, 1);
v_currMacroScope_194_ = lean_ctor_get(v___y_134_, 2);
v_ref_195_ = lean_ctor_get(v___y_134_, 5);
v___x_196_ = 0;
v___x_197_ = l_Lean_SourceInfo_fromRef(v_ref_195_, v___x_196_);
v___x_198_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4));
v___x_199_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6));
v___x_200_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
v___x_201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9));
lean_inc_n(v___x_197_, 11);
v___x_202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_197_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
v___x_204_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13);
v___x_205_ = lean_box(0);
lean_inc_n(v_currMacroScope_194_, 3);
lean_inc_n(v_quotContext_193_, 3);
v___x_206_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_205_, v_currMacroScope_194_);
v___x_207_ = lean_box(0);
v___x_208_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16));
v___x_209_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_209_, 0, v___x_197_);
lean_ctor_set(v___x_209_, 1, v___x_204_);
lean_ctor_set(v___x_209_, 2, v___x_206_);
lean_ctor_set(v___x_209_, 3, v___x_208_);
v___x_210_ = l_Lean_Syntax_node1(v___x_197_, v___x_203_, v___x_209_);
v___x_211_ = l_Lean_Syntax_node2(v___x_197_, v___x_200_, v___x_202_, v___x_210_);
v___x_212_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18));
v___x_213_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20);
v___x_214_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23));
v___x_215_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_214_, v_currMacroScope_194_);
v___x_216_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26));
v___x_217_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_217_, 0, v___x_197_);
lean_ctor_set(v___x_217_, 1, v___x_213_);
lean_ctor_set(v___x_217_, 2, v___x_215_);
lean_ctor_set(v___x_217_, 3, v___x_216_);
v___x_218_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_219_ = l_Lean_Syntax_node1(v___x_197_, v___x_218_, v___x_142_);
v___x_220_ = l_Lean_Syntax_node2(v___x_197_, v___x_212_, v___x_217_, v___x_219_);
v___x_221_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31));
v___x_222_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_197_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = l_Lean_Syntax_node3(v___x_197_, v___x_199_, v___x_211_, v___x_220_, v___x_222_);
v___x_224_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32));
v___x_225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_197_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34);
v___x_227_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35));
v___x_228_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_227_, v_currMacroScope_194_);
v___x_229_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_229_, 0, v___x_197_);
lean_ctor_set(v___x_229_, 1, v___x_226_);
lean_ctor_set(v___x_229_, 2, v___x_228_);
lean_ctor_set(v___x_229_, 3, v___x_207_);
v___x_230_ = l_Lean_Syntax_node3(v___x_197_, v___x_198_, v___x_223_, v___x_225_, v___x_229_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___y_135_);
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___boxed(lean_object* v_x_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(v_x_232_, v___y_233_, v___y_234_);
lean_dec_ref(v___y_233_);
return v_res_235_;
}
}
static lean_object* _init_l_Std_Do_unexpandWP___closed__1(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Array_mkArray0___redArg();
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP(lean_object* v_x_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_242_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18));
lean_inc(v_x_239_);
v___x_243_ = l_Lean_Syntax_isOfKind(v_x_239_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_x_239_);
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___y_241_);
return v___x_245_;
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = l_Lean_Syntax_getArg(v_x_239_, v___x_246_);
lean_dec(v_x_239_);
lean_inc(v___x_247_);
v___x_248_ = l_Lean_Syntax_matchesNull(v___x_247_, v___x_246_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec(v___x_247_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___y_241_);
return v___x_250_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = l_Lean_Syntax_getArg(v___x_247_, v___x_251_);
lean_dec(v___x_247_);
lean_inc(v___x_252_);
v___x_253_ = l_Lean_Syntax_isOfKind(v___x_252_, v___x_242_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec(v___x_252_);
v___x_254_ = lean_box(0);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___y_241_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_256_ = l_Lean_Syntax_getArg(v___x_252_, v___x_251_);
v___x_257_ = ((lean_object*)(l_Std_Do_unexpandWP___closed__0));
v___x_258_ = l_Lean_Syntax_matchesIdent(v___x_256_, v___x_257_);
lean_dec(v___x_256_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v___x_252_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v___y_241_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = l_Lean_Syntax_getArg(v___x_252_, v___x_246_);
lean_dec(v___x_252_);
lean_inc(v___x_261_);
v___x_262_ = l_Lean_Syntax_matchesNull(v___x_261_, v___x_246_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_261_);
v___x_263_ = lean_box(0);
v___x_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___y_241_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = l_Lean_Syntax_getArg(v___x_261_, v___x_251_);
lean_dec(v___x_261_);
v___x_266_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30));
lean_inc(v___x_265_);
v___x_267_ = l_Lean_Syntax_isOfKind(v___x_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_268_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_267_);
v___x_269_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_270_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_268_, 3);
v___x_271_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_268_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_273_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_274_, 0, v___x_268_);
lean_ctor_set(v___x_274_, 1, v___x_272_);
lean_ctor_set(v___x_274_, 2, v___x_273_);
v___x_275_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_268_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = l_Lean_Syntax_node4(v___x_268_, v___x_269_, v___x_271_, v___x_265_, v___x_274_, v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___y_241_);
return v___x_278_;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_279_ = l_Lean_Syntax_getArg(v___x_265_, v___x_251_);
v___x_280_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
lean_inc(v___x_279_);
v___x_281_ = l_Lean_Syntax_isOfKind(v___x_279_, v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec(v___x_279_);
v___x_282_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_281_);
v___x_283_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_284_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_282_, 3);
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_282_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_287_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_288_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_288_, 0, v___x_282_);
lean_ctor_set(v___x_288_, 1, v___x_286_);
lean_ctor_set(v___x_288_, 2, v___x_287_);
v___x_289_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_282_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_Lean_Syntax_node4(v___x_282_, v___x_283_, v___x_285_, v___x_265_, v___x_288_, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___y_241_);
return v___x_292_;
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_293_ = l_Lean_Syntax_getArg(v___x_279_, v___x_246_);
lean_dec(v___x_279_);
v___x_294_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
lean_inc(v___x_293_);
v___x_295_ = l_Lean_Syntax_isOfKind(v___x_293_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec(v___x_293_);
v___x_296_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_295_);
v___x_297_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_298_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_296_, 3);
v___x_299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_296_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_301_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_302_, 0, v___x_296_);
lean_ctor_set(v___x_302_, 1, v___x_300_);
lean_ctor_set(v___x_302_, 2, v___x_301_);
v___x_303_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_296_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = l_Lean_Syntax_node4(v___x_296_, v___x_297_, v___x_299_, v___x_265_, v___x_302_, v___x_304_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___y_241_);
return v___x_306_;
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_307_ = l_Lean_Syntax_getArg(v___x_293_, v___x_251_);
lean_dec(v___x_293_);
v___x_308_ = lean_box(0);
v___x_309_ = l_Lean_Syntax_matchesIdent(v___x_307_, v___x_308_);
lean_dec(v___x_307_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_310_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_309_);
v___x_311_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_312_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_310_, 3);
v___x_313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_310_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_315_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_316_, 0, v___x_310_);
lean_ctor_set(v___x_316_, 1, v___x_314_);
lean_ctor_set(v___x_316_, 2, v___x_315_);
v___x_317_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_310_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_Lean_Syntax_node4(v___x_310_, v___x_311_, v___x_313_, v___x_265_, v___x_316_, v___x_318_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___y_241_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = lean_unsigned_to_nat(3u);
v___x_322_ = l_Lean_Syntax_getArg(v___x_265_, v___x_321_);
lean_inc(v___x_322_);
v___x_323_ = l_Lean_Syntax_matchesNull(v___x_322_, v___x_246_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v___x_322_);
v___x_324_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_323_);
v___x_325_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_326_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_324_, 3);
v___x_327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_324_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_329_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_330_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_330_, 0, v___x_324_);
lean_ctor_set(v___x_330_, 1, v___x_328_);
lean_ctor_set(v___x_330_, 2, v___x_329_);
v___x_331_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_324_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = l_Lean_Syntax_node4(v___x_324_, v___x_325_, v___x_327_, v___x_265_, v___x_330_, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___y_241_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_335_ = l_Lean_Syntax_getArg(v___x_265_, v___x_246_);
lean_dec(v___x_265_);
v___x_336_ = l_Lean_Syntax_getArg(v___x_322_, v___x_251_);
lean_dec(v___x_322_);
v___x_337_ = 0;
v___x_338_ = l_Lean_SourceInfo_fromRef(v___y_240_, v___x_337_);
v___x_339_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_340_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_338_, 4);
v___x_341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_338_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
v___x_342_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28));
v___x_343_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14));
v___x_344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_338_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = l_Lean_Syntax_node2(v___x_338_, v___x_342_, v___x_344_, v___x_336_);
v___x_346_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_338_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = l_Lean_Syntax_node4(v___x_338_, v___x_339_, v___x_341_, v___x_335_, v___x_345_, v___x_347_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___y_241_);
return v___x_349_;
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
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP___boxed(lean_object* v_x_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Std_Do_unexpandWP(v_x_350_, v___y_351_, v___y_352_);
lean_dec(v___y_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Id_instWP___lam__0(lean_object* v_00_u03b1_354_, lean_object* v_x_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Std_Do_PredTrans_pure___redArg___lam__0(v_x_355_, v___y_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__0(lean_object* v_x_360_, lean_object* v_inst_361_, lean_object* v_s_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_apply_1(v_x_360_, v_s_362_);
v___x_365_ = lean_apply_3(v_inst_361_, lean_box(0), v___x_364_, v___y_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__1(lean_object* v_inst_366_, lean_object* v_00_u03b1_367_, lean_object* v_x_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___f_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___f_370_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__0), 4, 2);
lean_closure_set(v___f_370_, 0, v_x_368_);
lean_closure_set(v___f_370_, 1, v_inst_366_);
v___x_371_ = lean_alloc_closure((void*)(l_StateT_mk), 5, 4);
lean_closure_set(v___x_371_, 0, lean_box(0));
lean_closure_set(v___x_371_, 1, lean_box(0));
lean_closure_set(v___x_371_, 2, lean_box(0));
lean_closure_set(v___x_371_, 3, v___f_370_);
v___x_372_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_372_, 0, v___x_371_);
lean_closure_set(v___x_372_, 1, v___y_369_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg(lean_object* v_inst_373_){
_start:
{
lean_object* v___f_374_; 
v___f_374_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__1), 4, 1);
lean_closure_set(v___f_374_, 0, v_inst_373_);
return v___f_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP(lean_object* v_m_375_, lean_object* v_ps_376_, lean_object* v_00_u03c3_377_, lean_object* v_inst_378_){
_start:
{
lean_object* v___f_379_; 
v___f_379_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__1), 4, 1);
lean_closure_set(v___f_379_, 0, v_inst_378_);
return v___f_379_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___boxed(lean_object* v_m_380_, lean_object* v_ps_381_, lean_object* v_00_u03c3_382_, lean_object* v_inst_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Std_Do_StateT_instWP(v_m_380_, v_ps_381_, v_00_u03c3_382_, v_inst_383_);
lean_dec(v_ps_381_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__0(lean_object* v_s_385_, lean_object* v_x_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v_x_386_);
lean_ctor_set(v___x_387_, 1, v_s_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__1(lean_object* v_x_388_, lean_object* v_inst_389_, lean_object* v_ps_390_, lean_object* v_s_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___f_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
lean_inc(v_s_391_);
v___f_393_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__0), 2, 1);
lean_closure_set(v___f_393_, 0, v_s_391_);
v___x_394_ = lean_apply_1(v_x_388_, v_s_391_);
v___x_395_ = lean_apply_2(v_inst_389_, lean_box(0), v___x_394_);
v___x_396_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___boxed), 3, 2);
lean_closure_set(v___x_396_, 0, v_ps_390_);
lean_closure_set(v___x_396_, 1, lean_box(0));
v___x_397_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_397_, 0, lean_box(0));
lean_closure_set(v___x_397_, 1, lean_box(0));
lean_closure_set(v___x_397_, 2, lean_box(0));
lean_closure_set(v___x_397_, 3, v___x_396_);
lean_closure_set(v___x_397_, 4, v___f_393_);
v___x_398_ = l_Std_Do_PredTrans_bind___redArg___lam__1(v___x_397_, v___x_395_, v___y_392_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__2(lean_object* v_inst_399_, lean_object* v_ps_400_, lean_object* v_00_u03b1_401_, lean_object* v_x_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___f_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___f_404_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__1), 5, 3);
lean_closure_set(v___f_404_, 0, v_x_402_);
lean_closure_set(v___f_404_, 1, v_inst_399_);
lean_closure_set(v___f_404_, 2, v_ps_400_);
v___x_405_ = lean_alloc_closure((void*)(l_StateT_mk), 5, 4);
lean_closure_set(v___x_405_, 0, lean_box(0));
lean_closure_set(v___x_405_, 1, lean_box(0));
lean_closure_set(v___x_405_, 2, lean_box(0));
lean_closure_set(v___x_405_, 3, v___f_404_);
v___x_406_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_406_, 0, v___x_405_);
lean_closure_set(v___x_406_, 1, v___y_403_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg(lean_object* v_ps_407_, lean_object* v_inst_408_){
_start:
{
lean_object* v___f_409_; 
v___f_409_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__2), 5, 2);
lean_closure_set(v___f_409_, 0, v_inst_408_);
lean_closure_set(v___f_409_, 1, v_ps_407_);
return v___f_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP(lean_object* v_m_410_, lean_object* v_ps_411_, lean_object* v_00_u03c1_412_, lean_object* v_inst_413_){
_start:
{
lean_object* v___f_414_; 
v___f_414_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__2), 5, 2);
lean_closure_set(v___f_414_, 0, v_inst_413_);
lean_closure_set(v___f_414_, 1, v_ps_411_);
return v___f_414_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg___lam__0(lean_object* v_inst_415_, lean_object* v_00_u03b1_416_, lean_object* v_x_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_apply_2(v_inst_415_, lean_box(0), v_x_417_);
v___x_420_ = l_Std_Do_PredTrans_pushExcept___redArg___lam__1(v___x_419_, v___y_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg(lean_object* v_inst_421_){
_start:
{
lean_object* v___f_422_; 
v___f_422_ = lean_alloc_closure((void*)(l_Std_Do_ExceptT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_422_, 0, v_inst_421_);
return v___f_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP(lean_object* v_m_423_, lean_object* v_ps_424_, lean_object* v_00_u03b5_425_, lean_object* v_inst_426_){
_start:
{
lean_object* v___f_427_; 
v___f_427_ = lean_alloc_closure((void*)(l_Std_Do_ExceptT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_427_, 0, v_inst_426_);
return v___f_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___boxed(lean_object* v_m_428_, lean_object* v_ps_429_, lean_object* v_00_u03b5_430_, lean_object* v_inst_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Std_Do_ExceptT_instWP(v_m_428_, v_ps_429_, v_00_u03b5_430_, v_inst_431_);
lean_dec(v_ps_429_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg___lam__0(lean_object* v_inst_433_, lean_object* v_00_u03b1_434_, lean_object* v_x_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_apply_2(v_inst_433_, lean_box(0), v_x_435_);
v___x_438_ = l_Std_Do_PredTrans_pushOption___redArg___lam__1(v___x_437_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg(lean_object* v_inst_439_){
_start:
{
lean_object* v___f_440_; 
v___f_440_ = lean_alloc_closure((void*)(l_Std_Do_OptionT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_440_, 0, v_inst_439_);
return v___f_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP(lean_object* v_m_441_, lean_object* v_ps_442_, lean_object* v_inst_443_){
_start:
{
lean_object* v___f_444_; 
v___f_444_ = lean_alloc_closure((void*)(l_Std_Do_OptionT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_444_, 0, v_inst_443_);
return v___f_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___boxed(lean_object* v_m_445_, lean_object* v_ps_446_, lean_object* v_inst_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Std_Do_OptionT_instWP(v_m_445_, v_ps_446_, v_inst_447_);
lean_dec(v_ps_446_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0(lean_object* v___y_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_box(0);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0___boxed(lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Std_Do_EStateM_instWP___redArg___lam__0(v___y_451_);
lean_dec(v___y_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1(lean_object* v___f_453_, lean_object* v_00_u03b1_454_, lean_object* v_x_455_, lean_object* v___y_456_){
_start:
{
lean_inc_ref(v___f_453_);
return v___f_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1___boxed(lean_object* v___f_457_, lean_object* v_00_u03b1_458_, lean_object* v_x_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Std_Do_EStateM_instWP___redArg___lam__1(v___f_457_, v_00_u03b1_458_, v_x_459_, v___y_460_);
lean_dec_ref(v___y_460_);
lean_dec_ref(v_x_459_);
lean_dec_ref(v___f_457_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg(){
_start:
{
lean_object* v___f_466_; 
v___f_466_ = ((lean_object*)(l_Std_Do_EStateM_instWP___redArg___closed__1));
return v___f_466_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___boxed(lean_object* v___dummy_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Do_EStateM_instWP___redArg();
return v_res_468_;
}
}
static lean_object* _init_l_Std_Do_EStateM_instWP___closed__0(void){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Std_Do_EStateM_instWP___redArg();
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP(lean_object* v_00_u03b5_470_, lean_object* v_00_u03c3_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_obj_once(&l_Std_Do_EStateM_instWP___closed__0, &l_Std_Do_EStateM_instWP___closed__0_once, _init_l_Std_Do_EStateM_instWP___closed__0);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__0(lean_object* v_x_473_, lean_object* v_s_474_, lean_object* v___y_475_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_apply_1(v_x_473_, v_s_474_);
v___x_477_ = l_Std_Do_PredTrans_pure___redArg___lam__0(v___x_476_, v___y_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__1(lean_object* v_00_u03b1_478_, lean_object* v_x_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___f_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___f_481_ = lean_alloc_closure((void*)(l_Std_Do_State_instWP___redArg___lam__0), 3, 1);
lean_closure_set(v___f_481_, 0, v_x_479_);
v___x_482_ = lean_alloc_closure((void*)(l_StateT_mk), 5, 4);
lean_closure_set(v___x_482_, 0, lean_box(0));
lean_closure_set(v___x_482_, 1, lean_box(0));
lean_closure_set(v___x_482_, 2, lean_box(0));
lean_closure_set(v___x_482_, 3, v___f_481_);
v___x_483_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_483_, 0, v___x_482_);
lean_closure_set(v___x_483_, 1, v___y_480_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg(){
_start:
{
lean_object* v___f_486_; 
v___f_486_ = ((lean_object*)(l_Std_Do_State_instWP___redArg___closed__0));
return v___f_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___boxed(lean_object* v___dummy_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Std_Do_State_instWP___redArg();
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP(lean_object* v_00_u03c3_489_){
_start:
{
lean_object* v___f_490_; 
v___f_490_ = ((lean_object*)(l_Std_Do_State_instWP___redArg___closed__0));
return v___f_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__1(lean_object* v_x_491_, lean_object* v___x_492_, lean_object* v_s_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___f_495_; lean_object* v___x_496_; lean_object* v___f_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
lean_inc(v_s_493_);
v___f_495_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__0), 2, 1);
lean_closure_set(v___f_495_, 0, v_s_493_);
v___x_496_ = lean_apply_1(v_x_491_, v_s_493_);
v___f_497_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_497_, 0, v___x_496_);
v___x_498_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___boxed), 3, 2);
lean_closure_set(v___x_498_, 0, v___x_492_);
lean_closure_set(v___x_498_, 1, lean_box(0));
v___x_499_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_499_, 0, lean_box(0));
lean_closure_set(v___x_499_, 1, lean_box(0));
lean_closure_set(v___x_499_, 2, lean_box(0));
lean_closure_set(v___x_499_, 3, v___x_498_);
lean_closure_set(v___x_499_, 4, v___f_495_);
v___x_500_ = l_Std_Do_PredTrans_bind___redArg___lam__1(v___x_499_, v___f_497_, v___y_494_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__0(lean_object* v___x_501_, lean_object* v_00_u03b1_502_, lean_object* v_x_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___f_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___f_505_ = lean_alloc_closure((void*)(l_Std_Do_Reader_instWP___redArg___lam__1), 4, 2);
lean_closure_set(v___f_505_, 0, v_x_503_);
lean_closure_set(v___f_505_, 1, v___x_501_);
v___x_506_ = lean_alloc_closure((void*)(l_StateT_mk), 5, 4);
lean_closure_set(v___x_506_, 0, lean_box(0));
lean_closure_set(v___x_506_, 1, lean_box(0));
lean_closure_set(v___x_506_, 2, lean_box(0));
lean_closure_set(v___x_506_, 3, v___f_505_);
v___x_507_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_507_, 0, v___x_506_);
lean_closure_set(v___x_507_, 1, v___y_504_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg(){
_start:
{
lean_object* v___f_511_; 
v___f_511_ = ((lean_object*)(l_Std_Do_Reader_instWP___redArg___closed__0));
return v___f_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___boxed(lean_object* v___dummy_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Std_Do_Reader_instWP___redArg();
return v_res_513_;
}
}
static lean_object* _init_l_Std_Do_Reader_instWP___closed__0(void){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Std_Do_Reader_instWP___redArg();
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP(lean_object* v_00_u03c1_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_obj_once(&l_Std_Do_Reader_instWP___closed__0, &l_Std_Do_Reader_instWP___closed__0_once, _init_l_Std_Do_Reader_instWP___closed__0);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___lam__0(lean_object* v_00_u03b1_517_, lean_object* v_x_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___f_520_; lean_object* v___x_521_; 
v___f_520_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_520_, 0, v_x_518_);
v___x_521_ = l_Std_Do_PredTrans_pushExcept___redArg___lam__1(v___f_520_, v___y_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg(){
_start:
{
lean_object* v___f_524_; 
v___f_524_ = ((lean_object*)(l_Std_Do_Except_instWP___redArg___closed__0));
return v___f_524_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___boxed(lean_object* v___dummy_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Std_Do_Except_instWP___redArg();
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP(lean_object* v_00_u03b5_527_){
_start:
{
lean_object* v___f_528_; 
v___f_528_ = ((lean_object*)(l_Std_Do_Except_instWP___redArg___closed__0));
return v___f_528_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___lam__0(lean_object* v_00_u03b1_529_, lean_object* v_x_530_, lean_object* v___y_531_){
_start:
{
lean_object* v___f_532_; lean_object* v___x_533_; 
v___f_532_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_532_, 0, v_x_530_);
v___x_533_ = l_Std_Do_PredTrans_pushOption___redArg___lam__1(v___f_532_, v___y_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter___redArg(lean_object* v_x_536_, lean_object* v_h__1_537_, lean_object* v_h__2_538_){
_start:
{
if (lean_obj_tag(v_x_536_) == 0)
{
lean_object* v_a_539_; lean_object* v_a_540_; lean_object* v___x_541_; 
lean_dec(v_h__2_538_);
v_a_539_ = lean_ctor_get(v_x_536_, 0);
lean_inc(v_a_539_);
v_a_540_ = lean_ctor_get(v_x_536_, 1);
lean_inc(v_a_540_);
lean_dec_ref_known(v_x_536_, 2);
v___x_541_ = lean_apply_2(v_h__1_537_, v_a_539_, v_a_540_);
return v___x_541_;
}
else
{
lean_object* v_a_542_; lean_object* v_a_543_; lean_object* v___x_544_; 
lean_dec(v_h__1_537_);
v_a_542_ = lean_ctor_get(v_x_536_, 0);
lean_inc(v_a_542_);
v_a_543_ = lean_ctor_get(v_x_536_, 1);
lean_inc(v_a_543_);
lean_dec_ref_known(v_x_536_, 2);
v___x_544_ = lean_apply_2(v_h__2_538_, v_a_542_, v_a_543_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter(lean_object* v_00_u03b5_545_, lean_object* v_00_u03c3_546_, lean_object* v_00_u03b1_547_, lean_object* v_motive_548_, lean_object* v_x_549_, lean_object* v_h__1_550_, lean_object* v_h__2_551_){
_start:
{
if (lean_obj_tag(v_x_549_) == 0)
{
lean_object* v_a_552_; lean_object* v_a_553_; lean_object* v___x_554_; 
lean_dec(v_h__2_551_);
v_a_552_ = lean_ctor_get(v_x_549_, 0);
lean_inc(v_a_552_);
v_a_553_ = lean_ctor_get(v_x_549_, 1);
lean_inc(v_a_553_);
lean_dec_ref_known(v_x_549_, 2);
v___x_554_ = lean_apply_2(v_h__1_550_, v_a_552_, v_a_553_);
return v___x_554_;
}
else
{
lean_object* v_a_555_; lean_object* v_a_556_; lean_object* v___x_557_; 
lean_dec(v_h__1_550_);
v_a_555_ = lean_ctor_get(v_x_549_, 0);
lean_inc(v_a_555_);
v_a_556_ = lean_ctor_get(v_x_549_, 1);
lean_inc(v_a_556_);
lean_dec_ref_known(v_x_549_, 2);
v___x_557_ = lean_apply_2(v_h__2_551_, v_a_555_, v_a_556_);
return v___x_557_;
}
}
}
lean_object* runtime_initialize_Std_Do_PredTrans(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_PredTrans(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_PredTrans(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_PredTrans(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_WP_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
