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
lean_object* l_Std_Time_PlainTime_toSeconds(lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
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
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__38;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__39;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDateTime_default___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDateTime_default___closed__40;
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
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_unsigned_to_nat(1u);
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
v___x_10_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_11_ = lean_int_add(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__4(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_13_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__3, &l_Std_Time_instInhabitedPlainDateTime_default___closed__3_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__3);
v___x_14_ = lean_int_sub(v___x_13_, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__5(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v_range_17_; 
v___x_15_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_16_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__4, &l_Std_Time_instInhabitedPlainDateTime_default___closed__4_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__4);
v_range_17_ = lean_int_add(v___x_16_, v___x_15_);
return v_range_17_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__6(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
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
v___x_29_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
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
v___x_35_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_36_ = lean_int_add(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__13(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_38_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__12, &l_Std_Time_instInhabitedPlainDateTime_default___closed__12_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__12);
v___x_39_ = lean_int_sub(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__14(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v_range_42_; 
v___x_40_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
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
v___x_52_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_53_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__17, &l_Std_Time_instInhabitedPlainDateTime_default___closed__17_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__17);
v___x_54_ = lean_int_add(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__19(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_55_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__18, &l_Std_Time_instInhabitedPlainDateTime_default___closed__18_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__18);
v___x_56_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__10, &l_Std_Time_instInhabitedPlainDateTime_default___closed__10_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__10);
v___x_57_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_58_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_56_);
lean_ctor_set(v___x_58_, 2, v___x_55_);
return v___x_58_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__20(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(23u);
v___x_60_ = lean_nat_to_int(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__21(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__20, &l_Std_Time_instInhabitedPlainDateTime_default___closed__20_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__20);
v___x_62_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_63_ = lean_int_add(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_65_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__21, &l_Std_Time_instInhabitedPlainDateTime_default___closed__21_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__21);
v___x_66_ = lean_int_sub(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_range_69_; 
v___x_67_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_68_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__22, &l_Std_Time_instInhabitedPlainDateTime_default___closed__22_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__22);
v_range_69_ = lean_int_add(v___x_68_, v___x_67_);
return v_range_69_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__24(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_71_ = lean_int_sub(v___x_70_, v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__25(void){
_start:
{
lean_object* v_range_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_range_72_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__23, &l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23);
v___x_73_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__24, &l_Std_Time_instInhabitedPlainDateTime_default___closed__24_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__24);
v___x_74_ = lean_int_emod(v___x_73_, v_range_72_);
return v___x_74_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__26(void){
_start:
{
lean_object* v_range_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_range_75_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__23, &l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23);
v___x_76_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__25, &l_Std_Time_instInhabitedPlainDateTime_default___closed__25_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__25);
v___x_77_ = lean_int_add(v___x_76_, v_range_75_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__27(void){
_start:
{
lean_object* v_range_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_range_78_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__23, &l_Std_Time_instInhabitedPlainDateTime_default___closed__23_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__23);
v___x_79_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__26, &l_Std_Time_instInhabitedPlainDateTime_default___closed__26_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__26);
v___x_80_ = lean_int_emod(v___x_79_, v_range_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__28(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_82_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__27, &l_Std_Time_instInhabitedPlainDateTime_default___closed__27_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__27);
v___x_83_ = lean_int_add(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__29(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(59u);
v___x_85_ = lean_nat_to_int(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__30(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__29, &l_Std_Time_instInhabitedPlainDateTime_default___closed__29_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__29);
v___x_87_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_88_ = lean_int_add(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_90_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__30, &l_Std_Time_instInhabitedPlainDateTime_default___closed__30_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__30);
v___x_91_ = lean_int_sub(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v_range_94_; 
v___x_92_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_93_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__31, &l_Std_Time_instInhabitedPlainDateTime_default___closed__31_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__31);
v_range_94_ = lean_int_add(v___x_93_, v___x_92_);
return v_range_94_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__33(void){
_start:
{
lean_object* v_range_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_range_95_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__32, &l_Std_Time_instInhabitedPlainDateTime_default___closed__32_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32);
v___x_96_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__24, &l_Std_Time_instInhabitedPlainDateTime_default___closed__24_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__24);
v___x_97_ = lean_int_emod(v___x_96_, v_range_95_);
return v___x_97_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__34(void){
_start:
{
lean_object* v_range_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_range_98_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__32, &l_Std_Time_instInhabitedPlainDateTime_default___closed__32_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32);
v___x_99_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__33, &l_Std_Time_instInhabitedPlainDateTime_default___closed__33_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__33);
v___x_100_ = lean_int_add(v___x_99_, v_range_98_);
return v___x_100_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__35(void){
_start:
{
lean_object* v_range_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_range_101_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__32, &l_Std_Time_instInhabitedPlainDateTime_default___closed__32_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__32);
v___x_102_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__34, &l_Std_Time_instInhabitedPlainDateTime_default___closed__34_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__34);
v___x_103_ = lean_int_emod(v___x_102_, v_range_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__36(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_105_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__35, &l_Std_Time_instInhabitedPlainDateTime_default___closed__35_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__35);
v___x_106_ = lean_int_add(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__37(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_unsigned_to_nat(1000000000u);
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = lean_nat_mod(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__38(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__37, &l_Std_Time_instInhabitedPlainDateTime_default___closed__37_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__37);
v___x_111_ = lean_nat_to_int(v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__39(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_112_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__38, &l_Std_Time_instInhabitedPlainDateTime_default___closed__38_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__38);
v___x_113_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__36, &l_Std_Time_instInhabitedPlainDateTime_default___closed__36_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__36);
v___x_114_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__28, &l_Std_Time_instInhabitedPlainDateTime_default___closed__28_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__28);
v___x_115_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_113_);
lean_ctor_set(v___x_115_, 2, v___x_113_);
lean_ctor_set(v___x_115_, 3, v___x_112_);
return v___x_115_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__40(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__39, &l_Std_Time_instInhabitedPlainDateTime_default___closed__39_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__39);
v___x_117_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__19, &l_Std_Time_instInhabitedPlainDateTime_default___closed__19_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__19);
v___x_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime_default(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__40, &l_Std_Time_instInhabitedPlainDateTime_default___closed__40_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__40);
return v___x_119_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDateTime(void){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Std_Time_instInhabitedPlainDateTime_default;
return v___x_120_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime_decEq(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
lean_object* v_date_123_; lean_object* v_time_124_; lean_object* v_date_125_; lean_object* v_time_126_; uint8_t v___x_127_; 
v_date_123_ = lean_ctor_get(v_x_121_, 0);
v_time_124_ = lean_ctor_get(v_x_121_, 1);
v_date_125_ = lean_ctor_get(v_x_122_, 0);
v_time_126_ = lean_ctor_get(v_x_122_, 1);
v___x_127_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_date_123_, v_date_125_);
if (v___x_127_ == 0)
{
return v___x_127_;
}
else
{
uint8_t v___x_128_; 
v___x_128_ = l_Std_Time_instDecidableEqPlainTime_decEq(v_time_124_, v_time_126_);
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime_decEq___boxed(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Std_Time_instDecidableEqPlainDateTime_decEq(v_x_129_, v_x_130_);
lean_dec_ref(v_x_130_);
lean_dec_ref(v_x_129_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDateTime(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
uint8_t v___x_135_; 
v___x_135_ = l_Std_Time_instDecidableEqPlainDateTime_decEq(v_x_133_, v_x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDateTime___boxed(lean_object* v_x_136_, lean_object* v_x_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Std_Time_instDecidableEqPlainDateTime(v_x_136_, v_x_137_);
lean_dec_ref(v_x_137_);
lean_dec_ref(v_x_136_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(8u);
v___x_154_ = lean_nat_to_int(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__0));
v___x_163_ = lean_string_length(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__13);
v___x_165_ = lean_nat_to_int(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___redArg(lean_object* v_x_170_){
_start:
{
lean_object* v_date_171_; lean_object* v_time_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_204_; 
v_date_171_ = lean_ctor_get(v_x_170_, 0);
v_time_172_ = lean_ctor_get(v_x_170_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_170_);
if (v_isSharedCheck_204_ == 0)
{
v___x_174_ = v_x_170_;
v_isShared_175_ = v_isSharedCheck_204_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_time_172_);
lean_inc(v_date_171_);
lean_dec(v_x_170_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_204_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_176_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__5));
v___x_177_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__6));
v___x_178_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__7);
v___x_179_ = l_Std_Time_instReprPlainDate_repr___redArg(v_date_171_);
lean_dec_ref(v_date_171_);
if (v_isShared_175_ == 0)
{
lean_ctor_set_tag(v___x_174_, 4);
lean_ctor_set(v___x_174_, 1, v___x_179_);
lean_ctor_set(v___x_174_, 0, v___x_178_);
v___x_181_ = v___x_174_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v___x_179_);
v___x_181_ = v_reuseFailAlloc_203_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_182_ = 0;
v___x_183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*1, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_177_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__9));
v___x_186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = lean_box(1);
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__11));
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_176_);
v___x_192_ = l_Std_Time_instReprPlainTime_repr___redArg(v_time_172_);
lean_dec_ref(v_time_172_);
v___x_193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_178_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*1, v___x_182_);
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_191_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_obj_once(&l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14, &l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprPlainDateTime_repr___redArg___closed__14);
v___x_197_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__15));
v___x_198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___x_195_);
v___x_199_ = ((lean_object*)(l_Std_Time_instReprPlainDateTime_repr___redArg___closed__16));
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_196_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*1, v___x_182_);
return v___x_202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr(lean_object* v_x_205_, lean_object* v_prec_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Std_Time_instReprPlainDateTime_repr___redArg(v_x_205_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDateTime_repr___boxed(lean_object* v_x_208_, lean_object* v_prec_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Time_instReprPlainDateTime_repr(v_x_208_, v_prec_209_);
lean_dec(v_prec_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0(lean_object* v_x_213_){
_start:
{
lean_object* v_date_214_; 
v_date_214_ = lean_ctor_get(v_x_213_, 0);
lean_inc_ref(v_date_214_);
return v_date_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__0___boxed(lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Std_Time_instOrdPlainDateTime___lam__0(v_x_215_);
lean_dec_ref(v_x_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1(lean_object* v_x_217_){
_start:
{
lean_object* v_time_218_; 
v_time_218_ = lean_ctor_get(v_x_217_, 1);
lean_inc_ref(v_time_218_);
return v_time_218_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDateTime___lam__1___boxed(lean_object* v_x_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Std_Time_instOrdPlainDateTime___lam__1(v_x_219_);
lean_dec_ref(v_x_219_);
return v_res_220_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__2(void){
_start:
{
lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___f_223_ = ((lean_object*)(l_Std_Time_instOrdPlainDateTime___closed__0));
v___x_224_ = l_Std_Time_instOrdPlainDate;
v___x_225_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_225_, 0, lean_box(0));
lean_closure_set(v___x_225_, 1, lean_box(0));
lean_closure_set(v___x_225_, 2, v___x_224_);
lean_closure_set(v___x_225_, 3, v___f_223_);
return v___x_225_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__3(void){
_start:
{
lean_object* v___f_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___f_226_ = ((lean_object*)(l_Std_Time_instOrdPlainDateTime___closed__1));
v___x_227_ = l_Std_Time_instOrdPlainTime;
v___x_228_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_228_, 0, lean_box(0));
lean_closure_set(v___x_228_, 1, lean_box(0));
lean_closure_set(v___x_228_, 2, v___x_227_);
lean_closure_set(v___x_228_, 3, v___f_226_);
return v___x_228_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime___closed__4(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__3, &l_Std_Time_instOrdPlainDateTime___closed__3_once, _init_l_Std_Time_instOrdPlainDateTime___closed__3);
v___x_230_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__2, &l_Std_Time_instOrdPlainDateTime___closed__2_once, _init_l_Std_Time_instOrdPlainDateTime___closed__2);
v___x_231_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_231_, 0, lean_box(0));
lean_closure_set(v___x_231_, 1, lean_box(0));
lean_closure_set(v___x_231_, 2, v___x_230_);
lean_closure_set(v___x_231_, 3, v___x_229_);
return v___x_231_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDateTime(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_obj_once(&l_Std_Time_instOrdPlainDateTime___closed__4, &l_Std_Time_instOrdPlainDateTime___closed__4_once, _init_l_Std_Time_instOrdPlainDateTime___closed__4);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__1(lean_object* v_a_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Rat_ofInt(v_a_233_);
return v___x_234_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_toWallTime___closed__0(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(86400u);
v___x_236_ = lean_nat_to_int(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_toWallTime___closed__1(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_unsigned_to_nat(1000000000u);
v___x_238_ = lean_nat_to_int(v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toWallTime(lean_object* v_dt_239_){
_start:
{
lean_object* v_time_240_; lean_object* v_date_241_; lean_object* v_nanosecond_242_; lean_object* v_days_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v_nanos_250_; lean_object* v___x_251_; 
v_time_240_ = lean_ctor_get(v_dt_239_, 1);
lean_inc_ref(v_time_240_);
v_date_241_ = lean_ctor_get(v_dt_239_, 0);
lean_inc_ref(v_date_241_);
lean_dec_ref(v_dt_239_);
v_nanosecond_242_ = lean_ctor_get(v_time_240_, 3);
lean_inc(v_nanosecond_242_);
v_days_243_ = l_Std_Time_PlainDate_toEpochDay(v_date_241_);
v___x_244_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_245_ = lean_int_mul(v_days_243_, v___x_244_);
lean_dec(v_days_243_);
v___x_246_ = l_Std_Time_PlainTime_toSeconds(v_time_240_);
lean_dec_ref(v_time_240_);
v___x_247_ = lean_int_add(v___x_245_, v___x_246_);
lean_dec(v___x_246_);
lean_dec(v___x_245_);
v___x_248_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_249_ = lean_int_mul(v___x_247_, v___x_248_);
lean_dec(v___x_247_);
v_nanos_250_ = lean_int_add(v___x_249_, v_nanosecond_242_);
lean_dec(v_nanosecond_242_);
lean_dec(v___x_249_);
v___x_251_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_250_);
lean_dec(v_nanos_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_PlainDateTime_toWallTime_spec__0(lean_object* v_a_252_){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_nat_to_int(v_a_252_);
v___x_254_ = l_Rat_ofInt(v___x_253_);
return v___x_254_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_unsigned_to_nat(13u);
v___x_256_ = lean_unsigned_to_nat(1u);
v___x_257_ = lean_nat_mod(v___x_256_, v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(lean_object* v_as_x27_258_, lean_object* v_b_259_){
_start:
{
if (lean_obj_tag(v_as_x27_258_) == 0)
{
return v_b_259_;
}
else
{
lean_object* v_head_260_; lean_object* v_tail_261_; lean_object* v_fst_262_; lean_object* v_snd_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_279_; 
v_head_260_ = lean_ctor_get(v_as_x27_258_, 0);
v_tail_261_ = lean_ctor_get(v_as_x27_258_, 1);
v_fst_262_ = lean_ctor_get(v_b_259_, 0);
v_snd_263_ = lean_ctor_get(v_b_259_, 1);
v_isSharedCheck_279_ = !lean_is_exclusive(v_b_259_);
if (v_isSharedCheck_279_ == 0)
{
v___x_265_ = v_b_259_;
v_isShared_266_ = v_isSharedCheck_279_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_snd_263_);
lean_inc(v_fst_262_);
lean_dec(v_b_259_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_279_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_267_ = lean_unsigned_to_nat(13u);
v___x_268_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___closed__0);
v___x_269_ = l_Fin_add(v___x_267_, v_snd_263_, v___x_268_);
lean_dec(v_snd_263_);
v___x_270_ = lean_int_dec_lt(v_fst_262_, v_head_260_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_271_ = lean_int_sub(v_fst_262_, v_head_260_);
lean_dec(v_fst_262_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 1, v___x_269_);
lean_ctor_set(v___x_265_, 0, v___x_271_);
v___x_273_ = v___x_265_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_269_);
v___x_273_ = v_reuseFailAlloc_275_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_as_x27_258_ = v_tail_261_;
v_b_259_ = v___x_273_;
goto _start;
}
}
else
{
lean_object* v___x_277_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 1, v___x_269_);
v___x_277_ = v___x_265_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_fst_262_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___x_269_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg___boxed(lean_object* v_as_x27_280_, lean_object* v_b_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_as_x27_280_, v_b_281_);
lean_dec(v_as_x27_280_);
return v_res_282_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__0(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(11017u);
v___x_284_ = lean_nat_to_int(v___x_283_);
return v___x_284_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_unsigned_to_nat(365u);
v___x_286_ = lean_nat_to_int(v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(400u);
v___x_288_ = lean_nat_to_int(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__3(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_290_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_291_ = lean_int_mul(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__4(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(97u);
v___x_293_ = lean_nat_to_int(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__5(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v_daysPer400Y_296_; 
v___x_294_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__4, &l_Std_Time_PlainDateTime_ofWallTime___closed__4_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__4);
v___x_295_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__3, &l_Std_Time_PlainDateTime_ofWallTime___closed__3_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__3);
v_daysPer400Y_296_ = lean_int_add(v___x_295_, v___x_294_);
return v_daysPer400Y_296_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(100u);
v___x_298_ = lean_nat_to_int(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__7(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_300_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_301_ = lean_int_mul(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__8(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(24u);
v___x_303_ = lean_nat_to_int(v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__9(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_daysPer100Y_306_; 
v___x_304_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__8, &l_Std_Time_PlainDateTime_ofWallTime___closed__8_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__8);
v___x_305_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__7, &l_Std_Time_PlainDateTime_ofWallTime___closed__7_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__7);
v_daysPer100Y_306_ = lean_int_add(v___x_305_, v___x_304_);
return v_daysPer100Y_306_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(4u);
v___x_308_ = lean_nat_to_int(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__11(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_310_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_311_ = lean_int_mul(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__12(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v_daysPer4Y_314_; 
v___x_312_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_313_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__11, &l_Std_Time_PlainDateTime_ofWallTime___closed__11_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__11);
v_daysPer4Y_314_ = lean_int_add(v___x_313_, v___x_312_);
return v_daysPer4Y_314_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__13(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(60u);
v___x_316_ = lean_nat_to_int(v___x_315_);
return v___x_316_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__14(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(3600u);
v___x_318_ = lean_nat_to_int(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(31u);
v___x_320_ = lean_nat_to_int(v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__16(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(29u);
v___x_322_ = lean_nat_to_int(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__17(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_box(0);
v___x_324_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__16, &l_Std_Time_PlainDateTime_ofWallTime___closed__16_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__16);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__18(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__17, &l_Std_Time_PlainDateTime_ofWallTime___closed__17_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__17);
v___x_327_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__19(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__18, &l_Std_Time_PlainDateTime_ofWallTime___closed__18_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__18);
v___x_330_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v___x_329_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__20(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__19, &l_Std_Time_PlainDateTime_ofWallTime___closed__19_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__19);
v___x_333_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__21(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__20, &l_Std_Time_PlainDateTime_ofWallTime___closed__20_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__20);
v___x_336_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__22(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__21, &l_Std_Time_PlainDateTime_ofWallTime___closed__21_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__21);
v___x_339_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__23(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__22, &l_Std_Time_PlainDateTime_ofWallTime___closed__22_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__22);
v___x_342_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__24(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__23, &l_Std_Time_PlainDateTime_ofWallTime___closed__23_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__23);
v___x_345_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
return v___x_346_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__25(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__24, &l_Std_Time_PlainDateTime_ofWallTime___closed__24_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__24);
v___x_348_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___x_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__26(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__25, &l_Std_Time_PlainDateTime_ofWallTime___closed__25_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__25);
v___x_351_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v___x_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v___x_350_);
return v___x_352_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__27(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__26, &l_Std_Time_PlainDateTime_ofWallTime___closed__26_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__26);
v___x_354_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__11, &l_Std_Time_instInhabitedPlainDateTime_default___closed__11_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__11);
v___x_355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__28(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v_months_358_; 
v___x_356_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__27, &l_Std_Time_PlainDateTime_ofWallTime___closed__27_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__27);
v___x_357_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__15, &l_Std_Time_PlainDateTime_ofWallTime___closed__15_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__15);
v_months_358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_months_358_, 0, v___x_357_);
lean_ctor_set(v_months_358_, 1, v___x_356_);
return v_months_358_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__29(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_mon_361_; 
v___x_359_ = lean_unsigned_to_nat(13u);
v___x_360_ = lean_unsigned_to_nat(0u);
v_mon_361_ = lean_nat_mod(v___x_360_, v___x_359_);
return v_mon_361_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__30(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_unsigned_to_nat(2000u);
v___x_363_ = lean_nat_to_int(v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__31(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(25u);
v___x_365_ = lean_nat_to_int(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_ofWallTime___closed__32(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v___x_367_ = lean_int_neg(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object* v_stamp_368_){
_start:
{
lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; uint8_t v___y_385_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; uint8_t v___y_397_; lean_object* v___y_398_; uint8_t v___y_399_; lean_object* v_second_400_; lean_object* v_nano_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_541_; 
v_second_400_ = lean_ctor_get(v_stamp_368_, 0);
v_nano_401_ = lean_ctor_get(v_stamp_368_, 1);
v_isSharedCheck_541_ = !lean_is_exclusive(v_stamp_368_);
if (v_isSharedCheck_541_ == 0)
{
v___x_403_ = v_stamp_368_;
v_isShared_404_ = v_isSharedCheck_541_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_nano_401_);
lean_inc(v_second_400_);
lean_dec(v_stamp_368_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_541_;
goto v_resetjp_402_;
}
v___jp_369_:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_375_, 0, v___y_371_);
lean_ctor_set(v___x_375_, 1, v___y_373_);
lean_ctor_set(v___x_375_, 2, v___y_372_);
lean_ctor_set(v___x_375_, 3, v___y_370_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___y_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
return v___x_376_;
}
v___jp_377_:
{
lean_object* v_max_386_; uint8_t v___x_387_; 
v_max_386_ = l_Std_Time_Month_Ordinal_days(v___y_385_, v___y_384_);
v___x_387_ = lean_int_dec_lt(v_max_386_, v___y_379_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
lean_dec(v_max_386_);
v___x_388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_388_, 0, v___y_380_);
lean_ctor_set(v___x_388_, 1, v___y_384_);
lean_ctor_set(v___x_388_, 2, v___y_379_);
v___y_370_ = v___y_378_;
v___y_371_ = v___y_381_;
v___y_372_ = v___y_383_;
v___y_373_ = v___y_382_;
v___y_374_ = v___x_388_;
goto v___jp_369_;
}
else
{
lean_object* v___x_389_; 
lean_dec(v___y_379_);
v___x_389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_389_, 0, v___y_380_);
lean_ctor_set(v___x_389_, 1, v___y_384_);
lean_ctor_set(v___x_389_, 2, v_max_386_);
v___y_370_ = v___y_378_;
v___y_371_ = v___y_381_;
v___y_372_ = v___y_383_;
v___y_373_ = v___y_382_;
v___y_374_ = v___x_389_;
goto v___jp_369_;
}
}
v___jp_390_:
{
if (v___y_397_ == 0)
{
v___y_378_ = v___y_392_;
v___y_379_ = v___y_391_;
v___y_380_ = v___y_393_;
v___y_381_ = v___y_394_;
v___y_382_ = v___y_396_;
v___y_383_ = v___y_395_;
v___y_384_ = v___y_398_;
v___y_385_ = v___y_397_;
goto v___jp_377_;
}
else
{
v___y_378_ = v___y_392_;
v___y_379_ = v___y_391_;
v___y_380_ = v___y_393_;
v___y_381_ = v___y_394_;
v___y_382_ = v___y_396_;
v___y_383_ = v___y_395_;
v___y_384_ = v___y_398_;
v___y_385_ = v___y_399_;
goto v___jp_377_;
}
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_daysPer400Y_408_; lean_object* v___x_409_; lean_object* v_daysPer100Y_410_; lean_object* v___x_411_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v_daysPer4Y_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v_hmon_439_; lean_object* v_year_440_; lean_object* v___y_452_; lean_object* v___y_453_; lean_object* v___y_454_; lean_object* v___y_455_; lean_object* v___y_456_; lean_object* v_remYears_457_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v_quadrennialCycles_493_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v_centenialCycles_503_; lean_object* v___y_511_; lean_object* v_quadracentennialCycles_512_; lean_object* v_remDays_513_; lean_object* v_fst_518_; lean_object* v_snd_519_; lean_object* v_snd_527_; lean_object* v_secs_536_; lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_405_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__0, &l_Std_Time_PlainDateTime_ofWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__0);
v___x_406_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__1, &l_Std_Time_PlainDateTime_ofWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__1);
v___x_407_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v_daysPer400Y_408_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__5, &l_Std_Time_PlainDateTime_ofWallTime___closed__5_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__5);
v___x_409_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v_daysPer100Y_410_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__9, &l_Std_Time_PlainDateTime_ofWallTime___closed__9_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__9);
v___x_411_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_429_ = lean_unsigned_to_nat(1u);
v___x_430_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__1, &l_Std_Time_instInhabitedPlainDateTime_default___closed__1_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__1);
v_daysPer4Y_431_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__12, &l_Std_Time_PlainDateTime_ofWallTime___closed__12_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__12);
v___x_432_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_433_ = lean_int_mul(v_second_400_, v___x_432_);
lean_dec(v_second_400_);
v___x_434_ = lean_int_add(v___x_433_, v_nano_401_);
lean_dec(v_nano_401_);
lean_dec(v___x_433_);
v_secs_536_ = lean_int_div(v___x_434_, v___x_432_);
v___x_537_ = lean_int_mod(v___x_434_, v___x_432_);
v___x_538_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_539_ = lean_int_dec_lt(v___x_537_, v___x_538_);
lean_dec(v___x_537_);
if (v___x_539_ == 0)
{
v_snd_527_ = v_secs_536_;
goto v___jp_526_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_int_sub(v_secs_536_, v___x_430_);
lean_dec(v_secs_536_);
v_snd_527_ = v___x_540_;
goto v___jp_526_;
}
v___jp_412_:
{
lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_421_ = lean_int_mod(v___y_414_, v___x_411_);
v___x_422_ = lean_nat_to_int(v___y_418_);
v___x_423_ = lean_int_dec_eq(v___x_421_, v___x_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_int_mod(v___y_414_, v___x_409_);
v___x_425_ = lean_int_dec_eq(v___x_424_, v___x_422_);
lean_dec(v___x_424_);
if (v___x_425_ == 0)
{
uint8_t v___x_426_; 
lean_dec(v___x_422_);
v___x_426_ = 1;
v___y_391_ = v___y_420_;
v___y_392_ = v___y_413_;
v___y_393_ = v___y_414_;
v___y_394_ = v___y_415_;
v___y_395_ = v___y_416_;
v___y_396_ = v___y_417_;
v___y_397_ = v___x_423_;
v___y_398_ = v___y_419_;
v___y_399_ = v___x_426_;
goto v___jp_390_;
}
else
{
lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_427_ = lean_int_mod(v___y_414_, v___x_407_);
v___x_428_ = lean_int_dec_eq(v___x_427_, v___x_422_);
lean_dec(v___x_422_);
lean_dec(v___x_427_);
v___y_391_ = v___y_420_;
v___y_392_ = v___y_413_;
v___y_393_ = v___y_414_;
v___y_394_ = v___y_415_;
v___y_395_ = v___y_416_;
v___y_396_ = v___y_417_;
v___y_397_ = v___x_423_;
v___y_398_ = v___y_419_;
v___y_399_ = v___x_428_;
goto v___jp_390_;
}
}
v___jp_435_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_441_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__13, &l_Std_Time_PlainDateTime_ofWallTime___closed__13_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__13);
v___x_442_ = lean_int_emod(v___y_437_, v___x_441_);
v___x_443_ = lean_int_ediv(v___y_437_, v___x_441_);
v___x_444_ = lean_int_emod(v___x_443_, v___x_441_);
lean_dec(v___x_443_);
v___x_445_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__14, &l_Std_Time_PlainDateTime_ofWallTime___closed__14_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__14);
v___x_446_ = lean_int_ediv(v___y_437_, v___x_445_);
lean_dec(v___y_437_);
v___x_447_ = lean_int_emod(v___x_434_, v___x_432_);
lean_dec(v___x_434_);
v___x_448_ = l_Fin_succ___redArg(v___y_436_);
lean_dec(v___y_436_);
v___x_449_ = lean_nat_dec_le(v___x_429_, v___x_448_);
if (v___x_449_ == 0)
{
lean_dec(v___x_448_);
v___y_413_ = v___x_447_;
v___y_414_ = v_year_440_;
v___y_415_ = v___x_446_;
v___y_416_ = v___x_442_;
v___y_417_ = v___x_444_;
v___y_418_ = v___y_438_;
v___y_419_ = v_hmon_439_;
v___y_420_ = v___x_430_;
goto v___jp_412_;
}
else
{
lean_object* v___x_450_; 
v___x_450_ = lean_nat_to_int(v___x_448_);
v___y_413_ = v___x_447_;
v___y_414_ = v_year_440_;
v___y_415_ = v___x_446_;
v___y_416_ = v___x_442_;
v___y_417_ = v___x_444_;
v___y_418_ = v___y_438_;
v___y_419_ = v_hmon_439_;
v___y_420_ = v___x_450_;
goto v___jp_412_;
}
}
v___jp_451_:
{
lean_object* v___x_458_; lean_object* v_remDays_459_; lean_object* v___x_460_; lean_object* v_months_461_; lean_object* v___x_462_; lean_object* v_mon_463_; lean_object* v___x_465_; 
v___x_458_ = lean_int_mul(v_remYears_457_, v___x_406_);
v_remDays_459_ = lean_int_sub(v___y_454_, v___x_458_);
lean_dec(v___x_458_);
lean_dec(v___y_454_);
v___x_460_ = lean_unsigned_to_nat(31u);
v_months_461_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__28, &l_Std_Time_PlainDateTime_ofWallTime___closed__28_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__28);
v___x_462_ = lean_unsigned_to_nat(0u);
v_mon_463_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__29, &l_Std_Time_PlainDateTime_ofWallTime___closed__29_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__29);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 1, v_mon_463_);
lean_ctor_set(v___x_403_, 0, v_remDays_459_);
v___x_465_ = v___x_403_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_remDays_459_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v_mon_463_);
v___x_465_ = v_reuseFailAlloc_487_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v_year_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_466_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_months_461_, v___x_465_);
v_fst_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_fst_467_);
v_snd_468_ = lean_ctor_get(v___x_466_, 1);
lean_inc(v_snd_468_);
lean_dec_ref(v___x_466_);
v___x_469_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__30, &l_Std_Time_PlainDateTime_ofWallTime___closed__30_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__30);
v___x_470_ = lean_int_add(v___x_469_, v_remYears_457_);
lean_dec(v_remYears_457_);
v___x_471_ = lean_int_mul(v___x_411_, v___y_455_);
lean_dec(v___y_455_);
v___x_472_ = lean_int_add(v___x_470_, v___x_471_);
lean_dec(v___x_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_int_mul(v___x_409_, v___y_453_);
lean_dec(v___y_453_);
v___x_474_ = lean_int_add(v___x_472_, v___x_473_);
lean_dec(v___x_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_int_mul(v___x_407_, v___y_452_);
lean_dec(v___y_452_);
v_year_476_ = lean_int_add(v___x_474_, v___x_475_);
lean_dec(v___x_475_);
lean_dec(v___x_474_);
v___x_477_ = l_Int_toNat(v_fst_467_);
lean_dec(v_fst_467_);
v___x_478_ = lean_nat_mod(v___x_477_, v___x_460_);
lean_dec(v___x_477_);
v___x_479_ = lean_unsigned_to_nat(10u);
v___x_480_ = lean_nat_dec_lt(v___x_479_, v_snd_468_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_unsigned_to_nat(2u);
v___x_482_ = lean_nat_add(v_snd_468_, v___x_481_);
lean_dec(v_snd_468_);
v___x_483_ = lean_nat_to_int(v___x_482_);
v___y_436_ = v___x_478_;
v___y_437_ = v___y_456_;
v___y_438_ = v___x_462_;
v_hmon_439_ = v___x_483_;
v_year_440_ = v_year_476_;
goto v___jp_435_;
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = lean_int_add(v_year_476_, v___x_430_);
lean_dec(v_year_476_);
v___x_485_ = lean_nat_sub(v_snd_468_, v___x_479_);
lean_dec(v_snd_468_);
v___x_486_ = lean_nat_to_int(v___x_485_);
v___y_436_ = v___x_478_;
v___y_437_ = v___y_456_;
v___y_438_ = v___x_462_;
v_hmon_439_ = v___x_486_;
v_year_440_ = v___x_484_;
goto v___jp_435_;
}
}
}
v___jp_488_:
{
lean_object* v___x_494_; lean_object* v_remDays_495_; lean_object* v_remYears_496_; uint8_t v___x_497_; 
v___x_494_ = lean_int_mul(v_quadrennialCycles_493_, v_daysPer4Y_431_);
v_remDays_495_ = lean_int_sub(v___y_492_, v___x_494_);
lean_dec(v___x_494_);
lean_dec(v___y_492_);
v_remYears_496_ = lean_int_ediv(v_remDays_495_, v___x_406_);
v___x_497_ = lean_int_dec_eq(v_remYears_496_, v___x_411_);
if (v___x_497_ == 0)
{
v___y_452_ = v___y_490_;
v___y_453_ = v___y_489_;
v___y_454_ = v_remDays_495_;
v___y_455_ = v_quadrennialCycles_493_;
v___y_456_ = v___y_491_;
v_remYears_457_ = v_remYears_496_;
goto v___jp_451_;
}
else
{
lean_object* v_remYears_498_; 
v_remYears_498_ = lean_int_sub(v_remYears_496_, v___x_430_);
lean_dec(v_remYears_496_);
v___y_452_ = v___y_490_;
v___y_453_ = v___y_489_;
v___y_454_ = v_remDays_495_;
v___y_455_ = v_quadrennialCycles_493_;
v___y_456_ = v___y_491_;
v_remYears_457_ = v_remYears_498_;
goto v___jp_451_;
}
}
v___jp_499_:
{
lean_object* v___x_504_; lean_object* v_remDays_505_; lean_object* v_quadrennialCycles_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_504_ = lean_int_mul(v_centenialCycles_503_, v_daysPer100Y_410_);
v_remDays_505_ = lean_int_sub(v___y_501_, v___x_504_);
lean_dec(v___x_504_);
lean_dec(v___y_501_);
v_quadrennialCycles_506_ = lean_int_ediv(v_remDays_505_, v_daysPer4Y_431_);
v___x_507_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__31, &l_Std_Time_PlainDateTime_ofWallTime___closed__31_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__31);
v___x_508_ = lean_int_dec_eq(v_quadrennialCycles_506_, v___x_507_);
if (v___x_508_ == 0)
{
v___y_489_ = v_centenialCycles_503_;
v___y_490_ = v___y_500_;
v___y_491_ = v___y_502_;
v___y_492_ = v_remDays_505_;
v_quadrennialCycles_493_ = v_quadrennialCycles_506_;
goto v___jp_488_;
}
else
{
lean_object* v_quadrennialCycles_509_; 
v_quadrennialCycles_509_ = lean_int_sub(v_quadrennialCycles_506_, v___x_430_);
lean_dec(v_quadrennialCycles_506_);
v___y_489_ = v_centenialCycles_503_;
v___y_490_ = v___y_500_;
v___y_491_ = v___y_502_;
v___y_492_ = v_remDays_505_;
v_quadrennialCycles_493_ = v_quadrennialCycles_509_;
goto v___jp_488_;
}
}
v___jp_510_:
{
lean_object* v_centenialCycles_514_; uint8_t v___x_515_; 
v_centenialCycles_514_ = lean_int_ediv(v_remDays_513_, v_daysPer100Y_410_);
v___x_515_ = lean_int_dec_eq(v_centenialCycles_514_, v___x_411_);
if (v___x_515_ == 0)
{
v___y_500_ = v_quadracentennialCycles_512_;
v___y_501_ = v_remDays_513_;
v___y_502_ = v___y_511_;
v_centenialCycles_503_ = v_centenialCycles_514_;
goto v___jp_499_;
}
else
{
lean_object* v_centenialCycles_516_; 
v_centenialCycles_516_ = lean_int_sub(v_centenialCycles_514_, v___x_430_);
lean_dec(v_centenialCycles_514_);
v___y_500_ = v_quadracentennialCycles_512_;
v___y_501_ = v_remDays_513_;
v___y_502_ = v___y_511_;
v_centenialCycles_503_ = v_centenialCycles_516_;
goto v___jp_499_;
}
}
v___jp_517_:
{
lean_object* v_quadracentennialCycles_520_; lean_object* v_remDays_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v_quadracentennialCycles_520_ = lean_int_ediv(v_snd_519_, v_daysPer400Y_408_);
v_remDays_521_ = lean_int_emod(v_snd_519_, v_daysPer400Y_408_);
lean_dec(v_snd_519_);
v___x_522_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_523_ = lean_int_dec_lt(v_remDays_521_, v___x_522_);
if (v___x_523_ == 0)
{
v___y_511_ = v_fst_518_;
v_quadracentennialCycles_512_ = v_quadracentennialCycles_520_;
v_remDays_513_ = v_remDays_521_;
goto v___jp_510_;
}
else
{
lean_object* v_remDays_524_; lean_object* v_quadracentennialCycles_525_; 
v_remDays_524_ = lean_int_add(v_remDays_521_, v_daysPer400Y_408_);
lean_dec(v_remDays_521_);
v_quadracentennialCycles_525_ = lean_int_sub(v_quadracentennialCycles_520_, v___x_430_);
lean_dec(v_quadracentennialCycles_520_);
v___y_511_ = v_fst_518_;
v_quadracentennialCycles_512_ = v_quadracentennialCycles_525_;
v_remDays_513_ = v_remDays_524_;
goto v___jp_510_;
}
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v_boundedDaysSinceEpoch_529_; lean_object* v_rawDays_530_; lean_object* v_h_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_528_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v_boundedDaysSinceEpoch_529_ = lean_int_div(v_snd_527_, v___x_528_);
v_rawDays_530_ = lean_int_sub(v_boundedDaysSinceEpoch_529_, v___x_405_);
lean_dec(v_boundedDaysSinceEpoch_529_);
v_h_531_ = lean_int_mod(v_snd_527_, v___x_528_);
lean_dec(v_snd_527_);
v___x_532_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__32, &l_Std_Time_PlainDateTime_ofWallTime___closed__32_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__32);
v___x_533_ = lean_int_dec_le(v_h_531_, v___x_532_);
if (v___x_533_ == 0)
{
v_fst_518_ = v_h_531_;
v_snd_519_ = v_rawDays_530_;
goto v___jp_517_;
}
else
{
lean_object* v___x_534_; lean_object* v_rawDays_535_; 
v___x_534_ = lean_int_add(v_h_531_, v___x_528_);
lean_dec(v_h_531_);
v_rawDays_535_ = lean_int_sub(v_rawDays_530_, v___x_430_);
lean_dec(v_rawDays_530_);
v_fst_518_ = v___x_534_;
v_snd_519_ = v_rawDays_535_;
goto v___jp_517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0(lean_object* v_as_542_, lean_object* v_as_x27_543_, lean_object* v_b_544_, lean_object* v_a_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___redArg(v_as_x27_543_, v_b_544_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0___boxed(lean_object* v_as_547_, lean_object* v_as_x27_548_, lean_object* v_b_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_List_forIn_x27_loop___at___00Std_Time_PlainDateTime_ofWallTime_spec__0(v_as_547_, v_as_x27_548_, v_b_549_, v_a_550_);
lean_dec(v_as_x27_548_);
lean_dec(v_as_547_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toEpochDay(lean_object* v_pdt_552_){
_start:
{
lean_object* v_date_553_; lean_object* v___x_554_; 
v_date_553_ = lean_ctor_get(v_pdt_552_, 0);
lean_inc_ref(v_date_553_);
lean_dec_ref(v_pdt_552_);
v___x_554_ = l_Std_Time_PlainDate_toEpochDay(v_date_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay(lean_object* v_days_555_, lean_object* v_time_556_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = l_Std_Time_PlainDate_ofEpochDay(v_days_555_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v_time_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofEpochDay___boxed(lean_object* v_days_559_, lean_object* v_time_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Std_Time_PlainDateTime_ofEpochDay(v_days_559_, v_time_560_);
lean_dec(v_days_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday(lean_object* v_dt_562_, uint8_t v_desiredWeekday_563_){
_start:
{
lean_object* v_date_564_; lean_object* v_time_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_573_; 
v_date_564_ = lean_ctor_get(v_dt_562_, 0);
v_time_565_ = lean_ctor_get(v_dt_562_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v_dt_562_);
if (v_isSharedCheck_573_ == 0)
{
v___x_567_ = v_dt_562_;
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_time_565_);
lean_inc(v_date_564_);
lean_dec(v_dt_562_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_573_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = l_Std_Time_PlainDate_withWeekday(v_date_564_, v_desiredWeekday_563_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_time_565_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withWeekday___boxed(lean_object* v_dt_574_, lean_object* v_desiredWeekday_575_){
_start:
{
uint8_t v_desiredWeekday_boxed_576_; lean_object* v_res_577_; 
v_desiredWeekday_boxed_576_ = lean_unbox(v_desiredWeekday_575_);
v_res_577_ = l_Std_Time_PlainDateTime_withWeekday(v_dt_574_, v_desiredWeekday_boxed_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysClip(lean_object* v_dt_578_, lean_object* v_days_579_){
_start:
{
lean_object* v_date_580_; lean_object* v_time_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_621_; 
v_date_580_ = lean_ctor_get(v_dt_578_, 0);
v_time_581_ = lean_ctor_get(v_dt_578_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v_dt_578_);
if (v_isSharedCheck_621_ == 0)
{
v___x_583_ = v_dt_578_;
v_isShared_584_ = v_isSharedCheck_621_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_time_581_);
lean_inc(v_date_580_);
lean_dec(v_dt_578_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_621_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v_year_585_; lean_object* v_month_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_619_; 
v_year_585_ = lean_ctor_get(v_date_580_, 0);
v_month_586_ = lean_ctor_get(v_date_580_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_date_580_);
if (v_isSharedCheck_619_ == 0)
{
lean_object* v_unused_620_; 
v_unused_620_ = lean_ctor_get(v_date_580_, 2);
lean_dec(v_unused_620_);
v___x_588_ = v_date_580_;
v_isShared_589_ = v_isSharedCheck_619_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_month_586_);
lean_inc(v_year_585_);
lean_dec(v_date_580_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_619_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
uint8_t v___y_591_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; uint8_t v___y_611_; lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_606_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_607_ = lean_int_mod(v_year_585_, v___x_606_);
v___x_608_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_609_ = lean_int_dec_eq(v___x_607_, v___x_608_);
lean_dec(v___x_607_);
v___x_612_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_613_ = lean_int_mod(v_year_585_, v___x_612_);
v___x_614_ = lean_int_dec_eq(v___x_613_, v___x_608_);
lean_dec(v___x_613_);
if (v___x_614_ == 0)
{
uint8_t v___x_615_; 
v___x_615_ = 1;
v___y_611_ = v___x_615_;
goto v___jp_610_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_616_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_617_ = lean_int_mod(v_year_585_, v___x_616_);
v___x_618_ = lean_int_dec_eq(v___x_617_, v___x_608_);
lean_dec(v___x_617_);
v___y_611_ = v___x_618_;
goto v___jp_610_;
}
v___jp_590_:
{
lean_object* v_max_592_; uint8_t v___x_593_; 
v_max_592_ = l_Std_Time_Month_Ordinal_days(v___y_591_, v_month_586_);
v___x_593_ = lean_int_dec_lt(v_max_592_, v_days_579_);
if (v___x_593_ == 0)
{
lean_object* v___x_595_; 
lean_dec(v_max_592_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 2, v_days_579_);
v___x_595_ = v___x_588_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_year_585_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_month_586_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_days_579_);
v___x_595_ = v_reuseFailAlloc_599_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_597_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_595_);
v___x_597_ = v___x_583_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_time_581_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
else
{
lean_object* v___x_601_; 
lean_dec(v_days_579_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 2, v_max_592_);
v___x_601_ = v___x_588_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_year_585_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_month_586_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v_max_592_);
v___x_601_ = v_reuseFailAlloc_605_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_603_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_601_);
v___x_603_ = v___x_583_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_time_581_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
v___jp_610_:
{
if (v___x_609_ == 0)
{
v___y_591_ = v___x_609_;
goto v___jp_590_;
}
else
{
v___y_591_ = v___y_611_;
goto v___jp_590_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver(lean_object* v_dt_622_, lean_object* v_days_623_){
_start:
{
lean_object* v_date_624_; lean_object* v_time_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_635_; 
v_date_624_ = lean_ctor_get(v_dt_622_, 0);
v_time_625_ = lean_ctor_get(v_dt_622_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v_dt_622_);
if (v_isSharedCheck_635_ == 0)
{
v___x_627_ = v_dt_622_;
v_isShared_628_ = v_isSharedCheck_635_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_time_625_);
lean_inc(v_date_624_);
lean_dec(v_dt_622_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_635_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_year_629_; lean_object* v_month_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v_year_629_ = lean_ctor_get(v_date_624_, 0);
lean_inc(v_year_629_);
v_month_630_ = lean_ctor_get(v_date_624_, 1);
lean_inc(v_month_630_);
lean_dec_ref(v_date_624_);
v___x_631_ = l_Std_Time_PlainDate_rollOver(v_year_629_, v_month_630_, v_days_623_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_631_);
v___x_633_ = v___x_627_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_time_625_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withDaysRollOver___boxed(lean_object* v_dt_636_, lean_object* v_days_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Std_Time_PlainDateTime_withDaysRollOver(v_dt_636_, v_days_637_);
lean_dec(v_days_637_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthClip(lean_object* v_dt_639_, lean_object* v_month_640_){
_start:
{
lean_object* v_date_641_; lean_object* v_time_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_682_; 
v_date_641_ = lean_ctor_get(v_dt_639_, 0);
v_time_642_ = lean_ctor_get(v_dt_639_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_dt_639_);
if (v_isSharedCheck_682_ == 0)
{
v___x_644_ = v_dt_639_;
v_isShared_645_ = v_isSharedCheck_682_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_time_642_);
lean_inc(v_date_641_);
lean_dec(v_dt_639_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_682_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v_year_646_; lean_object* v_day_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_680_; 
v_year_646_ = lean_ctor_get(v_date_641_, 0);
v_day_647_ = lean_ctor_get(v_date_641_, 2);
v_isSharedCheck_680_ = !lean_is_exclusive(v_date_641_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; 
v_unused_681_ = lean_ctor_get(v_date_641_, 1);
lean_dec(v_unused_681_);
v___x_649_ = v_date_641_;
v_isShared_650_ = v_isSharedCheck_680_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_day_647_);
lean_inc(v_year_646_);
lean_dec(v_date_641_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_680_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
uint8_t v___y_652_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; uint8_t v___y_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v___x_667_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_668_ = lean_int_mod(v_year_646_, v___x_667_);
v___x_669_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_670_ = lean_int_dec_eq(v___x_668_, v___x_669_);
lean_dec(v___x_668_);
v___x_673_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_674_ = lean_int_mod(v_year_646_, v___x_673_);
v___x_675_ = lean_int_dec_eq(v___x_674_, v___x_669_);
lean_dec(v___x_674_);
if (v___x_675_ == 0)
{
uint8_t v___x_676_; 
v___x_676_ = 1;
v___y_672_ = v___x_676_;
goto v___jp_671_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_677_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_678_ = lean_int_mod(v_year_646_, v___x_677_);
v___x_679_ = lean_int_dec_eq(v___x_678_, v___x_669_);
lean_dec(v___x_678_);
v___y_672_ = v___x_679_;
goto v___jp_671_;
}
v___jp_651_:
{
lean_object* v_max_653_; uint8_t v___x_654_; 
v_max_653_ = l_Std_Time_Month_Ordinal_days(v___y_652_, v_month_640_);
v___x_654_ = lean_int_dec_lt(v_max_653_, v_day_647_);
if (v___x_654_ == 0)
{
lean_object* v___x_656_; 
lean_dec(v_max_653_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v_month_640_);
v___x_656_ = v___x_649_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_year_646_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_month_640_);
lean_ctor_set(v_reuseFailAlloc_660_, 2, v_day_647_);
v___x_656_ = v_reuseFailAlloc_660_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_658_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_656_);
v___x_658_ = v___x_644_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_time_642_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
else
{
lean_object* v___x_662_; 
lean_dec(v_day_647_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 2, v_max_653_);
lean_ctor_set(v___x_649_, 1, v_month_640_);
v___x_662_ = v___x_649_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_year_646_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_month_640_);
lean_ctor_set(v_reuseFailAlloc_666_, 2, v_max_653_);
v___x_662_ = v_reuseFailAlloc_666_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_664_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_662_);
v___x_664_ = v___x_644_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v___x_662_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_time_642_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
v___jp_671_:
{
if (v___x_670_ == 0)
{
v___y_652_ = v___x_670_;
goto v___jp_651_;
}
else
{
v___y_652_ = v___y_672_;
goto v___jp_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMonthRollOver(lean_object* v_dt_683_, lean_object* v_month_684_){
_start:
{
lean_object* v_date_685_; lean_object* v_time_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_696_; 
v_date_685_ = lean_ctor_get(v_dt_683_, 0);
v_time_686_ = lean_ctor_get(v_dt_683_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_dt_683_);
if (v_isSharedCheck_696_ == 0)
{
v___x_688_ = v_dt_683_;
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_time_686_);
lean_inc(v_date_685_);
lean_dec(v_dt_683_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_year_690_; lean_object* v_day_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v_year_690_ = lean_ctor_get(v_date_685_, 0);
lean_inc(v_year_690_);
v_day_691_ = lean_ctor_get(v_date_685_, 2);
lean_inc(v_day_691_);
lean_dec_ref(v_date_685_);
v___x_692_ = l_Std_Time_PlainDate_rollOver(v_year_690_, v_month_684_, v_day_691_);
lean_dec(v_day_691_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_692_);
v___x_694_ = v___x_688_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_time_686_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearClip(lean_object* v_dt_697_, lean_object* v_year_698_){
_start:
{
lean_object* v_date_699_; lean_object* v_time_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_740_; 
v_date_699_ = lean_ctor_get(v_dt_697_, 0);
v_time_700_ = lean_ctor_get(v_dt_697_, 1);
v_isSharedCheck_740_ = !lean_is_exclusive(v_dt_697_);
if (v_isSharedCheck_740_ == 0)
{
v___x_702_ = v_dt_697_;
v_isShared_703_ = v_isSharedCheck_740_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_time_700_);
lean_inc(v_date_699_);
lean_dec(v_dt_697_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_740_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_month_704_; lean_object* v_day_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_738_; 
v_month_704_ = lean_ctor_get(v_date_699_, 1);
v_day_705_ = lean_ctor_get(v_date_699_, 2);
v_isSharedCheck_738_ = !lean_is_exclusive(v_date_699_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v_date_699_, 0);
lean_dec(v_unused_739_);
v___x_707_ = v_date_699_;
v_isShared_708_ = v_isSharedCheck_738_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_day_705_);
lean_inc(v_month_704_);
lean_dec(v_date_699_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_738_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
uint8_t v___y_710_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; uint8_t v___y_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_725_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_726_ = lean_int_mod(v_year_698_, v___x_725_);
v___x_727_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_728_ = lean_int_dec_eq(v___x_726_, v___x_727_);
lean_dec(v___x_726_);
v___x_731_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_732_ = lean_int_mod(v_year_698_, v___x_731_);
v___x_733_ = lean_int_dec_eq(v___x_732_, v___x_727_);
lean_dec(v___x_732_);
if (v___x_733_ == 0)
{
uint8_t v___x_734_; 
v___x_734_ = 1;
v___y_730_ = v___x_734_;
goto v___jp_729_;
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_735_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_736_ = lean_int_mod(v_year_698_, v___x_735_);
v___x_737_ = lean_int_dec_eq(v___x_736_, v___x_727_);
lean_dec(v___x_736_);
v___y_730_ = v___x_737_;
goto v___jp_729_;
}
v___jp_709_:
{
lean_object* v_max_711_; uint8_t v___x_712_; 
v_max_711_ = l_Std_Time_Month_Ordinal_days(v___y_710_, v_month_704_);
v___x_712_ = lean_int_dec_lt(v_max_711_, v_day_705_);
if (v___x_712_ == 0)
{
lean_object* v___x_714_; 
lean_dec(v_max_711_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v_year_698_);
v___x_714_ = v___x_707_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_year_698_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_month_704_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v_day_705_);
v___x_714_ = v_reuseFailAlloc_718_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_716_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_714_);
v___x_716_ = v___x_702_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_time_700_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
lean_object* v___x_720_; 
lean_dec(v_day_705_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 2, v_max_711_);
lean_ctor_set(v___x_707_, 0, v_year_698_);
v___x_720_ = v___x_707_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_year_698_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_month_704_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_max_711_);
v___x_720_ = v_reuseFailAlloc_724_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_720_);
v___x_722_ = v___x_702_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_time_700_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
v___jp_729_:
{
if (v___x_728_ == 0)
{
v___y_710_ = v___x_728_;
goto v___jp_709_;
}
else
{
v___y_710_ = v___y_730_;
goto v___jp_709_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withYearRollOver(lean_object* v_dt_741_, lean_object* v_year_742_){
_start:
{
lean_object* v_date_743_; lean_object* v_time_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_754_; 
v_date_743_ = lean_ctor_get(v_dt_741_, 0);
v_time_744_ = lean_ctor_get(v_dt_741_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_dt_741_);
if (v_isSharedCheck_754_ == 0)
{
v___x_746_ = v_dt_741_;
v_isShared_747_ = v_isSharedCheck_754_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_time_744_);
lean_inc(v_date_743_);
lean_dec(v_dt_741_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_754_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_month_748_; lean_object* v_day_749_; lean_object* v___x_750_; lean_object* v___x_752_; 
v_month_748_ = lean_ctor_get(v_date_743_, 1);
lean_inc(v_month_748_);
v_day_749_ = lean_ctor_get(v_date_743_, 2);
lean_inc(v_day_749_);
lean_dec_ref(v_date_743_);
v___x_750_ = l_Std_Time_PlainDate_rollOver(v_year_742_, v_month_748_, v_day_749_);
lean_dec(v_day_749_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_750_);
v___x_752_ = v___x_746_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_time_744_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withHours(lean_object* v_dt_755_, lean_object* v_hour_756_){
_start:
{
lean_object* v_time_757_; lean_object* v_date_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_776_; 
v_time_757_ = lean_ctor_get(v_dt_755_, 1);
v_date_758_ = lean_ctor_get(v_dt_755_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v_dt_755_);
if (v_isSharedCheck_776_ == 0)
{
v___x_760_ = v_dt_755_;
v_isShared_761_ = v_isSharedCheck_776_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_time_757_);
lean_inc(v_date_758_);
lean_dec(v_dt_755_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_776_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_minute_762_; lean_object* v_second_763_; lean_object* v_nanosecond_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_774_; 
v_minute_762_ = lean_ctor_get(v_time_757_, 1);
v_second_763_ = lean_ctor_get(v_time_757_, 2);
v_nanosecond_764_ = lean_ctor_get(v_time_757_, 3);
v_isSharedCheck_774_ = !lean_is_exclusive(v_time_757_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v_time_757_, 0);
lean_dec(v_unused_775_);
v___x_766_ = v_time_757_;
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_nanosecond_764_);
lean_inc(v_second_763_);
lean_inc(v_minute_762_);
lean_dec(v_time_757_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_hour_756_);
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_hour_756_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_minute_762_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_second_763_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_nanosecond_764_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___x_769_);
v___x_771_ = v___x_760_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_date_758_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMinutes(lean_object* v_dt_777_, lean_object* v_minute_778_){
_start:
{
lean_object* v_time_779_; lean_object* v_date_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_798_; 
v_time_779_ = lean_ctor_get(v_dt_777_, 1);
v_date_780_ = lean_ctor_get(v_dt_777_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v_dt_777_);
if (v_isSharedCheck_798_ == 0)
{
v___x_782_ = v_dt_777_;
v_isShared_783_ = v_isSharedCheck_798_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_time_779_);
lean_inc(v_date_780_);
lean_dec(v_dt_777_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_798_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v_hour_784_; lean_object* v_second_785_; lean_object* v_nanosecond_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_796_; 
v_hour_784_ = lean_ctor_get(v_time_779_, 0);
v_second_785_ = lean_ctor_get(v_time_779_, 2);
v_nanosecond_786_ = lean_ctor_get(v_time_779_, 3);
v_isSharedCheck_796_ = !lean_is_exclusive(v_time_779_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v_time_779_, 1);
lean_dec(v_unused_797_);
v___x_788_ = v_time_779_;
v_isShared_789_ = v_isSharedCheck_796_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_nanosecond_786_);
lean_inc(v_second_785_);
lean_inc(v_hour_784_);
lean_dec(v_time_779_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_796_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 1, v_minute_778_);
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_hour_784_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_minute_778_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_second_785_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_nanosecond_786_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_793_; 
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 1, v___x_791_);
v___x_793_ = v___x_782_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_date_780_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___x_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withSeconds(lean_object* v_dt_799_, lean_object* v_second_800_){
_start:
{
lean_object* v_time_801_; lean_object* v_date_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_820_; 
v_time_801_ = lean_ctor_get(v_dt_799_, 1);
v_date_802_ = lean_ctor_get(v_dt_799_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_dt_799_);
if (v_isSharedCheck_820_ == 0)
{
v___x_804_ = v_dt_799_;
v_isShared_805_ = v_isSharedCheck_820_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_time_801_);
lean_inc(v_date_802_);
lean_dec(v_dt_799_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_820_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v_hour_806_; lean_object* v_minute_807_; lean_object* v_nanosecond_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_818_; 
v_hour_806_ = lean_ctor_get(v_time_801_, 0);
v_minute_807_ = lean_ctor_get(v_time_801_, 1);
v_nanosecond_808_ = lean_ctor_get(v_time_801_, 3);
v_isSharedCheck_818_ = !lean_is_exclusive(v_time_801_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_time_801_, 2);
lean_dec(v_unused_819_);
v___x_810_ = v_time_801_;
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_nanosecond_808_);
lean_inc(v_minute_807_);
lean_inc(v_hour_806_);
lean_dec(v_time_801_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 2, v_second_800_);
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_hour_806_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_minute_807_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_second_800_);
lean_ctor_set(v_reuseFailAlloc_817_, 3, v_nanosecond_808_);
v___x_813_ = v_reuseFailAlloc_817_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_815_; 
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 1, v___x_813_);
v___x_815_ = v___x_804_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_date_802_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_unsigned_to_nat(1000u);
v___x_822_ = lean_nat_to_int(v___x_821_);
return v___x_822_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_unsigned_to_nat(1000000u);
v___x_824_ = lean_nat_to_int(v___x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds(lean_object* v_dt_825_, lean_object* v_millis_826_){
_start:
{
lean_object* v_time_827_; lean_object* v_date_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_851_; 
v_time_827_ = lean_ctor_get(v_dt_825_, 1);
v_date_828_ = lean_ctor_get(v_dt_825_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v_dt_825_);
if (v_isSharedCheck_851_ == 0)
{
v___x_830_ = v_dt_825_;
v_isShared_831_ = v_isSharedCheck_851_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_time_827_);
lean_inc(v_date_828_);
lean_dec(v_dt_825_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_851_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_hour_832_; lean_object* v_minute_833_; lean_object* v_second_834_; lean_object* v_nanosecond_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_850_; 
v_hour_832_ = lean_ctor_get(v_time_827_, 0);
v_minute_833_ = lean_ctor_get(v_time_827_, 1);
v_second_834_ = lean_ctor_get(v_time_827_, 2);
v_nanosecond_835_ = lean_ctor_get(v_time_827_, 3);
v_isSharedCheck_850_ = !lean_is_exclusive(v_time_827_);
if (v_isSharedCheck_850_ == 0)
{
v___x_837_ = v_time_827_;
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_nanosecond_835_);
lean_inc(v_second_834_);
lean_inc(v_minute_833_);
lean_inc(v_hour_832_);
lean_dec(v_time_827_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_850_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_839_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__0, &l_Std_Time_PlainDateTime_withMilliseconds___closed__0_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__0);
v___x_840_ = lean_int_emod(v_nanosecond_835_, v___x_839_);
lean_dec(v_nanosecond_835_);
v___x_841_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_842_ = lean_int_mul(v_millis_826_, v___x_841_);
v___x_843_ = lean_int_add(v___x_842_, v___x_840_);
lean_dec(v___x_840_);
lean_dec(v___x_842_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 3, v___x_843_);
v___x_845_ = v___x_837_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_hour_832_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_minute_833_);
lean_ctor_set(v_reuseFailAlloc_849_, 2, v_second_834_);
lean_ctor_set(v_reuseFailAlloc_849_, 3, v___x_843_);
v___x_845_ = v_reuseFailAlloc_849_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_847_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v___x_845_);
v___x_847_ = v___x_830_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_date_828_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withMilliseconds___boxed(lean_object* v_dt_852_, lean_object* v_millis_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Std_Time_PlainDateTime_withMilliseconds(v_dt_852_, v_millis_853_);
lean_dec(v_millis_853_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_withNanoseconds(lean_object* v_dt_855_, lean_object* v_nano_856_){
_start:
{
lean_object* v_time_857_; lean_object* v_date_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_876_; 
v_time_857_ = lean_ctor_get(v_dt_855_, 1);
v_date_858_ = lean_ctor_get(v_dt_855_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_dt_855_);
if (v_isSharedCheck_876_ == 0)
{
v___x_860_ = v_dt_855_;
v_isShared_861_ = v_isSharedCheck_876_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_time_857_);
lean_inc(v_date_858_);
lean_dec(v_dt_855_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_876_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v_hour_862_; lean_object* v_minute_863_; lean_object* v_second_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_874_; 
v_hour_862_ = lean_ctor_get(v_time_857_, 0);
v_minute_863_ = lean_ctor_get(v_time_857_, 1);
v_second_864_ = lean_ctor_get(v_time_857_, 2);
v_isSharedCheck_874_ = !lean_is_exclusive(v_time_857_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v_time_857_, 3);
lean_dec(v_unused_875_);
v___x_866_ = v_time_857_;
v_isShared_867_ = v_isSharedCheck_874_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_second_864_);
lean_inc(v_minute_863_);
lean_inc(v_hour_862_);
lean_dec(v_time_857_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_874_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 3, v_nano_856_);
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_hour_862_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_minute_863_);
lean_ctor_set(v_reuseFailAlloc_873_, 2, v_second_864_);
lean_ctor_set(v_reuseFailAlloc_873_, 3, v_nano_856_);
v___x_869_ = v_reuseFailAlloc_873_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_871_; 
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 1, v___x_869_);
v___x_871_ = v___x_860_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_date_858_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays(lean_object* v_dt_877_, lean_object* v_days_878_){
_start:
{
lean_object* v_date_879_; lean_object* v_time_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_890_; 
v_date_879_ = lean_ctor_get(v_dt_877_, 0);
v_time_880_ = lean_ctor_get(v_dt_877_, 1);
v_isSharedCheck_890_ = !lean_is_exclusive(v_dt_877_);
if (v_isSharedCheck_890_ == 0)
{
v___x_882_ = v_dt_877_;
v_isShared_883_ = v_isSharedCheck_890_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_time_880_);
lean_inc(v_date_879_);
lean_dec(v_dt_877_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_890_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_dateDays_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v_dateDays_884_ = l_Std_Time_PlainDate_toEpochDay(v_date_879_);
v___x_885_ = lean_int_add(v_dateDays_884_, v_days_878_);
lean_dec(v_dateDays_884_);
v___x_886_ = l_Std_Time_PlainDate_ofEpochDay(v___x_885_);
lean_dec(v___x_885_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_886_);
v___x_888_ = v___x_882_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_time_880_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addDays___boxed(lean_object* v_dt_891_, lean_object* v_days_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Std_Time_PlainDateTime_addDays(v_dt_891_, v_days_892_);
lean_dec(v_days_892_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays(lean_object* v_dt_894_, lean_object* v_days_895_){
_start:
{
lean_object* v_date_896_; lean_object* v_time_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_908_; 
v_date_896_ = lean_ctor_get(v_dt_894_, 0);
v_time_897_ = lean_ctor_get(v_dt_894_, 1);
v_isSharedCheck_908_ = !lean_is_exclusive(v_dt_894_);
if (v_isSharedCheck_908_ == 0)
{
v___x_899_ = v_dt_894_;
v_isShared_900_ = v_isSharedCheck_908_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_time_897_);
lean_inc(v_date_896_);
lean_dec(v_dt_894_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_908_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v_dateDays_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_901_ = lean_int_neg(v_days_895_);
v_dateDays_902_ = l_Std_Time_PlainDate_toEpochDay(v_date_896_);
v___x_903_ = lean_int_add(v_dateDays_902_, v___x_901_);
lean_dec(v___x_901_);
lean_dec(v_dateDays_902_);
v___x_904_ = l_Std_Time_PlainDate_ofEpochDay(v___x_903_);
lean_dec(v___x_903_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_904_);
v___x_906_ = v___x_899_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_time_897_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subDays___boxed(lean_object* v_dt_909_, lean_object* v_days_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Std_Time_PlainDateTime_subDays(v_dt_909_, v_days_910_);
lean_dec(v_days_910_);
return v_res_911_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addWeeks___closed__0(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_unsigned_to_nat(7u);
v___x_913_ = lean_nat_to_int(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks(lean_object* v_dt_914_, lean_object* v_weeks_915_){
_start:
{
lean_object* v_date_916_; lean_object* v_time_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_929_; 
v_date_916_ = lean_ctor_get(v_dt_914_, 0);
v_time_917_ = lean_ctor_get(v_dt_914_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_dt_914_);
if (v_isSharedCheck_929_ == 0)
{
v___x_919_ = v_dt_914_;
v_isShared_920_ = v_isSharedCheck_929_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_time_917_);
lean_inc(v_date_916_);
lean_dec(v_dt_914_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_929_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v_dateDays_921_; lean_object* v___x_922_; lean_object* v_daysToAdd_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v_dateDays_921_ = l_Std_Time_PlainDate_toEpochDay(v_date_916_);
v___x_922_ = lean_obj_once(&l_Std_Time_PlainDateTime_addWeeks___closed__0, &l_Std_Time_PlainDateTime_addWeeks___closed__0_once, _init_l_Std_Time_PlainDateTime_addWeeks___closed__0);
v_daysToAdd_923_ = lean_int_mul(v_weeks_915_, v___x_922_);
v___x_924_ = lean_int_add(v_dateDays_921_, v_daysToAdd_923_);
lean_dec(v_daysToAdd_923_);
lean_dec(v_dateDays_921_);
v___x_925_ = l_Std_Time_PlainDate_ofEpochDay(v___x_924_);
lean_dec(v___x_924_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_925_);
v___x_927_ = v___x_919_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_time_917_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addWeeks___boxed(lean_object* v_dt_930_, lean_object* v_weeks_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Std_Time_PlainDateTime_addWeeks(v_dt_930_, v_weeks_931_);
lean_dec(v_weeks_931_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks(lean_object* v_dt_933_, lean_object* v_weeks_934_){
_start:
{
lean_object* v_date_935_; lean_object* v_time_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_949_; 
v_date_935_ = lean_ctor_get(v_dt_933_, 0);
v_time_936_ = lean_ctor_get(v_dt_933_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_dt_933_);
if (v_isSharedCheck_949_ == 0)
{
v___x_938_ = v_dt_933_;
v_isShared_939_ = v_isSharedCheck_949_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_time_936_);
lean_inc(v_date_935_);
lean_dec(v_dt_933_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_949_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v_dateDays_941_; lean_object* v___x_942_; lean_object* v_daysToAdd_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
v___x_940_ = lean_int_neg(v_weeks_934_);
v_dateDays_941_ = l_Std_Time_PlainDate_toEpochDay(v_date_935_);
v___x_942_ = lean_obj_once(&l_Std_Time_PlainDateTime_addWeeks___closed__0, &l_Std_Time_PlainDateTime_addWeeks___closed__0_once, _init_l_Std_Time_PlainDateTime_addWeeks___closed__0);
v_daysToAdd_943_ = lean_int_mul(v___x_940_, v___x_942_);
lean_dec(v___x_940_);
v___x_944_ = lean_int_add(v_dateDays_941_, v_daysToAdd_943_);
lean_dec(v_daysToAdd_943_);
lean_dec(v_dateDays_941_);
v___x_945_ = l_Std_Time_PlainDate_ofEpochDay(v___x_944_);
lean_dec(v___x_944_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v___x_945_);
v___x_947_ = v___x_938_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_time_936_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subWeeks___boxed(lean_object* v_dt_950_, lean_object* v_weeks_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Std_Time_PlainDateTime_subWeeks(v_dt_950_, v_weeks_951_);
lean_dec(v_weeks_951_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip(lean_object* v_dt_953_, lean_object* v_months_954_){
_start:
{
lean_object* v_date_955_; lean_object* v_time_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_964_; 
v_date_955_ = lean_ctor_get(v_dt_953_, 0);
v_time_956_ = lean_ctor_get(v_dt_953_, 1);
v_isSharedCheck_964_ = !lean_is_exclusive(v_dt_953_);
if (v_isSharedCheck_964_ == 0)
{
v___x_958_ = v_dt_953_;
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_time_956_);
lean_inc(v_date_955_);
lean_dec(v_dt_953_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_960_ = l_Std_Time_PlainDate_addMonthsClip(v_date_955_, v_months_954_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_960_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_time_956_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsClip___boxed(lean_object* v_dt_965_, lean_object* v_months_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Std_Time_PlainDateTime_addMonthsClip(v_dt_965_, v_months_966_);
lean_dec(v_months_966_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip(lean_object* v_dt_968_, lean_object* v_months_969_){
_start:
{
lean_object* v_date_970_; lean_object* v_time_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_980_; 
v_date_970_ = lean_ctor_get(v_dt_968_, 0);
v_time_971_ = lean_ctor_get(v_dt_968_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v_dt_968_);
if (v_isSharedCheck_980_ == 0)
{
v___x_973_ = v_dt_968_;
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_time_971_);
lean_inc(v_date_970_);
lean_dec(v_dt_968_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_975_ = lean_int_neg(v_months_969_);
v___x_976_ = l_Std_Time_PlainDate_addMonthsClip(v_date_970_, v___x_975_);
lean_dec(v___x_975_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v___x_976_);
v___x_978_ = v___x_973_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_time_971_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsClip___boxed(lean_object* v_dt_981_, lean_object* v_months_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Std_Time_PlainDateTime_subMonthsClip(v_dt_981_, v_months_982_);
lean_dec(v_months_982_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver(lean_object* v_dt_984_, lean_object* v_months_985_){
_start:
{
lean_object* v_date_986_; lean_object* v_time_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_995_; 
v_date_986_ = lean_ctor_get(v_dt_984_, 0);
v_time_987_ = lean_ctor_get(v_dt_984_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v_dt_984_);
if (v_isSharedCheck_995_ == 0)
{
v___x_989_ = v_dt_984_;
v_isShared_990_ = v_isSharedCheck_995_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_time_987_);
lean_inc(v_date_986_);
lean_dec(v_dt_984_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_995_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_991_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_986_, v_months_985_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v___x_991_);
v___x_993_ = v___x_989_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_time_987_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMonthsRollOver___boxed(lean_object* v_dt_996_, lean_object* v_months_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Std_Time_PlainDateTime_addMonthsRollOver(v_dt_996_, v_months_997_);
lean_dec(v_months_997_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver(lean_object* v_dt_999_, lean_object* v_months_1000_){
_start:
{
lean_object* v_date_1001_; lean_object* v_time_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1011_; 
v_date_1001_ = lean_ctor_get(v_dt_999_, 0);
v_time_1002_ = lean_ctor_get(v_dt_999_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_dt_999_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1004_ = v_dt_999_;
v_isShared_1005_ = v_isSharedCheck_1011_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_time_1002_);
lean_inc(v_date_1001_);
lean_dec(v_dt_999_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1011_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1006_ = lean_int_neg(v_months_1000_);
v___x_1007_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1001_, v___x_1006_);
lean_dec(v___x_1006_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1007_);
v___x_1009_ = v___x_1004_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_time_1002_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMonthsRollOver___boxed(lean_object* v_dt_1012_, lean_object* v_months_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Std_Time_PlainDateTime_subMonthsRollOver(v_dt_1012_, v_months_1013_);
lean_dec(v_months_1013_);
return v_res_1014_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_unsigned_to_nat(12u);
v___x_1016_ = lean_nat_to_int(v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver(lean_object* v_dt_1017_, lean_object* v_years_1018_){
_start:
{
lean_object* v_date_1019_; lean_object* v_time_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1030_; 
v_date_1019_ = lean_ctor_get(v_dt_1017_, 0);
v_time_1020_ = lean_ctor_get(v_dt_1017_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_dt_1017_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1022_ = v_dt_1017_;
v_isShared_1023_ = v_isSharedCheck_1030_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_time_1020_);
lean_inc(v_date_1019_);
lean_dec(v_dt_1017_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1030_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1028_; 
v___x_1024_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1025_ = lean_int_mul(v_years_1018_, v___x_1024_);
v___x_1026_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1019_, v___x_1025_);
lean_dec(v___x_1025_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1026_);
v___x_1028_ = v___x_1022_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_time_1020_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsRollOver___boxed(lean_object* v_dt_1031_, lean_object* v_years_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Std_Time_PlainDateTime_addYearsRollOver(v_dt_1031_, v_years_1032_);
lean_dec(v_years_1032_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip(lean_object* v_dt_1034_, lean_object* v_years_1035_){
_start:
{
lean_object* v_date_1036_; lean_object* v_time_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1047_; 
v_date_1036_ = lean_ctor_get(v_dt_1034_, 0);
v_time_1037_ = lean_ctor_get(v_dt_1034_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_dt_1034_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1039_ = v_dt_1034_;
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_time_1037_);
lean_inc(v_date_1036_);
lean_dec(v_dt_1034_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1041_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1042_ = lean_int_mul(v_years_1035_, v___x_1041_);
v___x_1043_ = l_Std_Time_PlainDate_addMonthsClip(v_date_1036_, v___x_1042_);
lean_dec(v___x_1042_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 0, v___x_1043_);
v___x_1045_ = v___x_1039_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_time_1037_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addYearsClip___boxed(lean_object* v_dt_1048_, lean_object* v_years_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Std_Time_PlainDateTime_addYearsClip(v_dt_1048_, v_years_1049_);
lean_dec(v_years_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver(lean_object* v_dt_1051_, lean_object* v_years_1052_){
_start:
{
lean_object* v_date_1053_; lean_object* v_time_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1065_; 
v_date_1053_ = lean_ctor_get(v_dt_1051_, 0);
v_time_1054_ = lean_ctor_get(v_dt_1051_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_dt_1051_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1056_ = v_dt_1051_;
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_time_1054_);
lean_inc(v_date_1053_);
lean_dec(v_dt_1051_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1058_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1059_ = lean_int_mul(v_years_1052_, v___x_1058_);
v___x_1060_ = lean_int_neg(v___x_1059_);
lean_dec(v___x_1059_);
v___x_1061_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_1053_, v___x_1060_);
lean_dec(v___x_1060_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1061_);
v___x_1063_ = v___x_1056_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_time_1054_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsRollOver___boxed(lean_object* v_dt_1066_, lean_object* v_years_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Std_Time_PlainDateTime_subYearsRollOver(v_dt_1066_, v_years_1067_);
lean_dec(v_years_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip(lean_object* v_dt_1069_, lean_object* v_years_1070_){
_start:
{
lean_object* v_date_1071_; lean_object* v_time_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1083_; 
v_date_1071_ = lean_ctor_get(v_dt_1069_, 0);
v_time_1072_ = lean_ctor_get(v_dt_1069_, 1);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_dt_1069_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1074_ = v_dt_1069_;
v_isShared_1075_ = v_isSharedCheck_1083_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_time_1072_);
lean_inc(v_date_1071_);
lean_dec(v_dt_1069_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1083_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1076_ = lean_obj_once(&l_Std_Time_PlainDateTime_addYearsRollOver___closed__0, &l_Std_Time_PlainDateTime_addYearsRollOver___closed__0_once, _init_l_Std_Time_PlainDateTime_addYearsRollOver___closed__0);
v___x_1077_ = lean_int_mul(v_years_1070_, v___x_1076_);
v___x_1078_ = lean_int_neg(v___x_1077_);
lean_dec(v___x_1077_);
v___x_1079_ = l_Std_Time_PlainDate_addMonthsClip(v_date_1071_, v___x_1078_);
lean_dec(v___x_1078_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1079_);
v___x_1081_ = v___x_1074_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1079_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_time_1072_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subYearsClip___boxed(lean_object* v_dt_1084_, lean_object* v_years_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Std_Time_PlainDateTime_subYearsClip(v_dt_1084_, v_years_1085_);
lean_dec(v_years_1085_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds(lean_object* v_dt_1087_, lean_object* v_nanos_1088_){
_start:
{
lean_object* v___x_1089_; lean_object* v_second_1090_; lean_object* v_nano_1091_; lean_object* v___x_1092_; lean_object* v_second_1093_; lean_object* v_nano_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1089_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1087_);
v_second_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_second_1090_);
v_nano_1091_ = lean_ctor_get(v___x_1089_, 1);
lean_inc(v_nano_1091_);
lean_dec_ref(v___x_1089_);
v___x_1092_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_1088_);
v_second_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_second_1093_);
v_nano_1094_ = lean_ctor_get(v___x_1092_, 1);
lean_inc(v_nano_1094_);
lean_dec_ref(v___x_1092_);
v___x_1095_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1096_ = lean_int_mul(v_second_1090_, v___x_1095_);
lean_dec(v_second_1090_);
v___x_1097_ = lean_int_add(v___x_1096_, v_nano_1091_);
lean_dec(v_nano_1091_);
lean_dec(v___x_1096_);
v___x_1098_ = lean_int_mul(v_second_1093_, v___x_1095_);
lean_dec(v_second_1093_);
v___x_1099_ = lean_int_add(v___x_1098_, v_nano_1094_);
lean_dec(v_nano_1094_);
lean_dec(v___x_1098_);
v___x_1100_ = lean_int_add(v___x_1097_, v___x_1099_);
lean_dec(v___x_1099_);
lean_dec(v___x_1097_);
v___x_1101_ = l_Std_Time_Duration_ofNanoseconds(v___x_1100_);
lean_dec(v___x_1100_);
v___x_1102_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addNanoseconds___boxed(lean_object* v_dt_1103_, lean_object* v_nanos_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Std_Time_PlainDateTime_addNanoseconds(v_dt_1103_, v_nanos_1104_);
lean_dec(v_nanos_1104_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds(lean_object* v_dt_1106_, lean_object* v_nanos_1107_){
_start:
{
lean_object* v___x_1108_; lean_object* v_second_1109_; lean_object* v_nano_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v_second_1113_; lean_object* v_nano_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1108_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1106_);
v_second_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc(v_second_1109_);
v_nano_1110_ = lean_ctor_get(v___x_1108_, 1);
lean_inc(v_nano_1110_);
lean_dec_ref(v___x_1108_);
v___x_1111_ = lean_int_neg(v_nanos_1107_);
v___x_1112_ = l_Std_Time_Duration_ofNanoseconds(v___x_1111_);
lean_dec(v___x_1111_);
v_second_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_second_1113_);
v_nano_1114_ = lean_ctor_get(v___x_1112_, 1);
lean_inc(v_nano_1114_);
lean_dec_ref(v___x_1112_);
v___x_1115_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1116_ = lean_int_mul(v_second_1109_, v___x_1115_);
lean_dec(v_second_1109_);
v___x_1117_ = lean_int_add(v___x_1116_, v_nano_1110_);
lean_dec(v_nano_1110_);
lean_dec(v___x_1116_);
v___x_1118_ = lean_int_mul(v_second_1113_, v___x_1115_);
lean_dec(v_second_1113_);
v___x_1119_ = lean_int_add(v___x_1118_, v_nano_1114_);
lean_dec(v_nano_1114_);
lean_dec(v___x_1118_);
v___x_1120_ = lean_int_add(v___x_1117_, v___x_1119_);
lean_dec(v___x_1119_);
lean_dec(v___x_1117_);
v___x_1121_ = l_Std_Time_Duration_ofNanoseconds(v___x_1120_);
lean_dec(v___x_1120_);
v___x_1122_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subNanoseconds___boxed(lean_object* v_dt_1123_, lean_object* v_nanos_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Std_Time_PlainDateTime_subNanoseconds(v_dt_1123_, v_nanos_1124_);
lean_dec(v_nanos_1124_);
return v_res_1125_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addHours___closed__0(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_cstr_to_nat("3600000000000");
v___x_1127_ = lean_nat_to_int(v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours(lean_object* v_dt_1128_, lean_object* v_hours_1129_){
_start:
{
lean_object* v___x_1130_; lean_object* v_second_1131_; lean_object* v_nano_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v_second_1136_; lean_object* v_nano_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1130_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1128_);
v_second_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_second_1131_);
v_nano_1132_ = lean_ctor_get(v___x_1130_, 1);
lean_inc(v_nano_1132_);
lean_dec_ref(v___x_1130_);
v___x_1133_ = lean_obj_once(&l_Std_Time_PlainDateTime_addHours___closed__0, &l_Std_Time_PlainDateTime_addHours___closed__0_once, _init_l_Std_Time_PlainDateTime_addHours___closed__0);
v___x_1134_ = lean_int_mul(v_hours_1129_, v___x_1133_);
v___x_1135_ = l_Std_Time_Duration_ofNanoseconds(v___x_1134_);
lean_dec(v___x_1134_);
v_second_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_second_1136_);
v_nano_1137_ = lean_ctor_get(v___x_1135_, 1);
lean_inc(v_nano_1137_);
lean_dec_ref(v___x_1135_);
v___x_1138_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1139_ = lean_int_mul(v_second_1131_, v___x_1138_);
lean_dec(v_second_1131_);
v___x_1140_ = lean_int_add(v___x_1139_, v_nano_1132_);
lean_dec(v_nano_1132_);
lean_dec(v___x_1139_);
v___x_1141_ = lean_int_mul(v_second_1136_, v___x_1138_);
lean_dec(v_second_1136_);
v___x_1142_ = lean_int_add(v___x_1141_, v_nano_1137_);
lean_dec(v_nano_1137_);
lean_dec(v___x_1141_);
v___x_1143_ = lean_int_add(v___x_1140_, v___x_1142_);
lean_dec(v___x_1142_);
lean_dec(v___x_1140_);
v___x_1144_ = l_Std_Time_Duration_ofNanoseconds(v___x_1143_);
lean_dec(v___x_1143_);
v___x_1145_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addHours___boxed(lean_object* v_dt_1146_, lean_object* v_hours_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Std_Time_PlainDateTime_addHours(v_dt_1146_, v_hours_1147_);
lean_dec(v_hours_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours(lean_object* v_dt_1149_, lean_object* v_hours_1150_){
_start:
{
lean_object* v___x_1151_; lean_object* v_second_1152_; lean_object* v_nano_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v_second_1158_; lean_object* v_nano_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1151_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1149_);
v_second_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_second_1152_);
v_nano_1153_ = lean_ctor_get(v___x_1151_, 1);
lean_inc(v_nano_1153_);
lean_dec_ref(v___x_1151_);
v___x_1154_ = lean_int_neg(v_hours_1150_);
v___x_1155_ = lean_obj_once(&l_Std_Time_PlainDateTime_addHours___closed__0, &l_Std_Time_PlainDateTime_addHours___closed__0_once, _init_l_Std_Time_PlainDateTime_addHours___closed__0);
v___x_1156_ = lean_int_mul(v___x_1154_, v___x_1155_);
lean_dec(v___x_1154_);
v___x_1157_ = l_Std_Time_Duration_ofNanoseconds(v___x_1156_);
lean_dec(v___x_1156_);
v_second_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_second_1158_);
v_nano_1159_ = lean_ctor_get(v___x_1157_, 1);
lean_inc(v_nano_1159_);
lean_dec_ref(v___x_1157_);
v___x_1160_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1161_ = lean_int_mul(v_second_1152_, v___x_1160_);
lean_dec(v_second_1152_);
v___x_1162_ = lean_int_add(v___x_1161_, v_nano_1153_);
lean_dec(v_nano_1153_);
lean_dec(v___x_1161_);
v___x_1163_ = lean_int_mul(v_second_1158_, v___x_1160_);
lean_dec(v_second_1158_);
v___x_1164_ = lean_int_add(v___x_1163_, v_nano_1159_);
lean_dec(v_nano_1159_);
lean_dec(v___x_1163_);
v___x_1165_ = lean_int_add(v___x_1162_, v___x_1164_);
lean_dec(v___x_1164_);
lean_dec(v___x_1162_);
v___x_1166_ = l_Std_Time_Duration_ofNanoseconds(v___x_1165_);
lean_dec(v___x_1165_);
v___x_1167_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subHours___boxed(lean_object* v_dt_1168_, lean_object* v_hours_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Std_Time_PlainDateTime_subHours(v_dt_1168_, v_hours_1169_);
lean_dec(v_hours_1169_);
return v_res_1170_;
}
}
static lean_object* _init_l_Std_Time_PlainDateTime_addMinutes___closed__0(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_cstr_to_nat("60000000000");
v___x_1172_ = lean_nat_to_int(v___x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes(lean_object* v_dt_1173_, lean_object* v_minutes_1174_){
_start:
{
lean_object* v___x_1175_; lean_object* v_second_1176_; lean_object* v_nano_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_second_1181_; lean_object* v_nano_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1175_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1173_);
v_second_1176_ = lean_ctor_get(v___x_1175_, 0);
lean_inc(v_second_1176_);
v_nano_1177_ = lean_ctor_get(v___x_1175_, 1);
lean_inc(v_nano_1177_);
lean_dec_ref(v___x_1175_);
v___x_1178_ = lean_obj_once(&l_Std_Time_PlainDateTime_addMinutes___closed__0, &l_Std_Time_PlainDateTime_addMinutes___closed__0_once, _init_l_Std_Time_PlainDateTime_addMinutes___closed__0);
v___x_1179_ = lean_int_mul(v_minutes_1174_, v___x_1178_);
v___x_1180_ = l_Std_Time_Duration_ofNanoseconds(v___x_1179_);
lean_dec(v___x_1179_);
v_second_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc(v_second_1181_);
v_nano_1182_ = lean_ctor_get(v___x_1180_, 1);
lean_inc(v_nano_1182_);
lean_dec_ref(v___x_1180_);
v___x_1183_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1184_ = lean_int_mul(v_second_1176_, v___x_1183_);
lean_dec(v_second_1176_);
v___x_1185_ = lean_int_add(v___x_1184_, v_nano_1177_);
lean_dec(v_nano_1177_);
lean_dec(v___x_1184_);
v___x_1186_ = lean_int_mul(v_second_1181_, v___x_1183_);
lean_dec(v_second_1181_);
v___x_1187_ = lean_int_add(v___x_1186_, v_nano_1182_);
lean_dec(v_nano_1182_);
lean_dec(v___x_1186_);
v___x_1188_ = lean_int_add(v___x_1185_, v___x_1187_);
lean_dec(v___x_1187_);
lean_dec(v___x_1185_);
v___x_1189_ = l_Std_Time_Duration_ofNanoseconds(v___x_1188_);
lean_dec(v___x_1188_);
v___x_1190_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMinutes___boxed(lean_object* v_dt_1191_, lean_object* v_minutes_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Std_Time_PlainDateTime_addMinutes(v_dt_1191_, v_minutes_1192_);
lean_dec(v_minutes_1192_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes(lean_object* v_dt_1194_, lean_object* v_minutes_1195_){
_start:
{
lean_object* v___x_1196_; lean_object* v_second_1197_; lean_object* v_nano_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_second_1203_; lean_object* v_nano_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1196_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1194_);
v_second_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_second_1197_);
v_nano_1198_ = lean_ctor_get(v___x_1196_, 1);
lean_inc(v_nano_1198_);
lean_dec_ref(v___x_1196_);
v___x_1199_ = lean_int_neg(v_minutes_1195_);
v___x_1200_ = lean_obj_once(&l_Std_Time_PlainDateTime_addMinutes___closed__0, &l_Std_Time_PlainDateTime_addMinutes___closed__0_once, _init_l_Std_Time_PlainDateTime_addMinutes___closed__0);
v___x_1201_ = lean_int_mul(v___x_1199_, v___x_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = l_Std_Time_Duration_ofNanoseconds(v___x_1201_);
lean_dec(v___x_1201_);
v_second_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_second_1203_);
v_nano_1204_ = lean_ctor_get(v___x_1202_, 1);
lean_inc(v_nano_1204_);
lean_dec_ref(v___x_1202_);
v___x_1205_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1206_ = lean_int_mul(v_second_1197_, v___x_1205_);
lean_dec(v_second_1197_);
v___x_1207_ = lean_int_add(v___x_1206_, v_nano_1198_);
lean_dec(v_nano_1198_);
lean_dec(v___x_1206_);
v___x_1208_ = lean_int_mul(v_second_1203_, v___x_1205_);
lean_dec(v_second_1203_);
v___x_1209_ = lean_int_add(v___x_1208_, v_nano_1204_);
lean_dec(v_nano_1204_);
lean_dec(v___x_1208_);
v___x_1210_ = lean_int_add(v___x_1207_, v___x_1209_);
lean_dec(v___x_1209_);
lean_dec(v___x_1207_);
v___x_1211_ = l_Std_Time_Duration_ofNanoseconds(v___x_1210_);
lean_dec(v___x_1210_);
v___x_1212_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMinutes___boxed(lean_object* v_dt_1213_, lean_object* v_minutes_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Std_Time_PlainDateTime_subMinutes(v_dt_1213_, v_minutes_1214_);
lean_dec(v_minutes_1214_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds(lean_object* v_dt_1216_, lean_object* v_seconds_1217_){
_start:
{
lean_object* v___x_1218_; lean_object* v_second_1219_; lean_object* v_nano_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v_second_1224_; lean_object* v_nano_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1218_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1216_);
v_second_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_second_1219_);
v_nano_1220_ = lean_ctor_get(v___x_1218_, 1);
lean_inc(v_nano_1220_);
lean_dec_ref(v___x_1218_);
v___x_1221_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1222_ = lean_int_mul(v_seconds_1217_, v___x_1221_);
v___x_1223_ = l_Std_Time_Duration_ofNanoseconds(v___x_1222_);
lean_dec(v___x_1222_);
v_second_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_second_1224_);
v_nano_1225_ = lean_ctor_get(v___x_1223_, 1);
lean_inc(v_nano_1225_);
lean_dec_ref(v___x_1223_);
v___x_1226_ = lean_int_mul(v_second_1219_, v___x_1221_);
lean_dec(v_second_1219_);
v___x_1227_ = lean_int_add(v___x_1226_, v_nano_1220_);
lean_dec(v_nano_1220_);
lean_dec(v___x_1226_);
v___x_1228_ = lean_int_mul(v_second_1224_, v___x_1221_);
lean_dec(v_second_1224_);
v___x_1229_ = lean_int_add(v___x_1228_, v_nano_1225_);
lean_dec(v_nano_1225_);
lean_dec(v___x_1228_);
v___x_1230_ = lean_int_add(v___x_1227_, v___x_1229_);
lean_dec(v___x_1229_);
lean_dec(v___x_1227_);
v___x_1231_ = l_Std_Time_Duration_ofNanoseconds(v___x_1230_);
lean_dec(v___x_1230_);
v___x_1232_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addSeconds___boxed(lean_object* v_dt_1233_, lean_object* v_seconds_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Std_Time_PlainDateTime_addSeconds(v_dt_1233_, v_seconds_1234_);
lean_dec(v_seconds_1234_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds(lean_object* v_dt_1236_, lean_object* v_seconds_1237_){
_start:
{
lean_object* v___x_1238_; lean_object* v_second_1239_; lean_object* v_nano_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v_second_1245_; lean_object* v_nano_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1238_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1236_);
v_second_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_second_1239_);
v_nano_1240_ = lean_ctor_get(v___x_1238_, 1);
lean_inc(v_nano_1240_);
lean_dec_ref(v___x_1238_);
v___x_1241_ = lean_int_neg(v_seconds_1237_);
v___x_1242_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1243_ = lean_int_mul(v___x_1241_, v___x_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = l_Std_Time_Duration_ofNanoseconds(v___x_1243_);
lean_dec(v___x_1243_);
v_second_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_second_1245_);
v_nano_1246_ = lean_ctor_get(v___x_1244_, 1);
lean_inc(v_nano_1246_);
lean_dec_ref(v___x_1244_);
v___x_1247_ = lean_int_mul(v_second_1239_, v___x_1242_);
lean_dec(v_second_1239_);
v___x_1248_ = lean_int_add(v___x_1247_, v_nano_1240_);
lean_dec(v_nano_1240_);
lean_dec(v___x_1247_);
v___x_1249_ = lean_int_mul(v_second_1245_, v___x_1242_);
lean_dec(v_second_1245_);
v___x_1250_ = lean_int_add(v___x_1249_, v_nano_1246_);
lean_dec(v_nano_1246_);
lean_dec(v___x_1249_);
v___x_1251_ = lean_int_add(v___x_1248_, v___x_1250_);
lean_dec(v___x_1250_);
lean_dec(v___x_1248_);
v___x_1252_ = l_Std_Time_Duration_ofNanoseconds(v___x_1251_);
lean_dec(v___x_1251_);
v___x_1253_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subSeconds___boxed(lean_object* v_dt_1254_, lean_object* v_seconds_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Std_Time_PlainDateTime_subSeconds(v_dt_1254_, v_seconds_1255_);
lean_dec(v_seconds_1255_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds(lean_object* v_dt_1257_, lean_object* v_milliseconds_1258_){
_start:
{
lean_object* v___x_1259_; lean_object* v_second_1260_; lean_object* v_nano_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v_second_1265_; lean_object* v_nano_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1259_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1257_);
v_second_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_second_1260_);
v_nano_1261_ = lean_ctor_get(v___x_1259_, 1);
lean_inc(v_nano_1261_);
lean_dec_ref(v___x_1259_);
v___x_1262_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1263_ = lean_int_mul(v_milliseconds_1258_, v___x_1262_);
v___x_1264_ = l_Std_Time_Duration_ofNanoseconds(v___x_1263_);
lean_dec(v___x_1263_);
v_second_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_second_1265_);
v_nano_1266_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_nano_1266_);
lean_dec_ref(v___x_1264_);
v___x_1267_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1268_ = lean_int_mul(v_second_1260_, v___x_1267_);
lean_dec(v_second_1260_);
v___x_1269_ = lean_int_add(v___x_1268_, v_nano_1261_);
lean_dec(v_nano_1261_);
lean_dec(v___x_1268_);
v___x_1270_ = lean_int_mul(v_second_1265_, v___x_1267_);
lean_dec(v_second_1265_);
v___x_1271_ = lean_int_add(v___x_1270_, v_nano_1266_);
lean_dec(v_nano_1266_);
lean_dec(v___x_1270_);
v___x_1272_ = lean_int_add(v___x_1269_, v___x_1271_);
lean_dec(v___x_1271_);
lean_dec(v___x_1269_);
v___x_1273_ = l_Std_Time_Duration_ofNanoseconds(v___x_1272_);
lean_dec(v___x_1272_);
v___x_1274_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_addMilliseconds___boxed(lean_object* v_dt_1275_, lean_object* v_milliseconds_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Std_Time_PlainDateTime_addMilliseconds(v_dt_1275_, v_milliseconds_1276_);
lean_dec(v_milliseconds_1276_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds(lean_object* v_dt_1278_, lean_object* v_milliseconds_1279_){
_start:
{
lean_object* v___x_1280_; lean_object* v_second_1281_; lean_object* v_nano_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v_second_1287_; lean_object* v_nano_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1280_ = l_Std_Time_PlainDateTime_toWallTime(v_dt_1278_);
v_second_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_second_1281_);
v_nano_1282_ = lean_ctor_get(v___x_1280_, 1);
lean_inc(v_nano_1282_);
lean_dec_ref(v___x_1280_);
v___x_1283_ = lean_int_neg(v_milliseconds_1279_);
v___x_1284_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1285_ = lean_int_mul(v___x_1283_, v___x_1284_);
lean_dec(v___x_1283_);
v___x_1286_ = l_Std_Time_Duration_ofNanoseconds(v___x_1285_);
lean_dec(v___x_1285_);
v_second_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_second_1287_);
v_nano_1288_ = lean_ctor_get(v___x_1286_, 1);
lean_inc(v_nano_1288_);
lean_dec_ref(v___x_1286_);
v___x_1289_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1290_ = lean_int_mul(v_second_1281_, v___x_1289_);
lean_dec(v_second_1281_);
v___x_1291_ = lean_int_add(v___x_1290_, v_nano_1282_);
lean_dec(v_nano_1282_);
lean_dec(v___x_1290_);
v___x_1292_ = lean_int_mul(v_second_1287_, v___x_1289_);
lean_dec(v_second_1287_);
v___x_1293_ = lean_int_add(v___x_1292_, v_nano_1288_);
lean_dec(v_nano_1288_);
lean_dec(v___x_1292_);
v___x_1294_ = lean_int_add(v___x_1291_, v___x_1293_);
lean_dec(v___x_1293_);
lean_dec(v___x_1291_);
v___x_1295_ = l_Std_Time_Duration_ofNanoseconds(v___x_1294_);
lean_dec(v___x_1294_);
v___x_1296_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_subMilliseconds___boxed(lean_object* v_dt_1297_, lean_object* v_milliseconds_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Std_Time_PlainDateTime_subMilliseconds(v_dt_1297_, v_milliseconds_1298_);
lean_dec(v_milliseconds_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year(lean_object* v_dt_1300_){
_start:
{
lean_object* v_date_1301_; lean_object* v_year_1302_; 
v_date_1301_ = lean_ctor_get(v_dt_1300_, 0);
v_year_1302_ = lean_ctor_get(v_date_1301_, 0);
lean_inc(v_year_1302_);
return v_year_1302_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_year___boxed(lean_object* v_dt_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Std_Time_PlainDateTime_year(v_dt_1303_);
lean_dec_ref(v_dt_1303_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month(lean_object* v_dt_1305_){
_start:
{
lean_object* v_date_1306_; lean_object* v_month_1307_; 
v_date_1306_ = lean_ctor_get(v_dt_1305_, 0);
v_month_1307_ = lean_ctor_get(v_date_1306_, 1);
lean_inc(v_month_1307_);
return v_month_1307_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_month___boxed(lean_object* v_dt_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Std_Time_PlainDateTime_month(v_dt_1308_);
lean_dec_ref(v_dt_1308_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day(lean_object* v_dt_1310_){
_start:
{
lean_object* v_date_1311_; lean_object* v_day_1312_; 
v_date_1311_ = lean_ctor_get(v_dt_1310_, 0);
v_day_1312_ = lean_ctor_get(v_date_1311_, 2);
lean_inc(v_day_1312_);
return v_day_1312_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_day___boxed(lean_object* v_dt_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Std_Time_PlainDateTime_day(v_dt_1313_);
lean_dec_ref(v_dt_1313_);
return v_res_1314_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_weekday(lean_object* v_dt_1315_){
_start:
{
lean_object* v_date_1316_; uint8_t v___x_1317_; 
v_date_1316_ = lean_ctor_get(v_dt_1315_, 0);
lean_inc_ref(v_date_1316_);
lean_dec_ref(v_dt_1315_);
v___x_1317_ = l_Std_Time_PlainDate_weekday(v_date_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekday___boxed(lean_object* v_dt_1318_){
_start:
{
uint8_t v_res_1319_; lean_object* v_r_1320_; 
v_res_1319_ = l_Std_Time_PlainDateTime_weekday(v_dt_1318_);
v_r_1320_ = lean_box(v_res_1319_);
return v_r_1320_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour(lean_object* v_dt_1321_){
_start:
{
lean_object* v_time_1322_; lean_object* v_hour_1323_; 
v_time_1322_ = lean_ctor_get(v_dt_1321_, 1);
v_hour_1323_ = lean_ctor_get(v_time_1322_, 0);
lean_inc(v_hour_1323_);
return v_hour_1323_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_hour___boxed(lean_object* v_dt_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Std_Time_PlainDateTime_hour(v_dt_1324_);
lean_dec_ref(v_dt_1324_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute(lean_object* v_dt_1326_){
_start:
{
lean_object* v_time_1327_; lean_object* v_minute_1328_; 
v_time_1327_ = lean_ctor_get(v_dt_1326_, 1);
v_minute_1328_ = lean_ctor_get(v_time_1327_, 1);
lean_inc(v_minute_1328_);
return v_minute_1328_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_minute___boxed(lean_object* v_dt_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Std_Time_PlainDateTime_minute(v_dt_1329_);
lean_dec_ref(v_dt_1329_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond(lean_object* v_dt_1331_){
_start:
{
lean_object* v_time_1332_; lean_object* v_nanosecond_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_time_1332_ = lean_ctor_get(v_dt_1331_, 1);
v_nanosecond_1333_ = lean_ctor_get(v_time_1332_, 3);
v___x_1334_ = lean_obj_once(&l_Std_Time_PlainDateTime_withMilliseconds___closed__1, &l_Std_Time_PlainDateTime_withMilliseconds___closed__1_once, _init_l_Std_Time_PlainDateTime_withMilliseconds___closed__1);
v___x_1335_ = lean_int_ediv(v_nanosecond_1333_, v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_millisecond___boxed(lean_object* v_dt_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Std_Time_PlainDateTime_millisecond(v_dt_1336_);
lean_dec_ref(v_dt_1336_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second(lean_object* v_dt_1338_){
_start:
{
lean_object* v_time_1339_; lean_object* v_second_1340_; 
v_time_1339_ = lean_ctor_get(v_dt_1338_, 1);
v_second_1340_ = lean_ctor_get(v_time_1339_, 2);
lean_inc(v_second_1340_);
return v_second_1340_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_second___boxed(lean_object* v_dt_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Std_Time_PlainDateTime_second(v_dt_1341_);
lean_dec_ref(v_dt_1341_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond(lean_object* v_dt_1343_){
_start:
{
lean_object* v_time_1344_; lean_object* v_nanosecond_1345_; 
v_time_1344_ = lean_ctor_get(v_dt_1343_, 1);
v_nanosecond_1345_ = lean_ctor_get(v_time_1344_, 3);
lean_inc(v_nanosecond_1345_);
return v_nanosecond_1345_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_nanosecond___boxed(lean_object* v_dt_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Std_Time_PlainDateTime_nanosecond(v_dt_1346_);
lean_dec_ref(v_dt_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_era(lean_object* v_date_1348_){
_start:
{
lean_object* v_date_1349_; lean_object* v_year_1350_; uint8_t v___x_1351_; 
v_date_1349_ = lean_ctor_get(v_date_1348_, 0);
v_year_1350_ = lean_ctor_get(v_date_1349_, 0);
v___x_1351_ = l_Std_Time_Year_Offset_era(v_year_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_era___boxed(lean_object* v_date_1352_){
_start:
{
uint8_t v_res_1353_; lean_object* v_r_1354_; 
v_res_1353_ = l_Std_Time_PlainDateTime_era(v_date_1352_);
lean_dec_ref(v_date_1352_);
v_r_1354_ = lean_box(v_res_1353_);
return v_r_1354_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDateTime_inLeapYear(lean_object* v_date_1355_){
_start:
{
lean_object* v_date_1356_; lean_object* v_year_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v_date_1356_ = lean_ctor_get(v_date_1355_, 0);
v_year_1357_ = lean_ctor_get(v_date_1356_, 0);
v___x_1358_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_1359_ = lean_int_mod(v_year_1357_, v___x_1358_);
v___x_1360_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_1361_ = lean_int_dec_eq(v___x_1359_, v___x_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_1363_ = lean_int_mod(v_year_1357_, v___x_1362_);
v___x_1364_ = lean_int_dec_eq(v___x_1363_, v___x_1360_);
lean_dec(v___x_1363_);
if (v___x_1364_ == 0)
{
return v___x_1361_;
}
else
{
if (v___x_1361_ == 0)
{
return v___x_1361_;
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1365_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_1366_ = lean_int_mod(v_year_1357_, v___x_1365_);
v___x_1367_ = lean_int_dec_eq(v___x_1366_, v___x_1360_);
lean_dec(v___x_1366_);
return v___x_1367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_inLeapYear___boxed(lean_object* v_date_1368_){
_start:
{
uint8_t v_res_1369_; lean_object* v_r_1370_; 
v_res_1369_ = l_Std_Time_PlainDateTime_inLeapYear(v_date_1368_);
lean_dec_ref(v_date_1368_);
v_r_1370_ = lean_box(v_res_1369_);
return v_r_1370_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear(lean_object* v_date_1371_, uint8_t v_firstDay_1372_, lean_object* v_minDays_1373_){
_start:
{
lean_object* v_date_1374_; lean_object* v___x_1375_; 
v_date_1374_ = lean_ctor_get(v_date_1371_, 0);
lean_inc_ref(v_date_1374_);
lean_dec_ref(v_date_1371_);
v___x_1375_ = l_Std_Time_PlainDate_weekOfYear(v_date_1374_, v_firstDay_1372_, v_minDays_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfYear___boxed(lean_object* v_date_1376_, lean_object* v_firstDay_1377_, lean_object* v_minDays_1378_){
_start:
{
uint8_t v_firstDay_boxed_1379_; lean_object* v_res_1380_; 
v_firstDay_boxed_1379_ = lean_unbox(v_firstDay_1377_);
v_res_1380_ = l_Std_Time_PlainDateTime_weekOfYear(v_date_1376_, v_firstDay_boxed_1379_, v_minDays_1378_);
lean_dec(v_minDays_1378_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear(lean_object* v_date_1381_, uint8_t v_firstDay_1382_, lean_object* v_minDays_1383_){
_start:
{
lean_object* v_date_1384_; lean_object* v___x_1385_; 
v_date_1384_ = lean_ctor_get(v_date_1381_, 0);
lean_inc_ref(v_date_1384_);
lean_dec_ref(v_date_1381_);
v___x_1385_ = l_Std_Time_PlainDate_weekYear(v_date_1384_, v_firstDay_1382_, v_minDays_1383_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekYear___boxed(lean_object* v_date_1386_, lean_object* v_firstDay_1387_, lean_object* v_minDays_1388_){
_start:
{
uint8_t v_firstDay_boxed_1389_; lean_object* v_res_1390_; 
v_firstDay_boxed_1389_ = lean_unbox(v_firstDay_1387_);
v_res_1390_ = l_Std_Time_PlainDateTime_weekYear(v_date_1386_, v_firstDay_boxed_1389_, v_minDays_1388_);
lean_dec(v_minDays_1388_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth(lean_object* v_date_1391_){
_start:
{
lean_object* v_date_1392_; lean_object* v___x_1393_; 
v_date_1392_ = lean_ctor_get(v_date_1391_, 0);
v___x_1393_ = l_Std_Time_PlainDate_alignedWeekOfMonth(v_date_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_alignedWeekOfMonth___boxed(lean_object* v_date_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Std_Time_PlainDateTime_alignedWeekOfMonth(v_date_1394_);
lean_dec_ref(v_date_1394_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth(lean_object* v_date_1396_, uint8_t v_firstDay_1397_){
_start:
{
lean_object* v_date_1398_; lean_object* v___x_1399_; 
v_date_1398_ = lean_ctor_get(v_date_1396_, 0);
lean_inc_ref(v_date_1398_);
lean_dec_ref(v_date_1396_);
v___x_1399_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1398_, v_firstDay_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_weekOfMonth___boxed(lean_object* v_date_1400_, lean_object* v_firstDay_1401_){
_start:
{
uint8_t v_firstDay_boxed_1402_; lean_object* v_res_1403_; 
v_firstDay_boxed_1402_ = lean_unbox(v_firstDay_1401_);
v_res_1403_ = l_Std_Time_PlainDateTime_weekOfMonth(v_date_1400_, v_firstDay_boxed_1402_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_dayOfYear(lean_object* v_date_1404_){
_start:
{
lean_object* v_date_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1431_; 
v_date_1405_ = lean_ctor_get(v_date_1404_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v_date_1404_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v_date_1404_, 1);
lean_dec(v_unused_1432_);
v___x_1407_ = v_date_1404_;
v_isShared_1408_ = v_isSharedCheck_1431_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_date_1405_);
lean_dec(v_date_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1431_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v_year_1409_; lean_object* v_month_1410_; lean_object* v_day_1411_; uint8_t v___y_1413_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; uint8_t v___y_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v_year_1409_ = lean_ctor_get(v_date_1405_, 0);
lean_inc(v_year_1409_);
v_month_1410_ = lean_ctor_get(v_date_1405_, 1);
lean_inc(v_month_1410_);
v_day_1411_ = lean_ctor_get(v_date_1405_, 2);
lean_inc(v_day_1411_);
lean_dec_ref(v_date_1405_);
v___x_1418_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__10, &l_Std_Time_PlainDateTime_ofWallTime___closed__10_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__10);
v___x_1419_ = lean_int_mod(v_year_1409_, v___x_1418_);
v___x_1420_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_1421_ = lean_int_dec_eq(v___x_1419_, v___x_1420_);
lean_dec(v___x_1419_);
v___x_1424_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__6, &l_Std_Time_PlainDateTime_ofWallTime___closed__6_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__6);
v___x_1425_ = lean_int_mod(v_year_1409_, v___x_1424_);
v___x_1426_ = lean_int_dec_eq(v___x_1425_, v___x_1420_);
lean_dec(v___x_1425_);
if (v___x_1426_ == 0)
{
uint8_t v___x_1427_; 
lean_dec(v_year_1409_);
v___x_1427_ = 1;
v___y_1423_ = v___x_1427_;
goto v___jp_1422_;
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = lean_obj_once(&l_Std_Time_PlainDateTime_ofWallTime___closed__2, &l_Std_Time_PlainDateTime_ofWallTime___closed__2_once, _init_l_Std_Time_PlainDateTime_ofWallTime___closed__2);
v___x_1429_ = lean_int_mod(v_year_1409_, v___x_1428_);
lean_dec(v_year_1409_);
v___x_1430_ = lean_int_dec_eq(v___x_1429_, v___x_1420_);
lean_dec(v___x_1429_);
v___y_1423_ = v___x_1430_;
goto v___jp_1422_;
}
v___jp_1412_:
{
lean_object* v___x_1415_; 
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 1, v_day_1411_);
lean_ctor_set(v___x_1407_, 0, v_month_1410_);
v___x_1415_ = v___x_1407_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_month_1410_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_day_1411_);
v___x_1415_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Std_Time_ValidDate_dayOfYear(v___y_1413_, v___x_1415_);
lean_dec_ref(v___x_1415_);
return v___x_1416_;
}
}
v___jp_1422_:
{
if (v___x_1421_ == 0)
{
v___y_1413_ = v___x_1421_;
goto v___jp_1412_;
}
else
{
v___y_1413_ = v___y_1423_;
goto v___jp_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter(lean_object* v_date_1433_){
_start:
{
lean_object* v_date_1434_; lean_object* v___x_1435_; 
v_date_1434_ = lean_ctor_get(v_date_1433_, 0);
v___x_1435_ = l_Std_Time_PlainDate_quarter(v_date_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_quarter___boxed(lean_object* v_date_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Std_Time_PlainDateTime_quarter(v_date_1436_);
lean_dec_ref(v_date_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atTime(lean_object* v_date_1438_, lean_object* v_time_1439_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_date_1438_);
lean_ctor_set(v___x_1440_, 1, v_time_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_atDate(lean_object* v_time_1441_, lean_object* v_date_1442_){
_start:
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v_date_1442_);
lean_ctor_set(v___x_1443_, 1, v_time_1441_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0(lean_object* v_x_1472_, lean_object* v_y_1473_){
_start:
{
lean_object* v_second_1474_; lean_object* v_nano_1475_; lean_object* v___x_1476_; lean_object* v_second_1477_; lean_object* v_nano_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v_nanos_1481_; lean_object* v___x_1482_; lean_object* v_second_1483_; lean_object* v_nano_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v_second_1474_ = lean_ctor_get(v_y_1473_, 0);
v_nano_1475_ = lean_ctor_get(v_y_1473_, 1);
v___x_1476_ = l_Std_Time_PlainDateTime_toWallTime(v_x_1472_);
v_second_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_second_1477_);
v_nano_1478_ = lean_ctor_get(v___x_1476_, 1);
lean_inc(v_nano_1478_);
lean_dec_ref(v___x_1476_);
v___x_1479_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1480_ = lean_int_mul(v_second_1474_, v___x_1479_);
v_nanos_1481_ = lean_int_add(v___x_1480_, v_nano_1475_);
lean_dec(v___x_1480_);
v___x_1482_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_1481_);
lean_dec(v_nanos_1481_);
v_second_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_second_1483_);
v_nano_1484_ = lean_ctor_get(v___x_1482_, 1);
lean_inc(v_nano_1484_);
lean_dec_ref(v___x_1482_);
v___x_1485_ = lean_int_mul(v_second_1477_, v___x_1479_);
lean_dec(v_second_1477_);
v___x_1486_ = lean_int_add(v___x_1485_, v_nano_1478_);
lean_dec(v_nano_1478_);
lean_dec(v___x_1485_);
v___x_1487_ = lean_int_mul(v_second_1483_, v___x_1479_);
lean_dec(v_second_1483_);
v___x_1488_ = lean_int_add(v___x_1487_, v_nano_1484_);
lean_dec(v_nano_1484_);
lean_dec(v___x_1487_);
v___x_1489_ = lean_int_add(v___x_1486_, v___x_1488_);
lean_dec(v___x_1488_);
lean_dec(v___x_1486_);
v___x_1490_ = l_Std_Time_Duration_ofNanoseconds(v___x_1489_);
lean_dec(v___x_1489_);
v___x_1491_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHAddDuration___lam__0___boxed(lean_object* v_x_1492_, lean_object* v_y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Std_Time_PlainDateTime_instHAddDuration___lam__0(v_x_1492_, v_y_1493_);
lean_dec_ref(v_y_1493_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_ofPlainDate(lean_object* v_date_1497_){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = l_Std_Time_PlainTime_midnight;
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_date_1497_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate(lean_object* v_pdt_1500_){
_start:
{
lean_object* v_date_1501_; 
v_date_1501_ = lean_ctor_get(v_pdt_1500_, 0);
lean_inc_ref(v_date_1501_);
return v_date_1501_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainDate___boxed(lean_object* v_pdt_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Std_Time_PlainDateTime_toPlainDate(v_pdt_1502_);
lean_dec_ref(v_pdt_1502_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime(lean_object* v_pdt_1504_){
_start:
{
lean_object* v_time_1505_; 
v_time_1505_ = lean_ctor_get(v_pdt_1504_, 1);
lean_inc_ref(v_time_1505_);
return v_time_1505_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_toPlainTime___boxed(lean_object* v_pdt_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Std_Time_PlainDateTime_toPlainTime(v_pdt_1506_);
lean_dec_ref(v_pdt_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDateTime_instHSubDuration___lam__0(lean_object* v_x_1508_, lean_object* v_y_1509_){
_start:
{
lean_object* v___x_1510_; lean_object* v_second_1511_; lean_object* v_nano_1512_; lean_object* v___x_1513_; lean_object* v_second_1514_; lean_object* v_nano_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1510_ = l_Std_Time_PlainDateTime_toWallTime(v_y_1509_);
v_second_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_second_1511_);
v_nano_1512_ = lean_ctor_get(v___x_1510_, 1);
lean_inc(v_nano_1512_);
lean_dec_ref(v___x_1510_);
v___x_1513_ = l_Std_Time_PlainDateTime_toWallTime(v_x_1508_);
v_second_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_second_1514_);
v_nano_1515_ = lean_ctor_get(v___x_1513_, 1);
lean_inc(v_nano_1515_);
lean_dec_ref(v___x_1513_);
v___x_1516_ = lean_int_neg(v_second_1511_);
lean_dec(v_second_1511_);
v___x_1517_ = lean_int_neg(v_nano_1512_);
lean_dec(v_nano_1512_);
v___x_1518_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1519_ = lean_int_mul(v_second_1514_, v___x_1518_);
lean_dec(v_second_1514_);
v___x_1520_ = lean_int_add(v___x_1519_, v_nano_1515_);
lean_dec(v_nano_1515_);
lean_dec(v___x_1519_);
v___x_1521_ = lean_int_mul(v___x_1516_, v___x_1518_);
lean_dec(v___x_1516_);
v___x_1522_ = lean_int_add(v___x_1521_, v___x_1517_);
lean_dec(v___x_1517_);
lean_dec(v___x_1521_);
v___x_1523_ = lean_int_add(v___x_1520_, v___x_1522_);
lean_dec(v___x_1522_);
lean_dec(v___x_1520_);
v___x_1524_ = l_Std_Time_Duration_ofNanoseconds(v___x_1523_);
lean_dec(v___x_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toWallTime(lean_object* v_pd_1527_){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1528_ = l_Std_Time_PlainDate_toEpochDay(v_pd_1527_);
v___x_1529_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1530_ = lean_int_mul(v___x_1528_, v___x_1529_);
lean_dec(v___x_1528_);
v___x_1531_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime(lean_object* v_wt_1533_){
_start:
{
lean_object* v_second_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v_second_1534_ = lean_ctor_get(v_wt_1533_, 0);
v___x_1535_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1536_ = lean_int_div(v_second_1534_, v___x_1535_);
v___x_1537_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1536_);
lean_dec(v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofWallTime___boxed(lean_object* v_wt_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Std_Time_PlainDate_ofWallTime(v_wt_1538_);
lean_dec_ref(v_wt_1538_);
return v_res_1539_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_1541_ = lean_int_neg(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_instHSubDuration___lam__0(lean_object* v_x_1542_, lean_object* v_y_1543_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1544_ = l_Std_Time_PlainDate_toEpochDay(v_x_1542_);
v___x_1545_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__0, &l_Std_Time_PlainDateTime_toWallTime___closed__0_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__0);
v___x_1546_ = lean_int_mul(v___x_1544_, v___x_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDateTime_default___closed__0, &l_Std_Time_instInhabitedPlainDateTime_default___closed__0_once, _init_l_Std_Time_instInhabitedPlainDateTime_default___closed__0);
v___x_1548_ = l_Std_Time_PlainDate_toEpochDay(v_y_1543_);
v___x_1549_ = lean_int_mul(v___x_1548_, v___x_1545_);
lean_dec(v___x_1548_);
v___x_1550_ = lean_int_neg(v___x_1549_);
lean_dec(v___x_1549_);
v___x_1551_ = lean_obj_once(&l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0, &l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0_once, _init_l_Std_Time_PlainDate_instHSubDuration___lam__0___closed__0);
v___x_1552_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1553_ = lean_int_mul(v___x_1546_, v___x_1552_);
lean_dec(v___x_1546_);
v___x_1554_ = lean_int_add(v___x_1553_, v___x_1547_);
lean_dec(v___x_1553_);
v___x_1555_ = lean_int_mul(v___x_1550_, v___x_1552_);
lean_dec(v___x_1550_);
v___x_1556_ = lean_int_add(v___x_1555_, v___x_1551_);
lean_dec(v___x_1555_);
v___x_1557_ = lean_int_add(v___x_1554_, v___x_1556_);
lean_dec(v___x_1556_);
lean_dec(v___x_1554_);
v___x_1558_ = l_Std_Time_Duration_ofNanoseconds(v___x_1557_);
lean_dec(v___x_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_atTime(lean_object* v_date_1561_, lean_object* v_time_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v_date_1561_);
lean_ctor_set(v___x_1563_, 1, v_time_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime(lean_object* v_pt_1564_){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_1564_);
v___x_1566_ = l_Std_Time_Duration_ofNanoseconds(v___x_1565_);
lean_dec(v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toWallTime___boxed(lean_object* v_pt_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Std_Time_PlainTime_toWallTime(v_pt_1567_);
lean_dec_ref(v_pt_1567_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime(lean_object* v_wt_1569_){
_start:
{
lean_object* v_second_1570_; lean_object* v_nano_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_nanos_1574_; lean_object* v___x_1575_; 
v_second_1570_ = lean_ctor_get(v_wt_1569_, 0);
v_nano_1571_ = lean_ctor_get(v_wt_1569_, 1);
v___x_1572_ = lean_obj_once(&l_Std_Time_PlainDateTime_toWallTime___closed__1, &l_Std_Time_PlainDateTime_toWallTime___closed__1_once, _init_l_Std_Time_PlainDateTime_toWallTime___closed__1);
v___x_1573_ = lean_int_mul(v_second_1570_, v___x_1572_);
v_nanos_1574_ = lean_int_add(v___x_1573_, v_nano_1571_);
lean_dec(v___x_1573_);
v___x_1575_ = l_Std_Time_PlainTime_ofNanoseconds(v_nanos_1574_);
lean_dec(v_nanos_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofWallTime___boxed(lean_object* v_wt_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Std_Time_PlainTime_ofWallTime(v_wt_1576_);
lean_dec_ref(v_wt_1576_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_atDate(lean_object* v_time_1578_, lean_object* v_date_1579_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1580_, 0, v_date_1579_);
lean_ctor_set(v___x_1580_, 1, v_time_1578_);
return v___x_1580_;
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
