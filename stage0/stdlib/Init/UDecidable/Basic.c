// Lean compiler output
// Module: Init.UDecidable.Basic
// Imports: public import Init.Core
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_binderIdent;
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__1 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__3 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__4 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__4_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__7 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__9 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__12 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMVar"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__15 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(107, 198, 34, 186, 248, 43, 208, 139)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_mvar%"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "waitIfTypeMVar"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__20 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__20_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(1, 158, 121, 249, 90, 128, 220, 150)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wait_if_type_mvar%"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__23 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "UDecidable.dite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__25 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__25_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__27 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__27_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__29 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__30 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__31 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_value),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__31_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__32 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__32_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__33 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__35 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__37 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__37_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__39 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__39_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__40 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__40_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__41 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__41_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__42 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__42_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__44 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__44_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__44_value)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__45 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__45_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__45_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__46 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__46_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__49 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__49_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_1),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value_aux_2),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__49_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__51 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__51_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__53 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__53_value;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__54 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__54_value;
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UDecidable.ite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__0 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__0_value;
static lean_once_cell_t l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1;
static const lean_string_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__2 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__2_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_UDecidable_termDepUIfThenElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3_value_aux_0),((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__4 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__4_value;
static const lean_ctor_object l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__5 = (const lean_object*)&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__5_value;
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_maxOfLe___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_maxOfLe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_maxOfLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minOfLe___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_minOfLe___redArg(lean_object*);
LEAN_EXPORT lean_object* l_minOfLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofIff___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofIff___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofIff(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_ofIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofReflects___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofReflects(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_isTrue___redArg();
LEAN_EXPORT lean_object* l_UDecidable_isTrue___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_isTrue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_isTrue___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_isFalse___redArg();
LEAN_EXPORT lean_object* l_UDecidable_isFalse___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_isFalse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_isFalse___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_toDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_toDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instTrue;
LEAN_EXPORT uint8_t l_UDecidable_instFalse;
LEAN_EXPORT uint8_t l_UDecidable_instNotImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instNotImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNotImpl(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instNotImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instAndImpl___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instAndImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instAndImpl(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instAndImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOrImpl___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instOrImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOrImpl(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instOrImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instImpImpl___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instImpImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instImpImpl(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instImpImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIffImpl___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instIffImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIffImpl(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instIffImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatEqImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatLeImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatLeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instNatLtImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instNatLtImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolEqImpl(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instBoolEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq___redArg();
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinEqImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinEqImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinEqImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinEqImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBitVecEqImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBitVecEqImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBitVecEqImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instBitVecEqImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8EqImpl(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8EqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt16EqImpl(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt16EqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32EqImpl(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32EqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt64EqImpl(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt64EqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUSizeEqImpl(size_t, size_t);
LEAN_EXPORT lean_object* l_UDecidable_instUSizeEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCharEqImpl(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instCharEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8LeImpl(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8LeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8LtImpl(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8LtImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32LeImpl(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32LeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32LtImpl(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32LtImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringEqImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOptionEqImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instOptionEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOptionEqImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instOptionEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSomeImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSomeImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSomeImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSomeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instProdEqImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instProdEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instProdEqImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instProdEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSumEqImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSumEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSumEqImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSumEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEqImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEqImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___redArg(uint8_t v_i_1_){
_start:
{
return v_i_1_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___redArg___boxed(lean_object* v_i_2_){
_start:
{
uint8_t v_i_boxed_3_; uint8_t v_res_4_; lean_object* v_r_5_; 
v_i_boxed_3_ = lean_unbox(v_i_2_);
v_res_4_ = l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___redArg(v_i_boxed_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl(lean_object* v_p_6_, uint8_t v_i_7_){
_start:
{
return v_i_7_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl___boxed(lean_object* v_p_8_, lean_object* v_i_9_){
_start:
{
uint8_t v_i_boxed_10_; uint8_t v_res_11_; lean_object* v_r_12_; 
v_i_boxed_10_ = lean_unbox(v_i_9_);
v_res_11_ = l___private_Init_UDecidable_Basic_0__UDecidable_decideImpl(v_p_8_, v_i_boxed_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool___redArg(uint8_t v_inst_13_){
_start:
{
return v_inst_13_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___redArg___boxed(lean_object* v_inst_14_){
_start:
{
uint8_t v_inst_7__boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_inst_7__boxed_15_ = lean_unbox(v_inst_14_);
v_res_16_ = l_UDecidable_instCoeDepBool___redArg(v_inst_7__boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool(lean_object* v_p_18_, uint8_t v_inst_19_){
_start:
{
return v_inst_19_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___boxed(lean_object* v_p_20_, lean_object* v_inst_21_){
_start:
{
uint8_t v_inst_10__boxed_22_; uint8_t v_res_23_; lean_object* v_r_24_; 
v_inst_10__boxed_22_ = lean_unbox(v_inst_21_);
v_res_23_ = l_UDecidable_instCoeDepBool(v_p_20_, v_inst_10__boxed_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___redArg(uint8_t v_b_25_){
_start:
{
return v_b_25_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___redArg___boxed(lean_object* v_b_26_){
_start:
{
uint8_t v_b_boxed_27_; uint8_t v_res_28_; lean_object* v_r_29_; 
v_b_boxed_27_ = lean_unbox(v_b_26_);
v_res_28_ = l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___redArg(v_b_boxed_27_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl(lean_object* v_p_30_, uint8_t v_b_31_, lean_object* v_x_32_){
_start:
{
return v_b_31_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl___boxed(lean_object* v_p_33_, lean_object* v_b_34_, lean_object* v_x_35_){
_start:
{
uint8_t v_b_boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v_b_boxed_36_ = lean_unbox(v_b_34_);
v_res_37_ = l___private_Init_UDecidable_Basic_0__UDecidable_mkImpl(v_p_33_, v_b_boxed_36_, v_x_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__13(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = l_Lean_binderIdent;
v___x_60_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__12));
v___x_61_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_62_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set(v___x_62_, 2, v___x_59_);
return v___x_62_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__16(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__15));
v___x_67_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__13, &l_UDecidable_termDepUIfThenElse___closed__13_once, _init_l_UDecidable_termDepUIfThenElse___closed__13);
v___x_68_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_69_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__20(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_76_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_77_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__16, &l_UDecidable_termDepUIfThenElse___closed__16_once, _init_l_UDecidable_termDepUIfThenElse___closed__16);
v___x_78_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_79_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
return v___x_79_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__23(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__22));
v___x_84_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__20, &l_UDecidable_termDepUIfThenElse___closed__20_once, _init_l_UDecidable_termDepUIfThenElse___closed__20);
v___x_85_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_86_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__24(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__23, &l_UDecidable_termDepUIfThenElse___closed__23_once, _init_l_UDecidable_termDepUIfThenElse___closed__23);
v___x_88_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__10));
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__28(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_95_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__27));
v___x_96_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__24, &l_UDecidable_termDepUIfThenElse___closed__24_once, _init_l_UDecidable_termDepUIfThenElse___closed__24);
v___x_97_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_98_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
lean_ctor_set(v___x_98_, 2, v___x_95_);
return v___x_98_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__29(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_100_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__28, &l_UDecidable_termDepUIfThenElse___closed__28_once, _init_l_UDecidable_termDepUIfThenElse___closed__28);
v___x_101_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_102_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_100_);
lean_ctor_set(v___x_102_, 2, v___x_99_);
return v___x_102_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__30(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__29, &l_UDecidable_termDepUIfThenElse___closed__29_once, _init_l_UDecidable_termDepUIfThenElse___closed__29);
v___x_104_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__8));
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__34(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_112_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__33));
v___x_113_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__30, &l_UDecidable_termDepUIfThenElse___closed__30_once, _init_l_UDecidable_termDepUIfThenElse___closed__30);
v___x_114_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_115_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_113_);
lean_ctor_set(v___x_115_, 2, v___x_112_);
return v___x_115_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__39(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_126_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__38));
v___x_127_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__34, &l_UDecidable_termDepUIfThenElse___closed__34_once, _init_l_UDecidable_termDepUIfThenElse___closed__34);
v___x_128_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_129_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_127_);
lean_ctor_set(v___x_129_, 2, v___x_126_);
return v___x_129_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__40(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__39, &l_UDecidable_termDepUIfThenElse___closed__39_once, _init_l_UDecidable_termDepUIfThenElse___closed__39);
v___x_131_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__4));
v___x_132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__41(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__40, &l_UDecidable_termDepUIfThenElse___closed__40_once, _init_l_UDecidable_termDepUIfThenElse___closed__40);
v___x_134_ = lean_unsigned_to_nat(1022u);
v___x_135_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
v___x_136_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
lean_ctor_set(v___x_136_, 2, v___x_133_);
return v___x_136_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__41, &l_UDecidable_termDepUIfThenElse___closed__41_once, _init_l_UDecidable_termDepUIfThenElse___closed__41);
return v___x_137_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__12));
v___x_163_ = l_String_toRawSubstring_x27(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__25));
v___x_190_ = l_String_toRawSubstring_x27(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__42));
v___x_227_ = l_String_toRawSubstring_x27(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52(void){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Array_mkArray0___redArg();
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1(lean_object* v_x_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
lean_inc(v_x_251_);
v___x_255_ = l_Lean_Syntax_isOfKind(v_x_251_, v___x_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v_x_251_);
v___x_256_ = lean_box(1);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v_a_253_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = l_Lean_Syntax_getArg(v_x_251_, v___x_258_);
v___x_260_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__2));
lean_inc(v___x_259_);
v___x_261_ = l_Lean_Syntax_isOfKind(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v___x_259_);
lean_dec(v_x_251_);
v___x_262_ = lean_box(1);
v___x_263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v_a_253_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = l_Lean_Syntax_getArg(v___x_259_, v___x_264_);
lean_dec(v___x_259_);
v___x_266_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__4));
lean_inc(v___x_265_);
v___x_267_ = l_Lean_Syntax_isOfKind(v___x_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__8));
lean_inc(v___x_265_);
v___x_269_ = l_Lean_Syntax_isOfKind(v___x_265_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v___x_265_);
lean_dec(v_x_251_);
v___x_270_ = lean_box(1);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v_a_253_);
return v___x_271_;
}
else
{
lean_object* v_quotContext_272_; lean_object* v_currMacroScope_273_; lean_object* v_ref_274_; lean_object* v_h_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_ref_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_quotContext_272_ = lean_ctor_get(v_a_252_, 1);
v_currMacroScope_273_ = lean_ctor_get(v_a_252_, 2);
v_ref_274_ = lean_ctor_get(v_a_252_, 5);
v_h_275_ = l_Lean_Syntax_getArg(v___x_265_, v___x_264_);
lean_dec(v___x_265_);
v___x_276_ = lean_unsigned_to_nat(3u);
v___x_277_ = l_Lean_Syntax_getArg(v_x_251_, v___x_276_);
v___x_278_ = lean_unsigned_to_nat(5u);
v___x_279_ = l_Lean_Syntax_getArg(v_x_251_, v___x_278_);
v___x_280_ = lean_unsigned_to_nat(7u);
v___x_281_ = l_Lean_Syntax_getArg(v_x_251_, v___x_280_);
lean_dec(v_x_251_);
v_ref_282_ = l_Lean_replaceRef(v___x_277_, v_ref_274_);
v___x_283_ = l_Lean_SourceInfo_fromRef(v_ref_282_, v___x_267_);
lean_dec(v_ref_282_);
v___x_284_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_285_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11));
lean_inc_n(v___x_283_, 2);
v___x_286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_283_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13);
v___x_288_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_273_, 3);
lean_inc_n(v_quotContext_272_, 3);
v___x_289_ = l_Lean_addMacroScope(v_quotContext_272_, v___x_288_, v_currMacroScope_273_);
v___x_290_ = lean_box(0);
lean_inc(v___x_289_);
v___x_291_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_291_, 0, v___x_283_);
lean_ctor_set(v___x_291_, 1, v___x_287_);
lean_ctor_set(v___x_291_, 2, v___x_289_);
lean_ctor_set(v___x_291_, 3, v___x_290_);
v___x_292_ = l_Lean_Syntax_node2(v___x_283_, v___x_284_, v___x_286_, v___x_291_);
v___x_293_ = l_Lean_SourceInfo_fromRef(v_ref_274_, v___x_267_);
v___x_294_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16));
v___x_295_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17));
lean_inc_n(v___x_293_, 26);
v___x_296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_293_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_293_);
lean_ctor_set(v___x_297_, 1, v___x_285_);
v___x_298_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_298_, 0, v___x_293_);
lean_ctor_set(v___x_298_, 1, v___x_287_);
lean_ctor_set(v___x_298_, 2, v___x_289_);
lean_ctor_set(v___x_298_, 3, v___x_290_);
v___x_299_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
v___x_300_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_293_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19));
v___x_302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_293_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21));
v___x_304_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_293_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_307_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26);
v___x_308_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28));
v___x_309_ = l_Lean_addMacroScope(v_quotContext_272_, v___x_308_, v_currMacroScope_273_);
v___x_310_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_311_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_311_, 0, v___x_293_);
lean_ctor_set(v___x_311_, 1, v___x_307_);
lean_ctor_set(v___x_311_, 2, v___x_309_);
lean_ctor_set(v___x_311_, 3, v___x_310_);
v___x_312_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_313_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_314_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38));
v___x_315_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_293_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__41));
v___x_318_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43);
v___x_319_ = lean_box(0);
v___x_320_ = l_Lean_addMacroScope(v_quotContext_272_, v___x_319_, v_currMacroScope_273_);
v___x_321_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__46));
v___x_322_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_322_, 0, v___x_293_);
lean_ctor_set(v___x_322_, 1, v___x_318_);
lean_ctor_set(v___x_322_, 2, v___x_320_);
lean_ctor_set(v___x_322_, 3, v___x_321_);
v___x_323_ = l_Lean_Syntax_node1(v___x_293_, v___x_317_, v___x_322_);
v___x_324_ = l_Lean_Syntax_node2(v___x_293_, v___x_314_, v___x_316_, v___x_323_);
v___x_325_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47));
v___x_326_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48));
v___x_327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_293_);
lean_ctor_set(v___x_327_, 1, v___x_325_);
v___x_328_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50));
v___x_329_ = l_Lean_SourceInfo_fromRef(v_h_275_, v___x_269_);
lean_dec(v_h_275_);
v___x_330_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__51));
v___x_331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_329_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = l_Lean_Syntax_node1(v___x_293_, v___x_268_, v___x_331_);
v___x_333_ = l_Lean_Syntax_node1(v___x_293_, v___x_312_, v___x_332_);
v___x_334_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52);
v___x_335_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_335_, 0, v___x_293_);
lean_ctor_set(v___x_335_, 1, v___x_312_);
lean_ctor_set(v___x_335_, 2, v___x_334_);
v___x_336_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__53));
v___x_337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_293_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
lean_inc_ref(v___x_337_);
lean_inc_ref(v___x_335_);
lean_inc(v___x_333_);
v___x_338_ = l_Lean_Syntax_node4(v___x_293_, v___x_328_, v___x_333_, v___x_335_, v___x_337_, v___x_279_);
lean_inc_ref(v___x_327_);
v___x_339_ = l_Lean_Syntax_node2(v___x_293_, v___x_326_, v___x_327_, v___x_338_);
v___x_340_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__54));
v___x_341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_293_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
lean_inc_ref(v___x_341_);
lean_inc(v___x_324_);
v___x_342_ = l_Lean_Syntax_node3(v___x_293_, v___x_313_, v___x_324_, v___x_339_, v___x_341_);
v___x_343_ = l_Lean_Syntax_node4(v___x_293_, v___x_328_, v___x_333_, v___x_335_, v___x_337_, v___x_281_);
v___x_344_ = l_Lean_Syntax_node2(v___x_293_, v___x_326_, v___x_327_, v___x_343_);
v___x_345_ = l_Lean_Syntax_node3(v___x_293_, v___x_313_, v___x_324_, v___x_344_, v___x_341_);
v___x_346_ = l_Lean_Syntax_node3(v___x_293_, v___x_312_, v___x_292_, v___x_342_, v___x_345_);
v___x_347_ = l_Lean_Syntax_node2(v___x_293_, v___x_306_, v___x_311_, v___x_346_);
lean_inc_ref(v___x_302_);
lean_inc_ref(v___x_298_);
lean_inc_ref(v___x_297_);
v___x_348_ = l_Lean_Syntax_node5(v___x_293_, v___x_303_, v___x_305_, v___x_297_, v___x_298_, v___x_302_, v___x_347_);
v___x_349_ = l_Lean_Syntax_node7(v___x_293_, v___x_294_, v___x_296_, v___x_297_, v___x_298_, v___x_300_, v___x_277_, v___x_302_, v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v_a_253_);
return v___x_350_;
}
}
else
{
lean_object* v_quotContext_351_; lean_object* v_currMacroScope_352_; lean_object* v_ref_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_ref_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_quotContext_351_ = lean_ctor_get(v_a_252_, 1);
v_currMacroScope_352_ = lean_ctor_get(v_a_252_, 2);
v_ref_353_ = lean_ctor_get(v_a_252_, 5);
v___x_354_ = lean_unsigned_to_nat(3u);
v___x_355_ = l_Lean_Syntax_getArg(v_x_251_, v___x_354_);
v___x_356_ = lean_unsigned_to_nat(5u);
v___x_357_ = l_Lean_Syntax_getArg(v_x_251_, v___x_356_);
v___x_358_ = lean_unsigned_to_nat(7u);
v___x_359_ = l_Lean_Syntax_getArg(v_x_251_, v___x_358_);
lean_dec(v_x_251_);
v_ref_360_ = l_Lean_replaceRef(v___x_355_, v_ref_353_);
v___x_361_ = 0;
v___x_362_ = l_Lean_SourceInfo_fromRef(v_ref_360_, v___x_361_);
lean_dec(v_ref_360_);
v___x_363_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_364_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11));
lean_inc_n(v___x_362_, 2);
v___x_365_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_362_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13);
v___x_367_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_352_, 3);
lean_inc_n(v_quotContext_351_, 3);
v___x_368_ = l_Lean_addMacroScope(v_quotContext_351_, v___x_367_, v_currMacroScope_352_);
v___x_369_ = lean_box(0);
lean_inc(v___x_368_);
v___x_370_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_370_, 0, v___x_362_);
lean_ctor_set(v___x_370_, 1, v___x_366_);
lean_ctor_set(v___x_370_, 2, v___x_368_);
lean_ctor_set(v___x_370_, 3, v___x_369_);
v___x_371_ = l_Lean_Syntax_node2(v___x_362_, v___x_363_, v___x_365_, v___x_370_);
v___x_372_ = l_Lean_SourceInfo_fromRef(v_ref_353_, v___x_361_);
v___x_373_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16));
v___x_374_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17));
lean_inc_n(v___x_372_, 25);
v___x_375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_372_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_372_);
lean_ctor_set(v___x_376_, 1, v___x_364_);
v___x_377_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_377_, 0, v___x_372_);
lean_ctor_set(v___x_377_, 1, v___x_366_);
lean_ctor_set(v___x_377_, 2, v___x_368_);
lean_ctor_set(v___x_377_, 3, v___x_369_);
v___x_378_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
v___x_379_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_372_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19));
v___x_381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_372_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21));
v___x_383_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_372_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_386_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__26);
v___x_387_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__28));
v___x_388_ = l_Lean_addMacroScope(v_quotContext_351_, v___x_387_, v_currMacroScope_352_);
v___x_389_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_390_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_390_, 0, v___x_372_);
lean_ctor_set(v___x_390_, 1, v___x_386_);
lean_ctor_set(v___x_390_, 2, v___x_388_);
lean_ctor_set(v___x_390_, 3, v___x_389_);
v___x_391_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_392_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_393_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__38));
v___x_394_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_395_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_372_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__41));
v___x_397_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__43);
v___x_398_ = lean_box(0);
v___x_399_ = l_Lean_addMacroScope(v_quotContext_351_, v___x_398_, v_currMacroScope_352_);
v___x_400_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__46));
v___x_401_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_401_, 0, v___x_372_);
lean_ctor_set(v___x_401_, 1, v___x_397_);
lean_ctor_set(v___x_401_, 2, v___x_399_);
lean_ctor_set(v___x_401_, 3, v___x_400_);
v___x_402_ = l_Lean_Syntax_node1(v___x_372_, v___x_396_, v___x_401_);
v___x_403_ = l_Lean_Syntax_node2(v___x_372_, v___x_393_, v___x_395_, v___x_402_);
v___x_404_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__47));
v___x_405_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__48));
v___x_406_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_372_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
v___x_407_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__50));
v___x_408_ = l_Lean_Syntax_node1(v___x_372_, v___x_391_, v___x_265_);
v___x_409_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__52);
v___x_410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_410_, 0, v___x_372_);
lean_ctor_set(v___x_410_, 1, v___x_391_);
lean_ctor_set(v___x_410_, 2, v___x_409_);
v___x_411_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__53));
v___x_412_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_372_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
lean_inc_ref(v___x_412_);
lean_inc_ref(v___x_410_);
lean_inc(v___x_408_);
v___x_413_ = l_Lean_Syntax_node4(v___x_372_, v___x_407_, v___x_408_, v___x_410_, v___x_412_, v___x_357_);
lean_inc_ref(v___x_406_);
v___x_414_ = l_Lean_Syntax_node2(v___x_372_, v___x_405_, v___x_406_, v___x_413_);
v___x_415_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__54));
v___x_416_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_372_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
lean_inc_ref(v___x_416_);
lean_inc(v___x_403_);
v___x_417_ = l_Lean_Syntax_node3(v___x_372_, v___x_392_, v___x_403_, v___x_414_, v___x_416_);
v___x_418_ = l_Lean_Syntax_node4(v___x_372_, v___x_407_, v___x_408_, v___x_410_, v___x_412_, v___x_359_);
v___x_419_ = l_Lean_Syntax_node2(v___x_372_, v___x_405_, v___x_406_, v___x_418_);
v___x_420_ = l_Lean_Syntax_node3(v___x_372_, v___x_392_, v___x_403_, v___x_419_, v___x_416_);
v___x_421_ = l_Lean_Syntax_node3(v___x_372_, v___x_391_, v___x_371_, v___x_417_, v___x_420_);
v___x_422_ = l_Lean_Syntax_node2(v___x_372_, v___x_385_, v___x_390_, v___x_421_);
lean_inc_ref(v___x_381_);
lean_inc_ref(v___x_377_);
lean_inc_ref(v___x_376_);
v___x_423_ = l_Lean_Syntax_node5(v___x_372_, v___x_382_, v___x_384_, v___x_376_, v___x_377_, v___x_381_, v___x_422_);
v___x_424_ = l_Lean_Syntax_node7(v___x_372_, v___x_373_, v___x_375_, v___x_376_, v___x_377_, v___x_379_, v___x_355_, v___x_381_, v___x_423_);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v_a_253_);
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___boxed(lean_object* v_x_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1(v_x_426_, v_a_427_, v_a_428_);
lean_dec_ref(v_a_427_);
return v_res_429_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__0));
v___x_474_ = l_String_toRawSubstring_x27(v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1(lean_object* v_x_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = ((lean_object*)(l_UDecidable_termUIfThenElse___closed__1));
lean_inc(v_x_485_);
v___x_489_ = l_Lean_Syntax_isOfKind(v_x_485_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec(v_x_485_);
v___x_490_ = lean_box(1);
v___x_491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v_a_487_);
return v___x_491_;
}
else
{
lean_object* v_quotContext_492_; lean_object* v_currMacroScope_493_; lean_object* v_ref_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_ref_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_quotContext_492_ = lean_ctor_get(v_a_486_, 1);
v_currMacroScope_493_ = lean_ctor_get(v_a_486_, 2);
v_ref_494_ = lean_ctor_get(v_a_486_, 5);
v___x_495_ = lean_unsigned_to_nat(1u);
v___x_496_ = l_Lean_Syntax_getArg(v_x_485_, v___x_495_);
v___x_497_ = lean_unsigned_to_nat(3u);
v___x_498_ = l_Lean_Syntax_getArg(v_x_485_, v___x_497_);
v___x_499_ = lean_unsigned_to_nat(5u);
v___x_500_ = l_Lean_Syntax_getArg(v_x_485_, v___x_499_);
lean_dec(v_x_485_);
v_ref_501_ = l_Lean_replaceRef(v___x_496_, v_ref_494_);
v___x_502_ = 0;
v___x_503_ = l_Lean_SourceInfo_fromRef(v_ref_501_, v___x_502_);
lean_dec(v_ref_501_);
v___x_504_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_505_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__11));
lean_inc_n(v___x_503_, 2);
v___x_506_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_503_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__13);
v___x_508_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_493_, 2);
lean_inc_n(v_quotContext_492_, 2);
v___x_509_ = l_Lean_addMacroScope(v_quotContext_492_, v___x_508_, v_currMacroScope_493_);
v___x_510_ = lean_box(0);
lean_inc(v___x_509_);
v___x_511_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_511_, 0, v___x_503_);
lean_ctor_set(v___x_511_, 1, v___x_507_);
lean_ctor_set(v___x_511_, 2, v___x_509_);
lean_ctor_set(v___x_511_, 3, v___x_510_);
v___x_512_ = l_Lean_Syntax_node2(v___x_503_, v___x_504_, v___x_506_, v___x_511_);
v___x_513_ = l_Lean_SourceInfo_fromRef(v_ref_494_, v___x_502_);
v___x_514_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__16));
v___x_515_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__17));
lean_inc_n(v___x_513_, 10);
v___x_516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_513_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_513_);
lean_ctor_set(v___x_517_, 1, v___x_505_);
v___x_518_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_518_, 0, v___x_513_);
lean_ctor_set(v___x_518_, 1, v___x_507_);
lean_ctor_set(v___x_518_, 2, v___x_509_);
lean_ctor_set(v___x_518_, 3, v___x_510_);
v___x_519_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
v___x_520_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_513_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__19));
v___x_522_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_513_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__21));
v___x_524_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_525_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_513_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_527_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1, &l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1_once, _init_l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__1);
v___x_528_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__3));
v___x_529_ = l_Lean_addMacroScope(v_quotContext_492_, v___x_528_, v_currMacroScope_493_);
v___x_530_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___closed__5));
v___x_531_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_531_, 0, v___x_513_);
lean_ctor_set(v___x_531_, 1, v___x_527_);
lean_ctor_set(v___x_531_, 2, v___x_529_);
lean_ctor_set(v___x_531_, 3, v___x_530_);
v___x_532_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_533_ = l_Lean_Syntax_node3(v___x_513_, v___x_532_, v___x_512_, v___x_498_, v___x_500_);
v___x_534_ = l_Lean_Syntax_node2(v___x_513_, v___x_526_, v___x_531_, v___x_533_);
lean_inc_ref(v___x_522_);
lean_inc_ref(v___x_518_);
lean_inc_ref(v___x_517_);
v___x_535_ = l_Lean_Syntax_node5(v___x_513_, v___x_523_, v___x_525_, v___x_517_, v___x_518_, v___x_522_, v___x_534_);
v___x_536_ = l_Lean_Syntax_node7(v___x_513_, v___x_514_, v___x_516_, v___x_517_, v___x_518_, v___x_520_, v___x_496_, v___x_522_, v___x_535_);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v_a_487_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1___boxed(lean_object* v_x_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_UDecidable___aux__Init__UDecidable__Basic______macroRules__UDecidable__termUIfThenElse__1(v_x_538_, v_a_539_, v_a_540_);
lean_dec_ref(v_a_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_maxOfLe___redArg___lam__0(lean_object* v_inst_542_, lean_object* v_x_543_, lean_object* v_y_544_){
_start:
{
lean_object* v___x_545_; uint8_t v___x_546_; 
lean_inc(v_y_544_);
lean_inc(v_x_543_);
v___x_545_ = lean_apply_2(v_inst_542_, v_x_543_, v_y_544_);
v___x_546_ = lean_unbox(v___x_545_);
if (v___x_546_ == 0)
{
lean_dec(v_y_544_);
return v_x_543_;
}
else
{
lean_dec(v_x_543_);
return v_y_544_;
}
}
}
LEAN_EXPORT lean_object* l_maxOfLe___redArg(lean_object* v_inst_547_){
_start:
{
lean_object* v___f_548_; 
v___f_548_ = lean_alloc_closure((void*)(l_maxOfLe___redArg___lam__0), 3, 1);
lean_closure_set(v___f_548_, 0, v_inst_547_);
return v___f_548_;
}
}
LEAN_EXPORT lean_object* l_maxOfLe(lean_object* v_00_u03b1_549_, lean_object* v_inst_550_, lean_object* v_inst_551_){
_start:
{
lean_object* v___f_552_; 
v___f_552_ = lean_alloc_closure((void*)(l_maxOfLe___redArg___lam__0), 3, 1);
lean_closure_set(v___f_552_, 0, v_inst_551_);
return v___f_552_;
}
}
LEAN_EXPORT lean_object* l_minOfLe___redArg___lam__0(lean_object* v_inst_553_, lean_object* v_x_554_, lean_object* v_y_555_){
_start:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
lean_inc(v_y_555_);
lean_inc(v_x_554_);
v___x_556_ = lean_apply_2(v_inst_553_, v_x_554_, v_y_555_);
v___x_557_ = lean_unbox(v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_x_554_);
return v_y_555_;
}
else
{
lean_dec(v_y_555_);
return v_x_554_;
}
}
}
LEAN_EXPORT lean_object* l_minOfLe___redArg(lean_object* v_inst_558_){
_start:
{
lean_object* v___f_559_; 
v___f_559_ = lean_alloc_closure((void*)(l_minOfLe___redArg___lam__0), 3, 1);
lean_closure_set(v___f_559_, 0, v_inst_558_);
return v___f_559_;
}
}
LEAN_EXPORT lean_object* l_minOfLe(lean_object* v_00_u03b1_560_, lean_object* v_inst_561_, lean_object* v_inst_562_){
_start:
{
lean_object* v___f_563_; 
v___f_563_ = lean_alloc_closure((void*)(l_minOfLe___redArg___lam__0), 3, 1);
lean_closure_set(v___f_563_, 0, v_inst_562_);
return v___f_563_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofIff___redArg(uint8_t v_inst_564_){
_start:
{
return v_inst_564_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofIff___redArg___boxed(lean_object* v_inst_565_){
_start:
{
uint8_t v_inst_7__boxed_566_; uint8_t v_res_567_; lean_object* v_r_568_; 
v_inst_7__boxed_566_ = lean_unbox(v_inst_565_);
v_res_567_ = l_UDecidable_ofIff___redArg(v_inst_7__boxed_566_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofIff(lean_object* v_p_569_, lean_object* v_q_570_, uint8_t v_inst_571_, lean_object* v_h_572_){
_start:
{
return v_inst_571_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofIff___boxed(lean_object* v_p_573_, lean_object* v_q_574_, lean_object* v_inst_575_, lean_object* v_h_576_){
_start:
{
uint8_t v_inst_10__boxed_577_; uint8_t v_res_578_; lean_object* v_r_579_; 
v_inst_10__boxed_577_ = lean_unbox(v_inst_575_);
v_res_578_ = l_UDecidable_ofIff(v_p_573_, v_q_574_, v_inst_10__boxed_577_, v_h_576_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofReflects___redArg(uint8_t v_b_580_){
_start:
{
return v_b_580_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___redArg___boxed(lean_object* v_b_581_){
_start:
{
uint8_t v_b_boxed_582_; uint8_t v_res_583_; lean_object* v_r_584_; 
v_b_boxed_582_ = lean_unbox(v_b_581_);
v_res_583_ = l_UDecidable_ofReflects___redArg(v_b_boxed_582_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofReflects(lean_object* v_p_585_, uint8_t v_b_586_, lean_object* v_h_587_){
_start:
{
return v_b_586_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___boxed(lean_object* v_p_588_, lean_object* v_b_589_, lean_object* v_h_590_){
_start:
{
uint8_t v_b_boxed_591_; uint8_t v_res_592_; lean_object* v_r_593_; 
v_b_boxed_591_ = lean_unbox(v_b_589_);
v_res_592_ = l_UDecidable_ofReflects(v_p_588_, v_b_boxed_591_, v_h_590_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isTrue___redArg(){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = 1;
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isTrue___redArg___boxed(lean_object* v___dummy_596_){
_start:
{
uint8_t v_res_597_; lean_object* v_r_598_; 
v_res_597_ = l_UDecidable_isTrue___redArg();
v_r_598_ = lean_box(v_res_597_);
return v_r_598_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isTrue(lean_object* v_p_599_, lean_object* v_h_600_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = 1;
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isTrue___boxed(lean_object* v_p_602_, lean_object* v_h_603_){
_start:
{
uint8_t v_res_604_; lean_object* v_r_605_; 
v_res_604_ = l_UDecidable_isTrue(v_p_602_, v_h_603_);
v_r_605_ = lean_box(v_res_604_);
return v_r_605_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isFalse___redArg(){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = 0;
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isFalse___redArg___boxed(lean_object* v___dummy_608_){
_start:
{
uint8_t v_res_609_; lean_object* v_r_610_; 
v_res_609_ = l_UDecidable_isFalse___redArg();
v_r_610_ = lean_box(v_res_609_);
return v_r_610_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isFalse(lean_object* v_p_611_, lean_object* v_h_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = 0;
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isFalse___boxed(lean_object* v_p_614_, lean_object* v_h_615_){
_start:
{
uint8_t v_res_616_; lean_object* v_r_617_; 
v_res_616_ = l_UDecidable_isFalse(v_p_614_, v_h_615_);
v_r_617_ = lean_box(v_res_616_);
return v_r_617_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable___redArg(uint8_t v_inst_618_){
_start:
{
return v_inst_618_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___redArg___boxed(lean_object* v_inst_619_){
_start:
{
uint8_t v_inst_7__boxed_620_; uint8_t v_res_621_; lean_object* v_r_622_; 
v_inst_7__boxed_620_ = lean_unbox(v_inst_619_);
v_res_621_ = l_UDecidable_ofDecidable___redArg(v_inst_7__boxed_620_);
v_r_622_ = lean_box(v_res_621_);
return v_r_622_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable(lean_object* v_p_623_, uint8_t v_inst_624_){
_start:
{
return v_inst_624_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___boxed(lean_object* v_p_625_, lean_object* v_inst_626_){
_start:
{
uint8_t v_inst_10__boxed_627_; uint8_t v_res_628_; lean_object* v_r_629_; 
v_inst_10__boxed_627_ = lean_unbox(v_inst_626_);
v_res_628_ = l_UDecidable_ofDecidable(v_p_625_, v_inst_10__boxed_627_);
v_r_629_ = lean_box(v_res_628_);
return v_r_629_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable___redArg(uint8_t v_inst_630_){
_start:
{
return v_inst_630_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___redArg___boxed(lean_object* v_inst_631_){
_start:
{
uint8_t v_inst_7__boxed_632_; uint8_t v_res_633_; lean_object* v_r_634_; 
v_inst_7__boxed_632_ = lean_unbox(v_inst_631_);
v_res_633_ = l_UDecidable_toDecidable___redArg(v_inst_7__boxed_632_);
v_r_634_ = lean_box(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable(lean_object* v_p_635_, uint8_t v_inst_636_){
_start:
{
return v_inst_636_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___boxed(lean_object* v_p_637_, lean_object* v_inst_638_){
_start:
{
uint8_t v_inst_10__boxed_639_; uint8_t v_res_640_; lean_object* v_r_641_; 
v_inst_10__boxed_639_ = lean_unbox(v_inst_638_);
v_res_640_ = l_UDecidable_toDecidable(v_p_637_, v_inst_10__boxed_639_);
v_r_641_ = lean_box(v_res_640_);
return v_r_641_;
}
}
static uint8_t _init_l_UDecidable_instTrue(void){
_start:
{
uint8_t v___x_642_; 
v___x_642_ = 1;
return v___x_642_;
}
}
static uint8_t _init_l_UDecidable_instFalse(void){
_start:
{
uint8_t v___x_643_; 
v___x_643_ = 0;
return v___x_643_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNotImpl___redArg(uint8_t v_inst_644_){
_start:
{
if (v_inst_644_ == 0)
{
uint8_t v___x_645_; 
v___x_645_ = 1;
return v___x_645_;
}
else
{
uint8_t v___x_646_; 
v___x_646_ = 0;
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNotImpl___redArg___boxed(lean_object* v_inst_647_){
_start:
{
uint8_t v_inst_16__boxed_648_; uint8_t v_res_649_; lean_object* v_r_650_; 
v_inst_16__boxed_648_ = lean_unbox(v_inst_647_);
v_res_649_ = l_UDecidable_instNotImpl___redArg(v_inst_16__boxed_648_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNotImpl(lean_object* v_p_651_, uint8_t v_inst_652_){
_start:
{
if (v_inst_652_ == 0)
{
uint8_t v___x_653_; 
v___x_653_ = 1;
return v___x_653_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = 0;
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNotImpl___boxed(lean_object* v_p_655_, lean_object* v_inst_656_){
_start:
{
uint8_t v_inst_23__boxed_657_; uint8_t v_res_658_; lean_object* v_r_659_; 
v_inst_23__boxed_657_ = lean_unbox(v_inst_656_);
v_res_658_ = l_UDecidable_instNotImpl(v_p_655_, v_inst_23__boxed_657_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAndImpl___redArg(uint8_t v_inst_660_, uint8_t v_inst_661_){
_start:
{
if (v_inst_660_ == 0)
{
return v_inst_660_;
}
else
{
return v_inst_661_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAndImpl___redArg___boxed(lean_object* v_inst_662_, lean_object* v_inst_663_){
_start:
{
uint8_t v_inst_35__boxed_664_; uint8_t v_inst_36__boxed_665_; uint8_t v_res_666_; lean_object* v_r_667_; 
v_inst_35__boxed_664_ = lean_unbox(v_inst_662_);
v_inst_36__boxed_665_ = lean_unbox(v_inst_663_);
v_res_666_ = l_UDecidable_instAndImpl___redArg(v_inst_35__boxed_664_, v_inst_36__boxed_665_);
v_r_667_ = lean_box(v_res_666_);
return v_r_667_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAndImpl(lean_object* v_p_668_, lean_object* v_q_669_, uint8_t v_inst_670_, uint8_t v_inst_671_){
_start:
{
if (v_inst_670_ == 0)
{
return v_inst_670_;
}
else
{
return v_inst_671_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAndImpl___boxed(lean_object* v_p_672_, lean_object* v_q_673_, lean_object* v_inst_674_, lean_object* v_inst_675_){
_start:
{
uint8_t v_inst_41__boxed_676_; uint8_t v_inst_42__boxed_677_; uint8_t v_res_678_; lean_object* v_r_679_; 
v_inst_41__boxed_676_ = lean_unbox(v_inst_674_);
v_inst_42__boxed_677_ = lean_unbox(v_inst_675_);
v_res_678_ = l_UDecidable_instAndImpl(v_p_672_, v_q_673_, v_inst_41__boxed_676_, v_inst_42__boxed_677_);
v_r_679_ = lean_box(v_res_678_);
return v_r_679_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOrImpl___redArg(uint8_t v_inst_680_, uint8_t v_inst_681_){
_start:
{
if (v_inst_680_ == 0)
{
return v_inst_681_;
}
else
{
return v_inst_680_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOrImpl___redArg___boxed(lean_object* v_inst_682_, lean_object* v_inst_683_){
_start:
{
uint8_t v_inst_35__boxed_684_; uint8_t v_inst_36__boxed_685_; uint8_t v_res_686_; lean_object* v_r_687_; 
v_inst_35__boxed_684_ = lean_unbox(v_inst_682_);
v_inst_36__boxed_685_ = lean_unbox(v_inst_683_);
v_res_686_ = l_UDecidable_instOrImpl___redArg(v_inst_35__boxed_684_, v_inst_36__boxed_685_);
v_r_687_ = lean_box(v_res_686_);
return v_r_687_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOrImpl(lean_object* v_p_688_, lean_object* v_q_689_, uint8_t v_inst_690_, uint8_t v_inst_691_){
_start:
{
if (v_inst_690_ == 0)
{
return v_inst_691_;
}
else
{
return v_inst_690_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOrImpl___boxed(lean_object* v_p_692_, lean_object* v_q_693_, lean_object* v_inst_694_, lean_object* v_inst_695_){
_start:
{
uint8_t v_inst_41__boxed_696_; uint8_t v_inst_42__boxed_697_; uint8_t v_res_698_; lean_object* v_r_699_; 
v_inst_41__boxed_696_ = lean_unbox(v_inst_694_);
v_inst_42__boxed_697_ = lean_unbox(v_inst_695_);
v_res_698_ = l_UDecidable_instOrImpl(v_p_692_, v_q_693_, v_inst_41__boxed_696_, v_inst_42__boxed_697_);
v_r_699_ = lean_box(v_res_698_);
return v_r_699_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instImpImpl___redArg(uint8_t v_inst_700_, uint8_t v_inst_701_){
_start:
{
if (v_inst_700_ == 0)
{
uint8_t v___x_702_; 
v___x_702_ = 1;
return v___x_702_;
}
else
{
return v_inst_701_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instImpImpl___redArg___boxed(lean_object* v_inst_703_, lean_object* v_inst_704_){
_start:
{
uint8_t v_inst_53__boxed_705_; uint8_t v_inst_54__boxed_706_; uint8_t v_res_707_; lean_object* v_r_708_; 
v_inst_53__boxed_705_ = lean_unbox(v_inst_703_);
v_inst_54__boxed_706_ = lean_unbox(v_inst_704_);
v_res_707_ = l_UDecidable_instImpImpl___redArg(v_inst_53__boxed_705_, v_inst_54__boxed_706_);
v_r_708_ = lean_box(v_res_707_);
return v_r_708_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instImpImpl(lean_object* v_p_709_, lean_object* v_q_710_, uint8_t v_inst_711_, uint8_t v_inst_712_){
_start:
{
if (v_inst_711_ == 0)
{
uint8_t v___x_713_; 
v___x_713_ = 1;
return v___x_713_;
}
else
{
return v_inst_712_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instImpImpl___boxed(lean_object* v_p_714_, lean_object* v_q_715_, lean_object* v_inst_716_, lean_object* v_inst_717_){
_start:
{
uint8_t v_inst_61__boxed_718_; uint8_t v_inst_62__boxed_719_; uint8_t v_res_720_; lean_object* v_r_721_; 
v_inst_61__boxed_718_ = lean_unbox(v_inst_716_);
v_inst_62__boxed_719_ = lean_unbox(v_inst_717_);
v_res_720_ = l_UDecidable_instImpImpl(v_p_714_, v_q_715_, v_inst_61__boxed_718_, v_inst_62__boxed_719_);
v_r_721_ = lean_box(v_res_720_);
return v_r_721_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIffImpl___redArg(uint8_t v_inst_722_, uint8_t v_inst_723_){
_start:
{
if (v_inst_722_ == 0)
{
if (v_inst_723_ == 0)
{
uint8_t v___x_724_; 
v___x_724_ = 1;
return v___x_724_;
}
else
{
return v_inst_722_;
}
}
else
{
return v_inst_723_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIffImpl___redArg___boxed(lean_object* v_inst_725_, lean_object* v_inst_726_){
_start:
{
uint8_t v_inst_45__boxed_727_; uint8_t v_inst_46__boxed_728_; uint8_t v_res_729_; lean_object* v_r_730_; 
v_inst_45__boxed_727_ = lean_unbox(v_inst_725_);
v_inst_46__boxed_728_ = lean_unbox(v_inst_726_);
v_res_729_ = l_UDecidable_instIffImpl___redArg(v_inst_45__boxed_727_, v_inst_46__boxed_728_);
v_r_730_ = lean_box(v_res_729_);
return v_r_730_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIffImpl(lean_object* v_p_731_, lean_object* v_q_732_, uint8_t v_inst_733_, uint8_t v_inst_734_){
_start:
{
if (v_inst_733_ == 0)
{
if (v_inst_734_ == 0)
{
uint8_t v___x_735_; 
v___x_735_ = 1;
return v___x_735_;
}
else
{
return v_inst_733_;
}
}
else
{
return v_inst_734_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIffImpl___boxed(lean_object* v_p_736_, lean_object* v_q_737_, lean_object* v_inst_738_, lean_object* v_inst_739_){
_start:
{
uint8_t v_inst_53__boxed_740_; uint8_t v_inst_54__boxed_741_; uint8_t v_res_742_; lean_object* v_r_743_; 
v_inst_53__boxed_740_ = lean_unbox(v_inst_738_);
v_inst_54__boxed_741_ = lean_unbox(v_inst_739_);
v_res_742_ = l_UDecidable_instIffImpl(v_p_736_, v_q_737_, v_inst_53__boxed_740_, v_inst_54__boxed_741_);
v_r_743_ = lean_box(v_res_742_);
return v_r_743_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatEqImpl(lean_object* v_n_744_, lean_object* v_m_745_){
_start:
{
uint8_t v___x_746_; 
v___x_746_ = lean_nat_dec_eq(v_n_744_, v_m_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatEqImpl___boxed(lean_object* v_n_747_, lean_object* v_m_748_){
_start:
{
uint8_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = l_UDecidable_instNatEqImpl(v_n_747_, v_m_748_);
lean_dec(v_m_748_);
lean_dec(v_n_747_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLeImpl(lean_object* v_n_751_, lean_object* v_m_752_){
_start:
{
uint8_t v___x_753_; 
v___x_753_ = lean_nat_dec_le(v_n_751_, v_m_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLeImpl___boxed(lean_object* v_n_754_, lean_object* v_m_755_){
_start:
{
uint8_t v_res_756_; lean_object* v_r_757_; 
v_res_756_ = l_UDecidable_instNatLeImpl(v_n_754_, v_m_755_);
lean_dec(v_m_755_);
lean_dec(v_n_754_);
v_r_757_ = lean_box(v_res_756_);
return v_r_757_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLtImpl(lean_object* v_n_758_, lean_object* v_m_759_){
_start:
{
uint8_t v___x_760_; 
v___x_760_ = lean_nat_dec_lt(v_n_758_, v_m_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLtImpl___boxed(lean_object* v_n_761_, lean_object* v_m_762_){
_start:
{
uint8_t v_res_763_; lean_object* v_r_764_; 
v_res_763_ = l_UDecidable_instNatLtImpl(v_n_761_, v_m_762_);
lean_dec(v_m_762_);
lean_dec(v_n_761_);
v_r_764_ = lean_box(v_res_763_);
return v_r_764_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolEqImpl(uint8_t v_x_765_, uint8_t v_x_766_){
_start:
{
if (v_x_765_ == 0)
{
if (v_x_766_ == 0)
{
uint8_t v___x_767_; 
v___x_767_ = 1;
return v___x_767_;
}
else
{
return v_x_765_;
}
}
else
{
return v_x_766_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolEqImpl___boxed(lean_object* v_x_768_, lean_object* v_x_769_){
_start:
{
uint8_t v_x_39__boxed_770_; uint8_t v_x_40__boxed_771_; uint8_t v_res_772_; lean_object* v_r_773_; 
v_x_39__boxed_770_ = lean_unbox(v_x_768_);
v_x_40__boxed_771_ = lean_unbox(v_x_769_);
v_res_772_ = l_UDecidable_instBoolEqImpl(v_x_39__boxed_770_, v_x_40__boxed_771_);
v_r_773_ = lean_box(v_res_772_);
return v_r_773_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq___redArg(){
_start:
{
uint8_t v___x_775_; 
v___x_775_ = 1;
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___redArg___boxed(lean_object* v___dummy_776_){
_start:
{
uint8_t v_res_777_; lean_object* v_r_778_; 
v_res_777_ = l_UDecidable_instPUnitEq___redArg();
v_r_778_ = lean_box(v_res_777_);
return v_r_778_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq(lean_object* v_x_779_, lean_object* v_x_780_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = 1;
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___boxed(lean_object* v_x_782_, lean_object* v_x_783_){
_start:
{
uint8_t v_res_784_; lean_object* v_r_785_; 
v_res_784_ = l_UDecidable_instPUnitEq(v_x_782_, v_x_783_);
v_r_785_ = lean_box(v_res_784_);
return v_r_785_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinEqImpl___redArg(lean_object* v_i_786_, lean_object* v_j_787_){
_start:
{
uint8_t v___x_788_; 
v___x_788_ = lean_nat_dec_eq(v_i_786_, v_j_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinEqImpl___redArg___boxed(lean_object* v_i_789_, lean_object* v_j_790_){
_start:
{
uint8_t v_res_791_; lean_object* v_r_792_; 
v_res_791_ = l_UDecidable_instFinEqImpl___redArg(v_i_789_, v_j_790_);
lean_dec(v_j_790_);
lean_dec(v_i_789_);
v_r_792_ = lean_box(v_res_791_);
return v_r_792_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinEqImpl(lean_object* v_n_793_, lean_object* v_i_794_, lean_object* v_j_795_){
_start:
{
uint8_t v___x_796_; 
v___x_796_ = lean_nat_dec_eq(v_i_794_, v_j_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinEqImpl___boxed(lean_object* v_n_797_, lean_object* v_i_798_, lean_object* v_j_799_){
_start:
{
uint8_t v_res_800_; lean_object* v_r_801_; 
v_res_800_ = l_UDecidable_instFinEqImpl(v_n_797_, v_i_798_, v_j_799_);
lean_dec(v_j_799_);
lean_dec(v_i_798_);
lean_dec(v_n_797_);
v_r_801_ = lean_box(v_res_800_);
return v_r_801_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLe___redArg(lean_object* v_i_802_, lean_object* v_j_803_){
_start:
{
uint8_t v___x_804_; 
v___x_804_ = lean_nat_dec_le(v_i_802_, v_j_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___redArg___boxed(lean_object* v_i_805_, lean_object* v_j_806_){
_start:
{
uint8_t v_res_807_; lean_object* v_r_808_; 
v_res_807_ = l_UDecidable_instFinLe___redArg(v_i_805_, v_j_806_);
lean_dec(v_j_806_);
lean_dec(v_i_805_);
v_r_808_ = lean_box(v_res_807_);
return v_r_808_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLe(lean_object* v_n_809_, lean_object* v_i_810_, lean_object* v_j_811_){
_start:
{
uint8_t v___x_812_; 
v___x_812_ = lean_nat_dec_le(v_i_810_, v_j_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___boxed(lean_object* v_n_813_, lean_object* v_i_814_, lean_object* v_j_815_){
_start:
{
uint8_t v_res_816_; lean_object* v_r_817_; 
v_res_816_ = l_UDecidable_instFinLe(v_n_813_, v_i_814_, v_j_815_);
lean_dec(v_j_815_);
lean_dec(v_i_814_);
lean_dec(v_n_813_);
v_r_817_ = lean_box(v_res_816_);
return v_r_817_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLt___redArg(lean_object* v_i_818_, lean_object* v_j_819_){
_start:
{
uint8_t v___x_820_; 
v___x_820_ = lean_nat_dec_lt(v_i_818_, v_j_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___redArg___boxed(lean_object* v_i_821_, lean_object* v_j_822_){
_start:
{
uint8_t v_res_823_; lean_object* v_r_824_; 
v_res_823_ = l_UDecidable_instFinLt___redArg(v_i_821_, v_j_822_);
lean_dec(v_j_822_);
lean_dec(v_i_821_);
v_r_824_ = lean_box(v_res_823_);
return v_r_824_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLt(lean_object* v_n_825_, lean_object* v_i_826_, lean_object* v_j_827_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = lean_nat_dec_lt(v_i_826_, v_j_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___boxed(lean_object* v_n_829_, lean_object* v_i_830_, lean_object* v_j_831_){
_start:
{
uint8_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = l_UDecidable_instFinLt(v_n_829_, v_i_830_, v_j_831_);
lean_dec(v_j_831_);
lean_dec(v_i_830_);
lean_dec(v_n_829_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBitVecEqImpl___redArg(lean_object* v_x_834_, lean_object* v_y_835_){
_start:
{
uint8_t v___x_836_; 
v___x_836_ = lean_nat_dec_eq(v_x_834_, v_y_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBitVecEqImpl___redArg___boxed(lean_object* v_x_837_, lean_object* v_y_838_){
_start:
{
uint8_t v_res_839_; lean_object* v_r_840_; 
v_res_839_ = l_UDecidable_instBitVecEqImpl___redArg(v_x_837_, v_y_838_);
lean_dec(v_y_838_);
lean_dec(v_x_837_);
v_r_840_ = lean_box(v_res_839_);
return v_r_840_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBitVecEqImpl(lean_object* v_w_841_, lean_object* v_x_842_, lean_object* v_y_843_){
_start:
{
uint8_t v___x_844_; 
v___x_844_ = lean_nat_dec_eq(v_x_842_, v_y_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBitVecEqImpl___boxed(lean_object* v_w_845_, lean_object* v_x_846_, lean_object* v_y_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = l_UDecidable_instBitVecEqImpl(v_w_845_, v_x_846_, v_y_847_);
lean_dec(v_y_847_);
lean_dec(v_x_846_);
lean_dec(v_w_845_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8EqImpl(uint8_t v_a_850_, uint8_t v_b_851_){
_start:
{
uint8_t v___x_852_; 
v___x_852_ = lean_uint8_dec_eq(v_a_850_, v_b_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8EqImpl___boxed(lean_object* v_a_853_, lean_object* v_b_854_){
_start:
{
uint8_t v_a_boxed_855_; uint8_t v_b_boxed_856_; uint8_t v_res_857_; lean_object* v_r_858_; 
v_a_boxed_855_ = lean_unbox(v_a_853_);
v_b_boxed_856_ = lean_unbox(v_b_854_);
v_res_857_ = l_UDecidable_instUInt8EqImpl(v_a_boxed_855_, v_b_boxed_856_);
v_r_858_ = lean_box(v_res_857_);
return v_r_858_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt16EqImpl(uint16_t v_a_859_, uint16_t v_b_860_){
_start:
{
uint8_t v___x_861_; 
v___x_861_ = lean_uint16_dec_eq(v_a_859_, v_b_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt16EqImpl___boxed(lean_object* v_a_862_, lean_object* v_b_863_){
_start:
{
uint16_t v_a_boxed_864_; uint16_t v_b_boxed_865_; uint8_t v_res_866_; lean_object* v_r_867_; 
v_a_boxed_864_ = lean_unbox(v_a_862_);
v_b_boxed_865_ = lean_unbox(v_b_863_);
v_res_866_ = l_UDecidable_instUInt16EqImpl(v_a_boxed_864_, v_b_boxed_865_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32EqImpl(uint32_t v_a_868_, uint32_t v_b_869_){
_start:
{
uint8_t v___x_870_; 
v___x_870_ = lean_uint32_dec_eq(v_a_868_, v_b_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32EqImpl___boxed(lean_object* v_a_871_, lean_object* v_b_872_){
_start:
{
uint32_t v_a_boxed_873_; uint32_t v_b_boxed_874_; uint8_t v_res_875_; lean_object* v_r_876_; 
v_a_boxed_873_ = lean_unbox_uint32(v_a_871_);
lean_dec(v_a_871_);
v_b_boxed_874_ = lean_unbox_uint32(v_b_872_);
lean_dec(v_b_872_);
v_res_875_ = l_UDecidable_instUInt32EqImpl(v_a_boxed_873_, v_b_boxed_874_);
v_r_876_ = lean_box(v_res_875_);
return v_r_876_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt64EqImpl(uint64_t v_a_877_, uint64_t v_b_878_){
_start:
{
uint8_t v___x_879_; 
v___x_879_ = lean_uint64_dec_eq(v_a_877_, v_b_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt64EqImpl___boxed(lean_object* v_a_880_, lean_object* v_b_881_){
_start:
{
uint64_t v_a_boxed_882_; uint64_t v_b_boxed_883_; uint8_t v_res_884_; lean_object* v_r_885_; 
v_a_boxed_882_ = lean_unbox_uint64(v_a_880_);
lean_dec_ref(v_a_880_);
v_b_boxed_883_ = lean_unbox_uint64(v_b_881_);
lean_dec_ref(v_b_881_);
v_res_884_ = l_UDecidable_instUInt64EqImpl(v_a_boxed_882_, v_b_boxed_883_);
v_r_885_ = lean_box(v_res_884_);
return v_r_885_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUSizeEqImpl(size_t v_a_886_, size_t v_b_887_){
_start:
{
uint8_t v___x_888_; 
v___x_888_ = lean_usize_dec_eq(v_a_886_, v_b_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUSizeEqImpl___boxed(lean_object* v_a_889_, lean_object* v_b_890_){
_start:
{
size_t v_a_boxed_891_; size_t v_b_boxed_892_; uint8_t v_res_893_; lean_object* v_r_894_; 
v_a_boxed_891_ = lean_unbox_usize(v_a_889_);
lean_dec(v_a_889_);
v_b_boxed_892_ = lean_unbox_usize(v_b_890_);
lean_dec(v_b_890_);
v_res_893_ = l_UDecidable_instUSizeEqImpl(v_a_boxed_891_, v_b_boxed_892_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCharEqImpl(uint32_t v_c_895_, uint32_t v_d_896_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = lean_uint32_dec_eq(v_c_895_, v_d_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCharEqImpl___boxed(lean_object* v_c_898_, lean_object* v_d_899_){
_start:
{
uint32_t v_c_boxed_900_; uint32_t v_d_boxed_901_; uint8_t v_res_902_; lean_object* v_r_903_; 
v_c_boxed_900_ = lean_unbox_uint32(v_c_898_);
lean_dec(v_c_898_);
v_d_boxed_901_ = lean_unbox_uint32(v_d_899_);
lean_dec(v_d_899_);
v_res_902_ = l_UDecidable_instCharEqImpl(v_c_boxed_900_, v_d_boxed_901_);
v_r_903_ = lean_box(v_res_902_);
return v_r_903_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8LeImpl(uint8_t v_a_904_, uint8_t v_b_905_){
_start:
{
uint8_t v___x_906_; 
v___x_906_ = lean_uint8_dec_le(v_a_904_, v_b_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8LeImpl___boxed(lean_object* v_a_907_, lean_object* v_b_908_){
_start:
{
uint8_t v_a_boxed_909_; uint8_t v_b_boxed_910_; uint8_t v_res_911_; lean_object* v_r_912_; 
v_a_boxed_909_ = lean_unbox(v_a_907_);
v_b_boxed_910_ = lean_unbox(v_b_908_);
v_res_911_ = l_UDecidable_instUInt8LeImpl(v_a_boxed_909_, v_b_boxed_910_);
v_r_912_ = lean_box(v_res_911_);
return v_r_912_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8LtImpl(uint8_t v_a_913_, uint8_t v_b_914_){
_start:
{
uint8_t v___x_915_; 
v___x_915_ = lean_uint8_dec_lt(v_a_913_, v_b_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8LtImpl___boxed(lean_object* v_a_916_, lean_object* v_b_917_){
_start:
{
uint8_t v_a_boxed_918_; uint8_t v_b_boxed_919_; uint8_t v_res_920_; lean_object* v_r_921_; 
v_a_boxed_918_ = lean_unbox(v_a_916_);
v_b_boxed_919_ = lean_unbox(v_b_917_);
v_res_920_ = l_UDecidable_instUInt8LtImpl(v_a_boxed_918_, v_b_boxed_919_);
v_r_921_ = lean_box(v_res_920_);
return v_r_921_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32LeImpl(uint32_t v_a_922_, uint32_t v_b_923_){
_start:
{
uint8_t v___x_924_; 
v___x_924_ = lean_uint32_dec_le(v_a_922_, v_b_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32LeImpl___boxed(lean_object* v_a_925_, lean_object* v_b_926_){
_start:
{
uint32_t v_a_boxed_927_; uint32_t v_b_boxed_928_; uint8_t v_res_929_; lean_object* v_r_930_; 
v_a_boxed_927_ = lean_unbox_uint32(v_a_925_);
lean_dec(v_a_925_);
v_b_boxed_928_ = lean_unbox_uint32(v_b_926_);
lean_dec(v_b_926_);
v_res_929_ = l_UDecidable_instUInt32LeImpl(v_a_boxed_927_, v_b_boxed_928_);
v_r_930_ = lean_box(v_res_929_);
return v_r_930_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32LtImpl(uint32_t v_a_931_, uint32_t v_b_932_){
_start:
{
uint8_t v___x_933_; 
v___x_933_ = lean_uint32_dec_lt(v_a_931_, v_b_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32LtImpl___boxed(lean_object* v_a_934_, lean_object* v_b_935_){
_start:
{
uint32_t v_a_boxed_936_; uint32_t v_b_boxed_937_; uint8_t v_res_938_; lean_object* v_r_939_; 
v_a_boxed_936_ = lean_unbox_uint32(v_a_934_);
lean_dec(v_a_934_);
v_b_boxed_937_ = lean_unbox_uint32(v_b_935_);
lean_dec(v_b_935_);
v_res_938_ = l_UDecidable_instUInt32LtImpl(v_a_boxed_936_, v_b_boxed_937_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringEqImpl(lean_object* v_s_u2081_940_, lean_object* v_s_u2082_941_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = lean_string_dec_eq(v_s_u2081_940_, v_s_u2082_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringEqImpl___boxed(lean_object* v_s_u2081_943_, lean_object* v_s_u2082_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l_UDecidable_instStringEqImpl(v_s_u2081_943_, v_s_u2082_944_);
lean_dec_ref(v_s_u2082_944_);
lean_dec_ref(v_s_u2081_943_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOptionEqImpl___redArg(lean_object* v_inst_947_, lean_object* v_x_948_, lean_object* v_x_949_){
_start:
{
if (lean_obj_tag(v_x_948_) == 0)
{
lean_dec_ref(v_inst_947_);
if (lean_obj_tag(v_x_949_) == 0)
{
uint8_t v___x_950_; 
v___x_950_ = 1;
return v___x_950_;
}
else
{
uint8_t v___x_951_; 
lean_dec_ref_known(v_x_949_, 1);
v___x_951_ = 0;
return v___x_951_;
}
}
else
{
if (lean_obj_tag(v_x_949_) == 0)
{
uint8_t v___x_952_; 
lean_dec_ref_known(v_x_948_, 1);
lean_dec_ref(v_inst_947_);
v___x_952_ = 0;
return v___x_952_;
}
else
{
lean_object* v_val_953_; lean_object* v_val_954_; lean_object* v___x_955_; uint8_t v___x_956_; 
v_val_953_ = lean_ctor_get(v_x_948_, 0);
lean_inc(v_val_953_);
lean_dec_ref_known(v_x_948_, 1);
v_val_954_ = lean_ctor_get(v_x_949_, 0);
lean_inc(v_val_954_);
lean_dec_ref_known(v_x_949_, 1);
v___x_955_ = lean_apply_2(v_inst_947_, v_val_953_, v_val_954_);
v___x_956_ = lean_unbox(v___x_955_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOptionEqImpl___redArg___boxed(lean_object* v_inst_957_, lean_object* v_x_958_, lean_object* v_x_959_){
_start:
{
uint8_t v_res_960_; lean_object* v_r_961_; 
v_res_960_ = l_UDecidable_instOptionEqImpl___redArg(v_inst_957_, v_x_958_, v_x_959_);
v_r_961_ = lean_box(v_res_960_);
return v_r_961_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOptionEqImpl(lean_object* v_00_u03b1_962_, lean_object* v_inst_963_, lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
if (lean_obj_tag(v_x_964_) == 0)
{
lean_dec_ref(v_inst_963_);
if (lean_obj_tag(v_x_965_) == 0)
{
uint8_t v___x_966_; 
v___x_966_ = 1;
return v___x_966_;
}
else
{
uint8_t v___x_967_; 
lean_dec_ref_known(v_x_965_, 1);
v___x_967_ = 0;
return v___x_967_;
}
}
else
{
if (lean_obj_tag(v_x_965_) == 0)
{
uint8_t v___x_968_; 
lean_dec_ref_known(v_x_964_, 1);
lean_dec_ref(v_inst_963_);
v___x_968_ = 0;
return v___x_968_;
}
else
{
lean_object* v_val_969_; lean_object* v_val_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v_val_969_ = lean_ctor_get(v_x_964_, 0);
lean_inc(v_val_969_);
lean_dec_ref_known(v_x_964_, 1);
v_val_970_ = lean_ctor_get(v_x_965_, 0);
lean_inc(v_val_970_);
lean_dec_ref_known(v_x_965_, 1);
v___x_971_ = lean_apply_2(v_inst_963_, v_val_969_, v_val_970_);
v___x_972_ = lean_unbox(v___x_971_);
return v___x_972_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOptionEqImpl___boxed(lean_object* v_00_u03b1_973_, lean_object* v_inst_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
uint8_t v_res_977_; lean_object* v_r_978_; 
v_res_977_ = l_UDecidable_instOptionEqImpl(v_00_u03b1_973_, v_inst_974_, v_x_975_, v_x_976_);
v_r_978_ = lean_box(v_res_977_);
return v_r_978_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSomeImpl___redArg(lean_object* v_o_979_, lean_object* v_inst_980_){
_start:
{
if (lean_obj_tag(v_o_979_) == 0)
{
uint8_t v___x_981_; 
lean_dec_ref(v_inst_980_);
v___x_981_ = 1;
return v___x_981_;
}
else
{
lean_object* v_val_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v_val_982_ = lean_ctor_get(v_o_979_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v_o_979_, 1);
v___x_983_ = lean_apply_1(v_inst_980_, v_val_982_);
v___x_984_ = lean_unbox(v___x_983_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSomeImpl___redArg___boxed(lean_object* v_o_985_, lean_object* v_inst_986_){
_start:
{
uint8_t v_res_987_; lean_object* v_r_988_; 
v_res_987_ = l_UDecidable_instForallOptionEqSomeImpl___redArg(v_o_985_, v_inst_986_);
v_r_988_ = lean_box(v_res_987_);
return v_r_988_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSomeImpl(lean_object* v_00_u03b1_989_, lean_object* v_o_990_, lean_object* v_p_991_, lean_object* v_inst_992_){
_start:
{
if (lean_obj_tag(v_o_990_) == 0)
{
uint8_t v___x_993_; 
lean_dec_ref(v_inst_992_);
v___x_993_ = 1;
return v___x_993_;
}
else
{
lean_object* v_val_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v_val_994_ = lean_ctor_get(v_o_990_, 0);
lean_inc(v_val_994_);
lean_dec_ref_known(v_o_990_, 1);
v___x_995_ = lean_apply_1(v_inst_992_, v_val_994_);
v___x_996_ = lean_unbox(v___x_995_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSomeImpl___boxed(lean_object* v_00_u03b1_997_, lean_object* v_o_998_, lean_object* v_p_999_, lean_object* v_inst_1000_){
_start:
{
uint8_t v_res_1001_; lean_object* v_r_1002_; 
v_res_1001_ = l_UDecidable_instForallOptionEqSomeImpl(v_00_u03b1_997_, v_o_998_, v_p_999_, v_inst_1000_);
v_r_1002_ = lean_box(v_res_1001_);
return v_r_1002_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instProdEqImpl___redArg(lean_object* v_inst_1003_, lean_object* v_inst_1004_, lean_object* v_x_1005_, lean_object* v_x_1006_){
_start:
{
lean_object* v_fst_1007_; lean_object* v_snd_1008_; lean_object* v_fst_1009_; lean_object* v_snd_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_fst_1007_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_fst_1007_);
v_snd_1008_ = lean_ctor_get(v_x_1005_, 1);
lean_inc(v_snd_1008_);
lean_dec_ref(v_x_1005_);
v_fst_1009_ = lean_ctor_get(v_x_1006_, 0);
lean_inc(v_fst_1009_);
v_snd_1010_ = lean_ctor_get(v_x_1006_, 1);
lean_inc(v_snd_1010_);
lean_dec_ref(v_x_1006_);
v___x_1011_ = lean_apply_2(v_inst_1003_, v_fst_1007_, v_fst_1009_);
v___x_1012_ = lean_unbox(v___x_1011_);
if (v___x_1012_ == 0)
{
uint8_t v___x_1013_; 
lean_dec(v_snd_1010_);
lean_dec(v_snd_1008_);
lean_dec_ref(v_inst_1004_);
v___x_1013_ = lean_unbox(v___x_1011_);
return v___x_1013_;
}
else
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = lean_apply_2(v_inst_1004_, v_snd_1008_, v_snd_1010_);
v___x_1015_ = lean_unbox(v___x_1014_);
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instProdEqImpl___redArg___boxed(lean_object* v_inst_1016_, lean_object* v_inst_1017_, lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
uint8_t v_res_1020_; lean_object* v_r_1021_; 
v_res_1020_ = l_UDecidable_instProdEqImpl___redArg(v_inst_1016_, v_inst_1017_, v_x_1018_, v_x_1019_);
v_r_1021_ = lean_box(v_res_1020_);
return v_r_1021_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instProdEqImpl(lean_object* v_00_u03b1_1022_, lean_object* v_00_u03b2_1023_, lean_object* v_inst_1024_, lean_object* v_inst_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_){
_start:
{
lean_object* v_fst_1028_; lean_object* v_snd_1029_; lean_object* v_fst_1030_; lean_object* v_snd_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v_fst_1028_ = lean_ctor_get(v_x_1026_, 0);
lean_inc(v_fst_1028_);
v_snd_1029_ = lean_ctor_get(v_x_1026_, 1);
lean_inc(v_snd_1029_);
lean_dec_ref(v_x_1026_);
v_fst_1030_ = lean_ctor_get(v_x_1027_, 0);
lean_inc(v_fst_1030_);
v_snd_1031_ = lean_ctor_get(v_x_1027_, 1);
lean_inc(v_snd_1031_);
lean_dec_ref(v_x_1027_);
v___x_1032_ = lean_apply_2(v_inst_1024_, v_fst_1028_, v_fst_1030_);
v___x_1033_ = lean_unbox(v___x_1032_);
if (v___x_1033_ == 0)
{
uint8_t v___x_1034_; 
lean_dec(v_snd_1031_);
lean_dec(v_snd_1029_);
lean_dec_ref(v_inst_1025_);
v___x_1034_ = lean_unbox(v___x_1032_);
return v___x_1034_;
}
else
{
lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1035_ = lean_apply_2(v_inst_1025_, v_snd_1029_, v_snd_1031_);
v___x_1036_ = lean_unbox(v___x_1035_);
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instProdEqImpl___boxed(lean_object* v_00_u03b1_1037_, lean_object* v_00_u03b2_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
uint8_t v_res_1043_; lean_object* v_r_1044_; 
v_res_1043_ = l_UDecidable_instProdEqImpl(v_00_u03b1_1037_, v_00_u03b2_1038_, v_inst_1039_, v_inst_1040_, v_x_1041_, v_x_1042_);
v_r_1044_ = lean_box(v_res_1043_);
return v_r_1044_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSumEqImpl___redArg(lean_object* v_inst_1045_, lean_object* v_inst_1046_, lean_object* v_x_1047_, lean_object* v_x_1048_){
_start:
{
if (lean_obj_tag(v_x_1047_) == 0)
{
lean_dec_ref(v_inst_1046_);
if (lean_obj_tag(v_x_1048_) == 0)
{
lean_object* v_val_1049_; lean_object* v_val_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_val_1049_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_val_1049_);
lean_dec_ref_known(v_x_1047_, 1);
v_val_1050_ = lean_ctor_get(v_x_1048_, 0);
lean_inc(v_val_1050_);
lean_dec_ref_known(v_x_1048_, 1);
v___x_1051_ = lean_apply_2(v_inst_1045_, v_val_1049_, v_val_1050_);
v___x_1052_ = lean_unbox(v___x_1051_);
return v___x_1052_;
}
else
{
uint8_t v___x_1053_; 
lean_dec_ref_known(v_x_1048_, 1);
lean_dec_ref_known(v_x_1047_, 1);
lean_dec_ref(v_inst_1045_);
v___x_1053_ = 0;
return v___x_1053_;
}
}
else
{
lean_dec_ref(v_inst_1045_);
if (lean_obj_tag(v_x_1048_) == 0)
{
uint8_t v___x_1054_; 
lean_dec_ref_known(v_x_1048_, 1);
lean_dec_ref_known(v_x_1047_, 1);
lean_dec_ref(v_inst_1046_);
v___x_1054_ = 0;
return v___x_1054_;
}
else
{
lean_object* v_val_1055_; lean_object* v_val_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_val_1055_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_val_1055_);
lean_dec_ref_known(v_x_1047_, 1);
v_val_1056_ = lean_ctor_get(v_x_1048_, 0);
lean_inc(v_val_1056_);
lean_dec_ref_known(v_x_1048_, 1);
v___x_1057_ = lean_apply_2(v_inst_1046_, v_val_1055_, v_val_1056_);
v___x_1058_ = lean_unbox(v___x_1057_);
return v___x_1058_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSumEqImpl___redArg___boxed(lean_object* v_inst_1059_, lean_object* v_inst_1060_, lean_object* v_x_1061_, lean_object* v_x_1062_){
_start:
{
uint8_t v_res_1063_; lean_object* v_r_1064_; 
v_res_1063_ = l_UDecidable_instSumEqImpl___redArg(v_inst_1059_, v_inst_1060_, v_x_1061_, v_x_1062_);
v_r_1064_ = lean_box(v_res_1063_);
return v_r_1064_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSumEqImpl(lean_object* v_00_u03b1_1065_, lean_object* v_00_u03b2_1066_, lean_object* v_inst_1067_, lean_object* v_inst_1068_, lean_object* v_x_1069_, lean_object* v_x_1070_){
_start:
{
if (lean_obj_tag(v_x_1069_) == 0)
{
lean_dec_ref(v_inst_1068_);
if (lean_obj_tag(v_x_1070_) == 0)
{
lean_object* v_val_1071_; lean_object* v_val_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_val_1071_ = lean_ctor_get(v_x_1069_, 0);
lean_inc(v_val_1071_);
lean_dec_ref_known(v_x_1069_, 1);
v_val_1072_ = lean_ctor_get(v_x_1070_, 0);
lean_inc(v_val_1072_);
lean_dec_ref_known(v_x_1070_, 1);
v___x_1073_ = lean_apply_2(v_inst_1067_, v_val_1071_, v_val_1072_);
v___x_1074_ = lean_unbox(v___x_1073_);
return v___x_1074_;
}
else
{
uint8_t v___x_1075_; 
lean_dec_ref_known(v_x_1070_, 1);
lean_dec_ref_known(v_x_1069_, 1);
lean_dec_ref(v_inst_1067_);
v___x_1075_ = 0;
return v___x_1075_;
}
}
else
{
lean_dec_ref(v_inst_1067_);
if (lean_obj_tag(v_x_1070_) == 0)
{
uint8_t v___x_1076_; 
lean_dec_ref_known(v_x_1070_, 1);
lean_dec_ref_known(v_x_1069_, 1);
lean_dec_ref(v_inst_1068_);
v___x_1076_ = 0;
return v___x_1076_;
}
else
{
lean_object* v_val_1077_; lean_object* v_val_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v_val_1077_ = lean_ctor_get(v_x_1069_, 0);
lean_inc(v_val_1077_);
lean_dec_ref_known(v_x_1069_, 1);
v_val_1078_ = lean_ctor_get(v_x_1070_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v_x_1070_, 1);
v___x_1079_ = lean_apply_2(v_inst_1068_, v_val_1077_, v_val_1078_);
v___x_1080_ = lean_unbox(v___x_1079_);
return v___x_1080_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSumEqImpl___boxed(lean_object* v_00_u03b1_1081_, lean_object* v_00_u03b2_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_x_1085_, lean_object* v_x_1086_){
_start:
{
uint8_t v_res_1087_; lean_object* v_r_1088_; 
v_res_1087_ = l_UDecidable_instSumEqImpl(v_00_u03b1_1081_, v_00_u03b2_1082_, v_inst_1083_, v_inst_1084_, v_x_1085_, v_x_1086_);
v_r_1088_ = lean_box(v_res_1087_);
return v_r_1088_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEqImpl___redArg(lean_object* v_inst_1089_, lean_object* v_a_1090_, lean_object* v_b_1091_){
_start:
{
lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1092_ = lean_apply_2(v_inst_1089_, v_a_1090_, v_b_1091_);
v___x_1093_ = lean_unbox(v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEqImpl___redArg___boxed(lean_object* v_inst_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_){
_start:
{
uint8_t v_res_1097_; lean_object* v_r_1098_; 
v_res_1097_ = l_UDecidable_instSubtypeEqImpl___redArg(v_inst_1094_, v_a_1095_, v_b_1096_);
v_r_1098_ = lean_box(v_res_1097_);
return v_r_1098_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEqImpl(lean_object* v_00_u03b1_1099_, lean_object* v_p_1100_, lean_object* v_inst_1101_, lean_object* v_a_1102_, lean_object* v_b_1103_){
_start:
{
lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1104_ = lean_apply_2(v_inst_1101_, v_a_1102_, v_b_1103_);
v___x_1105_ = lean_unbox(v___x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEqImpl___boxed(lean_object* v_00_u03b1_1106_, lean_object* v_p_1107_, lean_object* v_inst_1108_, lean_object* v_a_1109_, lean_object* v_b_1110_){
_start:
{
uint8_t v_res_1111_; lean_object* v_r_1112_; 
v_res_1111_ = l_UDecidable_instSubtypeEqImpl(v_00_u03b1_1106_, v_p_1107_, v_inst_1108_, v_a_1109_, v_b_1110_);
v_r_1112_ = lean_box(v_res_1111_);
return v_r_1112_;
}
}
lean_object* runtime_initialize_Init_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_UDecidable_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UDecidable_instTrue = _init_l_UDecidable_instTrue();
l_UDecidable_instFalse = _init_l_UDecidable_instFalse();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_UDecidable_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_UDecidable_termDepUIfThenElse = _init_l_UDecidable_termDepUIfThenElse();
lean_mark_persistent(l_UDecidable_termDepUIfThenElse);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_UDecidable_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_UDecidable_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_UDecidable_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
