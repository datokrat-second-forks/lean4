// Lean compiler output
// Module: Init.UDecidable
// Imports: public import Init.Data.Nat.Basic public import Init.PropLemmas import Init.Data.Bool public import Init.BinderNameHint
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_binderIdent;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__0 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "termDepUIfThenElse"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__1 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__1_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__2_value_aux_0),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 123, 23, 183, 252, 249, 15, 235)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__2 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__2_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ppRealGroup"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__3 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__3_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(86, 184, 190, 137, 27, 87, 63, 174)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__4 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__4_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__5 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__5_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__6 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ppRealFill"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__7 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__7_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__7_value),LEAN_SCALAR_PTR_LITERAL(21, 219, 143, 167, 248, 5, 230, 49)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__8 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__8_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppIndent"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__9 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__9_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__9_value),LEAN_SCALAR_PTR_LITERAL(240, 142, 232, 190, 100, 212, 29, 41)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__10 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__10_value;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uif "};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__11 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__11_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__11_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__12 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__12_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__13;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__14 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__14_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__14_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__15 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__15_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__16;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__17 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__17_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__17_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__18 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__18_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__19 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__19_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__20;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " then"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__21 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__21_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__21_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__22 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__22_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__23;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__24;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__25 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__25_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__25_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__26 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__26_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__26_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__27 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__27_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__28;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__29;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__30;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppDedent"};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__31 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__31_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__31_value),LEAN_SCALAR_PTR_LITERAL(242, 37, 230, 124, 106, 100, 159, 37)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__32 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__32_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__32_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__27_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__33 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__33_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__34;
static const lean_string_object l_UDecidable_termDepUIfThenElse___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "else "};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__35 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__35_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__35_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__36 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__36_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__36_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__19_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__37 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__37_value;
static const lean_ctor_object l_UDecidable_termDepUIfThenElse___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__8_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__37_value)}};
static const lean_object* l_UDecidable_termDepUIfThenElse___closed__38 = (const lean_object*)&l_UDecidable_termDepUIfThenElse___closed__38_value;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__39;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__40;
static lean_once_cell_t l_UDecidable_termDepUIfThenElse___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable_termDepUIfThenElse___closed__41;
LEAN_EXPORT lean_object* l_UDecidable_termDepUIfThenElse;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__1 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__3 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__4 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__4_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__7 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__9 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "UDecidable.dite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__11 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__11_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__13 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__15 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__16 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__17 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__17_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__17_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__19 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__19_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__21 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__23 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__26 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__28 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__30 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__31 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__35 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__37 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__37_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40_value;
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_UDecidable_termUIfThenElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "termUIfThenElse"};
static const lean_object* l_UDecidable_termUIfThenElse___closed__0 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__0_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termUIfThenElse___closed__1_value_aux_0),((lean_object*)&l_UDecidable_termUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 106, 138, 233, 236, 118, 90, 8)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__1 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__1_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__12_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__19_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__2 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__2_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__2_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__22_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__3 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__3_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__10_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__3_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__4 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__4_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__4_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__27_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__5 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__5_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__5_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__19_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__6 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__6_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__8_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__6_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__7 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__7_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__7_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__33_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__8 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__8_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__6_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__8_value),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__38_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__9 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__9_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__4_value),((lean_object*)&l_UDecidable_termUIfThenElse___closed__9_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__10 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__10_value;
static const lean_ctor_object l_UDecidable_termUIfThenElse___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_UDecidable_termUIfThenElse___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_UDecidable_termUIfThenElse___closed__10_value)}};
static const lean_object* l_UDecidable_termUIfThenElse___closed__11 = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__11_value;
LEAN_EXPORT const lean_object* l_UDecidable_termUIfThenElse = (const lean_object*)&l_UDecidable_termUIfThenElse___closed__11_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UDecidable.ite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__0 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__0_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1;
static const lean_string_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__2 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__2_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__4 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__4_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__5 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__5_value;
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_toDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_toDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instAnd___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instAnd___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instAnd(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOr___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instOr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOr(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNot___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instNot___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNot(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instNot___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(uint8_t v_i_1_){
_start:
{
return v_i_1_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg___boxed(lean_object* v_i_2_){
_start:
{
uint8_t v_i_boxed_3_; uint8_t v_res_4_; lean_object* v_r_5_; 
v_i_boxed_3_ = lean_unbox(v_i_2_);
v_res_4_ = l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(v_i_boxed_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl(lean_object* v_p_6_, uint8_t v_i_7_){
_start:
{
return v_i_7_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___boxed(lean_object* v_p_8_, lean_object* v_i_9_){
_start:
{
uint8_t v_i_boxed_10_; uint8_t v_res_11_; lean_object* v_r_12_; 
v_i_boxed_10_ = lean_unbox(v_i_9_);
v_res_11_ = l___private_Init_UDecidable_0__UDecidable_decideImpl(v_p_8_, v_i_boxed_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg(uint8_t v_b_13_){
_start:
{
return v_b_13_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg___boxed(lean_object* v_b_14_){
_start:
{
uint8_t v_b_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_b_boxed_15_ = lean_unbox(v_b_14_);
v_res_16_ = l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg(v_b_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl(lean_object* v_p_18_, uint8_t v_b_19_, lean_object* v_x_20_){
_start:
{
return v_b_19_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___boxed(lean_object* v_p_21_, lean_object* v_b_22_, lean_object* v_x_23_){
_start:
{
uint8_t v_b_boxed_24_; uint8_t v_res_25_; lean_object* v_r_26_; 
v_b_boxed_24_ = lean_unbox(v_b_22_);
v_res_25_ = l___private_Init_UDecidable_0__UDecidable_mkImpl(v_p_21_, v_b_boxed_24_, v_x_23_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__13(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_47_ = l_Lean_binderIdent;
v___x_48_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__12));
v___x_49_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_50_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_48_);
lean_ctor_set(v___x_50_, 2, v___x_47_);
return v___x_50_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__16(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__15));
v___x_55_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__13, &l_UDecidable_termDepUIfThenElse___closed__13_once, _init_l_UDecidable_termDepUIfThenElse___closed__13);
v___x_56_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_57_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___x_55_);
lean_ctor_set(v___x_57_, 2, v___x_54_);
return v___x_57_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__20(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_65_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__16, &l_UDecidable_termDepUIfThenElse___closed__16_once, _init_l_UDecidable_termDepUIfThenElse___closed__16);
v___x_66_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_67_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
return v___x_67_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__23(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__22));
v___x_72_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__20, &l_UDecidable_termDepUIfThenElse___closed__20_once, _init_l_UDecidable_termDepUIfThenElse___closed__20);
v___x_73_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_74_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__24(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__23, &l_UDecidable_termDepUIfThenElse___closed__23_once, _init_l_UDecidable_termDepUIfThenElse___closed__23);
v___x_76_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__10));
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__28(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__27));
v___x_84_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__24, &l_UDecidable_termDepUIfThenElse___closed__24_once, _init_l_UDecidable_termDepUIfThenElse___closed__24);
v___x_85_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_86_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__29(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_88_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__28, &l_UDecidable_termDepUIfThenElse___closed__28_once, _init_l_UDecidable_termDepUIfThenElse___closed__28);
v___x_89_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_90_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_87_);
return v___x_90_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__30(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__29, &l_UDecidable_termDepUIfThenElse___closed__29_once, _init_l_UDecidable_termDepUIfThenElse___closed__29);
v___x_92_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__8));
v___x_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__34(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_100_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__33));
v___x_101_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__30, &l_UDecidable_termDepUIfThenElse___closed__30_once, _init_l_UDecidable_termDepUIfThenElse___closed__30);
v___x_102_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_103_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
lean_ctor_set(v___x_103_, 2, v___x_100_);
return v___x_103_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__39(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__38));
v___x_115_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__34, &l_UDecidable_termDepUIfThenElse___closed__34_once, _init_l_UDecidable_termDepUIfThenElse___closed__34);
v___x_116_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_117_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__40(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__39, &l_UDecidable_termDepUIfThenElse___closed__39_once, _init_l_UDecidable_termDepUIfThenElse___closed__39);
v___x_119_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__4));
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__41(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__40, &l_UDecidable_termDepUIfThenElse___closed__40_once, _init_l_UDecidable_termDepUIfThenElse___closed__40);
v___x_122_ = lean_unsigned_to_nat(1022u);
v___x_123_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
v___x_124_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__41, &l_UDecidable_termDepUIfThenElse___closed__41_once, _init_l_UDecidable_termDepUIfThenElse___closed__41);
return v___x_125_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__11));
v___x_150_ = l_String_toRawSubstring_x27(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__28));
v___x_187_ = l_String_toRawSubstring_x27(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Array_mkArray0___redArg();
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1(lean_object* v_x_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
lean_inc(v_x_211_);
v___x_215_ = l_Lean_Syntax_isOfKind(v_x_211_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec(v_x_211_);
v___x_216_ = lean_box(1);
v___x_217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v_a_213_);
return v___x_217_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = l_Lean_Syntax_getArg(v_x_211_, v___x_218_);
v___x_220_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2));
lean_inc(v___x_219_);
v___x_221_ = l_Lean_Syntax_isOfKind(v___x_219_, v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec(v___x_219_);
lean_dec(v_x_211_);
v___x_222_ = lean_box(1);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v_a_213_);
return v___x_223_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_224_ = lean_unsigned_to_nat(0u);
v___x_225_ = l_Lean_Syntax_getArg(v___x_219_, v___x_224_);
lean_dec(v___x_219_);
v___x_226_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__4));
lean_inc(v___x_225_);
v___x_227_ = l_Lean_Syntax_isOfKind(v___x_225_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_228_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8));
lean_inc(v___x_225_);
v___x_229_ = l_Lean_Syntax_isOfKind(v___x_225_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v___x_225_);
lean_dec(v_x_211_);
v___x_230_ = lean_box(1);
v___x_231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v_a_213_);
return v___x_231_;
}
else
{
lean_object* v_quotContext_232_; lean_object* v_currMacroScope_233_; lean_object* v_ref_234_; lean_object* v_h_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_quotContext_232_ = lean_ctor_get(v_a_212_, 1);
v_currMacroScope_233_ = lean_ctor_get(v_a_212_, 2);
v_ref_234_ = lean_ctor_get(v_a_212_, 5);
v_h_235_ = l_Lean_Syntax_getArg(v___x_225_, v___x_224_);
lean_dec(v___x_225_);
v___x_236_ = lean_unsigned_to_nat(3u);
v___x_237_ = l_Lean_Syntax_getArg(v_x_211_, v___x_236_);
v___x_238_ = lean_unsigned_to_nat(5u);
v___x_239_ = l_Lean_Syntax_getArg(v_x_211_, v___x_238_);
v___x_240_ = lean_unsigned_to_nat(7u);
v___x_241_ = l_Lean_Syntax_getArg(v_x_211_, v___x_240_);
lean_dec(v_x_211_);
v___x_242_ = l_Lean_SourceInfo_fromRef(v_ref_234_, v___x_227_);
v___x_243_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_244_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12);
v___x_245_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_233_, 2);
lean_inc_n(v_quotContext_232_, 2);
v___x_246_ = l_Lean_addMacroScope(v_quotContext_232_, v___x_245_, v_currMacroScope_233_);
v___x_247_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
lean_inc_n(v___x_242_, 18);
v___x_248_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_248_, 0, v___x_242_);
lean_ctor_set(v___x_248_, 1, v___x_244_);
lean_ctor_set(v___x_248_, 2, v___x_246_);
lean_ctor_set(v___x_248_, 3, v___x_247_);
v___x_249_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_250_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_251_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_252_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25));
v___x_253_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_242_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27));
v___x_255_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29);
v___x_256_ = lean_box(0);
v___x_257_ = l_Lean_addMacroScope(v_quotContext_232_, v___x_256_, v_currMacroScope_233_);
v___x_258_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_259_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_259_, 0, v___x_242_);
lean_ctor_set(v___x_259_, 1, v___x_255_);
lean_ctor_set(v___x_259_, 2, v___x_257_);
lean_ctor_set(v___x_259_, 3, v___x_258_);
v___x_260_ = l_Lean_Syntax_node1(v___x_242_, v___x_254_, v___x_259_);
v___x_261_ = l_Lean_Syntax_node2(v___x_242_, v___x_251_, v___x_253_, v___x_260_);
v___x_262_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33));
v___x_263_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_264_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_242_);
lean_ctor_set(v___x_264_, 1, v___x_262_);
v___x_265_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_266_ = l_Lean_SourceInfo_fromRef(v_h_235_, v___x_229_);
lean_dec(v_h_235_);
v___x_267_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__37));
v___x_268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = l_Lean_Syntax_node1(v___x_242_, v___x_228_, v___x_268_);
v___x_270_ = l_Lean_Syntax_node1(v___x_242_, v___x_249_, v___x_269_);
v___x_271_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38);
v___x_272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_272_, 0, v___x_242_);
lean_ctor_set(v___x_272_, 1, v___x_249_);
lean_ctor_set(v___x_272_, 2, v___x_271_);
v___x_273_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_242_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
lean_inc_ref(v___x_274_);
lean_inc_ref(v___x_272_);
lean_inc(v___x_270_);
v___x_275_ = l_Lean_Syntax_node4(v___x_242_, v___x_265_, v___x_270_, v___x_272_, v___x_274_, v___x_239_);
lean_inc_ref(v___x_264_);
v___x_276_ = l_Lean_Syntax_node2(v___x_242_, v___x_263_, v___x_264_, v___x_275_);
v___x_277_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40));
v___x_278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_242_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
lean_inc_ref(v___x_278_);
lean_inc(v___x_261_);
v___x_279_ = l_Lean_Syntax_node3(v___x_242_, v___x_250_, v___x_261_, v___x_276_, v___x_278_);
v___x_280_ = l_Lean_Syntax_node4(v___x_242_, v___x_265_, v___x_270_, v___x_272_, v___x_274_, v___x_241_);
v___x_281_ = l_Lean_Syntax_node2(v___x_242_, v___x_263_, v___x_264_, v___x_280_);
v___x_282_ = l_Lean_Syntax_node3(v___x_242_, v___x_250_, v___x_261_, v___x_281_, v___x_278_);
v___x_283_ = l_Lean_Syntax_node3(v___x_242_, v___x_249_, v___x_237_, v___x_279_, v___x_282_);
v___x_284_ = l_Lean_Syntax_node2(v___x_242_, v___x_243_, v___x_248_, v___x_283_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v_a_213_);
return v___x_285_;
}
}
else
{
lean_object* v_quotContext_286_; lean_object* v_currMacroScope_287_; lean_object* v_ref_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_quotContext_286_ = lean_ctor_get(v_a_212_, 1);
v_currMacroScope_287_ = lean_ctor_get(v_a_212_, 2);
v_ref_288_ = lean_ctor_get(v_a_212_, 5);
v___x_289_ = lean_unsigned_to_nat(3u);
v___x_290_ = l_Lean_Syntax_getArg(v_x_211_, v___x_289_);
v___x_291_ = lean_unsigned_to_nat(5u);
v___x_292_ = l_Lean_Syntax_getArg(v_x_211_, v___x_291_);
v___x_293_ = lean_unsigned_to_nat(7u);
v___x_294_ = l_Lean_Syntax_getArg(v_x_211_, v___x_293_);
lean_dec(v_x_211_);
v___x_295_ = 0;
v___x_296_ = l_Lean_SourceInfo_fromRef(v_ref_288_, v___x_295_);
v___x_297_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_298_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12);
v___x_299_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_287_, 2);
lean_inc_n(v_quotContext_286_, 2);
v___x_300_ = l_Lean_addMacroScope(v_quotContext_286_, v___x_299_, v_currMacroScope_287_);
v___x_301_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
lean_inc_n(v___x_296_, 17);
v___x_302_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_302_, 0, v___x_296_);
lean_ctor_set(v___x_302_, 1, v___x_298_);
lean_ctor_set(v___x_302_, 2, v___x_300_);
lean_ctor_set(v___x_302_, 3, v___x_301_);
v___x_303_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_304_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_305_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_306_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25));
v___x_307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_296_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27));
v___x_309_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29);
v___x_310_ = lean_box(0);
v___x_311_ = l_Lean_addMacroScope(v_quotContext_286_, v___x_310_, v_currMacroScope_287_);
v___x_312_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_313_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_313_, 0, v___x_296_);
lean_ctor_set(v___x_313_, 1, v___x_309_);
lean_ctor_set(v___x_313_, 2, v___x_311_);
lean_ctor_set(v___x_313_, 3, v___x_312_);
v___x_314_ = l_Lean_Syntax_node1(v___x_296_, v___x_308_, v___x_313_);
v___x_315_ = l_Lean_Syntax_node2(v___x_296_, v___x_305_, v___x_307_, v___x_314_);
v___x_316_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33));
v___x_317_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_296_);
lean_ctor_set(v___x_318_, 1, v___x_316_);
v___x_319_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_320_ = l_Lean_Syntax_node1(v___x_296_, v___x_303_, v___x_225_);
v___x_321_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38);
v___x_322_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_322_, 0, v___x_296_);
lean_ctor_set(v___x_322_, 1, v___x_303_);
lean_ctor_set(v___x_322_, 2, v___x_321_);
v___x_323_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_296_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
lean_inc_ref(v___x_324_);
lean_inc_ref(v___x_322_);
lean_inc(v___x_320_);
v___x_325_ = l_Lean_Syntax_node4(v___x_296_, v___x_319_, v___x_320_, v___x_322_, v___x_324_, v___x_292_);
lean_inc_ref(v___x_318_);
v___x_326_ = l_Lean_Syntax_node2(v___x_296_, v___x_317_, v___x_318_, v___x_325_);
v___x_327_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40));
v___x_328_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_296_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
lean_inc_ref(v___x_328_);
lean_inc(v___x_315_);
v___x_329_ = l_Lean_Syntax_node3(v___x_296_, v___x_304_, v___x_315_, v___x_326_, v___x_328_);
v___x_330_ = l_Lean_Syntax_node4(v___x_296_, v___x_319_, v___x_320_, v___x_322_, v___x_324_, v___x_294_);
v___x_331_ = l_Lean_Syntax_node2(v___x_296_, v___x_317_, v___x_318_, v___x_330_);
v___x_332_ = l_Lean_Syntax_node3(v___x_296_, v___x_304_, v___x_315_, v___x_331_, v___x_328_);
v___x_333_ = l_Lean_Syntax_node3(v___x_296_, v___x_303_, v___x_290_, v___x_329_, v___x_332_);
v___x_334_ = l_Lean_Syntax_node2(v___x_296_, v___x_297_, v___x_302_, v___x_333_);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v_a_213_);
return v___x_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___boxed(lean_object* v_x_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1(v_x_336_, v_a_337_, v_a_338_);
lean_dec_ref(v_a_337_);
return v_res_339_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__0));
v___x_384_ = l_String_toRawSubstring_x27(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1(lean_object* v_x_395_, lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = ((lean_object*)(l_UDecidable_termUIfThenElse___closed__1));
lean_inc(v_x_395_);
v___x_399_ = l_Lean_Syntax_isOfKind(v_x_395_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec(v_x_395_);
v___x_400_ = lean_box(1);
v___x_401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set(v___x_401_, 1, v_a_397_);
return v___x_401_;
}
else
{
lean_object* v_quotContext_402_; lean_object* v_currMacroScope_403_; lean_object* v_ref_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; uint8_t v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_quotContext_402_ = lean_ctor_get(v_a_396_, 1);
v_currMacroScope_403_ = lean_ctor_get(v_a_396_, 2);
v_ref_404_ = lean_ctor_get(v_a_396_, 5);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = l_Lean_Syntax_getArg(v_x_395_, v___x_405_);
v___x_407_ = lean_unsigned_to_nat(3u);
v___x_408_ = l_Lean_Syntax_getArg(v_x_395_, v___x_407_);
v___x_409_ = lean_unsigned_to_nat(5u);
v___x_410_ = l_Lean_Syntax_getArg(v_x_395_, v___x_409_);
lean_dec(v_x_395_);
v___x_411_ = 0;
v___x_412_ = l_Lean_SourceInfo_fromRef(v_ref_404_, v___x_411_);
v___x_413_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_414_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1);
v___x_415_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3));
lean_inc(v_currMacroScope_403_);
lean_inc(v_quotContext_402_);
v___x_416_ = l_Lean_addMacroScope(v_quotContext_402_, v___x_415_, v_currMacroScope_403_);
v___x_417_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__5));
lean_inc_n(v___x_412_, 2);
v___x_418_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_418_, 0, v___x_412_);
lean_ctor_set(v___x_418_, 1, v___x_414_);
lean_ctor_set(v___x_418_, 2, v___x_416_);
lean_ctor_set(v___x_418_, 3, v___x_417_);
v___x_419_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_420_ = l_Lean_Syntax_node3(v___x_412_, v___x_419_, v___x_406_, v___x_408_, v___x_410_);
v___x_421_ = l_Lean_Syntax_node2(v___x_412_, v___x_413_, v___x_418_, v___x_420_);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
lean_ctor_set(v___x_422_, 1, v_a_397_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___boxed(lean_object* v_x_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1(v_x_423_, v_a_424_, v_a_425_);
lean_dec_ref(v_a_424_);
return v_res_426_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable___redArg(uint8_t v_inst_427_){
_start:
{
return v_inst_427_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___redArg___boxed(lean_object* v_inst_428_){
_start:
{
uint8_t v_inst_7__boxed_429_; uint8_t v_res_430_; lean_object* v_r_431_; 
v_inst_7__boxed_429_ = lean_unbox(v_inst_428_);
v_res_430_ = l_UDecidable_ofDecidable___redArg(v_inst_7__boxed_429_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable(lean_object* v_p_432_, uint8_t v_inst_433_){
_start:
{
return v_inst_433_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___boxed(lean_object* v_p_434_, lean_object* v_inst_435_){
_start:
{
uint8_t v_inst_10__boxed_436_; uint8_t v_res_437_; lean_object* v_r_438_; 
v_inst_10__boxed_436_ = lean_unbox(v_inst_435_);
v_res_437_ = l_UDecidable_ofDecidable(v_p_434_, v_inst_10__boxed_436_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable___redArg(uint8_t v_inst_439_){
_start:
{
return v_inst_439_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___redArg___boxed(lean_object* v_inst_440_){
_start:
{
uint8_t v_inst_7__boxed_441_; uint8_t v_res_442_; lean_object* v_r_443_; 
v_inst_7__boxed_441_ = lean_unbox(v_inst_440_);
v_res_442_ = l_UDecidable_toDecidable___redArg(v_inst_7__boxed_441_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable(lean_object* v_p_444_, uint8_t v_inst_445_){
_start:
{
return v_inst_445_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___boxed(lean_object* v_p_446_, lean_object* v_inst_447_){
_start:
{
uint8_t v_inst_10__boxed_448_; uint8_t v_res_449_; lean_object* v_r_450_; 
v_inst_10__boxed_448_ = lean_unbox(v_inst_447_);
v_res_449_ = l_UDecidable_toDecidable(v_p_446_, v_inst_10__boxed_448_);
v_r_450_ = lean_box(v_res_449_);
return v_r_450_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAnd___redArg(uint8_t v_inst_451_, uint8_t v_inst_452_){
_start:
{
if (v_inst_451_ == 0)
{
return v_inst_451_;
}
else
{
return v_inst_452_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAnd___redArg___boxed(lean_object* v_inst_453_, lean_object* v_inst_454_){
_start:
{
uint8_t v_inst_35__boxed_455_; uint8_t v_inst_36__boxed_456_; uint8_t v_res_457_; lean_object* v_r_458_; 
v_inst_35__boxed_455_ = lean_unbox(v_inst_453_);
v_inst_36__boxed_456_ = lean_unbox(v_inst_454_);
v_res_457_ = l_UDecidable_instAnd___redArg(v_inst_35__boxed_455_, v_inst_36__boxed_456_);
v_r_458_ = lean_box(v_res_457_);
return v_r_458_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAnd(lean_object* v_p_459_, lean_object* v_q_460_, uint8_t v_inst_461_, uint8_t v_inst_462_){
_start:
{
if (v_inst_461_ == 0)
{
return v_inst_461_;
}
else
{
return v_inst_462_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAnd___boxed(lean_object* v_p_463_, lean_object* v_q_464_, lean_object* v_inst_465_, lean_object* v_inst_466_){
_start:
{
uint8_t v_inst_41__boxed_467_; uint8_t v_inst_42__boxed_468_; uint8_t v_res_469_; lean_object* v_r_470_; 
v_inst_41__boxed_467_ = lean_unbox(v_inst_465_);
v_inst_42__boxed_468_ = lean_unbox(v_inst_466_);
v_res_469_ = l_UDecidable_instAnd(v_p_463_, v_q_464_, v_inst_41__boxed_467_, v_inst_42__boxed_468_);
v_r_470_ = lean_box(v_res_469_);
return v_r_470_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOr___redArg(uint8_t v_inst_471_, uint8_t v_inst_472_){
_start:
{
if (v_inst_471_ == 0)
{
return v_inst_472_;
}
else
{
return v_inst_471_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOr___redArg___boxed(lean_object* v_inst_473_, lean_object* v_inst_474_){
_start:
{
uint8_t v_inst_35__boxed_475_; uint8_t v_inst_36__boxed_476_; uint8_t v_res_477_; lean_object* v_r_478_; 
v_inst_35__boxed_475_ = lean_unbox(v_inst_473_);
v_inst_36__boxed_476_ = lean_unbox(v_inst_474_);
v_res_477_ = l_UDecidable_instOr___redArg(v_inst_35__boxed_475_, v_inst_36__boxed_476_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOr(lean_object* v_p_479_, lean_object* v_q_480_, uint8_t v_inst_481_, uint8_t v_inst_482_){
_start:
{
if (v_inst_481_ == 0)
{
return v_inst_482_;
}
else
{
return v_inst_481_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOr___boxed(lean_object* v_p_483_, lean_object* v_q_484_, lean_object* v_inst_485_, lean_object* v_inst_486_){
_start:
{
uint8_t v_inst_41__boxed_487_; uint8_t v_inst_42__boxed_488_; uint8_t v_res_489_; lean_object* v_r_490_; 
v_inst_41__boxed_487_ = lean_unbox(v_inst_485_);
v_inst_42__boxed_488_ = lean_unbox(v_inst_486_);
v_res_489_ = l_UDecidable_instOr(v_p_483_, v_q_484_, v_inst_41__boxed_487_, v_inst_42__boxed_488_);
v_r_490_ = lean_box(v_res_489_);
return v_r_490_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNot___redArg(uint8_t v_inst_491_){
_start:
{
if (v_inst_491_ == 0)
{
uint8_t v___x_492_; 
v___x_492_ = 1;
return v___x_492_;
}
else
{
uint8_t v___x_493_; 
v___x_493_ = 0;
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNot___redArg___boxed(lean_object* v_inst_494_){
_start:
{
uint8_t v_inst_14__boxed_495_; uint8_t v_res_496_; lean_object* v_r_497_; 
v_inst_14__boxed_495_ = lean_unbox(v_inst_494_);
v_res_496_ = l_UDecidable_instNot___redArg(v_inst_14__boxed_495_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNot(lean_object* v_p_498_, uint8_t v_inst_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = l_UDecidable_instNot___redArg(v_inst_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNot___boxed(lean_object* v_p_501_, lean_object* v_inst_502_){
_start:
{
uint8_t v_inst_21__boxed_503_; uint8_t v_res_504_; lean_object* v_r_505_; 
v_inst_21__boxed_503_ = lean_unbox(v_inst_502_);
v_res_504_ = l_UDecidable_instNot(v_p_501_, v_inst_21__boxed_503_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatEq(lean_object* v_n_506_, lean_object* v_m_507_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_nat_dec_eq(v_n_506_, v_m_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatEq___boxed(lean_object* v_n_509_, lean_object* v_m_510_){
_start:
{
uint8_t v_res_511_; lean_object* v_r_512_; 
v_res_511_ = l_UDecidable_instNatEq(v_n_509_, v_m_510_);
lean_dec(v_m_510_);
lean_dec(v_n_509_);
v_r_512_ = lean_box(v_res_511_);
return v_r_512_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLe(lean_object* v_n_513_, lean_object* v_m_514_){
_start:
{
uint8_t v___x_515_; 
v___x_515_ = lean_nat_dec_le(v_n_513_, v_m_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLe___boxed(lean_object* v_n_516_, lean_object* v_m_517_){
_start:
{
uint8_t v_res_518_; lean_object* v_r_519_; 
v_res_518_ = l_UDecidable_instNatLe(v_n_516_, v_m_517_);
lean_dec(v_m_517_);
lean_dec(v_n_516_);
v_r_519_ = lean_box(v_res_518_);
return v_r_519_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLt(lean_object* v_n_520_, lean_object* v_m_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = lean_unsigned_to_nat(1u);
v___x_523_ = lean_nat_add(v_n_520_, v___x_522_);
v___x_524_ = lean_nat_dec_le(v___x_523_, v_m_521_);
lean_dec(v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLt___boxed(lean_object* v_n_525_, lean_object* v_m_526_){
_start:
{
uint8_t v_res_527_; lean_object* v_r_528_; 
v_res_527_ = l_UDecidable_instNatLt(v_n_525_, v_m_526_);
lean_dec(v_m_526_);
lean_dec(v_n_525_);
v_r_528_ = lean_box(v_res_527_);
return v_r_528_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_PropLemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_BinderNameHint(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_UDecidable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_UDecidable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_UDecidable_termDepUIfThenElse = _init_l_UDecidable_termDepUIfThenElse();
lean_mark_persistent(l_UDecidable_termDepUIfThenElse);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Basic(uint8_t builtin);
lean_object* initialize_Init_PropLemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_BinderNameHint(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_UDecidable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_UDecidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_UDecidable(builtin);
}
#ifdef __cplusplus
}
#endif
