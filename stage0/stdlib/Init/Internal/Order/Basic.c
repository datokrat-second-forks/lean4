// Lean compiler output
// Module: Init.Internal.Order.Basic
// Imports: public import Init.System.IO import all Init.Control.Except import all Init.Control.StateRef import all Init.Control.Option import all Init.System.ST import Init.ByCases
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
static lean_object* _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__0));
v___x_141_ = l_String_toRawSubstring_x27(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(lean_object* v_x_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__1));
v___x_158_ = l_Lean_Syntax_isOfKind(v_x_154_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_box(1);
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___y_156_);
return v___x_160_;
}
else
{
lean_object* v_quotContext_161_; lean_object* v_currMacroScope_162_; lean_object* v_ref_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_quotContext_161_ = lean_ctor_get(v___y_155_, 1);
v_currMacroScope_162_ = lean_ctor_get(v___y_155_, 2);
v_ref_163_ = lean_ctor_get(v___y_155_, 5);
v___x_164_ = 0;
v___x_165_ = l_Lean_SourceInfo_fromRef(v_ref_163_, v___x_164_);
v___x_166_ = lean_obj_once(&l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1, &l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1_once, _init_l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__1);
v___x_167_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__2));
lean_inc(v_currMacroScope_162_);
lean_inc(v_quotContext_161_);
v___x_168_ = l_Lean_addMacroScope(v_quotContext_161_, v___x_167_, v_currMacroScope_162_);
v___x_169_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___closed__5));
v___x_170_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_170_, 0, v___x_165_);
lean_ctor_set(v___x_170_, 1, v___x_166_);
lean_ctor_set(v___x_170_, 2, v___x_168_);
lean_ctor_set(v___x_170_, 3, v___x_169_);
v___x_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___y_156_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1___boxed(lean_object* v_x_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Order___aux__Init__Internal__Order__Basic______macroRules__Lean__Order__term_u22a5__1(v_x_172_, v___y_173_, v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(lean_object* v_x_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__PartialOrder__rel__1___closed__1));
lean_inc(v_x_176_);
v___x_180_ = l_Lean_Syntax_isOfKind(v_x_176_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_x_176_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v___y_178_);
return v___x_182_;
}
else
{
lean_object* v_ref_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_ref_183_ = l_Lean_replaceRef(v_x_176_, v___y_177_);
lean_dec(v_x_176_);
v___x_184_ = 0;
v___x_185_ = l_Lean_SourceInfo_fromRef(v_ref_183_, v___x_184_);
lean_dec(v_ref_183_);
v___x_186_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__1));
v___x_187_ = ((lean_object*)(l_Lean_Order_term_u22a5___closed__2));
lean_inc(v___x_185_);
v___x_188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = l_Lean_Syntax_node1(v___x_185_, v___x_186_, v___x_188_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___y_178_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1___boxed(lean_object* v_x_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Order___aux__Init__Internal__Order__Basic______unexpand__Lean__Order__bot__1(v_x_191_, v___y_192_, v___y_193_);
lean_dec(v___y_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg(){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_box(0);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___redArg___boxed(lean_object* v___dummy_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_Order_instOrderPi___redArg();
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi(lean_object* v_00_u03b1_199_, lean_object* v_00_u03b2_200_, lean_object* v_inst_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instOrderPi___boxed(lean_object* v_00_u03b1_203_, lean_object* v_00_u03b2_204_, lean_object* v_inst_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Order_instOrderPi(v_00_u03b1_203_, v_00_u03b2_204_, v_inst_205_);
lean_dec_ref(v_inst_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg(){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___redArg___boxed(lean_object* v___dummy_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Order_instCCPOPi___redArg();
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi(lean_object* v_00_u03b1_211_, lean_object* v_00_u03b2_212_, lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPi___boxed(lean_object* v_00_u03b1_215_, lean_object* v_00_u03b2_216_, lean_object* v_inst_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Order_instCCPOPi(v_00_u03b1_215_, v_00_u03b2_216_, v_inst_217_);
lean_dec_ref(v_inst_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg(){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_box(0);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___redArg___boxed(lean_object* v___dummy_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_Order_instCompleteLatticePi___redArg();
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi(lean_object* v_00_u03b1_223_, lean_object* v_00_u03b2_224_, lean_object* v_inst_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_box(0);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePi___boxed(lean_object* v_00_u03b1_227_, lean_object* v_00_u03b2_228_, lean_object* v_inst_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Order_instCompleteLatticePi(v_00_u03b1_227_, v_00_u03b2_228_, v_inst_229_);
lean_dec_ref(v_inst_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg(){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_box(0);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd___redArg___boxed(lean_object* v___dummy_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Order_instPartialOrderPProd___redArg();
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderPProd(lean_object* v_00_u03b1_235_, lean_object* v_00_u03b2_236_, lean_object* v_inst_237_, lean_object* v_inst_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_box(0);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg(){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_box(0);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd___redArg___boxed(lean_object* v___dummy_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_Order_instCCPOPProd___redArg();
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOPProd(lean_object* v_00_u03b1_244_, lean_object* v_00_u03b2_245_, lean_object* v_inst_246_, lean_object* v_inst_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = lean_box(0);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg(){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_box(0);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd___redArg___boxed(lean_object* v___dummy_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Order_instCompleteLatticePProd___redArg();
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticePProd(lean_object* v_00_u03b1_253_, lean_object* v_00_u03b2_254_, lean_object* v_inst_255_, lean_object* v_inst_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_box(0);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg(){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_box(0);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd___redArg___boxed(lean_object* v___dummy_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Order_instPartialOrderProd___redArg();
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderProd(lean_object* v_00_u03b1_262_, lean_object* v_00_u03b2_263_, lean_object* v_inst_264_, lean_object* v_inst_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_box(0);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg(){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_box(0);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd___redArg___boxed(lean_object* v___dummy_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Order_instCCPOProd___redArg();
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOProd(lean_object* v_00_u03b1_271_, lean_object* v_00_u03b2_272_, lean_object* v_inst_273_, lean_object* v_inst_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_box(0);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg(){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd___redArg___boxed(lean_object* v___dummy_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Order_instCompleteLatticeProd___redArg();
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCompleteLatticeProd(lean_object* v_00_u03b1_280_, lean_object* v_00_u03b2_281_, lean_object* v_inst_282_, lean_object* v_inst_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_box(0);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_Order_instPartialOrderUnit(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Order_instCCPOUnit(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_box(0);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_Order_instCompleteLatticeUnit(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_box(0);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg(lean_object* v_x_288_){
_start:
{
lean_inc(v_x_288_);
return v_x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___redArg___boxed(lean_object* v_x_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Order_FlatOrder_mk___redArg(v_x_289_);
lean_dec(v_x_289_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk(lean_object* v_00_u03b1_291_, lean_object* v_b_292_, lean_object* v_x_293_){
_start:
{
lean_inc(v_x_293_);
return v_x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_mk___boxed(lean_object* v_00_u03b1_294_, lean_object* v_b_295_, lean_object* v_x_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Order_FlatOrder_mk(v_00_u03b1_294_, v_b_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec(v_b_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg(lean_object* v_x_298_){
_start:
{
lean_inc(v_x_298_);
return v_x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___redArg___boxed(lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_Order_FlatOrder_inner___redArg(v_x_299_);
lean_dec(v_x_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner(lean_object* v_00_u03b1_301_, lean_object* v_b_302_, lean_object* v_x_303_){
_start:
{
lean_inc(v_x_303_);
return v_x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_inner___boxed(lean_object* v_00_u03b1_304_, lean_object* v_b_305_, lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Order_FlatOrder_inner(v_00_u03b1_304_, v_b_305_, v_x_306_);
lean_dec(v_x_306_);
lean_dec(v_b_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg(){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_box(0);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___redArg___boxed(lean_object* v___dummy_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Order_FlatOrder_instOrder___redArg();
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder(lean_object* v_00_u03b1_312_, lean_object* v_b_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_box(0);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instOrder___boxed(lean_object* v_00_u03b1_315_, lean_object* v_b_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_Order_FlatOrder_instOrder(v_00_u03b1_315_, v_b_316_);
lean_dec(v_b_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg(){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_Order_FlatOrder_instCCPO___redArg();
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO(lean_object* v_00_u03b1_322_, lean_object* v_b_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_box(0);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_FlatOrder_instCCPO___boxed(lean_object* v_00_u03b1_325_, lean_object* v_b_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Order_FlatOrder_instCCPO(v_00_u03b1_325_, v_b_326_);
lean_dec(v_b_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg(){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_box(0);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption___redArg___boxed(lean_object* v___dummy_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Order_instPartialOrderOption___redArg();
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOption(lean_object* v_00_u03b1_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_box(0);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg(){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_box(0);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption___redArg___boxed(lean_object* v___dummy_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Order_instCCPOOption___redArg();
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOption(lean_object* v_00_u03b1_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg(){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_box(0);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder___redArg___boxed(lean_object* v___dummy_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Order_ExceptT_partialOrder___redArg();
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_partialOrder(lean_object* v_00_u03b5_344_, lean_object* v_m_345_, lean_object* v_00_u03b1_346_, lean_object* v_inst_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(0);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg(){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_box(0);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo___redArg___boxed(lean_object* v___dummy_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Order_ExceptT_ccpo___redArg();
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ExceptT_ccpo(lean_object* v_00_u03b5_353_, lean_object* v_m_354_, lean_object* v_00_u03b1_355_, lean_object* v_inst_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_box(0);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg(){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_box(0);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___redArg___boxed(lean_object* v___dummy_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Order_instPartialOrderExceptT___redArg();
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT(lean_object* v_m_362_, lean_object* v_00_u03b5_363_, lean_object* v_00_u03b1_364_, lean_object* v_inst_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_box(0);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderExceptT___boxed(lean_object* v_m_367_, lean_object* v_00_u03b5_368_, lean_object* v_00_u03b1_369_, lean_object* v_inst_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_Order_instPartialOrderExceptT(v_m_367_, v_00_u03b5_368_, v_00_u03b1_369_, v_inst_370_);
lean_dec_ref(v_inst_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg(){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_box(0);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___redArg___boxed(lean_object* v___dummy_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Order_instCCPOExceptT___redArg();
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT(lean_object* v_m_376_, lean_object* v_00_u03b5_377_, lean_object* v_00_u03b1_378_, lean_object* v_inst_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lean_box(0);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOExceptT___boxed(lean_object* v_m_381_, lean_object* v_00_u03b5_382_, lean_object* v_00_u03b1_383_, lean_object* v_inst_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Order_instCCPOExceptT(v_m_381_, v_00_u03b5_382_, v_00_u03b1_383_, v_inst_384_);
lean_dec_ref(v_inst_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg(){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_box(0);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder___redArg___boxed(lean_object* v___dummy_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Order_OptionT_partialOrder___redArg();
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_partialOrder(lean_object* v_m_390_, lean_object* v_00_u03b1_391_, lean_object* v_inst_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_box(0);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg(){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_box(0);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo___redArg___boxed(lean_object* v___dummy_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Order_OptionT_ccpo___redArg();
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_OptionT_ccpo(lean_object* v_m_398_, lean_object* v_00_u03b1_399_, lean_object* v_inst_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lean_box(0);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg(){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_box(0);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___redArg___boxed(lean_object* v___dummy_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Order_instPartialOrderOptionT___redArg();
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT(lean_object* v_m_406_, lean_object* v_00_u03b1_407_, lean_object* v_inst_408_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderOptionT___boxed(lean_object* v_m_410_, lean_object* v_00_u03b1_411_, lean_object* v_inst_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Order_instPartialOrderOptionT(v_m_410_, v_00_u03b1_411_, v_inst_412_);
lean_dec_ref(v_inst_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg(){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lean_box(0);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___redArg___boxed(lean_object* v___dummy_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Order_instCCPOOptionT___redArg();
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT(lean_object* v_m_418_, lean_object* v_00_u03b1_419_, lean_object* v_inst_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = lean_box(0);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOOptionT___boxed(lean_object* v_m_422_, lean_object* v_00_u03b1_423_, lean_object* v_inst_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_Order_instCCPOOptionT(v_m_422_, v_00_u03b1_423_, v_inst_424_);
lean_dec_ref(v_inst_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg(){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = lean_box(0);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder___redArg___boxed(lean_object* v___dummy_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Order_ReaderT_partialOrder___redArg();
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_partialOrder(lean_object* v_00_u03c1_430_, lean_object* v_m_431_, lean_object* v_00_u03b1_432_, lean_object* v_inst_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = lean_box(0);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg(){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = lean_box(0);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo___redArg___boxed(lean_object* v___dummy_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Order_ReaderT_ccpo___redArg();
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_ReaderT_ccpo(lean_object* v_00_u03c1_439_, lean_object* v_m_440_, lean_object* v_00_u03b1_441_, lean_object* v_inst_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = lean_box(0);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg(){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_box(0);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT___redArg___boxed(lean_object* v___dummy_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_Order_instPartialOrderReaderT___redArg();
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderReaderT(lean_object* v_m_448_, lean_object* v_00_u03c1_449_, lean_object* v_00_u03b1_450_, lean_object* v_inst_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = lean_box(0);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg(){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_box(0);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT___redArg___boxed(lean_object* v___dummy_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lean_Order_instCCPOReaderT___redArg();
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOReaderT(lean_object* v_m_457_, lean_object* v_00_u03c1_458_, lean_object* v_00_u03b1_459_, lean_object* v_inst_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_box(0);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg(){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_box(0);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27___redArg___boxed(lean_object* v___dummy_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Order_instPartialOrderStateRefT_x27___redArg();
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateRefT_x27(lean_object* v_m_466_, lean_object* v_00_u03c9_467_, lean_object* v_00_u03c3_468_, lean_object* v_00_u03b1_469_, lean_object* v_inst_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = lean_box(0);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg(){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = lean_box(0);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27___redArg___boxed(lean_object* v___dummy_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Order_instCCPOStateRefT_x27___redArg();
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateRefT_x27(lean_object* v_m_476_, lean_object* v_00_u03c9_477_, lean_object* v_00_u03c3_478_, lean_object* v_00_u03b1_479_, lean_object* v_inst_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = lean_box(0);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg(){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_box(0);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder___redArg___boxed(lean_object* v___dummy_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Order_StateT_partialOrder___redArg();
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_partialOrder(lean_object* v_00_u03c3_486_, lean_object* v_m_487_, lean_object* v_00_u03b1_488_, lean_object* v_inst_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = lean_box(0);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg(){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = lean_box(0);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo___redArg___boxed(lean_object* v___dummy_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lean_Order_StateT_ccpo___redArg();
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_StateT_ccpo(lean_object* v_00_u03c3_495_, lean_object* v_m_496_, lean_object* v_00_u03b1_497_, lean_object* v_inst_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = lean_box(0);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg(){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_box(0);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___redArg___boxed(lean_object* v___dummy_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Order_instPartialOrderStateT___redArg();
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT(lean_object* v_m_504_, lean_object* v_00_u03c3_505_, lean_object* v_00_u03b1_506_, lean_object* v_inst_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_box(0);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instPartialOrderStateT___boxed(lean_object* v_m_509_, lean_object* v_00_u03c3_510_, lean_object* v_00_u03b1_511_, lean_object* v_inst_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Order_instPartialOrderStateT(v_m_509_, v_00_u03c3_510_, v_00_u03b1_511_, v_inst_512_);
lean_dec_ref(v_inst_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg(){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = lean_box(0);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___redArg___boxed(lean_object* v___dummy_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_Order_instCCPOStateT___redArg();
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT(lean_object* v_m_518_, lean_object* v_00_u03c3_519_, lean_object* v_00_u03b1_520_, lean_object* v_inst_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_box(0);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOStateT___boxed(lean_object* v_m_523_, lean_object* v_00_u03c3_524_, lean_object* v_00_u03b1_525_, lean_object* v_inst_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_Order_instCCPOStateT(v_m_523_, v_00_u03c3_524_, v_00_u03b1_525_, v_inst_526_);
lean_dec_ref(v_inst_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg(){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_box(0);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty___redArg___boxed(lean_object* v___dummy_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Order_instCCPOESTOfNonempty___redArg();
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOESTOfNonempty(lean_object* v_00_u03b5_532_, lean_object* v_00_u03c3_533_, lean_object* v_00_u03b1_534_, lean_object* v_inst_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter___redArg(lean_object* v_x_537_, lean_object* v_h__1_538_, lean_object* v_h__2_539_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; 
lean_dec(v_h__2_539_);
v_a_540_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v_x_537_, 1);
v___x_541_ = lean_apply_2(v_h__1_538_, v_a_540_, lean_box(0));
return v___x_541_;
}
else
{
lean_object* v_a_542_; lean_object* v___x_543_; 
lean_dec(v_h__1_538_);
v_a_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_a_542_);
lean_dec_ref_known(v_x_537_, 1);
v___x_543_ = lean_apply_2(v_h__2_539_, v_a_542_, lean_box(0));
return v___x_543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Internal_Order_Basic_0__EST_bind_match__1_splitter(lean_object* v_00_u03b5_544_, lean_object* v_00_u03c3_545_, lean_object* v_00_u03b1_546_, lean_object* v_motive_547_, lean_object* v_x_548_, lean_object* v_h__1_549_, lean_object* v_h__2_550_){
_start:
{
if (lean_obj_tag(v_x_548_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_552_; 
lean_dec(v_h__2_550_);
v_a_551_ = lean_ctor_get(v_x_548_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v_x_548_, 1);
v___x_552_ = lean_apply_2(v_h__1_549_, v_a_551_, lean_box(0));
return v___x_552_;
}
else
{
lean_object* v_a_553_; lean_object* v___x_554_; 
lean_dec(v_h__1_549_);
v_a_553_ = lean_ctor_get(v_x_548_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v_x_548_, 1);
v___x_554_ = lean_apply_2(v_h__2_550_, v_a_553_, lean_box(0));
return v___x_554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg(){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty___redArg___boxed(lean_object* v___dummy_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Order_instCCPOEIOOfNonempty___redArg();
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOEIOOfNonempty(lean_object* v_00_u03b5_559_, lean_object* v_00_u03b1_560_, lean_object* v_inst_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_box(0);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg(){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_box(0);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO___redArg___boxed(lean_object* v___dummy_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Order_instCCPOIO___redArg();
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_instCCPOIO(lean_object* v_00_u03b1_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_box(0);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_box(0);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Order_ImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_box(0);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instOrder(void){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_box(0);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Order_ReverseImplicationOrder_instCompleteLattice(void){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = lean_box(0);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Order_Example_findF(lean_object* v_P_573_, lean_object* v_rec_574_, lean_object* v_x_575_){
_start:
{
lean_object* v___x_576_; uint8_t v___x_577_; 
lean_inc(v_x_575_);
v___x_576_ = lean_apply_1(v_P_573_, v_x_575_);
v___x_577_ = lean_unbox(v___x_576_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_nat_add(v_x_575_, v___x_578_);
lean_dec(v_x_575_);
v___x_580_ = lean_apply_1(v_rec_574_, v___x_579_);
return v___x_580_;
}
else
{
lean_object* v___x_581_; 
lean_dec_ref(v_rec_574_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v_x_575_);
return v___x_581_;
}
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
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
