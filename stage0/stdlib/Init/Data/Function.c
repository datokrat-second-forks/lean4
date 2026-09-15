// Lean compiler output
// Module: Init.Data.Function
// Imports: public import Init.Grind.Tactics import Init.NotationExtra import Init.Classical
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
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_uncurry___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term___u2243___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_≃_"};
static const lean_object* l_term___u2243___00__closed__0 = (const lean_object*)&l_term___u2243___00__closed__0_value;
static const lean_ctor_object l_term___u2243___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term___u2243___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(172, 92, 84, 66, 87, 25, 24, 137)}};
static const lean_object* l_term___u2243___00__closed__1 = (const lean_object*)&l_term___u2243___00__closed__1_value;
static const lean_string_object l_term___u2243___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_term___u2243___00__closed__2 = (const lean_object*)&l_term___u2243___00__closed__2_value;
static const lean_ctor_object l_term___u2243___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term___u2243___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_term___u2243___00__closed__3 = (const lean_object*)&l_term___u2243___00__closed__3_value;
static const lean_string_object l_term___u2243___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ≃ "};
static const lean_object* l_term___u2243___00__closed__4 = (const lean_object*)&l_term___u2243___00__closed__4_value;
static const lean_ctor_object l_term___u2243___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term___u2243___00__closed__4_value)}};
static const lean_object* l_term___u2243___00__closed__5 = (const lean_object*)&l_term___u2243___00__closed__5_value;
static const lean_string_object l_term___u2243___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_term___u2243___00__closed__6 = (const lean_object*)&l_term___u2243___00__closed__6_value;
static const lean_ctor_object l_term___u2243___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term___u2243___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_term___u2243___00__closed__7 = (const lean_object*)&l_term___u2243___00__closed__7_value;
static const lean_ctor_object l_term___u2243___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term___u2243___00__closed__7_value),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l_term___u2243___00__closed__8 = (const lean_object*)&l_term___u2243___00__closed__8_value;
static const lean_ctor_object l_term___u2243___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term___u2243___00__closed__3_value),((lean_object*)&l_term___u2243___00__closed__5_value),((lean_object*)&l_term___u2243___00__closed__8_value)}};
static const lean_object* l_term___u2243___00__closed__9 = (const lean_object*)&l_term___u2243___00__closed__9_value;
static const lean_ctor_object l_term___u2243___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_term___u2243___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l_term___u2243___00__closed__9_value)}};
static const lean_object* l_term___u2243___00__closed__10 = (const lean_object*)&l_term___u2243___00__closed__10_value;
LEAN_EXPORT const lean_object* l_term___u2243__ = (const lean_object*)&l_term___u2243___00__closed__10_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__0 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__0_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__1 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__1_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__2 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__2_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__3 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Equiv"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__5 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__5_value;
static lean_once_cell_t l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__8 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__8_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7_value)}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__9 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__9_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__10 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__10_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__8_value),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__10_value)}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__11 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__11_value;
static const lean_string_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__12 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__12_value;
static const lean_ctor_object l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__13 = (const lean_object*)&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__13_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___aux__Init__Data__Function______unexpand__Equiv__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1___closed__0 = (const lean_object*)&l___aux__Init__Data__Function______unexpand__Equiv__1___closed__0_value;
static const lean_ctor_object l___aux__Init__Data__Function______unexpand__Equiv__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Function______unexpand__Equiv__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1___closed__1 = (const lean_object*)&l___aux__Init__Data__Function______unexpand__Equiv__1___closed__1_value;
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Equiv_refl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Equiv_refl___redArg___closed__0 = (const lean_object*)&l_Equiv_refl___redArg___closed__0_value;
static const lean_ctor_object l_Equiv_refl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Equiv_refl___redArg___closed__0_value),((lean_object*)&l_Equiv_refl___redArg___closed__0_value)}};
static const lean_object* l_Equiv_refl___redArg___closed__1 = (const lean_object*)&l_Equiv_refl___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Equiv_refl___redArg();
LEAN_EXPORT lean_object* l_Equiv_refl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_symm___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_symm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_trans___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_trans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Function_curry___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v_b_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_2_);
lean_ctor_set(v___x_4_, 1, v_b_3_);
v___x_5_ = lean_apply_1(v_f_1_, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Function_curry(lean_object* v_00_u03b1_6_, lean_object* v_00_u03b2_7_, lean_object* v_00_u03c6_8_, lean_object* v_f_9_, lean_object* v_a_10_, lean_object* v_b_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_12_, 0, v_a_10_);
lean_ctor_set(v___x_12_, 1, v_b_11_);
v___x_13_ = lean_apply_1(v_f_9_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Function_uncurry___redArg(lean_object* v_f_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_fst_16_; lean_object* v_snd_17_; lean_object* v___x_18_; 
v_fst_16_ = lean_ctor_get(v_a_15_, 0);
lean_inc(v_fst_16_);
v_snd_17_ = lean_ctor_get(v_a_15_, 1);
lean_inc(v_snd_17_);
lean_dec_ref(v_a_15_);
v___x_18_ = lean_apply_2(v_f_14_, v_fst_16_, v_snd_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Function_uncurry(lean_object* v_00_u03b1_19_, lean_object* v_00_u03b2_20_, lean_object* v_00_u03c6_21_, lean_object* v_f_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_fst_24_; lean_object* v_snd_25_; lean_object* v___x_26_; 
v_fst_24_ = lean_ctor_get(v_a_23_, 0);
lean_inc(v_fst_24_);
v_snd_25_ = lean_ctor_get(v_a_23_, 1);
lean_inc(v_snd_25_);
lean_dec_ref(v_a_23_);
v___x_26_ = lean_apply_2(v_f_22_, v_fst_24_, v_snd_25_);
return v___x_26_;
}
}
static lean_object* _init_l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__5));
v___x_62_ = l_String_toRawSubstring_x27(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1(lean_object* v_x_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = ((lean_object*)(l_term___u2243___00__closed__1));
lean_inc(v_x_79_);
v___x_83_ = l_Lean_Syntax_isOfKind(v_x_79_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; 
lean_dec(v_x_79_);
v___x_84_ = lean_box(1);
v___x_85_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___y_81_);
return v___x_85_;
}
else
{
lean_object* v_quotContext_86_; lean_object* v_currMacroScope_87_; lean_object* v_ref_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_quotContext_86_ = lean_ctor_get(v___y_80_, 1);
v_currMacroScope_87_ = lean_ctor_get(v___y_80_, 2);
v_ref_88_ = lean_ctor_get(v___y_80_, 5);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = l_Lean_Syntax_getArg(v_x_79_, v___x_89_);
v___x_91_ = lean_unsigned_to_nat(2u);
v___x_92_ = l_Lean_Syntax_getArg(v_x_79_, v___x_91_);
lean_dec(v_x_79_);
v___x_93_ = 0;
v___x_94_ = l_Lean_SourceInfo_fromRef(v_ref_88_, v___x_93_);
v___x_95_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4));
v___x_96_ = lean_obj_once(&l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6, &l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6_once, _init_l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__6);
v___x_97_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__7));
lean_inc(v_currMacroScope_87_);
lean_inc(v_quotContext_86_);
v___x_98_ = l_Lean_addMacroScope(v_quotContext_86_, v___x_97_, v_currMacroScope_87_);
v___x_99_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__11));
lean_inc_n(v___x_94_, 2);
v___x_100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_100_, 0, v___x_94_);
lean_ctor_set(v___x_100_, 1, v___x_96_);
lean_ctor_set(v___x_100_, 2, v___x_98_);
lean_ctor_set(v___x_100_, 3, v___x_99_);
v___x_101_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__13));
v___x_102_ = l_Lean_Syntax_node2(v___x_94_, v___x_101_, v___x_90_, v___x_92_);
v___x_103_ = l_Lean_Syntax_node2(v___x_94_, v___x_95_, v___x_100_, v___x_102_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___y_81_);
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______macroRules__term___u2243____1___boxed(lean_object* v_x_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___aux__Init__Data__Function______macroRules__term___u2243____1(v_x_105_, v___y_106_, v___y_107_);
lean_dec_ref(v___y_106_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1(lean_object* v_x_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = ((lean_object*)(l___aux__Init__Data__Function______macroRules__term___u2243____1___closed__4));
lean_inc(v_x_112_);
v___x_116_ = l_Lean_Syntax_isOfKind(v_x_112_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec(v_x_112_);
v___x_117_ = lean_box(0);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___y_114_);
return v___x_118_;
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = l_Lean_Syntax_getArg(v_x_112_, v___x_119_);
v___x_121_ = ((lean_object*)(l___aux__Init__Data__Function______unexpand__Equiv__1___closed__1));
lean_inc(v___x_120_);
v___x_122_ = l_Lean_Syntax_isOfKind(v___x_120_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
lean_dec(v___x_120_);
lean_dec(v_x_112_);
v___x_123_ = lean_box(0);
v___x_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___y_114_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = l_Lean_Syntax_getArg(v_x_112_, v___x_125_);
lean_dec(v_x_112_);
v___x_127_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_126_);
v___x_128_ = l_Lean_Syntax_matchesNull(v___x_126_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v___x_126_);
lean_dec(v___x_120_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___y_114_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_ref_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_131_ = l_Lean_Syntax_getArg(v___x_126_, v___x_119_);
v___x_132_ = l_Lean_Syntax_getArg(v___x_126_, v___x_125_);
lean_dec(v___x_126_);
v_ref_133_ = l_Lean_replaceRef(v___x_120_, v___y_113_);
lean_dec(v___x_120_);
v___x_134_ = 0;
v___x_135_ = l_Lean_SourceInfo_fromRef(v_ref_133_, v___x_134_);
lean_dec(v_ref_133_);
v___x_136_ = ((lean_object*)(l_term___u2243___00__closed__1));
v___x_137_ = ((lean_object*)(l_term___u2243___00__closed__4));
lean_inc(v___x_135_);
v___x_138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_135_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = l_Lean_Syntax_node3(v___x_135_, v___x_136_, v___x_131_, v___x_138_, v___x_132_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___y_114_);
return v___x_140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Function______unexpand__Equiv__1___boxed(lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___aux__Init__Data__Function______unexpand__Equiv__1(v_x_141_, v___y_142_, v___y_143_);
lean_dec(v___y_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Equiv_refl___redArg(){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Equiv_refl___redArg___closed__1));
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Equiv_refl___redArg___boxed(lean_object* v___dummy_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Equiv_refl___redArg();
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Equiv_refl(lean_object* v_00_u03b1_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = ((lean_object*)(l_Equiv_refl___redArg___closed__1));
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Equiv_symm___redArg(lean_object* v_e_154_){
_start:
{
lean_object* v_toFun_155_; lean_object* v_invFun_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_toFun_155_ = lean_ctor_get(v_e_154_, 0);
v_invFun_156_ = lean_ctor_get(v_e_154_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v_e_154_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v_e_154_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_invFun_156_);
lean_inc(v_toFun_155_);
lean_dec(v_e_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_toFun_155_);
lean_ctor_set(v___x_158_, 0, v_invFun_156_);
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_invFun_156_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_toFun_155_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_symm(lean_object* v_00_u03b1_164_, lean_object* v_00_u03b2_165_, lean_object* v_e_166_){
_start:
{
lean_object* v_toFun_167_; lean_object* v_invFun_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_toFun_167_ = lean_ctor_get(v_e_166_, 0);
v_invFun_168_ = lean_ctor_get(v_e_166_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_e_166_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v_e_166_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_invFun_168_);
lean_inc(v_toFun_167_);
lean_dec(v_e_166_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v_toFun_167_);
lean_ctor_set(v___x_170_, 0, v_invFun_168_);
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_invFun_168_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_toFun_167_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_trans___redArg(lean_object* v_e_u2081_176_, lean_object* v_e_u2082_177_){
_start:
{
lean_object* v_toFun_178_; lean_object* v_invFun_179_; lean_object* v_toFun_180_; lean_object* v_invFun_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_190_; 
v_toFun_178_ = lean_ctor_get(v_e_u2082_177_, 0);
lean_inc(v_toFun_178_);
v_invFun_179_ = lean_ctor_get(v_e_u2082_177_, 1);
lean_inc(v_invFun_179_);
lean_dec_ref(v_e_u2082_177_);
v_toFun_180_ = lean_ctor_get(v_e_u2081_176_, 0);
v_invFun_181_ = lean_ctor_get(v_e_u2081_176_, 1);
v_isSharedCheck_190_ = !lean_is_exclusive(v_e_u2081_176_);
if (v_isSharedCheck_190_ == 0)
{
v___x_183_ = v_e_u2081_176_;
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_invFun_181_);
lean_inc(v_toFun_180_);
lean_dec(v_e_u2081_176_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_185_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_185_, 0, lean_box(0));
lean_closure_set(v___x_185_, 1, lean_box(0));
lean_closure_set(v___x_185_, 2, lean_box(0));
lean_closure_set(v___x_185_, 3, v_toFun_178_);
lean_closure_set(v___x_185_, 4, v_toFun_180_);
v___x_186_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_186_, 0, lean_box(0));
lean_closure_set(v___x_186_, 1, lean_box(0));
lean_closure_set(v___x_186_, 2, lean_box(0));
lean_closure_set(v___x_186_, 3, v_invFun_181_);
lean_closure_set(v___x_186_, 4, v_invFun_179_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v___x_186_);
lean_ctor_set(v___x_183_, 0, v___x_185_);
v___x_188_ = v___x_183_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Equiv_trans(lean_object* v_00_u03b1_191_, lean_object* v_00_u03b2_192_, lean_object* v_00_u03b3_193_, lean_object* v_e_u2081_194_, lean_object* v_e_u2082_195_){
_start:
{
lean_object* v_toFun_196_; lean_object* v_invFun_197_; lean_object* v_toFun_198_; lean_object* v_invFun_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_208_; 
v_toFun_196_ = lean_ctor_get(v_e_u2082_195_, 0);
lean_inc(v_toFun_196_);
v_invFun_197_ = lean_ctor_get(v_e_u2082_195_, 1);
lean_inc(v_invFun_197_);
lean_dec_ref(v_e_u2082_195_);
v_toFun_198_ = lean_ctor_get(v_e_u2081_194_, 0);
v_invFun_199_ = lean_ctor_get(v_e_u2081_194_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_e_u2081_194_);
if (v_isSharedCheck_208_ == 0)
{
v___x_201_ = v_e_u2081_194_;
v_isShared_202_ = v_isSharedCheck_208_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_invFun_199_);
lean_inc(v_toFun_198_);
lean_dec(v_e_u2081_194_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_208_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_203_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_203_, 0, lean_box(0));
lean_closure_set(v___x_203_, 1, lean_box(0));
lean_closure_set(v___x_203_, 2, lean_box(0));
lean_closure_set(v___x_203_, 3, v_toFun_196_);
lean_closure_set(v___x_203_, 4, v_toFun_198_);
v___x_204_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_204_, 0, lean_box(0));
lean_closure_set(v___x_204_, 1, lean_box(0));
lean_closure_set(v___x_204_, 2, lean_box(0));
lean_closure_set(v___x_204_, 3, v_invFun_199_);
lean_closure_set(v___x_204_, 4, v_invFun_197_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v___x_204_);
lean_ctor_set(v___x_201_, 0, v___x_203_);
v___x_206_ = v___x_201_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_Classical(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
lean_object* initialize_Init_Classical(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Function(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Function(builtin);
}
#ifdef __cplusplus
}
#endif
