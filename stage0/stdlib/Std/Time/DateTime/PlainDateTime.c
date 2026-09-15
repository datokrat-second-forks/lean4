// Lean compiler output
// Module: Std.Time.DateTime.PlainDateTime
// Imports: public import Std.Time.DateTime.WallTime
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
lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainTime_toSeconds(lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Fin_succ___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_addMonthsClip(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_rollOver(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Time_Year_Offset_era(lean_object*);
lean_object* l_Std_Time_PlainDate_addMonthsRollOver(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object*);
lean_object* l_Std_Time_PlainDate_withWeekday(lean_object*, uint8_t);
lean_object* l_Std_Time_instReprPlainDate_repr___redArg(lean_object*);
lean_object* l_Std_Time_instReprPlainTime_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t l_Std_Time_instDecidableEqPlainDate_decEq(lean_object*, lean_object*);
uint8_t l_Std_Time_instDecidableEqPlainTime_decEq(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth(lean_object*);
lean_object* l_Std_Time_PlainDate_quarter(lean_object*);
uint8_t l_Std_Time_PlainDate_weekday(lean_object*);
extern lean_object* l_Std_Time_instOrdPlainDate;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainDate_weekYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object*, uint8_t);
extern lean_object* l_Std_Time_Month_Ordinal_equiv;
extern lean_object* l_Std_Time_Day_Ordinal_equiv;
extern lean_object* l_Std_Time_Hour_Ordinal_equiv;
extern lean_object* l_Std_Time_Minute_Ordinal_equiv;
extern lean_object* l_Std_Time_PlainTime_midnight;
extern lean_object* l_Std_Time_instOrdPlainTime;
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedPlainDateTime_default_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__1;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__2;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__3;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__4;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__5;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__6;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__7;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__8;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__9;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__10;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__11;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__12;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__13;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__14;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__15;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__16;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__17;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__18;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__19;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__20;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__21;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__22;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__23;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__24;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__25;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__26;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__27;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__28;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__29;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__30;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__31;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__32;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__33;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__34;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__35;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__36;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__37;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedPlainDateTime_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedPlainDateTime;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "date"};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "time"};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_instReprPlainDateTime_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprPlainDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprPlainDateTime_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprPlainDateTime___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainDateTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprPlainDateTime = (const lean_object*)&l_Std_Time_instReprPlainDateTime___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdPlainDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainDateTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDateTime___closed__0 = (const lean_object*)&l_Std_Time_instOrdPlainDateTime___closed__0_value;
static const lean_closure_object l_Std_Time_instOrdPlainDateTime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainDateTime___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDateTime___closed__1 = (const lean_object*)&l_Std_Time_instOrdPlainDateTime___closed__1_value;
static lean_once_cell_t l_Std_Time_instOrdPlainDateTime___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDateTime___closed__2;
static lean_once_cell_t l_Std_Time_instOrdPlainDateTime___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDateTime___closed__3;
static lean_once_cell_t l_Std_Time_instOrdPlainDateTime___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDateTime___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime;
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__1(lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_toWallTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_toWallTime___closed__0;
static lean_once_cell_t l_Std_Time_PlainDateTime_toWallTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_toWallTime___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toWallTime(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__0(lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__0;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__1;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__2;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__3;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__4;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__5;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__6;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__7;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__8;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__9;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__10;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__11;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__12;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__13;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__14;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__15;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__16;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__17;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__18;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__19;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__20;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__21;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__22;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__23;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__24;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__25;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__26;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__27;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__28;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__29;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__30;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__31;
static lean_once_cell_t l_Std_Time_PlainDateTime_ofWallTime___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_ofWallTime___closed__32;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toEpochDay(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withSeconds(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_withMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_withMilliseconds___closed__0;
static lean_once_cell_t l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_withMilliseconds___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_addWeeks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_addWeeks___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_addYearsRollOver___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDateTime_addMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDateTime_addMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_weekday(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekday___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_era(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_era___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_inLeapYear(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_inLeapYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_dayOfYear(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atDate(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__1 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__1 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__2 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__2 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__3 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__3 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__4 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__4 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__5 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__5 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddOffset__6 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubOffset__6 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_PlainDateTime_instHAddDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_instHAddDuration___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHAddDuration___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHAddDuration = (const lean_object*)&l_Std_Time_PlainDateTime_instHAddDuration___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofPlainDate(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHSubDuration___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_PlainDateTime_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDateTime_instHSubDuration___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDateTime_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDateTime_instHSubDuration = (const lean_object*)&l_Std_Time_PlainDateTime_instHSubDuration___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toWallTime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_instHSubDuration___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_PlainDate_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDate_instHSubDuration___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDate_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_PlainDate_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDate_instHSubDuration = (const lean_object*)&l_Std_Time_PlainDate_instHSubDuration___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_atTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_atDate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instInhabitedPlainDateTime_default_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(1u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_nat_to_int(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(11u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__2, &l_Std_Time_instInhabitedPlainDateTime_default___closed__2_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__2);
v___x_10_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_11_ = lean_int_add(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__4(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_13_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__3, &l_Std_Time_instInhabitedPlainDateTime_default___closed__3_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__3);
v___x_14_ = lean_int_sub(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__5(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v_range_17_; 
v___x_15_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_16_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__4, &l_Std_Time_instInhabitedPlainDateTime_default___closed__4_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__4);
v_range_17_ = lean_int_add(v___x_16_, v___x_15_);
return v_range_17_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__6(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_19_ = lean_int_sub(v___x_18_, v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__7(void){
_start:
{
lean_object* v_range_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_range_20_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__5, &l_Std_Time_instInhabitedPlainDateTime_default___closed__5_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__5);
v___x_21_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__6, &l_Std_Time_instInhabitedPlainDateTime_default___closed__6_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__6);
v___x_22_ = lean_int_emod(v___x_21_, v_range_20_);
return v___x_22_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__8(void){
_start:
{
lean_object* v_range_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v_range_23_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__5, &l_Std_Time_instInhabitedPlainDateTime_default___closed__5_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__5);
v___x_24_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__7, &l_Std_Time_instInhabitedPlainDateTime_default___closed__7_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__7);
v___x_25_ = lean_int_add(v___x_24_, v_range_23_);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__9(void){
_start:
{
lean_object* v_range_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_range_26_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__5, &l_Std_Time_instInhabitedPlainDateTime_default___closed__5_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__5);
v___x_27_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__8, &l_Std_Time_instInhabitedPlainDateTime_default___closed__8_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__8);
v___x_28_ = lean_int_emod(v___x_27_, v_range_26_);
return v___x_28_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__10(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_30_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__9, &l_Std_Time_instInhabitedPlainDateTime_default___closed__9_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__9);
v___x_31_ = lean_int_add(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(30u);
v___x_33_ = lean_nat_to_int(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__12(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_35_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_36_ = lean_int_add(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__13(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_38_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__12, &l_Std_Time_instInhabitedPlainDateTime_default___closed__12_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__12);
v___x_39_ = lean_int_sub(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__14(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v_range_42_; 
v___x_40_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_41_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__13, &l_Std_Time_instInhabitedPlainDateTime_default___closed__13_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__13);
v_range_42_ = lean_int_add(v___x_41_, v___x_40_);
return v_range_42_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__15(void){
_start:
{
lean_object* v_range_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_range_43_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__14, &l_Std_Time_instInhabitedPlainDateTime_default___closed__14_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__14);
v___x_44_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__6, &l_Std_Time_instInhabitedPlainDateTime_default___closed__6_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__6);
v___x_45_ = lean_int_emod(v___x_44_, v_range_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__16(void){
_start:
{
lean_object* v_range_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_range_46_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__14, &l_Std_Time_instInhabitedPlainDateTime_default___closed__14_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__14);
v___x_47_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__15, &l_Std_Time_instInhabitedPlainDateTime_default___closed__15_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__15);
v___x_48_ = lean_int_add(v___x_47_, v_range_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__17(void){
_start:
{
lean_object* v_range_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_range_49_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__14, &l_Std_Time_instInhabitedPlainDateTime_default___closed__14_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__14);
v___x_50_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__16, &l_Std_Time_instInhabitedPlainDateTime_default___closed__16_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__16);
v___x_51_ = lean_int_emod(v___x_50_, v_range_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__18(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_53_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__17, &l_Std_Time_instInhabitedPlainDateTime_default___closed__17_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__17);
v___x_54_ = lean_int_add(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__19(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(23u);
v___x_56_ = lean_nat_to_int(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__20(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__19, &l_Std_Time_instInhabitedPlainDateTime_default___closed__19_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__19);
v___x_58_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_59_ = lean_int_add(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__21(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_61_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__20, &l_Std_Time_instInhabitedPlainDateTime_default___closed__20_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__20);
v___x_62_ = lean_int_sub(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v_range_65_; 
v___x_63_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_64_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__21, &l_Std_Time_instInhabitedPlainDateTime_default___closed__21_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__21);
v_range_65_ = lean_int_add(v___x_64_, v___x_63_);
return v_range_65_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_67_ = lean_int_sub(v___x_66_, v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__24(void){
_start:
{
lean_object* v_range_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_range_68_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__22, &l_Std_Time_instInhabitedPlainDateTime_default___closed__22_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22);
v___x_69_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__23, &l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23);
v___x_70_ = lean_int_emod(v___x_69_, v_range_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__25(void){
_start:
{
lean_object* v_range_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_range_71_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__22, &l_Std_Time_instInhabitedPlainDateTime_default___closed__22_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22);
v___x_72_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__24, &l_Std_Time_instInhabitedPlainDateTime_default___closed__24_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__24);
v___x_73_ = lean_int_add(v___x_72_, v_range_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__26(void){
_start:
{
lean_object* v_range_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_range_74_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__22, &l_Std_Time_instInhabitedPlainDateTime_default___closed__22_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22);
v___x_75_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__25, &l_Std_Time_instInhabitedPlainDateTime_default___closed__25_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__25);
v___x_76_ = lean_int_emod(v___x_75_, v_range_74_);
return v___x_76_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__27(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_78_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__26, &l_Std_Time_instInhabitedPlainDateTime_default___closed__26_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__26);
v___x_79_ = lean_int_add(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__28(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_unsigned_to_nat(59u);
v___x_81_ = lean_nat_to_int(v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__29(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__28, &l_Std_Time_instInhabitedPlainDateTime_default___closed__28_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__28);
v___x_83_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_84_ = lean_int_add(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__30(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_86_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__29, &l_Std_Time_instInhabitedPlainDateTime_default___closed__29_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__29);
v___x_87_ = lean_int_sub(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v_range_90_; 
v___x_88_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_89_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__30, &l_Std_Time_instInhabitedPlainDateTime_default___closed__30_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__30);
v_range_90_ = lean_int_add(v___x_89_, v___x_88_);
return v_range_90_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32(void){
_start:
{
lean_object* v_range_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_range_91_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__31, &l_Std_Time_instInhabitedPlainDateTime_default___closed__31_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31);
v___x_92_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__23, &l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23);
v___x_93_ = lean_int_emod(v___x_92_, v_range_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__33(void){
_start:
{
lean_object* v_range_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v_range_94_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__31, &l_Std_Time_instInhabitedPlainDateTime_default___closed__31_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31);
v___x_95_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__32, &l_Std_Time_instInhabitedPlainDateTime_default___closed__32_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32);
v___x_96_ = lean_int_add(v___x_95_, v_range_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__34(void){
_start:
{
lean_object* v_range_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v_range_97_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__31, &l_Std_Time_instInhabitedPlainDateTime_default___closed__31_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31);
v___x_98_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__33, &l_Std_Time_instInhabitedPlainDateTime_default___closed__33_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__33);
v___x_99_ = lean_int_emod(v___x_98_, v_range_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__35(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_101_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__34, &l_Std_Time_instInhabitedPlainDateTime_default___closed__34_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__34);
v___x_102_ = lean_int_add(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__36(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(1000000000u);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_nat_mod(v___x_104_, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__37(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__36, &l_Std_Time_instInhabitedPlainDateTime_default___closed__36_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__36);
v___x_107_ = lean_nat_to_int(v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default(void){
_start:
{
lean_object* v___x_108_; lean_object* v_toFun_109_; lean_object* v___x_110_; lean_object* v_toFun_111_; lean_object* v___x_112_; lean_object* v_toFun_113_; lean_object* v___x_114_; lean_object* v_toFun_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_108_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_109_ = lean_ctor_get(v___x_108_, 0);
v___x_110_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_111_ = lean_ctor_get(v___x_110_, 0);
v___x_112_ = l_Std_Time_Hour_Ordinal_equiv;
v_toFun_113_ = lean_ctor_get(v___x_112_, 0);
v___x_114_ = l_Std_Time_Minute_Ordinal_equiv;
v_toFun_115_ = lean_ctor_get(v___x_114_, 0);
v___x_116_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_117_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__10, &l_Std_Time_instInhabitedPlainDateTime_default___closed__10_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__10);
lean_inc(v_toFun_109_);
v___x_118_ = lean_apply_1(v_toFun_109_, v___x_117_);
v___x_119_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__18, &l_Std_Time_instInhabitedPlainDateTime_default___closed__18_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__18);
lean_inc(v_toFun_111_);
v___x_120_ = lean_apply_1(v_toFun_111_, v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_121_, 0, v___x_116_);
lean_ctor_set(v___x_121_, 1, v___x_118_);
lean_ctor_set(v___x_121_, 2, v___x_120_);
v___x_122_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__27, &l_Std_Time_instInhabitedPlainDateTime_default___closed__27_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__27);
lean_inc(v_toFun_113_);
v___x_123_ = lean_apply_1(v_toFun_113_, v___x_122_);
v___x_124_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__35, &l_Std_Time_instInhabitedPlainDateTime_default___closed__35_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__35);
lean_inc(v_toFun_115_);
v___x_125_ = lean_apply_1(v_toFun_115_, v___x_124_);
v___x_126_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__37, &l_Std_Time_instInhabitedPlainDateTime_default___closed__37_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__37);
v___x_127_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_127_, 0, v___x_123_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
lean_ctor_set(v___x_127_, 2, v___x_124_);
lean_ctor_set(v___x_127_, 3, v___x_126_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_121_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Std_Time_instInhabitedPlainDateTime_default;
return v___x_129_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime_decEq(lean_object* v_x_130_, lean_object* v_x_131_){
_start:
{
lean_object* v_date_132_; lean_object* v_time_133_; lean_object* v_date_134_; lean_object* v_time_135_; uint8_t v___x_136_; 
v_date_132_ = lean_ctor_get(v_x_130_, 0);
lean_inc_ref(v_date_132_);
v_time_133_ = lean_ctor_get(v_x_130_, 1);
lean_inc_ref(v_time_133_);
lean_dec_ref(v_x_130_);
v_date_134_ = lean_ctor_get(v_x_131_, 0);
lean_inc_ref(v_date_134_);
v_time_135_ = lean_ctor_get(v_x_131_, 1);
lean_inc_ref(v_time_135_);
lean_dec_ref(v_x_131_);
v___x_136_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_date_132_, v_date_134_);
if (v___x_136_ == 0)
{
lean_dec_ref(v_time_135_);
lean_dec_ref(v_time_133_);
return v___x_136_;
}
else
{
uint8_t v___x_137_; 
v___x_137_ = l_Std_Time_instDecidableEqPlainTime_decEq(v_time_133_, v_time_135_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime_decEq___boxed(lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
uint8_t v_res_140_; lean_object* v_r_141_; 
v_res_140_ = l_Std_Time_instDecidableEqPlainDateTime_decEq(v_x_138_, v_x_139_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime(lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = l_Std_Time_instDecidableEqPlainDateTime_decEq(v_x_142_, v_x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime___boxed(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Std_Time_instDecidableEqPlainDateTime(v_x_145_, v_x_146_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(8u);
v___x_163_ = lean_nat_to_int(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0));
v___x_172_ = lean_string_length(v___x_171_);
return v___x_172_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13);
v___x_174_ = lean_nat_to_int(v___x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg(lean_object* v_x_179_){
_start:
{
lean_object* v_date_180_; lean_object* v_time_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_213_; 
v_date_180_ = lean_ctor_get(v_x_179_, 0);
v_time_181_ = lean_ctor_get(v_x_179_, 1);
v_isSharedCheck_213_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_213_ == 0)
{
v___x_183_ = v_x_179_;
v_isShared_184_ = v_isSharedCheck_213_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_time_181_);
lean_inc(v_date_180_);
lean_dec(v_x_179_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_213_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_185_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5));
v___x_186_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__6));
v___x_187_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7);
v___x_188_ = l_Std_Time_instReprPlainDate_repr___redArg(v_date_180_);
if (v_isShared_184_ == 0)
{
lean_ctor_set_tag(v___x_183_, 4);
lean_ctor_set(v___x_183_, 1, v___x_188_);
lean_ctor_set(v___x_183_, 0, v___x_187_);
v___x_190_ = v___x_183_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v___x_188_);
v___x_190_ = v_reuseFailAlloc_212_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_191_ = 0;
v___x_192_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_191_);
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_186_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__9));
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_box(1);
v___x_197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__11));
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_197_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_185_);
v___x_201_ = l_Std_Time_instReprPlainTime_repr___redArg(v_time_181_);
v___x_202_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_187_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*1, v___x_191_);
v___x_204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_200_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14);
v___x_206_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__15));
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_204_);
v___x_208_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__16));
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_205_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_211_, sizeof(void*)*1, v___x_191_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr(lean_object* v_x_214_, lean_object* v_prec_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Std_Time_instReprPlainDateTime_repr___redArg(v_x_214_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___boxed(lean_object* v_x_217_, lean_object* v_prec_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Std_Time_instReprPlainDateTime_repr(v_x_217_, v_prec_218_);
lean_dec(v_prec_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0(lean_object* v_x_222_){
_start:
{
lean_object* v_date_223_; 
v_date_223_ = lean_ctor_get(v_x_222_, 0);
lean_inc_ref(v_date_223_);
return v_date_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0___boxed(lean_object* v_x_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Std_Time_instOrdPlainDateTime___lam__0(v_x_224_);
lean_dec_ref(v_x_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1(lean_object* v_x_226_){
_start:
{
lean_object* v_time_227_; 
v_time_227_ = lean_ctor_get(v_x_226_, 1);
lean_inc_ref(v_time_227_);
return v_time_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1___boxed(lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Std_Time_instOrdPlainDateTime___lam__1(v_x_228_);
lean_dec_ref(v_x_228_);
return v_res_229_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__2(void){
_start:
{
lean_object* v___f_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___f_232_ = ((lean_object*)(l_Std_Time_instOrdPlainDateTime___closed__0));
v___x_233_ = l_Std_Time_instOrdPlainDate;
v___x_234_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_234_, 0, lean_box(0));
lean_closure_set(v___x_234_, 1, lean_box(0));
lean_closure_set(v___x_234_, 2, v___x_233_);
lean_closure_set(v___x_234_, 3, v___f_232_);
return v___x_234_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__3(void){
_start:
{
lean_object* v___f_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___f_235_ = ((lean_object*)(l_Std_Time_instOrdPlainDateTime___closed__1));
v___x_236_ = l_Std_Time_instOrdPlainTime;
v___x_237_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_237_, 0, lean_box(0));
lean_closure_set(v___x_237_, 1, lean_box(0));
lean_closure_set(v___x_237_, 2, v___x_236_);
lean_closure_set(v___x_237_, 3, v___f_235_);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__4(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__3, &l_Std_Time_instOrdPlainDateTime___closed__3_once, _init_l_Std_Time_instOrdPlainDateTime___closed__3);
v___x_239_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__2, &l_Std_Time_instOrdPlainDateTime___closed__2_once, _init_l_Std_Time_instOrdPlainDateTime___closed__2);
v___x_240_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, lean_box(0));
lean_closure_set(v___x_240_, 2, v___x_239_);
lean_closure_set(v___x_240_, 3, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__4, &l_Std_Time_instOrdPlainDateTime___closed__4_once, _init_l_Std_Time_instOrdPlainDateTime___closed__4);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__1(lean_object* v_a_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Rat_ofInt(v_a_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_toWallTime___closed__0(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(86400u);
v___x_245_ = lean_nat_to_int(v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_toWallTime___closed__1(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = lean_unsigned_to_nat(1000000000u);
v___x_247_ = lean_nat_to_int(v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toWallTime(lean_object* v_dt_248_){
_start:
{
lean_object* v_time_249_; lean_object* v_date_250_; lean_object* v_nanosecond_251_; lean_object* v_days_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_nanos_259_; lean_object* v___x_260_; 
v_time_249_ = lean_ctor_get(v_dt_248_, 1);
lean_inc_ref(v_time_249_);
v_date_250_ = lean_ctor_get(v_dt_248_, 0);
lean_inc_ref(v_date_250_);
lean_dec_ref(v_dt_248_);
v_nanosecond_251_ = lean_ctor_get(v_time_249_, 3);
lean_inc(v_nanosecond_251_);
v_days_252_ = l_Std_Time_PlainDate_toEpochDay(v_date_250_);
v___x_253_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_254_ = lean_int_mul(v_days_252_, v___x_253_);
lean_dec(v_days_252_);
v___x_255_ = l_Std_Time_PlainTime_toSeconds(v_time_249_);
lean_dec_ref(v_time_249_);
v___x_256_ = lean_int_add(v___x_254_, v___x_255_);
lean_dec(v___x_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_258_ = lean_int_mul(v___x_256_, v___x_257_);
lean_dec(v___x_256_);
v_nanos_259_ = lean_int_add(v___x_258_, v_nanosecond_251_);
lean_dec(v_nanosecond_251_);
lean_dec(v___x_258_);
v___x_260_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_259_);
lean_dec(v_nanos_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__0(lean_object* v_a_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_nat_to_int(v_a_261_);
v___x_263_ = l_Rat_ofInt(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_264_ = lean_unsigned_to_nat(13u);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = lean_nat_mod(v___x_265_, v___x_264_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(lean_object* v_as_x27_267_, lean_object* v_b_268_){
_start:
{
if (lean_obj_tag(v_as_x27_267_) == 0)
{
return v_b_268_;
}
else
{
lean_object* v_head_269_; lean_object* v_tail_270_; lean_object* v_fst_271_; lean_object* v_snd_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_288_; 
v_head_269_ = lean_ctor_get(v_as_x27_267_, 0);
v_tail_270_ = lean_ctor_get(v_as_x27_267_, 1);
v_fst_271_ = lean_ctor_get(v_b_268_, 0);
v_snd_272_ = lean_ctor_get(v_b_268_, 1);
v_isSharedCheck_288_ = !lean_is_exclusive(v_b_268_);
if (v_isSharedCheck_288_ == 0)
{
v___x_274_ = v_b_268_;
v_isShared_275_ = v_isSharedCheck_288_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_snd_272_);
lean_inc(v_fst_271_);
lean_dec(v_b_268_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_288_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_276_ = lean_unsigned_to_nat(13u);
v___x_277_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0);
v___x_278_ = l_Fin_add(v___x_276_, v_snd_272_, v___x_277_);
lean_dec(v_snd_272_);
v___x_279_ = lean_int_dec_lt(v_fst_271_, v_head_269_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_int_sub(v_fst_271_, v_head_269_);
lean_dec(v_fst_271_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_278_);
lean_ctor_set(v___x_274_, 0, v___x_280_);
v___x_282_ = v___x_274_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_280_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v___x_278_);
v___x_282_ = v_reuseFailAlloc_284_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
v_as_x27_267_ = v_tail_270_;
v_b_268_ = v___x_282_;
goto _start;
}
}
else
{
lean_object* v___x_286_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_278_);
v___x_286_ = v___x_274_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_fst_271_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_278_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___boxed(lean_object* v_as_x27_289_, lean_object* v_b_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_as_x27_289_, v_b_290_);
lean_dec(v_as_x27_289_);
return v_res_291_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__0(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(11017u);
v___x_293_ = lean_nat_to_int(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(365u);
v___x_295_ = lean_nat_to_int(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(400u);
v___x_297_ = lean_nat_to_int(v___x_296_);
return v___x_297_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__3(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_299_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_300_ = lean_int_mul(v___x_299_, v___x_298_);
return v___x_300_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__4(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_unsigned_to_nat(97u);
v___x_302_ = lean_nat_to_int(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__5(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_daysPer400Y_305_; 
v___x_303_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__4, &l_Std_Time_PlainDateTime_ofWallTime___closed__4_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__4);
v___x_304_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__3, &l_Std_Time_PlainDateTime_ofWallTime___closed__3_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__3);
v_daysPer400Y_305_ = lean_int_add(v___x_304_, v___x_303_);
return v_daysPer400Y_305_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_unsigned_to_nat(100u);
v___x_307_ = lean_nat_to_int(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__7(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_309_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_310_ = lean_int_mul(v___x_309_, v___x_308_);
return v___x_310_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__8(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(24u);
v___x_312_ = lean_nat_to_int(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__9(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v_daysPer100Y_315_; 
v___x_313_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__8, &l_Std_Time_PlainDateTime_ofWallTime___closed__8_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__8);
v___x_314_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__7, &l_Std_Time_PlainDateTime_ofWallTime___closed__7_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__7);
v_daysPer100Y_315_ = lean_int_add(v___x_314_, v___x_313_);
return v_daysPer100Y_315_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_unsigned_to_nat(4u);
v___x_317_ = lean_nat_to_int(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__11(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_319_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_320_ = lean_int_mul(v___x_319_, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__12(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v_daysPer4Y_323_; 
v___x_321_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_322_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__11, &l_Std_Time_PlainDateTime_ofWallTime___closed__11_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__11);
v_daysPer4Y_323_ = lean_int_add(v___x_322_, v___x_321_);
return v_daysPer4Y_323_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__13(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_unsigned_to_nat(60u);
v___x_325_ = lean_nat_to_int(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__14(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_unsigned_to_nat(3600u);
v___x_327_ = lean_nat_to_int(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_unsigned_to_nat(31u);
v___x_329_ = lean_nat_to_int(v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__16(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_unsigned_to_nat(29u);
v___x_331_ = lean_nat_to_int(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__17(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_box(0);
v___x_333_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__16, &l_Std_Time_PlainDateTime_ofWallTime___closed__16_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__16);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__18(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__17, &l_Std_Time_PlainDateTime_ofWallTime___closed__17_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__17);
v___x_336_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__19(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__18, &l_Std_Time_PlainDateTime_ofWallTime___closed__18_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__18);
v___x_339_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__20(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__19, &l_Std_Time_PlainDateTime_ofWallTime___closed__19_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__19);
v___x_342_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__21(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__20, &l_Std_Time_PlainDateTime_ofWallTime___closed__20_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__20);
v___x_345_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__22(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__21, &l_Std_Time_PlainDateTime_ofWallTime___closed__21_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__21);
v___x_348_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___x_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__23(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__22, &l_Std_Time_PlainDateTime_ofWallTime___closed__22_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__22);
v___x_351_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v___x_350_);
return v___x_352_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__24(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__23, &l_Std_Time_PlainDateTime_ofWallTime___closed__23_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__23);
v___x_354_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__25(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__24, &l_Std_Time_PlainDateTime_ofWallTime___closed__24_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__24);
v___x_357_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___x_356_);
return v___x_358_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__26(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__25, &l_Std_Time_PlainDateTime_ofWallTime___closed__25_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__25);
v___x_360_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__27(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__26, &l_Std_Time_PlainDateTime_ofWallTime___closed__26_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__26);
v___x_363_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__28(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v_months_367_; 
v___x_365_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__27, &l_Std_Time_PlainDateTime_ofWallTime___closed__27_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__27);
v___x_366_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v_months_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_months_367_, 0, v___x_366_);
lean_ctor_set(v_months_367_, 1, v___x_365_);
return v_months_367_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__29(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_mon_370_; 
v___x_368_ = lean_unsigned_to_nat(13u);
v___x_369_ = lean_unsigned_to_nat(0u);
v_mon_370_ = lean_nat_mod(v___x_369_, v___x_368_);
return v_mon_370_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__30(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(2000u);
v___x_372_ = lean_nat_to_int(v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__31(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_unsigned_to_nat(25u);
v___x_374_ = lean_nat_to_int(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__32(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_376_ = lean_int_neg(v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object* v_stamp_377_){
_start:
{
lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; uint8_t v___y_394_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; uint8_t v___y_406_; lean_object* v___y_407_; uint8_t v___y_408_; lean_object* v_second_409_; lean_object* v_nano_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_550_; 
v_second_409_ = lean_ctor_get(v_stamp_377_, 0);
v_nano_410_ = lean_ctor_get(v_stamp_377_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v_stamp_377_);
if (v_isSharedCheck_550_ == 0)
{
v___x_412_ = v_stamp_377_;
v_isShared_413_ = v_isSharedCheck_550_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_nano_410_);
lean_inc(v_second_409_);
lean_dec(v_stamp_377_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_550_;
goto v_resetjp_411_;
}
v___jp_378_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_384_, 0, v___y_380_);
lean_ctor_set(v___x_384_, 1, v___y_382_);
lean_ctor_set(v___x_384_, 2, v___y_381_);
lean_ctor_set(v___x_384_, 3, v___y_379_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___y_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
return v___x_385_;
}
v___jp_386_:
{
lean_object* v_max_395_; uint8_t v___x_396_; 
v_max_395_ = l_Std_Time_Month_Ordinal_days(v___y_394_, v___y_393_);
v___x_396_ = lean_int_dec_lt(v_max_395_, v___y_388_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; 
lean_dec(v_max_395_);
v___x_397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_397_, 0, v___y_389_);
lean_ctor_set(v___x_397_, 1, v___y_393_);
lean_ctor_set(v___x_397_, 2, v___y_388_);
v___y_379_ = v___y_387_;
v___y_380_ = v___y_390_;
v___y_381_ = v___y_392_;
v___y_382_ = v___y_391_;
v___y_383_ = v___x_397_;
goto v___jp_378_;
}
else
{
lean_object* v___x_398_; 
lean_dec(v___y_388_);
v___x_398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_398_, 0, v___y_389_);
lean_ctor_set(v___x_398_, 1, v___y_393_);
lean_ctor_set(v___x_398_, 2, v_max_395_);
v___y_379_ = v___y_387_;
v___y_380_ = v___y_390_;
v___y_381_ = v___y_392_;
v___y_382_ = v___y_391_;
v___y_383_ = v___x_398_;
goto v___jp_378_;
}
}
v___jp_399_:
{
if (v___y_406_ == 0)
{
v___y_387_ = v___y_401_;
v___y_388_ = v___y_400_;
v___y_389_ = v___y_402_;
v___y_390_ = v___y_403_;
v___y_391_ = v___y_405_;
v___y_392_ = v___y_404_;
v___y_393_ = v___y_407_;
v___y_394_ = v___y_406_;
goto v___jp_386_;
}
else
{
v___y_387_ = v___y_401_;
v___y_388_ = v___y_400_;
v___y_389_ = v___y_402_;
v___y_390_ = v___y_403_;
v___y_391_ = v___y_405_;
v___y_392_ = v___y_404_;
v___y_393_ = v___y_407_;
v___y_394_ = v___y_408_;
goto v___jp_386_;
}
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_daysPer400Y_417_; lean_object* v___x_418_; lean_object* v_daysPer100Y_419_; lean_object* v___x_420_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___y_428_; lean_object* v___y_429_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v_daysPer4Y_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___y_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v_hmon_448_; lean_object* v_year_449_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v_remYears_466_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v_quadrennialCycles_502_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v_centenialCycles_512_; lean_object* v___y_520_; lean_object* v_quadracentennialCycles_521_; lean_object* v_remDays_522_; lean_object* v_fst_527_; lean_object* v_snd_528_; lean_object* v_snd_536_; lean_object* v_secs_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_414_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__0, &l_Std_Time_PlainDateTime_ofWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__0);
v___x_415_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_416_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v_daysPer400Y_417_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__5, &l_Std_Time_PlainDateTime_ofWallTime___closed__5_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__5);
v___x_418_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v_daysPer100Y_419_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__9, &l_Std_Time_PlainDateTime_ofWallTime___closed__9_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__9);
v___x_420_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_438_ = lean_unsigned_to_nat(1u);
v___x_439_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v_daysPer4Y_440_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__12, &l_Std_Time_PlainDateTime_ofWallTime___closed__12_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__12);
v___x_441_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_442_ = lean_int_mul(v_second_409_, v___x_441_);
lean_dec(v_second_409_);
v___x_443_ = lean_int_add(v___x_442_, v_nano_410_);
lean_dec(v_nano_410_);
lean_dec(v___x_442_);
v_secs_545_ = lean_int_div(v___x_443_, v___x_441_);
v___x_546_ = lean_int_mod(v___x_443_, v___x_441_);
v___x_547_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_548_ = lean_int_dec_lt(v___x_546_, v___x_547_);
lean_dec(v___x_546_);
if (v___x_548_ == 0)
{
v_snd_536_ = v_secs_545_;
goto v___jp_535_;
}
else
{
lean_object* v___x_549_; 
v___x_549_ = lean_int_sub(v_secs_545_, v___x_439_);
lean_dec(v_secs_545_);
v_snd_536_ = v___x_549_;
goto v___jp_535_;
}
v___jp_421_:
{
lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_430_ = lean_int_mod(v___y_423_, v___x_420_);
v___x_431_ = lean_nat_to_int(v___y_427_);
v___x_432_ = lean_int_dec_eq(v___x_430_, v___x_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_int_mod(v___y_423_, v___x_418_);
v___x_434_ = lean_int_dec_eq(v___x_433_, v___x_431_);
lean_dec(v___x_433_);
if (v___x_434_ == 0)
{
uint8_t v___x_435_; 
lean_dec(v___x_431_);
v___x_435_ = 1;
v___y_400_ = v___y_429_;
v___y_401_ = v___y_422_;
v___y_402_ = v___y_423_;
v___y_403_ = v___y_424_;
v___y_404_ = v___y_425_;
v___y_405_ = v___y_426_;
v___y_406_ = v___x_432_;
v___y_407_ = v___y_428_;
v___y_408_ = v___x_435_;
goto v___jp_399_;
}
else
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_int_mod(v___y_423_, v___x_416_);
v___x_437_ = lean_int_dec_eq(v___x_436_, v___x_431_);
lean_dec(v___x_431_);
lean_dec(v___x_436_);
v___y_400_ = v___y_429_;
v___y_401_ = v___y_422_;
v___y_402_ = v___y_423_;
v___y_403_ = v___y_424_;
v___y_404_ = v___y_425_;
v___y_405_ = v___y_426_;
v___y_406_ = v___x_432_;
v___y_407_ = v___y_428_;
v___y_408_ = v___x_437_;
goto v___jp_399_;
}
}
v___jp_444_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_450_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__13, &l_Std_Time_PlainDateTime_ofWallTime___closed__13_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__13);
v___x_451_ = lean_int_emod(v___y_446_, v___x_450_);
v___x_452_ = lean_int_ediv(v___y_446_, v___x_450_);
v___x_453_ = lean_int_emod(v___x_452_, v___x_450_);
lean_dec(v___x_452_);
v___x_454_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__14, &l_Std_Time_PlainDateTime_ofWallTime___closed__14_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__14);
v___x_455_ = lean_int_ediv(v___y_446_, v___x_454_);
lean_dec(v___y_446_);
v___x_456_ = lean_int_emod(v___x_443_, v___x_441_);
lean_dec(v___x_443_);
v___x_457_ = l_Fin_succ___redArg(v___y_445_);
lean_dec(v___y_445_);
v___x_458_ = lean_nat_dec_le(v___x_438_, v___x_457_);
if (v___x_458_ == 0)
{
lean_dec(v___x_457_);
v___y_422_ = v___x_456_;
v___y_423_ = v_year_449_;
v___y_424_ = v___x_455_;
v___y_425_ = v___x_451_;
v___y_426_ = v___x_453_;
v___y_427_ = v___y_447_;
v___y_428_ = v_hmon_448_;
v___y_429_ = v___x_439_;
goto v___jp_421_;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = lean_nat_to_int(v___x_457_);
v___y_422_ = v___x_456_;
v___y_423_ = v_year_449_;
v___y_424_ = v___x_455_;
v___y_425_ = v___x_451_;
v___y_426_ = v___x_453_;
v___y_427_ = v___y_447_;
v___y_428_ = v_hmon_448_;
v___y_429_ = v___x_459_;
goto v___jp_421_;
}
}
v___jp_460_:
{
lean_object* v___x_467_; lean_object* v_remDays_468_; lean_object* v___x_469_; lean_object* v_months_470_; lean_object* v___x_471_; lean_object* v_mon_472_; lean_object* v___x_474_; 
v___x_467_ = lean_int_mul(v_remYears_466_, v___x_415_);
v_remDays_468_ = lean_int_sub(v___y_463_, v___x_467_);
lean_dec(v___x_467_);
lean_dec(v___y_463_);
v___x_469_ = lean_unsigned_to_nat(31u);
v_months_470_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__28, &l_Std_Time_PlainDateTime_ofWallTime___closed__28_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__28);
v___x_471_ = lean_unsigned_to_nat(0u);
v_mon_472_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__29, &l_Std_Time_PlainDateTime_ofWallTime___closed__29_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__29);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v_mon_472_);
lean_ctor_set(v___x_412_, 0, v_remDays_468_);
v___x_474_ = v___x_412_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_remDays_468_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_mon_472_);
v___x_474_ = v_reuseFailAlloc_496_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_475_; lean_object* v_fst_476_; lean_object* v_snd_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_year_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_475_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_months_470_, v___x_474_);
v_fst_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_fst_476_);
v_snd_477_ = lean_ctor_get(v___x_475_, 1);
lean_inc(v_snd_477_);
lean_dec_ref(v___x_475_);
v___x_478_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__30, &l_Std_Time_PlainDateTime_ofWallTime___closed__30_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__30);
v___x_479_ = lean_int_add(v___x_478_, v_remYears_466_);
lean_dec(v_remYears_466_);
v___x_480_ = lean_int_mul(v___x_420_, v___y_464_);
lean_dec(v___y_464_);
v___x_481_ = lean_int_add(v___x_479_, v___x_480_);
lean_dec(v___x_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_int_mul(v___x_418_, v___y_462_);
lean_dec(v___y_462_);
v___x_483_ = lean_int_add(v___x_481_, v___x_482_);
lean_dec(v___x_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_int_mul(v___x_416_, v___y_461_);
lean_dec(v___y_461_);
v_year_485_ = lean_int_add(v___x_483_, v___x_484_);
lean_dec(v___x_484_);
lean_dec(v___x_483_);
v___x_486_ = l_Int_toNat(v_fst_476_);
lean_dec(v_fst_476_);
v___x_487_ = lean_nat_mod(v___x_486_, v___x_469_);
lean_dec(v___x_486_);
v___x_488_ = lean_unsigned_to_nat(10u);
v___x_489_ = lean_nat_dec_lt(v___x_488_, v_snd_477_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_unsigned_to_nat(2u);
v___x_491_ = lean_nat_add(v_snd_477_, v___x_490_);
lean_dec(v_snd_477_);
v___x_492_ = lean_nat_to_int(v___x_491_);
v___y_445_ = v___x_487_;
v___y_446_ = v___y_465_;
v___y_447_ = v___x_471_;
v_hmon_448_ = v___x_492_;
v_year_449_ = v_year_485_;
goto v___jp_444_;
}
else
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = lean_int_add(v_year_485_, v___x_439_);
lean_dec(v_year_485_);
v___x_494_ = lean_nat_sub(v_snd_477_, v___x_488_);
lean_dec(v_snd_477_);
v___x_495_ = lean_nat_to_int(v___x_494_);
v___y_445_ = v___x_487_;
v___y_446_ = v___y_465_;
v___y_447_ = v___x_471_;
v_hmon_448_ = v___x_495_;
v_year_449_ = v___x_493_;
goto v___jp_444_;
}
}
}
v___jp_497_:
{
lean_object* v___x_503_; lean_object* v_remDays_504_; lean_object* v_remYears_505_; uint8_t v___x_506_; 
v___x_503_ = lean_int_mul(v_quadrennialCycles_502_, v_daysPer4Y_440_);
v_remDays_504_ = lean_int_sub(v___y_501_, v___x_503_);
lean_dec(v___x_503_);
lean_dec(v___y_501_);
v_remYears_505_ = lean_int_ediv(v_remDays_504_, v___x_415_);
v___x_506_ = lean_int_dec_eq(v_remYears_505_, v___x_420_);
if (v___x_506_ == 0)
{
v___y_461_ = v___y_499_;
v___y_462_ = v___y_498_;
v___y_463_ = v_remDays_504_;
v___y_464_ = v_quadrennialCycles_502_;
v___y_465_ = v___y_500_;
v_remYears_466_ = v_remYears_505_;
goto v___jp_460_;
}
else
{
lean_object* v_remYears_507_; 
v_remYears_507_ = lean_int_sub(v_remYears_505_, v___x_439_);
lean_dec(v_remYears_505_);
v___y_461_ = v___y_499_;
v___y_462_ = v___y_498_;
v___y_463_ = v_remDays_504_;
v___y_464_ = v_quadrennialCycles_502_;
v___y_465_ = v___y_500_;
v_remYears_466_ = v_remYears_507_;
goto v___jp_460_;
}
}
v___jp_508_:
{
lean_object* v___x_513_; lean_object* v_remDays_514_; lean_object* v_quadrennialCycles_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_513_ = lean_int_mul(v_centenialCycles_512_, v_daysPer100Y_419_);
v_remDays_514_ = lean_int_sub(v___y_510_, v___x_513_);
lean_dec(v___x_513_);
lean_dec(v___y_510_);
v_quadrennialCycles_515_ = lean_int_ediv(v_remDays_514_, v_daysPer4Y_440_);
v___x_516_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__31, &l_Std_Time_PlainDateTime_ofWallTime___closed__31_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__31);
v___x_517_ = lean_int_dec_eq(v_quadrennialCycles_515_, v___x_516_);
if (v___x_517_ == 0)
{
v___y_498_ = v_centenialCycles_512_;
v___y_499_ = v___y_509_;
v___y_500_ = v___y_511_;
v___y_501_ = v_remDays_514_;
v_quadrennialCycles_502_ = v_quadrennialCycles_515_;
goto v___jp_497_;
}
else
{
lean_object* v_quadrennialCycles_518_; 
v_quadrennialCycles_518_ = lean_int_sub(v_quadrennialCycles_515_, v___x_439_);
lean_dec(v_quadrennialCycles_515_);
v___y_498_ = v_centenialCycles_512_;
v___y_499_ = v___y_509_;
v___y_500_ = v___y_511_;
v___y_501_ = v_remDays_514_;
v_quadrennialCycles_502_ = v_quadrennialCycles_518_;
goto v___jp_497_;
}
}
v___jp_519_:
{
lean_object* v_centenialCycles_523_; uint8_t v___x_524_; 
v_centenialCycles_523_ = lean_int_ediv(v_remDays_522_, v_daysPer100Y_419_);
v___x_524_ = lean_int_dec_eq(v_centenialCycles_523_, v___x_420_);
if (v___x_524_ == 0)
{
v___y_509_ = v_quadracentennialCycles_521_;
v___y_510_ = v_remDays_522_;
v___y_511_ = v___y_520_;
v_centenialCycles_512_ = v_centenialCycles_523_;
goto v___jp_508_;
}
else
{
lean_object* v_centenialCycles_525_; 
v_centenialCycles_525_ = lean_int_sub(v_centenialCycles_523_, v___x_439_);
lean_dec(v_centenialCycles_523_);
v___y_509_ = v_quadracentennialCycles_521_;
v___y_510_ = v_remDays_522_;
v___y_511_ = v___y_520_;
v_centenialCycles_512_ = v_centenialCycles_525_;
goto v___jp_508_;
}
}
v___jp_526_:
{
lean_object* v_quadracentennialCycles_529_; lean_object* v_remDays_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v_quadracentennialCycles_529_ = lean_int_ediv(v_snd_528_, v_daysPer400Y_417_);
v_remDays_530_ = lean_int_emod(v_snd_528_, v_daysPer400Y_417_);
lean_dec(v_snd_528_);
v___x_531_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_532_ = lean_int_dec_lt(v_remDays_530_, v___x_531_);
if (v___x_532_ == 0)
{
v___y_520_ = v_fst_527_;
v_quadracentennialCycles_521_ = v_quadracentennialCycles_529_;
v_remDays_522_ = v_remDays_530_;
goto v___jp_519_;
}
else
{
lean_object* v_remDays_533_; lean_object* v_quadracentennialCycles_534_; 
v_remDays_533_ = lean_int_add(v_remDays_530_, v_daysPer400Y_417_);
lean_dec(v_remDays_530_);
v_quadracentennialCycles_534_ = lean_int_sub(v_quadracentennialCycles_529_, v___x_439_);
lean_dec(v_quadracentennialCycles_529_);
v___y_520_ = v_fst_527_;
v_quadracentennialCycles_521_ = v_quadracentennialCycles_534_;
v_remDays_522_ = v_remDays_533_;
goto v___jp_519_;
}
}
v___jp_535_:
{
lean_object* v___x_537_; lean_object* v_boundedDaysSinceEpoch_538_; lean_object* v_rawDays_539_; lean_object* v_h_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_537_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v_boundedDaysSinceEpoch_538_ = lean_int_div(v_snd_536_, v___x_537_);
v_rawDays_539_ = lean_int_sub(v_boundedDaysSinceEpoch_538_, v___x_414_);
lean_dec(v_boundedDaysSinceEpoch_538_);
v_h_540_ = lean_int_mod(v_snd_536_, v___x_537_);
lean_dec(v_snd_536_);
v___x_541_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__32, &l_Std_Time_PlainDateTime_ofWallTime___closed__32_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__32);
v___x_542_ = lean_int_dec_le(v_h_540_, v___x_541_);
if (v___x_542_ == 0)
{
v_fst_527_ = v_h_540_;
v_snd_528_ = v_rawDays_539_;
goto v___jp_526_;
}
else
{
lean_object* v___x_543_; lean_object* v_rawDays_544_; 
v___x_543_ = lean_int_add(v_h_540_, v___x_537_);
lean_dec(v_h_540_);
v_rawDays_544_ = lean_int_sub(v_rawDays_539_, v___x_439_);
lean_dec(v_rawDays_539_);
v_fst_527_ = v___x_543_;
v_snd_528_ = v_rawDays_544_;
goto v___jp_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0(lean_object* v_as_551_, lean_object* v_as_x27_552_, lean_object* v_b_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_as_x27_552_, v_b_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___boxed(lean_object* v_as_556_, lean_object* v_as_x27_557_, lean_object* v_b_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0(v_as_556_, v_as_x27_557_, v_b_558_, v_a_559_);
lean_dec(v_as_x27_557_);
lean_dec(v_as_556_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toEpochDay(lean_object* v_pdt_561_){
_start:
{
lean_object* v_date_562_; lean_object* v___x_563_; 
v_date_562_ = lean_ctor_get(v_pdt_561_, 0);
lean_inc_ref(v_date_562_);
lean_dec_ref(v_pdt_561_);
v___x_563_ = l_Std_Time_PlainDate_toEpochDay(v_date_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay(lean_object* v_days_564_, lean_object* v_time_565_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = l_Std_Time_PlainDate_ofEpochDay(v_days_564_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_time_565_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay___boxed(lean_object* v_days_568_, lean_object* v_time_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_Time_PlainDateTime_ofEpochDay(v_days_568_, v_time_569_);
lean_dec(v_days_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday(lean_object* v_dt_571_, uint8_t v_desiredWeekday_572_){
_start:
{
lean_object* v_date_573_; lean_object* v_time_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_582_; 
v_date_573_ = lean_ctor_get(v_dt_571_, 0);
v_time_574_ = lean_ctor_get(v_dt_571_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_dt_571_);
if (v_isSharedCheck_582_ == 0)
{
v___x_576_ = v_dt_571_;
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_time_574_);
lean_inc(v_date_573_);
lean_dec(v_dt_571_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_578_ = l_Std_Time_PlainDate_withWeekday(v_date_573_, v_desiredWeekday_572_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v___x_578_);
v___x_580_ = v___x_576_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_time_574_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday___boxed(lean_object* v_dt_583_, lean_object* v_desiredWeekday_584_){
_start:
{
uint8_t v_desiredWeekday_boxed_585_; lean_object* v_res_586_; 
v_desiredWeekday_boxed_585_ = lean_unbox(v_desiredWeekday_584_);
v_res_586_ = l_Std_Time_PlainDateTime_withWeekday(v_dt_583_, v_desiredWeekday_boxed_585_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysClip(lean_object* v_dt_587_, lean_object* v_days_588_){
_start:
{
lean_object* v_date_589_; lean_object* v_time_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_630_; 
v_date_589_ = lean_ctor_get(v_dt_587_, 0);
v_time_590_ = lean_ctor_get(v_dt_587_, 1);
v_isSharedCheck_630_ = !lean_is_exclusive(v_dt_587_);
if (v_isSharedCheck_630_ == 0)
{
v___x_592_ = v_dt_587_;
v_isShared_593_ = v_isSharedCheck_630_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_time_590_);
lean_inc(v_date_589_);
lean_dec(v_dt_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_630_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v_year_594_; lean_object* v_month_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_628_; 
v_year_594_ = lean_ctor_get(v_date_589_, 0);
v_month_595_ = lean_ctor_get(v_date_589_, 1);
v_isSharedCheck_628_ = !lean_is_exclusive(v_date_589_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v_date_589_, 2);
lean_dec(v_unused_629_);
v___x_597_ = v_date_589_;
v_isShared_598_ = v_isSharedCheck_628_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_month_595_);
lean_inc(v_year_594_);
lean_dec(v_date_589_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_628_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
uint8_t v___y_600_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; uint8_t v___y_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_615_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_616_ = lean_int_mod(v_year_594_, v___x_615_);
v___x_617_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_618_ = lean_int_dec_eq(v___x_616_, v___x_617_);
lean_dec(v___x_616_);
v___x_621_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_622_ = lean_int_mod(v_year_594_, v___x_621_);
v___x_623_ = lean_int_dec_eq(v___x_622_, v___x_617_);
lean_dec(v___x_622_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; 
v___x_624_ = 1;
v___y_620_ = v___x_624_;
goto v___jp_619_;
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_625_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_626_ = lean_int_mod(v_year_594_, v___x_625_);
v___x_627_ = lean_int_dec_eq(v___x_626_, v___x_617_);
lean_dec(v___x_626_);
v___y_620_ = v___x_627_;
goto v___jp_619_;
}
v___jp_599_:
{
lean_object* v_max_601_; uint8_t v___x_602_; 
v_max_601_ = l_Std_Time_Month_Ordinal_days(v___y_600_, v_month_595_);
v___x_602_ = lean_int_dec_lt(v_max_601_, v_days_588_);
if (v___x_602_ == 0)
{
lean_object* v___x_604_; 
lean_dec(v_max_601_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 2, v_days_588_);
v___x_604_ = v___x_597_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_year_594_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_month_595_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_days_588_);
v___x_604_ = v_reuseFailAlloc_608_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_604_);
v___x_606_ = v___x_592_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_time_590_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
lean_object* v___x_610_; 
lean_dec(v_days_588_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 2, v_max_601_);
v___x_610_ = v___x_597_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_year_594_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_month_595_);
lean_ctor_set(v_reuseFailAlloc_614_, 2, v_max_601_);
v___x_610_ = v_reuseFailAlloc_614_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_612_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v___x_610_);
v___x_612_ = v___x_592_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v_time_590_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
v___jp_619_:
{
if (v___x_618_ == 0)
{
v___y_600_ = v___x_618_;
goto v___jp_599_;
}
else
{
v___y_600_ = v___y_620_;
goto v___jp_599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver(lean_object* v_dt_631_, lean_object* v_days_632_){
_start:
{
lean_object* v_date_633_; lean_object* v_time_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_644_; 
v_date_633_ = lean_ctor_get(v_dt_631_, 0);
v_time_634_ = lean_ctor_get(v_dt_631_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_dt_631_);
if (v_isSharedCheck_644_ == 0)
{
v___x_636_ = v_dt_631_;
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_time_634_);
lean_inc(v_date_633_);
lean_dec(v_dt_631_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v_year_638_; lean_object* v_month_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v_year_638_ = lean_ctor_get(v_date_633_, 0);
lean_inc(v_year_638_);
v_month_639_ = lean_ctor_get(v_date_633_, 1);
lean_inc(v_month_639_);
lean_dec_ref(v_date_633_);
v___x_640_ = l_Std_Time_PlainDate_rollOver(v_year_638_, v_month_639_, v_days_632_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_640_);
v___x_642_ = v___x_636_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_time_634_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver___boxed(lean_object* v_dt_645_, lean_object* v_days_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Std_Time_PlainDateTime_withDaysRollOver(v_dt_645_, v_days_646_);
lean_dec(v_days_646_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthClip(lean_object* v_dt_648_, lean_object* v_month_649_){
_start:
{
lean_object* v_date_650_; lean_object* v_time_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_691_; 
v_date_650_ = lean_ctor_get(v_dt_648_, 0);
v_time_651_ = lean_ctor_get(v_dt_648_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v_dt_648_);
if (v_isSharedCheck_691_ == 0)
{
v___x_653_ = v_dt_648_;
v_isShared_654_ = v_isSharedCheck_691_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_time_651_);
lean_inc(v_date_650_);
lean_dec(v_dt_648_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_691_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v_year_655_; lean_object* v_day_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_689_; 
v_year_655_ = lean_ctor_get(v_date_650_, 0);
v_day_656_ = lean_ctor_get(v_date_650_, 2);
v_isSharedCheck_689_ = !lean_is_exclusive(v_date_650_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v_date_650_, 1);
lean_dec(v_unused_690_);
v___x_658_ = v_date_650_;
v_isShared_659_ = v_isSharedCheck_689_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_day_656_);
lean_inc(v_year_655_);
lean_dec(v_date_650_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_689_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
uint8_t v___y_661_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; uint8_t v___y_681_; lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_676_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_677_ = lean_int_mod(v_year_655_, v___x_676_);
v___x_678_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_679_ = lean_int_dec_eq(v___x_677_, v___x_678_);
lean_dec(v___x_677_);
v___x_682_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_683_ = lean_int_mod(v_year_655_, v___x_682_);
v___x_684_ = lean_int_dec_eq(v___x_683_, v___x_678_);
lean_dec(v___x_683_);
if (v___x_684_ == 0)
{
uint8_t v___x_685_; 
v___x_685_ = 1;
v___y_681_ = v___x_685_;
goto v___jp_680_;
}
else
{
lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_686_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_687_ = lean_int_mod(v_year_655_, v___x_686_);
v___x_688_ = lean_int_dec_eq(v___x_687_, v___x_678_);
lean_dec(v___x_687_);
v___y_681_ = v___x_688_;
goto v___jp_680_;
}
v___jp_660_:
{
lean_object* v_max_662_; uint8_t v___x_663_; 
v_max_662_ = l_Std_Time_Month_Ordinal_days(v___y_661_, v_month_649_);
v___x_663_ = lean_int_dec_lt(v_max_662_, v_day_656_);
if (v___x_663_ == 0)
{
lean_object* v___x_665_; 
lean_dec(v_max_662_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v_month_649_);
v___x_665_ = v___x_658_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_year_655_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_month_649_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_day_656_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_665_);
v___x_667_ = v___x_653_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_time_651_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
else
{
lean_object* v___x_671_; 
lean_dec(v_day_656_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 2, v_max_662_);
lean_ctor_set(v___x_658_, 1, v_month_649_);
v___x_671_ = v___x_658_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_year_655_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_month_649_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v_max_662_);
v___x_671_ = v_reuseFailAlloc_675_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_673_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_671_);
v___x_673_ = v___x_653_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v_time_651_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
v___jp_680_:
{
if (v___x_679_ == 0)
{
v___y_661_ = v___x_679_;
goto v___jp_660_;
}
else
{
v___y_661_ = v___y_681_;
goto v___jp_660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthRollOver(lean_object* v_dt_692_, lean_object* v_month_693_){
_start:
{
lean_object* v_date_694_; lean_object* v_time_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_705_; 
v_date_694_ = lean_ctor_get(v_dt_692_, 0);
v_time_695_ = lean_ctor_get(v_dt_692_, 1);
v_isSharedCheck_705_ = !lean_is_exclusive(v_dt_692_);
if (v_isSharedCheck_705_ == 0)
{
v___x_697_ = v_dt_692_;
v_isShared_698_ = v_isSharedCheck_705_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_time_695_);
lean_inc(v_date_694_);
lean_dec(v_dt_692_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_705_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_year_699_; lean_object* v_day_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v_year_699_ = lean_ctor_get(v_date_694_, 0);
lean_inc(v_year_699_);
v_day_700_ = lean_ctor_get(v_date_694_, 2);
lean_inc(v_day_700_);
lean_dec_ref(v_date_694_);
v___x_701_ = l_Std_Time_PlainDate_rollOver(v_year_699_, v_month_693_, v_day_700_);
lean_dec(v_day_700_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_701_);
v___x_703_ = v___x_697_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_time_695_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearClip(lean_object* v_dt_706_, lean_object* v_year_707_){
_start:
{
lean_object* v_date_708_; lean_object* v_time_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_749_; 
v_date_708_ = lean_ctor_get(v_dt_706_, 0);
v_time_709_ = lean_ctor_get(v_dt_706_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v_dt_706_);
if (v_isSharedCheck_749_ == 0)
{
v___x_711_ = v_dt_706_;
v_isShared_712_ = v_isSharedCheck_749_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_time_709_);
lean_inc(v_date_708_);
lean_dec(v_dt_706_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_749_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_month_713_; lean_object* v_day_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_747_; 
v_month_713_ = lean_ctor_get(v_date_708_, 1);
v_day_714_ = lean_ctor_get(v_date_708_, 2);
v_isSharedCheck_747_ = !lean_is_exclusive(v_date_708_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; 
v_unused_748_ = lean_ctor_get(v_date_708_, 0);
lean_dec(v_unused_748_);
v___x_716_ = v_date_708_;
v_isShared_717_ = v_isSharedCheck_747_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_day_714_);
lean_inc(v_month_713_);
lean_dec(v_date_708_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_747_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
uint8_t v___y_719_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; uint8_t v___y_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_734_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_735_ = lean_int_mod(v_year_707_, v___x_734_);
v___x_736_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_737_ = lean_int_dec_eq(v___x_735_, v___x_736_);
lean_dec(v___x_735_);
v___x_740_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_741_ = lean_int_mod(v_year_707_, v___x_740_);
v___x_742_ = lean_int_dec_eq(v___x_741_, v___x_736_);
lean_dec(v___x_741_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = 1;
v___y_739_ = v___x_743_;
goto v___jp_738_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_744_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_745_ = lean_int_mod(v_year_707_, v___x_744_);
v___x_746_ = lean_int_dec_eq(v___x_745_, v___x_736_);
lean_dec(v___x_745_);
v___y_739_ = v___x_746_;
goto v___jp_738_;
}
v___jp_718_:
{
lean_object* v_max_720_; uint8_t v___x_721_; 
v_max_720_ = l_Std_Time_Month_Ordinal_days(v___y_719_, v_month_713_);
v___x_721_ = lean_int_dec_lt(v_max_720_, v_day_714_);
if (v___x_721_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v_max_720_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v_year_707_);
v___x_723_ = v___x_716_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_year_707_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_month_713_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_day_714_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_725_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_723_);
v___x_725_ = v___x_711_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_time_709_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
else
{
lean_object* v___x_729_; 
lean_dec(v_day_714_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 2, v_max_720_);
lean_ctor_set(v___x_716_, 0, v_year_707_);
v___x_729_ = v___x_716_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_year_707_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_month_713_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_max_720_);
v___x_729_ = v_reuseFailAlloc_733_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_731_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_729_);
v___x_731_ = v___x_711_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v_time_709_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
v___jp_738_:
{
if (v___x_737_ == 0)
{
v___y_719_ = v___x_737_;
goto v___jp_718_;
}
else
{
v___y_719_ = v___y_739_;
goto v___jp_718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearRollOver(lean_object* v_dt_750_, lean_object* v_year_751_){
_start:
{
lean_object* v_date_752_; lean_object* v_time_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_763_; 
v_date_752_ = lean_ctor_get(v_dt_750_, 0);
v_time_753_ = lean_ctor_get(v_dt_750_, 1);
v_isSharedCheck_763_ = !lean_is_exclusive(v_dt_750_);
if (v_isSharedCheck_763_ == 0)
{
v___x_755_ = v_dt_750_;
v_isShared_756_ = v_isSharedCheck_763_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_time_753_);
lean_inc(v_date_752_);
lean_dec(v_dt_750_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_763_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v_month_757_; lean_object* v_day_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v_month_757_ = lean_ctor_get(v_date_752_, 1);
lean_inc(v_month_757_);
v_day_758_ = lean_ctor_get(v_date_752_, 2);
lean_inc(v_day_758_);
lean_dec_ref(v_date_752_);
v___x_759_ = l_Std_Time_PlainDate_rollOver(v_year_751_, v_month_757_, v_day_758_);
lean_dec(v_day_758_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_759_);
v___x_761_ = v___x_755_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_time_753_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withHours(lean_object* v_dt_764_, lean_object* v_hour_765_){
_start:
{
lean_object* v_time_766_; lean_object* v_date_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_785_; 
v_time_766_ = lean_ctor_get(v_dt_764_, 1);
v_date_767_ = lean_ctor_get(v_dt_764_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v_dt_764_);
if (v_isSharedCheck_785_ == 0)
{
v___x_769_ = v_dt_764_;
v_isShared_770_ = v_isSharedCheck_785_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_time_766_);
lean_inc(v_date_767_);
lean_dec(v_dt_764_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_785_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_minute_771_; lean_object* v_second_772_; lean_object* v_nanosecond_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_783_; 
v_minute_771_ = lean_ctor_get(v_time_766_, 1);
v_second_772_ = lean_ctor_get(v_time_766_, 2);
v_nanosecond_773_ = lean_ctor_get(v_time_766_, 3);
v_isSharedCheck_783_ = !lean_is_exclusive(v_time_766_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_time_766_, 0);
lean_dec(v_unused_784_);
v___x_775_ = v_time_766_;
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_nanosecond_773_);
lean_inc(v_second_772_);
lean_inc(v_minute_771_);
lean_dec(v_time_766_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v_hour_765_);
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_hour_765_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_minute_771_);
lean_ctor_set(v_reuseFailAlloc_782_, 2, v_second_772_);
lean_ctor_set(v_reuseFailAlloc_782_, 3, v_nanosecond_773_);
v___x_778_ = v_reuseFailAlloc_782_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_780_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_778_);
v___x_780_ = v___x_769_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_date_767_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMinutes(lean_object* v_dt_786_, lean_object* v_minute_787_){
_start:
{
lean_object* v_time_788_; lean_object* v_date_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_807_; 
v_time_788_ = lean_ctor_get(v_dt_786_, 1);
v_date_789_ = lean_ctor_get(v_dt_786_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_dt_786_);
if (v_isSharedCheck_807_ == 0)
{
v___x_791_ = v_dt_786_;
v_isShared_792_ = v_isSharedCheck_807_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_time_788_);
lean_inc(v_date_789_);
lean_dec(v_dt_786_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_807_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v_hour_793_; lean_object* v_second_794_; lean_object* v_nanosecond_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_805_; 
v_hour_793_ = lean_ctor_get(v_time_788_, 0);
v_second_794_ = lean_ctor_get(v_time_788_, 2);
v_nanosecond_795_ = lean_ctor_get(v_time_788_, 3);
v_isSharedCheck_805_ = !lean_is_exclusive(v_time_788_);
if (v_isSharedCheck_805_ == 0)
{
lean_object* v_unused_806_; 
v_unused_806_ = lean_ctor_get(v_time_788_, 1);
lean_dec(v_unused_806_);
v___x_797_ = v_time_788_;
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_nanosecond_795_);
lean_inc(v_second_794_);
lean_inc(v_hour_793_);
lean_dec(v_time_788_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v_minute_787_);
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_hour_793_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_minute_787_);
lean_ctor_set(v_reuseFailAlloc_804_, 2, v_second_794_);
lean_ctor_set(v_reuseFailAlloc_804_, 3, v_nanosecond_795_);
v___x_800_ = v_reuseFailAlloc_804_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_802_; 
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v___x_800_);
v___x_802_ = v___x_791_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_date_789_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withSeconds(lean_object* v_dt_808_, lean_object* v_second_809_){
_start:
{
lean_object* v_time_810_; lean_object* v_date_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_829_; 
v_time_810_ = lean_ctor_get(v_dt_808_, 1);
v_date_811_ = lean_ctor_get(v_dt_808_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v_dt_808_);
if (v_isSharedCheck_829_ == 0)
{
v___x_813_ = v_dt_808_;
v_isShared_814_ = v_isSharedCheck_829_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_time_810_);
lean_inc(v_date_811_);
lean_dec(v_dt_808_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_829_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_hour_815_; lean_object* v_minute_816_; lean_object* v_nanosecond_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_827_; 
v_hour_815_ = lean_ctor_get(v_time_810_, 0);
v_minute_816_ = lean_ctor_get(v_time_810_, 1);
v_nanosecond_817_ = lean_ctor_get(v_time_810_, 3);
v_isSharedCheck_827_ = !lean_is_exclusive(v_time_810_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; 
v_unused_828_ = lean_ctor_get(v_time_810_, 2);
lean_dec(v_unused_828_);
v___x_819_ = v_time_810_;
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_nanosecond_817_);
lean_inc(v_minute_816_);
lean_inc(v_hour_815_);
lean_dec(v_time_810_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 2, v_second_809_);
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_hour_815_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_minute_816_);
lean_ctor_set(v_reuseFailAlloc_826_, 2, v_second_809_);
lean_ctor_set(v_reuseFailAlloc_826_, 3, v_nanosecond_817_);
v___x_822_ = v_reuseFailAlloc_826_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_824_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v___x_822_);
v___x_824_ = v___x_813_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_date_811_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_unsigned_to_nat(1000u);
v___x_831_ = lean_nat_to_int(v___x_830_);
return v___x_831_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(1000000u);
v___x_833_ = lean_nat_to_int(v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds(lean_object* v_dt_834_, lean_object* v_millis_835_){
_start:
{
lean_object* v_time_836_; lean_object* v_date_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_860_; 
v_time_836_ = lean_ctor_get(v_dt_834_, 1);
v_date_837_ = lean_ctor_get(v_dt_834_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v_dt_834_);
if (v_isSharedCheck_860_ == 0)
{
v___x_839_ = v_dt_834_;
v_isShared_840_ = v_isSharedCheck_860_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_time_836_);
lean_inc(v_date_837_);
lean_dec(v_dt_834_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_860_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_hour_841_; lean_object* v_minute_842_; lean_object* v_second_843_; lean_object* v_nanosecond_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_859_; 
v_hour_841_ = lean_ctor_get(v_time_836_, 0);
v_minute_842_ = lean_ctor_get(v_time_836_, 1);
v_second_843_ = lean_ctor_get(v_time_836_, 2);
v_nanosecond_844_ = lean_ctor_get(v_time_836_, 3);
v_isSharedCheck_859_ = !lean_is_exclusive(v_time_836_);
if (v_isSharedCheck_859_ == 0)
{
v___x_846_ = v_time_836_;
v_isShared_847_ = v_isSharedCheck_859_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_nanosecond_844_);
lean_inc(v_second_843_);
lean_inc(v_minute_842_);
lean_inc(v_hour_841_);
lean_dec(v_time_836_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_859_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_848_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__0, &l_Std_Time_PlainDateTime_withMilliseconds___closed__0_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__0);
v___x_849_ = lean_int_emod(v_nanosecond_844_, v___x_848_);
lean_dec(v_nanosecond_844_);
v___x_850_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_851_ = lean_int_mul(v_millis_835_, v___x_850_);
v___x_852_ = lean_int_add(v___x_851_, v___x_849_);
lean_dec(v___x_849_);
lean_dec(v___x_851_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 3, v___x_852_);
v___x_854_ = v___x_846_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_hour_841_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_minute_842_);
lean_ctor_set(v_reuseFailAlloc_858_, 2, v_second_843_);
lean_ctor_set(v_reuseFailAlloc_858_, 3, v___x_852_);
v___x_854_ = v_reuseFailAlloc_858_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_856_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_854_);
v___x_856_ = v___x_839_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_date_837_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds___boxed(lean_object* v_dt_861_, lean_object* v_millis_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Time_PlainDateTime_withMilliseconds(v_dt_861_, v_millis_862_);
lean_dec(v_millis_862_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withNanoseconds(lean_object* v_dt_864_, lean_object* v_nano_865_){
_start:
{
lean_object* v_time_866_; lean_object* v_date_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_885_; 
v_time_866_ = lean_ctor_get(v_dt_864_, 1);
v_date_867_ = lean_ctor_get(v_dt_864_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v_dt_864_);
if (v_isSharedCheck_885_ == 0)
{
v___x_869_ = v_dt_864_;
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_time_866_);
lean_inc(v_date_867_);
lean_dec(v_dt_864_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v_hour_871_; lean_object* v_minute_872_; lean_object* v_second_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_883_; 
v_hour_871_ = lean_ctor_get(v_time_866_, 0);
v_minute_872_ = lean_ctor_get(v_time_866_, 1);
v_second_873_ = lean_ctor_get(v_time_866_, 2);
v_isSharedCheck_883_ = !lean_is_exclusive(v_time_866_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v_time_866_, 3);
lean_dec(v_unused_884_);
v___x_875_ = v_time_866_;
v_isShared_876_ = v_isSharedCheck_883_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_second_873_);
lean_inc(v_minute_872_);
lean_inc(v_hour_871_);
lean_dec(v_time_866_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_883_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 3, v_nano_865_);
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_hour_871_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_minute_872_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_second_873_);
lean_ctor_set(v_reuseFailAlloc_882_, 3, v_nano_865_);
v___x_878_ = v_reuseFailAlloc_882_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_880_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_878_);
v___x_880_ = v___x_869_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_date_867_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays(lean_object* v_dt_886_, lean_object* v_days_887_){
_start:
{
lean_object* v_date_888_; lean_object* v_time_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_899_; 
v_date_888_ = lean_ctor_get(v_dt_886_, 0);
v_time_889_ = lean_ctor_get(v_dt_886_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_dt_886_);
if (v_isSharedCheck_899_ == 0)
{
v___x_891_ = v_dt_886_;
v_isShared_892_ = v_isSharedCheck_899_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_time_889_);
lean_inc(v_date_888_);
lean_dec(v_dt_886_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_899_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v_dateDays_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_897_; 
v_dateDays_893_ = l_Std_Time_PlainDate_toEpochDay(v_date_888_);
v___x_894_ = lean_int_add(v_dateDays_893_, v_days_887_);
lean_dec(v_dateDays_893_);
v___x_895_ = l_Std_Time_PlainDate_ofEpochDay(v___x_894_);
lean_dec(v___x_894_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_895_);
v___x_897_ = v___x_891_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_time_889_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays___boxed(lean_object* v_dt_900_, lean_object* v_days_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Std_Time_PlainDateTime_addDays(v_dt_900_, v_days_901_);
lean_dec(v_days_901_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays(lean_object* v_dt_903_, lean_object* v_days_904_){
_start:
{
lean_object* v_date_905_; lean_object* v_time_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_917_; 
v_date_905_ = lean_ctor_get(v_dt_903_, 0);
v_time_906_ = lean_ctor_get(v_dt_903_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v_dt_903_);
if (v_isSharedCheck_917_ == 0)
{
v___x_908_ = v_dt_903_;
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_time_906_);
lean_inc(v_date_905_);
lean_dec(v_dt_903_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v_dateDays_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_910_ = lean_int_neg(v_days_904_);
v_dateDays_911_ = l_Std_Time_PlainDate_toEpochDay(v_date_905_);
v___x_912_ = lean_int_add(v_dateDays_911_, v___x_910_);
lean_dec(v___x_910_);
lean_dec(v_dateDays_911_);
v___x_913_ = l_Std_Time_PlainDate_ofEpochDay(v___x_912_);
lean_dec(v___x_912_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_913_);
v___x_915_ = v___x_908_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_time_906_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays___boxed(lean_object* v_dt_918_, lean_object* v_days_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Std_Time_PlainDateTime_subDays(v_dt_918_, v_days_919_);
lean_dec(v_days_919_);
return v_res_920_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addWeeks___closed__0(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_unsigned_to_nat(7u);
v___x_922_ = lean_nat_to_int(v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks(lean_object* v_dt_923_, lean_object* v_weeks_924_){
_start:
{
lean_object* v_date_925_; lean_object* v_time_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_938_; 
v_date_925_ = lean_ctor_get(v_dt_923_, 0);
v_time_926_ = lean_ctor_get(v_dt_923_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v_dt_923_);
if (v_isSharedCheck_938_ == 0)
{
v___x_928_ = v_dt_923_;
v_isShared_929_ = v_isSharedCheck_938_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_time_926_);
lean_inc(v_date_925_);
lean_dec(v_dt_923_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_938_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v_dateDays_930_; lean_object* v___x_931_; lean_object* v_daysToAdd_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_936_; 
v_dateDays_930_ = l_Std_Time_PlainDate_toEpochDay(v_date_925_);
v___x_931_ = lean_obj_once(&l_Std_Time_PlainDateTime_addWeeks___closed__0, &l_Std_Time_PlainDateTime_addWeeks___closed__0_once, _init_l_Std_Time_PlainDateTime_addWeeks___closed__0);
v_daysToAdd_932_ = lean_int_mul(v_weeks_924_, v___x_931_);
v___x_933_ = lean_int_add(v_dateDays_930_, v_daysToAdd_932_);
lean_dec(v_daysToAdd_932_);
lean_dec(v_dateDays_930_);
v___x_934_ = l_Std_Time_PlainDate_ofEpochDay(v___x_933_);
lean_dec(v___x_933_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_934_);
v___x_936_ = v___x_928_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_time_926_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks___boxed(lean_object* v_dt_939_, lean_object* v_weeks_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Std_Time_PlainDateTime_addWeeks(v_dt_939_, v_weeks_940_);
lean_dec(v_weeks_940_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks(lean_object* v_dt_942_, lean_object* v_weeks_943_){
_start:
{
lean_object* v_date_944_; lean_object* v_time_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_958_; 
v_date_944_ = lean_ctor_get(v_dt_942_, 0);
v_time_945_ = lean_ctor_get(v_dt_942_, 1);
v_isSharedCheck_958_ = !lean_is_exclusive(v_dt_942_);
if (v_isSharedCheck_958_ == 0)
{
v___x_947_ = v_dt_942_;
v_isShared_948_ = v_isSharedCheck_958_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_time_945_);
lean_inc(v_date_944_);
lean_dec(v_dt_942_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_958_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v_dateDays_950_; lean_object* v___x_951_; lean_object* v_daysToAdd_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_949_ = lean_int_neg(v_weeks_943_);
v_dateDays_950_ = l_Std_Time_PlainDate_toEpochDay(v_date_944_);
v___x_951_ = lean_obj_once(&l_Std_Time_PlainDateTime_addWeeks___closed__0, &l_Std_Time_PlainDateTime_addWeeks___closed__0_once, _init_l_Std_Time_PlainDateTime_addWeeks___closed__0);
v_daysToAdd_952_ = lean_int_mul(v___x_949_, v___x_951_);
lean_dec(v___x_949_);
v___x_953_ = lean_int_add(v_dateDays_950_, v_daysToAdd_952_);
lean_dec(v_daysToAdd_952_);
lean_dec(v_dateDays_950_);
v___x_954_ = l_Std_Time_PlainDate_ofEpochDay(v___x_953_);
lean_dec(v___x_953_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 0, v___x_954_);
v___x_956_ = v___x_947_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_time_945_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks___boxed(lean_object* v_dt_959_, lean_object* v_weeks_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Std_Time_PlainDateTime_subWeeks(v_dt_959_, v_weeks_960_);
lean_dec(v_weeks_960_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip(lean_object* v_dt_962_, lean_object* v_months_963_){
_start:
{
lean_object* v_date_964_; lean_object* v_time_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_973_; 
v_date_964_ = lean_ctor_get(v_dt_962_, 0);
v_time_965_ = lean_ctor_get(v_dt_962_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_dt_962_);
if (v_isSharedCheck_973_ == 0)
{
v___x_967_ = v_dt_962_;
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_time_965_);
lean_inc(v_date_964_);
lean_dec(v_dt_962_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_969_ = l_Std_Time_PlainDate_addMonthsClip(v_date_964_, v_months_963_);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v___x_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_time_965_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip___boxed(lean_object* v_dt_974_, lean_object* v_months_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Std_Time_PlainDateTime_addMonthsClip(v_dt_974_, v_months_975_);
lean_dec(v_months_975_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip(lean_object* v_dt_977_, lean_object* v_months_978_){
_start:
{
lean_object* v_date_979_; lean_object* v_time_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_989_; 
v_date_979_ = lean_ctor_get(v_dt_977_, 0);
v_time_980_ = lean_ctor_get(v_dt_977_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v_dt_977_);
if (v_isSharedCheck_989_ == 0)
{
v___x_982_ = v_dt_977_;
v_isShared_983_ = v_isSharedCheck_989_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_time_980_);
lean_inc(v_date_979_);
lean_dec(v_dt_977_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_989_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_984_ = lean_int_neg(v_months_978_);
v___x_985_ = l_Std_Time_PlainDate_addMonthsClip(v_date_979_, v___x_984_);
lean_dec(v___x_984_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_985_);
v___x_987_ = v___x_982_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_time_980_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip___boxed(lean_object* v_dt_990_, lean_object* v_months_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Std_Time_PlainDateTime_subMonthsClip(v_dt_990_, v_months_991_);
lean_dec(v_months_991_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver(lean_object* v_dt_993_, lean_object* v_months_994_){
_start:
{
lean_object* v_date_995_; lean_object* v_time_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1004_; 
v_date_995_ = lean_ctor_get(v_dt_993_, 0);
v_time_996_ = lean_ctor_get(v_dt_993_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_dt_993_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_998_ = v_dt_993_;
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_time_996_);
lean_inc(v_date_995_);
lean_dec(v_dt_993_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1004_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_1000_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_995_, v_months_994_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1000_);
v___x_1002_ = v___x_998_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_time_996_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver___boxed(lean_object* v_dt_1005_, lean_object* v_months_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Std_Time_PlainDateTime_addMonthsRollOver(v_dt_1005_, v_months_1006_);
lean_dec(v_months_1006_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver(lean_object* v_dt_1008_, lean_object* v_months_1009_){
_start:
{
lean_object* v_date_1010_; lean_object* v_time_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1020_; 
v_date_1010_ = lean_ctor_get(v_dt_1008_, 0);
v_time_1011_ = lean_ctor_get(v_dt_1008_, 1);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_dt_1008_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1013_ = v_dt_1008_;
v_isShared_1014_ = v_isSharedCheck_1020_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_time_1011_);
lean_inc(v_date_1010_);
lean_dec(v_dt_1008_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1020_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1015_ = lean_int_neg(v_months_1009_);
v___x_1016_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1010_, v___x_1015_);
lean_dec(v___x_1015_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v___x_1016_);
v___x_1018_ = v___x_1013_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_time_1011_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver___boxed(lean_object* v_dt_1021_, lean_object* v_months_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Std_Time_PlainDateTime_subMonthsRollOver(v_dt_1021_, v_months_1022_);
lean_dec(v_months_1022_);
return v_res_1023_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(12u);
v___x_1025_ = lean_nat_to_int(v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver(lean_object* v_dt_1026_, lean_object* v_years_1027_){
_start:
{
lean_object* v_date_1028_; lean_object* v_time_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1039_; 
v_date_1028_ = lean_ctor_get(v_dt_1026_, 0);
v_time_1029_ = lean_ctor_get(v_dt_1026_, 1);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_dt_1026_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1031_ = v_dt_1026_;
v_isShared_1032_ = v_isSharedCheck_1039_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_time_1029_);
lean_inc(v_date_1028_);
lean_dec(v_dt_1026_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1039_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1033_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1034_ = lean_int_mul(v_years_1027_, v___x_1033_);
v___x_1035_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1028_, v___x_1034_);
lean_dec(v___x_1034_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1035_);
v___x_1037_ = v___x_1031_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_time_1029_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver___boxed(lean_object* v_dt_1040_, lean_object* v_years_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Std_Time_PlainDateTime_addYearsRollOver(v_dt_1040_, v_years_1041_);
lean_dec(v_years_1041_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip(lean_object* v_dt_1043_, lean_object* v_years_1044_){
_start:
{
lean_object* v_date_1045_; lean_object* v_time_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1056_; 
v_date_1045_ = lean_ctor_get(v_dt_1043_, 0);
v_time_1046_ = lean_ctor_get(v_dt_1043_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_dt_1043_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1048_ = v_dt_1043_;
v_isShared_1049_ = v_isSharedCheck_1056_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_time_1046_);
lean_inc(v_date_1045_);
lean_dec(v_dt_1043_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1056_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1050_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1051_ = lean_int_mul(v_years_1044_, v___x_1050_);
v___x_1052_ = l_Std_Time_PlainDate_addMonthsClip(v_date_1045_, v___x_1051_);
lean_dec(v___x_1051_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1052_);
v___x_1054_ = v___x_1048_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v_time_1046_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip___boxed(lean_object* v_dt_1057_, lean_object* v_years_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Std_Time_PlainDateTime_addYearsClip(v_dt_1057_, v_years_1058_);
lean_dec(v_years_1058_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver(lean_object* v_dt_1060_, lean_object* v_years_1061_){
_start:
{
lean_object* v_date_1062_; lean_object* v_time_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1074_; 
v_date_1062_ = lean_ctor_get(v_dt_1060_, 0);
v_time_1063_ = lean_ctor_get(v_dt_1060_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_dt_1060_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1065_ = v_dt_1060_;
v_isShared_1066_ = v_isSharedCheck_1074_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_time_1063_);
lean_inc(v_date_1062_);
lean_dec(v_dt_1060_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1074_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1067_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1068_ = lean_int_mul(v_years_1061_, v___x_1067_);
v___x_1069_ = lean_int_neg(v___x_1068_);
lean_dec(v___x_1068_);
v___x_1070_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1062_, v___x_1069_);
lean_dec(v___x_1069_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1070_);
v___x_1072_ = v___x_1065_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_time_1063_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver___boxed(lean_object* v_dt_1075_, lean_object* v_years_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Std_Time_PlainDateTime_subYearsRollOver(v_dt_1075_, v_years_1076_);
lean_dec(v_years_1076_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip(lean_object* v_dt_1078_, lean_object* v_years_1079_){
_start:
{
lean_object* v_date_1080_; lean_object* v_time_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1092_; 
v_date_1080_ = lean_ctor_get(v_dt_1078_, 0);
v_time_1081_ = lean_ctor_get(v_dt_1078_, 1);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_dt_1078_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1083_ = v_dt_1078_;
v_isShared_1084_ = v_isSharedCheck_1092_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_time_1081_);
lean_inc(v_date_1080_);
lean_dec(v_dt_1078_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1092_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1085_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1086_ = lean_int_mul(v_years_1079_, v___x_1085_);
v___x_1087_ = lean_int_neg(v___x_1086_);
lean_dec(v___x_1086_);
v___x_1088_ = l_Std_Time_PlainDate_addMonthsClip(v_date_1080_, v___x_1087_);
lean_dec(v___x_1087_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1088_);
v___x_1090_ = v___x_1083_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_time_1081_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip___boxed(lean_object* v_dt_1093_, lean_object* v_years_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Std_Time_PlainDateTime_subYearsClip(v_dt_1093_, v_years_1094_);
lean_dec(v_years_1094_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds(lean_object* v_dt_1096_, lean_object* v_nanos_1097_){
_start:
{
lean_object* v___x_1098_; lean_object* v_second_1099_; lean_object* v_nano_1100_; lean_object* v___x_1101_; lean_object* v_second_1102_; lean_object* v_nano_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1098_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1096_);
v_second_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_second_1099_);
v_nano_1100_ = lean_ctor_get(v___x_1098_, 1);
lean_inc(v_nano_1100_);
lean_dec_ref(v___x_1098_);
v___x_1101_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_1097_);
v_second_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_second_1102_);
v_nano_1103_ = lean_ctor_get(v___x_1101_, 1);
lean_inc(v_nano_1103_);
lean_dec_ref(v___x_1101_);
v___x_1104_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1105_ = lean_int_mul(v_second_1099_, v___x_1104_);
lean_dec(v_second_1099_);
v___x_1106_ = lean_int_add(v___x_1105_, v_nano_1100_);
lean_dec(v_nano_1100_);
lean_dec(v___x_1105_);
v___x_1107_ = lean_int_mul(v_second_1102_, v___x_1104_);
lean_dec(v_second_1102_);
v___x_1108_ = lean_int_add(v___x_1107_, v_nano_1103_);
lean_dec(v_nano_1103_);
lean_dec(v___x_1107_);
v___x_1109_ = lean_int_add(v___x_1106_, v___x_1108_);
lean_dec(v___x_1108_);
lean_dec(v___x_1106_);
v___x_1110_ = l_Std_Time_Duration_ofNanoseconds(v___x_1109_);
lean_dec(v___x_1109_);
v___x_1111_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds___boxed(lean_object* v_dt_1112_, lean_object* v_nanos_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Std_Time_PlainDateTime_addNanoseconds(v_dt_1112_, v_nanos_1113_);
lean_dec(v_nanos_1113_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds(lean_object* v_dt_1115_, lean_object* v_nanos_1116_){
_start:
{
lean_object* v___x_1117_; lean_object* v_second_1118_; lean_object* v_nano_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v_second_1122_; lean_object* v_nano_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1117_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1115_);
v_second_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_second_1118_);
v_nano_1119_ = lean_ctor_get(v___x_1117_, 1);
lean_inc(v_nano_1119_);
lean_dec_ref(v___x_1117_);
v___x_1120_ = lean_int_neg(v_nanos_1116_);
v___x_1121_ = l_Std_Time_Duration_ofNanoseconds(v___x_1120_);
lean_dec(v___x_1120_);
v_second_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_second_1122_);
v_nano_1123_ = lean_ctor_get(v___x_1121_, 1);
lean_inc(v_nano_1123_);
lean_dec_ref(v___x_1121_);
v___x_1124_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1125_ = lean_int_mul(v_second_1118_, v___x_1124_);
lean_dec(v_second_1118_);
v___x_1126_ = lean_int_add(v___x_1125_, v_nano_1119_);
lean_dec(v_nano_1119_);
lean_dec(v___x_1125_);
v___x_1127_ = lean_int_mul(v_second_1122_, v___x_1124_);
lean_dec(v_second_1122_);
v___x_1128_ = lean_int_add(v___x_1127_, v_nano_1123_);
lean_dec(v_nano_1123_);
lean_dec(v___x_1127_);
v___x_1129_ = lean_int_add(v___x_1126_, v___x_1128_);
lean_dec(v___x_1128_);
lean_dec(v___x_1126_);
v___x_1130_ = l_Std_Time_Duration_ofNanoseconds(v___x_1129_);
lean_dec(v___x_1129_);
v___x_1131_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds___boxed(lean_object* v_dt_1132_, lean_object* v_nanos_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Std_Time_PlainDateTime_subNanoseconds(v_dt_1132_, v_nanos_1133_);
lean_dec(v_nanos_1133_);
return v_res_1134_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addHours___closed__0(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_cstr_to_nat("3600000000000");
v___x_1136_ = lean_nat_to_int(v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours(lean_object* v_dt_1137_, lean_object* v_hours_1138_){
_start:
{
lean_object* v___x_1139_; lean_object* v_second_1140_; lean_object* v_nano_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v_second_1145_; lean_object* v_nano_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1139_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1137_);
v_second_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_second_1140_);
v_nano_1141_ = lean_ctor_get(v___x_1139_, 1);
lean_inc(v_nano_1141_);
lean_dec_ref(v___x_1139_);
v___x_1142_ = lean_obj_once(&l_Std_Time_PlainDateTime_addHours___closed__0, &l_Std_Time_PlainDateTime_addHours___closed__0_once, _init_l_Std_Time_PlainDateTime_addHours___closed__0);
v___x_1143_ = lean_int_mul(v_hours_1138_, v___x_1142_);
v___x_1144_ = l_Std_Time_Duration_ofNanoseconds(v___x_1143_);
lean_dec(v___x_1143_);
v_second_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_second_1145_);
v_nano_1146_ = lean_ctor_get(v___x_1144_, 1);
lean_inc(v_nano_1146_);
lean_dec_ref(v___x_1144_);
v___x_1147_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1148_ = lean_int_mul(v_second_1140_, v___x_1147_);
lean_dec(v_second_1140_);
v___x_1149_ = lean_int_add(v___x_1148_, v_nano_1141_);
lean_dec(v_nano_1141_);
lean_dec(v___x_1148_);
v___x_1150_ = lean_int_mul(v_second_1145_, v___x_1147_);
lean_dec(v_second_1145_);
v___x_1151_ = lean_int_add(v___x_1150_, v_nano_1146_);
lean_dec(v_nano_1146_);
lean_dec(v___x_1150_);
v___x_1152_ = lean_int_add(v___x_1149_, v___x_1151_);
lean_dec(v___x_1151_);
lean_dec(v___x_1149_);
v___x_1153_ = l_Std_Time_Duration_ofNanoseconds(v___x_1152_);
lean_dec(v___x_1152_);
v___x_1154_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours___boxed(lean_object* v_dt_1155_, lean_object* v_hours_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Std_Time_PlainDateTime_addHours(v_dt_1155_, v_hours_1156_);
lean_dec(v_hours_1156_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours(lean_object* v_dt_1158_, lean_object* v_hours_1159_){
_start:
{
lean_object* v___x_1160_; lean_object* v_second_1161_; lean_object* v_nano_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v_second_1167_; lean_object* v_nano_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1160_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1158_);
v_second_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_second_1161_);
v_nano_1162_ = lean_ctor_get(v___x_1160_, 1);
lean_inc(v_nano_1162_);
lean_dec_ref(v___x_1160_);
v___x_1163_ = lean_int_neg(v_hours_1159_);
v___x_1164_ = lean_obj_once(&l_Std_Time_PlainDateTime_addHours___closed__0, &l_Std_Time_PlainDateTime_addHours___closed__0_once, _init_l_Std_Time_PlainDateTime_addHours___closed__0);
v___x_1165_ = lean_int_mul(v___x_1163_, v___x_1164_);
lean_dec(v___x_1163_);
v___x_1166_ = l_Std_Time_Duration_ofNanoseconds(v___x_1165_);
lean_dec(v___x_1165_);
v_second_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_second_1167_);
v_nano_1168_ = lean_ctor_get(v___x_1166_, 1);
lean_inc(v_nano_1168_);
lean_dec_ref(v___x_1166_);
v___x_1169_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1170_ = lean_int_mul(v_second_1161_, v___x_1169_);
lean_dec(v_second_1161_);
v___x_1171_ = lean_int_add(v___x_1170_, v_nano_1162_);
lean_dec(v_nano_1162_);
lean_dec(v___x_1170_);
v___x_1172_ = lean_int_mul(v_second_1167_, v___x_1169_);
lean_dec(v_second_1167_);
v___x_1173_ = lean_int_add(v___x_1172_, v_nano_1168_);
lean_dec(v_nano_1168_);
lean_dec(v___x_1172_);
v___x_1174_ = lean_int_add(v___x_1171_, v___x_1173_);
lean_dec(v___x_1173_);
lean_dec(v___x_1171_);
v___x_1175_ = l_Std_Time_Duration_ofNanoseconds(v___x_1174_);
lean_dec(v___x_1174_);
v___x_1176_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours___boxed(lean_object* v_dt_1177_, lean_object* v_hours_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Std_Time_PlainDateTime_subHours(v_dt_1177_, v_hours_1178_);
lean_dec(v_hours_1178_);
return v_res_1179_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addMinutes___closed__0(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = lean_cstr_to_nat("60000000000");
v___x_1181_ = lean_nat_to_int(v___x_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes(lean_object* v_dt_1182_, lean_object* v_minutes_1183_){
_start:
{
lean_object* v___x_1184_; lean_object* v_second_1185_; lean_object* v_nano_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v_second_1190_; lean_object* v_nano_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1184_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1182_);
v_second_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_second_1185_);
v_nano_1186_ = lean_ctor_get(v___x_1184_, 1);
lean_inc(v_nano_1186_);
lean_dec_ref(v___x_1184_);
v___x_1187_ = lean_obj_once(&l_Std_Time_PlainDateTime_addMinutes___closed__0, &l_Std_Time_PlainDateTime_addMinutes___closed__0_once, _init_l_Std_Time_PlainDateTime_addMinutes___closed__0);
v___x_1188_ = lean_int_mul(v_minutes_1183_, v___x_1187_);
v___x_1189_ = l_Std_Time_Duration_ofNanoseconds(v___x_1188_);
lean_dec(v___x_1188_);
v_second_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_second_1190_);
v_nano_1191_ = lean_ctor_get(v___x_1189_, 1);
lean_inc(v_nano_1191_);
lean_dec_ref(v___x_1189_);
v___x_1192_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1193_ = lean_int_mul(v_second_1185_, v___x_1192_);
lean_dec(v_second_1185_);
v___x_1194_ = lean_int_add(v___x_1193_, v_nano_1186_);
lean_dec(v_nano_1186_);
lean_dec(v___x_1193_);
v___x_1195_ = lean_int_mul(v_second_1190_, v___x_1192_);
lean_dec(v_second_1190_);
v___x_1196_ = lean_int_add(v___x_1195_, v_nano_1191_);
lean_dec(v_nano_1191_);
lean_dec(v___x_1195_);
v___x_1197_ = lean_int_add(v___x_1194_, v___x_1196_);
lean_dec(v___x_1196_);
lean_dec(v___x_1194_);
v___x_1198_ = l_Std_Time_Duration_ofNanoseconds(v___x_1197_);
lean_dec(v___x_1197_);
v___x_1199_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes___boxed(lean_object* v_dt_1200_, lean_object* v_minutes_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Std_Time_PlainDateTime_addMinutes(v_dt_1200_, v_minutes_1201_);
lean_dec(v_minutes_1201_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes(lean_object* v_dt_1203_, lean_object* v_minutes_1204_){
_start:
{
lean_object* v___x_1205_; lean_object* v_second_1206_; lean_object* v_nano_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_second_1212_; lean_object* v_nano_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1205_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1203_);
v_second_1206_ = lean_ctor_get(v___x_1205_, 0);
lean_inc(v_second_1206_);
v_nano_1207_ = lean_ctor_get(v___x_1205_, 1);
lean_inc(v_nano_1207_);
lean_dec_ref(v___x_1205_);
v___x_1208_ = lean_int_neg(v_minutes_1204_);
v___x_1209_ = lean_obj_once(&l_Std_Time_PlainDateTime_addMinutes___closed__0, &l_Std_Time_PlainDateTime_addMinutes___closed__0_once, _init_l_Std_Time_PlainDateTime_addMinutes___closed__0);
v___x_1210_ = lean_int_mul(v___x_1208_, v___x_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = l_Std_Time_Duration_ofNanoseconds(v___x_1210_);
lean_dec(v___x_1210_);
v_second_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_second_1212_);
v_nano_1213_ = lean_ctor_get(v___x_1211_, 1);
lean_inc(v_nano_1213_);
lean_dec_ref(v___x_1211_);
v___x_1214_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1215_ = lean_int_mul(v_second_1206_, v___x_1214_);
lean_dec(v_second_1206_);
v___x_1216_ = lean_int_add(v___x_1215_, v_nano_1207_);
lean_dec(v_nano_1207_);
lean_dec(v___x_1215_);
v___x_1217_ = lean_int_mul(v_second_1212_, v___x_1214_);
lean_dec(v_second_1212_);
v___x_1218_ = lean_int_add(v___x_1217_, v_nano_1213_);
lean_dec(v_nano_1213_);
lean_dec(v___x_1217_);
v___x_1219_ = lean_int_add(v___x_1216_, v___x_1218_);
lean_dec(v___x_1218_);
lean_dec(v___x_1216_);
v___x_1220_ = l_Std_Time_Duration_ofNanoseconds(v___x_1219_);
lean_dec(v___x_1219_);
v___x_1221_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes___boxed(lean_object* v_dt_1222_, lean_object* v_minutes_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Std_Time_PlainDateTime_subMinutes(v_dt_1222_, v_minutes_1223_);
lean_dec(v_minutes_1223_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds(lean_object* v_dt_1225_, lean_object* v_seconds_1226_){
_start:
{
lean_object* v___x_1227_; lean_object* v_second_1228_; lean_object* v_nano_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_second_1233_; lean_object* v_nano_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1227_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1225_);
v_second_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_second_1228_);
v_nano_1229_ = lean_ctor_get(v___x_1227_, 1);
lean_inc(v_nano_1229_);
lean_dec_ref(v___x_1227_);
v___x_1230_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1231_ = lean_int_mul(v_seconds_1226_, v___x_1230_);
v___x_1232_ = l_Std_Time_Duration_ofNanoseconds(v___x_1231_);
lean_dec(v___x_1231_);
v_second_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_second_1233_);
v_nano_1234_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_nano_1234_);
lean_dec_ref(v___x_1232_);
v___x_1235_ = lean_int_mul(v_second_1228_, v___x_1230_);
lean_dec(v_second_1228_);
v___x_1236_ = lean_int_add(v___x_1235_, v_nano_1229_);
lean_dec(v_nano_1229_);
lean_dec(v___x_1235_);
v___x_1237_ = lean_int_mul(v_second_1233_, v___x_1230_);
lean_dec(v_second_1233_);
v___x_1238_ = lean_int_add(v___x_1237_, v_nano_1234_);
lean_dec(v_nano_1234_);
lean_dec(v___x_1237_);
v___x_1239_ = lean_int_add(v___x_1236_, v___x_1238_);
lean_dec(v___x_1238_);
lean_dec(v___x_1236_);
v___x_1240_ = l_Std_Time_Duration_ofNanoseconds(v___x_1239_);
lean_dec(v___x_1239_);
v___x_1241_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds___boxed(lean_object* v_dt_1242_, lean_object* v_seconds_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Std_Time_PlainDateTime_addSeconds(v_dt_1242_, v_seconds_1243_);
lean_dec(v_seconds_1243_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds(lean_object* v_dt_1245_, lean_object* v_seconds_1246_){
_start:
{
lean_object* v___x_1247_; lean_object* v_second_1248_; lean_object* v_nano_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_second_1254_; lean_object* v_nano_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1247_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1245_);
v_second_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_second_1248_);
v_nano_1249_ = lean_ctor_get(v___x_1247_, 1);
lean_inc(v_nano_1249_);
lean_dec_ref(v___x_1247_);
v___x_1250_ = lean_int_neg(v_seconds_1246_);
v___x_1251_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1252_ = lean_int_mul(v___x_1250_, v___x_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = l_Std_Time_Duration_ofNanoseconds(v___x_1252_);
lean_dec(v___x_1252_);
v_second_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_second_1254_);
v_nano_1255_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_nano_1255_);
lean_dec_ref(v___x_1253_);
v___x_1256_ = lean_int_mul(v_second_1248_, v___x_1251_);
lean_dec(v_second_1248_);
v___x_1257_ = lean_int_add(v___x_1256_, v_nano_1249_);
lean_dec(v_nano_1249_);
lean_dec(v___x_1256_);
v___x_1258_ = lean_int_mul(v_second_1254_, v___x_1251_);
lean_dec(v_second_1254_);
v___x_1259_ = lean_int_add(v___x_1258_, v_nano_1255_);
lean_dec(v_nano_1255_);
lean_dec(v___x_1258_);
v___x_1260_ = lean_int_add(v___x_1257_, v___x_1259_);
lean_dec(v___x_1259_);
lean_dec(v___x_1257_);
v___x_1261_ = l_Std_Time_Duration_ofNanoseconds(v___x_1260_);
lean_dec(v___x_1260_);
v___x_1262_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds___boxed(lean_object* v_dt_1263_, lean_object* v_seconds_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Std_Time_PlainDateTime_subSeconds(v_dt_1263_, v_seconds_1264_);
lean_dec(v_seconds_1264_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds(lean_object* v_dt_1266_, lean_object* v_milliseconds_1267_){
_start:
{
lean_object* v___x_1268_; lean_object* v_second_1269_; lean_object* v_nano_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v_second_1274_; lean_object* v_nano_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1268_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1266_);
v_second_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_second_1269_);
v_nano_1270_ = lean_ctor_get(v___x_1268_, 1);
lean_inc(v_nano_1270_);
lean_dec_ref(v___x_1268_);
v___x_1271_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1272_ = lean_int_mul(v_milliseconds_1267_, v___x_1271_);
v___x_1273_ = l_Std_Time_Duration_ofNanoseconds(v___x_1272_);
lean_dec(v___x_1272_);
v_second_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_second_1274_);
v_nano_1275_ = lean_ctor_get(v___x_1273_, 1);
lean_inc(v_nano_1275_);
lean_dec_ref(v___x_1273_);
v___x_1276_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1277_ = lean_int_mul(v_second_1269_, v___x_1276_);
lean_dec(v_second_1269_);
v___x_1278_ = lean_int_add(v___x_1277_, v_nano_1270_);
lean_dec(v_nano_1270_);
lean_dec(v___x_1277_);
v___x_1279_ = lean_int_mul(v_second_1274_, v___x_1276_);
lean_dec(v_second_1274_);
v___x_1280_ = lean_int_add(v___x_1279_, v_nano_1275_);
lean_dec(v_nano_1275_);
lean_dec(v___x_1279_);
v___x_1281_ = lean_int_add(v___x_1278_, v___x_1280_);
lean_dec(v___x_1280_);
lean_dec(v___x_1278_);
v___x_1282_ = l_Std_Time_Duration_ofNanoseconds(v___x_1281_);
lean_dec(v___x_1281_);
v___x_1283_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds___boxed(lean_object* v_dt_1284_, lean_object* v_milliseconds_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Std_Time_PlainDateTime_addMilliseconds(v_dt_1284_, v_milliseconds_1285_);
lean_dec(v_milliseconds_1285_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds(lean_object* v_dt_1287_, lean_object* v_milliseconds_1288_){
_start:
{
lean_object* v___x_1289_; lean_object* v_second_1290_; lean_object* v_nano_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v_second_1296_; lean_object* v_nano_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1289_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1287_);
v_second_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_second_1290_);
v_nano_1291_ = lean_ctor_get(v___x_1289_, 1);
lean_inc(v_nano_1291_);
lean_dec_ref(v___x_1289_);
v___x_1292_ = lean_int_neg(v_milliseconds_1288_);
v___x_1293_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1294_ = lean_int_mul(v___x_1292_, v___x_1293_);
lean_dec(v___x_1292_);
v___x_1295_ = l_Std_Time_Duration_ofNanoseconds(v___x_1294_);
lean_dec(v___x_1294_);
v_second_1296_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_second_1296_);
v_nano_1297_ = lean_ctor_get(v___x_1295_, 1);
lean_inc(v_nano_1297_);
lean_dec_ref(v___x_1295_);
v___x_1298_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1299_ = lean_int_mul(v_second_1290_, v___x_1298_);
lean_dec(v_second_1290_);
v___x_1300_ = lean_int_add(v___x_1299_, v_nano_1291_);
lean_dec(v_nano_1291_);
lean_dec(v___x_1299_);
v___x_1301_ = lean_int_mul(v_second_1296_, v___x_1298_);
lean_dec(v_second_1296_);
v___x_1302_ = lean_int_add(v___x_1301_, v_nano_1297_);
lean_dec(v_nano_1297_);
lean_dec(v___x_1301_);
v___x_1303_ = lean_int_add(v___x_1300_, v___x_1302_);
lean_dec(v___x_1302_);
lean_dec(v___x_1300_);
v___x_1304_ = l_Std_Time_Duration_ofNanoseconds(v___x_1303_);
lean_dec(v___x_1303_);
v___x_1305_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds___boxed(lean_object* v_dt_1306_, lean_object* v_milliseconds_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Std_Time_PlainDateTime_subMilliseconds(v_dt_1306_, v_milliseconds_1307_);
lean_dec(v_milliseconds_1307_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year(lean_object* v_dt_1309_){
_start:
{
lean_object* v_date_1310_; lean_object* v_year_1311_; 
v_date_1310_ = lean_ctor_get(v_dt_1309_, 0);
v_year_1311_ = lean_ctor_get(v_date_1310_, 0);
lean_inc(v_year_1311_);
return v_year_1311_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year___boxed(lean_object* v_dt_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Std_Time_PlainDateTime_year(v_dt_1312_);
lean_dec_ref(v_dt_1312_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month(lean_object* v_dt_1314_){
_start:
{
lean_object* v_date_1315_; lean_object* v_month_1316_; 
v_date_1315_ = lean_ctor_get(v_dt_1314_, 0);
v_month_1316_ = lean_ctor_get(v_date_1315_, 1);
lean_inc(v_month_1316_);
return v_month_1316_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month___boxed(lean_object* v_dt_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Std_Time_PlainDateTime_month(v_dt_1317_);
lean_dec_ref(v_dt_1317_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day(lean_object* v_dt_1319_){
_start:
{
lean_object* v_date_1320_; lean_object* v_day_1321_; 
v_date_1320_ = lean_ctor_get(v_dt_1319_, 0);
v_day_1321_ = lean_ctor_get(v_date_1320_, 2);
lean_inc(v_day_1321_);
return v_day_1321_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day___boxed(lean_object* v_dt_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Std_Time_PlainDateTime_day(v_dt_1322_);
lean_dec_ref(v_dt_1322_);
return v_res_1323_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_weekday(lean_object* v_dt_1324_){
_start:
{
lean_object* v_date_1325_; uint8_t v___x_1326_; 
v_date_1325_ = lean_ctor_get(v_dt_1324_, 0);
lean_inc_ref(v_date_1325_);
lean_dec_ref(v_dt_1324_);
v___x_1326_ = l_Std_Time_PlainDate_weekday(v_date_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekday___boxed(lean_object* v_dt_1327_){
_start:
{
uint8_t v_res_1328_; lean_object* v_r_1329_; 
v_res_1328_ = l_Std_Time_PlainDateTime_weekday(v_dt_1327_);
v_r_1329_ = lean_box(v_res_1328_);
return v_r_1329_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour(lean_object* v_dt_1330_){
_start:
{
lean_object* v_time_1331_; lean_object* v_hour_1332_; 
v_time_1331_ = lean_ctor_get(v_dt_1330_, 1);
v_hour_1332_ = lean_ctor_get(v_time_1331_, 0);
lean_inc(v_hour_1332_);
return v_hour_1332_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour___boxed(lean_object* v_dt_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Std_Time_PlainDateTime_hour(v_dt_1333_);
lean_dec_ref(v_dt_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute(lean_object* v_dt_1335_){
_start:
{
lean_object* v_time_1336_; lean_object* v_minute_1337_; 
v_time_1336_ = lean_ctor_get(v_dt_1335_, 1);
v_minute_1337_ = lean_ctor_get(v_time_1336_, 1);
lean_inc(v_minute_1337_);
return v_minute_1337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute___boxed(lean_object* v_dt_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Std_Time_PlainDateTime_minute(v_dt_1338_);
lean_dec_ref(v_dt_1338_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond(lean_object* v_dt_1340_){
_start:
{
lean_object* v_time_1341_; lean_object* v_nanosecond_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v_time_1341_ = lean_ctor_get(v_dt_1340_, 1);
v_nanosecond_1342_ = lean_ctor_get(v_time_1341_, 3);
v___x_1343_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1344_ = lean_int_ediv(v_nanosecond_1342_, v___x_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond___boxed(lean_object* v_dt_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Std_Time_PlainDateTime_millisecond(v_dt_1345_);
lean_dec_ref(v_dt_1345_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second(lean_object* v_dt_1347_){
_start:
{
lean_object* v_time_1348_; lean_object* v_second_1349_; 
v_time_1348_ = lean_ctor_get(v_dt_1347_, 1);
v_second_1349_ = lean_ctor_get(v_time_1348_, 2);
lean_inc(v_second_1349_);
return v_second_1349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second___boxed(lean_object* v_dt_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Std_Time_PlainDateTime_second(v_dt_1350_);
lean_dec_ref(v_dt_1350_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond(lean_object* v_dt_1352_){
_start:
{
lean_object* v_time_1353_; lean_object* v_nanosecond_1354_; 
v_time_1353_ = lean_ctor_get(v_dt_1352_, 1);
v_nanosecond_1354_ = lean_ctor_get(v_time_1353_, 3);
lean_inc(v_nanosecond_1354_);
return v_nanosecond_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond___boxed(lean_object* v_dt_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Std_Time_PlainDateTime_nanosecond(v_dt_1355_);
lean_dec_ref(v_dt_1355_);
return v_res_1356_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_era(lean_object* v_date_1357_){
_start:
{
lean_object* v_date_1358_; lean_object* v_year_1359_; uint8_t v___x_1360_; 
v_date_1358_ = lean_ctor_get(v_date_1357_, 0);
v_year_1359_ = lean_ctor_get(v_date_1358_, 0);
v___x_1360_ = l_Std_Time_Year_Offset_era(v_year_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_era___boxed(lean_object* v_date_1361_){
_start:
{
uint8_t v_res_1362_; lean_object* v_r_1363_; 
v_res_1362_ = l_Std_Time_PlainDateTime_era(v_date_1361_);
lean_dec_ref(v_date_1361_);
v_r_1363_ = lean_box(v_res_1362_);
return v_r_1363_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_inLeapYear(lean_object* v_date_1364_){
_start:
{
lean_object* v_date_1365_; lean_object* v_year_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_date_1365_ = lean_ctor_get(v_date_1364_, 0);
v_year_1366_ = lean_ctor_get(v_date_1365_, 0);
v___x_1367_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_1368_ = lean_int_mod(v_year_1366_, v___x_1367_);
v___x_1369_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_1370_ = lean_int_dec_eq(v___x_1368_, v___x_1369_);
lean_dec(v___x_1368_);
v___x_1371_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_1372_ = lean_int_mod(v_year_1366_, v___x_1371_);
v___x_1373_ = lean_int_dec_eq(v___x_1372_, v___x_1369_);
lean_dec(v___x_1372_);
if (v___x_1373_ == 0)
{
return v___x_1370_;
}
else
{
if (v___x_1370_ == 0)
{
return v___x_1370_;
}
else
{
lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1374_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_1375_ = lean_int_mod(v_year_1366_, v___x_1374_);
v___x_1376_ = lean_int_dec_eq(v___x_1375_, v___x_1369_);
lean_dec(v___x_1375_);
return v___x_1376_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_inLeapYear___boxed(lean_object* v_date_1377_){
_start:
{
uint8_t v_res_1378_; lean_object* v_r_1379_; 
v_res_1378_ = l_Std_Time_PlainDateTime_inLeapYear(v_date_1377_);
lean_dec_ref(v_date_1377_);
v_r_1379_ = lean_box(v_res_1378_);
return v_r_1379_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear(lean_object* v_date_1380_, uint8_t v_firstDay_1381_, lean_object* v_minDays_1382_){
_start:
{
lean_object* v_date_1383_; lean_object* v___x_1384_; 
v_date_1383_ = lean_ctor_get(v_date_1380_, 0);
lean_inc_ref(v_date_1383_);
lean_dec_ref(v_date_1380_);
v___x_1384_ = l_Std_Time_PlainDate_weekOfYear(v_date_1383_, v_firstDay_1381_, v_minDays_1382_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear___boxed(lean_object* v_date_1385_, lean_object* v_firstDay_1386_, lean_object* v_minDays_1387_){
_start:
{
uint8_t v_firstDay_boxed_1388_; lean_object* v_res_1389_; 
v_firstDay_boxed_1388_ = lean_unbox(v_firstDay_1386_);
v_res_1389_ = l_Std_Time_PlainDateTime_weekOfYear(v_date_1385_, v_firstDay_boxed_1388_, v_minDays_1387_);
lean_dec(v_minDays_1387_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear(lean_object* v_date_1390_, uint8_t v_firstDay_1391_, lean_object* v_minDays_1392_){
_start:
{
lean_object* v_date_1393_; lean_object* v___x_1394_; 
v_date_1393_ = lean_ctor_get(v_date_1390_, 0);
lean_inc_ref(v_date_1393_);
lean_dec_ref(v_date_1390_);
v___x_1394_ = l_Std_Time_PlainDate_weekYear(v_date_1393_, v_firstDay_1391_, v_minDays_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear___boxed(lean_object* v_date_1395_, lean_object* v_firstDay_1396_, lean_object* v_minDays_1397_){
_start:
{
uint8_t v_firstDay_boxed_1398_; lean_object* v_res_1399_; 
v_firstDay_boxed_1398_ = lean_unbox(v_firstDay_1396_);
v_res_1399_ = l_Std_Time_PlainDateTime_weekYear(v_date_1395_, v_firstDay_boxed_1398_, v_minDays_1397_);
lean_dec(v_minDays_1397_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth(lean_object* v_date_1400_){
_start:
{
lean_object* v_date_1401_; lean_object* v___x_1402_; 
v_date_1401_ = lean_ctor_get(v_date_1400_, 0);
v___x_1402_ = l_Std_Time_PlainDate_alignedWeekOfMonth(v_date_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth___boxed(lean_object* v_date_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Std_Time_PlainDateTime_alignedWeekOfMonth(v_date_1403_);
lean_dec_ref(v_date_1403_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth(lean_object* v_date_1405_, uint8_t v_firstDay_1406_){
_start:
{
lean_object* v_date_1407_; lean_object* v___x_1408_; 
v_date_1407_ = lean_ctor_get(v_date_1405_, 0);
lean_inc_ref(v_date_1407_);
lean_dec_ref(v_date_1405_);
v___x_1408_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1407_, v_firstDay_1406_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth___boxed(lean_object* v_date_1409_, lean_object* v_firstDay_1410_){
_start:
{
uint8_t v_firstDay_boxed_1411_; lean_object* v_res_1412_; 
v_firstDay_boxed_1411_ = lean_unbox(v_firstDay_1410_);
v_res_1412_ = l_Std_Time_PlainDateTime_weekOfMonth(v_date_1409_, v_firstDay_boxed_1411_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_dayOfYear(lean_object* v_date_1413_){
_start:
{
lean_object* v_date_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1440_; 
v_date_1414_ = lean_ctor_get(v_date_1413_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_date_1413_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v_date_1413_, 1);
lean_dec(v_unused_1441_);
v___x_1416_ = v_date_1413_;
v_isShared_1417_ = v_isSharedCheck_1440_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_date_1414_);
lean_dec(v_date_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1440_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v_year_1418_; lean_object* v_month_1419_; lean_object* v_day_1420_; uint8_t v___y_1422_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; uint8_t v___y_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v_year_1418_ = lean_ctor_get(v_date_1414_, 0);
lean_inc(v_year_1418_);
v_month_1419_ = lean_ctor_get(v_date_1414_, 1);
lean_inc(v_month_1419_);
v_day_1420_ = lean_ctor_get(v_date_1414_, 2);
lean_inc(v_day_1420_);
lean_dec_ref(v_date_1414_);
v___x_1427_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_1428_ = lean_int_mod(v_year_1418_, v___x_1427_);
v___x_1429_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_1430_ = lean_int_dec_eq(v___x_1428_, v___x_1429_);
lean_dec(v___x_1428_);
v___x_1433_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_1434_ = lean_int_mod(v_year_1418_, v___x_1433_);
v___x_1435_ = lean_int_dec_eq(v___x_1434_, v___x_1429_);
lean_dec(v___x_1434_);
if (v___x_1435_ == 0)
{
uint8_t v___x_1436_; 
lean_dec(v_year_1418_);
v___x_1436_ = 1;
v___y_1432_ = v___x_1436_;
goto v___jp_1431_;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1437_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_1438_ = lean_int_mod(v_year_1418_, v___x_1437_);
lean_dec(v_year_1418_);
v___x_1439_ = lean_int_dec_eq(v___x_1438_, v___x_1429_);
lean_dec(v___x_1438_);
v___y_1432_ = v___x_1439_;
goto v___jp_1431_;
}
v___jp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 1, v_day_1420_);
lean_ctor_set(v___x_1416_, 0, v_month_1419_);
v___x_1424_ = v___x_1416_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_month_1419_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_day_1420_);
v___x_1424_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Std_Time_ValidDate_dayOfYear(v___y_1422_, v___x_1424_);
lean_dec_ref(v___x_1424_);
return v___x_1425_;
}
}
v___jp_1431_:
{
if (v___x_1430_ == 0)
{
v___y_1422_ = v___x_1430_;
goto v___jp_1421_;
}
else
{
v___y_1422_ = v___y_1432_;
goto v___jp_1421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter(lean_object* v_date_1442_){
_start:
{
lean_object* v_date_1443_; lean_object* v___x_1444_; 
v_date_1443_ = lean_ctor_get(v_date_1442_, 0);
v___x_1444_ = l_Std_Time_PlainDate_quarter(v_date_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter___boxed(lean_object* v_date_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Std_Time_PlainDateTime_quarter(v_date_1445_);
lean_dec_ref(v_date_1445_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atTime(lean_object* v_date_1447_, lean_object* v_time_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v_date_1447_);
lean_ctor_set(v___x_1449_, 1, v_time_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atDate(lean_object* v_time_1450_, lean_object* v_date_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_date_1451_);
lean_ctor_set(v___x_1452_, 1, v_time_1450_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0(lean_object* v_x_1481_, lean_object* v_y_1482_){
_start:
{
lean_object* v_second_1483_; lean_object* v_nano_1484_; lean_object* v___x_1485_; lean_object* v_second_1486_; lean_object* v_nano_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v_nanos_1490_; lean_object* v___x_1491_; lean_object* v_second_1492_; lean_object* v_nano_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_second_1483_ = lean_ctor_get(v_y_1482_, 0);
v_nano_1484_ = lean_ctor_get(v_y_1482_, 1);
v___x_1485_ = l_Std_Time_PlainDateTime_toWallTime(v_x_1481_);
v_second_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_second_1486_);
v_nano_1487_ = lean_ctor_get(v___x_1485_, 1);
lean_inc(v_nano_1487_);
lean_dec_ref(v___x_1485_);
v___x_1488_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1489_ = lean_int_mul(v_second_1483_, v___x_1488_);
v_nanos_1490_ = lean_int_add(v___x_1489_, v_nano_1484_);
lean_dec(v___x_1489_);
v___x_1491_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_1490_);
lean_dec(v_nanos_1490_);
v_second_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_second_1492_);
v_nano_1493_ = lean_ctor_get(v___x_1491_, 1);
lean_inc(v_nano_1493_);
lean_dec_ref(v___x_1491_);
v___x_1494_ = lean_int_mul(v_second_1486_, v___x_1488_);
lean_dec(v_second_1486_);
v___x_1495_ = lean_int_add(v___x_1494_, v_nano_1487_);
lean_dec(v_nano_1487_);
lean_dec(v___x_1494_);
v___x_1496_ = lean_int_mul(v_second_1492_, v___x_1488_);
lean_dec(v_second_1492_);
v___x_1497_ = lean_int_add(v___x_1496_, v_nano_1493_);
lean_dec(v_nano_1493_);
lean_dec(v___x_1496_);
v___x_1498_ = lean_int_add(v___x_1495_, v___x_1497_);
lean_dec(v___x_1497_);
lean_dec(v___x_1495_);
v___x_1499_ = l_Std_Time_Duration_ofNanoseconds(v___x_1498_);
lean_dec(v___x_1498_);
v___x_1500_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0___boxed(lean_object* v_x_1501_, lean_object* v_y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Std_Time_PlainDateTime_instHAddDuration___lam__0(v_x_1501_, v_y_1502_);
lean_dec_ref(v_y_1502_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofPlainDate(lean_object* v_date_1506_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = l_Std_Time_PlainTime_midnight;
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v_date_1506_);
lean_ctor_set(v___x_1508_, 1, v___x_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate(lean_object* v_pdt_1509_){
_start:
{
lean_object* v_date_1510_; 
v_date_1510_ = lean_ctor_get(v_pdt_1509_, 0);
lean_inc_ref(v_date_1510_);
return v_date_1510_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate___boxed(lean_object* v_pdt_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Std_Time_PlainDateTime_toPlainDate(v_pdt_1511_);
lean_dec_ref(v_pdt_1511_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime(lean_object* v_pdt_1513_){
_start:
{
lean_object* v_time_1514_; 
v_time_1514_ = lean_ctor_get(v_pdt_1513_, 1);
lean_inc_ref(v_time_1514_);
return v_time_1514_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime___boxed(lean_object* v_pdt_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Std_Time_PlainDateTime_toPlainTime(v_pdt_1515_);
lean_dec_ref(v_pdt_1515_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHSubDuration___lam__0(lean_object* v_x_1517_, lean_object* v_y_1518_){
_start:
{
lean_object* v___x_1519_; lean_object* v_second_1520_; lean_object* v_nano_1521_; lean_object* v___x_1522_; lean_object* v_second_1523_; lean_object* v_nano_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1519_ = l_Std_Time_PlainDateTime_toWallTime(v_y_1518_);
v_second_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_second_1520_);
v_nano_1521_ = lean_ctor_get(v___x_1519_, 1);
lean_inc(v_nano_1521_);
lean_dec_ref(v___x_1519_);
v___x_1522_ = l_Std_Time_PlainDateTime_toWallTime(v_x_1517_);
v_second_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_second_1523_);
v_nano_1524_ = lean_ctor_get(v___x_1522_, 1);
lean_inc(v_nano_1524_);
lean_dec_ref(v___x_1522_);
v___x_1525_ = lean_int_neg(v_second_1520_);
lean_dec(v_second_1520_);
v___x_1526_ = lean_int_neg(v_nano_1521_);
lean_dec(v_nano_1521_);
v___x_1527_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1528_ = lean_int_mul(v_second_1523_, v___x_1527_);
lean_dec(v_second_1523_);
v___x_1529_ = lean_int_add(v___x_1528_, v_nano_1524_);
lean_dec(v_nano_1524_);
lean_dec(v___x_1528_);
v___x_1530_ = lean_int_mul(v___x_1525_, v___x_1527_);
lean_dec(v___x_1525_);
v___x_1531_ = lean_int_add(v___x_1530_, v___x_1526_);
lean_dec(v___x_1526_);
lean_dec(v___x_1530_);
v___x_1532_ = lean_int_add(v___x_1529_, v___x_1531_);
lean_dec(v___x_1531_);
lean_dec(v___x_1529_);
v___x_1533_ = l_Std_Time_Duration_ofNanoseconds(v___x_1532_);
lean_dec(v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toWallTime(lean_object* v_pd_1536_){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1537_ = l_Std_Time_PlainDate_toEpochDay(v_pd_1536_);
v___x_1538_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1539_ = lean_int_mul(v___x_1537_, v___x_1538_);
lean_dec(v___x_1537_);
v___x_1540_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_1541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1539_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime(lean_object* v_wt_1542_){
_start:
{
lean_object* v_second_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v_second_1543_ = lean_ctor_get(v_wt_1542_, 0);
v___x_1544_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1545_ = lean_int_div(v_second_1543_, v___x_1544_);
v___x_1546_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1545_);
lean_dec(v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime___boxed(lean_object* v_wt_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Std_Time_PlainDate_ofWallTime(v_wt_1547_);
lean_dec_ref(v_wt_1547_);
return v_res_1548_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_1550_ = lean_int_neg(v___x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_instHSubDuration___lam__0(lean_object* v_x_1551_, lean_object* v_y_1552_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1553_ = l_Std_Time_PlainDate_toEpochDay(v_x_1551_);
v___x_1554_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1555_ = lean_int_mul(v___x_1553_, v___x_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_1557_ = l_Std_Time_PlainDate_toEpochDay(v_y_1552_);
v___x_1558_ = lean_int_mul(v___x_1557_, v___x_1554_);
lean_dec(v___x_1557_);
v___x_1559_ = lean_int_neg(v___x_1558_);
lean_dec(v___x_1558_);
v___x_1560_ = lean_obj_once(&l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0, &l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0_once, _init_l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0);
v___x_1561_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1562_ = lean_int_mul(v___x_1555_, v___x_1561_);
lean_dec(v___x_1555_);
v___x_1563_ = lean_int_add(v___x_1562_, v___x_1556_);
lean_dec(v___x_1562_);
v___x_1564_ = lean_int_mul(v___x_1559_, v___x_1561_);
lean_dec(v___x_1559_);
v___x_1565_ = lean_int_add(v___x_1564_, v___x_1560_);
lean_dec(v___x_1564_);
v___x_1566_ = lean_int_add(v___x_1563_, v___x_1565_);
lean_dec(v___x_1565_);
lean_dec(v___x_1563_);
v___x_1567_ = l_Std_Time_Duration_ofNanoseconds(v___x_1566_);
lean_dec(v___x_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_atTime(lean_object* v_date_1570_, lean_object* v_time_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_date_1570_);
lean_ctor_set(v___x_1572_, 1, v_time_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime(lean_object* v_pt_1573_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_1573_);
v___x_1575_ = l_Std_Time_Duration_ofNanoseconds(v___x_1574_);
lean_dec(v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime___boxed(lean_object* v_pt_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Std_Time_PlainTime_toWallTime(v_pt_1576_);
lean_dec_ref(v_pt_1576_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime(lean_object* v_wt_1578_){
_start:
{
lean_object* v_second_1579_; lean_object* v_nano_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v_nanos_1583_; lean_object* v___x_1584_; 
v_second_1579_ = lean_ctor_get(v_wt_1578_, 0);
v_nano_1580_ = lean_ctor_get(v_wt_1578_, 1);
v___x_1581_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1582_ = lean_int_mul(v_second_1579_, v___x_1581_);
v_nanos_1583_ = lean_int_add(v___x_1582_, v_nano_1580_);
lean_dec(v___x_1582_);
v___x_1584_ = l_Std_Time_PlainTime_ofNanoseconds(v_nanos_1583_);
lean_dec(v_nanos_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime___boxed(lean_object* v_wt_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Std_Time_PlainTime_ofWallTime(v_wt_1585_);
lean_dec_ref(v_wt_1585_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_atDate(lean_object* v_time_1587_, lean_object* v_date_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v_date_1588_);
lean_ctor_set(v___x_1589_, 1, v_time_1587_);
return v___x_1589_;
}
}
lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_DateTime_PlainDateTime(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedPlainDateTime_default = _init_l_Std_Time_instInhabitedPlainDateTime_default();
lean_mark_persistent(l_Std_Time_instInhabitedPlainDateTime_default);
l_Std_Time_instInhabitedPlainDateTime = _init_l_Std_Time_instInhabitedPlainDateTime();
lean_mark_persistent(l_Std_Time_instInhabitedPlainDateTime);
l_Std_Time_instOrdPlainDateTime = _init_l_Std_Time_instOrdPlainDateTime();
lean_mark_persistent(l_Std_Time_instOrdPlainDateTime);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_DateTime_PlainDateTime(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_DateTime_PlainDateTime(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_PlainDateTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_DateTime_PlainDateTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_DateTime_PlainDateTime(builtin);
}
#ifdef __cplusplus
}
#endif
