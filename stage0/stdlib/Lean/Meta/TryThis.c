// Lean compiler output
// Module: Lean.Meta.TryThis
// Imports: public import Lean.Data.Lsp.Basic public import Lean.PrettyPrinter
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
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_next_x21(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_mul(double, double);
double round(double);
lean_object* lean_float_to_string(double);
lean_object* lean_string_append(lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_sub(double, double);
double pow(double, double);
double lean_float_add(double, double);
uint8_t lean_float_decLe(double, double);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "className"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__2_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "color"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "var(--vscode-errorForeground)"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__6_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__7_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "textDecoration"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "underline wavy var(--vscode-editorError-foreground) 1pt"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__12_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__13_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__8_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__15_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "gold pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "underline wavy var(--vscode-editorWarning-foreground) 1pt"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__5_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__11_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__6_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "information pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "goal-hyp pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "goal-inaccessible pointer dim"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hsl("};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " 95% "};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%)"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Apply suggestion"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Apply suggestion ("};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(double, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionText_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestion_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TryThis"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_string_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TryThisInfo"};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(207, 55, 191, 109, 224, 169, 145, 115)}};
static const lean_ctor_object l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__4_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(89, 112, 140, 127, 159, 194, 21, 171)}};
static const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_ = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_TryThis_instTypeNameTryThisInfo = (const lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__5_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inputWidth"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(41, 165, 100, 47, 160, 41, 84, 0)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 147, 146, 63, 150, 233, 253, 32)}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ideal input width"};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__3_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__0_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__1_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__2_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_TryThis_instImpl___closed__3_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(207, 55, 191, 109, 224, 169, 145, 115)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__0_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(133, 10, 29, 165, 121, 220, 111, 19)}};
static const lean_ctor_object l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__1_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(16, 85, 191, 240, 102, 91, 59, 55)}};
static const lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_format_inputWidth;
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_kind_8_; lean_object* v_a_9_; lean_object* v___x_10_; 
v_kind_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_kind_8_);
v_a_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_a_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_kind_8_, v_a_9_);
return v___x_10_;
}
else
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_a_11_);
lean_dec_ref_known(v_t_6_, 1);
v___x_12_ = lean_apply_1(v_k_7_, v_a_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim___redArg(lean_object* v_t_25_, lean_object* v_tsyntax_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_25_, v_tsyntax_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_tsyntax_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_tsyntax_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_29_, v_tsyntax_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim___redArg(lean_object* v_t_33_, lean_object* v_string_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_33_, v_string_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_string_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_string_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_ctorElim___redArg(v_t_37_, v_string_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestionText___lam__0(lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_48_; 
v_a_47_ = lean_ctor_get(v_x_46_, 1);
lean_inc(v_a_47_);
lean_dec_ref_known(v_x_46_, 2);
v___x_48_ = l_Lean_MessageData_ofSyntax(v_a_47_);
return v___x_48_;
}
else
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_57_; 
v_a_49_ = lean_ctor_get(v_x_46_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_46_);
if (v_isSharedCheck_57_ == 0)
{
v___x_51_ = v_x_46_;
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v_x_46_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set_tag(v___x_51_, 3);
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_56_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_MessageData_ofFormat(v___x_54_);
return v___x_55_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0(lean_object* v_kind_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v_kind_60_);
lean_ctor_set(v___x_62_, 1, v_a_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText(lean_object* v_kind_63_){
_start:
{
lean_object* v___f_64_; 
v___f_64_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_TryThis_instCoeHeadTSyntaxConsSyntaxNodeKindNilSuggestionText___lam__0), 2, 1);
lean_closure_set(v___f_64_, 0, v_kind_63_);
return v___f_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeStringSuggestionText___lam__0(lean_object* v_a_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v_a_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle_default(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_box(0);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(lean_object* v_self_71_){
_start:
{
lean_inc(v_self_71_);
return v_self_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0___boxed(lean_object* v_self_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Meta_Tactic_TryThis_instToJsonSuggestionStyle___lam__0(v_self_72_);
lean_dec(v_self_72_);
return v_res_73_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__9));
v___x_95_ = l_Lean_Json_mkObj(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__16));
v___x_110_ = l_Lean_Json_mkObj(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(uint8_t v_decorated_111_){
_start:
{
lean_object* v___y_113_; 
if (v_decorated_111_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__10);
v___y_113_ = v___x_121_;
goto v___jp_112_;
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__17);
v___y_113_ = v___x_122_;
goto v___jp_112_;
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_114_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3));
v___x_115_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
lean_inc(v___y_113_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___y_113_);
v___x_117_ = lean_box(0);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_114_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = l_Lean_Json_mkObj(v___x_119_);
lean_dec_ref_known(v___x_119_, 2);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___boxed(lean_object* v_decorated_123_){
_start:
{
uint8_t v_decorated_boxed_124_; lean_object* v_res_125_; 
v_decorated_boxed_124_ = lean_unbox(v_decorated_123_);
v_res_125_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error(v_decorated_boxed_124_);
return v_res_125_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__3));
v___x_136_ = l_Lean_Json_mkObj(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__8));
v___x_147_ = l_Lean_Json_mkObj(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__9);
v___x_149_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_box(0);
v___x_152_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__10);
v___x_153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__11);
v___x_155_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__2));
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__12);
v___x_158_ = l_Lean_Json_mkObj(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(uint8_t v_decorated_159_){
_start:
{
if (v_decorated_159_ == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__4);
return v___x_160_;
}
else
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___closed__13);
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning___boxed(lean_object* v_decorated_162_){
_start:
{
uint8_t v_decorated_boxed_163_; lean_object* v_res_164_; 
v_decorated_boxed_163_ = lean_unbox(v_decorated_162_);
v_res_164_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_warning(v_decorated_boxed_163_);
return v_res_164_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__3));
v___x_175_ = l_Lean_Json_mkObj(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success___closed__4);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__3));
v___x_187_ = l_Lean_Json_mkObj(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis___closed__4);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__3));
v___x_199_ = l_Lean_Json_mkObj(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible___closed__4);
return v___x_200_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1(void){
_start:
{
lean_object* v___x_202_; double v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(120u);
v___x_203_ = lean_float_of_nat(v___x_202_);
return v___x_203_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3(void){
_start:
{
lean_object* v___x_205_; double v___x_206_; 
v___x_205_ = lean_unsigned_to_nat(60u);
v___x_206_ = lean_float_of_nat(v___x_205_);
return v___x_206_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4(void){
_start:
{
lean_object* v___x_207_; double v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(2u);
v___x_208_ = lean_float_of_nat(v___x_207_);
return v___x_208_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5(void){
_start:
{
lean_object* v___x_209_; uint8_t v___x_210_; lean_object* v___x_211_; double v___x_212_; 
v___x_209_ = lean_unsigned_to_nat(2u);
v___x_210_ = 1;
v___x_211_ = lean_unsigned_to_nat(75u);
v___x_212_ = l_Float_ofScientific(v___x_211_, v___x_210_, v___x_209_);
return v___x_212_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11(void){
_start:
{
lean_object* v___x_218_; double v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_float_of_nat(v___x_218_);
return v___x_219_;
}
}
static double _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12(void){
_start:
{
lean_object* v___x_220_; double v___x_221_; 
v___x_220_ = lean_unsigned_to_nat(0u);
v___x_221_ = lean_float_of_nat(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(double v_t_222_, uint8_t v_showValueInHoverText_223_){
_start:
{
lean_object* v___y_225_; lean_object* v___y_226_; lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_237_; double v___y_238_; double v___y_278_; double v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__12);
v___x_283_ = lean_float_decLe(v_t_222_, v___x_282_);
if (v___x_283_ == 0)
{
v___y_278_ = v_t_222_;
goto v___jp_277_;
}
else
{
v___y_278_ = v___x_282_;
goto v___jp_277_;
}
v___jp_224_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_230_, 0, v___y_229_);
lean_inc_ref(v___y_225_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_225_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
lean_inc(v___y_227_);
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v___y_227_);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v___y_228_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
lean_inc_ref(v___y_226_);
v___x_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_234_, 0, v___y_226_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = l_Lean_Json_mkObj(v___x_234_);
lean_dec_ref_known(v___x_234_, 2);
return v___x_235_;
}
v___jp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; double v___x_243_; double v___x_244_; double v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; double v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; double v___x_253_; double v___x_254_; double v___x_255_; double v___x_256_; double v___x_257_; double v___x_258_; double v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_239_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__3));
v___x_240_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__4));
v___x_241_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_error___closed__5));
v___x_242_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__0));
v___x_243_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__1);
v___x_244_ = lean_float_mul(v___y_238_, v___x_243_);
v___x_245_ = round(v___x_244_);
v___x_246_ = lean_float_to_string(v___x_245_);
v___x_247_ = lean_string_append(v___x_242_, v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__2));
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
v___x_250_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__3);
v___x_251_ = lean_unsigned_to_nat(5u);
v___x_252_ = 1;
v___x_253_ = l_Float_ofScientific(v___x_251_, v___x_252_, v___y_237_);
v___x_254_ = lean_float_sub(v___y_238_, v___x_253_);
v___x_255_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__4);
v___x_256_ = pow(v___x_254_, v___x_255_);
v___x_257_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__5);
v___x_258_ = lean_float_add(v___x_256_, v___x_257_);
v___x_259_ = lean_float_mul(v___x_250_, v___x_258_);
v___x_260_ = lean_float_to_string(v___x_259_);
v___x_261_ = lean_string_append(v___x_249_, v___x_260_);
lean_dec_ref(v___x_260_);
v___x_262_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__6));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_241_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_box(0);
v___x_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = l_Lean_Json_mkObj(v___x_267_);
lean_dec_ref_known(v___x_267_, 2);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_240_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__7));
if (v_showValueInHoverText_223_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__8));
v___y_225_ = v___x_270_;
v___y_226_ = v___x_239_;
v___y_227_ = v___x_266_;
v___y_228_ = v___x_269_;
v___y_229_ = v___x_271_;
goto v___jp_224_;
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_272_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__9));
v___x_273_ = lean_float_to_string(v___y_238_);
v___x_274_ = lean_string_append(v___x_272_, v___x_273_);
lean_dec_ref(v___x_273_);
v___x_275_ = ((lean_object*)(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__10));
v___x_276_ = lean_string_append(v___x_274_, v___x_275_);
v___y_225_ = v___x_270_;
v___y_226_ = v___x_239_;
v___y_227_ = v___x_266_;
v___y_228_ = v___x_269_;
v___y_229_ = v___x_276_;
goto v___jp_224_;
}
}
v___jp_277_:
{
lean_object* v___x_279_; double v___x_280_; uint8_t v___x_281_; 
v___x_279_ = lean_unsigned_to_nat(1u);
v___x_280_ = lean_float_once(&l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11, &l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11_once, _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___closed__11);
v___x_281_ = lean_float_decLe(v___y_278_, v___x_280_);
if (v___x_281_ == 0)
{
v___y_237_ = v___x_279_;
v___y_238_ = v___x_280_;
goto v___jp_236_;
}
else
{
v___y_237_ = v___x_279_;
v___y_238_ = v___y_278_;
goto v___jp_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value___boxed(lean_object* v_t_284_, lean_object* v_showValueInHoverText_285_){
_start:
{
double v_t_boxed_286_; uint8_t v_showValueInHoverText_boxed_287_; lean_object* v_res_288_; 
v_t_boxed_286_ = lean_unbox_float(v_t_284_);
lean_dec_ref(v_t_284_);
v_showValueInHoverText_boxed_287_ = lean_unbox(v_showValueInHoverText_285_);
v_res_288_ = l_Lean_Meta_Tactic_TryThis_SuggestionStyle_value(v_t_boxed_286_, v_showValueInHoverText_boxed_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instToMessageDataSuggestion___lam__0(lean_object* v_s_294_){
_start:
{
lean_object* v_messageData_x3f_295_; 
v_messageData_x3f_295_ = lean_ctor_get(v_s_294_, 4);
if (lean_obj_tag(v_messageData_x3f_295_) == 0)
{
lean_object* v_suggestion_296_; 
v_suggestion_296_ = lean_ctor_get(v_s_294_, 0);
lean_inc_ref(v_suggestion_296_);
lean_dec_ref(v_s_294_);
if (lean_obj_tag(v_suggestion_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; 
v_a_297_ = lean_ctor_get(v_suggestion_296_, 1);
lean_inc(v_a_297_);
lean_dec_ref_known(v_suggestion_296_, 2);
v___x_298_ = l_Lean_MessageData_ofSyntax(v_a_297_);
return v___x_298_;
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_307_; 
v_a_299_ = lean_ctor_get(v_suggestion_296_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_suggestion_296_);
if (v_isSharedCheck_307_ == 0)
{
v___x_301_ = v_suggestion_296_;
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v_suggestion_296_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set_tag(v___x_301_, 3);
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_306_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_MessageData_ofFormat(v___x_304_);
return v___x_305_;
}
}
}
}
else
{
lean_object* v_val_308_; 
lean_inc_ref(v_messageData_x3f_295_);
lean_dec_ref(v_s_294_);
v_val_308_ = lean_ctor_get(v_messageData_x3f_295_, 0);
lean_inc(v_val_308_);
lean_dec_ref_known(v_messageData_x3f_295_, 1);
return v_val_308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_instCoeSuggestionTextSuggestion___lam__0(lean_object* v_t_311_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_box(0);
v___x_313_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_313_, 0, v_t_311_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
lean_ctor_set(v___x_313_, 2, v___x_312_);
lean_ctor_set(v___x_313_, 3, v___x_312_);
lean_ctor_set(v___x_313_, 4, v___x_312_);
lean_ctor_set(v___x_313_, 5, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(lean_object* v_s_329_, lean_object* v_a_330_, lean_object* v_b_331_){
_start:
{
lean_object* v___x_332_; uint8_t v_decide_333_; 
v___x_332_ = lean_unsigned_to_nat(0u);
v_decide_333_ = lean_nat_dec_eq(v_a_330_, v___x_332_);
if (v_decide_333_ == 0)
{
lean_object* v_str_334_; lean_object* v_startInclusive_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint32_t v___x_343_; uint32_t v___x_344_; uint8_t v___x_345_; 
v_str_334_ = lean_ctor_get(v_s_329_, 0);
v_startInclusive_335_ = lean_ctor_get(v_s_329_, 1);
v___x_336_ = lean_nat_add(v_startInclusive_335_, v_a_330_);
lean_inc(v___x_336_);
lean_inc(v_startInclusive_335_);
lean_inc_ref(v_str_334_);
v___x_337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_337_, 0, v_str_334_);
lean_ctor_set(v___x_337_, 1, v_startInclusive_335_);
lean_ctor_set(v___x_337_, 2, v___x_336_);
v___x_338_ = lean_nat_sub(v___x_336_, v_startInclusive_335_);
lean_dec(v___x_336_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_sub(v___x_338_, v___x_339_);
lean_dec(v___x_338_);
v___x_341_ = l_String_Slice_posLE(v___x_337_, v___x_340_);
lean_dec_ref_known(v___x_337_, 3);
v___x_342_ = lean_nat_add(v_startInclusive_335_, v___x_341_);
v___x_343_ = lean_string_utf8_get_fast(v_str_334_, v___x_342_);
lean_dec(v___x_342_);
v___x_344_ = 10;
v___x_345_ = lean_uint32_dec_eq(v___x_343_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec(v___x_341_);
v___x_346_ = lean_box(0);
v___x_347_ = lean_nat_sub(v_a_330_, v___x_339_);
lean_dec(v_a_330_);
v___x_348_ = l_String_Slice_posLE(v_s_329_, v___x_347_);
v_a_330_ = v___x_348_;
v_b_331_ = v___x_346_;
goto _start;
}
else
{
lean_object* v___x_350_; 
lean_dec(v_a_330_);
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_341_);
return v___x_350_;
}
}
else
{
lean_dec(v_a_330_);
lean_inc(v_b_331_);
return v_b_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg___boxed(lean_object* v_s_351_, lean_object* v_a_352_, lean_object* v_b_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_351_, v_a_352_, v_b_353_);
lean_dec(v_b_353_);
lean_dec_ref(v_s_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(lean_object* v_s_355_){
_start:
{
lean_object* v_startInclusive_356_; lean_object* v_endExclusive_357_; lean_object* v_searcher_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_startInclusive_356_ = lean_ctor_get(v_s_355_, 1);
v_endExclusive_357_ = lean_ctor_get(v_s_355_, 2);
v_searcher_358_ = lean_nat_sub(v_endExclusive_357_, v_startInclusive_356_);
v___x_359_ = lean_box(0);
v___x_360_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_355_, v_searcher_358_, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0___boxed(lean_object* v_s_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(v_s_361_);
lean_dec_ref(v_s_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(lean_object* v_s_363_, lean_object* v_p_364_){
_start:
{
lean_object* v_val_366_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_s_363_);
v___x_372_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_372_, 0, v_s_363_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
lean_ctor_set(v___x_372_, 2, v_p_364_);
v___x_373_ = l_String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0(v___x_372_);
lean_dec_ref_known(v___x_372_, 3);
if (lean_obj_tag(v___x_373_) == 0)
{
if (lean_obj_tag(v___x_373_) == 0)
{
lean_dec_ref(v_s_363_);
return v___x_371_;
}
else
{
lean_object* v_val_374_; 
v_val_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_val_374_);
lean_dec_ref_known(v___x_373_, 1);
v_val_366_ = v_val_374_;
goto v___jp_365_;
}
}
else
{
lean_object* v_val_375_; 
v_val_375_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_val_375_);
lean_dec_ref_known(v___x_373_, 1);
v_val_366_ = v_val_375_;
goto v___jp_365_;
}
v___jp_365_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_string_utf8_byte_size(v_s_363_);
v___x_369_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_369_, 0, v_s_363_);
lean_ctor_set(v___x_369_, 1, v___x_367_);
lean_ctor_set(v___x_369_, 2, v___x_368_);
v___x_370_ = l_String_Slice_Pos_next_x21(v___x_369_, v_val_366_);
lean_dec(v_val_366_);
lean_dec_ref_known(v___x_369_, 3);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(lean_object* v_s_376_, lean_object* v_inst_377_, lean_object* v_R_378_, lean_object* v_a_379_, lean_object* v_b_380_, lean_object* v_c_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___redArg(v_s_376_, v_a_379_, v_b_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0___boxed(lean_object* v_s_383_, lean_object* v_inst_384_, lean_object* v_R_385_, lean_object* v_a_386_, lean_object* v_b_387_, lean_object* v_c_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_revFind_x3f___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart_spec__0_spec__0(v_s_383_, v_inst_384_, v_R_385_, v_a_386_, v_b_387_, v_c_388_);
lean_dec(v_b_387_);
lean_dec_ref(v_s_383_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(lean_object* v___x_390_, lean_object* v_a_391_, lean_object* v_b_392_){
_start:
{
lean_object* v_str_393_; lean_object* v_startInclusive_394_; lean_object* v_endExclusive_395_; lean_object* v___x_396_; uint8_t v_decide_397_; 
v_str_393_ = lean_ctor_get(v___x_390_, 0);
v_startInclusive_394_ = lean_ctor_get(v___x_390_, 1);
v_endExclusive_395_ = lean_ctor_get(v___x_390_, 2);
v___x_396_ = lean_nat_sub(v_endExclusive_395_, v_startInclusive_394_);
v_decide_397_ = lean_nat_dec_eq(v_a_391_, v___x_396_);
lean_dec(v___x_396_);
if (v_decide_397_ == 0)
{
lean_object* v___x_398_; uint32_t v___x_399_; uint32_t v___x_400_; uint8_t v___x_401_; 
v___x_398_ = lean_nat_add(v_startInclusive_394_, v_a_391_);
v___x_399_ = lean_string_utf8_get_fast(v_str_393_, v___x_398_);
v___x_400_ = 32;
v___x_401_ = lean_uint32_dec_eq(v___x_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec(v___x_398_);
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v_a_391_);
return v___x_402_;
}
else
{
if (v_decide_397_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_a_391_);
v___x_403_ = lean_box(0);
v___x_404_ = lean_string_utf8_next_fast(v_str_393_, v___x_398_);
lean_dec(v___x_398_);
v___x_405_ = lean_nat_sub(v___x_404_, v_startInclusive_394_);
v_a_391_ = v___x_405_;
v_b_392_ = v___x_403_;
goto _start;
}
else
{
lean_object* v___x_407_; 
lean_dec(v___x_398_);
v___x_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_407_, 0, v_a_391_);
return v___x_407_;
}
}
}
else
{
lean_dec(v_a_391_);
lean_inc(v_b_392_);
return v_b_392_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg___boxed(lean_object* v___x_408_, lean_object* v_a_409_, lean_object* v_b_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_408_, v_a_409_, v_b_410_);
lean_dec(v_b_410_);
lean_dec_ref(v___x_408_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(lean_object* v_map_412_, lean_object* v_range_413_){
_start:
{
lean_object* v_source_414_; lean_object* v_start_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_440_; 
v_source_414_ = lean_ctor_get(v_map_412_, 0);
lean_inc_ref(v_source_414_);
lean_dec_ref(v_map_412_);
v_start_415_ = lean_ctor_get(v_range_413_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v_range_413_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v_range_413_, 1);
lean_dec(v_unused_441_);
v___x_417_ = v_range_413_;
v_isShared_418_ = v_isSharedCheck_440_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_start_415_);
lean_dec(v_range_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_440_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_searcher_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_rangeStart_422_; lean_object* v_start_423_; lean_object* v___x_424_; lean_object* v___y_426_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_searcher_419_ = lean_unsigned_to_nat(0u);
v___x_420_ = lean_string_utf8_byte_size(v_source_414_);
lean_inc_ref_n(v_source_414_, 2);
v___x_421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_421_, 0, v_source_414_);
lean_ctor_set(v___x_421_, 1, v_searcher_419_);
lean_ctor_set(v___x_421_, 2, v___x_420_);
v_rangeStart_422_ = l_String_Slice_pos_x21(v___x_421_, v_start_415_);
lean_dec_ref_known(v___x_421_, 3);
lean_inc(v_rangeStart_422_);
v_start_423_ = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_getIndentAndColumn_findLineStart(v_source_414_, v_rangeStart_422_);
v___x_424_ = l_String_slice_x21(v_source_414_, v_start_423_, v_rangeStart_422_);
lean_dec(v_rangeStart_422_);
v___x_434_ = lean_box(0);
v___x_435_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_424_, v_searcher_419_, v___x_434_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_startInclusive_436_; lean_object* v_endExclusive_437_; lean_object* v___x_438_; 
v_startInclusive_436_ = lean_ctor_get(v___x_424_, 1);
lean_inc(v_startInclusive_436_);
v_endExclusive_437_ = lean_ctor_get(v___x_424_, 2);
lean_inc(v_endExclusive_437_);
v___x_438_ = lean_nat_sub(v_endExclusive_437_, v_startInclusive_436_);
lean_dec(v_startInclusive_436_);
lean_dec(v_endExclusive_437_);
v___y_426_ = v___x_438_;
goto v___jp_425_;
}
else
{
lean_object* v_val_439_; 
v_val_439_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v___x_435_, 1);
v___y_426_ = v_val_439_;
goto v___jp_425_;
}
v___jp_425_:
{
lean_object* v_startInclusive_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
v_startInclusive_427_ = lean_ctor_get(v___x_424_, 1);
lean_inc(v_startInclusive_427_);
lean_dec_ref(v___x_424_);
v___x_428_ = lean_nat_add(v_startInclusive_427_, v___y_426_);
lean_dec(v___y_426_);
lean_dec(v_startInclusive_427_);
v___x_429_ = lean_nat_sub(v___x_428_, v_start_423_);
lean_dec(v___x_428_);
v___x_430_ = lean_nat_sub(v_start_415_, v_start_423_);
lean_dec(v_start_423_);
lean_dec(v_start_415_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 1, v___x_430_);
lean_ctor_set(v___x_417_, 0, v___x_429_);
v___x_432_ = v___x_417_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(lean_object* v___x_442_, lean_object* v_inst_443_, lean_object* v_R_444_, lean_object* v_a_445_, lean_object* v_b_446_, lean_object* v_c_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___redArg(v___x_442_, v_a_445_, v_b_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0___boxed(lean_object* v___x_449_, lean_object* v_inst_450_, lean_object* v_R_451_, lean_object* v_a_452_, lean_object* v_b_453_, lean_object* v_c_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_TryThis_getIndentAndColumn_spec__0(v___x_449_, v_inst_450_, v_R_451_, v_a_452_, v_b_453_, v_c_454_);
lean_dec(v_b_453_);
lean_dec_ref(v___x_449_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(lean_object* v_name_456_, lean_object* v_decl_457_, lean_object* v_ref_458_){
_start:
{
lean_object* v_defValue_460_; lean_object* v_descr_461_; lean_object* v_deprecation_x3f_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_defValue_460_ = lean_ctor_get(v_decl_457_, 0);
v_descr_461_ = lean_ctor_get(v_decl_457_, 1);
v_deprecation_x3f_462_ = lean_ctor_get(v_decl_457_, 2);
lean_inc(v_defValue_460_);
v___x_463_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_463_, 0, v_defValue_460_);
lean_inc(v_deprecation_x3f_462_);
lean_inc_ref(v_descr_461_);
lean_inc_n(v_name_456_, 2);
v___x_464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_464_, 0, v_name_456_);
lean_ctor_set(v___x_464_, 1, v_ref_458_);
lean_ctor_set(v___x_464_, 2, v___x_463_);
lean_ctor_set(v___x_464_, 3, v_descr_461_);
lean_ctor_set(v___x_464_, 4, v_deprecation_x3f_462_);
v___x_465_ = lean_register_option(v_name_456_, v___x_464_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v___x_465_, 0);
lean_dec(v_unused_474_);
v___x_467_ = v___x_465_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_dec(v___x_465_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
lean_inc(v_defValue_460_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_name_456_);
lean_ctor_set(v___x_469_, 1, v_defValue_460_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_469_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_name_456_);
v_a_475_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_465_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_465_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_483_, lean_object* v_decl_484_, lean_object* v_ref_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(v_name_483_, v_decl_484_, v_ref_485_);
lean_dec_ref(v_decl_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_506_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__2_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_507_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__4_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_508_ = ((lean_object*)(l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn___closed__5_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_));
v___x_509_ = l_Lean_Option_register___at___00__private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4__spec__0(v___x_506_, v___x_507_, v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4____boxed(lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(lean_object* v_opts_512_, lean_object* v_opt_513_){
_start:
{
lean_object* v_name_514_; lean_object* v_defValue_515_; lean_object* v_map_516_; lean_object* v___x_517_; 
v_name_514_ = lean_ctor_get(v_opt_513_, 0);
v_defValue_515_ = lean_ctor_get(v_opt_513_, 1);
v_map_516_ = lean_ctor_get(v_opts_512_, 0);
v___x_517_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_516_, v_name_514_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_inc(v_defValue_515_);
return v_defValue_515_;
}
else
{
lean_object* v_val_518_; 
v_val_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_val_518_);
lean_dec_ref_known(v___x_517_, 1);
if (lean_obj_tag(v_val_518_) == 3)
{
lean_object* v_v_519_; 
v_v_519_ = lean_ctor_get(v_val_518_, 0);
lean_inc(v_v_519_);
lean_dec_ref_known(v_val_518_, 1);
return v_v_519_;
}
else
{
lean_dec(v_val_518_);
lean_inc(v_defValue_515_);
return v_defValue_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0___boxed(lean_object* v_opts_520_, lean_object* v_opt_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(v_opts_520_, v_opt_521_);
lean_dec_ref(v_opt_521_);
lean_dec_ref(v_opts_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth(lean_object* v_o_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = l_Lean_Meta_Tactic_TryThis_format_inputWidth;
v___x_525_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_TryThis_getInputWidth_spec__0(v_o_523_, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_getInputWidth___boxed(lean_object* v_o_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_Meta_Tactic_TryThis_getInputWidth(v_o_526_);
lean_dec_ref(v_o_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(lean_object* v_x_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v_kind_532_; lean_object* v_a_533_; lean_object* v___x_534_; 
v_kind_532_ = lean_ctor_get(v_x_528_, 0);
lean_inc(v_kind_532_);
v_a_533_ = lean_ctor_get(v_x_528_, 1);
lean_inc(v_a_533_);
lean_dec_ref_known(v_x_528_, 2);
v___x_534_ = l_Lean_PrettyPrinter_ppCategory(v_kind_532_, v_a_533_, v___y_529_, v___y_530_);
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_543_; 
v_a_535_ = lean_ctor_get(v_x_528_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_x_528_);
if (v_isSharedCheck_543_ == 0)
{
v___x_537_ = v_x_528_;
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v_x_528_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set_tag(v___x_537_, 3);
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_542_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty___boxed(lean_object* v_x_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_pretty(v_x_544_, v___y_545_, v___y_546_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(lean_object* v_s_549_, lean_object* v_w_550_, lean_object* v_indent_551_, lean_object* v_column_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
if (lean_obj_tag(v_s_549_) == 0)
{
lean_object* v_kind_556_; lean_object* v_a_557_; lean_object* v_w_559_; lean_object* v___y_560_; lean_object* v___y_561_; 
v_kind_556_ = lean_ctor_get(v_s_549_, 0);
lean_inc(v_kind_556_);
v_a_557_ = lean_ctor_get(v_s_549_, 1);
lean_inc(v_a_557_);
lean_dec_ref_known(v_s_549_, 2);
if (lean_obj_tag(v_w_550_) == 0)
{
lean_object* v_toCold_580_; lean_object* v_options_581_; lean_object* v___x_582_; 
v_toCold_580_ = lean_ctor_get(v___y_553_, 0);
v_options_581_ = lean_ctor_get(v_toCold_580_, 2);
v___x_582_ = l_Lean_Meta_Tactic_TryThis_getInputWidth(v_options_581_);
v_w_559_ = v___x_582_;
v___y_560_ = v___y_553_;
v___y_561_ = v___y_554_;
goto v___jp_558_;
}
else
{
lean_object* v_val_583_; 
v_val_583_ = lean_ctor_get(v_w_550_, 0);
lean_inc(v_val_583_);
lean_dec_ref_known(v_w_550_, 1);
v_w_559_ = v_val_583_;
v___y_560_ = v___y_553_;
v___y_561_ = v___y_554_;
goto v___jp_558_;
}
v___jp_558_:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_PrettyPrinter_ppCategory(v_kind_556_, v_a_557_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_571_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_571_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_571_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_567_ = l_Std_Format_pretty(v_a_563_, v_w_559_, v_indent_551_, v_column_552_);
lean_dec(v_w_559_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_567_);
v___x_569_ = v___x_565_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec(v_w_559_);
lean_dec(v_column_552_);
lean_dec(v_indent_551_);
v_a_572_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_562_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_562_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_column_552_);
lean_dec(v_indent_551_);
lean_dec(v_w_550_);
v_a_584_ = lean_ctor_get(v_s_549_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v_s_549_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v_s_549_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v_s_549_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 0);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra___boxed(lean_object* v_s_592_, lean_object* v_w_593_, lean_object* v_indent_594_, lean_object* v_column_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(v_s_592_, v_w_593_, v_indent_594_, v_column_595_, v___y_596_, v___y_597_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(lean_object* v_s_600_, lean_object* v_w_601_, lean_object* v_indent_602_, lean_object* v_column_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_suggestion_607_; lean_object* v___x_608_; 
v_suggestion_607_ = lean_ctor_get(v_s_600_, 0);
lean_inc_ref(v_suggestion_607_);
lean_dec_ref(v_s_600_);
v___x_608_ = l_Lean_Meta_Tactic_TryThis_SuggestionText_prettyExtra(v_suggestion_607_, v_w_601_, v_indent_602_, v_column_603_, v___y_604_, v___y_605_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_pretty___boxed(lean_object* v_s_609_, lean_object* v_w_610_, lean_object* v_indent_611_, lean_object* v_column_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(v_s_609_, v_w_610_, v_indent_611_, v_column_612_, v___y_613_, v___y_614_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object* v_s_617_, lean_object* v_range_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_toCold_622_; lean_object* v_fileMap_623_; lean_object* v___x_624_; lean_object* v_fst_625_; lean_object* v_snd_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_toCold_622_ = lean_ctor_get(v___y_619_, 0);
v_fileMap_623_ = lean_ctor_get(v_toCold_622_, 1);
lean_inc_ref(v_range_618_);
lean_inc_ref(v_fileMap_623_);
v___x_624_ = l_Lean_Meta_Tactic_TryThis_getIndentAndColumn(v_fileMap_623_, v_range_618_);
v_fst_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_fst_625_);
v_snd_626_ = lean_ctor_get(v___x_624_, 1);
lean_inc(v_snd_626_);
lean_dec_ref(v___x_624_);
v___x_627_ = lean_box(0);
v___x_628_ = l_Lean_Meta_Tactic_TryThis_Suggestion_pretty(v_s_617_, v___x_627_, v_fst_625_, v_snd_626_, v___y_619_, v___y_620_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_638_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_638_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
lean_inc_ref(v_fileMap_623_);
v___x_633_ = l_Lean_FileMap_utf8RangeToLspRange(v_fileMap_623_, v_range_618_);
v___x_634_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 2, v___x_627_);
lean_ctor_set(v___x_634_, 3, v___x_627_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_634_);
v___x_636_ = v___x_631_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec_ref(v_range_618_);
v_a_639_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_628_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_628_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit___boxed(lean_object* v_s_647_, lean_object* v_range_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(v_s_647_, v_range_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_652_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle_default = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle_default();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle_default);
l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle = _init_l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_instInhabitedSuggestionStyle);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_success);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asHypothesis);
l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible = _init_l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible();
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_SuggestionStyle_asInaccessible);
res = l___private_Lean_Meta_TryThis_0__Lean_Meta_Tactic_TryThis_initFn_00___x40_Lean_Meta_TryThis_1556063926____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_TryThis_format_inputWidth = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_TryThis_format_inputWidth);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_TryThis(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_TryThis(builtin);
}
#ifdef __cplusplus
}
#endif
