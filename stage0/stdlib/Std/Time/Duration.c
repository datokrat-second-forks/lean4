// Lean compiler output
// Module: Std.Time.Duration
// Imports: public import Std.Time.Date public import Init.Data.String.Basic public import Init.Data.String.Length
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_int_ediv(lean_object*, lean_object*);
extern lean_object* l_Std_Time_Nanosecond_instReprSpan;
lean_object* lean_string_length(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object*);
lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Std_Time_Hour_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
extern lean_object* l_Std_Time_Nanosecond_instOrdSpan;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Second_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Std_Time_Minute_Offset_toSeconds___boxed(lean_object*);
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nano"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__12;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "proof"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__14 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__14_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__16_value;
static const lean_string_object l_Std_Time_instReprDuration_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__17_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__18;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__19;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Time_instReprDuration_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__17_value)}};
static const lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_instReprDuration_repr___redArg___closed__21_value;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__22;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprDuration_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprDuration___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprDuration = (const lean_object*)&l_Std_Time_instReprDuration___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instDecidableEqDuration_decEq_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instToStringDuration_leftPad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instToStringDuration_leftPad___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration_leftPad___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instToStringDuration___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instToStringDuration___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__0___closed__0_value;
static const lean_string_object l_Std_Time_instToStringDuration___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instToStringDuration___lam__0___closed__1 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__0___closed__1_value;
static const lean_string_object l_Std_Time_instToStringDuration___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instToStringDuration___lam__0___closed__2 = (const lean_object*)&l_Std_Time_instToStringDuration___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_instToStringDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringDuration___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringDuration___closed__0 = (const lean_object*)&l_Std_Time_instToStringDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringDuration = (const lean_object*)&l_Std_Time_instToStringDuration___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprDuration__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprDuration__1___closed__0 = (const lean_object*)&l_Std_Time_instReprDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprDuration__1 = (const lean_object*)&l_Std_Time_instReprDuration__1___closed__0_value;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedDuration;
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdDuration___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__0 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__0_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdDuration___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__1 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__1_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdDuration___closed__2 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__2_value;
static const lean_closure_object l_Std_Time_instOrdDuration___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdDuration___closed__2_value),((lean_object*)&l_Std_Time_instOrdDuration___closed__0_value)} };
static const lean_object* l_Std_Time_instOrdDuration___closed__3 = (const lean_object*)&l_Std_Time_instOrdDuration___closed__3_value;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__4;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration;
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofMillisecond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofMillisecond___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLE;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLT;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addWeeks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addWeeks___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset = (const lean_object*)&l_Std_Time_Duration_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset = (const lean_object*)&l_Std_Time_Duration_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__1 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__1 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__2 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__2 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__3 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__3 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__4 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__4 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__5 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__5 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddOffset__6 = (const lean_object*)&l_Std_Time_Duration_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubOffset__6 = (const lean_object*)&l_Std_Time_Duration_instHSubOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSub___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSub___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSub = (const lean_object*)&l_Std_Time_Duration_instHSub___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instHAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAdd___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAdd___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAdd = (const lean_object*)&l_Std_Time_Duration_instHAdd___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_ofNanoseconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset = (const lean_object*)&l_Std_Time_Duration_instCoeOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_ofSeconds, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__2 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__2___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Hour_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__3 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__3___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_Offset_toSeconds___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_Offset_toDays___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__1 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__1_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__1_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__2 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__2_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__2_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__3 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__3_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__4 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__3_value;
static const lean_closure_object l_Std_Time_Duration_instCoeOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Duration_instCoeOffset__1___closed__0_value),((lean_object*)&l_Std_Time_Duration_instCoeOffset__4___closed__0_value)} };
static const lean_object* l_Std_Time_Duration_instCoeOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instCoeOffset__5 = (const lean_object*)&l_Std_Time_Duration_instCoeOffset__5___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulInt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulInt___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulInt = (const lean_object*)&l_Std_Time_Duration_instHMulInt___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHMulInt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHMulInt__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHMulInt__1___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHMulInt__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHMulInt__1 = (const lean_object*)&l_Std_Time_Duration_instHMulInt__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHAddPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHAddPlainTime___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHAddPlainTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHAddPlainTime = (const lean_object*)&l_Std_Time_Duration_instHAddPlainTime___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Duration_instHSubPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Duration_instHSubPlainTime___closed__0 = (const lean_object*)&l_Std_Time_Duration_instHSubPlainTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Duration_instHSubPlainTime = (const lean_object*)&l_Std_Time_Duration_instHSubPlainTime___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(8u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__0));
v___x_34_ = lean_string_length(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__18, &l_Std_Time_instReprDuration_repr___redArg___closed__18_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__18);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object* v_x_43_){
_start:
{
lean_object* v_second_44_; lean_object* v_nano_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_96_; 
v_second_44_ = lean_ctor_get(v_x_43_, 0);
v_nano_45_ = lean_ctor_get(v_x_43_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_96_ == 0)
{
v___x_47_ = v_x_43_;
v_isShared_48_ = v_isSharedCheck_96_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_nano_45_);
lean_inc(v_second_44_);
lean_dec(v_x_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_96_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___y_53_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_49_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__5));
v___x_50_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__6));
v___x_51_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__7, &l_Std_Time_instReprDuration_repr___redArg___closed__7_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__7);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_90_ = lean_int_dec_lt(v_second_44_, v___x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = l_Int_repr(v_second_44_);
lean_dec(v_second_44_);
v___x_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
v___y_53_ = v___x_92_;
goto v___jp_52_;
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = l_Int_repr(v_second_44_);
lean_dec(v_second_44_);
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
v___x_95_ = l_Repr_addAppParen(v___x_94_, v___x_88_);
v___y_53_ = v___x_95_;
goto v___jp_52_;
}
v___jp_52_:
{
lean_object* v___x_55_; 
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 4);
lean_ctor_set(v___x_47_, 1, v___y_53_);
lean_ctor_set(v___x_47_, 0, v___x_51_);
v___x_55_ = v___x_47_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v___y_53_);
v___x_55_ = v_reuseFailAlloc_87_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_146__overap_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_56_ = 0;
v___x_57_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set_uint8(v___x_57_, sizeof(void*)*1, v___x_56_);
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_50_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__9));
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_box(1);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__11));
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_49_);
v___x_66_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__12, &l_Std_Time_instReprDuration_repr___redArg___closed__12_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__12);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_146__overap_68_ = l_Std_Time_Nanosecond_instReprSpan;
v___x_69_ = lean_apply_2(v___x_146__overap_68_, v_nano_45_, v___x_67_);
v___x_70_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_66_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, sizeof(void*)*1, v___x_56_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_65_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_59_);
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_61_);
v___x_75_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__14));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_49_);
v___x_78_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__16));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__19, &l_Std_Time_instReprDuration_repr___redArg___closed__19_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__19);
v___x_81_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__20));
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_79_);
v___x_83_ = ((lean_object*)(l_Std_Time_instReprDuration_repr___redArg___closed__21));
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_80_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___x_56_);
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object* v_x_97_, lean_object* v_prec_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Std_Time_instReprDuration_repr___redArg(v_x_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object* v_x_100_, lean_object* v_prec_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Std_Time_instReprDuration_repr(v_x_100_, v_prec_101_);
lean_dec(v_prec_101_);
return v_res_102_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
lean_object* v_second_107_; lean_object* v_nano_108_; lean_object* v_second_109_; lean_object* v_nano_110_; uint8_t v___x_111_; 
v_second_107_ = lean_ctor_get(v_x_105_, 0);
lean_inc(v_second_107_);
v_nano_108_ = lean_ctor_get(v_x_105_, 1);
lean_inc(v_nano_108_);
lean_dec_ref(v_x_105_);
v_second_109_ = lean_ctor_get(v_x_106_, 0);
lean_inc(v_second_109_);
v_nano_110_ = lean_ctor_get(v_x_106_, 1);
lean_inc(v_nano_110_);
lean_dec_ref(v_x_106_);
v___x_111_ = lean_int_dec_eq(v_second_107_, v_second_109_);
lean_dec(v_second_109_);
lean_dec(v_second_107_);
if (v___x_111_ == 0)
{
lean_dec(v_nano_110_);
lean_dec(v_nano_108_);
return v___x_111_;
}
else
{
uint8_t v___x_112_; 
v___x_112_ = l_Std_Time_Nanosecond_instDecidableEqSpan(v_nano_108_, v_nano_110_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object* v_x_113_, lean_object* v_x_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_113_, v_x_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instDecidableEqDuration_decEq_spec__0(lean_object* v_a_117_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_nat_to_int(v_a_117_);
v___x_119_ = l_Rat_ofInt(v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object* v_x_120_, lean_object* v_x_121_){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_120_, v_x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Std_Time_instDecidableEqDuration(v_x_123_, v_x_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
lean_object* v_zero_129_; uint8_t v_isZero_130_; 
v_zero_129_ = lean_unsigned_to_nat(0u);
v_isZero_130_ = lean_nat_dec_eq(v_x_127_, v_zero_129_);
if (v_isZero_130_ == 1)
{
lean_dec(v_x_127_);
return v_x_128_;
}
else
{
uint32_t v___x_131_; lean_object* v_one_132_; lean_object* v_n_133_; lean_object* v___x_134_; 
v___x_131_ = 48;
v_one_132_ = lean_unsigned_to_nat(1u);
v_n_133_ = lean_nat_sub(v_x_127_, v_one_132_);
lean_dec(v_x_127_);
v___x_134_ = lean_string_push(v_x_128_, v___x_131_);
v_x_127_ = v_n_133_;
v_x_128_ = v___x_134_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object* v_n_137_, lean_object* v_s_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_139_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___x_140_ = lean_string_length(v_s_138_);
v___x_141_ = lean_nat_sub(v_n_137_, v___x_140_);
v___x_142_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(v___x_141_, v___x_139_);
v___x_143_ = lean_string_append(v___x_142_, v_s_138_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object* v_n_144_, lean_object* v_s_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Std_Time_instToStringDuration_leftPad(v_n_144_, v_s_145_);
lean_dec_ref(v_s_145_);
lean_dec(v_n_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object* v_s_150_){
_start:
{
lean_object* v___y_152_; lean_object* v___y_153_; lean_object* v_second_157_; lean_object* v_nano_158_; lean_object* v_fst_160_; lean_object* v_fst_161_; lean_object* v_snd_162_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_second_157_ = lean_ctor_get(v_s_150_, 0);
lean_inc(v_second_157_);
v_nano_158_ = lean_ctor_get(v_s_150_, 1);
lean_inc(v_nano_158_);
lean_dec_ref(v_s_150_);
v___x_173_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_174_ = lean_int_dec_lt(v___x_173_, v_second_157_);
if (v___x_174_ == 0)
{
uint8_t v___x_175_; 
v___x_175_ = lean_int_dec_lt(v_second_157_, v___x_173_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; 
v___x_176_ = lean_int_dec_lt(v_nano_158_, v___x_173_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
lean_inc(v_nano_158_);
v_fst_160_ = v___x_177_;
v_fst_161_ = v_second_157_;
v_snd_162_ = v_nano_158_;
goto v___jp_159_;
}
else
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__2));
v___x_179_ = lean_int_neg(v_second_157_);
lean_dec(v_second_157_);
v___x_180_ = lean_int_neg(v_nano_158_);
v_fst_160_ = v___x_178_;
v_fst_161_ = v___x_179_;
v_snd_162_ = v___x_180_;
goto v___jp_159_;
}
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__2));
v___x_182_ = lean_int_neg(v_second_157_);
lean_dec(v_second_157_);
v___x_183_ = lean_int_neg(v_nano_158_);
v_fst_160_ = v___x_181_;
v_fst_161_ = v___x_182_;
v_snd_162_ = v___x_183_;
goto v___jp_159_;
}
}
else
{
lean_object* v___x_184_; 
v___x_184_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
lean_inc(v_nano_158_);
v_fst_160_ = v___x_184_;
v_fst_161_ = v_second_157_;
v_snd_162_ = v_nano_158_;
goto v___jp_159_;
}
v___jp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_string_append(v___y_152_, v___y_153_);
lean_dec_ref(v___y_153_);
v___x_155_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__0));
v___x_156_ = lean_string_append(v___x_154_, v___x_155_);
return v___x_156_;
}
v___jp_159_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_163_ = l_Int_repr(v_fst_161_);
lean_dec(v_fst_161_);
lean_inc_ref(v_fst_160_);
v___x_164_ = lean_string_append(v_fst_160_, v___x_163_);
lean_dec_ref(v___x_163_);
v___x_165_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_166_ = lean_int_dec_eq(v_nano_158_, v___x_165_);
lean_dec(v_nano_158_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_167_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__1));
v___x_168_ = lean_unsigned_to_nat(9u);
v___x_169_ = l_Int_repr(v_snd_162_);
lean_dec(v_snd_162_);
v___x_170_ = l_Std_Time_instToStringDuration_leftPad(v___x_168_, v___x_169_);
lean_dec_ref(v___x_169_);
v___x_171_ = lean_string_append(v___x_167_, v___x_170_);
lean_dec_ref(v___x_170_);
v___y_152_ = v___x_164_;
v___y_153_ = v___x_171_;
goto v___jp_151_;
}
else
{
lean_object* v___x_172_; 
lean_dec(v_snd_162_);
v___x_172_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___y_152_ = v___x_164_;
v___y_153_ = v___x_172_;
goto v___jp_151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0(lean_object* v_s_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___y_190_; lean_object* v___y_191_; lean_object* v_second_197_; lean_object* v_nano_198_; lean_object* v_fst_200_; lean_object* v_fst_201_; lean_object* v_snd_202_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_second_197_ = lean_ctor_get(v_s_187_, 0);
lean_inc(v_second_197_);
v_nano_198_ = lean_ctor_get(v_s_187_, 1);
lean_inc(v_nano_198_);
lean_dec_ref(v_s_187_);
v___x_213_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_214_ = lean_int_dec_lt(v___x_213_, v_second_197_);
if (v___x_214_ == 0)
{
uint8_t v___x_215_; 
v___x_215_ = lean_int_dec_lt(v_second_197_, v___x_213_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = lean_int_dec_lt(v_nano_198_, v___x_213_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
v___x_217_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
lean_inc(v_nano_198_);
v_fst_200_ = v___x_217_;
v_fst_201_ = v_second_197_;
v_snd_202_ = v_nano_198_;
goto v___jp_199_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_218_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__2));
v___x_219_ = lean_int_neg(v_second_197_);
lean_dec(v_second_197_);
v___x_220_ = lean_int_neg(v_nano_198_);
v_fst_200_ = v___x_218_;
v_fst_201_ = v___x_219_;
v_snd_202_ = v___x_220_;
goto v___jp_199_;
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__2));
v___x_222_ = lean_int_neg(v_second_197_);
lean_dec(v_second_197_);
v___x_223_ = lean_int_neg(v_nano_198_);
v_fst_200_ = v___x_221_;
v_fst_201_ = v___x_222_;
v_snd_202_ = v___x_223_;
goto v___jp_199_;
}
}
else
{
lean_object* v___x_224_; 
v___x_224_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
lean_inc(v_nano_198_);
v_fst_200_ = v___x_224_;
v_fst_201_ = v_second_197_;
v_snd_202_ = v_nano_198_;
goto v___jp_199_;
}
v___jp_189_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_192_ = lean_string_append(v___y_190_, v___y_191_);
lean_dec_ref(v___y_191_);
v___x_193_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__0));
v___x_194_ = lean_string_append(v___x_192_, v___x_193_);
v___x_195_ = l_String_quote(v___x_194_);
v___x_196_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
v___jp_199_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_203_ = l_Int_repr(v_fst_201_);
lean_dec(v_fst_201_);
lean_inc_ref(v_fst_200_);
v___x_204_ = lean_string_append(v_fst_200_, v___x_203_);
lean_dec_ref(v___x_203_);
v___x_205_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_206_ = lean_int_dec_eq(v_nano_198_, v___x_205_);
lean_dec(v_nano_198_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = ((lean_object*)(l_Std_Time_instToStringDuration___lam__0___closed__1));
v___x_208_ = lean_unsigned_to_nat(9u);
v___x_209_ = l_Int_repr(v_snd_202_);
lean_dec(v_snd_202_);
v___x_210_ = l_Std_Time_instToStringDuration_leftPad(v___x_208_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = lean_string_append(v___x_207_, v___x_210_);
lean_dec_ref(v___x_210_);
v___y_190_ = v___x_204_;
v___y_191_ = v___x_211_;
goto v___jp_189_;
}
else
{
lean_object* v___x_212_; 
lean_dec(v_snd_202_);
v___x_212_ = ((lean_object*)(l_Std_Time_instToStringDuration_leftPad___closed__0));
v___y_190_ = v___x_204_;
v___y_191_ = v___x_212_;
goto v___jp_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0___boxed(lean_object* v_s_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Std_Time_instReprDuration__1___lam__0(v_s_225_, v___y_226_);
lean_dec(v___y_226_);
return v_res_227_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__0(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_nat_to_int(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__0, &l_Std_Time_instInhabitedDuration___closed__0_once, _init_l_Std_Time_instInhabitedDuration___closed__0);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__1, &l_Std_Time_instInhabitedDuration___closed__1_once, _init_l_Std_Time_instInhabitedDuration___closed__1);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object* v_n_235_){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_236_ = lean_nat_to_int(v_n_235_);
v___x_237_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object* v_x_239_){
_start:
{
lean_object* v_second_240_; 
v_second_240_ = lean_ctor_get(v_x_239_, 0);
lean_inc(v_second_240_);
return v_second_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object* v_x_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Std_Time_instOrdDuration___lam__0(v_x_241_);
lean_dec_ref(v_x_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object* v_x_243_){
_start:
{
lean_object* v_nano_244_; 
v_nano_244_ = lean_ctor_get(v_x_243_, 1);
lean_inc(v_nano_244_);
return v_nano_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object* v_x_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Std_Time_instOrdDuration___lam__1(v_x_245_);
lean_dec_ref(v_x_245_);
return v_res_246_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__4(void){
_start:
{
lean_object* v___f_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___f_253_ = ((lean_object*)(l_Std_Time_instOrdDuration___closed__1));
v___x_254_ = l_Std_Time_Nanosecond_instOrdSpan;
v___x_255_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_255_, 0, lean_box(0));
lean_closure_set(v___x_255_, 1, lean_box(0));
lean_closure_set(v___x_255_, 2, v___x_254_);
lean_closure_set(v___x_255_, 3, v___f_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__5(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__4, &l_Std_Time_instOrdDuration___closed__4_once, _init_l_Std_Time_instOrdDuration___closed__4);
v___x_257_ = ((lean_object*)(l_Std_Time_instOrdDuration___closed__3));
v___x_258_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_258_, 0, lean_box(0));
lean_closure_set(v___x_258_, 1, lean_box(0));
lean_closure_set(v___x_258_, 2, v___x_257_);
lean_closure_set(v___x_258_, 3, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__5, &l_Std_Time_instOrdDuration___closed__5_once, _init_l_Std_Time_instOrdDuration___closed__5);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object* v_duration_260_){
_start:
{
lean_object* v_second_261_; lean_object* v_nano_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_271_; 
v_second_261_ = lean_ctor_get(v_duration_260_, 0);
v_nano_262_ = lean_ctor_get(v_duration_260_, 1);
v_isSharedCheck_271_ = !lean_is_exclusive(v_duration_260_);
if (v_isSharedCheck_271_ == 0)
{
v___x_264_ = v_duration_260_;
v_isShared_265_ = v_isSharedCheck_271_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_nano_262_);
lean_inc(v_second_261_);
lean_dec(v_duration_260_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_271_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_266_ = lean_int_neg(v_second_261_);
lean_dec(v_second_261_);
v___x_267_ = lean_int_neg(v_nano_262_);
lean_dec(v_nano_262_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v___x_267_);
lean_ctor_set(v___x_264_, 0, v___x_266_);
v___x_269_ = v___x_264_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v___x_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object* v_s_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_s_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object* v_a_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Rat_ofInt(v_a_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(1000000000u);
v___x_278_ = lean_nat_to_int(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object* v_s_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_280_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_281_ = lean_int_div(v_s_279_, v___x_280_);
v___x_282_ = lean_int_mod(v_s_279_, v___x_280_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_281_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object* v_s_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Std_Time_Duration_ofNanoseconds(v_s_284_);
lean_dec(v_s_284_);
return v_res_285_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofMillisecond___closed__0(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(1000000u);
v___x_287_ = lean_nat_to_int(v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object* v_s_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_290_ = lean_int_mul(v_s_288_, v___x_289_);
v___x_291_ = l_Std_Time_Duration_ofNanoseconds(v___x_290_);
lean_dec(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object* v_s_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Std_Time_Duration_ofMillisecond(v_s_292_);
lean_dec(v_s_292_);
return v_res_293_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object* v_d_294_){
_start:
{
lean_object* v_second_295_; lean_object* v_nano_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_second_295_ = lean_ctor_get(v_d_294_, 0);
v_nano_296_ = lean_ctor_get(v_d_294_, 1);
v___x_297_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_298_ = lean_int_dec_eq(v_second_295_, v___x_297_);
if (v___x_298_ == 0)
{
return v___x_298_;
}
else
{
uint8_t v___x_299_; 
v___x_299_ = lean_int_dec_eq(v_nano_296_, v___x_297_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object* v_d_300_){
_start:
{
uint8_t v_res_301_; lean_object* v_r_302_; 
v_res_301_ = l_Std_Time_Duration_isZero(v_d_300_);
lean_dec_ref(v_d_300_);
v_r_302_ = lean_box(v_res_301_);
return v_r_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object* v_duration_303_){
_start:
{
lean_object* v_second_304_; 
v_second_304_ = lean_ctor_get(v_duration_303_, 0);
lean_inc(v_second_304_);
return v_second_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object* v_duration_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_Time_Duration_toSeconds(v_duration_305_);
lean_dec_ref(v_duration_305_);
return v_res_306_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(1000u);
v___x_308_ = lean_nat_to_int(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object* v_duration_309_){
_start:
{
lean_object* v_second_310_; lean_object* v_nano_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_millis_316_; 
v_second_310_ = lean_ctor_get(v_duration_309_, 0);
v_nano_311_ = lean_ctor_get(v_duration_309_, 1);
v___x_312_ = lean_obj_once(&l_Std_Time_Duration_toMilliseconds___closed__0, &l_Std_Time_Duration_toMilliseconds___closed__0_once, _init_l_Std_Time_Duration_toMilliseconds___closed__0);
v___x_313_ = lean_int_mul(v_second_310_, v___x_312_);
v___x_314_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_315_ = lean_int_ediv(v_nano_311_, v___x_314_);
v_millis_316_ = lean_int_add(v___x_313_, v___x_315_);
lean_dec(v___x_315_);
lean_dec(v___x_313_);
return v_millis_316_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object* v_duration_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Std_Time_Duration_toMilliseconds(v_duration_317_);
lean_dec_ref(v_duration_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object* v_duration_319_){
_start:
{
lean_object* v_second_320_; lean_object* v_nano_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v_nanos_324_; 
v_second_320_ = lean_ctor_get(v_duration_319_, 0);
v_nano_321_ = lean_ctor_get(v_duration_319_, 1);
v___x_322_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_323_ = lean_int_mul(v_second_320_, v___x_322_);
v_nanos_324_ = lean_int_add(v___x_323_, v_nano_321_);
lean_dec(v___x_323_);
return v_nanos_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object* v_duration_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Time_Duration_toNanoseconds(v_duration_325_);
lean_dec_ref(v_duration_325_);
return v_res_326_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLE(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_box(0);
return v___x_327_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object* v_x_328_, lean_object* v_y_329_){
_start:
{
lean_object* v_second_330_; lean_object* v_nano_331_; lean_object* v_second_332_; lean_object* v_nano_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_nanos_336_; lean_object* v___x_337_; lean_object* v_nanos_338_; uint8_t v___x_339_; 
v_second_330_ = lean_ctor_get(v_x_328_, 0);
v_nano_331_ = lean_ctor_get(v_x_328_, 1);
v_second_332_ = lean_ctor_get(v_y_329_, 0);
v_nano_333_ = lean_ctor_get(v_y_329_, 1);
v___x_334_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_335_ = lean_int_mul(v_second_330_, v___x_334_);
v_nanos_336_ = lean_int_add(v___x_335_, v_nano_331_);
lean_dec(v___x_335_);
v___x_337_ = lean_int_mul(v_second_332_, v___x_334_);
v_nanos_338_ = lean_int_add(v___x_337_, v_nano_333_);
lean_dec(v___x_337_);
v___x_339_ = lean_int_dec_le(v_nanos_336_, v_nanos_338_);
lean_dec(v_nanos_338_);
lean_dec(v_nanos_336_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object* v_x_340_, lean_object* v_y_341_){
_start:
{
uint8_t v_res_342_; lean_object* v_r_343_; 
v_res_342_ = l_Std_Time_Duration_instDecidableLe(v_x_340_, v_y_341_);
lean_dec_ref(v_y_341_);
lean_dec_ref(v_x_340_);
v_r_343_ = lean_box(v_res_342_);
return v_r_343_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLT(void){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lean_box(0);
return v___x_344_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object* v_x_345_, lean_object* v_y_346_){
_start:
{
lean_object* v_second_347_; lean_object* v_nano_348_; lean_object* v_second_349_; lean_object* v_nano_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_nanos_353_; lean_object* v___x_354_; lean_object* v_nanos_355_; uint8_t v___x_356_; 
v_second_347_ = lean_ctor_get(v_x_345_, 0);
v_nano_348_ = lean_ctor_get(v_x_345_, 1);
v_second_349_ = lean_ctor_get(v_y_346_, 0);
v_nano_350_ = lean_ctor_get(v_y_346_, 1);
v___x_351_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_352_ = lean_int_mul(v_second_347_, v___x_351_);
v_nanos_353_ = lean_int_add(v___x_352_, v_nano_348_);
lean_dec(v___x_352_);
v___x_354_ = lean_int_mul(v_second_349_, v___x_351_);
v_nanos_355_ = lean_int_add(v___x_354_, v_nano_350_);
lean_dec(v___x_354_);
v___x_356_ = lean_int_dec_lt(v_nanos_353_, v_nanos_355_);
lean_dec(v_nanos_355_);
lean_dec(v_nanos_353_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object* v_x_357_, lean_object* v_y_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_Std_Time_Duration_instDecidableLt(v_x_357_, v_y_358_);
lean_dec_ref(v_y_358_);
lean_dec_ref(v_x_357_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_unsigned_to_nat(60u);
v___x_362_ = lean_nat_to_int(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object* v_tm_363_){
_start:
{
lean_object* v_second_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_second_364_ = lean_ctor_get(v_tm_363_, 0);
v___x_365_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v___x_366_ = lean_int_div(v_second_364_, v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object* v_tm_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Std_Time_Duration_toMinutes(v_tm_367_);
lean_dec_ref(v_tm_367_);
return v_res_368_;
}
}
static lean_object* _init_l_Std_Time_Duration_toDays___closed__0(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_unsigned_to_nat(86400u);
v___x_370_ = lean_nat_to_int(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object* v_tm_371_){
_start:
{
lean_object* v_second_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v_second_372_ = lean_ctor_get(v_tm_371_, 0);
v___x_373_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v___x_374_ = lean_int_div(v_second_372_, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object* v_tm_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_Time_Duration_toDays(v_tm_375_);
lean_dec_ref(v_tm_375_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object* v_secs_377_, lean_object* v_nanos_378_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_379_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_380_ = lean_int_mul(v_secs_377_, v___x_379_);
v___x_381_ = l_Std_Time_Nanosecond_Span_toOffset(v_nanos_378_);
v___x_382_ = lean_int_add(v___x_380_, v___x_381_);
lean_dec(v___x_381_);
lean_dec(v___x_380_);
v___x_383_ = l_Std_Time_Duration_ofNanoseconds(v___x_382_);
lean_dec(v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object* v_secs_384_, lean_object* v_nanos_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Std_Time_Duration_fromComponents(v_secs_384_, v_nanos_385_);
lean_dec(v_nanos_385_);
lean_dec(v_secs_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object* v_t_u2081_387_, lean_object* v_t_u2082_388_){
_start:
{
lean_object* v_second_389_; lean_object* v_nano_390_; lean_object* v_second_391_; lean_object* v_nano_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_second_389_ = lean_ctor_get(v_t_u2081_387_, 0);
v_nano_390_ = lean_ctor_get(v_t_u2081_387_, 1);
v_second_391_ = lean_ctor_get(v_t_u2082_388_, 0);
v_nano_392_ = lean_ctor_get(v_t_u2082_388_, 1);
v___x_393_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_394_ = lean_int_mul(v_second_389_, v___x_393_);
v___x_395_ = lean_int_add(v___x_394_, v_nano_390_);
lean_dec(v___x_394_);
v___x_396_ = lean_int_mul(v_second_391_, v___x_393_);
v___x_397_ = lean_int_add(v___x_396_, v_nano_392_);
lean_dec(v___x_396_);
v___x_398_ = lean_int_add(v___x_395_, v___x_397_);
lean_dec(v___x_397_);
lean_dec(v___x_395_);
v___x_399_ = l_Std_Time_Duration_ofNanoseconds(v___x_398_);
lean_dec(v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object* v_t_u2081_400_, lean_object* v_t_u2082_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Std_Time_Duration_add(v_t_u2081_400_, v_t_u2082_401_);
lean_dec_ref(v_t_u2082_401_);
lean_dec_ref(v_t_u2081_400_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object* v_t_u2081_403_, lean_object* v_t_u2082_404_){
_start:
{
lean_object* v_second_405_; lean_object* v_nano_406_; lean_object* v_second_407_; lean_object* v_nano_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_second_405_ = lean_ctor_get(v_t_u2082_404_, 0);
v_nano_406_ = lean_ctor_get(v_t_u2082_404_, 1);
v_second_407_ = lean_ctor_get(v_t_u2081_403_, 0);
v_nano_408_ = lean_ctor_get(v_t_u2081_403_, 1);
v___x_409_ = lean_int_neg(v_second_405_);
v___x_410_ = lean_int_neg(v_nano_406_);
v___x_411_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_412_ = lean_int_mul(v_second_407_, v___x_411_);
v___x_413_ = lean_int_add(v___x_412_, v_nano_408_);
lean_dec(v___x_412_);
v___x_414_ = lean_int_mul(v___x_409_, v___x_411_);
lean_dec(v___x_409_);
v___x_415_ = lean_int_add(v___x_414_, v___x_410_);
lean_dec(v___x_410_);
lean_dec(v___x_414_);
v___x_416_ = lean_int_add(v___x_413_, v___x_415_);
lean_dec(v___x_415_);
lean_dec(v___x_413_);
v___x_417_ = l_Std_Time_Duration_ofNanoseconds(v___x_416_);
lean_dec(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object* v_t_u2081_418_, lean_object* v_t_u2082_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Std_Time_Duration_sub(v_t_u2081_418_, v_t_u2082_419_);
lean_dec_ref(v_t_u2082_419_);
lean_dec_ref(v_t_u2081_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object* v_t_421_, lean_object* v_s_422_){
_start:
{
lean_object* v_second_423_; lean_object* v_nano_424_; lean_object* v___x_425_; lean_object* v_second_426_; lean_object* v_nano_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_second_423_ = lean_ctor_get(v_t_421_, 0);
v_nano_424_ = lean_ctor_get(v_t_421_, 1);
v___x_425_ = l_Std_Time_Duration_ofNanoseconds(v_s_422_);
v_second_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_second_426_);
v_nano_427_ = lean_ctor_get(v___x_425_, 1);
lean_inc(v_nano_427_);
lean_dec_ref(v___x_425_);
v___x_428_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_429_ = lean_int_mul(v_second_423_, v___x_428_);
v___x_430_ = lean_int_add(v___x_429_, v_nano_424_);
lean_dec(v___x_429_);
v___x_431_ = lean_int_mul(v_second_426_, v___x_428_);
lean_dec(v_second_426_);
v___x_432_ = lean_int_add(v___x_431_, v_nano_427_);
lean_dec(v_nano_427_);
lean_dec(v___x_431_);
v___x_433_ = lean_int_add(v___x_430_, v___x_432_);
lean_dec(v___x_432_);
lean_dec(v___x_430_);
v___x_434_ = l_Std_Time_Duration_ofNanoseconds(v___x_433_);
lean_dec(v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object* v_t_435_, lean_object* v_s_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Std_Time_Duration_addNanoseconds(v_t_435_, v_s_436_);
lean_dec(v_s_436_);
lean_dec_ref(v_t_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object* v_t_438_, lean_object* v_s_439_){
_start:
{
lean_object* v_second_440_; lean_object* v_nano_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_second_445_; lean_object* v_nano_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_second_440_ = lean_ctor_get(v_t_438_, 0);
v_nano_441_ = lean_ctor_get(v_t_438_, 1);
v___x_442_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_443_ = lean_int_mul(v_s_439_, v___x_442_);
v___x_444_ = l_Std_Time_Duration_ofNanoseconds(v___x_443_);
lean_dec(v___x_443_);
v_second_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_second_445_);
v_nano_446_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_nano_446_);
lean_dec_ref(v___x_444_);
v___x_447_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_448_ = lean_int_mul(v_second_440_, v___x_447_);
v___x_449_ = lean_int_add(v___x_448_, v_nano_441_);
lean_dec(v___x_448_);
v___x_450_ = lean_int_mul(v_second_445_, v___x_447_);
lean_dec(v_second_445_);
v___x_451_ = lean_int_add(v___x_450_, v_nano_446_);
lean_dec(v_nano_446_);
lean_dec(v___x_450_);
v___x_452_ = lean_int_add(v___x_449_, v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_449_);
v___x_453_ = l_Std_Time_Duration_ofNanoseconds(v___x_452_);
lean_dec(v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object* v_t_454_, lean_object* v_s_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_Time_Duration_addMilliseconds(v_t_454_, v_s_455_);
lean_dec(v_s_455_);
lean_dec_ref(v_t_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object* v_t_457_, lean_object* v_s_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_second_462_; lean_object* v_nano_463_; lean_object* v_second_464_; lean_object* v_nano_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_459_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_460_ = lean_int_mul(v_s_458_, v___x_459_);
v___x_461_ = l_Std_Time_Duration_ofNanoseconds(v___x_460_);
lean_dec(v___x_460_);
v_second_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_second_462_);
v_nano_463_ = lean_ctor_get(v___x_461_, 1);
lean_inc(v_nano_463_);
lean_dec_ref(v___x_461_);
v_second_464_ = lean_ctor_get(v_t_457_, 0);
v_nano_465_ = lean_ctor_get(v_t_457_, 1);
v___x_466_ = lean_int_neg(v_second_462_);
lean_dec(v_second_462_);
v___x_467_ = lean_int_neg(v_nano_463_);
lean_dec(v_nano_463_);
v___x_468_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_469_ = lean_int_mul(v_second_464_, v___x_468_);
v___x_470_ = lean_int_add(v___x_469_, v_nano_465_);
lean_dec(v___x_469_);
v___x_471_ = lean_int_mul(v___x_466_, v___x_468_);
lean_dec(v___x_466_);
v___x_472_ = lean_int_add(v___x_471_, v___x_467_);
lean_dec(v___x_467_);
lean_dec(v___x_471_);
v___x_473_ = lean_int_add(v___x_470_, v___x_472_);
lean_dec(v___x_472_);
lean_dec(v___x_470_);
v___x_474_ = l_Std_Time_Duration_ofNanoseconds(v___x_473_);
lean_dec(v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object* v_t_475_, lean_object* v_s_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Std_Time_Duration_subMilliseconds(v_t_475_, v_s_476_);
lean_dec(v_s_476_);
lean_dec_ref(v_t_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object* v_t_478_, lean_object* v_s_479_){
_start:
{
lean_object* v___x_480_; lean_object* v_second_481_; lean_object* v_nano_482_; lean_object* v_second_483_; lean_object* v_nano_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_480_ = l_Std_Time_Duration_ofNanoseconds(v_s_479_);
v_second_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_second_481_);
v_nano_482_ = lean_ctor_get(v___x_480_, 1);
lean_inc(v_nano_482_);
lean_dec_ref(v___x_480_);
v_second_483_ = lean_ctor_get(v_t_478_, 0);
v_nano_484_ = lean_ctor_get(v_t_478_, 1);
v___x_485_ = lean_int_neg(v_second_481_);
lean_dec(v_second_481_);
v___x_486_ = lean_int_neg(v_nano_482_);
lean_dec(v_nano_482_);
v___x_487_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_488_ = lean_int_mul(v_second_483_, v___x_487_);
v___x_489_ = lean_int_add(v___x_488_, v_nano_484_);
lean_dec(v___x_488_);
v___x_490_ = lean_int_mul(v___x_485_, v___x_487_);
lean_dec(v___x_485_);
v___x_491_ = lean_int_add(v___x_490_, v___x_486_);
lean_dec(v___x_486_);
lean_dec(v___x_490_);
v___x_492_ = lean_int_add(v___x_489_, v___x_491_);
lean_dec(v___x_491_);
lean_dec(v___x_489_);
v___x_493_ = l_Std_Time_Duration_ofNanoseconds(v___x_492_);
lean_dec(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object* v_t_494_, lean_object* v_s_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Std_Time_Duration_subNanoseconds(v_t_494_, v_s_495_);
lean_dec(v_s_495_);
lean_dec_ref(v_t_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object* v_t_497_, lean_object* v_s_498_){
_start:
{
lean_object* v_second_499_; lean_object* v_nano_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_second_499_ = lean_ctor_get(v_t_497_, 0);
v_nano_500_ = lean_ctor_get(v_t_497_, 1);
v___x_501_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_502_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_503_ = lean_int_mul(v_second_499_, v___x_502_);
v___x_504_ = lean_int_add(v___x_503_, v_nano_500_);
lean_dec(v___x_503_);
v___x_505_ = lean_int_mul(v_s_498_, v___x_502_);
v___x_506_ = lean_int_add(v___x_505_, v___x_501_);
lean_dec(v___x_505_);
v___x_507_ = lean_int_add(v___x_504_, v___x_506_);
lean_dec(v___x_506_);
lean_dec(v___x_504_);
v___x_508_ = l_Std_Time_Duration_ofNanoseconds(v___x_507_);
lean_dec(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object* v_t_509_, lean_object* v_s_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Std_Time_Duration_addSeconds(v_t_509_, v_s_510_);
lean_dec(v_s_510_);
lean_dec_ref(v_t_509_);
return v_res_511_;
}
}
static lean_object* _init_l_Std_Time_Duration_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_513_ = lean_int_neg(v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object* v_t_514_, lean_object* v_s_515_){
_start:
{
lean_object* v_second_516_; lean_object* v_nano_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_second_516_ = lean_ctor_get(v_t_514_, 0);
v_nano_517_ = lean_ctor_get(v_t_514_, 1);
v___x_518_ = lean_int_neg(v_s_515_);
v___x_519_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_520_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_521_ = lean_int_mul(v_second_516_, v___x_520_);
v___x_522_ = lean_int_add(v___x_521_, v_nano_517_);
lean_dec(v___x_521_);
v___x_523_ = lean_int_mul(v___x_518_, v___x_520_);
lean_dec(v___x_518_);
v___x_524_ = lean_int_add(v___x_523_, v___x_519_);
lean_dec(v___x_523_);
v___x_525_ = lean_int_add(v___x_522_, v___x_524_);
lean_dec(v___x_524_);
lean_dec(v___x_522_);
v___x_526_ = l_Std_Time_Duration_ofNanoseconds(v___x_525_);
lean_dec(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object* v_t_527_, lean_object* v_s_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_Time_Duration_subSeconds(v_t_527_, v_s_528_);
lean_dec(v_s_528_);
lean_dec_ref(v_t_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object* v_t_530_, lean_object* v_m_531_){
_start:
{
lean_object* v_second_532_; lean_object* v_nano_533_; lean_object* v___x_534_; lean_object* v_seconds_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_second_532_ = lean_ctor_get(v_t_530_, 0);
v_nano_533_ = lean_ctor_get(v_t_530_, 1);
v___x_534_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_535_ = lean_int_mul(v_m_531_, v___x_534_);
v___x_536_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_537_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_538_ = lean_int_mul(v_second_532_, v___x_537_);
v___x_539_ = lean_int_add(v___x_538_, v_nano_533_);
lean_dec(v___x_538_);
v___x_540_ = lean_int_mul(v_seconds_535_, v___x_537_);
lean_dec(v_seconds_535_);
v___x_541_ = lean_int_add(v___x_540_, v___x_536_);
lean_dec(v___x_540_);
v___x_542_ = lean_int_add(v___x_539_, v___x_541_);
lean_dec(v___x_541_);
lean_dec(v___x_539_);
v___x_543_ = l_Std_Time_Duration_ofNanoseconds(v___x_542_);
lean_dec(v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object* v_t_544_, lean_object* v_m_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Std_Time_Duration_addMinutes(v_t_544_, v_m_545_);
lean_dec(v_m_545_);
lean_dec_ref(v_t_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object* v_t_547_, lean_object* v_m_548_){
_start:
{
lean_object* v_second_549_; lean_object* v_nano_550_; lean_object* v___x_551_; lean_object* v_seconds_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_second_549_ = lean_ctor_get(v_t_547_, 0);
v_nano_550_ = lean_ctor_get(v_t_547_, 1);
v___x_551_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_552_ = lean_int_mul(v_m_548_, v___x_551_);
v___x_553_ = lean_int_neg(v_seconds_552_);
lean_dec(v_seconds_552_);
v___x_554_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_555_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_556_ = lean_int_mul(v_second_549_, v___x_555_);
v___x_557_ = lean_int_add(v___x_556_, v_nano_550_);
lean_dec(v___x_556_);
v___x_558_ = lean_int_mul(v___x_553_, v___x_555_);
lean_dec(v___x_553_);
v___x_559_ = lean_int_add(v___x_558_, v___x_554_);
lean_dec(v___x_558_);
v___x_560_ = lean_int_add(v___x_557_, v___x_559_);
lean_dec(v___x_559_);
lean_dec(v___x_557_);
v___x_561_ = l_Std_Time_Duration_ofNanoseconds(v___x_560_);
lean_dec(v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object* v_t_562_, lean_object* v_m_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Std_Time_Duration_subMinutes(v_t_562_, v_m_563_);
lean_dec(v_m_563_);
lean_dec_ref(v_t_562_);
return v_res_564_;
}
}
static lean_object* _init_l_Std_Time_Duration_addHours___closed__0(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(3600u);
v___x_566_ = lean_nat_to_int(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object* v_t_567_, lean_object* v_h_568_){
_start:
{
lean_object* v_second_569_; lean_object* v_nano_570_; lean_object* v___x_571_; lean_object* v_seconds_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_second_569_ = lean_ctor_get(v_t_567_, 0);
v_nano_570_ = lean_ctor_get(v_t_567_, 1);
v___x_571_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_572_ = lean_int_mul(v_h_568_, v___x_571_);
v___x_573_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_574_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_575_ = lean_int_mul(v_second_569_, v___x_574_);
v___x_576_ = lean_int_add(v___x_575_, v_nano_570_);
lean_dec(v___x_575_);
v___x_577_ = lean_int_mul(v_seconds_572_, v___x_574_);
lean_dec(v_seconds_572_);
v___x_578_ = lean_int_add(v___x_577_, v___x_573_);
lean_dec(v___x_577_);
v___x_579_ = lean_int_add(v___x_576_, v___x_578_);
lean_dec(v___x_578_);
lean_dec(v___x_576_);
v___x_580_ = l_Std_Time_Duration_ofNanoseconds(v___x_579_);
lean_dec(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object* v_t_581_, lean_object* v_h_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Std_Time_Duration_addHours(v_t_581_, v_h_582_);
lean_dec(v_h_582_);
lean_dec_ref(v_t_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object* v_t_584_, lean_object* v_h_585_){
_start:
{
lean_object* v_second_586_; lean_object* v_nano_587_; lean_object* v___x_588_; lean_object* v_seconds_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_second_586_ = lean_ctor_get(v_t_584_, 0);
v_nano_587_ = lean_ctor_get(v_t_584_, 1);
v___x_588_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_589_ = lean_int_mul(v_h_585_, v___x_588_);
v___x_590_ = lean_int_neg(v_seconds_589_);
lean_dec(v_seconds_589_);
v___x_591_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_592_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_593_ = lean_int_mul(v_second_586_, v___x_592_);
v___x_594_ = lean_int_add(v___x_593_, v_nano_587_);
lean_dec(v___x_593_);
v___x_595_ = lean_int_mul(v___x_590_, v___x_592_);
lean_dec(v___x_590_);
v___x_596_ = lean_int_add(v___x_595_, v___x_591_);
lean_dec(v___x_595_);
v___x_597_ = lean_int_add(v___x_594_, v___x_596_);
lean_dec(v___x_596_);
lean_dec(v___x_594_);
v___x_598_ = l_Std_Time_Duration_ofNanoseconds(v___x_597_);
lean_dec(v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object* v_t_599_, lean_object* v_h_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Std_Time_Duration_subHours(v_t_599_, v_h_600_);
lean_dec(v_h_600_);
lean_dec_ref(v_t_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object* v_t_602_, lean_object* v_d_603_){
_start:
{
lean_object* v_second_604_; lean_object* v_nano_605_; lean_object* v___x_606_; lean_object* v_seconds_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v_second_604_ = lean_ctor_get(v_t_602_, 0);
v_nano_605_ = lean_ctor_get(v_t_602_, 1);
v___x_606_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_607_ = lean_int_mul(v_d_603_, v___x_606_);
v___x_608_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_609_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_610_ = lean_int_mul(v_second_604_, v___x_609_);
v___x_611_ = lean_int_add(v___x_610_, v_nano_605_);
lean_dec(v___x_610_);
v___x_612_ = lean_int_mul(v_seconds_607_, v___x_609_);
lean_dec(v_seconds_607_);
v___x_613_ = lean_int_add(v___x_612_, v___x_608_);
lean_dec(v___x_612_);
v___x_614_ = lean_int_add(v___x_611_, v___x_613_);
lean_dec(v___x_613_);
lean_dec(v___x_611_);
v___x_615_ = l_Std_Time_Duration_ofNanoseconds(v___x_614_);
lean_dec(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object* v_t_616_, lean_object* v_d_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Std_Time_Duration_addDays(v_t_616_, v_d_617_);
lean_dec(v_d_617_);
lean_dec_ref(v_t_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object* v_t_619_, lean_object* v_d_620_){
_start:
{
lean_object* v_second_621_; lean_object* v_nano_622_; lean_object* v___x_623_; lean_object* v_seconds_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_second_621_ = lean_ctor_get(v_t_619_, 0);
v_nano_622_ = lean_ctor_get(v_t_619_, 1);
v___x_623_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_624_ = lean_int_mul(v_d_620_, v___x_623_);
v___x_625_ = lean_int_neg(v_seconds_624_);
lean_dec(v_seconds_624_);
v___x_626_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_627_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_628_ = lean_int_mul(v_second_621_, v___x_627_);
v___x_629_ = lean_int_add(v___x_628_, v_nano_622_);
lean_dec(v___x_628_);
v___x_630_ = lean_int_mul(v___x_625_, v___x_627_);
lean_dec(v___x_625_);
v___x_631_ = lean_int_add(v___x_630_, v___x_626_);
lean_dec(v___x_630_);
v___x_632_ = lean_int_add(v___x_629_, v___x_631_);
lean_dec(v___x_631_);
lean_dec(v___x_629_);
v___x_633_ = l_Std_Time_Duration_ofNanoseconds(v___x_632_);
lean_dec(v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object* v_t_634_, lean_object* v_d_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_Time_Duration_subDays(v_t_634_, v_d_635_);
lean_dec(v_d_635_);
lean_dec_ref(v_t_634_);
return v_res_636_;
}
}
static lean_object* _init_l_Std_Time_Duration_addWeeks___closed__0(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(604800u);
v___x_638_ = lean_nat_to_int(v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object* v_t_639_, lean_object* v_w_640_){
_start:
{
lean_object* v_second_641_; lean_object* v_nano_642_; lean_object* v___x_643_; lean_object* v_seconds_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_second_641_ = lean_ctor_get(v_t_639_, 0);
v_nano_642_ = lean_ctor_get(v_t_639_, 1);
v___x_643_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_644_ = lean_int_mul(v_w_640_, v___x_643_);
v___x_645_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__22, &l_Std_Time_instReprDuration_repr___redArg___closed__22_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__22);
v___x_646_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_647_ = lean_int_mul(v_second_641_, v___x_646_);
v___x_648_ = lean_int_add(v___x_647_, v_nano_642_);
lean_dec(v___x_647_);
v___x_649_ = lean_int_mul(v_seconds_644_, v___x_646_);
lean_dec(v_seconds_644_);
v___x_650_ = lean_int_add(v___x_649_, v___x_645_);
lean_dec(v___x_649_);
v___x_651_ = lean_int_add(v___x_648_, v___x_650_);
lean_dec(v___x_650_);
lean_dec(v___x_648_);
v___x_652_ = l_Std_Time_Duration_ofNanoseconds(v___x_651_);
lean_dec(v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object* v_t_653_, lean_object* v_w_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Std_Time_Duration_addWeeks(v_t_653_, v_w_654_);
lean_dec(v_w_654_);
lean_dec_ref(v_t_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object* v_t_656_, lean_object* v_w_657_){
_start:
{
lean_object* v_second_658_; lean_object* v_nano_659_; lean_object* v___x_660_; lean_object* v_seconds_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_second_658_ = lean_ctor_get(v_t_656_, 0);
v_nano_659_ = lean_ctor_get(v_t_656_, 1);
v___x_660_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_661_ = lean_int_mul(v_w_657_, v___x_660_);
v___x_662_ = lean_int_neg(v_seconds_661_);
lean_dec(v_seconds_661_);
v___x_663_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_664_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_665_ = lean_int_mul(v_second_658_, v___x_664_);
v___x_666_ = lean_int_add(v___x_665_, v_nano_659_);
lean_dec(v___x_665_);
v___x_667_ = lean_int_mul(v___x_662_, v___x_664_);
lean_dec(v___x_662_);
v___x_668_ = lean_int_add(v___x_667_, v___x_663_);
lean_dec(v___x_667_);
v___x_669_ = lean_int_add(v___x_666_, v___x_668_);
lean_dec(v___x_668_);
lean_dec(v___x_666_);
v___x_670_ = l_Std_Time_Duration_ofNanoseconds(v___x_669_);
lean_dec(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object* v_t_671_, lean_object* v_w_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Std_Time_Duration_subWeeks(v_t_671_, v_w_672_);
lean_dec(v_w_672_);
lean_dec_ref(v_t_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object* v_i_733_, lean_object* v_d_734_){
_start:
{
lean_object* v_second_735_; lean_object* v_nano_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_second_735_ = lean_ctor_get(v_d_734_, 0);
v_nano_736_ = lean_ctor_get(v_d_734_, 1);
v___x_737_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_738_ = lean_int_mul(v_second_735_, v___x_737_);
v___x_739_ = lean_int_add(v___x_738_, v_nano_736_);
lean_dec(v___x_738_);
v___x_740_ = lean_int_mul(v___x_739_, v_i_733_);
lean_dec(v___x_739_);
v___x_741_ = l_Std_Time_Duration_ofNanoseconds(v___x_740_);
lean_dec(v___x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object* v_i_742_, lean_object* v_d_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Std_Time_Duration_instHMulInt___lam__0(v_i_742_, v_d_743_);
lean_dec_ref(v_d_743_);
lean_dec(v_i_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object* v_d_747_, lean_object* v_i_748_){
_start:
{
lean_object* v_second_749_; lean_object* v_nano_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_second_749_ = lean_ctor_get(v_d_747_, 0);
v_nano_750_ = lean_ctor_get(v_d_747_, 1);
v___x_751_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_752_ = lean_int_mul(v_second_749_, v___x_751_);
v___x_753_ = lean_int_add(v___x_752_, v_nano_750_);
lean_dec(v___x_752_);
v___x_754_ = lean_int_mul(v___x_753_, v_i_748_);
lean_dec(v___x_753_);
v___x_755_ = l_Std_Time_Duration_ofNanoseconds(v___x_754_);
lean_dec(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object* v_d_756_, lean_object* v_i_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Std_Time_Duration_instHMulInt__1___lam__0(v_d_756_, v_i_757_);
lean_dec(v_i_757_);
lean_dec_ref(v_d_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object* v_pt_761_, lean_object* v_d_762_){
_start:
{
lean_object* v_second_763_; lean_object* v_nano_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_second_763_ = lean_ctor_get(v_d_762_, 0);
v_nano_764_ = lean_ctor_get(v_d_762_, 1);
v___x_765_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_766_ = lean_int_mul(v_second_763_, v___x_765_);
v___x_767_ = lean_int_add(v___x_766_, v_nano_764_);
lean_dec(v___x_766_);
v___x_768_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_761_);
v___x_769_ = lean_int_add(v___x_767_, v___x_768_);
lean_dec(v___x_768_);
lean_dec(v___x_767_);
v___x_770_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_769_);
lean_dec(v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object* v_pt_771_, lean_object* v_d_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Std_Time_Duration_instHAddPlainTime___lam__0(v_pt_771_, v_d_772_);
lean_dec_ref(v_d_772_);
lean_dec_ref(v_pt_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object* v_pt_776_, lean_object* v_d_777_){
_start:
{
lean_object* v_second_778_; lean_object* v_nano_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_second_778_ = lean_ctor_get(v_d_777_, 0);
v_nano_779_ = lean_ctor_get(v_d_777_, 1);
v___x_780_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_776_);
v___x_781_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_782_ = lean_int_mul(v_second_778_, v___x_781_);
v___x_783_ = lean_int_add(v___x_782_, v_nano_779_);
lean_dec(v___x_782_);
v___x_784_ = lean_int_sub(v___x_780_, v___x_783_);
lean_dec(v___x_783_);
lean_dec(v___x_780_);
v___x_785_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_784_);
lean_dec(v___x_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object* v_pt_786_, lean_object* v_d_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Std_Time_Duration_instHSubPlainTime___lam__0(v_pt_786_, v_d_787_);
lean_dec_ref(v_d_787_);
lean_dec_ref(v_pt_786_);
return v_res_788_;
}
}
lean_object* runtime_initialize_Std_Time_Date(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedDuration = _init_l_Std_Time_instInhabitedDuration();
lean_mark_persistent(l_Std_Time_instInhabitedDuration);
l_Std_Time_instOrdDuration = _init_l_Std_Time_instOrdDuration();
lean_mark_persistent(l_Std_Time_instOrdDuration);
l_Std_Time_Duration_instLE = _init_l_Std_Time_Duration_instLE();
lean_mark_persistent(l_Std_Time_Duration_instLE);
l_Std_Time_Duration_instLT = _init_l_Std_Time_Duration_instLT();
lean_mark_persistent(l_Std_Time_Duration_instLT);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Duration(builtin);
}
#ifdef __cplusplus
}
#endif
