// Lean compiler output
// Module: Std.Time.Date.PlainDate
// Imports: public import Std.Time.Date.Basic import all Std.Time.Date.Unit.Month import all Std.Time.Date.Unit.Year
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
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Std_Time_Month_Quarter_ofMonth(lean_object*);
extern lean_object* l_Std_Time_Day_instOrdOrdinal;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Time_Month_instOrdOrdinal;
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Year_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
uint8_t l_Std_Time_Weekday_ofOrdinal(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
extern lean_object* l_Std_Time_Day_Ordinal_equiv;
lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
lean_object* l_Std_Time_ValidDate_ofOrdinal(uint8_t, lean_object*);
lean_object* l_Int_toNat(lean_object*);
extern lean_object* l_Std_Time_Month_Ordinal_equiv;
uint8_t l_Std_Time_Year_Offset_era(lean_object*);
extern lean_object* l_Std_Time_Week_OfYear_Ordinal_equiv;
extern lean_object* l_Std_Time_Day_instReprOrdinal;
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t, lean_object*);
uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object*, lean_object*);
uint8_t l_Std_Time_Day_instDecidableLEOrdinal(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "year"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__5_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "day"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__7 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__7_value;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__8;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "valid"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__9_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__10_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__11_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__12_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__14;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__15;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__16_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__17_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__18 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__19;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__21_value;
static const lean_string_object l_Std_Time_instReprPlainDate_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "month"};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__22 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__22_value;
static const lean_ctor_object l_Std_Time_instReprPlainDate_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__22_value)}};
static const lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__23 = (const lean_object*)&l_Std_Time_instReprPlainDate_repr___redArg___closed__23_value;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__24;
static lean_once_cell_t l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainDate_repr___redArg___closed__25;
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprPlainDate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprPlainDate_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprPlainDate___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainDate___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprPlainDate = (const lean_object*)&l_Std_Time_instReprPlainDate___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__1;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__2;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__3;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__4;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__5;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__6;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__7;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__8;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__9;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__10;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__11;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__12;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__13;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__14;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__15;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__16;
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__17;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedPlainDate;
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainDate___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__0 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__0_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainDate___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__1 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__1_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainDate___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__2 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__2_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Year_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__3 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__3_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__3_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__0_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__4 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__4_value;
static lean_once_cell_t l_Std_Time_instOrdPlainDate___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDate___closed__5;
static lean_once_cell_t l_Std_Time_instOrdPlainDate___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDate___closed__6;
static lean_once_cell_t l_Std_Time_instOrdPlainDate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDate___closed__7;
static lean_once_cell_t l_Std_Time_instOrdPlainDate___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdPlainDate___closed__8;
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_instInhabited;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDay_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__2;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__3;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__4;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__5;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__6;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__7;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__8;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__9;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__10;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__11;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__12;
static lean_once_cell_t l_Std_Time_PlainDate_ofEpochDay___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofEpochDay___closed__13;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_era(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_era___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_inLeapYear(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_inLeapYear___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_toEpochDay___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_toEpochDay___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_toEpochDay___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_toEpochDay___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__2;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__3;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__4;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__5;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__6;
static lean_once_cell_t l_Std_Time_PlainDate_rollOver___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_rollOver___closed__7;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthClip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthRollOver(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_weekday___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekday___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_weekday___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekday___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_weekday___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekday___closed__2;
static lean_once_cell_t l_Std_Time_PlainDate_weekday___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekday___closed__3;
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_weekday(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekday___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_weekOfMonth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfMonth___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfMonth___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfMonth___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6;
static lean_once_cell_t l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__2;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__3;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__4;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__5;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__6;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__7;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__8;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__9;
static lean_once_cell_t l_Std_Time_PlainDate_weekOfYear___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_weekOfYear___closed__10;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_PlainDate_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDate_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDate_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainDate_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDate_instHAddOffset = (const lean_object*)&l_Std_Time_PlainDate_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDate_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDate_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDate_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainDate_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDate_instHSubOffset = (const lean_object*)&l_Std_Time_PlainDate_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDate_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDate_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDate_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainDate_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDate_instHAddOffset__1 = (const lean_object*)&l_Std_Time_PlainDate_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_PlainDate_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainDate_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainDate_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainDate_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainDate_instHSubOffset__1 = (const lean_object*)&l_Std_Time_PlainDate_instHSubOffset__1___closed__0_value;
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(7u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__0));
v___x_24_ = lean_string_length(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__14, &l_Std_Time_instReprPlainDate_repr___redArg___closed__14_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__14);
v___x_26_ = lean_nat_to_int(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(8u);
v___x_35_ = lean_nat_to_int(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(9u);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___redArg(lean_object* v_x_46_){
_start:
{
lean_object* v_year_47_; lean_object* v_month_48_; lean_object* v_day_49_; lean_object* v___x_50_; lean_object* v___y_52_; lean_object* v___y_53_; lean_object* v___y_54_; lean_object* v___y_55_; uint8_t v___y_56_; lean_object* v___y_57_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___y_90_; lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_year_47_ = lean_ctor_get(v_x_46_, 0);
lean_inc(v_year_47_);
v_month_48_ = lean_ctor_get(v_x_46_, 1);
lean_inc(v_month_48_);
v_day_49_ = lean_ctor_get(v_x_46_, 2);
lean_inc(v_day_49_);
lean_dec_ref(v_x_46_);
v___x_50_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__5));
v___x_87_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__18));
v___x_88_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__19, &l_Std_Time_instReprPlainDate_repr___redArg___closed__19_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__19);
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_116_ = lean_int_dec_lt(v_year_47_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = l_Int_repr(v_year_47_);
lean_dec(v_year_47_);
v___x_118_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
v___y_90_ = v___x_118_;
goto v___jp_89_;
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = l_Int_repr(v_year_47_);
lean_dec(v_year_47_);
v___x_120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
v___x_121_ = l_Repr_addAppParen(v___x_120_, v___x_114_);
v___y_90_ = v___x_121_;
goto v___jp_89_;
}
v___jp_51_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_232__overap_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
lean_inc(v___y_54_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___y_54_);
lean_ctor_set(v___x_58_, 1, v___y_57_);
v___x_59_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*1, v___y_56_);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___y_53_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
lean_inc_n(v___y_55_, 2);
v___x_61_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___y_55_);
lean_inc_n(v___y_52_, 2);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___y_52_);
v___x_63_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__7));
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_50_);
v___x_66_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_232__overap_68_ = l_Std_Time_Day_instReprOrdinal;
v___x_69_ = lean_apply_2(v___x_232__overap_68_, v_day_49_, v___x_67_);
v___x_70_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_66_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, sizeof(void*)*1, v___y_56_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_65_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___y_55_);
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___y_52_);
v___x_75_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__10));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_50_);
v___x_78_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__12));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__15, &l_Std_Time_instReprPlainDate_repr___redArg___closed__15_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__15);
v___x_81_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__16));
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_79_);
v___x_83_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__17));
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_80_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___y_56_);
return v___x_86_;
}
v___jp_89_:
{
lean_object* v___x_91_; lean_object* v_invFun_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_91_ = l_Std_Time_Month_Ordinal_equiv;
v_invFun_92_ = lean_ctor_get(v___x_91_, 1);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_88_);
lean_ctor_set(v___x_93_, 1, v___y_90_);
v___x_94_ = 0;
v___x_95_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_95_, sizeof(void*)*1, v___x_94_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_87_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__21));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_box(1);
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__23));
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_50_);
v___x_104_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
lean_inc(v_invFun_92_);
v___x_105_ = lean_apply_1(v_invFun_92_, v_month_48_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_108_ = lean_int_dec_lt(v___x_105_, v___x_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = l_Int_repr(v___x_105_);
lean_dec(v___x_105_);
v___x_110_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
v___y_52_ = v___x_99_;
v___y_53_ = v___x_103_;
v___y_54_ = v___x_104_;
v___y_55_ = v___x_97_;
v___y_56_ = v___x_94_;
v___y_57_ = v___x_110_;
goto v___jp_51_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Int_repr(v___x_105_);
lean_dec(v___x_105_);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v___x_106_);
v___y_52_ = v___x_99_;
v___y_53_ = v___x_103_;
v___y_54_ = v___x_104_;
v___y_55_ = v___x_97_;
v___y_56_ = v___x_94_;
v___y_57_ = v___x_113_;
goto v___jp_51_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr(lean_object* v_x_122_, lean_object* v_prec_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Std_Time_instReprPlainDate_repr___redArg(v_x_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___boxed(lean_object* v_x_125_, lean_object* v_prec_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Std_Time_instReprPlainDate_repr(v_x_125_, v_prec_126_);
lean_dec(v_prec_126_);
return v_res_127_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate_decEq(lean_object* v_x_130_, lean_object* v_x_131_){
_start:
{
lean_object* v_year_132_; lean_object* v_month_133_; lean_object* v_day_134_; lean_object* v_year_135_; lean_object* v_month_136_; lean_object* v_day_137_; uint8_t v___x_138_; 
v_year_132_ = lean_ctor_get(v_x_130_, 0);
lean_inc(v_year_132_);
v_month_133_ = lean_ctor_get(v_x_130_, 1);
lean_inc(v_month_133_);
v_day_134_ = lean_ctor_get(v_x_130_, 2);
lean_inc(v_day_134_);
lean_dec_ref(v_x_130_);
v_year_135_ = lean_ctor_get(v_x_131_, 0);
lean_inc(v_year_135_);
v_month_136_ = lean_ctor_get(v_x_131_, 1);
lean_inc(v_month_136_);
v_day_137_ = lean_ctor_get(v_x_131_, 2);
lean_inc(v_day_137_);
lean_dec_ref(v_x_131_);
v___x_138_ = lean_int_dec_eq(v_year_132_, v_year_135_);
lean_dec(v_year_135_);
lean_dec(v_year_132_);
if (v___x_138_ == 0)
{
lean_dec(v_day_137_);
lean_dec(v_month_136_);
lean_dec(v_day_134_);
lean_dec(v_month_133_);
return v___x_138_;
}
else
{
lean_object* v___x_139_; lean_object* v_invFun_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_139_ = l_Std_Time_Month_Ordinal_equiv;
v_invFun_140_ = lean_ctor_get(v___x_139_, 1);
lean_inc_n(v_invFun_140_, 2);
v___x_141_ = lean_apply_1(v_invFun_140_, v_month_133_);
v___x_142_ = lean_apply_1(v_invFun_140_, v_month_136_);
v___x_143_ = lean_int_dec_eq(v___x_141_, v___x_142_);
lean_dec(v___x_142_);
lean_dec(v___x_141_);
if (v___x_143_ == 0)
{
lean_dec(v_day_137_);
lean_dec(v_day_134_);
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = l_Std_Time_Day_instDecidableEqOrdinal(v_day_134_, v_day_137_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate_decEq___boxed(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_x_145_, v_x_146_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate(lean_object* v_x_149_, lean_object* v_x_150_){
_start:
{
uint8_t v___x_151_; 
v___x_151_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_x_149_, v_x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate___boxed(lean_object* v_x_152_, lean_object* v_x_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = l_Std_Time_instDecidableEqPlainDate(v_x_152_, v_x_153_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_to_int(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__1(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(11u);
v___x_159_ = lean_nat_to_int(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__2(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__1, &l_Std_Time_instInhabitedPlainDate___closed__1_once, _init_l_Std_Time_instInhabitedPlainDate___closed__1);
v___x_161_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_162_ = lean_int_add(v___x_161_, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__3(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_164_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__2, &l_Std_Time_instInhabitedPlainDate___closed__2_once, _init_l_Std_Time_instInhabitedPlainDate___closed__2);
v___x_165_ = lean_int_sub(v___x_164_, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__4(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v_range_168_; 
v___x_166_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_167_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__3, &l_Std_Time_instInhabitedPlainDate___closed__3_once, _init_l_Std_Time_instInhabitedPlainDate___closed__3);
v_range_168_ = lean_int_add(v___x_167_, v___x_166_);
return v_range_168_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__5(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_170_ = lean_int_sub(v___x_169_, v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__6(void){
_start:
{
lean_object* v_range_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_range_171_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_172_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_173_ = lean_int_emod(v___x_172_, v_range_171_);
return v___x_173_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__7(void){
_start:
{
lean_object* v_range_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v_range_174_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_175_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__6, &l_Std_Time_instInhabitedPlainDate___closed__6_once, _init_l_Std_Time_instInhabitedPlainDate___closed__6);
v___x_176_ = lean_int_add(v___x_175_, v_range_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__8(void){
_start:
{
lean_object* v_range_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_range_177_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_178_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__7, &l_Std_Time_instInhabitedPlainDate___closed__7_once, _init_l_Std_Time_instInhabitedPlainDate___closed__7);
v___x_179_ = lean_int_emod(v___x_178_, v_range_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__9(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_181_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__8, &l_Std_Time_instInhabitedPlainDate___closed__8_once, _init_l_Std_Time_instInhabitedPlainDate___closed__8);
v___x_182_ = lean_int_add(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__10(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(30u);
v___x_184_ = lean_nat_to_int(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__11(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__10, &l_Std_Time_instInhabitedPlainDate___closed__10_once, _init_l_Std_Time_instInhabitedPlainDate___closed__10);
v___x_186_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_187_ = lean_int_add(v___x_186_, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__12(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_189_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__11, &l_Std_Time_instInhabitedPlainDate___closed__11_once, _init_l_Std_Time_instInhabitedPlainDate___closed__11);
v___x_190_ = lean_int_sub(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__13(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_range_193_; 
v___x_191_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_192_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__12, &l_Std_Time_instInhabitedPlainDate___closed__12_once, _init_l_Std_Time_instInhabitedPlainDate___closed__12);
v_range_193_ = lean_int_add(v___x_192_, v___x_191_);
return v_range_193_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__14(void){
_start:
{
lean_object* v_range_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_range_194_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_195_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_196_ = lean_int_emod(v___x_195_, v_range_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__15(void){
_start:
{
lean_object* v_range_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_range_197_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_198_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__14, &l_Std_Time_instInhabitedPlainDate___closed__14_once, _init_l_Std_Time_instInhabitedPlainDate___closed__14);
v___x_199_ = lean_int_add(v___x_198_, v_range_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__16(void){
_start:
{
lean_object* v_range_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_range_200_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_201_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__15, &l_Std_Time_instInhabitedPlainDate___closed__15_once, _init_l_Std_Time_instInhabitedPlainDate___closed__15);
v___x_202_ = lean_int_emod(v___x_201_, v_range_200_);
return v___x_202_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__17(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_204_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__16, &l_Std_Time_instInhabitedPlainDate___closed__16_once, _init_l_Std_Time_instInhabitedPlainDate___closed__16);
v___x_205_ = lean_int_add(v___x_204_, v___x_203_);
return v___x_205_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate(void){
_start:
{
lean_object* v___x_206_; lean_object* v_toFun_207_; lean_object* v___x_208_; lean_object* v_toFun_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_206_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_207_ = lean_ctor_get(v___x_206_, 0);
v___x_208_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_209_ = lean_ctor_get(v___x_208_, 0);
v___x_210_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_211_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__9, &l_Std_Time_instInhabitedPlainDate___closed__9_once, _init_l_Std_Time_instInhabitedPlainDate___closed__9);
lean_inc(v_toFun_207_);
v___x_212_ = lean_apply_1(v_toFun_207_, v___x_211_);
v___x_213_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__17, &l_Std_Time_instInhabitedPlainDate___closed__17_once, _init_l_Std_Time_instInhabitedPlainDate___closed__17);
lean_inc(v_toFun_209_);
v___x_214_ = lean_apply_1(v_toFun_209_, v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_215_, 0, v___x_210_);
lean_ctor_set(v___x_215_, 1, v___x_212_);
lean_ctor_set(v___x_215_, 2, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0(lean_object* v_x_216_){
_start:
{
lean_object* v_year_217_; 
v_year_217_ = lean_ctor_get(v_x_216_, 0);
lean_inc(v_year_217_);
return v_year_217_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0___boxed(lean_object* v_x_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Std_Time_instOrdPlainDate___lam__0(v_x_218_);
lean_dec_ref(v_x_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1(lean_object* v_x_220_){
_start:
{
lean_object* v_month_221_; 
v_month_221_ = lean_ctor_get(v_x_220_, 1);
lean_inc(v_month_221_);
return v_month_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1___boxed(lean_object* v_x_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Std_Time_instOrdPlainDate___lam__1(v_x_222_);
lean_dec_ref(v_x_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2(lean_object* v_x_224_){
_start:
{
lean_object* v_day_225_; 
v_day_225_ = lean_ctor_get(v_x_224_, 2);
lean_inc(v_day_225_);
return v_day_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2___boxed(lean_object* v_x_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Std_Time_instOrdPlainDate___lam__2(v_x_226_);
lean_dec_ref(v_x_226_);
return v_res_227_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDate___closed__5(void){
_start:
{
lean_object* v___f_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___f_235_ = ((lean_object*)(l_Std_Time_instOrdPlainDate___closed__1));
v___x_236_ = l_Std_Time_Month_instOrdOrdinal;
v___x_237_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_237_, 0, lean_box(0));
lean_closure_set(v___x_237_, 1, lean_box(0));
lean_closure_set(v___x_237_, 2, v___x_236_);
lean_closure_set(v___x_237_, 3, v___f_235_);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDate___closed__6(void){
_start:
{
lean_object* v___f_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___f_238_ = ((lean_object*)(l_Std_Time_instOrdPlainDate___closed__2));
v___x_239_ = l_Std_Time_Day_instOrdOrdinal;
v___x_240_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, lean_box(0));
lean_closure_set(v___x_240_, 2, v___x_239_);
lean_closure_set(v___x_240_, 3, v___f_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDate___closed__7(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_obj_once(&l_Std_Time_instOrdPlainDate___closed__6, &l_Std_Time_instOrdPlainDate___closed__6_once, _init_l_Std_Time_instOrdPlainDate___closed__6);
v___x_242_ = lean_obj_once(&l_Std_Time_instOrdPlainDate___closed__5, &l_Std_Time_instOrdPlainDate___closed__5_once, _init_l_Std_Time_instOrdPlainDate___closed__5);
v___x_243_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_243_, 0, lean_box(0));
lean_closure_set(v___x_243_, 1, lean_box(0));
lean_closure_set(v___x_243_, 2, v___x_242_);
lean_closure_set(v___x_243_, 3, v___x_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDate___closed__8(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_Std_Time_instOrdPlainDate___closed__7, &l_Std_Time_instOrdPlainDate___closed__7_once, _init_l_Std_Time_instOrdPlainDate___closed__7);
v___x_245_ = ((lean_object*)(l_Std_Time_instOrdPlainDate___closed__4));
v___x_246_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_246_, 0, lean_box(0));
lean_closure_set(v___x_246_, 1, lean_box(0));
lean_closure_set(v___x_246_, 2, v___x_245_);
lean_closure_set(v___x_246_, 3, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Std_Time_instOrdPlainDate(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&l_Std_Time_instOrdPlainDate___closed__8, &l_Std_Time_instOrdPlainDate___closed__8_once, _init_l_Std_Time_instOrdPlainDate___closed__8);
return v___x_247_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(4u);
v___x_249_ = lean_nat_to_int(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(100u);
v___x_251_ = lean_nat_to_int(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(400u);
v___x_253_ = lean_nat_to_int(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip(lean_object* v_year_254_, lean_object* v_month_255_, lean_object* v_day_256_){
_start:
{
uint8_t v___y_258_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; uint8_t v___y_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_263_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_264_ = lean_int_mod(v_year_254_, v___x_263_);
v___x_265_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_266_ = lean_int_dec_eq(v___x_264_, v___x_265_);
lean_dec(v___x_264_);
v___x_269_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_270_ = lean_int_mod(v_year_254_, v___x_269_);
v___x_271_ = lean_int_dec_eq(v___x_270_, v___x_265_);
lean_dec(v___x_270_);
if (v___x_271_ == 0)
{
uint8_t v___x_272_; 
v___x_272_ = 1;
v___y_268_ = v___x_272_;
goto v___jp_267_;
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_273_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_274_ = lean_int_mod(v_year_254_, v___x_273_);
v___x_275_ = lean_int_dec_eq(v___x_274_, v___x_265_);
lean_dec(v___x_274_);
v___y_268_ = v___x_275_;
goto v___jp_267_;
}
v___jp_257_:
{
lean_object* v_max_259_; uint8_t v___x_260_; 
v_max_259_ = l_Std_Time_Month_Ordinal_days(v___y_258_, v_month_255_);
v___x_260_ = lean_int_dec_lt(v_max_259_, v_day_256_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
lean_dec(v_max_259_);
v___x_261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_261_, 0, v_year_254_);
lean_ctor_set(v___x_261_, 1, v_month_255_);
lean_ctor_set(v___x_261_, 2, v_day_256_);
return v___x_261_;
}
else
{
lean_object* v___x_262_; 
lean_dec(v_day_256_);
v___x_262_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_262_, 0, v_year_254_);
lean_ctor_set(v___x_262_, 1, v_month_255_);
lean_ctor_set(v___x_262_, 2, v_max_259_);
return v___x_262_;
}
}
v___jp_267_:
{
if (v___x_266_ == 0)
{
v___y_258_ = v___x_266_;
goto v___jp_257_;
}
else
{
v___y_258_ = v___y_268_;
goto v___jp_257_;
}
}
}
}
static lean_object* _init_l_Std_Time_PlainDate_instInhabited(void){
_start:
{
lean_object* v___x_276_; lean_object* v_toFun_277_; lean_object* v___x_278_; lean_object* v_toFun_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_276_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_277_ = lean_ctor_get(v___x_276_, 0);
v___x_278_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_279_ = lean_ctor_get(v___x_278_, 0);
v___x_280_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_281_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__9, &l_Std_Time_instInhabitedPlainDate___closed__9_once, _init_l_Std_Time_instInhabitedPlainDate___closed__9);
lean_inc(v_toFun_277_);
v___x_282_ = lean_apply_1(v_toFun_277_, v___x_281_);
v___x_283_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__17, &l_Std_Time_instInhabitedPlainDate___closed__17_once, _init_l_Std_Time_instInhabitedPlainDate___closed__17);
lean_inc(v_toFun_279_);
v___x_284_ = lean_apply_1(v_toFun_279_, v___x_283_);
v___x_285_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_285_, 0, v___x_280_);
lean_ctor_set(v___x_285_, 1, v___x_282_);
lean_ctor_set(v___x_285_, 2, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDay_x3f(lean_object* v_year_286_, lean_object* v_month_287_, lean_object* v_day_288_){
_start:
{
uint8_t v___y_290_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; uint8_t v___y_301_; lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_296_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_297_ = lean_int_mod(v_year_286_, v___x_296_);
v___x_298_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_299_ = lean_int_dec_eq(v___x_297_, v___x_298_);
lean_dec(v___x_297_);
v___x_302_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_303_ = lean_int_mod(v_year_286_, v___x_302_);
v___x_304_ = lean_int_dec_eq(v___x_303_, v___x_298_);
lean_dec(v___x_303_);
if (v___x_304_ == 0)
{
uint8_t v___x_305_; 
v___x_305_ = 1;
v___y_301_ = v___x_305_;
goto v___jp_300_;
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_306_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_307_ = lean_int_mod(v_year_286_, v___x_306_);
v___x_308_ = lean_int_dec_eq(v___x_307_, v___x_298_);
lean_dec(v___x_307_);
v___y_301_ = v___x_308_;
goto v___jp_300_;
}
v___jp_289_:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = l_Std_Time_Month_Ordinal_days(v___y_290_, v_month_287_);
lean_inc(v_day_288_);
v___x_292_ = l_Std_Time_Day_instDecidableLEOrdinal(v_day_288_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
lean_dec(v_day_288_);
lean_dec(v_month_287_);
lean_dec(v_year_286_);
v___x_293_ = lean_box(0);
return v___x_293_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_294_, 0, v_year_286_);
lean_ctor_set(v___x_294_, 1, v_month_287_);
lean_ctor_set(v___x_294_, 2, v_day_288_);
v___x_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
v___jp_300_:
{
if (v___x_299_ == 0)
{
v___y_290_ = v___x_299_;
goto v___jp_289_;
}
else
{
v___y_290_ = v___y_301_;
goto v___jp_289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal(lean_object* v_year_309_, lean_object* v_ordinal_310_){
_start:
{
uint8_t v___y_312_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; uint8_t v___y_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_317_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_318_ = lean_int_mod(v_year_309_, v___x_317_);
v___x_319_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_320_ = lean_int_dec_eq(v___x_318_, v___x_319_);
lean_dec(v___x_318_);
v___x_323_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_324_ = lean_int_mod(v_year_309_, v___x_323_);
v___x_325_ = lean_int_dec_eq(v___x_324_, v___x_319_);
lean_dec(v___x_324_);
if (v___x_325_ == 0)
{
uint8_t v___x_326_; 
v___x_326_ = 1;
v___y_322_ = v___x_326_;
goto v___jp_321_;
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_327_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_328_ = lean_int_mod(v_year_309_, v___x_327_);
v___x_329_ = lean_int_dec_eq(v___x_328_, v___x_319_);
lean_dec(v___x_328_);
v___y_322_ = v___x_329_;
goto v___jp_321_;
}
v___jp_311_:
{
lean_object* v_val_313_; lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v___x_316_; 
v_val_313_ = l_Std_Time_ValidDate_ofOrdinal(v___y_312_, v_ordinal_310_);
v_fst_314_ = lean_ctor_get(v_val_313_, 0);
lean_inc(v_fst_314_);
v_snd_315_ = lean_ctor_get(v_val_313_, 1);
lean_inc(v_snd_315_);
lean_dec_ref(v_val_313_);
v___x_316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_316_, 0, v_year_309_);
lean_ctor_set(v___x_316_, 1, v_fst_314_);
lean_ctor_set(v___x_316_, 2, v_snd_315_);
return v___x_316_;
}
v___jp_321_:
{
if (v___x_320_ == 0)
{
v___y_312_ = v___x_320_;
goto v___jp_311_;
}
else
{
v___y_312_ = v___y_322_;
goto v___jp_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal___boxed(lean_object* v_year_330_, lean_object* v_ordinal_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Std_Time_PlainDate_ofYearOrdinal(v_year_330_, v_ordinal_331_);
lean_dec(v_ordinal_331_);
return v_res_332_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__0(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_unsigned_to_nat(719468u);
v___x_334_ = lean_nat_to_int(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__1(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(31u);
v___x_336_ = lean_nat_to_int(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__2(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(12u);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__3(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(146097u);
v___x_340_ = lean_nat_to_int(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__4(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_unsigned_to_nat(1460u);
v___x_342_ = lean_nat_to_int(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__5(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(36524u);
v___x_344_ = lean_nat_to_int(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__6(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(146096u);
v___x_346_ = lean_nat_to_int(v___x_345_);
return v___x_346_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__7(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(365u);
v___x_348_ = lean_nat_to_int(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__8(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_unsigned_to_nat(5u);
v___x_350_ = lean_nat_to_int(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__9(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_unsigned_to_nat(2u);
v___x_352_ = lean_nat_to_int(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__10(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_unsigned_to_nat(153u);
v___x_354_ = lean_nat_to_int(v___x_353_);
return v___x_354_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__11(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_unsigned_to_nat(10u);
v___x_356_ = lean_nat_to_int(v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__12(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
v___x_358_ = lean_int_neg(v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__13(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_unsigned_to_nat(3u);
v___x_360_ = lean_nat_to_int(v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object* v_day_361_){
_start:
{
lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; uint8_t v___y_366_; lean_object* v___y_372_; uint8_t v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; uint8_t v___y_376_; lean_object* v___x_377_; lean_object* v_z_378_; lean_object* v___x_379_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___y_431_; uint8_t v___x_474_; 
v___x_377_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__0, &l_Std_Time_PlainDate_ofEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__0);
v_z_378_ = lean_int_add(v_day_361_, v___x_377_);
v___x_379_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_474_ = lean_int_dec_le(v___x_379_, v_z_378_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__6, &l_Std_Time_PlainDate_ofEpochDay___closed__6_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__6);
v___x_476_ = lean_int_sub(v_z_378_, v___x_475_);
v___y_431_ = v___x_476_;
goto v___jp_430_;
}
else
{
lean_inc(v_z_378_);
v___y_431_ = v_z_378_;
goto v___jp_430_;
}
v___jp_362_:
{
lean_object* v_max_367_; uint8_t v___x_368_; 
v_max_367_ = l_Std_Time_Month_Ordinal_days(v___y_366_, v___y_363_);
v___x_368_ = lean_int_dec_lt(v_max_367_, v___y_365_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
lean_dec(v_max_367_);
v___x_369_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_369_, 0, v___y_364_);
lean_ctor_set(v___x_369_, 1, v___y_363_);
lean_ctor_set(v___x_369_, 2, v___y_365_);
return v___x_369_;
}
else
{
lean_object* v___x_370_; 
lean_dec(v___y_365_);
v___x_370_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_370_, 0, v___y_364_);
lean_ctor_set(v___x_370_, 1, v___y_363_);
lean_ctor_set(v___x_370_, 2, v_max_367_);
return v___x_370_;
}
}
v___jp_371_:
{
if (v___y_373_ == 0)
{
v___y_363_ = v___y_372_;
v___y_364_ = v___y_374_;
v___y_365_ = v___y_375_;
v___y_366_ = v___y_373_;
goto v___jp_362_;
}
else
{
v___y_363_ = v___y_372_;
v___y_364_ = v___y_374_;
v___y_365_ = v___y_375_;
v___y_366_ = v___y_376_;
goto v___jp_362_;
}
}
v___jp_380_:
{
lean_object* v___x_387_; uint8_t v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_387_ = lean_int_mod(v___y_383_, v___y_385_);
v___x_388_ = lean_int_dec_eq(v___x_387_, v___x_379_);
lean_dec(v___x_387_);
v___x_389_ = lean_int_mod(v___y_383_, v___y_384_);
v___x_390_ = lean_int_dec_eq(v___x_389_, v___x_379_);
lean_dec(v___x_389_);
if (v___x_390_ == 0)
{
uint8_t v___x_391_; 
v___x_391_ = 1;
v___y_372_ = v___y_381_;
v___y_373_ = v___x_388_;
v___y_374_ = v___y_383_;
v___y_375_ = v___y_386_;
v___y_376_ = v___x_391_;
goto v___jp_371_;
}
else
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_int_mod(v___y_383_, v___y_382_);
v___x_393_ = lean_int_dec_eq(v___x_392_, v___x_379_);
lean_dec(v___x_392_);
v___y_372_ = v___y_381_;
v___y_373_ = v___x_388_;
v___y_374_ = v___y_383_;
v___y_375_ = v___y_386_;
v___y_376_ = v___x_393_;
goto v___jp_371_;
}
}
v___jp_394_:
{
uint8_t v___x_402_; 
v___x_402_ = lean_int_dec_le(v___y_398_, v___y_395_);
if (v___x_402_ == 0)
{
lean_dec(v___y_395_);
lean_inc(v___y_398_);
v___y_381_ = v___y_401_;
v___y_382_ = v___y_396_;
v___y_383_ = v___y_397_;
v___y_384_ = v___y_400_;
v___y_385_ = v___y_399_;
v___y_386_ = v___y_398_;
goto v___jp_380_;
}
else
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__1, &l_Std_Time_PlainDate_ofEpochDay___closed__1_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__1);
v___x_404_ = lean_int_dec_le(v___y_395_, v___x_403_);
if (v___x_404_ == 0)
{
lean_dec(v___y_395_);
v___y_381_ = v___y_401_;
v___y_382_ = v___y_396_;
v___y_383_ = v___y_397_;
v___y_384_ = v___y_400_;
v___y_385_ = v___y_399_;
v___y_386_ = v___x_403_;
goto v___jp_380_;
}
else
{
v___y_381_ = v___y_401_;
v___y_382_ = v___y_396_;
v___y_383_ = v___y_397_;
v___y_384_ = v___y_400_;
v___y_385_ = v___y_399_;
v___y_386_ = v___y_395_;
goto v___jp_380_;
}
}
}
v___jp_405_:
{
lean_object* v_y_414_; uint8_t v___x_415_; 
v_y_414_ = lean_int_add(v___y_409_, v___y_413_);
lean_dec(v___y_409_);
v___x_415_ = lean_int_dec_le(v___y_410_, v___y_407_);
if (v___x_415_ == 0)
{
lean_dec(v___y_407_);
lean_inc(v___y_410_);
v___y_395_ = v___y_406_;
v___y_396_ = v___y_408_;
v___y_397_ = v_y_414_;
v___y_398_ = v___y_410_;
v___y_399_ = v___y_412_;
v___y_400_ = v___y_411_;
v___y_401_ = v___y_410_;
goto v___jp_394_;
}
else
{
lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_416_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_417_ = lean_int_dec_le(v___y_407_, v___x_416_);
if (v___x_417_ == 0)
{
lean_dec(v___y_407_);
v___y_395_ = v___y_406_;
v___y_396_ = v___y_408_;
v___y_397_ = v_y_414_;
v___y_398_ = v___y_410_;
v___y_399_ = v___y_412_;
v___y_400_ = v___y_411_;
v___y_401_ = v___x_416_;
goto v___jp_394_;
}
else
{
v___y_395_ = v___y_406_;
v___y_396_ = v___y_408_;
v___y_397_ = v_y_414_;
v___y_398_ = v___y_410_;
v___y_399_ = v___y_412_;
v___y_400_ = v___y_411_;
v___y_401_ = v___y_407_;
goto v___jp_394_;
}
}
}
v___jp_418_:
{
lean_object* v_m_428_; uint8_t v___x_429_; 
v_m_428_ = lean_int_add(v___y_420_, v___y_427_);
lean_dec(v___y_420_);
v___x_429_ = lean_int_dec_le(v_m_428_, v___y_422_);
if (v___x_429_ == 0)
{
v___y_406_ = v___y_419_;
v___y_407_ = v_m_428_;
v___y_408_ = v___y_421_;
v___y_409_ = v___y_423_;
v___y_410_ = v___y_424_;
v___y_411_ = v___y_426_;
v___y_412_ = v___y_425_;
v___y_413_ = v___x_379_;
goto v___jp_405_;
}
else
{
v___y_406_ = v___y_419_;
v___y_407_ = v_m_428_;
v___y_408_ = v___y_421_;
v___y_409_ = v___y_423_;
v___y_410_ = v___y_424_;
v___y_411_ = v___y_426_;
v___y_412_ = v___y_425_;
v___y_413_ = v___y_424_;
goto v___jp_405_;
}
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v_era_433_; lean_object* v___x_434_; lean_object* v_doe_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v_yoe_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_y_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_doy_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v_mp_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v_d_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_432_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__3, &l_Std_Time_PlainDate_ofEpochDay___closed__3_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__3);
v_era_433_ = lean_int_div(v___y_431_, v___x_432_);
lean_dec(v___y_431_);
v___x_434_ = lean_int_mul(v_era_433_, v___x_432_);
v_doe_435_ = lean_int_sub(v_z_378_, v___x_434_);
lean_dec(v___x_434_);
lean_dec(v_z_378_);
v___x_436_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__4, &l_Std_Time_PlainDate_ofEpochDay___closed__4_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__4);
v___x_437_ = lean_int_div(v_doe_435_, v___x_436_);
v___x_438_ = lean_int_sub(v_doe_435_, v___x_437_);
lean_dec(v___x_437_);
v___x_439_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__5, &l_Std_Time_PlainDate_ofEpochDay___closed__5_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__5);
v___x_440_ = lean_int_div(v_doe_435_, v___x_439_);
v___x_441_ = lean_int_add(v___x_438_, v___x_440_);
lean_dec(v___x_440_);
lean_dec(v___x_438_);
v___x_442_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__6, &l_Std_Time_PlainDate_ofEpochDay___closed__6_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__6);
v___x_443_ = lean_int_div(v_doe_435_, v___x_442_);
v___x_444_ = lean_int_sub(v___x_441_, v___x_443_);
lean_dec(v___x_443_);
lean_dec(v___x_441_);
v___x_445_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__7, &l_Std_Time_PlainDate_ofEpochDay___closed__7_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__7);
v_yoe_446_ = lean_int_div(v___x_444_, v___x_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_448_ = lean_int_mul(v_era_433_, v___x_447_);
lean_dec(v_era_433_);
v_y_449_ = lean_int_add(v_yoe_446_, v___x_448_);
lean_dec(v___x_448_);
v___x_450_ = lean_int_mul(v___x_445_, v_yoe_446_);
v___x_451_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_452_ = lean_int_div(v_yoe_446_, v___x_451_);
v___x_453_ = lean_int_add(v___x_450_, v___x_452_);
lean_dec(v___x_452_);
lean_dec(v___x_450_);
v___x_454_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_455_ = lean_int_div(v_yoe_446_, v___x_454_);
lean_dec(v_yoe_446_);
v___x_456_ = lean_int_sub(v___x_453_, v___x_455_);
lean_dec(v___x_455_);
lean_dec(v___x_453_);
v_doy_457_ = lean_int_sub(v_doe_435_, v___x_456_);
lean_dec(v___x_456_);
lean_dec(v_doe_435_);
v___x_458_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_459_ = lean_int_mul(v___x_458_, v_doy_457_);
v___x_460_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__9, &l_Std_Time_PlainDate_ofEpochDay___closed__9_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__9);
v___x_461_ = lean_int_add(v___x_459_, v___x_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__10, &l_Std_Time_PlainDate_ofEpochDay___closed__10_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__10);
v_mp_463_ = lean_int_div(v___x_461_, v___x_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_int_mul(v___x_462_, v_mp_463_);
v___x_465_ = lean_int_add(v___x_464_, v___x_460_);
lean_dec(v___x_464_);
v___x_466_ = lean_int_div(v___x_465_, v___x_458_);
lean_dec(v___x_465_);
v___x_467_ = lean_int_sub(v_doy_457_, v___x_466_);
lean_dec(v___x_466_);
lean_dec(v_doy_457_);
v___x_468_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_d_469_ = lean_int_add(v___x_467_, v___x_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__11, &l_Std_Time_PlainDate_ofEpochDay___closed__11_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__11);
v___x_471_ = lean_int_dec_lt(v_mp_463_, v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; 
v___x_472_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__12, &l_Std_Time_PlainDate_ofEpochDay___closed__12_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__12);
v___y_419_ = v_d_469_;
v___y_420_ = v_mp_463_;
v___y_421_ = v___x_447_;
v___y_422_ = v___x_460_;
v___y_423_ = v_y_449_;
v___y_424_ = v___x_468_;
v___y_425_ = v___x_451_;
v___y_426_ = v___x_454_;
v___y_427_ = v___x_472_;
goto v___jp_418_;
}
else
{
lean_object* v___x_473_; 
v___x_473_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__13, &l_Std_Time_PlainDate_ofEpochDay___closed__13_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__13);
v___y_419_ = v_d_469_;
v___y_420_ = v_mp_463_;
v___y_421_ = v___x_447_;
v___y_422_ = v___x_460_;
v___y_423_ = v_y_449_;
v___y_424_ = v___x_468_;
v___y_425_ = v___x_451_;
v___y_426_ = v___x_454_;
v___y_427_ = v___x_473_;
goto v___jp_418_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay___boxed(lean_object* v_day_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_Time_PlainDate_ofEpochDay(v_day_477_);
lean_dec(v_day_477_);
return v_res_478_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_480_ = lean_int_neg(v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth(lean_object* v_date_481_){
_start:
{
lean_object* v_day_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_day_482_ = lean_ctor_get(v_date_481_, 2);
v___x_483_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_484_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_485_ = lean_obj_once(&l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0, &l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0_once, _init_l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0);
v___x_486_ = lean_int_add(v_day_482_, v___x_485_);
v___x_487_ = lean_int_ediv(v___x_486_, v___x_484_);
lean_dec(v___x_486_);
v___x_488_ = lean_int_add(v___x_487_, v___x_483_);
lean_dec(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth___boxed(lean_object* v_date_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Time_PlainDate_alignedWeekOfMonth(v_date_489_);
lean_dec_ref(v_date_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter(lean_object* v_date_491_){
_start:
{
lean_object* v_month_492_; lean_object* v___x_493_; 
v_month_492_ = lean_ctor_get(v_date_491_, 1);
v___x_493_ = l_Std_Time_Month_Quarter_ofMonth(v_month_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter___boxed(lean_object* v_date_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Std_Time_PlainDate_quarter(v_date_494_);
lean_dec_ref(v_date_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear(lean_object* v_date_496_){
_start:
{
lean_object* v_year_497_; lean_object* v_month_498_; lean_object* v_day_499_; uint8_t v___y_501_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; uint8_t v___y_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_year_497_ = lean_ctor_get(v_date_496_, 0);
v_month_498_ = lean_ctor_get(v_date_496_, 1);
v_day_499_ = lean_ctor_get(v_date_496_, 2);
v___x_504_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_505_ = lean_int_mod(v_year_497_, v___x_504_);
v___x_506_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_507_ = lean_int_dec_eq(v___x_505_, v___x_506_);
lean_dec(v___x_505_);
v___x_510_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_511_ = lean_int_mod(v_year_497_, v___x_510_);
v___x_512_ = lean_int_dec_eq(v___x_511_, v___x_506_);
lean_dec(v___x_511_);
if (v___x_512_ == 0)
{
uint8_t v___x_513_; 
v___x_513_ = 1;
v___y_509_ = v___x_513_;
goto v___jp_508_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_514_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_515_ = lean_int_mod(v_year_497_, v___x_514_);
v___x_516_ = lean_int_dec_eq(v___x_515_, v___x_506_);
lean_dec(v___x_515_);
v___y_509_ = v___x_516_;
goto v___jp_508_;
}
v___jp_500_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
lean_inc(v_day_499_);
lean_inc(v_month_498_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v_month_498_);
lean_ctor_set(v___x_502_, 1, v_day_499_);
v___x_503_ = l_Std_Time_ValidDate_dayOfYear(v___y_501_, v___x_502_);
lean_dec_ref_known(v___x_502_, 2);
return v___x_503_;
}
v___jp_508_:
{
if (v___x_507_ == 0)
{
v___y_501_ = v___x_507_;
goto v___jp_500_;
}
else
{
v___y_501_ = v___y_509_;
goto v___jp_500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear___boxed(lean_object* v_date_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_Time_PlainDate_dayOfYear(v_date_517_);
lean_dec_ref(v_date_517_);
return v_res_518_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_era(lean_object* v_date_519_){
_start:
{
lean_object* v_year_520_; uint8_t v___x_521_; 
v_year_520_ = lean_ctor_get(v_date_519_, 0);
v___x_521_ = l_Std_Time_Year_Offset_era(v_year_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_era___boxed(lean_object* v_date_522_){
_start:
{
uint8_t v_res_523_; lean_object* v_r_524_; 
v_res_523_ = l_Std_Time_PlainDate_era(v_date_522_);
lean_dec_ref(v_date_522_);
v_r_524_ = lean_box(v_res_523_);
return v_r_524_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_inLeapYear(lean_object* v_date_525_){
_start:
{
lean_object* v_year_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v_year_526_ = lean_ctor_get(v_date_525_, 0);
v___x_527_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_528_ = lean_int_mod(v_year_526_, v___x_527_);
v___x_529_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_530_ = lean_int_dec_eq(v___x_528_, v___x_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_532_ = lean_int_mod(v_year_526_, v___x_531_);
v___x_533_ = lean_int_dec_eq(v___x_532_, v___x_529_);
lean_dec(v___x_532_);
if (v___x_533_ == 0)
{
return v___x_530_;
}
else
{
if (v___x_530_ == 0)
{
return v___x_530_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_534_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_535_ = lean_int_mod(v_year_526_, v___x_534_);
v___x_536_ = lean_int_dec_eq(v___x_535_, v___x_529_);
lean_dec(v___x_535_);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_inLeapYear___boxed(lean_object* v_date_537_){
_start:
{
uint8_t v_res_538_; lean_object* v_r_539_; 
v_res_538_ = l_Std_Time_PlainDate_inLeapYear(v_date_537_);
lean_dec_ref(v_date_537_);
v_r_539_ = lean_box(v_res_538_);
return v_r_539_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_toEpochDay___closed__0(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__13, &l_Std_Time_PlainDate_ofEpochDay___closed__13_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__13);
v___x_541_ = lean_int_neg(v___x_540_);
return v___x_541_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_toEpochDay___closed__1(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_unsigned_to_nat(399u);
v___x_543_ = lean_nat_to_int(v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object* v_date_544_){
_start:
{
lean_object* v_year_545_; lean_object* v_month_546_; lean_object* v_day_547_; lean_object* v___x_548_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_588_; uint8_t v___x_593_; 
v_year_545_ = lean_ctor_get(v_date_544_, 0);
lean_inc(v_year_545_);
v_month_546_ = lean_ctor_get(v_date_544_, 1);
lean_inc(v_month_546_);
v_day_547_ = lean_ctor_get(v_date_544_, 2);
lean_inc(v_day_547_);
lean_dec_ref(v_date_544_);
v___x_548_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__9, &l_Std_Time_PlainDate_ofEpochDay___closed__9_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__9);
v___x_593_ = lean_int_dec_lt(v___x_548_, v_month_546_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_595_ = lean_int_sub(v_year_545_, v___x_594_);
lean_dec(v_year_545_);
v___y_588_ = v___x_595_;
goto v___jp_587_;
}
else
{
v___y_588_ = v_year_545_;
goto v___jp_587_;
}
v___jp_549_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_doy_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_doe_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_554_ = lean_int_add(v_month_546_, v___y_553_);
lean_dec(v_month_546_);
v___x_555_ = lean_int_mul(v___y_552_, v___x_554_);
lean_dec(v___x_554_);
v___x_556_ = lean_int_add(v___x_555_, v___x_548_);
lean_dec(v___x_555_);
v___x_557_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_558_ = lean_int_div(v___x_556_, v___x_557_);
lean_dec(v___x_556_);
v___x_559_ = lean_int_add(v___x_558_, v_day_547_);
lean_dec(v_day_547_);
lean_dec(v___x_558_);
v___x_560_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_doy_561_ = lean_int_sub(v___x_559_, v___x_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__7, &l_Std_Time_PlainDate_ofEpochDay___closed__7_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__7);
v___x_563_ = lean_int_mul(v___y_551_, v___x_562_);
v___x_564_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_565_ = lean_int_div(v___y_551_, v___x_564_);
v___x_566_ = lean_int_add(v___x_563_, v___x_565_);
lean_dec(v___x_565_);
lean_dec(v___x_563_);
v___x_567_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_568_ = lean_int_div(v___y_551_, v___x_567_);
lean_dec(v___y_551_);
v___x_569_ = lean_int_sub(v___x_566_, v___x_568_);
lean_dec(v___x_568_);
lean_dec(v___x_566_);
v_doe_570_ = lean_int_add(v___x_569_, v_doy_561_);
lean_dec(v_doy_561_);
lean_dec(v___x_569_);
v___x_571_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__3, &l_Std_Time_PlainDate_ofEpochDay___closed__3_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__3);
v___x_572_ = lean_int_mul(v___y_550_, v___x_571_);
lean_dec(v___y_550_);
v___x_573_ = lean_int_add(v___x_572_, v_doe_570_);
lean_dec(v_doe_570_);
lean_dec(v___x_572_);
v___x_574_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__0, &l_Std_Time_PlainDate_ofEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__0);
v___x_575_ = lean_int_sub(v___x_573_, v___x_574_);
lean_dec(v___x_573_);
return v___x_575_;
}
v___jp_576_:
{
lean_object* v___x_579_; lean_object* v_era_580_; lean_object* v___x_581_; lean_object* v_yoe_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_579_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v_era_580_ = lean_int_div(v___y_578_, v___x_579_);
lean_dec(v___y_578_);
v___x_581_ = lean_int_mul(v_era_580_, v___x_579_);
v_yoe_582_ = lean_int_sub(v___y_577_, v___x_581_);
lean_dec(v___x_581_);
lean_dec(v___y_577_);
v___x_583_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__10, &l_Std_Time_PlainDate_ofEpochDay___closed__10_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__10);
v___x_584_ = lean_int_dec_lt(v___x_548_, v_month_546_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
v___y_550_ = v_era_580_;
v___y_551_ = v_yoe_582_;
v___y_552_ = v___x_583_;
v___y_553_ = v___x_585_;
goto v___jp_549_;
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&l_Std_Time_PlainDate_toEpochDay___closed__0, &l_Std_Time_PlainDate_toEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_toEpochDay___closed__0);
v___y_550_ = v_era_580_;
v___y_551_ = v_yoe_582_;
v___y_552_ = v___x_583_;
v___y_553_ = v___x_586_;
goto v___jp_549_;
}
}
v___jp_587_:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_590_ = lean_int_dec_le(v___x_589_, v___y_588_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_obj_once(&l_Std_Time_PlainDate_toEpochDay___closed__1, &l_Std_Time_PlainDate_toEpochDay___closed__1_once, _init_l_Std_Time_PlainDate_toEpochDay___closed__1);
v___x_592_ = lean_int_sub(v___y_588_, v___x_591_);
v___y_577_ = v___y_588_;
v___y_578_ = v___x_592_;
goto v___jp_576_;
}
else
{
lean_inc(v___y_588_);
v___y_577_ = v___y_588_;
v___y_578_ = v___y_588_;
goto v___jp_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays(lean_object* v_date_596_, lean_object* v_days_597_){
_start:
{
lean_object* v_dateDays_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_dateDays_598_ = l_Std_Time_PlainDate_toEpochDay(v_date_596_);
v___x_599_ = lean_int_add(v_dateDays_598_, v_days_597_);
lean_dec(v_dateDays_598_);
v___x_600_ = l_Std_Time_PlainDate_ofEpochDay(v___x_599_);
lean_dec(v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays___boxed(lean_object* v_date_601_, lean_object* v_days_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Std_Time_PlainDate_addDays(v_date_601_, v_days_602_);
lean_dec(v_days_602_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays(lean_object* v_date_604_, lean_object* v_days_605_){
_start:
{
lean_object* v___x_606_; lean_object* v_dateDays_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_int_neg(v_days_605_);
v_dateDays_607_ = l_Std_Time_PlainDate_toEpochDay(v_date_604_);
v___x_608_ = lean_int_add(v_dateDays_607_, v___x_606_);
lean_dec(v___x_606_);
lean_dec(v_dateDays_607_);
v___x_609_ = l_Std_Time_PlainDate_ofEpochDay(v___x_608_);
lean_dec(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays___boxed(lean_object* v_date_610_, lean_object* v_days_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Std_Time_PlainDate_subDays(v_date_610_, v_days_611_);
lean_dec(v_days_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks(lean_object* v_date_613_, lean_object* v_weeks_614_){
_start:
{
lean_object* v_dateDays_615_; lean_object* v___x_616_; lean_object* v_daysToAdd_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_dateDays_615_ = l_Std_Time_PlainDate_toEpochDay(v_date_613_);
v___x_616_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v_daysToAdd_617_ = lean_int_mul(v_weeks_614_, v___x_616_);
v___x_618_ = lean_int_add(v_dateDays_615_, v_daysToAdd_617_);
lean_dec(v_daysToAdd_617_);
lean_dec(v_dateDays_615_);
v___x_619_ = l_Std_Time_PlainDate_ofEpochDay(v___x_618_);
lean_dec(v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks___boxed(lean_object* v_date_620_, lean_object* v_weeks_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Std_Time_PlainDate_addWeeks(v_date_620_, v_weeks_621_);
lean_dec(v_weeks_621_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks(lean_object* v_date_623_, lean_object* v_weeks_624_){
_start:
{
lean_object* v___x_625_; lean_object* v_dateDays_626_; lean_object* v___x_627_; lean_object* v_daysToAdd_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_625_ = lean_int_neg(v_weeks_624_);
v_dateDays_626_ = l_Std_Time_PlainDate_toEpochDay(v_date_623_);
v___x_627_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v_daysToAdd_628_ = lean_int_mul(v___x_625_, v___x_627_);
lean_dec(v___x_625_);
v___x_629_ = lean_int_add(v_dateDays_626_, v_daysToAdd_628_);
lean_dec(v_daysToAdd_628_);
lean_dec(v_dateDays_626_);
v___x_630_ = l_Std_Time_PlainDate_ofEpochDay(v___x_629_);
lean_dec(v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks___boxed(lean_object* v_date_631_, lean_object* v_weeks_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Std_Time_PlainDate_subWeeks(v_date_631_, v_weeks_632_);
lean_dec(v_weeks_632_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip(lean_object* v_date_634_, lean_object* v_months_635_){
_start:
{
lean_object* v_year_636_; lean_object* v_month_637_; lean_object* v_day_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_673_; 
v_year_636_ = lean_ctor_get(v_date_634_, 0);
v_month_637_ = lean_ctor_get(v_date_634_, 1);
v_day_638_ = lean_ctor_get(v_date_634_, 2);
v_isSharedCheck_673_ = !lean_is_exclusive(v_date_634_);
if (v_isSharedCheck_673_ == 0)
{
v___x_640_ = v_date_634_;
v_isShared_641_ = v_isSharedCheck_673_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_day_638_);
lean_inc(v_month_637_);
lean_inc(v_year_636_);
lean_dec(v_date_634_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_673_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_totalMonths_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v_wrappedMonths_647_; lean_object* v_yearsOffset_648_; lean_object* v___x_649_; uint8_t v___y_651_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; uint8_t v___y_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_642_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_643_ = lean_int_sub(v_month_637_, v___x_642_);
lean_dec(v_month_637_);
v_totalMonths_644_ = lean_int_add(v___x_643_, v_months_635_);
lean_dec(v___x_643_);
v___x_645_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_646_ = lean_int_emod(v_totalMonths_644_, v___x_645_);
v_wrappedMonths_647_ = lean_int_add(v___x_646_, v___x_642_);
lean_dec(v___x_646_);
v_yearsOffset_648_ = lean_int_ediv(v_totalMonths_644_, v___x_645_);
lean_dec(v_totalMonths_644_);
v___x_649_ = lean_int_add(v_year_636_, v_yearsOffset_648_);
lean_dec(v_yearsOffset_648_);
lean_dec(v_year_636_);
v___x_660_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_661_ = lean_int_mod(v___x_649_, v___x_660_);
v___x_662_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_663_ = lean_int_dec_eq(v___x_661_, v___x_662_);
lean_dec(v___x_661_);
v___x_666_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_667_ = lean_int_mod(v___x_649_, v___x_666_);
v___x_668_ = lean_int_dec_eq(v___x_667_, v___x_662_);
lean_dec(v___x_667_);
if (v___x_668_ == 0)
{
uint8_t v___x_669_; 
v___x_669_ = 1;
v___y_665_ = v___x_669_;
goto v___jp_664_;
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_670_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_671_ = lean_int_mod(v___x_649_, v___x_670_);
v___x_672_ = lean_int_dec_eq(v___x_671_, v___x_662_);
lean_dec(v___x_671_);
v___y_665_ = v___x_672_;
goto v___jp_664_;
}
v___jp_650_:
{
lean_object* v_max_652_; uint8_t v___x_653_; 
v_max_652_ = l_Std_Time_Month_Ordinal_days(v___y_651_, v_wrappedMonths_647_);
v___x_653_ = lean_int_dec_lt(v_max_652_, v_day_638_);
if (v___x_653_ == 0)
{
lean_object* v___x_655_; 
lean_dec(v_max_652_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 1, v_wrappedMonths_647_);
lean_ctor_set(v___x_640_, 0, v___x_649_);
v___x_655_ = v___x_640_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v_wrappedMonths_647_);
lean_ctor_set(v_reuseFailAlloc_656_, 2, v_day_638_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
else
{
lean_object* v___x_658_; 
lean_dec(v_day_638_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 2, v_max_652_);
lean_ctor_set(v___x_640_, 1, v_wrappedMonths_647_);
lean_ctor_set(v___x_640_, 0, v___x_649_);
v___x_658_ = v___x_640_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_wrappedMonths_647_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_max_652_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
v___jp_664_:
{
if (v___x_663_ == 0)
{
v___y_651_ = v___x_663_;
goto v___jp_650_;
}
else
{
v___y_651_ = v___y_665_;
goto v___jp_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip___boxed(lean_object* v_date_674_, lean_object* v_months_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Std_Time_PlainDate_addMonthsClip(v_date_674_, v_months_675_);
lean_dec(v_months_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip(lean_object* v_date_677_, lean_object* v_months_678_){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_int_neg(v_months_678_);
v___x_680_ = l_Std_Time_PlainDate_addMonthsClip(v_date_677_, v___x_679_);
lean_dec(v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip___boxed(lean_object* v_date_681_, lean_object* v_months_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Std_Time_PlainDate_subMonthsClip(v_date_681_, v_months_682_);
lean_dec(v_months_682_);
return v_res_683_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__0(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(30u);
v___x_685_ = lean_nat_to_int(v___x_684_);
return v___x_685_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__1(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__0, &l_Std_Time_PlainDate_rollOver___closed__0_once, _init_l_Std_Time_PlainDate_rollOver___closed__0);
v___x_687_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_688_ = lean_int_add(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__2(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_690_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__1, &l_Std_Time_PlainDate_rollOver___closed__1_once, _init_l_Std_Time_PlainDate_rollOver___closed__1);
v___x_691_ = lean_int_sub(v___x_690_, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__3(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_range_694_; 
v___x_692_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_693_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__2, &l_Std_Time_PlainDate_rollOver___closed__2_once, _init_l_Std_Time_PlainDate_rollOver___closed__2);
v_range_694_ = lean_int_add(v___x_693_, v___x_692_);
return v_range_694_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__4(void){
_start:
{
lean_object* v_range_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_range_695_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_696_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_697_ = lean_int_emod(v___x_696_, v_range_695_);
return v___x_697_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__5(void){
_start:
{
lean_object* v_range_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_range_698_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_699_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__4, &l_Std_Time_PlainDate_rollOver___closed__4_once, _init_l_Std_Time_PlainDate_rollOver___closed__4);
v___x_700_ = lean_int_add(v___x_699_, v_range_698_);
return v___x_700_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__6(void){
_start:
{
lean_object* v_range_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_range_701_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_702_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__5, &l_Std_Time_PlainDate_rollOver___closed__5_once, _init_l_Std_Time_PlainDate_rollOver___closed__5);
v___x_703_ = lean_int_emod(v___x_702_, v_range_701_);
return v___x_703_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__7(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_705_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__6, &l_Std_Time_PlainDate_rollOver___closed__6_once, _init_l_Std_Time_PlainDate_rollOver___closed__6);
v___x_706_ = lean_int_add(v___x_705_, v___x_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver(lean_object* v_year_707_, lean_object* v_month_708_, lean_object* v_day_709_){
_start:
{
lean_object* v___x_710_; lean_object* v_toFun_711_; lean_object* v___y_713_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___y_722_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; uint8_t v___y_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_710_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_711_ = lean_ctor_get(v___x_710_, 0);
v___x_719_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
lean_inc(v_toFun_711_);
v___x_720_ = lean_apply_1(v_toFun_711_, v___x_719_);
v___x_727_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_728_ = lean_int_mod(v_year_707_, v___x_727_);
v___x_729_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_730_ = lean_int_dec_eq(v___x_728_, v___x_729_);
lean_dec(v___x_728_);
v___x_733_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_734_ = lean_int_mod(v_year_707_, v___x_733_);
v___x_735_ = lean_int_dec_eq(v___x_734_, v___x_729_);
lean_dec(v___x_734_);
if (v___x_735_ == 0)
{
uint8_t v___x_736_; 
v___x_736_ = 1;
v___y_732_ = v___x_736_;
goto v___jp_731_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_737_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_738_ = lean_int_mod(v_year_707_, v___x_737_);
v___x_739_ = lean_int_dec_eq(v___x_738_, v___x_729_);
lean_dec(v___x_738_);
v___y_732_ = v___x_739_;
goto v___jp_731_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_dateDays_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_714_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_715_ = lean_int_sub(v_day_709_, v___x_714_);
v_dateDays_716_ = l_Std_Time_PlainDate_toEpochDay(v___y_713_);
v___x_717_ = lean_int_add(v_dateDays_716_, v___x_715_);
lean_dec(v___x_715_);
lean_dec(v_dateDays_716_);
v___x_718_ = l_Std_Time_PlainDate_ofEpochDay(v___x_717_);
lean_dec(v___x_717_);
return v___x_718_;
}
v___jp_721_:
{
lean_object* v_max_723_; uint8_t v___x_724_; 
v_max_723_ = l_Std_Time_Month_Ordinal_days(v___y_722_, v_month_708_);
v___x_724_ = lean_int_dec_lt(v_max_723_, v___x_720_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_dec(v_max_723_);
v___x_725_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_725_, 0, v_year_707_);
lean_ctor_set(v___x_725_, 1, v_month_708_);
lean_ctor_set(v___x_725_, 2, v___x_720_);
v___y_713_ = v___x_725_;
goto v___jp_712_;
}
else
{
lean_object* v___x_726_; 
lean_dec(v___x_720_);
v___x_726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_726_, 0, v_year_707_);
lean_ctor_set(v___x_726_, 1, v_month_708_);
lean_ctor_set(v___x_726_, 2, v_max_723_);
v___y_713_ = v___x_726_;
goto v___jp_712_;
}
}
v___jp_731_:
{
if (v___x_730_ == 0)
{
v___y_722_ = v___x_730_;
goto v___jp_721_;
}
else
{
v___y_722_ = v___y_732_;
goto v___jp_721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver___boxed(lean_object* v_year_740_, lean_object* v_month_741_, lean_object* v_day_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Std_Time_PlainDate_rollOver(v_year_740_, v_month_741_, v_day_742_);
lean_dec(v_day_742_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearClip(lean_object* v_dt_744_, lean_object* v_year_745_){
_start:
{
lean_object* v_month_746_; lean_object* v_day_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_774_; 
v_month_746_ = lean_ctor_get(v_dt_744_, 1);
v_day_747_ = lean_ctor_get(v_dt_744_, 2);
v_isSharedCheck_774_ = !lean_is_exclusive(v_dt_744_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v_dt_744_, 0);
lean_dec(v_unused_775_);
v___x_749_ = v_dt_744_;
v_isShared_750_ = v_isSharedCheck_774_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_day_747_);
lean_inc(v_month_746_);
lean_dec(v_dt_744_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_774_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
uint8_t v___y_752_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; uint8_t v___y_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_761_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_762_ = lean_int_mod(v_year_745_, v___x_761_);
v___x_763_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_764_ = lean_int_dec_eq(v___x_762_, v___x_763_);
lean_dec(v___x_762_);
v___x_767_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_768_ = lean_int_mod(v_year_745_, v___x_767_);
v___x_769_ = lean_int_dec_eq(v___x_768_, v___x_763_);
lean_dec(v___x_768_);
if (v___x_769_ == 0)
{
uint8_t v___x_770_; 
v___x_770_ = 1;
v___y_766_ = v___x_770_;
goto v___jp_765_;
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_771_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_772_ = lean_int_mod(v_year_745_, v___x_771_);
v___x_773_ = lean_int_dec_eq(v___x_772_, v___x_763_);
lean_dec(v___x_772_);
v___y_766_ = v___x_773_;
goto v___jp_765_;
}
v___jp_751_:
{
lean_object* v_max_753_; uint8_t v___x_754_; 
v_max_753_ = l_Std_Time_Month_Ordinal_days(v___y_752_, v_month_746_);
v___x_754_ = lean_int_dec_lt(v_max_753_, v_day_747_);
if (v___x_754_ == 0)
{
lean_object* v___x_756_; 
lean_dec(v_max_753_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 0, v_year_745_);
v___x_756_ = v___x_749_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_year_745_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_month_746_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_day_747_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
else
{
lean_object* v___x_759_; 
lean_dec(v_day_747_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 2, v_max_753_);
lean_ctor_set(v___x_749_, 0, v_year_745_);
v___x_759_ = v___x_749_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_year_745_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_month_746_);
lean_ctor_set(v_reuseFailAlloc_760_, 2, v_max_753_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
v___jp_765_:
{
if (v___x_764_ == 0)
{
v___y_752_ = v___x_764_;
goto v___jp_751_;
}
else
{
v___y_752_ = v___y_766_;
goto v___jp_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearRollOver(lean_object* v_dt_776_, lean_object* v_year_777_){
_start:
{
lean_object* v_month_778_; lean_object* v_day_779_; lean_object* v___x_780_; 
v_month_778_ = lean_ctor_get(v_dt_776_, 1);
lean_inc(v_month_778_);
v_day_779_ = lean_ctor_get(v_dt_776_, 2);
lean_inc(v_day_779_);
lean_dec_ref(v_dt_776_);
v___x_780_ = l_Std_Time_PlainDate_rollOver(v_year_777_, v_month_778_, v_day_779_);
lean_dec(v_day_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver(lean_object* v_date_781_, lean_object* v_months_782_){
_start:
{
lean_object* v_year_783_; lean_object* v_month_784_; lean_object* v_day_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_824_; 
v_year_783_ = lean_ctor_get(v_date_781_, 0);
v_month_784_ = lean_ctor_get(v_date_781_, 1);
v_day_785_ = lean_ctor_get(v_date_781_, 2);
v_isSharedCheck_824_ = !lean_is_exclusive(v_date_781_);
if (v_isSharedCheck_824_ == 0)
{
v___x_787_ = v_date_781_;
v_isShared_788_ = v_isSharedCheck_824_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_day_785_);
lean_inc(v_month_784_);
lean_inc(v_year_783_);
lean_dec(v_date_781_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_824_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v_toFun_790_; lean_object* v___y_792_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___y_802_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; uint8_t v___y_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_789_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_790_ = lean_ctor_get(v___x_789_, 0);
v___x_799_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
lean_inc(v_toFun_790_);
v___x_800_ = lean_apply_1(v_toFun_790_, v___x_799_);
v___x_811_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_812_ = lean_int_mod(v_year_783_, v___x_811_);
v___x_813_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_814_ = lean_int_dec_eq(v___x_812_, v___x_813_);
lean_dec(v___x_812_);
v___x_817_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_818_ = lean_int_mod(v_year_783_, v___x_817_);
v___x_819_ = lean_int_dec_eq(v___x_818_, v___x_813_);
lean_dec(v___x_818_);
if (v___x_819_ == 0)
{
uint8_t v___x_820_; 
v___x_820_ = 1;
v___y_816_ = v___x_820_;
goto v___jp_815_;
}
else
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_821_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_822_ = lean_int_mod(v_year_783_, v___x_821_);
v___x_823_ = lean_int_dec_eq(v___x_822_, v___x_813_);
lean_dec(v___x_822_);
v___y_816_ = v___x_823_;
goto v___jp_815_;
}
v___jp_791_:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_dateDays_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_793_ = l_Std_Time_PlainDate_addMonthsClip(v___y_792_, v_months_782_);
v___x_794_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_795_ = lean_int_sub(v_day_785_, v___x_794_);
lean_dec(v_day_785_);
v_dateDays_796_ = l_Std_Time_PlainDate_toEpochDay(v___x_793_);
v___x_797_ = lean_int_add(v_dateDays_796_, v___x_795_);
lean_dec(v___x_795_);
lean_dec(v_dateDays_796_);
v___x_798_ = l_Std_Time_PlainDate_ofEpochDay(v___x_797_);
lean_dec(v___x_797_);
return v___x_798_;
}
v___jp_801_:
{
lean_object* v_max_803_; uint8_t v___x_804_; 
v_max_803_ = l_Std_Time_Month_Ordinal_days(v___y_802_, v_month_784_);
v___x_804_ = lean_int_dec_lt(v_max_803_, v___x_800_);
if (v___x_804_ == 0)
{
lean_object* v___x_806_; 
lean_dec(v_max_803_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 2, v___x_800_);
v___x_806_ = v___x_787_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_year_783_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_month_784_);
lean_ctor_set(v_reuseFailAlloc_807_, 2, v___x_800_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
v___y_792_ = v___x_806_;
goto v___jp_791_;
}
}
else
{
lean_object* v___x_809_; 
lean_dec(v___x_800_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 2, v_max_803_);
v___x_809_ = v___x_787_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_year_783_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_month_784_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v_max_803_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v___y_792_ = v___x_809_;
goto v___jp_791_;
}
}
}
v___jp_815_:
{
if (v___x_814_ == 0)
{
v___y_802_ = v___x_814_;
goto v___jp_801_;
}
else
{
v___y_802_ = v___y_816_;
goto v___jp_801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver___boxed(lean_object* v_date_825_, lean_object* v_months_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_825_, v_months_826_);
lean_dec(v_months_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver(lean_object* v_date_828_, lean_object* v_months_829_){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_int_neg(v_months_829_);
v___x_831_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_828_, v___x_830_);
lean_dec(v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver___boxed(lean_object* v_date_832_, lean_object* v_months_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Std_Time_PlainDate_subMonthsRollOver(v_date_832_, v_months_833_);
lean_dec(v_months_833_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver(lean_object* v_date_835_, lean_object* v_years_836_){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_838_ = lean_int_mul(v_years_836_, v___x_837_);
v___x_839_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_835_, v___x_838_);
lean_dec(v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver___boxed(lean_object* v_date_840_, lean_object* v_years_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Std_Time_PlainDate_addYearsRollOver(v_date_840_, v_years_841_);
lean_dec(v_years_841_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver(lean_object* v_date_843_, lean_object* v_years_844_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_845_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_846_ = lean_int_mul(v_years_844_, v___x_845_);
v___x_847_ = lean_int_neg(v___x_846_);
lean_dec(v___x_846_);
v___x_848_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_843_, v___x_847_);
lean_dec(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver___boxed(lean_object* v_date_849_, lean_object* v_years_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Std_Time_PlainDate_subYearsRollOver(v_date_849_, v_years_850_);
lean_dec(v_years_850_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip(lean_object* v_date_852_, lean_object* v_years_853_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_855_ = lean_int_mul(v_years_853_, v___x_854_);
v___x_856_ = l_Std_Time_PlainDate_addMonthsClip(v_date_852_, v___x_855_);
lean_dec(v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip___boxed(lean_object* v_date_857_, lean_object* v_years_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Std_Time_PlainDate_addYearsClip(v_date_857_, v_years_858_);
lean_dec(v_years_858_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip(lean_object* v_date_860_, lean_object* v_years_861_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_862_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_863_ = lean_int_mul(v_years_861_, v___x_862_);
v___x_864_ = lean_int_neg(v___x_863_);
lean_dec(v___x_863_);
v___x_865_ = l_Std_Time_PlainDate_addMonthsClip(v_date_860_, v___x_864_);
lean_dec(v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip___boxed(lean_object* v_date_866_, lean_object* v_years_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Std_Time_PlainDate_subYearsClip(v_date_866_, v_years_867_);
lean_dec(v_years_867_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysClip(lean_object* v_dt_869_, lean_object* v_days_870_){
_start:
{
lean_object* v_year_871_; lean_object* v_month_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_899_; 
v_year_871_ = lean_ctor_get(v_dt_869_, 0);
v_month_872_ = lean_ctor_get(v_dt_869_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_dt_869_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v_dt_869_, 2);
lean_dec(v_unused_900_);
v___x_874_ = v_dt_869_;
v_isShared_875_ = v_isSharedCheck_899_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_month_872_);
lean_inc(v_year_871_);
lean_dec(v_dt_869_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_899_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
uint8_t v___y_877_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; uint8_t v___y_891_; lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_886_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_887_ = lean_int_mod(v_year_871_, v___x_886_);
v___x_888_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_889_ = lean_int_dec_eq(v___x_887_, v___x_888_);
lean_dec(v___x_887_);
v___x_892_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_893_ = lean_int_mod(v_year_871_, v___x_892_);
v___x_894_ = lean_int_dec_eq(v___x_893_, v___x_888_);
lean_dec(v___x_893_);
if (v___x_894_ == 0)
{
uint8_t v___x_895_; 
v___x_895_ = 1;
v___y_891_ = v___x_895_;
goto v___jp_890_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_896_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_897_ = lean_int_mod(v_year_871_, v___x_896_);
v___x_898_ = lean_int_dec_eq(v___x_897_, v___x_888_);
lean_dec(v___x_897_);
v___y_891_ = v___x_898_;
goto v___jp_890_;
}
v___jp_876_:
{
lean_object* v_max_878_; uint8_t v___x_879_; 
v_max_878_ = l_Std_Time_Month_Ordinal_days(v___y_877_, v_month_872_);
v___x_879_ = lean_int_dec_lt(v_max_878_, v_days_870_);
if (v___x_879_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_max_878_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 2, v_days_870_);
v___x_881_ = v___x_874_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_year_871_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_month_872_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_days_870_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
else
{
lean_object* v___x_884_; 
lean_dec(v_days_870_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 2, v_max_878_);
v___x_884_ = v___x_874_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_year_871_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_month_872_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_max_878_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
v___jp_890_:
{
if (v___x_889_ == 0)
{
v___y_877_ = v___x_889_;
goto v___jp_876_;
}
else
{
v___y_877_ = v___y_891_;
goto v___jp_876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver(lean_object* v_dt_901_, lean_object* v_days_902_){
_start:
{
lean_object* v_year_903_; lean_object* v_month_904_; lean_object* v___x_905_; 
v_year_903_ = lean_ctor_get(v_dt_901_, 0);
lean_inc(v_year_903_);
v_month_904_ = lean_ctor_get(v_dt_901_, 1);
lean_inc(v_month_904_);
lean_dec_ref(v_dt_901_);
v___x_905_ = l_Std_Time_PlainDate_rollOver(v_year_903_, v_month_904_, v_days_902_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver___boxed(lean_object* v_dt_906_, lean_object* v_days_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Std_Time_PlainDate_withDaysRollOver(v_dt_906_, v_days_907_);
lean_dec(v_days_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthClip(lean_object* v_dt_909_, lean_object* v_month_910_){
_start:
{
lean_object* v_year_911_; lean_object* v_day_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_939_; 
v_year_911_ = lean_ctor_get(v_dt_909_, 0);
v_day_912_ = lean_ctor_get(v_dt_909_, 2);
v_isSharedCheck_939_ = !lean_is_exclusive(v_dt_909_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; 
v_unused_940_ = lean_ctor_get(v_dt_909_, 1);
lean_dec(v_unused_940_);
v___x_914_ = v_dt_909_;
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_day_912_);
lean_inc(v_year_911_);
lean_dec(v_dt_909_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
uint8_t v___y_917_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; uint8_t v___y_931_; lean_object* v___x_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_926_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_927_ = lean_int_mod(v_year_911_, v___x_926_);
v___x_928_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_929_ = lean_int_dec_eq(v___x_927_, v___x_928_);
lean_dec(v___x_927_);
v___x_932_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_933_ = lean_int_mod(v_year_911_, v___x_932_);
v___x_934_ = lean_int_dec_eq(v___x_933_, v___x_928_);
lean_dec(v___x_933_);
if (v___x_934_ == 0)
{
uint8_t v___x_935_; 
v___x_935_ = 1;
v___y_931_ = v___x_935_;
goto v___jp_930_;
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_936_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_937_ = lean_int_mod(v_year_911_, v___x_936_);
v___x_938_ = lean_int_dec_eq(v___x_937_, v___x_928_);
lean_dec(v___x_937_);
v___y_931_ = v___x_938_;
goto v___jp_930_;
}
v___jp_916_:
{
lean_object* v_max_918_; uint8_t v___x_919_; 
v_max_918_ = l_Std_Time_Month_Ordinal_days(v___y_917_, v_month_910_);
v___x_919_ = lean_int_dec_lt(v_max_918_, v_day_912_);
if (v___x_919_ == 0)
{
lean_object* v___x_921_; 
lean_dec(v_max_918_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v_month_910_);
v___x_921_ = v___x_914_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_year_911_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_month_910_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v_day_912_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
else
{
lean_object* v___x_924_; 
lean_dec(v_day_912_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 2, v_max_918_);
lean_ctor_set(v___x_914_, 1, v_month_910_);
v___x_924_ = v___x_914_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_year_911_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_month_910_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_max_918_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
v___jp_930_:
{
if (v___x_929_ == 0)
{
v___y_917_ = v___x_929_;
goto v___jp_916_;
}
else
{
v___y_917_ = v___y_931_;
goto v___jp_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthRollOver(lean_object* v_dt_941_, lean_object* v_month_942_){
_start:
{
lean_object* v_year_943_; lean_object* v_day_944_; lean_object* v___x_945_; 
v_year_943_ = lean_ctor_get(v_dt_941_, 0);
lean_inc(v_year_943_);
v_day_944_ = lean_ctor_get(v_dt_941_, 2);
lean_inc(v_day_944_);
lean_dec_ref(v_dt_941_);
v___x_945_ = l_Std_Time_PlainDate_rollOver(v_year_943_, v_month_942_, v_day_944_);
lean_dec(v_day_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__0(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_947_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_948_ = lean_int_sub(v___x_947_, v___x_946_);
return v___x_948_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__1(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v_range_951_; 
v___x_949_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_950_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__0, &l_Std_Time_PlainDate_weekday___closed__0_once, _init_l_Std_Time_PlainDate_weekday___closed__0);
v_range_951_ = lean_int_add(v___x_950_, v___x_949_);
return v_range_951_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__2(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_953_ = lean_int_neg(v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__3(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(6u);
v___x_955_ = lean_nat_to_int(v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_weekday(lean_object* v_date_956_){
_start:
{
lean_object* v___y_958_; lean_object* v_days_967_; lean_object* v___x_968_; lean_object* v___x_969_; uint8_t v___x_970_; 
v_days_967_ = l_Std_Time_PlainDate_toEpochDay(v_date_956_);
v___x_968_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_969_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__2, &l_Std_Time_PlainDate_weekday___closed__2_once, _init_l_Std_Time_PlainDate_weekday___closed__2);
v___x_970_ = lean_int_dec_le(v___x_969_, v_days_967_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_971_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_972_ = lean_int_add(v_days_967_, v___x_971_);
lean_dec(v_days_967_);
v___x_973_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_974_ = lean_int_emod(v___x_972_, v___x_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__3, &l_Std_Time_PlainDate_weekday___closed__3_once, _init_l_Std_Time_PlainDate_weekday___closed__3);
v___x_976_ = lean_int_add(v___x_974_, v___x_975_);
lean_dec(v___x_974_);
v___y_958_ = v___x_976_;
goto v___jp_957_;
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_int_add(v_days_967_, v___x_968_);
lean_dec(v_days_967_);
v___x_978_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_979_ = lean_int_emod(v___x_977_, v___x_978_);
lean_dec(v___x_977_);
v___y_958_ = v___x_979_;
goto v___jp_957_;
}
v___jp_957_:
{
lean_object* v___x_959_; lean_object* v_range_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_959_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_range_960_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__1, &l_Std_Time_PlainDate_weekday___closed__1_once, _init_l_Std_Time_PlainDate_weekday___closed__1);
v___x_961_ = lean_int_sub(v___y_958_, v___x_959_);
lean_dec(v___y_958_);
v___x_962_ = lean_int_emod(v___x_961_, v_range_960_);
lean_dec(v___x_961_);
v___x_963_ = lean_int_add(v___x_962_, v_range_960_);
lean_dec(v___x_962_);
v___x_964_ = lean_int_emod(v___x_963_, v_range_960_);
lean_dec(v___x_963_);
v___x_965_ = lean_int_add(v___x_964_, v___x_959_);
lean_dec(v___x_964_);
v___x_966_ = l_Std_Time_Weekday_ofOrdinal(v___x_965_);
lean_dec(v___x_965_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekday___boxed(lean_object* v_date_980_){
_start:
{
uint8_t v_res_981_; lean_object* v_r_982_; 
v_res_981_ = l_Std_Time_PlainDate_weekday(v_date_980_);
v_r_982_ = lean_box(v_res_981_);
return v_r_982_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfMonth___closed__0(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_984_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__3, &l_Std_Time_PlainDate_weekday___closed__3_once, _init_l_Std_Time_PlainDate_weekday___closed__3);
v___x_985_ = lean_int_sub(v___x_984_, v___x_983_);
return v___x_985_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfMonth___closed__1(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v_range_988_; 
v___x_986_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_987_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfMonth___closed__0, &l_Std_Time_PlainDate_weekOfMonth___closed__0_once, _init_l_Std_Time_PlainDate_weekOfMonth___closed__0);
v_range_988_ = lean_int_add(v___x_987_, v___x_986_);
return v_range_988_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object* v_date_989_, uint8_t v_firstDay_990_){
_start:
{
lean_object* v___x_991_; lean_object* v_toFun_992_; lean_object* v_year_993_; lean_object* v_month_994_; lean_object* v_day_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1044_; 
v___x_991_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_992_ = lean_ctor_get(v___x_991_, 0);
v_year_993_ = lean_ctor_get(v_date_989_, 0);
v_month_994_ = lean_ctor_get(v_date_989_, 1);
v_day_995_ = lean_ctor_get(v_date_989_, 2);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_date_989_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_997_ = v_date_989_;
v_isShared_998_ = v_isSharedCheck_1044_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_day_995_);
lean_inc(v_month_994_);
lean_inc(v_year_993_);
lean_dec(v_date_989_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1044_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___y_1000_; lean_object* v___x_1019_; lean_object* v___x_1020_; uint8_t v___y_1022_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; uint8_t v___y_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1019_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
lean_inc(v_toFun_992_);
v___x_1020_ = lean_apply_1(v_toFun_992_, v___x_1019_);
v___x_1031_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_1032_ = lean_int_mod(v_year_993_, v___x_1031_);
v___x_1033_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1034_ = lean_int_dec_eq(v___x_1032_, v___x_1033_);
lean_dec(v___x_1032_);
v___x_1037_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_1038_ = lean_int_mod(v_year_993_, v___x_1037_);
v___x_1039_ = lean_int_dec_eq(v___x_1038_, v___x_1033_);
lean_dec(v___x_1038_);
if (v___x_1039_ == 0)
{
uint8_t v___x_1040_; 
v___x_1040_ = 1;
v___y_1036_ = v___x_1040_;
goto v___jp_1035_;
}
else
{
lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1041_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_1042_ = lean_int_mod(v_year_993_, v___x_1041_);
v___x_1043_ = lean_int_dec_eq(v___x_1042_, v___x_1033_);
lean_dec(v___x_1042_);
v___y_1036_ = v___x_1043_;
goto v___jp_1035_;
}
v___jp_999_:
{
uint8_t v___x_1001_; lean_object* v_day1Ord_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v_offset_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v_range_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1001_ = l_Std_Time_PlainDate_weekday(v___y_1000_);
v_day1Ord_1002_ = l_Std_Time_Weekday_toOrdinal(v___x_1001_);
v___x_1003_ = l_Std_Time_Weekday_toOrdinal(v_firstDay_990_);
v___x_1004_ = lean_int_sub(v_day1Ord_1002_, v___x_1003_);
lean_dec(v___x_1003_);
lean_dec(v_day1Ord_1002_);
v___x_1005_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1006_ = lean_int_add(v___x_1004_, v___x_1005_);
lean_dec(v___x_1004_);
v_offset_1007_ = lean_int_emod(v___x_1006_, v___x_1005_);
lean_dec(v___x_1006_);
v___x_1008_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1009_ = lean_int_sub(v_day_995_, v___x_1008_);
lean_dec(v_day_995_);
v___x_1010_ = lean_int_add(v___x_1009_, v_offset_1007_);
lean_dec(v_offset_1007_);
lean_dec(v___x_1009_);
v___x_1011_ = lean_int_ediv(v___x_1010_, v___x_1005_);
lean_dec(v___x_1010_);
v___x_1012_ = lean_int_add(v___x_1011_, v___x_1008_);
lean_dec(v___x_1011_);
v_range_1013_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfMonth___closed__1, &l_Std_Time_PlainDate_weekOfMonth___closed__1_once, _init_l_Std_Time_PlainDate_weekOfMonth___closed__1);
v___x_1014_ = lean_int_sub(v___x_1012_, v___x_1008_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_int_emod(v___x_1014_, v_range_1013_);
lean_dec(v___x_1014_);
v___x_1016_ = lean_int_add(v___x_1015_, v_range_1013_);
lean_dec(v___x_1015_);
v___x_1017_ = lean_int_emod(v___x_1016_, v_range_1013_);
lean_dec(v___x_1016_);
v___x_1018_ = lean_int_add(v___x_1017_, v___x_1008_);
lean_dec(v___x_1017_);
return v___x_1018_;
}
v___jp_1021_:
{
lean_object* v_max_1023_; uint8_t v___x_1024_; 
v_max_1023_ = l_Std_Time_Month_Ordinal_days(v___y_1022_, v_month_994_);
v___x_1024_ = lean_int_dec_lt(v_max_1023_, v___x_1020_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1026_; 
lean_dec(v_max_1023_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 2, v___x_1020_);
v___x_1026_ = v___x_997_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_year_993_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_month_994_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v___x_1020_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
v___y_1000_ = v___x_1026_;
goto v___jp_999_;
}
}
else
{
lean_object* v___x_1029_; 
lean_dec(v___x_1020_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 2, v_max_1023_);
v___x_1029_ = v___x_997_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_year_993_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_month_994_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_max_1023_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
v___y_1000_ = v___x_1029_;
goto v___jp_999_;
}
}
}
v___jp_1035_:
{
if (v___x_1034_ == 0)
{
v___y_1022_ = v___x_1034_;
goto v___jp_1021_;
}
else
{
v___y_1022_ = v___y_1036_;
goto v___jp_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth___boxed(lean_object* v_date_1045_, lean_object* v_firstDay_1046_){
_start:
{
uint8_t v_firstDay_boxed_1047_; lean_object* v_res_1048_; 
v_firstDay_boxed_1047_ = lean_unbox(v_firstDay_1046_);
v_res_1048_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1045_, v_firstDay_boxed_1047_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday(lean_object* v_date_1049_, uint8_t v_desiredWeekday_1050_){
_start:
{
lean_object* v___y_1052_; uint8_t v___x_1056_; lean_object* v_weekday_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
lean_inc_ref(v_date_1049_);
v___x_1056_ = l_Std_Time_PlainDate_weekday(v_date_1049_);
v_weekday_1057_ = l_Std_Time_Weekday_toOrdinal(v___x_1056_);
v___x_1058_ = l_Std_Time_Weekday_toOrdinal(v_desiredWeekday_1050_);
v___x_1059_ = lean_int_neg(v_weekday_1057_);
lean_dec(v_weekday_1057_);
v___x_1060_ = lean_int_add(v___x_1058_, v___x_1059_);
lean_dec(v___x_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1062_ = lean_int_dec_lt(v___x_1060_, v___x_1061_);
if (v___x_1062_ == 0)
{
v___y_1052_ = v___x_1060_;
goto v___jp_1051_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1064_ = lean_int_add(v___x_1060_, v___x_1063_);
lean_dec(v___x_1060_);
v___y_1052_ = v___x_1064_;
goto v___jp_1051_;
}
v___jp_1051_:
{
lean_object* v_dateDays_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_dateDays_1053_ = l_Std_Time_PlainDate_toEpochDay(v_date_1049_);
v___x_1054_ = lean_int_add(v_dateDays_1053_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec(v_dateDays_1053_);
v___x_1055_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1054_);
lean_dec(v___x_1054_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday___boxed(lean_object* v_date_1065_, lean_object* v_desiredWeekday_1066_){
_start:
{
uint8_t v_desiredWeekday_boxed_1067_; lean_object* v_res_1068_; 
v_desiredWeekday_boxed_1067_ = lean_unbox(v_desiredWeekday_1066_);
v_res_1068_ = l_Std_Time_PlainDate_withWeekday(v_date_1065_, v_desiredWeekday_boxed_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(uint8_t v_weekday_1069_, uint8_t v_firstDay_1070_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1071_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1072_ = l_Std_Time_Weekday_toOrdinal(v_weekday_1069_);
v___x_1073_ = l_Std_Time_Weekday_toOrdinal(v_firstDay_1070_);
v___x_1074_ = lean_int_neg(v___x_1073_);
lean_dec(v___x_1073_);
v___x_1075_ = lean_int_add(v___x_1072_, v___x_1074_);
lean_dec(v___x_1074_);
lean_dec(v___x_1072_);
v___x_1076_ = lean_int_emod(v___x_1075_, v___x_1071_);
lean_dec(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek___boxed(lean_object* v_weekday_1077_, lean_object* v_firstDay_1078_){
_start:
{
uint8_t v_weekday_boxed_1079_; uint8_t v_firstDay_boxed_1080_; lean_object* v_res_1081_; 
v_weekday_boxed_1079_ = lean_unbox(v_weekday_1077_);
v_firstDay_boxed_1080_ = lean_unbox(v_firstDay_1078_);
v_res_1081_ = l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(v_weekday_boxed_1079_, v_firstDay_boxed_1080_);
return v_res_1081_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = lean_unsigned_to_nat(11u);
v___x_1083_ = lean_nat_to_int(v___x_1082_);
return v___x_1083_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0);
v___x_1085_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1086_ = lean_int_add(v___x_1085_, v___x_1084_);
return v___x_1086_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1088_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1);
v___x_1089_ = lean_int_sub(v___x_1088_, v___x_1087_);
return v___x_1089_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_range_1092_; 
v___x_1090_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1091_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2);
v_range_1092_ = lean_int_add(v___x_1091_, v___x_1090_);
return v_range_1092_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4(void){
_start:
{
lean_object* v_range_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_range_1093_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1094_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_1095_ = lean_int_emod(v___x_1094_, v_range_1093_);
return v___x_1095_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5(void){
_start:
{
lean_object* v_range_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v_range_1096_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1097_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4);
v___x_1098_ = lean_int_add(v___x_1097_, v_range_1096_);
return v___x_1098_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6(void){
_start:
{
lean_object* v_range_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_range_1099_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1100_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5);
v___x_1101_ = lean_int_emod(v___x_1100_, v_range_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1103_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6);
v___x_1104_ = lean_int_add(v___x_1103_, v___x_1102_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear(lean_object* v_year_1105_, uint8_t v_firstDay_1106_, lean_object* v_minimalDays_1107_){
_start:
{
lean_object* v___y_1109_; lean_object* v___x_1125_; lean_object* v_toFun_1126_; lean_object* v___x_1127_; lean_object* v_toFun_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___y_1134_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; uint8_t v___y_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1125_ = l_Std_Time_Month_Ordinal_equiv;
v_toFun_1126_ = lean_ctor_get(v___x_1125_, 0);
v___x_1127_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_1128_ = lean_ctor_get(v___x_1127_, 0);
v___x_1129_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7);
lean_inc(v_toFun_1126_);
v___x_1130_ = lean_apply_1(v_toFun_1126_, v___x_1129_);
v___x_1131_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
lean_inc(v_toFun_1128_);
v___x_1132_ = lean_apply_1(v_toFun_1128_, v___x_1131_);
v___x_1139_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_1140_ = lean_int_mod(v_year_1105_, v___x_1139_);
v___x_1141_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1142_ = lean_int_dec_eq(v___x_1140_, v___x_1141_);
lean_dec(v___x_1140_);
v___x_1145_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_1146_ = lean_int_mod(v_year_1105_, v___x_1145_);
v___x_1147_ = lean_int_dec_eq(v___x_1146_, v___x_1141_);
lean_dec(v___x_1146_);
if (v___x_1147_ == 0)
{
uint8_t v___x_1148_; 
v___x_1148_ = 1;
v___y_1144_ = v___x_1148_;
goto v___jp_1143_;
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1149_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_1150_ = lean_int_mod(v_year_1105_, v___x_1149_);
v___x_1151_ = lean_int_dec_eq(v___x_1150_, v___x_1141_);
lean_dec(v___x_1150_);
v___y_1144_ = v___x_1151_;
goto v___jp_1143_;
}
v___jp_1108_:
{
uint8_t v___x_1110_; lean_object* v_localDay_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v_dateDays_1118_; lean_object* v___x_1119_; lean_object* v_weekStart_1120_; uint8_t v___x_1121_; 
lean_inc_ref(v___y_1109_);
v___x_1110_ = l_Std_Time_PlainDate_weekday(v___y_1109_);
v_localDay_1111_ = l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(v___x_1110_, v_firstDay_1106_);
v___x_1112_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1113_ = lean_int_neg(v_localDay_1111_);
v___x_1114_ = lean_int_add(v___x_1112_, v___x_1113_);
lean_dec(v___x_1113_);
v___x_1115_ = l_Int_toNat(v_localDay_1111_);
lean_dec(v_localDay_1111_);
v___x_1116_ = lean_nat_to_int(v___x_1115_);
v___x_1117_ = lean_int_neg(v___x_1116_);
lean_dec(v___x_1116_);
v_dateDays_1118_ = l_Std_Time_PlainDate_toEpochDay(v___y_1109_);
v___x_1119_ = lean_int_add(v_dateDays_1118_, v___x_1117_);
lean_dec(v___x_1117_);
lean_dec(v_dateDays_1118_);
v_weekStart_1120_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1119_);
lean_dec(v___x_1119_);
v___x_1121_ = lean_int_dec_le(v_minimalDays_1107_, v___x_1114_);
lean_dec(v___x_1114_);
if (v___x_1121_ == 0)
{
lean_object* v_dateDays_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_dateDays_1122_ = l_Std_Time_PlainDate_toEpochDay(v_weekStart_1120_);
v___x_1123_ = lean_int_add(v_dateDays_1122_, v___x_1112_);
lean_dec(v_dateDays_1122_);
v___x_1124_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1123_);
lean_dec(v___x_1123_);
return v___x_1124_;
}
else
{
return v_weekStart_1120_;
}
}
v___jp_1133_:
{
lean_object* v_max_1135_; uint8_t v___x_1136_; 
v_max_1135_ = l_Std_Time_Month_Ordinal_days(v___y_1134_, v___x_1130_);
v___x_1136_ = lean_int_dec_lt(v_max_1135_, v___x_1132_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; 
lean_dec(v_max_1135_);
v___x_1137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1137_, 0, v_year_1105_);
lean_ctor_set(v___x_1137_, 1, v___x_1130_);
lean_ctor_set(v___x_1137_, 2, v___x_1132_);
v___y_1109_ = v___x_1137_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1138_; 
lean_dec(v___x_1132_);
v___x_1138_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1138_, 0, v_year_1105_);
lean_ctor_set(v___x_1138_, 1, v___x_1130_);
lean_ctor_set(v___x_1138_, 2, v_max_1135_);
v___y_1109_ = v___x_1138_;
goto v___jp_1108_;
}
}
v___jp_1143_:
{
if (v___x_1142_ == 0)
{
v___y_1134_ = v___x_1142_;
goto v___jp_1133_;
}
else
{
v___y_1134_ = v___y_1144_;
goto v___jp_1133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___boxed(lean_object* v_year_1152_, lean_object* v_firstDay_1153_, lean_object* v_minimalDays_1154_){
_start:
{
uint8_t v_firstDay_boxed_1155_; lean_object* v_res_1156_; 
v_firstDay_boxed_1155_ = lean_unbox(v_firstDay_1153_);
v_res_1156_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1152_, v_firstDay_boxed_1155_, v_minimalDays_1154_);
lean_dec(v_minimalDays_1154_);
return v_res_1156_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__0(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = lean_unsigned_to_nat(370u);
v___x_1158_ = lean_nat_to_int(v___x_1157_);
return v___x_1158_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__1(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1160_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__0, &l_Std_Time_PlainDate_weekOfYear___closed__0_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__0);
v___x_1161_ = lean_int_sub(v___x_1160_, v___x_1159_);
return v___x_1161_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__2(void){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v_range_1164_; 
v___x_1162_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1163_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__1, &l_Std_Time_PlainDate_weekOfYear___closed__1_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__1);
v_range_1164_ = lean_int_add(v___x_1163_, v___x_1162_);
return v_range_1164_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__3(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_unsigned_to_nat(52u);
v___x_1166_ = lean_nat_to_int(v___x_1165_);
return v___x_1166_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__4(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__3, &l_Std_Time_PlainDate_weekOfYear___closed__3_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__3);
v___x_1168_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1169_ = lean_int_add(v___x_1168_, v___x_1167_);
return v___x_1169_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__5(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1171_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__4, &l_Std_Time_PlainDate_weekOfYear___closed__4_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__4);
v___x_1172_ = lean_int_sub(v___x_1171_, v___x_1170_);
return v___x_1172_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__6(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v_range_1175_; 
v___x_1173_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1174_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__5, &l_Std_Time_PlainDate_weekOfYear___closed__5_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__5);
v_range_1175_ = lean_int_add(v___x_1174_, v___x_1173_);
return v_range_1175_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__7(void){
_start:
{
lean_object* v_range_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_range_1176_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1177_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_1178_ = lean_int_emod(v___x_1177_, v_range_1176_);
return v___x_1178_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__8(void){
_start:
{
lean_object* v_range_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v_range_1179_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1180_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__7, &l_Std_Time_PlainDate_weekOfYear___closed__7_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__7);
v___x_1181_ = lean_int_add(v___x_1180_, v_range_1179_);
return v___x_1181_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__9(void){
_start:
{
lean_object* v_range_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_range_1182_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1183_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__8, &l_Std_Time_PlainDate_weekOfYear___closed__8_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__8);
v___x_1184_ = lean_int_emod(v___x_1183_, v_range_1182_);
return v___x_1184_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__10(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1186_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__9, &l_Std_Time_PlainDate_weekOfYear___closed__9_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__9);
v___x_1187_ = lean_int_add(v___x_1186_, v___x_1185_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object* v_date_1188_, uint8_t v_firstDay_1189_, lean_object* v_minDaysBounded_1190_){
_start:
{
lean_object* v_year_1191_; lean_object* v_thisYearStart_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v_year_1191_ = lean_ctor_get(v_date_1188_, 0);
lean_inc_n(v_year_1191_, 2);
v_thisYearStart_1192_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1191_, v_firstDay_1189_, v_minDaysBounded_1190_);
v___x_1193_ = l_Std_Time_PlainDate_toEpochDay(v_date_1188_);
v___x_1194_ = l_Std_Time_PlainDate_toEpochDay(v_thisYearStart_1192_);
v___x_1195_ = lean_int_dec_lt(v___x_1193_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v_nextYearStart_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1196_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1197_ = lean_int_add(v_year_1191_, v___x_1196_);
lean_dec(v_year_1191_);
v_nextYearStart_1198_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1197_, v_firstDay_1189_, v_minDaysBounded_1190_);
v___x_1199_ = l_Std_Time_PlainDate_toEpochDay(v_nextYearStart_1198_);
v___x_1200_ = lean_int_dec_le(v___x_1199_, v___x_1193_);
lean_dec(v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_range_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1201_ = lean_int_sub(v___x_1193_, v___x_1194_);
lean_dec(v___x_1194_);
lean_dec(v___x_1193_);
v___x_1202_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v_range_1203_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__2, &l_Std_Time_PlainDate_weekOfYear___closed__2_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__2);
v___x_1204_ = lean_int_sub(v___x_1201_, v___x_1202_);
lean_dec(v___x_1201_);
v___x_1205_ = lean_int_emod(v___x_1204_, v_range_1203_);
lean_dec(v___x_1204_);
v___x_1206_ = lean_int_add(v___x_1205_, v_range_1203_);
lean_dec(v___x_1205_);
v___x_1207_ = lean_int_emod(v___x_1206_, v_range_1203_);
lean_dec(v___x_1206_);
v___x_1208_ = lean_int_add(v___x_1207_, v___x_1202_);
lean_dec(v___x_1207_);
v___x_1209_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1210_ = lean_int_ediv(v___x_1208_, v___x_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_int_add(v___x_1210_, v___x_1196_);
lean_dec(v___x_1210_);
return v___x_1211_;
}
else
{
lean_object* v___x_1212_; lean_object* v_toFun_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_dec(v___x_1194_);
lean_dec(v___x_1193_);
v___x_1212_ = l_Std_Time_Week_OfYear_Ordinal_equiv;
v_toFun_1213_ = lean_ctor_get(v___x_1212_, 0);
v___x_1214_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__10, &l_Std_Time_PlainDate_weekOfYear___closed__10_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__10);
lean_inc(v_toFun_1213_);
v___x_1215_ = lean_apply_1(v_toFun_1213_, v___x_1214_);
return v___x_1215_;
}
}
else
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_prevYearStart_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v_range_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec(v___x_1194_);
v___x_1216_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1217_ = lean_int_sub(v_year_1191_, v___x_1216_);
lean_dec(v_year_1191_);
v_prevYearStart_1218_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1217_, v_firstDay_1189_, v_minDaysBounded_1190_);
v___x_1219_ = l_Std_Time_PlainDate_toEpochDay(v_prevYearStart_1218_);
v___x_1220_ = lean_int_sub(v___x_1193_, v___x_1219_);
lean_dec(v___x_1219_);
lean_dec(v___x_1193_);
v___x_1221_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v_range_1222_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__2, &l_Std_Time_PlainDate_weekOfYear___closed__2_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__2);
v___x_1223_ = lean_int_sub(v___x_1220_, v___x_1221_);
lean_dec(v___x_1220_);
v___x_1224_ = lean_int_emod(v___x_1223_, v_range_1222_);
lean_dec(v___x_1223_);
v___x_1225_ = lean_int_add(v___x_1224_, v_range_1222_);
lean_dec(v___x_1224_);
v___x_1226_ = lean_int_emod(v___x_1225_, v_range_1222_);
lean_dec(v___x_1225_);
v___x_1227_ = lean_int_add(v___x_1226_, v___x_1221_);
lean_dec(v___x_1226_);
v___x_1228_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1229_ = lean_int_ediv(v___x_1227_, v___x_1228_);
lean_dec(v___x_1227_);
v___x_1230_ = lean_int_add(v___x_1229_, v___x_1216_);
lean_dec(v___x_1229_);
return v___x_1230_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear___boxed(lean_object* v_date_1231_, lean_object* v_firstDay_1232_, lean_object* v_minDaysBounded_1233_){
_start:
{
uint8_t v_firstDay_boxed_1234_; lean_object* v_res_1235_; 
v_firstDay_boxed_1234_ = lean_unbox(v_firstDay_1232_);
v_res_1235_ = l_Std_Time_PlainDate_weekOfYear(v_date_1231_, v_firstDay_boxed_1234_, v_minDaysBounded_1233_);
lean_dec(v_minDaysBounded_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear(lean_object* v_date_1236_, uint8_t v_firstDay_1237_, lean_object* v_minDays_1238_){
_start:
{
lean_object* v_year_1239_; lean_object* v_thisYearStart_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v_year_1239_ = lean_ctor_get(v_date_1236_, 0);
lean_inc_n(v_year_1239_, 2);
v_thisYearStart_1240_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1239_, v_firstDay_1237_, v_minDays_1238_);
v___x_1241_ = l_Std_Time_PlainDate_toEpochDay(v_date_1236_);
v___x_1242_ = l_Std_Time_PlainDate_toEpochDay(v_thisYearStart_1240_);
v___x_1243_ = lean_int_dec_lt(v___x_1241_, v___x_1242_);
lean_dec(v___x_1242_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_nextYearStart_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1244_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1245_ = lean_int_add(v_year_1239_, v___x_1244_);
lean_inc(v___x_1245_);
v_nextYearStart_1246_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1245_, v_firstDay_1237_, v_minDays_1238_);
v___x_1247_ = l_Std_Time_PlainDate_toEpochDay(v_nextYearStart_1246_);
v___x_1248_ = lean_int_dec_le(v___x_1247_, v___x_1241_);
lean_dec(v___x_1241_);
lean_dec(v___x_1247_);
if (v___x_1248_ == 0)
{
lean_dec(v___x_1245_);
return v_year_1239_;
}
else
{
lean_dec(v_year_1239_);
return v___x_1245_;
}
}
else
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec(v___x_1241_);
v___x_1249_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1250_ = lean_int_sub(v_year_1239_, v___x_1249_);
lean_dec(v_year_1239_);
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear___boxed(lean_object* v_date_1251_, lean_object* v_firstDay_1252_, lean_object* v_minDays_1253_){
_start:
{
uint8_t v_firstDay_boxed_1254_; lean_object* v_res_1255_; 
v_firstDay_boxed_1254_ = lean_unbox(v_firstDay_1252_);
v_res_1255_ = l_Std_Time_PlainDate_weekYear(v_date_1251_, v_firstDay_boxed_1254_, v_minDays_1253_);
lean_dec(v_minDays_1253_);
return v_res_1255_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Date_Unit_Year(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_PlainDate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Year(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedPlainDate = _init_l_Std_Time_instInhabitedPlainDate();
lean_mark_persistent(l_Std_Time_instInhabitedPlainDate);
l_Std_Time_instOrdPlainDate = _init_l_Std_Time_instOrdPlainDate();
lean_mark_persistent(l_Std_Time_instOrdPlainDate);
l_Std_Time_PlainDate_instInhabited = _init_l_Std_Time_PlainDate_instInhabited();
lean_mark_persistent(l_Std_Time_PlainDate_instInhabited);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_PlainDate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Basic(uint8_t builtin);
lean_object* initialize_Std_Time_Date_Unit_Month(uint8_t builtin);
lean_object* initialize_Std_Time_Date_Unit_Year(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_PlainDate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Date_Unit_Year(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_PlainDate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_PlainDate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_PlainDate(builtin);
}
#ifdef __cplusplus
}
#endif
