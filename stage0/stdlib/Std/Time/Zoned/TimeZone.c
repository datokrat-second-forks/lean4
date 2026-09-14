// Lean compiler output
// Module: Std.Time.Zoned.TimeZone
// Imports: public import Std.Time.Time public import Std.Time.DateTime.Timestamp
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
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Std_Time_Second_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instReprOffset_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__8_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9;
static lean_once_cell_t l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprOffset_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprOffset = (const lean_object*)&l_Std_Time_TimeZone_instReprOffset___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instDecidableEqOffset_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instDecidableEqOffset_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instDecidableEqOffset_decEq_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedOffset;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instOrdOffset___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instOrdOffset___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instOrdOffset___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__0_value;
static const lean_closure_object l_Std_Time_TimeZone_instOrdOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instOrdOffset___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__1_value;
static const lean_closure_object l_Std_Time_TimeZone_instOrdOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__1_value),((lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__0_value)} };
static const lean_object* l_Std_Time_TimeZone_instOrdOffset___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instOrdOffset = (const lean_object*)&l_Std_Time_TimeZone_instOrdOffset___closed__2_value;
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_TimeZone_Offset_toIsoString_spec__0(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_Offset_toIsoString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_Offset_toIsoString___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_Offset_toIsoString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_Offset_toIsoString___closed__1_value;
static lean_once_cell_t l_Std_Time_TimeZone_Offset_toIsoString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__2;
static lean_once_cell_t l_Std_Time_TimeZone_Offset_toIsoString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__3;
static const lean_string_object l_Std_Time_TimeZone_Offset_toIsoString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_Offset_toIsoString___closed__4_value;
static const lean_string_object l_Std_Time_TimeZone_Offset_toIsoString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Std_Time_TimeZone_Offset_toIsoString___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_Offset_toIsoString___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_toIsoString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_toIsoString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_zero;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHours___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHoursAndMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHoursAndMinutes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instInhabitedTimeZone_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instInhabitedTimeZone_default___closed__0 = (const lean_object*)&l_Std_Time_instInhabitedTimeZone_default___closed__0_value;
static lean_once_cell_t l_Std_Time_instInhabitedTimeZone_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedTimeZone_default___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimeZone_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimeZone;
static const lean_string_object l_Std_Time_instReprTimeZone_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "offset"};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprTimeZone_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__5_value;
static const lean_string_object l_Std_Time_instReprTimeZone_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__7 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__7_value;
static lean_once_cell_t l_Std_Time_instReprTimeZone_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__8;
static const lean_string_object l_Std_Time_instReprTimeZone_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "abbreviation"};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__9_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__10_value;
static lean_once_cell_t l_Std_Time_instReprTimeZone_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__11;
static const lean_string_object l_Std_Time_instReprTimeZone_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isDST"};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprTimeZone_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprTimeZone_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprTimeZone_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimeZone_repr___redArg___closed__14;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprTimeZone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprTimeZone_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprTimeZone___closed__0 = (const lean_object*)&l_Std_Time_instReprTimeZone___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprTimeZone = (const lean_object*)&l_Std_Time_instReprTimeZone___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimeZone_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimeZone_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimeZone(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimeZone___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_UTC___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l_Std_Time_TimeZone_UTC___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_UTC___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_UTC___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_UTC___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTC;
static const lean_string_object l_Std_Time_TimeZone_GMT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Greenwich Mean Time"};
static const lean_object* l_Std_Time_TimeZone_GMT___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_GMT___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_GMT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GMT"};
static const lean_object* l_Std_Time_TimeZone_GMT___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_GMT___closed__1_value;
static lean_once_cell_t l_Std_Time_TimeZone_GMT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_GMT___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_GMT;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofHours(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofHours___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofSeconds(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofSeconds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_toSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_toWallTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_toWallTime___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toWallTime___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_ofWallTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_ofWallTime___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instReprOffset_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__0));
v___x_20_ = lean_string_length(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__9);
v___x_22_ = lean_nat_to_int(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_nat_to_int(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg(lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___y_33_; lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_30_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__6));
v___x_31_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_47_ = lean_int_dec_lt(v_x_29_, v___x_46_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = l_Int_repr(v_x_29_);
v___x_49_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
v___y_33_ = v___x_49_;
goto v___jp_32_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = l_Int_repr(v_x_29_);
v___x_51_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
v___x_52_ = l_Repr_addAppParen(v___x_51_, v___x_45_);
v___y_33_ = v___x_52_;
goto v___jp_32_;
}
v___jp_32_:
{
lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_34_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_31_);
lean_ctor_set(v___x_34_, 1, v___y_33_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_36_, 0, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*1, v___x_35_);
v___x_37_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_30_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10);
v___x_39_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__11));
v___x_40_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_37_);
v___x_41_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__12));
v___x_42_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_38_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*1, v___x_35_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg___boxed(lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_x_53_);
lean_dec(v_x_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr(lean_object* v_x_55_, lean_object* v_prec_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_x_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprOffset_repr___boxed(lean_object* v_x_58_, lean_object* v_prec_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Std_Time_TimeZone_instReprOffset_repr(v_x_58_, v_prec_59_);
lean_dec(v_prec_59_);
lean_dec(v_x_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instDecidableEqOffset_decEq(lean_object* v_x_63_, lean_object* v_x_64_){
_start:
{
uint8_t v___x_65_; 
v___x_65_ = lean_int_dec_eq(v_x_63_, v_x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instDecidableEqOffset_decEq___boxed(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Std_Time_TimeZone_instDecidableEqOffset_decEq(v_x_66_, v_x_67_);
lean_dec(v_x_67_);
lean_dec(v_x_66_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instDecidableEqOffset_decEq_spec__0(lean_object* v_a_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_nat_to_int(v_a_70_);
v___x_72_ = l_Rat_ofInt(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instDecidableEqOffset(lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = lean_int_dec_eq(v_x_73_, v_x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instDecidableEqOffset___boxed(lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Std_Time_TimeZone_instDecidableEqOffset(v_x_76_, v_x_77_);
lean_dec(v_x_77_);
lean_dec(v_x_76_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = lean_nat_to_int(v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedOffset(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedOffset___closed__0, &l_Std_Time_TimeZone_instInhabitedOffset___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedOffset___closed__0);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instOrdOffset___lam__0(lean_object* v_x_83_){
_start:
{
lean_inc(v_x_83_);
return v_x_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instOrdOffset___lam__0___boxed(lean_object* v_x_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Std_Time_TimeZone_instOrdOffset___lam__0(v_x_84_);
lean_dec(v_x_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_TimeZone_Offset_toIsoString_spec__0(lean_object* v_a_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Rat_ofInt(v_a_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(3600u);
v___x_97_ = lean_nat_to_int(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__3(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(60u);
v___x_99_ = lean_nat_to_int(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_toIsoString(lean_object* v_offset_102_, uint8_t v_colon_103_){
_start:
{
lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_115_; lean_object* v___y_116_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v_fst_125_; lean_object* v_snd_126_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_139_ = lean_int_dec_le(v___x_138_, v_offset_102_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Std_Time_TimeZone_Offset_toIsoString___closed__4));
v___x_141_ = lean_int_neg(v_offset_102_);
lean_dec(v_offset_102_);
v_fst_125_ = v___x_140_;
v_snd_126_ = v___x_141_;
goto v___jp_124_;
}
else
{
lean_object* v___x_142_; 
v___x_142_ = ((lean_object*)(l_Std_Time_TimeZone_Offset_toIsoString___closed__5));
v_fst_125_ = v___x_142_;
v_snd_126_ = v_offset_102_;
goto v___jp_124_;
}
v___jp_104_:
{
if (v_colon_103_ == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; 
lean_inc_ref(v___y_106_);
v___x_108_ = lean_string_append(v___y_106_, v___y_105_);
lean_dec_ref(v___y_105_);
v___x_109_ = lean_string_append(v___x_108_, v___y_107_);
lean_dec_ref(v___y_107_);
return v___x_109_;
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
lean_inc_ref(v___y_106_);
v___x_110_ = lean_string_append(v___y_106_, v___y_105_);
lean_dec_ref(v___y_105_);
v___x_111_ = ((lean_object*)(l_Std_Time_TimeZone_Offset_toIsoString___closed__0));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = lean_string_append(v___x_112_, v___y_107_);
lean_dec_ref(v___y_107_);
return v___x_113_;
}
}
v___jp_114_:
{
uint8_t v___x_119_; 
v___x_119_ = lean_int_dec_lt(v___y_115_, v___y_117_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
v___x_120_ = l_Int_repr(v___y_115_);
lean_dec(v___y_115_);
v___y_105_ = v___y_118_;
v___y_106_ = v___y_116_;
v___y_107_ = v___x_120_;
goto v___jp_104_;
}
else
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = ((lean_object*)(l_Std_Time_TimeZone_Offset_toIsoString___closed__1));
v___x_122_ = l_Int_repr(v___y_115_);
lean_dec(v___y_115_);
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
lean_dec_ref(v___x_122_);
v___y_105_ = v___y_118_;
v___y_106_ = v___y_116_;
v___y_107_ = v___x_123_;
goto v___jp_104_;
}
}
v___jp_124_:
{
lean_object* v___x_127_; lean_object* v_hour_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_minute_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_127_ = lean_obj_once(&l_Std_Time_TimeZone_Offset_toIsoString___closed__2, &l_Std_Time_TimeZone_Offset_toIsoString___closed__2_once, _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__2);
v_hour_128_ = lean_int_div(v_snd_126_, v___x_127_);
v___x_129_ = lean_int_mod(v_snd_126_, v___x_127_);
lean_dec(v_snd_126_);
v___x_130_ = lean_obj_once(&l_Std_Time_TimeZone_Offset_toIsoString___closed__3, &l_Std_Time_TimeZone_Offset_toIsoString___closed__3_once, _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__3);
v_minute_131_ = lean_int_ediv(v___x_129_, v___x_130_);
lean_dec(v___x_129_);
v___x_132_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7);
v___x_133_ = lean_int_dec_lt(v_hour_128_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = l_Int_repr(v_hour_128_);
lean_dec(v_hour_128_);
v___y_115_ = v_minute_131_;
v___y_116_ = v_fst_125_;
v___y_117_ = v___x_132_;
v___y_118_ = v___x_134_;
goto v___jp_114_;
}
else
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = ((lean_object*)(l_Std_Time_TimeZone_Offset_toIsoString___closed__1));
v___x_136_ = l_Int_repr(v_hour_128_);
lean_dec(v_hour_128_);
v___x_137_ = lean_string_append(v___x_135_, v___x_136_);
lean_dec_ref(v___x_136_);
v___y_115_ = v_minute_131_;
v___y_116_ = v_fst_125_;
v___y_117_ = v___x_132_;
v___y_118_ = v___x_137_;
goto v___jp_114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_toIsoString___boxed(lean_object* v_offset_143_, lean_object* v_colon_144_){
_start:
{
uint8_t v_colon_boxed_145_; lean_object* v_res_146_; 
v_colon_boxed_145_ = lean_unbox(v_colon_144_);
v_res_146_ = l_Std_Time_TimeZone_Offset_toIsoString(v_offset_143_, v_colon_boxed_145_);
return v_res_146_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_Offset_zero(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHours(lean_object* v_n_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l_Std_Time_TimeZone_Offset_toIsoString___closed__2, &l_Std_Time_TimeZone_Offset_toIsoString___closed__2_once, _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__2);
v___x_150_ = lean_int_mul(v_n_148_, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHours___boxed(lean_object* v_n_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Std_Time_TimeZone_Offset_ofHours(v_n_151_);
lean_dec(v_n_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHoursAndMinutes(lean_object* v_n_153_, lean_object* v_m_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_155_ = lean_obj_once(&l_Std_Time_TimeZone_Offset_toIsoString___closed__2, &l_Std_Time_TimeZone_Offset_toIsoString___closed__2_once, _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__2);
v___x_156_ = lean_int_mul(v_n_153_, v___x_155_);
v___x_157_ = lean_obj_once(&l_Std_Time_TimeZone_Offset_toIsoString___closed__3, &l_Std_Time_TimeZone_Offset_toIsoString___closed__3_once, _init_l_Std_Time_TimeZone_Offset_toIsoString___closed__3);
v___x_158_ = lean_int_mul(v_m_154_, v___x_157_);
v___x_159_ = lean_int_add(v___x_156_, v___x_158_);
lean_dec(v___x_158_);
lean_dec(v___x_156_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Offset_ofHoursAndMinutes___boxed(lean_object* v_n_160_, lean_object* v_m_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Std_Time_TimeZone_Offset_ofHoursAndMinutes(v_n_160_, v_m_161_);
lean_dec(v_m_161_);
lean_dec(v_n_160_);
return v_res_162_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimeZone_default___closed__1(void){
_start:
{
uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_164_ = 0;
v___x_165_ = ((lean_object*)(l_Std_Time_instInhabitedTimeZone_default___closed__0));
v___x_166_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_167_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
lean_ctor_set(v___x_167_, 2, v___x_165_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*3, v___x_164_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimeZone_default(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Std_Time_instInhabitedTimeZone_default___closed__1, &l_Std_Time_instInhabitedTimeZone_default___closed__1_once, _init_l_Std_Time_instInhabitedTimeZone_default___closed__1);
return v___x_168_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimeZone(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Std_Time_instInhabitedTimeZone_default;
return v___x_169_;
}
}
static lean_object* _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(8u);
v___x_186_ = lean_nat_to_int(v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(16u);
v___x_191_ = lean_nat_to_int(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(9u);
v___x_196_ = lean_nat_to_int(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr___redArg(lean_object* v_x_197_){
_start:
{
lean_object* v_offset_198_; lean_object* v_name_199_; lean_object* v_abbreviation_200_; uint8_t v_isDST_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_offset_198_ = lean_ctor_get(v_x_197_, 0);
lean_inc(v_offset_198_);
v_name_199_ = lean_ctor_get(v_x_197_, 1);
lean_inc_ref(v_name_199_);
v_abbreviation_200_ = lean_ctor_get(v_x_197_, 2);
lean_inc_ref(v_abbreviation_200_);
v_isDST_201_ = lean_ctor_get_uint8(v_x_197_, sizeof(void*)*3);
lean_dec_ref(v_x_197_);
v___x_202_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__5));
v___x_203_ = ((lean_object*)(l_Std_Time_instReprTimeZone_repr___redArg___closed__3));
v___x_204_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__7);
v___x_205_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_offset_198_);
lean_dec(v_offset_198_);
v___x_206_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = 0;
v___x_208_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*1, v___x_207_);
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_203_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = ((lean_object*)(l_Std_Time_instReprTimeZone_repr___redArg___closed__5));
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = lean_box(1);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = ((lean_object*)(l_Std_Time_instReprTimeZone_repr___redArg___closed__7));
v___x_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_202_);
v___x_217_ = lean_obj_once(&l_Std_Time_instReprTimeZone_repr___redArg___closed__8, &l_Std_Time_instReprTimeZone_repr___redArg___closed__8_once, _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__8);
v___x_218_ = l_String_quote(v_name_199_);
v___x_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_217_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*1, v___x_207_);
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_216_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_210_);
v___x_224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_212_);
v___x_225_ = ((lean_object*)(l_Std_Time_instReprTimeZone_repr___redArg___closed__10));
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_202_);
v___x_228_ = lean_obj_once(&l_Std_Time_instReprTimeZone_repr___redArg___closed__11, &l_Std_Time_instReprTimeZone_repr___redArg___closed__11_once, _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__11);
v___x_229_ = l_String_quote(v_abbreviation_200_);
v___x_230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_228_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1, v___x_207_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_227_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_210_);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_212_);
v___x_236_ = ((lean_object*)(l_Std_Time_instReprTimeZone_repr___redArg___closed__13));
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v___x_202_);
v___x_239_ = lean_obj_once(&l_Std_Time_instReprTimeZone_repr___redArg___closed__14, &l_Std_Time_instReprTimeZone_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimeZone_repr___redArg___closed__14);
v___x_240_ = l_Bool_repr___redArg(v_isDST_201_);
v___x_241_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*1, v___x_207_);
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_238_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__10);
v___x_245_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__11));
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_243_);
v___x_247_ = ((lean_object*)(l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__12));
v___x_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_244_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_250_, 0, v___x_249_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*1, v___x_207_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr(lean_object* v_x_251_, lean_object* v_prec_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Std_Time_instReprTimeZone_repr___redArg(v_x_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimeZone_repr___boxed(lean_object* v_x_254_, lean_object* v_prec_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Std_Time_instReprTimeZone_repr(v_x_254_, v_prec_255_);
lean_dec(v_prec_255_);
return v_res_256_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimeZone_decEq(lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
lean_object* v_offset_261_; lean_object* v_name_262_; lean_object* v_abbreviation_263_; uint8_t v_isDST_264_; lean_object* v_offset_265_; lean_object* v_name_266_; lean_object* v_abbreviation_267_; uint8_t v_isDST_268_; uint8_t v___x_269_; 
v_offset_261_ = lean_ctor_get(v_x_259_, 0);
v_name_262_ = lean_ctor_get(v_x_259_, 1);
v_abbreviation_263_ = lean_ctor_get(v_x_259_, 2);
v_isDST_264_ = lean_ctor_get_uint8(v_x_259_, sizeof(void*)*3);
v_offset_265_ = lean_ctor_get(v_x_260_, 0);
v_name_266_ = lean_ctor_get(v_x_260_, 1);
v_abbreviation_267_ = lean_ctor_get(v_x_260_, 2);
v_isDST_268_ = lean_ctor_get_uint8(v_x_260_, sizeof(void*)*3);
v___x_269_ = lean_int_dec_eq(v_offset_261_, v_offset_265_);
if (v___x_269_ == 0)
{
return v___x_269_;
}
else
{
uint8_t v___x_270_; 
v___x_270_ = lean_string_dec_eq(v_name_262_, v_name_266_);
if (v___x_270_ == 0)
{
return v___x_270_;
}
else
{
uint8_t v___x_271_; 
v___x_271_ = lean_string_dec_eq(v_abbreviation_263_, v_abbreviation_267_);
if (v___x_271_ == 0)
{
return v___x_271_;
}
else
{
if (v_isDST_268_ == 0)
{
if (v_isDST_264_ == 0)
{
return v___x_271_;
}
else
{
return v_isDST_268_;
}
}
else
{
return v_isDST_264_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimeZone_decEq___boxed(lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
uint8_t v_res_274_; lean_object* v_r_275_; 
v_res_274_ = l_Std_Time_instDecidableEqTimeZone_decEq(v_x_272_, v_x_273_);
lean_dec_ref(v_x_273_);
lean_dec_ref(v_x_272_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimeZone(lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
uint8_t v___x_278_; 
v___x_278_ = l_Std_Time_instDecidableEqTimeZone_decEq(v_x_276_, v_x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimeZone___boxed(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
uint8_t v_res_281_; lean_object* v_r_282_; 
v_res_281_ = l_Std_Time_instDecidableEqTimeZone(v_x_279_, v_x_280_);
lean_dec_ref(v_x_280_);
lean_dec_ref(v_x_279_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_UTC___closed__1(void){
_start:
{
uint8_t v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_284_ = 0;
v___x_285_ = ((lean_object*)(l_Std_Time_TimeZone_UTC___closed__0));
v___x_286_ = l_Std_Time_TimeZone_Offset_zero;
v___x_287_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_285_);
lean_ctor_set(v___x_287_, 2, v___x_285_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*3, v___x_284_);
return v___x_287_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_UTC(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_obj_once(&l_Std_Time_TimeZone_UTC___closed__1, &l_Std_Time_TimeZone_UTC___closed__1_once, _init_l_Std_Time_TimeZone_UTC___closed__1);
return v___x_288_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_GMT___closed__2(void){
_start:
{
uint8_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = 0;
v___x_292_ = ((lean_object*)(l_Std_Time_TimeZone_GMT___closed__1));
v___x_293_ = ((lean_object*)(l_Std_Time_TimeZone_GMT___closed__0));
v___x_294_ = l_Std_Time_TimeZone_Offset_zero;
v___x_295_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_293_);
lean_ctor_set(v___x_295_, 2, v___x_292_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*3, v___x_291_);
return v___x_295_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_GMT(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_obj_once(&l_Std_Time_TimeZone_GMT___closed__2, &l_Std_Time_TimeZone_GMT___closed__2_once, _init_l_Std_Time_TimeZone_GMT___closed__2);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofHours(lean_object* v_name_297_, lean_object* v_abbreviation_298_, lean_object* v_n_299_, uint8_t v_isDST_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = l_Std_Time_TimeZone_Offset_ofHours(v_n_299_);
v___x_302_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v_name_297_);
lean_ctor_set(v___x_302_, 2, v_abbreviation_298_);
lean_ctor_set_uint8(v___x_302_, sizeof(void*)*3, v_isDST_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofHours___boxed(lean_object* v_name_303_, lean_object* v_abbreviation_304_, lean_object* v_n_305_, lean_object* v_isDST_306_){
_start:
{
uint8_t v_isDST_boxed_307_; lean_object* v_res_308_; 
v_isDST_boxed_307_ = lean_unbox(v_isDST_306_);
v_res_308_ = l_Std_Time_TimeZone_ofHours(v_name_303_, v_abbreviation_304_, v_n_305_, v_isDST_boxed_307_);
lean_dec(v_n_305_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofSeconds(lean_object* v_name_309_, lean_object* v_abbreviation_310_, lean_object* v_n_311_, uint8_t v_isDST_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_313_, 0, v_n_311_);
lean_ctor_set(v___x_313_, 1, v_name_309_);
lean_ctor_set(v___x_313_, 2, v_abbreviation_310_);
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*3, v_isDST_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ofSeconds___boxed(lean_object* v_name_314_, lean_object* v_abbreviation_315_, lean_object* v_n_316_, lean_object* v_isDST_317_){
_start:
{
uint8_t v_isDST_boxed_318_; lean_object* v_res_319_; 
v_isDST_boxed_318_ = lean_unbox(v_isDST_317_);
v_res_319_ = l_Std_Time_TimeZone_ofSeconds(v_name_314_, v_abbreviation_315_, v_n_316_, v_isDST_boxed_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_toSeconds(lean_object* v_tz_320_){
_start:
{
lean_object* v_offset_321_; 
v_offset_321_ = lean_ctor_get(v_tz_320_, 0);
lean_inc(v_offset_321_);
return v_offset_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_toSeconds___boxed(lean_object* v_tz_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Std_Time_TimeZone_toSeconds(v_tz_322_);
lean_dec_ref(v_tz_322_);
return v_res_323_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_toWallTime___closed__0(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_unsigned_to_nat(1000000000u);
v___x_325_ = lean_nat_to_int(v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toWallTime(lean_object* v_ts_326_, lean_object* v_offset_327_){
_start:
{
lean_object* v_second_328_; lean_object* v_nano_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_second_328_ = lean_ctor_get(v_ts_326_, 0);
v_nano_329_ = lean_ctor_get(v_ts_326_, 1);
v___x_330_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_331_ = lean_obj_once(&l_Std_Time_Timestamp_toWallTime___closed__0, &l_Std_Time_Timestamp_toWallTime___closed__0_once, _init_l_Std_Time_Timestamp_toWallTime___closed__0);
v___x_332_ = lean_int_mul(v_second_328_, v___x_331_);
v___x_333_ = lean_int_add(v___x_332_, v_nano_329_);
lean_dec(v___x_332_);
v___x_334_ = lean_int_mul(v_offset_327_, v___x_331_);
v___x_335_ = lean_int_add(v___x_334_, v___x_330_);
lean_dec(v___x_334_);
v___x_336_ = lean_int_add(v___x_333_, v___x_335_);
lean_dec(v___x_335_);
lean_dec(v___x_333_);
v___x_337_ = l_Std_Time_Duration_ofNanoseconds(v___x_336_);
lean_dec(v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toWallTime___boxed(lean_object* v_ts_338_, lean_object* v_offset_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Std_Time_Timestamp_toWallTime(v_ts_338_, v_offset_339_);
lean_dec(v_offset_339_);
lean_dec_ref(v_ts_338_);
return v_res_340_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_ofWallTime___closed__0(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_342_ = lean_int_neg(v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofWallTime(lean_object* v_wt_343_, lean_object* v_offset_344_){
_start:
{
lean_object* v_second_345_; lean_object* v_nano_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v_second_345_ = lean_ctor_get(v_wt_343_, 0);
v_nano_346_ = lean_ctor_get(v_wt_343_, 1);
v___x_347_ = lean_int_neg(v_offset_344_);
v___x_348_ = lean_obj_once(&l_Std_Time_Timestamp_ofWallTime___closed__0, &l_Std_Time_Timestamp_ofWallTime___closed__0_once, _init_l_Std_Time_Timestamp_ofWallTime___closed__0);
v___x_349_ = lean_obj_once(&l_Std_Time_Timestamp_toWallTime___closed__0, &l_Std_Time_Timestamp_toWallTime___closed__0_once, _init_l_Std_Time_Timestamp_toWallTime___closed__0);
v___x_350_ = lean_int_mul(v_second_345_, v___x_349_);
v___x_351_ = lean_int_add(v___x_350_, v_nano_346_);
lean_dec(v___x_350_);
v___x_352_ = lean_int_mul(v___x_347_, v___x_349_);
lean_dec(v___x_347_);
v___x_353_ = lean_int_add(v___x_352_, v___x_348_);
lean_dec(v___x_352_);
v___x_354_ = lean_int_add(v___x_351_, v___x_353_);
lean_dec(v___x_353_);
lean_dec(v___x_351_);
v___x_355_ = l_Std_Time_Duration_ofNanoseconds(v___x_354_);
lean_dec(v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofWallTime___boxed(lean_object* v_wt_356_, lean_object* v_offset_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_Time_Timestamp_ofWallTime(v_wt_356_, v_offset_357_);
lean_dec(v_offset_357_);
lean_dec_ref(v_wt_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toTimestamp(lean_object* v_wt_359_, lean_object* v_offset_360_){
_start:
{
lean_object* v_second_361_; lean_object* v_nano_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_second_361_ = lean_ctor_get(v_wt_359_, 0);
v_nano_362_ = lean_ctor_get(v_wt_359_, 1);
v___x_363_ = lean_int_neg(v_offset_360_);
v___x_364_ = lean_obj_once(&l_Std_Time_Timestamp_ofWallTime___closed__0, &l_Std_Time_Timestamp_ofWallTime___closed__0_once, _init_l_Std_Time_Timestamp_ofWallTime___closed__0);
v___x_365_ = lean_obj_once(&l_Std_Time_Timestamp_toWallTime___closed__0, &l_Std_Time_Timestamp_toWallTime___closed__0_once, _init_l_Std_Time_Timestamp_toWallTime___closed__0);
v___x_366_ = lean_int_mul(v_second_361_, v___x_365_);
v___x_367_ = lean_int_add(v___x_366_, v_nano_362_);
lean_dec(v___x_366_);
v___x_368_ = lean_int_mul(v___x_363_, v___x_365_);
lean_dec(v___x_363_);
v___x_369_ = lean_int_add(v___x_368_, v___x_364_);
lean_dec(v___x_368_);
v___x_370_ = lean_int_add(v___x_367_, v___x_369_);
lean_dec(v___x_369_);
lean_dec(v___x_367_);
v___x_371_ = l_Std_Time_Duration_ofNanoseconds(v___x_370_);
lean_dec(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toTimestamp___boxed(lean_object* v_wt_372_, lean_object* v_offset_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Std_Time_WallTime_toTimestamp(v_wt_372_, v_offset_373_);
lean_dec(v_offset_373_);
lean_dec_ref(v_wt_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofTimestamp(lean_object* v_ts_375_, lean_object* v_offset_376_){
_start:
{
lean_object* v_second_377_; lean_object* v_nano_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v_second_377_ = lean_ctor_get(v_ts_375_, 0);
v_nano_378_ = lean_ctor_get(v_ts_375_, 1);
v___x_379_ = lean_obj_once(&l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprOffset_repr___redArg___closed__13);
v___x_380_ = lean_obj_once(&l_Std_Time_Timestamp_toWallTime___closed__0, &l_Std_Time_Timestamp_toWallTime___closed__0_once, _init_l_Std_Time_Timestamp_toWallTime___closed__0);
v___x_381_ = lean_int_mul(v_second_377_, v___x_380_);
v___x_382_ = lean_int_add(v___x_381_, v_nano_378_);
lean_dec(v___x_381_);
v___x_383_ = lean_int_mul(v_offset_376_, v___x_380_);
v___x_384_ = lean_int_add(v___x_383_, v___x_379_);
lean_dec(v___x_383_);
v___x_385_ = lean_int_add(v___x_382_, v___x_384_);
lean_dec(v___x_384_);
lean_dec(v___x_382_);
v___x_386_ = l_Std_Time_Duration_ofNanoseconds(v___x_385_);
lean_dec(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofTimestamp___boxed(lean_object* v_ts_387_, lean_object* v_offset_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Time_WallTime_ofTimestamp(v_ts_387_, v_offset_388_);
lean_dec(v_offset_388_);
lean_dec_ref(v_ts_387_);
return v_res_389_;
}
}
lean_object* runtime_initialize_Std_Time_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_TimeZone(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_TimeZone_instInhabitedOffset = _init_l_Std_Time_TimeZone_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedOffset);
l_Std_Time_TimeZone_Offset_zero = _init_l_Std_Time_TimeZone_Offset_zero();
lean_mark_persistent(l_Std_Time_TimeZone_Offset_zero);
l_Std_Time_instInhabitedTimeZone_default = _init_l_Std_Time_instInhabitedTimeZone_default();
lean_mark_persistent(l_Std_Time_instInhabitedTimeZone_default);
l_Std_Time_instInhabitedTimeZone = _init_l_Std_Time_instInhabitedTimeZone();
lean_mark_persistent(l_Std_Time_instInhabitedTimeZone);
l_Std_Time_TimeZone_UTC = _init_l_Std_Time_TimeZone_UTC();
lean_mark_persistent(l_Std_Time_TimeZone_UTC);
l_Std_Time_TimeZone_GMT = _init_l_Std_Time_TimeZone_GMT();
lean_mark_persistent(l_Std_Time_TimeZone_GMT);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_TimeZone(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Time(uint8_t builtin);
lean_object* initialize_Std_Time_DateTime_Timestamp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_TimeZone(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_TimeZone(builtin);
}
#ifdef __cplusplus
}
#endif
