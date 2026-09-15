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
lean_object* l_Std_Time_Day_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Month_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
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
lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
lean_object* l_Std_Time_ValidDate_ofOrdinal(uint8_t, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t l_Std_Time_Year_Offset_era(lean_object*);
lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___redArg___boxed(lean_object*);
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
static lean_once_cell_t l_Std_Time_instInhabitedPlainDate___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainDate___closed__18;
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
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__4 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__4_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__5 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__5_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__3_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__0_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__6 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__6_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__4_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__1_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__7 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__7_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__5_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__2_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__8 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__8_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__7_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__8_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__9 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__9_value;
static const lean_closure_object l_Std_Time_instOrdPlainDate___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__6_value),((lean_object*)&l_Std_Time_instOrdPlainDate___closed__9_value)} };
static const lean_object* l_Std_Time_instOrdPlainDate___closed__10 = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__10_value;
LEAN_EXPORT const lean_object* l_Std_Time_instOrdPlainDate = (const lean_object*)&l_Std_Time_instOrdPlainDate___closed__10_value;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1;
static lean_once_cell_t l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_PlainDate_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainDate_instInhabited___closed__0;
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
lean_object* v_year_47_; lean_object* v_month_48_; lean_object* v_day_49_; lean_object* v___x_50_; lean_object* v___y_52_; lean_object* v___y_53_; lean_object* v___y_54_; lean_object* v___y_55_; uint8_t v___y_56_; lean_object* v___y_57_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___y_89_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v_year_47_ = lean_ctor_get(v_x_46_, 0);
v_month_48_ = lean_ctor_get(v_x_46_, 1);
v_day_49_ = lean_ctor_get(v_x_46_, 2);
v___x_50_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__5));
v___x_86_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__18));
v___x_87_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__19, &l_Std_Time_instReprPlainDate_repr___redArg___closed__19_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__19);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_112_ = lean_int_dec_lt(v_year_47_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = l_Int_repr(v_year_47_);
v___x_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
v___y_89_ = v___x_114_;
goto v___jp_88_;
}
else
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = l_Int_repr(v_year_47_);
v___x_116_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
v___x_117_ = l_Repr_addAppParen(v___x_116_, v___x_110_);
v___y_89_ = v___x_117_;
goto v___jp_88_;
}
v___jp_51_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
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
v___x_68_ = l_Std_Time_Day_instReprOrdinal___lam__0(v_day_49_, v___x_67_);
v___x_69_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_66_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___y_56_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_65_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___y_55_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___y_52_);
v___x_74_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__10));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_50_);
v___x_77_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__12));
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_76_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__15, &l_Std_Time_instReprPlainDate_repr___redArg___closed__15_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__15);
v___x_80_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__16));
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_78_);
v___x_82_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__17));
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_79_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___y_56_);
return v___x_85_;
}
v___jp_88_:
{
lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_90_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_87_);
lean_ctor_set(v___x_90_, 1, v___y_89_);
v___x_91_ = 0;
v___x_92_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set_uint8(v___x_92_, sizeof(void*)*1, v___x_91_);
v___x_93_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_86_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__21));
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_box(1);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_95_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = ((lean_object*)(l_Std_Time_instReprPlainDate_repr___redArg___closed__23));
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_50_);
v___x_101_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_104_ = lean_int_dec_lt(v_month_48_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = l_Int_repr(v_month_48_);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___y_52_ = v___x_96_;
v___y_53_ = v___x_100_;
v___y_54_ = v___x_101_;
v___y_55_ = v___x_94_;
v___y_56_ = v___x_91_;
v___y_57_ = v___x_106_;
goto v___jp_51_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = l_Int_repr(v_month_48_);
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v___x_102_);
v___y_52_ = v___x_96_;
v___y_53_ = v___x_100_;
v___y_54_ = v___x_101_;
v___y_55_ = v___x_94_;
v___y_56_ = v___x_91_;
v___y_57_ = v___x_109_;
goto v___jp_51_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___redArg___boxed(lean_object* v_x_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Std_Time_instReprPlainDate_repr___redArg(v_x_118_);
lean_dec_ref(v_x_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr(lean_object* v_x_120_, lean_object* v_prec_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Std_Time_instReprPlainDate_repr___redArg(v_x_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainDate_repr___boxed(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Std_Time_instReprPlainDate_repr(v_x_123_, v_prec_124_);
lean_dec(v_prec_124_);
lean_dec_ref(v_x_123_);
return v_res_125_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate_decEq(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
lean_object* v_year_130_; lean_object* v_month_131_; lean_object* v_day_132_; lean_object* v_year_133_; lean_object* v_month_134_; lean_object* v_day_135_; uint8_t v___x_136_; 
v_year_130_ = lean_ctor_get(v_x_128_, 0);
v_month_131_ = lean_ctor_get(v_x_128_, 1);
v_day_132_ = lean_ctor_get(v_x_128_, 2);
v_year_133_ = lean_ctor_get(v_x_129_, 0);
v_month_134_ = lean_ctor_get(v_x_129_, 1);
v_day_135_ = lean_ctor_get(v_x_129_, 2);
v___x_136_ = lean_int_dec_eq(v_year_130_, v_year_133_);
if (v___x_136_ == 0)
{
return v___x_136_;
}
else
{
uint8_t v___x_137_; 
v___x_137_ = lean_int_dec_eq(v_month_131_, v_month_134_);
if (v___x_137_ == 0)
{
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
v___x_138_ = lean_int_dec_eq(v_day_132_, v_day_135_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate_decEq___boxed(lean_object* v_x_139_, lean_object* v_x_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_x_139_, v_x_140_);
lean_dec_ref(v_x_140_);
lean_dec_ref(v_x_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainDate(lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
uint8_t v___x_145_; 
v___x_145_ = l_Std_Time_instDecidableEqPlainDate_decEq(v_x_143_, v_x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainDate___boxed(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Std_Time_instDecidableEqPlainDate(v_x_146_, v_x_147_);
lean_dec_ref(v_x_147_);
lean_dec_ref(v_x_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__0(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(1u);
v___x_151_ = lean_nat_to_int(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__1(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(11u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__2(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__1, &l_Std_Time_instInhabitedPlainDate___closed__1_once, _init_l_Std_Time_instInhabitedPlainDate___closed__1);
v___x_155_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_156_ = lean_int_add(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__3(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_158_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__2, &l_Std_Time_instInhabitedPlainDate___closed__2_once, _init_l_Std_Time_instInhabitedPlainDate___closed__2);
v___x_159_ = lean_int_sub(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__4(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v_range_162_; 
v___x_160_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_161_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__3, &l_Std_Time_instInhabitedPlainDate___closed__3_once, _init_l_Std_Time_instInhabitedPlainDate___closed__3);
v_range_162_ = lean_int_add(v___x_161_, v___x_160_);
return v_range_162_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__5(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_164_ = lean_int_sub(v___x_163_, v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__6(void){
_start:
{
lean_object* v_range_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_range_165_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_166_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_167_ = lean_int_emod(v___x_166_, v_range_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__7(void){
_start:
{
lean_object* v_range_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_range_168_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_169_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__6, &l_Std_Time_instInhabitedPlainDate___closed__6_once, _init_l_Std_Time_instInhabitedPlainDate___closed__6);
v___x_170_ = lean_int_add(v___x_169_, v_range_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__8(void){
_start:
{
lean_object* v_range_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_range_171_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__4, &l_Std_Time_instInhabitedPlainDate___closed__4_once, _init_l_Std_Time_instInhabitedPlainDate___closed__4);
v___x_172_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__7, &l_Std_Time_instInhabitedPlainDate___closed__7_once, _init_l_Std_Time_instInhabitedPlainDate___closed__7);
v___x_173_ = lean_int_emod(v___x_172_, v_range_171_);
return v___x_173_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__9(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_175_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__8, &l_Std_Time_instInhabitedPlainDate___closed__8_once, _init_l_Std_Time_instInhabitedPlainDate___closed__8);
v___x_176_ = lean_int_add(v___x_175_, v___x_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__10(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_unsigned_to_nat(30u);
v___x_178_ = lean_nat_to_int(v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__11(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__10, &l_Std_Time_instInhabitedPlainDate___closed__10_once, _init_l_Std_Time_instInhabitedPlainDate___closed__10);
v___x_180_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_181_ = lean_int_add(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__12(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_183_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__11, &l_Std_Time_instInhabitedPlainDate___closed__11_once, _init_l_Std_Time_instInhabitedPlainDate___closed__11);
v___x_184_ = lean_int_sub(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__13(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v_range_187_; 
v___x_185_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_186_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__12, &l_Std_Time_instInhabitedPlainDate___closed__12_once, _init_l_Std_Time_instInhabitedPlainDate___closed__12);
v_range_187_ = lean_int_add(v___x_186_, v___x_185_);
return v_range_187_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__14(void){
_start:
{
lean_object* v_range_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_range_188_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_189_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_190_ = lean_int_emod(v___x_189_, v_range_188_);
return v___x_190_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__15(void){
_start:
{
lean_object* v_range_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_range_191_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_192_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__14, &l_Std_Time_instInhabitedPlainDate___closed__14_once, _init_l_Std_Time_instInhabitedPlainDate___closed__14);
v___x_193_ = lean_int_add(v___x_192_, v_range_191_);
return v___x_193_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__16(void){
_start:
{
lean_object* v_range_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_range_194_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__13, &l_Std_Time_instInhabitedPlainDate___closed__13_once, _init_l_Std_Time_instInhabitedPlainDate___closed__13);
v___x_195_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__15, &l_Std_Time_instInhabitedPlainDate___closed__15_once, _init_l_Std_Time_instInhabitedPlainDate___closed__15);
v___x_196_ = lean_int_emod(v___x_195_, v_range_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__17(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_198_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__16, &l_Std_Time_instInhabitedPlainDate___closed__16_once, _init_l_Std_Time_instInhabitedPlainDate___closed__16);
v___x_199_ = lean_int_add(v___x_198_, v___x_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate___closed__18(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_200_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__17, &l_Std_Time_instInhabitedPlainDate___closed__17_once, _init_l_Std_Time_instInhabitedPlainDate___closed__17);
v___x_201_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__9, &l_Std_Time_instInhabitedPlainDate___closed__9_once, _init_l_Std_Time_instInhabitedPlainDate___closed__9);
v___x_202_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_201_);
lean_ctor_set(v___x_203_, 2, v___x_200_);
return v___x_203_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainDate(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__18, &l_Std_Time_instInhabitedPlainDate___closed__18_once, _init_l_Std_Time_instInhabitedPlainDate___closed__18);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0(lean_object* v_x_205_){
_start:
{
lean_object* v_year_206_; 
v_year_206_ = lean_ctor_get(v_x_205_, 0);
lean_inc(v_year_206_);
return v_year_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__0___boxed(lean_object* v_x_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Std_Time_instOrdPlainDate___lam__0(v_x_207_);
lean_dec_ref(v_x_207_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1(lean_object* v_x_209_){
_start:
{
lean_object* v_month_210_; 
v_month_210_ = lean_ctor_get(v_x_209_, 1);
lean_inc(v_month_210_);
return v_month_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__1___boxed(lean_object* v_x_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Std_Time_instOrdPlainDate___lam__1(v_x_211_);
lean_dec_ref(v_x_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2(lean_object* v_x_213_){
_start:
{
lean_object* v_day_214_; 
v_day_214_ = lean_ctor_get(v_x_213_, 2);
lean_inc(v_day_214_);
return v_day_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainDate___lam__2___boxed(lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Std_Time_instOrdPlainDate___lam__2(v_x_215_);
lean_dec_ref(v_x_215_);
return v_res_216_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(4u);
v___x_240_ = lean_nat_to_int(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_unsigned_to_nat(100u);
v___x_242_ = lean_nat_to_int(v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(400u);
v___x_244_ = lean_nat_to_int(v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDayClip(lean_object* v_year_245_, lean_object* v_month_246_, lean_object* v_day_247_){
_start:
{
uint8_t v___y_249_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; uint8_t v___y_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_254_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_255_ = lean_int_mod(v_year_245_, v___x_254_);
v___x_256_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_257_ = lean_int_dec_eq(v___x_255_, v___x_256_);
lean_dec(v___x_255_);
v___x_260_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_261_ = lean_int_mod(v_year_245_, v___x_260_);
v___x_262_ = lean_int_dec_eq(v___x_261_, v___x_256_);
lean_dec(v___x_261_);
if (v___x_262_ == 0)
{
uint8_t v___x_263_; 
v___x_263_ = 1;
v___y_259_ = v___x_263_;
goto v___jp_258_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_264_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_265_ = lean_int_mod(v_year_245_, v___x_264_);
v___x_266_ = lean_int_dec_eq(v___x_265_, v___x_256_);
lean_dec(v___x_265_);
v___y_259_ = v___x_266_;
goto v___jp_258_;
}
v___jp_248_:
{
lean_object* v_max_250_; uint8_t v___x_251_; 
v_max_250_ = l_Std_Time_Month_Ordinal_days(v___y_249_, v_month_246_);
v___x_251_ = lean_int_dec_lt(v_max_250_, v_day_247_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
lean_dec(v_max_250_);
v___x_252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_252_, 0, v_year_245_);
lean_ctor_set(v___x_252_, 1, v_month_246_);
lean_ctor_set(v___x_252_, 2, v_day_247_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; 
lean_dec(v_day_247_);
v___x_253_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_253_, 0, v_year_245_);
lean_ctor_set(v___x_253_, 1, v_month_246_);
lean_ctor_set(v___x_253_, 2, v_max_250_);
return v___x_253_;
}
}
v___jp_258_:
{
if (v___x_257_ == 0)
{
v___y_249_ = v___x_257_;
goto v___jp_248_;
}
else
{
v___y_249_ = v___y_259_;
goto v___jp_248_;
}
}
}
}
static lean_object* _init_l_Std_Time_PlainDate_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_267_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__17, &l_Std_Time_instInhabitedPlainDate___closed__17_once, _init_l_Std_Time_instInhabitedPlainDate___closed__17);
v___x_268_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__9, &l_Std_Time_instInhabitedPlainDate___closed__9_once, _init_l_Std_Time_instInhabitedPlainDate___closed__9);
v___x_269_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_270_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_268_);
lean_ctor_set(v___x_270_, 2, v___x_267_);
return v___x_270_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_instInhabited(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_obj_once(&l_Std_Time_PlainDate_instInhabited___closed__0, &l_Std_Time_PlainDate_instInhabited___closed__0_once, _init_l_Std_Time_PlainDate_instInhabited___closed__0);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearMonthDay_x3f(lean_object* v_year_272_, lean_object* v_month_273_, lean_object* v_day_274_){
_start:
{
uint8_t v___y_276_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; uint8_t v___y_287_; lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_282_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_283_ = lean_int_mod(v_year_272_, v___x_282_);
v___x_284_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_285_ = lean_int_dec_eq(v___x_283_, v___x_284_);
lean_dec(v___x_283_);
v___x_288_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_289_ = lean_int_mod(v_year_272_, v___x_288_);
v___x_290_ = lean_int_dec_eq(v___x_289_, v___x_284_);
lean_dec(v___x_289_);
if (v___x_290_ == 0)
{
uint8_t v___x_291_; 
v___x_291_ = 1;
v___y_287_ = v___x_291_;
goto v___jp_286_;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_292_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_293_ = lean_int_mod(v_year_272_, v___x_292_);
v___x_294_ = lean_int_dec_eq(v___x_293_, v___x_284_);
lean_dec(v___x_293_);
v___y_287_ = v___x_294_;
goto v___jp_286_;
}
v___jp_275_:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = l_Std_Time_Month_Ordinal_days(v___y_276_, v_month_273_);
v___x_278_ = lean_int_dec_le(v_day_274_, v___x_277_);
lean_dec(v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
lean_dec(v_day_274_);
lean_dec(v_month_273_);
lean_dec(v_year_272_);
v___x_279_ = lean_box(0);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_280_, 0, v_year_272_);
lean_ctor_set(v___x_280_, 1, v_month_273_);
lean_ctor_set(v___x_280_, 2, v_day_274_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
v___jp_286_:
{
if (v___x_285_ == 0)
{
v___y_276_ = v___x_285_;
goto v___jp_275_;
}
else
{
v___y_276_ = v___y_287_;
goto v___jp_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal(lean_object* v_year_295_, lean_object* v_ordinal_296_){
_start:
{
uint8_t v___y_298_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; uint8_t v___y_308_; lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_303_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_304_ = lean_int_mod(v_year_295_, v___x_303_);
v___x_305_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_306_ = lean_int_dec_eq(v___x_304_, v___x_305_);
lean_dec(v___x_304_);
v___x_309_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_310_ = lean_int_mod(v_year_295_, v___x_309_);
v___x_311_ = lean_int_dec_eq(v___x_310_, v___x_305_);
lean_dec(v___x_310_);
if (v___x_311_ == 0)
{
uint8_t v___x_312_; 
v___x_312_ = 1;
v___y_308_ = v___x_312_;
goto v___jp_307_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_313_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_314_ = lean_int_mod(v_year_295_, v___x_313_);
v___x_315_ = lean_int_dec_eq(v___x_314_, v___x_305_);
lean_dec(v___x_314_);
v___y_308_ = v___x_315_;
goto v___jp_307_;
}
v___jp_297_:
{
lean_object* v_val_299_; lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v___x_302_; 
v_val_299_ = l_Std_Time_ValidDate_ofOrdinal(v___y_298_, v_ordinal_296_);
v_fst_300_ = lean_ctor_get(v_val_299_, 0);
lean_inc(v_fst_300_);
v_snd_301_ = lean_ctor_get(v_val_299_, 1);
lean_inc(v_snd_301_);
lean_dec_ref(v_val_299_);
v___x_302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_302_, 0, v_year_295_);
lean_ctor_set(v___x_302_, 1, v_fst_300_);
lean_ctor_set(v___x_302_, 2, v_snd_301_);
return v___x_302_;
}
v___jp_307_:
{
if (v___x_306_ == 0)
{
v___y_298_ = v___x_306_;
goto v___jp_297_;
}
else
{
v___y_298_ = v___y_308_;
goto v___jp_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofYearOrdinal___boxed(lean_object* v_year_316_, lean_object* v_ordinal_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Std_Time_PlainDate_ofYearOrdinal(v_year_316_, v_ordinal_317_);
lean_dec(v_ordinal_317_);
return v_res_318_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__0(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(719468u);
v___x_320_ = lean_nat_to_int(v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__1(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(31u);
v___x_322_ = lean_nat_to_int(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__2(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_unsigned_to_nat(12u);
v___x_324_ = lean_nat_to_int(v___x_323_);
return v___x_324_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__3(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(146097u);
v___x_326_ = lean_nat_to_int(v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__4(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(1460u);
v___x_328_ = lean_nat_to_int(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__5(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(36524u);
v___x_330_ = lean_nat_to_int(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__6(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(146096u);
v___x_332_ = lean_nat_to_int(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__7(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_unsigned_to_nat(365u);
v___x_334_ = lean_nat_to_int(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__8(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(5u);
v___x_336_ = lean_nat_to_int(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__9(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(2u);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__10(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(153u);
v___x_340_ = lean_nat_to_int(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__11(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_unsigned_to_nat(10u);
v___x_342_ = lean_nat_to_int(v___x_341_);
return v___x_342_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__12(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
v___x_344_ = lean_int_neg(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_ofEpochDay___closed__13(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(3u);
v___x_346_ = lean_nat_to_int(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object* v_day_347_){
_start:
{
lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___y_351_; uint8_t v___y_352_; lean_object* v___y_358_; uint8_t v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; uint8_t v___y_362_; lean_object* v___x_363_; lean_object* v_z_364_; lean_object* v___x_365_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_417_; uint8_t v___x_460_; 
v___x_363_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__0, &l_Std_Time_PlainDate_ofEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__0);
v_z_364_ = lean_int_add(v_day_347_, v___x_363_);
v___x_365_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_460_ = lean_int_dec_le(v___x_365_, v_z_364_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__6, &l_Std_Time_PlainDate_ofEpochDay___closed__6_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__6);
v___x_462_ = lean_int_sub(v_z_364_, v___x_461_);
v___y_417_ = v___x_462_;
goto v___jp_416_;
}
else
{
lean_inc(v_z_364_);
v___y_417_ = v_z_364_;
goto v___jp_416_;
}
v___jp_348_:
{
lean_object* v_max_353_; uint8_t v___x_354_; 
v_max_353_ = l_Std_Time_Month_Ordinal_days(v___y_352_, v___y_349_);
v___x_354_ = lean_int_dec_lt(v_max_353_, v___y_351_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
lean_dec(v_max_353_);
v___x_355_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_355_, 0, v___y_350_);
lean_ctor_set(v___x_355_, 1, v___y_349_);
lean_ctor_set(v___x_355_, 2, v___y_351_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; 
lean_dec(v___y_351_);
v___x_356_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_356_, 0, v___y_350_);
lean_ctor_set(v___x_356_, 1, v___y_349_);
lean_ctor_set(v___x_356_, 2, v_max_353_);
return v___x_356_;
}
}
v___jp_357_:
{
if (v___y_359_ == 0)
{
v___y_349_ = v___y_358_;
v___y_350_ = v___y_360_;
v___y_351_ = v___y_361_;
v___y_352_ = v___y_359_;
goto v___jp_348_;
}
else
{
v___y_349_ = v___y_358_;
v___y_350_ = v___y_360_;
v___y_351_ = v___y_361_;
v___y_352_ = v___y_362_;
goto v___jp_348_;
}
}
v___jp_366_:
{
lean_object* v___x_373_; uint8_t v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_373_ = lean_int_mod(v___y_369_, v___y_371_);
v___x_374_ = lean_int_dec_eq(v___x_373_, v___x_365_);
lean_dec(v___x_373_);
v___x_375_ = lean_int_mod(v___y_369_, v___y_370_);
v___x_376_ = lean_int_dec_eq(v___x_375_, v___x_365_);
lean_dec(v___x_375_);
if (v___x_376_ == 0)
{
uint8_t v___x_377_; 
v___x_377_ = 1;
v___y_358_ = v___y_367_;
v___y_359_ = v___x_374_;
v___y_360_ = v___y_369_;
v___y_361_ = v___y_372_;
v___y_362_ = v___x_377_;
goto v___jp_357_;
}
else
{
lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_378_ = lean_int_mod(v___y_369_, v___y_368_);
v___x_379_ = lean_int_dec_eq(v___x_378_, v___x_365_);
lean_dec(v___x_378_);
v___y_358_ = v___y_367_;
v___y_359_ = v___x_374_;
v___y_360_ = v___y_369_;
v___y_361_ = v___y_372_;
v___y_362_ = v___x_379_;
goto v___jp_357_;
}
}
v___jp_380_:
{
uint8_t v___x_388_; 
v___x_388_ = lean_int_dec_le(v___y_384_, v___y_381_);
if (v___x_388_ == 0)
{
lean_dec(v___y_381_);
lean_inc(v___y_384_);
v___y_367_ = v___y_387_;
v___y_368_ = v___y_382_;
v___y_369_ = v___y_383_;
v___y_370_ = v___y_386_;
v___y_371_ = v___y_385_;
v___y_372_ = v___y_384_;
goto v___jp_366_;
}
else
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__1, &l_Std_Time_PlainDate_ofEpochDay___closed__1_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__1);
v___x_390_ = lean_int_dec_le(v___y_381_, v___x_389_);
if (v___x_390_ == 0)
{
lean_dec(v___y_381_);
v___y_367_ = v___y_387_;
v___y_368_ = v___y_382_;
v___y_369_ = v___y_383_;
v___y_370_ = v___y_386_;
v___y_371_ = v___y_385_;
v___y_372_ = v___x_389_;
goto v___jp_366_;
}
else
{
v___y_367_ = v___y_387_;
v___y_368_ = v___y_382_;
v___y_369_ = v___y_383_;
v___y_370_ = v___y_386_;
v___y_371_ = v___y_385_;
v___y_372_ = v___y_381_;
goto v___jp_366_;
}
}
}
v___jp_391_:
{
lean_object* v_y_400_; uint8_t v___x_401_; 
v_y_400_ = lean_int_add(v___y_395_, v___y_399_);
lean_dec(v___y_395_);
v___x_401_ = lean_int_dec_le(v___y_396_, v___y_393_);
if (v___x_401_ == 0)
{
lean_dec(v___y_393_);
lean_inc(v___y_396_);
v___y_381_ = v___y_392_;
v___y_382_ = v___y_394_;
v___y_383_ = v_y_400_;
v___y_384_ = v___y_396_;
v___y_385_ = v___y_398_;
v___y_386_ = v___y_397_;
v___y_387_ = v___y_396_;
goto v___jp_380_;
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_403_ = lean_int_dec_le(v___y_393_, v___x_402_);
if (v___x_403_ == 0)
{
lean_dec(v___y_393_);
v___y_381_ = v___y_392_;
v___y_382_ = v___y_394_;
v___y_383_ = v_y_400_;
v___y_384_ = v___y_396_;
v___y_385_ = v___y_398_;
v___y_386_ = v___y_397_;
v___y_387_ = v___x_402_;
goto v___jp_380_;
}
else
{
v___y_381_ = v___y_392_;
v___y_382_ = v___y_394_;
v___y_383_ = v_y_400_;
v___y_384_ = v___y_396_;
v___y_385_ = v___y_398_;
v___y_386_ = v___y_397_;
v___y_387_ = v___y_393_;
goto v___jp_380_;
}
}
}
v___jp_404_:
{
lean_object* v_m_414_; uint8_t v___x_415_; 
v_m_414_ = lean_int_add(v___y_406_, v___y_413_);
lean_dec(v___y_406_);
v___x_415_ = lean_int_dec_le(v_m_414_, v___y_408_);
if (v___x_415_ == 0)
{
v___y_392_ = v___y_405_;
v___y_393_ = v_m_414_;
v___y_394_ = v___y_407_;
v___y_395_ = v___y_409_;
v___y_396_ = v___y_410_;
v___y_397_ = v___y_412_;
v___y_398_ = v___y_411_;
v___y_399_ = v___x_365_;
goto v___jp_391_;
}
else
{
v___y_392_ = v___y_405_;
v___y_393_ = v_m_414_;
v___y_394_ = v___y_407_;
v___y_395_ = v___y_409_;
v___y_396_ = v___y_410_;
v___y_397_ = v___y_412_;
v___y_398_ = v___y_411_;
v___y_399_ = v___y_410_;
goto v___jp_391_;
}
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v_era_419_; lean_object* v___x_420_; lean_object* v_doe_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v_yoe_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_y_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v_doy_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_mp_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v_d_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_418_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__3, &l_Std_Time_PlainDate_ofEpochDay___closed__3_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__3);
v_era_419_ = lean_int_div(v___y_417_, v___x_418_);
lean_dec(v___y_417_);
v___x_420_ = lean_int_mul(v_era_419_, v___x_418_);
v_doe_421_ = lean_int_sub(v_z_364_, v___x_420_);
lean_dec(v___x_420_);
lean_dec(v_z_364_);
v___x_422_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__4, &l_Std_Time_PlainDate_ofEpochDay___closed__4_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__4);
v___x_423_ = lean_int_div(v_doe_421_, v___x_422_);
v___x_424_ = lean_int_sub(v_doe_421_, v___x_423_);
lean_dec(v___x_423_);
v___x_425_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__5, &l_Std_Time_PlainDate_ofEpochDay___closed__5_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__5);
v___x_426_ = lean_int_div(v_doe_421_, v___x_425_);
v___x_427_ = lean_int_add(v___x_424_, v___x_426_);
lean_dec(v___x_426_);
lean_dec(v___x_424_);
v___x_428_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__6, &l_Std_Time_PlainDate_ofEpochDay___closed__6_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__6);
v___x_429_ = lean_int_div(v_doe_421_, v___x_428_);
v___x_430_ = lean_int_sub(v___x_427_, v___x_429_);
lean_dec(v___x_429_);
lean_dec(v___x_427_);
v___x_431_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__7, &l_Std_Time_PlainDate_ofEpochDay___closed__7_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__7);
v_yoe_432_ = lean_int_div(v___x_430_, v___x_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_434_ = lean_int_mul(v_era_419_, v___x_433_);
lean_dec(v_era_419_);
v_y_435_ = lean_int_add(v_yoe_432_, v___x_434_);
lean_dec(v___x_434_);
v___x_436_ = lean_int_mul(v___x_431_, v_yoe_432_);
v___x_437_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_438_ = lean_int_div(v_yoe_432_, v___x_437_);
v___x_439_ = lean_int_add(v___x_436_, v___x_438_);
lean_dec(v___x_438_);
lean_dec(v___x_436_);
v___x_440_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_441_ = lean_int_div(v_yoe_432_, v___x_440_);
lean_dec(v_yoe_432_);
v___x_442_ = lean_int_sub(v___x_439_, v___x_441_);
lean_dec(v___x_441_);
lean_dec(v___x_439_);
v_doy_443_ = lean_int_sub(v_doe_421_, v___x_442_);
lean_dec(v___x_442_);
lean_dec(v_doe_421_);
v___x_444_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_445_ = lean_int_mul(v___x_444_, v_doy_443_);
v___x_446_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__9, &l_Std_Time_PlainDate_ofEpochDay___closed__9_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__9);
v___x_447_ = lean_int_add(v___x_445_, v___x_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__10, &l_Std_Time_PlainDate_ofEpochDay___closed__10_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__10);
v_mp_449_ = lean_int_div(v___x_447_, v___x_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_int_mul(v___x_448_, v_mp_449_);
v___x_451_ = lean_int_add(v___x_450_, v___x_446_);
lean_dec(v___x_450_);
v___x_452_ = lean_int_div(v___x_451_, v___x_444_);
lean_dec(v___x_451_);
v___x_453_ = lean_int_sub(v_doy_443_, v___x_452_);
lean_dec(v___x_452_);
lean_dec(v_doy_443_);
v___x_454_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_d_455_ = lean_int_add(v___x_453_, v___x_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__11, &l_Std_Time_PlainDate_ofEpochDay___closed__11_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__11);
v___x_457_ = lean_int_dec_lt(v_mp_449_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__12, &l_Std_Time_PlainDate_ofEpochDay___closed__12_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__12);
v___y_405_ = v_d_455_;
v___y_406_ = v_mp_449_;
v___y_407_ = v___x_433_;
v___y_408_ = v___x_446_;
v___y_409_ = v_y_435_;
v___y_410_ = v___x_454_;
v___y_411_ = v___x_437_;
v___y_412_ = v___x_440_;
v___y_413_ = v___x_458_;
goto v___jp_404_;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__13, &l_Std_Time_PlainDate_ofEpochDay___closed__13_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__13);
v___y_405_ = v_d_455_;
v___y_406_ = v_mp_449_;
v___y_407_ = v___x_433_;
v___y_408_ = v___x_446_;
v___y_409_ = v_y_435_;
v___y_410_ = v___x_454_;
v___y_411_ = v___x_437_;
v___y_412_ = v___x_440_;
v___y_413_ = v___x_459_;
goto v___jp_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_ofEpochDay___boxed(lean_object* v_day_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Std_Time_PlainDate_ofEpochDay(v_day_463_);
lean_dec(v_day_463_);
return v_res_464_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_466_ = lean_int_neg(v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth(lean_object* v_date_467_){
_start:
{
lean_object* v_day_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_day_468_ = lean_ctor_get(v_date_467_, 2);
v___x_469_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_470_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_471_ = lean_obj_once(&l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0, &l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0_once, _init_l_Std_Time_PlainDate_alignedWeekOfMonth___closed__0);
v___x_472_ = lean_int_add(v_day_468_, v___x_471_);
v___x_473_ = lean_int_ediv(v___x_472_, v___x_470_);
lean_dec(v___x_472_);
v___x_474_ = lean_int_add(v___x_473_, v___x_469_);
lean_dec(v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_alignedWeekOfMonth___boxed(lean_object* v_date_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Std_Time_PlainDate_alignedWeekOfMonth(v_date_475_);
lean_dec_ref(v_date_475_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter(lean_object* v_date_477_){
_start:
{
lean_object* v_month_478_; lean_object* v___x_479_; 
v_month_478_ = lean_ctor_get(v_date_477_, 1);
v___x_479_ = l_Std_Time_Month_Quarter_ofMonth(v_month_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_quarter___boxed(lean_object* v_date_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Std_Time_PlainDate_quarter(v_date_480_);
lean_dec_ref(v_date_480_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear(lean_object* v_date_482_){
_start:
{
lean_object* v_year_483_; lean_object* v_month_484_; lean_object* v_day_485_; uint8_t v___y_487_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; uint8_t v___y_495_; lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; 
v_year_483_ = lean_ctor_get(v_date_482_, 0);
v_month_484_ = lean_ctor_get(v_date_482_, 1);
v_day_485_ = lean_ctor_get(v_date_482_, 2);
v___x_490_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_491_ = lean_int_mod(v_year_483_, v___x_490_);
v___x_492_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_493_ = lean_int_dec_eq(v___x_491_, v___x_492_);
lean_dec(v___x_491_);
v___x_496_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_497_ = lean_int_mod(v_year_483_, v___x_496_);
v___x_498_ = lean_int_dec_eq(v___x_497_, v___x_492_);
lean_dec(v___x_497_);
if (v___x_498_ == 0)
{
uint8_t v___x_499_; 
v___x_499_ = 1;
v___y_495_ = v___x_499_;
goto v___jp_494_;
}
else
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_500_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_501_ = lean_int_mod(v_year_483_, v___x_500_);
v___x_502_ = lean_int_dec_eq(v___x_501_, v___x_492_);
lean_dec(v___x_501_);
v___y_495_ = v___x_502_;
goto v___jp_494_;
}
v___jp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_inc(v_day_485_);
lean_inc(v_month_484_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v_month_484_);
lean_ctor_set(v___x_488_, 1, v_day_485_);
v___x_489_ = l_Std_Time_ValidDate_dayOfYear(v___y_487_, v___x_488_);
lean_dec_ref_known(v___x_488_, 2);
return v___x_489_;
}
v___jp_494_:
{
if (v___x_493_ == 0)
{
v___y_487_ = v___x_493_;
goto v___jp_486_;
}
else
{
v___y_487_ = v___y_495_;
goto v___jp_486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_dayOfYear___boxed(lean_object* v_date_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Std_Time_PlainDate_dayOfYear(v_date_503_);
lean_dec_ref(v_date_503_);
return v_res_504_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_era(lean_object* v_date_505_){
_start:
{
lean_object* v_year_506_; uint8_t v___x_507_; 
v_year_506_ = lean_ctor_get(v_date_505_, 0);
v___x_507_ = l_Std_Time_Year_Offset_era(v_year_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_era___boxed(lean_object* v_date_508_){
_start:
{
uint8_t v_res_509_; lean_object* v_r_510_; 
v_res_509_ = l_Std_Time_PlainDate_era(v_date_508_);
lean_dec_ref(v_date_508_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_inLeapYear(lean_object* v_date_511_){
_start:
{
lean_object* v_year_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v_year_512_ = lean_ctor_get(v_date_511_, 0);
v___x_513_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_514_ = lean_int_mod(v_year_512_, v___x_513_);
v___x_515_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_516_ = lean_int_dec_eq(v___x_514_, v___x_515_);
lean_dec(v___x_514_);
v___x_517_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_518_ = lean_int_mod(v_year_512_, v___x_517_);
v___x_519_ = lean_int_dec_eq(v___x_518_, v___x_515_);
lean_dec(v___x_518_);
if (v___x_519_ == 0)
{
return v___x_516_;
}
else
{
if (v___x_516_ == 0)
{
return v___x_516_;
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_520_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_521_ = lean_int_mod(v_year_512_, v___x_520_);
v___x_522_ = lean_int_dec_eq(v___x_521_, v___x_515_);
lean_dec(v___x_521_);
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_inLeapYear___boxed(lean_object* v_date_523_){
_start:
{
uint8_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = l_Std_Time_PlainDate_inLeapYear(v_date_523_);
lean_dec_ref(v_date_523_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_toEpochDay___closed__0(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__13, &l_Std_Time_PlainDate_ofEpochDay___closed__13_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__13);
v___x_527_ = lean_int_neg(v___x_526_);
return v___x_527_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_toEpochDay___closed__1(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_unsigned_to_nat(399u);
v___x_529_ = lean_nat_to_int(v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_toEpochDay(lean_object* v_date_530_){
_start:
{
lean_object* v_year_531_; lean_object* v_month_532_; lean_object* v_day_533_; lean_object* v___x_534_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_574_; uint8_t v___x_579_; 
v_year_531_ = lean_ctor_get(v_date_530_, 0);
lean_inc(v_year_531_);
v_month_532_ = lean_ctor_get(v_date_530_, 1);
lean_inc(v_month_532_);
v_day_533_ = lean_ctor_get(v_date_530_, 2);
lean_inc(v_day_533_);
lean_dec_ref(v_date_530_);
v___x_534_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__9, &l_Std_Time_PlainDate_ofEpochDay___closed__9_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__9);
v___x_579_ = lean_int_dec_lt(v___x_534_, v_month_532_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_581_ = lean_int_sub(v_year_531_, v___x_580_);
lean_dec(v_year_531_);
v___y_574_ = v___x_581_;
goto v___jp_573_;
}
else
{
v___y_574_ = v_year_531_;
goto v___jp_573_;
}
v___jp_535_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v_doy_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_doe_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_540_ = lean_int_add(v_month_532_, v___y_539_);
lean_dec(v_month_532_);
v___x_541_ = lean_int_mul(v___y_538_, v___x_540_);
lean_dec(v___x_540_);
v___x_542_ = lean_int_add(v___x_541_, v___x_534_);
lean_dec(v___x_541_);
v___x_543_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_544_ = lean_int_div(v___x_542_, v___x_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_int_add(v___x_544_, v_day_533_);
lean_dec(v_day_533_);
lean_dec(v___x_544_);
v___x_546_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_doy_547_ = lean_int_sub(v___x_545_, v___x_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__7, &l_Std_Time_PlainDate_ofEpochDay___closed__7_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__7);
v___x_549_ = lean_int_mul(v___y_537_, v___x_548_);
v___x_550_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_551_ = lean_int_div(v___y_537_, v___x_550_);
v___x_552_ = lean_int_add(v___x_549_, v___x_551_);
lean_dec(v___x_551_);
lean_dec(v___x_549_);
v___x_553_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_554_ = lean_int_div(v___y_537_, v___x_553_);
lean_dec(v___y_537_);
v___x_555_ = lean_int_sub(v___x_552_, v___x_554_);
lean_dec(v___x_554_);
lean_dec(v___x_552_);
v_doe_556_ = lean_int_add(v___x_555_, v_doy_547_);
lean_dec(v_doy_547_);
lean_dec(v___x_555_);
v___x_557_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__3, &l_Std_Time_PlainDate_ofEpochDay___closed__3_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__3);
v___x_558_ = lean_int_mul(v___y_536_, v___x_557_);
lean_dec(v___y_536_);
v___x_559_ = lean_int_add(v___x_558_, v_doe_556_);
lean_dec(v_doe_556_);
lean_dec(v___x_558_);
v___x_560_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__0, &l_Std_Time_PlainDate_ofEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__0);
v___x_561_ = lean_int_sub(v___x_559_, v___x_560_);
lean_dec(v___x_559_);
return v___x_561_;
}
v___jp_562_:
{
lean_object* v___x_565_; lean_object* v_era_566_; lean_object* v___x_567_; lean_object* v_yoe_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_565_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v_era_566_ = lean_int_div(v___y_564_, v___x_565_);
lean_dec(v___y_564_);
v___x_567_ = lean_int_mul(v_era_566_, v___x_565_);
v_yoe_568_ = lean_int_sub(v___y_563_, v___x_567_);
lean_dec(v___x_567_);
lean_dec(v___y_563_);
v___x_569_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__10, &l_Std_Time_PlainDate_ofEpochDay___closed__10_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__10);
v___x_570_ = lean_int_dec_lt(v___x_534_, v_month_532_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__24, &l_Std_Time_instReprPlainDate_repr___redArg___closed__24_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__24);
v___y_536_ = v_era_566_;
v___y_537_ = v_yoe_568_;
v___y_538_ = v___x_569_;
v___y_539_ = v___x_571_;
goto v___jp_535_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = lean_obj_once(&l_Std_Time_PlainDate_toEpochDay___closed__0, &l_Std_Time_PlainDate_toEpochDay___closed__0_once, _init_l_Std_Time_PlainDate_toEpochDay___closed__0);
v___y_536_ = v_era_566_;
v___y_537_ = v_yoe_568_;
v___y_538_ = v___x_569_;
v___y_539_ = v___x_572_;
goto v___jp_535_;
}
}
v___jp_573_:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_576_ = lean_int_dec_le(v___x_575_, v___y_574_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_obj_once(&l_Std_Time_PlainDate_toEpochDay___closed__1, &l_Std_Time_PlainDate_toEpochDay___closed__1_once, _init_l_Std_Time_PlainDate_toEpochDay___closed__1);
v___x_578_ = lean_int_sub(v___y_574_, v___x_577_);
v___y_563_ = v___y_574_;
v___y_564_ = v___x_578_;
goto v___jp_562_;
}
else
{
lean_inc(v___y_574_);
v___y_563_ = v___y_574_;
v___y_564_ = v___y_574_;
goto v___jp_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays(lean_object* v_date_582_, lean_object* v_days_583_){
_start:
{
lean_object* v_dateDays_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_dateDays_584_ = l_Std_Time_PlainDate_toEpochDay(v_date_582_);
v___x_585_ = lean_int_add(v_dateDays_584_, v_days_583_);
lean_dec(v_dateDays_584_);
v___x_586_ = l_Std_Time_PlainDate_ofEpochDay(v___x_585_);
lean_dec(v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addDays___boxed(lean_object* v_date_587_, lean_object* v_days_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Std_Time_PlainDate_addDays(v_date_587_, v_days_588_);
lean_dec(v_days_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays(lean_object* v_date_590_, lean_object* v_days_591_){
_start:
{
lean_object* v___x_592_; lean_object* v_dateDays_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_592_ = lean_int_neg(v_days_591_);
v_dateDays_593_ = l_Std_Time_PlainDate_toEpochDay(v_date_590_);
v___x_594_ = lean_int_add(v_dateDays_593_, v___x_592_);
lean_dec(v___x_592_);
lean_dec(v_dateDays_593_);
v___x_595_ = l_Std_Time_PlainDate_ofEpochDay(v___x_594_);
lean_dec(v___x_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subDays___boxed(lean_object* v_date_596_, lean_object* v_days_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Std_Time_PlainDate_subDays(v_date_596_, v_days_597_);
lean_dec(v_days_597_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks(lean_object* v_date_599_, lean_object* v_weeks_600_){
_start:
{
lean_object* v_dateDays_601_; lean_object* v___x_602_; lean_object* v_daysToAdd_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_dateDays_601_ = l_Std_Time_PlainDate_toEpochDay(v_date_599_);
v___x_602_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v_daysToAdd_603_ = lean_int_mul(v_weeks_600_, v___x_602_);
v___x_604_ = lean_int_add(v_dateDays_601_, v_daysToAdd_603_);
lean_dec(v_daysToAdd_603_);
lean_dec(v_dateDays_601_);
v___x_605_ = l_Std_Time_PlainDate_ofEpochDay(v___x_604_);
lean_dec(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addWeeks___boxed(lean_object* v_date_606_, lean_object* v_weeks_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Std_Time_PlainDate_addWeeks(v_date_606_, v_weeks_607_);
lean_dec(v_weeks_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks(lean_object* v_date_609_, lean_object* v_weeks_610_){
_start:
{
lean_object* v___x_611_; lean_object* v_dateDays_612_; lean_object* v___x_613_; lean_object* v_daysToAdd_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_611_ = lean_int_neg(v_weeks_610_);
v_dateDays_612_ = l_Std_Time_PlainDate_toEpochDay(v_date_609_);
v___x_613_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v_daysToAdd_614_ = lean_int_mul(v___x_611_, v___x_613_);
lean_dec(v___x_611_);
v___x_615_ = lean_int_add(v_dateDays_612_, v_daysToAdd_614_);
lean_dec(v_daysToAdd_614_);
lean_dec(v_dateDays_612_);
v___x_616_ = l_Std_Time_PlainDate_ofEpochDay(v___x_615_);
lean_dec(v___x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subWeeks___boxed(lean_object* v_date_617_, lean_object* v_weeks_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Std_Time_PlainDate_subWeeks(v_date_617_, v_weeks_618_);
lean_dec(v_weeks_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip(lean_object* v_date_620_, lean_object* v_months_621_){
_start:
{
lean_object* v_year_622_; lean_object* v_month_623_; lean_object* v_day_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_659_; 
v_year_622_ = lean_ctor_get(v_date_620_, 0);
v_month_623_ = lean_ctor_get(v_date_620_, 1);
v_day_624_ = lean_ctor_get(v_date_620_, 2);
v_isSharedCheck_659_ = !lean_is_exclusive(v_date_620_);
if (v_isSharedCheck_659_ == 0)
{
v___x_626_ = v_date_620_;
v_isShared_627_ = v_isSharedCheck_659_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_day_624_);
lean_inc(v_month_623_);
lean_inc(v_year_622_);
lean_dec(v_date_620_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_659_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v_totalMonths_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v_wrappedMonths_633_; lean_object* v_yearsOffset_634_; lean_object* v___x_635_; uint8_t v___y_637_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; uint8_t v___y_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_628_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_629_ = lean_int_sub(v_month_623_, v___x_628_);
lean_dec(v_month_623_);
v_totalMonths_630_ = lean_int_add(v___x_629_, v_months_621_);
lean_dec(v___x_629_);
v___x_631_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_632_ = lean_int_emod(v_totalMonths_630_, v___x_631_);
v_wrappedMonths_633_ = lean_int_add(v___x_632_, v___x_628_);
lean_dec(v___x_632_);
v_yearsOffset_634_ = lean_int_ediv(v_totalMonths_630_, v___x_631_);
lean_dec(v_totalMonths_630_);
v___x_635_ = lean_int_add(v_year_622_, v_yearsOffset_634_);
lean_dec(v_yearsOffset_634_);
lean_dec(v_year_622_);
v___x_646_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_647_ = lean_int_mod(v___x_635_, v___x_646_);
v___x_648_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_649_ = lean_int_dec_eq(v___x_647_, v___x_648_);
lean_dec(v___x_647_);
v___x_652_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_653_ = lean_int_mod(v___x_635_, v___x_652_);
v___x_654_ = lean_int_dec_eq(v___x_653_, v___x_648_);
lean_dec(v___x_653_);
if (v___x_654_ == 0)
{
uint8_t v___x_655_; 
v___x_655_ = 1;
v___y_651_ = v___x_655_;
goto v___jp_650_;
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_656_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_657_ = lean_int_mod(v___x_635_, v___x_656_);
v___x_658_ = lean_int_dec_eq(v___x_657_, v___x_648_);
lean_dec(v___x_657_);
v___y_651_ = v___x_658_;
goto v___jp_650_;
}
v___jp_636_:
{
lean_object* v_max_638_; uint8_t v___x_639_; 
v_max_638_ = l_Std_Time_Month_Ordinal_days(v___y_637_, v_wrappedMonths_633_);
v___x_639_ = lean_int_dec_lt(v_max_638_, v_day_624_);
if (v___x_639_ == 0)
{
lean_object* v___x_641_; 
lean_dec(v_max_638_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v_wrappedMonths_633_);
lean_ctor_set(v___x_626_, 0, v___x_635_);
v___x_641_ = v___x_626_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_wrappedMonths_633_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_day_624_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
else
{
lean_object* v___x_644_; 
lean_dec(v_day_624_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 2, v_max_638_);
lean_ctor_set(v___x_626_, 1, v_wrappedMonths_633_);
lean_ctor_set(v___x_626_, 0, v___x_635_);
v___x_644_ = v___x_626_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_wrappedMonths_633_);
lean_ctor_set(v_reuseFailAlloc_645_, 2, v_max_638_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
v___jp_650_:
{
if (v___x_649_ == 0)
{
v___y_637_ = v___x_649_;
goto v___jp_636_;
}
else
{
v___y_637_ = v___y_651_;
goto v___jp_636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsClip___boxed(lean_object* v_date_660_, lean_object* v_months_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Std_Time_PlainDate_addMonthsClip(v_date_660_, v_months_661_);
lean_dec(v_months_661_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip(lean_object* v_date_663_, lean_object* v_months_664_){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_int_neg(v_months_664_);
v___x_666_ = l_Std_Time_PlainDate_addMonthsClip(v_date_663_, v___x_665_);
lean_dec(v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsClip___boxed(lean_object* v_date_667_, lean_object* v_months_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Std_Time_PlainDate_subMonthsClip(v_date_667_, v_months_668_);
lean_dec(v_months_668_);
return v_res_669_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__0(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(30u);
v___x_671_ = lean_nat_to_int(v___x_670_);
return v___x_671_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__1(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__0, &l_Std_Time_PlainDate_rollOver___closed__0_once, _init_l_Std_Time_PlainDate_rollOver___closed__0);
v___x_673_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_674_ = lean_int_add(v___x_673_, v___x_672_);
return v___x_674_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__2(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_676_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__1, &l_Std_Time_PlainDate_rollOver___closed__1_once, _init_l_Std_Time_PlainDate_rollOver___closed__1);
v___x_677_ = lean_int_sub(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__3(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v_range_680_; 
v___x_678_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_679_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__2, &l_Std_Time_PlainDate_rollOver___closed__2_once, _init_l_Std_Time_PlainDate_rollOver___closed__2);
v_range_680_ = lean_int_add(v___x_679_, v___x_678_);
return v_range_680_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__4(void){
_start:
{
lean_object* v_range_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_range_681_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_682_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_683_ = lean_int_emod(v___x_682_, v_range_681_);
return v___x_683_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__5(void){
_start:
{
lean_object* v_range_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_range_684_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_685_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__4, &l_Std_Time_PlainDate_rollOver___closed__4_once, _init_l_Std_Time_PlainDate_rollOver___closed__4);
v___x_686_ = lean_int_add(v___x_685_, v_range_684_);
return v___x_686_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__6(void){
_start:
{
lean_object* v_range_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_range_687_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__3, &l_Std_Time_PlainDate_rollOver___closed__3_once, _init_l_Std_Time_PlainDate_rollOver___closed__3);
v___x_688_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__5, &l_Std_Time_PlainDate_rollOver___closed__5_once, _init_l_Std_Time_PlainDate_rollOver___closed__5);
v___x_689_ = lean_int_emod(v___x_688_, v_range_687_);
return v___x_689_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_rollOver___closed__7(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_691_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__6, &l_Std_Time_PlainDate_rollOver___closed__6_once, _init_l_Std_Time_PlainDate_rollOver___closed__6);
v___x_692_ = lean_int_add(v___x_691_, v___x_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver(lean_object* v_year_693_, lean_object* v_month_694_, lean_object* v_day_695_){
_start:
{
lean_object* v___y_697_; lean_object* v___x_703_; uint8_t v___y_705_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; uint8_t v___y_715_; lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_703_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
v___x_710_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_711_ = lean_int_mod(v_year_693_, v___x_710_);
v___x_712_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_713_ = lean_int_dec_eq(v___x_711_, v___x_712_);
lean_dec(v___x_711_);
v___x_716_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_717_ = lean_int_mod(v_year_693_, v___x_716_);
v___x_718_ = lean_int_dec_eq(v___x_717_, v___x_712_);
lean_dec(v___x_717_);
if (v___x_718_ == 0)
{
uint8_t v___x_719_; 
v___x_719_ = 1;
v___y_715_ = v___x_719_;
goto v___jp_714_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_721_ = lean_int_mod(v_year_693_, v___x_720_);
v___x_722_ = lean_int_dec_eq(v___x_721_, v___x_712_);
lean_dec(v___x_721_);
v___y_715_ = v___x_722_;
goto v___jp_714_;
}
v___jp_696_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_dateDays_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_698_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_699_ = lean_int_sub(v_day_695_, v___x_698_);
v_dateDays_700_ = l_Std_Time_PlainDate_toEpochDay(v___y_697_);
v___x_701_ = lean_int_add(v_dateDays_700_, v___x_699_);
lean_dec(v___x_699_);
lean_dec(v_dateDays_700_);
v___x_702_ = l_Std_Time_PlainDate_ofEpochDay(v___x_701_);
lean_dec(v___x_701_);
return v___x_702_;
}
v___jp_704_:
{
lean_object* v_max_706_; uint8_t v___x_707_; 
v_max_706_ = l_Std_Time_Month_Ordinal_days(v___y_705_, v_month_694_);
v___x_707_ = lean_int_dec_lt(v_max_706_, v___x_703_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
lean_dec(v_max_706_);
v___x_708_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_708_, 0, v_year_693_);
lean_ctor_set(v___x_708_, 1, v_month_694_);
lean_ctor_set(v___x_708_, 2, v___x_703_);
v___y_697_ = v___x_708_;
goto v___jp_696_;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_709_, 0, v_year_693_);
lean_ctor_set(v___x_709_, 1, v_month_694_);
lean_ctor_set(v___x_709_, 2, v_max_706_);
v___y_697_ = v___x_709_;
goto v___jp_696_;
}
}
v___jp_714_:
{
if (v___x_713_ == 0)
{
v___y_705_ = v___x_713_;
goto v___jp_704_;
}
else
{
v___y_705_ = v___y_715_;
goto v___jp_704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_rollOver___boxed(lean_object* v_year_723_, lean_object* v_month_724_, lean_object* v_day_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Std_Time_PlainDate_rollOver(v_year_723_, v_month_724_, v_day_725_);
lean_dec(v_day_725_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearClip(lean_object* v_dt_727_, lean_object* v_year_728_){
_start:
{
lean_object* v_month_729_; lean_object* v_day_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_757_; 
v_month_729_ = lean_ctor_get(v_dt_727_, 1);
v_day_730_ = lean_ctor_get(v_dt_727_, 2);
v_isSharedCheck_757_ = !lean_is_exclusive(v_dt_727_);
if (v_isSharedCheck_757_ == 0)
{
lean_object* v_unused_758_; 
v_unused_758_ = lean_ctor_get(v_dt_727_, 0);
lean_dec(v_unused_758_);
v___x_732_ = v_dt_727_;
v_isShared_733_ = v_isSharedCheck_757_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_day_730_);
lean_inc(v_month_729_);
lean_dec(v_dt_727_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_757_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
uint8_t v___y_735_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; uint8_t v___y_749_; lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_744_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_745_ = lean_int_mod(v_year_728_, v___x_744_);
v___x_746_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_747_ = lean_int_dec_eq(v___x_745_, v___x_746_);
lean_dec(v___x_745_);
v___x_750_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_751_ = lean_int_mod(v_year_728_, v___x_750_);
v___x_752_ = lean_int_dec_eq(v___x_751_, v___x_746_);
lean_dec(v___x_751_);
if (v___x_752_ == 0)
{
uint8_t v___x_753_; 
v___x_753_ = 1;
v___y_749_ = v___x_753_;
goto v___jp_748_;
}
else
{
lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_754_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_755_ = lean_int_mod(v_year_728_, v___x_754_);
v___x_756_ = lean_int_dec_eq(v___x_755_, v___x_746_);
lean_dec(v___x_755_);
v___y_749_ = v___x_756_;
goto v___jp_748_;
}
v___jp_734_:
{
lean_object* v_max_736_; uint8_t v___x_737_; 
v_max_736_ = l_Std_Time_Month_Ordinal_days(v___y_735_, v_month_729_);
v___x_737_ = lean_int_dec_lt(v_max_736_, v_day_730_);
if (v___x_737_ == 0)
{
lean_object* v___x_739_; 
lean_dec(v_max_736_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v_year_728_);
v___x_739_ = v___x_732_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_year_728_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_month_729_);
lean_ctor_set(v_reuseFailAlloc_740_, 2, v_day_730_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
else
{
lean_object* v___x_742_; 
lean_dec(v_day_730_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 2, v_max_736_);
lean_ctor_set(v___x_732_, 0, v_year_728_);
v___x_742_ = v___x_732_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_year_728_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_month_729_);
lean_ctor_set(v_reuseFailAlloc_743_, 2, v_max_736_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
v___jp_748_:
{
if (v___x_747_ == 0)
{
v___y_735_ = v___x_747_;
goto v___jp_734_;
}
else
{
v___y_735_ = v___y_749_;
goto v___jp_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withYearRollOver(lean_object* v_dt_759_, lean_object* v_year_760_){
_start:
{
lean_object* v_month_761_; lean_object* v_day_762_; lean_object* v___x_763_; 
v_month_761_ = lean_ctor_get(v_dt_759_, 1);
lean_inc(v_month_761_);
v_day_762_ = lean_ctor_get(v_dt_759_, 2);
lean_inc(v_day_762_);
lean_dec_ref(v_dt_759_);
v___x_763_ = l_Std_Time_PlainDate_rollOver(v_year_760_, v_month_761_, v_day_762_);
lean_dec(v_day_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver(lean_object* v_date_764_, lean_object* v_months_765_){
_start:
{
lean_object* v_year_766_; lean_object* v_month_767_; lean_object* v_day_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_804_; 
v_year_766_ = lean_ctor_get(v_date_764_, 0);
v_month_767_ = lean_ctor_get(v_date_764_, 1);
v_day_768_ = lean_ctor_get(v_date_764_, 2);
v_isSharedCheck_804_ = !lean_is_exclusive(v_date_764_);
if (v_isSharedCheck_804_ == 0)
{
v___x_770_ = v_date_764_;
v_isShared_771_ = v_isSharedCheck_804_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_day_768_);
lean_inc(v_month_767_);
lean_inc(v_year_766_);
lean_dec(v_date_764_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_804_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___y_773_; lean_object* v___x_780_; uint8_t v___y_782_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; uint8_t v___x_794_; uint8_t v___y_796_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_780_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
v___x_791_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_792_ = lean_int_mod(v_year_766_, v___x_791_);
v___x_793_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_794_ = lean_int_dec_eq(v___x_792_, v___x_793_);
lean_dec(v___x_792_);
v___x_797_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_798_ = lean_int_mod(v_year_766_, v___x_797_);
v___x_799_ = lean_int_dec_eq(v___x_798_, v___x_793_);
lean_dec(v___x_798_);
if (v___x_799_ == 0)
{
uint8_t v___x_800_; 
v___x_800_ = 1;
v___y_796_ = v___x_800_;
goto v___jp_795_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_801_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_802_ = lean_int_mod(v_year_766_, v___x_801_);
v___x_803_ = lean_int_dec_eq(v___x_802_, v___x_793_);
lean_dec(v___x_802_);
v___y_796_ = v___x_803_;
goto v___jp_795_;
}
v___jp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_dateDays_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_774_ = l_Std_Time_PlainDate_addMonthsClip(v___y_773_, v_months_765_);
v___x_775_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_776_ = lean_int_sub(v_day_768_, v___x_775_);
lean_dec(v_day_768_);
v_dateDays_777_ = l_Std_Time_PlainDate_toEpochDay(v___x_774_);
v___x_778_ = lean_int_add(v_dateDays_777_, v___x_776_);
lean_dec(v___x_776_);
lean_dec(v_dateDays_777_);
v___x_779_ = l_Std_Time_PlainDate_ofEpochDay(v___x_778_);
lean_dec(v___x_778_);
return v___x_779_;
}
v___jp_781_:
{
lean_object* v_max_783_; uint8_t v___x_784_; 
v_max_783_ = l_Std_Time_Month_Ordinal_days(v___y_782_, v_month_767_);
v___x_784_ = lean_int_dec_lt(v_max_783_, v___x_780_);
if (v___x_784_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v_max_783_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 2, v___x_780_);
v___x_786_ = v___x_770_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_year_766_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_month_767_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v___x_780_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
v___y_773_ = v___x_786_;
goto v___jp_772_;
}
}
else
{
lean_object* v___x_789_; 
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 2, v_max_783_);
v___x_789_ = v___x_770_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_year_766_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_month_767_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v_max_783_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v___y_773_ = v___x_789_;
goto v___jp_772_;
}
}
}
v___jp_795_:
{
if (v___x_794_ == 0)
{
v___y_782_ = v___x_794_;
goto v___jp_781_;
}
else
{
v___y_782_ = v___y_796_;
goto v___jp_781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addMonthsRollOver___boxed(lean_object* v_date_805_, lean_object* v_months_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_805_, v_months_806_);
lean_dec(v_months_806_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver(lean_object* v_date_808_, lean_object* v_months_809_){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_int_neg(v_months_809_);
v___x_811_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_808_, v___x_810_);
lean_dec(v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subMonthsRollOver___boxed(lean_object* v_date_812_, lean_object* v_months_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Std_Time_PlainDate_subMonthsRollOver(v_date_812_, v_months_813_);
lean_dec(v_months_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver(lean_object* v_date_815_, lean_object* v_years_816_){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_818_ = lean_int_mul(v_years_816_, v___x_817_);
v___x_819_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_815_, v___x_818_);
lean_dec(v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsRollOver___boxed(lean_object* v_date_820_, lean_object* v_years_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Std_Time_PlainDate_addYearsRollOver(v_date_820_, v_years_821_);
lean_dec(v_years_821_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver(lean_object* v_date_823_, lean_object* v_years_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_825_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_826_ = lean_int_mul(v_years_824_, v___x_825_);
v___x_827_ = lean_int_neg(v___x_826_);
lean_dec(v___x_826_);
v___x_828_ = l_Std_Time_PlainDate_addMonthsRollOver(v_date_823_, v___x_827_);
lean_dec(v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsRollOver___boxed(lean_object* v_date_829_, lean_object* v_years_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Std_Time_PlainDate_subYearsRollOver(v_date_829_, v_years_830_);
lean_dec(v_years_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip(lean_object* v_date_832_, lean_object* v_years_833_){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_835_ = lean_int_mul(v_years_833_, v___x_834_);
v___x_836_ = l_Std_Time_PlainDate_addMonthsClip(v_date_832_, v___x_835_);
lean_dec(v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_addYearsClip___boxed(lean_object* v_date_837_, lean_object* v_years_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Std_Time_PlainDate_addYearsClip(v_date_837_, v_years_838_);
lean_dec(v_years_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip(lean_object* v_date_840_, lean_object* v_years_841_){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_842_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__2, &l_Std_Time_PlainDate_ofEpochDay___closed__2_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__2);
v___x_843_ = lean_int_mul(v_years_841_, v___x_842_);
v___x_844_ = lean_int_neg(v___x_843_);
lean_dec(v___x_843_);
v___x_845_ = l_Std_Time_PlainDate_addMonthsClip(v_date_840_, v___x_844_);
lean_dec(v___x_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_subYearsClip___boxed(lean_object* v_date_846_, lean_object* v_years_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Std_Time_PlainDate_subYearsClip(v_date_846_, v_years_847_);
lean_dec(v_years_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysClip(lean_object* v_dt_849_, lean_object* v_days_850_){
_start:
{
lean_object* v_year_851_; lean_object* v_month_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_879_; 
v_year_851_ = lean_ctor_get(v_dt_849_, 0);
v_month_852_ = lean_ctor_get(v_dt_849_, 1);
v_isSharedCheck_879_ = !lean_is_exclusive(v_dt_849_);
if (v_isSharedCheck_879_ == 0)
{
lean_object* v_unused_880_; 
v_unused_880_ = lean_ctor_get(v_dt_849_, 2);
lean_dec(v_unused_880_);
v___x_854_ = v_dt_849_;
v_isShared_855_ = v_isSharedCheck_879_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_month_852_);
lean_inc(v_year_851_);
lean_dec(v_dt_849_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_879_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
uint8_t v___y_857_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; uint8_t v___y_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_866_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_867_ = lean_int_mod(v_year_851_, v___x_866_);
v___x_868_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_869_ = lean_int_dec_eq(v___x_867_, v___x_868_);
lean_dec(v___x_867_);
v___x_872_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_873_ = lean_int_mod(v_year_851_, v___x_872_);
v___x_874_ = lean_int_dec_eq(v___x_873_, v___x_868_);
lean_dec(v___x_873_);
if (v___x_874_ == 0)
{
uint8_t v___x_875_; 
v___x_875_ = 1;
v___y_871_ = v___x_875_;
goto v___jp_870_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_877_ = lean_int_mod(v_year_851_, v___x_876_);
v___x_878_ = lean_int_dec_eq(v___x_877_, v___x_868_);
lean_dec(v___x_877_);
v___y_871_ = v___x_878_;
goto v___jp_870_;
}
v___jp_856_:
{
lean_object* v_max_858_; uint8_t v___x_859_; 
v_max_858_ = l_Std_Time_Month_Ordinal_days(v___y_857_, v_month_852_);
v___x_859_ = lean_int_dec_lt(v_max_858_, v_days_850_);
if (v___x_859_ == 0)
{
lean_object* v___x_861_; 
lean_dec(v_max_858_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 2, v_days_850_);
v___x_861_ = v___x_854_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_year_851_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v_month_852_);
lean_ctor_set(v_reuseFailAlloc_862_, 2, v_days_850_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
else
{
lean_object* v___x_864_; 
lean_dec(v_days_850_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 2, v_max_858_);
v___x_864_ = v___x_854_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_year_851_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v_month_852_);
lean_ctor_set(v_reuseFailAlloc_865_, 2, v_max_858_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
v___jp_870_:
{
if (v___x_869_ == 0)
{
v___y_857_ = v___x_869_;
goto v___jp_856_;
}
else
{
v___y_857_ = v___y_871_;
goto v___jp_856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver(lean_object* v_dt_881_, lean_object* v_days_882_){
_start:
{
lean_object* v_year_883_; lean_object* v_month_884_; lean_object* v___x_885_; 
v_year_883_ = lean_ctor_get(v_dt_881_, 0);
lean_inc(v_year_883_);
v_month_884_ = lean_ctor_get(v_dt_881_, 1);
lean_inc(v_month_884_);
lean_dec_ref(v_dt_881_);
v___x_885_ = l_Std_Time_PlainDate_rollOver(v_year_883_, v_month_884_, v_days_882_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withDaysRollOver___boxed(lean_object* v_dt_886_, lean_object* v_days_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Std_Time_PlainDate_withDaysRollOver(v_dt_886_, v_days_887_);
lean_dec(v_days_887_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthClip(lean_object* v_dt_889_, lean_object* v_month_890_){
_start:
{
lean_object* v_year_891_; lean_object* v_day_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_919_; 
v_year_891_ = lean_ctor_get(v_dt_889_, 0);
v_day_892_ = lean_ctor_get(v_dt_889_, 2);
v_isSharedCheck_919_ = !lean_is_exclusive(v_dt_889_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; 
v_unused_920_ = lean_ctor_get(v_dt_889_, 1);
lean_dec(v_unused_920_);
v___x_894_ = v_dt_889_;
v_isShared_895_ = v_isSharedCheck_919_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_day_892_);
lean_inc(v_year_891_);
lean_dec(v_dt_889_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_919_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___y_897_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; uint8_t v___x_909_; uint8_t v___y_911_; lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; 
v___x_906_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_907_ = lean_int_mod(v_year_891_, v___x_906_);
v___x_908_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_909_ = lean_int_dec_eq(v___x_907_, v___x_908_);
lean_dec(v___x_907_);
v___x_912_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_913_ = lean_int_mod(v_year_891_, v___x_912_);
v___x_914_ = lean_int_dec_eq(v___x_913_, v___x_908_);
lean_dec(v___x_913_);
if (v___x_914_ == 0)
{
uint8_t v___x_915_; 
v___x_915_ = 1;
v___y_911_ = v___x_915_;
goto v___jp_910_;
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_916_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_917_ = lean_int_mod(v_year_891_, v___x_916_);
v___x_918_ = lean_int_dec_eq(v___x_917_, v___x_908_);
lean_dec(v___x_917_);
v___y_911_ = v___x_918_;
goto v___jp_910_;
}
v___jp_896_:
{
lean_object* v_max_898_; uint8_t v___x_899_; 
v_max_898_ = l_Std_Time_Month_Ordinal_days(v___y_897_, v_month_890_);
v___x_899_ = lean_int_dec_lt(v_max_898_, v_day_892_);
if (v___x_899_ == 0)
{
lean_object* v___x_901_; 
lean_dec(v_max_898_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 1, v_month_890_);
v___x_901_ = v___x_894_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_year_891_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_month_890_);
lean_ctor_set(v_reuseFailAlloc_902_, 2, v_day_892_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
else
{
lean_object* v___x_904_; 
lean_dec(v_day_892_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 2, v_max_898_);
lean_ctor_set(v___x_894_, 1, v_month_890_);
v___x_904_ = v___x_894_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_year_891_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_month_890_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_max_898_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
v___jp_910_:
{
if (v___x_909_ == 0)
{
v___y_897_ = v___x_909_;
goto v___jp_896_;
}
else
{
v___y_897_ = v___y_911_;
goto v___jp_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withMonthRollOver(lean_object* v_dt_921_, lean_object* v_month_922_){
_start:
{
lean_object* v_year_923_; lean_object* v_day_924_; lean_object* v___x_925_; 
v_year_923_ = lean_ctor_get(v_dt_921_, 0);
lean_inc(v_year_923_);
v_day_924_ = lean_ctor_get(v_dt_921_, 2);
lean_inc(v_day_924_);
lean_dec_ref(v_dt_921_);
v___x_925_ = l_Std_Time_PlainDate_rollOver(v_year_923_, v_month_922_, v_day_924_);
lean_dec(v_day_924_);
return v___x_925_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__0(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_927_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_928_ = lean_int_sub(v___x_927_, v___x_926_);
return v___x_928_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__1(void){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_range_931_; 
v___x_929_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_930_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__0, &l_Std_Time_PlainDate_weekday___closed__0_once, _init_l_Std_Time_PlainDate_weekday___closed__0);
v_range_931_ = lean_int_add(v___x_930_, v___x_929_);
return v_range_931_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__2(void){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_933_ = lean_int_neg(v___x_932_);
return v___x_933_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekday___closed__3(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_unsigned_to_nat(6u);
v___x_935_ = lean_nat_to_int(v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_PlainDate_weekday(lean_object* v_date_936_){
_start:
{
lean_object* v___y_938_; lean_object* v_days_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v_days_947_ = l_Std_Time_PlainDate_toEpochDay(v_date_936_);
v___x_948_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_949_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__2, &l_Std_Time_PlainDate_weekday___closed__2_once, _init_l_Std_Time_PlainDate_weekday___closed__2);
v___x_950_ = lean_int_dec_le(v___x_949_, v_days_947_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_951_ = lean_obj_once(&l_Std_Time_PlainDate_ofEpochDay___closed__8, &l_Std_Time_PlainDate_ofEpochDay___closed__8_once, _init_l_Std_Time_PlainDate_ofEpochDay___closed__8);
v___x_952_ = lean_int_add(v_days_947_, v___x_951_);
lean_dec(v_days_947_);
v___x_953_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_954_ = lean_int_emod(v___x_952_, v___x_953_);
lean_dec(v___x_952_);
v___x_955_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__3, &l_Std_Time_PlainDate_weekday___closed__3_once, _init_l_Std_Time_PlainDate_weekday___closed__3);
v___x_956_ = lean_int_add(v___x_954_, v___x_955_);
lean_dec(v___x_954_);
v___y_938_ = v___x_956_;
goto v___jp_937_;
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = lean_int_add(v_days_947_, v___x_948_);
lean_dec(v_days_947_);
v___x_958_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_959_ = lean_int_emod(v___x_957_, v___x_958_);
lean_dec(v___x_957_);
v___y_938_ = v___x_959_;
goto v___jp_937_;
}
v___jp_937_:
{
lean_object* v___x_939_; lean_object* v_range_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_939_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v_range_940_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__1, &l_Std_Time_PlainDate_weekday___closed__1_once, _init_l_Std_Time_PlainDate_weekday___closed__1);
v___x_941_ = lean_int_sub(v___y_938_, v___x_939_);
lean_dec(v___y_938_);
v___x_942_ = lean_int_emod(v___x_941_, v_range_940_);
lean_dec(v___x_941_);
v___x_943_ = lean_int_add(v___x_942_, v_range_940_);
lean_dec(v___x_942_);
v___x_944_ = lean_int_emod(v___x_943_, v_range_940_);
lean_dec(v___x_943_);
v___x_945_ = lean_int_add(v___x_944_, v___x_939_);
lean_dec(v___x_944_);
v___x_946_ = l_Std_Time_Weekday_ofOrdinal(v___x_945_);
lean_dec(v___x_945_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekday___boxed(lean_object* v_date_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l_Std_Time_PlainDate_weekday(v_date_960_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfMonth___closed__0(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_964_ = lean_obj_once(&l_Std_Time_PlainDate_weekday___closed__3, &l_Std_Time_PlainDate_weekday___closed__3_once, _init_l_Std_Time_PlainDate_weekday___closed__3);
v___x_965_ = lean_int_sub(v___x_964_, v___x_963_);
return v___x_965_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfMonth___closed__1(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v_range_968_; 
v___x_966_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_967_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfMonth___closed__0, &l_Std_Time_PlainDate_weekOfMonth___closed__0_once, _init_l_Std_Time_PlainDate_weekOfMonth___closed__0);
v_range_968_ = lean_int_add(v___x_967_, v___x_966_);
return v_range_968_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object* v_date_969_, uint8_t v_firstDay_970_){
_start:
{
lean_object* v_year_971_; lean_object* v_month_972_; lean_object* v_day_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_1021_; 
v_year_971_ = lean_ctor_get(v_date_969_, 0);
v_month_972_ = lean_ctor_get(v_date_969_, 1);
v_day_973_ = lean_ctor_get(v_date_969_, 2);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_date_969_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_975_ = v_date_969_;
v_isShared_976_ = v_isSharedCheck_1021_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_day_973_);
lean_inc(v_month_972_);
lean_inc(v_year_971_);
lean_dec(v_date_969_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_1021_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___y_978_; lean_object* v___x_997_; uint8_t v___y_999_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; uint8_t v___y_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_997_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
v___x_1008_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_1009_ = lean_int_mod(v_year_971_, v___x_1008_);
v___x_1010_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1011_ = lean_int_dec_eq(v___x_1009_, v___x_1010_);
lean_dec(v___x_1009_);
v___x_1014_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_1015_ = lean_int_mod(v_year_971_, v___x_1014_);
v___x_1016_ = lean_int_dec_eq(v___x_1015_, v___x_1010_);
lean_dec(v___x_1015_);
if (v___x_1016_ == 0)
{
uint8_t v___x_1017_; 
v___x_1017_ = 1;
v___y_1013_ = v___x_1017_;
goto v___jp_1012_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1018_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_1019_ = lean_int_mod(v_year_971_, v___x_1018_);
v___x_1020_ = lean_int_dec_eq(v___x_1019_, v___x_1010_);
lean_dec(v___x_1019_);
v___y_1013_ = v___x_1020_;
goto v___jp_1012_;
}
v___jp_977_:
{
uint8_t v___x_979_; lean_object* v_day1Ord_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_offset_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v_range_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_979_ = l_Std_Time_PlainDate_weekday(v___y_978_);
v_day1Ord_980_ = l_Std_Time_Weekday_toOrdinal(v___x_979_);
v___x_981_ = l_Std_Time_Weekday_toOrdinal(v_firstDay_970_);
v___x_982_ = lean_int_sub(v_day1Ord_980_, v___x_981_);
lean_dec(v___x_981_);
lean_dec(v_day1Ord_980_);
v___x_983_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_984_ = lean_int_add(v___x_982_, v___x_983_);
lean_dec(v___x_982_);
v_offset_985_ = lean_int_emod(v___x_984_, v___x_983_);
lean_dec(v___x_984_);
v___x_986_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_987_ = lean_int_sub(v_day_973_, v___x_986_);
lean_dec(v_day_973_);
v___x_988_ = lean_int_add(v___x_987_, v_offset_985_);
lean_dec(v_offset_985_);
lean_dec(v___x_987_);
v___x_989_ = lean_int_ediv(v___x_988_, v___x_983_);
lean_dec(v___x_988_);
v___x_990_ = lean_int_add(v___x_989_, v___x_986_);
lean_dec(v___x_989_);
v_range_991_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfMonth___closed__1, &l_Std_Time_PlainDate_weekOfMonth___closed__1_once, _init_l_Std_Time_PlainDate_weekOfMonth___closed__1);
v___x_992_ = lean_int_sub(v___x_990_, v___x_986_);
lean_dec(v___x_990_);
v___x_993_ = lean_int_emod(v___x_992_, v_range_991_);
lean_dec(v___x_992_);
v___x_994_ = lean_int_add(v___x_993_, v_range_991_);
lean_dec(v___x_993_);
v___x_995_ = lean_int_emod(v___x_994_, v_range_991_);
lean_dec(v___x_994_);
v___x_996_ = lean_int_add(v___x_995_, v___x_986_);
lean_dec(v___x_995_);
return v___x_996_;
}
v___jp_998_:
{
lean_object* v_max_1000_; uint8_t v___x_1001_; 
v_max_1000_ = l_Std_Time_Month_Ordinal_days(v___y_999_, v_month_972_);
v___x_1001_ = lean_int_dec_lt(v_max_1000_, v___x_997_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1003_; 
lean_dec(v_max_1000_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 2, v___x_997_);
v___x_1003_ = v___x_975_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_year_971_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_month_972_);
lean_ctor_set(v_reuseFailAlloc_1004_, 2, v___x_997_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
v___y_978_ = v___x_1003_;
goto v___jp_977_;
}
}
else
{
lean_object* v___x_1006_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 2, v_max_1000_);
v___x_1006_ = v___x_975_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_year_971_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_month_972_);
lean_ctor_set(v_reuseFailAlloc_1007_, 2, v_max_1000_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
v___y_978_ = v___x_1006_;
goto v___jp_977_;
}
}
}
v___jp_1012_:
{
if (v___x_1011_ == 0)
{
v___y_999_ = v___x_1011_;
goto v___jp_998_;
}
else
{
v___y_999_ = v___y_1013_;
goto v___jp_998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfMonth___boxed(lean_object* v_date_1022_, lean_object* v_firstDay_1023_){
_start:
{
uint8_t v_firstDay_boxed_1024_; lean_object* v_res_1025_; 
v_firstDay_boxed_1024_ = lean_unbox(v_firstDay_1023_);
v_res_1025_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1022_, v_firstDay_boxed_1024_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday(lean_object* v_date_1026_, uint8_t v_desiredWeekday_1027_){
_start:
{
lean_object* v___y_1029_; uint8_t v___x_1033_; lean_object* v_weekday_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
lean_inc_ref(v_date_1026_);
v___x_1033_ = l_Std_Time_PlainDate_weekday(v_date_1026_);
v_weekday_1034_ = l_Std_Time_Weekday_toOrdinal(v___x_1033_);
v___x_1035_ = l_Std_Time_Weekday_toOrdinal(v_desiredWeekday_1027_);
v___x_1036_ = lean_int_neg(v_weekday_1034_);
lean_dec(v_weekday_1034_);
v___x_1037_ = lean_int_add(v___x_1035_, v___x_1036_);
lean_dec(v___x_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1039_ = lean_int_dec_lt(v___x_1037_, v___x_1038_);
if (v___x_1039_ == 0)
{
v___y_1029_ = v___x_1037_;
goto v___jp_1028_;
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1041_ = lean_int_add(v___x_1037_, v___x_1040_);
lean_dec(v___x_1037_);
v___y_1029_ = v___x_1041_;
goto v___jp_1028_;
}
v___jp_1028_:
{
lean_object* v_dateDays_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_dateDays_1030_ = l_Std_Time_PlainDate_toEpochDay(v_date_1026_);
v___x_1031_ = lean_int_add(v_dateDays_1030_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec(v_dateDays_1030_);
v___x_1032_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1031_);
lean_dec(v___x_1031_);
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_withWeekday___boxed(lean_object* v_date_1042_, lean_object* v_desiredWeekday_1043_){
_start:
{
uint8_t v_desiredWeekday_boxed_1044_; lean_object* v_res_1045_; 
v_desiredWeekday_boxed_1044_ = lean_unbox(v_desiredWeekday_1043_);
v_res_1045_ = l_Std_Time_PlainDate_withWeekday(v_date_1042_, v_desiredWeekday_boxed_1044_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(uint8_t v_weekday_1046_, uint8_t v_firstDay_1047_){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1048_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1049_ = l_Std_Time_Weekday_toOrdinal(v_weekday_1046_);
v___x_1050_ = l_Std_Time_Weekday_toOrdinal(v_firstDay_1047_);
v___x_1051_ = lean_int_neg(v___x_1050_);
lean_dec(v___x_1050_);
v___x_1052_ = lean_int_add(v___x_1049_, v___x_1051_);
lean_dec(v___x_1051_);
lean_dec(v___x_1049_);
v___x_1053_ = lean_int_emod(v___x_1052_, v___x_1048_);
lean_dec(v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek___boxed(lean_object* v_weekday_1054_, lean_object* v_firstDay_1055_){
_start:
{
uint8_t v_weekday_boxed_1056_; uint8_t v_firstDay_boxed_1057_; lean_object* v_res_1058_; 
v_weekday_boxed_1056_ = lean_unbox(v_weekday_1054_);
v_firstDay_boxed_1057_ = lean_unbox(v_firstDay_1055_);
v_res_1058_ = l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(v_weekday_boxed_1056_, v_firstDay_boxed_1057_);
return v_res_1058_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_unsigned_to_nat(11u);
v___x_1060_ = lean_nat_to_int(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__0);
v___x_1062_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1063_ = lean_int_add(v___x_1062_, v___x_1061_);
return v___x_1063_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1065_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__1);
v___x_1066_ = lean_int_sub(v___x_1065_, v___x_1064_);
return v___x_1066_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v_range_1069_; 
v___x_1067_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1068_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__2);
v_range_1069_ = lean_int_add(v___x_1068_, v___x_1067_);
return v_range_1069_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4(void){
_start:
{
lean_object* v_range_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_range_1070_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1071_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_1072_ = lean_int_emod(v___x_1071_, v_range_1070_);
return v___x_1072_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5(void){
_start:
{
lean_object* v_range_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_range_1073_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1074_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__4);
v___x_1075_ = lean_int_add(v___x_1074_, v_range_1073_);
return v___x_1075_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6(void){
_start:
{
lean_object* v_range_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_range_1076_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__3);
v___x_1077_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__5);
v___x_1078_ = lean_int_emod(v___x_1077_, v_range_1076_);
return v___x_1078_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1080_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__6);
v___x_1081_ = lean_int_add(v___x_1080_, v___x_1079_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear(lean_object* v_year_1082_, uint8_t v_firstDay_1083_, lean_object* v_minimalDays_1084_){
_start:
{
lean_object* v___y_1086_; lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___y_1105_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; uint8_t v___y_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1102_ = lean_obj_once(&l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7, &l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7_once, _init_l_Std_Time_PlainDate_startOfWeekBasedYear___closed__7);
v___x_1103_ = lean_obj_once(&l_Std_Time_PlainDate_rollOver___closed__7, &l_Std_Time_PlainDate_rollOver___closed__7_once, _init_l_Std_Time_PlainDate_rollOver___closed__7);
v___x_1110_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__0);
v___x_1111_ = lean_int_mod(v_year_1082_, v___x_1110_);
v___x_1112_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1113_ = lean_int_dec_eq(v___x_1111_, v___x_1112_);
lean_dec(v___x_1111_);
v___x_1116_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__1);
v___x_1117_ = lean_int_mod(v_year_1082_, v___x_1116_);
v___x_1118_ = lean_int_dec_eq(v___x_1117_, v___x_1112_);
lean_dec(v___x_1117_);
if (v___x_1118_ == 0)
{
uint8_t v___x_1119_; 
v___x_1119_ = 1;
v___y_1115_ = v___x_1119_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v___x_1120_ = lean_obj_once(&l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2, &l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2_once, _init_l_Std_Time_PlainDate_ofYearMonthDayClip___closed__2);
v___x_1121_ = lean_int_mod(v_year_1082_, v___x_1120_);
v___x_1122_ = lean_int_dec_eq(v___x_1121_, v___x_1112_);
lean_dec(v___x_1121_);
v___y_1115_ = v___x_1122_;
goto v___jp_1114_;
}
v___jp_1085_:
{
uint8_t v___x_1087_; lean_object* v_localDay_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v_dateDays_1095_; lean_object* v___x_1096_; lean_object* v_weekStart_1097_; uint8_t v___x_1098_; 
lean_inc_ref(v___y_1086_);
v___x_1087_ = l_Std_Time_PlainDate_weekday(v___y_1086_);
v_localDay_1088_ = l___private_Std_Time_Date_PlainDate_0__Std_Time_PlainDate_localizedDayOfWeek(v___x_1087_, v_firstDay_1083_);
v___x_1089_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1090_ = lean_int_neg(v_localDay_1088_);
v___x_1091_ = lean_int_add(v___x_1089_, v___x_1090_);
lean_dec(v___x_1090_);
v___x_1092_ = l_Int_toNat(v_localDay_1088_);
lean_dec(v_localDay_1088_);
v___x_1093_ = lean_nat_to_int(v___x_1092_);
v___x_1094_ = lean_int_neg(v___x_1093_);
lean_dec(v___x_1093_);
v_dateDays_1095_ = l_Std_Time_PlainDate_toEpochDay(v___y_1086_);
v___x_1096_ = lean_int_add(v_dateDays_1095_, v___x_1094_);
lean_dec(v___x_1094_);
lean_dec(v_dateDays_1095_);
v_weekStart_1097_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1096_);
lean_dec(v___x_1096_);
v___x_1098_ = lean_int_dec_le(v_minimalDays_1084_, v___x_1091_);
lean_dec(v___x_1091_);
if (v___x_1098_ == 0)
{
lean_object* v_dateDays_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_dateDays_1099_ = l_Std_Time_PlainDate_toEpochDay(v_weekStart_1097_);
v___x_1100_ = lean_int_add(v_dateDays_1099_, v___x_1089_);
lean_dec(v_dateDays_1099_);
v___x_1101_ = l_Std_Time_PlainDate_ofEpochDay(v___x_1100_);
lean_dec(v___x_1100_);
return v___x_1101_;
}
else
{
return v_weekStart_1097_;
}
}
v___jp_1104_:
{
lean_object* v_max_1106_; uint8_t v___x_1107_; 
v_max_1106_ = l_Std_Time_Month_Ordinal_days(v___y_1105_, v___x_1102_);
v___x_1107_ = lean_int_dec_lt(v_max_1106_, v___x_1103_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
lean_dec(v_max_1106_);
v___x_1108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1108_, 0, v_year_1082_);
lean_ctor_set(v___x_1108_, 1, v___x_1102_);
lean_ctor_set(v___x_1108_, 2, v___x_1103_);
v___y_1086_ = v___x_1108_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1109_, 0, v_year_1082_);
lean_ctor_set(v___x_1109_, 1, v___x_1102_);
lean_ctor_set(v___x_1109_, 2, v_max_1106_);
v___y_1086_ = v___x_1109_;
goto v___jp_1085_;
}
}
v___jp_1114_:
{
if (v___x_1113_ == 0)
{
v___y_1105_ = v___x_1113_;
goto v___jp_1104_;
}
else
{
v___y_1105_ = v___y_1115_;
goto v___jp_1104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_startOfWeekBasedYear___boxed(lean_object* v_year_1123_, lean_object* v_firstDay_1124_, lean_object* v_minimalDays_1125_){
_start:
{
uint8_t v_firstDay_boxed_1126_; lean_object* v_res_1127_; 
v_firstDay_boxed_1126_ = lean_unbox(v_firstDay_1124_);
v_res_1127_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1123_, v_firstDay_boxed_1126_, v_minimalDays_1125_);
lean_dec(v_minimalDays_1125_);
return v_res_1127_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__0(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_unsigned_to_nat(370u);
v___x_1129_ = lean_nat_to_int(v___x_1128_);
return v___x_1129_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__1(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v___x_1131_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__0, &l_Std_Time_PlainDate_weekOfYear___closed__0_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__0);
v___x_1132_ = lean_int_sub(v___x_1131_, v___x_1130_);
return v___x_1132_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__2(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v_range_1135_; 
v___x_1133_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1134_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__1, &l_Std_Time_PlainDate_weekOfYear___closed__1_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__1);
v_range_1135_ = lean_int_add(v___x_1134_, v___x_1133_);
return v_range_1135_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__3(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_unsigned_to_nat(52u);
v___x_1137_ = lean_nat_to_int(v___x_1136_);
return v___x_1137_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__4(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__3, &l_Std_Time_PlainDate_weekOfYear___closed__3_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__3);
v___x_1139_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1140_ = lean_int_add(v___x_1139_, v___x_1138_);
return v___x_1140_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__5(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1142_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__4, &l_Std_Time_PlainDate_weekOfYear___closed__4_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__4);
v___x_1143_ = lean_int_sub(v___x_1142_, v___x_1141_);
return v___x_1143_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__6(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v_range_1146_; 
v___x_1144_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1145_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__5, &l_Std_Time_PlainDate_weekOfYear___closed__5_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__5);
v_range_1146_ = lean_int_add(v___x_1145_, v___x_1144_);
return v_range_1146_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__7(void){
_start:
{
lean_object* v_range_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_range_1147_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1148_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__5, &l_Std_Time_instInhabitedPlainDate___closed__5_once, _init_l_Std_Time_instInhabitedPlainDate___closed__5);
v___x_1149_ = lean_int_emod(v___x_1148_, v_range_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__8(void){
_start:
{
lean_object* v_range_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v_range_1150_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1151_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__7, &l_Std_Time_PlainDate_weekOfYear___closed__7_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__7);
v___x_1152_ = lean_int_add(v___x_1151_, v_range_1150_);
return v___x_1152_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__9(void){
_start:
{
lean_object* v_range_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_range_1153_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__6, &l_Std_Time_PlainDate_weekOfYear___closed__6_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__6);
v___x_1154_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__8, &l_Std_Time_PlainDate_weekOfYear___closed__8_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__8);
v___x_1155_ = lean_int_emod(v___x_1154_, v_range_1153_);
return v___x_1155_;
}
}
static lean_object* _init_l_Std_Time_PlainDate_weekOfYear___closed__10(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1157_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__9, &l_Std_Time_PlainDate_weekOfYear___closed__9_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__9);
v___x_1158_ = lean_int_add(v___x_1157_, v___x_1156_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object* v_date_1159_, uint8_t v_firstDay_1160_, lean_object* v_minDaysBounded_1161_){
_start:
{
lean_object* v_year_1162_; lean_object* v_thisYearStart_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v_year_1162_ = lean_ctor_get(v_date_1159_, 0);
lean_inc_n(v_year_1162_, 2);
v_thisYearStart_1163_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1162_, v_firstDay_1160_, v_minDaysBounded_1161_);
v___x_1164_ = l_Std_Time_PlainDate_toEpochDay(v_date_1159_);
v___x_1165_ = l_Std_Time_PlainDate_toEpochDay(v_thisYearStart_1163_);
v___x_1166_ = lean_int_dec_lt(v___x_1164_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v_nextYearStart_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1167_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1168_ = lean_int_add(v_year_1162_, v___x_1167_);
lean_dec(v_year_1162_);
v_nextYearStart_1169_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1168_, v_firstDay_1160_, v_minDaysBounded_1161_);
v___x_1170_ = l_Std_Time_PlainDate_toEpochDay(v_nextYearStart_1169_);
v___x_1171_ = lean_int_dec_le(v___x_1170_, v___x_1164_);
lean_dec(v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v_range_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1172_ = lean_int_sub(v___x_1164_, v___x_1165_);
lean_dec(v___x_1165_);
lean_dec(v___x_1164_);
v___x_1173_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v_range_1174_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__2, &l_Std_Time_PlainDate_weekOfYear___closed__2_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__2);
v___x_1175_ = lean_int_sub(v___x_1172_, v___x_1173_);
lean_dec(v___x_1172_);
v___x_1176_ = lean_int_emod(v___x_1175_, v_range_1174_);
lean_dec(v___x_1175_);
v___x_1177_ = lean_int_add(v___x_1176_, v_range_1174_);
lean_dec(v___x_1176_);
v___x_1178_ = lean_int_emod(v___x_1177_, v_range_1174_);
lean_dec(v___x_1177_);
v___x_1179_ = lean_int_add(v___x_1178_, v___x_1173_);
lean_dec(v___x_1178_);
v___x_1180_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1181_ = lean_int_ediv(v___x_1179_, v___x_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_int_add(v___x_1181_, v___x_1167_);
lean_dec(v___x_1181_);
return v___x_1182_;
}
else
{
lean_object* v___x_1183_; 
lean_dec(v___x_1165_);
lean_dec(v___x_1164_);
v___x_1183_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__10, &l_Std_Time_PlainDate_weekOfYear___closed__10_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__10);
return v___x_1183_;
}
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v_prevYearStart_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v_range_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
lean_dec(v___x_1165_);
v___x_1184_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1185_ = lean_int_sub(v_year_1162_, v___x_1184_);
lean_dec(v_year_1162_);
v_prevYearStart_1186_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1185_, v_firstDay_1160_, v_minDaysBounded_1161_);
v___x_1187_ = l_Std_Time_PlainDate_toEpochDay(v_prevYearStart_1186_);
v___x_1188_ = lean_int_sub(v___x_1164_, v___x_1187_);
lean_dec(v___x_1187_);
lean_dec(v___x_1164_);
v___x_1189_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__25, &l_Std_Time_instReprPlainDate_repr___redArg___closed__25_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__25);
v_range_1190_ = lean_obj_once(&l_Std_Time_PlainDate_weekOfYear___closed__2, &l_Std_Time_PlainDate_weekOfYear___closed__2_once, _init_l_Std_Time_PlainDate_weekOfYear___closed__2);
v___x_1191_ = lean_int_sub(v___x_1188_, v___x_1189_);
lean_dec(v___x_1188_);
v___x_1192_ = lean_int_emod(v___x_1191_, v_range_1190_);
lean_dec(v___x_1191_);
v___x_1193_ = lean_int_add(v___x_1192_, v_range_1190_);
lean_dec(v___x_1192_);
v___x_1194_ = lean_int_emod(v___x_1193_, v_range_1190_);
lean_dec(v___x_1193_);
v___x_1195_ = lean_int_add(v___x_1194_, v___x_1189_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_obj_once(&l_Std_Time_instReprPlainDate_repr___redArg___closed__8, &l_Std_Time_instReprPlainDate_repr___redArg___closed__8_once, _init_l_Std_Time_instReprPlainDate_repr___redArg___closed__8);
v___x_1197_ = lean_int_ediv(v___x_1195_, v___x_1196_);
lean_dec(v___x_1195_);
v___x_1198_ = lean_int_add(v___x_1197_, v___x_1184_);
lean_dec(v___x_1197_);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekOfYear___boxed(lean_object* v_date_1199_, lean_object* v_firstDay_1200_, lean_object* v_minDaysBounded_1201_){
_start:
{
uint8_t v_firstDay_boxed_1202_; lean_object* v_res_1203_; 
v_firstDay_boxed_1202_ = lean_unbox(v_firstDay_1200_);
v_res_1203_ = l_Std_Time_PlainDate_weekOfYear(v_date_1199_, v_firstDay_boxed_1202_, v_minDaysBounded_1201_);
lean_dec(v_minDaysBounded_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear(lean_object* v_date_1204_, uint8_t v_firstDay_1205_, lean_object* v_minDays_1206_){
_start:
{
lean_object* v_year_1207_; lean_object* v_thisYearStart_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; 
v_year_1207_ = lean_ctor_get(v_date_1204_, 0);
lean_inc_n(v_year_1207_, 2);
v_thisYearStart_1208_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v_year_1207_, v_firstDay_1205_, v_minDays_1206_);
v___x_1209_ = l_Std_Time_PlainDate_toEpochDay(v_date_1204_);
v___x_1210_ = l_Std_Time_PlainDate_toEpochDay(v_thisYearStart_1208_);
v___x_1211_ = lean_int_dec_lt(v___x_1209_, v___x_1210_);
lean_dec(v___x_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v_nextYearStart_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1212_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1213_ = lean_int_add(v_year_1207_, v___x_1212_);
lean_inc(v___x_1213_);
v_nextYearStart_1214_ = l_Std_Time_PlainDate_startOfWeekBasedYear(v___x_1213_, v_firstDay_1205_, v_minDays_1206_);
v___x_1215_ = l_Std_Time_PlainDate_toEpochDay(v_nextYearStart_1214_);
v___x_1216_ = lean_int_dec_le(v___x_1215_, v___x_1209_);
lean_dec(v___x_1209_);
lean_dec(v___x_1215_);
if (v___x_1216_ == 0)
{
lean_dec(v___x_1213_);
return v_year_1207_;
}
else
{
lean_dec(v_year_1207_);
return v___x_1213_;
}
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_dec(v___x_1209_);
v___x_1217_ = lean_obj_once(&l_Std_Time_instInhabitedPlainDate___closed__0, &l_Std_Time_instInhabitedPlainDate___closed__0_once, _init_l_Std_Time_instInhabitedPlainDate___closed__0);
v___x_1218_ = lean_int_sub(v_year_1207_, v___x_1217_);
lean_dec(v_year_1207_);
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainDate_weekYear___boxed(lean_object* v_date_1219_, lean_object* v_firstDay_1220_, lean_object* v_minDays_1221_){
_start:
{
uint8_t v_firstDay_boxed_1222_; lean_object* v_res_1223_; 
v_firstDay_boxed_1222_ = lean_unbox(v_firstDay_1220_);
v_res_1223_ = l_Std_Time_PlainDate_weekYear(v_date_1219_, v_firstDay_boxed_1222_, v_minDays_1221_);
lean_dec(v_minDays_1221_);
return v_res_1223_;
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
