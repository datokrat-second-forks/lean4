// Lean compiler output
// Module: Init.Data.Int.Basic
// Imports: public import Init.Data.Cast public import Init.Data.Nat.Basic
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat___boxed(lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc___boxed(lean_object*);
static const lean_closure_object l_instNatCastInt_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_instNatCastInt = (const lean_object*)&l_instNatCastInt_value;
LEAN_EXPORT lean_object* l_instOfNat(lean_object*);
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__0 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__0_value;
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term-[_+1]"};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__1 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__1_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__2_value_aux_0),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 210, 79, 129, 91, 108, 255, 221)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__2 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__2_value;
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__3 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__3_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__4 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__4_value;
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-["};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__5 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__5_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__5_value)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__6 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__6_value;
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__7 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__7_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__8 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__8_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__9 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__9_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__4_value),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__6_value),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__9_value)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__10 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__10_value;
static const lean_string_object l_Int_term_x2d_x5b___x2b1_x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "+1]"};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__11 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__11_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__11_value)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__12 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__12_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__4_value),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__10_value),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__12_value)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__13 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__13_value;
static const lean_ctor_object l_Int_term_x2d_x5b___x2b1_x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__13_value)}};
static const lean_object* l_Int_term_x2d_x5b___x2b1_x5d___closed__14 = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__14_value;
LEAN_EXPORT const lean_object* l_Int_term_x2d_x5b___x2b1_x5d = (const lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__14_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_0),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_1),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value_aux_2),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_value;
static lean_once_cell_t l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(179, 90, 75, 184, 85, 230, 187, 139)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_term_x2d_x5b___x2b1_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value_aux_0),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__8_value)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__9_value),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__11_value)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12_value;
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14_value;
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0_value;
static const lean_ctor_object l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1 = (const lean_object*)&l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1_value;
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Int_instInhabited;
LEAN_EXPORT lean_object* l_Int_negOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Int_negOfNat___boxed(lean_object*);
lean_object* lean_int_neg(lean_object*);
LEAN_EXPORT lean_object* l_Int_neg___boxed(lean_object*);
static const lean_closure_object l_Int_instNegInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instNegInt___closed__0 = (const lean_object*)&l_Int_instNegInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instNegInt = (const lean_object*)&l_Int_instNegInt___closed__0_value;
LEAN_EXPORT lean_object* l_Int_subNatNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_subNatNat___boxed(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_add___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instAdd___closed__0 = (const lean_object*)&l_Int_instAdd___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instAdd = (const lean_object*)&l_Int_instAdd___closed__0_value;
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instMul___closed__0 = (const lean_object*)&l_Int_instMul___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instMul = (const lean_object*)&l_Int_instMul___closed__0_value;
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instSub___closed__0 = (const lean_object*)&l_Int_instSub___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instSub = (const lean_object*)&l_Int_instSub___closed__0_value;
LEAN_EXPORT lean_object* l_Int_instLEInt;
LEAN_EXPORT lean_object* l_Int_instLTInt;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_beq___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_nonneg(lean_object*);
LEAN_EXPORT lean_object* l_Int_decNonneg___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decLe___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decLt___boxed(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Int_natAbs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_negSucc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_sign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_sign___closed__0;
static lean_once_cell_t l_Int_sign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_sign___closed__1;
LEAN_EXPORT lean_object* l_Int_sign(lean_object*);
LEAN_EXPORT lean_object* l_Int_sign___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Int_toNat_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_instDvd;
LEAN_EXPORT lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_pow___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instNatPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_pow___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instNatPow___closed__0 = (const lean_object*)&l_Int_instNatPow___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instNatPow = (const lean_object*)&l_Int_instNatPow___closed__0_value;
LEAN_EXPORT lean_object* l_Int_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instMin___closed__0 = (const lean_object*)&l_Int_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instMin = (const lean_object*)&l_Int_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Int_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Int_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Int_instMax___closed__0 = (const lean_object*)&l_Int_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Int_instMax = (const lean_object*)&l_Int_instMax___closed__0_value;
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0___boxed(lean_object*);
static const lean_closure_object l_instIntCastInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instIntCastInt___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instIntCastInt___closed__0 = (const lean_object*)&l_instIntCastInt___closed__0_value;
LEAN_EXPORT const lean_object* l_instIntCastInt = (const lean_object*)&l_instIntCastInt___closed__0_value;
LEAN_EXPORT lean_object* l_Int_cast___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_ofNat___boxed(lean_object* v_a_00___x40___internal___hyg_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_nat_to_int(v_a_00___x40___internal___hyg_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc___boxed(lean_object* v_a_00___x40___internal___hyg_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lean_int_neg_succ_of_nat(v_a_00___x40___internal___hyg_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_instOfNat(lean_object* v_n_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_nat_to_int(v_n_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__5));
v___x_54_ = l_String_toRawSubstring_x27(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = ((lean_object*)(l_Int_term_x2d_x5b___x2b1_x5d___closed__2));
lean_inc(v_x_74_);
v___x_78_ = l_Lean_Syntax_isOfKind(v_x_74_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec(v_x_74_);
v___x_79_ = lean_box(1);
v___x_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v_a_76_);
return v___x_80_;
}
else
{
lean_object* v_quotContext_81_; lean_object* v_currMacroScope_82_; lean_object* v_ref_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_quotContext_81_ = lean_ctor_get(v_a_75_, 1);
v_currMacroScope_82_ = lean_ctor_get(v_a_75_, 2);
v_ref_83_ = lean_ctor_get(v_a_75_, 5);
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = l_Lean_Syntax_getArg(v_x_74_, v___x_84_);
lean_dec(v_x_74_);
v___x_86_ = 0;
v___x_87_ = l_Lean_SourceInfo_fromRef(v_ref_83_, v___x_86_);
v___x_88_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4));
v___x_89_ = lean_obj_once(&l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6, &l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6_once, _init_l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__6);
v___x_90_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__7));
lean_inc(v_currMacroScope_82_);
lean_inc(v_quotContext_81_);
v___x_91_ = l_Lean_addMacroScope(v_quotContext_81_, v___x_90_, v_currMacroScope_82_);
v___x_92_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__12));
lean_inc_n(v___x_87_, 2);
v___x_93_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_93_, 0, v___x_87_);
lean_ctor_set(v___x_93_, 1, v___x_89_);
lean_ctor_set(v___x_93_, 2, v___x_91_);
lean_ctor_set(v___x_93_, 3, v___x_92_);
v___x_94_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__14));
v___x_95_ = l_Lean_Syntax_node1(v___x_87_, v___x_94_, v___x_85_);
v___x_96_ = l_Lean_Syntax_node2(v___x_87_, v___x_88_, v___x_93_, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_76_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___boxed(lean_object* v_x_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1(v_x_98_, v_a_99_, v_a_100_);
lean_dec_ref(v_a_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(lean_object* v_x_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______macroRules__Int__term_x2d_x5b___x2b1_x5d__1___closed__4));
lean_inc(v_x_105_);
v___x_109_ = l_Lean_Syntax_isOfKind(v_x_105_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v_x_105_);
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_107_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = l_Lean_Syntax_getArg(v_x_105_, v___x_112_);
v___x_114_ = ((lean_object*)(l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___closed__1));
lean_inc(v___x_113_);
v___x_115_ = l_Lean_Syntax_isOfKind(v___x_113_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec(v___x_113_);
lean_dec(v_x_105_);
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_a_107_);
return v___x_117_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = l_Lean_Syntax_getArg(v_x_105_, v___x_118_);
lean_dec(v_x_105_);
lean_inc(v___x_119_);
v___x_120_ = l_Lean_Syntax_matchesNull(v___x_119_, v___x_118_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec(v___x_119_);
lean_dec(v___x_113_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_a_107_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; lean_object* v_ref_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_123_ = l_Lean_Syntax_getArg(v___x_119_, v___x_112_);
lean_dec(v___x_119_);
v_ref_124_ = l_Lean_replaceRef(v___x_113_, v_a_106_);
lean_dec(v___x_113_);
v___x_125_ = 0;
v___x_126_ = l_Lean_SourceInfo_fromRef(v_ref_124_, v___x_125_);
lean_dec(v_ref_124_);
v___x_127_ = ((lean_object*)(l_Int_term_x2d_x5b___x2b1_x5d___closed__2));
v___x_128_ = ((lean_object*)(l_Int_term_x2d_x5b___x2b1_x5d___closed__5));
lean_inc_n(v___x_126_, 2);
v___x_129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_126_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = ((lean_object*)(l_Int_term_x2d_x5b___x2b1_x5d___closed__11));
v___x_131_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_126_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = l_Lean_Syntax_node3(v___x_126_, v___x_127_, v___x_129_, v___x_123_, v___x_131_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_a_107_);
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1___boxed(lean_object* v_x_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Int___aux__Init__Data__Int__Basic______unexpand__Int__negSucc__1(v_x_134_, v_a_135_, v_a_136_);
lean_dec(v_a_135_);
return v_res_137_;
}
}
static lean_object* _init_l_Int_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_nat_to_int(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Int_instInhabited(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Int_negOfNat(lean_object* v_x_141_){
_start:
{
lean_object* v_zero_142_; uint8_t v_isZero_143_; 
v_zero_142_ = lean_unsigned_to_nat(0u);
v_isZero_143_ = lean_nat_dec_eq(v_x_141_, v_zero_142_);
if (v_isZero_143_ == 1)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
return v___x_144_;
}
else
{
lean_object* v_one_145_; lean_object* v_n_146_; lean_object* v___x_147_; 
v_one_145_ = lean_unsigned_to_nat(1u);
v_n_146_ = lean_nat_sub(v_x_141_, v_one_145_);
v___x_147_ = lean_int_neg_succ_of_nat(v_n_146_);
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* l_Int_negOfNat___boxed(lean_object* v_x_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Int_negOfNat(v_x_148_);
lean_dec(v_x_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Int_neg___boxed(lean_object* v_n_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lean_int_neg(v_n_151_);
lean_dec(v_n_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Int_subNatNat(lean_object* v_m_155_, lean_object* v_n_156_){
_start:
{
lean_object* v___x_157_; lean_object* v_zero_158_; uint8_t v_isZero_159_; 
v___x_157_ = lean_nat_sub(v_n_156_, v_m_155_);
v_zero_158_ = lean_unsigned_to_nat(0u);
v_isZero_159_ = lean_nat_dec_eq(v___x_157_, v_zero_158_);
if (v_isZero_159_ == 1)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v___x_157_);
v___x_160_ = lean_nat_sub(v_m_155_, v_n_156_);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
else
{
lean_object* v_one_162_; lean_object* v_n_163_; lean_object* v___x_164_; 
v_one_162_ = lean_unsigned_to_nat(1u);
v_n_163_ = lean_nat_sub(v___x_157_, v_one_162_);
lean_dec(v___x_157_);
v___x_164_ = lean_int_neg_succ_of_nat(v_n_163_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Int_subNatNat___boxed(lean_object* v_m_165_, lean_object* v_n_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Int_subNatNat(v_m_165_, v_n_166_);
lean_dec(v_n_166_);
lean_dec(v_m_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Int_add___boxed(lean_object* v_m_170_, lean_object* v_n_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = lean_int_add(v_m_170_, v_n_171_);
lean_dec(v_n_171_);
lean_dec(v_m_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Int_mul___boxed(lean_object* v_m_177_, lean_object* v_n_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = lean_int_mul(v_m_177_, v_n_178_);
lean_dec(v_n_178_);
lean_dec(v_m_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Int_sub___boxed(lean_object* v_m_184_, lean_object* v_n_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lean_int_sub(v_m_184_, v_n_185_);
lean_dec(v_n_185_);
lean_dec(v_m_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Int_instLEInt(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
return v___x_189_;
}
}
static lean_object* _init_l_Int_instLTInt(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(0);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Int_decEq___boxed(lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = lean_int_dec_eq(v_a_193_, v_b_194_);
lean_dec(v_b_194_);
lean_dec(v_a_193_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT uint8_t l_Int_instDecidableEq(lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
uint8_t v___x_199_; 
v___x_199_ = lean_int_dec_eq(v_a_197_, v_b_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Int_instDecidableEq___boxed(lean_object* v_a_200_, lean_object* v_b_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = l_Int_instDecidableEq(v_a_200_, v_b_201_);
lean_dec(v_b_201_);
lean_dec(v_a_200_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_beq___boxed(lean_object* v_a_00___x40___internal___hyg_206_, lean_object* v_a_00___x40___internal___hyg_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = lean_int_dec_eq(v_a_00___x40___internal___hyg_206_, v_a_00___x40___internal___hyg_207_);
lean_dec(v_a_00___x40___internal___hyg_207_);
lean_dec(v_a_00___x40___internal___hyg_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Int_decNonneg___boxed(lean_object* v_m_211_){
_start:
{
uint8_t v_res_212_; lean_object* v_r_213_; 
v_res_212_ = lean_int_dec_nonneg(v_m_211_);
lean_dec(v_m_211_);
v_r_213_ = lean_box(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* l_Int_decLe___boxed(lean_object* v_a_216_, lean_object* v_b_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = lean_int_dec_le(v_a_216_, v_b_217_);
lean_dec(v_b_217_);
lean_dec(v_a_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Int_decLt___boxed(lean_object* v_a_222_, lean_object* v_b_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = lean_int_dec_lt(v_a_222_, v_b_223_);
lean_dec(v_b_223_);
lean_dec(v_a_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT lean_object* l_Int_natAbs___boxed(lean_object* v_m_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = lean_nat_abs(v_m_227_);
lean_dec(v_m_227_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorIdx(lean_object* v_x_229_){
_start:
{
lean_object* v_natZero_230_; lean_object* v_intZero_231_; uint8_t v_isNeg_232_; 
v_natZero_230_ = lean_unsigned_to_nat(0u);
v_intZero_231_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_232_ = lean_int_dec_lt(v_x_229_, v_intZero_231_);
if (v_isNeg_232_ == 0)
{
return v_natZero_230_;
}
else
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(1u);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Int_ctorIdx___boxed(lean_object* v_x_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Int_ctorIdx(v_x_234_);
lean_dec(v_x_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg(lean_object* v_t_236_, lean_object* v_k_237_){
_start:
{
lean_object* v_intZero_238_; uint8_t v_isNeg_239_; 
v_intZero_238_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_239_ = lean_int_dec_lt(v_t_236_, v_intZero_238_);
if (v_isNeg_239_ == 0)
{
lean_object* v_a_240_; lean_object* v___x_241_; 
v_a_240_ = lean_nat_abs(v_t_236_);
v___x_241_ = lean_apply_1(v_k_237_, v_a_240_);
return v___x_241_;
}
else
{
lean_object* v_abs_242_; lean_object* v_one_243_; lean_object* v_a_244_; lean_object* v___x_245_; 
v_abs_242_ = lean_nat_abs(v_t_236_);
v_one_243_ = lean_unsigned_to_nat(1u);
v_a_244_ = lean_nat_sub(v_abs_242_, v_one_243_);
lean_dec(v_abs_242_);
v___x_245_ = lean_apply_1(v_k_237_, v_a_244_);
return v___x_245_;
}
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___redArg___boxed(lean_object* v_t_246_, lean_object* v_k_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Int_ctorElim___redArg(v_t_246_, v_k_247_);
lean_dec(v_t_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim(lean_object* v_motive_249_, lean_object* v_ctorIdx_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_k_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Int_ctorElim___redArg(v_t_251_, v_k_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Int_ctorElim___boxed(lean_object* v_motive_255_, lean_object* v_ctorIdx_256_, lean_object* v_t_257_, lean_object* v_h_258_, lean_object* v_k_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Int_ctorElim(v_motive_255_, v_ctorIdx_256_, v_t_257_, v_h_258_, v_k_259_);
lean_dec(v_t_257_);
lean_dec(v_ctorIdx_256_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg(lean_object* v_t_261_, lean_object* v_ofNat_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Int_ctorElim___redArg(v_t_261_, v_ofNat_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___redArg___boxed(lean_object* v_t_264_, lean_object* v_ofNat_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Int_ofNat_elim___redArg(v_t_264_, v_ofNat_265_);
lean_dec(v_t_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim(lean_object* v_motive_267_, lean_object* v_t_268_, lean_object* v_h_269_, lean_object* v_ofNat_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Int_ctorElim___redArg(v_t_268_, v_ofNat_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Int_ofNat_elim___boxed(lean_object* v_motive_272_, lean_object* v_t_273_, lean_object* v_h_274_, lean_object* v_ofNat_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Int_ofNat_elim(v_motive_272_, v_t_273_, v_h_274_, v_ofNat_275_);
lean_dec(v_t_273_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg(lean_object* v_t_277_, lean_object* v_negSucc_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Int_ctorElim___redArg(v_t_277_, v_negSucc_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___redArg___boxed(lean_object* v_t_280_, lean_object* v_negSucc_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Int_negSucc_elim___redArg(v_t_280_, v_negSucc_281_);
lean_dec(v_t_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim(lean_object* v_motive_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_negSucc_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Int_ctorElim___redArg(v_t_284_, v_negSucc_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Int_negSucc_elim___boxed(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_negSucc_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Int_negSucc_elim(v_motive_288_, v_t_289_, v_h_290_, v_negSucc_291_);
lean_dec(v_t_289_);
return v_res_292_;
}
}
static lean_object* _init_l_Int_sign___closed__0(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_unsigned_to_nat(1u);
v___x_294_ = lean_nat_to_int(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_l_Int_sign___closed__1(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_obj_once(&l_Int_sign___closed__0, &l_Int_sign___closed__0_once, _init_l_Int_sign___closed__0);
v___x_296_ = lean_int_neg(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Int_sign(lean_object* v_x_297_){
_start:
{
lean_object* v_natZero_298_; lean_object* v_intZero_299_; uint8_t v_isNeg_300_; 
v_natZero_298_ = lean_unsigned_to_nat(0u);
v_intZero_299_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_300_ = lean_int_dec_lt(v_x_297_, v_intZero_299_);
if (v_isNeg_300_ == 0)
{
lean_object* v_a_301_; uint8_t v_isZero_302_; 
v_a_301_ = lean_nat_abs(v_x_297_);
v_isZero_302_ = lean_nat_dec_eq(v_a_301_, v_natZero_298_);
lean_dec(v_a_301_);
if (v_isZero_302_ == 1)
{
return v_intZero_299_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_obj_once(&l_Int_sign___closed__0, &l_Int_sign___closed__0_once, _init_l_Int_sign___closed__0);
return v___x_303_;
}
}
else
{
lean_object* v___x_304_; 
v___x_304_ = lean_obj_once(&l_Int_sign___closed__1, &l_Int_sign___closed__1_once, _init_l_Int_sign___closed__1);
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Int_sign___boxed(lean_object* v_x_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Int_sign(v_x_305_);
lean_dec(v_x_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Int_toNat(lean_object* v_x_307_){
_start:
{
lean_object* v_natZero_308_; lean_object* v_intZero_309_; uint8_t v_isNeg_310_; 
v_natZero_308_ = lean_unsigned_to_nat(0u);
v_intZero_309_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_310_ = lean_int_dec_lt(v_x_307_, v_intZero_309_);
if (v_isNeg_310_ == 0)
{
lean_object* v_a_311_; 
v_a_311_ = lean_nat_abs(v_x_307_);
return v_a_311_;
}
else
{
return v_natZero_308_;
}
}
}
LEAN_EXPORT lean_object* l_Int_toNat___boxed(lean_object* v_x_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Int_toNat(v_x_312_);
lean_dec(v_x_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Int_toNat_x3f(lean_object* v_x_314_){
_start:
{
lean_object* v_intZero_315_; uint8_t v_isNeg_316_; 
v_intZero_315_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_316_ = lean_int_dec_lt(v_x_314_, v_intZero_315_);
if (v_isNeg_316_ == 0)
{
lean_object* v_a_317_; lean_object* v___x_318_; 
v_a_317_ = lean_nat_abs(v_x_314_);
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v_a_317_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l_Int_toNat_x3f___boxed(lean_object* v_x_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Int_toNat_x3f(v_x_320_);
lean_dec(v_x_320_);
return v_res_321_;
}
}
static lean_object* _init_l_Int_instDvd(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = lean_box(0);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Int_pow(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
lean_object* v_natZero_325_; lean_object* v_intZero_326_; uint8_t v_isNeg_327_; 
v_natZero_325_ = lean_unsigned_to_nat(0u);
v_intZero_326_ = lean_obj_once(&l_Int_instInhabited___closed__0, &l_Int_instInhabited___closed__0_once, _init_l_Int_instInhabited___closed__0);
v_isNeg_327_ = lean_int_dec_lt(v_x_323_, v_intZero_326_);
if (v_isNeg_327_ == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_a_328_ = lean_nat_abs(v_x_323_);
v___x_329_ = lean_nat_pow(v_a_328_, v_x_324_);
lean_dec(v_a_328_);
v___x_330_ = lean_nat_to_int(v___x_329_);
return v___x_330_;
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_unsigned_to_nat(2u);
v___x_332_ = lean_nat_mod(v_x_324_, v___x_331_);
v___x_333_ = lean_nat_dec_eq(v___x_332_, v_natZero_325_);
lean_dec(v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_334_ = lean_nat_abs(v_x_323_);
v___x_335_ = lean_nat_pow(v___x_334_, v_x_324_);
lean_dec(v___x_334_);
v___x_336_ = lean_nat_to_int(v___x_335_);
v___x_337_ = lean_int_neg(v___x_336_);
lean_dec(v___x_336_);
return v___x_337_;
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_nat_abs(v_x_323_);
v___x_339_ = lean_nat_pow(v___x_338_, v_x_324_);
lean_dec(v___x_338_);
v___x_340_ = lean_nat_to_int(v___x_339_);
return v___x_340_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_pow___boxed(lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Int_pow(v_x_341_, v_x_342_);
lean_dec(v_x_342_);
lean_dec(v_x_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Int_instMin___lam__0(lean_object* v_x_346_, lean_object* v_y_347_){
_start:
{
uint8_t v___x_348_; 
v___x_348_ = lean_int_dec_le(v_x_346_, v_y_347_);
if (v___x_348_ == 0)
{
lean_inc(v_y_347_);
return v_y_347_;
}
else
{
lean_inc(v_x_346_);
return v_x_346_;
}
}
}
LEAN_EXPORT lean_object* l_Int_instMin___lam__0___boxed(lean_object* v_x_349_, lean_object* v_y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Int_instMin___lam__0(v_x_349_, v_y_350_);
lean_dec(v_y_350_);
lean_dec(v_x_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Int_instMax___lam__0(lean_object* v_x_354_, lean_object* v_y_355_){
_start:
{
uint8_t v___x_356_; 
v___x_356_ = lean_int_dec_le(v_x_354_, v_y_355_);
if (v___x_356_ == 0)
{
lean_inc(v_x_354_);
return v_x_354_;
}
else
{
lean_inc(v_y_355_);
return v_y_355_;
}
}
}
LEAN_EXPORT lean_object* l_Int_instMax___lam__0___boxed(lean_object* v_x_357_, lean_object* v_y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Int_instMax___lam__0(v_x_357_, v_y_358_);
lean_dec(v_y_358_);
lean_dec(v_x_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0(lean_object* v_n_362_){
_start:
{
lean_inc(v_n_362_);
return v_n_362_;
}
}
LEAN_EXPORT lean_object* l_instIntCastInt___lam__0___boxed(lean_object* v_n_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_instIntCastInt___lam__0(v_n_363_);
lean_dec(v_n_363_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___redArg(lean_object* v_inst_367_, lean_object* v_a_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_apply_1(v_inst_367_, v_a_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Int_cast(lean_object* v_R_370_, lean_object* v_inst_371_, lean_object* v_a_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_apply_1(v_inst_371_, v_a_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast___redArg(lean_object* v_inst_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_375_, 0, lean_box(0));
lean_closure_set(v___x_375_, 1, v_inst_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_instCoeTailIntOfIntCast(lean_object* v_R_376_, lean_object* v_inst_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_378_, 0, lean_box(0));
lean_closure_set(v___x_378_, 1, v_inst_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast___redArg(lean_object* v_inst_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_380_, 0, lean_box(0));
lean_closure_set(v___x_380_, 1, v_inst_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_instCoeHTCTIntOfIntCast(lean_object* v_R_381_, lean_object* v_inst_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lean_alloc_closure((void*)(l_Int_cast), 3, 2);
lean_closure_set(v___x_383_, 0, lean_box(0));
lean_closure_set(v___x_383_, 1, v_inst_382_);
return v___x_383_;
}
}
lean_object* runtime_initialize_Init_Data_Cast(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_instInhabited = _init_l_Int_instInhabited();
lean_mark_persistent(l_Int_instInhabited);
l_Int_instLEInt = _init_l_Int_instLEInt();
lean_mark_persistent(l_Int_instLEInt);
l_Int_instLTInt = _init_l_Int_instLTInt();
lean_mark_persistent(l_Int_instLTInt);
l_Int_instDvd = _init_l_Int_instDvd();
lean_mark_persistent(l_Int_instDvd);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Cast(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Int_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Int_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
