// Lean compiler output
// Module: Init.UDecidable
// Imports: public import Init.Data.Nat.Basic public import Init.PropLemmas import Init.Data.Bool import Init.Classical public import Init.BinderNameHint
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
extern lean_object* l_Lean_binderIdent;
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_once_cell_t l_Int_Internal_isNonneg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_isNonneg___closed__0;
LEAN_EXPORT uint8_t l_Int_Internal_isNonneg(lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_isNonneg___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_ble___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_blt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_UDecidable_instTrue;
LEAN_EXPORT uint8_t l_UDecidable_instFalse;
LEAN_EXPORT uint8_t l_UDecidable_instImp___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instImp___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instImp(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIff___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instIff___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIff(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instBoolEq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instBoolEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq___redArg();
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIntEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instIntEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIntLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instIntLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instIntLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instIntLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLe___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instFinLt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Eq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Eq(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Eq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instUSizeEq(size_t, size_t);
LEAN_EXPORT lean_object* l_UDecidable_instUSizeEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instCharEq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UDecidable_instCharEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOptionEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instOptionEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instOptionEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instOptionEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSome___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSome___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSome(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSome___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instProdEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instProdEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instProdEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instProdEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSumEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSumEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSumEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSumEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqNil___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqNil___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqNil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqNil___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListNilEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListNilEq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListNilEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListNilEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_Internal_isNonneg___closed__0(void){
_start:
{
lean_object* v_natZero_1_; lean_object* v_intZero_2_; 
v_natZero_1_ = lean_unsigned_to_nat(0u);
v_intZero_2_ = lean_nat_to_int(v_natZero_1_);
return v_intZero_2_;
}
}
LEAN_EXPORT uint8_t l_Int_Internal_isNonneg(lean_object* v_x_3_){
_start:
{
lean_object* v_intZero_4_; uint8_t v_isNeg_5_; 
v_intZero_4_ = lean_obj_once(&l_Int_Internal_isNonneg___closed__0, &l_Int_Internal_isNonneg___closed__0_once, _init_l_Int_Internal_isNonneg___closed__0);
v_isNeg_5_ = lean_int_dec_lt(v_x_3_, v_intZero_4_);
if (v_isNeg_5_ == 0)
{
uint8_t v___x_6_; 
v___x_6_ = 1;
return v___x_6_;
}
else
{
uint8_t v___x_7_; 
v___x_7_ = 0;
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_isNonneg___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = l_Int_Internal_isNonneg(v_x_8_);
lean_dec(v_x_8_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_ble___boxed(lean_object* v_a_13_, lean_object* v_b_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = lean_int_dec_le(v_a_13_, v_b_14_);
lean_dec(v_b_14_);
lean_dec(v_a_13_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_blt___boxed(lean_object* v_a_19_, lean_object* v_b_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = lean_int_dec_lt(v_a_19_, v_b_20_);
lean_dec(v_b_20_);
lean_dec(v_a_19_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(uint8_t v_i_23_){
_start:
{
return v_i_23_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg___boxed(lean_object* v_i_24_){
_start:
{
uint8_t v_i_boxed_25_; uint8_t v_res_26_; lean_object* v_r_27_; 
v_i_boxed_25_ = lean_unbox(v_i_24_);
v_res_26_ = l___private_Init_UDecidable_0__UDecidable_decideImpl___redArg(v_i_boxed_25_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_decideImpl(lean_object* v_p_28_, uint8_t v_i_29_){
_start:
{
return v_i_29_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_decideImpl___boxed(lean_object* v_p_30_, lean_object* v_i_31_){
_start:
{
uint8_t v_i_boxed_32_; uint8_t v_res_33_; lean_object* v_r_34_; 
v_i_boxed_32_ = lean_unbox(v_i_31_);
v_res_33_ = l___private_Init_UDecidable_0__UDecidable_decideImpl(v_p_30_, v_i_boxed_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool___redArg(uint8_t v_inst_35_){
_start:
{
return v_inst_35_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___redArg___boxed(lean_object* v_inst_36_){
_start:
{
uint8_t v_inst_7__boxed_37_; uint8_t v_res_38_; lean_object* v_r_39_; 
v_inst_7__boxed_37_ = lean_unbox(v_inst_36_);
v_res_38_ = l_UDecidable_instCoeDepBool___redArg(v_inst_7__boxed_37_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCoeDepBool(lean_object* v_p_40_, uint8_t v_inst_41_){
_start:
{
return v_inst_41_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCoeDepBool___boxed(lean_object* v_p_42_, lean_object* v_inst_43_){
_start:
{
uint8_t v_inst_10__boxed_44_; uint8_t v_res_45_; lean_object* v_r_46_; 
v_inst_10__boxed_44_ = lean_unbox(v_inst_43_);
v_res_45_ = l_UDecidable_instCoeDepBool(v_p_42_, v_inst_10__boxed_44_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg(uint8_t v_b_47_){
_start:
{
return v_b_47_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg___boxed(lean_object* v_b_48_){
_start:
{
uint8_t v_b_boxed_49_; uint8_t v_res_50_; lean_object* v_r_51_; 
v_b_boxed_49_ = lean_unbox(v_b_48_);
v_res_50_ = l___private_Init_UDecidable_0__UDecidable_mkImpl___redArg(v_b_boxed_49_);
v_r_51_ = lean_box(v_res_50_);
return v_r_51_;
}
}
LEAN_EXPORT uint8_t l___private_Init_UDecidable_0__UDecidable_mkImpl(lean_object* v_p_52_, uint8_t v_b_53_, lean_object* v_x_54_){
_start:
{
return v_b_53_;
}
}
LEAN_EXPORT lean_object* l___private_Init_UDecidable_0__UDecidable_mkImpl___boxed(lean_object* v_p_55_, lean_object* v_b_56_, lean_object* v_x_57_){
_start:
{
uint8_t v_b_boxed_58_; uint8_t v_res_59_; lean_object* v_r_60_; 
v_b_boxed_58_ = lean_unbox(v_b_56_);
v_res_59_ = l___private_Init_UDecidable_0__UDecidable_mkImpl(v_p_55_, v_b_boxed_58_, v_x_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__13(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = l_Lean_binderIdent;
v___x_82_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__12));
v___x_83_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_84_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_82_);
lean_ctor_set(v___x_84_, 2, v___x_81_);
return v___x_84_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__16(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_88_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__15));
v___x_89_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__13, &l_UDecidable_termDepUIfThenElse___closed__13_once, _init_l_UDecidable_termDepUIfThenElse___closed__13);
v___x_90_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_91_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
lean_ctor_set(v___x_91_, 2, v___x_88_);
return v___x_91_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__20(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_99_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__16, &l_UDecidable_termDepUIfThenElse___closed__16_once, _init_l_UDecidable_termDepUIfThenElse___closed__16);
v___x_100_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_101_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
lean_ctor_set(v___x_101_, 2, v___x_98_);
return v___x_101_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__23(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__22));
v___x_106_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__20, &l_UDecidable_termDepUIfThenElse___closed__20_once, _init_l_UDecidable_termDepUIfThenElse___closed__20);
v___x_107_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_108_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_105_);
return v___x_108_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__24(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__23, &l_UDecidable_termDepUIfThenElse___closed__23_once, _init_l_UDecidable_termDepUIfThenElse___closed__23);
v___x_110_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__10));
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__28(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__27));
v___x_118_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__24, &l_UDecidable_termDepUIfThenElse___closed__24_once, _init_l_UDecidable_termDepUIfThenElse___closed__24);
v___x_119_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_120_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__29(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__19));
v___x_122_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__28, &l_UDecidable_termDepUIfThenElse___closed__28_once, _init_l_UDecidable_termDepUIfThenElse___closed__28);
v___x_123_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_124_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__30(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__29, &l_UDecidable_termDepUIfThenElse___closed__29_once, _init_l_UDecidable_termDepUIfThenElse___closed__29);
v___x_126_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__8));
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__34(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_134_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__33));
v___x_135_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__30, &l_UDecidable_termDepUIfThenElse___closed__30_once, _init_l_UDecidable_termDepUIfThenElse___closed__30);
v___x_136_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_137_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_135_);
lean_ctor_set(v___x_137_, 2, v___x_134_);
return v___x_137_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__39(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_148_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__38));
v___x_149_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__34, &l_UDecidable_termDepUIfThenElse___closed__34_once, _init_l_UDecidable_termDepUIfThenElse___closed__34);
v___x_150_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__6));
v___x_151_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_149_);
lean_ctor_set(v___x_151_, 2, v___x_148_);
return v___x_151_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__40(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__39, &l_UDecidable_termDepUIfThenElse___closed__39_once, _init_l_UDecidable_termDepUIfThenElse___closed__39);
v___x_153_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__4));
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse___closed__41(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__40, &l_UDecidable_termDepUIfThenElse___closed__40_once, _init_l_UDecidable_termDepUIfThenElse___closed__40);
v___x_156_ = lean_unsigned_to_nat(1022u);
v___x_157_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
v___x_158_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
lean_ctor_set(v___x_158_, 2, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_UDecidable_termDepUIfThenElse(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l_UDecidable_termDepUIfThenElse___closed__41, &l_UDecidable_termDepUIfThenElse___closed__41_once, _init_l_UDecidable_termDepUIfThenElse___closed__41);
return v___x_159_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__11));
v___x_184_ = l_String_toRawSubstring_x27(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__28));
v___x_221_ = l_String_toRawSubstring_x27(v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Array_mkArray0___redArg();
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1(lean_object* v_x_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = ((lean_object*)(l_UDecidable_termDepUIfThenElse___closed__2));
lean_inc(v_x_245_);
v___x_249_ = l_Lean_Syntax_isOfKind(v_x_245_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v_x_245_);
v___x_250_ = lean_box(1);
v___x_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v_a_247_);
return v___x_251_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = l_Lean_Syntax_getArg(v_x_245_, v___x_252_);
v___x_254_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__2));
lean_inc(v___x_253_);
v___x_255_ = l_Lean_Syntax_isOfKind(v___x_253_, v___x_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v___x_253_);
lean_dec(v_x_245_);
v___x_256_ = lean_box(1);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v_a_247_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = l_Lean_Syntax_getArg(v___x_253_, v___x_258_);
lean_dec(v___x_253_);
v___x_260_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__4));
lean_inc(v___x_259_);
v___x_261_ = l_Lean_Syntax_isOfKind(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__8));
lean_inc(v___x_259_);
v___x_263_ = l_Lean_Syntax_isOfKind(v___x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v___x_259_);
lean_dec(v_x_245_);
v___x_264_ = lean_box(1);
v___x_265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v_a_247_);
return v___x_265_;
}
else
{
lean_object* v_quotContext_266_; lean_object* v_currMacroScope_267_; lean_object* v_ref_268_; lean_object* v_h_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_quotContext_266_ = lean_ctor_get(v_a_246_, 1);
v_currMacroScope_267_ = lean_ctor_get(v_a_246_, 2);
v_ref_268_ = lean_ctor_get(v_a_246_, 5);
v_h_269_ = l_Lean_Syntax_getArg(v___x_259_, v___x_258_);
lean_dec(v___x_259_);
v___x_270_ = lean_unsigned_to_nat(3u);
v___x_271_ = l_Lean_Syntax_getArg(v_x_245_, v___x_270_);
v___x_272_ = lean_unsigned_to_nat(5u);
v___x_273_ = l_Lean_Syntax_getArg(v_x_245_, v___x_272_);
v___x_274_ = lean_unsigned_to_nat(7u);
v___x_275_ = l_Lean_Syntax_getArg(v_x_245_, v___x_274_);
lean_dec(v_x_245_);
v___x_276_ = l_Lean_SourceInfo_fromRef(v_ref_268_, v___x_261_);
v___x_277_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_278_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12);
v___x_279_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_267_, 2);
lean_inc_n(v_quotContext_266_, 2);
v___x_280_ = l_Lean_addMacroScope(v_quotContext_266_, v___x_279_, v_currMacroScope_267_);
v___x_281_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
lean_inc_n(v___x_276_, 18);
v___x_282_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_282_, 0, v___x_276_);
lean_ctor_set(v___x_282_, 1, v___x_278_);
lean_ctor_set(v___x_282_, 2, v___x_280_);
lean_ctor_set(v___x_282_, 3, v___x_281_);
v___x_283_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_284_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_285_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_286_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25));
v___x_287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_276_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27));
v___x_289_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29);
v___x_290_ = lean_box(0);
v___x_291_ = l_Lean_addMacroScope(v_quotContext_266_, v___x_290_, v_currMacroScope_267_);
v___x_292_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_293_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_293_, 0, v___x_276_);
lean_ctor_set(v___x_293_, 1, v___x_289_);
lean_ctor_set(v___x_293_, 2, v___x_291_);
lean_ctor_set(v___x_293_, 3, v___x_292_);
v___x_294_ = l_Lean_Syntax_node1(v___x_276_, v___x_288_, v___x_293_);
v___x_295_ = l_Lean_Syntax_node2(v___x_276_, v___x_285_, v___x_287_, v___x_294_);
v___x_296_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33));
v___x_297_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_298_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_276_);
lean_ctor_set(v___x_298_, 1, v___x_296_);
v___x_299_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_300_ = l_Lean_SourceInfo_fromRef(v_h_269_, v___x_263_);
lean_dec(v_h_269_);
v___x_301_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__37));
v___x_302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = l_Lean_Syntax_node1(v___x_276_, v___x_262_, v___x_302_);
v___x_304_ = l_Lean_Syntax_node1(v___x_276_, v___x_283_, v___x_303_);
v___x_305_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38);
v___x_306_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_306_, 0, v___x_276_);
lean_ctor_set(v___x_306_, 1, v___x_283_);
lean_ctor_set(v___x_306_, 2, v___x_305_);
v___x_307_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_276_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
lean_inc_ref(v___x_308_);
lean_inc_ref(v___x_306_);
lean_inc(v___x_304_);
v___x_309_ = l_Lean_Syntax_node4(v___x_276_, v___x_299_, v___x_304_, v___x_306_, v___x_308_, v___x_273_);
lean_inc_ref(v___x_298_);
v___x_310_ = l_Lean_Syntax_node2(v___x_276_, v___x_297_, v___x_298_, v___x_309_);
v___x_311_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40));
v___x_312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_276_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
lean_inc_ref(v___x_312_);
lean_inc(v___x_295_);
v___x_313_ = l_Lean_Syntax_node3(v___x_276_, v___x_284_, v___x_295_, v___x_310_, v___x_312_);
v___x_314_ = l_Lean_Syntax_node4(v___x_276_, v___x_299_, v___x_304_, v___x_306_, v___x_308_, v___x_275_);
v___x_315_ = l_Lean_Syntax_node2(v___x_276_, v___x_297_, v___x_298_, v___x_314_);
v___x_316_ = l_Lean_Syntax_node3(v___x_276_, v___x_284_, v___x_295_, v___x_315_, v___x_312_);
v___x_317_ = l_Lean_Syntax_node3(v___x_276_, v___x_283_, v___x_271_, v___x_313_, v___x_316_);
v___x_318_ = l_Lean_Syntax_node2(v___x_276_, v___x_277_, v___x_282_, v___x_317_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v_a_247_);
return v___x_319_;
}
}
else
{
lean_object* v_quotContext_320_; lean_object* v_currMacroScope_321_; lean_object* v_ref_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_quotContext_320_ = lean_ctor_get(v_a_246_, 1);
v_currMacroScope_321_ = lean_ctor_get(v_a_246_, 2);
v_ref_322_ = lean_ctor_get(v_a_246_, 5);
v___x_323_ = lean_unsigned_to_nat(3u);
v___x_324_ = l_Lean_Syntax_getArg(v_x_245_, v___x_323_);
v___x_325_ = lean_unsigned_to_nat(5u);
v___x_326_ = l_Lean_Syntax_getArg(v_x_245_, v___x_325_);
v___x_327_ = lean_unsigned_to_nat(7u);
v___x_328_ = l_Lean_Syntax_getArg(v_x_245_, v___x_327_);
lean_dec(v_x_245_);
v___x_329_ = 0;
v___x_330_ = l_Lean_SourceInfo_fromRef(v_ref_322_, v___x_329_);
v___x_331_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_332_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__12);
v___x_333_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__14));
lean_inc_n(v_currMacroScope_321_, 2);
lean_inc_n(v_quotContext_320_, 2);
v___x_334_ = l_Lean_addMacroScope(v_quotContext_320_, v___x_333_, v_currMacroScope_321_);
v___x_335_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__18));
lean_inc_n(v___x_330_, 17);
v___x_336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_336_, 0, v___x_330_);
lean_ctor_set(v___x_336_, 1, v___x_332_);
lean_ctor_set(v___x_336_, 2, v___x_334_);
lean_ctor_set(v___x_336_, 3, v___x_335_);
v___x_337_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_338_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__22));
v___x_339_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__24));
v___x_340_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__25));
v___x_341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_330_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
v___x_342_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__27));
v___x_343_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__29);
v___x_344_ = lean_box(0);
v___x_345_ = l_Lean_addMacroScope(v_quotContext_320_, v___x_344_, v_currMacroScope_321_);
v___x_346_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__32));
v___x_347_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_347_, 0, v___x_330_);
lean_ctor_set(v___x_347_, 1, v___x_343_);
lean_ctor_set(v___x_347_, 2, v___x_345_);
lean_ctor_set(v___x_347_, 3, v___x_346_);
v___x_348_ = l_Lean_Syntax_node1(v___x_330_, v___x_342_, v___x_347_);
v___x_349_ = l_Lean_Syntax_node2(v___x_330_, v___x_339_, v___x_341_, v___x_348_);
v___x_350_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__33));
v___x_351_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__34));
v___x_352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_330_);
lean_ctor_set(v___x_352_, 1, v___x_350_);
v___x_353_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__36));
v___x_354_ = l_Lean_Syntax_node1(v___x_330_, v___x_337_, v___x_259_);
v___x_355_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__38);
v___x_356_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_356_, 0, v___x_330_);
lean_ctor_set(v___x_356_, 1, v___x_337_);
lean_ctor_set(v___x_356_, 2, v___x_355_);
v___x_357_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__39));
v___x_358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_330_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
lean_inc_ref(v___x_358_);
lean_inc_ref(v___x_356_);
lean_inc(v___x_354_);
v___x_359_ = l_Lean_Syntax_node4(v___x_330_, v___x_353_, v___x_354_, v___x_356_, v___x_358_, v___x_326_);
lean_inc_ref(v___x_352_);
v___x_360_ = l_Lean_Syntax_node2(v___x_330_, v___x_351_, v___x_352_, v___x_359_);
v___x_361_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__40));
v___x_362_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_330_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
lean_inc_ref(v___x_362_);
lean_inc(v___x_349_);
v___x_363_ = l_Lean_Syntax_node3(v___x_330_, v___x_338_, v___x_349_, v___x_360_, v___x_362_);
v___x_364_ = l_Lean_Syntax_node4(v___x_330_, v___x_353_, v___x_354_, v___x_356_, v___x_358_, v___x_328_);
v___x_365_ = l_Lean_Syntax_node2(v___x_330_, v___x_351_, v___x_352_, v___x_364_);
v___x_366_ = l_Lean_Syntax_node3(v___x_330_, v___x_338_, v___x_349_, v___x_365_, v___x_362_);
v___x_367_ = l_Lean_Syntax_node3(v___x_330_, v___x_337_, v___x_324_, v___x_363_, v___x_366_);
v___x_368_ = l_Lean_Syntax_node2(v___x_330_, v___x_331_, v___x_336_, v___x_367_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v_a_247_);
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___boxed(lean_object* v_x_370_, lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1(v_x_370_, v_a_371_, v_a_372_);
lean_dec_ref(v_a_371_);
return v_res_373_;
}
}
static lean_object* _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__0));
v___x_418_ = l_String_toRawSubstring_x27(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1(lean_object* v_x_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = ((lean_object*)(l_UDecidable_termUIfThenElse___closed__1));
lean_inc(v_x_429_);
v___x_433_ = l_Lean_Syntax_isOfKind(v_x_429_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec(v_x_429_);
v___x_434_ = lean_box(1);
v___x_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v_a_431_);
return v___x_435_;
}
else
{
lean_object* v_quotContext_436_; lean_object* v_currMacroScope_437_; lean_object* v_ref_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_quotContext_436_ = lean_ctor_get(v_a_430_, 1);
v_currMacroScope_437_ = lean_ctor_get(v_a_430_, 2);
v_ref_438_ = lean_ctor_get(v_a_430_, 5);
v___x_439_ = lean_unsigned_to_nat(1u);
v___x_440_ = l_Lean_Syntax_getArg(v_x_429_, v___x_439_);
v___x_441_ = lean_unsigned_to_nat(3u);
v___x_442_ = l_Lean_Syntax_getArg(v_x_429_, v___x_441_);
v___x_443_ = lean_unsigned_to_nat(5u);
v___x_444_ = l_Lean_Syntax_getArg(v_x_429_, v___x_443_);
lean_dec(v_x_429_);
v___x_445_ = 0;
v___x_446_ = l_Lean_SourceInfo_fromRef(v_ref_438_, v___x_445_);
v___x_447_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__10));
v___x_448_ = lean_obj_once(&l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1, &l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1_once, _init_l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__1);
v___x_449_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__3));
lean_inc(v_currMacroScope_437_);
lean_inc(v_quotContext_436_);
v___x_450_ = l_Lean_addMacroScope(v_quotContext_436_, v___x_449_, v_currMacroScope_437_);
v___x_451_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___closed__5));
lean_inc_n(v___x_446_, 2);
v___x_452_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_452_, 0, v___x_446_);
lean_ctor_set(v___x_452_, 1, v___x_448_);
lean_ctor_set(v___x_452_, 2, v___x_450_);
lean_ctor_set(v___x_452_, 3, v___x_451_);
v___x_453_ = ((lean_object*)(l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termDepUIfThenElse__1___closed__20));
v___x_454_ = l_Lean_Syntax_node3(v___x_446_, v___x_453_, v___x_440_, v___x_442_, v___x_444_);
v___x_455_ = l_Lean_Syntax_node2(v___x_446_, v___x_447_, v___x_452_, v___x_454_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v_a_431_);
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1___boxed(lean_object* v_x_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_UDecidable___aux__Init__UDecidable______macroRules__UDecidable__termUIfThenElse__1(v_x_457_, v_a_458_, v_a_459_);
lean_dec_ref(v_a_458_);
return v_res_460_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofIff___redArg(uint8_t v_inst_461_){
_start:
{
return v_inst_461_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofIff___redArg___boxed(lean_object* v_inst_462_){
_start:
{
uint8_t v_inst_7__boxed_463_; uint8_t v_res_464_; lean_object* v_r_465_; 
v_inst_7__boxed_463_ = lean_unbox(v_inst_462_);
v_res_464_ = l_UDecidable_ofIff___redArg(v_inst_7__boxed_463_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofIff(lean_object* v_p_466_, lean_object* v_q_467_, uint8_t v_inst_468_, lean_object* v_h_469_){
_start:
{
return v_inst_468_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofIff___boxed(lean_object* v_p_470_, lean_object* v_q_471_, lean_object* v_inst_472_, lean_object* v_h_473_){
_start:
{
uint8_t v_inst_10__boxed_474_; uint8_t v_res_475_; lean_object* v_r_476_; 
v_inst_10__boxed_474_ = lean_unbox(v_inst_472_);
v_res_475_ = l_UDecidable_ofIff(v_p_470_, v_q_471_, v_inst_10__boxed_474_, v_h_473_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofReflects___redArg(uint8_t v_b_477_){
_start:
{
return v_b_477_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___redArg___boxed(lean_object* v_b_478_){
_start:
{
uint8_t v_b_boxed_479_; uint8_t v_res_480_; lean_object* v_r_481_; 
v_b_boxed_479_ = lean_unbox(v_b_478_);
v_res_480_ = l_UDecidable_ofReflects___redArg(v_b_boxed_479_);
v_r_481_ = lean_box(v_res_480_);
return v_r_481_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofReflects(lean_object* v_p_482_, uint8_t v_b_483_, lean_object* v_h_484_){
_start:
{
return v_b_483_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofReflects___boxed(lean_object* v_p_485_, lean_object* v_b_486_, lean_object* v_h_487_){
_start:
{
uint8_t v_b_boxed_488_; uint8_t v_res_489_; lean_object* v_r_490_; 
v_b_boxed_488_ = lean_unbox(v_b_486_);
v_res_489_ = l_UDecidable_ofReflects(v_p_485_, v_b_boxed_488_, v_h_487_);
v_r_490_ = lean_box(v_res_489_);
return v_r_490_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isTrue___redArg(){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = 1;
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isTrue___redArg___boxed(lean_object* v___dummy_493_){
_start:
{
uint8_t v_res_494_; lean_object* v_r_495_; 
v_res_494_ = l_UDecidable_isTrue___redArg();
v_r_495_ = lean_box(v_res_494_);
return v_r_495_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isTrue(lean_object* v_p_496_, lean_object* v_h_497_){
_start:
{
uint8_t v___x_498_; 
v___x_498_ = 1;
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isTrue___boxed(lean_object* v_p_499_, lean_object* v_h_500_){
_start:
{
uint8_t v_res_501_; lean_object* v_r_502_; 
v_res_501_ = l_UDecidable_isTrue(v_p_499_, v_h_500_);
v_r_502_ = lean_box(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isFalse___redArg(){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = 0;
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isFalse___redArg___boxed(lean_object* v___dummy_505_){
_start:
{
uint8_t v_res_506_; lean_object* v_r_507_; 
v_res_506_ = l_UDecidable_isFalse___redArg();
v_r_507_ = lean_box(v_res_506_);
return v_r_507_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_isFalse(lean_object* v_p_508_, lean_object* v_h_509_){
_start:
{
uint8_t v___x_510_; 
v___x_510_ = 0;
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_isFalse___boxed(lean_object* v_p_511_, lean_object* v_h_512_){
_start:
{
uint8_t v_res_513_; lean_object* v_r_514_; 
v_res_513_ = l_UDecidable_isFalse(v_p_511_, v_h_512_);
v_r_514_ = lean_box(v_res_513_);
return v_r_514_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable___redArg(uint8_t v_inst_515_){
_start:
{
return v_inst_515_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___redArg___boxed(lean_object* v_inst_516_){
_start:
{
uint8_t v_inst_7__boxed_517_; uint8_t v_res_518_; lean_object* v_r_519_; 
v_inst_7__boxed_517_ = lean_unbox(v_inst_516_);
v_res_518_ = l_UDecidable_ofDecidable___redArg(v_inst_7__boxed_517_);
v_r_519_ = lean_box(v_res_518_);
return v_r_519_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_ofDecidable(lean_object* v_p_520_, uint8_t v_inst_521_){
_start:
{
return v_inst_521_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_ofDecidable___boxed(lean_object* v_p_522_, lean_object* v_inst_523_){
_start:
{
uint8_t v_inst_10__boxed_524_; uint8_t v_res_525_; lean_object* v_r_526_; 
v_inst_10__boxed_524_ = lean_unbox(v_inst_523_);
v_res_525_ = l_UDecidable_ofDecidable(v_p_522_, v_inst_10__boxed_524_);
v_r_526_ = lean_box(v_res_525_);
return v_r_526_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable___redArg(uint8_t v_inst_527_){
_start:
{
return v_inst_527_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___redArg___boxed(lean_object* v_inst_528_){
_start:
{
uint8_t v_inst_7__boxed_529_; uint8_t v_res_530_; lean_object* v_r_531_; 
v_inst_7__boxed_529_ = lean_unbox(v_inst_528_);
v_res_530_ = l_UDecidable_toDecidable___redArg(v_inst_7__boxed_529_);
v_r_531_ = lean_box(v_res_530_);
return v_r_531_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_toDecidable(lean_object* v_p_532_, uint8_t v_inst_533_){
_start:
{
return v_inst_533_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_toDecidable___boxed(lean_object* v_p_534_, lean_object* v_inst_535_){
_start:
{
uint8_t v_inst_10__boxed_536_; uint8_t v_res_537_; lean_object* v_r_538_; 
v_inst_10__boxed_536_ = lean_unbox(v_inst_535_);
v_res_537_ = l_UDecidable_toDecidable(v_p_534_, v_inst_10__boxed_536_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAnd___redArg(uint8_t v_inst_539_, uint8_t v_inst_540_){
_start:
{
if (v_inst_539_ == 0)
{
return v_inst_539_;
}
else
{
return v_inst_540_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAnd___redArg___boxed(lean_object* v_inst_541_, lean_object* v_inst_542_){
_start:
{
uint8_t v_inst_35__boxed_543_; uint8_t v_inst_36__boxed_544_; uint8_t v_res_545_; lean_object* v_r_546_; 
v_inst_35__boxed_543_ = lean_unbox(v_inst_541_);
v_inst_36__boxed_544_ = lean_unbox(v_inst_542_);
v_res_545_ = l_UDecidable_instAnd___redArg(v_inst_35__boxed_543_, v_inst_36__boxed_544_);
v_r_546_ = lean_box(v_res_545_);
return v_r_546_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instAnd(lean_object* v_p_547_, lean_object* v_q_548_, uint8_t v_inst_549_, uint8_t v_inst_550_){
_start:
{
if (v_inst_549_ == 0)
{
return v_inst_549_;
}
else
{
return v_inst_550_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instAnd___boxed(lean_object* v_p_551_, lean_object* v_q_552_, lean_object* v_inst_553_, lean_object* v_inst_554_){
_start:
{
uint8_t v_inst_41__boxed_555_; uint8_t v_inst_42__boxed_556_; uint8_t v_res_557_; lean_object* v_r_558_; 
v_inst_41__boxed_555_ = lean_unbox(v_inst_553_);
v_inst_42__boxed_556_ = lean_unbox(v_inst_554_);
v_res_557_ = l_UDecidable_instAnd(v_p_551_, v_q_552_, v_inst_41__boxed_555_, v_inst_42__boxed_556_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOr___redArg(uint8_t v_inst_559_, uint8_t v_inst_560_){
_start:
{
if (v_inst_559_ == 0)
{
return v_inst_560_;
}
else
{
return v_inst_559_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOr___redArg___boxed(lean_object* v_inst_561_, lean_object* v_inst_562_){
_start:
{
uint8_t v_inst_35__boxed_563_; uint8_t v_inst_36__boxed_564_; uint8_t v_res_565_; lean_object* v_r_566_; 
v_inst_35__boxed_563_ = lean_unbox(v_inst_561_);
v_inst_36__boxed_564_ = lean_unbox(v_inst_562_);
v_res_565_ = l_UDecidable_instOr___redArg(v_inst_35__boxed_563_, v_inst_36__boxed_564_);
v_r_566_ = lean_box(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOr(lean_object* v_p_567_, lean_object* v_q_568_, uint8_t v_inst_569_, uint8_t v_inst_570_){
_start:
{
if (v_inst_569_ == 0)
{
return v_inst_570_;
}
else
{
return v_inst_569_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOr___boxed(lean_object* v_p_571_, lean_object* v_q_572_, lean_object* v_inst_573_, lean_object* v_inst_574_){
_start:
{
uint8_t v_inst_41__boxed_575_; uint8_t v_inst_42__boxed_576_; uint8_t v_res_577_; lean_object* v_r_578_; 
v_inst_41__boxed_575_ = lean_unbox(v_inst_573_);
v_inst_42__boxed_576_ = lean_unbox(v_inst_574_);
v_res_577_ = l_UDecidable_instOr(v_p_571_, v_q_572_, v_inst_41__boxed_575_, v_inst_42__boxed_576_);
v_r_578_ = lean_box(v_res_577_);
return v_r_578_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNot___redArg(uint8_t v_inst_579_){
_start:
{
if (v_inst_579_ == 0)
{
uint8_t v___x_580_; 
v___x_580_ = 1;
return v___x_580_;
}
else
{
uint8_t v___x_581_; 
v___x_581_ = 0;
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNot___redArg___boxed(lean_object* v_inst_582_){
_start:
{
uint8_t v_inst_14__boxed_583_; uint8_t v_res_584_; lean_object* v_r_585_; 
v_inst_14__boxed_583_ = lean_unbox(v_inst_582_);
v_res_584_ = l_UDecidable_instNot___redArg(v_inst_14__boxed_583_);
v_r_585_ = lean_box(v_res_584_);
return v_r_585_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNot(lean_object* v_p_586_, uint8_t v_inst_587_){
_start:
{
uint8_t v___x_588_; 
v___x_588_ = l_UDecidable_instNot___redArg(v_inst_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNot___boxed(lean_object* v_p_589_, lean_object* v_inst_590_){
_start:
{
uint8_t v_inst_21__boxed_591_; uint8_t v_res_592_; lean_object* v_r_593_; 
v_inst_21__boxed_591_ = lean_unbox(v_inst_590_);
v_res_592_ = l_UDecidable_instNot(v_p_589_, v_inst_21__boxed_591_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatEq(lean_object* v_n_594_, lean_object* v_m_595_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_nat_dec_eq(v_n_594_, v_m_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatEq___boxed(lean_object* v_n_597_, lean_object* v_m_598_){
_start:
{
uint8_t v_res_599_; lean_object* v_r_600_; 
v_res_599_ = l_UDecidable_instNatEq(v_n_597_, v_m_598_);
lean_dec(v_m_598_);
lean_dec(v_n_597_);
v_r_600_ = lean_box(v_res_599_);
return v_r_600_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLe(lean_object* v_n_601_, lean_object* v_m_602_){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = lean_nat_dec_le(v_n_601_, v_m_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLe___boxed(lean_object* v_n_604_, lean_object* v_m_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = l_UDecidable_instNatLe(v_n_604_, v_m_605_);
lean_dec(v_m_605_);
lean_dec(v_n_604_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instNatLt(lean_object* v_n_608_, lean_object* v_m_609_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_611_ = lean_nat_add(v_n_608_, v___x_610_);
v___x_612_ = lean_nat_dec_le(v___x_611_, v_m_609_);
lean_dec(v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instNatLt___boxed(lean_object* v_n_613_, lean_object* v_m_614_){
_start:
{
uint8_t v_res_615_; lean_object* v_r_616_; 
v_res_615_ = l_UDecidable_instNatLt(v_n_613_, v_m_614_);
lean_dec(v_m_614_);
lean_dec(v_n_613_);
v_r_616_ = lean_box(v_res_615_);
return v_r_616_;
}
}
static uint8_t _init_l_UDecidable_instTrue(void){
_start:
{
uint8_t v___x_617_; 
v___x_617_ = 1;
return v___x_617_;
}
}
static uint8_t _init_l_UDecidable_instFalse(void){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = 0;
return v___x_618_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instImp___redArg(uint8_t v_inst_619_, uint8_t v_inst_620_){
_start:
{
if (v_inst_619_ == 0)
{
uint8_t v___x_621_; 
v___x_621_ = 1;
return v___x_621_;
}
else
{
return v_inst_620_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instImp___redArg___boxed(lean_object* v_inst_622_, lean_object* v_inst_623_){
_start:
{
uint8_t v_inst_52__boxed_624_; uint8_t v_inst_53__boxed_625_; uint8_t v_res_626_; lean_object* v_r_627_; 
v_inst_52__boxed_624_ = lean_unbox(v_inst_622_);
v_inst_53__boxed_625_ = lean_unbox(v_inst_623_);
v_res_626_ = l_UDecidable_instImp___redArg(v_inst_52__boxed_624_, v_inst_53__boxed_625_);
v_r_627_ = lean_box(v_res_626_);
return v_r_627_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instImp(lean_object* v_p_628_, lean_object* v_q_629_, uint8_t v_inst_630_, uint8_t v_inst_631_){
_start:
{
uint8_t v___x_632_; 
v___x_632_ = l_UDecidable_instImp___redArg(v_inst_630_, v_inst_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instImp___boxed(lean_object* v_p_633_, lean_object* v_q_634_, lean_object* v_inst_635_, lean_object* v_inst_636_){
_start:
{
uint8_t v_inst_60__boxed_637_; uint8_t v_inst_61__boxed_638_; uint8_t v_res_639_; lean_object* v_r_640_; 
v_inst_60__boxed_637_ = lean_unbox(v_inst_635_);
v_inst_61__boxed_638_ = lean_unbox(v_inst_636_);
v_res_639_ = l_UDecidable_instImp(v_p_633_, v_q_634_, v_inst_60__boxed_637_, v_inst_61__boxed_638_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIff___redArg(uint8_t v_inst_641_, uint8_t v_inst_642_){
_start:
{
if (v_inst_641_ == 0)
{
if (v_inst_642_ == 0)
{
uint8_t v___x_643_; 
v___x_643_ = 1;
return v___x_643_;
}
else
{
return v_inst_641_;
}
}
else
{
return v_inst_642_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIff___redArg___boxed(lean_object* v_inst_644_, lean_object* v_inst_645_){
_start:
{
uint8_t v_inst_44__boxed_646_; uint8_t v_inst_45__boxed_647_; uint8_t v_res_648_; lean_object* v_r_649_; 
v_inst_44__boxed_646_ = lean_unbox(v_inst_644_);
v_inst_45__boxed_647_ = lean_unbox(v_inst_645_);
v_res_648_ = l_UDecidable_instIff___redArg(v_inst_44__boxed_646_, v_inst_45__boxed_647_);
v_r_649_ = lean_box(v_res_648_);
return v_r_649_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIff(lean_object* v_p_650_, lean_object* v_q_651_, uint8_t v_inst_652_, uint8_t v_inst_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = l_UDecidable_instIff___redArg(v_inst_652_, v_inst_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIff___boxed(lean_object* v_p_655_, lean_object* v_q_656_, lean_object* v_inst_657_, lean_object* v_inst_658_){
_start:
{
uint8_t v_inst_52__boxed_659_; uint8_t v_inst_53__boxed_660_; uint8_t v_res_661_; lean_object* v_r_662_; 
v_inst_52__boxed_659_ = lean_unbox(v_inst_657_);
v_inst_53__boxed_660_ = lean_unbox(v_inst_658_);
v_res_661_ = l_UDecidable_instIff(v_p_655_, v_q_656_, v_inst_52__boxed_659_, v_inst_53__boxed_660_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instBoolEq(uint8_t v_x_663_, uint8_t v_x_664_){
_start:
{
if (v_x_663_ == 0)
{
if (v_x_664_ == 0)
{
uint8_t v___x_665_; 
v___x_665_ = 1;
return v___x_665_;
}
else
{
return v_x_663_;
}
}
else
{
return v_x_664_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instBoolEq___boxed(lean_object* v_x_666_, lean_object* v_x_667_){
_start:
{
uint8_t v_x_39__boxed_668_; uint8_t v_x_40__boxed_669_; uint8_t v_res_670_; lean_object* v_r_671_; 
v_x_39__boxed_668_ = lean_unbox(v_x_666_);
v_x_40__boxed_669_ = lean_unbox(v_x_667_);
v_res_670_ = l_UDecidable_instBoolEq(v_x_39__boxed_668_, v_x_40__boxed_669_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq___redArg(){
_start:
{
uint8_t v___x_673_; 
v___x_673_ = 1;
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___redArg___boxed(lean_object* v___dummy_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_UDecidable_instPUnitEq___redArg();
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instPUnitEq(lean_object* v_x_677_, lean_object* v_x_678_){
_start:
{
uint8_t v___x_679_; 
v___x_679_ = 1;
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instPUnitEq___boxed(lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
uint8_t v_res_682_; lean_object* v_r_683_; 
v_res_682_ = l_UDecidable_instPUnitEq(v_x_680_, v_x_681_);
v_r_683_ = lean_box(v_res_682_);
return v_r_683_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIntEq(lean_object* v_a_684_, lean_object* v_b_685_){
_start:
{
uint8_t v___x_686_; 
v___x_686_ = lean_int_dec_eq(v_a_684_, v_b_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIntEq___boxed(lean_object* v_a_687_, lean_object* v_b_688_){
_start:
{
uint8_t v_res_689_; lean_object* v_r_690_; 
v_res_689_ = l_UDecidable_instIntEq(v_a_687_, v_b_688_);
lean_dec(v_b_688_);
lean_dec(v_a_687_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIntLe(lean_object* v_a_691_, lean_object* v_b_692_){
_start:
{
uint8_t v___x_693_; 
v___x_693_ = lean_int_dec_le(v_a_691_, v_b_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIntLe___boxed(lean_object* v_a_694_, lean_object* v_b_695_){
_start:
{
uint8_t v_res_696_; lean_object* v_r_697_; 
v_res_696_ = l_UDecidable_instIntLe(v_a_694_, v_b_695_);
lean_dec(v_b_695_);
lean_dec(v_a_694_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instIntLt(lean_object* v_a_698_, lean_object* v_b_699_){
_start:
{
uint8_t v___x_700_; 
v___x_700_ = lean_int_dec_lt(v_a_698_, v_b_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instIntLt___boxed(lean_object* v_a_701_, lean_object* v_b_702_){
_start:
{
uint8_t v_res_703_; lean_object* v_r_704_; 
v_res_703_ = l_UDecidable_instIntLt(v_a_701_, v_b_702_);
lean_dec(v_b_702_);
lean_dec(v_a_701_);
v_r_704_ = lean_box(v_res_703_);
return v_r_704_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinEq___redArg(lean_object* v_i_705_, lean_object* v_j_706_){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = lean_nat_dec_eq(v_i_705_, v_j_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinEq___redArg___boxed(lean_object* v_i_708_, lean_object* v_j_709_){
_start:
{
uint8_t v_res_710_; lean_object* v_r_711_; 
v_res_710_ = l_UDecidable_instFinEq___redArg(v_i_708_, v_j_709_);
lean_dec(v_j_709_);
lean_dec(v_i_708_);
v_r_711_ = lean_box(v_res_710_);
return v_r_711_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinEq(lean_object* v_n_712_, lean_object* v_i_713_, lean_object* v_j_714_){
_start:
{
uint8_t v___x_715_; 
v___x_715_ = lean_nat_dec_eq(v_i_713_, v_j_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinEq___boxed(lean_object* v_n_716_, lean_object* v_i_717_, lean_object* v_j_718_){
_start:
{
uint8_t v_res_719_; lean_object* v_r_720_; 
v_res_719_ = l_UDecidable_instFinEq(v_n_716_, v_i_717_, v_j_718_);
lean_dec(v_j_718_);
lean_dec(v_i_717_);
lean_dec(v_n_716_);
v_r_720_ = lean_box(v_res_719_);
return v_r_720_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLe___redArg(lean_object* v_i_721_, lean_object* v_j_722_){
_start:
{
uint8_t v___x_723_; 
v___x_723_ = lean_nat_dec_le(v_i_721_, v_j_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___redArg___boxed(lean_object* v_i_724_, lean_object* v_j_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = l_UDecidable_instFinLe___redArg(v_i_724_, v_j_725_);
lean_dec(v_j_725_);
lean_dec(v_i_724_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLe(lean_object* v_n_728_, lean_object* v_i_729_, lean_object* v_j_730_){
_start:
{
uint8_t v___x_731_; 
v___x_731_ = lean_nat_dec_le(v_i_729_, v_j_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLe___boxed(lean_object* v_n_732_, lean_object* v_i_733_, lean_object* v_j_734_){
_start:
{
uint8_t v_res_735_; lean_object* v_r_736_; 
v_res_735_ = l_UDecidable_instFinLe(v_n_732_, v_i_733_, v_j_734_);
lean_dec(v_j_734_);
lean_dec(v_i_733_);
lean_dec(v_n_732_);
v_r_736_ = lean_box(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLt___redArg(lean_object* v_i_737_, lean_object* v_j_738_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = l_UDecidable_instNatLt(v_i_737_, v_j_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___redArg___boxed(lean_object* v_i_740_, lean_object* v_j_741_){
_start:
{
uint8_t v_res_742_; lean_object* v_r_743_; 
v_res_742_ = l_UDecidable_instFinLt___redArg(v_i_740_, v_j_741_);
lean_dec(v_j_741_);
lean_dec(v_i_740_);
v_r_743_ = lean_box(v_res_742_);
return v_r_743_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instFinLt(lean_object* v_n_744_, lean_object* v_i_745_, lean_object* v_j_746_){
_start:
{
uint8_t v___x_747_; 
v___x_747_ = l_UDecidable_instNatLt(v_i_745_, v_j_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instFinLt___boxed(lean_object* v_n_748_, lean_object* v_i_749_, lean_object* v_j_750_){
_start:
{
uint8_t v_res_751_; lean_object* v_r_752_; 
v_res_751_ = l_UDecidable_instFinLt(v_n_748_, v_i_749_, v_j_750_);
lean_dec(v_j_750_);
lean_dec(v_i_749_);
lean_dec(v_n_748_);
v_r_752_ = lean_box(v_res_751_);
return v_r_752_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt8Eq(uint8_t v_a_753_, uint8_t v_b_754_){
_start:
{
uint8_t v___x_755_; 
v___x_755_ = lean_uint8_dec_eq(v_a_753_, v_b_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt8Eq___boxed(lean_object* v_a_756_, lean_object* v_b_757_){
_start:
{
uint8_t v_a_boxed_758_; uint8_t v_b_boxed_759_; uint8_t v_res_760_; lean_object* v_r_761_; 
v_a_boxed_758_ = lean_unbox(v_a_756_);
v_b_boxed_759_ = lean_unbox(v_b_757_);
v_res_760_ = l_UDecidable_instUInt8Eq(v_a_boxed_758_, v_b_boxed_759_);
v_r_761_ = lean_box(v_res_760_);
return v_r_761_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt16Eq(uint16_t v_a_762_, uint16_t v_b_763_){
_start:
{
uint8_t v___x_764_; 
v___x_764_ = lean_uint16_dec_eq(v_a_762_, v_b_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt16Eq___boxed(lean_object* v_a_765_, lean_object* v_b_766_){
_start:
{
uint16_t v_a_boxed_767_; uint16_t v_b_boxed_768_; uint8_t v_res_769_; lean_object* v_r_770_; 
v_a_boxed_767_ = lean_unbox(v_a_765_);
v_b_boxed_768_ = lean_unbox(v_b_766_);
v_res_769_ = l_UDecidable_instUInt16Eq(v_a_boxed_767_, v_b_boxed_768_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt32Eq(uint32_t v_a_771_, uint32_t v_b_772_){
_start:
{
uint8_t v___x_773_; 
v___x_773_ = lean_uint32_dec_eq(v_a_771_, v_b_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt32Eq___boxed(lean_object* v_a_774_, lean_object* v_b_775_){
_start:
{
uint32_t v_a_boxed_776_; uint32_t v_b_boxed_777_; uint8_t v_res_778_; lean_object* v_r_779_; 
v_a_boxed_776_ = lean_unbox_uint32(v_a_774_);
lean_dec(v_a_774_);
v_b_boxed_777_ = lean_unbox_uint32(v_b_775_);
lean_dec(v_b_775_);
v_res_778_ = l_UDecidable_instUInt32Eq(v_a_boxed_776_, v_b_boxed_777_);
v_r_779_ = lean_box(v_res_778_);
return v_r_779_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUInt64Eq(uint64_t v_a_780_, uint64_t v_b_781_){
_start:
{
uint8_t v___x_782_; 
v___x_782_ = lean_uint64_dec_eq(v_a_780_, v_b_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUInt64Eq___boxed(lean_object* v_a_783_, lean_object* v_b_784_){
_start:
{
uint64_t v_a_boxed_785_; uint64_t v_b_boxed_786_; uint8_t v_res_787_; lean_object* v_r_788_; 
v_a_boxed_785_ = lean_unbox_uint64(v_a_783_);
lean_dec_ref(v_a_783_);
v_b_boxed_786_ = lean_unbox_uint64(v_b_784_);
lean_dec_ref(v_b_784_);
v_res_787_ = l_UDecidable_instUInt64Eq(v_a_boxed_785_, v_b_boxed_786_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instUSizeEq(size_t v_a_789_, size_t v_b_790_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = lean_usize_dec_eq(v_a_789_, v_b_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instUSizeEq___boxed(lean_object* v_a_792_, lean_object* v_b_793_){
_start:
{
size_t v_a_boxed_794_; size_t v_b_boxed_795_; uint8_t v_res_796_; lean_object* v_r_797_; 
v_a_boxed_794_ = lean_unbox_usize(v_a_792_);
lean_dec(v_a_792_);
v_b_boxed_795_ = lean_unbox_usize(v_b_793_);
lean_dec(v_b_793_);
v_res_796_ = l_UDecidable_instUSizeEq(v_a_boxed_794_, v_b_boxed_795_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instCharEq(uint32_t v_c_798_, uint32_t v_d_799_){
_start:
{
uint8_t v___x_800_; 
v___x_800_ = lean_uint32_dec_eq(v_c_798_, v_d_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instCharEq___boxed(lean_object* v_c_801_, lean_object* v_d_802_){
_start:
{
uint32_t v_c_boxed_803_; uint32_t v_d_boxed_804_; uint8_t v_res_805_; lean_object* v_r_806_; 
v_c_boxed_803_ = lean_unbox_uint32(v_c_801_);
lean_dec(v_c_801_);
v_d_boxed_804_ = lean_unbox_uint32(v_d_802_);
lean_dec(v_d_802_);
v_res_805_ = l_UDecidable_instCharEq(v_c_boxed_803_, v_d_boxed_804_);
v_r_806_ = lean_box(v_res_805_);
return v_r_806_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringEq(lean_object* v_s_u2081_807_, lean_object* v_s_u2082_808_){
_start:
{
uint8_t v___x_809_; 
v___x_809_ = lean_string_dec_eq(v_s_u2081_807_, v_s_u2082_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringEq___boxed(lean_object* v_s_u2081_810_, lean_object* v_s_u2082_811_){
_start:
{
uint8_t v_res_812_; lean_object* v_r_813_; 
v_res_812_ = l_UDecidable_instStringEq(v_s_u2081_810_, v_s_u2082_811_);
lean_dec_ref(v_s_u2082_811_);
lean_dec_ref(v_s_u2081_810_);
v_r_813_ = lean_box(v_res_812_);
return v_r_813_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOptionEq___redArg(lean_object* v_inst_814_, lean_object* v_x_815_, lean_object* v_x_816_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_dec_ref(v_inst_814_);
if (lean_obj_tag(v_x_816_) == 0)
{
uint8_t v___x_817_; 
v___x_817_ = 1;
return v___x_817_;
}
else
{
uint8_t v___x_818_; 
lean_dec_ref_known(v_x_816_, 1);
v___x_818_ = 0;
return v___x_818_;
}
}
else
{
if (lean_obj_tag(v_x_816_) == 0)
{
uint8_t v___x_819_; 
lean_dec_ref_known(v_x_815_, 1);
lean_dec_ref(v_inst_814_);
v___x_819_ = 0;
return v___x_819_;
}
else
{
lean_object* v_val_820_; lean_object* v_val_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v_val_820_ = lean_ctor_get(v_x_815_, 0);
lean_inc(v_val_820_);
lean_dec_ref_known(v_x_815_, 1);
v_val_821_ = lean_ctor_get(v_x_816_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_x_816_, 1);
v___x_822_ = lean_apply_2(v_inst_814_, v_val_820_, v_val_821_);
v___x_823_ = lean_unbox(v___x_822_);
return v___x_823_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOptionEq___redArg___boxed(lean_object* v_inst_824_, lean_object* v_x_825_, lean_object* v_x_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = l_UDecidable_instOptionEq___redArg(v_inst_824_, v_x_825_, v_x_826_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instOptionEq(lean_object* v_00_u03b1_829_, lean_object* v_inst_830_, lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
uint8_t v___x_833_; 
v___x_833_ = l_UDecidable_instOptionEq___redArg(v_inst_830_, v_x_831_, v_x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instOptionEq___boxed(lean_object* v_00_u03b1_834_, lean_object* v_inst_835_, lean_object* v_x_836_, lean_object* v_x_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_UDecidable_instOptionEq(v_00_u03b1_834_, v_inst_835_, v_x_836_, v_x_837_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSome___redArg(lean_object* v_o_840_, lean_object* v_inst_841_){
_start:
{
if (lean_obj_tag(v_o_840_) == 0)
{
uint8_t v___x_842_; 
lean_dec_ref(v_inst_841_);
v___x_842_ = 1;
return v___x_842_;
}
else
{
lean_object* v_val_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_val_843_ = lean_ctor_get(v_o_840_, 0);
lean_inc(v_val_843_);
lean_dec_ref_known(v_o_840_, 1);
v___x_844_ = lean_apply_1(v_inst_841_, v_val_843_);
v___x_845_ = lean_unbox(v___x_844_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSome___redArg___boxed(lean_object* v_o_846_, lean_object* v_inst_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = l_UDecidable_instForallOptionEqSome___redArg(v_o_846_, v_inst_847_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instForallOptionEqSome(lean_object* v_00_u03b1_850_, lean_object* v_o_851_, lean_object* v_p_852_, lean_object* v_inst_853_){
_start:
{
uint8_t v___x_854_; 
v___x_854_ = l_UDecidable_instForallOptionEqSome___redArg(v_o_851_, v_inst_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instForallOptionEqSome___boxed(lean_object* v_00_u03b1_855_, lean_object* v_o_856_, lean_object* v_p_857_, lean_object* v_inst_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_UDecidable_instForallOptionEqSome(v_00_u03b1_855_, v_o_856_, v_p_857_, v_inst_858_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instProdEq___redArg(lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
lean_object* v_fst_865_; lean_object* v_snd_866_; lean_object* v_fst_867_; lean_object* v_snd_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v_fst_865_ = lean_ctor_get(v_x_863_, 0);
lean_inc(v_fst_865_);
v_snd_866_ = lean_ctor_get(v_x_863_, 1);
lean_inc(v_snd_866_);
lean_dec_ref(v_x_863_);
v_fst_867_ = lean_ctor_get(v_x_864_, 0);
lean_inc(v_fst_867_);
v_snd_868_ = lean_ctor_get(v_x_864_, 1);
lean_inc(v_snd_868_);
lean_dec_ref(v_x_864_);
v___x_869_ = lean_apply_2(v_inst_861_, v_fst_865_, v_fst_867_);
v___x_870_ = lean_unbox(v___x_869_);
if (v___x_870_ == 0)
{
uint8_t v___x_871_; 
lean_dec(v_snd_868_);
lean_dec(v_snd_866_);
lean_dec_ref(v_inst_862_);
v___x_871_ = lean_unbox(v___x_869_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_872_ = lean_apply_2(v_inst_862_, v_snd_866_, v_snd_868_);
v___x_873_ = lean_unbox(v___x_872_);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instProdEq___redArg___boxed(lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
uint8_t v_res_878_; lean_object* v_r_879_; 
v_res_878_ = l_UDecidable_instProdEq___redArg(v_inst_874_, v_inst_875_, v_x_876_, v_x_877_);
v_r_879_ = lean_box(v_res_878_);
return v_r_879_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instProdEq(lean_object* v_00_u03b1_880_, lean_object* v_00_u03b2_881_, lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
uint8_t v___x_886_; 
v___x_886_ = l_UDecidable_instProdEq___redArg(v_inst_882_, v_inst_883_, v_x_884_, v_x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instProdEq___boxed(lean_object* v_00_u03b1_887_, lean_object* v_00_u03b2_888_, lean_object* v_inst_889_, lean_object* v_inst_890_, lean_object* v_x_891_, lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_UDecidable_instProdEq(v_00_u03b1_887_, v_00_u03b2_888_, v_inst_889_, v_inst_890_, v_x_891_, v_x_892_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSumEq___redArg(lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v_x_897_, lean_object* v_x_898_){
_start:
{
if (lean_obj_tag(v_x_897_) == 0)
{
lean_dec_ref(v_inst_896_);
if (lean_obj_tag(v_x_898_) == 0)
{
lean_object* v_val_899_; lean_object* v_val_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v_val_899_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v_x_897_, 1);
v_val_900_ = lean_ctor_get(v_x_898_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v_x_898_, 1);
v___x_901_ = lean_apply_2(v_inst_895_, v_val_899_, v_val_900_);
v___x_902_ = lean_unbox(v___x_901_);
return v___x_902_;
}
else
{
uint8_t v___x_903_; 
lean_dec_ref_known(v_x_898_, 1);
lean_dec_ref_known(v_x_897_, 1);
lean_dec_ref(v_inst_895_);
v___x_903_ = 0;
return v___x_903_;
}
}
else
{
lean_dec_ref(v_inst_895_);
if (lean_obj_tag(v_x_898_) == 0)
{
uint8_t v___x_904_; 
lean_dec_ref_known(v_x_898_, 1);
lean_dec_ref_known(v_x_897_, 1);
lean_dec_ref(v_inst_896_);
v___x_904_ = 0;
return v___x_904_;
}
else
{
lean_object* v_val_905_; lean_object* v_val_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v_val_905_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_val_905_);
lean_dec_ref_known(v_x_897_, 1);
v_val_906_ = lean_ctor_get(v_x_898_, 0);
lean_inc(v_val_906_);
lean_dec_ref_known(v_x_898_, 1);
v___x_907_ = lean_apply_2(v_inst_896_, v_val_905_, v_val_906_);
v___x_908_ = lean_unbox(v___x_907_);
return v___x_908_;
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSumEq___redArg___boxed(lean_object* v_inst_909_, lean_object* v_inst_910_, lean_object* v_x_911_, lean_object* v_x_912_){
_start:
{
uint8_t v_res_913_; lean_object* v_r_914_; 
v_res_913_ = l_UDecidable_instSumEq___redArg(v_inst_909_, v_inst_910_, v_x_911_, v_x_912_);
v_r_914_ = lean_box(v_res_913_);
return v_r_914_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSumEq(lean_object* v_00_u03b1_915_, lean_object* v_00_u03b2_916_, lean_object* v_inst_917_, lean_object* v_inst_918_, lean_object* v_x_919_, lean_object* v_x_920_){
_start:
{
uint8_t v___x_921_; 
v___x_921_ = l_UDecidable_instSumEq___redArg(v_inst_917_, v_inst_918_, v_x_919_, v_x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSumEq___boxed(lean_object* v_00_u03b1_922_, lean_object* v_00_u03b2_923_, lean_object* v_inst_924_, lean_object* v_inst_925_, lean_object* v_x_926_, lean_object* v_x_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l_UDecidable_instSumEq(v_00_u03b1_922_, v_00_u03b2_923_, v_inst_924_, v_inst_925_, v_x_926_, v_x_927_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEq___redArg(lean_object* v_inst_930_, lean_object* v_a_931_, lean_object* v_b_932_){
_start:
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = lean_apply_2(v_inst_930_, v_a_931_, v_b_932_);
v___x_934_ = lean_unbox(v___x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEq___redArg___boxed(lean_object* v_inst_935_, lean_object* v_a_936_, lean_object* v_b_937_){
_start:
{
uint8_t v_res_938_; lean_object* v_r_939_; 
v_res_938_ = l_UDecidable_instSubtypeEq___redArg(v_inst_935_, v_a_936_, v_b_937_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSubtypeEq(lean_object* v_00_u03b1_940_, lean_object* v_p_941_, lean_object* v_inst_942_, lean_object* v_a_943_, lean_object* v_b_944_){
_start:
{
lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_945_ = lean_apply_2(v_inst_942_, v_a_943_, v_b_944_);
v___x_946_ = lean_unbox(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSubtypeEq___boxed(lean_object* v_00_u03b1_947_, lean_object* v_p_948_, lean_object* v_inst_949_, lean_object* v_a_950_, lean_object* v_b_951_){
_start:
{
uint8_t v_res_952_; lean_object* v_r_953_; 
v_res_952_ = l_UDecidable_instSubtypeEq(v_00_u03b1_947_, v_p_948_, v_inst_949_, v_a_950_, v_b_951_);
v_r_953_ = lean_box(v_res_952_);
return v_r_953_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqNil___redArg(lean_object* v_l_954_){
_start:
{
if (lean_obj_tag(v_l_954_) == 0)
{
uint8_t v___x_955_; 
v___x_955_ = 1;
return v___x_955_;
}
else
{
uint8_t v___x_956_; 
v___x_956_ = 0;
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqNil___redArg___boxed(lean_object* v_l_957_){
_start:
{
uint8_t v_res_958_; lean_object* v_r_959_; 
v_res_958_ = l_UDecidable_instListEqNil___redArg(v_l_957_);
lean_dec(v_l_957_);
v_r_959_ = lean_box(v_res_958_);
return v_r_959_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqNil(lean_object* v_00_u03b1_960_, lean_object* v_l_961_){
_start:
{
uint8_t v___x_962_; 
v___x_962_ = l_UDecidable_instListEqNil___redArg(v_l_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqNil___boxed(lean_object* v_00_u03b1_963_, lean_object* v_l_964_){
_start:
{
uint8_t v_res_965_; lean_object* v_r_966_; 
v_res_965_ = l_UDecidable_instListEqNil(v_00_u03b1_963_, v_l_964_);
lean_dec(v_l_964_);
v_r_966_ = lean_box(v_res_965_);
return v_r_966_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListNilEq___redArg(lean_object* v_l_967_){
_start:
{
if (lean_obj_tag(v_l_967_) == 0)
{
uint8_t v___x_968_; 
v___x_968_ = 1;
return v___x_968_;
}
else
{
uint8_t v___x_969_; 
v___x_969_ = 0;
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListNilEq___redArg___boxed(lean_object* v_l_970_){
_start:
{
uint8_t v_res_971_; lean_object* v_r_972_; 
v_res_971_ = l_UDecidable_instListNilEq___redArg(v_l_970_);
lean_dec(v_l_970_);
v_r_972_ = lean_box(v_res_971_);
return v_r_972_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListNilEq(lean_object* v_00_u03b1_973_, lean_object* v_l_974_){
_start:
{
uint8_t v___x_975_; 
v___x_975_ = l_UDecidable_instListNilEq___redArg(v_l_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListNilEq___boxed(lean_object* v_00_u03b1_976_, lean_object* v_l_977_){
_start:
{
uint8_t v_res_978_; lean_object* v_r_979_; 
v_res_978_ = l_UDecidable_instListNilEq(v_00_u03b1_976_, v_l_977_);
lean_dec(v_l_977_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEq___redArg(lean_object* v_inst_980_, lean_object* v_x_981_, lean_object* v_x_982_){
_start:
{
if (lean_obj_tag(v_x_981_) == 0)
{
lean_dec_ref(v_inst_980_);
if (lean_obj_tag(v_x_982_) == 0)
{
uint8_t v___x_983_; 
v___x_983_ = 1;
return v___x_983_;
}
else
{
uint8_t v___x_984_; 
lean_dec_ref_known(v_x_982_, 2);
v___x_984_ = 0;
return v___x_984_;
}
}
else
{
if (lean_obj_tag(v_x_982_) == 0)
{
uint8_t v___x_985_; 
lean_dec_ref_known(v_x_981_, 2);
lean_dec_ref(v_inst_980_);
v___x_985_ = 0;
return v___x_985_;
}
else
{
lean_object* v_head_986_; lean_object* v_tail_987_; lean_object* v_head_988_; lean_object* v_tail_989_; uint8_t v_this_990_; lean_object* v___x_991_; uint8_t v___x_992_; 
v_head_986_ = lean_ctor_get(v_x_981_, 0);
lean_inc(v_head_986_);
v_tail_987_ = lean_ctor_get(v_x_981_, 1);
lean_inc(v_tail_987_);
lean_dec_ref_known(v_x_981_, 2);
v_head_988_ = lean_ctor_get(v_x_982_, 0);
lean_inc(v_head_988_);
v_tail_989_ = lean_ctor_get(v_x_982_, 1);
lean_inc(v_tail_989_);
lean_dec_ref_known(v_x_982_, 2);
lean_inc_ref(v_inst_980_);
v_this_990_ = l_UDecidable_instListEq___redArg(v_inst_980_, v_tail_987_, v_tail_989_);
v___x_991_ = lean_apply_2(v_inst_980_, v_head_986_, v_head_988_);
v___x_992_ = lean_unbox(v___x_991_);
if (v___x_992_ == 0)
{
uint8_t v___x_993_; 
v___x_993_ = lean_unbox(v___x_991_);
return v___x_993_;
}
else
{
return v_this_990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEq___redArg___boxed(lean_object* v_inst_994_, lean_object* v_x_995_, lean_object* v_x_996_){
_start:
{
uint8_t v_res_997_; lean_object* v_r_998_; 
v_res_997_ = l_UDecidable_instListEq___redArg(v_inst_994_, v_x_995_, v_x_996_);
v_r_998_ = lean_box(v_res_997_);
return v_r_998_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEq(lean_object* v_00_u03b1_999_, lean_object* v_inst_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
uint8_t v___x_1003_; 
v___x_1003_ = l_UDecidable_instListEq___redArg(v_inst_1000_, v_x_1001_, v_x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEq___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_inst_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
uint8_t v_res_1008_; lean_object* v_r_1009_; 
v_res_1008_ = l_UDecidable_instListEq(v_00_u03b1_1004_, v_inst_1005_, v_x_1006_, v_x_1007_);
v_r_1009_ = lean_box(v_res_1008_);
return v_r_1009_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_PropLemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Classical(uint8_t builtin);
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
res = runtime_initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UDecidable_instTrue = _init_l_UDecidable_instTrue();
l_UDecidable_instFalse = _init_l_UDecidable_instFalse();
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
lean_object* initialize_Init_Classical(uint8_t builtin);
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
res = initialize_Init_Classical(builtin);
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
