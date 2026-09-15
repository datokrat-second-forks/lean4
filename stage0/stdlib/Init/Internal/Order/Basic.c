// Lean compiler output
// Module: Init.Internal.Order.Basic
// Imports: public import Init.System.IO public import Init.Transport import all Init.Control.Except import all Init.Control.StateRef import all Init.Control.Option import all Init.System.ST import Init.ByCases
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static const lean_string_object l_Lean_Order_term___u2291___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Order_term___u2291___00__closed__0 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value;
static const lean_string_object l_Lean_Order_term___u2291___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Order_term___u2291___00__closed__1 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__1_value;
static const lean_string_object l_Lean_Order_term___u2291___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_⊑_"};
static const lean_object* l_Lean_Order_term___u2291___00__closed__2 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__2_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__3_value_aux_0),((lean_object*)&l_Lean_Order_term___u2291___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__3_value_aux_1),((lean_object*)&l_Lean_Order_term___u2291___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(63, 167, 88, 175, 201, 86, 126, 172)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__3 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__3_value;
static const lean_string_object l_Lean_Order_term___u2291___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Order_term___u2291___00__closed__4 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__4_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__5 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__5_value;
static const lean_string_object l_Lean_Order_term___u2291___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⊑ "};
static const lean_object* l_Lean_Order_term___u2291___00__closed__6 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__6_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__6_value)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__7 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__7_value;
static const lean_string_object l_Lean_Order_term___u2291___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Order_term___u2291___00__closed__8 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__8_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__9 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__9_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__9_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__10 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__10_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__5_value),((lean_object*)&l_Lean_Order_term___u2291___00__closed__7_value),((lean_object*)&l_Lean_Order_term___u2291___00__closed__10_value)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__11 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__11_value;
static const lean_ctor_object l_Lean_Order_term___u2291___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Order_term___u2291___00__closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__11_value)}};
static const lean_object* l_Lean_Order_term___u2291___00__closed__12 = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__12_value;
LEAN_EXPORT const lean_object* l_Lean_Order_term___u2291__ = (const lean_object*)&l_Lean_Order_term___u2291___00__closed__12_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_0),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_1),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value_aux_2),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "PartialOrder.rel"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4_value;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 196, 146, 225, 179, 207, 152, 76)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_value_aux_0),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 185, 40, 236, 247, 213, 206, 173)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_0),((lean_object*)&l_Lean_Order_term___u2291___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_1),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value_aux_2),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_congr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_congr(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Order_term_u22a5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term⊥"};
static const lean_object* l_Lean_Order_term_u22a5___closed__0 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__0_value;
static const lean_ctor_object l_Lean_Order_term_u22a5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Order_term_u22a5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order_term_u22a5___closed__1_value_aux_0),((lean_object*)&l_Lean_Order_term___u2291___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Order_term_u22a5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order_term_u22a5___closed__1_value_aux_1),((lean_object*)&l_Lean_Order_term_u22a5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 78, 68, 112, 65, 121, 100, 195)}};
static const lean_object* l_Lean_Order_term_u22a5___closed__1 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__1_value;
static const lean_string_object l_Lean_Order_term_u22a5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_Order_term_u22a5___closed__2 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__2_value;
static const lean_ctor_object l_Lean_Order_term_u22a5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Order_term_u22a5___closed__2_value)}};
static const lean_object* l_Lean_Order_term_u22a5___closed__3 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__3_value;
static const lean_ctor_object l_Lean_Order_term_u22a5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Order_term_u22a5___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Order_term_u22a5___closed__3_value)}};
static const lean_object* l_Lean_Order_term_u22a5___closed__4 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Order_term_u22a5 = (const lean_object*)&l_Lean_Order_term_u22a5___closed__4_value;
static const lean_string_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bot"};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_value;
static lean_once_cell_t l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 6, 155, 235, 112, 9, 162, 249)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Order_term___u2291___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Order_term___u2291___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 51, 159, 172, 220, 225, 54, 137)}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4_value;
static const lean_ctor_object l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5 = (const lean_object*)&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_congr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_congr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderUnit;
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOUnit;
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeUnit;
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg();
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Order_ImplicationOrder_instOrder;
LEAN_EXPORT lean_object* l_Lean_Order_ImplicationOrder_instCompleteLattice;
LEAN_EXPORT lean_object* l_Lean_Order_ReverseImplicationOrder_instOrder;
LEAN_EXPORT lean_object* l_Lean_Order_ReverseImplicationOrder_instCompleteLattice;
LEAN_EXPORT lean_object* l_Lean_Order_Example_findF(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__4));
v___x_40_ = l_String_toRawSubstring_x27(v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(lean_object* v_x_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Order_term___u2291___00__closed__3));
lean_inc(v_x_60_);
v___x_64_ = l_Lean_Syntax_isOfKind(v_x_60_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec(v_x_60_);
v___x_65_ = lean_box(1);
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___y_62_);
return v___x_66_;
}
else
{
lean_object* v_quotContext_67_; lean_object* v_currMacroScope_68_; lean_object* v_ref_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_quotContext_67_ = lean_ctor_get(v___y_61_, 1);
v_currMacroScope_68_ = lean_ctor_get(v___y_61_, 2);
v_ref_69_ = lean_ctor_get(v___y_61_, 5);
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = l_Lean_Syntax_getArg(v_x_60_, v___x_70_);
v___x_72_ = lean_unsigned_to_nat(2u);
v___x_73_ = l_Lean_Syntax_getArg(v_x_60_, v___x_72_);
lean_dec(v_x_60_);
v___x_74_ = 0;
v___x_75_ = l_Lean_SourceInfo_fromRef(v_ref_69_, v___x_74_);
v___x_76_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3));
v___x_77_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__5);
v___x_78_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__8));
lean_inc(v_currMacroScope_68_);
lean_inc(v_quotContext_67_);
v___x_79_ = l_Lean_addMacroScope(v_quotContext_67_, v___x_78_, v_currMacroScope_68_);
v___x_80_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__11));
lean_inc_n(v___x_75_, 2);
v___x_81_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_81_, 0, v___x_75_);
lean_ctor_set(v___x_81_, 1, v___x_77_);
lean_ctor_set(v___x_81_, 2, v___x_79_);
lean_ctor_set(v___x_81_, 3, v___x_80_);
v___x_82_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__13));
v___x_83_ = l_Lean_Syntax_node2(v___x_75_, v___x_82_, v___x_71_, v___x_73_);
v___x_84_ = l_Lean_Syntax_node2(v___x_75_, v___x_76_, v___x_81_, v___x_83_);
v___x_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___y_62_);
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___boxed(lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1(v_x_86_, v___y_87_, v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(lean_object* v_x_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_96_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term___u2291____1___closed__3));
lean_inc(v_x_93_);
v___x_97_ = l_Lean_Syntax_isOfKind(v_x_93_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec(v_x_93_);
v___x_98_ = lean_box(0);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___y_95_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = l_Lean_Syntax_getArg(v_x_93_, v___x_100_);
v___x_102_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1));
lean_inc(v___x_101_);
v___x_103_ = l_Lean_Syntax_isOfKind(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v___x_101_);
lean_dec(v_x_93_);
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___y_95_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = l_Lean_Syntax_getArg(v_x_93_, v___x_106_);
lean_dec(v_x_93_);
v___x_108_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_107_);
v___x_109_ = l_Lean_Syntax_matchesNull(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v___x_107_);
lean_dec(v___x_101_);
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___y_95_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_ref_114_; uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_112_ = l_Lean_Syntax_getArg(v___x_107_, v___x_100_);
v___x_113_ = l_Lean_Syntax_getArg(v___x_107_, v___x_106_);
lean_dec(v___x_107_);
v_ref_114_ = l_Lean_replaceRef(v___x_101_, v___y_94_);
lean_dec(v___x_101_);
v___x_115_ = 0;
v___x_116_ = l_Lean_SourceInfo_fromRef(v_ref_114_, v___x_115_);
lean_dec(v_ref_114_);
v___x_117_ = ((lean_object*)(l_Lean_Order_term___u2291___00__closed__3));
v___x_118_ = ((lean_object*)(l_Lean_Order_term___u2291___00__closed__6));
lean_inc(v___x_116_);
v___x_119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_116_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = l_Lean_Syntax_node3(v___x_116_, v___x_117_, v___x_112_, v___x_119_, v___x_113_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___y_95_);
return v___x_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___boxed(lean_object* v_x_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1(v_x_122_, v___y_123_, v___y_124_);
lean_dec(v___y_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___redArg(){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_box(0);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___redArg___boxed(lean_object* v___dummy_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_Order_PartialOrder_ofEquiv___redArg();
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv(lean_object* v_00_u03b1_130_, lean_object* v_00_u03b2_131_, lean_object* v_e_132_, lean_object* v_i_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_box(0);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_ofEquiv___boxed(lean_object* v_00_u03b1_135_, lean_object* v_00_u03b2_136_, lean_object* v_e_137_, lean_object* v_i_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Order_PartialOrder_ofEquiv(v_00_u03b1_135_, v_00_u03b2_136_, v_e_137_, v_i_138_);
lean_dec_ref(v_e_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_congr___redArg(lean_object* v_e_140_){
_start:
{
lean_object* v___x_141_; lean_object* v_toFun_142_; lean_object* v_invFun_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_152_; 
lean_inc_ref(v_e_140_);
v___x_141_ = lean_alloc_closure((void*)(l_Lean_Order_PartialOrder_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_141_, 0, lean_box(0));
lean_closure_set(v___x_141_, 1, lean_box(0));
lean_closure_set(v___x_141_, 2, v_e_140_);
v_toFun_142_ = lean_ctor_get(v_e_140_, 0);
v_invFun_143_ = lean_ctor_get(v_e_140_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_e_140_);
if (v_isSharedCheck_152_ == 0)
{
v___x_145_ = v_e_140_;
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_invFun_143_);
lean_inc(v_toFun_142_);
lean_dec(v_e_140_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 1, v_toFun_142_);
lean_ctor_set(v___x_145_, 0, v_invFun_143_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_invFun_143_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_toFun_142_);
v___x_148_ = v_reuseFailAlloc_151_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_alloc_closure((void*)(l_Lean_Order_PartialOrder_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_149_, 0, lean_box(0));
lean_closure_set(v___x_149_, 1, lean_box(0));
lean_closure_set(v___x_149_, 2, v___x_148_);
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_141_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_PartialOrder_congr(lean_object* v_00_u03b1_153_, lean_object* v_00_u03b2_154_, lean_object* v_e_155_){
_start:
{
lean_object* v___x_156_; lean_object* v_toFun_157_; lean_object* v_invFun_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_167_; 
lean_inc_ref(v_e_155_);
v___x_156_ = lean_alloc_closure((void*)(l_Lean_Order_PartialOrder_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_156_, 0, lean_box(0));
lean_closure_set(v___x_156_, 1, lean_box(0));
lean_closure_set(v___x_156_, 2, v_e_155_);
v_toFun_157_ = lean_ctor_get(v_e_155_, 0);
v_invFun_158_ = lean_ctor_get(v_e_155_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_e_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_160_ = v_e_155_;
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_invFun_158_);
lean_inc(v_toFun_157_);
lean_dec(v_e_155_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_167_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_toFun_157_);
lean_ctor_set(v___x_160_, 0, v_invFun_158_);
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_invFun_158_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_toFun_157_);
v___x_163_ = v_reuseFailAlloc_166_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_alloc_closure((void*)(l_Lean_Order_PartialOrder_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_164_, 0, lean_box(0));
lean_closure_set(v___x_164_, 1, lean_box(0));
lean_closure_set(v___x_164_, 2, v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_156_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
return v___x_165_;
}
}
}
}
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0));
v___x_183_ = l_String_toRawSubstring_x27(v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(lean_object* v_x_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__1));
v___x_200_ = l_Lean_Syntax_isOfKind(v_x_196_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_box(1);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___y_198_);
return v___x_202_;
}
else
{
lean_object* v_quotContext_203_; lean_object* v_currMacroScope_204_; lean_object* v_ref_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_quotContext_203_ = lean_ctor_get(v___y_197_, 1);
v_currMacroScope_204_ = lean_ctor_get(v___y_197_, 2);
v_ref_205_ = lean_ctor_get(v___y_197_, 5);
v___x_206_ = 0;
v___x_207_ = l_Lean_SourceInfo_fromRef(v_ref_205_, v___x_206_);
v___x_208_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1);
v___x_209_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2));
lean_inc(v_currMacroScope_204_);
lean_inc(v_quotContext_203_);
v___x_210_ = l_Lean_addMacroScope(v_quotContext_203_, v___x_209_, v_currMacroScope_204_);
v___x_211_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5));
v___x_212_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_212_, 0, v___x_207_);
lean_ctor_set(v___x_212_, 1, v___x_208_);
lean_ctor_set(v___x_212_, 2, v___x_210_);
lean_ctor_set(v___x_212_, 3, v___x_211_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v___y_198_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___boxed(lean_object* v_x_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(v_x_214_, v___y_215_, v___y_216_);
lean_dec_ref(v___y_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(lean_object* v_x_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1));
lean_inc(v_x_218_);
v___x_222_ = l_Lean_Syntax_isOfKind(v_x_218_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; 
lean_dec(v_x_218_);
v___x_223_ = lean_box(0);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___y_220_);
return v___x_224_;
}
else
{
lean_object* v_ref_225_; uint8_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_ref_225_ = l_Lean_replaceRef(v_x_218_, v___y_219_);
lean_dec(v_x_218_);
v___x_226_ = 0;
v___x_227_ = l_Lean_SourceInfo_fromRef(v_ref_225_, v___x_226_);
lean_dec(v_ref_225_);
v___x_228_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__1));
v___x_229_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__2));
lean_inc(v___x_227_);
v___x_230_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_227_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = l_Lean_Syntax_node1(v___x_227_, v___x_228_, v___x_230_);
v___x_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v___y_220_);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1___boxed(lean_object* v_x_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(v_x_233_, v___y_234_, v___y_235_);
lean_dec(v___y_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___redArg(){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___redArg___boxed(lean_object* v___dummy_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_Order_CCPO_ofEquiv___redArg();
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv(lean_object* v_00_u03b1_241_, lean_object* v_00_u03b2_242_, lean_object* v_e_243_, lean_object* v_i_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_ofEquiv___boxed(lean_object* v_00_u03b1_246_, lean_object* v_00_u03b2_247_, lean_object* v_e_248_, lean_object* v_i_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_Order_CCPO_ofEquiv(v_00_u03b1_246_, v_00_u03b2_247_, v_e_248_, v_i_249_);
lean_dec_ref(v_e_248_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_congr___redArg(lean_object* v_e_251_){
_start:
{
lean_object* v___x_252_; lean_object* v_toFun_253_; lean_object* v_invFun_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_263_; 
lean_inc_ref(v_e_251_);
v___x_252_ = lean_alloc_closure((void*)(l_Lean_Order_CCPO_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_252_, 0, lean_box(0));
lean_closure_set(v___x_252_, 1, lean_box(0));
lean_closure_set(v___x_252_, 2, v_e_251_);
v_toFun_253_ = lean_ctor_get(v_e_251_, 0);
v_invFun_254_ = lean_ctor_get(v_e_251_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v_e_251_);
if (v_isSharedCheck_263_ == 0)
{
v___x_256_ = v_e_251_;
v_isShared_257_ = v_isSharedCheck_263_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_invFun_254_);
lean_inc(v_toFun_253_);
lean_dec(v_e_251_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_263_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v_toFun_253_);
lean_ctor_set(v___x_256_, 0, v_invFun_254_);
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_invFun_254_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_toFun_253_);
v___x_259_ = v_reuseFailAlloc_262_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_alloc_closure((void*)(l_Lean_Order_CCPO_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_260_, 0, lean_box(0));
lean_closure_set(v___x_260_, 1, lean_box(0));
lean_closure_set(v___x_260_, 2, v___x_259_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_252_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_CCPO_congr(lean_object* v_00_u03b1_264_, lean_object* v_00_u03b2_265_, lean_object* v_e_266_){
_start:
{
lean_object* v___x_267_; lean_object* v_toFun_268_; lean_object* v_invFun_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_278_; 
lean_inc_ref(v_e_266_);
v___x_267_ = lean_alloc_closure((void*)(l_Lean_Order_CCPO_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_267_, 0, lean_box(0));
lean_closure_set(v___x_267_, 1, lean_box(0));
lean_closure_set(v___x_267_, 2, v_e_266_);
v_toFun_268_ = lean_ctor_get(v_e_266_, 0);
v_invFun_269_ = lean_ctor_get(v_e_266_, 1);
v_isSharedCheck_278_ = !lean_is_exclusive(v_e_266_);
if (v_isSharedCheck_278_ == 0)
{
v___x_271_ = v_e_266_;
v_isShared_272_ = v_isSharedCheck_278_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_invFun_269_);
lean_inc(v_toFun_268_);
lean_dec(v_e_266_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_278_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 1, v_toFun_268_);
lean_ctor_set(v___x_271_, 0, v_invFun_269_);
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_invFun_269_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v_toFun_268_);
v___x_274_ = v_reuseFailAlloc_277_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_alloc_closure((void*)(l_Lean_Order_CCPO_ofEquiv___boxed), 4, 3);
lean_closure_set(v___x_275_, 0, lean_box(0));
lean_closure_set(v___x_275_, 1, lean_box(0));
lean_closure_set(v___x_275_, 2, v___x_274_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_267_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg(){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg___boxed(lean_object* v___dummy_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Order_instOrderPi___redArg();
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi(lean_object* v_00_u03b1_283_, lean_object* v_00_u03b2_284_, lean_object* v_inst_285_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_box(0);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___boxed(lean_object* v_00_u03b1_287_, lean_object* v_00_u03b2_288_, lean_object* v_inst_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Order_instOrderPi(v_00_u03b1_287_, v_00_u03b2_288_, v_inst_289_);
lean_dec_ref(v_inst_289_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg(){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_box(0);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg___boxed(lean_object* v___dummy_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Order_instCCPOPi___redArg();
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi(lean_object* v_00_u03b1_295_, lean_object* v_00_u03b2_296_, lean_object* v_inst_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lean_box(0);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___boxed(lean_object* v_00_u03b1_299_, lean_object* v_00_u03b2_300_, lean_object* v_inst_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Order_instCCPOPi(v_00_u03b1_299_, v_00_u03b2_300_, v_inst_301_);
lean_dec_ref(v_inst_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg(){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_box(0);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg___boxed(lean_object* v___dummy_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Order_instCompleteLatticePi___redArg();
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi(lean_object* v_00_u03b1_307_, lean_object* v_00_u03b2_308_, lean_object* v_inst_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_box(0);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___boxed(lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_inst_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Order_instCompleteLatticePi(v_00_u03b1_311_, v_00_u03b2_312_, v_inst_313_);
lean_dec_ref(v_inst_313_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg(){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = lean_box(0);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg___boxed(lean_object* v___dummy_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Order_instPartialOrderPProd___redArg();
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd(lean_object* v_00_u03b1_319_, lean_object* v_00_u03b2_320_, lean_object* v_inst_321_, lean_object* v_inst_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lean_box(0);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg(){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = lean_box(0);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg___boxed(lean_object* v___dummy_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Order_instCCPOPProd___redArg();
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd(lean_object* v_00_u03b1_328_, lean_object* v_00_u03b2_329_, lean_object* v_inst_330_, lean_object* v_inst_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = lean_box(0);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg(){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_box(0);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg___boxed(lean_object* v___dummy_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_Order_instCompleteLatticePProd___redArg();
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd(lean_object* v_00_u03b1_337_, lean_object* v_00_u03b2_338_, lean_object* v_inst_339_, lean_object* v_inst_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_box(0);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg(){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_box(0);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg___boxed(lean_object* v___dummy_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_Order_instPartialOrderProd___redArg();
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd(lean_object* v_00_u03b1_346_, lean_object* v_00_u03b2_347_, lean_object* v_inst_348_, lean_object* v_inst_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_box(0);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg(){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_box(0);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg___boxed(lean_object* v___dummy_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_Order_instCCPOProd___redArg();
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd(lean_object* v_00_u03b1_355_, lean_object* v_00_u03b2_356_, lean_object* v_inst_357_, lean_object* v_inst_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_box(0);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg(){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_box(0);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg___boxed(lean_object* v___dummy_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Order_instCompleteLatticeProd___redArg();
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd(lean_object* v_00_u03b1_364_, lean_object* v_00_u03b2_365_, lean_object* v_inst_366_, lean_object* v_inst_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lean_box(0);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_Order_instPartialOrderUnit(void){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_box(0);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_Order_instCCPOUnit(void){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lean_box(0);
return v___x_370_;
}
}
static lean_object* _init_l_Lean_Order_instCompleteLatticeUnit(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_box(0);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg(lean_object* v_x_372_){
_start:
{
lean_inc(v_x_372_);
return v_x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg___boxed(lean_object* v_x_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Order_FlatOrder_mk___redArg(v_x_373_);
lean_dec(v_x_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk(lean_object* v_00_u03b1_375_, lean_object* v_b_376_, lean_object* v_x_377_){
_start:
{
lean_inc(v_x_377_);
return v_x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___boxed(lean_object* v_00_u03b1_378_, lean_object* v_b_379_, lean_object* v_x_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Order_FlatOrder_mk(v_00_u03b1_378_, v_b_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_b_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg(lean_object* v_x_382_){
_start:
{
lean_inc(v_x_382_);
return v_x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg___boxed(lean_object* v_x_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_Order_FlatOrder_inner___redArg(v_x_383_);
lean_dec(v_x_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner(lean_object* v_00_u03b1_385_, lean_object* v_b_386_, lean_object* v_x_387_){
_start:
{
lean_inc(v_x_387_);
return v_x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___boxed(lean_object* v_00_u03b1_388_, lean_object* v_b_389_, lean_object* v_x_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_Order_FlatOrder_inner(v_00_u03b1_388_, v_b_389_, v_x_390_);
lean_dec(v_x_390_);
lean_dec(v_b_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg(){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_box(0);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg___boxed(lean_object* v___dummy_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Order_FlatOrder_instOrder___redArg();
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder(lean_object* v_00_u03b1_396_, lean_object* v_b_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lean_box(0);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___boxed(lean_object* v_00_u03b1_399_, lean_object* v_b_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Order_FlatOrder_instOrder(v_00_u03b1_399_, v_b_400_);
lean_dec(v_b_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg(){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_box(0);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg___boxed(lean_object* v___dummy_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Order_FlatOrder_instCCPO___redArg();
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO(lean_object* v_00_u03b1_406_, lean_object* v_b_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_box(0);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___boxed(lean_object* v_00_u03b1_409_, lean_object* v_b_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_Order_FlatOrder_instCCPO(v_00_u03b1_409_, v_b_410_);
lean_dec(v_b_410_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___redArg(){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, lean_box(0));
lean_ctor_set(v___x_413_, 1, lean_box(0));
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___redArg___boxed(lean_object* v___dummy_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_Order_MonoBind_congr___redArg();
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr(lean_object* v_m_416_, lean_object* v_n_417_, lean_object* v_e_418_, lean_object* v_b_419_, lean_object* v_j_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, lean_box(0));
lean_ctor_set(v___x_421_, 1, lean_box(0));
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_MonoBind_congr___boxed(lean_object* v_m_422_, lean_object* v_n_423_, lean_object* v_e_424_, lean_object* v_b_425_, lean_object* v_j_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Order_MonoBind_congr(v_m_422_, v_n_423_, v_e_424_, v_b_425_, v_j_426_);
lean_dec_ref(v_j_426_);
lean_dec(v_b_425_);
lean_dec_ref(v_e_424_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg(){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = lean_box(0);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg___boxed(lean_object* v___dummy_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Order_instPartialOrderOption___redArg();
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption(lean_object* v_00_u03b1_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lean_box(0);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg(){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_box(0);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg___boxed(lean_object* v___dummy_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Order_instCCPOOption___redArg();
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption(lean_object* v_00_u03b1_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_box(0);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg(){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = lean_box(0);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg___boxed(lean_object* v___dummy_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Order_ExceptT_partialOrder___redArg();
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder(lean_object* v_00_u03b5_444_, lean_object* v_m_445_, lean_object* v_00_u03b1_446_, lean_object* v_inst_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_box(0);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg(){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_box(0);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg___boxed(lean_object* v___dummy_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lean_Order_ExceptT_ccpo___redArg();
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo(lean_object* v_00_u03b5_453_, lean_object* v_m_454_, lean_object* v_00_u03b1_455_, lean_object* v_inst_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = lean_box(0);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg(){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lean_box(0);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg___boxed(lean_object* v___dummy_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Order_instPartialOrderExceptT___redArg();
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT(lean_object* v_m_462_, lean_object* v_00_u03b5_463_, lean_object* v_00_u03b1_464_, lean_object* v_inst_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = lean_box(0);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___boxed(lean_object* v_m_467_, lean_object* v_00_u03b5_468_, lean_object* v_00_u03b1_469_, lean_object* v_inst_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Order_instPartialOrderExceptT(v_m_467_, v_00_u03b5_468_, v_00_u03b1_469_, v_inst_470_);
lean_dec_ref(v_inst_470_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg(){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = lean_box(0);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg___boxed(lean_object* v___dummy_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Order_instCCPOExceptT___redArg();
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT(lean_object* v_m_476_, lean_object* v_00_u03b5_477_, lean_object* v_00_u03b1_478_, lean_object* v_inst_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_box(0);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___boxed(lean_object* v_m_481_, lean_object* v_00_u03b5_482_, lean_object* v_00_u03b1_483_, lean_object* v_inst_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Order_instCCPOExceptT(v_m_481_, v_00_u03b5_482_, v_00_u03b1_483_, v_inst_484_);
lean_dec_ref(v_inst_484_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg(){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = lean_box(0);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg___boxed(lean_object* v___dummy_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Order_OptionT_partialOrder___redArg();
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder(lean_object* v_m_490_, lean_object* v_00_u03b1_491_, lean_object* v_inst_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_box(0);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg(){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lean_box(0);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg___boxed(lean_object* v___dummy_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_Order_OptionT_ccpo___redArg();
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo(lean_object* v_m_498_, lean_object* v_00_u03b1_499_, lean_object* v_inst_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_box(0);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg(){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_box(0);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg___boxed(lean_object* v___dummy_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Order_instPartialOrderOptionT___redArg();
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT(lean_object* v_m_506_, lean_object* v_00_u03b1_507_, lean_object* v_inst_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___boxed(lean_object* v_m_510_, lean_object* v_00_u03b1_511_, lean_object* v_inst_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Order_instPartialOrderOptionT(v_m_510_, v_00_u03b1_511_, v_inst_512_);
lean_dec_ref(v_inst_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg(){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = lean_box(0);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg___boxed(lean_object* v___dummy_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_Order_instCCPOOptionT___redArg();
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT(lean_object* v_m_518_, lean_object* v_00_u03b1_519_, lean_object* v_inst_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_box(0);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___boxed(lean_object* v_m_522_, lean_object* v_00_u03b1_523_, lean_object* v_inst_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lean_Order_instCCPOOptionT(v_m_522_, v_00_u03b1_523_, v_inst_524_);
lean_dec_ref(v_inst_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg(){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_box(0);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg___boxed(lean_object* v___dummy_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_Order_ReaderT_partialOrder___redArg();
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder(lean_object* v_00_u03c1_530_, lean_object* v_m_531_, lean_object* v_00_u03b1_532_, lean_object* v_inst_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_box(0);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg(){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg___boxed(lean_object* v___dummy_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Order_ReaderT_ccpo___redArg();
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo(lean_object* v_00_u03c1_539_, lean_object* v_m_540_, lean_object* v_00_u03b1_541_, lean_object* v_inst_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_box(0);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg(){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = lean_box(0);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg___boxed(lean_object* v___dummy_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Order_instPartialOrderReaderT___redArg();
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT(lean_object* v_m_548_, lean_object* v_00_u03c1_549_, lean_object* v_00_u03b1_550_, lean_object* v_inst_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_box(0);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg(){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_box(0);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg___boxed(lean_object* v___dummy_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_Order_instCCPOReaderT___redArg();
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT(lean_object* v_m_557_, lean_object* v_00_u03c1_558_, lean_object* v_00_u03b1_559_, lean_object* v_inst_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_box(0);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg(){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg___boxed(lean_object* v___dummy_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Order_instPartialOrderStateRefT_x27___redArg();
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27(lean_object* v_m_566_, lean_object* v_00_u03c9_567_, lean_object* v_00_u03c3_568_, lean_object* v_00_u03b1_569_, lean_object* v_inst_570_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_box(0);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg(){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_box(0);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg___boxed(lean_object* v___dummy_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_Order_instCCPOStateRefT_x27___redArg();
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27(lean_object* v_m_576_, lean_object* v_00_u03c9_577_, lean_object* v_00_u03c3_578_, lean_object* v_00_u03b1_579_, lean_object* v_inst_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_box(0);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder___redArg(){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = lean_box(0);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder___redArg___boxed(lean_object* v___dummy_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Order_Id_partialOrder___redArg();
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_partialOrder(lean_object* v_00_u03b1_586_, lean_object* v_inst_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = lean_box(0);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo___redArg(){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = lean_box(0);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo___redArg___boxed(lean_object* v___dummy_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Order_Id_ccpo___redArg();
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Id_ccpo(lean_object* v_00_u03b1_593_, lean_object* v_inst_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = lean_box(0);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg(){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_box(0);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg___boxed(lean_object* v___dummy_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_Order_StateT_partialOrder___redArg();
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder(lean_object* v_00_u03c3_600_, lean_object* v_m_601_, lean_object* v_00_u03b1_602_, lean_object* v_inst_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = lean_box(0);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg(){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = lean_box(0);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg___boxed(lean_object* v___dummy_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_Order_StateT_ccpo___redArg();
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo(lean_object* v_00_u03c3_609_, lean_object* v_m_610_, lean_object* v_00_u03b1_611_, lean_object* v_inst_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_box(0);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg(){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_box(0);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg___boxed(lean_object* v___dummy_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_Order_instPartialOrderStateT___redArg();
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT(lean_object* v_m_618_, lean_object* v_00_u03c3_619_, lean_object* v_00_u03b1_620_, lean_object* v_inst_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_box(0);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___boxed(lean_object* v_m_623_, lean_object* v_00_u03c3_624_, lean_object* v_00_u03b1_625_, lean_object* v_inst_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_Order_instPartialOrderStateT(v_m_623_, v_00_u03c3_624_, v_00_u03b1_625_, v_inst_626_);
lean_dec_ref(v_inst_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg(){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_box(0);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg___boxed(lean_object* v___dummy_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Order_instCCPOStateT___redArg();
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT(lean_object* v_m_632_, lean_object* v_00_u03c3_633_, lean_object* v_00_u03b1_634_, lean_object* v_inst_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_box(0);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___boxed(lean_object* v_m_637_, lean_object* v_00_u03c3_638_, lean_object* v_00_u03b1_639_, lean_object* v_inst_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lean_Order_instCCPOStateT(v_m_637_, v_00_u03c3_638_, v_00_u03b1_639_, v_inst_640_);
lean_dec_ref(v_inst_640_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg(){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_box(0);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg___boxed(lean_object* v___dummy_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_Order_instCCPOESTOfNonempty___redArg();
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty(lean_object* v_00_u03b5_646_, lean_object* v_00_u03c3_647_, lean_object* v_00_u03b1_648_, lean_object* v_inst_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = lean_box(0);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter___redArg(lean_object* v_x_651_, lean_object* v_h__1_652_, lean_object* v_h__2_653_){
_start:
{
if (lean_obj_tag(v_x_651_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_655_; 
lean_dec(v_h__2_653_);
v_a_654_ = lean_ctor_get(v_x_651_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v_x_651_, 1);
v___x_655_ = lean_apply_2(v_h__1_652_, v_a_654_, lean_box(0));
return v___x_655_;
}
else
{
lean_object* v_a_656_; lean_object* v___x_657_; 
lean_dec(v_h__1_652_);
v_a_656_ = lean_ctor_get(v_x_651_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v_x_651_, 1);
v___x_657_ = lean_apply_2(v_h__2_653_, v_a_656_, lean_box(0));
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter(lean_object* v_00_u03b5_658_, lean_object* v_00_u03c3_659_, lean_object* v_00_u03b1_660_, lean_object* v_motive_661_, lean_object* v_x_662_, lean_object* v_h__1_663_, lean_object* v_h__2_664_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; 
lean_dec(v_h__2_664_);
v_a_665_ = lean_ctor_get(v_x_662_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v_x_662_, 1);
v___x_666_ = lean_apply_2(v_h__1_663_, v_a_665_, lean_box(0));
return v___x_666_;
}
else
{
lean_object* v_a_667_; lean_object* v___x_668_; 
lean_dec(v_h__1_663_);
v_a_667_ = lean_ctor_get(v_x_662_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v_x_662_, 1);
v___x_668_ = lean_apply_2(v_h__2_664_, v_a_667_, lean_box(0));
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg(){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = lean_box(0);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg___boxed(lean_object* v___dummy_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Order_instCCPOEIOOfNonempty___redArg();
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty(lean_object* v_00_u03b5_673_, lean_object* v_00_u03b1_674_, lean_object* v_inst_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lean_box(0);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg(){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_box(0);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg___boxed(lean_object* v___dummy_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Order_instCCPOIO___redArg();
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO(lean_object* v_00_u03b1_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_box(0);
return v___x_682_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = lean_box(0);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = lean_box(0);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_box(0);
return v___x_685_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_box(0);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Example_findF(lean_object* v_P_687_, lean_object* v_rec_688_, lean_object* v_x_689_){
_start:
{
lean_object* v___x_690_; uint8_t v___x_691_; 
lean_inc(v_x_689_);
v___x_690_ = lean_apply_1(v_P_687_, v_x_689_);
v___x_691_ = lean_unbox(v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_unsigned_to_nat(1u);
v___x_693_ = lean_nat_add(v_x_689_, v___x_692_);
lean_dec(v_x_689_);
v___x_694_ = lean_apply_1(v_rec_688_, v___x_693_);
return v___x_694_;
}
else
{
lean_object* v___x_695_; 
lean_dec_ref(v_rec_688_);
v___x_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_695_, 0, v_x_689_);
return v___x_695_;
}
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_StateRef(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Option(uint8_t builtin);
lean_object* runtime_initialize_Init_System_ST(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Order_instPartialOrderUnit = _init_l_Lean_Order_instPartialOrderUnit();
lean_mark_persistent(l_Lean_Order_instPartialOrderUnit);
l_Lean_Order_instCCPOUnit = _init_l_Lean_Order_instCCPOUnit();
lean_mark_persistent(l_Lean_Order_instCCPOUnit);
l_Lean_Order_instCompleteLatticeUnit = _init_l_Lean_Order_instCompleteLatticeUnit();
lean_mark_persistent(l_Lean_Order_instCompleteLatticeUnit);
l_Lean_Order_ImplicationOrder_instOrder = _init_l_Lean_Order_ImplicationOrder_instOrder();
lean_mark_persistent(l_Lean_Order_ImplicationOrder_instOrder);
l_Lean_Order_ImplicationOrder_instCompleteLattice = _init_l_Lean_Order_ImplicationOrder_instCompleteLattice();
lean_mark_persistent(l_Lean_Order_ImplicationOrder_instCompleteLattice);
l_Lean_Order_ReverseImplicationOrder_instOrder = _init_l_Lean_Order_ReverseImplicationOrder_instOrder();
lean_mark_persistent(l_Lean_Order_ReverseImplicationOrder_instOrder);
l_Lean_Order_ReverseImplicationOrder_instCompleteLattice = _init_l_Lean_Order_ReverseImplicationOrder_instCompleteLattice();
lean_mark_persistent(l_Lean_Order_ReverseImplicationOrder_instCompleteLattice);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
lean_object* initialize_Init_Control_Except(uint8_t builtin);
lean_object* initialize_Init_Control_StateRef(uint8_t builtin);
lean_object* initialize_Init_Control_Option(uint8_t builtin);
lean_object* initialize_Init_System_ST(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_StateRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_ST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Internal_Order_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
