// Lean compiler output
// Module: Std.Time.Time.PlainTime
// Imports: public import Std.Time.Time.Basic
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
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Std_Time_Hour_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Time_Minute_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Time_Second_instReprOrdinal___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Minute_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Hour_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprPlainTime_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hour"};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprPlainTime_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minute"};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Time_instReprPlainTime_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__12;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__14 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__14_value;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "nanosecond"};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__16_value;
static lean_once_cell_t l_Std_Time_instReprPlainTime_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__17;
static const lean_string_object l_Std_Time_instReprPlainTime_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__18 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Time_instReprPlainTime_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__19;
static lean_once_cell_t l_Std_Time_instReprPlainTime_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__20;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__21 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__21_value;
static const lean_ctor_object l_Std_Time_instReprPlainTime_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Time_instReprPlainTime_repr___redArg___closed__22 = (const lean_object*)&l_Std_Time_instReprPlainTime_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprPlainTime_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprPlainTime___closed__0 = (const lean_object*)&l_Std_Time_instReprPlainTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprPlainTime = (const lean_object*)&l_Std_Time_instReprPlainTime___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainTime_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainTime_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainTime___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__1;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__2;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__3;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__4;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__5;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__6;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__7;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__8;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__9;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__10;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__11;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__12;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__13;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__14;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__15;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__16;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__17;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__18;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__19;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__20;
static lean_once_cell_t l_Std_Time_instInhabitedPlainTime___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedPlainTime___closed__21;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedPlainTime;
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__3___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__0 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__0_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainTime___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__1 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__1_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainTime___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__2 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__2_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdPlainTime___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__3 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__3_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Hour_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__4 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__4_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Minute_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__5 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__5_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__6 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__6_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__4_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__0_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__7 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__7_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__5_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__1_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__8 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__8_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Second_instOrdOrdinal___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__9 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__9_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__9_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__2_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__10 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__10_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__6_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__3_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__11 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__11_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__10_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__11_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__12 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__12_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__8_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__12_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__13 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__13_value;
static const lean_closure_object l_Std_Time_instOrdPlainTime___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareLex___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__7_value),((lean_object*)&l_Std_Time_instOrdPlainTime___closed__13_value)} };
static const lean_object* l_Std_Time_instOrdPlainTime___closed__14 = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__14_value;
LEAN_EXPORT const lean_object* l_Std_Time_instOrdPlainTime = (const lean_object*)&l_Std_Time_instOrdPlainTime___closed__14_value;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__0;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__1;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__2;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__3;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__4;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__5;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__6;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__7;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__8;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__9;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__10;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__11;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__12;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__13;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__14;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__15;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__16;
static lean_once_cell_t l_Std_Time_PlainTime_midnight___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_midnight___closed__17;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_midnight;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHourMinuteSecondsNano(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHourMinuteSeconds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_PlainTime_toMilliseconds_spec__1(lean_object*);
static lean_once_cell_t l_Std_Time_PlainTime_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toMilliseconds___closed__0;
static lean_once_cell_t l_Std_Time_PlainTime_toMilliseconds___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toMilliseconds___closed__1;
static lean_once_cell_t l_Std_Time_PlainTime_toMilliseconds___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toMilliseconds___closed__2;
static lean_once_cell_t l_Std_Time_PlainTime_toMilliseconds___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toMilliseconds___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_PlainTime_toMilliseconds_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_PlainTime_toNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toNanoseconds___closed__0;
static lean_once_cell_t l_Std_Time_PlainTime_toNanoseconds___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toNanoseconds___closed__1;
static lean_once_cell_t l_Std_Time_PlainTime_toNanoseconds___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toNanoseconds___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainTime_toSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toSeconds___closed__0;
static lean_once_cell_t l_Std_Time_PlainTime_toSeconds___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_toSeconds___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMinutes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toHours___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_PlainTime_ofNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_PlainTime_ofNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMinutes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHours___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_millisecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_millisecond___boxed(lean_object*);
static const lean_closure_object l_Std_Time_PlainTime_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHAddOffset = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHSubOffset = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHAddOffset__1 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHSubOffset__1 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHAddOffset__2 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHSubOffset__2 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHAddOffset__3 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHSubOffset__3 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHAddOffset__4 = (const lean_object*)&l_Std_Time_PlainTime_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_PlainTime_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_PlainTime_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_PlainTime_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_PlainTime_instHSubOffset__4 = (const lean_object*)&l_Std_Time_PlainTime_instHSubOffset__4___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprPlainTime_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(8u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(10u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(14u);
v___x_33_ = lean_nat_to_int(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__0));
v___x_36_ = lean_string_length(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Std_Time_instReprPlainTime_repr___redArg___closed__19, &l_Std_Time_instReprPlainTime_repr___redArg___closed__19_once, _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__19);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___redArg(lean_object* v_x_43_){
_start:
{
lean_object* v_hour_44_; lean_object* v_minute_45_; lean_object* v_second_46_; lean_object* v_nanosecond_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_hour_44_ = lean_ctor_get(v_x_43_, 0);
v_minute_45_ = lean_ctor_get(v_x_43_, 1);
v_second_46_ = lean_ctor_get(v_x_43_, 2);
v_nanosecond_47_ = lean_ctor_get(v_x_43_, 3);
v___x_48_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Std_Time_instReprPlainTime_repr___redArg___closed__7, &l_Std_Time_instReprPlainTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__7);
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = l_Std_Time_Hour_instReprOrdinal___lam__0(v_hour_44_, v___x_51_);
v___x_53_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_50_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = 0;
v___x_55_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_55_, sizeof(void*)*1, v___x_54_);
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_49_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__9));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_box(1);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__11));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_48_);
v___x_64_ = lean_obj_once(&l_Std_Time_instReprPlainTime_repr___redArg___closed__12, &l_Std_Time_instReprPlainTime_repr___redArg___closed__12_once, _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__12);
v___x_65_ = l_Std_Time_Minute_instReprOrdinal___lam__0(v_minute_45_, v___x_51_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_54_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_57_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_59_);
v___x_71_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__14));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_48_);
v___x_74_ = l_Std_Time_Second_instReprOrdinal___redArg___lam__0(v_second_46_, v___x_51_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_64_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_76_, sizeof(void*)*1, v___x_54_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_73_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_57_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_59_);
v___x_80_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__16));
v___x_81_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_48_);
v___x_83_ = lean_obj_once(&l_Std_Time_instReprPlainTime_repr___redArg___closed__17, &l_Std_Time_instReprPlainTime_repr___redArg___closed__17_once, _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__17);
v___x_84_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_nanosecond_47_, v___x_51_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___x_54_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_82_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_obj_once(&l_Std_Time_instReprPlainTime_repr___redArg___closed__20, &l_Std_Time_instReprPlainTime_repr___redArg___closed__20_once, _init_l_Std_Time_instReprPlainTime_repr___redArg___closed__20);
v___x_89_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__21));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_87_);
v___x_91_ = ((lean_object*)(l_Std_Time_instReprPlainTime_repr___redArg___closed__22));
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_88_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_54_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___redArg___boxed(lean_object* v_x_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Std_Time_instReprPlainTime_repr___redArg(v_x_95_);
lean_dec_ref(v_x_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr(lean_object* v_x_97_, lean_object* v_prec_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Std_Time_instReprPlainTime_repr___redArg(v_x_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprPlainTime_repr___boxed(lean_object* v_x_100_, lean_object* v_prec_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Std_Time_instReprPlainTime_repr(v_x_100_, v_prec_101_);
lean_dec(v_prec_101_);
lean_dec_ref(v_x_100_);
return v_res_102_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainTime_decEq(lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
lean_object* v_hour_107_; lean_object* v_minute_108_; lean_object* v_second_109_; lean_object* v_nanosecond_110_; lean_object* v_hour_111_; lean_object* v_minute_112_; lean_object* v_second_113_; lean_object* v_nanosecond_114_; uint8_t v___x_115_; 
v_hour_107_ = lean_ctor_get(v_x_105_, 0);
v_minute_108_ = lean_ctor_get(v_x_105_, 1);
v_second_109_ = lean_ctor_get(v_x_105_, 2);
v_nanosecond_110_ = lean_ctor_get(v_x_105_, 3);
v_hour_111_ = lean_ctor_get(v_x_106_, 0);
v_minute_112_ = lean_ctor_get(v_x_106_, 1);
v_second_113_ = lean_ctor_get(v_x_106_, 2);
v_nanosecond_114_ = lean_ctor_get(v_x_106_, 3);
v___x_115_ = lean_int_dec_eq(v_hour_107_, v_hour_111_);
if (v___x_115_ == 0)
{
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
v___x_116_ = lean_int_dec_eq(v_minute_108_, v_minute_112_);
if (v___x_116_ == 0)
{
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = lean_int_dec_eq(v_second_109_, v_second_113_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
uint8_t v___x_118_; 
v___x_118_ = lean_int_dec_eq(v_nanosecond_110_, v_nanosecond_114_);
return v___x_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainTime_decEq___boxed(lean_object* v_x_119_, lean_object* v_x_120_){
_start:
{
uint8_t v_res_121_; lean_object* v_r_122_; 
v_res_121_ = l_Std_Time_instDecidableEqPlainTime_decEq(v_x_119_, v_x_120_);
lean_dec_ref(v_x_120_);
lean_dec_ref(v_x_119_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqPlainTime(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v___x_125_; 
v___x_125_ = l_Std_Time_instDecidableEqPlainTime_decEq(v_x_123_, v_x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqPlainTime___boxed(lean_object* v_x_126_, lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Std_Time_instDecidableEqPlainTime(v_x_126_, v_x_127_);
lean_dec_ref(v_x_127_);
lean_dec_ref(v_x_126_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__0(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__1(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(23u);
v___x_133_ = lean_nat_to_int(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__2(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__1, &l_Std_Time_instInhabitedPlainTime___closed__1_once, _init_l_Std_Time_instInhabitedPlainTime___closed__1);
v___x_135_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_136_ = lean_int_add(v___x_135_, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__3(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_138_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__2, &l_Std_Time_instInhabitedPlainTime___closed__2_once, _init_l_Std_Time_instInhabitedPlainTime___closed__2);
v___x_139_ = lean_int_sub(v___x_138_, v___x_137_);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__4(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_nat_to_int(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__5(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v_range_144_; 
v___x_142_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__4, &l_Std_Time_instInhabitedPlainTime___closed__4_once, _init_l_Std_Time_instInhabitedPlainTime___closed__4);
v___x_143_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__3, &l_Std_Time_instInhabitedPlainTime___closed__3_once, _init_l_Std_Time_instInhabitedPlainTime___closed__3);
v_range_144_ = lean_int_add(v___x_143_, v___x_142_);
return v_range_144_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__6(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_146_ = lean_int_sub(v___x_145_, v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__7(void){
_start:
{
lean_object* v_range_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_range_147_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__5, &l_Std_Time_instInhabitedPlainTime___closed__5_once, _init_l_Std_Time_instInhabitedPlainTime___closed__5);
v___x_148_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__6, &l_Std_Time_instInhabitedPlainTime___closed__6_once, _init_l_Std_Time_instInhabitedPlainTime___closed__6);
v___x_149_ = lean_int_emod(v___x_148_, v_range_147_);
return v___x_149_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__8(void){
_start:
{
lean_object* v_range_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_range_150_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__5, &l_Std_Time_instInhabitedPlainTime___closed__5_once, _init_l_Std_Time_instInhabitedPlainTime___closed__5);
v___x_151_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__7, &l_Std_Time_instInhabitedPlainTime___closed__7_once, _init_l_Std_Time_instInhabitedPlainTime___closed__7);
v___x_152_ = lean_int_add(v___x_151_, v_range_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__9(void){
_start:
{
lean_object* v_range_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_range_153_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__5, &l_Std_Time_instInhabitedPlainTime___closed__5_once, _init_l_Std_Time_instInhabitedPlainTime___closed__5);
v___x_154_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__8, &l_Std_Time_instInhabitedPlainTime___closed__8_once, _init_l_Std_Time_instInhabitedPlainTime___closed__8);
v___x_155_ = lean_int_emod(v___x_154_, v_range_153_);
return v___x_155_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__10(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_157_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__9, &l_Std_Time_instInhabitedPlainTime___closed__9_once, _init_l_Std_Time_instInhabitedPlainTime___closed__9);
v___x_158_ = lean_int_add(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__11(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(59u);
v___x_160_ = lean_nat_to_int(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__12(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__11, &l_Std_Time_instInhabitedPlainTime___closed__11_once, _init_l_Std_Time_instInhabitedPlainTime___closed__11);
v___x_162_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_163_ = lean_int_add(v___x_162_, v___x_161_);
return v___x_163_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__13(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_165_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__12, &l_Std_Time_instInhabitedPlainTime___closed__12_once, _init_l_Std_Time_instInhabitedPlainTime___closed__12);
v___x_166_ = lean_int_sub(v___x_165_, v___x_164_);
return v___x_166_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__14(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_range_169_; 
v___x_167_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__4, &l_Std_Time_instInhabitedPlainTime___closed__4_once, _init_l_Std_Time_instInhabitedPlainTime___closed__4);
v___x_168_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__13, &l_Std_Time_instInhabitedPlainTime___closed__13_once, _init_l_Std_Time_instInhabitedPlainTime___closed__13);
v_range_169_ = lean_int_add(v___x_168_, v___x_167_);
return v_range_169_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__15(void){
_start:
{
lean_object* v_range_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_range_170_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__14, &l_Std_Time_instInhabitedPlainTime___closed__14_once, _init_l_Std_Time_instInhabitedPlainTime___closed__14);
v___x_171_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__6, &l_Std_Time_instInhabitedPlainTime___closed__6_once, _init_l_Std_Time_instInhabitedPlainTime___closed__6);
v___x_172_ = lean_int_emod(v___x_171_, v_range_170_);
return v___x_172_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__16(void){
_start:
{
lean_object* v_range_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_range_173_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__14, &l_Std_Time_instInhabitedPlainTime___closed__14_once, _init_l_Std_Time_instInhabitedPlainTime___closed__14);
v___x_174_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__15, &l_Std_Time_instInhabitedPlainTime___closed__15_once, _init_l_Std_Time_instInhabitedPlainTime___closed__15);
v___x_175_ = lean_int_add(v___x_174_, v_range_173_);
return v___x_175_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__17(void){
_start:
{
lean_object* v_range_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v_range_176_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__14, &l_Std_Time_instInhabitedPlainTime___closed__14_once, _init_l_Std_Time_instInhabitedPlainTime___closed__14);
v___x_177_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__16, &l_Std_Time_instInhabitedPlainTime___closed__16_once, _init_l_Std_Time_instInhabitedPlainTime___closed__16);
v___x_178_ = lean_int_emod(v___x_177_, v_range_176_);
return v___x_178_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__18(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_180_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__17, &l_Std_Time_instInhabitedPlainTime___closed__17_once, _init_l_Std_Time_instInhabitedPlainTime___closed__17);
v___x_181_ = lean_int_add(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__19(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_unsigned_to_nat(1000000000u);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = lean_nat_mod(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__20(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__19, &l_Std_Time_instInhabitedPlainTime___closed__19_once, _init_l_Std_Time_instInhabitedPlainTime___closed__19);
v___x_186_ = lean_nat_to_int(v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime___closed__21(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__20, &l_Std_Time_instInhabitedPlainTime___closed__20_once, _init_l_Std_Time_instInhabitedPlainTime___closed__20);
v___x_188_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__18, &l_Std_Time_instInhabitedPlainTime___closed__18_once, _init_l_Std_Time_instInhabitedPlainTime___closed__18);
v___x_189_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__10, &l_Std_Time_instInhabitedPlainTime___closed__10_once, _init_l_Std_Time_instInhabitedPlainTime___closed__10);
v___x_190_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_188_);
lean_ctor_set(v___x_190_, 2, v___x_188_);
lean_ctor_set(v___x_190_, 3, v___x_187_);
return v___x_190_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedPlainTime(void){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__21, &l_Std_Time_instInhabitedPlainTime___closed__21_once, _init_l_Std_Time_instInhabitedPlainTime___closed__21);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__0(lean_object* v_x_192_){
_start:
{
lean_object* v_hour_193_; 
v_hour_193_ = lean_ctor_get(v_x_192_, 0);
lean_inc(v_hour_193_);
return v_hour_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__0___boxed(lean_object* v_x_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Std_Time_instOrdPlainTime___lam__0(v_x_194_);
lean_dec_ref(v_x_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__1(lean_object* v_x_196_){
_start:
{
lean_object* v_minute_197_; 
v_minute_197_ = lean_ctor_get(v_x_196_, 1);
lean_inc(v_minute_197_);
return v_minute_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__1___boxed(lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_Time_instOrdPlainTime___lam__1(v_x_198_);
lean_dec_ref(v_x_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__2(lean_object* v_x_200_){
_start:
{
lean_object* v_second_201_; 
v_second_201_ = lean_ctor_get(v_x_200_, 2);
lean_inc(v_second_201_);
return v_second_201_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__2___boxed(lean_object* v_x_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Std_Time_instOrdPlainTime___lam__2(v_x_202_);
lean_dec_ref(v_x_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__3(lean_object* v_x_204_){
_start:
{
lean_object* v_nanosecond_205_; 
v_nanosecond_205_ = lean_ctor_get(v_x_204_, 3);
lean_inc(v_nanosecond_205_);
return v_nanosecond_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdPlainTime___lam__3___boxed(lean_object* v_x_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_Time_instOrdPlainTime___lam__3(v_x_206_);
lean_dec_ref(v_x_206_);
return v_res_207_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__0(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_unsigned_to_nat(23u);
v___x_239_ = lean_nat_to_int(v___x_238_);
return v___x_239_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__1(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__0, &l_Std_Time_PlainTime_midnight___closed__0_once, _init_l_Std_Time_PlainTime_midnight___closed__0);
v___x_241_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_242_ = lean_int_add(v___x_241_, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__2(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_244_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__1, &l_Std_Time_PlainTime_midnight___closed__1_once, _init_l_Std_Time_PlainTime_midnight___closed__1);
v___x_245_ = lean_int_sub(v___x_244_, v___x_243_);
return v___x_245_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__3(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_range_248_; 
v___x_246_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__4, &l_Std_Time_instInhabitedPlainTime___closed__4_once, _init_l_Std_Time_instInhabitedPlainTime___closed__4);
v___x_247_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__2, &l_Std_Time_PlainTime_midnight___closed__2_once, _init_l_Std_Time_PlainTime_midnight___closed__2);
v_range_248_ = lean_int_add(v___x_247_, v___x_246_);
return v_range_248_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__4(void){
_start:
{
lean_object* v_range_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_range_249_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__3, &l_Std_Time_PlainTime_midnight___closed__3_once, _init_l_Std_Time_PlainTime_midnight___closed__3);
v___x_250_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__6, &l_Std_Time_instInhabitedPlainTime___closed__6_once, _init_l_Std_Time_instInhabitedPlainTime___closed__6);
v___x_251_ = lean_int_emod(v___x_250_, v_range_249_);
return v___x_251_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__5(void){
_start:
{
lean_object* v_range_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_range_252_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__3, &l_Std_Time_PlainTime_midnight___closed__3_once, _init_l_Std_Time_PlainTime_midnight___closed__3);
v___x_253_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__4, &l_Std_Time_PlainTime_midnight___closed__4_once, _init_l_Std_Time_PlainTime_midnight___closed__4);
v___x_254_ = lean_int_add(v___x_253_, v_range_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__6(void){
_start:
{
lean_object* v_range_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v_range_255_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__3, &l_Std_Time_PlainTime_midnight___closed__3_once, _init_l_Std_Time_PlainTime_midnight___closed__3);
v___x_256_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__5, &l_Std_Time_PlainTime_midnight___closed__5_once, _init_l_Std_Time_PlainTime_midnight___closed__5);
v___x_257_ = lean_int_emod(v___x_256_, v_range_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__7(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_259_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__6, &l_Std_Time_PlainTime_midnight___closed__6_once, _init_l_Std_Time_PlainTime_midnight___closed__6);
v___x_260_ = lean_int_add(v___x_259_, v___x_258_);
return v___x_260_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__8(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(59u);
v___x_262_ = lean_nat_to_int(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__9(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__8, &l_Std_Time_PlainTime_midnight___closed__8_once, _init_l_Std_Time_PlainTime_midnight___closed__8);
v___x_264_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_265_ = lean_int_add(v___x_264_, v___x_263_);
return v___x_265_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__10(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_267_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__9, &l_Std_Time_PlainTime_midnight___closed__9_once, _init_l_Std_Time_PlainTime_midnight___closed__9);
v___x_268_ = lean_int_sub(v___x_267_, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__11(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_range_271_; 
v___x_269_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__4, &l_Std_Time_instInhabitedPlainTime___closed__4_once, _init_l_Std_Time_instInhabitedPlainTime___closed__4);
v___x_270_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__10, &l_Std_Time_PlainTime_midnight___closed__10_once, _init_l_Std_Time_PlainTime_midnight___closed__10);
v_range_271_ = lean_int_add(v___x_270_, v___x_269_);
return v_range_271_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__12(void){
_start:
{
lean_object* v_range_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_range_272_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__11, &l_Std_Time_PlainTime_midnight___closed__11_once, _init_l_Std_Time_PlainTime_midnight___closed__11);
v___x_273_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__6, &l_Std_Time_instInhabitedPlainTime___closed__6_once, _init_l_Std_Time_instInhabitedPlainTime___closed__6);
v___x_274_ = lean_int_emod(v___x_273_, v_range_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__13(void){
_start:
{
lean_object* v_range_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_range_275_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__11, &l_Std_Time_PlainTime_midnight___closed__11_once, _init_l_Std_Time_PlainTime_midnight___closed__11);
v___x_276_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__12, &l_Std_Time_PlainTime_midnight___closed__12_once, _init_l_Std_Time_PlainTime_midnight___closed__12);
v___x_277_ = lean_int_add(v___x_276_, v_range_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__14(void){
_start:
{
lean_object* v_range_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_range_278_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__11, &l_Std_Time_PlainTime_midnight___closed__11_once, _init_l_Std_Time_PlainTime_midnight___closed__11);
v___x_279_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__13, &l_Std_Time_PlainTime_midnight___closed__13_once, _init_l_Std_Time_PlainTime_midnight___closed__13);
v___x_280_ = lean_int_emod(v___x_279_, v_range_278_);
return v___x_280_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__15(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__0, &l_Std_Time_instInhabitedPlainTime___closed__0_once, _init_l_Std_Time_instInhabitedPlainTime___closed__0);
v___x_282_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__14, &l_Std_Time_PlainTime_midnight___closed__14_once, _init_l_Std_Time_PlainTime_midnight___closed__14);
v___x_283_ = lean_int_add(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__16(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__19, &l_Std_Time_instInhabitedPlainTime___closed__19_once, _init_l_Std_Time_instInhabitedPlainTime___closed__19);
v___x_285_ = lean_nat_to_int(v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight___closed__17(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_286_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__16, &l_Std_Time_PlainTime_midnight___closed__16_once, _init_l_Std_Time_PlainTime_midnight___closed__16);
v___x_287_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__15, &l_Std_Time_PlainTime_midnight___closed__15_once, _init_l_Std_Time_PlainTime_midnight___closed__15);
v___x_288_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__7, &l_Std_Time_PlainTime_midnight___closed__7_once, _init_l_Std_Time_PlainTime_midnight___closed__7);
v___x_289_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_287_);
lean_ctor_set(v___x_289_, 2, v___x_287_);
lean_ctor_set(v___x_289_, 3, v___x_286_);
return v___x_289_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_midnight(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_obj_once(&l_Std_Time_PlainTime_midnight___closed__17, &l_Std_Time_PlainTime_midnight___closed__17_once, _init_l_Std_Time_PlainTime_midnight___closed__17);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHourMinuteSecondsNano(lean_object* v_hour_291_, lean_object* v_minute_292_, lean_object* v_second_293_, lean_object* v_nano_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_295_, 0, v_hour_291_);
lean_ctor_set(v___x_295_, 1, v_minute_292_);
lean_ctor_set(v___x_295_, 2, v_second_293_);
lean_ctor_set(v___x_295_, 3, v_nano_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHourMinuteSeconds(lean_object* v_hour_296_, lean_object* v_minute_297_, lean_object* v_second_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_obj_once(&l_Std_Time_instInhabitedPlainTime___closed__20, &l_Std_Time_instInhabitedPlainTime___closed__20_once, _init_l_Std_Time_instInhabitedPlainTime___closed__20);
v___x_300_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_300_, 0, v_hour_296_);
lean_ctor_set(v___x_300_, 1, v_minute_297_);
lean_ctor_set(v___x_300_, 2, v_second_298_);
lean_ctor_set(v___x_300_, 3, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_PlainTime_toMilliseconds_spec__1(lean_object* v_a_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Rat_ofInt(v_a_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(3600000u);
v___x_304_ = lean_nat_to_int(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toMilliseconds___closed__1(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(60000u);
v___x_306_ = lean_nat_to_int(v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toMilliseconds___closed__2(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(1000u);
v___x_308_ = lean_nat_to_int(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toMilliseconds___closed__3(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(1000000u);
v___x_310_ = lean_nat_to_int(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMilliseconds(lean_object* v_time_311_){
_start:
{
lean_object* v_hour_312_; lean_object* v_minute_313_; lean_object* v_second_314_; lean_object* v_nanosecond_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_hour_312_ = lean_ctor_get(v_time_311_, 0);
v_minute_313_ = lean_ctor_get(v_time_311_, 1);
v_second_314_ = lean_ctor_get(v_time_311_, 2);
v_nanosecond_315_ = lean_ctor_get(v_time_311_, 3);
v___x_316_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__0, &l_Std_Time_PlainTime_toMilliseconds___closed__0_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__0);
v___x_317_ = lean_int_mul(v_hour_312_, v___x_316_);
v___x_318_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__1, &l_Std_Time_PlainTime_toMilliseconds___closed__1_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__1);
v___x_319_ = lean_int_mul(v_minute_313_, v___x_318_);
v___x_320_ = lean_int_add(v___x_317_, v___x_319_);
lean_dec(v___x_319_);
lean_dec(v___x_317_);
v___x_321_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__2, &l_Std_Time_PlainTime_toMilliseconds___closed__2_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__2);
v___x_322_ = lean_int_mul(v_second_314_, v___x_321_);
v___x_323_ = lean_int_add(v___x_320_, v___x_322_);
lean_dec(v___x_322_);
lean_dec(v___x_320_);
v___x_324_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__3, &l_Std_Time_PlainTime_toMilliseconds___closed__3_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__3);
v___x_325_ = lean_int_div(v_nanosecond_315_, v___x_324_);
v___x_326_ = lean_int_add(v___x_323_, v___x_325_);
lean_dec(v___x_325_);
lean_dec(v___x_323_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMilliseconds___boxed(lean_object* v_time_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Std_Time_PlainTime_toMilliseconds(v_time_327_);
lean_dec_ref(v_time_327_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_PlainTime_toMilliseconds_spec__0(lean_object* v_a_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_nat_to_int(v_a_329_);
v___x_331_ = l_Rat_ofInt(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_cstr_to_nat("3600000000000");
v___x_333_ = lean_nat_to_int(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toNanoseconds___closed__1(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_cstr_to_nat("60000000000");
v___x_335_ = lean_nat_to_int(v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toNanoseconds___closed__2(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(1000000000u);
v___x_337_ = lean_nat_to_int(v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object* v_time_338_){
_start:
{
lean_object* v_hour_339_; lean_object* v_minute_340_; lean_object* v_second_341_; lean_object* v_nanosecond_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_hour_339_ = lean_ctor_get(v_time_338_, 0);
v_minute_340_ = lean_ctor_get(v_time_338_, 1);
v_second_341_ = lean_ctor_get(v_time_338_, 2);
v_nanosecond_342_ = lean_ctor_get(v_time_338_, 3);
v___x_343_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__0, &l_Std_Time_PlainTime_toNanoseconds___closed__0_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__0);
v___x_344_ = lean_int_mul(v_hour_339_, v___x_343_);
v___x_345_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__1, &l_Std_Time_PlainTime_toNanoseconds___closed__1_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__1);
v___x_346_ = lean_int_mul(v_minute_340_, v___x_345_);
v___x_347_ = lean_int_add(v___x_344_, v___x_346_);
lean_dec(v___x_346_);
lean_dec(v___x_344_);
v___x_348_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__2, &l_Std_Time_PlainTime_toNanoseconds___closed__2_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__2);
v___x_349_ = lean_int_mul(v_second_341_, v___x_348_);
v___x_350_ = lean_int_add(v___x_347_, v___x_349_);
lean_dec(v___x_349_);
lean_dec(v___x_347_);
v___x_351_ = lean_int_add(v___x_350_, v_nanosecond_342_);
lean_dec(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toNanoseconds___boxed(lean_object* v_time_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Std_Time_PlainTime_toNanoseconds(v_time_352_);
lean_dec_ref(v_time_352_);
return v_res_353_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(3600u);
v___x_355_ = lean_nat_to_int(v___x_354_);
return v___x_355_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_toSeconds___closed__1(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(60u);
v___x_357_ = lean_nat_to_int(v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toSeconds(lean_object* v_time_358_){
_start:
{
lean_object* v_hour_359_; lean_object* v_minute_360_; lean_object* v_second_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_hour_359_ = lean_ctor_get(v_time_358_, 0);
v_minute_360_ = lean_ctor_get(v_time_358_, 1);
v_second_361_ = lean_ctor_get(v_time_358_, 2);
v___x_362_ = lean_obj_once(&l_Std_Time_PlainTime_toSeconds___closed__0, &l_Std_Time_PlainTime_toSeconds___closed__0_once, _init_l_Std_Time_PlainTime_toSeconds___closed__0);
v___x_363_ = lean_int_mul(v_hour_359_, v___x_362_);
v___x_364_ = lean_obj_once(&l_Std_Time_PlainTime_toSeconds___closed__1, &l_Std_Time_PlainTime_toSeconds___closed__1_once, _init_l_Std_Time_PlainTime_toSeconds___closed__1);
v___x_365_ = lean_int_mul(v_minute_360_, v___x_364_);
v___x_366_ = lean_int_add(v___x_363_, v___x_365_);
lean_dec(v___x_365_);
lean_dec(v___x_363_);
v___x_367_ = lean_int_add(v___x_366_, v_second_361_);
lean_dec(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toSeconds___boxed(lean_object* v_time_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Std_Time_PlainTime_toSeconds(v_time_368_);
lean_dec_ref(v_time_368_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMinutes(lean_object* v_time_370_){
_start:
{
lean_object* v_hour_371_; lean_object* v_minute_372_; lean_object* v_second_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_hour_371_ = lean_ctor_get(v_time_370_, 0);
v_minute_372_ = lean_ctor_get(v_time_370_, 1);
v_second_373_ = lean_ctor_get(v_time_370_, 2);
v___x_374_ = lean_obj_once(&l_Std_Time_PlainTime_toSeconds___closed__1, &l_Std_Time_PlainTime_toSeconds___closed__1_once, _init_l_Std_Time_PlainTime_toSeconds___closed__1);
v___x_375_ = lean_int_mul(v_hour_371_, v___x_374_);
v___x_376_ = lean_int_add(v___x_375_, v_minute_372_);
lean_dec(v___x_375_);
v___x_377_ = lean_int_div(v_second_373_, v___x_374_);
v___x_378_ = lean_int_add(v___x_376_, v___x_377_);
lean_dec(v___x_377_);
lean_dec(v___x_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toMinutes___boxed(lean_object* v_time_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Std_Time_PlainTime_toMinutes(v_time_379_);
lean_dec_ref(v_time_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toHours(lean_object* v_time_381_){
_start:
{
lean_object* v_hour_382_; 
v_hour_382_ = lean_ctor_get(v_time_381_, 0);
lean_inc(v_hour_382_);
return v_hour_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_toHours___boxed(lean_object* v_time_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Std_Time_PlainTime_toHours(v_time_383_);
lean_dec_ref(v_time_383_);
return v_res_384_;
}
}
static lean_object* _init_l_Std_Time_PlainTime_ofNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_unsigned_to_nat(24u);
v___x_386_ = lean_nat_to_int(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object* v_nanos_387_){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v_remainingNanos_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_hours_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v_minutes_397_; lean_object* v_seconds_398_; lean_object* v___x_399_; 
v___x_388_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__2, &l_Std_Time_PlainTime_toNanoseconds___closed__2_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__2);
v___x_389_ = lean_int_ediv(v_nanos_387_, v___x_388_);
v_remainingNanos_390_ = lean_int_emod(v_nanos_387_, v___x_388_);
v___x_391_ = lean_obj_once(&l_Std_Time_PlainTime_toSeconds___closed__0, &l_Std_Time_PlainTime_toSeconds___closed__0_once, _init_l_Std_Time_PlainTime_toSeconds___closed__0);
v___x_392_ = lean_int_ediv(v___x_389_, v___x_391_);
v___x_393_ = lean_obj_once(&l_Std_Time_PlainTime_ofNanoseconds___closed__0, &l_Std_Time_PlainTime_ofNanoseconds___closed__0_once, _init_l_Std_Time_PlainTime_ofNanoseconds___closed__0);
v_hours_394_ = lean_int_emod(v___x_392_, v___x_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_int_emod(v___x_389_, v___x_391_);
v___x_396_ = lean_obj_once(&l_Std_Time_PlainTime_toSeconds___closed__1, &l_Std_Time_PlainTime_toSeconds___closed__1_once, _init_l_Std_Time_PlainTime_toSeconds___closed__1);
v_minutes_397_ = lean_int_ediv(v___x_395_, v___x_396_);
lean_dec(v___x_395_);
v_seconds_398_ = lean_int_emod(v___x_389_, v___x_396_);
lean_dec(v___x_389_);
v___x_399_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_399_, 0, v_hours_394_);
lean_ctor_set(v___x_399_, 1, v_minutes_397_);
lean_ctor_set(v___x_399_, 2, v_seconds_398_);
lean_ctor_set(v___x_399_, 3, v_remainingNanos_390_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofNanoseconds___boxed(lean_object* v_nanos_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Std_Time_PlainTime_ofNanoseconds(v_nanos_400_);
lean_dec(v_nanos_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMilliseconds(lean_object* v_millis_402_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__3, &l_Std_Time_PlainTime_toMilliseconds___closed__3_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__3);
v___x_404_ = lean_int_mul(v_millis_402_, v___x_403_);
v___x_405_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_404_);
lean_dec(v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMilliseconds___boxed(lean_object* v_millis_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Std_Time_PlainTime_ofMilliseconds(v_millis_406_);
lean_dec(v_millis_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofSeconds(lean_object* v_secs_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__2, &l_Std_Time_PlainTime_toNanoseconds___closed__2_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__2);
v___x_410_ = lean_int_mul(v_secs_408_, v___x_409_);
v___x_411_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_410_);
lean_dec(v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofSeconds___boxed(lean_object* v_secs_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Std_Time_PlainTime_ofSeconds(v_secs_412_);
lean_dec(v_secs_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMinutes(lean_object* v_secs_414_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__1, &l_Std_Time_PlainTime_toNanoseconds___closed__1_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__1);
v___x_416_ = lean_int_mul(v_secs_414_, v___x_415_);
v___x_417_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_416_);
lean_dec(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofMinutes___boxed(lean_object* v_secs_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Std_Time_PlainTime_ofMinutes(v_secs_418_);
lean_dec(v_secs_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHours(lean_object* v_hour_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_421_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__0, &l_Std_Time_PlainTime_toNanoseconds___closed__0_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__0);
v___x_422_ = lean_int_mul(v_hour_420_, v___x_421_);
v___x_423_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_422_);
lean_dec(v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_ofHours___boxed(lean_object* v_hour_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Std_Time_PlainTime_ofHours(v_hour_424_);
lean_dec(v_hour_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addSeconds(lean_object* v_time_426_, lean_object* v_secondsToAdd_427_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v_totalSeconds_431_; lean_object* v___x_432_; 
v___x_428_ = l_Std_Time_PlainTime_toNanoseconds(v_time_426_);
v___x_429_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__2, &l_Std_Time_PlainTime_toNanoseconds___closed__2_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__2);
v___x_430_ = lean_int_mul(v_secondsToAdd_427_, v___x_429_);
v_totalSeconds_431_ = lean_int_add(v___x_428_, v___x_430_);
lean_dec(v___x_430_);
lean_dec(v___x_428_);
v___x_432_ = l_Std_Time_PlainTime_ofNanoseconds(v_totalSeconds_431_);
lean_dec(v_totalSeconds_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addSeconds___boxed(lean_object* v_time_433_, lean_object* v_secondsToAdd_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Std_Time_PlainTime_addSeconds(v_time_433_, v_secondsToAdd_434_);
lean_dec(v_secondsToAdd_434_);
lean_dec_ref(v_time_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subSeconds(lean_object* v_time_436_, lean_object* v_secondsToSub_437_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_totalSeconds_442_; lean_object* v___x_443_; 
v___x_438_ = lean_int_neg(v_secondsToSub_437_);
v___x_439_ = l_Std_Time_PlainTime_toNanoseconds(v_time_436_);
v___x_440_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__2, &l_Std_Time_PlainTime_toNanoseconds___closed__2_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__2);
v___x_441_ = lean_int_mul(v___x_438_, v___x_440_);
lean_dec(v___x_438_);
v_totalSeconds_442_ = lean_int_add(v___x_439_, v___x_441_);
lean_dec(v___x_441_);
lean_dec(v___x_439_);
v___x_443_ = l_Std_Time_PlainTime_ofNanoseconds(v_totalSeconds_442_);
lean_dec(v_totalSeconds_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subSeconds___boxed(lean_object* v_time_444_, lean_object* v_secondsToSub_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Std_Time_PlainTime_subSeconds(v_time_444_, v_secondsToSub_445_);
lean_dec(v_secondsToSub_445_);
lean_dec_ref(v_time_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMinutes(lean_object* v_time_447_, lean_object* v_minutesToAdd_448_){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v_total_452_; lean_object* v___x_453_; 
v___x_449_ = l_Std_Time_PlainTime_toNanoseconds(v_time_447_);
v___x_450_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__1, &l_Std_Time_PlainTime_toNanoseconds___closed__1_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__1);
v___x_451_ = lean_int_mul(v_minutesToAdd_448_, v___x_450_);
v_total_452_ = lean_int_add(v___x_449_, v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_449_);
v___x_453_ = l_Std_Time_PlainTime_ofNanoseconds(v_total_452_);
lean_dec(v_total_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMinutes___boxed(lean_object* v_time_454_, lean_object* v_minutesToAdd_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_Time_PlainTime_addMinutes(v_time_454_, v_minutesToAdd_455_);
lean_dec(v_minutesToAdd_455_);
lean_dec_ref(v_time_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMinutes(lean_object* v_time_457_, lean_object* v_minutesToSub_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v_total_463_; lean_object* v___x_464_; 
v___x_459_ = lean_int_neg(v_minutesToSub_458_);
v___x_460_ = l_Std_Time_PlainTime_toNanoseconds(v_time_457_);
v___x_461_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__1, &l_Std_Time_PlainTime_toNanoseconds___closed__1_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__1);
v___x_462_ = lean_int_mul(v___x_459_, v___x_461_);
lean_dec(v___x_459_);
v_total_463_ = lean_int_add(v___x_460_, v___x_462_);
lean_dec(v___x_462_);
lean_dec(v___x_460_);
v___x_464_ = l_Std_Time_PlainTime_ofNanoseconds(v_total_463_);
lean_dec(v_total_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMinutes___boxed(lean_object* v_time_465_, lean_object* v_minutesToSub_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Std_Time_PlainTime_subMinutes(v_time_465_, v_minutesToSub_466_);
lean_dec(v_minutesToSub_466_);
lean_dec_ref(v_time_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addHours(lean_object* v_time_468_, lean_object* v_hoursToAdd_469_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v_total_473_; lean_object* v___x_474_; 
v___x_470_ = l_Std_Time_PlainTime_toNanoseconds(v_time_468_);
v___x_471_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__0, &l_Std_Time_PlainTime_toNanoseconds___closed__0_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__0);
v___x_472_ = lean_int_mul(v_hoursToAdd_469_, v___x_471_);
v_total_473_ = lean_int_add(v___x_470_, v___x_472_);
lean_dec(v___x_472_);
lean_dec(v___x_470_);
v___x_474_ = l_Std_Time_PlainTime_ofNanoseconds(v_total_473_);
lean_dec(v_total_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addHours___boxed(lean_object* v_time_475_, lean_object* v_hoursToAdd_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Std_Time_PlainTime_addHours(v_time_475_, v_hoursToAdd_476_);
lean_dec(v_hoursToAdd_476_);
lean_dec_ref(v_time_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subHours(lean_object* v_time_478_, lean_object* v_hoursToSub_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v_total_484_; lean_object* v___x_485_; 
v___x_480_ = lean_int_neg(v_hoursToSub_479_);
v___x_481_ = l_Std_Time_PlainTime_toNanoseconds(v_time_478_);
v___x_482_ = lean_obj_once(&l_Std_Time_PlainTime_toNanoseconds___closed__0, &l_Std_Time_PlainTime_toNanoseconds___closed__0_once, _init_l_Std_Time_PlainTime_toNanoseconds___closed__0);
v___x_483_ = lean_int_mul(v___x_480_, v___x_482_);
lean_dec(v___x_480_);
v_total_484_ = lean_int_add(v___x_481_, v___x_483_);
lean_dec(v___x_483_);
lean_dec(v___x_481_);
v___x_485_ = l_Std_Time_PlainTime_ofNanoseconds(v_total_484_);
lean_dec(v_total_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subHours___boxed(lean_object* v_time_486_, lean_object* v_hoursToSub_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Std_Time_PlainTime_subHours(v_time_486_, v_hoursToSub_487_);
lean_dec(v_hoursToSub_487_);
lean_dec_ref(v_time_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addNanoseconds(lean_object* v_time_489_, lean_object* v_nanosToAdd_490_){
_start:
{
lean_object* v___x_491_; lean_object* v_total_492_; lean_object* v___x_493_; 
v___x_491_ = l_Std_Time_PlainTime_toNanoseconds(v_time_489_);
v_total_492_ = lean_int_add(v___x_491_, v_nanosToAdd_490_);
lean_dec(v___x_491_);
v___x_493_ = l_Std_Time_PlainTime_ofNanoseconds(v_total_492_);
lean_dec(v_total_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addNanoseconds___boxed(lean_object* v_time_494_, lean_object* v_nanosToAdd_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Std_Time_PlainTime_addNanoseconds(v_time_494_, v_nanosToAdd_495_);
lean_dec(v_nanosToAdd_495_);
lean_dec_ref(v_time_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subNanoseconds(lean_object* v_time_497_, lean_object* v_nanosToSub_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_int_neg(v_nanosToSub_498_);
v___x_500_ = l_Std_Time_PlainTime_addNanoseconds(v_time_497_, v___x_499_);
lean_dec(v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subNanoseconds___boxed(lean_object* v_time_501_, lean_object* v_nanosToSub_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_Time_PlainTime_subNanoseconds(v_time_501_, v_nanosToSub_502_);
lean_dec(v_nanosToSub_502_);
lean_dec_ref(v_time_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMilliseconds(lean_object* v_time_504_, lean_object* v_millisToAdd_505_){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_506_ = l_Std_Time_PlainTime_toMilliseconds(v_time_504_);
v___x_507_ = lean_int_add(v___x_506_, v_millisToAdd_505_);
lean_dec(v___x_506_);
v___x_508_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__3, &l_Std_Time_PlainTime_toMilliseconds___closed__3_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__3);
v___x_509_ = lean_int_mul(v___x_507_, v___x_508_);
lean_dec(v___x_507_);
v___x_510_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_509_);
lean_dec(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_addMilliseconds___boxed(lean_object* v_time_511_, lean_object* v_millisToAdd_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Std_Time_PlainTime_addMilliseconds(v_time_511_, v_millisToAdd_512_);
lean_dec(v_millisToAdd_512_);
lean_dec_ref(v_time_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMilliseconds(lean_object* v_time_514_, lean_object* v_millisToSub_515_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_int_neg(v_millisToSub_515_);
v___x_517_ = l_Std_Time_PlainTime_addMilliseconds(v_time_514_, v___x_516_);
lean_dec(v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_subMilliseconds___boxed(lean_object* v_time_518_, lean_object* v_millisToSub_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Std_Time_PlainTime_subMilliseconds(v_time_518_, v_millisToSub_519_);
lean_dec(v_millisToSub_519_);
lean_dec_ref(v_time_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withSeconds(lean_object* v_pt_521_, lean_object* v_second_522_){
_start:
{
lean_object* v_hour_523_; lean_object* v_minute_524_; lean_object* v_nanosecond_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
v_hour_523_ = lean_ctor_get(v_pt_521_, 0);
v_minute_524_ = lean_ctor_get(v_pt_521_, 1);
v_nanosecond_525_ = lean_ctor_get(v_pt_521_, 3);
v_isSharedCheck_532_ = !lean_is_exclusive(v_pt_521_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v_pt_521_, 2);
lean_dec(v_unused_533_);
v___x_527_ = v_pt_521_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_nanosecond_525_);
lean_inc(v_minute_524_);
lean_inc(v_hour_523_);
lean_dec(v_pt_521_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 2, v_second_522_);
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_hour_523_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_minute_524_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v_second_522_);
lean_ctor_set(v_reuseFailAlloc_531_, 3, v_nanosecond_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMinutes(lean_object* v_pt_534_, lean_object* v_minute_535_){
_start:
{
lean_object* v_hour_536_; lean_object* v_second_537_; lean_object* v_nanosecond_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_hour_536_ = lean_ctor_get(v_pt_534_, 0);
v_second_537_ = lean_ctor_get(v_pt_534_, 2);
v_nanosecond_538_ = lean_ctor_get(v_pt_534_, 3);
v_isSharedCheck_545_ = !lean_is_exclusive(v_pt_534_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v_pt_534_, 1);
lean_dec(v_unused_546_);
v___x_540_ = v_pt_534_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_nanosecond_538_);
lean_inc(v_second_537_);
lean_inc(v_hour_536_);
lean_dec(v_pt_534_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v_minute_535_);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_hour_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_minute_535_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_second_537_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_nanosecond_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMilliseconds(lean_object* v_pt_547_, lean_object* v_millis_548_){
_start:
{
lean_object* v_hour_549_; lean_object* v_minute_550_; lean_object* v_second_551_; lean_object* v_nanosecond_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_564_; 
v_hour_549_ = lean_ctor_get(v_pt_547_, 0);
v_minute_550_ = lean_ctor_get(v_pt_547_, 1);
v_second_551_ = lean_ctor_get(v_pt_547_, 2);
v_nanosecond_552_ = lean_ctor_get(v_pt_547_, 3);
v_isSharedCheck_564_ = !lean_is_exclusive(v_pt_547_);
if (v_isSharedCheck_564_ == 0)
{
v___x_554_ = v_pt_547_;
v_isShared_555_ = v_isSharedCheck_564_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_nanosecond_552_);
lean_inc(v_second_551_);
lean_inc(v_minute_550_);
lean_inc(v_hour_549_);
lean_dec(v_pt_547_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_564_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_556_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__2, &l_Std_Time_PlainTime_toMilliseconds___closed__2_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__2);
v___x_557_ = lean_int_emod(v_nanosecond_552_, v___x_556_);
lean_dec(v_nanosecond_552_);
v___x_558_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__3, &l_Std_Time_PlainTime_toMilliseconds___closed__3_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__3);
v___x_559_ = lean_int_mul(v_millis_548_, v___x_558_);
v___x_560_ = lean_int_add(v___x_559_, v___x_557_);
lean_dec(v___x_557_);
lean_dec(v___x_559_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 3, v___x_560_);
v___x_562_ = v___x_554_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_hour_549_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_minute_550_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_second_551_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withMilliseconds___boxed(lean_object* v_pt_565_, lean_object* v_millis_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Std_Time_PlainTime_withMilliseconds(v_pt_565_, v_millis_566_);
lean_dec(v_millis_566_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withNanoseconds(lean_object* v_pt_568_, lean_object* v_nano_569_){
_start:
{
lean_object* v_hour_570_; lean_object* v_minute_571_; lean_object* v_second_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
v_hour_570_ = lean_ctor_get(v_pt_568_, 0);
v_minute_571_ = lean_ctor_get(v_pt_568_, 1);
v_second_572_ = lean_ctor_get(v_pt_568_, 2);
v_isSharedCheck_579_ = !lean_is_exclusive(v_pt_568_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; 
v_unused_580_ = lean_ctor_get(v_pt_568_, 3);
lean_dec(v_unused_580_);
v___x_574_ = v_pt_568_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_second_572_);
lean_inc(v_minute_571_);
lean_inc(v_hour_570_);
lean_dec(v_pt_568_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 3, v_nano_569_);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_hour_570_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_minute_571_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_second_572_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v_nano_569_);
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
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_withHours(lean_object* v_pt_581_, lean_object* v_hour_582_){
_start:
{
lean_object* v_minute_583_; lean_object* v_second_584_; lean_object* v_nanosecond_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_minute_583_ = lean_ctor_get(v_pt_581_, 1);
v_second_584_ = lean_ctor_get(v_pt_581_, 2);
v_nanosecond_585_ = lean_ctor_get(v_pt_581_, 3);
v_isSharedCheck_592_ = !lean_is_exclusive(v_pt_581_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; 
v_unused_593_ = lean_ctor_get(v_pt_581_, 0);
lean_dec(v_unused_593_);
v___x_587_ = v_pt_581_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_nanosecond_585_);
lean_inc(v_second_584_);
lean_inc(v_minute_583_);
lean_dec(v_pt_581_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v_hour_582_);
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_hour_582_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_minute_583_);
lean_ctor_set(v_reuseFailAlloc_591_, 2, v_second_584_);
lean_ctor_set(v_reuseFailAlloc_591_, 3, v_nanosecond_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_millisecond(lean_object* v_pt_594_){
_start:
{
lean_object* v_nanosecond_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_nanosecond_595_ = lean_ctor_get(v_pt_594_, 3);
v___x_596_ = lean_obj_once(&l_Std_Time_PlainTime_toMilliseconds___closed__3, &l_Std_Time_PlainTime_toMilliseconds___closed__3_once, _init_l_Std_Time_PlainTime_toMilliseconds___closed__3);
v___x_597_ = lean_int_ediv(v_nanosecond_595_, v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_PlainTime_millisecond___boxed(lean_object* v_pt_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Std_Time_PlainTime_millisecond(v_pt_598_);
lean_dec_ref(v_pt_598_);
return v_res_599_;
}
}
lean_object* runtime_initialize_Std_Time_Time_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Time_PlainTime(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Time_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedPlainTime = _init_l_Std_Time_instInhabitedPlainTime();
lean_mark_persistent(l_Std_Time_instInhabitedPlainTime);
l_Std_Time_PlainTime_midnight = _init_l_Std_Time_PlainTime_midnight();
lean_mark_persistent(l_Std_Time_PlainTime_midnight);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Time_PlainTime(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Time_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_PlainTime(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Time_PlainTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Time_PlainTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Time_PlainTime(builtin);
}
#ifdef __cplusplus
}
#endif
