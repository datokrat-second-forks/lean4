// Lean compiler output
// Module: Init.Data.List.Basic
// Imports: public import Init.Data.List.Notation public import Init.Data.Zero public import Init.Grind.Tactics public import Init.SimpLemmas import Init.Data.Nat.Basic
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_List_length___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_instBEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isEqv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isEqv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqNilImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqNilImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqNilImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqNilImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListNilEqImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListNilEqImpl___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListNilEqImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListNilEqImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instListEqImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instListEqImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLex___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLT___redArg();
LEAN_EXPORT lean_object* l_List_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instLT(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLT___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLE___redArg();
LEAN_EXPORT lean_object* l_List_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instLE(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLE___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_lex___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_List_lex___auto__1___closed__0 = (const lean_object*)&l_List_lex___auto__1___closed__0_value;
static const lean_string_object l_List_lex___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_List_lex___auto__1___closed__1 = (const lean_object*)&l_List_lex___auto__1___closed__1_value;
static const lean_string_object l_List_lex___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_List_lex___auto__1___closed__2 = (const lean_object*)&l_List_lex___auto__1___closed__2_value;
static const lean_string_object l_List_lex___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_List_lex___auto__1___closed__3 = (const lean_object*)&l_List_lex___auto__1___closed__3_value;
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_List_lex___auto__1___closed__4 = (const lean_object*)&l_List_lex___auto__1___closed__4_value;
static const lean_array_object l_List_lex___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_lex___auto__1___closed__5 = (const lean_object*)&l_List_lex___auto__1___closed__5_value;
static const lean_string_object l_List_lex___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_List_lex___auto__1___closed__6 = (const lean_object*)&l_List_lex___auto__1___closed__6_value;
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_List_lex___auto__1___closed__7 = (const lean_object*)&l_List_lex___auto__1___closed__7_value;
static const lean_string_object l_List_lex___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_List_lex___auto__1___closed__8 = (const lean_object*)&l_List_lex___auto__1___closed__8_value;
static const lean_ctor_object l_List_lex___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_List_lex___auto__1___closed__9 = (const lean_object*)&l_List_lex___auto__1___closed__9_value;
static const lean_string_object l_List_lex___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_List_lex___auto__1___closed__10 = (const lean_object*)&l_List_lex___auto__1___closed__10_value;
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_List_lex___auto__1___closed__11 = (const lean_object*)&l_List_lex___auto__1___closed__11_value;
static lean_once_cell_t l_List_lex___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__12;
static lean_once_cell_t l_List_lex___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__13;
static const lean_string_object l_List_lex___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_List_lex___auto__1___closed__14 = (const lean_object*)&l_List_lex___auto__1___closed__14_value;
static const lean_string_object l_List_lex___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_List_lex___auto__1___closed__15 = (const lean_object*)&l_List_lex___auto__1___closed__15_value;
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_List_lex___auto__1___closed__16 = (const lean_object*)&l_List_lex___auto__1___closed__16_value;
static const lean_string_object l_List_lex___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_List_lex___auto__1___closed__17 = (const lean_object*)&l_List_lex___auto__1___closed__17_value;
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_List_lex___auto__1___closed__18 = (const lean_object*)&l_List_lex___auto__1___closed__18_value;
static const lean_string_object l_List_lex___auto__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_List_lex___auto__1___closed__19 = (const lean_object*)&l_List_lex___auto__1___closed__19_value;
static lean_once_cell_t l_List_lex___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__20;
static lean_once_cell_t l_List_lex___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__21;
static const lean_string_object l_List_lex___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_List_lex___auto__1___closed__22 = (const lean_object*)&l_List_lex___auto__1___closed__22_value;
static const lean_ctor_object l_List_lex___auto__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_List_lex___auto__1___closed__23 = (const lean_object*)&l_List_lex___auto__1___closed__23_value;
static const lean_string_object l_List_lex___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_List_lex___auto__1___closed__24 = (const lean_object*)&l_List_lex___auto__1___closed__24_value;
static const lean_ctor_object l_List_lex___auto__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* l_List_lex___auto__1___closed__25 = (const lean_object*)&l_List_lex___auto__1___closed__25_value;
static const lean_ctor_object l_List_lex___auto__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 3}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_lex___auto__1___closed__26 = (const lean_object*)&l_List_lex___auto__1___closed__26_value;
static lean_once_cell_t l_List_lex___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__27;
static lean_once_cell_t l_List_lex___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__28;
static lean_once_cell_t l_List_lex___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__29;
static lean_once_cell_t l_List_lex___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__30;
static lean_once_cell_t l_List_lex___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__31;
static const lean_string_object l_List_lex___auto__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l_List_lex___auto__1___closed__32 = (const lean_object*)&l_List_lex___auto__1___closed__32_value;
static const lean_ctor_object l_List_lex___auto__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l_List_lex___auto__1___closed__33 = (const lean_object*)&l_List_lex___auto__1___closed__33_value;
static const lean_string_object l_List_lex___auto__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_List_lex___auto__1___closed__34 = (const lean_object*)&l_List_lex___auto__1___closed__34_value;
static const lean_ctor_object l_List_lex___auto__1___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__35_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__35_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__35_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l_List_lex___auto__1___closed__35 = (const lean_object*)&l_List_lex___auto__1___closed__35_value;
static const lean_string_object l_List_lex___auto__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_List_lex___auto__1___closed__36 = (const lean_object*)&l_List_lex___auto__1___closed__36_value;
static lean_once_cell_t l_List_lex___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__37;
static lean_once_cell_t l_List_lex___auto__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__38;
static lean_once_cell_t l_List_lex___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__39;
static lean_once_cell_t l_List_lex___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__40;
static lean_once_cell_t l_List_lex___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__41;
static const lean_string_object l_List_lex___auto__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_List_lex___auto__1___closed__42 = (const lean_object*)&l_List_lex___auto__1___closed__42_value;
static lean_once_cell_t l_List_lex___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__43;
static lean_once_cell_t l_List_lex___auto__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__44;
static lean_once_cell_t l_List_lex___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__45;
static lean_once_cell_t l_List_lex___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__46;
static lean_once_cell_t l_List_lex___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__47;
static const lean_string_object l_List_lex___auto__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_List_lex___auto__1___closed__48 = (const lean_object*)&l_List_lex___auto__1___closed__48_value;
static lean_once_cell_t l_List_lex___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__49;
static lean_once_cell_t l_List_lex___auto__1___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__50;
static lean_once_cell_t l_List_lex___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__51;
static lean_once_cell_t l_List_lex___auto__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__52;
static lean_once_cell_t l_List_lex___auto__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__53;
static lean_once_cell_t l_List_lex___auto__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__54;
static lean_once_cell_t l_List_lex___auto__1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__55;
static lean_once_cell_t l_List_lex___auto__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__56;
static lean_once_cell_t l_List_lex___auto__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__57;
static lean_once_cell_t l_List_lex___auto__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__58;
static lean_once_cell_t l_List_lex___auto__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__59;
LEAN_EXPORT lean_object* l_List_lex___auto__1;
LEAN_EXPORT uint8_t l_List_lex___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_lex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_head___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_head(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_tail___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_tail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_appendTR(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_appendTR, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_List_instAppend___redArg___closed__0 = (const lean_object*)&l_List_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_instAppend___redArg();
LEAN_EXPORT lean_object* l_List_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instEmptyCollection(lean_object*);
LEAN_EXPORT uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instMembership___redArg();
LEAN_EXPORT lean_object* l_List_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instMembership(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBEx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBEx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBEx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBAll___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_partition___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_partition___redArg___closed__0 = (const lean_object*)&l_List_partition___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_partition___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropLast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_dropLast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg();
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instHasSubset(lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x2b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_List_term___x3c_x2b___00__closed__0 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__0_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_<+_"};
static const lean_object* l_List_term___x3c_x2b___00__closed__1 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__1_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__2_value_aux_0),((lean_object*)&l_List_term___x3c_x2b___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 196, 185, 53, 62, 139, 215, 69)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__2 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__2_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_List_term___x3c_x2b___00__closed__3 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__4 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__4_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " <+ "};
static const lean_object* l_List_term___x3c_x2b___00__closed__5 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__5_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__5_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__6 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__6_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_List_term___x3c_x2b___00__closed__7 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__7_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__8 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__8_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__8_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_List_term___x3c_x2b___00__closed__9 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__9_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__6_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__10 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__10_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__2_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__10_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__11 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__11_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x2b__ = (const lean_object*)&l_List_term___x3c_x2b___00__closed__11_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_2),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Sublist"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 57, 174, 210, 111, 90, 29, 55)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 22, 78, 3, 46, 110, 14, 182)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSublist___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSublist___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSublist(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSublist___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x2b_x3a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<+:_"};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__0 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 46, 199, 175, 86, 17, 90, 157)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__1 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x2b_x3a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <+: "};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__2 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__3 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__4 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__5 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x2b_x3a__ = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "IsPrefix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 111, 237, 222, 126, 19, 59, 60)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 46, 95, 235, 1, 49, 30, 153)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSuffixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSuffixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x3a_x2b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<:+_"};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__0 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 113, 2, 132, 68, 188, 186, 46)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__1 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x3a_x2b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <:+ "};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__2 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__3 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__4 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__5 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x3a_x2b__ = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "IsSuffix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 165, 175, 201, 24, 12, 223, 31)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 140, 134, 30, 20, 233, 184, 173)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_<:+:_"};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__0 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 100, 205, 176, 23, 167, 63, 78)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__1 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " <:+: "};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__2 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__3 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__4 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__5 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x3a_x2b_x3a__ = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IsInfix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 240, 110, 175, 10, 19, 61, 151)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 172, 213, 72, 247, 99, 170, 125)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isInfixOf__internal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isInfixOf__internal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidablePairwise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidablePairwise(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyHead___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyHead(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_idxOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_count(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x7e___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_~_"};
static const lean_object* l_List_term___x7e___00__closed__0 = (const lean_object*)&l_List_term___x7e___00__closed__0_value;
static const lean_ctor_object l_List_term___x7e___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x7e___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x7e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 66, 91, 28, 235, 133, 125, 244)}};
static const lean_object* l_List_term___x7e___00__closed__1 = (const lean_object*)&l_List_term___x7e___00__closed__1_value;
static const lean_string_object l_List_term___x7e___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ~ "};
static const lean_object* l_List_term___x7e___00__closed__2 = (const lean_object*)&l_List_term___x7e___00__closed__2_value;
static const lean_ctor_object l_List_term___x7e___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__2_value)}};
static const lean_object* l_List_term___x7e___00__closed__3 = (const lean_object*)&l_List_term___x7e___00__closed__3_value;
static const lean_ctor_object l_List_term___x7e___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x7e___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x7e___00__closed__4 = (const lean_object*)&l_List_term___x7e___00__closed__4_value;
static const lean_ctor_object l_List_term___x7e___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x7e___00__closed__4_value)}};
static const lean_object* l_List_term___x7e___00__closed__5 = (const lean_object*)&l_List_term___x7e___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x7e__ = (const lean_object*)&l_List_term___x7e___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Perm"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 39, 207, 243, 25, 131, 84, 93)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 187, 193, 253, 117, 51, 247, 91)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPerm___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPerm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPerm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_or_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_or_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_or(lean_object*);
LEAN_EXPORT lean_object* l_List_or___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00List_and_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00List_and_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_and(lean_object*);
LEAN_EXPORT lean_object* l_List_and___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_unzip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_eraseDups___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_removeAll___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_unzipTR___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_unzipTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperseTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperseTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instBEq___redArg(lean_object* v_inst_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_alloc_closure((void*)(l_List_beq___boxed), 4, 2);
lean_closure_set(v___x_2_, 0, lean_box(0));
lean_closure_set(v___x_2_, 1, v_inst_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_List_instBEq(lean_object* v_00_u03b1_3_, lean_object* v_inst_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_closure((void*)(l_List_beq___boxed), 4, 2);
lean_closure_set(v___x_5_, 0, lean_box(0));
lean_closure_set(v___x_5_, 1, v_inst_4_);
return v___x_5_;
}
}
LEAN_EXPORT uint8_t l_List_isEqv___redArg(lean_object* v_x_6_, lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
if (lean_obj_tag(v_x_6_) == 0)
{
lean_dec_ref(v_x_8_);
if (lean_obj_tag(v_x_7_) == 0)
{
uint8_t v___x_9_; 
v___x_9_ = 1;
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec_ref_known(v_x_7_, 2);
v___x_10_ = 0;
return v___x_10_;
}
}
else
{
if (lean_obj_tag(v_x_7_) == 0)
{
uint8_t v___x_11_; 
lean_dec_ref_known(v_x_6_, 2);
lean_dec_ref(v_x_8_);
v___x_11_ = 0;
return v___x_11_;
}
else
{
lean_object* v_head_12_; lean_object* v_tail_13_; lean_object* v_head_14_; lean_object* v_tail_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v_head_12_ = lean_ctor_get(v_x_6_, 0);
lean_inc(v_head_12_);
v_tail_13_ = lean_ctor_get(v_x_6_, 1);
lean_inc(v_tail_13_);
lean_dec_ref_known(v_x_6_, 2);
v_head_14_ = lean_ctor_get(v_x_7_, 0);
lean_inc(v_head_14_);
v_tail_15_ = lean_ctor_get(v_x_7_, 1);
lean_inc(v_tail_15_);
lean_dec_ref_known(v_x_7_, 2);
lean_inc_ref(v_x_8_);
v___x_16_ = lean_apply_2(v_x_8_, v_head_12_, v_head_14_);
v___x_17_ = lean_unbox(v___x_16_);
if (v___x_17_ == 0)
{
uint8_t v___x_18_; 
lean_dec(v_tail_15_);
lean_dec(v_tail_13_);
lean_dec_ref(v_x_8_);
v___x_18_ = lean_unbox(v___x_16_);
return v___x_18_;
}
else
{
v_x_6_ = v_tail_13_;
v_x_7_ = v_tail_15_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isEqv___redArg___boxed(lean_object* v_x_20_, lean_object* v_x_21_, lean_object* v_x_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_List_isEqv___redArg(v_x_20_, v_x_21_, v_x_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t l_List_isEqv(lean_object* v_00_u03b1_25_, lean_object* v_x_26_, lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
uint8_t v___x_29_; 
v___x_29_ = l_List_isEqv___redArg(v_x_26_, v_x_27_, v_x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_List_isEqv___boxed(lean_object* v_00_u03b1_30_, lean_object* v_x_31_, lean_object* v_x_32_, lean_object* v_x_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = l_List_isEqv(v_00_u03b1_30_, v_x_31_, v_x_32_, v_x_33_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqNilImpl___redArg(lean_object* v_l_36_){
_start:
{
if (lean_obj_tag(v_l_36_) == 0)
{
uint8_t v___x_37_; 
v___x_37_ = 1;
return v___x_37_;
}
else
{
uint8_t v___x_38_; 
v___x_38_ = 0;
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqNilImpl___redArg___boxed(lean_object* v_l_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = l_UDecidable_instListEqNilImpl___redArg(v_l_39_);
lean_dec(v_l_39_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqNilImpl(lean_object* v_00_u03b1_42_, lean_object* v_l_43_){
_start:
{
if (lean_obj_tag(v_l_43_) == 0)
{
uint8_t v___x_44_; 
v___x_44_ = 1;
return v___x_44_;
}
else
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqNilImpl___boxed(lean_object* v_00_u03b1_46_, lean_object* v_l_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = l_UDecidable_instListEqNilImpl(v_00_u03b1_46_, v_l_47_);
lean_dec(v_l_47_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListNilEqImpl___redArg(lean_object* v_l_50_){
_start:
{
if (lean_obj_tag(v_l_50_) == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListNilEqImpl___redArg___boxed(lean_object* v_l_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_UDecidable_instListNilEqImpl___redArg(v_l_53_);
lean_dec(v_l_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListNilEqImpl(lean_object* v_00_u03b1_56_, lean_object* v_l_57_){
_start:
{
if (lean_obj_tag(v_l_57_) == 0)
{
uint8_t v___x_58_; 
v___x_58_ = 1;
return v___x_58_;
}
else
{
uint8_t v___x_59_; 
v___x_59_ = 0;
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListNilEqImpl___boxed(lean_object* v_00_u03b1_60_, lean_object* v_l_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_UDecidable_instListNilEqImpl(v_00_u03b1_60_, v_l_61_);
lean_dec(v_l_61_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqImpl___redArg(lean_object* v_inst_64_, lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_dec_ref(v_inst_64_);
if (lean_obj_tag(v_x_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 1;
return v___x_67_;
}
else
{
uint8_t v___x_68_; 
lean_dec_ref_known(v_x_66_, 2);
v___x_68_ = 0;
return v___x_68_;
}
}
else
{
if (lean_obj_tag(v_x_66_) == 0)
{
uint8_t v___x_69_; 
lean_dec_ref_known(v_x_65_, 2);
lean_dec_ref(v_inst_64_);
v___x_69_ = 0;
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v_head_72_; lean_object* v_tail_73_; uint8_t v_this_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_head_70_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_head_70_);
v_tail_71_ = lean_ctor_get(v_x_65_, 1);
lean_inc(v_tail_71_);
lean_dec_ref_known(v_x_65_, 2);
v_head_72_ = lean_ctor_get(v_x_66_, 0);
lean_inc(v_head_72_);
v_tail_73_ = lean_ctor_get(v_x_66_, 1);
lean_inc(v_tail_73_);
lean_dec_ref_known(v_x_66_, 2);
lean_inc_ref(v_inst_64_);
v_this_74_ = l_UDecidable_instListEqImpl___redArg(v_inst_64_, v_tail_71_, v_tail_73_);
v___x_75_ = lean_apply_2(v_inst_64_, v_head_70_, v_head_72_);
v___x_76_ = lean_unbox(v___x_75_);
if (v___x_76_ == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_unbox(v___x_75_);
return v___x_77_;
}
else
{
return v_this_74_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqImpl___redArg___boxed(lean_object* v_inst_78_, lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_UDecidable_instListEqImpl___redArg(v_inst_78_, v_x_79_, v_x_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instListEqImpl(lean_object* v_00_u03b1_83_, lean_object* v_inst_84_, lean_object* v_x_85_, lean_object* v_x_86_){
_start:
{
uint8_t v___x_87_; 
v___x_87_ = l_UDecidable_instListEqImpl___redArg(v_inst_84_, v_x_85_, v_x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instListEqImpl___boxed(lean_object* v_00_u03b1_88_, lean_object* v_inst_89_, lean_object* v_x_90_, lean_object* v_x_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = l_UDecidable_instListEqImpl(v_00_u03b1_88_, v_inst_89_, v_x_90_, v_x_91_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLex___redArg(lean_object* v_inst_94_, lean_object* v_h_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_dec_ref(v_h_95_);
lean_dec_ref(v_inst_94_);
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_98_; 
v___x_98_ = 0;
return v___x_98_;
}
else
{
uint8_t v___x_99_; 
lean_dec_ref_known(v_x_97_, 2);
v___x_99_ = 1;
return v___x_99_;
}
}
else
{
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_100_; 
lean_dec_ref_known(v_x_96_, 2);
lean_dec_ref(v_h_95_);
lean_dec_ref(v_inst_94_);
v___x_100_ = 0;
return v___x_100_;
}
else
{
lean_object* v_head_101_; lean_object* v_tail_102_; lean_object* v_head_103_; lean_object* v_tail_104_; lean_object* v_decide_105_; uint8_t v___x_106_; 
v_head_101_ = lean_ctor_get(v_x_96_, 0);
lean_inc_n(v_head_101_, 2);
v_tail_102_ = lean_ctor_get(v_x_96_, 1);
lean_inc(v_tail_102_);
lean_dec_ref_known(v_x_96_, 2);
v_head_103_ = lean_ctor_get(v_x_97_, 0);
lean_inc_n(v_head_103_, 2);
v_tail_104_ = lean_ctor_get(v_x_97_, 1);
lean_inc(v_tail_104_);
lean_dec_ref_known(v_x_97_, 2);
lean_inc_ref(v_h_95_);
v_decide_105_ = lean_apply_2(v_h_95_, v_head_101_, v_head_103_);
v___x_106_ = lean_unbox(v_decide_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; uint8_t v___x_108_; 
lean_inc_ref(v_inst_94_);
v___x_107_ = lean_apply_2(v_inst_94_, v_head_101_, v_head_103_);
v___x_108_ = lean_unbox(v___x_107_);
if (v___x_108_ == 0)
{
uint8_t v___x_109_; 
lean_dec(v_tail_104_);
lean_dec(v_tail_102_);
lean_dec_ref(v_h_95_);
lean_dec_ref(v_inst_94_);
v___x_109_ = lean_unbox(v___x_107_);
return v___x_109_;
}
else
{
uint8_t v_decide_110_; 
v_decide_110_ = l_List_decidableLex___redArg(v_inst_94_, v_h_95_, v_tail_102_, v_tail_104_);
if (v_decide_110_ == 0)
{
return v_decide_110_;
}
else
{
uint8_t v___x_111_; 
v___x_111_ = lean_unbox(v___x_107_);
return v___x_111_;
}
}
}
else
{
uint8_t v___x_112_; 
lean_dec(v_tail_104_);
lean_dec(v_head_103_);
lean_dec(v_tail_102_);
lean_dec(v_head_101_);
lean_dec_ref(v_h_95_);
lean_dec_ref(v_inst_94_);
v___x_112_ = lean_unbox(v_decide_105_);
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableLex___redArg___boxed(lean_object* v_inst_113_, lean_object* v_h_114_, lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
uint8_t v_res_117_; lean_object* v_r_118_; 
v_res_117_ = l_List_decidableLex___redArg(v_inst_113_, v_h_114_, v_x_115_, v_x_116_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLex(lean_object* v_00_u03b1_119_, lean_object* v_inst_120_, lean_object* v_r_121_, lean_object* v_h_122_, lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v___x_125_; 
v___x_125_ = l_List_decidableLex___redArg(v_inst_120_, v_h_122_, v_x_123_, v_x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLex___boxed(lean_object* v_00_u03b1_126_, lean_object* v_inst_127_, lean_object* v_r_128_, lean_object* v_h_129_, lean_object* v_x_130_, lean_object* v_x_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_List_decidableLex(v_00_u03b1_126_, v_inst_127_, v_r_128_, v_h_129_, v_x_130_, v_x_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT lean_object* l_List_instLT___redArg(){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_box(0);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_List_instLT___redArg___boxed(lean_object* v___dummy_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_List_instLT___redArg();
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_List_instLT(lean_object* v_00_u03b1_138_, lean_object* v_inst_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_box(0);
return v___x_140_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLT___redArg(lean_object* v_inst_141_, lean_object* v_inst_142_, lean_object* v_l_u2081_143_, lean_object* v_l_u2082_144_){
_start:
{
uint8_t v___x_145_; 
v___x_145_ = l_List_decidableLex___redArg(v_inst_141_, v_inst_142_, v_l_u2081_143_, v_l_u2082_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLT___redArg___boxed(lean_object* v_inst_146_, lean_object* v_inst_147_, lean_object* v_l_u2081_148_, lean_object* v_l_u2082_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_List_decidableLT___redArg(v_inst_146_, v_inst_147_, v_l_u2081_148_, v_l_u2082_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLT(lean_object* v_00_u03b1_152_, lean_object* v_inst_153_, lean_object* v_inst_154_, lean_object* v_inst_155_, lean_object* v_l_u2081_156_, lean_object* v_l_u2082_157_){
_start:
{
uint8_t v___x_158_; 
v___x_158_ = l_List_decidableLex___redArg(v_inst_153_, v_inst_155_, v_l_u2081_156_, v_l_u2082_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLT___boxed(lean_object* v_00_u03b1_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_l_u2081_163_, lean_object* v_l_u2082_164_){
_start:
{
uint8_t v_res_165_; lean_object* v_r_166_; 
v_res_165_ = l_List_decidableLT(v_00_u03b1_159_, v_inst_160_, v_inst_161_, v_inst_162_, v_l_u2081_163_, v_l_u2082_164_);
v_r_166_ = lean_box(v_res_165_);
return v_r_166_;
}
}
LEAN_EXPORT lean_object* l_List_instLE___redArg(){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_box(0);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_List_instLE___redArg___boxed(lean_object* v___dummy_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_List_instLE___redArg();
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_List_instLE(lean_object* v_00_u03b1_171_, lean_object* v_inst_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_box(0);
return v___x_173_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLE___redArg(lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_l_u2081_176_, lean_object* v_l_u2082_177_){
_start:
{
uint8_t v___x_178_; 
v___x_178_ = l_List_decidableLex___redArg(v_inst_174_, v_inst_175_, v_l_u2082_177_, v_l_u2081_176_);
if (v___x_178_ == 0)
{
uint8_t v___x_179_; 
v___x_179_ = 1;
return v___x_179_;
}
else
{
uint8_t v___x_180_; 
v___x_180_ = 0;
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_List_decidableLE___redArg___boxed(lean_object* v_inst_181_, lean_object* v_inst_182_, lean_object* v_l_u2081_183_, lean_object* v_l_u2082_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_List_decidableLE___redArg(v_inst_181_, v_inst_182_, v_l_u2081_183_, v_l_u2082_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLE(lean_object* v_00_u03b1_187_, lean_object* v_inst_188_, lean_object* v_inst_189_, lean_object* v_inst_190_, lean_object* v_l_u2081_191_, lean_object* v_l_u2082_192_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = l_List_decidableLE___redArg(v_inst_188_, v_inst_190_, v_l_u2081_191_, v_l_u2082_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLE___boxed(lean_object* v_00_u03b1_194_, lean_object* v_inst_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_l_u2081_198_, lean_object* v_l_u2082_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_List_decidableLE(v_00_u03b1_194_, v_inst_195_, v_inst_196_, v_inst_197_, v_l_u2081_198_, v_l_u2082_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__12(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = ((lean_object*)(l_List_lex___auto__1___closed__10));
v___x_229_ = l_Lean_mkAtom(v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__13(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_obj_once(&l_List_lex___auto__1___closed__12, &l_List_lex___auto__1___closed__12_once, _init_l_List_lex___auto__1___closed__12);
v___x_231_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_232_ = lean_array_push(v___x_231_, v___x_230_);
return v___x_232_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__20(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l_List_lex___auto__1___closed__19));
v___x_248_ = l_Lean_mkAtom(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__21(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l_List_lex___auto__1___closed__20, &l_List_lex___auto__1___closed__20_once, _init_l_List_lex___auto__1___closed__20);
v___x_250_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_251_ = lean_array_push(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__27(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = ((lean_object*)(l_List_lex___auto__1___closed__26));
v___x_266_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_267_ = lean_array_push(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__28(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_obj_once(&l_List_lex___auto__1___closed__27, &l_List_lex___auto__1___closed__27_once, _init_l_List_lex___auto__1___closed__27);
v___x_269_ = ((lean_object*)(l_List_lex___auto__1___closed__23));
v___x_270_ = lean_box(2);
v___x_271_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_269_);
lean_ctor_set(v___x_271_, 2, v___x_268_);
return v___x_271_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__29(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_List_lex___auto__1___closed__28, &l_List_lex___auto__1___closed__28_once, _init_l_List_lex___auto__1___closed__28);
v___x_273_ = lean_obj_once(&l_List_lex___auto__1___closed__21, &l_List_lex___auto__1___closed__21_once, _init_l_List_lex___auto__1___closed__21);
v___x_274_ = lean_array_push(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__30(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_275_ = lean_obj_once(&l_List_lex___auto__1___closed__29, &l_List_lex___auto__1___closed__29_once, _init_l_List_lex___auto__1___closed__29);
v___x_276_ = ((lean_object*)(l_List_lex___auto__1___closed__18));
v___x_277_ = lean_box(2);
v___x_278_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___x_276_);
lean_ctor_set(v___x_278_, 2, v___x_275_);
return v___x_278_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__31(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_obj_once(&l_List_lex___auto__1___closed__30, &l_List_lex___auto__1___closed__30_once, _init_l_List_lex___auto__1___closed__30);
v___x_280_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_281_ = lean_array_push(v___x_280_, v___x_279_);
return v___x_281_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__37(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_List_lex___auto__1___closed__36));
v___x_293_ = l_Lean_mkAtom(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__38(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_obj_once(&l_List_lex___auto__1___closed__37, &l_List_lex___auto__1___closed__37_once, _init_l_List_lex___auto__1___closed__37);
v___x_295_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_296_ = lean_array_push(v___x_295_, v___x_294_);
return v___x_296_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__39(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_obj_once(&l_List_lex___auto__1___closed__28, &l_List_lex___auto__1___closed__28_once, _init_l_List_lex___auto__1___closed__28);
v___x_298_ = lean_obj_once(&l_List_lex___auto__1___closed__38, &l_List_lex___auto__1___closed__38_once, _init_l_List_lex___auto__1___closed__38);
v___x_299_ = lean_array_push(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__40(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = lean_obj_once(&l_List_lex___auto__1___closed__39, &l_List_lex___auto__1___closed__39_once, _init_l_List_lex___auto__1___closed__39);
v___x_301_ = ((lean_object*)(l_List_lex___auto__1___closed__35));
v___x_302_ = lean_box(2);
v___x_303_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set(v___x_303_, 1, v___x_301_);
lean_ctor_set(v___x_303_, 2, v___x_300_);
return v___x_303_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__41(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_obj_once(&l_List_lex___auto__1___closed__40, &l_List_lex___auto__1___closed__40_once, _init_l_List_lex___auto__1___closed__40);
v___x_305_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_306_ = lean_array_push(v___x_305_, v___x_304_);
return v___x_306_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__43(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(l_List_lex___auto__1___closed__42));
v___x_309_ = l_Lean_mkAtom(v___x_308_);
return v___x_309_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__44(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_List_lex___auto__1___closed__43, &l_List_lex___auto__1___closed__43_once, _init_l_List_lex___auto__1___closed__43);
v___x_311_ = lean_obj_once(&l_List_lex___auto__1___closed__41, &l_List_lex___auto__1___closed__41_once, _init_l_List_lex___auto__1___closed__41);
v___x_312_ = lean_array_push(v___x_311_, v___x_310_);
return v___x_312_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__45(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_obj_once(&l_List_lex___auto__1___closed__40, &l_List_lex___auto__1___closed__40_once, _init_l_List_lex___auto__1___closed__40);
v___x_314_ = lean_obj_once(&l_List_lex___auto__1___closed__44, &l_List_lex___auto__1___closed__44_once, _init_l_List_lex___auto__1___closed__44);
v___x_315_ = lean_array_push(v___x_314_, v___x_313_);
return v___x_315_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__46(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_316_ = lean_obj_once(&l_List_lex___auto__1___closed__45, &l_List_lex___auto__1___closed__45_once, _init_l_List_lex___auto__1___closed__45);
v___x_317_ = ((lean_object*)(l_List_lex___auto__1___closed__33));
v___x_318_ = lean_box(2);
v___x_319_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
lean_ctor_set(v___x_319_, 2, v___x_316_);
return v___x_319_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__47(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&l_List_lex___auto__1___closed__46, &l_List_lex___auto__1___closed__46_once, _init_l_List_lex___auto__1___closed__46);
v___x_321_ = lean_obj_once(&l_List_lex___auto__1___closed__31, &l_List_lex___auto__1___closed__31_once, _init_l_List_lex___auto__1___closed__31);
v___x_322_ = lean_array_push(v___x_321_, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__49(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l_List_lex___auto__1___closed__48));
v___x_325_ = l_Lean_mkAtom(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__50(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_obj_once(&l_List_lex___auto__1___closed__49, &l_List_lex___auto__1___closed__49_once, _init_l_List_lex___auto__1___closed__49);
v___x_327_ = lean_obj_once(&l_List_lex___auto__1___closed__47, &l_List_lex___auto__1___closed__47_once, _init_l_List_lex___auto__1___closed__47);
v___x_328_ = lean_array_push(v___x_327_, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__51(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = lean_obj_once(&l_List_lex___auto__1___closed__50, &l_List_lex___auto__1___closed__50_once, _init_l_List_lex___auto__1___closed__50);
v___x_330_ = ((lean_object*)(l_List_lex___auto__1___closed__16));
v___x_331_ = lean_box(2);
v___x_332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
lean_ctor_set(v___x_332_, 2, v___x_329_);
return v___x_332_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__52(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = lean_obj_once(&l_List_lex___auto__1___closed__51, &l_List_lex___auto__1___closed__51_once, _init_l_List_lex___auto__1___closed__51);
v___x_334_ = lean_obj_once(&l_List_lex___auto__1___closed__13, &l_List_lex___auto__1___closed__13_once, _init_l_List_lex___auto__1___closed__13);
v___x_335_ = lean_array_push(v___x_334_, v___x_333_);
return v___x_335_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__53(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_336_ = lean_obj_once(&l_List_lex___auto__1___closed__52, &l_List_lex___auto__1___closed__52_once, _init_l_List_lex___auto__1___closed__52);
v___x_337_ = ((lean_object*)(l_List_lex___auto__1___closed__11));
v___x_338_ = lean_box(2);
v___x_339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
lean_ctor_set(v___x_339_, 2, v___x_336_);
return v___x_339_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__54(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_obj_once(&l_List_lex___auto__1___closed__53, &l_List_lex___auto__1___closed__53_once, _init_l_List_lex___auto__1___closed__53);
v___x_341_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_342_ = lean_array_push(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__55(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = lean_obj_once(&l_List_lex___auto__1___closed__54, &l_List_lex___auto__1___closed__54_once, _init_l_List_lex___auto__1___closed__54);
v___x_344_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_345_ = lean_box(2);
v___x_346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
lean_ctor_set(v___x_346_, 2, v___x_343_);
return v___x_346_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__56(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_obj_once(&l_List_lex___auto__1___closed__55, &l_List_lex___auto__1___closed__55_once, _init_l_List_lex___auto__1___closed__55);
v___x_348_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_349_ = lean_array_push(v___x_348_, v___x_347_);
return v___x_349_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__57(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_350_ = lean_obj_once(&l_List_lex___auto__1___closed__56, &l_List_lex___auto__1___closed__56_once, _init_l_List_lex___auto__1___closed__56);
v___x_351_ = ((lean_object*)(l_List_lex___auto__1___closed__7));
v___x_352_ = lean_box(2);
v___x_353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___x_351_);
lean_ctor_set(v___x_353_, 2, v___x_350_);
return v___x_353_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__58(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = lean_obj_once(&l_List_lex___auto__1___closed__57, &l_List_lex___auto__1___closed__57_once, _init_l_List_lex___auto__1___closed__57);
v___x_355_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_356_ = lean_array_push(v___x_355_, v___x_354_);
return v___x_356_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__59(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_357_ = lean_obj_once(&l_List_lex___auto__1___closed__58, &l_List_lex___auto__1___closed__58_once, _init_l_List_lex___auto__1___closed__58);
v___x_358_ = ((lean_object*)(l_List_lex___auto__1___closed__4));
v___x_359_ = lean_box(2);
v___x_360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_358_);
lean_ctor_set(v___x_360_, 2, v___x_357_);
return v___x_360_;
}
}
static lean_object* _init_l_List_lex___auto__1(void){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&l_List_lex___auto__1___closed__59, &l_List_lex___auto__1___closed__59_once, _init_l_List_lex___auto__1___closed__59);
return v___x_361_;
}
}
LEAN_EXPORT uint8_t l_List_lex___redArg(lean_object* v_inst_362_, lean_object* v_l_u2081_363_, lean_object* v_l_u2082_364_, lean_object* v_lt_365_){
_start:
{
if (lean_obj_tag(v_l_u2081_363_) == 0)
{
lean_dec_ref(v_lt_365_);
lean_dec_ref(v_inst_362_);
if (lean_obj_tag(v_l_u2082_364_) == 0)
{
uint8_t v___x_366_; 
v___x_366_ = 0;
return v___x_366_;
}
else
{
uint8_t v___x_367_; 
lean_dec_ref_known(v_l_u2082_364_, 2);
v___x_367_ = 1;
return v___x_367_;
}
}
else
{
if (lean_obj_tag(v_l_u2082_364_) == 0)
{
uint8_t v___x_368_; 
lean_dec_ref_known(v_l_u2081_363_, 2);
lean_dec_ref(v_lt_365_);
lean_dec_ref(v_inst_362_);
v___x_368_ = 0;
return v___x_368_;
}
else
{
lean_object* v_head_369_; lean_object* v_tail_370_; lean_object* v_head_371_; lean_object* v_tail_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v_head_369_ = lean_ctor_get(v_l_u2081_363_, 0);
lean_inc_n(v_head_369_, 2);
v_tail_370_ = lean_ctor_get(v_l_u2081_363_, 1);
lean_inc(v_tail_370_);
lean_dec_ref_known(v_l_u2081_363_, 2);
v_head_371_ = lean_ctor_get(v_l_u2082_364_, 0);
lean_inc_n(v_head_371_, 2);
v_tail_372_ = lean_ctor_get(v_l_u2082_364_, 1);
lean_inc(v_tail_372_);
lean_dec_ref_known(v_l_u2082_364_, 2);
lean_inc_ref(v_lt_365_);
v___x_373_ = lean_apply_2(v_lt_365_, v_head_369_, v_head_371_);
v___x_374_ = lean_unbox(v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; uint8_t v___x_376_; 
lean_inc_ref(v_inst_362_);
v___x_375_ = lean_apply_2(v_inst_362_, v_head_369_, v_head_371_);
v___x_376_ = lean_unbox(v___x_375_);
if (v___x_376_ == 0)
{
uint8_t v___x_377_; 
lean_dec(v_tail_372_);
lean_dec(v_tail_370_);
lean_dec_ref(v_lt_365_);
lean_dec_ref(v_inst_362_);
v___x_377_ = lean_unbox(v___x_375_);
return v___x_377_;
}
else
{
v_l_u2081_363_ = v_tail_370_;
v_l_u2082_364_ = v_tail_372_;
goto _start;
}
}
else
{
uint8_t v___x_379_; 
lean_dec(v_tail_372_);
lean_dec(v_head_371_);
lean_dec(v_tail_370_);
lean_dec(v_head_369_);
lean_dec_ref(v_lt_365_);
lean_dec_ref(v_inst_362_);
v___x_379_ = lean_unbox(v___x_373_);
return v___x_379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_lex___redArg___boxed(lean_object* v_inst_380_, lean_object* v_l_u2081_381_, lean_object* v_l_u2082_382_, lean_object* v_lt_383_){
_start:
{
uint8_t v_res_384_; lean_object* v_r_385_; 
v_res_384_ = l_List_lex___redArg(v_inst_380_, v_l_u2081_381_, v_l_u2082_382_, v_lt_383_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
LEAN_EXPORT uint8_t l_List_lex(lean_object* v_00_u03b1_386_, lean_object* v_inst_387_, lean_object* v_l_u2081_388_, lean_object* v_l_u2082_389_, lean_object* v_lt_390_){
_start:
{
uint8_t v___x_391_; 
v___x_391_ = l_List_lex___redArg(v_inst_387_, v_l_u2081_388_, v_l_u2082_389_, v_lt_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_List_lex___boxed(lean_object* v_00_u03b1_392_, lean_object* v_inst_393_, lean_object* v_l_u2081_394_, lean_object* v_l_u2082_395_, lean_object* v_lt_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_List_lex(v_00_u03b1_392_, v_inst_393_, v_l_u2081_394_, v_l_u2082_395_, v_lt_396_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT lean_object* l_List_getLast___redArg(lean_object* v_x_399_){
_start:
{
lean_object* v_tail_400_; 
v_tail_400_ = lean_ctor_get(v_x_399_, 1);
if (lean_obj_tag(v_tail_400_) == 0)
{
lean_object* v_head_401_; 
v_head_401_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_head_401_);
return v_head_401_;
}
else
{
v_x_399_ = v_tail_400_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_getLast___redArg___boxed(lean_object* v_x_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_List_getLast___redArg(v_x_403_);
lean_dec(v_x_403_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_List_getLast(lean_object* v_00_u03b1_405_, lean_object* v_x_406_, lean_object* v_x_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_List_getLast___redArg(v_x_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_List_getLast___boxed(lean_object* v_00_u03b1_409_, lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_List_getLast(v_00_u03b1_409_, v_x_410_, v_x_411_);
lean_dec(v_x_410_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg(lean_object* v_x_413_){
_start:
{
if (lean_obj_tag(v_x_413_) == 0)
{
lean_object* v___x_414_; 
v___x_414_ = lean_box(0);
return v___x_414_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = l_List_getLast___redArg(v_x_413_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg___boxed(lean_object* v_x_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_List_getLast_x3f___redArg(v_x_417_);
lean_dec(v_x_417_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f(lean_object* v_00_u03b1_419_, lean_object* v_x_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_List_getLast_x3f___redArg(v_x_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___boxed(lean_object* v_00_u03b1_422_, lean_object* v_x_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_List_getLast_x3f(v_00_u03b1_422_, v_x_423_);
lean_dec(v_x_423_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD___redArg(lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_425_) == 0)
{
lean_inc(v_x_426_);
return v_x_426_;
}
else
{
lean_object* v___x_427_; 
v___x_427_ = l_List_getLast___redArg(v_x_425_);
return v___x_427_;
}
}
}
LEAN_EXPORT lean_object* l_List_getLastD___redArg___boxed(lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_List_getLastD___redArg(v_x_428_, v_x_429_);
lean_dec(v_x_429_);
lean_dec(v_x_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD(lean_object* v_00_u03b1_431_, lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_List_getLastD___redArg(v_x_432_, v_x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD___boxed(lean_object* v_00_u03b1_435_, lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_List_getLastD(v_00_u03b1_435_, v_x_436_, v_x_437_);
lean_dec(v_x_437_);
lean_dec(v_x_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_List_head___redArg(lean_object* v_x_439_){
_start:
{
lean_object* v_head_440_; 
v_head_440_ = lean_ctor_get(v_x_439_, 0);
lean_inc(v_head_440_);
return v_head_440_;
}
}
LEAN_EXPORT lean_object* l_List_head___redArg___boxed(lean_object* v_x_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_List_head___redArg(v_x_441_);
lean_dec(v_x_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_List_head(lean_object* v_00_u03b1_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
lean_object* v_head_446_; 
v_head_446_ = lean_ctor_get(v_x_444_, 0);
lean_inc(v_head_446_);
return v_head_446_;
}
}
LEAN_EXPORT lean_object* l_List_head___boxed(lean_object* v_00_u03b1_447_, lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_List_head(v_00_u03b1_447_, v_x_448_, v_x_449_);
lean_dec(v_x_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___redArg(lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 0)
{
lean_object* v___x_452_; 
v___x_452_ = lean_box(0);
return v___x_452_;
}
else
{
lean_object* v_head_453_; lean_object* v___x_454_; 
v_head_453_ = lean_ctor_get(v_x_451_, 0);
lean_inc(v_head_453_);
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v_head_453_);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___redArg___boxed(lean_object* v_x_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_List_head_x3f___redArg(v_x_455_);
lean_dec(v_x_455_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f(lean_object* v_00_u03b1_457_, lean_object* v_x_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_List_head_x3f___redArg(v_x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___boxed(lean_object* v_00_u03b1_460_, lean_object* v_x_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_List_head_x3f(v_00_u03b1_460_, v_x_461_);
lean_dec(v_x_461_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_List_headD___redArg(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_inc(v_x_464_);
return v_x_464_;
}
else
{
lean_object* v_head_465_; 
v_head_465_ = lean_ctor_get(v_x_463_, 0);
lean_inc(v_head_465_);
return v_head_465_;
}
}
}
LEAN_EXPORT lean_object* l_List_headD___redArg___boxed(lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_List_headD___redArg(v_x_466_, v_x_467_);
lean_dec(v_x_467_);
lean_dec(v_x_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_List_headD(lean_object* v_00_u03b1_469_, lean_object* v_x_470_, lean_object* v_x_471_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
lean_inc(v_x_471_);
return v_x_471_;
}
else
{
lean_object* v_head_472_; 
v_head_472_ = lean_ctor_get(v_x_470_, 0);
lean_inc(v_head_472_);
return v_head_472_;
}
}
}
LEAN_EXPORT lean_object* l_List_headD___boxed(lean_object* v_00_u03b1_473_, lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_List_headD(v_00_u03b1_473_, v_x_474_, v_x_475_);
lean_dec(v_x_475_);
lean_dec(v_x_474_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_List_tail___redArg(lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
return v_x_477_;
}
else
{
lean_object* v_tail_478_; 
v_tail_478_ = lean_ctor_get(v_x_477_, 1);
lean_inc(v_tail_478_);
return v_tail_478_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail___redArg___boxed(lean_object* v_x_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_List_tail___redArg(v_x_479_);
lean_dec(v_x_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_List_tail(lean_object* v_00_u03b1_481_, lean_object* v_x_482_){
_start:
{
if (lean_obj_tag(v_x_482_) == 0)
{
return v_x_482_;
}
else
{
lean_object* v_tail_483_; 
v_tail_483_ = lean_ctor_get(v_x_482_, 1);
lean_inc(v_tail_483_);
return v_tail_483_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail___boxed(lean_object* v_00_u03b1_484_, lean_object* v_x_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_List_tail(v_00_u03b1_484_, v_x_485_);
lean_dec(v_x_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg(lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v___x_488_; 
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v_tail_489_; lean_object* v___x_490_; 
v_tail_489_ = lean_ctor_get(v_x_487_, 1);
lean_inc(v_tail_489_);
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v_tail_489_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg___boxed(lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_List_tail_x3f___redArg(v_x_491_);
lean_dec(v_x_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f(lean_object* v_00_u03b1_493_, lean_object* v_x_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_List_tail_x3f___redArg(v_x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___boxed(lean_object* v_00_u03b1_496_, lean_object* v_x_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_List_tail_x3f(v_00_u03b1_496_, v_x_497_);
lean_dec(v_x_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_List_tailD___redArg(lean_object* v_l_499_, lean_object* v_fallback_500_){
_start:
{
if (lean_obj_tag(v_l_499_) == 0)
{
lean_inc(v_fallback_500_);
return v_fallback_500_;
}
else
{
lean_object* v_tail_501_; 
v_tail_501_ = lean_ctor_get(v_l_499_, 1);
lean_inc(v_tail_501_);
return v_tail_501_;
}
}
}
LEAN_EXPORT lean_object* l_List_tailD___redArg___boxed(lean_object* v_l_502_, lean_object* v_fallback_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_List_tailD___redArg(v_l_502_, v_fallback_503_);
lean_dec(v_fallback_503_);
lean_dec(v_l_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_List_tailD(lean_object* v_00_u03b1_505_, lean_object* v_l_506_, lean_object* v_fallback_507_){
_start:
{
if (lean_obj_tag(v_l_506_) == 0)
{
lean_inc(v_fallback_507_);
return v_fallback_507_;
}
else
{
lean_object* v_tail_508_; 
v_tail_508_ = lean_ctor_get(v_l_506_, 1);
lean_inc(v_tail_508_);
return v_tail_508_;
}
}
}
LEAN_EXPORT lean_object* l_List_tailD___boxed(lean_object* v_00_u03b1_509_, lean_object* v_l_510_, lean_object* v_fallback_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_List_tailD(v_00_u03b1_509_, v_l_510_, v_fallback_511_);
lean_dec(v_fallback_511_);
lean_dec(v_l_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_List_filter___redArg(lean_object* v_p_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_dec_ref(v_p_513_);
return v_x_514_;
}
else
{
lean_object* v_head_515_; lean_object* v_tail_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_527_; 
v_head_515_ = lean_ctor_get(v_x_514_, 0);
v_tail_516_ = lean_ctor_get(v_x_514_, 1);
v_isSharedCheck_527_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_527_ == 0)
{
v___x_518_ = v_x_514_;
v_isShared_519_ = v_isSharedCheck_527_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_tail_516_);
lean_inc(v_head_515_);
lean_dec(v_x_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_527_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; uint8_t v___x_521_; 
lean_inc_ref(v_p_513_);
lean_inc(v_head_515_);
v___x_520_ = lean_apply_1(v_p_513_, v_head_515_);
v___x_521_ = lean_unbox(v___x_520_);
if (v___x_521_ == 0)
{
lean_del_object(v___x_518_);
lean_dec(v_head_515_);
v_x_514_ = v_tail_516_;
goto _start;
}
else
{
lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_523_ = l_List_filter___redArg(v_p_513_, v_tail_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v___x_523_);
v___x_525_ = v___x_518_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_head_515_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v___x_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filter(lean_object* v_00_u03b1_528_, lean_object* v_p_529_, lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_List_filter___redArg(v_p_529_, v_x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___redArg(lean_object* v_f_532_, lean_object* v_init_533_, lean_object* v_x_534_){
_start:
{
if (lean_obj_tag(v_x_534_) == 0)
{
lean_dec(v_f_532_);
lean_inc(v_init_533_);
return v_init_533_;
}
else
{
lean_object* v_head_535_; lean_object* v_tail_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_head_535_ = lean_ctor_get(v_x_534_, 0);
lean_inc(v_head_535_);
v_tail_536_ = lean_ctor_get(v_x_534_, 1);
lean_inc(v_tail_536_);
lean_dec_ref_known(v_x_534_, 2);
lean_inc(v_f_532_);
v___x_537_ = l_List_foldr___redArg(v_f_532_, v_init_533_, v_tail_536_);
v___x_538_ = lean_apply_2(v_f_532_, v_head_535_, v___x_537_);
return v___x_538_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___redArg___boxed(lean_object* v_f_539_, lean_object* v_init_540_, lean_object* v_x_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_List_foldr___redArg(v_f_539_, v_init_540_, v_x_541_);
lean_dec(v_init_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_List_foldr(lean_object* v_00_u03b1_543_, lean_object* v_00_u03b2_544_, lean_object* v_f_545_, lean_object* v_init_546_, lean_object* v_x_547_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_List_foldr___redArg(v_f_545_, v_init_546_, v_x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___boxed(lean_object* v_00_u03b1_549_, lean_object* v_00_u03b2_550_, lean_object* v_f_551_, lean_object* v_init_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_List_foldr(v_00_u03b1_549_, v_00_u03b2_550_, v_f_551_, v_init_552_, v_x_553_);
lean_dec(v_init_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_List_reverseAux___redArg(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
return v_x_556_;
}
else
{
lean_object* v_head_557_; lean_object* v_tail_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_head_557_ = lean_ctor_get(v_x_555_, 0);
v_tail_558_ = lean_ctor_get(v_x_555_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v_x_555_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_tail_558_);
lean_inc(v_head_557_);
lean_dec(v_x_555_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 1, v_x_556_);
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_head_557_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_x_556_);
v___x_563_ = v_reuseFailAlloc_565_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
v_x_555_ = v_tail_558_;
v_x_556_ = v___x_563_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_reverseAux(lean_object* v_00_u03b1_567_, lean_object* v_x_568_, lean_object* v_x_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_List_reverseAux___redArg(v_x_568_, v_x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_List_reverse___redArg(lean_object* v_as_571_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = l_List_reverseAux___redArg(v_as_571_, v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_List_reverse(lean_object* v_00_u03b1_574_, lean_object* v_as_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_List_reverse___redArg(v_as_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_List_appendTR___redArg(lean_object* v_as_577_, lean_object* v_bs_578_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = l_List_reverse___redArg(v_as_577_);
v___x_580_ = l_List_reverseAux___redArg(v___x_579_, v_bs_578_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_List_appendTR(lean_object* v_00_u03b1_581_, lean_object* v_as_582_, lean_object* v_bs_583_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_List_appendTR___redArg(v_as_582_, v_bs_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_List_instAppend___redArg(){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = ((lean_object*)(l_List_instAppend___redArg___closed__0));
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_List_instAppend___redArg___boxed(lean_object* v___dummy_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_List_instAppend___redArg();
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_List_instAppend(lean_object* v_00_u03b1_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_List_instAppend___redArg___closed__0));
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_List_singleton___redArg(lean_object* v_a_592_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_box(0);
v___x_594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_594_, 0, v_a_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_List_singleton(lean_object* v_00_u03b1_595_, lean_object* v_a_596_){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = lean_box(0);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v_a_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_List_replicate___redArg(lean_object* v_x_599_, lean_object* v_x_600_){
_start:
{
lean_object* v_zero_601_; uint8_t v_isZero_602_; 
v_zero_601_ = lean_unsigned_to_nat(0u);
v_isZero_602_ = lean_nat_dec_eq(v_x_599_, v_zero_601_);
if (v_isZero_602_ == 1)
{
lean_object* v___x_603_; 
lean_dec(v_x_600_);
v___x_603_ = lean_box(0);
return v___x_603_;
}
else
{
lean_object* v_one_604_; lean_object* v_n_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_one_604_ = lean_unsigned_to_nat(1u);
v_n_605_ = lean_nat_sub(v_x_599_, v_one_604_);
lean_inc(v_x_600_);
v___x_606_ = l_List_replicate___redArg(v_n_605_, v_x_600_);
lean_dec(v_n_605_);
v___x_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_607_, 0, v_x_600_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
return v___x_607_;
}
}
}
LEAN_EXPORT lean_object* l_List_replicate___redArg___boxed(lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_List_replicate___redArg(v_x_608_, v_x_609_);
lean_dec(v_x_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_List_replicate(lean_object* v_00_u03b1_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_List_replicate___redArg(v_x_612_, v_x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_List_replicate___boxed(lean_object* v_00_u03b1_615_, lean_object* v_x_616_, lean_object* v_x_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_List_replicate(v_00_u03b1_615_, v_x_616_, v_x_617_);
lean_dec(v_x_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___redArg(lean_object* v_n_619_, lean_object* v_a_620_, lean_object* v_l_621_){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_622_ = l_List_length___redArg(v_l_621_);
v___x_623_ = lean_nat_sub(v_n_619_, v___x_622_);
lean_dec(v___x_622_);
v___x_624_ = l_List_replicate___redArg(v___x_623_, v_a_620_);
lean_dec(v___x_623_);
v___x_625_ = l_List_appendTR___redArg(v___x_624_, v_l_621_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___redArg___boxed(lean_object* v_n_626_, lean_object* v_a_627_, lean_object* v_l_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_List_leftpad___redArg(v_n_626_, v_a_627_, v_l_628_);
lean_dec(v_n_626_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad(lean_object* v_00_u03b1_630_, lean_object* v_n_631_, lean_object* v_a_632_, lean_object* v_l_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_List_leftpad___redArg(v_n_631_, v_a_632_, v_l_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___boxed(lean_object* v_00_u03b1_635_, lean_object* v_n_636_, lean_object* v_a_637_, lean_object* v_l_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_List_leftpad(v_00_u03b1_635_, v_n_636_, v_a_637_, v_l_638_);
lean_dec(v_n_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___redArg(lean_object* v_n_640_, lean_object* v_a_641_, lean_object* v_l_642_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_643_ = l_List_length___redArg(v_l_642_);
v___x_644_ = lean_nat_sub(v_n_640_, v___x_643_);
lean_dec(v___x_643_);
v___x_645_ = l_List_replicate___redArg(v___x_644_, v_a_641_);
lean_dec(v___x_644_);
v___x_646_ = l_List_appendTR___redArg(v_l_642_, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___redArg___boxed(lean_object* v_n_647_, lean_object* v_a_648_, lean_object* v_l_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_List_rightpad___redArg(v_n_647_, v_a_648_, v_l_649_);
lean_dec(v_n_647_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad(lean_object* v_00_u03b1_651_, lean_object* v_n_652_, lean_object* v_a_653_, lean_object* v_l_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_List_rightpad___redArg(v_n_652_, v_a_653_, v_l_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___boxed(lean_object* v_00_u03b1_656_, lean_object* v_n_657_, lean_object* v_a_658_, lean_object* v_l_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_List_rightpad(v_00_u03b1_656_, v_n_657_, v_a_658_, v_l_659_);
lean_dec(v_n_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = lean_box(0);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg___boxed(lean_object* v___dummy_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_List_instEmptyCollection___redArg();
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection(lean_object* v_00_u03b1_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_box(0);
return v___x_666_;
}
}
LEAN_EXPORT uint8_t l_List_isEmpty___redArg(lean_object* v_x_667_){
_start:
{
if (lean_obj_tag(v_x_667_) == 0)
{
uint8_t v___x_668_; 
v___x_668_ = 1;
return v___x_668_;
}
else
{
uint8_t v___x_669_; 
v___x_669_ = 0;
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* l_List_isEmpty___redArg___boxed(lean_object* v_x_670_){
_start:
{
uint8_t v_res_671_; lean_object* v_r_672_; 
v_res_671_ = l_List_isEmpty___redArg(v_x_670_);
lean_dec(v_x_670_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT uint8_t l_List_isEmpty(lean_object* v_00_u03b1_673_, lean_object* v_x_674_){
_start:
{
uint8_t v___x_675_; 
v___x_675_ = l_List_isEmpty___redArg(v_x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_List_isEmpty___boxed(lean_object* v_00_u03b1_676_, lean_object* v_x_677_){
_start:
{
uint8_t v_res_678_; lean_object* v_r_679_; 
v_res_678_ = l_List_isEmpty(v_00_u03b1_676_, v_x_677_);
lean_dec(v_x_677_);
v_r_679_ = lean_box(v_res_678_);
return v_r_679_;
}
}
LEAN_EXPORT uint8_t l_List_elem___redArg(lean_object* v_inst_680_, lean_object* v_a_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
uint8_t v___x_683_; 
lean_dec(v_a_681_);
lean_dec_ref(v_inst_680_);
v___x_683_ = 0;
return v___x_683_;
}
else
{
lean_object* v_head_684_; lean_object* v_tail_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v_head_684_ = lean_ctor_get(v_x_682_, 0);
lean_inc(v_head_684_);
v_tail_685_ = lean_ctor_get(v_x_682_, 1);
lean_inc(v_tail_685_);
lean_dec_ref_known(v_x_682_, 2);
lean_inc_ref(v_inst_680_);
lean_inc(v_a_681_);
v___x_686_ = lean_apply_2(v_inst_680_, v_a_681_, v_head_684_);
v___x_687_ = lean_unbox(v___x_686_);
if (v___x_687_ == 0)
{
v_x_682_ = v_tail_685_;
goto _start;
}
else
{
uint8_t v___x_689_; 
lean_dec(v_tail_685_);
lean_dec(v_a_681_);
lean_dec_ref(v_inst_680_);
v___x_689_ = lean_unbox(v___x_686_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___redArg___boxed(lean_object* v_inst_690_, lean_object* v_a_691_, lean_object* v_x_692_){
_start:
{
uint8_t v_res_693_; lean_object* v_r_694_; 
v_res_693_ = l_List_elem___redArg(v_inst_690_, v_a_691_, v_x_692_);
v_r_694_ = lean_box(v_res_693_);
return v_r_694_;
}
}
LEAN_EXPORT uint8_t l_List_elem(lean_object* v_00_u03b1_695_, lean_object* v_inst_696_, lean_object* v_a_697_, lean_object* v_x_698_){
_start:
{
uint8_t v___x_699_; 
v___x_699_ = l_List_elem___redArg(v_inst_696_, v_a_697_, v_x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_List_elem___boxed(lean_object* v_00_u03b1_700_, lean_object* v_inst_701_, lean_object* v_a_702_, lean_object* v_x_703_){
_start:
{
uint8_t v_res_704_; lean_object* v_r_705_; 
v_res_704_ = l_List_elem(v_00_u03b1_700_, v_inst_701_, v_a_702_, v_x_703_);
v_r_705_ = lean_box(v_res_704_);
return v_r_705_;
}
}
LEAN_EXPORT uint8_t l_List_contains___redArg(lean_object* v_inst_706_, lean_object* v_as_707_, lean_object* v_a_708_){
_start:
{
uint8_t v___x_709_; 
v___x_709_ = l_List_elem___redArg(v_inst_706_, v_a_708_, v_as_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_List_contains___redArg___boxed(lean_object* v_inst_710_, lean_object* v_as_711_, lean_object* v_a_712_){
_start:
{
uint8_t v_res_713_; lean_object* v_r_714_; 
v_res_713_ = l_List_contains___redArg(v_inst_710_, v_as_711_, v_a_712_);
v_r_714_ = lean_box(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT uint8_t l_List_contains(lean_object* v_00_u03b1_715_, lean_object* v_inst_716_, lean_object* v_as_717_, lean_object* v_a_718_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = l_List_elem___redArg(v_inst_716_, v_a_718_, v_as_717_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_List_contains___boxed(lean_object* v_00_u03b1_720_, lean_object* v_inst_721_, lean_object* v_as_722_, lean_object* v_a_723_){
_start:
{
uint8_t v_res_724_; lean_object* v_r_725_; 
v_res_724_ = l_List_contains(v_00_u03b1_720_, v_inst_721_, v_as_722_, v_a_723_);
v_r_725_ = lean_box(v_res_724_);
return v_r_725_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership___redArg(){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = lean_box(0);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership___redArg___boxed(lean_object* v___dummy_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_List_instMembership___redArg();
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership(lean_object* v_00_u03b1_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_box(0);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(uint8_t v_x_732_, lean_object* v_h__1_733_, lean_object* v_h__2_734_){
_start:
{
if (v_x_732_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; 
lean_dec(v_h__1_733_);
v___x_735_ = lean_box(0);
v___x_736_ = lean_apply_1(v_h__2_734_, v___x_735_);
return v___x_736_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; 
lean_dec(v_h__2_734_);
v___x_737_ = lean_box(0);
v___x_738_ = lean_apply_1(v_h__1_733_, v___x_737_);
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg___boxed(lean_object* v_x_739_, lean_object* v_h__1_740_, lean_object* v_h__2_741_){
_start:
{
uint8_t v_x_24__boxed_742_; lean_object* v_res_743_; 
v_x_24__boxed_742_ = lean_unbox(v_x_739_);
v_res_743_ = l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(v_x_24__boxed_742_, v_h__1_740_, v_h__2_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(lean_object* v_motive_744_, uint8_t v_x_745_, lean_object* v_h__1_746_, lean_object* v_h__2_747_){
_start:
{
if (v_x_745_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; 
lean_dec(v_h__1_746_);
v___x_748_ = lean_box(0);
v___x_749_ = lean_apply_1(v_h__2_747_, v___x_748_);
return v___x_749_;
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; 
lean_dec(v_h__2_747_);
v___x_750_ = lean_box(0);
v___x_751_ = lean_apply_1(v_h__1_746_, v___x_750_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___boxed(lean_object* v_motive_752_, lean_object* v_x_753_, lean_object* v_h__1_754_, lean_object* v_h__2_755_){
_start:
{
uint8_t v_x_35__boxed_756_; lean_object* v_res_757_; 
v_x_35__boxed_756_ = lean_unbox(v_x_753_);
v_res_757_ = l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(v_motive_752_, v_x_35__boxed_756_, v_h__1_754_, v_h__2_755_);
return v_res_757_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq___redArg(lean_object* v_inst_758_, lean_object* v_a_759_, lean_object* v_as_760_){
_start:
{
uint8_t v___x_761_; 
v___x_761_ = l_List_elem___redArg(v_inst_758_, v_a_759_, v_as_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___redArg___boxed(lean_object* v_inst_762_, lean_object* v_a_763_, lean_object* v_as_764_){
_start:
{
uint8_t v_res_765_; lean_object* v_r_766_; 
v_res_765_ = l_List_instDecidableMemOfLawfulBEq___redArg(v_inst_762_, v_a_763_, v_as_764_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq(lean_object* v_00_u03b1_767_, lean_object* v_inst_768_, lean_object* v_inst_769_, lean_object* v_a_770_, lean_object* v_as_771_){
_start:
{
uint8_t v___x_772_; 
v___x_772_ = l_List_elem___redArg(v_inst_768_, v_a_770_, v_as_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___boxed(lean_object* v_00_u03b1_773_, lean_object* v_inst_774_, lean_object* v_inst_775_, lean_object* v_a_776_, lean_object* v_as_777_){
_start:
{
uint8_t v_res_778_; lean_object* v_r_779_; 
v_res_778_ = l_List_instDecidableMemOfLawfulBEq(v_00_u03b1_773_, v_inst_774_, v_inst_775_, v_a_776_, v_as_777_);
v_r_779_ = lean_box(v_res_778_);
return v_r_779_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBEx___redArg(lean_object* v_inst_780_, lean_object* v_x_781_){
_start:
{
if (lean_obj_tag(v_x_781_) == 0)
{
uint8_t v___x_782_; 
lean_dec_ref(v_inst_780_);
v___x_782_ = 0;
return v___x_782_;
}
else
{
lean_object* v_head_783_; lean_object* v_tail_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
v_head_783_ = lean_ctor_get(v_x_781_, 0);
lean_inc(v_head_783_);
v_tail_784_ = lean_ctor_get(v_x_781_, 1);
lean_inc(v_tail_784_);
lean_dec_ref_known(v_x_781_, 2);
lean_inc_ref(v_inst_780_);
v___x_785_ = lean_apply_1(v_inst_780_, v_head_783_);
v___x_786_ = lean_unbox(v___x_785_);
if (v___x_786_ == 0)
{
uint8_t v_decide_787_; 
v_decide_787_ = l_List_decidableBEx___redArg(v_inst_780_, v_tail_784_);
if (v_decide_787_ == 0)
{
uint8_t v___x_788_; 
v___x_788_ = lean_unbox(v___x_785_);
return v___x_788_;
}
else
{
return v_decide_787_;
}
}
else
{
uint8_t v___x_789_; 
lean_dec(v_tail_784_);
lean_dec_ref(v_inst_780_);
v___x_789_ = lean_unbox(v___x_785_);
return v___x_789_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableBEx___redArg___boxed(lean_object* v_inst_790_, lean_object* v_x_791_){
_start:
{
uint8_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_List_decidableBEx___redArg(v_inst_790_, v_x_791_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBEx(lean_object* v_00_u03b1_794_, lean_object* v_p_795_, lean_object* v_inst_796_, lean_object* v_x_797_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = l_List_decidableBEx___redArg(v_inst_796_, v_x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_List_decidableBEx___boxed(lean_object* v_00_u03b1_799_, lean_object* v_p_800_, lean_object* v_inst_801_, lean_object* v_x_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l_List_decidableBEx(v_00_u03b1_799_, v_p_800_, v_inst_801_, v_x_802_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBAll___redArg(lean_object* v_inst_805_, lean_object* v_x_806_){
_start:
{
if (lean_obj_tag(v_x_806_) == 0)
{
uint8_t v___x_807_; 
lean_dec_ref(v_inst_805_);
v___x_807_ = 1;
return v___x_807_;
}
else
{
lean_object* v_head_808_; lean_object* v_tail_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v_head_808_ = lean_ctor_get(v_x_806_, 0);
lean_inc(v_head_808_);
v_tail_809_ = lean_ctor_get(v_x_806_, 1);
lean_inc(v_tail_809_);
lean_dec_ref_known(v_x_806_, 2);
lean_inc_ref(v_inst_805_);
v___x_810_ = lean_apply_1(v_inst_805_, v_head_808_);
v___x_811_ = lean_unbox(v___x_810_);
if (v___x_811_ == 0)
{
uint8_t v___x_812_; 
lean_dec(v_tail_809_);
lean_dec_ref(v_inst_805_);
v___x_812_ = lean_unbox(v___x_810_);
return v___x_812_;
}
else
{
uint8_t v_decide_813_; 
v_decide_813_ = l_List_decidableBAll___redArg(v_inst_805_, v_tail_809_);
if (v_decide_813_ == 0)
{
return v_decide_813_;
}
else
{
uint8_t v___x_814_; 
v___x_814_ = lean_unbox(v___x_810_);
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableBAll___redArg___boxed(lean_object* v_inst_815_, lean_object* v_x_816_){
_start:
{
uint8_t v_res_817_; lean_object* v_r_818_; 
v_res_817_ = l_List_decidableBAll___redArg(v_inst_815_, v_x_816_);
v_r_818_ = lean_box(v_res_817_);
return v_r_818_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBAll(lean_object* v_00_u03b1_819_, lean_object* v_p_820_, lean_object* v_inst_821_, lean_object* v_x_822_){
_start:
{
uint8_t v___x_823_; 
v___x_823_ = l_List_decidableBAll___redArg(v_inst_821_, v_x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_List_decidableBAll___boxed(lean_object* v_00_u03b1_824_, lean_object* v_p_825_, lean_object* v_inst_826_, lean_object* v_x_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l_List_decidableBAll(v_00_u03b1_824_, v_p_825_, v_inst_826_, v_x_827_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
LEAN_EXPORT lean_object* l_List_take___redArg(lean_object* v_x_830_, lean_object* v_x_831_){
_start:
{
lean_object* v_zero_832_; uint8_t v_isZero_833_; 
v_zero_832_ = lean_unsigned_to_nat(0u);
v_isZero_833_ = lean_nat_dec_eq(v_x_830_, v_zero_832_);
if (v_isZero_833_ == 1)
{
lean_object* v___x_834_; 
lean_dec(v_x_831_);
v___x_834_ = lean_box(0);
return v___x_834_;
}
else
{
if (lean_obj_tag(v_x_831_) == 0)
{
return v_x_831_;
}
else
{
lean_object* v_head_835_; lean_object* v_tail_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_846_; 
v_head_835_ = lean_ctor_get(v_x_831_, 0);
v_tail_836_ = lean_ctor_get(v_x_831_, 1);
v_isSharedCheck_846_ = !lean_is_exclusive(v_x_831_);
if (v_isSharedCheck_846_ == 0)
{
v___x_838_ = v_x_831_;
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_tail_836_);
lean_inc(v_head_835_);
lean_dec(v_x_831_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v_one_840_; lean_object* v_n_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v_one_840_ = lean_unsigned_to_nat(1u);
v_n_841_ = lean_nat_sub(v_x_830_, v_one_840_);
v___x_842_ = l_List_take___redArg(v_n_841_, v_tail_836_);
lean_dec(v_n_841_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v___x_842_);
v___x_844_ = v___x_838_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_head_835_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_take___redArg___boxed(lean_object* v_x_847_, lean_object* v_x_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_List_take___redArg(v_x_847_, v_x_848_);
lean_dec(v_x_847_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_List_take(lean_object* v_00_u03b1_850_, lean_object* v_x_851_, lean_object* v_x_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_List_take___redArg(v_x_851_, v_x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_List_take___boxed(lean_object* v_00_u03b1_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_List_take(v_00_u03b1_854_, v_x_855_, v_x_856_);
lean_dec(v_x_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_List_drop___redArg(lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
lean_object* v_zero_860_; uint8_t v_isZero_861_; 
v_zero_860_ = lean_unsigned_to_nat(0u);
v_isZero_861_ = lean_nat_dec_eq(v_x_858_, v_zero_860_);
if (v_isZero_861_ == 1)
{
lean_dec(v_x_858_);
lean_inc(v_x_859_);
return v_x_859_;
}
else
{
if (lean_obj_tag(v_x_859_) == 0)
{
lean_dec(v_x_858_);
return v_x_859_;
}
else
{
lean_object* v_tail_862_; lean_object* v_one_863_; lean_object* v_n_864_; 
v_tail_862_ = lean_ctor_get(v_x_859_, 1);
v_one_863_ = lean_unsigned_to_nat(1u);
v_n_864_ = lean_nat_sub(v_x_858_, v_one_863_);
lean_dec(v_x_858_);
v_x_858_ = v_n_864_;
v_x_859_ = v_tail_862_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_drop___redArg___boxed(lean_object* v_x_866_, lean_object* v_x_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_List_drop___redArg(v_x_866_, v_x_867_);
lean_dec(v_x_867_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_List_drop(lean_object* v_00_u03b1_869_, lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_List_drop___redArg(v_x_870_, v_x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_List_drop___boxed(lean_object* v_00_u03b1_873_, lean_object* v_x_874_, lean_object* v_x_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_List_drop(v_00_u03b1_873_, v_x_874_, v_x_875_);
lean_dec(v_x_875_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_List_extract___redArg(lean_object* v_l_877_, lean_object* v_start_878_, lean_object* v_stop_879_){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = lean_nat_sub(v_stop_879_, v_start_878_);
v___x_881_ = l_List_drop___redArg(v_start_878_, v_l_877_);
v___x_882_ = l_List_take___redArg(v___x_880_, v___x_881_);
lean_dec(v___x_880_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_List_extract___redArg___boxed(lean_object* v_l_883_, lean_object* v_start_884_, lean_object* v_stop_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_List_extract___redArg(v_l_883_, v_start_884_, v_stop_885_);
lean_dec(v_stop_885_);
lean_dec(v_l_883_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_List_extract(lean_object* v_00_u03b1_887_, lean_object* v_l_888_, lean_object* v_start_889_, lean_object* v_stop_890_){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_891_ = lean_nat_sub(v_stop_890_, v_start_889_);
v___x_892_ = l_List_drop___redArg(v_start_889_, v_l_888_);
v___x_893_ = l_List_take___redArg(v___x_891_, v___x_892_);
lean_dec(v___x_891_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_List_extract___boxed(lean_object* v_00_u03b1_894_, lean_object* v_l_895_, lean_object* v_start_896_, lean_object* v_stop_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_List_extract(v_00_u03b1_894_, v_l_895_, v_start_896_, v_stop_897_);
lean_dec(v_stop_897_);
lean_dec(v_l_895_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_List_takeWhile___redArg(lean_object* v_p_899_, lean_object* v_x_900_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_dec_ref(v_p_899_);
return v_x_900_;
}
else
{
lean_object* v_head_901_; lean_object* v_tail_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_913_; 
v_head_901_ = lean_ctor_get(v_x_900_, 0);
v_tail_902_ = lean_ctor_get(v_x_900_, 1);
v_isSharedCheck_913_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_913_ == 0)
{
v___x_904_ = v_x_900_;
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_tail_902_);
lean_inc(v_head_901_);
lean_dec(v_x_900_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; uint8_t v___x_907_; 
lean_inc_ref(v_p_899_);
lean_inc(v_head_901_);
v___x_906_ = lean_apply_1(v_p_899_, v_head_901_);
v___x_907_ = lean_unbox(v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
lean_del_object(v___x_904_);
lean_dec(v_tail_902_);
lean_dec(v_head_901_);
lean_dec_ref(v_p_899_);
v___x_908_ = lean_box(0);
return v___x_908_;
}
else
{
lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_909_ = l_List_takeWhile___redArg(v_p_899_, v_tail_902_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 1, v___x_909_);
v___x_911_ = v___x_904_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_head_901_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_takeWhile(lean_object* v_00_u03b1_914_, lean_object* v_p_915_, lean_object* v_x_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_List_takeWhile___redArg(v_p_915_, v_x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___redArg(lean_object* v_p_918_, lean_object* v_x_919_){
_start:
{
if (lean_obj_tag(v_x_919_) == 0)
{
lean_dec_ref(v_p_918_);
return v_x_919_;
}
else
{
lean_object* v_head_920_; lean_object* v_tail_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_head_920_ = lean_ctor_get(v_x_919_, 0);
v_tail_921_ = lean_ctor_get(v_x_919_, 1);
lean_inc_ref(v_p_918_);
lean_inc(v_head_920_);
v___x_922_ = lean_apply_1(v_p_918_, v_head_920_);
v___x_923_ = lean_unbox(v___x_922_);
if (v___x_923_ == 0)
{
lean_dec_ref(v_p_918_);
return v_x_919_;
}
else
{
lean_inc(v_tail_921_);
lean_dec_ref_known(v_x_919_, 2);
v_x_919_ = v_tail_921_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile(lean_object* v_00_u03b1_925_, lean_object* v_p_926_, lean_object* v_x_927_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l_List_dropWhile___redArg(v_p_926_, v_x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___redArg(lean_object* v_p_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
if (lean_obj_tag(v_a_930_) == 0)
{
lean_object* v_fst_932_; lean_object* v_snd_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_942_; 
lean_dec_ref(v_p_929_);
v_fst_932_ = lean_ctor_get(v_a_931_, 0);
v_snd_933_ = lean_ctor_get(v_a_931_, 1);
v_isSharedCheck_942_ = !lean_is_exclusive(v_a_931_);
if (v_isSharedCheck_942_ == 0)
{
v___x_935_ = v_a_931_;
v_isShared_936_ = v_isSharedCheck_942_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_snd_933_);
lean_inc(v_fst_932_);
lean_dec(v_a_931_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_942_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_937_ = l_List_reverse___redArg(v_fst_932_);
v___x_938_ = l_List_reverse___redArg(v_snd_933_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v___x_938_);
lean_ctor_set(v___x_935_, 0, v___x_937_);
v___x_940_ = v___x_935_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
else
{
lean_object* v_head_943_; lean_object* v_tail_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_970_; 
v_head_943_ = lean_ctor_get(v_a_930_, 0);
v_tail_944_ = lean_ctor_get(v_a_930_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_a_930_);
if (v_isSharedCheck_970_ == 0)
{
v___x_946_ = v_a_930_;
v_isShared_947_ = v_isSharedCheck_970_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_tail_944_);
lean_inc(v_head_943_);
lean_dec(v_a_930_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_970_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v_fst_948_; lean_object* v_snd_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_969_; 
v_fst_948_ = lean_ctor_get(v_a_931_, 0);
v_snd_949_ = lean_ctor_get(v_a_931_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_a_931_);
if (v_isSharedCheck_969_ == 0)
{
v___x_951_ = v_a_931_;
v_isShared_952_ = v_isSharedCheck_969_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_snd_949_);
lean_inc(v_fst_948_);
lean_dec(v_a_931_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_969_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; uint8_t v___x_954_; 
lean_inc_ref(v_p_929_);
lean_inc(v_head_943_);
v___x_953_ = lean_apply_1(v_p_929_, v_head_943_);
v___x_954_ = lean_unbox(v___x_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_956_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 1, v_snd_949_);
v___x_956_ = v___x_946_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_head_943_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_snd_949_);
v___x_956_ = v_reuseFailAlloc_961_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_958_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 1, v___x_956_);
v___x_958_ = v___x_951_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_fst_948_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_960_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
v_a_930_ = v_tail_944_;
v_a_931_ = v___x_958_;
goto _start;
}
}
}
else
{
lean_object* v___x_963_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 1, v_fst_948_);
v___x_963_ = v___x_946_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_head_943_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_fst_948_);
v___x_963_ = v_reuseFailAlloc_968_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_963_);
v___x_965_ = v___x_951_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_963_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_snd_949_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
v_a_930_ = v_tail_944_;
v_a_931_ = v___x_965_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_partition_loop(lean_object* v_00_u03b1_971_, lean_object* v_p_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_List_partition_loop___redArg(v_p_972_, v_a_973_, v_a_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_List_partition___redArg(lean_object* v_p_978_, lean_object* v_as_979_){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_981_ = l_List_partition_loop___redArg(v_p_978_, v_as_979_, v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_List_partition(lean_object* v_00_u03b1_982_, lean_object* v_p_983_, lean_object* v_as_984_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_986_ = l_List_partition_loop___redArg(v_p_983_, v_as_984_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_List_dropLast___redArg(lean_object* v_x_987_){
_start:
{
if (lean_obj_tag(v_x_987_) == 0)
{
return v_x_987_;
}
else
{
lean_object* v_tail_988_; 
v_tail_988_ = lean_ctor_get(v_x_987_, 1);
lean_inc(v_tail_988_);
if (lean_obj_tag(v_tail_988_) == 0)
{
lean_dec_ref_known(v_x_987_, 2);
return v_tail_988_;
}
else
{
lean_object* v_head_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_997_; 
v_head_989_ = lean_ctor_get(v_x_987_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v_x_987_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_x_987_, 1);
lean_dec(v_unused_998_);
v___x_991_ = v_x_987_;
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_head_989_);
lean_dec(v_x_987_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_993_ = l_List_dropLast___redArg(v_tail_988_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___x_993_);
v___x_995_ = v___x_991_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_head_989_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropLast(lean_object* v_00_u03b1_999_, lean_object* v_x_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_List_dropLast___redArg(v_x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter___redArg(lean_object* v_x_1002_, lean_object* v_h__1_1003_, lean_object* v_h__2_1004_, lean_object* v_h__3_1005_){
_start:
{
if (lean_obj_tag(v_x_1002_) == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v_h__3_1005_);
lean_dec(v_h__2_1004_);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_apply_1(v_h__1_1003_, v___x_1006_);
return v___x_1007_;
}
else
{
lean_object* v_tail_1008_; 
lean_dec(v_h__1_1003_);
v_tail_1008_ = lean_ctor_get(v_x_1002_, 1);
if (lean_obj_tag(v_tail_1008_) == 0)
{
lean_object* v_head_1009_; lean_object* v___x_1010_; 
lean_dec(v_h__3_1005_);
v_head_1009_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_head_1009_);
lean_dec_ref_known(v_x_1002_, 2);
v___x_1010_ = lean_apply_1(v_h__2_1004_, v_head_1009_);
return v___x_1010_;
}
else
{
lean_object* v_head_1011_; lean_object* v___x_1012_; 
lean_inc_ref(v_tail_1008_);
lean_dec(v_h__2_1004_);
v_head_1011_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_head_1011_);
lean_dec_ref_known(v_x_1002_, 2);
v___x_1012_ = lean_apply_3(v_h__3_1005_, v_head_1011_, v_tail_1008_, lean_box(0));
return v___x_1012_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter(lean_object* v_00_u03b1_1013_, lean_object* v_motive_1014_, lean_object* v_x_1015_, lean_object* v_h__1_1016_, lean_object* v_h__2_1017_, lean_object* v_h__3_1018_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
lean_dec(v_h__3_1018_);
lean_dec(v_h__2_1017_);
v___x_1019_ = lean_box(0);
v___x_1020_ = lean_apply_1(v_h__1_1016_, v___x_1019_);
return v___x_1020_;
}
else
{
lean_object* v_tail_1021_; 
lean_dec(v_h__1_1016_);
v_tail_1021_ = lean_ctor_get(v_x_1015_, 1);
if (lean_obj_tag(v_tail_1021_) == 0)
{
lean_object* v_head_1022_; lean_object* v___x_1023_; 
lean_dec(v_h__3_1018_);
v_head_1022_ = lean_ctor_get(v_x_1015_, 0);
lean_inc(v_head_1022_);
lean_dec_ref_known(v_x_1015_, 2);
v___x_1023_ = lean_apply_1(v_h__2_1017_, v_head_1022_);
return v___x_1023_;
}
else
{
lean_object* v_head_1024_; lean_object* v___x_1025_; 
lean_inc_ref(v_tail_1021_);
lean_dec(v_h__2_1017_);
v_head_1024_ = lean_ctor_get(v_x_1015_, 0);
lean_inc(v_head_1024_);
lean_dec_ref_known(v_x_1015_, 2);
v___x_1025_ = lean_apply_3(v_h__3_1018_, v_head_1024_, v_tail_1021_, lean_box(0));
return v___x_1025_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg(){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_box(0);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg___boxed(lean_object* v___dummy_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_List_instHasSubset___redArg();
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset(lean_object* v_00_u03b1_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_box(0);
return v___x_1031_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(lean_object* v___f_1032_, lean_object* v_x_1033_, lean_object* v_a_1034_){
_start:
{
uint8_t v___x_1035_; 
v___x_1035_ = l_List_elem___redArg(v___f_1032_, v_a_1034_, v_x_1033_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed(lean_object* v___f_1036_, lean_object* v_x_1037_, lean_object* v_a_1038_){
_start:
{
uint8_t v_res_1039_; lean_object* v_r_1040_; 
v_res_1039_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(v___f_1036_, v_x_1037_, v_a_1038_);
v_r_1040_ = lean_box(v_res_1039_);
return v_r_1040_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg(lean_object* v_inst_1041_, lean_object* v_x_1042_, lean_object* v_x_1043_){
_start:
{
lean_object* v___f_1044_; lean_object* v___f_1045_; uint8_t v___x_1046_; 
v___f_1044_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1044_, 0, v_inst_1041_);
v___f_1045_ = lean_alloc_closure((void*)(l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1045_, 0, v___f_1044_);
lean_closure_set(v___f_1045_, 1, v_x_1043_);
v___x_1046_ = l_List_decidableBAll___redArg(v___f_1045_, v_x_1042_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___boxed(lean_object* v_inst_1047_, lean_object* v_x_1048_, lean_object* v_x_1049_){
_start:
{
uint8_t v_res_1050_; lean_object* v_r_1051_; 
v_res_1050_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg(v_inst_1047_, v_x_1048_, v_x_1049_);
v_r_1051_ = lean_box(v_res_1050_);
return v_r_1051_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq(lean_object* v_00_u03b1_1052_, lean_object* v_inst_1053_, lean_object* v_x_1054_, lean_object* v_x_1055_){
_start:
{
uint8_t v___x_1056_; 
v___x_1056_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg(v_inst_1053_, v_x_1054_, v_x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___boxed(lean_object* v_00_u03b1_1057_, lean_object* v_inst_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
uint8_t v_res_1061_; lean_object* v_r_1062_; 
v_res_1061_ = l_List_instDecidableRelSubsetOfDecidableEq(v_00_u03b1_1057_, v_inst_1058_, v_x_1059_, v_x_1060_);
v_r_1062_ = lean_box(v_res_1061_);
return v_r_1062_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2));
v___x_1097_ = l_String_toRawSubstring_x27(v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(lean_object* v_x_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__2));
lean_inc(v_x_1117_);
v___x_1121_ = l_Lean_Syntax_isOfKind(v_x_1117_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec(v_x_1117_);
v___x_1122_ = lean_box(1);
v___x_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
lean_ctor_set(v___x_1123_, 1, v_a_1119_);
return v___x_1123_;
}
else
{
lean_object* v_quotContext_1124_; lean_object* v_currMacroScope_1125_; lean_object* v_ref_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_quotContext_1124_ = lean_ctor_get(v_a_1118_, 1);
v_currMacroScope_1125_ = lean_ctor_get(v_a_1118_, 2);
v_ref_1126_ = lean_ctor_get(v_a_1118_, 5);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = l_Lean_Syntax_getArg(v_x_1117_, v___x_1127_);
v___x_1129_ = lean_unsigned_to_nat(2u);
v___x_1130_ = l_Lean_Syntax_getArg(v_x_1117_, v___x_1129_);
lean_dec(v_x_1117_);
v___x_1131_ = 0;
v___x_1132_ = l_Lean_SourceInfo_fromRef(v_ref_1126_, v___x_1131_);
v___x_1133_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1134_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3);
v___x_1135_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4));
lean_inc(v_currMacroScope_1125_);
lean_inc(v_quotContext_1124_);
v___x_1136_ = l_Lean_addMacroScope(v_quotContext_1124_, v___x_1135_, v_currMacroScope_1125_);
v___x_1137_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10));
lean_inc_n(v___x_1132_, 2);
v___x_1138_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1132_);
lean_ctor_set(v___x_1138_, 1, v___x_1134_);
lean_ctor_set(v___x_1138_, 2, v___x_1136_);
lean_ctor_set(v___x_1138_, 3, v___x_1137_);
v___x_1139_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1140_ = l_Lean_Syntax_node2(v___x_1132_, v___x_1139_, v___x_1128_, v___x_1130_);
v___x_1141_ = l_Lean_Syntax_node2(v___x_1132_, v___x_1133_, v___x_1138_, v___x_1140_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set(v___x_1142_, 1, v_a_1119_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___boxed(lean_object* v_x_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(v_x_1143_, v_a_1144_, v_a_1145_);
lean_dec_ref(v_a_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(lean_object* v_x_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1153_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1150_);
v___x_1154_ = l_Lean_Syntax_isOfKind(v_x_1150_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_dec(v_x_1150_);
v___x_1155_ = lean_box(0);
v___x_1156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v_a_1152_);
return v___x_1156_;
}
else
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = l_Lean_Syntax_getArg(v_x_1150_, v___x_1157_);
v___x_1159_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1158_);
v___x_1160_ = l_Lean_Syntax_isOfKind(v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec(v___x_1158_);
lean_dec(v_x_1150_);
v___x_1161_ = lean_box(0);
v___x_1162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
lean_ctor_set(v___x_1162_, 1, v_a_1152_);
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = l_Lean_Syntax_getArg(v_x_1150_, v___x_1163_);
lean_dec(v_x_1150_);
v___x_1165_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1164_);
v___x_1166_ = l_Lean_Syntax_matchesNull(v___x_1164_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_dec(v___x_1164_);
lean_dec(v___x_1158_);
v___x_1167_ = lean_box(0);
v___x_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v_a_1152_);
return v___x_1168_;
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v_ref_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1169_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1157_);
v___x_1170_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1163_);
lean_dec(v___x_1164_);
v_ref_1171_ = l_Lean_replaceRef(v___x_1158_, v_a_1151_);
lean_dec(v___x_1158_);
v___x_1172_ = 0;
v___x_1173_ = l_Lean_SourceInfo_fromRef(v_ref_1171_, v___x_1172_);
lean_dec(v_ref_1171_);
v___x_1174_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__2));
v___x_1175_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__5));
lean_inc(v___x_1173_);
v___x_1176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1173_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = l_Lean_Syntax_node3(v___x_1173_, v___x_1174_, v___x_1169_, v___x_1176_, v___x_1170_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v_a_1152_);
return v___x_1178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___boxed(lean_object* v_x_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(v_x_1179_, v_a_1180_, v_a_1181_);
lean_dec(v_a_1180_);
return v_res_1182_;
}
}
LEAN_EXPORT uint8_t l_List_isSublist___redArg(lean_object* v_inst_1183_, lean_object* v_x_1184_, lean_object* v_x_1185_){
_start:
{
if (lean_obj_tag(v_x_1184_) == 0)
{
uint8_t v___x_1186_; 
lean_dec(v_x_1185_);
lean_dec_ref(v_inst_1183_);
v___x_1186_ = 1;
return v___x_1186_;
}
else
{
if (lean_obj_tag(v_x_1185_) == 0)
{
uint8_t v___x_1187_; 
lean_dec_ref_known(v_x_1184_, 2);
lean_dec_ref(v_inst_1183_);
v___x_1187_ = 0;
return v___x_1187_;
}
else
{
lean_object* v_head_1188_; lean_object* v_tail_1189_; lean_object* v_head_1190_; lean_object* v_tail_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v_head_1188_ = lean_ctor_get(v_x_1184_, 0);
v_tail_1189_ = lean_ctor_get(v_x_1184_, 1);
v_head_1190_ = lean_ctor_get(v_x_1185_, 0);
lean_inc(v_head_1190_);
v_tail_1191_ = lean_ctor_get(v_x_1185_, 1);
lean_inc(v_tail_1191_);
lean_dec_ref_known(v_x_1185_, 2);
lean_inc_ref(v_inst_1183_);
lean_inc(v_head_1188_);
v___x_1192_ = lean_apply_2(v_inst_1183_, v_head_1188_, v_head_1190_);
v___x_1193_ = lean_unbox(v___x_1192_);
if (v___x_1193_ == 0)
{
v_x_1185_ = v_tail_1191_;
goto _start;
}
else
{
lean_inc(v_tail_1189_);
lean_dec_ref_known(v_x_1184_, 2);
v_x_1184_ = v_tail_1189_;
v_x_1185_ = v_tail_1191_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isSublist___redArg___boxed(lean_object* v_inst_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_){
_start:
{
uint8_t v_res_1199_; lean_object* v_r_1200_; 
v_res_1199_ = l_List_isSublist___redArg(v_inst_1196_, v_x_1197_, v_x_1198_);
v_r_1200_ = lean_box(v_res_1199_);
return v_r_1200_;
}
}
LEAN_EXPORT uint8_t l_List_isSublist(lean_object* v_00_u03b1_1201_, lean_object* v_inst_1202_, lean_object* v_x_1203_, lean_object* v_x_1204_){
_start:
{
uint8_t v___x_1205_; 
v___x_1205_ = l_List_isSublist___redArg(v_inst_1202_, v_x_1203_, v_x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_List_isSublist___boxed(lean_object* v_00_u03b1_1206_, lean_object* v_inst_1207_, lean_object* v_x_1208_, lean_object* v_x_1209_){
_start:
{
uint8_t v_res_1210_; lean_object* v_r_1211_; 
v_res_1210_ = l_List_isSublist(v_00_u03b1_1206_, v_inst_1207_, v_x_1208_, v_x_1209_);
v_r_1211_ = lean_box(v_res_1210_);
return v_r_1211_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1(void){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0));
v___x_1230_ = l_String_toRawSubstring_x27(v___x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(lean_object* v_x_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__1));
lean_inc(v_x_1242_);
v___x_1246_ = l_Lean_Syntax_isOfKind(v_x_1242_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec(v_x_1242_);
v___x_1247_ = lean_box(1);
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
lean_ctor_set(v___x_1248_, 1, v_a_1244_);
return v___x_1248_;
}
else
{
lean_object* v_quotContext_1249_; lean_object* v_currMacroScope_1250_; lean_object* v_ref_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v_quotContext_1249_ = lean_ctor_get(v_a_1243_, 1);
v_currMacroScope_1250_ = lean_ctor_get(v_a_1243_, 2);
v_ref_1251_ = lean_ctor_get(v_a_1243_, 5);
v___x_1252_ = lean_unsigned_to_nat(0u);
v___x_1253_ = l_Lean_Syntax_getArg(v_x_1242_, v___x_1252_);
v___x_1254_ = lean_unsigned_to_nat(2u);
v___x_1255_ = l_Lean_Syntax_getArg(v_x_1242_, v___x_1254_);
lean_dec(v_x_1242_);
v___x_1256_ = 0;
v___x_1257_ = l_Lean_SourceInfo_fromRef(v_ref_1251_, v___x_1256_);
v___x_1258_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1259_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1);
v___x_1260_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2));
lean_inc(v_currMacroScope_1250_);
lean_inc(v_quotContext_1249_);
v___x_1261_ = l_Lean_addMacroScope(v_quotContext_1249_, v___x_1260_, v_currMacroScope_1250_);
v___x_1262_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5));
lean_inc_n(v___x_1257_, 2);
v___x_1263_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1257_);
lean_ctor_set(v___x_1263_, 1, v___x_1259_);
lean_ctor_set(v___x_1263_, 2, v___x_1261_);
lean_ctor_set(v___x_1263_, 3, v___x_1262_);
v___x_1264_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1265_ = l_Lean_Syntax_node2(v___x_1257_, v___x_1264_, v___x_1253_, v___x_1255_);
v___x_1266_ = l_Lean_Syntax_node2(v___x_1257_, v___x_1258_, v___x_1263_, v___x_1265_);
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v_a_1244_);
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___boxed(lean_object* v_x_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(v_x_1268_, v_a_1269_, v_a_1270_);
lean_dec_ref(v_a_1269_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(lean_object* v_x_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v___x_1275_; uint8_t v___x_1276_; 
v___x_1275_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1272_);
v___x_1276_ = l_Lean_Syntax_isOfKind(v_x_1272_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
lean_dec(v_x_1272_);
v___x_1277_ = lean_box(0);
v___x_1278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v_a_1274_);
return v___x_1278_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1279_ = lean_unsigned_to_nat(0u);
v___x_1280_ = l_Lean_Syntax_getArg(v_x_1272_, v___x_1279_);
v___x_1281_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1280_);
v___x_1282_ = l_Lean_Syntax_isOfKind(v___x_1280_, v___x_1281_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_dec(v___x_1280_);
lean_dec(v_x_1272_);
v___x_1283_ = lean_box(0);
v___x_1284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
lean_ctor_set(v___x_1284_, 1, v_a_1274_);
return v___x_1284_;
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1285_ = lean_unsigned_to_nat(1u);
v___x_1286_ = l_Lean_Syntax_getArg(v_x_1272_, v___x_1285_);
lean_dec(v_x_1272_);
v___x_1287_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1286_);
v___x_1288_ = l_Lean_Syntax_matchesNull(v___x_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
lean_dec(v___x_1286_);
lean_dec(v___x_1280_);
v___x_1289_ = lean_box(0);
v___x_1290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v_a_1274_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v_ref_1293_; uint8_t v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1291_ = l_Lean_Syntax_getArg(v___x_1286_, v___x_1279_);
v___x_1292_ = l_Lean_Syntax_getArg(v___x_1286_, v___x_1285_);
lean_dec(v___x_1286_);
v_ref_1293_ = l_Lean_replaceRef(v___x_1280_, v_a_1273_);
lean_dec(v___x_1280_);
v___x_1294_ = 0;
v___x_1295_ = l_Lean_SourceInfo_fromRef(v_ref_1293_, v___x_1294_);
lean_dec(v_ref_1293_);
v___x_1296_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__1));
v___x_1297_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__2));
lean_inc(v___x_1295_);
v___x_1298_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1295_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = l_Lean_Syntax_node3(v___x_1295_, v___x_1296_, v___x_1291_, v___x_1298_, v___x_1292_);
v___x_1300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
lean_ctor_set(v___x_1300_, 1, v_a_1274_);
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1___boxed(lean_object* v_x_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(v_x_1301_, v_a_1302_, v_a_1303_);
lean_dec(v_a_1302_);
return v_res_1304_;
}
}
LEAN_EXPORT uint8_t l_List_isPrefixOf___redArg(lean_object* v_inst_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_){
_start:
{
if (lean_obj_tag(v_x_1306_) == 0)
{
uint8_t v___x_1308_; 
lean_dec(v_x_1307_);
lean_dec_ref(v_inst_1305_);
v___x_1308_ = 1;
return v___x_1308_;
}
else
{
if (lean_obj_tag(v_x_1307_) == 0)
{
uint8_t v___x_1309_; 
lean_dec_ref_known(v_x_1306_, 2);
lean_dec_ref(v_inst_1305_);
v___x_1309_ = 0;
return v___x_1309_;
}
else
{
lean_object* v_head_1310_; lean_object* v_tail_1311_; lean_object* v_head_1312_; lean_object* v_tail_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v_head_1310_ = lean_ctor_get(v_x_1306_, 0);
lean_inc(v_head_1310_);
v_tail_1311_ = lean_ctor_get(v_x_1306_, 1);
lean_inc(v_tail_1311_);
lean_dec_ref_known(v_x_1306_, 2);
v_head_1312_ = lean_ctor_get(v_x_1307_, 0);
lean_inc(v_head_1312_);
v_tail_1313_ = lean_ctor_get(v_x_1307_, 1);
lean_inc(v_tail_1313_);
lean_dec_ref_known(v_x_1307_, 2);
lean_inc_ref(v_inst_1305_);
v___x_1314_ = lean_apply_2(v_inst_1305_, v_head_1310_, v_head_1312_);
v___x_1315_ = lean_unbox(v___x_1314_);
if (v___x_1315_ == 0)
{
uint8_t v___x_1316_; 
lean_dec(v_tail_1313_);
lean_dec(v_tail_1311_);
lean_dec_ref(v_inst_1305_);
v___x_1316_ = lean_unbox(v___x_1314_);
return v___x_1316_;
}
else
{
v_x_1306_ = v_tail_1311_;
v_x_1307_ = v_tail_1313_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf___redArg___boxed(lean_object* v_inst_1318_, lean_object* v_x_1319_, lean_object* v_x_1320_){
_start:
{
uint8_t v_res_1321_; lean_object* v_r_1322_; 
v_res_1321_ = l_List_isPrefixOf___redArg(v_inst_1318_, v_x_1319_, v_x_1320_);
v_r_1322_ = lean_box(v_res_1321_);
return v_r_1322_;
}
}
LEAN_EXPORT uint8_t l_List_isPrefixOf(lean_object* v_00_u03b1_1323_, lean_object* v_inst_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_){
_start:
{
uint8_t v___x_1327_; 
v___x_1327_ = l_List_isPrefixOf___redArg(v_inst_1324_, v_x_1325_, v_x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf___boxed(lean_object* v_00_u03b1_1328_, lean_object* v_inst_1329_, lean_object* v_x_1330_, lean_object* v_x_1331_){
_start:
{
uint8_t v_res_1332_; lean_object* v_r_1333_; 
v_res_1332_ = l_List_isPrefixOf(v_00_u03b1_1328_, v_inst_1329_, v_x_1330_, v_x_1331_);
v_r_1333_ = lean_box(v_res_1332_);
return v_r_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter___redArg(lean_object* v_x_1334_, lean_object* v_x_1335_, lean_object* v_h__1_1336_, lean_object* v_h__2_1337_, lean_object* v_h__3_1338_){
_start:
{
if (lean_obj_tag(v_x_1334_) == 0)
{
lean_object* v___x_1339_; 
lean_dec(v_h__3_1338_);
lean_dec(v_h__2_1337_);
v___x_1339_ = lean_apply_1(v_h__1_1336_, v_x_1335_);
return v___x_1339_;
}
else
{
lean_dec(v_h__1_1336_);
if (lean_obj_tag(v_x_1335_) == 0)
{
lean_object* v___x_1340_; 
lean_dec(v_h__3_1338_);
v___x_1340_ = lean_apply_2(v_h__2_1337_, v_x_1334_, lean_box(0));
return v___x_1340_;
}
else
{
lean_object* v_head_1341_; lean_object* v_tail_1342_; lean_object* v_head_1343_; lean_object* v_tail_1344_; lean_object* v___x_1345_; 
lean_dec(v_h__2_1337_);
v_head_1341_ = lean_ctor_get(v_x_1334_, 0);
lean_inc(v_head_1341_);
v_tail_1342_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_tail_1342_);
lean_dec_ref_known(v_x_1334_, 2);
v_head_1343_ = lean_ctor_get(v_x_1335_, 0);
lean_inc(v_head_1343_);
v_tail_1344_ = lean_ctor_get(v_x_1335_, 1);
lean_inc(v_tail_1344_);
lean_dec_ref_known(v_x_1335_, 2);
v___x_1345_ = lean_apply_4(v_h__3_1338_, v_head_1341_, v_tail_1342_, v_head_1343_, v_tail_1344_);
return v___x_1345_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter(lean_object* v_00_u03b1_1346_, lean_object* v_motive_1347_, lean_object* v_x_1348_, lean_object* v_x_1349_, lean_object* v_h__1_1350_, lean_object* v_h__2_1351_, lean_object* v_h__3_1352_){
_start:
{
if (lean_obj_tag(v_x_1348_) == 0)
{
lean_object* v___x_1353_; 
lean_dec(v_h__3_1352_);
lean_dec(v_h__2_1351_);
v___x_1353_ = lean_apply_1(v_h__1_1350_, v_x_1349_);
return v___x_1353_;
}
else
{
lean_dec(v_h__1_1350_);
if (lean_obj_tag(v_x_1349_) == 0)
{
lean_object* v___x_1354_; 
lean_dec(v_h__3_1352_);
v___x_1354_ = lean_apply_2(v_h__2_1351_, v_x_1348_, lean_box(0));
return v___x_1354_;
}
else
{
lean_object* v_head_1355_; lean_object* v_tail_1356_; lean_object* v_head_1357_; lean_object* v_tail_1358_; lean_object* v___x_1359_; 
lean_dec(v_h__2_1351_);
v_head_1355_ = lean_ctor_get(v_x_1348_, 0);
lean_inc(v_head_1355_);
v_tail_1356_ = lean_ctor_get(v_x_1348_, 1);
lean_inc(v_tail_1356_);
lean_dec_ref_known(v_x_1348_, 2);
v_head_1357_ = lean_ctor_get(v_x_1349_, 0);
lean_inc(v_head_1357_);
v_tail_1358_ = lean_ctor_get(v_x_1349_, 1);
lean_inc(v_tail_1358_);
lean_dec_ref_known(v_x_1349_, 2);
v___x_1359_ = lean_apply_4(v_h__3_1352_, v_head_1355_, v_tail_1356_, v_head_1357_, v_tail_1358_);
return v___x_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___redArg(lean_object* v_inst_1360_, lean_object* v_x_1361_, lean_object* v_x_1362_){
_start:
{
if (lean_obj_tag(v_x_1361_) == 0)
{
lean_object* v___x_1363_; 
lean_dec_ref(v_inst_1360_);
v___x_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1363_, 0, v_x_1362_);
return v___x_1363_;
}
else
{
if (lean_obj_tag(v_x_1362_) == 0)
{
lean_object* v___x_1364_; 
lean_dec_ref_known(v_x_1361_, 2);
lean_dec_ref(v_inst_1360_);
v___x_1364_ = lean_box(0);
return v___x_1364_;
}
else
{
lean_object* v_head_1365_; lean_object* v_tail_1366_; lean_object* v_head_1367_; lean_object* v_tail_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v_head_1365_ = lean_ctor_get(v_x_1361_, 0);
lean_inc(v_head_1365_);
v_tail_1366_ = lean_ctor_get(v_x_1361_, 1);
lean_inc(v_tail_1366_);
lean_dec_ref_known(v_x_1361_, 2);
v_head_1367_ = lean_ctor_get(v_x_1362_, 0);
lean_inc(v_head_1367_);
v_tail_1368_ = lean_ctor_get(v_x_1362_, 1);
lean_inc(v_tail_1368_);
lean_dec_ref_known(v_x_1362_, 2);
lean_inc_ref(v_inst_1360_);
v___x_1369_ = lean_apply_2(v_inst_1360_, v_head_1365_, v_head_1367_);
v___x_1370_ = lean_unbox(v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; 
lean_dec(v_tail_1368_);
lean_dec(v_tail_1366_);
lean_dec_ref(v_inst_1360_);
v___x_1371_ = lean_box(0);
return v___x_1371_;
}
else
{
v_x_1361_ = v_tail_1366_;
v_x_1362_ = v_tail_1368_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f(lean_object* v_00_u03b1_1373_, lean_object* v_inst_1374_, lean_object* v_x_1375_, lean_object* v_x_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_List_isPrefixOf_x3f___redArg(v_inst_1374_, v_x_1375_, v_x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT uint8_t l_List_isSuffixOf___redArg(lean_object* v_inst_1378_, lean_object* v_l_u2081_1379_, lean_object* v_l_u2082_1380_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1381_ = l_List_reverse___redArg(v_l_u2081_1379_);
v___x_1382_ = l_List_reverse___redArg(v_l_u2082_1380_);
v___x_1383_ = l_List_isPrefixOf___redArg(v_inst_1378_, v___x_1381_, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf___redArg___boxed(lean_object* v_inst_1384_, lean_object* v_l_u2081_1385_, lean_object* v_l_u2082_1386_){
_start:
{
uint8_t v_res_1387_; lean_object* v_r_1388_; 
v_res_1387_ = l_List_isSuffixOf___redArg(v_inst_1384_, v_l_u2081_1385_, v_l_u2082_1386_);
v_r_1388_ = lean_box(v_res_1387_);
return v_r_1388_;
}
}
LEAN_EXPORT uint8_t l_List_isSuffixOf(lean_object* v_00_u03b1_1389_, lean_object* v_inst_1390_, lean_object* v_l_u2081_1391_, lean_object* v_l_u2082_1392_){
_start:
{
uint8_t v___x_1393_; 
v___x_1393_ = l_List_isSuffixOf___redArg(v_inst_1390_, v_l_u2081_1391_, v_l_u2082_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf___boxed(lean_object* v_00_u03b1_1394_, lean_object* v_inst_1395_, lean_object* v_l_u2081_1396_, lean_object* v_l_u2082_1397_){
_start:
{
uint8_t v_res_1398_; lean_object* v_r_1399_; 
v_res_1398_ = l_List_isSuffixOf(v_00_u03b1_1394_, v_inst_1395_, v_l_u2081_1396_, v_l_u2082_1397_);
v_r_1399_ = lean_box(v_res_1398_);
return v_r_1399_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___redArg(lean_object* v_inst_1400_, lean_object* v_l_u2081_1401_, lean_object* v_l_u2082_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = l_List_reverse___redArg(v_l_u2081_1401_);
v___x_1404_ = l_List_reverse___redArg(v_l_u2082_1402_);
v___x_1405_ = l_List_isPrefixOf_x3f___redArg(v_inst_1400_, v___x_1403_, v___x_1404_);
if (lean_obj_tag(v___x_1405_) == 0)
{
return v___x_1405_;
}
else
{
lean_object* v_val_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
v_val_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_val_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = l_List_reverse___redArg(v_val_1406_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1410_);
v___x_1412_ = v___x_1408_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f(lean_object* v_00_u03b1_1415_, lean_object* v_inst_1416_, lean_object* v_l_u2081_1417_, lean_object* v_l_u2082_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_List_isSuffixOf_x3f___redArg(v_inst_1416_, v_l_u2081_1417_, v_l_u2082_1418_);
return v___x_1419_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0));
v___x_1438_ = l_String_toRawSubstring_x27(v___x_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(lean_object* v_x_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1453_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__1));
lean_inc(v_x_1450_);
v___x_1454_ = l_Lean_Syntax_isOfKind(v_x_1450_, v___x_1453_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
lean_dec(v_x_1450_);
v___x_1455_ = lean_box(1);
v___x_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v_a_1452_);
return v___x_1456_;
}
else
{
lean_object* v_quotContext_1457_; lean_object* v_currMacroScope_1458_; lean_object* v_ref_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_quotContext_1457_ = lean_ctor_get(v_a_1451_, 1);
v_currMacroScope_1458_ = lean_ctor_get(v_a_1451_, 2);
v_ref_1459_ = lean_ctor_get(v_a_1451_, 5);
v___x_1460_ = lean_unsigned_to_nat(0u);
v___x_1461_ = l_Lean_Syntax_getArg(v_x_1450_, v___x_1460_);
v___x_1462_ = lean_unsigned_to_nat(2u);
v___x_1463_ = l_Lean_Syntax_getArg(v_x_1450_, v___x_1462_);
lean_dec(v_x_1450_);
v___x_1464_ = 0;
v___x_1465_ = l_Lean_SourceInfo_fromRef(v_ref_1459_, v___x_1464_);
v___x_1466_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1467_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1);
v___x_1468_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2));
lean_inc(v_currMacroScope_1458_);
lean_inc(v_quotContext_1457_);
v___x_1469_ = l_Lean_addMacroScope(v_quotContext_1457_, v___x_1468_, v_currMacroScope_1458_);
v___x_1470_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5));
lean_inc_n(v___x_1465_, 2);
v___x_1471_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1465_);
lean_ctor_set(v___x_1471_, 1, v___x_1467_);
lean_ctor_set(v___x_1471_, 2, v___x_1469_);
lean_ctor_set(v___x_1471_, 3, v___x_1470_);
v___x_1472_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1473_ = l_Lean_Syntax_node2(v___x_1465_, v___x_1472_, v___x_1461_, v___x_1463_);
v___x_1474_ = l_Lean_Syntax_node2(v___x_1465_, v___x_1466_, v___x_1471_, v___x_1473_);
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
lean_ctor_set(v___x_1475_, 1, v_a_1452_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___boxed(lean_object* v_x_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(v_x_1476_, v_a_1477_, v_a_1478_);
lean_dec_ref(v_a_1477_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(lean_object* v_x_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v___x_1483_; uint8_t v___x_1484_; 
v___x_1483_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1480_);
v___x_1484_ = l_Lean_Syntax_isOfKind(v_x_1480_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
lean_dec(v_x_1480_);
v___x_1485_ = lean_box(0);
v___x_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v_a_1482_);
return v___x_1486_;
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = l_Lean_Syntax_getArg(v_x_1480_, v___x_1487_);
v___x_1489_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1488_);
v___x_1490_ = l_Lean_Syntax_isOfKind(v___x_1488_, v___x_1489_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
lean_dec(v___x_1488_);
lean_dec(v_x_1480_);
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
lean_ctor_set(v___x_1492_, 1, v_a_1482_);
return v___x_1492_;
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1493_ = lean_unsigned_to_nat(1u);
v___x_1494_ = l_Lean_Syntax_getArg(v_x_1480_, v___x_1493_);
lean_dec(v_x_1480_);
v___x_1495_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1494_);
v___x_1496_ = l_Lean_Syntax_matchesNull(v___x_1494_, v___x_1495_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_dec(v___x_1494_);
lean_dec(v___x_1488_);
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
lean_ctor_set(v___x_1498_, 1, v_a_1482_);
return v___x_1498_;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v_ref_1501_; uint8_t v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1499_ = l_Lean_Syntax_getArg(v___x_1494_, v___x_1487_);
v___x_1500_ = l_Lean_Syntax_getArg(v___x_1494_, v___x_1493_);
lean_dec(v___x_1494_);
v_ref_1501_ = l_Lean_replaceRef(v___x_1488_, v_a_1481_);
lean_dec(v___x_1488_);
v___x_1502_ = 0;
v___x_1503_ = l_Lean_SourceInfo_fromRef(v_ref_1501_, v___x_1502_);
lean_dec(v_ref_1501_);
v___x_1504_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__1));
v___x_1505_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__2));
lean_inc(v___x_1503_);
v___x_1506_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1503_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = l_Lean_Syntax_node3(v___x_1503_, v___x_1504_, v___x_1499_, v___x_1506_, v___x_1500_);
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v_a_1482_);
return v___x_1508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1___boxed(lean_object* v_x_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(v_x_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1510_);
return v_res_1512_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0));
v___x_1531_ = l_String_toRawSubstring_x27(v___x_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(lean_object* v_x_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v___x_1546_; uint8_t v___x_1547_; 
v___x_1546_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__1));
lean_inc(v_x_1543_);
v___x_1547_ = l_Lean_Syntax_isOfKind(v_x_1543_, v___x_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
lean_dec(v_x_1543_);
v___x_1548_ = lean_box(1);
v___x_1549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
lean_ctor_set(v___x_1549_, 1, v_a_1545_);
return v___x_1549_;
}
else
{
lean_object* v_quotContext_1550_; lean_object* v_currMacroScope_1551_; lean_object* v_ref_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_quotContext_1550_ = lean_ctor_get(v_a_1544_, 1);
v_currMacroScope_1551_ = lean_ctor_get(v_a_1544_, 2);
v_ref_1552_ = lean_ctor_get(v_a_1544_, 5);
v___x_1553_ = lean_unsigned_to_nat(0u);
v___x_1554_ = l_Lean_Syntax_getArg(v_x_1543_, v___x_1553_);
v___x_1555_ = lean_unsigned_to_nat(2u);
v___x_1556_ = l_Lean_Syntax_getArg(v_x_1543_, v___x_1555_);
lean_dec(v_x_1543_);
v___x_1557_ = 0;
v___x_1558_ = l_Lean_SourceInfo_fromRef(v_ref_1552_, v___x_1557_);
v___x_1559_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1560_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1);
v___x_1561_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2));
lean_inc(v_currMacroScope_1551_);
lean_inc(v_quotContext_1550_);
v___x_1562_ = l_Lean_addMacroScope(v_quotContext_1550_, v___x_1561_, v_currMacroScope_1551_);
v___x_1563_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5));
lean_inc_n(v___x_1558_, 2);
v___x_1564_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1558_);
lean_ctor_set(v___x_1564_, 1, v___x_1560_);
lean_ctor_set(v___x_1564_, 2, v___x_1562_);
lean_ctor_set(v___x_1564_, 3, v___x_1563_);
v___x_1565_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1566_ = l_Lean_Syntax_node2(v___x_1558_, v___x_1565_, v___x_1554_, v___x_1556_);
v___x_1567_ = l_Lean_Syntax_node2(v___x_1558_, v___x_1559_, v___x_1564_, v___x_1566_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
lean_ctor_set(v___x_1568_, 1, v_a_1545_);
return v___x_1568_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___boxed(lean_object* v_x_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(v_x_1569_, v_a_1570_, v_a_1571_);
lean_dec_ref(v_a_1570_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(lean_object* v_x_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v___x_1576_; uint8_t v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1573_);
v___x_1577_ = l_Lean_Syntax_isOfKind(v_x_1573_, v___x_1576_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_dec(v_x_1573_);
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v_a_1575_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v___x_1580_ = lean_unsigned_to_nat(0u);
v___x_1581_ = l_Lean_Syntax_getArg(v_x_1573_, v___x_1580_);
v___x_1582_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1581_);
v___x_1583_ = l_Lean_Syntax_isOfKind(v___x_1581_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
lean_dec(v___x_1581_);
lean_dec(v_x_1573_);
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v_a_1575_);
return v___x_1585_;
}
else
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; uint8_t v___x_1589_; 
v___x_1586_ = lean_unsigned_to_nat(1u);
v___x_1587_ = l_Lean_Syntax_getArg(v_x_1573_, v___x_1586_);
lean_dec(v_x_1573_);
v___x_1588_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1587_);
v___x_1589_ = l_Lean_Syntax_matchesNull(v___x_1587_, v___x_1588_);
if (v___x_1589_ == 0)
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
lean_dec(v___x_1587_);
lean_dec(v___x_1581_);
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set(v___x_1591_, 1, v_a_1575_);
return v___x_1591_;
}
else
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v_ref_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1592_ = l_Lean_Syntax_getArg(v___x_1587_, v___x_1580_);
v___x_1593_ = l_Lean_Syntax_getArg(v___x_1587_, v___x_1586_);
lean_dec(v___x_1587_);
v_ref_1594_ = l_Lean_replaceRef(v___x_1581_, v_a_1574_);
lean_dec(v___x_1581_);
v___x_1595_ = 0;
v___x_1596_ = l_Lean_SourceInfo_fromRef(v_ref_1594_, v___x_1595_);
lean_dec(v_ref_1594_);
v___x_1597_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__1));
v___x_1598_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__2));
lean_inc(v___x_1596_);
v___x_1599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1596_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_Syntax_node3(v___x_1596_, v___x_1597_, v___x_1592_, v___x_1599_, v___x_1593_);
v___x_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v_a_1575_);
return v___x_1601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1___boxed(lean_object* v_x_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(v_x_1602_, v_a_1603_, v_a_1604_);
lean_dec(v_a_1603_);
return v_res_1605_;
}
}
LEAN_EXPORT uint8_t l_List_isInfixOf__internal___redArg(lean_object* v_inst_1606_, lean_object* v_l_u2081_1607_, lean_object* v_l_u2082_1608_){
_start:
{
uint8_t v___x_1609_; 
lean_inc(v_l_u2082_1608_);
lean_inc(v_l_u2081_1607_);
lean_inc_ref(v_inst_1606_);
v___x_1609_ = l_List_isPrefixOf___redArg(v_inst_1606_, v_l_u2081_1607_, v_l_u2082_1608_);
if (v___x_1609_ == 0)
{
if (lean_obj_tag(v_l_u2082_1608_) == 0)
{
lean_dec(v_l_u2081_1607_);
lean_dec_ref(v_inst_1606_);
return v___x_1609_;
}
else
{
lean_object* v_tail_1610_; 
v_tail_1610_ = lean_ctor_get(v_l_u2082_1608_, 1);
lean_inc(v_tail_1610_);
lean_dec_ref_known(v_l_u2082_1608_, 2);
v_l_u2082_1608_ = v_tail_1610_;
goto _start;
}
}
else
{
lean_dec(v_l_u2082_1608_);
lean_dec(v_l_u2081_1607_);
lean_dec_ref(v_inst_1606_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___redArg___boxed(lean_object* v_inst_1612_, lean_object* v_l_u2081_1613_, lean_object* v_l_u2082_1614_){
_start:
{
uint8_t v_res_1615_; lean_object* v_r_1616_; 
v_res_1615_ = l_List_isInfixOf__internal___redArg(v_inst_1612_, v_l_u2081_1613_, v_l_u2082_1614_);
v_r_1616_ = lean_box(v_res_1615_);
return v_r_1616_;
}
}
LEAN_EXPORT uint8_t l_List_isInfixOf__internal(lean_object* v_00_u03b1_1617_, lean_object* v_inst_1618_, lean_object* v_l_u2081_1619_, lean_object* v_l_u2082_1620_){
_start:
{
uint8_t v___x_1621_; 
v___x_1621_ = l_List_isInfixOf__internal___redArg(v_inst_1618_, v_l_u2081_1619_, v_l_u2082_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___boxed(lean_object* v_00_u03b1_1622_, lean_object* v_inst_1623_, lean_object* v_l_u2081_1624_, lean_object* v_l_u2082_1625_){
_start:
{
uint8_t v_res_1626_; lean_object* v_r_1627_; 
v_res_1626_ = l_List_isInfixOf__internal(v_00_u03b1_1622_, v_inst_1623_, v_l_u2081_1624_, v_l_u2082_1625_);
v_r_1627_ = lean_box(v_res_1626_);
return v_r_1627_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt_go___redArg(lean_object* v_l_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_){
_start:
{
if (lean_obj_tag(v_a_1629_) == 0)
{
lean_object* v___x_1632_; 
lean_dec(v_a_1631_);
lean_dec(v_a_1630_);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v_l_1628_);
lean_ctor_set(v___x_1632_, 1, v_a_1629_);
return v___x_1632_;
}
else
{
lean_object* v_head_1633_; lean_object* v_tail_1634_; lean_object* v_zero_1635_; uint8_t v_isZero_1636_; 
v_head_1633_ = lean_ctor_get(v_a_1629_, 0);
v_tail_1634_ = lean_ctor_get(v_a_1629_, 1);
v_zero_1635_ = lean_unsigned_to_nat(0u);
v_isZero_1636_ = lean_nat_dec_eq(v_a_1630_, v_zero_1635_);
if (v_isZero_1636_ == 1)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec(v_a_1630_);
lean_dec(v_l_1628_);
v___x_1637_ = l_List_reverse___redArg(v_a_1631_);
v___x_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
lean_ctor_set(v___x_1638_, 1, v_a_1629_);
return v___x_1638_;
}
else
{
lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1648_; 
lean_inc(v_tail_1634_);
lean_inc(v_head_1633_);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_a_1629_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1649_ = lean_ctor_get(v_a_1629_, 1);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_a_1629_, 0);
lean_dec(v_unused_1650_);
v___x_1640_ = v_a_1629_;
v_isShared_1641_ = v_isSharedCheck_1648_;
goto v_resetjp_1639_;
}
else
{
lean_dec(v_a_1629_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1648_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v_one_1642_; lean_object* v_n_1643_; lean_object* v___x_1645_; 
v_one_1642_ = lean_unsigned_to_nat(1u);
v_n_1643_ = lean_nat_sub(v_a_1630_, v_one_1642_);
lean_dec(v_a_1630_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 1, v_a_1631_);
v___x_1645_ = v___x_1640_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_head_1633_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_a_1631_);
v___x_1645_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
v_a_1629_ = v_tail_1634_;
v_a_1630_ = v_n_1643_;
v_a_1631_ = v___x_1645_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_splitAt_go(lean_object* v_00_u03b1_1651_, lean_object* v_l_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_List_splitAt_go___redArg(v_l_1652_, v_a_1653_, v_a_1654_, v_a_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt___redArg(lean_object* v_n_1657_, lean_object* v_l_1658_){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_box(0);
lean_inc(v_l_1658_);
v___x_1660_ = l_List_splitAt_go___redArg(v_l_1658_, v_l_1658_, v_n_1657_, v___x_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt(lean_object* v_00_u03b1_1661_, lean_object* v_n_1662_, lean_object* v_l_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_List_splitAt___redArg(v_n_1662_, v_l_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg(lean_object* v_xs_1665_, lean_object* v_i_1666_){
_start:
{
lean_object* v_len_1667_; lean_object* v___x_1668_; uint8_t v___x_1669_; 
v_len_1667_ = l_List_length___redArg(v_xs_1665_);
v___x_1668_ = lean_unsigned_to_nat(1u);
v___x_1669_ = lean_nat_dec_le(v_len_1667_, v___x_1668_);
if (v___x_1669_ == 0)
{
lean_object* v_i_1670_; lean_object* v_ys_1671_; lean_object* v_zs_1672_; lean_object* v___x_1673_; 
v_i_1670_ = lean_nat_mod(v_i_1666_, v_len_1667_);
lean_dec(v_len_1667_);
lean_inc(v_xs_1665_);
v_ys_1671_ = l_List_take___redArg(v_i_1670_, v_xs_1665_);
v_zs_1672_ = l_List_drop___redArg(v_i_1670_, v_xs_1665_);
lean_dec(v_xs_1665_);
v___x_1673_ = l_List_appendTR___redArg(v_zs_1672_, v_ys_1671_);
return v___x_1673_;
}
else
{
lean_dec(v_len_1667_);
return v_xs_1665_;
}
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg___boxed(lean_object* v_xs_1674_, lean_object* v_i_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_List_rotateLeft___redArg(v_xs_1674_, v_i_1675_);
lean_dec(v_i_1675_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft(lean_object* v_00_u03b1_1677_, lean_object* v_xs_1678_, lean_object* v_i_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l_List_rotateLeft___redArg(v_xs_1678_, v_i_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___boxed(lean_object* v_00_u03b1_1681_, lean_object* v_xs_1682_, lean_object* v_i_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_List_rotateLeft(v_00_u03b1_1681_, v_xs_1682_, v_i_1683_);
lean_dec(v_i_1683_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___redArg(lean_object* v_xs_1685_, lean_object* v_i_1686_){
_start:
{
lean_object* v_len_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_len_1687_ = l_List_length___redArg(v_xs_1685_);
v___x_1688_ = lean_unsigned_to_nat(1u);
v___x_1689_ = lean_nat_dec_le(v_len_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v_i_1691_; lean_object* v_ys_1692_; lean_object* v_zs_1693_; lean_object* v___x_1694_; 
v___x_1690_ = lean_nat_mod(v_i_1686_, v_len_1687_);
v_i_1691_ = lean_nat_sub(v_len_1687_, v___x_1690_);
lean_dec(v___x_1690_);
lean_dec(v_len_1687_);
lean_inc(v_xs_1685_);
v_ys_1692_ = l_List_take___redArg(v_i_1691_, v_xs_1685_);
v_zs_1693_ = l_List_drop___redArg(v_i_1691_, v_xs_1685_);
lean_dec(v_xs_1685_);
v___x_1694_ = l_List_appendTR___redArg(v_zs_1693_, v_ys_1692_);
return v___x_1694_;
}
else
{
lean_dec(v_len_1687_);
return v_xs_1685_;
}
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___redArg___boxed(lean_object* v_xs_1695_, lean_object* v_i_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l_List_rotateRight___redArg(v_xs_1695_, v_i_1696_);
lean_dec(v_i_1696_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight(lean_object* v_00_u03b1_1698_, lean_object* v_xs_1699_, lean_object* v_i_1700_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l_List_rotateRight___redArg(v_xs_1699_, v_i_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___boxed(lean_object* v_00_u03b1_1702_, lean_object* v_xs_1703_, lean_object* v_i_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_List_rotateRight(v_00_u03b1_1702_, v_xs_1703_, v_i_1704_);
lean_dec(v_i_1704_);
return v_res_1705_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidablePairwise___redArg(lean_object* v_inst_1706_, lean_object* v_x_1707_){
_start:
{
if (lean_obj_tag(v_x_1707_) == 0)
{
uint8_t v___x_1708_; 
lean_dec_ref(v_inst_1706_);
v___x_1708_ = 1;
return v___x_1708_;
}
else
{
lean_object* v_head_1709_; lean_object* v_tail_1710_; uint8_t v_decide_1711_; 
v_head_1709_ = lean_ctor_get(v_x_1707_, 0);
lean_inc(v_head_1709_);
v_tail_1710_ = lean_ctor_get(v_x_1707_, 1);
lean_inc_n(v_tail_1710_, 2);
lean_dec_ref_known(v_x_1707_, 2);
lean_inc_ref(v_inst_1706_);
v_decide_1711_ = l_List_instDecidablePairwise___redArg(v_inst_1706_, v_tail_1710_);
if (v_decide_1711_ == 0)
{
lean_dec(v_tail_1710_);
lean_dec(v_head_1709_);
lean_dec_ref(v_inst_1706_);
return v_decide_1711_;
}
else
{
lean_object* v___x_1712_; uint8_t v_decide_1713_; 
v___x_1712_ = lean_apply_1(v_inst_1706_, v_head_1709_);
v_decide_1713_ = l_List_decidableBAll___redArg(v___x_1712_, v_tail_1710_);
return v_decide_1713_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___redArg___boxed(lean_object* v_inst_1714_, lean_object* v_x_1715_){
_start:
{
uint8_t v_res_1716_; lean_object* v_r_1717_; 
v_res_1716_ = l_List_instDecidablePairwise___redArg(v_inst_1714_, v_x_1715_);
v_r_1717_ = lean_box(v_res_1716_);
return v_r_1717_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidablePairwise(lean_object* v_00_u03b1_1718_, lean_object* v_R_1719_, lean_object* v_inst_1720_, lean_object* v_x_1721_){
_start:
{
uint8_t v___x_1722_; 
v___x_1722_ = l_List_instDecidablePairwise___redArg(v_inst_1720_, v_x_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___boxed(lean_object* v_00_u03b1_1723_, lean_object* v_R_1724_, lean_object* v_inst_1725_, lean_object* v_x_1726_){
_start:
{
uint8_t v_res_1727_; lean_object* v_r_1728_; 
v_res_1727_ = l_List_instDecidablePairwise(v_00_u03b1_1723_, v_R_1724_, v_inst_1725_, v_x_1726_);
v_r_1728_ = lean_box(v_res_1727_);
return v_r_1728_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg___lam__0(lean_object* v_inst_1729_, lean_object* v_a_1730_, lean_object* v_b_1731_){
_start:
{
lean_object* v___x_1732_; uint8_t v___x_1733_; 
v___x_1732_ = lean_apply_2(v_inst_1729_, v_a_1730_, v_b_1731_);
v___x_1733_ = lean_unbox(v___x_1732_);
if (v___x_1733_ == 0)
{
uint8_t v___x_1734_; 
v___x_1734_ = 1;
return v___x_1734_;
}
else
{
uint8_t v___x_1735_; 
v___x_1735_ = 0;
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___lam__0___boxed(lean_object* v_inst_1736_, lean_object* v_a_1737_, lean_object* v_b_1738_){
_start:
{
uint8_t v_res_1739_; lean_object* v_r_1740_; 
v_res_1739_ = l_List_nodupDecidable___redArg___lam__0(v_inst_1736_, v_a_1737_, v_b_1738_);
v_r_1740_ = lean_box(v_res_1739_);
return v_r_1740_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg(lean_object* v_inst_1741_, lean_object* v_l_1742_){
_start:
{
lean_object* v___f_1743_; uint8_t v___x_1744_; 
v___f_1743_ = lean_alloc_closure((void*)(l_List_nodupDecidable___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1743_, 0, v_inst_1741_);
v___x_1744_ = l_List_instDecidablePairwise___redArg(v___f_1743_, v_l_1742_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___boxed(lean_object* v_inst_1745_, lean_object* v_l_1746_){
_start:
{
uint8_t v_res_1747_; lean_object* v_r_1748_; 
v_res_1747_ = l_List_nodupDecidable___redArg(v_inst_1745_, v_l_1746_);
v_r_1748_ = lean_box(v_res_1747_);
return v_r_1748_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable(lean_object* v_00_u03b1_1749_, lean_object* v_inst_1750_, lean_object* v_l_1751_){
_start:
{
uint8_t v___x_1752_; 
v___x_1752_ = l_List_nodupDecidable___redArg(v_inst_1750_, v_l_1751_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___boxed(lean_object* v_00_u03b1_1753_, lean_object* v_inst_1754_, lean_object* v_l_1755_){
_start:
{
uint8_t v_res_1756_; lean_object* v_r_1757_; 
v_res_1756_ = l_List_nodupDecidable(v_00_u03b1_1753_, v_inst_1754_, v_l_1755_);
v_r_1757_ = lean_box(v_res_1756_);
return v_r_1757_;
}
}
LEAN_EXPORT lean_object* l_List_replace___redArg(lean_object* v_inst_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_, lean_object* v_x_1761_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_dec(v_x_1761_);
lean_dec(v_x_1760_);
lean_dec_ref(v_inst_1758_);
return v_x_1759_;
}
else
{
lean_object* v_head_1762_; lean_object* v_tail_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1776_; 
v_head_1762_ = lean_ctor_get(v_x_1759_, 0);
v_tail_1763_ = lean_ctor_get(v_x_1759_, 1);
v_isSharedCheck_1776_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1765_ = v_x_1759_;
v_isShared_1766_ = v_isSharedCheck_1776_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_tail_1763_);
lean_inc(v_head_1762_);
lean_dec(v_x_1759_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1776_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
lean_inc_ref(v_inst_1758_);
lean_inc(v_head_1762_);
lean_inc(v_x_1760_);
v___x_1767_ = lean_apply_2(v_inst_1758_, v_x_1760_, v_head_1762_);
v___x_1768_ = lean_unbox(v___x_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1769_ = l_List_replace___redArg(v_inst_1758_, v_tail_1763_, v_x_1760_, v_x_1761_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 1, v___x_1769_);
v___x_1771_ = v___x_1765_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_head_1762_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
else
{
lean_object* v___x_1774_; 
lean_dec(v_head_1762_);
lean_dec(v_x_1760_);
lean_dec_ref(v_inst_1758_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v_x_1761_);
v___x_1774_ = v___x_1765_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_x_1761_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_tail_1763_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_replace(lean_object* v_00_u03b1_1777_, lean_object* v_inst_1778_, lean_object* v_x_1779_, lean_object* v_x_1780_, lean_object* v_x_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_List_replace___redArg(v_inst_1778_, v_x_1779_, v_x_1780_, v_x_1781_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg(lean_object* v_f_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_zero_1786_; uint8_t v_isZero_1787_; 
v_zero_1786_ = lean_unsigned_to_nat(0u);
v_isZero_1787_ = lean_nat_dec_eq(v_a_1784_, v_zero_1786_);
if (v_isZero_1787_ == 1)
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_apply_1(v_f_1783_, v_a_1785_);
return v___x_1788_;
}
else
{
if (lean_obj_tag(v_a_1785_) == 0)
{
lean_dec_ref(v_f_1783_);
return v_a_1785_;
}
else
{
lean_object* v_head_1789_; lean_object* v_tail_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1800_; 
v_head_1789_ = lean_ctor_get(v_a_1785_, 0);
v_tail_1790_ = lean_ctor_get(v_a_1785_, 1);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_a_1785_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1792_ = v_a_1785_;
v_isShared_1793_ = v_isSharedCheck_1800_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_tail_1790_);
lean_inc(v_head_1789_);
lean_dec(v_a_1785_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1800_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v_one_1794_; lean_object* v_n_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
v_one_1794_ = lean_unsigned_to_nat(1u);
v_n_1795_ = lean_nat_sub(v_a_1784_, v_one_1794_);
v___x_1796_ = l_List_modifyTailIdx_go___redArg(v_f_1783_, v_n_1795_, v_tail_1790_);
lean_dec(v_n_1795_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 1, v___x_1796_);
v___x_1798_ = v___x_1792_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_head_1789_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg___boxed(lean_object* v_f_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_List_modifyTailIdx_go___redArg(v_f_1801_, v_a_1802_, v_a_1803_);
lean_dec(v_a_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go(lean_object* v_00_u03b1_1805_, lean_object* v_f_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_List_modifyTailIdx_go___redArg(v_f_1806_, v_a_1807_, v_a_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___boxed(lean_object* v_00_u03b1_1810_, lean_object* v_f_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_List_modifyTailIdx_go(v_00_u03b1_1810_, v_f_1811_, v_a_1812_, v_a_1813_);
lean_dec(v_a_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg(lean_object* v_l_1815_, lean_object* v_i_1816_, lean_object* v_f_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_List_modifyTailIdx_go___redArg(v_f_1817_, v_i_1816_, v_l_1815_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg___boxed(lean_object* v_l_1819_, lean_object* v_i_1820_, lean_object* v_f_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_List_modifyTailIdx___redArg(v_l_1819_, v_i_1820_, v_f_1821_);
lean_dec(v_i_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx(lean_object* v_00_u03b1_1823_, lean_object* v_l_1824_, lean_object* v_i_1825_, lean_object* v_f_1826_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_List_modifyTailIdx_go___redArg(v_f_1826_, v_i_1825_, v_l_1824_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___boxed(lean_object* v_00_u03b1_1828_, lean_object* v_l_1829_, lean_object* v_i_1830_, lean_object* v_f_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_List_modifyTailIdx(v_00_u03b1_1828_, v_l_1829_, v_i_1830_, v_f_1831_);
lean_dec(v_i_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_List_modifyHead___redArg(lean_object* v_f_1833_, lean_object* v_x_1834_){
_start:
{
if (lean_obj_tag(v_x_1834_) == 0)
{
lean_dec(v_f_1833_);
return v_x_1834_;
}
else
{
lean_object* v_head_1835_; lean_object* v_tail_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1844_; 
v_head_1835_ = lean_ctor_get(v_x_1834_, 0);
v_tail_1836_ = lean_ctor_get(v_x_1834_, 1);
v_isSharedCheck_1844_ = !lean_is_exclusive(v_x_1834_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1838_ = v_x_1834_;
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_tail_1836_);
lean_inc(v_head_1835_);
lean_dec(v_x_1834_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1840_ = lean_apply_1(v_f_1833_, v_head_1835_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1840_);
v___x_1842_ = v___x_1838_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_tail_1836_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyHead(lean_object* v_00_u03b1_1845_, lean_object* v_f_1846_, lean_object* v_x_1847_){
_start:
{
if (lean_obj_tag(v_x_1847_) == 0)
{
lean_dec(v_f_1846_);
return v_x_1847_;
}
else
{
lean_object* v_head_1848_; lean_object* v_tail_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1857_; 
v_head_1848_ = lean_ctor_get(v_x_1847_, 0);
v_tail_1849_ = lean_ctor_get(v_x_1847_, 1);
v_isSharedCheck_1857_ = !lean_is_exclusive(v_x_1847_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1851_ = v_x_1847_;
v_isShared_1852_ = v_isSharedCheck_1857_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_tail_1849_);
lean_inc(v_head_1848_);
lean_dec(v_x_1847_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1857_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1853_ = lean_apply_1(v_f_1846_, v_head_1848_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 0, v___x_1853_);
v___x_1855_ = v___x_1851_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v_tail_1849_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modify___redArg(lean_object* v_l_1858_, lean_object* v_i_1859_, lean_object* v_f_1860_){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_alloc_closure((void*)(l_List_modifyHead), 3, 2);
lean_closure_set(v___x_1861_, 0, lean_box(0));
lean_closure_set(v___x_1861_, 1, v_f_1860_);
v___x_1862_ = l_List_modifyTailIdx_go___redArg(v___x_1861_, v_i_1859_, v_l_1858_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_List_modify___redArg___boxed(lean_object* v_l_1863_, lean_object* v_i_1864_, lean_object* v_f_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_List_modify___redArg(v_l_1863_, v_i_1864_, v_f_1865_);
lean_dec(v_i_1864_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_List_modify(lean_object* v_00_u03b1_1867_, lean_object* v_l_1868_, lean_object* v_i_1869_, lean_object* v_f_1870_){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = lean_alloc_closure((void*)(l_List_modifyHead), 3, 2);
lean_closure_set(v___x_1871_, 0, lean_box(0));
lean_closure_set(v___x_1871_, 1, v_f_1870_);
v___x_1872_ = l_List_modifyTailIdx_go___redArg(v___x_1871_, v_i_1869_, v_l_1868_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_List_modify___boxed(lean_object* v_00_u03b1_1873_, lean_object* v_l_1874_, lean_object* v_i_1875_, lean_object* v_f_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_List_modify(v_00_u03b1_1873_, v_l_1874_, v_i_1875_, v_f_1876_);
lean_dec(v_i_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_List_insert___redArg(lean_object* v_inst_1878_, lean_object* v_a_1879_, lean_object* v_l_1880_){
_start:
{
uint8_t v___x_1881_; 
lean_inc(v_l_1880_);
lean_inc(v_a_1879_);
v___x_1881_ = l_List_elem___redArg(v_inst_1878_, v_a_1879_, v_l_1880_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1882_, 0, v_a_1879_);
lean_ctor_set(v___x_1882_, 1, v_l_1880_);
return v___x_1882_;
}
else
{
lean_dec(v_a_1879_);
return v_l_1880_;
}
}
}
LEAN_EXPORT lean_object* l_List_insert(lean_object* v_00_u03b1_1883_, lean_object* v_inst_1884_, lean_object* v_a_1885_, lean_object* v_l_1886_){
_start:
{
uint8_t v___x_1887_; 
lean_inc(v_l_1886_);
lean_inc(v_a_1885_);
v___x_1887_ = l_List_elem___redArg(v_inst_1884_, v_a_1885_, v_l_1886_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1888_, 0, v_a_1885_);
lean_ctor_set(v___x_1888_, 1, v_l_1886_);
return v___x_1888_;
}
else
{
lean_dec(v_a_1885_);
return v_l_1886_;
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v_zero_1892_; uint8_t v_isZero_1893_; 
v_zero_1892_ = lean_unsigned_to_nat(0u);
v_isZero_1893_ = lean_nat_dec_eq(v_a_1890_, v_zero_1892_);
if (v_isZero_1893_ == 1)
{
lean_object* v___x_1894_; 
v___x_1894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1894_, 0, v_a_1889_);
lean_ctor_set(v___x_1894_, 1, v_a_1891_);
return v___x_1894_;
}
else
{
if (lean_obj_tag(v_a_1891_) == 0)
{
lean_dec(v_a_1889_);
return v_a_1891_;
}
else
{
lean_object* v_head_1895_; lean_object* v_tail_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1906_; 
v_head_1895_ = lean_ctor_get(v_a_1891_, 0);
v_tail_1896_ = lean_ctor_get(v_a_1891_, 1);
v_isSharedCheck_1906_ = !lean_is_exclusive(v_a_1891_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1898_ = v_a_1891_;
v_isShared_1899_ = v_isSharedCheck_1906_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_tail_1896_);
lean_inc(v_head_1895_);
lean_dec(v_a_1891_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1906_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v_one_1900_; lean_object* v_n_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; 
v_one_1900_ = lean_unsigned_to_nat(1u);
v_n_1901_ = lean_nat_sub(v_a_1890_, v_one_1900_);
v___x_1902_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1889_, v_n_1901_, v_tail_1896_);
lean_dec(v_n_1901_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 1, v___x_1902_);
v___x_1904_ = v___x_1898_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_head_1895_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg___boxed(lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1907_, v_a_1908_, v_a_1909_);
lean_dec(v_a_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___redArg(lean_object* v_xs_1911_, lean_object* v_i_1912_, lean_object* v_a_1913_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1913_, v_i_1912_, v_xs_1911_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___redArg___boxed(lean_object* v_xs_1915_, lean_object* v_i_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_List_insertIdx___redArg(v_xs_1915_, v_i_1916_, v_a_1917_);
lean_dec(v_i_1916_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx(lean_object* v_00_u03b1_1919_, lean_object* v_xs_1920_, lean_object* v_i_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v___x_1923_; 
v___x_1923_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1922_, v_i_1921_, v_xs_1920_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___boxed(lean_object* v_00_u03b1_1924_, lean_object* v_xs_1925_, lean_object* v_i_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_List_insertIdx(v_00_u03b1_1924_, v_xs_1925_, v_i_1926_, v_a_1927_);
lean_dec(v_i_1926_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(lean_object* v_00_u03b1_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1930_, v_a_1931_, v_a_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___boxed(lean_object* v_00_u03b1_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(v_00_u03b1_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
lean_dec(v_a_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_List_erase___redArg(lean_object* v_inst_1939_, lean_object* v_x_1940_, lean_object* v_x_1941_){
_start:
{
if (lean_obj_tag(v_x_1940_) == 0)
{
lean_dec(v_x_1941_);
lean_dec_ref(v_inst_1939_);
return v_x_1940_;
}
else
{
lean_object* v_head_1942_; lean_object* v_tail_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1953_; 
v_head_1942_ = lean_ctor_get(v_x_1940_, 0);
v_tail_1943_ = lean_ctor_get(v_x_1940_, 1);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_x_1940_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1945_ = v_x_1940_;
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_tail_1943_);
lean_inc(v_head_1942_);
lean_dec(v_x_1940_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; uint8_t v___x_1948_; 
lean_inc_ref(v_inst_1939_);
lean_inc(v_x_1941_);
lean_inc(v_head_1942_);
v___x_1947_ = lean_apply_2(v_inst_1939_, v_head_1942_, v_x_1941_);
v___x_1948_ = lean_unbox(v___x_1947_);
if (v___x_1948_ == 0)
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1949_ = l_List_erase___redArg(v_inst_1939_, v_tail_1943_, v_x_1941_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 1, v___x_1949_);
v___x_1951_ = v___x_1945_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_head_1942_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
else
{
lean_del_object(v___x_1945_);
lean_dec(v_head_1942_);
lean_dec(v_x_1941_);
lean_dec_ref(v_inst_1939_);
return v_tail_1943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_erase(lean_object* v_00_u03b1_1954_, lean_object* v_inst_1955_, lean_object* v_x_1956_, lean_object* v_x_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l_List_erase___redArg(v_inst_1955_, v_x_1956_, v_x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_List_eraseP___redArg(lean_object* v_p_1959_, lean_object* v_x_1960_){
_start:
{
if (lean_obj_tag(v_x_1960_) == 0)
{
lean_dec_ref(v_p_1959_);
return v_x_1960_;
}
else
{
lean_object* v_head_1961_; lean_object* v_tail_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1972_; 
v_head_1961_ = lean_ctor_get(v_x_1960_, 0);
v_tail_1962_ = lean_ctor_get(v_x_1960_, 1);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_x_1960_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1964_ = v_x_1960_;
v_isShared_1965_ = v_isSharedCheck_1972_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_tail_1962_);
lean_inc(v_head_1961_);
lean_dec(v_x_1960_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1972_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; uint8_t v___x_1967_; 
lean_inc_ref(v_p_1959_);
lean_inc(v_head_1961_);
v___x_1966_ = lean_apply_1(v_p_1959_, v_head_1961_);
v___x_1967_ = lean_unbox(v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = l_List_eraseP___redArg(v_p_1959_, v_tail_1962_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 1, v___x_1968_);
v___x_1970_ = v___x_1964_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_head_1961_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
else
{
lean_del_object(v___x_1964_);
lean_dec(v_head_1961_);
lean_dec_ref(v_p_1959_);
return v_tail_1962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseP(lean_object* v_00_u03b1_1973_, lean_object* v_p_1974_, lean_object* v_x_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = l_List_eraseP___redArg(v_p_1974_, v_x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg(lean_object* v_x_1977_, lean_object* v_x_1978_){
_start:
{
if (lean_obj_tag(v_x_1977_) == 0)
{
return v_x_1977_;
}
else
{
lean_object* v_head_1979_; lean_object* v_tail_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1992_; 
v_head_1979_ = lean_ctor_get(v_x_1977_, 0);
v_tail_1980_ = lean_ctor_get(v_x_1977_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_x_1977_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1982_ = v_x_1977_;
v_isShared_1983_ = v_isSharedCheck_1992_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_tail_1980_);
lean_inc(v_head_1979_);
lean_dec(v_x_1977_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1992_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v_zero_1984_; uint8_t v_isZero_1985_; 
v_zero_1984_ = lean_unsigned_to_nat(0u);
v_isZero_1985_ = lean_nat_dec_eq(v_x_1978_, v_zero_1984_);
if (v_isZero_1985_ == 1)
{
lean_del_object(v___x_1982_);
lean_dec(v_head_1979_);
return v_tail_1980_;
}
else
{
lean_object* v_one_1986_; lean_object* v_n_1987_; lean_object* v___x_1988_; lean_object* v___x_1990_; 
v_one_1986_ = lean_unsigned_to_nat(1u);
v_n_1987_ = lean_nat_sub(v_x_1978_, v_one_1986_);
v___x_1988_ = l_List_eraseIdx___redArg(v_tail_1980_, v_n_1987_);
lean_dec(v_n_1987_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_1988_);
v___x_1990_ = v___x_1982_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_head_1979_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg___boxed(lean_object* v_x_1993_, lean_object* v_x_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_List_eraseIdx___redArg(v_x_1993_, v_x_1994_);
lean_dec(v_x_1994_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx(lean_object* v_00_u03b1_1996_, lean_object* v_x_1997_, lean_object* v_x_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_List_eraseIdx___redArg(v_x_1997_, v_x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___boxed(lean_object* v_00_u03b1_2000_, lean_object* v_x_2001_, lean_object* v_x_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_List_eraseIdx(v_00_u03b1_2000_, v_x_2001_, v_x_2002_);
lean_dec(v_x_2002_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___redArg(lean_object* v_p_2004_, lean_object* v_x_2005_){
_start:
{
if (lean_obj_tag(v_x_2005_) == 0)
{
lean_object* v___x_2006_; 
lean_dec_ref(v_p_2004_);
v___x_2006_ = lean_box(0);
return v___x_2006_;
}
else
{
lean_object* v_head_2007_; lean_object* v_tail_2008_; lean_object* v___x_2009_; uint8_t v___x_2010_; 
v_head_2007_ = lean_ctor_get(v_x_2005_, 0);
lean_inc_n(v_head_2007_, 2);
v_tail_2008_ = lean_ctor_get(v_x_2005_, 1);
lean_inc(v_tail_2008_);
lean_dec_ref_known(v_x_2005_, 2);
lean_inc_ref(v_p_2004_);
v___x_2009_ = lean_apply_1(v_p_2004_, v_head_2007_);
v___x_2010_ = lean_unbox(v___x_2009_);
if (v___x_2010_ == 0)
{
lean_dec(v_head_2007_);
v_x_2005_ = v_tail_2008_;
goto _start;
}
else
{
lean_object* v___x_2012_; 
lean_dec(v_tail_2008_);
lean_dec_ref(v_p_2004_);
v___x_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2012_, 0, v_head_2007_);
return v___x_2012_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f(lean_object* v_00_u03b1_2013_, lean_object* v_p_2014_, lean_object* v_x_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_List_find_x3f___redArg(v_p_2014_, v_x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f___redArg(lean_object* v_f_2017_, lean_object* v_x_2018_){
_start:
{
if (lean_obj_tag(v_x_2018_) == 0)
{
lean_object* v___x_2019_; 
lean_dec_ref(v_f_2017_);
v___x_2019_ = lean_box(0);
return v___x_2019_;
}
else
{
lean_object* v_head_2020_; lean_object* v_tail_2021_; lean_object* v___x_2022_; 
v_head_2020_ = lean_ctor_get(v_x_2018_, 0);
lean_inc(v_head_2020_);
v_tail_2021_ = lean_ctor_get(v_x_2018_, 1);
lean_inc(v_tail_2021_);
lean_dec_ref_known(v_x_2018_, 2);
lean_inc_ref(v_f_2017_);
v___x_2022_ = lean_apply_1(v_f_2017_, v_head_2020_);
if (lean_obj_tag(v___x_2022_) == 0)
{
v_x_2018_ = v_tail_2021_;
goto _start;
}
else
{
lean_dec(v_tail_2021_);
lean_dec_ref(v_f_2017_);
return v___x_2022_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f(lean_object* v_00_u03b1_2024_, lean_object* v_00_u03b2_2025_, lean_object* v_f_2026_, lean_object* v_x_2027_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_List_findSome_x3f___redArg(v_f_2026_, v_x_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_List_findRev_x3f___redArg(lean_object* v_p_2029_, lean_object* v_x_2030_){
_start:
{
if (lean_obj_tag(v_x_2030_) == 0)
{
lean_object* v___x_2031_; 
lean_dec_ref(v_p_2029_);
v___x_2031_ = lean_box(0);
return v___x_2031_;
}
else
{
lean_object* v_head_2032_; lean_object* v_tail_2033_; lean_object* v___x_2034_; 
v_head_2032_ = lean_ctor_get(v_x_2030_, 0);
lean_inc(v_head_2032_);
v_tail_2033_ = lean_ctor_get(v_x_2030_, 1);
lean_inc(v_tail_2033_);
lean_dec_ref_known(v_x_2030_, 2);
lean_inc_ref(v_p_2029_);
v___x_2034_ = l_List_findRev_x3f___redArg(v_p_2029_, v_tail_2033_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v___x_2035_; uint8_t v___x_2036_; 
lean_inc(v_head_2032_);
v___x_2035_ = lean_apply_1(v_p_2029_, v_head_2032_);
v___x_2036_ = lean_unbox(v___x_2035_);
if (v___x_2036_ == 0)
{
lean_dec(v_head_2032_);
return v___x_2034_;
}
else
{
lean_object* v___x_2037_; 
v___x_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2037_, 0, v_head_2032_);
return v___x_2037_;
}
}
else
{
lean_dec(v_head_2032_);
lean_dec_ref(v_p_2029_);
return v___x_2034_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findRev_x3f(lean_object* v_00_u03b1_2038_, lean_object* v_p_2039_, lean_object* v_x_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_List_findRev_x3f___redArg(v_p_2039_, v_x_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f___redArg(lean_object* v_f_2042_, lean_object* v_x_2043_){
_start:
{
if (lean_obj_tag(v_x_2043_) == 0)
{
lean_object* v___x_2044_; 
lean_dec_ref(v_f_2042_);
v___x_2044_ = lean_box(0);
return v___x_2044_;
}
else
{
lean_object* v_head_2045_; lean_object* v_tail_2046_; lean_object* v___x_2047_; 
v_head_2045_ = lean_ctor_get(v_x_2043_, 0);
lean_inc(v_head_2045_);
v_tail_2046_ = lean_ctor_get(v_x_2043_, 1);
lean_inc(v_tail_2046_);
lean_dec_ref_known(v_x_2043_, 2);
lean_inc_ref(v_f_2042_);
v___x_2047_ = l_List_findSomeRev_x3f___redArg(v_f_2042_, v_tail_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_apply_1(v_f_2042_, v_head_2045_);
return v___x_2048_;
}
else
{
lean_dec(v_head_2045_);
lean_dec_ref(v_f_2042_);
return v___x_2047_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f(lean_object* v_00_u03b1_2049_, lean_object* v_00_u03b2_2050_, lean_object* v_f_2051_, lean_object* v_x_2052_){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = l_List_findSomeRev_x3f___redArg(v_f_2051_, v_x_2052_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___redArg(lean_object* v_p_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_){
_start:
{
if (lean_obj_tag(v_a_2055_) == 0)
{
lean_dec_ref(v_p_2054_);
return v_a_2056_;
}
else
{
lean_object* v_head_2057_; lean_object* v_tail_2058_; lean_object* v___x_2059_; uint8_t v___x_2060_; 
v_head_2057_ = lean_ctor_get(v_a_2055_, 0);
lean_inc(v_head_2057_);
v_tail_2058_ = lean_ctor_get(v_a_2055_, 1);
lean_inc(v_tail_2058_);
lean_dec_ref_known(v_a_2055_, 2);
lean_inc_ref(v_p_2054_);
v___x_2059_ = lean_apply_1(v_p_2054_, v_head_2057_);
v___x_2060_ = lean_unbox(v___x_2059_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = lean_unsigned_to_nat(1u);
v___x_2062_ = lean_nat_add(v_a_2056_, v___x_2061_);
lean_dec(v_a_2056_);
v_a_2055_ = v_tail_2058_;
v_a_2056_ = v___x_2062_;
goto _start;
}
else
{
lean_dec(v_tail_2058_);
lean_dec_ref(v_p_2054_);
return v_a_2056_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go(lean_object* v_00_u03b1_2064_, lean_object* v_p_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_List_findIdx_go___redArg(v_p_2065_, v_a_2066_, v_a_2067_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx___redArg(lean_object* v_p_2069_, lean_object* v_l_2070_){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_unsigned_to_nat(0u);
v___x_2072_ = l_List_findIdx_go___redArg(v_p_2069_, v_l_2070_, v___x_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx(lean_object* v_00_u03b1_2073_, lean_object* v_p_2074_, lean_object* v_l_2075_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = l_List_findIdx_go___redArg(v_p_2074_, v_l_2075_, v___x_2076_);
return v___x_2077_;
}
}
LEAN_EXPORT uint8_t l_List_idxOf___redArg___lam__0(lean_object* v_inst_2078_, lean_object* v_a_2079_, lean_object* v_x_2080_){
_start:
{
lean_object* v___x_2081_; uint8_t v___x_2082_; 
v___x_2081_ = lean_apply_2(v_inst_2078_, v_x_2080_, v_a_2079_);
v___x_2082_ = lean_unbox(v___x_2081_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___redArg___lam__0___boxed(lean_object* v_inst_2083_, lean_object* v_a_2084_, lean_object* v_x_2085_){
_start:
{
uint8_t v_res_2086_; lean_object* v_r_2087_; 
v_res_2086_ = l_List_idxOf___redArg___lam__0(v_inst_2083_, v_a_2084_, v_x_2085_);
v_r_2087_ = lean_box(v_res_2086_);
return v_r_2087_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___redArg(lean_object* v_inst_2088_, lean_object* v_a_2089_, lean_object* v_l_2090_){
_start:
{
lean_object* v___f_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___f_2091_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2091_, 0, v_inst_2088_);
lean_closure_set(v___f_2091_, 1, v_a_2089_);
v___x_2092_ = lean_unsigned_to_nat(0u);
v___x_2093_ = l_List_findIdx_go___redArg(v___f_2091_, v_l_2090_, v___x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf(lean_object* v_00_u03b1_2094_, lean_object* v_inst_2095_, lean_object* v_a_2096_, lean_object* v_l_2097_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l_List_idxOf___redArg(v_inst_2095_, v_a_2096_, v_l_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___redArg(lean_object* v_p_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
if (lean_obj_tag(v_a_2100_) == 0)
{
lean_object* v___x_2102_; 
lean_dec(v_a_2101_);
lean_dec_ref(v_p_2099_);
v___x_2102_ = lean_box(0);
return v___x_2102_;
}
else
{
lean_object* v_head_2103_; lean_object* v_tail_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; 
v_head_2103_ = lean_ctor_get(v_a_2100_, 0);
lean_inc(v_head_2103_);
v_tail_2104_ = lean_ctor_get(v_a_2100_, 1);
lean_inc(v_tail_2104_);
lean_dec_ref_known(v_a_2100_, 2);
lean_inc_ref(v_p_2099_);
v___x_2105_ = lean_apply_1(v_p_2099_, v_head_2103_);
v___x_2106_ = lean_unbox(v___x_2105_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_unsigned_to_nat(1u);
v___x_2108_ = lean_nat_add(v_a_2101_, v___x_2107_);
lean_dec(v_a_2101_);
v_a_2100_ = v_tail_2104_;
v_a_2101_ = v___x_2108_;
goto _start;
}
else
{
lean_object* v___x_2110_; 
lean_dec(v_tail_2104_);
lean_dec_ref(v_p_2099_);
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_a_2101_);
return v___x_2110_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go(lean_object* v_00_u03b1_2111_, lean_object* v_p_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_List_findIdx_x3f_go___redArg(v_p_2112_, v_a_2113_, v_a_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f___redArg(lean_object* v_p_2116_, lean_object* v_l_2117_){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = lean_unsigned_to_nat(0u);
v___x_2119_ = l_List_findIdx_x3f_go___redArg(v_p_2116_, v_l_2117_, v___x_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f(lean_object* v_00_u03b1_2120_, lean_object* v_p_2121_, lean_object* v_l_2122_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_unsigned_to_nat(0u);
v___x_2124_ = l_List_findIdx_x3f_go___redArg(v_p_2121_, v_l_2122_, v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf_x3f___redArg(lean_object* v_inst_2125_, lean_object* v_a_2126_, lean_object* v_l_2127_){
_start:
{
lean_object* v___f_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___f_2128_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2128_, 0, v_inst_2125_);
lean_closure_set(v___f_2128_, 1, v_a_2126_);
v___x_2129_ = lean_unsigned_to_nat(0u);
v___x_2130_ = l_List_findIdx_x3f_go___redArg(v___f_2128_, v_l_2127_, v___x_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf_x3f(lean_object* v_00_u03b1_2131_, lean_object* v_inst_2132_, lean_object* v_a_2133_, lean_object* v_l_2134_){
_start:
{
lean_object* v___f_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___f_2135_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2135_, 0, v_inst_2132_);
lean_closure_set(v___f_2135_, 1, v_a_2133_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = l_List_findIdx_x3f_go___redArg(v___f_2135_, v_l_2134_, v___x_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___redArg(lean_object* v_p_2138_, lean_object* v_l_x27_2139_, lean_object* v_i_2140_){
_start:
{
if (lean_obj_tag(v_l_x27_2139_) == 0)
{
lean_object* v___x_2141_; 
lean_dec(v_i_2140_);
lean_dec_ref(v_p_2138_);
v___x_2141_ = lean_box(0);
return v___x_2141_;
}
else
{
lean_object* v_head_2142_; lean_object* v_tail_2143_; lean_object* v___x_2144_; uint8_t v___x_2145_; 
v_head_2142_ = lean_ctor_get(v_l_x27_2139_, 0);
lean_inc(v_head_2142_);
v_tail_2143_ = lean_ctor_get(v_l_x27_2139_, 1);
lean_inc(v_tail_2143_);
lean_dec_ref_known(v_l_x27_2139_, 2);
lean_inc_ref(v_p_2138_);
v___x_2144_ = lean_apply_1(v_p_2138_, v_head_2142_);
v___x_2145_ = lean_unbox(v___x_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_unsigned_to_nat(1u);
v___x_2147_ = lean_nat_add(v_i_2140_, v___x_2146_);
lean_dec(v_i_2140_);
v_l_x27_2139_ = v_tail_2143_;
v_i_2140_ = v___x_2147_;
goto _start;
}
else
{
lean_object* v___x_2149_; 
lean_dec(v_tail_2143_);
lean_dec_ref(v_p_2138_);
v___x_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2149_, 0, v_i_2140_);
return v___x_2149_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go(lean_object* v_00_u03b1_2150_, lean_object* v_p_2151_, lean_object* v_l_2152_, lean_object* v_l_x27_2153_, lean_object* v_i_2154_, lean_object* v_h_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_List_findFinIdx_x3f_go___redArg(v_p_2151_, v_l_x27_2153_, v_i_2154_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___boxed(lean_object* v_00_u03b1_2157_, lean_object* v_p_2158_, lean_object* v_l_2159_, lean_object* v_l_x27_2160_, lean_object* v_i_2161_, lean_object* v_h_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_List_findFinIdx_x3f_go(v_00_u03b1_2157_, v_p_2158_, v_l_2159_, v_l_x27_2160_, v_i_2161_, v_h_2162_);
lean_dec(v_l_2159_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f___redArg(lean_object* v_p_2164_, lean_object* v_l_2165_){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2166_ = lean_unsigned_to_nat(0u);
v___x_2167_ = l_List_findFinIdx_x3f_go___redArg(v_p_2164_, v_l_2165_, v___x_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f(lean_object* v_00_u03b1_2168_, lean_object* v_p_2169_, lean_object* v_l_2170_){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2172_ = l_List_findFinIdx_x3f_go___redArg(v_p_2169_, v_l_2170_, v___x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f___redArg(lean_object* v_inst_2173_, lean_object* v_a_2174_, lean_object* v_l_2175_){
_start:
{
lean_object* v___f_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___f_2176_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2176_, 0, v_inst_2173_);
lean_closure_set(v___f_2176_, 1, v_a_2174_);
v___x_2177_ = lean_unsigned_to_nat(0u);
v___x_2178_ = l_List_findFinIdx_x3f_go___redArg(v___f_2176_, v_l_2175_, v___x_2177_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f(lean_object* v_00_u03b1_2179_, lean_object* v_inst_2180_, lean_object* v_a_2181_, lean_object* v_l_2182_){
_start:
{
lean_object* v___f_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___f_2183_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2183_, 0, v_inst_2180_);
lean_closure_set(v___f_2183_, 1, v_a_2181_);
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = l_List_findFinIdx_x3f_go___redArg(v___f_2183_, v_l_2182_, v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___redArg(lean_object* v_p_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_){
_start:
{
if (lean_obj_tag(v_a_2187_) == 0)
{
lean_dec_ref(v_p_2186_);
return v_a_2188_;
}
else
{
lean_object* v_head_2189_; lean_object* v_tail_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; 
v_head_2189_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_head_2189_);
v_tail_2190_ = lean_ctor_get(v_a_2187_, 1);
lean_inc(v_tail_2190_);
lean_dec_ref_known(v_a_2187_, 2);
lean_inc_ref(v_p_2186_);
v___x_2191_ = lean_apply_1(v_p_2186_, v_head_2189_);
v___x_2192_ = lean_unbox(v___x_2191_);
if (v___x_2192_ == 0)
{
v_a_2187_ = v_tail_2190_;
goto _start;
}
else
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = lean_unsigned_to_nat(1u);
v___x_2195_ = lean_nat_add(v_a_2188_, v___x_2194_);
lean_dec(v_a_2188_);
v_a_2187_ = v_tail_2190_;
v_a_2188_ = v___x_2195_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go(lean_object* v_00_u03b1_2197_, lean_object* v_p_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v___x_2201_; 
v___x_2201_ = l_List_countP_go___redArg(v_p_2198_, v_a_2199_, v_a_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_List_countP___redArg(lean_object* v_p_2202_, lean_object* v_l_2203_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_unsigned_to_nat(0u);
v___x_2205_ = l_List_countP_go___redArg(v_p_2202_, v_l_2203_, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_List_countP(lean_object* v_00_u03b1_2206_, lean_object* v_p_2207_, lean_object* v_l_2208_){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = lean_unsigned_to_nat(0u);
v___x_2210_ = l_List_countP_go___redArg(v_p_2207_, v_l_2208_, v___x_2209_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_List_count___redArg(lean_object* v_inst_2211_, lean_object* v_a_2212_, lean_object* v_l_2213_){
_start:
{
lean_object* v___f_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___f_2214_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2214_, 0, v_inst_2211_);
lean_closure_set(v___f_2214_, 1, v_a_2212_);
v___x_2215_ = lean_unsigned_to_nat(0u);
v___x_2216_ = l_List_countP_go___redArg(v___f_2214_, v_l_2213_, v___x_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_List_count(lean_object* v_00_u03b1_2217_, lean_object* v_inst_2218_, lean_object* v_a_2219_, lean_object* v_l_2220_){
_start:
{
lean_object* v___f_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___f_2221_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2221_, 0, v_inst_2218_);
lean_closure_set(v___f_2221_, 1, v_a_2219_);
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = l_List_countP_go___redArg(v___f_2221_, v_l_2220_, v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___redArg(lean_object* v_inst_2224_, lean_object* v_x_2225_, lean_object* v_x_2226_){
_start:
{
if (lean_obj_tag(v_x_2226_) == 0)
{
lean_object* v___x_2227_; 
lean_dec(v_x_2225_);
lean_dec_ref(v_inst_2224_);
v___x_2227_ = lean_box(0);
return v___x_2227_;
}
else
{
lean_object* v_head_2228_; lean_object* v_tail_2229_; lean_object* v_fst_2230_; lean_object* v_snd_2231_; lean_object* v___x_2232_; uint8_t v___x_2233_; 
v_head_2228_ = lean_ctor_get(v_x_2226_, 0);
lean_inc(v_head_2228_);
v_tail_2229_ = lean_ctor_get(v_x_2226_, 1);
lean_inc(v_tail_2229_);
lean_dec_ref_known(v_x_2226_, 2);
v_fst_2230_ = lean_ctor_get(v_head_2228_, 0);
lean_inc(v_fst_2230_);
v_snd_2231_ = lean_ctor_get(v_head_2228_, 1);
lean_inc(v_snd_2231_);
lean_dec(v_head_2228_);
lean_inc_ref(v_inst_2224_);
lean_inc(v_x_2225_);
v___x_2232_ = lean_apply_2(v_inst_2224_, v_x_2225_, v_fst_2230_);
v___x_2233_ = lean_unbox(v___x_2232_);
if (v___x_2233_ == 0)
{
lean_dec(v_snd_2231_);
v_x_2226_ = v_tail_2229_;
goto _start;
}
else
{
lean_object* v___x_2235_; 
lean_dec(v_tail_2229_);
lean_dec(v_x_2225_);
lean_dec_ref(v_inst_2224_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_snd_2231_);
return v___x_2235_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup(lean_object* v_00_u03b1_2236_, lean_object* v_00_u03b2_2237_, lean_object* v_inst_2238_, lean_object* v_x_2239_, lean_object* v_x_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_List_lookup___redArg(v_inst_2238_, v_x_2239_, v_x_2240_);
return v___x_2241_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1(void){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0));
v___x_2260_ = l_String_toRawSubstring_x27(v___x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(lean_object* v_x_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2283_ = ((lean_object*)(l_List_term___x7e___00__closed__1));
lean_inc(v_x_2280_);
v___x_2284_ = l_Lean_Syntax_isOfKind(v_x_2280_, v___x_2283_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
lean_dec(v_x_2280_);
v___x_2285_ = lean_box(1);
v___x_2286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
lean_ctor_set(v___x_2286_, 1, v_a_2282_);
return v___x_2286_;
}
else
{
lean_object* v_quotContext_2287_; lean_object* v_currMacroScope_2288_; lean_object* v_ref_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_quotContext_2287_ = lean_ctor_get(v_a_2281_, 1);
v_currMacroScope_2288_ = lean_ctor_get(v_a_2281_, 2);
v_ref_2289_ = lean_ctor_get(v_a_2281_, 5);
v___x_2290_ = lean_unsigned_to_nat(0u);
v___x_2291_ = l_Lean_Syntax_getArg(v_x_2280_, v___x_2290_);
v___x_2292_ = lean_unsigned_to_nat(2u);
v___x_2293_ = l_Lean_Syntax_getArg(v_x_2280_, v___x_2292_);
lean_dec(v_x_2280_);
v___x_2294_ = 0;
v___x_2295_ = l_Lean_SourceInfo_fromRef(v_ref_2289_, v___x_2294_);
v___x_2296_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_2297_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1);
v___x_2298_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2));
lean_inc(v_currMacroScope_2288_);
lean_inc(v_quotContext_2287_);
v___x_2299_ = l_Lean_addMacroScope(v_quotContext_2287_, v___x_2298_, v_currMacroScope_2288_);
v___x_2300_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8));
lean_inc_n(v___x_2295_, 2);
v___x_2301_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2295_);
lean_ctor_set(v___x_2301_, 1, v___x_2297_);
lean_ctor_set(v___x_2301_, 2, v___x_2299_);
lean_ctor_set(v___x_2301_, 3, v___x_2300_);
v___x_2302_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_2303_ = l_Lean_Syntax_node2(v___x_2295_, v___x_2302_, v___x_2291_, v___x_2293_);
v___x_2304_ = l_Lean_Syntax_node2(v___x_2295_, v___x_2296_, v___x_2301_, v___x_2303_);
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v_a_2282_);
return v___x_2305_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___boxed(lean_object* v_x_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(v_x_2306_, v_a_2307_, v_a_2308_);
lean_dec_ref(v_a_2307_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(lean_object* v_x_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___x_2313_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_2310_);
v___x_2314_ = l_Lean_Syntax_isOfKind(v_x_2310_, v___x_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
lean_dec(v_x_2310_);
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set(v___x_2316_, 1, v_a_2312_);
return v___x_2316_;
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
v___x_2317_ = lean_unsigned_to_nat(0u);
v___x_2318_ = l_Lean_Syntax_getArg(v_x_2310_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_2318_);
v___x_2320_ = l_Lean_Syntax_isOfKind(v___x_2318_, v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec(v___x_2318_);
lean_dec(v_x_2310_);
v___x_2321_ = lean_box(0);
v___x_2322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v_a_2312_);
return v___x_2322_;
}
else
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = l_Lean_Syntax_getArg(v_x_2310_, v___x_2323_);
lean_dec(v_x_2310_);
v___x_2325_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2324_);
v___x_2326_ = l_Lean_Syntax_matchesNull(v___x_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_dec(v___x_2324_);
lean_dec(v___x_2318_);
v___x_2327_ = lean_box(0);
v___x_2328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
lean_ctor_set(v___x_2328_, 1, v_a_2312_);
return v___x_2328_;
}
else
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v_ref_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2329_ = l_Lean_Syntax_getArg(v___x_2324_, v___x_2317_);
v___x_2330_ = l_Lean_Syntax_getArg(v___x_2324_, v___x_2323_);
lean_dec(v___x_2324_);
v_ref_2331_ = l_Lean_replaceRef(v___x_2318_, v_a_2311_);
lean_dec(v___x_2318_);
v___x_2332_ = 0;
v___x_2333_ = l_Lean_SourceInfo_fromRef(v_ref_2331_, v___x_2332_);
lean_dec(v_ref_2331_);
v___x_2334_ = ((lean_object*)(l_List_term___x7e___00__closed__1));
v___x_2335_ = ((lean_object*)(l_List_term___x7e___00__closed__2));
lean_inc(v___x_2333_);
v___x_2336_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2333_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = l_Lean_Syntax_node3(v___x_2333_, v___x_2334_, v___x_2329_, v___x_2336_, v___x_2330_);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
lean_ctor_set(v___x_2338_, 1, v_a_2312_);
return v___x_2338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1___boxed(lean_object* v_x_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(v_x_2339_, v_a_2340_, v_a_2341_);
lean_dec(v_a_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT uint8_t l_List_isPerm___redArg(lean_object* v_inst_2343_, lean_object* v_x_2344_, lean_object* v_x_2345_){
_start:
{
if (lean_obj_tag(v_x_2344_) == 0)
{
uint8_t v___x_2346_; 
lean_dec_ref(v_inst_2343_);
v___x_2346_ = l_List_isEmpty___redArg(v_x_2345_);
lean_dec(v_x_2345_);
return v___x_2346_;
}
else
{
lean_object* v_head_2347_; lean_object* v_tail_2348_; uint8_t v___x_2349_; 
v_head_2347_ = lean_ctor_get(v_x_2344_, 0);
lean_inc_n(v_head_2347_, 2);
v_tail_2348_ = lean_ctor_get(v_x_2344_, 1);
lean_inc(v_tail_2348_);
lean_dec_ref_known(v_x_2344_, 2);
lean_inc(v_x_2345_);
lean_inc_ref(v_inst_2343_);
v___x_2349_ = l_List_elem___redArg(v_inst_2343_, v_head_2347_, v_x_2345_);
if (v___x_2349_ == 0)
{
lean_dec(v_tail_2348_);
lean_dec(v_head_2347_);
lean_dec(v_x_2345_);
lean_dec_ref(v_inst_2343_);
return v___x_2349_;
}
else
{
lean_object* v___x_2350_; 
lean_inc_ref(v_inst_2343_);
v___x_2350_ = l_List_erase___redArg(v_inst_2343_, v_x_2345_, v_head_2347_);
v_x_2344_ = v_tail_2348_;
v_x_2345_ = v___x_2350_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPerm___redArg___boxed(lean_object* v_inst_2352_, lean_object* v_x_2353_, lean_object* v_x_2354_){
_start:
{
uint8_t v_res_2355_; lean_object* v_r_2356_; 
v_res_2355_ = l_List_isPerm___redArg(v_inst_2352_, v_x_2353_, v_x_2354_);
v_r_2356_ = lean_box(v_res_2355_);
return v_r_2356_;
}
}
LEAN_EXPORT uint8_t l_List_isPerm(lean_object* v_00_u03b1_2357_, lean_object* v_inst_2358_, lean_object* v_x_2359_, lean_object* v_x_2360_){
_start:
{
uint8_t v___x_2361_; 
v___x_2361_ = l_List_isPerm___redArg(v_inst_2358_, v_x_2359_, v_x_2360_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_List_isPerm___boxed(lean_object* v_00_u03b1_2362_, lean_object* v_inst_2363_, lean_object* v_x_2364_, lean_object* v_x_2365_){
_start:
{
uint8_t v_res_2366_; lean_object* v_r_2367_; 
v_res_2366_ = l_List_isPerm(v_00_u03b1_2362_, v_inst_2363_, v_x_2364_, v_x_2365_);
v_r_2367_ = lean_box(v_res_2366_);
return v_r_2367_;
}
}
LEAN_EXPORT uint8_t l_List_any___redArg(lean_object* v_x_2368_, lean_object* v_x_2369_){
_start:
{
if (lean_obj_tag(v_x_2368_) == 0)
{
uint8_t v___x_2370_; 
lean_dec_ref(v_x_2369_);
v___x_2370_ = 0;
return v___x_2370_;
}
else
{
lean_object* v_head_2371_; lean_object* v_tail_2372_; lean_object* v___x_2373_; uint8_t v___x_2374_; 
v_head_2371_ = lean_ctor_get(v_x_2368_, 0);
lean_inc(v_head_2371_);
v_tail_2372_ = lean_ctor_get(v_x_2368_, 1);
lean_inc(v_tail_2372_);
lean_dec_ref_known(v_x_2368_, 2);
lean_inc_ref(v_x_2369_);
v___x_2373_ = lean_apply_1(v_x_2369_, v_head_2371_);
v___x_2374_ = lean_unbox(v___x_2373_);
if (v___x_2374_ == 0)
{
v_x_2368_ = v_tail_2372_;
goto _start;
}
else
{
uint8_t v___x_2376_; 
lean_dec(v_tail_2372_);
lean_dec_ref(v_x_2369_);
v___x_2376_ = lean_unbox(v___x_2373_);
return v___x_2376_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___redArg___boxed(lean_object* v_x_2377_, lean_object* v_x_2378_){
_start:
{
uint8_t v_res_2379_; lean_object* v_r_2380_; 
v_res_2379_ = l_List_any___redArg(v_x_2377_, v_x_2378_);
v_r_2380_ = lean_box(v_res_2379_);
return v_r_2380_;
}
}
LEAN_EXPORT uint8_t l_List_any(lean_object* v_00_u03b1_2381_, lean_object* v_x_2382_, lean_object* v_x_2383_){
_start:
{
uint8_t v___x_2384_; 
v___x_2384_ = l_List_any___redArg(v_x_2382_, v_x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_List_any___boxed(lean_object* v_00_u03b1_2385_, lean_object* v_x_2386_, lean_object* v_x_2387_){
_start:
{
uint8_t v_res_2388_; lean_object* v_r_2389_; 
v_res_2388_ = l_List_any(v_00_u03b1_2385_, v_x_2386_, v_x_2387_);
v_r_2389_ = lean_box(v_res_2388_);
return v_r_2389_;
}
}
LEAN_EXPORT uint8_t l_List_all___redArg(lean_object* v_x_2390_, lean_object* v_x_2391_){
_start:
{
if (lean_obj_tag(v_x_2390_) == 0)
{
uint8_t v___x_2392_; 
lean_dec_ref(v_x_2391_);
v___x_2392_ = 1;
return v___x_2392_;
}
else
{
lean_object* v_head_2393_; lean_object* v_tail_2394_; lean_object* v___x_2395_; uint8_t v___x_2396_; 
v_head_2393_ = lean_ctor_get(v_x_2390_, 0);
lean_inc(v_head_2393_);
v_tail_2394_ = lean_ctor_get(v_x_2390_, 1);
lean_inc(v_tail_2394_);
lean_dec_ref_known(v_x_2390_, 2);
lean_inc_ref(v_x_2391_);
v___x_2395_ = lean_apply_1(v_x_2391_, v_head_2393_);
v___x_2396_ = lean_unbox(v___x_2395_);
if (v___x_2396_ == 0)
{
uint8_t v___x_2397_; 
lean_dec(v_tail_2394_);
lean_dec_ref(v_x_2391_);
v___x_2397_ = lean_unbox(v___x_2395_);
return v___x_2397_;
}
else
{
v_x_2390_ = v_tail_2394_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___redArg___boxed(lean_object* v_x_2399_, lean_object* v_x_2400_){
_start:
{
uint8_t v_res_2401_; lean_object* v_r_2402_; 
v_res_2401_ = l_List_all___redArg(v_x_2399_, v_x_2400_);
v_r_2402_ = lean_box(v_res_2401_);
return v_r_2402_;
}
}
LEAN_EXPORT uint8_t l_List_all(lean_object* v_00_u03b1_2403_, lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
uint8_t v___x_2406_; 
v___x_2406_ = l_List_all___redArg(v_x_2404_, v_x_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_List_all___boxed(lean_object* v_00_u03b1_2407_, lean_object* v_x_2408_, lean_object* v_x_2409_){
_start:
{
uint8_t v_res_2410_; lean_object* v_r_2411_; 
v_res_2410_ = l_List_all(v_00_u03b1_2407_, v_x_2408_, v_x_2409_);
v_r_2411_ = lean_box(v_res_2410_);
return v_r_2411_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_or_spec__0(lean_object* v_x_2412_){
_start:
{
if (lean_obj_tag(v_x_2412_) == 0)
{
uint8_t v___x_2413_; 
v___x_2413_ = 0;
return v___x_2413_;
}
else
{
lean_object* v_head_2414_; uint8_t v___x_2415_; 
v_head_2414_ = lean_ctor_get(v_x_2412_, 0);
v___x_2415_ = lean_unbox(v_head_2414_);
if (v___x_2415_ == 0)
{
lean_object* v_tail_2416_; 
v_tail_2416_ = lean_ctor_get(v_x_2412_, 1);
v_x_2412_ = v_tail_2416_;
goto _start;
}
else
{
uint8_t v___x_2418_; 
v___x_2418_ = lean_unbox(v_head_2414_);
return v___x_2418_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_or_spec__0___boxed(lean_object* v_x_2419_){
_start:
{
uint8_t v_res_2420_; lean_object* v_r_2421_; 
v_res_2420_ = l_List_any___at___00List_or_spec__0(v_x_2419_);
lean_dec(v_x_2419_);
v_r_2421_ = lean_box(v_res_2420_);
return v_r_2421_;
}
}
LEAN_EXPORT uint8_t l_List_or(lean_object* v_bs_2422_){
_start:
{
uint8_t v___x_2423_; 
v___x_2423_ = l_List_any___at___00List_or_spec__0(v_bs_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_List_or___boxed(lean_object* v_bs_2424_){
_start:
{
uint8_t v_res_2425_; lean_object* v_r_2426_; 
v_res_2425_ = l_List_or(v_bs_2424_);
lean_dec(v_bs_2424_);
v_r_2426_ = lean_box(v_res_2425_);
return v_r_2426_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00List_and_spec__0(lean_object* v_x_2427_){
_start:
{
if (lean_obj_tag(v_x_2427_) == 0)
{
uint8_t v___x_2428_; 
v___x_2428_ = 1;
return v___x_2428_;
}
else
{
lean_object* v_head_2429_; uint8_t v___x_2430_; 
v_head_2429_ = lean_ctor_get(v_x_2427_, 0);
v___x_2430_ = lean_unbox(v_head_2429_);
if (v___x_2430_ == 0)
{
uint8_t v___x_2431_; 
v___x_2431_ = lean_unbox(v_head_2429_);
return v___x_2431_;
}
else
{
lean_object* v_tail_2432_; 
v_tail_2432_ = lean_ctor_get(v_x_2427_, 1);
v_x_2427_ = v_tail_2432_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00List_and_spec__0___boxed(lean_object* v_x_2434_){
_start:
{
uint8_t v_res_2435_; lean_object* v_r_2436_; 
v_res_2435_ = l_List_all___at___00List_and_spec__0(v_x_2434_);
lean_dec(v_x_2434_);
v_r_2436_ = lean_box(v_res_2435_);
return v_r_2436_;
}
}
LEAN_EXPORT uint8_t l_List_and(lean_object* v_bs_2437_){
_start:
{
uint8_t v___x_2438_; 
v___x_2438_ = l_List_all___at___00List_and_spec__0(v_bs_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_List_and___boxed(lean_object* v_bs_2439_){
_start:
{
uint8_t v_res_2440_; lean_object* v_r_2441_; 
v_res_2440_ = l_List_and(v_bs_2439_);
lean_dec(v_bs_2439_);
v_r_2441_ = lean_box(v_res_2440_);
return v_r_2441_;
}
}
LEAN_EXPORT lean_object* l_List_zipWith___redArg(lean_object* v_f_2442_, lean_object* v_x_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2443_) == 0)
{
lean_object* v___x_2445_; 
lean_dec(v_x_2444_);
lean_dec(v_f_2442_);
v___x_2445_ = lean_box(0);
return v___x_2445_;
}
else
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v___x_2446_; 
lean_dec_ref_known(v_x_2443_, 2);
lean_dec(v_f_2442_);
v___x_2446_ = lean_box(0);
return v___x_2446_;
}
else
{
lean_object* v_head_2447_; lean_object* v_tail_2448_; lean_object* v_head_2449_; lean_object* v_tail_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2459_; 
v_head_2447_ = lean_ctor_get(v_x_2443_, 0);
lean_inc(v_head_2447_);
v_tail_2448_ = lean_ctor_get(v_x_2443_, 1);
lean_inc(v_tail_2448_);
lean_dec_ref_known(v_x_2443_, 2);
v_head_2449_ = lean_ctor_get(v_x_2444_, 0);
v_tail_2450_ = lean_ctor_get(v_x_2444_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_x_2444_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2452_ = v_x_2444_;
v_isShared_2453_ = v_isSharedCheck_2459_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_tail_2450_);
lean_inc(v_head_2449_);
lean_dec(v_x_2444_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2459_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2457_; 
lean_inc(v_f_2442_);
v___x_2454_ = lean_apply_2(v_f_2442_, v_head_2447_, v_head_2449_);
v___x_2455_ = l_List_zipWith___redArg(v_f_2442_, v_tail_2448_, v_tail_2450_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 1, v___x_2455_);
lean_ctor_set(v___x_2452_, 0, v___x_2454_);
v___x_2457_ = v___x_2452_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v___x_2454_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v___x_2455_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith(lean_object* v_00_u03b1_2460_, lean_object* v_00_u03b2_2461_, lean_object* v_00_u03b3_2462_, lean_object* v_f_2463_, lean_object* v_x_2464_, lean_object* v_x_2465_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_List_zipWith___redArg(v_f_2463_, v_x_2464_, v_x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter___redArg(lean_object* v_x_2467_, lean_object* v_x_2468_, lean_object* v_h__1_2469_, lean_object* v_h__2_2470_){
_start:
{
if (lean_obj_tag(v_x_2467_) == 0)
{
lean_object* v___x_2471_; 
lean_dec(v_h__1_2469_);
v___x_2471_ = lean_apply_3(v_h__2_2470_, v_x_2467_, v_x_2468_, lean_box(0));
return v___x_2471_;
}
else
{
if (lean_obj_tag(v_x_2468_) == 0)
{
lean_object* v___x_2472_; 
lean_dec(v_h__1_2469_);
v___x_2472_ = lean_apply_3(v_h__2_2470_, v_x_2467_, v_x_2468_, lean_box(0));
return v___x_2472_;
}
else
{
lean_object* v_head_2473_; lean_object* v_tail_2474_; lean_object* v_head_2475_; lean_object* v_tail_2476_; lean_object* v___x_2477_; 
lean_dec(v_h__2_2470_);
v_head_2473_ = lean_ctor_get(v_x_2467_, 0);
lean_inc(v_head_2473_);
v_tail_2474_ = lean_ctor_get(v_x_2467_, 1);
lean_inc(v_tail_2474_);
lean_dec_ref_known(v_x_2467_, 2);
v_head_2475_ = lean_ctor_get(v_x_2468_, 0);
lean_inc(v_head_2475_);
v_tail_2476_ = lean_ctor_get(v_x_2468_, 1);
lean_inc(v_tail_2476_);
lean_dec_ref_known(v_x_2468_, 2);
v___x_2477_ = lean_apply_4(v_h__1_2469_, v_head_2473_, v_tail_2474_, v_head_2475_, v_tail_2476_);
return v___x_2477_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter(lean_object* v_00_u03b1_2478_, lean_object* v_00_u03b2_2479_, lean_object* v_motive_2480_, lean_object* v_x_2481_, lean_object* v_x_2482_, lean_object* v_h__1_2483_, lean_object* v_h__2_2484_){
_start:
{
if (lean_obj_tag(v_x_2481_) == 0)
{
lean_object* v___x_2485_; 
lean_dec(v_h__1_2483_);
v___x_2485_ = lean_apply_3(v_h__2_2484_, v_x_2481_, v_x_2482_, lean_box(0));
return v___x_2485_;
}
else
{
if (lean_obj_tag(v_x_2482_) == 0)
{
lean_object* v___x_2486_; 
lean_dec(v_h__1_2483_);
v___x_2486_ = lean_apply_3(v_h__2_2484_, v_x_2481_, v_x_2482_, lean_box(0));
return v___x_2486_;
}
else
{
lean_object* v_head_2487_; lean_object* v_tail_2488_; lean_object* v_head_2489_; lean_object* v_tail_2490_; lean_object* v___x_2491_; 
lean_dec(v_h__2_2484_);
v_head_2487_ = lean_ctor_get(v_x_2481_, 0);
lean_inc(v_head_2487_);
v_tail_2488_ = lean_ctor_get(v_x_2481_, 1);
lean_inc(v_tail_2488_);
lean_dec_ref_known(v_x_2481_, 2);
v_head_2489_ = lean_ctor_get(v_x_2482_, 0);
lean_inc(v_head_2489_);
v_tail_2490_ = lean_ctor_get(v_x_2482_, 1);
lean_inc(v_tail_2490_);
lean_dec_ref_known(v_x_2482_, 2);
v___x_2491_ = lean_apply_4(v_h__1_2483_, v_head_2487_, v_tail_2488_, v_head_2489_, v_tail_2490_);
return v___x_2491_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object* v_x_2492_, lean_object* v_x_2493_){
_start:
{
if (lean_obj_tag(v_x_2492_) == 0)
{
lean_object* v___x_2494_; 
lean_dec(v_x_2493_);
v___x_2494_ = lean_box(0);
return v___x_2494_;
}
else
{
if (lean_obj_tag(v_x_2493_) == 0)
{
lean_object* v___x_2495_; 
lean_dec_ref_known(v_x_2492_, 2);
v___x_2495_ = lean_box(0);
return v___x_2495_;
}
else
{
lean_object* v_head_2496_; lean_object* v_tail_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2514_; 
v_head_2496_ = lean_ctor_get(v_x_2492_, 0);
v_tail_2497_ = lean_ctor_get(v_x_2492_, 1);
v_isSharedCheck_2514_ = !lean_is_exclusive(v_x_2492_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2499_ = v_x_2492_;
v_isShared_2500_ = v_isSharedCheck_2514_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_tail_2497_);
lean_inc(v_head_2496_);
lean_dec(v_x_2492_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2514_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v_head_2501_; lean_object* v_tail_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2513_; 
v_head_2501_ = lean_ctor_get(v_x_2493_, 0);
v_tail_2502_ = lean_ctor_get(v_x_2493_, 1);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_x_2493_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2504_ = v_x_2493_;
v_isShared_2505_ = v_isSharedCheck_2513_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_tail_2502_);
lean_inc(v_head_2501_);
lean_dec(v_x_2493_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2513_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2500_ == 0)
{
lean_ctor_set_tag(v___x_2499_, 0);
lean_ctor_set(v___x_2499_, 1, v_head_2501_);
v___x_2507_ = v___x_2499_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_head_2496_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_head_2501_);
v___x_2507_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2508_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_tail_2497_, v_tail_2502_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v___x_2508_);
lean_ctor_set(v___x_2504_, 0, v___x_2507_);
v___x_2510_ = v___x_2504_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2507_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zip___redArg(lean_object* v_xs_2515_, lean_object* v_ys_2516_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_xs_2515_, v_ys_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_List_zip(lean_object* v_00_u03b1_2518_, lean_object* v_00_u03b2_2519_, lean_object* v_xs_2520_, lean_object* v_ys_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_xs_2520_, v_ys_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object* v_00_u03b1_2523_, lean_object* v_00_u03b2_2524_, lean_object* v_x_2525_, lean_object* v_x_2526_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_x_2525_, v_x_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__0(lean_object* v_f_2528_, lean_object* v_b_2529_){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2530_ = lean_box(0);
v___x_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2531_, 0, v_b_2529_);
v___x_2532_ = lean_apply_2(v_f_2528_, v___x_2530_, v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__1(lean_object* v_f_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2535_, 0, v_a_2534_);
v___x_2536_ = lean_box(0);
v___x_2537_ = lean_apply_2(v_f_2533_, v___x_2535_, v___x_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg(lean_object* v_f_2538_, lean_object* v_x_2539_, lean_object* v_x_2540_){
_start:
{
if (lean_obj_tag(v_x_2539_) == 0)
{
lean_object* v___f_2541_; lean_object* v___x_2542_; 
v___f_2541_ = lean_alloc_closure((void*)(l_List_zipWithAll___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2541_, 0, v_f_2538_);
v___x_2542_ = l_List_map___redArg(v___f_2541_, v_x_2540_);
return v___x_2542_;
}
else
{
if (lean_obj_tag(v_x_2540_) == 0)
{
lean_object* v___f_2543_; lean_object* v___x_2544_; 
v___f_2543_ = lean_alloc_closure((void*)(l_List_zipWithAll___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2543_, 0, v_f_2538_);
v___x_2544_ = l_List_map___redArg(v___f_2543_, v_x_2539_);
return v___x_2544_;
}
else
{
lean_object* v_head_2545_; lean_object* v_tail_2546_; lean_object* v_head_2547_; lean_object* v_tail_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2559_; 
v_head_2545_ = lean_ctor_get(v_x_2539_, 0);
lean_inc(v_head_2545_);
v_tail_2546_ = lean_ctor_get(v_x_2539_, 1);
lean_inc(v_tail_2546_);
lean_dec_ref_known(v_x_2539_, 2);
v_head_2547_ = lean_ctor_get(v_x_2540_, 0);
v_tail_2548_ = lean_ctor_get(v_x_2540_, 1);
v_isSharedCheck_2559_ = !lean_is_exclusive(v_x_2540_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2550_ = v_x_2540_;
v_isShared_2551_ = v_isSharedCheck_2559_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_tail_2548_);
lean_inc(v_head_2547_);
lean_dec(v_x_2540_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2559_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2557_; 
v___x_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_head_2545_);
v___x_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2553_, 0, v_head_2547_);
lean_inc(v_f_2538_);
v___x_2554_ = lean_apply_2(v_f_2538_, v___x_2552_, v___x_2553_);
v___x_2555_ = l_List_zipWithAll___redArg(v_f_2538_, v_tail_2546_, v_tail_2548_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 1, v___x_2555_);
lean_ctor_set(v___x_2550_, 0, v___x_2554_);
v___x_2557_ = v___x_2550_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll(lean_object* v_00_u03b1_2560_, lean_object* v_00_u03b2_2561_, lean_object* v_00_u03b3_2562_, lean_object* v_f_2563_, lean_object* v_x_2564_, lean_object* v_x_2565_){
_start:
{
lean_object* v___x_2566_; 
v___x_2566_ = l_List_zipWithAll___redArg(v_f_2563_, v_x_2564_, v_x_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_List_unzip___redArg(lean_object* v_x_2567_){
_start:
{
if (lean_obj_tag(v_x_2567_) == 0)
{
lean_object* v___x_2568_; 
v___x_2568_ = ((lean_object*)(l_List_partition___redArg___closed__0));
return v___x_2568_;
}
else
{
lean_object* v_head_2569_; lean_object* v_tail_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2596_; 
v_head_2569_ = lean_ctor_get(v_x_2567_, 0);
v_tail_2570_ = lean_ctor_get(v_x_2567_, 1);
v_isSharedCheck_2596_ = !lean_is_exclusive(v_x_2567_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2572_ = v_x_2567_;
v_isShared_2573_ = v_isSharedCheck_2596_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_tail_2570_);
lean_inc(v_head_2569_);
lean_dec(v_x_2567_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2596_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v_fst_2574_; lean_object* v_snd_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2595_; 
v_fst_2574_ = lean_ctor_get(v_head_2569_, 0);
v_snd_2575_ = lean_ctor_get(v_head_2569_, 1);
v_isSharedCheck_2595_ = !lean_is_exclusive(v_head_2569_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2577_ = v_head_2569_;
v_isShared_2578_ = v_isSharedCheck_2595_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_snd_2575_);
lean_inc(v_fst_2574_);
lean_dec(v_head_2569_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2595_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2579_; lean_object* v_fst_2580_; lean_object* v_snd_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2594_; 
v___x_2579_ = l_List_unzip___redArg(v_tail_2570_);
v_fst_2580_ = lean_ctor_get(v___x_2579_, 0);
v_snd_2581_ = lean_ctor_get(v___x_2579_, 1);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2583_ = v___x_2579_;
v_isShared_2584_ = v_isSharedCheck_2594_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_snd_2581_);
lean_inc(v_fst_2580_);
lean_dec(v___x_2579_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2594_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2573_ == 0)
{
lean_ctor_set(v___x_2572_, 1, v_fst_2580_);
lean_ctor_set(v___x_2572_, 0, v_fst_2574_);
v___x_2586_ = v___x_2572_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_fst_2574_);
lean_ctor_set(v_reuseFailAlloc_2593_, 1, v_fst_2580_);
v___x_2586_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
lean_object* v___x_2588_; 
if (v_isShared_2578_ == 0)
{
lean_ctor_set_tag(v___x_2577_, 1);
lean_ctor_set(v___x_2577_, 1, v_snd_2581_);
lean_ctor_set(v___x_2577_, 0, v_snd_2575_);
v___x_2588_ = v___x_2577_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_snd_2575_);
lean_ctor_set(v_reuseFailAlloc_2592_, 1, v_snd_2581_);
v___x_2588_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
lean_object* v___x_2590_; 
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 1, v___x_2588_);
lean_ctor_set(v___x_2583_, 0, v___x_2586_);
v___x_2590_ = v___x_2583_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2591_, 1, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_unzip(lean_object* v_00_u03b1_2597_, lean_object* v_00_u03b2_2598_, lean_object* v_x_2599_){
_start:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_List_unzip___redArg(v_x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg___lam__0(lean_object* v_inst_2601_, lean_object* v_x1_2602_, lean_object* v_x2_2603_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = lean_apply_2(v_inst_2601_, v_x1_2602_, v_x2_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg(lean_object* v_inst_2605_, lean_object* v_inst_2606_, lean_object* v_l_2607_){
_start:
{
lean_object* v___f_2608_; lean_object* v___x_2609_; 
v___f_2608_ = lean_alloc_closure((void*)(l_List_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2608_, 0, v_inst_2605_);
v___x_2609_ = l_List_foldr___redArg(v___f_2608_, v_inst_2606_, v_l_2607_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg___boxed(lean_object* v_inst_2610_, lean_object* v_inst_2611_, lean_object* v_l_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l_List_sum___redArg(v_inst_2610_, v_inst_2611_, v_l_2612_);
lean_dec(v_inst_2611_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_List_sum(lean_object* v_00_u03b1_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_l_2617_){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = l_List_sum___redArg(v_inst_2615_, v_inst_2616_, v_l_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_List_sum___boxed(lean_object* v_00_u03b1_2619_, lean_object* v_inst_2620_, lean_object* v_inst_2621_, lean_object* v_l_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_List_sum(v_00_u03b1_2619_, v_inst_2620_, v_inst_2621_, v_l_2622_);
lean_dec(v_inst_2621_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_List_prod___redArg(lean_object* v_inst_2624_, lean_object* v_inst_2625_, lean_object* v_l_2626_){
_start:
{
lean_object* v___f_2627_; lean_object* v___x_2628_; 
v___f_2627_ = lean_alloc_closure((void*)(l_List_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2627_, 0, v_inst_2624_);
v___x_2628_ = l_List_foldr___redArg(v___f_2627_, v_inst_2625_, v_l_2626_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_List_prod___redArg___boxed(lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_l_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l_List_prod___redArg(v_inst_2629_, v_inst_2630_, v_l_2631_);
lean_dec(v_inst_2630_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_List_prod(lean_object* v_00_u03b1_2633_, lean_object* v_inst_2634_, lean_object* v_inst_2635_, lean_object* v_l_2636_){
_start:
{
lean_object* v___x_2637_; 
v___x_2637_ = l_List_prod___redArg(v_inst_2634_, v_inst_2635_, v_l_2636_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_List_prod___boxed(lean_object* v_00_u03b1_2638_, lean_object* v_inst_2639_, lean_object* v_inst_2640_, lean_object* v_l_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_List_prod(v_00_u03b1_2638_, v_inst_2639_, v_inst_2640_, v_l_2641_);
lean_dec(v_inst_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_List_range_loop(lean_object* v_a_2643_, lean_object* v_a_2644_){
_start:
{
lean_object* v_zero_2645_; uint8_t v_isZero_2646_; 
v_zero_2645_ = lean_unsigned_to_nat(0u);
v_isZero_2646_ = lean_nat_dec_eq(v_a_2643_, v_zero_2645_);
if (v_isZero_2646_ == 1)
{
lean_dec(v_a_2643_);
return v_a_2644_;
}
else
{
lean_object* v_one_2647_; lean_object* v_n_2648_; lean_object* v___x_2649_; 
v_one_2647_ = lean_unsigned_to_nat(1u);
v_n_2648_ = lean_nat_sub(v_a_2643_, v_one_2647_);
lean_dec(v_a_2643_);
lean_inc(v_n_2648_);
v___x_2649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2649_, 0, v_n_2648_);
lean_ctor_set(v___x_2649_, 1, v_a_2644_);
v_a_2643_ = v_n_2648_;
v_a_2644_ = v___x_2649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_range(lean_object* v_n_2651_){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = lean_box(0);
v___x_2653_ = l_List_range_loop(v_n_2651_, v___x_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27(lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v_x_2656_){
_start:
{
lean_object* v_zero_2657_; uint8_t v_isZero_2658_; 
v_zero_2657_ = lean_unsigned_to_nat(0u);
v_isZero_2658_ = lean_nat_dec_eq(v_x_2655_, v_zero_2657_);
if (v_isZero_2658_ == 1)
{
lean_object* v___x_2659_; 
lean_dec(v_x_2654_);
v___x_2659_ = lean_box(0);
return v___x_2659_;
}
else
{
lean_object* v_one_2660_; lean_object* v_n_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_one_2660_ = lean_unsigned_to_nat(1u);
v_n_2661_ = lean_nat_sub(v_x_2655_, v_one_2660_);
v___x_2662_ = lean_nat_add(v_x_2654_, v_x_2656_);
v___x_2663_ = l_List_range_x27(v___x_2662_, v_n_2661_, v_x_2656_);
lean_dec(v_n_2661_);
v___x_2664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2664_, 0, v_x_2654_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
return v___x_2664_;
}
}
}
LEAN_EXPORT lean_object* l_List_range_x27___boxed(lean_object* v_x_2665_, lean_object* v_x_2666_, lean_object* v_x_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_List_range_x27(v_x_2665_, v_x_2666_, v_x_2667_);
lean_dec(v_x_2667_);
lean_dec(v_x_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_List_zipIdx___redArg(lean_object* v_x_2669_, lean_object* v_x_2670_){
_start:
{
if (lean_obj_tag(v_x_2669_) == 0)
{
lean_object* v___x_2671_; 
lean_dec(v_x_2670_);
v___x_2671_ = lean_box(0);
return v___x_2671_;
}
else
{
lean_object* v_head_2672_; lean_object* v_tail_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2684_; 
v_head_2672_ = lean_ctor_get(v_x_2669_, 0);
v_tail_2673_ = lean_ctor_get(v_x_2669_, 1);
v_isSharedCheck_2684_ = !lean_is_exclusive(v_x_2669_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2675_ = v_x_2669_;
v_isShared_2676_ = v_isSharedCheck_2684_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_tail_2673_);
lean_inc(v_head_2672_);
lean_dec(v_x_2669_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2684_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
lean_inc(v_x_2670_);
v___x_2677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2677_, 0, v_head_2672_);
lean_ctor_set(v___x_2677_, 1, v_x_2670_);
v___x_2678_ = lean_unsigned_to_nat(1u);
v___x_2679_ = lean_nat_add(v_x_2670_, v___x_2678_);
lean_dec(v_x_2670_);
v___x_2680_ = l_List_zipIdx___redArg(v_tail_2673_, v___x_2679_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 1, v___x_2680_);
lean_ctor_set(v___x_2675_, 0, v___x_2677_);
v___x_2682_ = v___x_2675_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2677_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipIdx(lean_object* v_00_u03b1_2685_, lean_object* v_x_2686_, lean_object* v_x_2687_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_List_zipIdx___redArg(v_x_2686_, v_x_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_List_min_x3f___redArg(lean_object* v_inst_2689_, lean_object* v_x_2690_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_object* v___x_2691_; 
lean_dec(v_inst_2689_);
v___x_2691_ = lean_box(0);
return v___x_2691_;
}
else
{
lean_object* v_head_2692_; lean_object* v_tail_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v_head_2692_ = lean_ctor_get(v_x_2690_, 0);
lean_inc(v_head_2692_);
v_tail_2693_ = lean_ctor_get(v_x_2690_, 1);
lean_inc(v_tail_2693_);
lean_dec_ref_known(v_x_2690_, 2);
v___x_2694_ = l_List_foldl___redArg(v_inst_2689_, v_head_2692_, v_tail_2693_);
v___x_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
return v___x_2695_;
}
}
}
LEAN_EXPORT lean_object* l_List_min_x3f(lean_object* v_00_u03b1_2696_, lean_object* v_inst_2697_, lean_object* v_x_2698_){
_start:
{
lean_object* v___x_2699_; 
v___x_2699_ = l_List_min_x3f___redArg(v_inst_2697_, v_x_2698_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_List_min___redArg(lean_object* v_inst_2700_, lean_object* v_x_2701_){
_start:
{
lean_object* v_head_2702_; lean_object* v_tail_2703_; lean_object* v___x_2704_; 
v_head_2702_ = lean_ctor_get(v_x_2701_, 0);
lean_inc(v_head_2702_);
v_tail_2703_ = lean_ctor_get(v_x_2701_, 1);
lean_inc(v_tail_2703_);
lean_dec(v_x_2701_);
v___x_2704_ = l_List_foldl___redArg(v_inst_2700_, v_head_2702_, v_tail_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_List_min(lean_object* v_00_u03b1_2705_, lean_object* v_inst_2706_, lean_object* v_x_2707_, lean_object* v_x_2708_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = l_List_min___redArg(v_inst_2706_, v_x_2707_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_List_max_x3f___redArg(lean_object* v_inst_2710_, lean_object* v_x_2711_){
_start:
{
if (lean_obj_tag(v_x_2711_) == 0)
{
lean_object* v___x_2712_; 
lean_dec(v_inst_2710_);
v___x_2712_ = lean_box(0);
return v___x_2712_;
}
else
{
lean_object* v_head_2713_; lean_object* v_tail_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_head_2713_ = lean_ctor_get(v_x_2711_, 0);
lean_inc(v_head_2713_);
v_tail_2714_ = lean_ctor_get(v_x_2711_, 1);
lean_inc(v_tail_2714_);
lean_dec_ref_known(v_x_2711_, 2);
v___x_2715_ = l_List_foldl___redArg(v_inst_2710_, v_head_2713_, v_tail_2714_);
v___x_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
return v___x_2716_;
}
}
}
LEAN_EXPORT lean_object* l_List_max_x3f(lean_object* v_00_u03b1_2717_, lean_object* v_inst_2718_, lean_object* v_x_2719_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l_List_max_x3f___redArg(v_inst_2718_, v_x_2719_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_List_max___redArg(lean_object* v_inst_2721_, lean_object* v_x_2722_){
_start:
{
lean_object* v_head_2723_; lean_object* v_tail_2724_; lean_object* v___x_2725_; 
v_head_2723_ = lean_ctor_get(v_x_2722_, 0);
lean_inc(v_head_2723_);
v_tail_2724_ = lean_ctor_get(v_x_2722_, 1);
lean_inc(v_tail_2724_);
lean_dec(v_x_2722_);
v___x_2725_ = l_List_foldl___redArg(v_inst_2721_, v_head_2723_, v_tail_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_List_max(lean_object* v_00_u03b1_2726_, lean_object* v_inst_2727_, lean_object* v_x_2728_, lean_object* v_x_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_List_max___redArg(v_inst_2727_, v_x_2728_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_List_intersperse___redArg(lean_object* v_sep_2731_, lean_object* v_x_2732_){
_start:
{
if (lean_obj_tag(v_x_2732_) == 0)
{
lean_dec(v_sep_2731_);
return v_x_2732_;
}
else
{
lean_object* v_tail_2733_; 
v_tail_2733_ = lean_ctor_get(v_x_2732_, 1);
if (lean_obj_tag(v_tail_2733_) == 0)
{
lean_dec(v_sep_2731_);
return v_x_2732_;
}
else
{
lean_object* v_head_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2743_; 
lean_inc_ref(v_tail_2733_);
v_head_2734_ = lean_ctor_get(v_x_2732_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_x_2732_);
if (v_isSharedCheck_2743_ == 0)
{
lean_object* v_unused_2744_; 
v_unused_2744_ = lean_ctor_get(v_x_2732_, 1);
lean_dec(v_unused_2744_);
v___x_2736_ = v_x_2732_;
v_isShared_2737_ = v_isSharedCheck_2743_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_head_2734_);
lean_dec(v_x_2732_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2743_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2738_; lean_object* v___x_2740_; 
lean_inc(v_sep_2731_);
v___x_2738_ = l_List_intersperse___redArg(v_sep_2731_, v_tail_2733_);
if (v_isShared_2737_ == 0)
{
lean_ctor_set(v___x_2736_, 1, v___x_2738_);
lean_ctor_set(v___x_2736_, 0, v_sep_2731_);
v___x_2740_ = v___x_2736_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_sep_2731_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2741_, 0, v_head_2734_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
return v___x_2741_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_intersperse(lean_object* v_00_u03b1_2745_, lean_object* v_sep_2746_, lean_object* v_x_2747_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l_List_intersperse___redArg(v_sep_2746_, v_x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(lean_object* v___x_2749_, lean_object* v_x_2750_){
_start:
{
if (lean_obj_tag(v_x_2750_) == 0)
{
uint8_t v___x_2751_; 
lean_dec_ref(v___x_2749_);
v___x_2751_ = 0;
return v___x_2751_;
}
else
{
lean_object* v_head_2752_; lean_object* v_tail_2753_; lean_object* v___x_2754_; uint8_t v___x_2755_; 
v_head_2752_ = lean_ctor_get(v_x_2750_, 0);
lean_inc(v_head_2752_);
v_tail_2753_ = lean_ctor_get(v_x_2750_, 1);
lean_inc(v_tail_2753_);
lean_dec_ref_known(v_x_2750_, 2);
lean_inc_ref(v___x_2749_);
v___x_2754_ = lean_apply_1(v___x_2749_, v_head_2752_);
v___x_2755_ = lean_unbox(v___x_2754_);
if (v___x_2755_ == 0)
{
v_x_2750_ = v_tail_2753_;
goto _start;
}
else
{
uint8_t v___x_2757_; 
lean_dec(v_tail_2753_);
lean_dec_ref(v___x_2749_);
v___x_2757_ = lean_unbox(v___x_2754_);
return v___x_2757_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg___boxed(lean_object* v___x_2758_, lean_object* v_x_2759_){
_start:
{
uint8_t v_res_2760_; lean_object* v_r_2761_; 
v_res_2760_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2758_, v_x_2759_);
v_r_2761_ = lean_box(v_res_2760_);
return v_r_2761_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop___redArg(lean_object* v_r_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
if (lean_obj_tag(v_a_2763_) == 0)
{
lean_object* v___x_2765_; 
lean_dec_ref(v_r_2762_);
v___x_2765_ = l_List_reverse___redArg(v_a_2764_);
return v___x_2765_;
}
else
{
lean_object* v_head_2766_; lean_object* v_tail_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2778_; 
v_head_2766_ = lean_ctor_get(v_a_2763_, 0);
v_tail_2767_ = lean_ctor_get(v_a_2763_, 1);
v_isSharedCheck_2778_ = !lean_is_exclusive(v_a_2763_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2769_ = v_a_2763_;
v_isShared_2770_ = v_isSharedCheck_2778_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_tail_2767_);
lean_inc(v_head_2766_);
lean_dec(v_a_2763_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2778_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2771_; uint8_t v___x_2772_; 
lean_inc_ref(v_r_2762_);
lean_inc(v_head_2766_);
v___x_2771_ = lean_apply_1(v_r_2762_, v_head_2766_);
lean_inc(v_a_2764_);
v___x_2772_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2771_, v_a_2764_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2774_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 1, v_a_2764_);
v___x_2774_ = v___x_2769_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_head_2766_);
lean_ctor_set(v_reuseFailAlloc_2776_, 1, v_a_2764_);
v___x_2774_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
v_a_2763_ = v_tail_2767_;
v_a_2764_ = v___x_2774_;
goto _start;
}
}
else
{
lean_del_object(v___x_2769_);
lean_dec(v_head_2766_);
v_a_2763_ = v_tail_2767_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop(lean_object* v_00_u03b1_2779_, lean_object* v_r_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_){
_start:
{
lean_object* v___x_2783_; 
v___x_2783_ = l_List_eraseDupsBy_loop___redArg(v_r_2780_, v_a_2781_, v_a_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0(lean_object* v_00_u03b1_2784_, lean_object* v___x_2785_, lean_object* v_x_2786_){
_start:
{
uint8_t v___x_2787_; 
v___x_2787_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2785_, v_x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___boxed(lean_object* v_00_u03b1_2788_, lean_object* v___x_2789_, lean_object* v_x_2790_){
_start:
{
uint8_t v_res_2791_; lean_object* v_r_2792_; 
v_res_2791_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0(v_00_u03b1_2788_, v___x_2789_, v_x_2790_);
v_r_2792_ = lean_box(v_res_2791_);
return v_r_2792_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy___redArg(lean_object* v_r_2793_, lean_object* v_as_2794_){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_box(0);
v___x_2796_ = l_List_eraseDupsBy_loop___redArg(v_r_2793_, v_as_2794_, v___x_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy(lean_object* v_00_u03b1_2797_, lean_object* v_r_2798_, lean_object* v_as_2799_){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = l_List_eraseDupsBy___redArg(v_r_2798_, v_as_2799_);
return v___x_2800_;
}
}
LEAN_EXPORT uint8_t l_List_eraseDups___redArg___lam__0(lean_object* v_inst_2801_, lean_object* v_x1_2802_, lean_object* v_x2_2803_){
_start:
{
lean_object* v___x_2804_; uint8_t v___x_2805_; 
v___x_2804_ = lean_apply_2(v_inst_2801_, v_x1_2802_, v_x2_2803_);
v___x_2805_ = lean_unbox(v___x_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___redArg___lam__0___boxed(lean_object* v_inst_2806_, lean_object* v_x1_2807_, lean_object* v_x2_2808_){
_start:
{
uint8_t v_res_2809_; lean_object* v_r_2810_; 
v_res_2809_ = l_List_eraseDups___redArg___lam__0(v_inst_2806_, v_x1_2807_, v_x2_2808_);
v_r_2810_ = lean_box(v_res_2809_);
return v_r_2810_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___redArg(lean_object* v_inst_2811_, lean_object* v_as_2812_){
_start:
{
lean_object* v___f_2813_; lean_object* v___x_2814_; 
v___f_2813_ = lean_alloc_closure((void*)(l_List_eraseDups___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2813_, 0, v_inst_2811_);
v___x_2814_ = l_List_eraseDupsBy___redArg(v___f_2813_, v_as_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups(lean_object* v_00_u03b1_2815_, lean_object* v_inst_2816_, lean_object* v_as_2817_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l_List_eraseDups___redArg(v_inst_2816_, v_as_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop___redArg(lean_object* v_r_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_){
_start:
{
if (lean_obj_tag(v_a_2821_) == 0)
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
lean_dec_ref(v_r_2819_);
v___x_2823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2823_, 0, v_a_2820_);
lean_ctor_set(v___x_2823_, 1, v_a_2822_);
v___x_2824_ = l_List_reverse___redArg(v___x_2823_);
return v___x_2824_;
}
else
{
lean_object* v_head_2825_; lean_object* v_tail_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2837_; 
v_head_2825_ = lean_ctor_get(v_a_2821_, 0);
v_tail_2826_ = lean_ctor_get(v_a_2821_, 1);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_a_2821_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2828_ = v_a_2821_;
v_isShared_2829_ = v_isSharedCheck_2837_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_tail_2826_);
lean_inc(v_head_2825_);
lean_dec(v_a_2821_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2837_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
lean_inc_ref(v_r_2819_);
lean_inc(v_head_2825_);
lean_inc(v_a_2820_);
v___x_2830_ = lean_apply_2(v_r_2819_, v_a_2820_, v_head_2825_);
v___x_2831_ = lean_unbox(v___x_2830_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2833_; 
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 1, v_a_2822_);
lean_ctor_set(v___x_2828_, 0, v_a_2820_);
v___x_2833_ = v___x_2828_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2820_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_a_2822_);
v___x_2833_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
v_a_2820_ = v_head_2825_;
v_a_2821_ = v_tail_2826_;
v_a_2822_ = v___x_2833_;
goto _start;
}
}
else
{
lean_del_object(v___x_2828_);
lean_dec(v_head_2825_);
v_a_2821_ = v_tail_2826_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop(lean_object* v_00_u03b1_2838_, lean_object* v_r_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_List_eraseRepsBy_loop___redArg(v_r_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy___redArg(lean_object* v_r_2844_, lean_object* v_x_2845_){
_start:
{
if (lean_obj_tag(v_x_2845_) == 0)
{
lean_dec_ref(v_r_2844_);
return v_x_2845_;
}
else
{
lean_object* v_head_2846_; lean_object* v_tail_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_head_2846_ = lean_ctor_get(v_x_2845_, 0);
lean_inc(v_head_2846_);
v_tail_2847_ = lean_ctor_get(v_x_2845_, 1);
lean_inc(v_tail_2847_);
lean_dec_ref_known(v_x_2845_, 2);
v___x_2848_ = lean_box(0);
v___x_2849_ = l_List_eraseRepsBy_loop___redArg(v_r_2844_, v_head_2846_, v_tail_2847_, v___x_2848_);
return v___x_2849_;
}
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy(lean_object* v_00_u03b1_2850_, lean_object* v_r_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_List_eraseRepsBy___redArg(v_r_2851_, v_x_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_List_eraseReps___redArg(lean_object* v_inst_2854_, lean_object* v_as_2855_){
_start:
{
lean_object* v___f_2856_; lean_object* v___x_2857_; 
v___f_2856_ = lean_alloc_closure((void*)(l_List_eraseDups___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2856_, 0, v_inst_2854_);
v___x_2857_ = l_List_eraseRepsBy___redArg(v___f_2856_, v_as_2855_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_List_eraseReps(lean_object* v_00_u03b1_2858_, lean_object* v_inst_2859_, lean_object* v_as_2860_){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_List_eraseReps___redArg(v_inst_2859_, v_as_2860_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_List_span_loop___redArg(lean_object* v_p_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
if (lean_obj_tag(v_a_2863_) == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec_ref(v_p_2862_);
v___x_2865_ = l_List_reverse___redArg(v_a_2864_);
v___x_2866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
lean_ctor_set(v___x_2866_, 1, v_a_2863_);
return v___x_2866_;
}
else
{
lean_object* v_head_2867_; lean_object* v_tail_2868_; lean_object* v___x_2869_; uint8_t v___x_2870_; 
v_head_2867_ = lean_ctor_get(v_a_2863_, 0);
v_tail_2868_ = lean_ctor_get(v_a_2863_, 1);
lean_inc_ref(v_p_2862_);
lean_inc(v_head_2867_);
v___x_2869_ = lean_apply_1(v_p_2862_, v_head_2867_);
v___x_2870_ = lean_unbox(v___x_2869_);
if (v___x_2870_ == 0)
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
lean_dec_ref(v_p_2862_);
v___x_2871_ = l_List_reverse___redArg(v_a_2864_);
v___x_2872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
lean_ctor_set(v___x_2872_, 1, v_a_2863_);
return v___x_2872_;
}
else
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2880_; 
lean_inc(v_tail_2868_);
lean_inc(v_head_2867_);
v_isSharedCheck_2880_ = !lean_is_exclusive(v_a_2863_);
if (v_isSharedCheck_2880_ == 0)
{
lean_object* v_unused_2881_; lean_object* v_unused_2882_; 
v_unused_2881_ = lean_ctor_get(v_a_2863_, 1);
lean_dec(v_unused_2881_);
v_unused_2882_ = lean_ctor_get(v_a_2863_, 0);
lean_dec(v_unused_2882_);
v___x_2874_ = v_a_2863_;
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v_a_2863_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v_a_2864_);
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_head_2867_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_a_2864_);
v___x_2877_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
v_a_2863_ = v_tail_2868_;
v_a_2864_ = v___x_2877_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_span_loop(lean_object* v_00_u03b1_2883_, lean_object* v_p_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_){
_start:
{
lean_object* v___x_2887_; 
v___x_2887_ = l_List_span_loop___redArg(v_p_2884_, v_a_2885_, v_a_2886_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_List_span___redArg(lean_object* v_p_2888_, lean_object* v_as_2889_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_box(0);
v___x_2891_ = l_List_span_loop___redArg(v_p_2888_, v_as_2889_, v___x_2890_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_List_span(lean_object* v_00_u03b1_2892_, lean_object* v_p_2893_, lean_object* v_as_2894_){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = lean_box(0);
v___x_2896_ = l_List_span_loop___redArg(v_p_2893_, v_as_2894_, v___x_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l_List_splitBy_loop___redArg(lean_object* v_R_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_){
_start:
{
if (lean_obj_tag(v_a_2898_) == 0)
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_dec_ref(v_R_2897_);
v___x_2902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2902_, 0, v_a_2899_);
lean_ctor_set(v___x_2902_, 1, v_a_2900_);
v___x_2903_ = l_List_reverse___redArg(v___x_2902_);
v___x_2904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
lean_ctor_set(v___x_2904_, 1, v_a_2901_);
v___x_2905_ = l_List_reverse___redArg(v___x_2904_);
return v___x_2905_;
}
else
{
lean_object* v_head_2906_; lean_object* v_tail_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2924_; 
v_head_2906_ = lean_ctor_get(v_a_2898_, 0);
v_tail_2907_ = lean_ctor_get(v_a_2898_, 1);
v_isSharedCheck_2924_ = !lean_is_exclusive(v_a_2898_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2909_ = v_a_2898_;
v_isShared_2910_ = v_isSharedCheck_2924_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_tail_2907_);
lean_inc(v_head_2906_);
lean_dec(v_a_2898_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2924_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; uint8_t v___x_2912_; 
lean_inc_ref(v_R_2897_);
lean_inc(v_head_2906_);
lean_inc(v_a_2899_);
v___x_2911_ = lean_apply_2(v_R_2897_, v_a_2899_, v_head_2906_);
v___x_2912_ = lean_unbox(v___x_2911_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2913_ = lean_box(0);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 1, v_a_2900_);
lean_ctor_set(v___x_2909_, 0, v_a_2899_);
v___x_2915_ = v___x_2909_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_a_2899_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_a_2900_);
v___x_2915_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2916_ = l_List_reverse___redArg(v___x_2915_);
v___x_2917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
lean_ctor_set(v___x_2917_, 1, v_a_2901_);
v_a_2898_ = v_tail_2907_;
v_a_2899_ = v_head_2906_;
v_a_2900_ = v___x_2913_;
v_a_2901_ = v___x_2917_;
goto _start;
}
}
else
{
lean_object* v___x_2921_; 
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 1, v_a_2900_);
lean_ctor_set(v___x_2909_, 0, v_a_2899_);
v___x_2921_ = v___x_2909_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2899_);
lean_ctor_set(v_reuseFailAlloc_2923_, 1, v_a_2900_);
v___x_2921_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
v_a_2898_ = v_tail_2907_;
v_a_2899_ = v_head_2906_;
v_a_2900_ = v___x_2921_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_splitBy_loop(lean_object* v_00_u03b1_2925_, lean_object* v_R_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l_List_splitBy_loop___redArg(v_R_2926_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_List_splitBy___redArg(lean_object* v_R_2932_, lean_object* v_x_2933_){
_start:
{
if (lean_obj_tag(v_x_2933_) == 0)
{
lean_object* v___x_2934_; 
lean_dec_ref(v_R_2932_);
v___x_2934_ = lean_box(0);
return v___x_2934_;
}
else
{
lean_object* v_head_2935_; lean_object* v_tail_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v_head_2935_ = lean_ctor_get(v_x_2933_, 0);
lean_inc(v_head_2935_);
v_tail_2936_ = lean_ctor_get(v_x_2933_, 1);
lean_inc(v_tail_2936_);
lean_dec_ref_known(v_x_2933_, 2);
v___x_2937_ = lean_box(0);
v___x_2938_ = l_List_splitBy_loop___redArg(v_R_2932_, v_tail_2936_, v_head_2935_, v___x_2937_, v___x_2937_);
return v___x_2938_;
}
}
}
LEAN_EXPORT lean_object* l_List_splitBy(lean_object* v_00_u03b1_2939_, lean_object* v_R_2940_, lean_object* v_x_2941_){
_start:
{
lean_object* v___x_2942_; 
v___x_2942_ = l_List_splitBy___redArg(v_R_2940_, v_x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT uint8_t l_List_removeAll___redArg___lam__0(lean_object* v_inst_2943_, lean_object* v_ys_2944_, lean_object* v_x_2945_){
_start:
{
uint8_t v___x_2946_; 
v___x_2946_ = l_List_elem___redArg(v_inst_2943_, v_x_2945_, v_ys_2944_);
if (v___x_2946_ == 0)
{
uint8_t v___x_2947_; 
v___x_2947_ = 1;
return v___x_2947_;
}
else
{
uint8_t v___x_2948_; 
v___x_2948_ = 0;
return v___x_2948_;
}
}
}
LEAN_EXPORT lean_object* l_List_removeAll___redArg___lam__0___boxed(lean_object* v_inst_2949_, lean_object* v_ys_2950_, lean_object* v_x_2951_){
_start:
{
uint8_t v_res_2952_; lean_object* v_r_2953_; 
v_res_2952_ = l_List_removeAll___redArg___lam__0(v_inst_2949_, v_ys_2950_, v_x_2951_);
v_r_2953_ = lean_box(v_res_2952_);
return v_r_2953_;
}
}
LEAN_EXPORT lean_object* l_List_removeAll___redArg(lean_object* v_inst_2954_, lean_object* v_xs_2955_, lean_object* v_ys_2956_){
_start:
{
lean_object* v___f_2957_; lean_object* v___x_2958_; 
v___f_2957_ = lean_alloc_closure((void*)(l_List_removeAll___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2957_, 0, v_inst_2954_);
lean_closure_set(v___f_2957_, 1, v_ys_2956_);
v___x_2958_ = l_List_filter___redArg(v___f_2957_, v_xs_2955_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_List_removeAll(lean_object* v_00_u03b1_2959_, lean_object* v_inst_2960_, lean_object* v_xs_2961_, lean_object* v_ys_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_List_removeAll___redArg(v_inst_2960_, v_xs_2961_, v_ys_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___redArg(lean_object* v_f_2964_, lean_object* v_a_2965_, lean_object* v_a_2966_){
_start:
{
if (lean_obj_tag(v_a_2965_) == 0)
{
lean_object* v___x_2967_; 
lean_dec(v_f_2964_);
v___x_2967_ = l_List_reverse___redArg(v_a_2966_);
return v___x_2967_;
}
else
{
lean_object* v_head_2968_; lean_object* v_tail_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2978_; 
v_head_2968_ = lean_ctor_get(v_a_2965_, 0);
v_tail_2969_ = lean_ctor_get(v_a_2965_, 1);
v_isSharedCheck_2978_ = !lean_is_exclusive(v_a_2965_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2971_ = v_a_2965_;
v_isShared_2972_ = v_isSharedCheck_2978_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_tail_2969_);
lean_inc(v_head_2968_);
lean_dec(v_a_2965_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2978_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2975_; 
lean_inc(v_f_2964_);
v___x_2973_ = lean_apply_1(v_f_2964_, v_head_2968_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 1, v_a_2966_);
lean_ctor_set(v___x_2971_, 0, v___x_2973_);
v___x_2975_ = v___x_2971_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2977_, 1, v_a_2966_);
v___x_2975_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
v_a_2965_ = v_tail_2969_;
v_a_2966_ = v___x_2975_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop(lean_object* v_00_u03b1_2979_, lean_object* v_00_u03b2_2980_, lean_object* v_f_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v___x_2984_; 
v___x_2984_ = l_List_mapTR_loop___redArg(v_f_2981_, v_a_2982_, v_a_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR___redArg(lean_object* v_f_2985_, lean_object* v_as_2986_){
_start:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = lean_box(0);
v___x_2988_ = l_List_mapTR_loop___redArg(v_f_2985_, v_as_2986_, v___x_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR(lean_object* v_00_u03b1_2989_, lean_object* v_00_u03b2_2990_, lean_object* v_f_2991_, lean_object* v_as_2992_){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = lean_box(0);
v___x_2994_ = l_List_mapTR_loop___redArg(v_f_2991_, v_as_2992_, v___x_2993_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___redArg(lean_object* v_p_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_){
_start:
{
if (lean_obj_tag(v_a_2996_) == 0)
{
lean_object* v___x_2998_; 
lean_dec_ref(v_p_2995_);
v___x_2998_ = l_List_reverse___redArg(v_a_2997_);
return v___x_2998_;
}
else
{
lean_object* v_head_2999_; lean_object* v_tail_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3011_; 
v_head_2999_ = lean_ctor_get(v_a_2996_, 0);
v_tail_3000_ = lean_ctor_get(v_a_2996_, 1);
v_isSharedCheck_3011_ = !lean_is_exclusive(v_a_2996_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3002_ = v_a_2996_;
v_isShared_3003_ = v_isSharedCheck_3011_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_tail_3000_);
lean_inc(v_head_2999_);
lean_dec(v_a_2996_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3011_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; uint8_t v___x_3005_; 
lean_inc_ref(v_p_2995_);
lean_inc(v_head_2999_);
v___x_3004_ = lean_apply_1(v_p_2995_, v_head_2999_);
v___x_3005_ = lean_unbox(v___x_3004_);
if (v___x_3005_ == 0)
{
lean_del_object(v___x_3002_);
lean_dec(v_head_2999_);
v_a_2996_ = v_tail_3000_;
goto _start;
}
else
{
lean_object* v___x_3008_; 
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 1, v_a_2997_);
v___x_3008_ = v___x_3002_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_head_2999_);
lean_ctor_set(v_reuseFailAlloc_3010_, 1, v_a_2997_);
v___x_3008_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
v_a_2996_ = v_tail_3000_;
v_a_2997_ = v___x_3008_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop(lean_object* v_00_u03b1_3012_, lean_object* v_p_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_List_filterTR_loop___redArg(v_p_3013_, v_a_3014_, v_a_3015_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR___redArg(lean_object* v_p_3017_, lean_object* v_as_3018_){
_start:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3019_ = lean_box(0);
v___x_3020_ = l_List_filterTR_loop___redArg(v_p_3017_, v_as_3018_, v___x_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR(lean_object* v_00_u03b1_3021_, lean_object* v_p_3022_, lean_object* v_as_3023_){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_box(0);
v___x_3025_ = l_List_filterTR_loop___redArg(v_p_3022_, v_as_3023_, v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR_loop___redArg(lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v_zero_3029_; uint8_t v_isZero_3030_; 
v_zero_3029_ = lean_unsigned_to_nat(0u);
v_isZero_3030_ = lean_nat_dec_eq(v_a_3027_, v_zero_3029_);
if (v_isZero_3030_ == 1)
{
lean_dec(v_a_3027_);
lean_dec(v_a_3026_);
return v_a_3028_;
}
else
{
lean_object* v_one_3031_; lean_object* v_n_3032_; lean_object* v___x_3033_; 
v_one_3031_ = lean_unsigned_to_nat(1u);
v_n_3032_ = lean_nat_sub(v_a_3027_, v_one_3031_);
lean_dec(v_a_3027_);
lean_inc(v_a_3026_);
v___x_3033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3033_, 0, v_a_3026_);
lean_ctor_set(v___x_3033_, 1, v_a_3028_);
v_a_3027_ = v_n_3032_;
v_a_3028_ = v___x_3033_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_replicateTR_loop(lean_object* v_00_u03b1_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l_List_replicateTR_loop___redArg(v_a_3036_, v_a_3037_, v_a_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR___redArg(lean_object* v_n_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_box(0);
v___x_3043_ = l_List_replicateTR_loop___redArg(v_a_3041_, v_n_3040_, v___x_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR(lean_object* v_00_u03b1_3044_, lean_object* v_n_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_List_replicateTR___redArg(v_n_3045_, v_a_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg(lean_object* v_n_3048_, lean_object* v_a_3049_, lean_object* v_l_3050_){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3051_ = l_List_lengthTR___redArg(v_l_3050_);
v___x_3052_ = lean_nat_sub(v_n_3048_, v___x_3051_);
lean_dec(v___x_3051_);
v___x_3053_ = l_List_replicateTR_loop___redArg(v_a_3049_, v___x_3052_, v_l_3050_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg___boxed(lean_object* v_n_3054_, lean_object* v_a_3055_, lean_object* v_l_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l_List_leftpadTR___redArg(v_n_3054_, v_a_3055_, v_l_3056_);
lean_dec(v_n_3054_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR(lean_object* v_00_u03b1_3058_, lean_object* v_n_3059_, lean_object* v_a_3060_, lean_object* v_l_3061_){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3062_ = l_List_lengthTR___redArg(v_l_3061_);
v___x_3063_ = lean_nat_sub(v_n_3059_, v___x_3062_);
lean_dec(v___x_3062_);
v___x_3064_ = l_List_replicateTR_loop___redArg(v_a_3060_, v___x_3063_, v_l_3061_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___boxed(lean_object* v_00_u03b1_3065_, lean_object* v_n_3066_, lean_object* v_a_3067_, lean_object* v_l_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_List_leftpadTR(v_00_u03b1_3065_, v_n_3066_, v_a_3067_, v_l_3068_);
lean_dec(v_n_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg(lean_object* v_init_3070_, lean_object* v_x_3071_){
_start:
{
if (lean_obj_tag(v_x_3071_) == 0)
{
lean_inc_ref(v_init_3070_);
return v_init_3070_;
}
else
{
lean_object* v_head_3072_; lean_object* v_tail_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3099_; 
v_head_3072_ = lean_ctor_get(v_x_3071_, 0);
v_tail_3073_ = lean_ctor_get(v_x_3071_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_x_3071_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3075_ = v_x_3071_;
v_isShared_3076_ = v_isSharedCheck_3099_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_tail_3073_);
lean_inc(v_head_3072_);
lean_dec(v_x_3071_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3099_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v_fst_3077_; lean_object* v_snd_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3098_; 
v_fst_3077_ = lean_ctor_get(v_head_3072_, 0);
v_snd_3078_ = lean_ctor_get(v_head_3072_, 1);
v_isSharedCheck_3098_ = !lean_is_exclusive(v_head_3072_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3080_ = v_head_3072_;
v_isShared_3081_ = v_isSharedCheck_3098_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_snd_3078_);
lean_inc(v_fst_3077_);
lean_dec(v_head_3072_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3098_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3082_; lean_object* v_fst_3083_; lean_object* v_snd_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3097_; 
v___x_3082_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3070_, v_tail_3073_);
v_fst_3083_ = lean_ctor_get(v___x_3082_, 0);
v_snd_3084_ = lean_ctor_get(v___x_3082_, 1);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3086_ = v___x_3082_;
v_isShared_3087_ = v_isSharedCheck_3097_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_snd_3084_);
lean_inc(v_fst_3083_);
lean_dec(v___x_3082_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3097_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 1, v_fst_3083_);
lean_ctor_set(v___x_3075_, 0, v_fst_3077_);
v___x_3089_ = v___x_3075_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_fst_3077_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v_fst_3083_);
v___x_3089_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
lean_object* v___x_3091_; 
if (v_isShared_3081_ == 0)
{
lean_ctor_set_tag(v___x_3080_, 1);
lean_ctor_set(v___x_3080_, 1, v_snd_3084_);
lean_ctor_set(v___x_3080_, 0, v_snd_3078_);
v___x_3091_ = v___x_3080_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_snd_3078_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v_snd_3084_);
v___x_3091_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3093_; 
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 1, v___x_3091_);
lean_ctor_set(v___x_3086_, 0, v___x_3089_);
v___x_3093_ = v___x_3086_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3094_, 1, v___x_3091_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg___boxed(lean_object* v_init_3100_, lean_object* v_x_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3100_, v_x_3101_);
lean_dec_ref(v_init_3100_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_List_unzipTR___redArg(lean_object* v_l_3103_){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3104_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_3105_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v___x_3104_, v_l_3103_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_List_unzipTR(lean_object* v_00_u03b1_3106_, lean_object* v_00_u03b2_3107_, lean_object* v_l_3108_){
_start:
{
lean_object* v___x_3109_; 
v___x_3109_ = l_List_unzipTR___redArg(v_l_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0(lean_object* v_00_u03b1_3110_, lean_object* v_00_u03b2_3111_, lean_object* v_init_3112_, lean_object* v_x_3113_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3112_, v_x_3113_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___boxed(lean_object* v_00_u03b1_3115_, lean_object* v_00_u03b2_3116_, lean_object* v_init_3117_, lean_object* v_x_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_List_foldr___at___00List_unzipTR_spec__0(v_00_u03b1_3115_, v_00_u03b2_3116_, v_init_3117_, v_x_3118_);
lean_dec_ref(v_init_3117_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR_go(lean_object* v_step_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_){
_start:
{
lean_object* v_zero_3124_; uint8_t v_isZero_3125_; 
v_zero_3124_ = lean_unsigned_to_nat(0u);
v_isZero_3125_ = lean_nat_dec_eq(v_a_3121_, v_zero_3124_);
if (v_isZero_3125_ == 1)
{
lean_dec(v_a_3122_);
lean_dec(v_a_3121_);
return v_a_3123_;
}
else
{
lean_object* v_one_3126_; lean_object* v_n_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v_one_3126_ = lean_unsigned_to_nat(1u);
v_n_3127_ = lean_nat_sub(v_a_3121_, v_one_3126_);
lean_dec(v_a_3121_);
v___x_3128_ = lean_nat_sub(v_a_3122_, v_step_3120_);
lean_dec(v_a_3122_);
lean_inc(v___x_3128_);
v___x_3129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
lean_ctor_set(v___x_3129_, 1, v_a_3123_);
v_a_3121_ = v_n_3127_;
v_a_3122_ = v___x_3128_;
v_a_3123_ = v___x_3129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR_go___boxed(lean_object* v_step_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_List_range_x27TR_go(v_step_3131_, v_a_3132_, v_a_3133_, v_a_3134_);
lean_dec(v_step_3131_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR(lean_object* v_s_3136_, lean_object* v_n_3137_, lean_object* v_step_3138_){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3139_ = lean_nat_mul(v_step_3138_, v_n_3137_);
v___x_3140_ = lean_nat_add(v_s_3136_, v___x_3139_);
lean_dec(v___x_3139_);
v___x_3141_ = lean_box(0);
v___x_3142_ = l_List_range_x27TR_go(v_step_3138_, v_n_3137_, v___x_3140_, v___x_3141_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR___boxed(lean_object* v_s_3143_, lean_object* v_n_3144_, lean_object* v_step_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_List_range_x27TR(v_s_3143_, v_n_3144_, v_step_3145_);
lean_dec(v_step_3145_);
lean_dec(v_s_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg(lean_object* v_sep_3147_, lean_object* v_init_3148_, lean_object* v_x_3149_){
_start:
{
if (lean_obj_tag(v_x_3149_) == 0)
{
lean_dec(v_sep_3147_);
lean_inc(v_init_3148_);
return v_init_3148_;
}
else
{
lean_object* v_head_3150_; lean_object* v_tail_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3160_; 
v_head_3150_ = lean_ctor_get(v_x_3149_, 0);
v_tail_3151_ = lean_ctor_get(v_x_3149_, 1);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_x_3149_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3153_ = v_x_3149_;
v_isShared_3154_ = v_isSharedCheck_3160_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_tail_3151_);
lean_inc(v_head_3150_);
lean_dec(v_x_3149_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3160_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; lean_object* v___x_3157_; 
lean_inc(v_sep_3147_);
v___x_3155_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3147_, v_init_3148_, v_tail_3151_);
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___x_3155_);
v___x_3157_ = v___x_3153_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_head_3150_);
lean_ctor_set(v_reuseFailAlloc_3159_, 1, v___x_3155_);
v___x_3157_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3158_, 0, v_sep_3147_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
return v___x_3158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg___boxed(lean_object* v_sep_3161_, lean_object* v_init_3162_, lean_object* v_x_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3161_, v_init_3162_, v_x_3163_);
lean_dec(v_init_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_List_intersperseTR___redArg(lean_object* v_sep_3165_, lean_object* v_x_3166_){
_start:
{
if (lean_obj_tag(v_x_3166_) == 0)
{
lean_dec(v_sep_3165_);
return v_x_3166_;
}
else
{
lean_object* v_tail_3167_; 
v_tail_3167_ = lean_ctor_get(v_x_3166_, 1);
lean_inc(v_tail_3167_);
if (lean_obj_tag(v_tail_3167_) == 0)
{
lean_dec(v_sep_3165_);
return v_x_3166_;
}
else
{
lean_object* v_head_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3187_; 
v_head_3168_ = lean_ctor_get(v_x_3166_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v_x_3166_);
if (v_isSharedCheck_3187_ == 0)
{
lean_object* v_unused_3188_; 
v_unused_3188_ = lean_ctor_get(v_x_3166_, 1);
lean_dec(v_unused_3188_);
v___x_3170_ = v_x_3166_;
v_isShared_3171_ = v_isSharedCheck_3187_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_head_3168_);
lean_dec(v_x_3166_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3187_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v_head_3172_; lean_object* v_tail_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3186_; 
v_head_3172_ = lean_ctor_get(v_tail_3167_, 0);
v_tail_3173_ = lean_ctor_get(v_tail_3167_, 1);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_tail_3167_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3175_ = v_tail_3167_;
v_isShared_3176_ = v_isSharedCheck_3186_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_tail_3173_);
lean_inc(v_head_3172_);
lean_dec(v_tail_3167_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3186_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3177_ = lean_box(0);
lean_inc(v_sep_3165_);
v___x_3178_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3165_, v___x_3177_, v_tail_3173_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 1, v___x_3178_);
v___x_3180_ = v___x_3175_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_head_3172_);
lean_ctor_set(v_reuseFailAlloc_3185_, 1, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
lean_object* v___x_3182_; 
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 1, v___x_3180_);
lean_ctor_set(v___x_3170_, 0, v_sep_3165_);
v___x_3182_ = v___x_3170_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_sep_3165_);
lean_ctor_set(v_reuseFailAlloc_3184_, 1, v___x_3180_);
v___x_3182_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
lean_object* v___x_3183_; 
v___x_3183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3183_, 0, v_head_3168_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
return v___x_3183_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_intersperseTR(lean_object* v_00_u03b1_3189_, lean_object* v_sep_3190_, lean_object* v_x_3191_){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_List_intersperseTR___redArg(v_sep_3190_, v_x_3191_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0(lean_object* v_00_u03b1_3193_, lean_object* v_sep_3194_, lean_object* v_init_3195_, lean_object* v_x_3196_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3194_, v_init_3195_, v_x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___boxed(lean_object* v_00_u03b1_3198_, lean_object* v_sep_3199_, lean_object* v_init_3200_, lean_object* v_x_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_List_foldr___at___00List_intersperseTR_spec__0(v_00_u03b1_3198_, v_sep_3199_, v_init_3200_, v_x_3201_);
lean_dec(v_init_3200_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter___redArg(lean_object* v_x_3203_, lean_object* v_h__1_3204_, lean_object* v_h__2_3205_, lean_object* v_h__3_3206_){
_start:
{
if (lean_obj_tag(v_x_3203_) == 0)
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
lean_dec(v_h__3_3206_);
lean_dec(v_h__2_3205_);
v___x_3207_ = lean_box(0);
v___x_3208_ = lean_apply_1(v_h__1_3204_, v___x_3207_);
return v___x_3208_;
}
else
{
lean_object* v_tail_3209_; 
lean_dec(v_h__1_3204_);
v_tail_3209_ = lean_ctor_get(v_x_3203_, 1);
if (lean_obj_tag(v_tail_3209_) == 0)
{
lean_object* v_head_3210_; lean_object* v___x_3211_; 
lean_dec(v_h__3_3206_);
v_head_3210_ = lean_ctor_get(v_x_3203_, 0);
lean_inc(v_head_3210_);
lean_dec_ref_known(v_x_3203_, 2);
v___x_3211_ = lean_apply_1(v_h__2_3205_, v_head_3210_);
return v___x_3211_;
}
else
{
lean_object* v_head_3212_; lean_object* v_head_3213_; lean_object* v_tail_3214_; lean_object* v___x_3215_; 
lean_inc_ref(v_tail_3209_);
lean_dec(v_h__2_3205_);
v_head_3212_ = lean_ctor_get(v_x_3203_, 0);
lean_inc(v_head_3212_);
lean_dec_ref_known(v_x_3203_, 2);
v_head_3213_ = lean_ctor_get(v_tail_3209_, 0);
lean_inc(v_head_3213_);
v_tail_3214_ = lean_ctor_get(v_tail_3209_, 1);
lean_inc(v_tail_3214_);
lean_dec_ref_known(v_tail_3209_, 2);
v___x_3215_ = lean_apply_3(v_h__3_3206_, v_head_3212_, v_head_3213_, v_tail_3214_);
return v___x_3215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter(lean_object* v_00_u03b1_3216_, lean_object* v_motive_3217_, lean_object* v_x_3218_, lean_object* v_h__1_3219_, lean_object* v_h__2_3220_, lean_object* v_h__3_3221_){
_start:
{
if (lean_obj_tag(v_x_3218_) == 0)
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
lean_dec(v_h__3_3221_);
lean_dec(v_h__2_3220_);
v___x_3222_ = lean_box(0);
v___x_3223_ = lean_apply_1(v_h__1_3219_, v___x_3222_);
return v___x_3223_;
}
else
{
lean_object* v_tail_3224_; 
lean_dec(v_h__1_3219_);
v_tail_3224_ = lean_ctor_get(v_x_3218_, 1);
if (lean_obj_tag(v_tail_3224_) == 0)
{
lean_object* v_head_3225_; lean_object* v___x_3226_; 
lean_dec(v_h__3_3221_);
v_head_3225_ = lean_ctor_get(v_x_3218_, 0);
lean_inc(v_head_3225_);
lean_dec_ref_known(v_x_3218_, 2);
v___x_3226_ = lean_apply_1(v_h__2_3220_, v_head_3225_);
return v___x_3226_;
}
else
{
lean_object* v_head_3227_; lean_object* v_head_3228_; lean_object* v_tail_3229_; lean_object* v___x_3230_; 
lean_inc_ref(v_tail_3224_);
lean_dec(v_h__2_3220_);
v_head_3227_ = lean_ctor_get(v_x_3218_, 0);
lean_inc(v_head_3227_);
lean_dec_ref_known(v_x_3218_, 2);
v_head_3228_ = lean_ctor_get(v_tail_3224_, 0);
lean_inc(v_head_3228_);
v_tail_3229_ = lean_ctor_get(v_tail_3224_, 1);
lean_inc(v_tail_3229_);
lean_dec_ref_known(v_tail_3224_, 2);
v___x_3230_ = lean_apply_3(v_h__3_3221_, v_head_3227_, v_head_3228_, v_tail_3229_);
return v___x_3230_;
}
}
}
}
lean_object* runtime_initialize_Init_Data_List_Notation(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Zero(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_SimpLemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Zero(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_List_lex___auto__1 = _init_l_List_lex___auto__1();
lean_mark_persistent(l_List_lex___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_List_Notation(uint8_t builtin);
lean_object* initialize_Init_Data_Zero(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_SimpLemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Zero(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
