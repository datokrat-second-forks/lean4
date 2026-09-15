// Lean compiler output
// Module: Std.Time.Zoned.RecurringRule
// Imports: public import Std.Time.Date.Unit.Month public import Std.Time.Date.Unit.Week public import Std.Time.Date.Unit.Weekday public import Std.Time.Zoned.TimeZone public import Std.Time.Date
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
extern lean_object* l_Std_Time_Month_instReprOrdinal;
extern lean_object* l_Std_Time_Week_Aligned_instReprOrdinal;
extern lean_object* l_Std_Time_Weekday_instReprOrdinal;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
extern lean_object* l_Std_Time_Month_Ordinal_equiv;
extern lean_object* l_Std_Time_Day_Ordinal_equiv;
lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_Std_Time_PlainDate_weekday(lean_object*);
lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_mwd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_mwd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian0_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian0_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Time.TimeZone.TransitionSpec.mwd"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__2_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Std.Time.TimeZone.TransitionSpec.julian"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__6_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__7 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__7_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Std.Time.TimeZone.TransitionSpec.julian0"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__9_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__9_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprTransitionSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprTransitionSpec_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprTransitionSpec = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionSpec___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TransitionSpec_toEpochDayMWD_spec__1(lean_object*);
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TransitionSpec_toEpochDayMWD_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7;
static lean_once_cell_t l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDay(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spec"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "time"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprTransitionRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprTransitionRule_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprTransitionRule___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprTransitionRule = (const lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule___closed__0_value;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "offset"};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6;
static const lean_string_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__7 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__8_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9;
static const lean_string_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "end_"};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprDaylightSavingRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule = (const lean_object*)&l_Std_Time_TimeZone_instReprDaylightSavingRule___closed__0_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "stdName"};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "stdOffset"};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6;
static const lean_string_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dst"};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__7 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprRecurringRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprRecurringRule_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprRecurringRule___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprRecurringRule = (const lean_object*)&l_Std_Time_TimeZone_instReprRecurringRule___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_TimeZone_TransitionSpec_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 0)
{
lean_object* v_month_9_; lean_object* v_week_10_; lean_object* v_day_11_; lean_object* v___x_12_; 
v_month_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_month_9_);
v_week_10_ = lean_ctor_get(v_t_7_, 1);
lean_inc(v_week_10_);
v_day_11_ = lean_ctor_get(v_t_7_, 2);
lean_inc(v_day_11_);
lean_dec_ref_known(v_t_7_, 3);
v___x_12_ = lean_apply_3(v_k_8_, v_month_9_, v_week_10_, v_day_11_);
return v___x_12_;
}
else
{
lean_object* v_day_13_; lean_object* v___x_14_; 
v_day_13_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_day_13_);
lean_dec_ref(v_t_7_);
v___x_14_ = lean_apply_1(v_k_8_, v_day_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_mwd_elim___redArg(lean_object* v_t_27_, lean_object* v_mwd_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_27_, v_mwd_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_mwd_elim(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_mwd_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_31_, v_mwd_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian_elim___redArg(lean_object* v_t_35_, lean_object* v_julian_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_35_, v_julian_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian_elim(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_julian_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_39_, v_julian_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian0_elim___redArg(lean_object* v_t_43_, lean_object* v_julian0_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_43_, v_julian0_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_julian0_elim(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_julian0_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Std_Time_TimeZone_TransitionSpec_ctorElim___redArg(v_t_47_, v_julian0_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(2u);
v___x_58_ = lean_nat_to_int(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = lean_nat_to_int(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr(lean_object* v_x_75_, lean_object* v_prec_76_){
_start:
{
lean_object* v___y_78_; lean_object* v___y_79_; lean_object* v___y_80_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; 
switch(lean_obj_tag(v_x_75_))
{
case 0:
{
lean_object* v_month_95_; lean_object* v_week_96_; lean_object* v_day_97_; lean_object* v___y_99_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_month_95_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_month_95_);
v_week_96_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_week_96_);
v_day_97_ = lean_ctor_get(v_x_75_, 2);
lean_inc(v_day_97_);
lean_dec_ref_known(v_x_75_, 3);
v___x_118_ = lean_unsigned_to_nat(1024u);
v___x_119_ = lean_nat_dec_le(v___x_118_, v_prec_76_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
v___x_120_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3);
v___y_99_ = v___x_120_;
goto v___jp_98_;
}
else
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___y_99_ = v___x_121_;
goto v___jp_98_;
}
v___jp_98_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_316__overap_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_321__overap_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_326__overap_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_100_ = lean_box(1);
v___x_101_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__2));
v___x_102_ = lean_unsigned_to_nat(1024u);
v___x_316__overap_103_ = l_Std_Time_Month_instReprOrdinal;
v___x_104_ = lean_apply_2(v___x_316__overap_103_, v_month_95_, v___x_102_);
v___x_105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_101_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_100_);
v___x_321__overap_107_ = l_Std_Time_Week_Aligned_instReprOrdinal;
v___x_108_ = lean_apply_2(v___x_321__overap_107_, v_week_96_, v___x_102_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_106_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_100_);
v___x_326__overap_111_ = l_Std_Time_Weekday_instReprOrdinal;
v___x_112_ = lean_apply_2(v___x_326__overap_111_, v_day_97_, v___x_102_);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_110_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
lean_inc(v___y_99_);
v___x_114_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_114_, 0, v___y_99_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = 0;
v___x_116_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*1, v___x_115_);
v___x_117_ = l_Repr_addAppParen(v___x_116_, v_prec_76_);
return v___x_117_;
}
}
case 1:
{
lean_object* v_day_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_145_; 
v_day_122_ = lean_ctor_get(v_x_75_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_145_ == 0)
{
v___x_124_ = v_x_75_;
v_isShared_125_ = v_isSharedCheck_145_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_day_122_);
lean_dec(v_x_75_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_145_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___y_127_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1024u);
v___x_142_ = lean_nat_dec_le(v___x_141_, v_prec_76_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3);
v___y_127_ = v___x_143_;
goto v___jp_126_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___y_127_ = v___x_144_;
goto v___jp_126_;
}
v___jp_126_:
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_128_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__7));
v___x_129_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_130_ = lean_int_dec_lt(v_day_122_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_131_ = l_Int_repr(v_day_122_);
lean_dec(v_day_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set_tag(v___x_124_, 3);
lean_ctor_set(v___x_124_, 0, v___x_131_);
v___x_133_ = v___x_124_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_131_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
v___y_87_ = v___y_127_;
v___y_88_ = v___x_128_;
v___y_89_ = v___x_133_;
goto v___jp_86_;
}
}
else
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Int_repr(v_day_122_);
lean_dec(v_day_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set_tag(v___x_124_, 3);
lean_ctor_set(v___x_124_, 0, v___x_136_);
v___x_138_ = v___x_124_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_140_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; 
v___x_139_ = l_Repr_addAppParen(v___x_138_, v___x_135_);
v___y_87_ = v___y_127_;
v___y_88_ = v___x_128_;
v___y_89_ = v___x_139_;
goto v___jp_86_;
}
}
}
}
}
default: 
{
lean_object* v_day_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_169_; 
v_day_146_ = lean_ctor_get(v_x_75_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_169_ == 0)
{
v___x_148_ = v_x_75_;
v_isShared_149_ = v_isSharedCheck_169_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_day_146_);
lean_dec(v_x_75_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_169_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___y_151_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1024u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v_prec_76_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__3);
v___y_151_ = v___x_167_;
goto v___jp_150_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___y_151_ = v___x_168_;
goto v___jp_150_;
}
v___jp_150_:
{
lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_152_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__11));
v___x_153_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_154_ = lean_int_dec_lt(v_day_146_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_155_ = l_Int_repr(v_day_146_);
lean_dec(v_day_146_);
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 3);
lean_ctor_set(v___x_148_, 0, v___x_155_);
v___x_157_ = v___x_148_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
v___y_78_ = v___y_151_;
v___y_79_ = v___x_152_;
v___y_80_ = v___x_157_;
goto v___jp_77_;
}
}
else
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = lean_unsigned_to_nat(1024u);
v___x_160_ = l_Int_repr(v_day_146_);
lean_dec(v_day_146_);
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 3);
lean_ctor_set(v___x_148_, 0, v___x_160_);
v___x_162_ = v___x_148_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_164_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; 
v___x_163_ = l_Repr_addAppParen(v___x_162_, v___x_159_);
v___y_78_ = v___y_151_;
v___y_79_ = v___x_152_;
v___y_80_ = v___x_163_;
goto v___jp_77_;
}
}
}
}
}
}
v___jp_77_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
lean_inc(v___y_79_);
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___y_79_);
lean_ctor_set(v___x_81_, 1, v___y_80_);
lean_inc(v___y_78_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_78_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_76_);
return v___x_85_;
}
v___jp_86_:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
lean_inc(v___y_88_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___y_88_);
lean_ctor_set(v___x_90_, 1, v___y_89_);
lean_inc(v___y_87_);
v___x_91_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_91_, 0, v___y_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = 0;
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_91_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_92_);
v___x_94_ = l_Repr_addAppParen(v___x_93_, v_prec_76_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionSpec_repr___boxed(lean_object* v_x_170_, lean_object* v_prec_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Std_Time_TimeZone_instReprTransitionSpec_repr(v_x_170_, v_prec_171_);
lean_dec(v_prec_171_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TransitionSpec_toEpochDayMWD_spec__1(lean_object* v_a_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_nat_to_int(v_a_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_unsigned_to_nat(7u);
v___x_178_ = lean_nat_to_int(v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_unsigned_to_nat(5u);
v___x_180_ = lean_nat_to_int(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_182_ = lean_int_neg(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(30u);
v___x_184_ = lean_nat_to_int(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__3);
v___x_186_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_187_ = lean_int_add(v___x_186_, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_189_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__4);
v___x_190_ = lean_int_sub(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_range_193_; 
v___x_191_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_192_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__5);
v_range_193_ = lean_int_add(v___x_192_, v___x_191_);
return v_range_193_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_195_ = lean_int_sub(v___x_194_, v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8(void){
_start:
{
lean_object* v_range_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_range_196_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6);
v___x_197_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7);
v___x_198_ = lean_int_emod(v___x_197_, v_range_196_);
return v___x_198_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9(void){
_start:
{
lean_object* v_range_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_range_199_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6);
v___x_200_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__8);
v___x_201_ = lean_int_add(v___x_200_, v_range_199_);
return v___x_201_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10(void){
_start:
{
lean_object* v_range_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_range_202_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__6);
v___x_203_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__9);
v___x_204_ = lean_int_emod(v___x_203_, v_range_202_);
return v___x_204_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_206_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__10);
v___x_207_ = lean_int_add(v___x_206_, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = lean_nat_to_int(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(100u);
v___x_211_ = lean_nat_to_int(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(400u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD(lean_object* v_year_214_, lean_object* v_month_215_, lean_object* v_week_216_, lean_object* v_day_217_){
_start:
{
uint8_t v___y_219_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__1);
v___x_231_ = lean_int_dec_eq(v_week_216_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v_toFun_233_; lean_object* v___y_235_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___y_251_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; uint8_t v___y_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_232_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_233_ = lean_ctor_get(v___x_232_, 0);
v___x_248_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11);
lean_inc(v_toFun_233_);
v___x_249_ = lean_apply_1(v_toFun_233_, v___x_248_);
v___x_256_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12);
v___x_257_ = lean_int_mod(v_year_214_, v___x_256_);
v___x_258_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_259_ = lean_int_dec_eq(v___x_257_, v___x_258_);
lean_dec(v___x_257_);
v___x_262_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13);
v___x_263_ = lean_int_mod(v_year_214_, v___x_262_);
v___x_264_ = lean_int_dec_eq(v___x_263_, v___x_258_);
lean_dec(v___x_263_);
if (v___x_264_ == 0)
{
uint8_t v___x_265_; 
v___x_265_ = 1;
v___y_261_ = v___x_265_;
goto v___jp_260_;
}
else
{
if (v___x_231_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_266_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14);
v___x_267_ = lean_int_mod(v_year_214_, v___x_266_);
v___x_268_ = lean_int_dec_eq(v___x_267_, v___x_258_);
lean_dec(v___x_267_);
v___y_261_ = v___x_268_;
goto v___jp_260_;
}
else
{
v___y_261_ = v___x_231_;
goto v___jp_260_;
}
}
v___jp_234_:
{
uint8_t v___x_236_; lean_object* v_firstWday_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
lean_inc_ref(v___y_235_);
v___x_236_ = l_Std_Time_PlainDate_weekday(v___y_235_);
v_firstWday_237_ = l_Std_Time_Weekday_toOrdinal(v___x_236_);
v___x_238_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0);
v___x_239_ = lean_int_neg(v_firstWday_237_);
lean_dec(v_firstWday_237_);
v___x_240_ = lean_int_add(v_day_217_, v___x_239_);
lean_dec(v___x_239_);
v___x_241_ = lean_int_emod(v___x_240_, v___x_238_);
lean_dec(v___x_240_);
v___x_242_ = l_Std_Time_PlainDate_toEpochDay(v___y_235_);
v___x_243_ = lean_int_add(v___x_242_, v___x_241_);
lean_dec(v___x_241_);
lean_dec(v___x_242_);
v___x_244_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__2);
v___x_245_ = lean_int_add(v_week_216_, v___x_244_);
v___x_246_ = lean_int_mul(v___x_245_, v___x_238_);
lean_dec(v___x_245_);
v___x_247_ = lean_int_add(v___x_243_, v___x_246_);
lean_dec(v___x_246_);
lean_dec(v___x_243_);
return v___x_247_;
}
v___jp_250_:
{
lean_object* v_max_252_; uint8_t v___x_253_; 
v_max_252_ = l_Std_Time_Month_Ordinal_days(v___y_251_, v_month_215_);
v___x_253_ = lean_int_dec_lt(v_max_252_, v___x_249_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_dec(v_max_252_);
v___x_254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_254_, 0, v_year_214_);
lean_ctor_set(v___x_254_, 1, v_month_215_);
lean_ctor_set(v___x_254_, 2, v___x_249_);
v___y_235_ = v___x_254_;
goto v___jp_234_;
}
else
{
lean_object* v___x_255_; 
lean_dec(v___x_249_);
v___x_255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_255_, 0, v_year_214_);
lean_ctor_set(v___x_255_, 1, v_month_215_);
lean_ctor_set(v___x_255_, 2, v_max_252_);
v___y_235_ = v___x_255_;
goto v___jp_234_;
}
}
v___jp_260_:
{
if (v___x_259_ == 0)
{
v___y_251_ = v___x_259_;
goto v___jp_250_;
}
else
{
v___y_251_ = v___y_261_;
goto v___jp_250_;
}
}
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; uint8_t v___y_274_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_269_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12);
v___x_270_ = lean_int_mod(v_year_214_, v___x_269_);
v___x_271_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_272_ = lean_int_dec_eq(v___x_270_, v___x_271_);
lean_dec(v___x_270_);
v___x_279_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13);
v___x_280_ = lean_int_mod(v_year_214_, v___x_279_);
v___x_281_ = lean_int_dec_eq(v___x_280_, v___x_271_);
lean_dec(v___x_280_);
if (v___x_281_ == 0)
{
if (v___x_231_ == 0)
{
goto v___jp_275_;
}
else
{
v___y_274_ = v___x_231_;
goto v___jp_273_;
}
}
else
{
goto v___jp_275_;
}
v___jp_273_:
{
if (v___x_272_ == 0)
{
v___y_219_ = v___x_272_;
goto v___jp_218_;
}
else
{
v___y_219_ = v___y_274_;
goto v___jp_218_;
}
}
v___jp_275_:
{
lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_276_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14);
v___x_277_ = lean_int_mod(v_year_214_, v___x_276_);
v___x_278_ = lean_int_dec_eq(v___x_277_, v___x_271_);
lean_dec(v___x_277_);
v___y_274_ = v___x_278_;
goto v___jp_273_;
}
}
v___jp_218_:
{
lean_object* v_lastDay_220_; lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v_lastWday_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_lastDay_220_ = l_Std_Time_Month_Ordinal_days(v___y_219_, v_month_215_);
v___x_221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_221_, 0, v_year_214_);
lean_ctor_set(v___x_221_, 1, v_month_215_);
lean_ctor_set(v___x_221_, 2, v_lastDay_220_);
lean_inc_ref(v___x_221_);
v___x_222_ = l_Std_Time_PlainDate_weekday(v___x_221_);
v_lastWday_223_ = l_Std_Time_Weekday_toOrdinal(v___x_222_);
v___x_224_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0);
v___x_225_ = lean_int_neg(v_day_217_);
v___x_226_ = lean_int_add(v_lastWday_223_, v___x_225_);
lean_dec(v___x_225_);
lean_dec(v_lastWday_223_);
v___x_227_ = lean_int_emod(v___x_226_, v___x_224_);
lean_dec(v___x_226_);
v___x_228_ = l_Std_Time_PlainDate_toEpochDay(v___x_221_);
v___x_229_ = lean_int_sub(v___x_228_, v___x_227_);
lean_dec(v___x_227_);
lean_dec(v___x_228_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___boxed(lean_object* v_year_282_, lean_object* v_month_283_, lean_object* v_week_284_, lean_object* v_day_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD(v_year_282_, v_month_283_, v_week_284_, v_day_285_);
lean_dec(v_day_285_);
lean_dec(v_week_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_TransitionSpec_toEpochDayMWD_spec__0(lean_object* v_a_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_nat_to_int(v_a_287_);
v___x_289_ = l_Rat_ofInt(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(60u);
v___x_291_ = lean_nat_to_int(v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(11u);
v___x_293_ = lean_nat_to_int(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1);
v___x_295_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_296_ = lean_int_add(v___x_295_, v___x_294_);
return v___x_296_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_298_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__2);
v___x_299_ = lean_int_sub(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_range_302_; 
v___x_300_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_301_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__3);
v_range_302_ = lean_int_add(v___x_301_, v___x_300_);
return v_range_302_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5(void){
_start:
{
lean_object* v_range_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_range_303_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4);
v___x_304_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__7);
v___x_305_ = lean_int_emod(v___x_304_, v_range_303_);
return v___x_305_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6(void){
_start:
{
lean_object* v_range_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_range_306_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4);
v___x_307_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__5);
v___x_308_ = lean_int_add(v___x_307_, v_range_306_);
return v___x_308_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7(void){
_start:
{
lean_object* v_range_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_range_309_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__4);
v___x_310_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__6);
v___x_311_ = lean_int_emod(v___x_310_, v_range_309_);
return v___x_311_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_313_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__7);
v___x_314_ = lean_int_add(v___x_313_, v___x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian(lean_object* v_year_315_, lean_object* v_day_316_){
_start:
{
lean_object* v___x_317_; lean_object* v_toFun_318_; lean_object* v___x_319_; lean_object* v_toFun_320_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_330_; lean_object* v___y_333_; uint8_t v___y_334_; uint8_t v___y_335_; lean_object* v___y_340_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___y_357_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; uint8_t v___y_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_317_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_318_ = lean_ctor_get(v___x_317_, 0);
v___x_319_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_320_ = lean_ctor_get(v___x_319_, 0);
v___x_352_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8);
lean_inc(v_toFun_318_);
v___x_353_ = lean_apply_1(v_toFun_318_, v___x_352_);
v___x_354_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11);
lean_inc(v_toFun_320_);
v___x_355_ = lean_apply_1(v_toFun_320_, v___x_354_);
v___x_362_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12);
v___x_363_ = lean_int_mod(v_year_315_, v___x_362_);
v___x_364_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_365_ = lean_int_dec_eq(v___x_363_, v___x_364_);
lean_dec(v___x_363_);
v___x_368_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13);
v___x_369_ = lean_int_mod(v_year_315_, v___x_368_);
v___x_370_ = lean_int_dec_eq(v___x_369_, v___x_364_);
lean_dec(v___x_369_);
if (v___x_370_ == 0)
{
uint8_t v___x_371_; 
v___x_371_ = 1;
v___y_367_ = v___x_371_;
goto v___jp_366_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_372_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14);
v___x_373_ = lean_int_mod(v_year_315_, v___x_372_);
v___x_374_ = lean_int_dec_eq(v___x_373_, v___x_364_);
lean_dec(v___x_373_);
v___y_367_ = v___x_374_;
goto v___jp_366_;
}
v___jp_321_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_324_ = l_Std_Time_PlainDate_toEpochDay(v___y_322_);
v___x_325_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___x_326_ = lean_int_sub(v_day_316_, v___x_325_);
v___x_327_ = lean_int_add(v___x_326_, v___y_323_);
lean_dec(v___x_326_);
v___x_328_ = lean_int_add(v___x_324_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_324_);
return v___x_328_;
}
v___jp_329_:
{
lean_object* v___x_331_; 
v___x_331_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___y_322_ = v___y_330_;
v___y_323_ = v___x_331_;
goto v___jp_321_;
}
v___jp_332_:
{
if (v___y_334_ == 0)
{
v___y_330_ = v___y_333_;
goto v___jp_329_;
}
else
{
if (v___y_335_ == 0)
{
v___y_330_ = v___y_333_;
goto v___jp_329_;
}
else
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__0);
v___x_337_ = lean_int_dec_le(v___x_336_, v_day_316_);
if (v___x_337_ == 0)
{
v___y_330_ = v___y_333_;
goto v___jp_329_;
}
else
{
lean_object* v___x_338_; 
v___x_338_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__4);
v___y_322_ = v___y_333_;
v___y_323_ = v___x_338_;
goto v___jp_321_;
}
}
}
}
v___jp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_341_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12);
v___x_342_ = lean_int_mod(v_year_315_, v___x_341_);
v___x_343_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_344_ = lean_int_dec_eq(v___x_342_, v___x_343_);
lean_dec(v___x_342_);
v___x_345_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13);
v___x_346_ = lean_int_mod(v_year_315_, v___x_345_);
v___x_347_ = lean_int_dec_eq(v___x_346_, v___x_343_);
lean_dec(v___x_346_);
if (v___x_347_ == 0)
{
uint8_t v___x_348_; 
lean_dec(v_year_315_);
v___x_348_ = 1;
v___y_333_ = v___y_340_;
v___y_334_ = v___x_344_;
v___y_335_ = v___x_348_;
goto v___jp_332_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_349_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14);
v___x_350_ = lean_int_mod(v_year_315_, v___x_349_);
lean_dec(v_year_315_);
v___x_351_ = lean_int_dec_eq(v___x_350_, v___x_343_);
lean_dec(v___x_350_);
v___y_333_ = v___y_340_;
v___y_334_ = v___x_344_;
v___y_335_ = v___x_351_;
goto v___jp_332_;
}
}
v___jp_356_:
{
lean_object* v_max_358_; uint8_t v___x_359_; 
v_max_358_ = l_Std_Time_Month_Ordinal_days(v___y_357_, v___x_353_);
v___x_359_ = lean_int_dec_lt(v_max_358_, v___x_355_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_max_358_);
lean_inc(v_year_315_);
v___x_360_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_360_, 0, v_year_315_);
lean_ctor_set(v___x_360_, 1, v___x_353_);
lean_ctor_set(v___x_360_, 2, v___x_355_);
v___y_340_ = v___x_360_;
goto v___jp_339_;
}
else
{
lean_object* v___x_361_; 
lean_dec(v___x_355_);
lean_inc(v_year_315_);
v___x_361_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_361_, 0, v_year_315_);
lean_ctor_set(v___x_361_, 1, v___x_353_);
lean_ctor_set(v___x_361_, 2, v_max_358_);
v___y_340_ = v___x_361_;
goto v___jp_339_;
}
}
v___jp_366_:
{
if (v___x_365_ == 0)
{
v___y_357_ = v___x_365_;
goto v___jp_356_;
}
else
{
v___y_357_ = v___y_367_;
goto v___jp_356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___boxed(lean_object* v_year_375_, lean_object* v_day_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian(v_year_375_, v_day_376_);
lean_dec(v_day_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0(lean_object* v_year_378_, lean_object* v_day_379_){
_start:
{
lean_object* v___y_381_; lean_object* v___x_384_; lean_object* v_toFun_385_; lean_object* v___x_386_; lean_object* v_toFun_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___y_393_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; uint8_t v___y_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_384_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_385_ = lean_ctor_get(v___x_384_, 0);
v___x_386_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_387_ = lean_ctor_get(v___x_386_, 0);
v___x_388_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__8);
lean_inc(v_toFun_385_);
v___x_389_ = lean_apply_1(v_toFun_385_, v___x_388_);
v___x_390_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__11);
lean_inc(v_toFun_387_);
v___x_391_ = lean_apply_1(v_toFun_387_, v___x_390_);
v___x_398_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__12);
v___x_399_ = lean_int_mod(v_year_378_, v___x_398_);
v___x_400_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_401_ = lean_int_dec_eq(v___x_399_, v___x_400_);
lean_dec(v___x_399_);
v___x_404_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__13);
v___x_405_ = lean_int_mod(v_year_378_, v___x_404_);
v___x_406_ = lean_int_dec_eq(v___x_405_, v___x_400_);
lean_dec(v___x_405_);
if (v___x_406_ == 0)
{
uint8_t v___x_407_; 
v___x_407_ = 1;
v___y_403_ = v___x_407_;
goto v___jp_402_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_408_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__14);
v___x_409_ = lean_int_mod(v_year_378_, v___x_408_);
v___x_410_ = lean_int_dec_eq(v___x_409_, v___x_400_);
lean_dec(v___x_409_);
v___y_403_ = v___x_410_;
goto v___jp_402_;
}
v___jp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = l_Std_Time_PlainDate_toEpochDay(v___y_381_);
v___x_383_ = lean_int_add(v___x_382_, v_day_379_);
lean_dec(v___x_382_);
return v___x_383_;
}
v___jp_392_:
{
lean_object* v_max_394_; uint8_t v___x_395_; 
v_max_394_ = l_Std_Time_Month_Ordinal_days(v___y_393_, v___x_389_);
v___x_395_ = lean_int_dec_lt(v_max_394_, v___x_391_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
lean_dec(v_max_394_);
v___x_396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_396_, 0, v_year_378_);
lean_ctor_set(v___x_396_, 1, v___x_389_);
lean_ctor_set(v___x_396_, 2, v___x_391_);
v___y_381_ = v___x_396_;
goto v___jp_380_;
}
else
{
lean_object* v___x_397_; 
lean_dec(v___x_391_);
v___x_397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_397_, 0, v_year_378_);
lean_ctor_set(v___x_397_, 1, v___x_389_);
lean_ctor_set(v___x_397_, 2, v_max_394_);
v___y_381_ = v___x_397_;
goto v___jp_380_;
}
}
v___jp_402_:
{
if (v___x_401_ == 0)
{
v___y_393_ = v___x_401_;
goto v___jp_392_;
}
else
{
v___y_393_ = v___y_403_;
goto v___jp_392_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0___boxed(lean_object* v_year_411_, lean_object* v_day_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0(v_year_411_, v_day_412_);
lean_dec(v_day_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDay(lean_object* v_spec_414_, lean_object* v_year_415_){
_start:
{
switch(lean_obj_tag(v_spec_414_))
{
case 0:
{
lean_object* v_month_416_; lean_object* v_week_417_; lean_object* v_day_418_; lean_object* v___x_419_; 
v_month_416_ = lean_ctor_get(v_spec_414_, 0);
lean_inc(v_month_416_);
v_week_417_ = lean_ctor_get(v_spec_414_, 1);
lean_inc(v_week_417_);
v_day_418_ = lean_ctor_get(v_spec_414_, 2);
lean_inc(v_day_418_);
lean_dec_ref_known(v_spec_414_, 3);
v___x_419_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD(v_year_415_, v_month_416_, v_week_417_, v_day_418_);
lean_dec(v_day_418_);
lean_dec(v_week_417_);
return v___x_419_;
}
case 1:
{
lean_object* v_day_420_; lean_object* v___x_421_; 
v_day_420_ = lean_ctor_get(v_spec_414_, 0);
lean_inc(v_day_420_);
lean_dec_ref_known(v_spec_414_, 1);
v___x_421_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian(v_year_415_, v_day_420_);
lean_dec(v_day_420_);
return v___x_421_;
}
default: 
{
lean_object* v_day_422_; lean_object* v___x_423_; 
v_day_422_ = lean_ctor_get(v_spec_414_, 0);
lean_inc(v_day_422_);
lean_dec_ref_known(v_spec_414_, 1);
v___x_423_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian0(v_year_415_, v_day_422_);
lean_dec(v_day_422_);
return v___x_423_;
}
}
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_unsigned_to_nat(8u);
v___x_438_ = lean_nat_to_int(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__0));
v___x_447_ = lean_string_length(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__13);
v___x_449_ = lean_nat_to_int(v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg(lean_object* v_x_454_){
_start:
{
lean_object* v_spec_455_; lean_object* v_time_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_497_; 
v_spec_455_ = lean_ctor_get(v_x_454_, 0);
v_time_456_ = lean_ctor_get(v_x_454_, 1);
v_isSharedCheck_497_ = !lean_is_exclusive(v_x_454_);
if (v_isSharedCheck_497_ == 0)
{
v___x_458_ = v_x_454_;
v_isShared_459_ = v_isSharedCheck_497_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_time_456_);
lean_inc(v_spec_455_);
lean_dec(v_x_454_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_497_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_460_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5));
v___x_461_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__6));
v___x_462_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7);
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = l_Std_Time_TimeZone_instReprTransitionSpec_repr(v_spec_455_, v___x_463_);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 4);
lean_ctor_set(v___x_458_, 1, v___x_464_);
lean_ctor_set(v___x_458_, 0, v___x_462_);
v___x_466_ = v___x_458_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_462_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_496_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
uint8_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___y_478_; lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_467_ = 0;
v___x_468_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set_uint8(v___x_468_, sizeof(void*)*1, v___x_467_);
v___x_469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_461_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9));
v___x_471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = lean_box(1);
v___x_473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__11));
v___x_475_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_460_);
v___x_489_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8, &l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8_once, _init_l_Std_Time_TimeZone_instReprTransitionSpec_repr___closed__8);
v___x_490_ = lean_int_dec_lt(v_time_456_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = l_Int_repr(v_time_456_);
lean_dec(v_time_456_);
v___x_492_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
v___y_478_ = v___x_492_;
goto v___jp_477_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = l_Int_repr(v_time_456_);
lean_dec(v_time_456_);
v___x_494_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
v___x_495_ = l_Repr_addAppParen(v___x_494_, v___x_463_);
v___y_478_ = v___x_495_;
goto v___jp_477_;
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_462_);
lean_ctor_set(v___x_479_, 1, v___y_478_);
v___x_480_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_480_, sizeof(void*)*1, v___x_467_);
v___x_481_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_476_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14);
v___x_483_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15));
v___x_484_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___x_481_);
v___x_485_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16));
v___x_486_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_482_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*1, v___x_467_);
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr(lean_object* v_x_498_, lean_object* v_prec_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg(v_x_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransitionRule_repr___boxed(lean_object* v_x_501_, lean_object* v_prec_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_Time_TimeZone_instReprTransitionRule_repr(v_x_501_, v_prec_502_);
lean_dec(v_prec_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0(lean_object* v_x_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_512_) == 0)
{
lean_object* v___x_514_; 
v___x_514_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__1));
return v___x_514_;
}
else
{
lean_object* v_val_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_val_515_ = lean_ctor_get(v_x_512_, 0);
lean_inc(v_val_515_);
lean_dec_ref_known(v_x_512_, 1);
v___x_516_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__3));
v___x_517_ = l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg(v_val_515_);
v___x_518_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_516_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
v___x_519_ = l_Repr_addAppParen(v___x_518_, v_x_513_);
return v___x_519_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___boxed(lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0(v_x_520_, v_x_521_);
lean_dec(v_x_521_);
return v_res_522_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(10u);
v___x_536_ = lean_nat_to_int(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(9u);
v___x_541_ = lean_nat_to_int(v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg(lean_object* v_x_545_){
_start:
{
lean_object* v_name_546_; lean_object* v_offset_547_; lean_object* v_start_548_; lean_object* v_end___549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_name_546_ = lean_ctor_get(v_x_545_, 0);
lean_inc_ref(v_name_546_);
v_offset_547_ = lean_ctor_get(v_x_545_, 1);
lean_inc(v_offset_547_);
v_start_548_ = lean_ctor_get(v_x_545_, 2);
lean_inc(v_start_548_);
v_end___549_ = lean_ctor_get(v_x_545_, 3);
lean_inc(v_end___549_);
lean_dec_ref(v_x_545_);
v___x_550_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5));
v___x_551_ = ((lean_object*)(l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__3));
v___x_552_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__7);
v___x_553_ = l_String_quote(v_name_546_);
v___x_554_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
v___x_555_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_552_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = 0;
v___x_557_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_557_, 0, v___x_555_);
lean_ctor_set_uint8(v___x_557_, sizeof(void*)*1, v___x_556_);
v___x_558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_551_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9));
v___x_560_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_558_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
v___x_561_ = lean_box(1);
v___x_562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = ((lean_object*)(l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__5));
v___x_564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_550_);
v___x_566_ = lean_obj_once(&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6, &l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6_once, _init_l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__6);
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_offset_547_);
lean_dec(v_offset_547_);
v___x_569_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_566_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*1, v___x_556_);
v___x_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_565_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_559_);
v___x_573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_561_);
v___x_574_ = ((lean_object*)(l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__8));
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_550_);
v___x_577_ = lean_obj_once(&l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9, &l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9_once, _init_l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__9);
v___x_578_ = l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0(v_start_548_, v___x_567_);
v___x_579_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_577_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set_uint8(v___x_580_, sizeof(void*)*1, v___x_556_);
v___x_581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_576_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_559_);
v___x_583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v___x_561_);
v___x_584_ = ((lean_object*)(l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg___closed__11));
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___x_550_);
v___x_587_ = l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0(v_end___549_, v___x_567_);
v___x_588_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_552_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set_uint8(v___x_589_, sizeof(void*)*1, v___x_556_);
v___x_590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_586_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14);
v___x_592_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15));
v___x_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v___x_590_);
v___x_594_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16));
v___x_595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_591_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set_uint8(v___x_597_, sizeof(void*)*1, v___x_556_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr(lean_object* v_x_598_, lean_object* v_prec_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg(v_x_598_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___boxed(lean_object* v_x_601_, lean_object* v_prec_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Std_Time_TimeZone_instReprDaylightSavingRule_repr(v_x_601_, v_prec_602_);
lean_dec(v_prec_602_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0(lean_object* v_x_606_, lean_object* v_x_607_){
_start:
{
if (lean_obj_tag(v_x_606_) == 0)
{
lean_object* v___x_608_; 
v___x_608_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__1));
return v___x_608_;
}
else
{
lean_object* v_val_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v_val_609_ = lean_ctor_get(v_x_606_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v_x_606_, 1);
v___x_610_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprDaylightSavingRule_repr_spec__0___closed__3));
v___x_611_ = l_Std_Time_TimeZone_instReprDaylightSavingRule_repr___redArg(v_val_609_);
v___x_612_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_610_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
v___x_613_ = l_Repr_addAppParen(v___x_612_, v_x_607_);
return v___x_613_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0___boxed(lean_object* v_x_614_, lean_object* v_x_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0(v_x_614_, v_x_615_);
lean_dec(v_x_615_);
return v_res_616_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_unsigned_to_nat(13u);
v___x_630_ = lean_nat_to_int(v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg(lean_object* v_x_634_){
_start:
{
lean_object* v_stdName_635_; lean_object* v_stdOffset_636_; lean_object* v_dst_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_stdName_635_ = lean_ctor_get(v_x_634_, 0);
lean_inc_ref(v_stdName_635_);
v_stdOffset_636_ = lean_ctor_get(v_x_634_, 1);
lean_inc(v_stdOffset_636_);
v_dst_637_ = lean_ctor_get(v_x_634_, 2);
lean_inc(v_dst_637_);
lean_dec_ref(v_x_634_);
v___x_638_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__5));
v___x_639_ = ((lean_object*)(l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__3));
v___x_640_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayJulian___closed__1);
v___x_641_ = l_String_quote(v_stdName_635_);
v___x_642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
v___x_643_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = 0;
v___x_645_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set_uint8(v___x_645_, sizeof(void*)*1, v___x_644_);
v___x_646_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_639_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__9));
v___x_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = lean_box(1);
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = ((lean_object*)(l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__5));
v___x_652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v___x_638_);
v___x_654_ = lean_obj_once(&l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6, &l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6_once, _init_l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__6);
v___x_655_ = lean_unsigned_to_nat(0u);
v___x_656_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_stdOffset_636_);
lean_dec(v_stdOffset_636_);
v___x_657_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_654_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*1, v___x_644_);
v___x_659_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_653_);
lean_ctor_set(v___x_659_, 1, v___x_658_);
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_647_);
v___x_661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v___x_649_);
v___x_662_ = ((lean_object*)(l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg___closed__8));
v___x_663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v___x_638_);
v___x_665_ = lean_obj_once(&l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0, &l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0_once, _init_l_Std_Time_TimeZone_TransitionSpec_toEpochDayMWD___closed__0);
v___x_666_ = l_Option_repr___at___00Std_Time_TimeZone_instReprRecurringRule_repr_spec__0(v_dst_637_, v___x_655_);
v___x_667_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*1, v___x_644_);
v___x_669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_664_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14, &l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14_once, _init_l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__14);
v___x_671_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__15));
v___x_672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
lean_ctor_set(v___x_672_, 1, v___x_669_);
v___x_673_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransitionRule_repr___redArg___closed__16));
v___x_674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_670_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_676_, 0, v___x_675_);
lean_ctor_set_uint8(v___x_676_, sizeof(void*)*1, v___x_644_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr(lean_object* v_x_677_, lean_object* v_prec_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg(v_x_677_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___boxed(lean_object* v_x_680_, lean_object* v_prec_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Std_Time_TimeZone_instReprRecurringRule_repr(v_x_680_, v_prec_681_);
lean_dec(v_prec_681_);
return v_res_682_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date_Unit_Week(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date_Unit_Weekday(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned_TimeZone(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_RecurringRule(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Week(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Weekday(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_RecurringRule(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* initialize_Std_Time_Date_Unit_Week(uint8_t builtin);
lean_object* initialize_Std_Time_Date_Unit_Weekday(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned_TimeZone(uint8_t builtin);
lean_object* initialize_Std_Time_Date(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_RecurringRule(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date_Unit_Week(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date_Unit_Weekday(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_RecurringRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_RecurringRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_RecurringRule(builtin);
}
#ifdef __cplusplus
}
#endif
