// Lean compiler output
// Module: Init.Data.Array.Basic
// Imports: public import Init.Control.Do public import Init.GetElem public import Init.Data.List.ToArrayImpl import all Init.Data.List.ToArrayImpl public import Init.Data.Array.Set import all Init.Data.Array.Set public import Init.WF meta import Init.MetaTypes import Init.WFTactics
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_appendCore___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_repr(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__0 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__1 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__2 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__3 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__4 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__5 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__6 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__7 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__8 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__9 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__10 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__11 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__12 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__13 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__14 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__15 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__16 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__17 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__18 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__19 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__20 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
LEAN_EXPORT const lean_object* l_term_x23_x5b___x2c_x5d = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "List.toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17;
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership___redArg();
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object*, lean_object*);
lean_object* lean_array_mark_linear(lean_object*);
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swap___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Array_swap___auto__1___closed__0 = (const lean_object*)&l_Array_swap___auto__1___closed__0_value;
static const lean_string_object l_Array_swap___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Array_swap___auto__1___closed__1 = (const lean_object*)&l_Array_swap___auto__1___closed__1_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Array_swap___auto__1___closed__2 = (const lean_object*)&l_Array_swap___auto__1___closed__2_value;
static const lean_array_object l_Array_swap___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_swap___auto__1___closed__3 = (const lean_object*)&l_Array_swap___auto__1___closed__3_value;
static const lean_string_object l_Array_swap___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Array_swap___auto__1___closed__4 = (const lean_object*)&l_Array_swap___auto__1___closed__4_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Array_swap___auto__1___closed__5 = (const lean_object*)&l_Array_swap___auto__1___closed__5_value;
static const lean_string_object l_Array_swap___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__6 = (const lean_object*)&l_Array_swap___auto__1___closed__6_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_swap___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l_Array_swap___auto__1___closed__7 = (const lean_object*)&l_Array_swap___auto__1___closed__7_value;
static const lean_string_object l_Array_swap___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__8 = (const lean_object*)&l_Array_swap___auto__1___closed__8_value;
static lean_once_cell_t l_Array_swap___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__9;
static lean_once_cell_t l_Array_swap___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__10;
static lean_once_cell_t l_Array_swap___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__11;
static lean_once_cell_t l_Array_swap___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__12;
static lean_once_cell_t l_Array_swap___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__13;
static lean_once_cell_t l_Array_swap___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__14;
static lean_once_cell_t l_Array_swap___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__15;
static lean_once_cell_t l_Array_swap___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__16;
static lean_once_cell_t l_Array_swap___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__17;
LEAN_EXPORT lean_object* l_Array_swap___auto__1;
LEAN_EXPORT lean_object* l_Array_swap___auto__3;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0 = (const lean_object*)&l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg();
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object*);
static const lean_array_object l_Array_instEmptyCollection___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_instEmptyCollection___redArg___closed__0 = (const lean_object*)&l_Array_instEmptyCollection___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instEmptyCollection___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instEmptyCollection___closed__0;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_range___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_range___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_range___closed__0 = (const lean_object*)&l_Array_range___closed__0_value;
LEAN_EXPORT lean_object* l_Array_range(lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___auto__1;
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___auto__1;
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swapAt_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.Array.Basic"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__0 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__0_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array.swapAt!"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__1 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__1_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Array_swapAt_x21___redArg___closed__2 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__2_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " out of bounds"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__3 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object*, size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findSomeM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findSomeM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findSomeM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findIdxM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findIdxM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findIdxM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__0 = (const lean_object*)&l_Array_foldl___redArg___closed__0_value;
static const lean_closure_object l_Array_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__1 = (const lean_object*)&l_Array_foldl___redArg___closed__1_value;
static const lean_closure_object l_Array_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__2 = (const lean_object*)&l_Array_foldl___redArg___closed__2_value;
static const lean_closure_object l_Array_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__3 = (const lean_object*)&l_Array_foldl___redArg___closed__3_value;
static const lean_closure_object l_Array_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__4 = (const lean_object*)&l_Array_foldl___redArg___closed__4_value;
static const lean_closure_object l_Array_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__5 = (const lean_object*)&l_Array_foldl___redArg___closed__5_value;
static const lean_closure_object l_Array_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__6 = (const lean_object*)&l_Array_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__0_value),((lean_object*)&l_Array_foldl___redArg___closed__1_value)}};
static const lean_object* l_Array_foldl___redArg___closed__7 = (const lean_object*)&l_Array_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__7_value),((lean_object*)&l_Array_foldl___redArg___closed__2_value),((lean_object*)&l_Array_foldl___redArg___closed__3_value),((lean_object*)&l_Array_foldl___redArg___closed__4_value),((lean_object*)&l_Array_foldl___redArg___closed__5_value)}};
static const lean_object* l_Array_foldl___redArg___closed__8 = (const lean_object*)&l_Array_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__8_value),((lean_object*)&l_Array_foldl___redArg___closed__6_value)}};
static const lean_object* l_Array_foldl___redArg___closed__9 = (const lean_object*)&l_Array_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instFunctor___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__0 = (const lean_object*)&l_Array_instFunctor___closed__0_value;
static const lean_closure_object l_Array_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_map, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__1 = (const lean_object*)&l_Array_instFunctor___closed__1_value;
static const lean_ctor_object l_Array_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_instFunctor___closed__1_value),((lean_object*)&l_Array_instFunctor___closed__0_value)}};
static const lean_object* l_Array_instFunctor___closed__2 = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Array_instFunctor = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_findSome_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.findSome!"};
static const lean_object* l_Array_findSome_x21___redArg___closed__0 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__0_value;
static const lean_string_object l_Array_findSome_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "failed to find element"};
static const lean_object* l_Array_findSome_x21___redArg___closed__1 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_findSome_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_findSome_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Array_toListAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_toListAppend___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_toListAppend___redArg___closed__0 = (const lean_object*)&l_Array_toListAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instAppend___redArg___closed__0 = (const lean_object*)&l_Array_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instAppend___redArg();
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instHAppendList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_appendList, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instHAppendList___redArg___closed__0 = (const lean_object*)&l_Array_instHAppendList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg();
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_flatten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_flatten___redArg___closed__0 = (const lean_object*)&l_Array_flatten___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatten(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filter___redArg___closed__0 = (const lean_object*)&l_Array_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_filterRevM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reverse, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_filterRevM___redArg___closed__0 = (const lean_object*)&l_Array_filterRevM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Array_partition___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_filter___redArg___closed__0_value),((lean_object*)&l_Array_filter___redArg___closed__0_value)}};
static const lean_object* l_Array_partition___redArg___closed__0 = (const lean_object*)&l_Array_partition___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx___auto__1;
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.eraseIdx!"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__0_value;
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid index"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__1 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_eraseIdx_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_eraseIdx_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_insertIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Array.insertIdx!"};
static const lean_object* l_Array_insertIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_insertIdx_x21___redArg___closed__0_value;
static lean_once_cell_t l_Array_insertIdx_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertIdx_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_zip___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_zip___redArg___closed__0 = (const lean_object*)&l_Array_zip___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT___redArg();
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE___redArg();
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_reduceOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reduceOption___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_reduceOption___redArg___closed__0 = (const lean_object*)&l_Array_reduceOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object*, lean_object*);
static const lean_ctor_object l_Array_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value)}};
static const lean_object* l_Array_repr___redArg___closed__0 = (const lean_object*)&l_Array_repr___redArg___closed__0_value;
static const lean_ctor_object l_Array_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___redArg___closed__1 = (const lean_object*)&l_Array_repr___redArg___closed__1_value;
static lean_once_cell_t l_Array_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__2;
static lean_once_cell_t l_Array_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__3;
static const lean_ctor_object l_Array_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_Array_repr___redArg___closed__4 = (const lean_object*)&l_Array_repr___redArg___closed__4_value;
static const lean_ctor_object l_Array_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_Array_repr___redArg___closed__5 = (const lean_object*)&l_Array_repr___redArg___closed__5_value;
static const lean_string_object l_Array_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___redArg___closed__6 = (const lean_object*)&l_Array_repr___redArg___closed__6_value;
static const lean_ctor_object l_Array_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__6_value)}};
static const lean_object* l_Array_repr___redArg___closed__7 = (const lean_object*)&l_Array_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object*, lean_object*);
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5));
v___x_58_ = l_String_toRawSubstring_x27(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Array_mkArray0___redArg();
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object* v_x_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__1));
lean_inc(v_x_78_);
v___x_82_ = l_Lean_Syntax_isOfKind(v_x_78_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v_x_78_);
v___x_83_ = lean_box(1);
v___x_84_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v_a_80_);
return v___x_84_;
}
else
{
lean_object* v_quotContext_85_; lean_object* v_currMacroScope_86_; lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_quotContext_85_ = lean_ctor_get(v_a_79_, 1);
v_currMacroScope_86_ = lean_ctor_get(v_a_79_, 2);
v_ref_87_ = lean_ctor_get(v_a_79_, 5);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = l_Lean_Syntax_getArg(v_x_78_, v___x_88_);
lean_dec(v_x_78_);
v___x_90_ = l_Lean_Syntax_getArgs(v___x_89_);
lean_dec(v___x_89_);
v___x_91_ = 0;
v___x_92_ = l_Lean_SourceInfo_fromRef(v_ref_87_, v___x_91_);
v___x_93_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4));
v___x_94_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6);
v___x_95_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9));
lean_inc(v_currMacroScope_86_);
lean_inc(v_quotContext_85_);
v___x_96_ = l_Lean_addMacroScope(v_quotContext_85_, v___x_95_, v_currMacroScope_86_);
v___x_97_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11));
lean_inc_n(v___x_92_, 6);
v___x_98_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_98_, 0, v___x_92_);
lean_ctor_set(v___x_98_, 1, v___x_94_);
lean_ctor_set(v___x_98_, 2, v___x_96_);
lean_ctor_set(v___x_98_, 3, v___x_97_);
v___x_99_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_100_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15));
v___x_101_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16));
v___x_102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_92_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17);
v___x_104_ = l_Array_appendCore___redArg(v___x_103_, v___x_90_);
lean_dec_ref(v___x_90_);
v___x_105_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_92_);
lean_ctor_set(v___x_105_, 1, v___x_99_);
lean_ctor_set(v___x_105_, 2, v___x_104_);
v___x_106_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__17));
v___x_107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_92_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Lean_Syntax_node3(v___x_92_, v___x_100_, v___x_102_, v___x_105_, v___x_107_);
v___x_109_ = l_Lean_Syntax_node1(v___x_92_, v___x_99_, v___x_108_);
v___x_110_ = l_Lean_Syntax_node2(v___x_92_, v___x_93_, v___x_98_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_80_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object* v_x_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(v_x_112_, v_a_113_, v_a_114_);
lean_dec_ref(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg(){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_box(0);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object* v___dummy_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Array_instMembership___redArg();
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object* v_00_u03b1_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_box(0);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object* v_x_122_, lean_object* v_h__1_123_, lean_object* v_h__2_124_){
_start:
{
if (lean_obj_tag(v_x_122_) == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_h__1_123_);
v___x_125_ = lean_box(0);
v___x_126_ = lean_apply_1(v_h__2_124_, v___x_125_);
return v___x_126_;
}
else
{
lean_object* v_val_127_; lean_object* v___x_128_; 
lean_dec(v_h__2_124_);
v_val_127_ = lean_ctor_get(v_x_122_, 0);
lean_inc(v_val_127_);
lean_dec_ref_known(v_x_122_, 1);
v___x_128_ = lean_apply_1(v_h__1_123_, v_val_127_);
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object* v_elem_129_, lean_object* v_motive_130_, lean_object* v_x_131_, lean_object* v_h__1_132_, lean_object* v_h__2_133_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
lean_dec(v_h__1_132_);
v___x_134_ = lean_box(0);
v___x_135_ = lean_apply_1(v_h__2_133_, v___x_134_);
return v___x_135_;
}
else
{
lean_object* v_val_136_; lean_object* v___x_137_; 
lean_dec(v_h__2_133_);
v_val_136_ = lean_ctor_get(v_x_131_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v_x_131_, 1);
v___x_137_ = lean_apply_1(v_h__1_132_, v_val_136_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object* v_00_u03b1_140_, lean_object* v_xs_141_){
_start:
{
size_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = lean_array_size(v_xs_141_);
lean_dec_ref(v_xs_141_);
v_r_143_ = lean_box_usize(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object* v_00_u03b1_148_, lean_object* v_xs_149_, lean_object* v_i_150_, lean_object* v_h_151_){
_start:
{
size_t v_i_boxed_152_; lean_object* v_res_153_; 
v_i_boxed_152_ = lean_unbox_usize(v_i_150_);
lean_dec(v_i_150_);
v_res_153_ = lean_array_uget(v_xs_149_, v_i_boxed_152_);
lean_dec_ref(v_xs_149_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object* v_00_u03b1_158_, lean_object* v_xs_159_, lean_object* v_i_160_, lean_object* v_h_161_){
_start:
{
size_t v_i_boxed_162_; lean_object* v_res_163_; 
v_i_boxed_162_ = lean_unbox_usize(v_i_160_);
lean_dec(v_i_160_);
v_res_163_ = lean_array_uget_borrowed(v_xs_159_, v_i_boxed_162_);
lean_dec_ref(v_xs_159_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object* v_00_u03b1_169_, lean_object* v_xs_170_, lean_object* v_i_171_, lean_object* v_v_172_, lean_object* v_h_173_){
_start:
{
size_t v_i_boxed_174_; lean_object* v_res_175_; 
v_i_boxed_174_ = lean_unbox_usize(v_i_171_);
lean_dec(v_i_171_);
v_res_175_ = lean_array_uset(v_xs_170_, v_i_boxed_174_, v_v_172_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object* v_00_u03b1_178_, lean_object* v_xs_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lean_array_pop(v_xs_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object* v_00_u03b1_183_, lean_object* v_xs_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lean_array_mark_linear(v_xs_184_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object* v_00_u03b1_190_, lean_object* v_00_u03b2_191_, lean_object* v_xs_192_, lean_object* v_ys_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = lean_array_propagate_mark(v_xs_192_, v_ys_193_);
lean_dec_ref(v_xs_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object* v_00_u03b1_198_, lean_object* v_n_199_, lean_object* v_v_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = lean_mk_array(v_n_199_, v_v_200_);
return v_res_201_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__9(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = ((lean_object*)(l_Array_swap___auto__1___closed__8));
v___x_222_ = l_Lean_mkAtom(v___x_221_);
return v___x_222_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__10(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_obj_once(&l_Array_swap___auto__1___closed__9, &l_Array_swap___auto__1___closed__9_once, _init_l_Array_swap___auto__1___closed__9);
v___x_224_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_225_ = lean_array_push(v___x_224_, v___x_223_);
return v___x_225_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__11(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lean_obj_once(&l_Array_swap___auto__1___closed__10, &l_Array_swap___auto__1___closed__10_once, _init_l_Array_swap___auto__1___closed__10);
v___x_227_ = ((lean_object*)(l_Array_swap___auto__1___closed__7));
v___x_228_ = lean_box(2);
v___x_229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_226_);
return v___x_229_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__12(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_obj_once(&l_Array_swap___auto__1___closed__11, &l_Array_swap___auto__1___closed__11_once, _init_l_Array_swap___auto__1___closed__11);
v___x_231_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_232_ = lean_array_push(v___x_231_, v___x_230_);
return v___x_232_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__13(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_233_ = lean_obj_once(&l_Array_swap___auto__1___closed__12, &l_Array_swap___auto__1___closed__12_once, _init_l_Array_swap___auto__1___closed__12);
v___x_234_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_235_ = lean_box(2);
v___x_236_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v___x_234_);
lean_ctor_set(v___x_236_, 2, v___x_233_);
return v___x_236_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__14(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = lean_obj_once(&l_Array_swap___auto__1___closed__13, &l_Array_swap___auto__1___closed__13_once, _init_l_Array_swap___auto__1___closed__13);
v___x_238_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_239_ = lean_array_push(v___x_238_, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__15(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_240_ = lean_obj_once(&l_Array_swap___auto__1___closed__14, &l_Array_swap___auto__1___closed__14_once, _init_l_Array_swap___auto__1___closed__14);
v___x_241_ = ((lean_object*)(l_Array_swap___auto__1___closed__5));
v___x_242_ = lean_box(2);
v___x_243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v___x_241_);
lean_ctor_set(v___x_243_, 2, v___x_240_);
return v___x_243_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__16(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_Array_swap___auto__1___closed__15, &l_Array_swap___auto__1___closed__15_once, _init_l_Array_swap___auto__1___closed__15);
v___x_245_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_246_ = lean_array_push(v___x_245_, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__17(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_247_ = lean_obj_once(&l_Array_swap___auto__1___closed__16, &l_Array_swap___auto__1___closed__16_once, _init_l_Array_swap___auto__1___closed__16);
v___x_248_ = ((lean_object*)(l_Array_swap___auto__1___closed__2));
v___x_249_ = lean_box(2);
v___x_250_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set(v___x_250_, 1, v___x_248_);
lean_ctor_set(v___x_250_, 2, v___x_247_);
return v___x_250_;
}
}
static lean_object* _init_l_Array_swap___auto__1(void){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_251_;
}
}
static lean_object* _init_l_Array_swap___auto__3(void){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object* v_00_u03b1_259_, lean_object* v_xs_260_, lean_object* v_i_261_, lean_object* v_j_262_, lean_object* v_hi_263_, lean_object* v_hj_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lean_array_fswap(v_xs_260_, v_i_261_, v_j_262_);
lean_dec(v_j_262_);
lean_dec(v_i_261_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object* v_00_u03b1_270_, lean_object* v_xs_271_, lean_object* v_i_272_, lean_object* v_j_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = lean_array_swap(v_xs_271_, v_i_272_, v_j_273_);
lean_dec(v_j_273_);
lean_dec(v_i_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object* v_xs_275_, size_t v_i_276_, lean_object* v_h_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lean_array_uget_borrowed(v_xs_275_, v_i_276_);
lean_inc(v___x_278_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object* v_xs_279_, lean_object* v_i_280_, lean_object* v_h_281_){
_start:
{
size_t v_i_boxed_282_; lean_object* v_res_283_; 
v_i_boxed_282_ = lean_unbox_usize(v_i_280_);
lean_dec(v_i_280_);
v_res_283_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(v_xs_279_, v_i_boxed_282_, v_h_281_);
lean_dec_ref(v_xs_279_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg(){
_start:
{
lean_object* v___f_286_; 
v___f_286_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_286_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object* v___dummy_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg();
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object* v_00_u03b1_289_){
_start:
{
lean_object* v___f_290_; 
v___f_290_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_290_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object* v___dummy_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Array_instEmptyCollection___redArg();
return v_res_296_;
}
}
static lean_object* _init_l_Array_instEmptyCollection___closed__0(void){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Array_instEmptyCollection___redArg();
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object* v_00_u03b1_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Array_instEmptyCollection___closed__0, &l_Array_instEmptyCollection___closed__0_once, _init_l_Array_instEmptyCollection___closed__0);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg(){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object* v___dummy_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Array_instInhabited___redArg();
return v_res_303_;
}
}
static lean_object* _init_l_Array_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Array_instInhabited___redArg();
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object* v_00_u03b1_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
return v___x_306_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object* v_xs_307_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_308_ = lean_array_get_size(v_xs_307_);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = lean_nat_dec_eq(v___x_308_, v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object* v_xs_311_){
_start:
{
uint8_t v_res_312_; lean_object* v_r_313_; 
v_res_312_ = l_Array_isEmpty___redArg(v_xs_311_);
lean_dec_ref(v_xs_311_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object* v_00_u03b1_314_, lean_object* v_xs_315_){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_316_ = lean_array_get_size(v_xs_315_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v___x_316_, v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object* v_00_u03b1_319_, lean_object* v_xs_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Array_isEmpty(v_00_u03b1_319_, v_xs_320_);
lean_dec_ref(v_xs_320_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object* v_xs_323_, lean_object* v_ys_324_, lean_object* v_p_325_, lean_object* v_x_326_){
_start:
{
lean_object* v_zero_327_; uint8_t v_isZero_328_; 
v_zero_327_ = lean_unsigned_to_nat(0u);
v_isZero_328_ = lean_nat_dec_eq(v_x_326_, v_zero_327_);
if (v_isZero_328_ == 1)
{
lean_dec(v_x_326_);
lean_dec_ref(v_p_325_);
return v_isZero_328_;
}
else
{
lean_object* v_one_329_; lean_object* v_n_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_one_329_ = lean_unsigned_to_nat(1u);
v_n_330_ = lean_nat_sub(v_x_326_, v_one_329_);
lean_dec(v_x_326_);
v___x_331_ = lean_array_fget_borrowed(v_xs_323_, v_n_330_);
v___x_332_ = lean_array_fget_borrowed(v_ys_324_, v_n_330_);
lean_inc_ref(v_p_325_);
lean_inc(v___x_332_);
lean_inc(v___x_331_);
v___x_333_ = lean_apply_2(v_p_325_, v___x_331_, v___x_332_);
v___x_334_ = lean_unbox(v___x_333_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
lean_dec(v_n_330_);
lean_dec_ref(v_p_325_);
v___x_335_ = lean_unbox(v___x_333_);
return v___x_335_;
}
else
{
v_x_326_ = v_n_330_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object* v_xs_337_, lean_object* v_ys_338_, lean_object* v_p_339_, lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Array_isEqvAux___redArg(v_xs_337_, v_ys_338_, v_p_339_, v_x_340_);
lean_dec_ref(v_ys_338_);
lean_dec_ref(v_xs_337_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object* v_00_u03b1_343_, lean_object* v_xs_344_, lean_object* v_ys_345_, lean_object* v_hsz_346_, lean_object* v_p_347_, lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
uint8_t v___x_350_; 
v___x_350_ = l_Array_isEqvAux___redArg(v_xs_344_, v_ys_345_, v_p_347_, v_x_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object* v_00_u03b1_351_, lean_object* v_xs_352_, lean_object* v_ys_353_, lean_object* v_hsz_354_, lean_object* v_p_355_, lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
uint8_t v_res_358_; lean_object* v_r_359_; 
v_res_358_ = l_Array_isEqvAux(v_00_u03b1_351_, v_xs_352_, v_ys_353_, v_hsz_354_, v_p_355_, v_x_356_, v_x_357_);
lean_dec_ref(v_ys_353_);
lean_dec_ref(v_xs_352_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object* v_xs_360_, lean_object* v_ys_361_, lean_object* v_p_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = lean_array_get_size(v_xs_360_);
v___x_364_ = lean_array_get_size(v_ys_361_);
v___x_365_ = lean_nat_dec_eq(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
lean_dec_ref(v_p_362_);
return v___x_365_;
}
else
{
uint8_t v___x_366_; 
v___x_366_ = l_Array_isEqvAux___redArg(v_xs_360_, v_ys_361_, v_p_362_, v___x_363_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object* v_xs_367_, lean_object* v_ys_368_, lean_object* v_p_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l_Array_isEqv___redArg(v_xs_367_, v_ys_368_, v_p_369_);
lean_dec_ref(v_ys_368_);
lean_dec_ref(v_xs_367_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object* v_00_u03b1_372_, lean_object* v_xs_373_, lean_object* v_ys_374_, lean_object* v_p_375_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = lean_array_get_size(v_xs_373_);
v___x_377_ = lean_array_get_size(v_ys_374_);
v___x_378_ = lean_nat_dec_eq(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_dec_ref(v_p_375_);
return v___x_378_;
}
else
{
uint8_t v___x_379_; 
v___x_379_ = l_Array_isEqvAux___redArg(v_xs_373_, v_ys_374_, v_p_375_, v___x_376_);
return v___x_379_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object* v_00_u03b1_380_, lean_object* v_xs_381_, lean_object* v_ys_382_, lean_object* v_p_383_){
_start:
{
uint8_t v_res_384_; lean_object* v_r_385_; 
v_res_384_ = l_Array_isEqv(v_00_u03b1_380_, v_xs_381_, v_ys_382_, v_p_383_);
lean_dec_ref(v_ys_382_);
lean_dec_ref(v_xs_381_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object* v_inst_386_, lean_object* v_xs_387_, lean_object* v_ys_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_389_ = lean_array_get_size(v_xs_387_);
v___x_390_ = lean_array_get_size(v_ys_388_);
v___x_391_ = lean_nat_dec_eq(v___x_389_, v___x_390_);
if (v___x_391_ == 0)
{
lean_dec_ref(v_inst_386_);
return v___x_391_;
}
else
{
uint8_t v___x_392_; 
v___x_392_ = l_Array_isEqvAux___redArg(v_xs_387_, v_ys_388_, v_inst_386_, v___x_389_);
return v___x_392_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object* v_inst_393_, lean_object* v_xs_394_, lean_object* v_ys_395_){
_start:
{
uint8_t v_res_396_; lean_object* v_r_397_; 
v_res_396_ = l_Array_instBEq___redArg___lam__0(v_inst_393_, v_xs_394_, v_ys_395_);
lean_dec_ref(v_ys_395_);
lean_dec_ref(v_xs_394_);
v_r_397_ = lean_box(v_res_396_);
return v_r_397_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object* v_inst_398_){
_start:
{
lean_object* v___f_399_; 
v___f_399_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_399_, 0, v_inst_398_);
return v___f_399_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object* v_00_u03b1_400_, lean_object* v_inst_401_){
_start:
{
lean_object* v___f_402_; 
v___f_402_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_402_, 0, v_inst_401_);
return v___f_402_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object* v_n_403_, lean_object* v_f_404_, lean_object* v_acc_405_, lean_object* v_i_406_){
_start:
{
lean_object* v_zero_407_; uint8_t v_isZero_408_; 
v_zero_407_ = lean_unsigned_to_nat(0u);
v_isZero_408_ = lean_nat_dec_eq(v_i_406_, v_zero_407_);
if (v_isZero_408_ == 1)
{
lean_dec(v_i_406_);
lean_dec(v_f_404_);
return v_acc_405_;
}
else
{
lean_object* v_one_409_; lean_object* v_n_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_one_409_ = lean_unsigned_to_nat(1u);
v_n_410_ = lean_nat_sub(v_i_406_, v_one_409_);
lean_dec(v_i_406_);
v___x_411_ = lean_nat_sub(v_n_403_, v_n_410_);
v___x_412_ = lean_nat_sub(v___x_411_, v_one_409_);
lean_dec(v___x_411_);
lean_inc(v_f_404_);
v___x_413_ = lean_apply_1(v_f_404_, v___x_412_);
v___x_414_ = lean_array_push(v_acc_405_, v___x_413_);
v_acc_405_ = v___x_414_;
v_i_406_ = v_n_410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object* v_n_416_, lean_object* v_f_417_, lean_object* v_acc_418_, lean_object* v_i_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Array_ofFn_go___redArg(v_n_416_, v_f_417_, v_acc_418_, v_i_419_);
lean_dec(v_n_416_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object* v_00_u03b1_421_, lean_object* v_n_422_, lean_object* v_f_423_, lean_object* v_acc_424_, lean_object* v_i_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Array_ofFn_go___redArg(v_n_422_, v_f_423_, v_acc_424_, v_i_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object* v_00_u03b1_428_, lean_object* v_n_429_, lean_object* v_f_430_, lean_object* v_acc_431_, lean_object* v_i_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Array_ofFn_go(v_00_u03b1_428_, v_n_429_, v_f_430_, v_acc_431_, v_i_432_, v_a_433_);
lean_dec(v_n_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object* v_n_435_, lean_object* v_f_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_mk_empty_array_with_capacity(v_n_435_);
lean_inc(v_n_435_);
v___x_438_ = l_Array_ofFn_go___redArg(v_n_435_, v_f_436_, v___x_437_, v_n_435_);
lean_dec(v_n_435_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object* v_00_u03b1_439_, lean_object* v_n_440_, lean_object* v_f_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Array_ofFn___redArg(v_n_440_, v_f_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object* v_i_443_){
_start:
{
lean_inc(v_i_443_);
return v_i_443_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object* v_i_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Array_range___lam__0(v_i_444_);
lean_dec(v_i_444_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Array_range(lean_object* v_n_447_){
_start:
{
lean_object* v___f_448_; lean_object* v___x_449_; 
v___f_448_ = ((lean_object*)(l_Array_range___closed__0));
v___x_449_ = l_Array_ofFn___redArg(v_n_447_, v___f_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object* v_step_450_, lean_object* v_start_451_, lean_object* v_i_452_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_nat_mul(v_step_450_, v_i_452_);
v___x_454_ = lean_nat_add(v_start_451_, v___x_453_);
lean_dec(v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object* v_step_455_, lean_object* v_start_456_, lean_object* v_i_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Array_range_x27___lam__0(v_step_455_, v_start_456_, v_i_457_);
lean_dec(v_i_457_);
lean_dec(v_start_456_);
lean_dec(v_step_455_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object* v_start_459_, lean_object* v_size_460_, lean_object* v_step_461_){
_start:
{
lean_object* v___f_462_; lean_object* v___x_463_; 
v___f_462_ = lean_alloc_closure((void*)(l_Array_range_x27___lam__0___boxed), 3, 2);
lean_closure_set(v___f_462_, 0, v_step_461_);
lean_closure_set(v___f_462_, 1, v_start_459_);
v___x_463_ = l_Array_ofFn___redArg(v_size_460_, v___f_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object* v_v_464_){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_mk_empty_array_with_capacity(v___x_465_);
v___x_467_ = lean_array_push(v___x_466_, v_v_464_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton(lean_object* v_00_u03b1_468_, lean_object* v_v_469_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_unsigned_to_nat(1u);
v___x_471_ = lean_mk_empty_array_with_capacity(v___x_470_);
v___x_472_ = lean_array_push(v___x_471_, v_v_469_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object* v_inst_473_, lean_object* v_xs_474_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_475_ = lean_array_get_size(v_xs_474_);
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_sub(v___x_475_, v___x_476_);
v___x_478_ = lean_array_get_borrowed(v_inst_473_, v_xs_474_, v___x_477_);
lean_dec(v___x_477_);
lean_inc(v___x_478_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object* v_inst_479_, lean_object* v_xs_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Array_back_x21___redArg(v_inst_479_, v_xs_480_);
lean_dec_ref(v_xs_480_);
lean_dec(v_inst_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object* v_00_u03b1_482_, lean_object* v_inst_483_, lean_object* v_xs_484_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_485_ = lean_array_get_size(v_xs_484_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_sub(v___x_485_, v___x_486_);
v___x_488_ = lean_array_get_borrowed(v_inst_483_, v_xs_484_, v___x_487_);
lean_dec(v___x_487_);
lean_inc(v___x_488_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object* v_00_u03b1_489_, lean_object* v_inst_490_, lean_object* v_xs_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Array_back_x21(v_00_u03b1_489_, v_inst_490_, v_xs_491_);
lean_dec_ref(v_xs_491_);
lean_dec(v_inst_490_);
return v_res_492_;
}
}
static lean_object* _init_l_Array_back___auto__1(void){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object* v_xs_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_495_ = lean_array_get_size(v_xs_494_);
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = lean_nat_sub(v___x_495_, v___x_496_);
v___x_498_ = lean_array_fget_borrowed(v_xs_494_, v___x_497_);
lean_dec(v___x_497_);
lean_inc(v___x_498_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object* v_xs_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Array_back___redArg(v_xs_499_);
lean_dec_ref(v_xs_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Array_back(lean_object* v_00_u03b1_501_, lean_object* v_xs_502_, lean_object* v_h_503_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_504_ = lean_array_get_size(v_xs_502_);
v___x_505_ = lean_unsigned_to_nat(1u);
v___x_506_ = lean_nat_sub(v___x_504_, v___x_505_);
v___x_507_ = lean_array_fget_borrowed(v_xs_502_, v___x_506_);
lean_dec(v___x_506_);
lean_inc(v___x_507_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object* v_00_u03b1_508_, lean_object* v_xs_509_, lean_object* v_h_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Array_back(v_00_u03b1_508_, v_xs_509_, v_h_510_);
lean_dec_ref(v_xs_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object* v_xs_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_513_ = lean_array_get_size(v_xs_512_);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_sub(v___x_513_, v___x_514_);
v___x_516_ = lean_nat_dec_lt(v___x_515_, v___x_513_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v___x_515_);
v___x_517_ = lean_box(0);
return v___x_517_;
}
else
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_array_fget_borrowed(v_xs_512_, v___x_515_);
lean_dec(v___x_515_);
lean_inc(v___x_518_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object* v_xs_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Array_back_x3f___redArg(v_xs_520_);
lean_dec_ref(v_xs_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object* v_00_u03b1_522_, lean_object* v_xs_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_524_ = lean_array_get_size(v_xs_523_);
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_sub(v___x_524_, v___x_525_);
v___x_527_ = lean_nat_dec_lt(v___x_526_, v___x_524_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_dec(v___x_526_);
v___x_528_ = lean_box(0);
return v___x_528_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_array_fget_borrowed(v_xs_523_, v___x_526_);
lean_dec(v___x_526_);
lean_inc(v___x_529_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object* v_00_u03b1_531_, lean_object* v_xs_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Array_back_x3f(v_00_u03b1_531_, v_xs_532_);
lean_dec_ref(v_xs_532_);
return v_res_533_;
}
}
static lean_object* _init_l_Array_swapAt___auto__1(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object* v_xs_535_, lean_object* v_i_536_, lean_object* v_v_537_){
_start:
{
lean_object* v_e_538_; lean_object* v_xs_x27_539_; lean_object* v___x_540_; 
v_e_538_ = lean_array_fget(v_xs_535_, v_i_536_);
v_xs_x27_539_ = lean_array_fset(v_xs_535_, v_i_536_, v_v_537_);
v___x_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_540_, 0, v_e_538_);
lean_ctor_set(v___x_540_, 1, v_xs_x27_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object* v_xs_541_, lean_object* v_i_542_, lean_object* v_v_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Array_swapAt___redArg(v_xs_541_, v_i_542_, v_v_543_);
lean_dec(v_i_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object* v_00_u03b1_545_, lean_object* v_xs_546_, lean_object* v_i_547_, lean_object* v_v_548_, lean_object* v_hi_549_){
_start:
{
lean_object* v_e_550_; lean_object* v_xs_x27_551_; lean_object* v___x_552_; 
v_e_550_ = lean_array_fget(v_xs_546_, v_i_547_);
v_xs_x27_551_ = lean_array_fset(v_xs_546_, v_i_547_, v_v_548_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v_e_550_);
lean_ctor_set(v___x_552_, 1, v_xs_x27_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object* v_00_u03b1_553_, lean_object* v_xs_554_, lean_object* v_i_555_, lean_object* v_v_556_, lean_object* v_hi_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Array_swapAt(v_00_u03b1_553_, v_xs_554_, v_i_555_, v_v_556_, v_hi_557_);
lean_dec(v_i_555_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object* v_xs_563_, lean_object* v_i_564_, lean_object* v_v_565_){
_start:
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = lean_array_get_size(v_xs_563_);
v___x_567_ = lean_nat_dec_lt(v_i_564_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v_this_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_this_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_568_, 0, v_v_565_);
lean_ctor_set(v_this_568_, 1, v_xs_563_);
v___x_569_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_570_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_571_ = lean_unsigned_to_nat(463u);
v___x_572_ = lean_unsigned_to_nat(4u);
v___x_573_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_574_ = l_Nat_reprFast(v_i_564_);
v___x_575_ = lean_string_append(v___x_573_, v___x_574_);
lean_dec_ref(v___x_574_);
v___x_576_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_577_ = lean_string_append(v___x_575_, v___x_576_);
v___x_578_ = l_mkPanicMessageWithDecl(v___x_569_, v___x_570_, v___x_571_, v___x_572_, v___x_577_);
lean_dec_ref(v___x_577_);
v___x_579_ = l_panic___redArg(v_this_568_, v___x_578_);
lean_dec_ref_known(v_this_568_, 2);
return v___x_579_;
}
else
{
lean_object* v_e_580_; lean_object* v_xs_x27_581_; lean_object* v___x_582_; 
v_e_580_ = lean_array_fget(v_xs_563_, v_i_564_);
v_xs_x27_581_ = lean_array_fset(v_xs_563_, v_i_564_, v_v_565_);
lean_dec(v_i_564_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v_e_580_);
lean_ctor_set(v___x_582_, 1, v_xs_x27_581_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object* v_00_u03b1_583_, lean_object* v_xs_584_, lean_object* v_i_585_, lean_object* v_v_586_){
_start:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_array_get_size(v_xs_584_);
v___x_588_ = lean_nat_dec_lt(v_i_585_, v___x_587_);
if (v___x_588_ == 0)
{
lean_object* v_this_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_this_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_589_, 0, v_v_586_);
lean_ctor_set(v_this_589_, 1, v_xs_584_);
v___x_590_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_591_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_592_ = lean_unsigned_to_nat(463u);
v___x_593_ = lean_unsigned_to_nat(4u);
v___x_594_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_595_ = l_Nat_reprFast(v_i_585_);
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
lean_dec_ref(v___x_595_);
v___x_597_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_598_ = lean_string_append(v___x_596_, v___x_597_);
v___x_599_ = l_mkPanicMessageWithDecl(v___x_590_, v___x_591_, v___x_592_, v___x_593_, v___x_598_);
lean_dec_ref(v___x_598_);
v___x_600_ = l_panic___redArg(v_this_589_, v___x_599_);
lean_dec_ref_known(v_this_589_, 2);
return v___x_600_;
}
else
{
lean_object* v_e_601_; lean_object* v_xs_x27_602_; lean_object* v___x_603_; 
v_e_601_ = lean_array_fget(v_xs_584_, v_i_585_);
v_xs_x27_602_ = lean_array_fset(v_xs_584_, v_i_585_, v_v_586_);
lean_dec(v_i_585_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v_e_601_);
lean_ctor_set(v___x_603_, 1, v_xs_x27_602_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
lean_object* v_zero_606_; uint8_t v_isZero_607_; 
v_zero_606_ = lean_unsigned_to_nat(0u);
v_isZero_607_ = lean_nat_dec_eq(v_x_604_, v_zero_606_);
if (v_isZero_607_ == 1)
{
lean_dec(v_x_604_);
return v_x_605_;
}
else
{
lean_object* v_one_608_; lean_object* v_n_609_; lean_object* v___x_610_; 
v_one_608_ = lean_unsigned_to_nat(1u);
v_n_609_ = lean_nat_sub(v_x_604_, v_one_608_);
lean_dec(v_x_604_);
v___x_610_ = lean_array_pop(v_x_605_);
v_x_604_ = v_n_609_;
v_x_605_ = v___x_610_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object* v_00_u03b1_612_, lean_object* v_x_613_, lean_object* v_x_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v_x_613_, v_x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object* v_xs_616_, lean_object* v_n_617_){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_618_ = lean_array_get_size(v_xs_616_);
v___x_619_ = lean_nat_sub(v___x_618_, v_n_617_);
v___x_620_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v___x_619_, v_xs_616_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object* v_xs_621_, lean_object* v_n_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Array_shrink___redArg(v_xs_621_, v_n_622_);
lean_dec(v_n_622_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink(lean_object* v_00_u03b1_624_, lean_object* v_xs_625_, lean_object* v_n_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Array_shrink___redArg(v_xs_625_, v_n_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object* v_00_u03b1_628_, lean_object* v_xs_629_, lean_object* v_n_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Array_shrink(v_00_u03b1_628_, v_xs_629_, v_n_630_);
lean_dec(v_n_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object* v_xs_632_, lean_object* v_i_633_){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = lean_unsigned_to_nat(0u);
v___x_635_ = l_Array_extract___redArg(v_xs_632_, v___x_634_, v_i_633_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object* v_xs_636_, lean_object* v_i_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Array_take___redArg(v_xs_636_, v_i_637_);
lean_dec_ref(v_xs_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Array_take(lean_object* v_00_u03b1_639_, lean_object* v_xs_640_, lean_object* v_i_641_){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = l_Array_extract___redArg(v_xs_640_, v___x_642_, v_i_641_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object* v_00_u03b1_644_, lean_object* v_xs_645_, lean_object* v_i_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Array_take(v_00_u03b1_644_, v_xs_645_, v_i_646_);
lean_dec_ref(v_xs_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object* v_xs_648_, lean_object* v_i_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_array_get_size(v_xs_648_);
v___x_651_ = l_Array_extract___redArg(v_xs_648_, v_i_649_, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object* v_xs_652_, lean_object* v_i_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Array_drop___redArg(v_xs_652_, v_i_653_);
lean_dec_ref(v_xs_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Array_drop(lean_object* v_00_u03b1_655_, lean_object* v_xs_656_, lean_object* v_i_657_){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_array_get_size(v_xs_656_);
v___x_659_ = l_Array_extract___redArg(v_xs_656_, v_i_657_, v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object* v_00_u03b1_660_, lean_object* v_xs_661_, lean_object* v_i_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Array_drop(v_00_u03b1_660_, v_xs_661_, v_i_662_);
lean_dec_ref(v_xs_661_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object* v_xs_x27_664_, lean_object* v_i_665_, lean_object* v_toPure_666_, lean_object* v_v_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_array_fset(v_xs_x27_664_, v_i_665_, v_v_667_);
v___x_669_ = lean_apply_2(v_toPure_666_, lean_box(0), v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object* v_xs_x27_670_, lean_object* v_i_671_, lean_object* v_toPure_672_, lean_object* v_v_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Array_modifyMUnsafe___redArg___lam__0(v_xs_x27_670_, v_i_671_, v_toPure_672_, v_v_673_);
lean_dec(v_i_671_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object* v_inst_675_, lean_object* v_xs_676_, lean_object* v_i_677_, lean_object* v_f_678_){
_start:
{
lean_object* v_toApplicative_679_; lean_object* v_toBind_680_; lean_object* v_toPure_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
v_toApplicative_679_ = lean_ctor_get(v_inst_675_, 0);
lean_inc_ref(v_toApplicative_679_);
v_toBind_680_ = lean_ctor_get(v_inst_675_, 1);
lean_inc(v_toBind_680_);
lean_dec_ref(v_inst_675_);
v_toPure_681_ = lean_ctor_get(v_toApplicative_679_, 1);
lean_inc(v_toPure_681_);
lean_dec_ref(v_toApplicative_679_);
v___x_682_ = lean_array_get_size(v_xs_676_);
v___x_683_ = lean_nat_dec_lt(v_i_677_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
lean_dec(v_toBind_680_);
lean_dec(v_f_678_);
lean_dec(v_i_677_);
v___x_684_ = lean_apply_2(v_toPure_681_, lean_box(0), v_xs_676_);
return v___x_684_;
}
else
{
lean_object* v_v_685_; lean_object* v___x_686_; lean_object* v_xs_x27_687_; lean_object* v___f_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_v_685_ = lean_array_fget(v_xs_676_, v_i_677_);
v___x_686_ = lean_box(0);
v_xs_x27_687_ = lean_array_fset(v_xs_676_, v_i_677_, v___x_686_);
v___f_688_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_688_, 0, v_xs_x27_687_);
lean_closure_set(v___f_688_, 1, v_i_677_);
lean_closure_set(v___f_688_, 2, v_toPure_681_);
v___x_689_ = lean_apply_1(v_f_678_, v_v_685_);
v___x_690_ = lean_apply_4(v_toBind_680_, lean_box(0), lean_box(0), v___x_689_, v___f_688_);
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object* v_00_u03b1_691_, lean_object* v_m_692_, lean_object* v_inst_693_, lean_object* v_xs_694_, lean_object* v_i_695_, lean_object* v_f_696_){
_start:
{
lean_object* v_toApplicative_697_; lean_object* v_toBind_698_; lean_object* v_toPure_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v_toApplicative_697_ = lean_ctor_get(v_inst_693_, 0);
lean_inc_ref(v_toApplicative_697_);
v_toBind_698_ = lean_ctor_get(v_inst_693_, 1);
lean_inc(v_toBind_698_);
lean_dec_ref(v_inst_693_);
v_toPure_699_ = lean_ctor_get(v_toApplicative_697_, 1);
lean_inc(v_toPure_699_);
lean_dec_ref(v_toApplicative_697_);
v___x_700_ = lean_array_get_size(v_xs_694_);
v___x_701_ = lean_nat_dec_lt(v_i_695_, v___x_700_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
lean_dec(v_toBind_698_);
lean_dec(v_f_696_);
lean_dec(v_i_695_);
v___x_702_ = lean_apply_2(v_toPure_699_, lean_box(0), v_xs_694_);
return v___x_702_;
}
else
{
lean_object* v_v_703_; lean_object* v___x_704_; lean_object* v_xs_x27_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_v_703_ = lean_array_fget(v_xs_694_, v_i_695_);
v___x_704_ = lean_box(0);
v_xs_x27_705_ = lean_array_fset(v_xs_694_, v_i_695_, v___x_704_);
v___f_706_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_706_, 0, v_xs_x27_705_);
lean_closure_set(v___f_706_, 1, v_i_695_);
lean_closure_set(v___f_706_, 2, v_toPure_699_);
v___x_707_ = lean_apply_1(v_f_696_, v_v_703_);
v___x_708_ = lean_apply_4(v_toBind_698_, lean_box(0), lean_box(0), v___x_707_, v___f_706_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object* v_xs_709_, lean_object* v_i_710_, lean_object* v_f_711_){
_start:
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = lean_array_get_size(v_xs_709_);
v___x_713_ = lean_nat_dec_lt(v_i_710_, v___x_712_);
if (v___x_713_ == 0)
{
lean_dec(v_f_711_);
return v_xs_709_;
}
else
{
lean_object* v_v_714_; lean_object* v___x_715_; lean_object* v_xs_x27_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_v_714_ = lean_array_fget(v_xs_709_, v_i_710_);
v___x_715_ = lean_box(0);
v_xs_x27_716_ = lean_array_fset(v_xs_709_, v_i_710_, v___x_715_);
v___x_717_ = lean_apply_1(v_f_711_, v_v_714_);
v___x_718_ = lean_array_fset(v_xs_x27_716_, v_i_710_, v___x_717_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object* v_xs_719_, lean_object* v_i_720_, lean_object* v_f_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Array_modify___redArg(v_xs_719_, v_i_720_, v_f_721_);
lean_dec(v_i_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Array_modify(lean_object* v_00_u03b1_723_, lean_object* v_xs_724_, lean_object* v_i_725_, lean_object* v_f_726_){
_start:
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_array_get_size(v_xs_724_);
v___x_728_ = lean_nat_dec_lt(v_i_725_, v___x_727_);
if (v___x_728_ == 0)
{
lean_dec(v_f_726_);
return v_xs_724_;
}
else
{
lean_object* v_v_729_; lean_object* v___x_730_; lean_object* v_xs_x27_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v_v_729_ = lean_array_fget(v_xs_724_, v_i_725_);
v___x_730_ = lean_box(0);
v_xs_x27_731_ = lean_array_fset(v_xs_724_, v_i_725_, v___x_730_);
v___x_732_ = lean_apply_1(v_f_726_, v_v_729_);
v___x_733_ = lean_array_fset(v_xs_x27_731_, v_i_725_, v___x_732_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object* v_00_u03b1_734_, lean_object* v_xs_735_, lean_object* v_i_736_, lean_object* v_f_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Array_modify(v_00_u03b1_734_, v_xs_735_, v_i_736_, v_f_737_);
lean_dec(v_i_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object* v_xs_739_, lean_object* v_idx_740_, lean_object* v_f_741_){
_start:
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = lean_array_get_size(v_xs_739_);
v___x_743_ = lean_nat_dec_lt(v_idx_740_, v___x_742_);
if (v___x_743_ == 0)
{
lean_dec(v_f_741_);
return v_xs_739_;
}
else
{
lean_object* v_v_744_; lean_object* v___x_745_; lean_object* v_xs_x27_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_v_744_ = lean_array_fget(v_xs_739_, v_idx_740_);
v___x_745_ = lean_box(0);
v_xs_x27_746_ = lean_array_fset(v_xs_739_, v_idx_740_, v___x_745_);
v___x_747_ = lean_apply_1(v_f_741_, v_v_744_);
v___x_748_ = lean_array_fset(v_xs_x27_746_, v_idx_740_, v___x_747_);
return v___x_748_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object* v_xs_749_, lean_object* v_idx_750_, lean_object* v_f_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Array_modifyOp___redArg(v_xs_749_, v_idx_750_, v_f_751_);
lean_dec(v_idx_750_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object* v_00_u03b1_753_, lean_object* v_xs_754_, lean_object* v_idx_755_, lean_object* v_f_756_){
_start:
{
lean_object* v___x_757_; uint8_t v___x_758_; 
v___x_757_ = lean_array_get_size(v_xs_754_);
v___x_758_ = lean_nat_dec_lt(v_idx_755_, v___x_757_);
if (v___x_758_ == 0)
{
lean_dec(v_f_756_);
return v_xs_754_;
}
else
{
lean_object* v_v_759_; lean_object* v___x_760_; lean_object* v_xs_x27_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_v_759_ = lean_array_fget(v_xs_754_, v_idx_755_);
v___x_760_ = lean_box(0);
v_xs_x27_761_ = lean_array_fset(v_xs_754_, v_idx_755_, v___x_760_);
v___x_762_ = lean_apply_1(v_f_756_, v_v_759_);
v___x_763_ = lean_array_fset(v_xs_x27_761_, v_idx_755_, v___x_762_);
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object* v_00_u03b1_764_, lean_object* v_xs_765_, lean_object* v_idx_766_, lean_object* v_f_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Array_modifyOp(v_00_u03b1_764_, v_xs_765_, v_idx_766_, v_f_767_);
lean_dec(v_idx_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object* v_toPure_769_, lean_object* v_i_770_, lean_object* v_inst_771_, lean_object* v_as_772_, lean_object* v_f_773_, lean_object* v_sz_774_, lean_object* v_____do__lift_775_){
_start:
{
size_t v_i_boxed_776_; size_t v_sz_boxed_777_; lean_object* v_res_778_; 
v_i_boxed_776_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_sz_boxed_777_ = lean_unbox_usize(v_sz_774_);
lean_dec(v_sz_774_);
v_res_778_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(v_toPure_769_, v_i_boxed_776_, v_inst_771_, v_as_772_, v_f_773_, v_sz_boxed_777_, v_____do__lift_775_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object* v_inst_779_, lean_object* v_as_780_, lean_object* v_f_781_, size_t v_sz_782_, size_t v_i_783_, lean_object* v_b_784_){
_start:
{
lean_object* v_toApplicative_785_; lean_object* v_toBind_786_; lean_object* v_toPure_787_; uint8_t v___x_788_; 
v_toApplicative_785_ = lean_ctor_get(v_inst_779_, 0);
v_toBind_786_ = lean_ctor_get(v_inst_779_, 1);
lean_inc(v_toBind_786_);
v_toPure_787_ = lean_ctor_get(v_toApplicative_785_, 1);
lean_inc(v_toPure_787_);
v___x_788_ = lean_usize_dec_lt(v_i_783_, v_sz_782_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
lean_dec(v_toBind_786_);
lean_dec(v_f_781_);
lean_dec_ref(v_as_780_);
lean_dec_ref(v_inst_779_);
v___x_789_ = lean_apply_2(v_toPure_787_, lean_box(0), v_b_784_);
return v___x_789_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___f_792_; lean_object* v_a_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_790_ = lean_box_usize(v_i_783_);
v___x_791_ = lean_box_usize(v_sz_782_);
lean_inc(v_f_781_);
lean_inc_ref(v_as_780_);
v___f_792_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_792_, 0, v_toPure_787_);
lean_closure_set(v___f_792_, 1, v___x_790_);
lean_closure_set(v___f_792_, 2, v_inst_779_);
lean_closure_set(v___f_792_, 3, v_as_780_);
lean_closure_set(v___f_792_, 4, v_f_781_);
lean_closure_set(v___f_792_, 5, v___x_791_);
v_a_793_ = lean_array_uget(v_as_780_, v_i_783_);
lean_dec_ref(v_as_780_);
v___x_794_ = lean_apply_3(v_f_781_, v_a_793_, lean_box(0), v_b_784_);
v___x_795_ = lean_apply_4(v_toBind_786_, lean_box(0), lean_box(0), v___x_794_, v___f_792_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object* v_toPure_796_, size_t v_i_797_, lean_object* v_inst_798_, lean_object* v_as_799_, lean_object* v_f_800_, size_t v_sz_801_, lean_object* v_____do__lift_802_){
_start:
{
if (lean_obj_tag(v_____do__lift_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; 
lean_dec(v_f_800_);
lean_dec_ref(v_as_799_);
lean_dec_ref(v_inst_798_);
v_a_803_ = lean_ctor_get(v_____do__lift_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v_____do__lift_802_, 1);
v___x_804_ = lean_apply_2(v_toPure_796_, lean_box(0), v_a_803_);
return v___x_804_;
}
else
{
lean_object* v_a_805_; size_t v___x_806_; size_t v___x_807_; lean_object* v___x_808_; 
lean_dec(v_toPure_796_);
v_a_805_ = lean_ctor_get(v_____do__lift_802_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v_____do__lift_802_, 1);
v___x_806_ = ((size_t)1ULL);
v___x_807_ = lean_usize_add(v_i_797_, v___x_806_);
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_798_, v_as_799_, v_f_800_, v_sz_801_, v___x_807_, v_a_805_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object* v_inst_809_, lean_object* v_as_810_, lean_object* v_f_811_, lean_object* v_sz_812_, lean_object* v_i_813_, lean_object* v_b_814_){
_start:
{
size_t v_sz_boxed_815_; size_t v_i_boxed_816_; lean_object* v_res_817_; 
v_sz_boxed_815_ = lean_unbox_usize(v_sz_812_);
lean_dec(v_sz_812_);
v_i_boxed_816_ = lean_unbox_usize(v_i_813_);
lean_dec(v_i_813_);
v_res_817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_809_, v_as_810_, v_f_811_, v_sz_boxed_815_, v_i_boxed_816_, v_b_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object* v_00_u03b1_818_, lean_object* v_00_u03b2_819_, lean_object* v_m_820_, lean_object* v_inst_821_, lean_object* v_as_822_, lean_object* v_f_823_, size_t v_sz_824_, size_t v_i_825_, lean_object* v_b_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_821_, v_as_822_, v_f_823_, v_sz_824_, v_i_825_, v_b_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object* v_00_u03b1_828_, lean_object* v_00_u03b2_829_, lean_object* v_m_830_, lean_object* v_inst_831_, lean_object* v_as_832_, lean_object* v_f_833_, lean_object* v_sz_834_, lean_object* v_i_835_, lean_object* v_b_836_){
_start:
{
size_t v_sz_boxed_837_; size_t v_i_boxed_838_; lean_object* v_res_839_; 
v_sz_boxed_837_ = lean_unbox_usize(v_sz_834_);
lean_dec(v_sz_834_);
v_i_boxed_838_ = lean_unbox_usize(v_i_835_);
lean_dec(v_i_835_);
v_res_839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(v_00_u03b1_828_, v_00_u03b2_829_, v_m_830_, v_inst_831_, v_as_832_, v_f_833_, v_sz_boxed_837_, v_i_boxed_838_, v_b_836_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object* v_inst_840_, lean_object* v_as_841_, lean_object* v_b_842_, lean_object* v_f_843_){
_start:
{
size_t v_sz_844_; size_t v___x_845_; lean_object* v___x_846_; 
v_sz_844_ = lean_array_size(v_as_841_);
v___x_845_ = ((size_t)0ULL);
v___x_846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_840_, v_as_841_, v_f_843_, v_sz_844_, v___x_845_, v_b_842_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object* v_00_u03b1_847_, lean_object* v_00_u03b2_848_, lean_object* v_m_849_, lean_object* v_inst_850_, lean_object* v_as_851_, lean_object* v_b_852_, lean_object* v_f_853_){
_start:
{
size_t v_sz_854_; size_t v___x_855_; lean_object* v___x_856_; 
v_sz_854_ = lean_array_size(v_as_851_);
v___x_855_ = ((size_t)0ULL);
v___x_856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_850_, v_as_851_, v_f_853_, v_sz_854_, v___x_855_, v_b_852_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object* v_toPure_857_, lean_object* v_inst_858_, lean_object* v_as_859_, lean_object* v_f_860_, lean_object* v_n_861_, lean_object* v_____do__lift_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Array_forIn_x27_loop___redArg___lam__0(v_toPure_857_, v_inst_858_, v_as_859_, v_f_860_, v_n_861_, v_____do__lift_862_);
lean_dec(v_n_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object* v_inst_864_, lean_object* v_as_865_, lean_object* v_f_866_, lean_object* v_i_867_, lean_object* v_b_868_){
_start:
{
lean_object* v_toApplicative_869_; lean_object* v_toBind_870_; lean_object* v_toPure_871_; lean_object* v_zero_872_; uint8_t v_isZero_873_; 
v_toApplicative_869_ = lean_ctor_get(v_inst_864_, 0);
v_toBind_870_ = lean_ctor_get(v_inst_864_, 1);
lean_inc(v_toBind_870_);
v_toPure_871_ = lean_ctor_get(v_toApplicative_869_, 1);
lean_inc(v_toPure_871_);
v_zero_872_ = lean_unsigned_to_nat(0u);
v_isZero_873_ = lean_nat_dec_eq(v_i_867_, v_zero_872_);
if (v_isZero_873_ == 1)
{
lean_object* v___x_874_; 
lean_dec(v_toBind_870_);
lean_dec(v_f_866_);
lean_dec_ref(v_as_865_);
lean_dec_ref(v_inst_864_);
v___x_874_ = lean_apply_2(v_toPure_871_, lean_box(0), v_b_868_);
return v___x_874_;
}
else
{
lean_object* v_one_875_; lean_object* v_n_876_; lean_object* v___f_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_one_875_ = lean_unsigned_to_nat(1u);
v_n_876_ = lean_nat_sub(v_i_867_, v_one_875_);
lean_inc(v_n_876_);
lean_inc(v_f_866_);
lean_inc_ref(v_as_865_);
v___f_877_ = lean_alloc_closure((void*)(l_Array_forIn_x27_loop___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_877_, 0, v_toPure_871_);
lean_closure_set(v___f_877_, 1, v_inst_864_);
lean_closure_set(v___f_877_, 2, v_as_865_);
lean_closure_set(v___f_877_, 3, v_f_866_);
lean_closure_set(v___f_877_, 4, v_n_876_);
v___x_878_ = lean_array_get_size(v_as_865_);
v___x_879_ = lean_nat_sub(v___x_878_, v_one_875_);
v___x_880_ = lean_nat_sub(v___x_879_, v_n_876_);
lean_dec(v_n_876_);
lean_dec(v___x_879_);
v___x_881_ = lean_array_fget(v_as_865_, v___x_880_);
lean_dec(v___x_880_);
lean_dec_ref(v_as_865_);
v___x_882_ = lean_apply_3(v_f_866_, v___x_881_, lean_box(0), v_b_868_);
v___x_883_ = lean_apply_4(v_toBind_870_, lean_box(0), lean_box(0), v___x_882_, v___f_877_);
return v___x_883_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object* v_toPure_884_, lean_object* v_inst_885_, lean_object* v_as_886_, lean_object* v_f_887_, lean_object* v_n_888_, lean_object* v_____do__lift_889_){
_start:
{
if (lean_obj_tag(v_____do__lift_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_891_; 
lean_dec(v_f_887_);
lean_dec_ref(v_as_886_);
lean_dec_ref(v_inst_885_);
v_a_890_ = lean_ctor_get(v_____do__lift_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v_____do__lift_889_, 1);
v___x_891_ = lean_apply_2(v_toPure_884_, lean_box(0), v_a_890_);
return v___x_891_;
}
else
{
lean_object* v_a_892_; lean_object* v___x_893_; 
lean_dec(v_toPure_884_);
v_a_892_ = lean_ctor_get(v_____do__lift_889_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v_____do__lift_889_, 1);
v___x_893_ = l_Array_forIn_x27_loop___redArg(v_inst_885_, v_as_886_, v_f_887_, v_n_888_, v_a_892_);
return v___x_893_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object* v_inst_894_, lean_object* v_as_895_, lean_object* v_f_896_, lean_object* v_i_897_, lean_object* v_b_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Array_forIn_x27_loop___redArg(v_inst_894_, v_as_895_, v_f_896_, v_i_897_, v_b_898_);
lean_dec(v_i_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object* v_00_u03b1_900_, lean_object* v_00_u03b2_901_, lean_object* v_m_902_, lean_object* v_inst_903_, lean_object* v_as_904_, lean_object* v_f_905_, lean_object* v_i_906_, lean_object* v_h_907_, lean_object* v_b_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Array_forIn_x27_loop___redArg(v_inst_903_, v_as_904_, v_f_905_, v_i_906_, v_b_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object* v_00_u03b1_910_, lean_object* v_00_u03b2_911_, lean_object* v_m_912_, lean_object* v_inst_913_, lean_object* v_as_914_, lean_object* v_f_915_, lean_object* v_i_916_, lean_object* v_h_917_, lean_object* v_b_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Array_forIn_x27_loop(v_00_u03b1_910_, v_00_u03b2_911_, v_m_912_, v_inst_913_, v_as_914_, v_f_915_, v_i_916_, v_h_917_, v_b_918_);
lean_dec(v_i_916_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object* v_inst_920_, lean_object* v_00_u03b2_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
size_t v_sz_925_; size_t v___x_926_; lean_object* v___x_927_; 
v_sz_925_ = lean_array_size(v___y_922_);
v___x_926_ = ((size_t)0ULL);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_920_, v___y_922_, v___y_924_, v_sz_925_, v___x_926_, v___y_923_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object* v_inst_928_){
_start:
{
lean_object* v___f_929_; 
v___f_929_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_929_, 0, v_inst_928_);
return v___f_929_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object* v_00_u03b1_930_, lean_object* v_m_931_, lean_object* v_inst_932_){
_start:
{
lean_object* v___f_933_; 
v___f_933_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_933_, 0, v_inst_932_);
return v___f_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_i_934_, lean_object* v_inst_935_, lean_object* v_f_936_, lean_object* v_as_937_, lean_object* v_stop_938_, lean_object* v_____do__lift_939_){
_start:
{
size_t v_i_boxed_940_; size_t v_stop_boxed_941_; lean_object* v_res_942_; 
v_i_boxed_940_ = lean_unbox_usize(v_i_934_);
lean_dec(v_i_934_);
v_stop_boxed_941_ = lean_unbox_usize(v_stop_938_);
lean_dec(v_stop_938_);
v_res_942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(v_i_boxed_940_, v_inst_935_, v_f_936_, v_as_937_, v_stop_boxed_941_, v_____do__lift_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object* v_inst_943_, lean_object* v_f_944_, lean_object* v_as_945_, size_t v_i_946_, size_t v_stop_947_, lean_object* v_b_948_){
_start:
{
lean_object* v_toApplicative_949_; lean_object* v_toBind_950_; lean_object* v_toPure_951_; uint8_t v___x_952_; 
v_toApplicative_949_ = lean_ctor_get(v_inst_943_, 0);
v_toBind_950_ = lean_ctor_get(v_inst_943_, 1);
lean_inc(v_toBind_950_);
v_toPure_951_ = lean_ctor_get(v_toApplicative_949_, 1);
v___x_952_ = lean_usize_dec_eq(v_i_946_, v_stop_947_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___f_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_953_ = lean_box_usize(v_i_946_);
v___x_954_ = lean_box_usize(v_stop_947_);
lean_inc_ref(v_as_945_);
lean_inc(v_f_944_);
v___f_955_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_955_, 0, v___x_953_);
lean_closure_set(v___f_955_, 1, v_inst_943_);
lean_closure_set(v___f_955_, 2, v_f_944_);
lean_closure_set(v___f_955_, 3, v_as_945_);
lean_closure_set(v___f_955_, 4, v___x_954_);
v___x_956_ = lean_array_uget(v_as_945_, v_i_946_);
lean_dec_ref(v_as_945_);
v___x_957_ = lean_apply_2(v_f_944_, v_b_948_, v___x_956_);
v___x_958_ = lean_apply_4(v_toBind_950_, lean_box(0), lean_box(0), v___x_957_, v___f_955_);
return v___x_958_;
}
else
{
lean_object* v___x_959_; 
lean_inc(v_toPure_951_);
lean_dec(v_toBind_950_);
lean_dec_ref(v_as_945_);
lean_dec(v_f_944_);
lean_dec_ref(v_inst_943_);
v___x_959_ = lean_apply_2(v_toPure_951_, lean_box(0), v_b_948_);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t v_i_960_, lean_object* v_inst_961_, lean_object* v_f_962_, lean_object* v_as_963_, size_t v_stop_964_, lean_object* v_____do__lift_965_){
_start:
{
size_t v___x_966_; size_t v___x_967_; lean_object* v___x_968_; 
v___x_966_ = ((size_t)1ULL);
v___x_967_ = lean_usize_add(v_i_960_, v___x_966_);
v___x_968_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_961_, v_f_962_, v_as_963_, v___x_967_, v_stop_964_, v_____do__lift_965_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object* v_inst_969_, lean_object* v_f_970_, lean_object* v_as_971_, lean_object* v_i_972_, lean_object* v_stop_973_, lean_object* v_b_974_){
_start:
{
size_t v_i_boxed_975_; size_t v_stop_boxed_976_; lean_object* v_res_977_; 
v_i_boxed_975_ = lean_unbox_usize(v_i_972_);
lean_dec(v_i_972_);
v_stop_boxed_976_ = lean_unbox_usize(v_stop_973_);
lean_dec(v_stop_973_);
v_res_977_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_969_, v_f_970_, v_as_971_, v_i_boxed_975_, v_stop_boxed_976_, v_b_974_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object* v_00_u03b1_978_, lean_object* v_00_u03b2_979_, lean_object* v_m_980_, lean_object* v_inst_981_, lean_object* v_f_982_, lean_object* v_as_983_, size_t v_i_984_, size_t v_stop_985_, lean_object* v_b_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_981_, v_f_982_, v_as_983_, v_i_984_, v_stop_985_, v_b_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object* v_00_u03b1_988_, lean_object* v_00_u03b2_989_, lean_object* v_m_990_, lean_object* v_inst_991_, lean_object* v_f_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_stop_995_, lean_object* v_b_996_){
_start:
{
size_t v_i_boxed_997_; size_t v_stop_boxed_998_; lean_object* v_res_999_; 
v_i_boxed_997_ = lean_unbox_usize(v_i_994_);
lean_dec(v_i_994_);
v_stop_boxed_998_ = lean_unbox_usize(v_stop_995_);
lean_dec(v_stop_995_);
v_res_999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(v_00_u03b1_988_, v_00_u03b2_989_, v_m_990_, v_inst_991_, v_f_992_, v_as_993_, v_i_boxed_997_, v_stop_boxed_998_, v_b_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object* v_inst_1000_, lean_object* v_f_1001_, lean_object* v_init_1002_, lean_object* v_as_1003_, lean_object* v_start_1004_, lean_object* v_stop_1005_){
_start:
{
lean_object* v_toApplicative_1006_; lean_object* v_toPure_1007_; uint8_t v___x_1008_; 
v_toApplicative_1006_ = lean_ctor_get(v_inst_1000_, 0);
v_toPure_1007_ = lean_ctor_get(v_toApplicative_1006_, 1);
v___x_1008_ = lean_nat_dec_lt(v_start_1004_, v_stop_1005_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; 
lean_inc(v_toPure_1007_);
lean_dec_ref(v_as_1003_);
lean_dec(v_f_1001_);
lean_dec_ref(v_inst_1000_);
v___x_1009_ = lean_apply_2(v_toPure_1007_, lean_box(0), v_init_1002_);
return v___x_1009_;
}
else
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = lean_array_get_size(v_as_1003_);
v___x_1011_ = lean_nat_dec_le(v_stop_1005_, v___x_1010_);
if (v___x_1011_ == 0)
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_nat_dec_lt(v_start_1004_, v___x_1010_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
lean_inc(v_toPure_1007_);
lean_dec_ref(v_as_1003_);
lean_dec(v_f_1001_);
lean_dec_ref(v_inst_1000_);
v___x_1013_ = lean_apply_2(v_toPure_1007_, lean_box(0), v_init_1002_);
return v___x_1013_;
}
else
{
size_t v___x_1014_; size_t v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_usize_of_nat(v_start_1004_);
v___x_1015_ = lean_usize_of_nat(v___x_1010_);
v___x_1016_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1000_, v_f_1001_, v_as_1003_, v___x_1014_, v___x_1015_, v_init_1002_);
return v___x_1016_;
}
}
else
{
size_t v___x_1017_; size_t v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_usize_of_nat(v_start_1004_);
v___x_1018_ = lean_usize_of_nat(v_stop_1005_);
v___x_1019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1000_, v_f_1001_, v_as_1003_, v___x_1017_, v___x_1018_, v_init_1002_);
return v___x_1019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object* v_inst_1020_, lean_object* v_f_1021_, lean_object* v_init_1022_, lean_object* v_as_1023_, lean_object* v_start_1024_, lean_object* v_stop_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Array_foldlMUnsafe___redArg(v_inst_1020_, v_f_1021_, v_init_1022_, v_as_1023_, v_start_1024_, v_stop_1025_);
lean_dec(v_stop_1025_);
lean_dec(v_start_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object* v_00_u03b1_1027_, lean_object* v_00_u03b2_1028_, lean_object* v_m_1029_, lean_object* v_inst_1030_, lean_object* v_f_1031_, lean_object* v_init_1032_, lean_object* v_as_1033_, lean_object* v_start_1034_, lean_object* v_stop_1035_){
_start:
{
lean_object* v_toApplicative_1036_; lean_object* v_toPure_1037_; uint8_t v___x_1038_; 
v_toApplicative_1036_ = lean_ctor_get(v_inst_1030_, 0);
v_toPure_1037_ = lean_ctor_get(v_toApplicative_1036_, 1);
v___x_1038_ = lean_nat_dec_lt(v_start_1034_, v_stop_1035_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; 
lean_inc(v_toPure_1037_);
lean_dec_ref(v_as_1033_);
lean_dec(v_f_1031_);
lean_dec_ref(v_inst_1030_);
v___x_1039_ = lean_apply_2(v_toPure_1037_, lean_box(0), v_init_1032_);
return v___x_1039_;
}
else
{
lean_object* v___x_1040_; uint8_t v___x_1041_; 
v___x_1040_ = lean_array_get_size(v_as_1033_);
v___x_1041_ = lean_nat_dec_le(v_stop_1035_, v___x_1040_);
if (v___x_1041_ == 0)
{
uint8_t v___x_1042_; 
v___x_1042_ = lean_nat_dec_lt(v_start_1034_, v___x_1040_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; 
lean_inc(v_toPure_1037_);
lean_dec_ref(v_as_1033_);
lean_dec(v_f_1031_);
lean_dec_ref(v_inst_1030_);
v___x_1043_ = lean_apply_2(v_toPure_1037_, lean_box(0), v_init_1032_);
return v___x_1043_;
}
else
{
size_t v___x_1044_; size_t v___x_1045_; lean_object* v___x_1046_; 
v___x_1044_ = lean_usize_of_nat(v_start_1034_);
v___x_1045_ = lean_usize_of_nat(v___x_1040_);
v___x_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1030_, v_f_1031_, v_as_1033_, v___x_1044_, v___x_1045_, v_init_1032_);
return v___x_1046_;
}
}
else
{
size_t v___x_1047_; size_t v___x_1048_; lean_object* v___x_1049_; 
v___x_1047_ = lean_usize_of_nat(v_start_1034_);
v___x_1048_ = lean_usize_of_nat(v_stop_1035_);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1030_, v_f_1031_, v_as_1033_, v___x_1047_, v___x_1048_, v_init_1032_);
return v___x_1049_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object* v_00_u03b1_1050_, lean_object* v_00_u03b2_1051_, lean_object* v_m_1052_, lean_object* v_inst_1053_, lean_object* v_f_1054_, lean_object* v_init_1055_, lean_object* v_as_1056_, lean_object* v_start_1057_, lean_object* v_stop_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Array_foldlMUnsafe(v_00_u03b1_1050_, v_00_u03b2_1051_, v_m_1052_, v_inst_1053_, v_f_1054_, v_init_1055_, v_as_1056_, v_start_1057_, v_stop_1058_);
lean_dec(v_stop_1058_);
lean_dec(v_start_1057_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object* v_j_1060_, lean_object* v_inst_1061_, lean_object* v_f_1062_, lean_object* v_as_1063_, lean_object* v_stop_1064_, lean_object* v_n_1065_, lean_object* v_____do__lift_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Array_foldlM_loop___redArg___lam__0(v_j_1060_, v_inst_1061_, v_f_1062_, v_as_1063_, v_stop_1064_, v_n_1065_, v_____do__lift_1066_);
lean_dec(v_n_1065_);
lean_dec(v_j_1060_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object* v_inst_1068_, lean_object* v_f_1069_, lean_object* v_as_1070_, lean_object* v_stop_1071_, lean_object* v_i_1072_, lean_object* v_j_1073_, lean_object* v_b_1074_){
_start:
{
lean_object* v_toApplicative_1075_; lean_object* v_toBind_1076_; lean_object* v_toPure_1077_; uint8_t v___x_1078_; 
v_toApplicative_1075_ = lean_ctor_get(v_inst_1068_, 0);
v_toBind_1076_ = lean_ctor_get(v_inst_1068_, 1);
lean_inc(v_toBind_1076_);
v_toPure_1077_ = lean_ctor_get(v_toApplicative_1075_, 1);
v___x_1078_ = lean_nat_dec_lt(v_j_1073_, v_stop_1071_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; 
lean_inc(v_toPure_1077_);
lean_dec(v_toBind_1076_);
lean_dec(v_j_1073_);
lean_dec(v_stop_1071_);
lean_dec_ref(v_as_1070_);
lean_dec(v_f_1069_);
lean_dec_ref(v_inst_1068_);
v___x_1079_ = lean_apply_2(v_toPure_1077_, lean_box(0), v_b_1074_);
return v___x_1079_;
}
else
{
lean_object* v_zero_1080_; uint8_t v_isZero_1081_; 
v_zero_1080_ = lean_unsigned_to_nat(0u);
v_isZero_1081_ = lean_nat_dec_eq(v_i_1072_, v_zero_1080_);
if (v_isZero_1081_ == 1)
{
lean_object* v___x_1082_; 
lean_inc(v_toPure_1077_);
lean_dec(v_toBind_1076_);
lean_dec(v_j_1073_);
lean_dec(v_stop_1071_);
lean_dec_ref(v_as_1070_);
lean_dec(v_f_1069_);
lean_dec_ref(v_inst_1068_);
v___x_1082_ = lean_apply_2(v_toPure_1077_, lean_box(0), v_b_1074_);
return v___x_1082_;
}
else
{
lean_object* v_one_1083_; lean_object* v_n_1084_; lean_object* v___f_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_one_1083_ = lean_unsigned_to_nat(1u);
v_n_1084_ = lean_nat_sub(v_i_1072_, v_one_1083_);
lean_inc_ref(v_as_1070_);
lean_inc(v_f_1069_);
lean_inc(v_j_1073_);
v___f_1085_ = lean_alloc_closure((void*)(l_Array_foldlM_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1085_, 0, v_j_1073_);
lean_closure_set(v___f_1085_, 1, v_inst_1068_);
lean_closure_set(v___f_1085_, 2, v_f_1069_);
lean_closure_set(v___f_1085_, 3, v_as_1070_);
lean_closure_set(v___f_1085_, 4, v_stop_1071_);
lean_closure_set(v___f_1085_, 5, v_n_1084_);
v___x_1086_ = lean_array_fget(v_as_1070_, v_j_1073_);
lean_dec(v_j_1073_);
lean_dec_ref(v_as_1070_);
v___x_1087_ = lean_apply_2(v_f_1069_, v_b_1074_, v___x_1086_);
v___x_1088_ = lean_apply_4(v_toBind_1076_, lean_box(0), lean_box(0), v___x_1087_, v___f_1085_);
return v___x_1088_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object* v_j_1089_, lean_object* v_inst_1090_, lean_object* v_f_1091_, lean_object* v_as_1092_, lean_object* v_stop_1093_, lean_object* v_n_1094_, lean_object* v_____do__lift_1095_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = lean_unsigned_to_nat(1u);
v___x_1097_ = lean_nat_add(v_j_1089_, v___x_1096_);
v___x_1098_ = l_Array_foldlM_loop___redArg(v_inst_1090_, v_f_1091_, v_as_1092_, v_stop_1093_, v_n_1094_, v___x_1097_, v_____do__lift_1095_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object* v_inst_1099_, lean_object* v_f_1100_, lean_object* v_as_1101_, lean_object* v_stop_1102_, lean_object* v_i_1103_, lean_object* v_j_1104_, lean_object* v_b_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Array_foldlM_loop___redArg(v_inst_1099_, v_f_1100_, v_as_1101_, v_stop_1102_, v_i_1103_, v_j_1104_, v_b_1105_);
lean_dec(v_i_1103_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object* v_00_u03b1_1107_, lean_object* v_00_u03b2_1108_, lean_object* v_m_1109_, lean_object* v_inst_1110_, lean_object* v_f_1111_, lean_object* v_as_1112_, lean_object* v_stop_1113_, lean_object* v_h_1114_, lean_object* v_i_1115_, lean_object* v_j_1116_, lean_object* v_b_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Array_foldlM_loop___redArg(v_inst_1110_, v_f_1111_, v_as_1112_, v_stop_1113_, v_i_1115_, v_j_1116_, v_b_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_00_u03b2_1120_, lean_object* v_m_1121_, lean_object* v_inst_1122_, lean_object* v_f_1123_, lean_object* v_as_1124_, lean_object* v_stop_1125_, lean_object* v_h_1126_, lean_object* v_i_1127_, lean_object* v_j_1128_, lean_object* v_b_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Array_foldlM_loop(v_00_u03b1_1119_, v_00_u03b2_1120_, v_m_1121_, v_inst_1122_, v_f_1123_, v_as_1124_, v_stop_1125_, v_h_1126_, v_i_1127_, v_j_1128_, v_b_1129_);
lean_dec(v_i_1127_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_inst_1131_, lean_object* v_f_1132_, lean_object* v_as_1133_, lean_object* v___x_1134_, lean_object* v_stop_1135_, lean_object* v_____do__lift_1136_){
_start:
{
size_t v___x_52__boxed_1137_; size_t v_stop_boxed_1138_; lean_object* v_res_1139_; 
v___x_52__boxed_1137_ = lean_unbox_usize(v___x_1134_);
lean_dec(v___x_1134_);
v_stop_boxed_1138_ = lean_unbox_usize(v_stop_1135_);
lean_dec(v_stop_1135_);
v_res_1139_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(v_inst_1131_, v_f_1132_, v_as_1133_, v___x_52__boxed_1137_, v_stop_boxed_1138_, v_____do__lift_1136_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object* v_inst_1140_, lean_object* v_f_1141_, lean_object* v_as_1142_, size_t v_i_1143_, size_t v_stop_1144_, lean_object* v_b_1145_){
_start:
{
lean_object* v_toApplicative_1146_; lean_object* v_toBind_1147_; lean_object* v_toPure_1148_; uint8_t v___x_1149_; 
v_toApplicative_1146_ = lean_ctor_get(v_inst_1140_, 0);
v_toBind_1147_ = lean_ctor_get(v_inst_1140_, 1);
lean_inc(v_toBind_1147_);
v_toPure_1148_ = lean_ctor_get(v_toApplicative_1146_, 1);
v___x_1149_ = lean_usize_dec_eq(v_i_1143_, v_stop_1144_);
if (v___x_1149_ == 0)
{
size_t v___x_1150_; size_t v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___f_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1150_ = ((size_t)1ULL);
v___x_1151_ = lean_usize_sub(v_i_1143_, v___x_1150_);
v___x_1152_ = lean_box_usize(v___x_1151_);
v___x_1153_ = lean_box_usize(v_stop_1144_);
lean_inc_ref(v_as_1142_);
lean_inc(v_f_1141_);
v___f_1154_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1154_, 0, v_inst_1140_);
lean_closure_set(v___f_1154_, 1, v_f_1141_);
lean_closure_set(v___f_1154_, 2, v_as_1142_);
lean_closure_set(v___f_1154_, 3, v___x_1152_);
lean_closure_set(v___f_1154_, 4, v___x_1153_);
v___x_1155_ = lean_array_uget(v_as_1142_, v___x_1151_);
lean_dec_ref(v_as_1142_);
v___x_1156_ = lean_apply_2(v_f_1141_, v___x_1155_, v_b_1145_);
v___x_1157_ = lean_apply_4(v_toBind_1147_, lean_box(0), lean_box(0), v___x_1156_, v___f_1154_);
return v___x_1157_;
}
else
{
lean_object* v___x_1158_; 
lean_inc(v_toPure_1148_);
lean_dec(v_toBind_1147_);
lean_dec_ref(v_as_1142_);
lean_dec(v_f_1141_);
lean_dec_ref(v_inst_1140_);
v___x_1158_ = lean_apply_2(v_toPure_1148_, lean_box(0), v_b_1145_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object* v_inst_1159_, lean_object* v_f_1160_, lean_object* v_as_1161_, size_t v___x_1162_, size_t v_stop_1163_, lean_object* v_____do__lift_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1159_, v_f_1160_, v_as_1161_, v___x_1162_, v_stop_1163_, v_____do__lift_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object* v_inst_1166_, lean_object* v_f_1167_, lean_object* v_as_1168_, lean_object* v_i_1169_, lean_object* v_stop_1170_, lean_object* v_b_1171_){
_start:
{
size_t v_i_boxed_1172_; size_t v_stop_boxed_1173_; lean_object* v_res_1174_; 
v_i_boxed_1172_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_stop_boxed_1173_ = lean_unbox_usize(v_stop_1170_);
lean_dec(v_stop_1170_);
v_res_1174_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1166_, v_f_1167_, v_as_1168_, v_i_boxed_1172_, v_stop_boxed_1173_, v_b_1171_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object* v_00_u03b1_1175_, lean_object* v_00_u03b2_1176_, lean_object* v_m_1177_, lean_object* v_inst_1178_, lean_object* v_f_1179_, lean_object* v_as_1180_, size_t v_i_1181_, size_t v_stop_1182_, lean_object* v_b_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1178_, v_f_1179_, v_as_1180_, v_i_1181_, v_stop_1182_, v_b_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object* v_00_u03b1_1185_, lean_object* v_00_u03b2_1186_, lean_object* v_m_1187_, lean_object* v_inst_1188_, lean_object* v_f_1189_, lean_object* v_as_1190_, lean_object* v_i_1191_, lean_object* v_stop_1192_, lean_object* v_b_1193_){
_start:
{
size_t v_i_boxed_1194_; size_t v_stop_boxed_1195_; lean_object* v_res_1196_; 
v_i_boxed_1194_ = lean_unbox_usize(v_i_1191_);
lean_dec(v_i_1191_);
v_stop_boxed_1195_ = lean_unbox_usize(v_stop_1192_);
lean_dec(v_stop_1192_);
v_res_1196_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(v_00_u03b1_1185_, v_00_u03b2_1186_, v_m_1187_, v_inst_1188_, v_f_1189_, v_as_1190_, v_i_boxed_1194_, v_stop_boxed_1195_, v_b_1193_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object* v_inst_1197_, lean_object* v_f_1198_, lean_object* v_init_1199_, lean_object* v_as_1200_, lean_object* v_start_1201_, lean_object* v_stop_1202_){
_start:
{
lean_object* v_toApplicative_1203_; lean_object* v_toPure_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v_toApplicative_1203_ = lean_ctor_get(v_inst_1197_, 0);
v_toPure_1204_ = lean_ctor_get(v_toApplicative_1203_, 1);
v___x_1205_ = lean_array_get_size(v_as_1200_);
v___x_1206_ = lean_nat_dec_le(v_start_1201_, v___x_1205_);
if (v___x_1206_ == 0)
{
uint8_t v___x_1207_; 
v___x_1207_ = lean_nat_dec_lt(v_stop_1202_, v___x_1205_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1208_; 
lean_inc(v_toPure_1204_);
lean_dec_ref(v_as_1200_);
lean_dec(v_f_1198_);
lean_dec_ref(v_inst_1197_);
v___x_1208_ = lean_apply_2(v_toPure_1204_, lean_box(0), v_init_1199_);
return v___x_1208_;
}
else
{
size_t v___x_1209_; size_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1209_ = lean_usize_of_nat(v___x_1205_);
v___x_1210_ = lean_usize_of_nat(v_stop_1202_);
v___x_1211_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1197_, v_f_1198_, v_as_1200_, v___x_1209_, v___x_1210_, v_init_1199_);
return v___x_1211_;
}
}
else
{
uint8_t v___x_1212_; 
v___x_1212_ = lean_nat_dec_lt(v_stop_1202_, v_start_1201_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; 
lean_inc(v_toPure_1204_);
lean_dec_ref(v_as_1200_);
lean_dec(v_f_1198_);
lean_dec_ref(v_inst_1197_);
v___x_1213_ = lean_apply_2(v_toPure_1204_, lean_box(0), v_init_1199_);
return v___x_1213_;
}
else
{
size_t v___x_1214_; size_t v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = lean_usize_of_nat(v_start_1201_);
v___x_1215_ = lean_usize_of_nat(v_stop_1202_);
v___x_1216_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1197_, v_f_1198_, v_as_1200_, v___x_1214_, v___x_1215_, v_init_1199_);
return v___x_1216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object* v_inst_1217_, lean_object* v_f_1218_, lean_object* v_init_1219_, lean_object* v_as_1220_, lean_object* v_start_1221_, lean_object* v_stop_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Array_foldrMUnsafe___redArg(v_inst_1217_, v_f_1218_, v_init_1219_, v_as_1220_, v_start_1221_, v_stop_1222_);
lean_dec(v_stop_1222_);
lean_dec(v_start_1221_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object* v_00_u03b1_1224_, lean_object* v_00_u03b2_1225_, lean_object* v_m_1226_, lean_object* v_inst_1227_, lean_object* v_f_1228_, lean_object* v_init_1229_, lean_object* v_as_1230_, lean_object* v_start_1231_, lean_object* v_stop_1232_){
_start:
{
lean_object* v_toApplicative_1233_; lean_object* v_toPure_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v_toApplicative_1233_ = lean_ctor_get(v_inst_1227_, 0);
v_toPure_1234_ = lean_ctor_get(v_toApplicative_1233_, 1);
v___x_1235_ = lean_array_get_size(v_as_1230_);
v___x_1236_ = lean_nat_dec_le(v_start_1231_, v___x_1235_);
if (v___x_1236_ == 0)
{
uint8_t v___x_1237_; 
v___x_1237_ = lean_nat_dec_lt(v_stop_1232_, v___x_1235_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; 
lean_inc(v_toPure_1234_);
lean_dec_ref(v_as_1230_);
lean_dec(v_f_1228_);
lean_dec_ref(v_inst_1227_);
v___x_1238_ = lean_apply_2(v_toPure_1234_, lean_box(0), v_init_1229_);
return v___x_1238_;
}
else
{
size_t v___x_1239_; size_t v___x_1240_; lean_object* v___x_1241_; 
v___x_1239_ = lean_usize_of_nat(v___x_1235_);
v___x_1240_ = lean_usize_of_nat(v_stop_1232_);
v___x_1241_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1227_, v_f_1228_, v_as_1230_, v___x_1239_, v___x_1240_, v_init_1229_);
return v___x_1241_;
}
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = lean_nat_dec_lt(v_stop_1232_, v_start_1231_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; 
lean_inc(v_toPure_1234_);
lean_dec_ref(v_as_1230_);
lean_dec(v_f_1228_);
lean_dec_ref(v_inst_1227_);
v___x_1243_ = lean_apply_2(v_toPure_1234_, lean_box(0), v_init_1229_);
return v___x_1243_;
}
else
{
size_t v___x_1244_; size_t v___x_1245_; lean_object* v___x_1246_; 
v___x_1244_ = lean_usize_of_nat(v_start_1231_);
v___x_1245_ = lean_usize_of_nat(v_stop_1232_);
v___x_1246_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1227_, v_f_1228_, v_as_1230_, v___x_1244_, v___x_1245_, v_init_1229_);
return v___x_1246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object* v_00_u03b1_1247_, lean_object* v_00_u03b2_1248_, lean_object* v_m_1249_, lean_object* v_inst_1250_, lean_object* v_f_1251_, lean_object* v_init_1252_, lean_object* v_as_1253_, lean_object* v_start_1254_, lean_object* v_stop_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Array_foldrMUnsafe(v_00_u03b1_1247_, v_00_u03b2_1248_, v_m_1249_, v_inst_1250_, v_f_1251_, v_init_1252_, v_as_1253_, v_start_1254_, v_stop_1255_);
lean_dec(v_stop_1255_);
lean_dec(v_start_1254_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object* v_inst_1257_, lean_object* v_f_1258_, lean_object* v_as_1259_, lean_object* v_stop_1260_, lean_object* v_n_1261_, lean_object* v_____do__lift_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Array_foldrM_fold___redArg___lam__0(v_inst_1257_, v_f_1258_, v_as_1259_, v_stop_1260_, v_n_1261_, v_____do__lift_1262_);
lean_dec(v_n_1261_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object* v_inst_1264_, lean_object* v_f_1265_, lean_object* v_as_1266_, lean_object* v_stop_1267_, lean_object* v_i_1268_, lean_object* v_b_1269_){
_start:
{
lean_object* v_toApplicative_1270_; lean_object* v_toBind_1271_; lean_object* v_toPure_1272_; uint8_t v___x_1273_; 
v_toApplicative_1270_ = lean_ctor_get(v_inst_1264_, 0);
v_toBind_1271_ = lean_ctor_get(v_inst_1264_, 1);
lean_inc(v_toBind_1271_);
v_toPure_1272_ = lean_ctor_get(v_toApplicative_1270_, 1);
v___x_1273_ = lean_nat_dec_eq(v_i_1268_, v_stop_1267_);
if (v___x_1273_ == 0)
{
lean_object* v_zero_1274_; uint8_t v_isZero_1275_; 
v_zero_1274_ = lean_unsigned_to_nat(0u);
v_isZero_1275_ = lean_nat_dec_eq(v_i_1268_, v_zero_1274_);
if (v_isZero_1275_ == 1)
{
lean_object* v___x_1276_; 
lean_inc(v_toPure_1272_);
lean_dec(v_toBind_1271_);
lean_dec(v_stop_1267_);
lean_dec_ref(v_as_1266_);
lean_dec(v_f_1265_);
lean_dec_ref(v_inst_1264_);
v___x_1276_ = lean_apply_2(v_toPure_1272_, lean_box(0), v_b_1269_);
return v___x_1276_;
}
else
{
lean_object* v_one_1277_; lean_object* v_n_1278_; lean_object* v___f_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_one_1277_ = lean_unsigned_to_nat(1u);
v_n_1278_ = lean_nat_sub(v_i_1268_, v_one_1277_);
lean_inc(v_n_1278_);
lean_inc_ref(v_as_1266_);
lean_inc(v_f_1265_);
v___f_1279_ = lean_alloc_closure((void*)(l_Array_foldrM_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1279_, 0, v_inst_1264_);
lean_closure_set(v___f_1279_, 1, v_f_1265_);
lean_closure_set(v___f_1279_, 2, v_as_1266_);
lean_closure_set(v___f_1279_, 3, v_stop_1267_);
lean_closure_set(v___f_1279_, 4, v_n_1278_);
v___x_1280_ = lean_array_fget(v_as_1266_, v_n_1278_);
lean_dec(v_n_1278_);
lean_dec_ref(v_as_1266_);
v___x_1281_ = lean_apply_2(v_f_1265_, v___x_1280_, v_b_1269_);
v___x_1282_ = lean_apply_4(v_toBind_1271_, lean_box(0), lean_box(0), v___x_1281_, v___f_1279_);
return v___x_1282_;
}
}
else
{
lean_object* v___x_1283_; 
lean_inc(v_toPure_1272_);
lean_dec(v_toBind_1271_);
lean_dec(v_stop_1267_);
lean_dec_ref(v_as_1266_);
lean_dec(v_f_1265_);
lean_dec_ref(v_inst_1264_);
v___x_1283_ = lean_apply_2(v_toPure_1272_, lean_box(0), v_b_1269_);
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object* v_inst_1284_, lean_object* v_f_1285_, lean_object* v_as_1286_, lean_object* v_stop_1287_, lean_object* v_n_1288_, lean_object* v_____do__lift_1289_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Array_foldrM_fold___redArg(v_inst_1284_, v_f_1285_, v_as_1286_, v_stop_1287_, v_n_1288_, v_____do__lift_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object* v_inst_1291_, lean_object* v_f_1292_, lean_object* v_as_1293_, lean_object* v_stop_1294_, lean_object* v_i_1295_, lean_object* v_b_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Array_foldrM_fold___redArg(v_inst_1291_, v_f_1292_, v_as_1293_, v_stop_1294_, v_i_1295_, v_b_1296_);
lean_dec(v_i_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object* v_00_u03b1_1298_, lean_object* v_00_u03b2_1299_, lean_object* v_m_1300_, lean_object* v_inst_1301_, lean_object* v_f_1302_, lean_object* v_as_1303_, lean_object* v_stop_1304_, lean_object* v_i_1305_, lean_object* v_h_1306_, lean_object* v_b_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Array_foldrM_fold___redArg(v_inst_1301_, v_f_1302_, v_as_1303_, v_stop_1304_, v_i_1305_, v_b_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object* v_00_u03b1_1309_, lean_object* v_00_u03b2_1310_, lean_object* v_m_1311_, lean_object* v_inst_1312_, lean_object* v_f_1313_, lean_object* v_as_1314_, lean_object* v_stop_1315_, lean_object* v_i_1316_, lean_object* v_h_1317_, lean_object* v_b_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Array_foldrM_fold(v_00_u03b1_1309_, v_00_u03b2_1310_, v_m_1311_, v_inst_1312_, v_f_1313_, v_as_1314_, v_stop_1315_, v_i_1316_, v_h_1317_, v_b_1318_);
lean_dec(v_i_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1320_, lean_object* v_bs_x27_1321_, lean_object* v_inst_1322_, lean_object* v_f_1323_, lean_object* v_sz_1324_, lean_object* v_vNew_1325_){
_start:
{
size_t v_i_boxed_1326_; size_t v_sz_boxed_1327_; lean_object* v_res_1328_; 
v_i_boxed_1326_ = lean_unbox_usize(v_i_1320_);
lean_dec(v_i_1320_);
v_sz_boxed_1327_ = lean_unbox_usize(v_sz_1324_);
lean_dec(v_sz_1324_);
v_res_1328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(v_i_boxed_1326_, v_bs_x27_1321_, v_inst_1322_, v_f_1323_, v_sz_boxed_1327_, v_vNew_1325_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object* v_inst_1329_, lean_object* v_f_1330_, size_t v_sz_1331_, size_t v_i_1332_, lean_object* v_bs_1333_){
_start:
{
lean_object* v_toApplicative_1334_; lean_object* v_toBind_1335_; lean_object* v_toPure_1336_; uint8_t v___x_1337_; 
v_toApplicative_1334_ = lean_ctor_get(v_inst_1329_, 0);
v_toBind_1335_ = lean_ctor_get(v_inst_1329_, 1);
lean_inc(v_toBind_1335_);
v_toPure_1336_ = lean_ctor_get(v_toApplicative_1334_, 1);
v___x_1337_ = lean_usize_dec_lt(v_i_1332_, v_sz_1331_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; 
lean_inc(v_toPure_1336_);
lean_dec(v_toBind_1335_);
lean_dec(v_f_1330_);
lean_dec_ref(v_inst_1329_);
v___x_1338_ = lean_apply_2(v_toPure_1336_, lean_box(0), v_bs_1333_);
return v___x_1338_;
}
else
{
lean_object* v_v_1339_; lean_object* v___x_1340_; lean_object* v_bs_x27_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___f_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_v_1339_ = lean_array_uget(v_bs_1333_, v_i_1332_);
v___x_1340_ = lean_unsigned_to_nat(0u);
v_bs_x27_1341_ = lean_array_uset(v_bs_1333_, v_i_1332_, v___x_1340_);
v___x_1342_ = lean_box_usize(v_i_1332_);
v___x_1343_ = lean_box_usize(v_sz_1331_);
lean_inc(v_f_1330_);
v___f_1344_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1344_, 0, v___x_1342_);
lean_closure_set(v___f_1344_, 1, v_bs_x27_1341_);
lean_closure_set(v___f_1344_, 2, v_inst_1329_);
lean_closure_set(v___f_1344_, 3, v_f_1330_);
lean_closure_set(v___f_1344_, 4, v___x_1343_);
v___x_1345_ = lean_apply_1(v_f_1330_, v_v_1339_);
v___x_1346_ = lean_apply_4(v_toBind_1335_, lean_box(0), lean_box(0), v___x_1345_, v___f_1344_);
return v___x_1346_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t v_i_1347_, lean_object* v_bs_x27_1348_, lean_object* v_inst_1349_, lean_object* v_f_1350_, size_t v_sz_1351_, lean_object* v_vNew_1352_){
_start:
{
size_t v___x_1353_; size_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1353_ = ((size_t)1ULL);
v___x_1354_ = lean_usize_add(v_i_1347_, v___x_1353_);
v___x_1355_ = lean_array_uset(v_bs_x27_1348_, v_i_1347_, v_vNew_1352_);
v___x_1356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1349_, v_f_1350_, v_sz_1351_, v___x_1354_, v___x_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object* v_inst_1357_, lean_object* v_f_1358_, lean_object* v_sz_1359_, lean_object* v_i_1360_, lean_object* v_bs_1361_){
_start:
{
size_t v_sz_boxed_1362_; size_t v_i_boxed_1363_; lean_object* v_res_1364_; 
v_sz_boxed_1362_ = lean_unbox_usize(v_sz_1359_);
lean_dec(v_sz_1359_);
v_i_boxed_1363_ = lean_unbox_usize(v_i_1360_);
lean_dec(v_i_1360_);
v_res_1364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1357_, v_f_1358_, v_sz_boxed_1362_, v_i_boxed_1363_, v_bs_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object* v_00_u03b1_1365_, lean_object* v_00_u03b2_1366_, lean_object* v_m_1367_, lean_object* v_inst_1368_, lean_object* v_f_1369_, size_t v_sz_1370_, size_t v_i_1371_, lean_object* v_bs_1372_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1368_, v_f_1369_, v_sz_1370_, v_i_1371_, v_bs_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object* v_00_u03b1_1374_, lean_object* v_00_u03b2_1375_, lean_object* v_m_1376_, lean_object* v_inst_1377_, lean_object* v_f_1378_, lean_object* v_sz_1379_, lean_object* v_i_1380_, lean_object* v_bs_1381_){
_start:
{
size_t v_sz_boxed_1382_; size_t v_i_boxed_1383_; lean_object* v_res_1384_; 
v_sz_boxed_1382_ = lean_unbox_usize(v_sz_1379_);
lean_dec(v_sz_1379_);
v_i_boxed_1383_ = lean_unbox_usize(v_i_1380_);
lean_dec(v_i_1380_);
v_res_1384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(v_00_u03b1_1374_, v_00_u03b2_1375_, v_m_1376_, v_inst_1377_, v_f_1378_, v_sz_boxed_1382_, v_i_boxed_1383_, v_bs_1381_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object* v_inst_1385_, lean_object* v_f_1386_, lean_object* v_as_1387_){
_start:
{
size_t v_sz_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v_sz_1388_ = lean_array_size(v_as_1387_);
v___x_1389_ = ((size_t)0ULL);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1385_, v_f_1386_, v_sz_1388_, v___x_1389_, v_as_1387_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object* v_00_u03b1_1391_, lean_object* v_00_u03b2_1392_, lean_object* v_m_1393_, lean_object* v_inst_1394_, lean_object* v_f_1395_, lean_object* v_as_1396_){
_start:
{
size_t v_sz_1397_; size_t v___x_1398_; lean_object* v___x_1399_; 
v_sz_1397_ = lean_array_size(v_as_1396_);
v___x_1398_ = ((size_t)0ULL);
v___x_1399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1394_, v_f_1395_, v_sz_1397_, v___x_1398_, v_as_1396_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object* v_i_1400_, lean_object* v_bs_1401_, lean_object* v_inst_1402_, lean_object* v_f_1403_, lean_object* v_as_1404_, lean_object* v_____do__lift_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Array_mapM_map___redArg___lam__0(v_i_1400_, v_bs_1401_, v_inst_1402_, v_f_1403_, v_as_1404_, v_____do__lift_1405_);
lean_dec(v_i_1400_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object* v_inst_1407_, lean_object* v_f_1408_, lean_object* v_as_1409_, lean_object* v_i_1410_, lean_object* v_bs_1411_){
_start:
{
lean_object* v_toApplicative_1412_; lean_object* v_toBind_1413_; lean_object* v_toPure_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v_toApplicative_1412_ = lean_ctor_get(v_inst_1407_, 0);
v_toBind_1413_ = lean_ctor_get(v_inst_1407_, 1);
lean_inc(v_toBind_1413_);
v_toPure_1414_ = lean_ctor_get(v_toApplicative_1412_, 1);
v___x_1415_ = lean_array_get_size(v_as_1409_);
v___x_1416_ = lean_nat_dec_lt(v_i_1410_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; 
lean_inc(v_toPure_1414_);
lean_dec(v_toBind_1413_);
lean_dec(v_i_1410_);
lean_dec_ref(v_as_1409_);
lean_dec(v_f_1408_);
lean_dec_ref(v_inst_1407_);
v___x_1417_ = lean_apply_2(v_toPure_1414_, lean_box(0), v_bs_1411_);
return v___x_1417_;
}
else
{
lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_inc_ref(v_as_1409_);
lean_inc(v_f_1408_);
lean_inc(v_i_1410_);
v___f_1418_ = lean_alloc_closure((void*)(l_Array_mapM_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1418_, 0, v_i_1410_);
lean_closure_set(v___f_1418_, 1, v_bs_1411_);
lean_closure_set(v___f_1418_, 2, v_inst_1407_);
lean_closure_set(v___f_1418_, 3, v_f_1408_);
lean_closure_set(v___f_1418_, 4, v_as_1409_);
v___x_1419_ = lean_array_fget(v_as_1409_, v_i_1410_);
lean_dec(v_i_1410_);
lean_dec_ref(v_as_1409_);
v___x_1420_ = lean_apply_1(v_f_1408_, v___x_1419_);
v___x_1421_ = lean_apply_4(v_toBind_1413_, lean_box(0), lean_box(0), v___x_1420_, v___f_1418_);
return v___x_1421_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object* v_i_1422_, lean_object* v_bs_1423_, lean_object* v_inst_1424_, lean_object* v_f_1425_, lean_object* v_as_1426_, lean_object* v_____do__lift_1427_){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1428_ = lean_unsigned_to_nat(1u);
v___x_1429_ = lean_nat_add(v_i_1422_, v___x_1428_);
v___x_1430_ = lean_array_push(v_bs_1423_, v_____do__lift_1427_);
v___x_1431_ = l_Array_mapM_map___redArg(v_inst_1424_, v_f_1425_, v_as_1426_, v___x_1429_, v___x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object* v_00_u03b1_1432_, lean_object* v_00_u03b2_1433_, lean_object* v_m_1434_, lean_object* v_inst_1435_, lean_object* v_f_1436_, lean_object* v_as_1437_, lean_object* v_i_1438_, lean_object* v_bs_1439_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Array_mapM_map___redArg(v_inst_1435_, v_f_1436_, v_as_1437_, v_i_1438_, v_bs_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1441_, lean_object* v_bs_x27_1442_, lean_object* v_inst_1443_, lean_object* v_f_1444_, lean_object* v_sz_1445_, lean_object* v_vNew_1446_){
_start:
{
size_t v_i_boxed_1447_; size_t v_sz_boxed_1448_; lean_object* v_res_1449_; 
v_i_boxed_1447_ = lean_unbox_usize(v_i_1441_);
lean_dec(v_i_1441_);
v_sz_boxed_1448_ = lean_unbox_usize(v_sz_1445_);
lean_dec(v_sz_1445_);
v_res_1449_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(v_i_boxed_1447_, v_bs_x27_1442_, v_inst_1443_, v_f_1444_, v_sz_boxed_1448_, v_vNew_1446_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object* v_inst_1450_, lean_object* v_f_1451_, size_t v_sz_1452_, size_t v_i_1453_, lean_object* v_bs_1454_){
_start:
{
lean_object* v_toApplicative_1455_; lean_object* v_toBind_1456_; lean_object* v_toPure_1457_; uint8_t v___x_1458_; 
v_toApplicative_1455_ = lean_ctor_get(v_inst_1450_, 0);
v_toBind_1456_ = lean_ctor_get(v_inst_1450_, 1);
lean_inc(v_toBind_1456_);
v_toPure_1457_ = lean_ctor_get(v_toApplicative_1455_, 1);
v___x_1458_ = lean_usize_dec_lt(v_i_1453_, v_sz_1452_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; 
lean_inc(v_toPure_1457_);
lean_dec(v_toBind_1456_);
lean_dec(v_f_1451_);
lean_dec_ref(v_inst_1450_);
v___x_1459_ = lean_apply_2(v_toPure_1457_, lean_box(0), v_bs_1454_);
return v___x_1459_;
}
else
{
lean_object* v_v_1460_; lean_object* v___x_1461_; lean_object* v_bs_x27_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___f_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_v_1460_ = lean_array_uget(v_bs_1454_, v_i_1453_);
v___x_1461_ = lean_unsigned_to_nat(0u);
v_bs_x27_1462_ = lean_array_uset(v_bs_1454_, v_i_1453_, v___x_1461_);
v___x_1463_ = lean_box_usize(v_i_1453_);
v___x_1464_ = lean_box_usize(v_sz_1452_);
lean_inc(v_f_1451_);
v___f_1465_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1465_, 0, v___x_1463_);
lean_closure_set(v___f_1465_, 1, v_bs_x27_1462_);
lean_closure_set(v___f_1465_, 2, v_inst_1450_);
lean_closure_set(v___f_1465_, 3, v_f_1451_);
lean_closure_set(v___f_1465_, 4, v___x_1464_);
v___x_1466_ = lean_usize_to_nat(v_i_1453_);
v___x_1467_ = lean_apply_3(v_f_1451_, v___x_1466_, v_v_1460_, lean_box(0));
v___x_1468_ = lean_apply_4(v_toBind_1456_, lean_box(0), lean_box(0), v___x_1467_, v___f_1465_);
return v___x_1468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t v_i_1469_, lean_object* v_bs_x27_1470_, lean_object* v_inst_1471_, lean_object* v_f_1472_, size_t v_sz_1473_, lean_object* v_vNew_1474_){
_start:
{
size_t v___x_1475_; size_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1475_ = ((size_t)1ULL);
v___x_1476_ = lean_usize_add(v_i_1469_, v___x_1475_);
v___x_1477_ = lean_array_uset(v_bs_x27_1470_, v_i_1469_, v_vNew_1474_);
v___x_1478_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1471_, v_f_1472_, v_sz_1473_, v___x_1476_, v___x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object* v_inst_1479_, lean_object* v_f_1480_, lean_object* v_sz_1481_, lean_object* v_i_1482_, lean_object* v_bs_1483_){
_start:
{
size_t v_sz_boxed_1484_; size_t v_i_boxed_1485_; lean_object* v_res_1486_; 
v_sz_boxed_1484_ = lean_unbox_usize(v_sz_1481_);
lean_dec(v_sz_1481_);
v_i_boxed_1485_ = lean_unbox_usize(v_i_1482_);
lean_dec(v_i_1482_);
v_res_1486_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1479_, v_f_1480_, v_sz_boxed_1484_, v_i_boxed_1485_, v_bs_1483_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object* v_00_u03b1_1487_, lean_object* v_00_u03b2_1488_, lean_object* v_m_1489_, lean_object* v_inst_1490_, lean_object* v_as_1491_, lean_object* v_f_1492_, size_t v_sz_1493_, size_t v_i_1494_, lean_object* v_bs_1495_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1490_, v_f_1492_, v_sz_1493_, v_i_1494_, v_bs_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object* v_00_u03b1_1497_, lean_object* v_00_u03b2_1498_, lean_object* v_m_1499_, lean_object* v_inst_1500_, lean_object* v_as_1501_, lean_object* v_f_1502_, lean_object* v_sz_1503_, lean_object* v_i_1504_, lean_object* v_bs_1505_){
_start:
{
size_t v_sz_boxed_1506_; size_t v_i_boxed_1507_; lean_object* v_res_1508_; 
v_sz_boxed_1506_ = lean_unbox_usize(v_sz_1503_);
lean_dec(v_sz_1503_);
v_i_boxed_1507_ = lean_unbox_usize(v_i_1504_);
lean_dec(v_i_1504_);
v_res_1508_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(v_00_u03b1_1497_, v_00_u03b2_1498_, v_m_1499_, v_inst_1500_, v_as_1501_, v_f_1502_, v_sz_boxed_1506_, v_i_boxed_1507_, v_bs_1505_);
lean_dec_ref(v_as_1501_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object* v_inst_1509_, lean_object* v_as_1510_, lean_object* v_f_1511_){
_start:
{
size_t v_sz_1512_; size_t v___x_1513_; lean_object* v___x_1514_; 
v_sz_1512_ = lean_array_size(v_as_1510_);
v___x_1513_ = ((size_t)0ULL);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1509_, v_f_1511_, v_sz_1512_, v___x_1513_, v_as_1510_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object* v_00_u03b1_1515_, lean_object* v_00_u03b2_1516_, lean_object* v_m_1517_, lean_object* v_inst_1518_, lean_object* v_as_1519_, lean_object* v_f_1520_){
_start:
{
size_t v_sz_1521_; size_t v___x_1522_; lean_object* v___x_1523_; 
v_sz_1521_ = lean_array_size(v_as_1519_);
v___x_1522_ = ((size_t)0ULL);
v___x_1523_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1518_, v_f_1520_, v_sz_1521_, v___x_1522_, v_as_1519_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object* v_j_1524_, lean_object* v_bs_1525_, lean_object* v_inst_1526_, lean_object* v_as_1527_, lean_object* v_f_1528_, lean_object* v_n_1529_, lean_object* v_____do__lift_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Array_mapFinIdxM_map___redArg___lam__0(v_j_1524_, v_bs_1525_, v_inst_1526_, v_as_1527_, v_f_1528_, v_n_1529_, v_____do__lift_1530_);
lean_dec(v_n_1529_);
lean_dec(v_j_1524_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object* v_inst_1532_, lean_object* v_as_1533_, lean_object* v_f_1534_, lean_object* v_i_1535_, lean_object* v_j_1536_, lean_object* v_bs_1537_){
_start:
{
lean_object* v_toApplicative_1538_; lean_object* v_toBind_1539_; lean_object* v_toPure_1540_; lean_object* v_zero_1541_; uint8_t v_isZero_1542_; 
v_toApplicative_1538_ = lean_ctor_get(v_inst_1532_, 0);
v_toBind_1539_ = lean_ctor_get(v_inst_1532_, 1);
lean_inc(v_toBind_1539_);
v_toPure_1540_ = lean_ctor_get(v_toApplicative_1538_, 1);
v_zero_1541_ = lean_unsigned_to_nat(0u);
v_isZero_1542_ = lean_nat_dec_eq(v_i_1535_, v_zero_1541_);
if (v_isZero_1542_ == 1)
{
lean_object* v___x_1543_; 
lean_inc(v_toPure_1540_);
lean_dec(v_toBind_1539_);
lean_dec(v_j_1536_);
lean_dec(v_f_1534_);
lean_dec_ref(v_as_1533_);
lean_dec_ref(v_inst_1532_);
v___x_1543_ = lean_apply_2(v_toPure_1540_, lean_box(0), v_bs_1537_);
return v___x_1543_;
}
else
{
lean_object* v_one_1544_; lean_object* v_n_1545_; lean_object* v___f_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v_one_1544_ = lean_unsigned_to_nat(1u);
v_n_1545_ = lean_nat_sub(v_i_1535_, v_one_1544_);
lean_inc(v_f_1534_);
lean_inc_ref(v_as_1533_);
lean_inc(v_j_1536_);
v___f_1546_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1546_, 0, v_j_1536_);
lean_closure_set(v___f_1546_, 1, v_bs_1537_);
lean_closure_set(v___f_1546_, 2, v_inst_1532_);
lean_closure_set(v___f_1546_, 3, v_as_1533_);
lean_closure_set(v___f_1546_, 4, v_f_1534_);
lean_closure_set(v___f_1546_, 5, v_n_1545_);
v___x_1547_ = lean_array_fget(v_as_1533_, v_j_1536_);
lean_dec_ref(v_as_1533_);
v___x_1548_ = lean_apply_3(v_f_1534_, v_j_1536_, v___x_1547_, lean_box(0));
v___x_1549_ = lean_apply_4(v_toBind_1539_, lean_box(0), lean_box(0), v___x_1548_, v___f_1546_);
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object* v_j_1550_, lean_object* v_bs_1551_, lean_object* v_inst_1552_, lean_object* v_as_1553_, lean_object* v_f_1554_, lean_object* v_n_1555_, lean_object* v_____do__lift_1556_){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1557_ = lean_unsigned_to_nat(1u);
v___x_1558_ = lean_nat_add(v_j_1550_, v___x_1557_);
v___x_1559_ = lean_array_push(v_bs_1551_, v_____do__lift_1556_);
v___x_1560_ = l_Array_mapFinIdxM_map___redArg(v_inst_1552_, v_as_1553_, v_f_1554_, v_n_1555_, v___x_1558_, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object* v_inst_1561_, lean_object* v_as_1562_, lean_object* v_f_1563_, lean_object* v_i_1564_, lean_object* v_j_1565_, lean_object* v_bs_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Array_mapFinIdxM_map___redArg(v_inst_1561_, v_as_1562_, v_f_1563_, v_i_1564_, v_j_1565_, v_bs_1566_);
lean_dec(v_i_1564_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object* v_00_u03b1_1568_, lean_object* v_00_u03b2_1569_, lean_object* v_m_1570_, lean_object* v_inst_1571_, lean_object* v_as_1572_, lean_object* v_f_1573_, lean_object* v_i_1574_, lean_object* v_j_1575_, lean_object* v_inv_1576_, lean_object* v_bs_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Array_mapFinIdxM_map___redArg(v_inst_1571_, v_as_1572_, v_f_1573_, v_i_1574_, v_j_1575_, v_bs_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object* v_00_u03b1_1579_, lean_object* v_00_u03b2_1580_, lean_object* v_m_1581_, lean_object* v_inst_1582_, lean_object* v_as_1583_, lean_object* v_f_1584_, lean_object* v_i_1585_, lean_object* v_j_1586_, lean_object* v_inv_1587_, lean_object* v_bs_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Array_mapFinIdxM_map(v_00_u03b1_1579_, v_00_u03b2_1580_, v_m_1581_, v_inst_1582_, v_as_1583_, v_f_1584_, v_i_1585_, v_j_1586_, v_inv_1587_, v_bs_1588_);
lean_dec(v_i_1585_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object* v_f_1590_, lean_object* v_i_1591_, lean_object* v_a_1592_, lean_object* v_x_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_apply_2(v_f_1590_, v_i_1591_, v_a_1592_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object* v_inst_1595_, lean_object* v_f_1596_, lean_object* v_as_1597_){
_start:
{
lean_object* v___f_1598_; size_t v_sz_1599_; size_t v___x_1600_; lean_object* v___x_1601_; 
v___f_1598_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1598_, 0, v_f_1596_);
v_sz_1599_ = lean_array_size(v_as_1597_);
v___x_1600_ = ((size_t)0ULL);
v___x_1601_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1595_, v___f_1598_, v_sz_1599_, v___x_1600_, v_as_1597_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object* v_00_u03b1_1602_, lean_object* v_00_u03b2_1603_, lean_object* v_m_1604_, lean_object* v_inst_1605_, lean_object* v_f_1606_, lean_object* v_as_1607_){
_start:
{
lean_object* v___f_1608_; size_t v_sz_1609_; size_t v___x_1610_; lean_object* v___x_1611_; 
v___f_1608_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1608_, 0, v_f_1606_);
v_sz_1609_ = lean_array_size(v_as_1607_);
v___x_1610_ = ((size_t)0ULL);
v___x_1611_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1605_, v___f_1608_, v_sz_1609_, v___x_1610_, v_as_1607_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object* v_i_1612_, lean_object* v_inst_1613_, lean_object* v_f_1614_, lean_object* v_as_1615_, lean_object* v_x_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(v_i_1612_, v_inst_1613_, v_f_1614_, v_as_1615_, v_x_1616_);
lean_dec(v_i_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object* v_inst_1618_, lean_object* v_f_1619_, lean_object* v_as_1620_, lean_object* v_i_1621_){
_start:
{
lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1622_ = lean_array_get_size(v_as_1620_);
v___x_1623_ = lean_nat_dec_lt(v_i_1621_, v___x_1622_);
if (v___x_1623_ == 0)
{
lean_object* v_failure_1624_; lean_object* v___x_1625_; 
lean_dec(v_i_1621_);
lean_dec_ref(v_as_1620_);
lean_dec(v_f_1619_);
v_failure_1624_ = lean_ctor_get(v_inst_1618_, 1);
lean_inc(v_failure_1624_);
lean_dec_ref(v_inst_1618_);
v___x_1625_ = lean_apply_1(v_failure_1624_, lean_box(0));
return v___x_1625_;
}
else
{
lean_object* v_orElse_1626_; lean_object* v___f_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_orElse_1626_ = lean_ctor_get(v_inst_1618_, 2);
lean_inc(v_orElse_1626_);
lean_inc_ref(v_as_1620_);
lean_inc(v_f_1619_);
lean_inc(v_i_1621_);
v___f_1627_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1627_, 0, v_i_1621_);
lean_closure_set(v___f_1627_, 1, v_inst_1618_);
lean_closure_set(v___f_1627_, 2, v_f_1619_);
lean_closure_set(v___f_1627_, 3, v_as_1620_);
v___x_1628_ = lean_array_fget(v_as_1620_, v_i_1621_);
lean_dec(v_i_1621_);
lean_dec_ref(v_as_1620_);
v___x_1629_ = lean_apply_1(v_f_1619_, v___x_1628_);
v___x_1630_ = lean_apply_3(v_orElse_1626_, lean_box(0), v___x_1629_, v___f_1627_);
return v___x_1630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object* v_i_1631_, lean_object* v_inst_1632_, lean_object* v_f_1633_, lean_object* v_as_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = lean_unsigned_to_nat(1u);
v___x_1637_ = lean_nat_add(v_i_1631_, v___x_1636_);
v___x_1638_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1632_, v_f_1633_, v_as_1634_, v___x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object* v_00_u03b2_1639_, lean_object* v_00_u03b1_1640_, lean_object* v_m_1641_, lean_object* v_inst_1642_, lean_object* v_f_1643_, lean_object* v_as_1644_, lean_object* v_i_1645_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1642_, v_f_1643_, v_as_1644_, v_i_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object* v_inst_1647_, lean_object* v_f_1648_, lean_object* v_as_1649_){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_unsigned_to_nat(0u);
v___x_1651_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1647_, v_f_1648_, v_as_1649_, v___x_1650_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM(lean_object* v_00_u03b2_1652_, lean_object* v_00_u03b1_1653_, lean_object* v_m_1654_, lean_object* v_inst_1655_, lean_object* v_f_1656_, lean_object* v_as_1657_){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = lean_unsigned_to_nat(0u);
v___x_1659_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1655_, v_f_1656_, v_as_1657_, v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object* v___x_1660_, lean_object* v_toPure_1661_, lean_object* v___x_1662_, lean_object* v_____do__lift_1663_){
_start:
{
if (lean_obj_tag(v_____do__lift_1663_) == 1)
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
lean_dec_ref(v___x_1662_);
v___x_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1664_, 0, v_____do__lift_1663_);
v___x_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
lean_ctor_set(v___x_1665_, 1, v___x_1660_);
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
v___x_1667_ = lean_apply_2(v_toPure_1661_, lean_box(0), v___x_1666_);
return v___x_1667_;
}
else
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v_____do__lift_1663_);
v___x_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1662_);
v___x_1669_ = lean_apply_2(v_toPure_1661_, lean_box(0), v___x_1668_);
return v___x_1669_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object* v_f_1670_, lean_object* v_toBind_1671_, lean_object* v___f_1672_, lean_object* v_a_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lean_apply_1(v_f_1670_, v_a_1673_);
v___x_1677_ = lean_apply_4(v_toBind_1671_, lean_box(0), lean_box(0), v___x_1676_, v___f_1672_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object* v_f_1678_, lean_object* v_toBind_1679_, lean_object* v___f_1680_, lean_object* v_a_1681_, lean_object* v_x_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Array_findSomeM_x3f___redArg___lam__1(v_f_1678_, v_toBind_1679_, v___f_1680_, v_a_1681_, v_x_1682_, v___y_1683_);
lean_dec_ref(v___y_1683_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object* v_toPure_1685_, lean_object* v_____s_1686_){
_start:
{
lean_object* v_fst_1687_; 
v_fst_1687_ = lean_ctor_get(v_____s_1686_, 0);
lean_inc(v_fst_1687_);
lean_dec_ref(v_____s_1686_);
if (lean_obj_tag(v_fst_1687_) == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = lean_box(0);
v___x_1689_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1688_);
return v___x_1689_;
}
else
{
lean_object* v_val_1690_; lean_object* v___x_1691_; 
v_val_1690_ = lean_ctor_get(v_fst_1687_, 0);
lean_inc(v_val_1690_);
lean_dec_ref_known(v_fst_1687_, 1);
v___x_1691_ = lean_apply_2(v_toPure_1685_, lean_box(0), v_val_1690_);
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object* v_inst_1695_, lean_object* v_f_1696_, lean_object* v_as_1697_){
_start:
{
lean_object* v_toApplicative_1698_; lean_object* v_toBind_1699_; lean_object* v_toPure_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___f_1703_; lean_object* v___f_1704_; lean_object* v___f_1705_; size_t v_sz_1706_; size_t v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_toApplicative_1698_ = lean_ctor_get(v_inst_1695_, 0);
v_toBind_1699_ = lean_ctor_get(v_inst_1695_, 1);
lean_inc_n(v_toBind_1699_, 2);
v_toPure_1700_ = lean_ctor_get(v_toApplicative_1698_, 1);
v___x_1701_ = lean_box(0);
v___x_1702_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1700_, 2);
v___f_1703_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1703_, 0, v___x_1701_);
lean_closure_set(v___f_1703_, 1, v_toPure_1700_);
lean_closure_set(v___f_1703_, 2, v___x_1702_);
v___f_1704_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1704_, 0, v_f_1696_);
lean_closure_set(v___f_1704_, 1, v_toBind_1699_);
lean_closure_set(v___f_1704_, 2, v___f_1703_);
v___f_1705_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1705_, 0, v_toPure_1700_);
v_sz_1706_ = lean_array_size(v_as_1697_);
v___x_1707_ = ((size_t)0ULL);
v___x_1708_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1695_, v_as_1697_, v___f_1704_, v_sz_1706_, v___x_1707_, v___x_1702_);
v___x_1709_ = lean_apply_4(v_toBind_1699_, lean_box(0), lean_box(0), v___x_1708_, v___f_1705_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object* v_00_u03b1_1710_, lean_object* v_00_u03b2_1711_, lean_object* v_m_1712_, lean_object* v_inst_1713_, lean_object* v_f_1714_, lean_object* v_as_1715_){
_start:
{
lean_object* v_toApplicative_1716_; lean_object* v_toBind_1717_; lean_object* v_toPure_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___f_1721_; lean_object* v___f_1722_; lean_object* v___f_1723_; size_t v_sz_1724_; size_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_toApplicative_1716_ = lean_ctor_get(v_inst_1713_, 0);
v_toBind_1717_ = lean_ctor_get(v_inst_1713_, 1);
lean_inc_n(v_toBind_1717_, 2);
v_toPure_1718_ = lean_ctor_get(v_toApplicative_1716_, 1);
v___x_1719_ = lean_box(0);
v___x_1720_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1718_, 2);
v___f_1721_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1721_, 0, v___x_1719_);
lean_closure_set(v___f_1721_, 1, v_toPure_1718_);
lean_closure_set(v___f_1721_, 2, v___x_1720_);
v___f_1722_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1722_, 0, v_f_1714_);
lean_closure_set(v___f_1722_, 1, v_toBind_1717_);
lean_closure_set(v___f_1722_, 2, v___f_1721_);
v___f_1723_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1723_, 0, v_toPure_1718_);
v_sz_1724_ = lean_array_size(v_as_1715_);
v___x_1725_ = ((size_t)0ULL);
v___x_1726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1713_, v_as_1715_, v___f_1722_, v_sz_1724_, v___x_1725_, v___x_1720_);
v___x_1727_ = lean_apply_4(v_toBind_1717_, lean_box(0), lean_box(0), v___x_1726_, v___f_1723_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object* v___x_1728_, lean_object* v_toPure_1729_, lean_object* v_a_1730_, lean_object* v___x_1731_, uint8_t v_____do__lift_1732_){
_start:
{
if (v_____do__lift_1732_ == 0)
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v_a_1730_);
v___x_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1728_);
v___x_1734_ = lean_apply_2(v_toPure_1729_, lean_box(0), v___x_1733_);
return v___x_1734_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
lean_dec_ref(v___x_1728_);
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_a_1730_);
v___x_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
lean_ctor_set(v___x_1737_, 1, v___x_1731_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
v___x_1739_ = lean_apply_2(v_toPure_1729_, lean_box(0), v___x_1738_);
return v___x_1739_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object* v___x_1740_, lean_object* v_toPure_1741_, lean_object* v_a_1742_, lean_object* v___x_1743_, lean_object* v_____do__lift_1744_){
_start:
{
uint8_t v_____do__lift_196__boxed_1745_; lean_object* v_res_1746_; 
v_____do__lift_196__boxed_1745_ = lean_unbox(v_____do__lift_1744_);
v_res_1746_ = l_Array_findM_x3f___redArg___lam__0(v___x_1740_, v_toPure_1741_, v_a_1742_, v___x_1743_, v_____do__lift_196__boxed_1745_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object* v___x_1747_, lean_object* v_toPure_1748_, lean_object* v___x_1749_, lean_object* v_p_1750_, lean_object* v_toBind_1751_, lean_object* v_a_1752_, lean_object* v_x_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___f_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_inc(v_a_1752_);
v___f_1755_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1755_, 0, v___x_1747_);
lean_closure_set(v___f_1755_, 1, v_toPure_1748_);
lean_closure_set(v___f_1755_, 2, v_a_1752_);
lean_closure_set(v___f_1755_, 3, v___x_1749_);
v___x_1756_ = lean_apply_1(v_p_1750_, v_a_1752_);
v___x_1757_ = lean_apply_4(v_toBind_1751_, lean_box(0), lean_box(0), v___x_1756_, v___f_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object* v___x_1758_, lean_object* v_toPure_1759_, lean_object* v___x_1760_, lean_object* v_p_1761_, lean_object* v_toBind_1762_, lean_object* v_a_1763_, lean_object* v_x_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Array_findM_x3f___redArg___lam__1(v___x_1758_, v_toPure_1759_, v___x_1760_, v_p_1761_, v_toBind_1762_, v_a_1763_, v_x_1764_, v___y_1765_);
lean_dec_ref(v___y_1765_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object* v_inst_1767_, lean_object* v_p_1768_, lean_object* v_as_1769_){
_start:
{
lean_object* v_toApplicative_1770_; lean_object* v_toBind_1771_; lean_object* v_toPure_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___f_1775_; lean_object* v___f_1776_; size_t v_sz_1777_; size_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_toApplicative_1770_ = lean_ctor_get(v_inst_1767_, 0);
v_toBind_1771_ = lean_ctor_get(v_inst_1767_, 1);
lean_inc_n(v_toBind_1771_, 2);
v_toPure_1772_ = lean_ctor_get(v_toApplicative_1770_, 1);
v___x_1773_ = lean_box(0);
v___x_1774_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1772_, 2);
v___f_1775_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1775_, 0, v___x_1774_);
lean_closure_set(v___f_1775_, 1, v_toPure_1772_);
lean_closure_set(v___f_1775_, 2, v___x_1773_);
lean_closure_set(v___f_1775_, 3, v_p_1768_);
lean_closure_set(v___f_1775_, 4, v_toBind_1771_);
v___f_1776_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1776_, 0, v_toPure_1772_);
v_sz_1777_ = lean_array_size(v_as_1769_);
v___x_1778_ = ((size_t)0ULL);
v___x_1779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1767_, v_as_1769_, v___f_1775_, v_sz_1777_, v___x_1778_, v___x_1774_);
v___x_1780_ = lean_apply_4(v_toBind_1771_, lean_box(0), lean_box(0), v___x_1779_, v___f_1776_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object* v_m_1781_, lean_object* v_00_u03b1_1782_, lean_object* v_inst_1783_, lean_object* v_p_1784_, lean_object* v_as_1785_){
_start:
{
lean_object* v_toApplicative_1786_; lean_object* v_toBind_1787_; lean_object* v_toPure_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___f_1791_; lean_object* v___f_1792_; size_t v_sz_1793_; size_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_toApplicative_1786_ = lean_ctor_get(v_inst_1783_, 0);
v_toBind_1787_ = lean_ctor_get(v_inst_1783_, 1);
lean_inc_n(v_toBind_1787_, 2);
v_toPure_1788_ = lean_ctor_get(v_toApplicative_1786_, 1);
v___x_1789_ = lean_box(0);
v___x_1790_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1788_, 2);
v___f_1791_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1791_, 0, v___x_1790_);
lean_closure_set(v___f_1791_, 1, v_toPure_1788_);
lean_closure_set(v___f_1791_, 2, v___x_1789_);
lean_closure_set(v___f_1791_, 3, v_p_1784_);
lean_closure_set(v___f_1791_, 4, v_toBind_1787_);
v___f_1792_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1792_, 0, v_toPure_1788_);
v_sz_1793_ = lean_array_size(v_as_1785_);
v___x_1794_ = ((size_t)0ULL);
v___x_1795_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1783_, v_as_1785_, v___f_1791_, v_sz_1793_, v___x_1794_, v___x_1790_);
v___x_1796_ = lean_apply_4(v_toBind_1787_, lean_box(0), lean_box(0), v___x_1795_, v___f_1792_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object* v_snd_1797_, lean_object* v___x_1798_, lean_object* v_toPure_1799_, uint8_t v_____do__lift_1800_){
_start:
{
if (v_____do__lift_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1801_ = lean_unsigned_to_nat(1u);
v___x_1802_ = lean_nat_add(v_snd_1797_, v___x_1801_);
lean_dec(v_snd_1797_);
v___x_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1798_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
v___x_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
v___x_1805_ = lean_apply_2(v_toPure_1799_, lean_box(0), v___x_1804_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
lean_dec(v___x_1798_);
lean_inc(v_snd_1797_);
v___x_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_snd_1797_);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v_snd_1797_);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
v___x_1810_ = lean_apply_2(v_toPure_1799_, lean_box(0), v___x_1809_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object* v_snd_1811_, lean_object* v___x_1812_, lean_object* v_toPure_1813_, lean_object* v_____do__lift_1814_){
_start:
{
uint8_t v_____do__lift_234__boxed_1815_; lean_object* v_res_1816_; 
v_____do__lift_234__boxed_1815_ = lean_unbox(v_____do__lift_1814_);
v_res_1816_ = l_Array_findIdxM_x3f___redArg___lam__0(v_snd_1811_, v___x_1812_, v_toPure_1813_, v_____do__lift_234__boxed_1815_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object* v___x_1817_, lean_object* v_toPure_1818_, lean_object* v_p_1819_, lean_object* v_toBind_1820_, lean_object* v_a_1821_, lean_object* v_x_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_snd_1824_; lean_object* v___f_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v_snd_1824_ = lean_ctor_get(v___y_1823_, 1);
lean_inc(v_snd_1824_);
lean_dec_ref(v___y_1823_);
v___f_1825_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1825_, 0, v_snd_1824_);
lean_closure_set(v___f_1825_, 1, v___x_1817_);
lean_closure_set(v___f_1825_, 2, v_toPure_1818_);
v___x_1826_ = lean_apply_1(v_p_1819_, v_a_1821_);
v___x_1827_ = lean_apply_4(v_toBind_1820_, lean_box(0), lean_box(0), v___x_1826_, v___f_1825_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object* v_toPure_1828_, lean_object* v_____s_1829_){
_start:
{
lean_object* v_fst_1830_; 
v_fst_1830_ = lean_ctor_get(v_____s_1829_, 0);
lean_inc(v_fst_1830_);
lean_dec_ref(v_____s_1829_);
if (lean_obj_tag(v_fst_1830_) == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_box(0);
v___x_1832_ = lean_apply_2(v_toPure_1828_, lean_box(0), v___x_1831_);
return v___x_1832_;
}
else
{
lean_object* v_val_1833_; lean_object* v___x_1834_; 
v_val_1833_ = lean_ctor_get(v_fst_1830_, 0);
lean_inc(v_val_1833_);
lean_dec_ref_known(v_fst_1830_, 1);
v___x_1834_ = lean_apply_2(v_toPure_1828_, lean_box(0), v_val_1833_);
return v___x_1834_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object* v_inst_1838_, lean_object* v_p_1839_, lean_object* v_as_1840_){
_start:
{
lean_object* v_toApplicative_1841_; lean_object* v_toBind_1842_; lean_object* v_toPure_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___f_1846_; lean_object* v___f_1847_; size_t v_sz_1848_; size_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v_toApplicative_1841_ = lean_ctor_get(v_inst_1838_, 0);
v_toBind_1842_ = lean_ctor_get(v_inst_1838_, 1);
lean_inc_n(v_toBind_1842_, 2);
v_toPure_1843_ = lean_ctor_get(v_toApplicative_1841_, 1);
v___x_1844_ = lean_box(0);
v___x_1845_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1843_, 2);
v___f_1846_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1846_, 0, v___x_1844_);
lean_closure_set(v___f_1846_, 1, v_toPure_1843_);
lean_closure_set(v___f_1846_, 2, v_p_1839_);
lean_closure_set(v___f_1846_, 3, v_toBind_1842_);
v___f_1847_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1847_, 0, v_toPure_1843_);
v_sz_1848_ = lean_array_size(v_as_1840_);
v___x_1849_ = ((size_t)0ULL);
v___x_1850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1838_, v_as_1840_, v___f_1846_, v_sz_1848_, v___x_1849_, v___x_1845_);
v___x_1851_ = lean_apply_4(v_toBind_1842_, lean_box(0), lean_box(0), v___x_1850_, v___f_1847_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object* v_00_u03b1_1852_, lean_object* v_m_1853_, lean_object* v_inst_1854_, lean_object* v_p_1855_, lean_object* v_as_1856_){
_start:
{
lean_object* v_toApplicative_1857_; lean_object* v_toBind_1858_; lean_object* v_toPure_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___f_1862_; lean_object* v___f_1863_; size_t v_sz_1864_; size_t v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_toApplicative_1857_ = lean_ctor_get(v_inst_1854_, 0);
v_toBind_1858_ = lean_ctor_get(v_inst_1854_, 1);
lean_inc_n(v_toBind_1858_, 2);
v_toPure_1859_ = lean_ctor_get(v_toApplicative_1857_, 1);
v___x_1860_ = lean_box(0);
v___x_1861_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1859_, 2);
v___f_1862_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1862_, 0, v___x_1860_);
lean_closure_set(v___f_1862_, 1, v_toPure_1859_);
lean_closure_set(v___f_1862_, 2, v_p_1855_);
lean_closure_set(v___f_1862_, 3, v_toBind_1858_);
v___f_1863_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1863_, 0, v_toPure_1859_);
v_sz_1864_ = lean_array_size(v_as_1856_);
v___x_1865_ = ((size_t)0ULL);
v___x_1866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1854_, v_as_1856_, v___f_1862_, v_sz_1864_, v___x_1865_, v___x_1861_);
v___x_1867_ = lean_apply_4(v_toBind_1858_, lean_box(0), lean_box(0), v___x_1866_, v___f_1863_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object* v_i_1868_, lean_object* v_inst_1869_, lean_object* v_p_1870_, lean_object* v_as_1871_, lean_object* v_stop_1872_, lean_object* v_toPure_1873_, lean_object* v___x_1874_, lean_object* v_____do__lift_1875_){
_start:
{
size_t v_i_boxed_1876_; size_t v_stop_boxed_1877_; uint8_t v___x_67__boxed_1878_; uint8_t v_____do__lift_68__boxed_1879_; lean_object* v_res_1880_; 
v_i_boxed_1876_ = lean_unbox_usize(v_i_1868_);
lean_dec(v_i_1868_);
v_stop_boxed_1877_ = lean_unbox_usize(v_stop_1872_);
lean_dec(v_stop_1872_);
v___x_67__boxed_1878_ = lean_unbox(v___x_1874_);
v_____do__lift_68__boxed_1879_ = lean_unbox(v_____do__lift_1875_);
v_res_1880_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(v_i_boxed_1876_, v_inst_1869_, v_p_1870_, v_as_1871_, v_stop_boxed_1877_, v_toPure_1873_, v___x_67__boxed_1878_, v_____do__lift_68__boxed_1879_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object* v_inst_1881_, lean_object* v_p_1882_, lean_object* v_as_1883_, size_t v_i_1884_, size_t v_stop_1885_){
_start:
{
lean_object* v_toApplicative_1886_; lean_object* v_toBind_1887_; lean_object* v_toPure_1888_; uint8_t v___x_1889_; 
v_toApplicative_1886_ = lean_ctor_get(v_inst_1881_, 0);
v_toBind_1887_ = lean_ctor_get(v_inst_1881_, 1);
lean_inc(v_toBind_1887_);
v_toPure_1888_ = lean_ctor_get(v_toApplicative_1886_, 1);
lean_inc(v_toPure_1888_);
v___x_1889_ = lean_usize_dec_eq(v_i_1884_, v_stop_1885_);
if (v___x_1889_ == 0)
{
uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___f_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1890_ = 1;
v___x_1891_ = lean_box_usize(v_i_1884_);
v___x_1892_ = lean_box_usize(v_stop_1885_);
v___x_1893_ = lean_box(v___x_1890_);
lean_inc_ref(v_as_1883_);
lean_inc(v_p_1882_);
v___f_1894_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1894_, 0, v___x_1891_);
lean_closure_set(v___f_1894_, 1, v_inst_1881_);
lean_closure_set(v___f_1894_, 2, v_p_1882_);
lean_closure_set(v___f_1894_, 3, v_as_1883_);
lean_closure_set(v___f_1894_, 4, v___x_1892_);
lean_closure_set(v___f_1894_, 5, v_toPure_1888_);
lean_closure_set(v___f_1894_, 6, v___x_1893_);
v___x_1895_ = lean_array_uget(v_as_1883_, v_i_1884_);
lean_dec_ref(v_as_1883_);
v___x_1896_ = lean_apply_1(v_p_1882_, v___x_1895_);
v___x_1897_ = lean_apply_4(v_toBind_1887_, lean_box(0), lean_box(0), v___x_1896_, v___f_1894_);
return v___x_1897_;
}
else
{
uint8_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
lean_dec(v_toBind_1887_);
lean_dec_ref(v_as_1883_);
lean_dec(v_p_1882_);
lean_dec_ref(v_inst_1881_);
v___x_1898_ = 0;
v___x_1899_ = lean_box(v___x_1898_);
v___x_1900_ = lean_apply_2(v_toPure_1888_, lean_box(0), v___x_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t v_i_1901_, lean_object* v_inst_1902_, lean_object* v_p_1903_, lean_object* v_as_1904_, size_t v_stop_1905_, lean_object* v_toPure_1906_, uint8_t v___x_1907_, uint8_t v_____do__lift_1908_){
_start:
{
if (v_____do__lift_1908_ == 0)
{
size_t v___x_1909_; size_t v___x_1910_; lean_object* v___x_1911_; 
lean_dec(v_toPure_1906_);
v___x_1909_ = ((size_t)1ULL);
v___x_1910_ = lean_usize_add(v_i_1901_, v___x_1909_);
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1902_, v_p_1903_, v_as_1904_, v___x_1910_, v_stop_1905_);
return v___x_1911_;
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_dec_ref(v_as_1904_);
lean_dec(v_p_1903_);
lean_dec_ref(v_inst_1902_);
v___x_1912_ = lean_box(v___x_1907_);
v___x_1913_ = lean_apply_2(v_toPure_1906_, lean_box(0), v___x_1912_);
return v___x_1913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object* v_inst_1914_, lean_object* v_p_1915_, lean_object* v_as_1916_, lean_object* v_i_1917_, lean_object* v_stop_1918_){
_start:
{
size_t v_i_boxed_1919_; size_t v_stop_boxed_1920_; lean_object* v_res_1921_; 
v_i_boxed_1919_ = lean_unbox_usize(v_i_1917_);
lean_dec(v_i_1917_);
v_stop_boxed_1920_ = lean_unbox_usize(v_stop_1918_);
lean_dec(v_stop_1918_);
v_res_1921_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1914_, v_p_1915_, v_as_1916_, v_i_boxed_1919_, v_stop_boxed_1920_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object* v_00_u03b1_1922_, lean_object* v_m_1923_, lean_object* v_inst_1924_, lean_object* v_p_1925_, lean_object* v_as_1926_, size_t v_i_1927_, size_t v_stop_1928_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1924_, v_p_1925_, v_as_1926_, v_i_1927_, v_stop_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object* v_00_u03b1_1930_, lean_object* v_m_1931_, lean_object* v_inst_1932_, lean_object* v_p_1933_, lean_object* v_as_1934_, lean_object* v_i_1935_, lean_object* v_stop_1936_){
_start:
{
size_t v_i_boxed_1937_; size_t v_stop_boxed_1938_; lean_object* v_res_1939_; 
v_i_boxed_1937_ = lean_unbox_usize(v_i_1935_);
lean_dec(v_i_1935_);
v_stop_boxed_1938_ = lean_unbox_usize(v_stop_1936_);
lean_dec(v_stop_1936_);
v_res_1939_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(v_00_u03b1_1930_, v_m_1931_, v_inst_1932_, v_p_1933_, v_as_1934_, v_i_boxed_1937_, v_stop_boxed_1938_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object* v_inst_1940_, lean_object* v_p_1941_, lean_object* v_as_1942_, lean_object* v_start_1943_, lean_object* v_stop_1944_){
_start:
{
lean_object* v_toApplicative_1945_; lean_object* v_toPure_1946_; lean_object* v___y_1948_; uint8_t v___x_1955_; 
v_toApplicative_1945_ = lean_ctor_get(v_inst_1940_, 0);
v_toPure_1946_ = lean_ctor_get(v_toApplicative_1945_, 1);
v___x_1955_ = lean_nat_dec_lt(v_start_1943_, v_stop_1944_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_inc(v_toPure_1946_);
lean_dec(v_stop_1944_);
lean_dec_ref(v_as_1942_);
lean_dec(v_p_1941_);
lean_dec_ref(v_inst_1940_);
v___x_1956_ = lean_box(v___x_1955_);
v___x_1957_ = lean_apply_2(v_toPure_1946_, lean_box(0), v___x_1956_);
return v___x_1957_;
}
else
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_array_get_size(v_as_1942_);
v___x_1959_ = lean_nat_dec_le(v_stop_1944_, v___x_1958_);
if (v___x_1959_ == 0)
{
lean_dec(v_stop_1944_);
v___y_1948_ = v___x_1958_;
goto v___jp_1947_;
}
else
{
v___y_1948_ = v_stop_1944_;
goto v___jp_1947_;
}
}
v___jp_1947_:
{
uint8_t v___x_1949_; 
v___x_1949_ = lean_nat_dec_lt(v_start_1943_, v___y_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_inc(v_toPure_1946_);
lean_dec(v___y_1948_);
lean_dec_ref(v_as_1942_);
lean_dec(v_p_1941_);
lean_dec_ref(v_inst_1940_);
v___x_1950_ = lean_box(v___x_1949_);
v___x_1951_ = lean_apply_2(v_toPure_1946_, lean_box(0), v___x_1950_);
return v___x_1951_;
}
else
{
size_t v___x_1952_; size_t v___x_1953_; lean_object* v___x_1954_; 
v___x_1952_ = lean_usize_of_nat(v_start_1943_);
v___x_1953_ = lean_usize_of_nat(v___y_1948_);
lean_dec(v___y_1948_);
v___x_1954_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1940_, v_p_1941_, v_as_1942_, v___x_1952_, v___x_1953_);
return v___x_1954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object* v_inst_1960_, lean_object* v_p_1961_, lean_object* v_as_1962_, lean_object* v_start_1963_, lean_object* v_stop_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Array_anyMUnsafe___redArg(v_inst_1960_, v_p_1961_, v_as_1962_, v_start_1963_, v_stop_1964_);
lean_dec(v_start_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object* v_00_u03b1_1966_, lean_object* v_m_1967_, lean_object* v_inst_1968_, lean_object* v_p_1969_, lean_object* v_as_1970_, lean_object* v_start_1971_, lean_object* v_stop_1972_){
_start:
{
lean_object* v_toApplicative_1973_; lean_object* v_toPure_1974_; lean_object* v___y_1976_; uint8_t v___x_1983_; 
v_toApplicative_1973_ = lean_ctor_get(v_inst_1968_, 0);
v_toPure_1974_ = lean_ctor_get(v_toApplicative_1973_, 1);
v___x_1983_ = lean_nat_dec_lt(v_start_1971_, v_stop_1972_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
lean_inc(v_toPure_1974_);
lean_dec(v_stop_1972_);
lean_dec_ref(v_as_1970_);
lean_dec(v_p_1969_);
lean_dec_ref(v_inst_1968_);
v___x_1984_ = lean_box(v___x_1983_);
v___x_1985_ = lean_apply_2(v_toPure_1974_, lean_box(0), v___x_1984_);
return v___x_1985_;
}
else
{
lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1986_ = lean_array_get_size(v_as_1970_);
v___x_1987_ = lean_nat_dec_le(v_stop_1972_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_dec(v_stop_1972_);
v___y_1976_ = v___x_1986_;
goto v___jp_1975_;
}
else
{
v___y_1976_ = v_stop_1972_;
goto v___jp_1975_;
}
}
v___jp_1975_:
{
uint8_t v___x_1977_; 
v___x_1977_ = lean_nat_dec_lt(v_start_1971_, v___y_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_inc(v_toPure_1974_);
lean_dec(v___y_1976_);
lean_dec_ref(v_as_1970_);
lean_dec(v_p_1969_);
lean_dec_ref(v_inst_1968_);
v___x_1978_ = lean_box(v___x_1977_);
v___x_1979_ = lean_apply_2(v_toPure_1974_, lean_box(0), v___x_1978_);
return v___x_1979_;
}
else
{
size_t v___x_1980_; size_t v___x_1981_; lean_object* v___x_1982_; 
v___x_1980_ = lean_usize_of_nat(v_start_1971_);
v___x_1981_ = lean_usize_of_nat(v___y_1976_);
lean_dec(v___y_1976_);
v___x_1982_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1968_, v_p_1969_, v_as_1970_, v___x_1980_, v___x_1981_);
return v___x_1982_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object* v_00_u03b1_1988_, lean_object* v_m_1989_, lean_object* v_inst_1990_, lean_object* v_p_1991_, lean_object* v_as_1992_, lean_object* v_start_1993_, lean_object* v_stop_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Array_anyMUnsafe(v_00_u03b1_1988_, v_m_1989_, v_inst_1990_, v_p_1991_, v_as_1992_, v_start_1993_, v_stop_1994_);
lean_dec(v_start_1993_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object* v_j_1996_, lean_object* v_inst_1997_, lean_object* v_p_1998_, lean_object* v_as_1999_, lean_object* v_stop_2000_, lean_object* v_toPure_2001_, lean_object* v_____do__lift_2002_){
_start:
{
uint8_t v_____do__lift_123__boxed_2003_; lean_object* v_res_2004_; 
v_____do__lift_123__boxed_2003_ = lean_unbox(v_____do__lift_2002_);
v_res_2004_ = l_Array_anyM_loop___redArg___lam__0(v_j_1996_, v_inst_1997_, v_p_1998_, v_as_1999_, v_stop_2000_, v_toPure_2001_, v_____do__lift_123__boxed_2003_);
lean_dec(v_j_1996_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object* v_inst_2005_, lean_object* v_p_2006_, lean_object* v_as_2007_, lean_object* v_stop_2008_, lean_object* v_j_2009_){
_start:
{
lean_object* v_toApplicative_2010_; lean_object* v_toBind_2011_; lean_object* v_toPure_2012_; uint8_t v___x_2013_; 
v_toApplicative_2010_ = lean_ctor_get(v_inst_2005_, 0);
v_toBind_2011_ = lean_ctor_get(v_inst_2005_, 1);
lean_inc(v_toBind_2011_);
v_toPure_2012_ = lean_ctor_get(v_toApplicative_2010_, 1);
lean_inc(v_toPure_2012_);
v___x_2013_ = lean_nat_dec_lt(v_j_2009_, v_stop_2008_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
lean_dec(v_toBind_2011_);
lean_dec(v_j_2009_);
lean_dec(v_stop_2008_);
lean_dec_ref(v_as_2007_);
lean_dec(v_p_2006_);
lean_dec_ref(v_inst_2005_);
v___x_2014_ = lean_box(v___x_2013_);
v___x_2015_ = lean_apply_2(v_toPure_2012_, lean_box(0), v___x_2014_);
return v___x_2015_;
}
else
{
lean_object* v___f_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
lean_inc_ref(v_as_2007_);
lean_inc(v_p_2006_);
lean_inc(v_j_2009_);
v___f_2016_ = lean_alloc_closure((void*)(l_Array_anyM_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_2016_, 0, v_j_2009_);
lean_closure_set(v___f_2016_, 1, v_inst_2005_);
lean_closure_set(v___f_2016_, 2, v_p_2006_);
lean_closure_set(v___f_2016_, 3, v_as_2007_);
lean_closure_set(v___f_2016_, 4, v_stop_2008_);
lean_closure_set(v___f_2016_, 5, v_toPure_2012_);
v___x_2017_ = lean_array_fget(v_as_2007_, v_j_2009_);
lean_dec(v_j_2009_);
lean_dec_ref(v_as_2007_);
v___x_2018_ = lean_apply_1(v_p_2006_, v___x_2017_);
v___x_2019_ = lean_apply_4(v_toBind_2011_, lean_box(0), lean_box(0), v___x_2018_, v___f_2016_);
return v___x_2019_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object* v_j_2020_, lean_object* v_inst_2021_, lean_object* v_p_2022_, lean_object* v_as_2023_, lean_object* v_stop_2024_, lean_object* v_toPure_2025_, uint8_t v_____do__lift_2026_){
_start:
{
if (v_____do__lift_2026_ == 0)
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
lean_dec(v_toPure_2025_);
v___x_2027_ = lean_unsigned_to_nat(1u);
v___x_2028_ = lean_nat_add(v_j_2020_, v___x_2027_);
v___x_2029_ = l_Array_anyM_loop___redArg(v_inst_2021_, v_p_2022_, v_as_2023_, v_stop_2024_, v___x_2028_);
return v___x_2029_;
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
lean_dec(v_stop_2024_);
lean_dec_ref(v_as_2023_);
lean_dec(v_p_2022_);
lean_dec_ref(v_inst_2021_);
v___x_2030_ = lean_box(v_____do__lift_2026_);
v___x_2031_ = lean_apply_2(v_toPure_2025_, lean_box(0), v___x_2030_);
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object* v_00_u03b1_2032_, lean_object* v_m_2033_, lean_object* v_inst_2034_, lean_object* v_p_2035_, lean_object* v_as_2036_, lean_object* v_stop_2037_, lean_object* v_h_2038_, lean_object* v_j_2039_){
_start:
{
lean_object* v___x_2040_; 
v___x_2040_ = l_Array_anyM_loop___redArg(v_inst_2034_, v_p_2035_, v_as_2036_, v_stop_2037_, v_j_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object* v_toPure_2041_, uint8_t v_____do__lift_2042_){
_start:
{
if (v_____do__lift_2042_ == 0)
{
uint8_t v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = 1;
v___x_2044_ = lean_box(v___x_2043_);
v___x_2045_ = lean_apply_2(v_toPure_2041_, lean_box(0), v___x_2044_);
return v___x_2045_;
}
else
{
uint8_t v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2046_ = 0;
v___x_2047_ = lean_box(v___x_2046_);
v___x_2048_ = lean_apply_2(v_toPure_2041_, lean_box(0), v___x_2047_);
return v___x_2048_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object* v_toPure_2049_, lean_object* v_____do__lift_2050_){
_start:
{
uint8_t v_____do__lift_117__boxed_2051_; lean_object* v_res_2052_; 
v_____do__lift_117__boxed_2051_ = lean_unbox(v_____do__lift_2050_);
v_res_2052_ = l_Array_allM___redArg___lam__0(v_toPure_2049_, v_____do__lift_117__boxed_2051_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object* v_toPure_2053_, uint8_t v___x_2054_, uint8_t v_____do__lift_2055_){
_start:
{
if (v_____do__lift_2055_ == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_box(v___x_2054_);
v___x_2057_ = lean_apply_2(v_toPure_2053_, lean_box(0), v___x_2056_);
return v___x_2057_;
}
else
{
uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2058_ = 0;
v___x_2059_ = lean_box(v___x_2058_);
v___x_2060_ = lean_apply_2(v_toPure_2053_, lean_box(0), v___x_2059_);
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object* v_toPure_2061_, lean_object* v___x_2062_, lean_object* v_____do__lift_2063_){
_start:
{
uint8_t v___x_132__boxed_2064_; uint8_t v_____do__lift_133__boxed_2065_; lean_object* v_res_2066_; 
v___x_132__boxed_2064_ = lean_unbox(v___x_2062_);
v_____do__lift_133__boxed_2065_ = lean_unbox(v_____do__lift_2063_);
v_res_2066_ = l_Array_allM___redArg___lam__1(v_toPure_2061_, v___x_132__boxed_2064_, v_____do__lift_133__boxed_2065_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object* v_p_2067_, lean_object* v_toBind_2068_, lean_object* v___f_2069_, lean_object* v_v_2070_){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_apply_1(v_p_2067_, v_v_2070_);
v___x_2072_ = lean_apply_4(v_toBind_2068_, lean_box(0), lean_box(0), v___x_2071_, v___f_2069_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object* v_inst_2073_, lean_object* v_p_2074_, lean_object* v_as_2075_, lean_object* v_start_2076_, lean_object* v_stop_2077_){
_start:
{
lean_object* v_toApplicative_2078_; lean_object* v_toBind_2079_; lean_object* v_toPure_2080_; lean_object* v___f_2081_; uint8_t v___x_2082_; 
v_toApplicative_2078_ = lean_ctor_get(v_inst_2073_, 0);
v_toBind_2079_ = lean_ctor_get(v_inst_2073_, 1);
lean_inc(v_toBind_2079_);
v_toPure_2080_ = lean_ctor_get(v_toApplicative_2078_, 1);
lean_inc(v_toPure_2080_);
v___f_2081_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2081_, 0, v_toPure_2080_);
v___x_2082_ = lean_nat_dec_lt(v_start_2076_, v_stop_2077_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
lean_inc(v_toPure_2080_);
lean_dec(v_stop_2077_);
lean_dec_ref(v_as_2075_);
lean_dec(v_p_2074_);
lean_dec_ref(v_inst_2073_);
v___x_2083_ = lean_box(v___x_2082_);
v___x_2084_ = lean_apply_2(v_toPure_2080_, lean_box(0), v___x_2083_);
v___x_2085_ = lean_apply_4(v_toBind_2079_, lean_box(0), lean_box(0), v___x_2084_, v___f_2081_);
return v___x_2085_;
}
else
{
lean_object* v___x_2086_; lean_object* v___f_2087_; lean_object* v___f_2088_; lean_object* v___y_2090_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2086_ = lean_box(v___x_2082_);
lean_inc(v_toPure_2080_);
v___f_2087_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2087_, 0, v_toPure_2080_);
lean_closure_set(v___f_2087_, 1, v___x_2086_);
lean_inc(v_toBind_2079_);
v___f_2088_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2088_, 0, v_p_2074_);
lean_closure_set(v___f_2088_, 1, v_toBind_2079_);
lean_closure_set(v___f_2088_, 2, v___f_2087_);
v___x_2099_ = lean_array_get_size(v_as_2075_);
v___x_2100_ = lean_nat_dec_le(v_stop_2077_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_dec(v_stop_2077_);
v___y_2090_ = v___x_2099_;
goto v___jp_2089_;
}
else
{
v___y_2090_ = v_stop_2077_;
goto v___jp_2089_;
}
v___jp_2089_:
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_nat_dec_lt(v_start_2076_, v___y_2090_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_inc(v_toPure_2080_);
lean_dec(v___y_2090_);
lean_dec_ref(v___f_2088_);
lean_dec_ref(v_as_2075_);
lean_dec_ref(v_inst_2073_);
v___x_2092_ = lean_box(v___x_2091_);
v___x_2093_ = lean_apply_2(v_toPure_2080_, lean_box(0), v___x_2092_);
v___x_2094_ = lean_apply_4(v_toBind_2079_, lean_box(0), lean_box(0), v___x_2093_, v___f_2081_);
return v___x_2094_;
}
else
{
size_t v___x_2095_; size_t v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2095_ = lean_usize_of_nat(v_start_2076_);
v___x_2096_ = lean_usize_of_nat(v___y_2090_);
lean_dec(v___y_2090_);
v___x_2097_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2073_, v___f_2088_, v_as_2075_, v___x_2095_, v___x_2096_);
v___x_2098_ = lean_apply_4(v_toBind_2079_, lean_box(0), lean_box(0), v___x_2097_, v___f_2081_);
return v___x_2098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object* v_inst_2101_, lean_object* v_p_2102_, lean_object* v_as_2103_, lean_object* v_start_2104_, lean_object* v_stop_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Array_allM___redArg(v_inst_2101_, v_p_2102_, v_as_2103_, v_start_2104_, v_stop_2105_);
lean_dec(v_start_2104_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Array_allM(lean_object* v_00_u03b1_2107_, lean_object* v_m_2108_, lean_object* v_inst_2109_, lean_object* v_p_2110_, lean_object* v_as_2111_, lean_object* v_start_2112_, lean_object* v_stop_2113_){
_start:
{
lean_object* v_toApplicative_2114_; lean_object* v_toBind_2115_; lean_object* v_toPure_2116_; lean_object* v___f_2117_; uint8_t v___x_2118_; 
v_toApplicative_2114_ = lean_ctor_get(v_inst_2109_, 0);
v_toBind_2115_ = lean_ctor_get(v_inst_2109_, 1);
lean_inc(v_toBind_2115_);
v_toPure_2116_ = lean_ctor_get(v_toApplicative_2114_, 1);
lean_inc(v_toPure_2116_);
v___f_2117_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2117_, 0, v_toPure_2116_);
v___x_2118_ = lean_nat_dec_lt(v_start_2112_, v_stop_2113_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_inc(v_toPure_2116_);
lean_dec(v_stop_2113_);
lean_dec_ref(v_as_2111_);
lean_dec(v_p_2110_);
lean_dec_ref(v_inst_2109_);
v___x_2119_ = lean_box(v___x_2118_);
v___x_2120_ = lean_apply_2(v_toPure_2116_, lean_box(0), v___x_2119_);
v___x_2121_ = lean_apply_4(v_toBind_2115_, lean_box(0), lean_box(0), v___x_2120_, v___f_2117_);
return v___x_2121_;
}
else
{
lean_object* v___x_2122_; lean_object* v___f_2123_; lean_object* v___f_2124_; lean_object* v___y_2126_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v___x_2122_ = lean_box(v___x_2118_);
lean_inc(v_toPure_2116_);
v___f_2123_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2123_, 0, v_toPure_2116_);
lean_closure_set(v___f_2123_, 1, v___x_2122_);
lean_inc(v_toBind_2115_);
v___f_2124_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2124_, 0, v_p_2110_);
lean_closure_set(v___f_2124_, 1, v_toBind_2115_);
lean_closure_set(v___f_2124_, 2, v___f_2123_);
v___x_2135_ = lean_array_get_size(v_as_2111_);
v___x_2136_ = lean_nat_dec_le(v_stop_2113_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_dec(v_stop_2113_);
v___y_2126_ = v___x_2135_;
goto v___jp_2125_;
}
else
{
v___y_2126_ = v_stop_2113_;
goto v___jp_2125_;
}
v___jp_2125_:
{
uint8_t v___x_2127_; 
v___x_2127_ = lean_nat_dec_lt(v_start_2112_, v___y_2126_);
if (v___x_2127_ == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
lean_inc(v_toPure_2116_);
lean_dec(v___y_2126_);
lean_dec_ref(v___f_2124_);
lean_dec_ref(v_as_2111_);
lean_dec_ref(v_inst_2109_);
v___x_2128_ = lean_box(v___x_2127_);
v___x_2129_ = lean_apply_2(v_toPure_2116_, lean_box(0), v___x_2128_);
v___x_2130_ = lean_apply_4(v_toBind_2115_, lean_box(0), lean_box(0), v___x_2129_, v___f_2117_);
return v___x_2130_;
}
else
{
size_t v___x_2131_; size_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2131_ = lean_usize_of_nat(v_start_2112_);
v___x_2132_ = lean_usize_of_nat(v___y_2126_);
lean_dec(v___y_2126_);
v___x_2133_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2109_, v___f_2124_, v_as_2111_, v___x_2131_, v___x_2132_);
v___x_2134_ = lean_apply_4(v_toBind_2115_, lean_box(0), lean_box(0), v___x_2133_, v___f_2117_);
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object* v_00_u03b1_2137_, lean_object* v_m_2138_, lean_object* v_inst_2139_, lean_object* v_p_2140_, lean_object* v_as_2141_, lean_object* v_start_2142_, lean_object* v_stop_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Array_allM(v_00_u03b1_2137_, v_m_2138_, v_inst_2139_, v_p_2140_, v_as_2141_, v_start_2142_, v_stop_2143_);
lean_dec(v_start_2142_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object* v_inst_2145_, lean_object* v_f_2146_, lean_object* v_as_2147_, lean_object* v_n_2148_, lean_object* v_toPure_2149_, lean_object* v_r_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(v_inst_2145_, v_f_2146_, v_as_2147_, v_n_2148_, v_toPure_2149_, v_r_2150_);
lean_dec(v_n_2148_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object* v_inst_2152_, lean_object* v_f_2153_, lean_object* v_as_2154_, lean_object* v_i_2155_){
_start:
{
lean_object* v_toApplicative_2156_; lean_object* v_toBind_2157_; lean_object* v_toPure_2158_; lean_object* v_zero_2159_; uint8_t v_isZero_2160_; 
v_toApplicative_2156_ = lean_ctor_get(v_inst_2152_, 0);
v_toBind_2157_ = lean_ctor_get(v_inst_2152_, 1);
lean_inc(v_toBind_2157_);
v_toPure_2158_ = lean_ctor_get(v_toApplicative_2156_, 1);
lean_inc(v_toPure_2158_);
v_zero_2159_ = lean_unsigned_to_nat(0u);
v_isZero_2160_ = lean_nat_dec_eq(v_i_2155_, v_zero_2159_);
if (v_isZero_2160_ == 1)
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
lean_dec(v_toBind_2157_);
lean_dec_ref(v_as_2154_);
lean_dec(v_f_2153_);
lean_dec_ref(v_inst_2152_);
v___x_2161_ = lean_box(0);
v___x_2162_ = lean_apply_2(v_toPure_2158_, lean_box(0), v___x_2161_);
return v___x_2162_;
}
else
{
lean_object* v_one_2163_; lean_object* v_n_2164_; lean_object* v___f_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v_one_2163_ = lean_unsigned_to_nat(1u);
v_n_2164_ = lean_nat_sub(v_i_2155_, v_one_2163_);
lean_inc(v_n_2164_);
lean_inc_ref(v_as_2154_);
lean_inc(v_f_2153_);
v___f_2165_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2165_, 0, v_inst_2152_);
lean_closure_set(v___f_2165_, 1, v_f_2153_);
lean_closure_set(v___f_2165_, 2, v_as_2154_);
lean_closure_set(v___f_2165_, 3, v_n_2164_);
lean_closure_set(v___f_2165_, 4, v_toPure_2158_);
v___x_2166_ = lean_array_fget(v_as_2154_, v_n_2164_);
lean_dec(v_n_2164_);
lean_dec_ref(v_as_2154_);
v___x_2167_ = lean_apply_1(v_f_2153_, v___x_2166_);
v___x_2168_ = lean_apply_4(v_toBind_2157_, lean_box(0), lean_box(0), v___x_2167_, v___f_2165_);
return v___x_2168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object* v_inst_2169_, lean_object* v_f_2170_, lean_object* v_as_2171_, lean_object* v_n_2172_, lean_object* v_toPure_2173_, lean_object* v_r_2174_){
_start:
{
if (lean_obj_tag(v_r_2174_) == 0)
{
lean_object* v___x_2175_; 
lean_dec(v_toPure_2173_);
v___x_2175_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2169_, v_f_2170_, v_as_2171_, v_n_2172_);
return v___x_2175_;
}
else
{
lean_object* v___x_2176_; 
lean_dec_ref(v_as_2171_);
lean_dec(v_f_2170_);
lean_dec_ref(v_inst_2169_);
v___x_2176_ = lean_apply_2(v_toPure_2173_, lean_box(0), v_r_2174_);
return v___x_2176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object* v_inst_2177_, lean_object* v_f_2178_, lean_object* v_as_2179_, lean_object* v_i_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2177_, v_f_2178_, v_as_2179_, v_i_2180_);
lean_dec(v_i_2180_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object* v_00_u03b1_2182_, lean_object* v_00_u03b2_2183_, lean_object* v_m_2184_, lean_object* v_inst_2185_, lean_object* v_f_2186_, lean_object* v_as_2187_, lean_object* v_i_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2185_, v_f_2186_, v_as_2187_, v_i_2188_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object* v_00_u03b1_2191_, lean_object* v_00_u03b2_2192_, lean_object* v_m_2193_, lean_object* v_inst_2194_, lean_object* v_f_2195_, lean_object* v_as_2196_, lean_object* v_i_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(v_00_u03b1_2191_, v_00_u03b2_2192_, v_m_2193_, v_inst_2194_, v_f_2195_, v_as_2196_, v_i_2197_, v_a_2198_);
lean_dec(v_i_2197_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object* v_inst_2200_, lean_object* v_f_2201_, lean_object* v_as_2202_){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = lean_array_get_size(v_as_2202_);
v___x_2204_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2200_, v_f_2201_, v_as_2202_, v___x_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object* v_00_u03b1_2205_, lean_object* v_00_u03b2_2206_, lean_object* v_m_2207_, lean_object* v_inst_2208_, lean_object* v_f_2209_, lean_object* v_as_2210_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2211_ = lean_array_get_size(v_as_2210_);
v___x_2212_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2208_, v_f_2209_, v_as_2210_, v___x_2211_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object* v_toPure_2213_, lean_object* v_a_2214_, uint8_t v_____do__lift_2215_){
_start:
{
if (v_____do__lift_2215_ == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_dec(v_a_2214_);
v___x_2216_ = lean_box(0);
v___x_2217_ = lean_apply_2(v_toPure_2213_, lean_box(0), v___x_2216_);
return v___x_2217_;
}
else
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_a_2214_);
v___x_2219_ = lean_apply_2(v_toPure_2213_, lean_box(0), v___x_2218_);
return v___x_2219_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object* v_toPure_2220_, lean_object* v_a_2221_, lean_object* v_____do__lift_2222_){
_start:
{
uint8_t v_____do__lift_73__boxed_2223_; lean_object* v_res_2224_; 
v_____do__lift_73__boxed_2223_ = lean_unbox(v_____do__lift_2222_);
v_res_2224_ = l_Array_findRevM_x3f___redArg___lam__0(v_toPure_2220_, v_a_2221_, v_____do__lift_73__boxed_2223_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object* v_toPure_2225_, lean_object* v_p_2226_, lean_object* v_toBind_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v___f_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_inc(v_a_2228_);
v___f_2229_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2229_, 0, v_toPure_2225_);
lean_closure_set(v___f_2229_, 1, v_a_2228_);
v___x_2230_ = lean_apply_1(v_p_2226_, v_a_2228_);
v___x_2231_ = lean_apply_4(v_toBind_2227_, lean_box(0), lean_box(0), v___x_2230_, v___f_2229_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object* v_inst_2232_, lean_object* v_p_2233_, lean_object* v_as_2234_){
_start:
{
lean_object* v_toApplicative_2235_; lean_object* v_toBind_2236_; lean_object* v_toPure_2237_; lean_object* v___f_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v_toApplicative_2235_ = lean_ctor_get(v_inst_2232_, 0);
v_toBind_2236_ = lean_ctor_get(v_inst_2232_, 1);
v_toPure_2237_ = lean_ctor_get(v_toApplicative_2235_, 1);
lean_inc(v_toBind_2236_);
lean_inc(v_toPure_2237_);
v___f_2238_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2238_, 0, v_toPure_2237_);
lean_closure_set(v___f_2238_, 1, v_p_2233_);
lean_closure_set(v___f_2238_, 2, v_toBind_2236_);
v___x_2239_ = lean_array_get_size(v_as_2234_);
v___x_2240_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2232_, v___f_2238_, v_as_2234_, v___x_2239_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object* v_00_u03b1_2241_, lean_object* v_m_2242_, lean_object* v_inst_2243_, lean_object* v_p_2244_, lean_object* v_as_2245_){
_start:
{
lean_object* v_toApplicative_2246_; lean_object* v_toBind_2247_; lean_object* v_toPure_2248_; lean_object* v___f_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v_toApplicative_2246_ = lean_ctor_get(v_inst_2243_, 0);
v_toBind_2247_ = lean_ctor_get(v_inst_2243_, 1);
v_toPure_2248_ = lean_ctor_get(v_toApplicative_2246_, 1);
lean_inc(v_toBind_2247_);
lean_inc(v_toPure_2248_);
v___f_2249_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2249_, 0, v_toPure_2248_);
lean_closure_set(v___f_2249_, 1, v_p_2244_);
lean_closure_set(v___f_2249_, 2, v_toBind_2247_);
v___x_2250_ = lean_array_get_size(v_as_2245_);
v___x_2251_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2243_, v___f_2249_, v_as_2245_, v___x_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object* v_f_2252_, lean_object* v_x_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = lean_apply_1(v_f_2252_, v___y_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object* v_inst_2256_, lean_object* v_f_2257_, lean_object* v_as_2258_, lean_object* v_start_2259_, lean_object* v_stop_2260_){
_start:
{
lean_object* v_toApplicative_2261_; lean_object* v_toPure_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; 
v_toApplicative_2261_ = lean_ctor_get(v_inst_2256_, 0);
v_toPure_2262_ = lean_ctor_get(v_toApplicative_2261_, 1);
v___x_2263_ = lean_box(0);
v___x_2264_ = lean_nat_dec_lt(v_start_2259_, v_stop_2260_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; 
lean_inc(v_toPure_2262_);
lean_dec_ref(v_as_2258_);
lean_dec(v_f_2257_);
lean_dec_ref(v_inst_2256_);
v___x_2265_ = lean_apply_2(v_toPure_2262_, lean_box(0), v___x_2263_);
return v___x_2265_;
}
else
{
lean_object* v___f_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___f_2266_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2266_, 0, v_f_2257_);
v___x_2267_ = lean_array_get_size(v_as_2258_);
v___x_2268_ = lean_nat_dec_le(v_stop_2260_, v___x_2267_);
if (v___x_2268_ == 0)
{
uint8_t v___x_2269_; 
v___x_2269_ = lean_nat_dec_lt(v_start_2259_, v___x_2267_);
if (v___x_2269_ == 0)
{
lean_object* v___x_2270_; 
lean_inc(v_toPure_2262_);
lean_dec_ref(v___f_2266_);
lean_dec_ref(v_as_2258_);
lean_dec_ref(v_inst_2256_);
v___x_2270_ = lean_apply_2(v_toPure_2262_, lean_box(0), v___x_2263_);
return v___x_2270_;
}
else
{
size_t v___x_2271_; size_t v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_usize_of_nat(v_start_2259_);
v___x_2272_ = lean_usize_of_nat(v___x_2267_);
v___x_2273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2256_, v___f_2266_, v_as_2258_, v___x_2271_, v___x_2272_, v___x_2263_);
return v___x_2273_;
}
}
else
{
size_t v___x_2274_; size_t v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = lean_usize_of_nat(v_start_2259_);
v___x_2275_ = lean_usize_of_nat(v_stop_2260_);
v___x_2276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2256_, v___f_2266_, v_as_2258_, v___x_2274_, v___x_2275_, v___x_2263_);
return v___x_2276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object* v_inst_2277_, lean_object* v_f_2278_, lean_object* v_as_2279_, lean_object* v_start_2280_, lean_object* v_stop_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Array_forM___redArg(v_inst_2277_, v_f_2278_, v_as_2279_, v_start_2280_, v_stop_2281_);
lean_dec(v_stop_2281_);
lean_dec(v_start_2280_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Array_forM(lean_object* v_00_u03b1_2283_, lean_object* v_m_2284_, lean_object* v_inst_2285_, lean_object* v_f_2286_, lean_object* v_as_2287_, lean_object* v_start_2288_, lean_object* v_stop_2289_){
_start:
{
lean_object* v_toApplicative_2290_; lean_object* v_toPure_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
v_toApplicative_2290_ = lean_ctor_get(v_inst_2285_, 0);
v_toPure_2291_ = lean_ctor_get(v_toApplicative_2290_, 1);
v___x_2292_ = lean_box(0);
v___x_2293_ = lean_nat_dec_lt(v_start_2288_, v_stop_2289_);
if (v___x_2293_ == 0)
{
lean_object* v___x_2294_; 
lean_inc(v_toPure_2291_);
lean_dec_ref(v_as_2287_);
lean_dec(v_f_2286_);
lean_dec_ref(v_inst_2285_);
v___x_2294_ = lean_apply_2(v_toPure_2291_, lean_box(0), v___x_2292_);
return v___x_2294_;
}
else
{
lean_object* v___f_2295_; lean_object* v___x_2296_; uint8_t v___x_2297_; 
v___f_2295_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2295_, 0, v_f_2286_);
v___x_2296_ = lean_array_get_size(v_as_2287_);
v___x_2297_ = lean_nat_dec_le(v_stop_2289_, v___x_2296_);
if (v___x_2297_ == 0)
{
uint8_t v___x_2298_; 
v___x_2298_ = lean_nat_dec_lt(v_start_2288_, v___x_2296_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; 
lean_inc(v_toPure_2291_);
lean_dec_ref(v___f_2295_);
lean_dec_ref(v_as_2287_);
lean_dec_ref(v_inst_2285_);
v___x_2299_ = lean_apply_2(v_toPure_2291_, lean_box(0), v___x_2292_);
return v___x_2299_;
}
else
{
size_t v___x_2300_; size_t v___x_2301_; lean_object* v___x_2302_; 
v___x_2300_ = lean_usize_of_nat(v_start_2288_);
v___x_2301_ = lean_usize_of_nat(v___x_2296_);
v___x_2302_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2285_, v___f_2295_, v_as_2287_, v___x_2300_, v___x_2301_, v___x_2292_);
return v___x_2302_;
}
}
else
{
size_t v___x_2303_; size_t v___x_2304_; lean_object* v___x_2305_; 
v___x_2303_ = lean_usize_of_nat(v_start_2288_);
v___x_2304_ = lean_usize_of_nat(v_stop_2289_);
v___x_2305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2285_, v___f_2295_, v_as_2287_, v___x_2303_, v___x_2304_, v___x_2292_);
return v___x_2305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object* v_00_u03b1_2306_, lean_object* v_m_2307_, lean_object* v_inst_2308_, lean_object* v_f_2309_, lean_object* v_as_2310_, lean_object* v_start_2311_, lean_object* v_stop_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Array_forM(v_00_u03b1_2306_, v_m_2307_, v_inst_2308_, v_f_2309_, v_as_2310_, v_start_2311_, v_stop_2312_);
lean_dec(v_stop_2312_);
lean_dec(v_start_2311_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object* v_inst_2314_, lean_object* v_xs_2315_, lean_object* v_f_2316_){
_start:
{
lean_object* v_toApplicative_2317_; lean_object* v_toPure_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v_toApplicative_2317_ = lean_ctor_get(v_inst_2314_, 0);
v_toPure_2318_ = lean_ctor_get(v_toApplicative_2317_, 1);
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = lean_array_get_size(v_xs_2315_);
v___x_2321_ = lean_box(0);
v___x_2322_ = lean_nat_dec_lt(v___x_2319_, v___x_2320_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; 
lean_inc(v_toPure_2318_);
lean_dec(v_f_2316_);
lean_dec_ref(v_xs_2315_);
lean_dec_ref(v_inst_2314_);
v___x_2323_ = lean_apply_2(v_toPure_2318_, lean_box(0), v___x_2321_);
return v___x_2323_;
}
else
{
lean_object* v___f_2324_; size_t v___x_2325_; size_t v___x_2326_; lean_object* v___x_2327_; 
v___f_2324_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2324_, 0, v_f_2316_);
v___x_2325_ = ((size_t)0ULL);
v___x_2326_ = lean_usize_of_nat(v___x_2320_);
v___x_2327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2314_, v___f_2324_, v_xs_2315_, v___x_2325_, v___x_2326_, v___x_2321_);
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object* v_inst_2328_){
_start:
{
lean_object* v___f_2329_; 
v___f_2329_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2329_, 0, v_inst_2328_);
return v___f_2329_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object* v_00_u03b1_2330_, lean_object* v_m_2331_, lean_object* v_inst_2332_){
_start:
{
lean_object* v___f_2333_; 
v___f_2333_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2333_, 0, v_inst_2332_);
return v___f_2333_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object* v_f_2334_, lean_object* v_a_2335_, lean_object* v_x_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_apply_1(v_f_2334_, v_a_2335_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object* v_inst_2338_, lean_object* v_f_2339_, lean_object* v_as_2340_, lean_object* v_start_2341_, lean_object* v_stop_2342_){
_start:
{
lean_object* v_toApplicative_2343_; lean_object* v_toPure_2344_; lean_object* v___f_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; 
v_toApplicative_2343_ = lean_ctor_get(v_inst_2338_, 0);
v_toPure_2344_ = lean_ctor_get(v_toApplicative_2343_, 1);
v___f_2345_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2345_, 0, v_f_2339_);
v___x_2346_ = lean_box(0);
v___x_2347_ = lean_array_get_size(v_as_2340_);
v___x_2348_ = lean_nat_dec_le(v_start_2341_, v___x_2347_);
if (v___x_2348_ == 0)
{
uint8_t v___x_2349_; 
v___x_2349_ = lean_nat_dec_lt(v_stop_2342_, v___x_2347_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; 
lean_inc(v_toPure_2344_);
lean_dec_ref(v___f_2345_);
lean_dec_ref(v_as_2340_);
lean_dec_ref(v_inst_2338_);
v___x_2350_ = lean_apply_2(v_toPure_2344_, lean_box(0), v___x_2346_);
return v___x_2350_;
}
else
{
size_t v___x_2351_; size_t v___x_2352_; lean_object* v___x_2353_; 
v___x_2351_ = lean_usize_of_nat(v___x_2347_);
v___x_2352_ = lean_usize_of_nat(v_stop_2342_);
v___x_2353_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2338_, v___f_2345_, v_as_2340_, v___x_2351_, v___x_2352_, v___x_2346_);
return v___x_2353_;
}
}
else
{
uint8_t v___x_2354_; 
v___x_2354_ = lean_nat_dec_lt(v_stop_2342_, v_start_2341_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; 
lean_inc(v_toPure_2344_);
lean_dec_ref(v___f_2345_);
lean_dec_ref(v_as_2340_);
lean_dec_ref(v_inst_2338_);
v___x_2355_ = lean_apply_2(v_toPure_2344_, lean_box(0), v___x_2346_);
return v___x_2355_;
}
else
{
size_t v___x_2356_; size_t v___x_2357_; lean_object* v___x_2358_; 
v___x_2356_ = lean_usize_of_nat(v_start_2341_);
v___x_2357_ = lean_usize_of_nat(v_stop_2342_);
v___x_2358_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2338_, v___f_2345_, v_as_2340_, v___x_2356_, v___x_2357_, v___x_2346_);
return v___x_2358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object* v_inst_2359_, lean_object* v_f_2360_, lean_object* v_as_2361_, lean_object* v_start_2362_, lean_object* v_stop_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Array_forRevM___redArg(v_inst_2359_, v_f_2360_, v_as_2361_, v_start_2362_, v_stop_2363_);
lean_dec(v_stop_2363_);
lean_dec(v_start_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object* v_00_u03b1_2365_, lean_object* v_m_2366_, lean_object* v_inst_2367_, lean_object* v_f_2368_, lean_object* v_as_2369_, lean_object* v_start_2370_, lean_object* v_stop_2371_){
_start:
{
lean_object* v_toApplicative_2372_; lean_object* v_toPure_2373_; lean_object* v___f_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v_toApplicative_2372_ = lean_ctor_get(v_inst_2367_, 0);
v_toPure_2373_ = lean_ctor_get(v_toApplicative_2372_, 1);
v___f_2374_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2374_, 0, v_f_2368_);
v___x_2375_ = lean_box(0);
v___x_2376_ = lean_array_get_size(v_as_2369_);
v___x_2377_ = lean_nat_dec_le(v_start_2370_, v___x_2376_);
if (v___x_2377_ == 0)
{
uint8_t v___x_2378_; 
v___x_2378_ = lean_nat_dec_lt(v_stop_2371_, v___x_2376_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; 
lean_inc(v_toPure_2373_);
lean_dec_ref(v___f_2374_);
lean_dec_ref(v_as_2369_);
lean_dec_ref(v_inst_2367_);
v___x_2379_ = lean_apply_2(v_toPure_2373_, lean_box(0), v___x_2375_);
return v___x_2379_;
}
else
{
size_t v___x_2380_; size_t v___x_2381_; lean_object* v___x_2382_; 
v___x_2380_ = lean_usize_of_nat(v___x_2376_);
v___x_2381_ = lean_usize_of_nat(v_stop_2371_);
v___x_2382_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2367_, v___f_2374_, v_as_2369_, v___x_2380_, v___x_2381_, v___x_2375_);
return v___x_2382_;
}
}
else
{
uint8_t v___x_2383_; 
v___x_2383_ = lean_nat_dec_lt(v_stop_2371_, v_start_2370_);
if (v___x_2383_ == 0)
{
lean_object* v___x_2384_; 
lean_inc(v_toPure_2373_);
lean_dec_ref(v___f_2374_);
lean_dec_ref(v_as_2369_);
lean_dec_ref(v_inst_2367_);
v___x_2384_ = lean_apply_2(v_toPure_2373_, lean_box(0), v___x_2375_);
return v___x_2384_;
}
else
{
size_t v___x_2385_; size_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_usize_of_nat(v_start_2370_);
v___x_2386_ = lean_usize_of_nat(v_stop_2371_);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2367_, v___f_2374_, v_as_2369_, v___x_2385_, v___x_2386_, v___x_2375_);
return v___x_2387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object* v_00_u03b1_2388_, lean_object* v_m_2389_, lean_object* v_inst_2390_, lean_object* v_f_2391_, lean_object* v_as_2392_, lean_object* v_start_2393_, lean_object* v_stop_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Array_forRevM(v_00_u03b1_2388_, v_m_2389_, v_inst_2390_, v_f_2391_, v_as_2392_, v_start_2393_, v_stop_2394_);
lean_dec(v_stop_2394_);
lean_dec(v_start_2393_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object* v_f_2396_, lean_object* v_x1_2397_, lean_object* v_x2_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = lean_apply_2(v_f_2396_, v_x1_2397_, v_x2_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object* v_f_2419_, lean_object* v_init_2420_, lean_object* v_as_2421_, lean_object* v_start_2422_, lean_object* v_stop_2423_){
_start:
{
lean_object* v___x_2424_; uint8_t v___x_2425_; 
v___x_2424_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2425_ = lean_nat_dec_lt(v_start_2422_, v_stop_2423_);
if (v___x_2425_ == 0)
{
lean_dec_ref(v_as_2421_);
lean_dec(v_f_2419_);
return v_init_2420_;
}
else
{
lean_object* v___f_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___f_2426_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2426_, 0, v_f_2419_);
v___x_2427_ = lean_array_get_size(v_as_2421_);
v___x_2428_ = lean_nat_dec_le(v_stop_2423_, v___x_2427_);
if (v___x_2428_ == 0)
{
uint8_t v___x_2429_; 
v___x_2429_ = lean_nat_dec_lt(v_start_2422_, v___x_2427_);
if (v___x_2429_ == 0)
{
lean_dec_ref(v___f_2426_);
lean_dec_ref(v_as_2421_);
return v_init_2420_;
}
else
{
size_t v___x_2430_; size_t v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = lean_usize_of_nat(v_start_2422_);
v___x_2431_ = lean_usize_of_nat(v___x_2427_);
v___x_2432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2424_, v___f_2426_, v_as_2421_, v___x_2430_, v___x_2431_, v_init_2420_);
return v___x_2432_;
}
}
else
{
size_t v___x_2433_; size_t v___x_2434_; lean_object* v___x_2435_; 
v___x_2433_ = lean_usize_of_nat(v_start_2422_);
v___x_2434_ = lean_usize_of_nat(v_stop_2423_);
v___x_2435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2424_, v___f_2426_, v_as_2421_, v___x_2433_, v___x_2434_, v_init_2420_);
return v___x_2435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object* v_f_2436_, lean_object* v_init_2437_, lean_object* v_as_2438_, lean_object* v_start_2439_, lean_object* v_stop_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Array_foldl___redArg(v_f_2436_, v_init_2437_, v_as_2438_, v_start_2439_, v_stop_2440_);
lean_dec(v_stop_2440_);
lean_dec(v_start_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl(lean_object* v_00_u03b1_2442_, lean_object* v_00_u03b2_2443_, lean_object* v_f_2444_, lean_object* v_init_2445_, lean_object* v_as_2446_, lean_object* v_start_2447_, lean_object* v_stop_2448_){
_start:
{
lean_object* v___x_2449_; uint8_t v___x_2450_; 
v___x_2449_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2450_ = lean_nat_dec_lt(v_start_2447_, v_stop_2448_);
if (v___x_2450_ == 0)
{
lean_dec_ref(v_as_2446_);
lean_dec(v_f_2444_);
return v_init_2445_;
}
else
{
lean_object* v___f_2451_; lean_object* v___x_2452_; uint8_t v___x_2453_; 
v___f_2451_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2451_, 0, v_f_2444_);
v___x_2452_ = lean_array_get_size(v_as_2446_);
v___x_2453_ = lean_nat_dec_le(v_stop_2448_, v___x_2452_);
if (v___x_2453_ == 0)
{
uint8_t v___x_2454_; 
v___x_2454_ = lean_nat_dec_lt(v_start_2447_, v___x_2452_);
if (v___x_2454_ == 0)
{
lean_dec_ref(v___f_2451_);
lean_dec_ref(v_as_2446_);
return v_init_2445_;
}
else
{
size_t v___x_2455_; size_t v___x_2456_; lean_object* v___x_2457_; 
v___x_2455_ = lean_usize_of_nat(v_start_2447_);
v___x_2456_ = lean_usize_of_nat(v___x_2452_);
v___x_2457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2449_, v___f_2451_, v_as_2446_, v___x_2455_, v___x_2456_, v_init_2445_);
return v___x_2457_;
}
}
else
{
size_t v___x_2458_; size_t v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_usize_of_nat(v_start_2447_);
v___x_2459_ = lean_usize_of_nat(v_stop_2448_);
v___x_2460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2449_, v___f_2451_, v_as_2446_, v___x_2458_, v___x_2459_, v_init_2445_);
return v___x_2460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object* v_00_u03b1_2461_, lean_object* v_00_u03b2_2462_, lean_object* v_f_2463_, lean_object* v_init_2464_, lean_object* v_as_2465_, lean_object* v_start_2466_, lean_object* v_stop_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l_Array_foldl(v_00_u03b1_2461_, v_00_u03b2_2462_, v_f_2463_, v_init_2464_, v_as_2465_, v_start_2466_, v_stop_2467_);
lean_dec(v_stop_2467_);
lean_dec(v_start_2466_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object* v_f_2469_, lean_object* v_init_2470_, lean_object* v_as_2471_, lean_object* v_start_2472_, lean_object* v_stop_2473_){
_start:
{
lean_object* v___f_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___f_2474_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2474_, 0, v_f_2469_);
v___x_2475_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2476_ = lean_array_get_size(v_as_2471_);
v___x_2477_ = lean_nat_dec_le(v_start_2472_, v___x_2476_);
if (v___x_2477_ == 0)
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_nat_dec_lt(v_stop_2473_, v___x_2476_);
if (v___x_2478_ == 0)
{
lean_dec_ref(v___f_2474_);
lean_dec_ref(v_as_2471_);
return v_init_2470_;
}
else
{
size_t v___x_2479_; size_t v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = lean_usize_of_nat(v___x_2476_);
v___x_2480_ = lean_usize_of_nat(v_stop_2473_);
v___x_2481_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2475_, v___f_2474_, v_as_2471_, v___x_2479_, v___x_2480_, v_init_2470_);
return v___x_2481_;
}
}
else
{
uint8_t v___x_2482_; 
v___x_2482_ = lean_nat_dec_lt(v_stop_2473_, v_start_2472_);
if (v___x_2482_ == 0)
{
lean_dec_ref(v___f_2474_);
lean_dec_ref(v_as_2471_);
return v_init_2470_;
}
else
{
size_t v___x_2483_; size_t v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = lean_usize_of_nat(v_start_2472_);
v___x_2484_ = lean_usize_of_nat(v_stop_2473_);
v___x_2485_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2475_, v___f_2474_, v_as_2471_, v___x_2483_, v___x_2484_, v_init_2470_);
return v___x_2485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object* v_f_2486_, lean_object* v_init_2487_, lean_object* v_as_2488_, lean_object* v_start_2489_, lean_object* v_stop_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Array_foldr___redArg(v_f_2486_, v_init_2487_, v_as_2488_, v_start_2489_, v_stop_2490_);
lean_dec(v_stop_2490_);
lean_dec(v_start_2489_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr(lean_object* v_00_u03b1_2492_, lean_object* v_00_u03b2_2493_, lean_object* v_f_2494_, lean_object* v_init_2495_, lean_object* v_as_2496_, lean_object* v_start_2497_, lean_object* v_stop_2498_){
_start:
{
lean_object* v___f_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; 
v___f_2499_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2499_, 0, v_f_2494_);
v___x_2500_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2501_ = lean_array_get_size(v_as_2496_);
v___x_2502_ = lean_nat_dec_le(v_start_2497_, v___x_2501_);
if (v___x_2502_ == 0)
{
uint8_t v___x_2503_; 
v___x_2503_ = lean_nat_dec_lt(v_stop_2498_, v___x_2501_);
if (v___x_2503_ == 0)
{
lean_dec_ref(v___f_2499_);
lean_dec_ref(v_as_2496_);
return v_init_2495_;
}
else
{
size_t v___x_2504_; size_t v___x_2505_; lean_object* v___x_2506_; 
v___x_2504_ = lean_usize_of_nat(v___x_2501_);
v___x_2505_ = lean_usize_of_nat(v_stop_2498_);
v___x_2506_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2500_, v___f_2499_, v_as_2496_, v___x_2504_, v___x_2505_, v_init_2495_);
return v___x_2506_;
}
}
else
{
uint8_t v___x_2507_; 
v___x_2507_ = lean_nat_dec_lt(v_stop_2498_, v_start_2497_);
if (v___x_2507_ == 0)
{
lean_dec_ref(v___f_2499_);
lean_dec_ref(v_as_2496_);
return v_init_2495_;
}
else
{
size_t v___x_2508_; size_t v___x_2509_; lean_object* v___x_2510_; 
v___x_2508_ = lean_usize_of_nat(v_start_2497_);
v___x_2509_ = lean_usize_of_nat(v_stop_2498_);
v___x_2510_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2500_, v___f_2499_, v_as_2496_, v___x_2508_, v___x_2509_, v_init_2495_);
return v___x_2510_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object* v_00_u03b1_2511_, lean_object* v_00_u03b2_2512_, lean_object* v_f_2513_, lean_object* v_init_2514_, lean_object* v_as_2515_, lean_object* v_start_2516_, lean_object* v_stop_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Array_foldr(v_00_u03b1_2511_, v_00_u03b2_2512_, v_f_2513_, v_init_2514_, v_as_2515_, v_start_2516_, v_stop_2517_);
lean_dec(v_stop_2517_);
lean_dec(v_start_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object* v_inst_2519_, lean_object* v_x1_2520_, lean_object* v_x2_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = lean_apply_2(v_inst_2519_, v_x1_2520_, v_x2_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object* v_inst_2523_, lean_object* v_inst_2524_, lean_object* v_as_2525_){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; 
v___x_2526_ = lean_array_get_size(v_as_2525_);
v___x_2527_ = lean_unsigned_to_nat(0u);
v___x_2528_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2529_ = lean_nat_dec_lt(v___x_2527_, v___x_2526_);
if (v___x_2529_ == 0)
{
lean_dec_ref(v_as_2525_);
lean_dec(v_inst_2523_);
return v_inst_2524_;
}
else
{
lean_object* v___f_2530_; size_t v___x_2531_; size_t v___x_2532_; lean_object* v___x_2533_; 
v___f_2530_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2530_, 0, v_inst_2523_);
v___x_2531_ = lean_usize_of_nat(v___x_2526_);
v___x_2532_ = ((size_t)0ULL);
v___x_2533_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2528_, v___f_2530_, v_as_2525_, v___x_2531_, v___x_2532_, v_inst_2524_);
return v___x_2533_;
}
}
}
LEAN_EXPORT lean_object* l_Array_sum(lean_object* v_00_u03b1_2534_, lean_object* v_inst_2535_, lean_object* v_inst_2536_, lean_object* v_as_2537_){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v___x_2538_ = lean_array_get_size(v_as_2537_);
v___x_2539_ = lean_unsigned_to_nat(0u);
v___x_2540_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2541_ = lean_nat_dec_lt(v___x_2539_, v___x_2538_);
if (v___x_2541_ == 0)
{
lean_dec_ref(v_as_2537_);
lean_dec(v_inst_2535_);
return v_inst_2536_;
}
else
{
lean_object* v___f_2542_; size_t v___x_2543_; size_t v___x_2544_; lean_object* v___x_2545_; 
v___f_2542_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2542_, 0, v_inst_2535_);
v___x_2543_ = lean_usize_of_nat(v___x_2538_);
v___x_2544_ = ((size_t)0ULL);
v___x_2545_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2540_, v___f_2542_, v_as_2537_, v___x_2543_, v___x_2544_, v_inst_2536_);
return v___x_2545_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object* v_inst_2546_, lean_object* v_inst_2547_, lean_object* v_as_2548_){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; 
v___x_2549_ = lean_array_get_size(v_as_2548_);
v___x_2550_ = lean_unsigned_to_nat(0u);
v___x_2551_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2552_ = lean_nat_dec_lt(v___x_2550_, v___x_2549_);
if (v___x_2552_ == 0)
{
lean_dec_ref(v_as_2548_);
lean_dec(v_inst_2546_);
return v_inst_2547_;
}
else
{
lean_object* v___f_2553_; size_t v___x_2554_; size_t v___x_2555_; lean_object* v___x_2556_; 
v___f_2553_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2553_, 0, v_inst_2546_);
v___x_2554_ = lean_usize_of_nat(v___x_2549_);
v___x_2555_ = ((size_t)0ULL);
v___x_2556_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2551_, v___f_2553_, v_as_2548_, v___x_2554_, v___x_2555_, v_inst_2547_);
return v___x_2556_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod(lean_object* v_00_u03b1_2557_, lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_as_2560_){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2561_ = lean_array_get_size(v_as_2560_);
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2564_ = lean_nat_dec_lt(v___x_2562_, v___x_2561_);
if (v___x_2564_ == 0)
{
lean_dec_ref(v_as_2560_);
lean_dec(v_inst_2558_);
return v_inst_2559_;
}
else
{
lean_object* v___f_2565_; size_t v___x_2566_; size_t v___x_2567_; lean_object* v___x_2568_; 
v___f_2565_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2565_, 0, v_inst_2558_);
v___x_2566_ = lean_usize_of_nat(v___x_2561_);
v___x_2567_ = ((size_t)0ULL);
v___x_2568_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2563_, v___f_2565_, v_as_2560_, v___x_2566_, v___x_2567_, v_inst_2559_);
return v___x_2568_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object* v_p_2569_, lean_object* v_x1_2570_, lean_object* v_x2_2571_){
_start:
{
lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = lean_apply_1(v_p_2569_, v_x1_2570_);
v___x_2573_ = lean_unbox(v___x_2572_);
if (v___x_2573_ == 0)
{
lean_inc(v_x2_2571_);
return v_x2_2571_;
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = lean_unsigned_to_nat(1u);
v___x_2575_ = lean_nat_add(v_x2_2571_, v___x_2574_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object* v_p_2576_, lean_object* v_x1_2577_, lean_object* v_x2_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Array_countP___redArg___lam__0(v_p_2576_, v_x1_2577_, v_x2_2578_);
lean_dec(v_x2_2578_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object* v_p_2580_, lean_object* v_as_2581_){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v___x_2582_ = lean_unsigned_to_nat(0u);
v___x_2583_ = lean_array_get_size(v_as_2581_);
v___x_2584_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2585_ = lean_nat_dec_lt(v___x_2582_, v___x_2583_);
if (v___x_2585_ == 0)
{
lean_dec_ref(v_as_2581_);
lean_dec_ref(v_p_2580_);
return v___x_2582_;
}
else
{
lean_object* v___f_2586_; size_t v___x_2587_; size_t v___x_2588_; lean_object* v___x_2589_; 
v___f_2586_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2586_, 0, v_p_2580_);
v___x_2587_ = lean_usize_of_nat(v___x_2583_);
v___x_2588_ = ((size_t)0ULL);
v___x_2589_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2584_, v___f_2586_, v_as_2581_, v___x_2587_, v___x_2588_, v___x_2582_);
return v___x_2589_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP(lean_object* v_00_u03b1_2590_, lean_object* v_p_2591_, lean_object* v_as_2592_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; uint8_t v___x_2596_; 
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = lean_array_get_size(v_as_2592_);
v___x_2595_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2596_ = lean_nat_dec_lt(v___x_2593_, v___x_2594_);
if (v___x_2596_ == 0)
{
lean_dec_ref(v_as_2592_);
lean_dec_ref(v_p_2591_);
return v___x_2593_;
}
else
{
lean_object* v___f_2597_; size_t v___x_2598_; size_t v___x_2599_; lean_object* v___x_2600_; 
v___f_2597_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2597_, 0, v_p_2591_);
v___x_2598_ = lean_usize_of_nat(v___x_2594_);
v___x_2599_ = ((size_t)0ULL);
v___x_2600_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2595_, v___f_2597_, v_as_2592_, v___x_2598_, v___x_2599_, v___x_2593_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object* v_inst_2601_, lean_object* v_a_2602_, lean_object* v_x1_2603_, lean_object* v_x2_2604_){
_start:
{
lean_object* v___x_2605_; uint8_t v___x_2606_; 
v___x_2605_ = lean_apply_2(v_inst_2601_, v_x1_2603_, v_a_2602_);
v___x_2606_ = lean_unbox(v___x_2605_);
if (v___x_2606_ == 0)
{
lean_inc(v_x2_2604_);
return v_x2_2604_;
}
else
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = lean_unsigned_to_nat(1u);
v___x_2608_ = lean_nat_add(v_x2_2604_, v___x_2607_);
return v___x_2608_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object* v_inst_2609_, lean_object* v_a_2610_, lean_object* v_x1_2611_, lean_object* v_x2_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l_Array_count___redArg___lam__0(v_inst_2609_, v_a_2610_, v_x1_2611_, v_x2_2612_);
lean_dec(v_x2_2612_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object* v_inst_2614_, lean_object* v_a_2615_, lean_object* v_as_2616_){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2617_ = lean_unsigned_to_nat(0u);
v___x_2618_ = lean_array_get_size(v_as_2616_);
v___x_2619_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2620_ = lean_nat_dec_lt(v___x_2617_, v___x_2618_);
if (v___x_2620_ == 0)
{
lean_dec_ref(v_as_2616_);
lean_dec(v_a_2615_);
lean_dec_ref(v_inst_2614_);
return v___x_2617_;
}
else
{
lean_object* v___f_2621_; size_t v___x_2622_; size_t v___x_2623_; lean_object* v___x_2624_; 
v___f_2621_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2621_, 0, v_inst_2614_);
lean_closure_set(v___f_2621_, 1, v_a_2615_);
v___x_2622_ = lean_usize_of_nat(v___x_2618_);
v___x_2623_ = ((size_t)0ULL);
v___x_2624_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2619_, v___f_2621_, v_as_2616_, v___x_2622_, v___x_2623_, v___x_2617_);
return v___x_2624_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count(lean_object* v_00_u03b1_2625_, lean_object* v_inst_2626_, lean_object* v_a_2627_, lean_object* v_as_2628_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; uint8_t v___x_2632_; 
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = lean_array_get_size(v_as_2628_);
v___x_2631_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2632_ = lean_nat_dec_lt(v___x_2629_, v___x_2630_);
if (v___x_2632_ == 0)
{
lean_dec_ref(v_as_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_inst_2626_);
return v___x_2629_;
}
else
{
lean_object* v___f_2633_; size_t v___x_2634_; size_t v___x_2635_; lean_object* v___x_2636_; 
v___f_2633_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2633_, 0, v_inst_2626_);
lean_closure_set(v___f_2633_, 1, v_a_2627_);
v___x_2634_ = lean_usize_of_nat(v___x_2630_);
v___x_2635_ = ((size_t)0ULL);
v___x_2636_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2631_, v___f_2633_, v_as_2628_, v___x_2634_, v___x_2635_, v___x_2629_);
return v___x_2636_;
}
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object* v_f_2637_, lean_object* v_x_2638_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_apply_1(v_f_2637_, v_x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object* v_f_2640_, lean_object* v_as_2641_){
_start:
{
lean_object* v___f_2642_; lean_object* v___x_2643_; size_t v_sz_2644_; size_t v___x_2645_; lean_object* v___x_2646_; 
v___f_2642_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2642_, 0, v_f_2640_);
v___x_2643_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2644_ = lean_array_size(v_as_2641_);
v___x_2645_ = ((size_t)0ULL);
v___x_2646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2643_, v___f_2642_, v_sz_2644_, v___x_2645_, v_as_2641_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Array_map(lean_object* v_00_u03b1_2647_, lean_object* v_00_u03b2_2648_, lean_object* v_f_2649_, lean_object* v_as_2650_){
_start:
{
lean_object* v___f_2651_; lean_object* v___x_2652_; size_t v_sz_2653_; size_t v___x_2654_; lean_object* v___x_2655_; 
v___f_2651_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2651_, 0, v_f_2649_);
v___x_2652_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2653_ = lean_array_size(v_as_2650_);
v___x_2654_ = ((size_t)0ULL);
v___x_2655_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2652_, v___f_2651_, v_sz_2653_, v___x_2654_, v_as_2650_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object* v___y_2656_, lean_object* v_x_2657_){
_start:
{
lean_inc(v___y_2656_);
return v___y_2656_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object* v___y_2658_, lean_object* v_x_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Array_instFunctor___lam__0(v___y_2658_, v_x_2659_);
lean_dec(v_x_2659_);
lean_dec(v___y_2658_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object* v_00_u03b1_2661_, lean_object* v_00_u03b2_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v___f_2665_; lean_object* v___x_2666_; size_t v_sz_2667_; size_t v___x_2668_; lean_object* v___x_2669_; 
v___f_2665_ = lean_alloc_closure((void*)(l_Array_instFunctor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2665_, 0, v___y_2663_);
v___x_2666_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2667_ = lean_array_size(v___y_2664_);
v___x_2668_ = ((size_t)0ULL);
v___x_2669_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2666_, v___f_2665_, v_sz_2667_, v___x_2668_, v___y_2664_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object* v_f_2676_, lean_object* v_x1_2677_, lean_object* v_x2_2678_, lean_object* v_x3_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_apply_3(v_f_2676_, v_x1_2677_, v_x2_2678_, lean_box(0));
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object* v_as_2681_, lean_object* v_f_2682_){
_start:
{
lean_object* v___f_2683_; lean_object* v___x_2684_; size_t v_sz_2685_; size_t v___x_2686_; lean_object* v___x_2687_; 
v___f_2683_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2683_, 0, v_f_2682_);
v___x_2684_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2685_ = lean_array_size(v_as_2681_);
v___x_2686_ = ((size_t)0ULL);
v___x_2687_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2684_, v___f_2683_, v_sz_2685_, v___x_2686_, v_as_2681_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object* v_00_u03b1_2688_, lean_object* v_00_u03b2_2689_, lean_object* v_as_2690_, lean_object* v_f_2691_){
_start:
{
lean_object* v___f_2692_; lean_object* v___x_2693_; size_t v_sz_2694_; size_t v___x_2695_; lean_object* v___x_2696_; 
v___f_2692_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2692_, 0, v_f_2691_);
v___x_2693_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2694_ = lean_array_size(v_as_2690_);
v___x_2695_ = ((size_t)0ULL);
v___x_2696_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2693_, v___f_2692_, v_sz_2694_, v___x_2695_, v_as_2690_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object* v_f_2697_, lean_object* v_as_2698_){
_start:
{
lean_object* v___f_2699_; lean_object* v___x_2700_; size_t v_sz_2701_; size_t v___x_2702_; lean_object* v___x_2703_; 
v___f_2699_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2699_, 0, v_f_2697_);
v___x_2700_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2701_ = lean_array_size(v_as_2698_);
v___x_2702_ = ((size_t)0ULL);
v___x_2703_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2700_, v___f_2699_, v_sz_2701_, v___x_2702_, v_as_2698_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object* v_00_u03b1_2704_, lean_object* v_00_u03b2_2705_, lean_object* v_f_2706_, lean_object* v_as_2707_){
_start:
{
lean_object* v___f_2708_; lean_object* v___x_2709_; size_t v_sz_2710_; size_t v___x_2711_; lean_object* v___x_2712_; 
v___f_2708_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2708_, 0, v_f_2706_);
v___x_2709_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2710_ = lean_array_size(v_as_2707_);
v___x_2711_ = ((size_t)0ULL);
v___x_2712_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2709_, v___f_2708_, v_sz_2710_, v___x_2711_, v_as_2707_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object* v_start_2713_, size_t v_sz_2714_, size_t v_i_2715_, lean_object* v_bs_2716_){
_start:
{
uint8_t v___x_2717_; 
v___x_2717_ = lean_usize_dec_lt(v_i_2715_, v_sz_2714_);
if (v___x_2717_ == 0)
{
return v_bs_2716_;
}
else
{
lean_object* v_v_2718_; lean_object* v___x_2719_; lean_object* v_bs_x27_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; size_t v___x_2724_; size_t v___x_2725_; lean_object* v___x_2726_; 
v_v_2718_ = lean_array_uget(v_bs_2716_, v_i_2715_);
v___x_2719_ = lean_unsigned_to_nat(0u);
v_bs_x27_2720_ = lean_array_uset(v_bs_2716_, v_i_2715_, v___x_2719_);
v___x_2721_ = lean_usize_to_nat(v_i_2715_);
v___x_2722_ = lean_nat_add(v_start_2713_, v___x_2721_);
lean_dec(v___x_2721_);
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v_v_2718_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = ((size_t)1ULL);
v___x_2725_ = lean_usize_add(v_i_2715_, v___x_2724_);
v___x_2726_ = lean_array_uset(v_bs_x27_2720_, v_i_2715_, v___x_2723_);
v_i_2715_ = v___x_2725_;
v_bs_2716_ = v___x_2726_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object* v_start_2728_, lean_object* v_sz_2729_, lean_object* v_i_2730_, lean_object* v_bs_2731_){
_start:
{
size_t v_sz_boxed_2732_; size_t v_i_boxed_2733_; lean_object* v_res_2734_; 
v_sz_boxed_2732_ = lean_unbox_usize(v_sz_2729_);
lean_dec(v_sz_2729_);
v_i_boxed_2733_ = lean_unbox_usize(v_i_2730_);
lean_dec(v_i_2730_);
v_res_2734_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2728_, v_sz_boxed_2732_, v_i_boxed_2733_, v_bs_2731_);
lean_dec(v_start_2728_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object* v_xs_2735_, lean_object* v_start_2736_){
_start:
{
size_t v_sz_2737_; size_t v___x_2738_; lean_object* v___x_2739_; 
v_sz_2737_ = lean_array_size(v_xs_2735_);
v___x_2738_ = ((size_t)0ULL);
v___x_2739_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2736_, v_sz_2737_, v___x_2738_, v_xs_2735_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object* v_xs_2740_, lean_object* v_start_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Array_zipIdx___redArg(v_xs_2740_, v_start_2741_);
lean_dec(v_start_2741_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object* v_00_u03b1_2743_, lean_object* v_xs_2744_, lean_object* v_start_2745_){
_start:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Array_zipIdx___redArg(v_xs_2744_, v_start_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object* v_00_u03b1_2747_, lean_object* v_xs_2748_, lean_object* v_start_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Array_zipIdx(v_00_u03b1_2747_, v_xs_2748_, v_start_2749_);
lean_dec(v_start_2749_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object* v_00_u03b1_2751_, lean_object* v_start_2752_, lean_object* v_as_2753_, size_t v_sz_2754_, size_t v_i_2755_, lean_object* v_bs_2756_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2752_, v_sz_2754_, v_i_2755_, v_bs_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object* v_00_u03b1_2758_, lean_object* v_start_2759_, lean_object* v_as_2760_, lean_object* v_sz_2761_, lean_object* v_i_2762_, lean_object* v_bs_2763_){
_start:
{
size_t v_sz_boxed_2764_; size_t v_i_boxed_2765_; lean_object* v_res_2766_; 
v_sz_boxed_2764_ = lean_unbox_usize(v_sz_2761_);
lean_dec(v_sz_2761_);
v_i_boxed_2765_ = lean_unbox_usize(v_i_2762_);
lean_dec(v_i_2762_);
v_res_2766_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(v_00_u03b1_2758_, v_start_2759_, v_as_2760_, v_sz_boxed_2764_, v_i_boxed_2765_, v_bs_2763_);
lean_dec_ref(v_as_2760_);
lean_dec(v_start_2759_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object* v_p_2767_, lean_object* v___x_2768_, lean_object* v___x_2769_, lean_object* v_a_2770_, lean_object* v_x_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v___x_2773_; uint8_t v___x_2774_; 
lean_inc(v_a_2770_);
v___x_2773_ = lean_apply_1(v_p_2767_, v_a_2770_);
v___x_2774_ = lean_unbox(v___x_2773_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; 
lean_dec(v_a_2770_);
v___x_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2768_);
return v___x_2775_;
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_dec_ref(v___x_2768_);
v___x_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_a_2770_);
v___x_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
v___x_2778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v___x_2769_);
v___x_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
return v___x_2779_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object* v_p_2780_, lean_object* v___x_2781_, lean_object* v___x_2782_, lean_object* v_a_2783_, lean_object* v_x_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Array_find_x3f___redArg___lam__0(v_p_2780_, v___x_2781_, v___x_2782_, v_a_2783_, v_x_2784_, v___y_2785_);
lean_dec_ref(v___y_2785_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object* v_p_2787_, lean_object* v_as_2788_){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___f_2793_; size_t v_sz_2794_; size_t v___x_2795_; lean_object* v___x_2796_; lean_object* v_fst_2797_; 
v___x_2789_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2790_ = lean_box(0);
v___x_2791_ = lean_box(0);
v___x_2792_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2793_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2793_, 0, v_p_2787_);
lean_closure_set(v___f_2793_, 1, v___x_2792_);
lean_closure_set(v___f_2793_, 2, v___x_2791_);
v_sz_2794_ = lean_array_size(v_as_2788_);
v___x_2795_ = ((size_t)0ULL);
v___x_2796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2789_, v_as_2788_, v___f_2793_, v_sz_2794_, v___x_2795_, v___x_2792_);
v_fst_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_fst_2797_);
lean_dec(v___x_2796_);
if (lean_obj_tag(v_fst_2797_) == 0)
{
return v___x_2790_;
}
else
{
lean_object* v_val_2798_; 
v_val_2798_ = lean_ctor_get(v_fst_2797_, 0);
lean_inc(v_val_2798_);
lean_dec_ref_known(v_fst_2797_, 1);
return v_val_2798_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object* v_00_u03b1_2799_, lean_object* v_p_2800_, lean_object* v_as_2801_){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___f_2806_; size_t v_sz_2807_; size_t v___x_2808_; lean_object* v___x_2809_; lean_object* v_fst_2810_; 
v___x_2802_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2803_ = lean_box(0);
v___x_2804_ = lean_box(0);
v___x_2805_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2806_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2806_, 0, v_p_2800_);
lean_closure_set(v___f_2806_, 1, v___x_2805_);
lean_closure_set(v___f_2806_, 2, v___x_2804_);
v_sz_2807_ = lean_array_size(v_as_2801_);
v___x_2808_ = ((size_t)0ULL);
v___x_2809_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2802_, v_as_2801_, v___f_2806_, v_sz_2807_, v___x_2808_, v___x_2805_);
v_fst_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_fst_2810_);
lean_dec(v___x_2809_);
if (lean_obj_tag(v_fst_2810_) == 0)
{
return v___x_2803_;
}
else
{
lean_object* v_val_2811_; 
v_val_2811_ = lean_ctor_get(v_fst_2810_, 0);
lean_inc(v_val_2811_);
lean_dec_ref_known(v_fst_2810_, 1);
return v_val_2811_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object* v_f_2812_, lean_object* v___x_2813_, lean_object* v___x_2814_, lean_object* v_a_2815_, lean_object* v_x_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = lean_apply_1(v_f_2812_, v_a_2815_);
if (lean_obj_tag(v___x_2818_) == 1)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
lean_dec_ref(v___x_2814_);
v___x_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2818_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
lean_ctor_set(v___x_2820_, 1, v___x_2813_);
v___x_2821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
return v___x_2821_;
}
else
{
lean_object* v___x_2822_; 
lean_dec(v___x_2818_);
v___x_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2814_);
return v___x_2822_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object* v_f_2823_, lean_object* v___x_2824_, lean_object* v___x_2825_, lean_object* v_a_2826_, lean_object* v_x_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Array_findSome_x3f___redArg___lam__0(v_f_2823_, v___x_2824_, v___x_2825_, v_a_2826_, v_x_2827_, v___y_2828_);
lean_dec_ref(v___y_2828_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object* v_f_2830_, lean_object* v_as_2831_){
_start:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___f_2836_; size_t v_sz_2837_; size_t v___x_2838_; lean_object* v___x_2839_; lean_object* v_fst_2840_; 
v___x_2832_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2833_ = lean_box(0);
v___x_2834_ = lean_box(0);
v___x_2835_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2836_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2836_, 0, v_f_2830_);
lean_closure_set(v___f_2836_, 1, v___x_2834_);
lean_closure_set(v___f_2836_, 2, v___x_2835_);
v_sz_2837_ = lean_array_size(v_as_2831_);
v___x_2838_ = ((size_t)0ULL);
v___x_2839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2832_, v_as_2831_, v___f_2836_, v_sz_2837_, v___x_2838_, v___x_2835_);
v_fst_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_fst_2840_);
lean_dec(v___x_2839_);
if (lean_obj_tag(v_fst_2840_) == 0)
{
return v___x_2833_;
}
else
{
lean_object* v_val_2841_; 
v_val_2841_ = lean_ctor_get(v_fst_2840_, 0);
lean_inc(v_val_2841_);
lean_dec_ref_known(v_fst_2840_, 1);
return v_val_2841_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object* v_00_u03b1_2842_, lean_object* v_00_u03b2_2843_, lean_object* v_f_2844_, lean_object* v_as_2845_){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___f_2850_; size_t v_sz_2851_; size_t v___x_2852_; lean_object* v___x_2853_; lean_object* v_fst_2854_; 
v___x_2846_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_box(0);
v___x_2849_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2850_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2850_, 0, v_f_2844_);
lean_closure_set(v___f_2850_, 1, v___x_2848_);
lean_closure_set(v___f_2850_, 2, v___x_2849_);
v_sz_2851_ = lean_array_size(v_as_2845_);
v___x_2852_ = ((size_t)0ULL);
v___x_2853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2846_, v_as_2845_, v___f_2850_, v_sz_2851_, v___x_2852_, v___x_2849_);
v_fst_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_fst_2854_);
lean_dec(v___x_2853_);
if (lean_obj_tag(v_fst_2854_) == 0)
{
return v___x_2847_;
}
else
{
lean_object* v_val_2855_; 
v_val_2855_ = lean_ctor_get(v_fst_2854_, 0);
lean_inc(v_val_2855_);
lean_dec_ref_known(v_fst_2854_, 1);
return v_val_2855_;
}
}
}
static lean_object* _init_l_Array_findSome_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2858_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__1));
v___x_2859_ = lean_unsigned_to_nat(14u);
v___x_2860_ = lean_unsigned_to_nat(1288u);
v___x_2861_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__0));
v___x_2862_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_2863_ = l_mkPanicMessageWithDecl(v___x_2862_, v___x_2861_, v___x_2860_, v___x_2859_, v___x_2858_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object* v_inst_2864_, lean_object* v_f_2865_, lean_object* v_xs_2866_){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___f_2873_; size_t v_sz_2874_; size_t v___x_2875_; lean_object* v___x_2876_; lean_object* v_fst_2877_; 
v___x_2870_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2871_ = lean_box(0);
v___x_2872_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2873_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2873_, 0, v_f_2865_);
lean_closure_set(v___f_2873_, 1, v___x_2871_);
lean_closure_set(v___f_2873_, 2, v___x_2872_);
v_sz_2874_ = lean_array_size(v_xs_2866_);
v___x_2875_ = ((size_t)0ULL);
v___x_2876_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2870_, v_xs_2866_, v___f_2873_, v_sz_2874_, v___x_2875_, v___x_2872_);
v_fst_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_fst_2877_);
lean_dec(v___x_2876_);
if (lean_obj_tag(v_fst_2877_) == 0)
{
goto v___jp_2867_;
}
else
{
lean_object* v_val_2878_; 
v_val_2878_ = lean_ctor_get(v_fst_2877_, 0);
lean_inc(v_val_2878_);
lean_dec_ref_known(v_fst_2877_, 1);
if (lean_obj_tag(v_val_2878_) == 0)
{
goto v___jp_2867_;
}
else
{
lean_object* v_val_2879_; 
v_val_2879_ = lean_ctor_get(v_val_2878_, 0);
lean_inc(v_val_2879_);
lean_dec_ref_known(v_val_2878_, 1);
return v_val_2879_;
}
}
v___jp_2867_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_2869_ = l_panic___redArg(v_inst_2864_, v___x_2868_);
return v___x_2869_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object* v_inst_2880_, lean_object* v_f_2881_, lean_object* v_xs_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Array_findSome_x21___redArg(v_inst_2880_, v_f_2881_, v_xs_2882_);
lean_dec(v_inst_2880_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object* v_00_u03b1_2884_, lean_object* v_00_u03b2_2885_, lean_object* v_inst_2886_, lean_object* v_f_2887_, lean_object* v_xs_2888_){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___f_2895_; size_t v_sz_2896_; size_t v___x_2897_; lean_object* v___x_2898_; lean_object* v_fst_2899_; 
v___x_2892_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2893_ = lean_box(0);
v___x_2894_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2895_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2895_, 0, v_f_2887_);
lean_closure_set(v___f_2895_, 1, v___x_2893_);
lean_closure_set(v___f_2895_, 2, v___x_2894_);
v_sz_2896_ = lean_array_size(v_xs_2888_);
v___x_2897_ = ((size_t)0ULL);
v___x_2898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2892_, v_xs_2888_, v___f_2895_, v_sz_2896_, v___x_2897_, v___x_2894_);
v_fst_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_fst_2899_);
lean_dec(v___x_2898_);
if (lean_obj_tag(v_fst_2899_) == 0)
{
goto v___jp_2889_;
}
else
{
lean_object* v_val_2900_; 
v_val_2900_ = lean_ctor_get(v_fst_2899_, 0);
lean_inc(v_val_2900_);
lean_dec_ref_known(v_fst_2899_, 1);
if (lean_obj_tag(v_val_2900_) == 0)
{
goto v___jp_2889_;
}
else
{
lean_object* v_val_2901_; 
v_val_2901_ = lean_ctor_get(v_val_2900_, 0);
lean_inc(v_val_2901_);
lean_dec_ref_known(v_val_2900_, 1);
return v_val_2901_;
}
}
v___jp_2889_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_2891_ = l_panic___redArg(v_inst_2886_, v___x_2890_);
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object* v_00_u03b1_2902_, lean_object* v_00_u03b2_2903_, lean_object* v_inst_2904_, lean_object* v_f_2905_, lean_object* v_xs_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Array_findSome_x21(v_00_u03b1_2902_, v_00_u03b2_2903_, v_inst_2904_, v_f_2905_, v_xs_2906_);
lean_dec(v_inst_2904_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object* v_f_2908_, lean_object* v_x_2909_){
_start:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_apply_1(v_f_2908_, v_x_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object* v_f_2911_, lean_object* v_as_2912_){
_start:
{
lean_object* v___f_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___f_2913_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2913_, 0, v_f_2911_);
v___x_2914_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2915_ = lean_array_get_size(v_as_2912_);
v___x_2916_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2914_, v___f_2913_, v_as_2912_, v___x_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object* v_00_u03b1_2917_, lean_object* v_00_u03b2_2918_, lean_object* v_f_2919_, lean_object* v_as_2920_){
_start:
{
lean_object* v___f_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___f_2921_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2921_, 0, v_f_2919_);
v___x_2922_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2923_ = lean_array_get_size(v_as_2920_);
v___x_2924_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2922_, v___f_2921_, v_as_2920_, v___x_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object* v_p_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v___x_2927_; uint8_t v___x_2928_; 
lean_inc(v_a_2926_);
v___x_2927_ = lean_apply_1(v_p_2925_, v_a_2926_);
v___x_2928_ = lean_unbox(v___x_2927_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; 
lean_dec(v_a_2926_);
v___x_2929_ = lean_box(0);
return v___x_2929_;
}
else
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_a_2926_);
return v___x_2930_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object* v_p_2931_, lean_object* v_as_2932_){
_start:
{
lean_object* v___f_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___f_2933_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2933_, 0, v_p_2931_);
v___x_2934_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2935_ = lean_array_get_size(v_as_2932_);
v___x_2936_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2934_, v___f_2933_, v_as_2932_, v___x_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object* v_00_u03b1_2937_, lean_object* v_p_2938_, lean_object* v_as_2939_){
_start:
{
lean_object* v___f_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___f_2940_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2940_, 0, v_p_2938_);
v___x_2941_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2942_ = lean_array_get_size(v_as_2939_);
v___x_2943_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2941_, v___f_2940_, v_as_2939_, v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object* v_p_2944_, lean_object* v_as_2945_, lean_object* v_j_2946_){
_start:
{
lean_object* v___x_2947_; uint8_t v___x_2948_; 
v___x_2947_ = lean_array_get_size(v_as_2945_);
v___x_2948_ = lean_nat_dec_lt(v_j_2946_, v___x_2947_);
if (v___x_2948_ == 0)
{
lean_object* v___x_2949_; 
lean_dec(v_j_2946_);
lean_dec_ref(v_p_2944_);
v___x_2949_ = lean_box(0);
return v___x_2949_;
}
else
{
lean_object* v___x_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; 
v___x_2950_ = lean_array_fget_borrowed(v_as_2945_, v_j_2946_);
lean_inc_ref(v_p_2944_);
lean_inc(v___x_2950_);
v___x_2951_ = lean_apply_1(v_p_2944_, v___x_2950_);
v___x_2952_ = lean_unbox(v___x_2951_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = lean_unsigned_to_nat(1u);
v___x_2954_ = lean_nat_add(v_j_2946_, v___x_2953_);
lean_dec(v_j_2946_);
v_j_2946_ = v___x_2954_;
goto _start;
}
else
{
lean_object* v___x_2956_; 
lean_dec_ref(v_p_2944_);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_j_2946_);
return v___x_2956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object* v_p_2957_, lean_object* v_as_2958_, lean_object* v_j_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Array_findIdx_x3f_loop___redArg(v_p_2957_, v_as_2958_, v_j_2959_);
lean_dec_ref(v_as_2958_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object* v_00_u03b1_2961_, lean_object* v_p_2962_, lean_object* v_as_2963_, lean_object* v_j_2964_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = l_Array_findIdx_x3f_loop___redArg(v_p_2962_, v_as_2963_, v_j_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object* v_00_u03b1_2966_, lean_object* v_p_2967_, lean_object* v_as_2968_, lean_object* v_j_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Array_findIdx_x3f_loop(v_00_u03b1_2966_, v_p_2967_, v_as_2968_, v_j_2969_);
lean_dec_ref(v_as_2968_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object* v_p_2971_, lean_object* v_as_2972_){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = lean_unsigned_to_nat(0u);
v___x_2974_ = l_Array_findIdx_x3f_loop___redArg(v_p_2971_, v_as_2972_, v___x_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object* v_p_2975_, lean_object* v_as_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l_Array_findIdx_x3f___redArg(v_p_2975_, v_as_2976_);
lean_dec_ref(v_as_2976_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object* v_00_u03b1_2978_, lean_object* v_p_2979_, lean_object* v_as_2980_){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_unsigned_to_nat(0u);
v___x_2982_ = l_Array_findIdx_x3f_loop___redArg(v_p_2979_, v_as_2980_, v___x_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object* v_00_u03b1_2983_, lean_object* v_p_2984_, lean_object* v_as_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Array_findIdx_x3f(v_00_u03b1_2983_, v_p_2984_, v_as_2985_);
lean_dec_ref(v_as_2985_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object* v_p_2987_, lean_object* v_as_2988_, lean_object* v_j_2989_){
_start:
{
lean_object* v___x_2990_; uint8_t v___x_2991_; 
v___x_2990_ = lean_array_get_size(v_as_2988_);
v___x_2991_ = lean_nat_dec_lt(v_j_2989_, v___x_2990_);
if (v___x_2991_ == 0)
{
lean_object* v___x_2992_; 
lean_dec(v_j_2989_);
lean_dec_ref(v_p_2987_);
v___x_2992_ = lean_box(0);
return v___x_2992_;
}
else
{
lean_object* v___x_2993_; lean_object* v___x_2994_; uint8_t v___x_2995_; 
v___x_2993_ = lean_array_fget_borrowed(v_as_2988_, v_j_2989_);
lean_inc_ref(v_p_2987_);
lean_inc(v___x_2993_);
v___x_2994_ = lean_apply_1(v_p_2987_, v___x_2993_);
v___x_2995_ = lean_unbox(v___x_2994_);
if (v___x_2995_ == 0)
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = lean_unsigned_to_nat(1u);
v___x_2997_ = lean_nat_add(v_j_2989_, v___x_2996_);
lean_dec(v_j_2989_);
v_j_2989_ = v___x_2997_;
goto _start;
}
else
{
lean_object* v___x_2999_; 
lean_dec_ref(v_p_2987_);
v___x_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2999_, 0, v_j_2989_);
return v___x_2999_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object* v_p_3000_, lean_object* v_as_3001_, lean_object* v_j_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3000_, v_as_3001_, v_j_3002_);
lean_dec_ref(v_as_3001_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object* v_00_u03b1_3004_, lean_object* v_p_3005_, lean_object* v_as_3006_, lean_object* v_j_3007_){
_start:
{
lean_object* v___x_3008_; 
v___x_3008_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3005_, v_as_3006_, v_j_3007_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object* v_00_u03b1_3009_, lean_object* v_p_3010_, lean_object* v_as_3011_, lean_object* v_j_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(v_00_u03b1_3009_, v_p_3010_, v_as_3011_, v_j_3012_);
lean_dec_ref(v_as_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object* v_p_3014_, lean_object* v_as_3015_){
_start:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3014_, v_as_3015_, v___x_3016_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object* v_p_3018_, lean_object* v_as_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Array_findFinIdx_x3f___redArg(v_p_3018_, v_as_3019_);
lean_dec_ref(v_as_3019_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object* v_00_u03b1_3021_, lean_object* v_p_3022_, lean_object* v_as_3023_){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3022_, v_as_3023_, v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object* v_00_u03b1_3026_, lean_object* v_p_3027_, lean_object* v_as_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Array_findFinIdx_x3f(v_00_u03b1_3026_, v_p_3027_, v_as_3028_);
lean_dec_ref(v_as_3028_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object* v_p_3030_, lean_object* v_as_3031_){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = lean_unsigned_to_nat(0u);
v___x_3033_ = l_Array_findIdx_x3f_loop___redArg(v_p_3030_, v_as_3031_, v___x_3032_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v___x_3034_; 
v___x_3034_ = lean_array_get_size(v_as_3031_);
return v___x_3034_;
}
else
{
lean_object* v_val_3035_; 
v_val_3035_ = lean_ctor_get(v___x_3033_, 0);
lean_inc(v_val_3035_);
lean_dec_ref_known(v___x_3033_, 1);
return v_val_3035_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object* v_p_3036_, lean_object* v_as_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l_Array_findIdx___redArg(v_p_3036_, v_as_3037_);
lean_dec_ref(v_as_3037_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object* v_00_u03b1_3039_, lean_object* v_p_3040_, lean_object* v_as_3041_){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_unsigned_to_nat(0u);
v___x_3043_ = l_Array_findIdx_x3f_loop___redArg(v_p_3040_, v_as_3041_, v___x_3042_);
if (lean_obj_tag(v___x_3043_) == 0)
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_array_get_size(v_as_3041_);
return v___x_3044_;
}
else
{
lean_object* v_val_3045_; 
v_val_3045_ = lean_ctor_get(v___x_3043_, 0);
lean_inc(v_val_3045_);
lean_dec_ref_known(v___x_3043_, 1);
return v_val_3045_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object* v_00_u03b1_3046_, lean_object* v_p_3047_, lean_object* v_as_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Array_findIdx(v_00_u03b1_3046_, v_p_3047_, v_as_3048_);
lean_dec_ref(v_as_3048_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object* v_inst_3050_, lean_object* v_xs_3051_, lean_object* v_v_3052_, lean_object* v_i_3053_){
_start:
{
lean_object* v___x_3054_; uint8_t v___x_3055_; 
v___x_3054_ = lean_array_get_size(v_xs_3051_);
v___x_3055_ = lean_nat_dec_lt(v_i_3053_, v___x_3054_);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; 
lean_dec(v_i_3053_);
lean_dec(v_v_3052_);
lean_dec_ref(v_inst_3050_);
v___x_3056_ = lean_box(0);
return v___x_3056_;
}
else
{
lean_object* v___x_3057_; lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3057_ = lean_array_fget_borrowed(v_xs_3051_, v_i_3053_);
lean_inc_ref(v_inst_3050_);
lean_inc(v_v_3052_);
lean_inc(v___x_3057_);
v___x_3058_ = lean_apply_2(v_inst_3050_, v___x_3057_, v_v_3052_);
v___x_3059_ = lean_unbox(v___x_3058_);
if (v___x_3059_ == 0)
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = lean_unsigned_to_nat(1u);
v___x_3061_ = lean_nat_add(v_i_3053_, v___x_3060_);
lean_dec(v_i_3053_);
v_i_3053_ = v___x_3061_;
goto _start;
}
else
{
lean_object* v___x_3063_; 
lean_dec(v_v_3052_);
lean_dec_ref(v_inst_3050_);
v___x_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_i_3053_);
return v___x_3063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object* v_inst_3064_, lean_object* v_xs_3065_, lean_object* v_v_3066_, lean_object* v_i_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l_Array_idxOfAux___redArg(v_inst_3064_, v_xs_3065_, v_v_3066_, v_i_3067_);
lean_dec_ref(v_xs_3065_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object* v_00_u03b1_3069_, lean_object* v_inst_3070_, lean_object* v_xs_3071_, lean_object* v_v_3072_, lean_object* v_i_3073_){
_start:
{
lean_object* v___x_3074_; 
v___x_3074_ = l_Array_idxOfAux___redArg(v_inst_3070_, v_xs_3071_, v_v_3072_, v_i_3073_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object* v_00_u03b1_3075_, lean_object* v_inst_3076_, lean_object* v_xs_3077_, lean_object* v_v_3078_, lean_object* v_i_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Array_idxOfAux(v_00_u03b1_3075_, v_inst_3076_, v_xs_3077_, v_v_3078_, v_i_3079_);
lean_dec_ref(v_xs_3077_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object* v_inst_3081_, lean_object* v_xs_3082_, lean_object* v_v_3083_){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = l_Array_idxOfAux___redArg(v_inst_3081_, v_xs_3082_, v_v_3083_, v___x_3084_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object* v_inst_3086_, lean_object* v_xs_3087_, lean_object* v_v_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_Array_finIdxOf_x3f___redArg(v_inst_3086_, v_xs_3087_, v_v_3088_);
lean_dec_ref(v_xs_3087_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object* v_00_u03b1_3090_, lean_object* v_inst_3091_, lean_object* v_xs_3092_, lean_object* v_v_3093_){
_start:
{
lean_object* v___x_3094_; 
v___x_3094_ = l_Array_finIdxOf_x3f___redArg(v_inst_3091_, v_xs_3092_, v_v_3093_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object* v_00_u03b1_3095_, lean_object* v_inst_3096_, lean_object* v_xs_3097_, lean_object* v_v_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Array_finIdxOf_x3f(v_00_u03b1_3095_, v_inst_3096_, v_xs_3097_, v_v_3098_);
lean_dec_ref(v_xs_3097_);
return v_res_3099_;
}
}
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object* v_inst_3100_, lean_object* v_a_3101_, lean_object* v_x_3102_){
_start:
{
lean_object* v___x_3103_; uint8_t v___x_3104_; 
v___x_3103_ = lean_apply_2(v_inst_3100_, v_x_3102_, v_a_3101_);
v___x_3104_ = lean_unbox(v___x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object* v_inst_3105_, lean_object* v_a_3106_, lean_object* v_x_3107_){
_start:
{
uint8_t v_res_3108_; lean_object* v_r_3109_; 
v_res_3108_ = l_Array_idxOf___redArg___lam__0(v_inst_3105_, v_a_3106_, v_x_3107_);
v_r_3109_ = lean_box(v_res_3108_);
return v_r_3109_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object* v_inst_3110_, lean_object* v_a_3111_, lean_object* v_as_3112_){
_start:
{
lean_object* v___f_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___f_3113_ = lean_alloc_closure((void*)(l_Array_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3113_, 0, v_inst_3110_);
lean_closure_set(v___f_3113_, 1, v_a_3111_);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = l_Array_findIdx_x3f_loop___redArg(v___f_3113_, v_as_3112_, v___x_3114_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_array_get_size(v_as_3112_);
return v___x_3116_;
}
else
{
lean_object* v_val_3117_; 
v_val_3117_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_val_3117_);
lean_dec_ref_known(v___x_3115_, 1);
return v_val_3117_;
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object* v_inst_3118_, lean_object* v_a_3119_, lean_object* v_as_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Array_idxOf___redArg(v_inst_3118_, v_a_3119_, v_as_3120_);
lean_dec_ref(v_as_3120_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object* v_00_u03b1_3122_, lean_object* v_inst_3123_, lean_object* v_a_3124_, lean_object* v_as_3125_){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = l_Array_idxOf___redArg(v_inst_3123_, v_a_3124_, v_as_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object* v_00_u03b1_3127_, lean_object* v_inst_3128_, lean_object* v_a_3129_, lean_object* v_as_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_Array_idxOf(v_00_u03b1_3127_, v_inst_3128_, v_a_3129_, v_as_3130_);
lean_dec_ref(v_as_3130_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object* v_inst_3132_, lean_object* v_xs_3133_, lean_object* v_v_3134_){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = l_Array_finIdxOf_x3f___redArg(v_inst_3132_, v_xs_3133_, v_v_3134_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v___x_3136_; 
v___x_3136_ = lean_box(0);
return v___x_3136_;
}
else
{
lean_object* v_val_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
v_val_3137_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3135_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_val_3137_);
lean_dec(v___x_3135_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_val_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object* v_inst_3145_, lean_object* v_xs_3146_, lean_object* v_v_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Array_idxOf_x3f___redArg(v_inst_3145_, v_xs_3146_, v_v_3147_);
lean_dec_ref(v_xs_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object* v_00_u03b1_3149_, lean_object* v_inst_3150_, lean_object* v_xs_3151_, lean_object* v_v_3152_){
_start:
{
lean_object* v___x_3153_; 
v___x_3153_ = l_Array_idxOf_x3f___redArg(v_inst_3150_, v_xs_3151_, v_v_3152_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object* v_00_u03b1_3154_, lean_object* v_inst_3155_, lean_object* v_xs_3156_, lean_object* v_v_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Array_idxOf_x3f(v_00_u03b1_3154_, v_inst_3155_, v_xs_3156_, v_v_3157_);
lean_dec_ref(v_xs_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object* v_p_3159_, lean_object* v_x_3160_){
_start:
{
lean_object* v___x_3161_; uint8_t v___x_3162_; 
v___x_3161_ = lean_apply_1(v_p_3159_, v_x_3160_);
v___x_3162_ = lean_unbox(v___x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object* v_p_3163_, lean_object* v_x_3164_){
_start:
{
uint8_t v_res_3165_; lean_object* v_r_3166_; 
v_res_3165_ = l_Array_any___redArg___lam__0(v_p_3163_, v_x_3164_);
v_r_3166_ = lean_box(v_res_3165_);
return v_r_3166_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object* v_as_3167_, lean_object* v_p_3168_, lean_object* v_start_3169_, lean_object* v_stop_3170_){
_start:
{
lean_object* v___x_3171_; uint8_t v___x_3172_; 
v___x_3171_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3172_ = lean_nat_dec_lt(v_start_3169_, v_stop_3170_);
if (v___x_3172_ == 0)
{
lean_dec(v_stop_3170_);
lean_dec_ref(v_p_3168_);
lean_dec_ref(v_as_3167_);
return v___x_3172_;
}
else
{
lean_object* v___f_3173_; lean_object* v___y_3175_; lean_object* v___x_3181_; uint8_t v___x_3182_; 
v___f_3173_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3173_, 0, v_p_3168_);
v___x_3181_ = lean_array_get_size(v_as_3167_);
v___x_3182_ = lean_nat_dec_le(v_stop_3170_, v___x_3181_);
if (v___x_3182_ == 0)
{
lean_dec(v_stop_3170_);
v___y_3175_ = v___x_3181_;
goto v___jp_3174_;
}
else
{
v___y_3175_ = v_stop_3170_;
goto v___jp_3174_;
}
v___jp_3174_:
{
uint8_t v___x_3176_; 
v___x_3176_ = lean_nat_dec_lt(v_start_3169_, v___y_3175_);
if (v___x_3176_ == 0)
{
lean_dec(v___y_3175_);
lean_dec_ref(v___f_3173_);
lean_dec_ref(v_as_3167_);
return v___x_3176_;
}
else
{
size_t v___x_3177_; size_t v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3177_ = lean_usize_of_nat(v_start_3169_);
v___x_3178_ = lean_usize_of_nat(v___y_3175_);
lean_dec(v___y_3175_);
v___x_3179_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3171_, v___f_3173_, v_as_3167_, v___x_3177_, v___x_3178_);
v___x_3180_ = lean_unbox(v___x_3179_);
lean_dec(v___x_3179_);
return v___x_3180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object* v_as_3183_, lean_object* v_p_3184_, lean_object* v_start_3185_, lean_object* v_stop_3186_){
_start:
{
uint8_t v_res_3187_; lean_object* v_r_3188_; 
v_res_3187_ = l_Array_any___redArg(v_as_3183_, v_p_3184_, v_start_3185_, v_stop_3186_);
lean_dec(v_start_3185_);
v_r_3188_ = lean_box(v_res_3187_);
return v_r_3188_;
}
}
LEAN_EXPORT uint8_t l_Array_any(lean_object* v_00_u03b1_3189_, lean_object* v_as_3190_, lean_object* v_p_3191_, lean_object* v_start_3192_, lean_object* v_stop_3193_){
_start:
{
lean_object* v___x_3194_; uint8_t v___x_3195_; 
v___x_3194_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3195_ = lean_nat_dec_lt(v_start_3192_, v_stop_3193_);
if (v___x_3195_ == 0)
{
lean_dec(v_stop_3193_);
lean_dec_ref(v_p_3191_);
lean_dec_ref(v_as_3190_);
return v___x_3195_;
}
else
{
lean_object* v___f_3196_; lean_object* v___y_3198_; lean_object* v___x_3204_; uint8_t v___x_3205_; 
v___f_3196_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3196_, 0, v_p_3191_);
v___x_3204_ = lean_array_get_size(v_as_3190_);
v___x_3205_ = lean_nat_dec_le(v_stop_3193_, v___x_3204_);
if (v___x_3205_ == 0)
{
lean_dec(v_stop_3193_);
v___y_3198_ = v___x_3204_;
goto v___jp_3197_;
}
else
{
v___y_3198_ = v_stop_3193_;
goto v___jp_3197_;
}
v___jp_3197_:
{
uint8_t v___x_3199_; 
v___x_3199_ = lean_nat_dec_lt(v_start_3192_, v___y_3198_);
if (v___x_3199_ == 0)
{
lean_dec(v___y_3198_);
lean_dec_ref(v___f_3196_);
lean_dec_ref(v_as_3190_);
return v___x_3199_;
}
else
{
size_t v___x_3200_; size_t v___x_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; 
v___x_3200_ = lean_usize_of_nat(v_start_3192_);
v___x_3201_ = lean_usize_of_nat(v___y_3198_);
lean_dec(v___y_3198_);
v___x_3202_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3194_, v___f_3196_, v_as_3190_, v___x_3200_, v___x_3201_);
v___x_3203_ = lean_unbox(v___x_3202_);
lean_dec(v___x_3202_);
return v___x_3203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object* v_00_u03b1_3206_, lean_object* v_as_3207_, lean_object* v_p_3208_, lean_object* v_start_3209_, lean_object* v_stop_3210_){
_start:
{
uint8_t v_res_3211_; lean_object* v_r_3212_; 
v_res_3211_ = l_Array_any(v_00_u03b1_3206_, v_as_3207_, v_p_3208_, v_start_3209_, v_stop_3210_);
lean_dec(v_start_3209_);
v_r_3212_ = lean_box(v_res_3211_);
return v_r_3212_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object* v_p_3213_, uint8_t v___x_3214_, lean_object* v_v_3215_){
_start:
{
lean_object* v___x_3216_; uint8_t v___x_3217_; 
v___x_3216_ = lean_apply_1(v_p_3213_, v_v_3215_);
v___x_3217_ = lean_unbox(v___x_3216_);
if (v___x_3217_ == 0)
{
return v___x_3214_;
}
else
{
uint8_t v___x_3218_; 
v___x_3218_ = 0;
return v___x_3218_;
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object* v_p_3219_, lean_object* v___x_3220_, lean_object* v_v_3221_){
_start:
{
uint8_t v___x_335__boxed_3222_; uint8_t v_res_3223_; lean_object* v_r_3224_; 
v___x_335__boxed_3222_ = lean_unbox(v___x_3220_);
v_res_3223_ = l_Array_all___redArg___lam__0(v_p_3219_, v___x_335__boxed_3222_, v_v_3221_);
v_r_3224_ = lean_box(v_res_3223_);
return v_r_3224_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object* v_as_3225_, lean_object* v_p_3226_, lean_object* v_start_3227_, lean_object* v_stop_3228_){
_start:
{
lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3229_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3230_ = lean_nat_dec_lt(v_start_3227_, v_stop_3228_);
if (v___x_3230_ == 0)
{
uint8_t v___x_3231_; 
lean_dec(v_stop_3228_);
lean_dec_ref(v_p_3226_);
lean_dec_ref(v_as_3225_);
v___x_3231_ = 1;
return v___x_3231_;
}
else
{
lean_object* v___x_3232_; lean_object* v___f_3233_; lean_object* v___y_3235_; lean_object* v___x_3242_; uint8_t v___x_3243_; 
v___x_3232_ = lean_box(v___x_3230_);
v___f_3233_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3233_, 0, v_p_3226_);
lean_closure_set(v___f_3233_, 1, v___x_3232_);
v___x_3242_ = lean_array_get_size(v_as_3225_);
v___x_3243_ = lean_nat_dec_le(v_stop_3228_, v___x_3242_);
if (v___x_3243_ == 0)
{
lean_dec(v_stop_3228_);
v___y_3235_ = v___x_3242_;
goto v___jp_3234_;
}
else
{
v___y_3235_ = v_stop_3228_;
goto v___jp_3234_;
}
v___jp_3234_:
{
uint8_t v___x_3236_; 
v___x_3236_ = lean_nat_dec_lt(v_start_3227_, v___y_3235_);
if (v___x_3236_ == 0)
{
lean_dec(v___y_3235_);
lean_dec_ref(v___f_3233_);
lean_dec_ref(v_as_3225_);
return v___x_3230_;
}
else
{
size_t v___x_3237_; size_t v___x_3238_; lean_object* v___x_3239_; uint8_t v___x_3240_; 
v___x_3237_ = lean_usize_of_nat(v_start_3227_);
v___x_3238_ = lean_usize_of_nat(v___y_3235_);
lean_dec(v___y_3235_);
v___x_3239_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3229_, v___f_3233_, v_as_3225_, v___x_3237_, v___x_3238_);
v___x_3240_ = lean_unbox(v___x_3239_);
lean_dec(v___x_3239_);
if (v___x_3240_ == 0)
{
return v___x_3236_;
}
else
{
uint8_t v___x_3241_; 
v___x_3241_ = 0;
return v___x_3241_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object* v_as_3244_, lean_object* v_p_3245_, lean_object* v_start_3246_, lean_object* v_stop_3247_){
_start:
{
uint8_t v_res_3248_; lean_object* v_r_3249_; 
v_res_3248_ = l_Array_all___redArg(v_as_3244_, v_p_3245_, v_start_3246_, v_stop_3247_);
lean_dec(v_start_3246_);
v_r_3249_ = lean_box(v_res_3248_);
return v_r_3249_;
}
}
LEAN_EXPORT uint8_t l_Array_all(lean_object* v_00_u03b1_3250_, lean_object* v_as_3251_, lean_object* v_p_3252_, lean_object* v_start_3253_, lean_object* v_stop_3254_){
_start:
{
lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3255_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3256_ = lean_nat_dec_lt(v_start_3253_, v_stop_3254_);
if (v___x_3256_ == 0)
{
uint8_t v___x_3257_; 
lean_dec(v_stop_3254_);
lean_dec_ref(v_p_3252_);
lean_dec_ref(v_as_3251_);
v___x_3257_ = 1;
return v___x_3257_;
}
else
{
lean_object* v___x_3258_; lean_object* v___f_3259_; lean_object* v___y_3261_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v___x_3258_ = lean_box(v___x_3256_);
v___f_3259_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3259_, 0, v_p_3252_);
lean_closure_set(v___f_3259_, 1, v___x_3258_);
v___x_3268_ = lean_array_get_size(v_as_3251_);
v___x_3269_ = lean_nat_dec_le(v_stop_3254_, v___x_3268_);
if (v___x_3269_ == 0)
{
lean_dec(v_stop_3254_);
v___y_3261_ = v___x_3268_;
goto v___jp_3260_;
}
else
{
v___y_3261_ = v_stop_3254_;
goto v___jp_3260_;
}
v___jp_3260_:
{
uint8_t v___x_3262_; 
v___x_3262_ = lean_nat_dec_lt(v_start_3253_, v___y_3261_);
if (v___x_3262_ == 0)
{
lean_dec(v___y_3261_);
lean_dec_ref(v___f_3259_);
lean_dec_ref(v_as_3251_);
return v___x_3256_;
}
else
{
size_t v___x_3263_; size_t v___x_3264_; lean_object* v___x_3265_; uint8_t v___x_3266_; 
v___x_3263_ = lean_usize_of_nat(v_start_3253_);
v___x_3264_ = lean_usize_of_nat(v___y_3261_);
lean_dec(v___y_3261_);
v___x_3265_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3255_, v___f_3259_, v_as_3251_, v___x_3263_, v___x_3264_);
v___x_3266_ = lean_unbox(v___x_3265_);
lean_dec(v___x_3265_);
if (v___x_3266_ == 0)
{
return v___x_3262_;
}
else
{
uint8_t v___x_3267_; 
v___x_3267_ = 0;
return v___x_3267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object* v_00_u03b1_3270_, lean_object* v_as_3271_, lean_object* v_p_3272_, lean_object* v_start_3273_, lean_object* v_stop_3274_){
_start:
{
uint8_t v_res_3275_; lean_object* v_r_3276_; 
v_res_3275_ = l_Array_all(v_00_u03b1_3270_, v_as_3271_, v_p_3272_, v_start_3273_, v_stop_3274_);
lean_dec(v_start_3273_);
v_r_3276_ = lean_box(v_res_3275_);
return v_r_3276_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object* v_inst_3277_, lean_object* v_a_3278_, lean_object* v_x_3279_){
_start:
{
lean_object* v___x_3280_; uint8_t v___x_3281_; 
v___x_3280_ = lean_apply_2(v_inst_3277_, v_a_3278_, v_x_3279_);
v___x_3281_ = lean_unbox(v___x_3280_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object* v_inst_3282_, lean_object* v_a_3283_, lean_object* v_x_3284_){
_start:
{
uint8_t v_res_3285_; lean_object* v_r_3286_; 
v_res_3285_ = l_Array_contains___redArg___lam__0(v_inst_3282_, v_a_3283_, v_x_3284_);
v_r_3286_ = lean_box(v_res_3285_);
return v_r_3286_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object* v_inst_3287_, lean_object* v_as_3288_, lean_object* v_a_3289_){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; uint8_t v___x_3293_; 
v___x_3290_ = lean_unsigned_to_nat(0u);
v___x_3291_ = lean_array_get_size(v_as_3288_);
v___x_3292_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3293_ = lean_nat_dec_lt(v___x_3290_, v___x_3291_);
if (v___x_3293_ == 0)
{
lean_dec(v_a_3289_);
lean_dec_ref(v_as_3288_);
lean_dec_ref(v_inst_3287_);
return v___x_3293_;
}
else
{
if (v___x_3293_ == 0)
{
lean_dec(v_a_3289_);
lean_dec_ref(v_as_3288_);
lean_dec_ref(v_inst_3287_);
return v___x_3293_;
}
else
{
lean_object* v___f_3294_; size_t v___x_3295_; size_t v___x_3296_; lean_object* v___x_3297_; uint8_t v___x_3298_; 
v___f_3294_ = lean_alloc_closure((void*)(l_Array_contains___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3294_, 0, v_inst_3287_);
lean_closure_set(v___f_3294_, 1, v_a_3289_);
v___x_3295_ = ((size_t)0ULL);
v___x_3296_ = lean_usize_of_nat(v___x_3291_);
v___x_3297_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3292_, v___f_3294_, v_as_3288_, v___x_3295_, v___x_3296_);
v___x_3298_ = lean_unbox(v___x_3297_);
lean_dec(v___x_3297_);
return v___x_3298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object* v_inst_3299_, lean_object* v_as_3300_, lean_object* v_a_3301_){
_start:
{
uint8_t v_res_3302_; lean_object* v_r_3303_; 
v_res_3302_ = l_Array_contains___redArg(v_inst_3299_, v_as_3300_, v_a_3301_);
v_r_3303_ = lean_box(v_res_3302_);
return v_r_3303_;
}
}
LEAN_EXPORT uint8_t l_Array_contains(lean_object* v_00_u03b1_3304_, lean_object* v_inst_3305_, lean_object* v_as_3306_, lean_object* v_a_3307_){
_start:
{
uint8_t v___x_3308_; 
v___x_3308_ = l_Array_contains___redArg(v_inst_3305_, v_as_3306_, v_a_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object* v_00_u03b1_3309_, lean_object* v_inst_3310_, lean_object* v_as_3311_, lean_object* v_a_3312_){
_start:
{
uint8_t v_res_3313_; lean_object* v_r_3314_; 
v_res_3313_ = l_Array_contains(v_00_u03b1_3309_, v_inst_3310_, v_as_3311_, v_a_3312_);
v_r_3314_ = lean_box(v_res_3313_);
return v_r_3314_;
}
}
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object* v_inst_3315_, lean_object* v_a_3316_, lean_object* v_as_3317_){
_start:
{
uint8_t v___x_3318_; 
v___x_3318_ = l_Array_contains___redArg(v_inst_3315_, v_as_3317_, v_a_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object* v_inst_3319_, lean_object* v_a_3320_, lean_object* v_as_3321_){
_start:
{
uint8_t v_res_3322_; lean_object* v_r_3323_; 
v_res_3322_ = l_Array_elem___redArg(v_inst_3319_, v_a_3320_, v_as_3321_);
v_r_3323_ = lean_box(v_res_3322_);
return v_r_3323_;
}
}
LEAN_EXPORT uint8_t l_Array_elem(lean_object* v_00_u03b1_3324_, lean_object* v_inst_3325_, lean_object* v_a_3326_, lean_object* v_as_3327_){
_start:
{
uint8_t v___x_3328_; 
v___x_3328_ = l_Array_contains___redArg(v_inst_3325_, v_as_3327_, v_a_3326_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object* v_00_u03b1_3329_, lean_object* v_inst_3330_, lean_object* v_a_3331_, lean_object* v_as_3332_){
_start:
{
uint8_t v_res_3333_; lean_object* v_r_3334_; 
v_res_3333_ = l_Array_elem(v_00_u03b1_3329_, v_inst_3330_, v_a_3331_, v_as_3332_);
v_r_3334_ = lean_box(v_res_3333_);
return v_r_3334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object* v_as_3335_, size_t v_i_3336_, size_t v_stop_3337_, lean_object* v_b_3338_){
_start:
{
uint8_t v___x_3339_; 
v___x_3339_ = lean_usize_dec_eq(v_i_3336_, v_stop_3337_);
if (v___x_3339_ == 0)
{
size_t v___x_3340_; size_t v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3340_ = ((size_t)1ULL);
v___x_3341_ = lean_usize_sub(v_i_3336_, v___x_3340_);
v___x_3342_ = lean_array_uget_borrowed(v_as_3335_, v___x_3341_);
lean_inc(v___x_3342_);
v___x_3343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v_b_3338_);
v_i_3336_ = v___x_3341_;
v_b_3338_ = v___x_3343_;
goto _start;
}
else
{
return v_b_3338_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object* v_as_3345_, lean_object* v_i_3346_, lean_object* v_stop_3347_, lean_object* v_b_3348_){
_start:
{
size_t v_i_boxed_3349_; size_t v_stop_boxed_3350_; lean_object* v_res_3351_; 
v_i_boxed_3349_ = lean_unbox_usize(v_i_3346_);
lean_dec(v_i_3346_);
v_stop_boxed_3350_ = lean_unbox_usize(v_stop_3347_);
lean_dec(v_stop_3347_);
v_res_3351_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3345_, v_i_boxed_3349_, v_stop_boxed_3350_, v_b_3348_);
lean_dec_ref(v_as_3345_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object* v_as_3352_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; uint8_t v___x_3356_; 
v___x_3353_ = lean_box(0);
v___x_3354_ = lean_array_get_size(v_as_3352_);
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = lean_nat_dec_lt(v___x_3355_, v___x_3354_);
if (v___x_3356_ == 0)
{
return v___x_3353_;
}
else
{
size_t v___x_3357_; size_t v___x_3358_; lean_object* v___x_3359_; 
v___x_3357_ = lean_usize_of_nat(v___x_3354_);
v___x_3358_ = ((size_t)0ULL);
v___x_3359_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3352_, v___x_3357_, v___x_3358_, v___x_3353_);
return v___x_3359_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object* v_as_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l_Array_toListImpl___redArg(v_as_3360_);
lean_dec_ref(v_as_3360_);
return v_res_3361_;
}
}
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object* v_00_u03b1_3362_, lean_object* v_as_3363_){
_start:
{
lean_object* v___x_3364_; 
v___x_3364_ = l_Array_toListImpl___redArg(v_as_3363_);
lean_dec_ref(v_as_3363_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object* v_00_u03b1_3365_, lean_object* v_as_3366_, size_t v_i_3367_, size_t v_stop_3368_, lean_object* v_b_3369_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3366_, v_i_3367_, v_stop_3368_, v_b_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object* v_00_u03b1_3371_, lean_object* v_as_3372_, lean_object* v_i_3373_, lean_object* v_stop_3374_, lean_object* v_b_3375_){
_start:
{
size_t v_i_boxed_3376_; size_t v_stop_boxed_3377_; lean_object* v_res_3378_; 
v_i_boxed_3376_ = lean_unbox_usize(v_i_3373_);
lean_dec(v_i_3373_);
v_stop_boxed_3377_ = lean_unbox_usize(v_stop_3374_);
lean_dec(v_stop_3374_);
v_res_3378_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(v_00_u03b1_3371_, v_as_3372_, v_i_boxed_3376_, v_stop_boxed_3377_, v_b_3375_);
lean_dec_ref(v_as_3372_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object* v_x1_3379_, lean_object* v_x2_3380_){
_start:
{
lean_object* v___x_3381_; 
v___x_3381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3381_, 0, v_x1_3379_);
lean_ctor_set(v___x_3381_, 1, v_x2_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object* v_as_3383_, lean_object* v_l_3384_){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; uint8_t v___x_3388_; 
v___x_3385_ = lean_array_get_size(v_as_3383_);
v___x_3386_ = lean_unsigned_to_nat(0u);
v___x_3387_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3388_ = lean_nat_dec_lt(v___x_3386_, v___x_3385_);
if (v___x_3388_ == 0)
{
lean_dec_ref(v_as_3383_);
return v_l_3384_;
}
else
{
lean_object* v___f_3389_; size_t v___x_3390_; size_t v___x_3391_; lean_object* v___x_3392_; 
v___f_3389_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3390_ = lean_usize_of_nat(v___x_3385_);
v___x_3391_ = ((size_t)0ULL);
v___x_3392_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3387_, v___f_3389_, v_as_3383_, v___x_3390_, v___x_3391_, v_l_3384_);
return v___x_3392_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object* v_00_u03b1_3393_, lean_object* v_as_3394_, lean_object* v_l_3395_){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; uint8_t v___x_3399_; 
v___x_3396_ = lean_array_get_size(v_as_3394_);
v___x_3397_ = lean_unsigned_to_nat(0u);
v___x_3398_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3399_ = lean_nat_dec_lt(v___x_3397_, v___x_3396_);
if (v___x_3399_ == 0)
{
lean_dec_ref(v_as_3394_);
return v_l_3395_;
}
else
{
lean_object* v___f_3400_; size_t v___x_3401_; size_t v___x_3402_; lean_object* v___x_3403_; 
v___f_3400_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3401_ = lean_usize_of_nat(v___x_3396_);
v___x_3402_ = ((size_t)0ULL);
v___x_3403_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3398_, v___f_3400_, v_as_3394_, v___x_3401_, v___x_3402_, v_l_3395_);
return v___x_3403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object* v_as_3404_, size_t v_i_3405_, size_t v_stop_3406_, lean_object* v_b_3407_){
_start:
{
uint8_t v___x_3408_; 
v___x_3408_ = lean_usize_dec_eq(v_i_3405_, v_stop_3406_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; size_t v___x_3411_; size_t v___x_3412_; 
v___x_3409_ = lean_array_uget_borrowed(v_as_3404_, v_i_3405_);
lean_inc(v___x_3409_);
v___x_3410_ = lean_array_push(v_b_3407_, v___x_3409_);
v___x_3411_ = ((size_t)1ULL);
v___x_3412_ = lean_usize_add(v_i_3405_, v___x_3411_);
v_i_3405_ = v___x_3412_;
v_b_3407_ = v___x_3410_;
goto _start;
}
else
{
return v_b_3407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object* v_as_3414_, lean_object* v_i_3415_, lean_object* v_stop_3416_, lean_object* v_b_3417_){
_start:
{
size_t v_i_boxed_3418_; size_t v_stop_boxed_3419_; lean_object* v_res_3420_; 
v_i_boxed_3418_ = lean_unbox_usize(v_i_3415_);
lean_dec(v_i_3415_);
v_stop_boxed_3419_ = lean_unbox_usize(v_stop_3416_);
lean_dec(v_stop_3416_);
v_res_3420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3414_, v_i_boxed_3418_, v_stop_boxed_3419_, v_b_3417_);
lean_dec_ref(v_as_3414_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object* v_as_3421_, lean_object* v_bs_3422_){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; 
v___x_3423_ = lean_unsigned_to_nat(0u);
v___x_3424_ = lean_array_get_size(v_bs_3422_);
v___x_3425_ = lean_nat_dec_lt(v___x_3423_, v___x_3424_);
if (v___x_3425_ == 0)
{
return v_as_3421_;
}
else
{
size_t v___x_3426_; size_t v___x_3427_; lean_object* v___x_3428_; 
v___x_3426_ = ((size_t)0ULL);
v___x_3427_ = lean_usize_of_nat(v___x_3424_);
v___x_3428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_bs_3422_, v___x_3426_, v___x_3427_, v_as_3421_);
return v___x_3428_;
}
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object* v_as_3429_, lean_object* v_bs_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Array_append___redArg(v_as_3429_, v_bs_3430_);
lean_dec_ref(v_bs_3430_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Array_append(lean_object* v_00_u03b1_3432_, lean_object* v_as_3433_, lean_object* v_bs_3434_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l_Array_append___redArg(v_as_3433_, v_bs_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object* v_00_u03b1_3436_, lean_object* v_as_3437_, lean_object* v_bs_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Array_append(v_00_u03b1_3436_, v_as_3437_, v_bs_3438_);
lean_dec_ref(v_bs_3438_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object* v_00_u03b1_3440_, lean_object* v_as_3441_, size_t v_i_3442_, size_t v_stop_3443_, lean_object* v_b_3444_){
_start:
{
lean_object* v___x_3445_; 
v___x_3445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3441_, v_i_3442_, v_stop_3443_, v_b_3444_);
return v___x_3445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object* v_00_u03b1_3446_, lean_object* v_as_3447_, lean_object* v_i_3448_, lean_object* v_stop_3449_, lean_object* v_b_3450_){
_start:
{
size_t v_i_boxed_3451_; size_t v_stop_boxed_3452_; lean_object* v_res_3453_; 
v_i_boxed_3451_ = lean_unbox_usize(v_i_3448_);
lean_dec(v_i_3448_);
v_stop_boxed_3452_ = lean_unbox_usize(v_stop_3449_);
lean_dec(v_stop_3449_);
v_res_3453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(v_00_u03b1_3446_, v_as_3447_, v_i_boxed_3451_, v_stop_boxed_3452_, v_b_3450_);
lean_dec_ref(v_as_3447_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg(){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object* v___dummy_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Array_instAppend___redArg();
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object* v_00_u03b1_3459_){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object* v_x_3461_, lean_object* v_x_3462_){
_start:
{
if (lean_obj_tag(v_x_3462_) == 0)
{
return v_x_3461_;
}
else
{
lean_object* v_head_3463_; lean_object* v_tail_3464_; lean_object* v___x_3465_; 
v_head_3463_ = lean_ctor_get(v_x_3462_, 0);
lean_inc(v_head_3463_);
v_tail_3464_ = lean_ctor_get(v_x_3462_, 1);
lean_inc(v_tail_3464_);
lean_dec_ref_known(v_x_3462_, 2);
v___x_3465_ = lean_array_push(v_x_3461_, v_head_3463_);
v_x_3461_ = v___x_3465_;
v_x_3462_ = v_tail_3464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object* v_as_3467_, lean_object* v_bs_3468_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3467_, v_bs_3468_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Array_appendList(lean_object* v_00_u03b1_3470_, lean_object* v_as_3471_, lean_object* v_bs_3472_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3471_, v_bs_3472_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object* v_00_u03b1_3474_, lean_object* v_x_3475_, lean_object* v_x_3476_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_3475_, v_x_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg(){
_start:
{
lean_object* v___x_3480_; 
v___x_3480_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object* v___dummy_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Array_instHAppendList___redArg();
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object* v_00_u03b1_3483_){
_start:
{
lean_object* v___x_3484_; 
v___x_3484_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3484_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object* v_bs_3485_, lean_object* v_toPure_3486_, lean_object* v_____do__lift_3487_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3488_ = l_Array_append___redArg(v_bs_3485_, v_____do__lift_3487_);
v___x_3489_ = lean_apply_2(v_toPure_3486_, lean_box(0), v___x_3488_);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object* v_bs_3490_, lean_object* v_toPure_3491_, lean_object* v_____do__lift_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Array_flatMapM___redArg___lam__0(v_bs_3490_, v_toPure_3491_, v_____do__lift_3492_);
lean_dec_ref(v_____do__lift_3492_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object* v_toPure_3494_, lean_object* v_f_3495_, lean_object* v_toBind_3496_, lean_object* v_bs_3497_, lean_object* v_a_3498_){
_start:
{
lean_object* v___f_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___f_3499_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3499_, 0, v_bs_3497_);
lean_closure_set(v___f_3499_, 1, v_toPure_3494_);
v___x_3500_ = lean_apply_1(v_f_3495_, v_a_3498_);
v___x_3501_ = lean_apply_4(v_toBind_3496_, lean_box(0), lean_box(0), v___x_3500_, v___f_3499_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object* v_inst_3502_, lean_object* v_f_3503_, lean_object* v_as_3504_){
_start:
{
lean_object* v_toApplicative_3505_; lean_object* v_toBind_3506_; lean_object* v_toPure_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v_toApplicative_3505_ = lean_ctor_get(v_inst_3502_, 0);
v_toBind_3506_ = lean_ctor_get(v_inst_3502_, 1);
v_toPure_3507_ = lean_ctor_get(v_toApplicative_3505_, 1);
v___x_3508_ = lean_unsigned_to_nat(0u);
v___x_3509_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3510_ = lean_array_get_size(v_as_3504_);
v___x_3511_ = lean_nat_dec_lt(v___x_3508_, v___x_3510_);
if (v___x_3511_ == 0)
{
lean_object* v___x_3512_; 
lean_inc(v_toPure_3507_);
lean_dec_ref(v_as_3504_);
lean_dec(v_f_3503_);
lean_dec_ref(v_inst_3502_);
v___x_3512_ = lean_apply_2(v_toPure_3507_, lean_box(0), v___x_3509_);
return v___x_3512_;
}
else
{
lean_object* v___f_3513_; size_t v___x_3514_; size_t v___x_3515_; lean_object* v___x_3516_; 
lean_inc(v_toBind_3506_);
lean_inc(v_toPure_3507_);
v___f_3513_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3513_, 0, v_toPure_3507_);
lean_closure_set(v___f_3513_, 1, v_f_3503_);
lean_closure_set(v___f_3513_, 2, v_toBind_3506_);
v___x_3514_ = ((size_t)0ULL);
v___x_3515_ = lean_usize_of_nat(v___x_3510_);
v___x_3516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3502_, v___f_3513_, v_as_3504_, v___x_3514_, v___x_3515_, v___x_3509_);
return v___x_3516_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object* v_00_u03b1_3517_, lean_object* v_m_3518_, lean_object* v_00_u03b2_3519_, lean_object* v_inst_3520_, lean_object* v_f_3521_, lean_object* v_as_3522_){
_start:
{
lean_object* v_toApplicative_3523_; lean_object* v_toBind_3524_; lean_object* v_toPure_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; 
v_toApplicative_3523_ = lean_ctor_get(v_inst_3520_, 0);
v_toBind_3524_ = lean_ctor_get(v_inst_3520_, 1);
v_toPure_3525_ = lean_ctor_get(v_toApplicative_3523_, 1);
v___x_3526_ = lean_unsigned_to_nat(0u);
v___x_3527_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3528_ = lean_array_get_size(v_as_3522_);
v___x_3529_ = lean_nat_dec_lt(v___x_3526_, v___x_3528_);
if (v___x_3529_ == 0)
{
lean_object* v___x_3530_; 
lean_inc(v_toPure_3525_);
lean_dec_ref(v_as_3522_);
lean_dec(v_f_3521_);
lean_dec_ref(v_inst_3520_);
v___x_3530_ = lean_apply_2(v_toPure_3525_, lean_box(0), v___x_3527_);
return v___x_3530_;
}
else
{
lean_object* v___f_3531_; size_t v___x_3532_; size_t v___x_3533_; lean_object* v___x_3534_; 
lean_inc(v_toBind_3524_);
lean_inc(v_toPure_3525_);
v___f_3531_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3531_, 0, v_toPure_3525_);
lean_closure_set(v___f_3531_, 1, v_f_3521_);
lean_closure_set(v___f_3531_, 2, v_toBind_3524_);
v___x_3532_ = ((size_t)0ULL);
v___x_3533_ = lean_usize_of_nat(v___x_3528_);
v___x_3534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3520_, v___f_3531_, v_as_3522_, v___x_3532_, v___x_3533_, v___x_3527_);
return v___x_3534_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object* v_f_3535_, lean_object* v_x1_3536_, lean_object* v_x2_3537_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = lean_apply_1(v_f_3535_, v_x2_3537_);
v___x_3539_ = l_Array_append___redArg(v_x1_3536_, v___x_3538_);
lean_dec_ref(v___x_3538_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object* v_f_3540_, lean_object* v_as_3541_){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint8_t v___x_3546_; 
v___x_3542_ = lean_unsigned_to_nat(0u);
v___x_3543_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3544_ = lean_array_get_size(v_as_3541_);
v___x_3545_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3546_ = lean_nat_dec_lt(v___x_3542_, v___x_3544_);
if (v___x_3546_ == 0)
{
lean_dec_ref(v_as_3541_);
lean_dec_ref(v_f_3540_);
return v___x_3543_;
}
else
{
lean_object* v___f_3547_; size_t v___x_3548_; size_t v___x_3549_; lean_object* v___x_3550_; 
v___f_3547_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3547_, 0, v_f_3540_);
v___x_3548_ = ((size_t)0ULL);
v___x_3549_ = lean_usize_of_nat(v___x_3544_);
v___x_3550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3545_, v___f_3547_, v_as_3541_, v___x_3548_, v___x_3549_, v___x_3543_);
return v___x_3550_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object* v_00_u03b1_3551_, lean_object* v_00_u03b2_3552_, lean_object* v_f_3553_, lean_object* v_as_3554_){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; 
v___x_3555_ = lean_unsigned_to_nat(0u);
v___x_3556_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3557_ = lean_array_get_size(v_as_3554_);
v___x_3558_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3559_ = lean_nat_dec_lt(v___x_3555_, v___x_3557_);
if (v___x_3559_ == 0)
{
lean_dec_ref(v_as_3554_);
lean_dec_ref(v_f_3553_);
return v___x_3556_;
}
else
{
lean_object* v___f_3560_; size_t v___x_3561_; size_t v___x_3562_; lean_object* v___x_3563_; 
v___f_3560_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3560_, 0, v_f_3553_);
v___x_3561_ = ((size_t)0ULL);
v___x_3562_ = lean_usize_of_nat(v___x_3557_);
v___x_3563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3558_, v___f_3560_, v_as_3554_, v___x_3561_, v___x_3562_, v___x_3556_);
return v___x_3563_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object* v_xss_3565_){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; uint8_t v___x_3570_; 
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3568_ = lean_array_get_size(v_xss_3565_);
v___x_3569_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3570_ = lean_nat_dec_lt(v___x_3566_, v___x_3568_);
if (v___x_3570_ == 0)
{
lean_dec_ref(v_xss_3565_);
return v___x_3567_;
}
else
{
lean_object* v___f_3571_; size_t v___x_3572_; size_t v___x_3573_; lean_object* v___x_3574_; 
v___f_3571_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3572_ = ((size_t)0ULL);
v___x_3573_ = lean_usize_of_nat(v___x_3568_);
v___x_3574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3569_, v___f_3571_, v_xss_3565_, v___x_3572_, v___x_3573_, v___x_3567_);
return v___x_3574_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten(lean_object* v_00_u03b1_3575_, lean_object* v_xss_3576_){
_start:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; uint8_t v___x_3581_; 
v___x_3577_ = lean_unsigned_to_nat(0u);
v___x_3578_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3579_ = lean_array_get_size(v_xss_3576_);
v___x_3580_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3581_ = lean_nat_dec_lt(v___x_3577_, v___x_3579_);
if (v___x_3581_ == 0)
{
lean_dec_ref(v_xss_3576_);
return v___x_3578_;
}
else
{
lean_object* v___f_3582_; size_t v___x_3583_; size_t v___x_3584_; lean_object* v___x_3585_; 
v___f_3582_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3583_ = ((size_t)0ULL);
v___x_3584_ = lean_usize_of_nat(v___x_3579_);
v___x_3585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3580_, v___f_3582_, v_xss_3576_, v___x_3583_, v___x_3584_, v___x_3578_);
return v___x_3585_;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object* v_as_3586_, lean_object* v_i_3587_, lean_object* v_j_3588_){
_start:
{
uint8_t v___x_3589_; 
v___x_3589_ = lean_nat_dec_lt(v_i_3587_, v_j_3588_);
if (v___x_3589_ == 0)
{
lean_dec(v_j_3588_);
lean_dec(v_i_3587_);
return v_as_3586_;
}
else
{
lean_object* v_as_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v_as_3590_ = lean_array_fswap(v_as_3586_, v_i_3587_, v_j_3588_);
v___x_3591_ = lean_unsigned_to_nat(1u);
v___x_3592_ = lean_nat_add(v_i_3587_, v___x_3591_);
lean_dec(v_i_3587_);
v___x_3593_ = lean_nat_sub(v_j_3588_, v___x_3591_);
lean_dec(v_j_3588_);
v_as_3586_ = v_as_3590_;
v_i_3587_ = v___x_3592_;
v_j_3588_ = v___x_3593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object* v_00_u03b1_3595_, lean_object* v_as_3596_, lean_object* v_i_3597_, lean_object* v_j_3598_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_Array_reverse_loop___redArg(v_as_3596_, v_i_3597_, v_j_3598_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object* v_as_3600_){
_start:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; uint8_t v___x_3603_; 
v___x_3601_ = lean_array_get_size(v_as_3600_);
v___x_3602_ = lean_unsigned_to_nat(1u);
v___x_3603_ = lean_nat_dec_le(v___x_3601_, v___x_3602_);
if (v___x_3603_ == 0)
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3604_ = lean_unsigned_to_nat(0u);
v___x_3605_ = lean_nat_sub(v___x_3601_, v___x_3602_);
v___x_3606_ = l_Array_reverse_loop___redArg(v_as_3600_, v___x_3604_, v___x_3605_);
return v___x_3606_;
}
else
{
return v_as_3600_;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse(lean_object* v_00_u03b1_3607_, lean_object* v_as_3608_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_Array_reverse___redArg(v_as_3608_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object* v_p_3610_, lean_object* v_x1_3611_, lean_object* v_x2_3612_){
_start:
{
lean_object* v___x_3613_; uint8_t v___x_3614_; 
lean_inc(v_x2_3612_);
v___x_3613_ = lean_apply_1(v_p_3610_, v_x2_3612_);
v___x_3614_ = lean_unbox(v___x_3613_);
if (v___x_3614_ == 0)
{
lean_dec(v_x2_3612_);
return v_x1_3611_;
}
else
{
lean_object* v___x_3615_; 
v___x_3615_ = lean_array_push(v_x1_3611_, v_x2_3612_);
return v___x_3615_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object* v_p_3618_, lean_object* v_as_3619_, lean_object* v_start_3620_, lean_object* v_stop_3621_){
_start:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; uint8_t v___x_3624_; 
v___x_3622_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3623_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3624_ = lean_nat_dec_lt(v_start_3620_, v_stop_3621_);
if (v___x_3624_ == 0)
{
lean_dec_ref(v_as_3619_);
lean_dec_ref(v_p_3618_);
return v___x_3622_;
}
else
{
lean_object* v___f_3625_; lean_object* v___x_3626_; uint8_t v___x_3627_; 
v___f_3625_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3625_, 0, v_p_3618_);
v___x_3626_ = lean_array_get_size(v_as_3619_);
v___x_3627_ = lean_nat_dec_le(v_stop_3621_, v___x_3626_);
if (v___x_3627_ == 0)
{
uint8_t v___x_3628_; 
v___x_3628_ = lean_nat_dec_lt(v_start_3620_, v___x_3626_);
if (v___x_3628_ == 0)
{
lean_dec_ref(v___f_3625_);
lean_dec_ref(v_as_3619_);
return v___x_3622_;
}
else
{
size_t v___x_3629_; size_t v___x_3630_; lean_object* v___x_3631_; 
v___x_3629_ = lean_usize_of_nat(v_start_3620_);
v___x_3630_ = lean_usize_of_nat(v___x_3626_);
v___x_3631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3623_, v___f_3625_, v_as_3619_, v___x_3629_, v___x_3630_, v___x_3622_);
return v___x_3631_;
}
}
else
{
size_t v___x_3632_; size_t v___x_3633_; lean_object* v___x_3634_; 
v___x_3632_ = lean_usize_of_nat(v_start_3620_);
v___x_3633_ = lean_usize_of_nat(v_stop_3621_);
v___x_3634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3623_, v___f_3625_, v_as_3619_, v___x_3632_, v___x_3633_, v___x_3622_);
return v___x_3634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object* v_p_3635_, lean_object* v_as_3636_, lean_object* v_start_3637_, lean_object* v_stop_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Array_filter___redArg(v_p_3635_, v_as_3636_, v_start_3637_, v_stop_3638_);
lean_dec(v_stop_3638_);
lean_dec(v_start_3637_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Array_filter(lean_object* v_00_u03b1_3640_, lean_object* v_p_3641_, lean_object* v_as_3642_, lean_object* v_start_3643_, lean_object* v_stop_3644_){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; 
v___x_3645_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3646_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3647_ = lean_nat_dec_lt(v_start_3643_, v_stop_3644_);
if (v___x_3647_ == 0)
{
lean_dec_ref(v_as_3642_);
lean_dec_ref(v_p_3641_);
return v___x_3645_;
}
else
{
lean_object* v___f_3648_; lean_object* v___x_3649_; uint8_t v___x_3650_; 
v___f_3648_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3648_, 0, v_p_3641_);
v___x_3649_ = lean_array_get_size(v_as_3642_);
v___x_3650_ = lean_nat_dec_le(v_stop_3644_, v___x_3649_);
if (v___x_3650_ == 0)
{
uint8_t v___x_3651_; 
v___x_3651_ = lean_nat_dec_lt(v_start_3643_, v___x_3649_);
if (v___x_3651_ == 0)
{
lean_dec_ref(v___f_3648_);
lean_dec_ref(v_as_3642_);
return v___x_3645_;
}
else
{
size_t v___x_3652_; size_t v___x_3653_; lean_object* v___x_3654_; 
v___x_3652_ = lean_usize_of_nat(v_start_3643_);
v___x_3653_ = lean_usize_of_nat(v___x_3649_);
v___x_3654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3646_, v___f_3648_, v_as_3642_, v___x_3652_, v___x_3653_, v___x_3645_);
return v___x_3654_;
}
}
else
{
size_t v___x_3655_; size_t v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = lean_usize_of_nat(v_start_3643_);
v___x_3656_ = lean_usize_of_nat(v_stop_3644_);
v___x_3657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3646_, v___f_3648_, v_as_3642_, v___x_3655_, v___x_3656_, v___x_3645_);
return v___x_3657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object* v_00_u03b1_3658_, lean_object* v_p_3659_, lean_object* v_as_3660_, lean_object* v_start_3661_, lean_object* v_stop_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Array_filter(v_00_u03b1_3658_, v_p_3659_, v_as_3660_, v_start_3661_, v_stop_3662_);
lean_dec(v_stop_3662_);
lean_dec(v_start_3661_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object* v_toPure_3664_, lean_object* v_acc_3665_, lean_object* v_a_3666_, uint8_t v_____do__lift_3667_){
_start:
{
if (v_____do__lift_3667_ == 0)
{
lean_object* v___x_3668_; 
lean_dec(v_a_3666_);
v___x_3668_ = lean_apply_2(v_toPure_3664_, lean_box(0), v_acc_3665_);
return v___x_3668_;
}
else
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3669_ = lean_array_push(v_acc_3665_, v_a_3666_);
v___x_3670_ = lean_apply_2(v_toPure_3664_, lean_box(0), v___x_3669_);
return v___x_3670_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object* v_toPure_3671_, lean_object* v_acc_3672_, lean_object* v_a_3673_, lean_object* v_____do__lift_3674_){
_start:
{
uint8_t v_____do__lift_99__boxed_3675_; lean_object* v_res_3676_; 
v_____do__lift_99__boxed_3675_ = lean_unbox(v_____do__lift_3674_);
v_res_3676_ = l_Array_filterM___redArg___lam__0(v_toPure_3671_, v_acc_3672_, v_a_3673_, v_____do__lift_99__boxed_3675_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object* v_toPure_3677_, lean_object* v_p_3678_, lean_object* v_toBind_3679_, lean_object* v_acc_3680_, lean_object* v_a_3681_){
_start:
{
lean_object* v___f_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
lean_inc(v_a_3681_);
v___f_3682_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3682_, 0, v_toPure_3677_);
lean_closure_set(v___f_3682_, 1, v_acc_3680_);
lean_closure_set(v___f_3682_, 2, v_a_3681_);
v___x_3683_ = lean_apply_1(v_p_3678_, v_a_3681_);
v___x_3684_ = lean_apply_4(v_toBind_3679_, lean_box(0), lean_box(0), v___x_3683_, v___f_3682_);
return v___x_3684_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object* v_inst_3685_, lean_object* v_p_3686_, lean_object* v_as_3687_, lean_object* v_start_3688_, lean_object* v_stop_3689_){
_start:
{
lean_object* v_toApplicative_3690_; lean_object* v_toBind_3691_; lean_object* v_toPure_3692_; lean_object* v___x_3693_; uint8_t v___x_3694_; 
v_toApplicative_3690_ = lean_ctor_get(v_inst_3685_, 0);
v_toBind_3691_ = lean_ctor_get(v_inst_3685_, 1);
v_toPure_3692_ = lean_ctor_get(v_toApplicative_3690_, 1);
v___x_3693_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3694_ = lean_nat_dec_lt(v_start_3688_, v_stop_3689_);
if (v___x_3694_ == 0)
{
lean_object* v___x_3695_; 
lean_inc(v_toPure_3692_);
lean_dec_ref(v_as_3687_);
lean_dec(v_p_3686_);
lean_dec_ref(v_inst_3685_);
v___x_3695_ = lean_apply_2(v_toPure_3692_, lean_box(0), v___x_3693_);
return v___x_3695_;
}
else
{
lean_object* v___f_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; 
lean_inc(v_toBind_3691_);
lean_inc(v_toPure_3692_);
v___f_3696_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3696_, 0, v_toPure_3692_);
lean_closure_set(v___f_3696_, 1, v_p_3686_);
lean_closure_set(v___f_3696_, 2, v_toBind_3691_);
v___x_3697_ = lean_array_get_size(v_as_3687_);
v___x_3698_ = lean_nat_dec_le(v_stop_3689_, v___x_3697_);
if (v___x_3698_ == 0)
{
uint8_t v___x_3699_; 
v___x_3699_ = lean_nat_dec_lt(v_start_3688_, v___x_3697_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; 
lean_inc(v_toPure_3692_);
lean_dec_ref(v___f_3696_);
lean_dec_ref(v_as_3687_);
lean_dec_ref(v_inst_3685_);
v___x_3700_ = lean_apply_2(v_toPure_3692_, lean_box(0), v___x_3693_);
return v___x_3700_;
}
else
{
size_t v___x_3701_; size_t v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = lean_usize_of_nat(v_start_3688_);
v___x_3702_ = lean_usize_of_nat(v___x_3697_);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3685_, v___f_3696_, v_as_3687_, v___x_3701_, v___x_3702_, v___x_3693_);
return v___x_3703_;
}
}
else
{
size_t v___x_3704_; size_t v___x_3705_; lean_object* v___x_3706_; 
v___x_3704_ = lean_usize_of_nat(v_start_3688_);
v___x_3705_ = lean_usize_of_nat(v_stop_3689_);
v___x_3706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3685_, v___f_3696_, v_as_3687_, v___x_3704_, v___x_3705_, v___x_3693_);
return v___x_3706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object* v_inst_3707_, lean_object* v_p_3708_, lean_object* v_as_3709_, lean_object* v_start_3710_, lean_object* v_stop_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Array_filterM___redArg(v_inst_3707_, v_p_3708_, v_as_3709_, v_start_3710_, v_stop_3711_);
lean_dec(v_stop_3711_);
lean_dec(v_start_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM(lean_object* v_m_3713_, lean_object* v_00_u03b1_3714_, lean_object* v_inst_3715_, lean_object* v_p_3716_, lean_object* v_as_3717_, lean_object* v_start_3718_, lean_object* v_stop_3719_){
_start:
{
lean_object* v_toApplicative_3720_; lean_object* v_toBind_3721_; lean_object* v_toPure_3722_; lean_object* v___x_3723_; uint8_t v___x_3724_; 
v_toApplicative_3720_ = lean_ctor_get(v_inst_3715_, 0);
v_toBind_3721_ = lean_ctor_get(v_inst_3715_, 1);
v_toPure_3722_ = lean_ctor_get(v_toApplicative_3720_, 1);
v___x_3723_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3724_ = lean_nat_dec_lt(v_start_3718_, v_stop_3719_);
if (v___x_3724_ == 0)
{
lean_object* v___x_3725_; 
lean_inc(v_toPure_3722_);
lean_dec_ref(v_as_3717_);
lean_dec(v_p_3716_);
lean_dec_ref(v_inst_3715_);
v___x_3725_ = lean_apply_2(v_toPure_3722_, lean_box(0), v___x_3723_);
return v___x_3725_;
}
else
{
lean_object* v___f_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; 
lean_inc(v_toBind_3721_);
lean_inc(v_toPure_3722_);
v___f_3726_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3726_, 0, v_toPure_3722_);
lean_closure_set(v___f_3726_, 1, v_p_3716_);
lean_closure_set(v___f_3726_, 2, v_toBind_3721_);
v___x_3727_ = lean_array_get_size(v_as_3717_);
v___x_3728_ = lean_nat_dec_le(v_stop_3719_, v___x_3727_);
if (v___x_3728_ == 0)
{
uint8_t v___x_3729_; 
v___x_3729_ = lean_nat_dec_lt(v_start_3718_, v___x_3727_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; 
lean_inc(v_toPure_3722_);
lean_dec_ref(v___f_3726_);
lean_dec_ref(v_as_3717_);
lean_dec_ref(v_inst_3715_);
v___x_3730_ = lean_apply_2(v_toPure_3722_, lean_box(0), v___x_3723_);
return v___x_3730_;
}
else
{
size_t v___x_3731_; size_t v___x_3732_; lean_object* v___x_3733_; 
v___x_3731_ = lean_usize_of_nat(v_start_3718_);
v___x_3732_ = lean_usize_of_nat(v___x_3727_);
v___x_3733_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3715_, v___f_3726_, v_as_3717_, v___x_3731_, v___x_3732_, v___x_3723_);
return v___x_3733_;
}
}
else
{
size_t v___x_3734_; size_t v___x_3735_; lean_object* v___x_3736_; 
v___x_3734_ = lean_usize_of_nat(v_start_3718_);
v___x_3735_ = lean_usize_of_nat(v_stop_3719_);
v___x_3736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3715_, v___f_3726_, v_as_3717_, v___x_3734_, v___x_3735_, v___x_3723_);
return v___x_3736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object* v_m_3737_, lean_object* v_00_u03b1_3738_, lean_object* v_inst_3739_, lean_object* v_p_3740_, lean_object* v_as_3741_, lean_object* v_start_3742_, lean_object* v_stop_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_Array_filterM(v_m_3737_, v_00_u03b1_3738_, v_inst_3739_, v_p_3740_, v_as_3741_, v_start_3742_, v_stop_3743_);
lean_dec(v_stop_3743_);
lean_dec(v_start_3742_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object* v_toPure_3745_, lean_object* v_p_3746_, lean_object* v_toBind_3747_, lean_object* v_a_3748_, lean_object* v_acc_3749_){
_start:
{
lean_object* v___f_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
lean_inc(v_a_3748_);
v___f_3750_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3750_, 0, v_toPure_3745_);
lean_closure_set(v___f_3750_, 1, v_acc_3749_);
lean_closure_set(v___f_3750_, 2, v_a_3748_);
v___x_3751_ = lean_apply_1(v_p_3746_, v_a_3748_);
v___x_3752_ = lean_apply_4(v_toBind_3747_, lean_box(0), lean_box(0), v___x_3751_, v___f_3750_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object* v_inst_3754_, lean_object* v_p_3755_, lean_object* v_as_3756_, lean_object* v_start_3757_, lean_object* v_stop_3758_){
_start:
{
lean_object* v_toApplicative_3759_; lean_object* v_toFunctor_3760_; lean_object* v_toBind_3761_; lean_object* v_toPure_3762_; lean_object* v_map_3763_; lean_object* v___f_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; 
v_toApplicative_3759_ = lean_ctor_get(v_inst_3754_, 0);
v_toFunctor_3760_ = lean_ctor_get(v_toApplicative_3759_, 0);
v_toBind_3761_ = lean_ctor_get(v_inst_3754_, 1);
v_toPure_3762_ = lean_ctor_get(v_toApplicative_3759_, 1);
v_map_3763_ = lean_ctor_get(v_toFunctor_3760_, 0);
lean_inc(v_map_3763_);
lean_inc(v_toBind_3761_);
lean_inc(v_toPure_3762_);
v___f_3764_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3764_, 0, v_toPure_3762_);
lean_closure_set(v___f_3764_, 1, v_p_3755_);
lean_closure_set(v___f_3764_, 2, v_toBind_3761_);
v___x_3765_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3766_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3767_ = lean_array_get_size(v_as_3756_);
v___x_3768_ = lean_nat_dec_le(v_start_3757_, v___x_3767_);
if (v___x_3768_ == 0)
{
uint8_t v___x_3769_; 
v___x_3769_ = lean_nat_dec_lt(v_stop_3758_, v___x_3767_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; lean_object* v___x_3771_; 
lean_inc(v_toPure_3762_);
lean_dec_ref(v___f_3764_);
lean_dec_ref(v_as_3756_);
lean_dec_ref(v_inst_3754_);
v___x_3770_ = lean_apply_2(v_toPure_3762_, lean_box(0), v___x_3766_);
v___x_3771_ = lean_apply_4(v_map_3763_, lean_box(0), lean_box(0), v___x_3765_, v___x_3770_);
return v___x_3771_;
}
else
{
size_t v___x_3772_; size_t v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3772_ = lean_usize_of_nat(v___x_3767_);
v___x_3773_ = lean_usize_of_nat(v_stop_3758_);
v___x_3774_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3754_, v___f_3764_, v_as_3756_, v___x_3772_, v___x_3773_, v___x_3766_);
v___x_3775_ = lean_apply_4(v_map_3763_, lean_box(0), lean_box(0), v___x_3765_, v___x_3774_);
return v___x_3775_;
}
}
else
{
uint8_t v___x_3776_; 
v___x_3776_ = lean_nat_dec_lt(v_stop_3758_, v_start_3757_);
if (v___x_3776_ == 0)
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
lean_inc(v_toPure_3762_);
lean_dec_ref(v___f_3764_);
lean_dec_ref(v_as_3756_);
lean_dec_ref(v_inst_3754_);
v___x_3777_ = lean_apply_2(v_toPure_3762_, lean_box(0), v___x_3766_);
v___x_3778_ = lean_apply_4(v_map_3763_, lean_box(0), lean_box(0), v___x_3765_, v___x_3777_);
return v___x_3778_;
}
else
{
size_t v___x_3779_; size_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3779_ = lean_usize_of_nat(v_start_3757_);
v___x_3780_ = lean_usize_of_nat(v_stop_3758_);
v___x_3781_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3754_, v___f_3764_, v_as_3756_, v___x_3779_, v___x_3780_, v___x_3766_);
v___x_3782_ = lean_apply_4(v_map_3763_, lean_box(0), lean_box(0), v___x_3765_, v___x_3781_);
return v___x_3782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object* v_inst_3783_, lean_object* v_p_3784_, lean_object* v_as_3785_, lean_object* v_start_3786_, lean_object* v_stop_3787_){
_start:
{
lean_object* v_res_3788_; 
v_res_3788_ = l_Array_filterRevM___redArg(v_inst_3783_, v_p_3784_, v_as_3785_, v_start_3786_, v_stop_3787_);
lean_dec(v_stop_3787_);
lean_dec(v_start_3786_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object* v_m_3789_, lean_object* v_00_u03b1_3790_, lean_object* v_inst_3791_, lean_object* v_p_3792_, lean_object* v_as_3793_, lean_object* v_start_3794_, lean_object* v_stop_3795_){
_start:
{
lean_object* v_toApplicative_3796_; lean_object* v_toFunctor_3797_; lean_object* v_toBind_3798_; lean_object* v_toPure_3799_; lean_object* v_map_3800_; lean_object* v___f_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; uint8_t v___x_3805_; 
v_toApplicative_3796_ = lean_ctor_get(v_inst_3791_, 0);
v_toFunctor_3797_ = lean_ctor_get(v_toApplicative_3796_, 0);
v_toBind_3798_ = lean_ctor_get(v_inst_3791_, 1);
v_toPure_3799_ = lean_ctor_get(v_toApplicative_3796_, 1);
v_map_3800_ = lean_ctor_get(v_toFunctor_3797_, 0);
lean_inc(v_map_3800_);
lean_inc(v_toBind_3798_);
lean_inc(v_toPure_3799_);
v___f_3801_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3801_, 0, v_toPure_3799_);
lean_closure_set(v___f_3801_, 1, v_p_3792_);
lean_closure_set(v___f_3801_, 2, v_toBind_3798_);
v___x_3802_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3803_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3804_ = lean_array_get_size(v_as_3793_);
v___x_3805_ = lean_nat_dec_le(v_start_3794_, v___x_3804_);
if (v___x_3805_ == 0)
{
uint8_t v___x_3806_; 
v___x_3806_ = lean_nat_dec_lt(v_stop_3795_, v___x_3804_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; lean_object* v___x_3808_; 
lean_inc(v_toPure_3799_);
lean_dec_ref(v___f_3801_);
lean_dec_ref(v_as_3793_);
lean_dec_ref(v_inst_3791_);
v___x_3807_ = lean_apply_2(v_toPure_3799_, lean_box(0), v___x_3803_);
v___x_3808_ = lean_apply_4(v_map_3800_, lean_box(0), lean_box(0), v___x_3802_, v___x_3807_);
return v___x_3808_;
}
else
{
size_t v___x_3809_; size_t v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3809_ = lean_usize_of_nat(v___x_3804_);
v___x_3810_ = lean_usize_of_nat(v_stop_3795_);
v___x_3811_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3791_, v___f_3801_, v_as_3793_, v___x_3809_, v___x_3810_, v___x_3803_);
v___x_3812_ = lean_apply_4(v_map_3800_, lean_box(0), lean_box(0), v___x_3802_, v___x_3811_);
return v___x_3812_;
}
}
else
{
uint8_t v___x_3813_; 
v___x_3813_ = lean_nat_dec_lt(v_stop_3795_, v_start_3794_);
if (v___x_3813_ == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
lean_inc(v_toPure_3799_);
lean_dec_ref(v___f_3801_);
lean_dec_ref(v_as_3793_);
lean_dec_ref(v_inst_3791_);
v___x_3814_ = lean_apply_2(v_toPure_3799_, lean_box(0), v___x_3803_);
v___x_3815_ = lean_apply_4(v_map_3800_, lean_box(0), lean_box(0), v___x_3802_, v___x_3814_);
return v___x_3815_;
}
else
{
size_t v___x_3816_; size_t v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3816_ = lean_usize_of_nat(v_start_3794_);
v___x_3817_ = lean_usize_of_nat(v_stop_3795_);
v___x_3818_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3791_, v___f_3801_, v_as_3793_, v___x_3816_, v___x_3817_, v___x_3803_);
v___x_3819_ = lean_apply_4(v_map_3800_, lean_box(0), lean_box(0), v___x_3802_, v___x_3818_);
return v___x_3819_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object* v_m_3820_, lean_object* v_00_u03b1_3821_, lean_object* v_inst_3822_, lean_object* v_p_3823_, lean_object* v_as_3824_, lean_object* v_start_3825_, lean_object* v_stop_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l_Array_filterRevM(v_m_3820_, v_00_u03b1_3821_, v_inst_3822_, v_p_3823_, v_as_3824_, v_start_3825_, v_stop_3826_);
lean_dec(v_stop_3826_);
lean_dec(v_start_3825_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object* v_toPure_3828_, lean_object* v_bs_3829_, lean_object* v_____do__lift_3830_){
_start:
{
if (lean_obj_tag(v_____do__lift_3830_) == 0)
{
lean_object* v___x_3831_; 
v___x_3831_ = lean_apply_2(v_toPure_3828_, lean_box(0), v_bs_3829_);
return v___x_3831_;
}
else
{
lean_object* v_val_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v_val_3832_ = lean_ctor_get(v_____do__lift_3830_, 0);
lean_inc(v_val_3832_);
lean_dec_ref_known(v_____do__lift_3830_, 1);
v___x_3833_ = lean_array_push(v_bs_3829_, v_val_3832_);
v___x_3834_ = lean_apply_2(v_toPure_3828_, lean_box(0), v___x_3833_);
return v___x_3834_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object* v_toPure_3835_, lean_object* v_f_3836_, lean_object* v_toBind_3837_, lean_object* v_bs_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v___f_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v___f_3840_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3840_, 0, v_toPure_3835_);
lean_closure_set(v___f_3840_, 1, v_bs_3838_);
v___x_3841_ = lean_apply_1(v_f_3836_, v_a_3839_);
v___x_3842_ = lean_apply_4(v_toBind_3837_, lean_box(0), lean_box(0), v___x_3841_, v___f_3840_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object* v_inst_3843_, lean_object* v_f_3844_, lean_object* v_as_3845_, lean_object* v_start_3846_, lean_object* v_stop_3847_){
_start:
{
lean_object* v_toApplicative_3848_; lean_object* v_toBind_3849_; lean_object* v_toPure_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; 
v_toApplicative_3848_ = lean_ctor_get(v_inst_3843_, 0);
v_toBind_3849_ = lean_ctor_get(v_inst_3843_, 1);
v_toPure_3850_ = lean_ctor_get(v_toApplicative_3848_, 1);
v___x_3851_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3852_ = lean_nat_dec_lt(v_start_3846_, v_stop_3847_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; 
lean_inc(v_toPure_3850_);
lean_dec_ref(v_as_3845_);
lean_dec(v_f_3844_);
lean_dec_ref(v_inst_3843_);
v___x_3853_ = lean_apply_2(v_toPure_3850_, lean_box(0), v___x_3851_);
return v___x_3853_;
}
else
{
lean_object* v___f_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; 
lean_inc(v_toBind_3849_);
lean_inc(v_toPure_3850_);
v___f_3854_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3854_, 0, v_toPure_3850_);
lean_closure_set(v___f_3854_, 1, v_f_3844_);
lean_closure_set(v___f_3854_, 2, v_toBind_3849_);
v___x_3855_ = lean_array_get_size(v_as_3845_);
v___x_3856_ = lean_nat_dec_le(v_stop_3847_, v___x_3855_);
if (v___x_3856_ == 0)
{
uint8_t v___x_3857_; 
v___x_3857_ = lean_nat_dec_lt(v_start_3846_, v___x_3855_);
if (v___x_3857_ == 0)
{
lean_object* v___x_3858_; 
lean_inc(v_toPure_3850_);
lean_dec_ref(v___f_3854_);
lean_dec_ref(v_as_3845_);
lean_dec_ref(v_inst_3843_);
v___x_3858_ = lean_apply_2(v_toPure_3850_, lean_box(0), v___x_3851_);
return v___x_3858_;
}
else
{
size_t v___x_3859_; size_t v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = lean_usize_of_nat(v_start_3846_);
v___x_3860_ = lean_usize_of_nat(v___x_3855_);
v___x_3861_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3843_, v___f_3854_, v_as_3845_, v___x_3859_, v___x_3860_, v___x_3851_);
return v___x_3861_;
}
}
else
{
size_t v___x_3862_; size_t v___x_3863_; lean_object* v___x_3864_; 
v___x_3862_ = lean_usize_of_nat(v_start_3846_);
v___x_3863_ = lean_usize_of_nat(v_stop_3847_);
v___x_3864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3843_, v___f_3854_, v_as_3845_, v___x_3862_, v___x_3863_, v___x_3851_);
return v___x_3864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object* v_inst_3865_, lean_object* v_f_3866_, lean_object* v_as_3867_, lean_object* v_start_3868_, lean_object* v_stop_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l_Array_filterMapM___redArg(v_inst_3865_, v_f_3866_, v_as_3867_, v_start_3868_, v_stop_3869_);
lean_dec(v_stop_3869_);
lean_dec(v_start_3868_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object* v_00_u03b1_3871_, lean_object* v_m_3872_, lean_object* v_00_u03b2_3873_, lean_object* v_inst_3874_, lean_object* v_f_3875_, lean_object* v_as_3876_, lean_object* v_start_3877_, lean_object* v_stop_3878_){
_start:
{
lean_object* v___x_3879_; 
v___x_3879_ = l_Array_filterMapM___redArg(v_inst_3874_, v_f_3875_, v_as_3876_, v_start_3877_, v_stop_3878_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object* v_00_u03b1_3880_, lean_object* v_m_3881_, lean_object* v_00_u03b2_3882_, lean_object* v_inst_3883_, lean_object* v_f_3884_, lean_object* v_as_3885_, lean_object* v_start_3886_, lean_object* v_stop_3887_){
_start:
{
lean_object* v_res_3888_; 
v_res_3888_ = l_Array_filterMapM(v_00_u03b1_3880_, v_m_3881_, v_00_u03b2_3882_, v_inst_3883_, v_f_3884_, v_as_3885_, v_start_3886_, v_stop_3887_);
lean_dec(v_stop_3887_);
lean_dec(v_start_3886_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object* v_f_3889_, lean_object* v_as_3890_, lean_object* v_start_3891_, lean_object* v_stop_3892_){
_start:
{
lean_object* v___f_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___f_3893_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3893_, 0, v_f_3889_);
v___x_3894_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3895_ = l_Array_filterMapM___redArg(v___x_3894_, v___f_3893_, v_as_3890_, v_start_3891_, v_stop_3892_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object* v_f_3896_, lean_object* v_as_3897_, lean_object* v_start_3898_, lean_object* v_stop_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Array_filterMap___redArg(v_f_3896_, v_as_3897_, v_start_3898_, v_stop_3899_);
lean_dec(v_stop_3899_);
lean_dec(v_start_3898_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object* v_00_u03b1_3901_, lean_object* v_00_u03b2_3902_, lean_object* v_f_3903_, lean_object* v_as_3904_, lean_object* v_start_3905_, lean_object* v_stop_3906_){
_start:
{
lean_object* v___f_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___f_3907_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3907_, 0, v_f_3903_);
v___x_3908_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3909_ = l_Array_filterMapM___redArg(v___x_3908_, v___f_3907_, v_as_3904_, v_start_3905_, v_stop_3906_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object* v_00_u03b1_3910_, lean_object* v_00_u03b2_3911_, lean_object* v_f_3912_, lean_object* v_as_3913_, lean_object* v_start_3914_, lean_object* v_stop_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Array_filterMap(v_00_u03b1_3910_, v_00_u03b2_3911_, v_f_3912_, v_as_3913_, v_start_3914_, v_stop_3915_);
lean_dec(v_stop_3915_);
lean_dec(v_start_3914_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object* v_lt_3917_, lean_object* v_x1_3918_, lean_object* v_x2_3919_){
_start:
{
lean_object* v___x_3920_; uint8_t v___x_3921_; 
lean_inc(v_x2_3919_);
lean_inc(v_x1_3918_);
v___x_3920_ = lean_apply_2(v_lt_3917_, v_x1_3918_, v_x2_3919_);
v___x_3921_ = lean_unbox(v___x_3920_);
if (v___x_3921_ == 0)
{
lean_dec(v_x2_3919_);
return v_x1_3918_;
}
else
{
lean_dec(v_x1_3918_);
return v_x2_3919_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object* v_as_3922_, lean_object* v_lt_3923_){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; 
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = lean_array_get_size(v_as_3922_);
v___x_3926_ = lean_nat_dec_lt(v___x_3924_, v___x_3925_);
if (v___x_3926_ == 0)
{
lean_object* v___x_3927_; 
lean_dec_ref(v_lt_3923_);
lean_dec_ref(v_as_3922_);
v___x_3927_ = lean_box(0);
return v___x_3927_;
}
else
{
lean_object* v_a0_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; uint8_t v___x_3931_; 
v_a0_3928_ = lean_array_fget(v_as_3922_, v___x_3924_);
v___x_3929_ = lean_unsigned_to_nat(1u);
v___x_3930_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3931_ = lean_nat_dec_lt(v___x_3929_, v___x_3925_);
if (v___x_3931_ == 0)
{
lean_object* v___x_3932_; 
lean_dec_ref(v_lt_3923_);
lean_dec_ref(v_as_3922_);
v___x_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3932_, 0, v_a0_3928_);
return v___x_3932_;
}
else
{
lean_object* v___f_3933_; size_t v___x_3934_; size_t v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___f_3933_ = lean_alloc_closure((void*)(l_Array_getMax_x3f___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3933_, 0, v_lt_3923_);
v___x_3934_ = ((size_t)1ULL);
v___x_3935_ = lean_usize_of_nat(v___x_3925_);
v___x_3936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3930_, v___f_3933_, v_as_3922_, v___x_3934_, v___x_3935_, v_a0_3928_);
v___x_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
return v___x_3937_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object* v_00_u03b1_3938_, lean_object* v_as_3939_, lean_object* v_lt_3940_){
_start:
{
lean_object* v___x_3941_; 
v___x_3941_ = l_Array_getMax_x3f___redArg(v_as_3939_, v_lt_3940_);
return v___x_3941_;
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object* v_p_3942_, lean_object* v_a_3943_, lean_object* v_x_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_fst_3946_; lean_object* v_snd_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3963_; 
v_fst_3946_ = lean_ctor_get(v___y_3945_, 0);
v_snd_3947_ = lean_ctor_get(v___y_3945_, 1);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___y_3945_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3949_ = v___y_3945_;
v_isShared_3950_ = v_isSharedCheck_3963_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_snd_3947_);
lean_inc(v_fst_3946_);
lean_dec(v___y_3945_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3963_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3951_; uint8_t v___x_3952_; 
lean_inc(v_a_3943_);
v___x_3951_ = lean_apply_1(v_p_3942_, v_a_3943_);
v___x_3952_ = lean_unbox(v___x_3951_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; lean_object* v___x_3955_; 
v___x_3953_ = lean_array_push(v_snd_3947_, v_a_3943_);
if (v_isShared_3950_ == 0)
{
lean_ctor_set(v___x_3949_, 1, v___x_3953_);
v___x_3955_ = v___x_3949_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_fst_3946_);
lean_ctor_set(v_reuseFailAlloc_3957_, 1, v___x_3953_);
v___x_3955_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
lean_object* v___x_3956_; 
v___x_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3955_);
return v___x_3956_;
}
}
else
{
lean_object* v___x_3958_; lean_object* v___x_3960_; 
v___x_3958_ = lean_array_push(v_fst_3946_, v_a_3943_);
if (v_isShared_3950_ == 0)
{
lean_ctor_set(v___x_3949_, 0, v___x_3958_);
v___x_3960_ = v___x_3949_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v___x_3958_);
lean_ctor_set(v_reuseFailAlloc_3962_, 1, v_snd_3947_);
v___x_3960_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
lean_object* v___x_3961_; 
v___x_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3960_);
return v___x_3961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object* v_p_3966_, lean_object* v_as_3967_){
_start:
{
lean_object* v___f_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; size_t v_sz_3971_; size_t v___x_3972_; lean_object* v___x_3973_; lean_object* v_fst_3974_; lean_object* v_snd_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
v___f_3968_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3968_, 0, v_p_3966_);
v___x_3969_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3970_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_3971_ = lean_array_size(v_as_3967_);
v___x_3972_ = ((size_t)0ULL);
v___x_3973_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_3969_, v_as_3967_, v___f_3968_, v_sz_3971_, v___x_3972_, v___x_3970_);
v_fst_3974_ = lean_ctor_get(v___x_3973_, 0);
v_snd_3975_ = lean_ctor_get(v___x_3973_, 1);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3973_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3973_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_snd_3975_);
lean_inc(v_fst_3974_);
lean_dec(v___x_3973_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_fst_3974_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v_snd_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition(lean_object* v_00_u03b1_3983_, lean_object* v_p_3984_, lean_object* v_as_3985_){
_start:
{
lean_object* v___f_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; size_t v_sz_3989_; size_t v___x_3990_; lean_object* v___x_3991_; lean_object* v_fst_3992_; lean_object* v_snd_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
v___f_3986_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3986_, 0, v_p_3984_);
v___x_3987_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3988_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_3989_ = lean_array_size(v_as_3985_);
v___x_3990_ = ((size_t)0ULL);
v___x_3991_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_3987_, v_as_3985_, v___f_3986_, v_sz_3989_, v___x_3990_, v___x_3988_);
v_fst_3992_ = lean_ctor_get(v___x_3991_, 0);
v_snd_3993_ = lean_ctor_get(v___x_3991_, 1);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3991_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_snd_3993_);
lean_inc(v_fst_3992_);
lean_dec(v___x_3991_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_fst_3992_);
lean_ctor_set(v_reuseFailAlloc_3999_, 1, v_snd_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object* v_p_4001_, lean_object* v_as_4002_){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; uint8_t v___x_4005_; 
v___x_4003_ = lean_unsigned_to_nat(0u);
v___x_4004_ = lean_array_get_size(v_as_4002_);
v___x_4005_ = lean_nat_dec_lt(v___x_4003_, v___x_4004_);
if (v___x_4005_ == 0)
{
lean_dec_ref(v_p_4001_);
return v_as_4002_;
}
else
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; 
v___x_4006_ = lean_unsigned_to_nat(1u);
v___x_4007_ = lean_nat_sub(v___x_4004_, v___x_4006_);
v___x_4008_ = lean_array_fget_borrowed(v_as_4002_, v___x_4007_);
lean_dec(v___x_4007_);
lean_inc_ref(v_p_4001_);
lean_inc(v___x_4008_);
v___x_4009_ = lean_apply_1(v_p_4001_, v___x_4008_);
v___x_4010_ = lean_unbox(v___x_4009_);
if (v___x_4010_ == 0)
{
lean_dec_ref(v_p_4001_);
return v_as_4002_;
}
else
{
lean_object* v___x_4011_; 
v___x_4011_ = lean_array_pop(v_as_4002_);
v_as_4002_ = v___x_4011_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object* v_00_u03b1_4013_, lean_object* v_p_4014_, lean_object* v_as_4015_){
_start:
{
lean_object* v___x_4016_; 
v___x_4016_ = l_Array_popWhile___redArg(v_p_4014_, v_as_4015_);
return v___x_4016_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object* v_p_4017_, lean_object* v_as_4018_, lean_object* v_i_4019_, lean_object* v_acc_4020_){
_start:
{
lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4021_ = lean_array_get_size(v_as_4018_);
v___x_4022_ = lean_nat_dec_lt(v_i_4019_, v___x_4021_);
if (v___x_4022_ == 0)
{
lean_dec(v_i_4019_);
lean_dec_ref(v_p_4017_);
return v_acc_4020_;
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4024_; uint8_t v___x_4025_; 
v_a_4023_ = lean_array_fget_borrowed(v_as_4018_, v_i_4019_);
lean_inc_ref(v_p_4017_);
lean_inc(v_a_4023_);
v___x_4024_ = lean_apply_1(v_p_4017_, v_a_4023_);
v___x_4025_ = lean_unbox(v___x_4024_);
if (v___x_4025_ == 0)
{
lean_dec(v_i_4019_);
lean_dec_ref(v_p_4017_);
return v_acc_4020_;
}
else
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4026_ = lean_unsigned_to_nat(1u);
v___x_4027_ = lean_nat_add(v_i_4019_, v___x_4026_);
lean_dec(v_i_4019_);
lean_inc(v_a_4023_);
v___x_4028_ = lean_array_push(v_acc_4020_, v_a_4023_);
v_i_4019_ = v___x_4027_;
v_acc_4020_ = v___x_4028_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object* v_p_4030_, lean_object* v_as_4031_, lean_object* v_i_4032_, lean_object* v_acc_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4030_, v_as_4031_, v_i_4032_, v_acc_4033_);
lean_dec_ref(v_as_4031_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object* v_00_u03b1_4035_, lean_object* v_p_4036_, lean_object* v_as_4037_, lean_object* v_i_4038_, lean_object* v_acc_4039_){
_start:
{
lean_object* v___x_4040_; 
v___x_4040_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4036_, v_as_4037_, v_i_4038_, v_acc_4039_);
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object* v_00_u03b1_4041_, lean_object* v_p_4042_, lean_object* v_as_4043_, lean_object* v_i_4044_, lean_object* v_acc_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(v_00_u03b1_4041_, v_p_4042_, v_as_4043_, v_i_4044_, v_acc_4045_);
lean_dec_ref(v_as_4043_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object* v_p_4047_, lean_object* v_as_4048_){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; 
v___x_4049_ = lean_unsigned_to_nat(0u);
v___x_4050_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4051_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4047_, v_as_4048_, v___x_4049_, v___x_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object* v_p_4052_, lean_object* v_as_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = l_Array_takeWhile___redArg(v_p_4052_, v_as_4053_);
lean_dec_ref(v_as_4053_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object* v_00_u03b1_4055_, lean_object* v_p_4056_, lean_object* v_as_4057_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = l_Array_takeWhile___redArg(v_p_4056_, v_as_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object* v_00_u03b1_4059_, lean_object* v_p_4060_, lean_object* v_as_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Array_takeWhile(v_00_u03b1_4059_, v_p_4060_, v_as_4061_);
lean_dec_ref(v_as_4061_);
return v_res_4062_;
}
}
static lean_object* _init_l_Array_eraseIdx___auto__1(void){
_start:
{
lean_object* v___x_4063_; 
v___x_4063_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4063_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object* v_xs_4064_, lean_object* v_i_4065_){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; uint8_t v___x_4069_; 
v___x_4066_ = lean_unsigned_to_nat(1u);
v___x_4067_ = lean_nat_add(v_i_4065_, v___x_4066_);
v___x_4068_ = lean_array_get_size(v_xs_4064_);
v___x_4069_ = lean_nat_dec_lt(v___x_4067_, v___x_4068_);
if (v___x_4069_ == 0)
{
lean_object* v___x_4070_; 
lean_dec(v___x_4067_);
lean_dec(v_i_4065_);
v___x_4070_ = lean_array_pop(v_xs_4064_);
return v___x_4070_;
}
else
{
lean_object* v_xs_x27_4071_; 
v_xs_x27_4071_ = lean_array_fswap(v_xs_4064_, v___x_4067_, v_i_4065_);
lean_dec(v_i_4065_);
v_xs_4064_ = v_xs_x27_4071_;
v_i_4065_ = v___x_4067_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object* v_00_u03b1_4073_, lean_object* v_xs_4074_, lean_object* v_i_4075_, lean_object* v_h_4076_){
_start:
{
lean_object* v___x_4077_; 
v___x_4077_ = l_Array_eraseIdx___redArg(v_xs_4074_, v_i_4075_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object* v_xs_4078_, lean_object* v_i_4079_){
_start:
{
lean_object* v___x_4080_; uint8_t v___x_4081_; 
v___x_4080_ = lean_array_get_size(v_xs_4078_);
v___x_4081_ = lean_nat_dec_lt(v_i_4079_, v___x_4080_);
if (v___x_4081_ == 0)
{
lean_dec(v_i_4079_);
return v_xs_4078_;
}
else
{
lean_object* v___x_4082_; 
v___x_4082_ = l_Array_eraseIdx___redArg(v_xs_4078_, v_i_4079_);
return v___x_4082_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object* v_00_u03b1_4083_, lean_object* v_xs_4084_, lean_object* v_i_4085_){
_start:
{
lean_object* v___x_4086_; 
v___x_4086_ = l_Array_eraseIdxIfInBounds___redArg(v_xs_4084_, v_i_4085_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object* v_msg_4087_){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
v___x_4089_ = lean_panic_fn_borrowed(v___x_4088_, v_msg_4087_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object* v_00_u03b1_4090_, lean_object* v_msg_4091_){
_start:
{
lean_object* v___x_4092_; 
v___x_4092_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v_msg_4091_);
return v___x_4092_;
}
}
static lean_object* _init_l_Array_eraseIdx_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4095_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4096_ = lean_unsigned_to_nat(74u);
v___x_4097_ = lean_unsigned_to_nat(1885u);
v___x_4098_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__0));
v___x_4099_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4100_ = l_mkPanicMessageWithDecl(v___x_4099_, v___x_4098_, v___x_4097_, v___x_4096_, v___x_4095_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object* v_xs_4101_, lean_object* v_i_4102_){
_start:
{
lean_object* v___x_4103_; uint8_t v___x_4104_; 
v___x_4103_ = lean_array_get_size(v_xs_4101_);
v___x_4104_ = lean_nat_dec_lt(v_i_4102_, v___x_4103_);
if (v___x_4104_ == 0)
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
lean_dec(v_i_4102_);
lean_dec_ref(v_xs_4101_);
v___x_4105_ = lean_obj_once(&l_Array_eraseIdx_x21___redArg___closed__2, &l_Array_eraseIdx_x21___redArg___closed__2_once, _init_l_Array_eraseIdx_x21___redArg___closed__2);
v___x_4106_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4105_);
return v___x_4106_;
}
else
{
lean_object* v___x_4107_; 
v___x_4107_ = l_Array_eraseIdx___redArg(v_xs_4101_, v_i_4102_);
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object* v_00_u03b1_4108_, lean_object* v_xs_4109_, lean_object* v_i_4110_){
_start:
{
lean_object* v___x_4111_; 
v___x_4111_ = l_Array_eraseIdx_x21___redArg(v_xs_4109_, v_i_4110_);
return v___x_4111_;
}
}
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object* v_inst_4112_, lean_object* v_as_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v___x_4115_; 
v___x_4115_ = l_Array_finIdxOf_x3f___redArg(v_inst_4112_, v_as_4113_, v_a_4114_);
if (lean_obj_tag(v___x_4115_) == 0)
{
return v_as_4113_;
}
else
{
lean_object* v_val_4116_; lean_object* v___x_4117_; 
v_val_4116_ = lean_ctor_get(v___x_4115_, 0);
lean_inc(v_val_4116_);
lean_dec_ref_known(v___x_4115_, 1);
v___x_4117_ = l_Array_eraseIdx___redArg(v_as_4113_, v_val_4116_);
return v___x_4117_;
}
}
}
LEAN_EXPORT lean_object* l_Array_erase(lean_object* v_00_u03b1_4118_, lean_object* v_inst_4119_, lean_object* v_as_4120_, lean_object* v_a_4121_){
_start:
{
lean_object* v___x_4122_; 
v___x_4122_ = l_Array_erase___redArg(v_inst_4119_, v_as_4120_, v_a_4121_);
return v___x_4122_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object* v_as_4123_, lean_object* v_p_4124_){
_start:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4125_ = lean_unsigned_to_nat(0u);
v___x_4126_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_4124_, v_as_4123_, v___x_4125_);
if (lean_obj_tag(v___x_4126_) == 0)
{
return v_as_4123_;
}
else
{
lean_object* v_val_4127_; lean_object* v___x_4128_; 
v_val_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_val_4127_);
lean_dec_ref_known(v___x_4126_, 1);
v___x_4128_ = l_Array_eraseIdx___redArg(v_as_4123_, v_val_4127_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object* v_00_u03b1_4129_, lean_object* v_as_4130_, lean_object* v_p_4131_){
_start:
{
lean_object* v___x_4132_; 
v___x_4132_ = l_Array_eraseP___redArg(v_as_4130_, v_p_4131_);
return v___x_4132_;
}
}
static lean_object* _init_l_Array_insertIdx___auto__1(void){
_start:
{
lean_object* v___x_4133_; 
v___x_4133_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object* v_i_4134_, lean_object* v_as_4135_, lean_object* v_j_4136_){
_start:
{
uint8_t v___x_4137_; 
v___x_4137_ = lean_nat_dec_lt(v_i_4134_, v_j_4136_);
if (v___x_4137_ == 0)
{
lean_dec(v_j_4136_);
return v_as_4135_;
}
else
{
lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v_as_4140_; 
v___x_4138_ = lean_unsigned_to_nat(1u);
v___x_4139_ = lean_nat_sub(v_j_4136_, v___x_4138_);
v_as_4140_ = lean_array_fswap(v_as_4135_, v___x_4139_, v_j_4136_);
lean_dec(v_j_4136_);
v_as_4135_ = v_as_4140_;
v_j_4136_ = v___x_4139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object* v_i_4142_, lean_object* v_as_4143_, lean_object* v_j_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4142_, v_as_4143_, v_j_4144_);
lean_dec(v_i_4142_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object* v_00_u03b1_4146_, lean_object* v_i_4147_, lean_object* v_as_4148_, lean_object* v_j_4149_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4147_, v_as_4148_, v_j_4149_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object* v_00_u03b1_4151_, lean_object* v_i_4152_, lean_object* v_as_4153_, lean_object* v_j_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(v_00_u03b1_4151_, v_i_4152_, v_as_4153_, v_j_4154_);
lean_dec(v_i_4152_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object* v_as_4156_, lean_object* v_i_4157_, lean_object* v_a_4158_){
_start:
{
lean_object* v_j_4159_; lean_object* v_as_4160_; lean_object* v___x_4161_; 
v_j_4159_ = lean_array_get_size(v_as_4156_);
v_as_4160_ = lean_array_push(v_as_4156_, v_a_4158_);
v___x_4161_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4157_, v_as_4160_, v_j_4159_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object* v_as_4162_, lean_object* v_i_4163_, lean_object* v_a_4164_){
_start:
{
lean_object* v_res_4165_; 
v_res_4165_ = l_Array_insertIdx___redArg(v_as_4162_, v_i_4163_, v_a_4164_);
lean_dec(v_i_4163_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object* v_00_u03b1_4166_, lean_object* v_as_4167_, lean_object* v_i_4168_, lean_object* v_a_4169_, lean_object* v_x_4170_){
_start:
{
lean_object* v_j_4171_; lean_object* v_as_4172_; lean_object* v___x_4173_; 
v_j_4171_ = lean_array_get_size(v_as_4167_);
v_as_4172_ = lean_array_push(v_as_4167_, v_a_4169_);
v___x_4173_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4168_, v_as_4172_, v_j_4171_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object* v_00_u03b1_4174_, lean_object* v_as_4175_, lean_object* v_i_4176_, lean_object* v_a_4177_, lean_object* v_x_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_Array_insertIdx(v_00_u03b1_4174_, v_as_4175_, v_i_4176_, v_a_4177_, v_x_4178_);
lean_dec(v_i_4176_);
return v_res_4179_;
}
}
static lean_object* _init_l_Array_insertIdx_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4181_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4182_ = lean_unsigned_to_nat(7u);
v___x_4183_ = lean_unsigned_to_nat(1968u);
v___x_4184_ = ((lean_object*)(l_Array_insertIdx_x21___redArg___closed__0));
v___x_4185_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4186_ = l_mkPanicMessageWithDecl(v___x_4185_, v___x_4184_, v___x_4183_, v___x_4182_, v___x_4181_);
return v___x_4186_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object* v_as_4187_, lean_object* v_i_4188_, lean_object* v_a_4189_){
_start:
{
lean_object* v___x_4190_; uint8_t v___x_4191_; 
v___x_4190_ = lean_array_get_size(v_as_4187_);
v___x_4191_ = lean_nat_dec_le(v_i_4188_, v___x_4190_);
if (v___x_4191_ == 0)
{
lean_object* v___x_4192_; lean_object* v___x_4193_; 
lean_dec(v_a_4189_);
lean_dec_ref(v_as_4187_);
v___x_4192_ = lean_obj_once(&l_Array_insertIdx_x21___redArg___closed__1, &l_Array_insertIdx_x21___redArg___closed__1_once, _init_l_Array_insertIdx_x21___redArg___closed__1);
v___x_4193_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4192_);
return v___x_4193_;
}
else
{
lean_object* v_as_4194_; lean_object* v___x_4195_; 
v_as_4194_ = lean_array_push(v_as_4187_, v_a_4189_);
v___x_4195_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4188_, v_as_4194_, v___x_4190_);
return v___x_4195_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object* v_as_4196_, lean_object* v_i_4197_, lean_object* v_a_4198_){
_start:
{
lean_object* v_res_4199_; 
v_res_4199_ = l_Array_insertIdx_x21___redArg(v_as_4196_, v_i_4197_, v_a_4198_);
lean_dec(v_i_4197_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object* v_00_u03b1_4200_, lean_object* v_as_4201_, lean_object* v_i_4202_, lean_object* v_a_4203_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l_Array_insertIdx_x21___redArg(v_as_4201_, v_i_4202_, v_a_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object* v_00_u03b1_4205_, lean_object* v_as_4206_, lean_object* v_i_4207_, lean_object* v_a_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_Array_insertIdx_x21(v_00_u03b1_4205_, v_as_4206_, v_i_4207_, v_a_4208_);
lean_dec(v_i_4207_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object* v_as_4210_, lean_object* v_i_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v___x_4213_; uint8_t v___x_4214_; 
v___x_4213_ = lean_array_get_size(v_as_4210_);
v___x_4214_ = lean_nat_dec_le(v_i_4211_, v___x_4213_);
if (v___x_4214_ == 0)
{
lean_dec(v_a_4212_);
return v_as_4210_;
}
else
{
lean_object* v_as_4215_; lean_object* v___x_4216_; 
v_as_4215_ = lean_array_push(v_as_4210_, v_a_4212_);
v___x_4216_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4211_, v_as_4215_, v___x_4213_);
return v___x_4216_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object* v_as_4217_, lean_object* v_i_4218_, lean_object* v_a_4219_){
_start:
{
lean_object* v_res_4220_; 
v_res_4220_ = l_Array_insertIdxIfInBounds___redArg(v_as_4217_, v_i_4218_, v_a_4219_);
lean_dec(v_i_4218_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object* v_00_u03b1_4221_, lean_object* v_as_4222_, lean_object* v_i_4223_, lean_object* v_a_4224_){
_start:
{
lean_object* v___x_4225_; 
v___x_4225_ = l_Array_insertIdxIfInBounds___redArg(v_as_4222_, v_i_4223_, v_a_4224_);
return v___x_4225_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object* v_00_u03b1_4226_, lean_object* v_as_4227_, lean_object* v_i_4228_, lean_object* v_a_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l_Array_insertIdxIfInBounds(v_00_u03b1_4226_, v_as_4227_, v_i_4228_, v_a_4229_);
lean_dec(v_i_4228_);
return v_res_4230_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object* v_inst_4231_, lean_object* v_as_4232_, lean_object* v_bs_4233_, lean_object* v_i_4234_){
_start:
{
lean_object* v___x_4235_; uint8_t v___x_4236_; 
v___x_4235_ = lean_array_get_size(v_as_4232_);
v___x_4236_ = lean_nat_dec_lt(v_i_4234_, v___x_4235_);
if (v___x_4236_ == 0)
{
uint8_t v___x_4237_; 
lean_dec(v_i_4234_);
lean_dec_ref(v_inst_4231_);
v___x_4237_ = 1;
return v___x_4237_;
}
else
{
lean_object* v_a_4238_; lean_object* v_b_4239_; lean_object* v___x_4240_; uint8_t v___x_4241_; 
v_a_4238_ = lean_array_fget_borrowed(v_as_4232_, v_i_4234_);
v_b_4239_ = lean_array_fget_borrowed(v_bs_4233_, v_i_4234_);
lean_inc_ref(v_inst_4231_);
lean_inc(v_b_4239_);
lean_inc(v_a_4238_);
v___x_4240_ = lean_apply_2(v_inst_4231_, v_a_4238_, v_b_4239_);
v___x_4241_ = lean_unbox(v___x_4240_);
if (v___x_4241_ == 0)
{
uint8_t v___x_4242_; 
lean_dec(v_i_4234_);
lean_dec_ref(v_inst_4231_);
v___x_4242_ = lean_unbox(v___x_4240_);
return v___x_4242_;
}
else
{
lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4243_ = lean_unsigned_to_nat(1u);
v___x_4244_ = lean_nat_add(v_i_4234_, v___x_4243_);
lean_dec(v_i_4234_);
v_i_4234_ = v___x_4244_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object* v_inst_4246_, lean_object* v_as_4247_, lean_object* v_bs_4248_, lean_object* v_i_4249_){
_start:
{
uint8_t v_res_4250_; lean_object* v_r_4251_; 
v_res_4250_ = l_Array_isPrefixOfAux___redArg(v_inst_4246_, v_as_4247_, v_bs_4248_, v_i_4249_);
lean_dec_ref(v_bs_4248_);
lean_dec_ref(v_as_4247_);
v_r_4251_ = lean_box(v_res_4250_);
return v_r_4251_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object* v_00_u03b1_4252_, lean_object* v_inst_4253_, lean_object* v_as_4254_, lean_object* v_bs_4255_, lean_object* v_hle_4256_, lean_object* v_i_4257_){
_start:
{
uint8_t v___x_4258_; 
v___x_4258_ = l_Array_isPrefixOfAux___redArg(v_inst_4253_, v_as_4254_, v_bs_4255_, v_i_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object* v_00_u03b1_4259_, lean_object* v_inst_4260_, lean_object* v_as_4261_, lean_object* v_bs_4262_, lean_object* v_hle_4263_, lean_object* v_i_4264_){
_start:
{
uint8_t v_res_4265_; lean_object* v_r_4266_; 
v_res_4265_ = l_Array_isPrefixOfAux(v_00_u03b1_4259_, v_inst_4260_, v_as_4261_, v_bs_4262_, v_hle_4263_, v_i_4264_);
lean_dec_ref(v_bs_4262_);
lean_dec_ref(v_as_4261_);
v_r_4266_ = lean_box(v_res_4265_);
return v_r_4266_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object* v_inst_4267_, lean_object* v_as_4268_, lean_object* v_bs_4269_){
_start:
{
lean_object* v___x_4270_; lean_object* v___x_4271_; uint8_t v___x_4272_; 
v___x_4270_ = lean_array_get_size(v_as_4268_);
v___x_4271_ = lean_array_get_size(v_bs_4269_);
v___x_4272_ = lean_nat_dec_le(v___x_4270_, v___x_4271_);
if (v___x_4272_ == 0)
{
lean_dec_ref(v_inst_4267_);
return v___x_4272_;
}
else
{
lean_object* v___x_4273_; uint8_t v___x_4274_; 
v___x_4273_ = lean_unsigned_to_nat(0u);
v___x_4274_ = l_Array_isPrefixOfAux___redArg(v_inst_4267_, v_as_4268_, v_bs_4269_, v___x_4273_);
return v___x_4274_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object* v_inst_4275_, lean_object* v_as_4276_, lean_object* v_bs_4277_){
_start:
{
uint8_t v_res_4278_; lean_object* v_r_4279_; 
v_res_4278_ = l_Array_isPrefixOf___redArg(v_inst_4275_, v_as_4276_, v_bs_4277_);
lean_dec_ref(v_bs_4277_);
lean_dec_ref(v_as_4276_);
v_r_4279_ = lean_box(v_res_4278_);
return v_r_4279_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object* v_00_u03b1_4280_, lean_object* v_inst_4281_, lean_object* v_as_4282_, lean_object* v_bs_4283_){
_start:
{
uint8_t v___x_4284_; 
v___x_4284_ = l_Array_isPrefixOf___redArg(v_inst_4281_, v_as_4282_, v_bs_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object* v_00_u03b1_4285_, lean_object* v_inst_4286_, lean_object* v_as_4287_, lean_object* v_bs_4288_){
_start:
{
uint8_t v_res_4289_; lean_object* v_r_4290_; 
v_res_4289_ = l_Array_isPrefixOf(v_00_u03b1_4285_, v_inst_4286_, v_as_4287_, v_bs_4288_);
lean_dec_ref(v_bs_4288_);
lean_dec_ref(v_as_4287_);
v_r_4290_ = lean_box(v_res_4289_);
return v_r_4290_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object* v_i_4291_, lean_object* v_cs_4292_, lean_object* v_inst_4293_, lean_object* v_as_4294_, lean_object* v_bs_4295_, lean_object* v_f_4296_, lean_object* v_____do__lift_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Array_zipWithMAux___redArg___lam__0(v_i_4291_, v_cs_4292_, v_inst_4293_, v_as_4294_, v_bs_4295_, v_f_4296_, v_____do__lift_4297_);
lean_dec(v_i_4291_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object* v_inst_4299_, lean_object* v_as_4300_, lean_object* v_bs_4301_, lean_object* v_f_4302_, lean_object* v_i_4303_, lean_object* v_cs_4304_){
_start:
{
lean_object* v_toApplicative_4305_; lean_object* v_toBind_4306_; lean_object* v_toPure_4307_; lean_object* v___x_4308_; uint8_t v___x_4309_; 
v_toApplicative_4305_ = lean_ctor_get(v_inst_4299_, 0);
v_toBind_4306_ = lean_ctor_get(v_inst_4299_, 1);
lean_inc(v_toBind_4306_);
v_toPure_4307_ = lean_ctor_get(v_toApplicative_4305_, 1);
v___x_4308_ = lean_array_get_size(v_as_4300_);
v___x_4309_ = lean_nat_dec_lt(v_i_4303_, v___x_4308_);
if (v___x_4309_ == 0)
{
lean_object* v___x_4310_; 
lean_inc(v_toPure_4307_);
lean_dec(v_toBind_4306_);
lean_dec(v_i_4303_);
lean_dec(v_f_4302_);
lean_dec_ref(v_bs_4301_);
lean_dec_ref(v_as_4300_);
lean_dec_ref(v_inst_4299_);
v___x_4310_ = lean_apply_2(v_toPure_4307_, lean_box(0), v_cs_4304_);
return v___x_4310_;
}
else
{
lean_object* v___x_4311_; uint8_t v___x_4312_; 
v___x_4311_ = lean_array_get_size(v_bs_4301_);
v___x_4312_ = lean_nat_dec_lt(v_i_4303_, v___x_4311_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; 
lean_inc(v_toPure_4307_);
lean_dec(v_toBind_4306_);
lean_dec(v_i_4303_);
lean_dec(v_f_4302_);
lean_dec_ref(v_bs_4301_);
lean_dec_ref(v_as_4300_);
lean_dec_ref(v_inst_4299_);
v___x_4313_ = lean_apply_2(v_toPure_4307_, lean_box(0), v_cs_4304_);
return v___x_4313_;
}
else
{
lean_object* v___f_4314_; lean_object* v_a_4315_; lean_object* v_b_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; 
lean_inc(v_f_4302_);
lean_inc_ref(v_bs_4301_);
lean_inc_ref(v_as_4300_);
lean_inc(v_i_4303_);
v___f_4314_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4314_, 0, v_i_4303_);
lean_closure_set(v___f_4314_, 1, v_cs_4304_);
lean_closure_set(v___f_4314_, 2, v_inst_4299_);
lean_closure_set(v___f_4314_, 3, v_as_4300_);
lean_closure_set(v___f_4314_, 4, v_bs_4301_);
lean_closure_set(v___f_4314_, 5, v_f_4302_);
v_a_4315_ = lean_array_fget(v_as_4300_, v_i_4303_);
lean_dec_ref(v_as_4300_);
v_b_4316_ = lean_array_fget(v_bs_4301_, v_i_4303_);
lean_dec(v_i_4303_);
lean_dec_ref(v_bs_4301_);
v___x_4317_ = lean_apply_2(v_f_4302_, v_a_4315_, v_b_4316_);
v___x_4318_ = lean_apply_4(v_toBind_4306_, lean_box(0), lean_box(0), v___x_4317_, v___f_4314_);
return v___x_4318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object* v_i_4319_, lean_object* v_cs_4320_, lean_object* v_inst_4321_, lean_object* v_as_4322_, lean_object* v_bs_4323_, lean_object* v_f_4324_, lean_object* v_____do__lift_4325_){
_start:
{
lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; 
v___x_4326_ = lean_unsigned_to_nat(1u);
v___x_4327_ = lean_nat_add(v_i_4319_, v___x_4326_);
v___x_4328_ = lean_array_push(v_cs_4320_, v_____do__lift_4325_);
v___x_4329_ = l_Array_zipWithMAux___redArg(v_inst_4321_, v_as_4322_, v_bs_4323_, v_f_4324_, v___x_4327_, v___x_4328_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object* v_00_u03b1_4330_, lean_object* v_00_u03b2_4331_, lean_object* v_00_u03b3_4332_, lean_object* v_m_4333_, lean_object* v_inst_4334_, lean_object* v_as_4335_, lean_object* v_bs_4336_, lean_object* v_f_4337_, lean_object* v_i_4338_, lean_object* v_cs_4339_){
_start:
{
lean_object* v___x_4340_; 
v___x_4340_ = l_Array_zipWithMAux___redArg(v_inst_4334_, v_as_4335_, v_bs_4336_, v_f_4337_, v_i_4338_, v_cs_4339_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object* v_f_4341_, lean_object* v_as_4342_, lean_object* v_bs_4343_){
_start:
{
lean_object* v___f_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___f_4344_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4344_, 0, v_f_4341_);
v___x_4345_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4348_ = l_Array_zipWithMAux___redArg(v___x_4345_, v_as_4342_, v_bs_4343_, v___f_4344_, v___x_4346_, v___x_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object* v_00_u03b1_4349_, lean_object* v_00_u03b2_4350_, lean_object* v_00_u03b3_4351_, lean_object* v_f_4352_, lean_object* v_as_4353_, lean_object* v_bs_4354_){
_start:
{
lean_object* v___f_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___f_4355_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4355_, 0, v_f_4352_);
v___x_4356_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4357_ = lean_unsigned_to_nat(0u);
v___x_4358_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4359_ = l_Array_zipWithMAux___redArg(v___x_4356_, v_as_4353_, v_bs_4354_, v___f_4355_, v___x_4357_, v___x_4358_);
return v___x_4359_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object* v_as_4360_, lean_object* v_bs_4361_, lean_object* v_i_4362_, lean_object* v_cs_4363_){
_start:
{
lean_object* v___x_4364_; uint8_t v___x_4365_; 
v___x_4364_ = lean_array_get_size(v_as_4360_);
v___x_4365_ = lean_nat_dec_lt(v_i_4362_, v___x_4364_);
if (v___x_4365_ == 0)
{
lean_dec(v_i_4362_);
return v_cs_4363_;
}
else
{
lean_object* v___x_4366_; uint8_t v___x_4367_; 
v___x_4366_ = lean_array_get_size(v_bs_4361_);
v___x_4367_ = lean_nat_dec_lt(v_i_4362_, v___x_4366_);
if (v___x_4367_ == 0)
{
lean_dec(v_i_4362_);
return v_cs_4363_;
}
else
{
lean_object* v_a_4368_; lean_object* v_b_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; 
v_a_4368_ = lean_array_fget_borrowed(v_as_4360_, v_i_4362_);
v_b_4369_ = lean_array_fget_borrowed(v_bs_4361_, v_i_4362_);
lean_inc(v_b_4369_);
lean_inc(v_a_4368_);
v___x_4370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4370_, 0, v_a_4368_);
lean_ctor_set(v___x_4370_, 1, v_b_4369_);
v___x_4371_ = lean_unsigned_to_nat(1u);
v___x_4372_ = lean_nat_add(v_i_4362_, v___x_4371_);
lean_dec(v_i_4362_);
v___x_4373_ = lean_array_push(v_cs_4363_, v___x_4370_);
v_i_4362_ = v___x_4372_;
v_cs_4363_ = v___x_4373_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object* v_as_4375_, lean_object* v_bs_4376_, lean_object* v_i_4377_, lean_object* v_cs_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4375_, v_bs_4376_, v_i_4377_, v_cs_4378_);
lean_dec_ref(v_bs_4376_);
lean_dec_ref(v_as_4375_);
return v_res_4379_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object* v_as_4382_, lean_object* v_bs_4383_){
_start:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
v___x_4384_ = lean_unsigned_to_nat(0u);
v___x_4385_ = ((lean_object*)(l_Array_zip___redArg___closed__0));
v___x_4386_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4382_, v_bs_4383_, v___x_4384_, v___x_4385_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object* v_as_4387_, lean_object* v_bs_4388_){
_start:
{
lean_object* v_res_4389_; 
v_res_4389_ = l_Array_zip___redArg(v_as_4387_, v_bs_4388_);
lean_dec_ref(v_bs_4388_);
lean_dec_ref(v_as_4387_);
return v_res_4389_;
}
}
LEAN_EXPORT lean_object* l_Array_zip(lean_object* v_00_u03b1_4390_, lean_object* v_00_u03b2_4391_, lean_object* v_as_4392_, lean_object* v_bs_4393_){
_start:
{
lean_object* v___x_4394_; 
v___x_4394_ = l_Array_zip___redArg(v_as_4392_, v_bs_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object* v_00_u03b1_4395_, lean_object* v_00_u03b2_4396_, lean_object* v_as_4397_, lean_object* v_bs_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l_Array_zip(v_00_u03b1_4395_, v_00_u03b2_4396_, v_as_4397_, v_bs_4398_);
lean_dec_ref(v_bs_4398_);
lean_dec_ref(v_as_4397_);
return v_res_4399_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object* v_00_u03b1_4400_, lean_object* v_00_u03b2_4401_, lean_object* v_as_4402_, lean_object* v_bs_4403_, lean_object* v_i_4404_, lean_object* v_cs_4405_){
_start:
{
lean_object* v___x_4406_; 
v___x_4406_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4402_, v_bs_4403_, v_i_4404_, v_cs_4405_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object* v_00_u03b1_4407_, lean_object* v_00_u03b2_4408_, lean_object* v_as_4409_, lean_object* v_bs_4410_, lean_object* v_i_4411_, lean_object* v_cs_4412_){
_start:
{
lean_object* v_res_4413_; 
v_res_4413_ = l_Array_zipWithMAux___at___00Array_zip_spec__0(v_00_u03b1_4407_, v_00_u03b2_4408_, v_as_4409_, v_bs_4410_, v_i_4411_, v_cs_4412_);
lean_dec_ref(v_bs_4410_);
lean_dec_ref(v_as_4409_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object* v_f_4414_, lean_object* v_as_4415_, lean_object* v_bs_4416_, lean_object* v_i_4417_, lean_object* v_cs_4418_){
_start:
{
lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4428_; lean_object* v___y_4435_; lean_object* v___x_4442_; lean_object* v___x_4443_; uint8_t v___x_4444_; 
v___x_4442_ = lean_array_get_size(v_as_4415_);
v___x_4443_ = lean_array_get_size(v_bs_4416_);
v___x_4444_ = lean_nat_dec_le(v___x_4442_, v___x_4443_);
if (v___x_4444_ == 0)
{
v___y_4435_ = v___x_4442_;
goto v___jp_4434_;
}
else
{
v___y_4435_ = v___x_4443_;
goto v___jp_4434_;
}
v___jp_4419_:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4422_ = lean_unsigned_to_nat(1u);
v___x_4423_ = lean_nat_add(v_i_4417_, v___x_4422_);
lean_dec(v_i_4417_);
lean_inc(v_f_4414_);
v___x_4424_ = lean_apply_2(v_f_4414_, v___y_4420_, v___y_4421_);
v___x_4425_ = lean_array_push(v_cs_4418_, v___x_4424_);
v_i_4417_ = v___x_4423_;
v_cs_4418_ = v___x_4425_;
goto _start;
}
v___jp_4427_:
{
lean_object* v___x_4429_; uint8_t v___x_4430_; 
v___x_4429_ = lean_array_get_size(v_bs_4416_);
v___x_4430_ = lean_nat_dec_lt(v_i_4417_, v___x_4429_);
if (v___x_4430_ == 0)
{
lean_object* v___x_4431_; 
v___x_4431_ = lean_box(0);
v___y_4420_ = v___y_4428_;
v___y_4421_ = v___x_4431_;
goto v___jp_4419_;
}
else
{
lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4432_ = lean_array_fget_borrowed(v_bs_4416_, v_i_4417_);
lean_inc(v___x_4432_);
v___x_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4432_);
v___y_4420_ = v___y_4428_;
v___y_4421_ = v___x_4433_;
goto v___jp_4419_;
}
}
v___jp_4434_:
{
uint8_t v___x_4436_; 
v___x_4436_ = lean_nat_dec_lt(v_i_4417_, v___y_4435_);
lean_dec(v___y_4435_);
if (v___x_4436_ == 0)
{
lean_dec(v_i_4417_);
lean_dec(v_f_4414_);
return v_cs_4418_;
}
else
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = lean_array_get_size(v_as_4415_);
v___x_4438_ = lean_nat_dec_lt(v_i_4417_, v___x_4437_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; 
v___x_4439_ = lean_box(0);
v___y_4428_ = v___x_4439_;
goto v___jp_4427_;
}
else
{
lean_object* v___x_4440_; lean_object* v___x_4441_; 
v___x_4440_ = lean_array_fget_borrowed(v_as_4415_, v_i_4417_);
lean_inc(v___x_4440_);
v___x_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4440_);
v___y_4428_ = v___x_4441_;
goto v___jp_4427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object* v_f_4445_, lean_object* v_as_4446_, lean_object* v_bs_4447_, lean_object* v_i_4448_, lean_object* v_cs_4449_){
_start:
{
lean_object* v_res_4450_; 
v_res_4450_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4445_, v_as_4446_, v_bs_4447_, v_i_4448_, v_cs_4449_);
lean_dec_ref(v_bs_4447_);
lean_dec_ref(v_as_4446_);
return v_res_4450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object* v_00_u03b1_4451_, lean_object* v_00_u03b2_4452_, lean_object* v_00_u03b3_4453_, lean_object* v_f_4454_, lean_object* v_as_4455_, lean_object* v_bs_4456_, lean_object* v_i_4457_, lean_object* v_cs_4458_){
_start:
{
lean_object* v___x_4459_; 
v___x_4459_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4454_, v_as_4455_, v_bs_4456_, v_i_4457_, v_cs_4458_);
return v___x_4459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object* v_00_u03b1_4460_, lean_object* v_00_u03b2_4461_, lean_object* v_00_u03b3_4462_, lean_object* v_f_4463_, lean_object* v_as_4464_, lean_object* v_bs_4465_, lean_object* v_i_4466_, lean_object* v_cs_4467_){
_start:
{
lean_object* v_res_4468_; 
v_res_4468_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(v_00_u03b1_4460_, v_00_u03b2_4461_, v_00_u03b3_4462_, v_f_4463_, v_as_4464_, v_bs_4465_, v_i_4466_, v_cs_4467_);
lean_dec_ref(v_bs_4465_);
lean_dec_ref(v_as_4464_);
return v_res_4468_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object* v_f_4469_, lean_object* v_as_4470_, lean_object* v_bs_4471_){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4472_ = lean_unsigned_to_nat(0u);
v___x_4473_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4474_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4469_, v_as_4470_, v_bs_4471_, v___x_4472_, v___x_4473_);
return v___x_4474_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object* v_f_4475_, lean_object* v_as_4476_, lean_object* v_bs_4477_){
_start:
{
lean_object* v_res_4478_; 
v_res_4478_ = l_Array_zipWithAll___redArg(v_f_4475_, v_as_4476_, v_bs_4477_);
lean_dec_ref(v_bs_4477_);
lean_dec_ref(v_as_4476_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object* v_00_u03b1_4479_, lean_object* v_00_u03b2_4480_, lean_object* v_00_u03b3_4481_, lean_object* v_f_4482_, lean_object* v_as_4483_, lean_object* v_bs_4484_){
_start:
{
lean_object* v___x_4485_; 
v___x_4485_ = l_Array_zipWithAll___redArg(v_f_4482_, v_as_4483_, v_bs_4484_);
return v___x_4485_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object* v_00_u03b1_4486_, lean_object* v_00_u03b2_4487_, lean_object* v_00_u03b3_4488_, lean_object* v_f_4489_, lean_object* v_as_4490_, lean_object* v_bs_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Array_zipWithAll(v_00_u03b1_4486_, v_00_u03b2_4487_, v_00_u03b3_4488_, v_f_4489_, v_as_4490_, v_bs_4491_);
lean_dec_ref(v_bs_4491_);
lean_dec_ref(v_as_4490_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object* v_inst_4493_, lean_object* v_f_4494_, lean_object* v_as_4495_, lean_object* v_bs_4496_){
_start:
{
lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4497_ = lean_unsigned_to_nat(0u);
v___x_4498_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4499_ = l_Array_zipWithMAux___redArg(v_inst_4493_, v_as_4495_, v_bs_4496_, v_f_4494_, v___x_4497_, v___x_4498_);
return v___x_4499_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object* v_00_u03b1_4500_, lean_object* v_00_u03b2_4501_, lean_object* v_00_u03b3_4502_, lean_object* v_m_4503_, lean_object* v_inst_4504_, lean_object* v_f_4505_, lean_object* v_as_4506_, lean_object* v_bs_4507_){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4508_ = lean_unsigned_to_nat(0u);
v___x_4509_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4510_ = l_Array_zipWithMAux___redArg(v_inst_4504_, v_as_4506_, v_bs_4507_, v_f_4505_, v___x_4508_, v___x_4509_);
return v___x_4510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object* v_as_4511_, size_t v_i_4512_, size_t v_stop_4513_, lean_object* v_b_4514_){
_start:
{
uint8_t v___x_4515_; 
v___x_4515_ = lean_usize_dec_eq(v_i_4512_, v_stop_4513_);
if (v___x_4515_ == 0)
{
lean_object* v_fst_4516_; lean_object* v_snd_4517_; lean_object* v___x_4518_; lean_object* v_fst_4519_; lean_object* v_snd_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4532_; 
v_fst_4516_ = lean_ctor_get(v_b_4514_, 0);
lean_inc(v_fst_4516_);
v_snd_4517_ = lean_ctor_get(v_b_4514_, 1);
lean_inc(v_snd_4517_);
lean_dec_ref(v_b_4514_);
v___x_4518_ = lean_array_uget(v_as_4511_, v_i_4512_);
v_fst_4519_ = lean_ctor_get(v___x_4518_, 0);
v_snd_4520_ = lean_ctor_get(v___x_4518_, 1);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4518_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4522_ = v___x_4518_;
v_isShared_4523_ = v_isSharedCheck_4532_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_snd_4520_);
lean_inc(v_fst_4519_);
lean_dec(v___x_4518_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4532_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4527_; 
v___x_4524_ = lean_array_push(v_fst_4516_, v_fst_4519_);
v___x_4525_ = lean_array_push(v_snd_4517_, v_snd_4520_);
if (v_isShared_4523_ == 0)
{
lean_ctor_set(v___x_4522_, 1, v___x_4525_);
lean_ctor_set(v___x_4522_, 0, v___x_4524_);
v___x_4527_ = v___x_4522_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v___x_4524_);
lean_ctor_set(v_reuseFailAlloc_4531_, 1, v___x_4525_);
v___x_4527_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
size_t v___x_4528_; size_t v___x_4529_; 
v___x_4528_ = ((size_t)1ULL);
v___x_4529_ = lean_usize_add(v_i_4512_, v___x_4528_);
v_i_4512_ = v___x_4529_;
v_b_4514_ = v___x_4527_;
goto _start;
}
}
}
else
{
return v_b_4514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object* v_as_4533_, lean_object* v_i_4534_, lean_object* v_stop_4535_, lean_object* v_b_4536_){
_start:
{
size_t v_i_boxed_4537_; size_t v_stop_boxed_4538_; lean_object* v_res_4539_; 
v_i_boxed_4537_ = lean_unbox_usize(v_i_4534_);
lean_dec(v_i_4534_);
v_stop_boxed_4538_ = lean_unbox_usize(v_stop_4535_);
lean_dec(v_stop_4535_);
v_res_4539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4533_, v_i_boxed_4537_, v_stop_boxed_4538_, v_b_4536_);
lean_dec_ref(v_as_4533_);
return v_res_4539_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object* v_as_4540_){
_start:
{
lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; uint8_t v___x_4544_; 
v___x_4541_ = lean_unsigned_to_nat(0u);
v___x_4542_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v___x_4543_ = lean_array_get_size(v_as_4540_);
v___x_4544_ = lean_nat_dec_lt(v___x_4541_, v___x_4543_);
if (v___x_4544_ == 0)
{
return v___x_4542_;
}
else
{
size_t v___x_4545_; size_t v___x_4546_; lean_object* v___x_4547_; 
v___x_4545_ = ((size_t)0ULL);
v___x_4546_ = lean_usize_of_nat(v___x_4543_);
v___x_4547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4540_, v___x_4545_, v___x_4546_, v___x_4542_);
return v___x_4547_;
}
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object* v_as_4548_){
_start:
{
lean_object* v_res_4549_; 
v_res_4549_ = l_Array_unzip___redArg(v_as_4548_);
lean_dec_ref(v_as_4548_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip(lean_object* v_00_u03b1_4550_, lean_object* v_00_u03b2_4551_, lean_object* v_as_4552_){
_start:
{
lean_object* v___x_4553_; 
v___x_4553_ = l_Array_unzip___redArg(v_as_4552_);
return v___x_4553_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object* v_00_u03b1_4554_, lean_object* v_00_u03b2_4555_, lean_object* v_as_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l_Array_unzip(v_00_u03b1_4554_, v_00_u03b2_4555_, v_as_4556_);
lean_dec_ref(v_as_4556_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object* v_00_u03b1_4558_, lean_object* v_00_u03b2_4559_, lean_object* v_as_4560_, size_t v_i_4561_, size_t v_stop_4562_, lean_object* v_b_4563_){
_start:
{
lean_object* v___x_4564_; 
v___x_4564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4560_, v_i_4561_, v_stop_4562_, v_b_4563_);
return v___x_4564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object* v_00_u03b1_4565_, lean_object* v_00_u03b2_4566_, lean_object* v_as_4567_, lean_object* v_i_4568_, lean_object* v_stop_4569_, lean_object* v_b_4570_){
_start:
{
size_t v_i_boxed_4571_; size_t v_stop_boxed_4572_; lean_object* v_res_4573_; 
v_i_boxed_4571_ = lean_unbox_usize(v_i_4568_);
lean_dec(v_i_4568_);
v_stop_boxed_4572_ = lean_unbox_usize(v_stop_4569_);
lean_dec(v_stop_4569_);
v_res_4573_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(v_00_u03b1_4565_, v_00_u03b2_4566_, v_as_4567_, v_i_boxed_4571_, v_stop_boxed_4572_, v_b_4570_);
lean_dec_ref(v_as_4567_);
return v_res_4573_;
}
}
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object* v_inst_4574_, lean_object* v_xs_4575_, lean_object* v_a_4576_, lean_object* v_b_4577_){
_start:
{
lean_object* v___x_4578_; 
v___x_4578_ = l_Array_finIdxOf_x3f___redArg(v_inst_4574_, v_xs_4575_, v_a_4576_);
if (lean_obj_tag(v___x_4578_) == 0)
{
lean_dec(v_b_4577_);
return v_xs_4575_;
}
else
{
lean_object* v_val_4579_; lean_object* v___x_4580_; 
v_val_4579_ = lean_ctor_get(v___x_4578_, 0);
lean_inc(v_val_4579_);
lean_dec_ref_known(v___x_4578_, 1);
v___x_4580_ = lean_array_fset(v_xs_4575_, v_val_4579_, v_b_4577_);
lean_dec(v_val_4579_);
return v___x_4580_;
}
}
}
LEAN_EXPORT lean_object* l_Array_replace(lean_object* v_00_u03b1_4581_, lean_object* v_inst_4582_, lean_object* v_xs_4583_, lean_object* v_a_4584_, lean_object* v_b_4585_){
_start:
{
lean_object* v___x_4586_; 
v___x_4586_ = l_Array_replace___redArg(v_inst_4582_, v_xs_4583_, v_a_4584_, v_b_4585_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg(){
_start:
{
lean_object* v___x_4588_; 
v___x_4588_ = lean_box(0);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object* v___dummy_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_Array_instLT___redArg();
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT(lean_object* v_00_u03b1_4591_, lean_object* v_inst_4592_){
_start:
{
lean_object* v___x_4593_; 
v___x_4593_ = lean_box(0);
return v___x_4593_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg(){
_start:
{
lean_object* v___x_4595_; 
v___x_4595_ = lean_box(0);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object* v___dummy_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l_Array_instLE___redArg();
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE(lean_object* v_00_u03b1_4598_, lean_object* v_inst_4599_){
_start:
{
lean_object* v___x_4600_; 
v___x_4600_ = lean_box(0);
return v___x_4600_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object* v_n_4601_, lean_object* v_a_4602_, lean_object* v_xs_4603_){
_start:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
v___x_4604_ = lean_array_get_size(v_xs_4603_);
v___x_4605_ = lean_nat_sub(v_n_4601_, v___x_4604_);
v___x_4606_ = lean_mk_array(v___x_4605_, v_a_4602_);
v___x_4607_ = l_Array_append___redArg(v___x_4606_, v_xs_4603_);
return v___x_4607_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object* v_n_4608_, lean_object* v_a_4609_, lean_object* v_xs_4610_){
_start:
{
lean_object* v_res_4611_; 
v_res_4611_ = l_Array_leftpad___redArg(v_n_4608_, v_a_4609_, v_xs_4610_);
lean_dec_ref(v_xs_4610_);
lean_dec(v_n_4608_);
return v_res_4611_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object* v_00_u03b1_4612_, lean_object* v_n_4613_, lean_object* v_a_4614_, lean_object* v_xs_4615_){
_start:
{
lean_object* v___x_4616_; 
v___x_4616_ = l_Array_leftpad___redArg(v_n_4613_, v_a_4614_, v_xs_4615_);
return v___x_4616_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object* v_00_u03b1_4617_, lean_object* v_n_4618_, lean_object* v_a_4619_, lean_object* v_xs_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l_Array_leftpad(v_00_u03b1_4617_, v_n_4618_, v_a_4619_, v_xs_4620_);
lean_dec_ref(v_xs_4620_);
lean_dec(v_n_4618_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object* v_n_4622_, lean_object* v_a_4623_, lean_object* v_xs_4624_){
_start:
{
lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; 
v___x_4625_ = lean_array_get_size(v_xs_4624_);
v___x_4626_ = lean_nat_sub(v_n_4622_, v___x_4625_);
v___x_4627_ = lean_mk_array(v___x_4626_, v_a_4623_);
v___x_4628_ = l_Array_append___redArg(v_xs_4624_, v___x_4627_);
lean_dec_ref(v___x_4627_);
return v___x_4628_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object* v_n_4629_, lean_object* v_a_4630_, lean_object* v_xs_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l_Array_rightpad___redArg(v_n_4629_, v_a_4630_, v_xs_4631_);
lean_dec(v_n_4629_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object* v_00_u03b1_4633_, lean_object* v_n_4634_, lean_object* v_a_4635_, lean_object* v_xs_4636_){
_start:
{
lean_object* v___x_4637_; 
v___x_4637_ = l_Array_rightpad___redArg(v_n_4634_, v_a_4635_, v_xs_4636_);
return v___x_4637_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object* v_00_u03b1_4638_, lean_object* v_n_4639_, lean_object* v_a_4640_, lean_object* v_xs_4641_){
_start:
{
lean_object* v_res_4642_; 
v_res_4642_ = l_Array_rightpad(v_00_u03b1_4638_, v_n_4639_, v_a_4640_, v_xs_4641_);
lean_dec(v_n_4639_);
return v_res_4642_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object* v_x_4643_){
_start:
{
lean_inc(v_x_4643_);
return v_x_4643_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object* v_x_4644_){
_start:
{
lean_object* v_res_4645_; 
v_res_4645_ = l_Array_reduceOption___redArg___lam__0(v_x_4644_);
lean_dec(v_x_4644_);
return v_res_4645_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object* v_as_4647_){
_start:
{
lean_object* v___f_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___f_4648_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4649_ = lean_unsigned_to_nat(0u);
v___x_4650_ = lean_array_get_size(v_as_4647_);
v___x_4651_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4652_ = l_Array_filterMapM___redArg(v___x_4651_, v___f_4648_, v_as_4647_, v___x_4649_, v___x_4650_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object* v_00_u03b1_4653_, lean_object* v_as_4654_){
_start:
{
lean_object* v___f_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___f_4655_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4656_ = lean_unsigned_to_nat(0u);
v___x_4657_ = lean_array_get_size(v_as_4654_);
v___x_4658_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4659_ = l_Array_filterMapM___redArg(v___x_4658_, v___f_4655_, v_as_4654_, v___x_4656_, v___x_4657_);
return v___x_4659_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object* v_inst_4660_, lean_object* v_x1_4661_, lean_object* v_x2_4662_){
_start:
{
lean_object* v_fst_4663_; lean_object* v_snd_4664_; lean_object* v___x_4665_; uint8_t v___x_4666_; 
v_fst_4663_ = lean_ctor_get(v_x1_4661_, 0);
v_snd_4664_ = lean_ctor_get(v_x1_4661_, 1);
lean_inc(v_fst_4663_);
lean_inc(v_x2_4662_);
v___x_4665_ = lean_apply_2(v_inst_4660_, v_x2_4662_, v_fst_4663_);
v___x_4666_ = lean_unbox(v___x_4665_);
if (v___x_4666_ == 0)
{
lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4674_; 
lean_inc(v_snd_4664_);
lean_inc(v_fst_4663_);
v_isSharedCheck_4674_ = !lean_is_exclusive(v_x1_4661_);
if (v_isSharedCheck_4674_ == 0)
{
lean_object* v_unused_4675_; lean_object* v_unused_4676_; 
v_unused_4675_ = lean_ctor_get(v_x1_4661_, 1);
lean_dec(v_unused_4675_);
v_unused_4676_ = lean_ctor_get(v_x1_4661_, 0);
lean_dec(v_unused_4676_);
v___x_4668_ = v_x1_4661_;
v_isShared_4669_ = v_isSharedCheck_4674_;
goto v_resetjp_4667_;
}
else
{
lean_dec(v_x1_4661_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4674_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4670_; lean_object* v___x_4672_; 
v___x_4670_ = lean_array_push(v_snd_4664_, v_fst_4663_);
if (v_isShared_4669_ == 0)
{
lean_ctor_set(v___x_4668_, 1, v___x_4670_);
lean_ctor_set(v___x_4668_, 0, v_x2_4662_);
v___x_4672_ = v___x_4668_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_x2_4662_);
lean_ctor_set(v_reuseFailAlloc_4673_, 1, v___x_4670_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
else
{
lean_dec(v_x2_4662_);
return v_x1_4661_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object* v_inst_4677_, lean_object* v_as_4678_){
_start:
{
lean_object* v___x_4679_; lean_object* v___x_4680_; uint8_t v___x_4681_; 
v___x_4679_ = lean_unsigned_to_nat(0u);
v___x_4680_ = lean_array_get_size(v_as_4678_);
v___x_4681_ = lean_nat_dec_lt(v___x_4679_, v___x_4680_);
if (v___x_4681_ == 0)
{
lean_object* v___x_4682_; 
lean_dec_ref(v_as_4678_);
lean_dec_ref(v_inst_4677_);
v___x_4682_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
return v___x_4682_;
}
else
{
lean_object* v___f_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; size_t v___x_4688_; size_t v___x_4689_; lean_object* v___x_4690_; lean_object* v_fst_4691_; lean_object* v_snd_4692_; lean_object* v___x_4693_; 
v___f_4683_ = lean_alloc_closure((void*)(l_Array_eraseReps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4683_, 0, v_inst_4677_);
v___x_4684_ = lean_array_fget_borrowed(v_as_4678_, v___x_4679_);
v___x_4685_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4686_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
lean_inc(v___x_4684_);
v___x_4687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4687_, 0, v___x_4684_);
lean_ctor_set(v___x_4687_, 1, v___x_4685_);
v___x_4688_ = ((size_t)0ULL);
v___x_4689_ = lean_usize_of_nat(v___x_4680_);
v___x_4690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4686_, v___f_4683_, v_as_4678_, v___x_4688_, v___x_4689_, v___x_4687_);
v_fst_4691_ = lean_ctor_get(v___x_4690_, 0);
lean_inc(v_fst_4691_);
v_snd_4692_ = lean_ctor_get(v___x_4690_, 1);
lean_inc(v_snd_4692_);
lean_dec(v___x_4690_);
v___x_4693_ = lean_array_push(v_snd_4692_, v_fst_4691_);
return v___x_4693_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object* v_00_u03b1_4694_, lean_object* v_inst_4695_, lean_object* v_as_4696_){
_start:
{
lean_object* v___x_4697_; 
v___x_4697_ = l_Array_eraseReps___redArg(v_inst_4695_, v_as_4696_);
return v___x_4697_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object* v_inst_4698_, lean_object* v_as_4699_, lean_object* v_a_4700_, lean_object* v_x_4701_){
_start:
{
lean_object* v_zero_4702_; uint8_t v_isZero_4703_; 
v_zero_4702_ = lean_unsigned_to_nat(0u);
v_isZero_4703_ = lean_nat_dec_eq(v_x_4701_, v_zero_4702_);
if (v_isZero_4703_ == 1)
{
lean_dec(v_x_4701_);
lean_dec(v_a_4700_);
lean_dec_ref(v_inst_4698_);
return v_isZero_4703_;
}
else
{
lean_object* v_one_4704_; lean_object* v_n_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; uint8_t v___x_4708_; 
v_one_4704_ = lean_unsigned_to_nat(1u);
v_n_4705_ = lean_nat_sub(v_x_4701_, v_one_4704_);
lean_dec(v_x_4701_);
v___x_4706_ = lean_array_fget_borrowed(v_as_4699_, v_n_4705_);
lean_inc_ref(v_inst_4698_);
lean_inc(v___x_4706_);
lean_inc(v_a_4700_);
v___x_4707_ = lean_apply_2(v_inst_4698_, v_a_4700_, v___x_4706_);
v___x_4708_ = lean_unbox(v___x_4707_);
if (v___x_4708_ == 0)
{
v_x_4701_ = v_n_4705_;
goto _start;
}
else
{
lean_dec(v_n_4705_);
lean_dec(v_a_4700_);
lean_dec_ref(v_inst_4698_);
return v_isZero_4703_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object* v_inst_4710_, lean_object* v_as_4711_, lean_object* v_a_4712_, lean_object* v_x_4713_){
_start:
{
uint8_t v_res_4714_; lean_object* v_r_4715_; 
v_res_4714_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4710_, v_as_4711_, v_a_4712_, v_x_4713_);
lean_dec_ref(v_as_4711_);
v_r_4715_ = lean_box(v_res_4714_);
return v_r_4715_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object* v_00_u03b1_4716_, lean_object* v_inst_4717_, lean_object* v_as_4718_, lean_object* v_a_4719_, lean_object* v_x_4720_, lean_object* v_x_4721_){
_start:
{
uint8_t v___x_4722_; 
v___x_4722_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4717_, v_as_4718_, v_a_4719_, v_x_4720_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object* v_00_u03b1_4723_, lean_object* v_inst_4724_, lean_object* v_as_4725_, lean_object* v_a_4726_, lean_object* v_x_4727_, lean_object* v_x_4728_){
_start:
{
uint8_t v_res_4729_; lean_object* v_r_4730_; 
v_res_4729_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(v_00_u03b1_4723_, v_inst_4724_, v_as_4725_, v_a_4726_, v_x_4727_, v_x_4728_);
lean_dec_ref(v_as_4725_);
v_r_4730_ = lean_box(v_res_4729_);
return v_r_4730_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object* v_inst_4731_, lean_object* v_as_4732_, lean_object* v_i_4733_){
_start:
{
lean_object* v___x_4734_; uint8_t v___x_4735_; 
v___x_4734_ = lean_array_get_size(v_as_4732_);
v___x_4735_ = lean_nat_dec_lt(v_i_4733_, v___x_4734_);
if (v___x_4735_ == 0)
{
uint8_t v___x_4736_; 
lean_dec(v_i_4733_);
lean_dec_ref(v_inst_4731_);
v___x_4736_ = 1;
return v___x_4736_;
}
else
{
lean_object* v___x_4737_; uint8_t v___x_4738_; 
v___x_4737_ = lean_array_fget_borrowed(v_as_4732_, v_i_4733_);
lean_inc(v_i_4733_);
lean_inc(v___x_4737_);
lean_inc_ref(v_inst_4731_);
v___x_4738_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4731_, v_as_4732_, v___x_4737_, v_i_4733_);
if (v___x_4738_ == 0)
{
lean_dec(v_i_4733_);
lean_dec_ref(v_inst_4731_);
return v___x_4738_;
}
else
{
lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4739_ = lean_unsigned_to_nat(1u);
v___x_4740_ = lean_nat_add(v_i_4733_, v___x_4739_);
lean_dec(v_i_4733_);
v_i_4733_ = v___x_4740_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object* v_inst_4742_, lean_object* v_as_4743_, lean_object* v_i_4744_){
_start:
{
uint8_t v_res_4745_; lean_object* v_r_4746_; 
v_res_4745_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4742_, v_as_4743_, v_i_4744_);
lean_dec_ref(v_as_4743_);
v_r_4746_ = lean_box(v_res_4745_);
return v_r_4746_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object* v_00_u03b1_4747_, lean_object* v_inst_4748_, lean_object* v_as_4749_, lean_object* v_i_4750_){
_start:
{
uint8_t v___x_4751_; 
v___x_4751_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4748_, v_as_4749_, v_i_4750_);
return v___x_4751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object* v_00_u03b1_4752_, lean_object* v_inst_4753_, lean_object* v_as_4754_, lean_object* v_i_4755_){
_start:
{
uint8_t v_res_4756_; lean_object* v_r_4757_; 
v_res_4756_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux(v_00_u03b1_4752_, v_inst_4753_, v_as_4754_, v_i_4755_);
lean_dec_ref(v_as_4754_);
v_r_4757_ = lean_box(v_res_4756_);
return v_r_4757_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object* v_inst_4758_, lean_object* v_as_4759_){
_start:
{
lean_object* v___x_4760_; uint8_t v___x_4761_; 
v___x_4760_ = lean_unsigned_to_nat(0u);
v___x_4761_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4758_, v_as_4759_, v___x_4760_);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object* v_inst_4762_, lean_object* v_as_4763_){
_start:
{
uint8_t v_res_4764_; lean_object* v_r_4765_; 
v_res_4764_ = l_Array_allDiff___redArg(v_inst_4762_, v_as_4763_);
lean_dec_ref(v_as_4763_);
v_r_4765_ = lean_box(v_res_4764_);
return v_r_4765_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object* v_00_u03b1_4766_, lean_object* v_inst_4767_, lean_object* v_as_4768_){
_start:
{
uint8_t v___x_4769_; 
v___x_4769_ = l_Array_allDiff___redArg(v_inst_4767_, v_as_4768_);
return v___x_4769_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object* v_00_u03b1_4770_, lean_object* v_inst_4771_, lean_object* v_as_4772_){
_start:
{
uint8_t v_res_4773_; lean_object* v_r_4774_; 
v_res_4773_ = l_Array_allDiff(v_00_u03b1_4770_, v_inst_4771_, v_as_4772_);
lean_dec_ref(v_as_4772_);
v_r_4774_ = lean_box(v_res_4773_);
return v_r_4774_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t v___x_4775_, lean_object* v_x1_4776_, lean_object* v_x2_4777_){
_start:
{
lean_object* v_fst_4778_; uint8_t v___x_4779_; 
v_fst_4778_ = lean_ctor_get(v_x1_4776_, 0);
v___x_4779_ = lean_unbox(v_fst_4778_);
if (v___x_4779_ == 0)
{
lean_object* v_snd_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4788_; 
lean_dec(v_x2_4777_);
v_snd_4780_ = lean_ctor_get(v_x1_4776_, 1);
v_isSharedCheck_4788_ = !lean_is_exclusive(v_x1_4776_);
if (v_isSharedCheck_4788_ == 0)
{
lean_object* v_unused_4789_; 
v_unused_4789_ = lean_ctor_get(v_x1_4776_, 0);
lean_dec(v_unused_4789_);
v___x_4782_ = v_x1_4776_;
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_snd_4780_);
lean_dec(v_x1_4776_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4784_; lean_object* v___x_4786_; 
v___x_4784_ = lean_box(v___x_4775_);
if (v_isShared_4783_ == 0)
{
lean_ctor_set(v___x_4782_, 0, v___x_4784_);
v___x_4786_ = v___x_4782_;
goto v_reusejp_4785_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v___x_4784_);
lean_ctor_set(v_reuseFailAlloc_4787_, 1, v_snd_4780_);
v___x_4786_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4785_;
}
v_reusejp_4785_:
{
return v___x_4786_;
}
}
}
else
{
lean_object* v_snd_4790_; lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4800_; 
v_snd_4790_ = lean_ctor_get(v_x1_4776_, 1);
v_isSharedCheck_4800_ = !lean_is_exclusive(v_x1_4776_);
if (v_isSharedCheck_4800_ == 0)
{
lean_object* v_unused_4801_; 
v_unused_4801_ = lean_ctor_get(v_x1_4776_, 0);
lean_dec(v_unused_4801_);
v___x_4792_ = v_x1_4776_;
v_isShared_4793_ = v_isSharedCheck_4800_;
goto v_resetjp_4791_;
}
else
{
lean_inc(v_snd_4790_);
lean_dec(v_x1_4776_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4800_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
uint8_t v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4798_; 
v___x_4794_ = 0;
v___x_4795_ = lean_array_push(v_snd_4790_, v_x2_4777_);
v___x_4796_ = lean_box(v___x_4794_);
if (v_isShared_4793_ == 0)
{
lean_ctor_set(v___x_4792_, 1, v___x_4795_);
lean_ctor_set(v___x_4792_, 0, v___x_4796_);
v___x_4798_ = v___x_4792_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4799_; 
v_reuseFailAlloc_4799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4799_, 0, v___x_4796_);
lean_ctor_set(v_reuseFailAlloc_4799_, 1, v___x_4795_);
v___x_4798_ = v_reuseFailAlloc_4799_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
return v___x_4798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object* v___x_4802_, lean_object* v_x1_4803_, lean_object* v_x2_4804_){
_start:
{
uint8_t v___x_156__boxed_4805_; lean_object* v_res_4806_; 
v___x_156__boxed_4805_ = lean_unbox(v___x_4802_);
v_res_4806_ = l_Array_getEvenElems___redArg___lam__0(v___x_156__boxed_4805_, v_x1_4803_, v_x2_4804_);
return v_res_4806_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object* v_as_4807_){
_start:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; uint8_t v___x_4812_; 
v___x_4808_ = lean_unsigned_to_nat(0u);
v___x_4809_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_4810_ = lean_array_get_size(v_as_4807_);
v___x_4811_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4812_ = lean_nat_dec_lt(v___x_4808_, v___x_4810_);
if (v___x_4812_ == 0)
{
lean_dec_ref(v_as_4807_);
return v___x_4809_;
}
else
{
lean_object* v___x_4813_; lean_object* v___f_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; size_t v___x_4817_; size_t v___x_4818_; lean_object* v___x_4819_; lean_object* v_snd_4820_; 
v___x_4813_ = lean_box(v___x_4812_);
v___f_4814_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4814_, 0, v___x_4813_);
v___x_4815_ = lean_box(v___x_4812_);
v___x_4816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4815_);
lean_ctor_set(v___x_4816_, 1, v___x_4809_);
v___x_4817_ = ((size_t)0ULL);
v___x_4818_ = lean_usize_of_nat(v___x_4810_);
v___x_4819_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4811_, v___f_4814_, v_as_4807_, v___x_4817_, v___x_4818_, v___x_4816_);
v_snd_4820_ = lean_ctor_get(v___x_4819_, 1);
lean_inc(v_snd_4820_);
lean_dec(v___x_4819_);
return v_snd_4820_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object* v_00_u03b1_4821_, lean_object* v_as_4822_){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; uint8_t v___x_4827_; 
v___x_4823_ = lean_unsigned_to_nat(0u);
v___x_4824_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_4825_ = lean_array_get_size(v_as_4822_);
v___x_4826_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4827_ = lean_nat_dec_lt(v___x_4823_, v___x_4825_);
if (v___x_4827_ == 0)
{
lean_dec_ref(v_as_4822_);
return v___x_4824_;
}
else
{
lean_object* v___x_4828_; lean_object* v___f_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; size_t v___x_4832_; size_t v___x_4833_; lean_object* v___x_4834_; lean_object* v_snd_4835_; 
v___x_4828_ = lean_box(v___x_4827_);
v___f_4829_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4829_, 0, v___x_4828_);
v___x_4830_ = lean_box(v___x_4827_);
v___x_4831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4831_, 0, v___x_4830_);
lean_ctor_set(v___x_4831_, 1, v___x_4824_);
v___x_4832_ = ((size_t)0ULL);
v___x_4833_ = lean_usize_of_nat(v___x_4825_);
v___x_4834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4826_, v___f_4829_, v_as_4822_, v___x_4832_, v___x_4833_, v___x_4831_);
v_snd_4835_ = lean_ctor_get(v___x_4834_, 1);
lean_inc(v_snd_4835_);
lean_dec(v___x_4834_);
return v_snd_4835_;
}
}
}
static lean_object* _init_l_Array_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_4841_; lean_object* v___x_4842_; 
v___x_4841_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__4));
v___x_4842_ = lean_string_length(v___x_4841_);
return v___x_4842_;
}
}
static lean_object* _init_l_Array_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4843_ = lean_obj_once(&l_Array_repr___redArg___closed__2, &l_Array_repr___redArg___closed__2_once, _init_l_Array_repr___redArg___closed__2);
v___x_4844_ = lean_nat_to_int(v___x_4843_);
return v___x_4844_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object* v_inst_4852_, lean_object* v_xs_4853_){
_start:
{
lean_object* v___x_4854_; lean_object* v___x_4855_; uint8_t v___x_4856_; 
v___x_4854_ = lean_array_get_size(v_xs_4853_);
v___x_4855_ = lean_unsigned_to_nat(0u);
v___x_4856_ = lean_nat_dec_eq(v___x_4854_, v___x_4855_);
if (v___x_4856_ == 0)
{
lean_object* v_x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
v_x_4857_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_4857_, 0, lean_box(0));
lean_closure_set(v_x_4857_, 1, v_inst_4852_);
v___x_4858_ = lean_array_to_list(v_xs_4853_);
v___x_4859_ = ((lean_object*)(l_Array_repr___redArg___closed__1));
v___x_4860_ = l_Std_Format_joinSep___redArg(v_x_4857_, v___x_4858_, v___x_4859_);
v___x_4861_ = lean_obj_once(&l_Array_repr___redArg___closed__3, &l_Array_repr___redArg___closed__3_once, _init_l_Array_repr___redArg___closed__3);
v___x_4862_ = ((lean_object*)(l_Array_repr___redArg___closed__4));
v___x_4863_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4863_, 0, v___x_4862_);
lean_ctor_set(v___x_4863_, 1, v___x_4860_);
v___x_4864_ = ((lean_object*)(l_Array_repr___redArg___closed__5));
v___x_4865_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4865_, 0, v___x_4863_);
lean_ctor_set(v___x_4865_, 1, v___x_4864_);
v___x_4866_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4861_);
lean_ctor_set(v___x_4866_, 1, v___x_4865_);
v___x_4867_ = l_Std_Format_fill(v___x_4866_);
return v___x_4867_;
}
else
{
lean_object* v___x_4868_; 
lean_dec_ref(v_xs_4853_);
lean_dec_ref(v_inst_4852_);
v___x_4868_ = ((lean_object*)(l_Array_repr___redArg___closed__7));
return v___x_4868_;
}
}
}
LEAN_EXPORT lean_object* l_Array_repr(lean_object* v_00_u03b1_4869_, lean_object* v_inst_4870_, lean_object* v_xs_4871_){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = l_Array_repr___redArg(v_inst_4870_, v_xs_4871_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object* v_inst_4873_, lean_object* v_xs_4874_, lean_object* v_x_4875_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = l_Array_repr___redArg(v_inst_4873_, v_xs_4874_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object* v_inst_4877_, lean_object* v_xs_4878_, lean_object* v_x_4879_){
_start:
{
lean_object* v_res_4880_; 
v_res_4880_ = l_Array_instRepr___redArg___lam__0(v_inst_4877_, v_xs_4878_, v_x_4879_);
lean_dec(v_x_4879_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object* v_inst_4881_){
_start:
{
lean_object* v___f_4882_; 
v___f_4882_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4882_, 0, v_inst_4881_);
return v___f_4882_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object* v_00_u03b1_4883_, lean_object* v_inst_4884_){
_start:
{
lean_object* v___f_4885_; 
v___f_4885_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4885_, 0, v_inst_4884_);
return v___f_4885_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_GetElem(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_WF(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_swap___auto__1 = _init_l_Array_swap___auto__1();
lean_mark_persistent(l_Array_swap___auto__1);
l_Array_swap___auto__3 = _init_l_Array_swap___auto__3();
lean_mark_persistent(l_Array_swap___auto__3);
l_Array_back___auto__1 = _init_l_Array_back___auto__1();
lean_mark_persistent(l_Array_back___auto__1);
l_Array_swapAt___auto__1 = _init_l_Array_swapAt___auto__1();
lean_mark_persistent(l_Array_swapAt___auto__1);
l_Array_eraseIdx___auto__1 = _init_l_Array_eraseIdx___auto__1();
lean_mark_persistent(l_Array_eraseIdx___auto__1);
l_Array_insertIdx___auto__1 = _init_l_Array_insertIdx___auto__1();
lean_mark_persistent(l_Array_insertIdx___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_GetElem(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_WF(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
