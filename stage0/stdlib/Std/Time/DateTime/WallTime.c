// Lean compiler output
// Module: Std.Time.DateTime.WallTime
// Imports: public import Init.System.IO public import Std.Time.Duration
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
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
extern lean_object* l_Std_Time_instOrdDuration;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__11;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprWallTime_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprWallTime_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__15_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__16_value;
static const lean_string_object l_Std_Time_instReprWallTime_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instReprWallTime_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_instReprWallTime_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__1(lean_object*);
static const lean_closure_object l_Std_Time_instReprWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprWallTime_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprWallTime___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprWallTime = (const lean_object*)&l_Std_Time_instReprWallTime___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedWallTime_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedWallTime_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedWallTime_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedWallTime;
LEAN_EXPORT lean_object* l_Std_Time_instLEWallTime;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instLTWallTime;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdWallTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdWallTime___closed__0 = (const lean_object*)&l_Std_Time_instOrdWallTime___closed__0_value;
static lean_once_cell_t l_Std_Time_instOrdWallTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdWallTime___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime;
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instToStringWallTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringWallTime___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringWallTime___closed__0 = (const lean_object*)&l_Std_Time_instToStringWallTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringWallTime = (const lean_object*)&l_Std_Time_instToStringWallTime___closed__0_value;
static const lean_string_object l_Std_Time_instReprWallTime__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "WallTime.ofNanoseconds "};
static const lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprWallTime__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__0_value)}};
static const lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__1 = (const lean_object*)&l_Std_Time_instReprWallTime__1___lam__0___closed__1_value;
static lean_once_cell_t l_Std_Time_instReprWallTime__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWallTime__1___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprWallTime__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprWallTime__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprWallTime__1___closed__0 = (const lean_object*)&l_Std_Time_instReprWallTime__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprWallTime__1 = (const lean_object*)&l_Std_Time_instReprWallTime__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_ofMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_ofMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_WallTime_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_WallTime_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration___boxed(lean_object*);
static const lean_closure_object l_Std_Time_WallTime_instHAddDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddDuration___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddDuration = (const lean_object*)&l_Std_Time_WallTime_instHAddDuration___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubDuration = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__1 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__1 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__2 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__2 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__3 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__3 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__4 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__4 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__5 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__5 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHAddOffset__6 = (const lean_object*)&l_Std_Time_WallTime_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_WallTime_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubOffset__6 = (const lean_object*)&l_Std_Time_WallTime_instHSubOffset__6___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_WallTime_instHSubDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_WallTime_instHSubDuration__1___closed__0 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_WallTime_instHSubDuration__1 = (const lean_object*)&l_Std_Time_WallTime_instHSubDuration__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(7u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__0));
v___x_21_ = lean_string_length(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__10, &l_Std_Time_instReprWallTime_repr___redArg___closed__10_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__10);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_to_int(v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___redArg(lean_object* v_x_33_){
_start:
{
lean_object* v_second_34_; lean_object* v_nano_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_88_; 
v_second_34_ = lean_ctor_get(v_x_33_, 0);
v_nano_35_ = lean_ctor_get(v_x_33_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_x_33_);
if (v_isSharedCheck_88_ == 0)
{
v___x_37_ = v_x_33_;
v_isShared_38_ = v_isSharedCheck_88_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_nano_35_);
lean_inc(v_second_34_);
lean_dec(v_x_33_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_88_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___y_42_; lean_object* v___y_43_; lean_object* v_fst_63_; lean_object* v_fst_64_; lean_object* v_snd_65_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_39_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__6));
v___x_40_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_76_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_77_ = lean_int_dec_lt(v___x_76_, v_second_34_);
if (v___x_77_ == 0)
{
uint8_t v___x_78_; 
v___x_78_ = lean_int_dec_lt(v_second_34_, v___x_76_);
if (v___x_78_ == 0)
{
uint8_t v___x_79_; 
v___x_79_ = lean_int_dec_lt(v_nano_35_, v___x_76_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
v___x_80_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__16));
lean_inc(v_nano_35_);
v_fst_63_ = v___x_80_;
v_fst_64_ = v_second_34_;
v_snd_65_ = v_nano_35_;
goto v___jp_62_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__17));
v___x_82_ = lean_int_neg(v_second_34_);
lean_dec(v_second_34_);
v___x_83_ = lean_int_neg(v_nano_35_);
v_fst_63_ = v___x_81_;
v_fst_64_ = v___x_82_;
v_snd_65_ = v___x_83_;
goto v___jp_62_;
}
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__17));
v___x_85_ = lean_int_neg(v_second_34_);
lean_dec(v_second_34_);
v___x_86_ = lean_int_neg(v_nano_35_);
v_fst_63_ = v___x_84_;
v_fst_64_ = v___x_85_;
v_snd_65_ = v___x_86_;
goto v___jp_62_;
}
}
else
{
lean_object* v___x_87_; 
v___x_87_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__16));
lean_inc(v_nano_35_);
v_fst_63_ = v___x_87_;
v_fst_64_ = v_second_34_;
v_snd_65_ = v_nano_35_;
goto v___jp_62_;
}
v___jp_41_:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_44_ = lean_string_append(v___y_42_, v___y_43_);
lean_dec_ref(v___y_43_);
v___x_45_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__8));
v___x_46_ = lean_string_append(v___x_44_, v___x_45_);
v___x_47_ = l_String_quote(v___x_46_);
v___x_48_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
if (v_isShared_38_ == 0)
{
lean_ctor_set_tag(v___x_37_, 4);
lean_ctor_set(v___x_37_, 1, v___x_48_);
lean_ctor_set(v___x_37_, 0, v___x_40_);
v___x_50_ = v___x_37_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v___x_48_);
v___x_50_ = v_reuseFailAlloc_61_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
uint8_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_51_ = 0;
v___x_52_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set_uint8(v___x_52_, sizeof(void*)*1, v___x_51_);
v___x_53_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_39_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__11, &l_Std_Time_instReprWallTime_repr___redArg___closed__11_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__11);
v___x_55_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__12));
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_53_);
v___x_57_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__13));
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_54_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*1, v___x_51_);
return v___x_60_;
}
}
v___jp_62_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_66_ = l_Int_repr(v_fst_64_);
lean_dec(v_fst_64_);
lean_inc_ref(v_fst_63_);
v___x_67_ = lean_string_append(v_fst_63_, v___x_66_);
lean_dec_ref(v___x_66_);
v___x_68_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_69_ = lean_int_dec_eq(v_nano_35_, v___x_68_);
lean_dec(v_nano_35_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_70_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__15));
v___x_71_ = lean_unsigned_to_nat(9u);
v___x_72_ = l_Int_repr(v_snd_65_);
lean_dec(v_snd_65_);
v___x_73_ = l_Std_Time_instToStringDuration_leftPad(v___x_71_, v___x_72_);
lean_dec_ref(v___x_72_);
v___x_74_ = lean_string_append(v___x_70_, v___x_73_);
lean_dec_ref(v___x_73_);
v___y_42_ = v___x_67_;
v___y_43_ = v___x_74_;
goto v___jp_41_;
}
else
{
lean_object* v___x_75_; 
lean_dec(v_snd_65_);
v___x_75_ = ((lean_object*)(l_Std_Time_instReprWallTime_repr___redArg___closed__16));
v___y_42_ = v___x_67_;
v___y_43_ = v___x_75_;
goto v___jp_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr(lean_object* v_x_89_, lean_object* v_prec_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Std_Time_instReprWallTime_repr___redArg(v_x_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime_repr___boxed(lean_object* v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Std_Time_instReprWallTime_repr(v_x_92_, v_prec_93_);
lean_dec(v_prec_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprWallTime_repr_spec__1(lean_object* v_a_95_){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_nat_to_int(v_a_95_);
v___x_97_ = l_Rat_ofInt(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime_decEq(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
uint8_t v___x_102_; 
v___x_102_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_100_, v_x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime_decEq___boxed(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l_Std_Time_instDecidableEqWallTime_decEq(v_x_103_, v_x_104_);
lean_dec_ref(v_x_104_);
lean_dec_ref(v_x_103_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWallTime(lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
uint8_t v___x_109_; 
v___x_109_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_107_, v_x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWallTime___boxed(lean_object* v_x_110_, lean_object* v_x_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = l_Std_Time_instDecidableEqWallTime(v_x_110_, v_x_111_);
lean_dec_ref(v_x_111_);
lean_dec_ref(v_x_110_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime_default___closed__0(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime_default(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l_Std_Time_instInhabitedWallTime_default___closed__0, &l_Std_Time_instInhabitedWallTime_default___closed__0_once, _init_l_Std_Time_instInhabitedWallTime_default___closed__0);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedWallTime(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Std_Time_instInhabitedWallTime_default;
return v___x_117_;
}
}
static lean_object* _init_l_Std_Time_instLEWallTime(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
return v___x_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeWallTime(lean_object* v_x_119_, lean_object* v_y_120_){
_start:
{
uint8_t v___x_121_; 
v___x_121_ = l_Std_Time_Duration_instDecidableLe(v_x_119_, v_y_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeWallTime___boxed(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Std_Time_instDecidableLeWallTime(v_x_122_, v_y_123_);
lean_dec_ref(v_y_123_);
lean_dec_ref(v_x_122_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
static lean_object* _init_l_Std_Time_instLTWallTime(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_box(0);
return v___x_126_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtWallTime(lean_object* v_x_127_, lean_object* v_y_128_){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = l_Std_Time_Duration_instDecidableLt(v_x_127_, v_y_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtWallTime___boxed(lean_object* v_x_130_, lean_object* v_y_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_Std_Time_instDecidableLtWallTime(v_x_130_, v_y_131_);
lean_dec_ref(v_y_131_);
lean_dec_ref(v_x_130_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0(lean_object* v_x_134_){
_start:
{
lean_inc_ref(v_x_134_);
return v_x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdWallTime___lam__0___boxed(lean_object* v_x_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Std_Time_instOrdWallTime___lam__0(v_x_135_);
lean_dec_ref(v_x_135_);
return v_res_136_;
}
}
static lean_object* _init_l_Std_Time_instOrdWallTime___closed__1(void){
_start:
{
lean_object* v___f_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___f_138_ = ((lean_object*)(l_Std_Time_instOrdWallTime___closed__0));
v___x_139_ = l_Std_Time_instOrdDuration;
v___x_140_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_140_, 0, lean_box(0));
lean_closure_set(v___x_140_, 1, lean_box(0));
lean_closure_set(v___x_140_, 2, v___x_139_);
lean_closure_set(v___x_140_, 3, v___f_138_);
return v___x_140_;
}
}
static lean_object* _init_l_Std_Time_instOrdWallTime(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_obj_once(&l_Std_Time_instOrdWallTime___closed__1, &l_Std_Time_instOrdWallTime___closed__1_once, _init_l_Std_Time_instOrdWallTime___closed__1);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0(lean_object* v_s_142_){
_start:
{
lean_object* v_second_143_; lean_object* v___x_144_; 
v_second_143_ = lean_ctor_get(v_s_142_, 0);
v___x_144_ = l_Int_repr(v_second_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringWallTime___lam__0___boxed(lean_object* v_s_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Std_Time_instToStringWallTime___lam__0(v_s_145_);
lean_dec_ref(v_s_145_);
return v_res_146_;
}
}
static lean_object* _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(1000000000u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0(lean_object* v_s_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_second_156_; lean_object* v_nano_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_179_; 
v_second_156_ = lean_ctor_get(v_s_154_, 0);
v_nano_157_ = lean_ctor_get(v_s_154_, 1);
v_isSharedCheck_179_ = !lean_is_exclusive(v_s_154_);
if (v_isSharedCheck_179_ == 0)
{
v___x_159_ = v_s_154_;
v_isShared_160_ = v_isSharedCheck_179_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_nano_157_);
lean_inc(v_second_156_);
lean_dec(v_s_154_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_179_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___y_163_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_161_ = ((lean_object*)(l_Std_Time_instReprWallTime__1___lam__0___closed__1));
v___x_168_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_169_ = lean_int_mul(v_second_156_, v___x_168_);
lean_dec(v_second_156_);
v___x_170_ = lean_int_add(v___x_169_, v_nano_157_);
lean_dec(v_nano_157_);
lean_dec(v___x_169_);
v___x_171_ = lean_unsigned_to_nat(0u);
v___x_172_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_173_ = lean_int_dec_lt(v___x_170_, v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = l_Int_repr(v___x_170_);
lean_dec(v___x_170_);
v___x_175_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
v___y_163_ = v___x_175_;
goto v___jp_162_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = l_Int_repr(v___x_170_);
lean_dec(v___x_170_);
v___x_177_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
v___x_178_ = l_Repr_addAppParen(v___x_177_, v___x_171_);
v___y_163_ = v___x_178_;
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_165_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 5);
lean_ctor_set(v___x_159_, 1, v___y_163_);
lean_ctor_set(v___x_159_, 0, v___x_161_);
v___x_165_ = v___x_159_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___y_163_);
v___x_165_ = v_reuseFailAlloc_167_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_166_; 
v___x_166_ = l_Repr_addAppParen(v___x_165_, v___y_155_);
return v___x_166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWallTime__1___lam__0___boxed(lean_object* v_s_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Std_Time_instReprWallTime__1___lam__0(v_s_180_, v___y_181_);
lean_dec(v___y_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration(lean_object* v_duration_185_){
_start:
{
lean_inc_ref(v_duration_185_);
return v_duration_185_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofDuration___boxed(lean_object* v_duration_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Std_Time_WallTime_ofDuration(v_duration_186_);
lean_dec_ref(v_duration_186_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofSeconds(lean_object* v_secs_188_){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_secs_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds(lean_object* v_nanos_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofNanoseconds___boxed(lean_object* v_nanos_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Std_Time_WallTime_ofNanoseconds(v_nanos_193_);
lean_dec(v_nanos_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds(lean_object* v_wt_195_){
_start:
{
lean_object* v_second_196_; 
v_second_196_ = lean_ctor_get(v_wt_195_, 0);
lean_inc(v_second_196_);
return v_second_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toSeconds___boxed(lean_object* v_wt_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Std_Time_WallTime_toSeconds(v_wt_197_);
lean_dec_ref(v_wt_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds(lean_object* v_wt_199_){
_start:
{
lean_object* v_second_200_; lean_object* v_nano_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_nanos_204_; 
v_second_200_ = lean_ctor_get(v_wt_199_, 0);
v_nano_201_ = lean_ctor_get(v_wt_199_, 1);
v___x_202_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_203_ = lean_int_mul(v_second_200_, v___x_202_);
v_nanos_204_ = lean_int_add(v___x_203_, v_nano_201_);
lean_dec(v___x_203_);
return v_nanos_204_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toNanoseconds___boxed(lean_object* v_wt_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Std_Time_WallTime_toNanoseconds(v_wt_205_);
lean_dec_ref(v_wt_205_);
return v_res_206_;
}
}
static lean_object* _init_l_Std_Time_WallTime_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(60u);
v___x_208_ = lean_nat_to_int(v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes(lean_object* v_tm_209_){
_start:
{
lean_object* v_second_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_second_210_ = lean_ctor_get(v_tm_209_, 0);
v___x_211_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_212_ = lean_int_div(v_second_210_, v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMinutes___boxed(lean_object* v_tm_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_WallTime_toMinutes(v_tm_213_);
lean_dec_ref(v_tm_213_);
return v_res_214_;
}
}
static lean_object* _init_l_Std_Time_WallTime_toDays___closed__0(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(86400u);
v___x_216_ = lean_nat_to_int(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays(lean_object* v_tm_217_){
_start:
{
lean_object* v_second_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_second_218_ = lean_ctor_get(v_tm_217_, 0);
v___x_219_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_220_ = lean_int_div(v_second_218_, v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDays___boxed(lean_object* v_tm_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_Time_WallTime_toDays(v_tm_221_);
lean_dec_ref(v_tm_221_);
return v_res_222_;
}
}
static lean_object* _init_l_Std_Time_WallTime_ofMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(1000000u);
v___x_224_ = lean_nat_to_int(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds(lean_object* v_milli_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_226_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_227_ = lean_int_mul(v_milli_225_, v___x_226_);
v___x_228_ = l_Std_Time_Duration_ofNanoseconds(v___x_227_);
lean_dec(v___x_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_ofMilliseconds___boxed(lean_object* v_milli_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Std_Time_WallTime_ofMilliseconds(v_milli_229_);
lean_dec(v_milli_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds(lean_object* v_tm_231_){
_start:
{
lean_object* v_second_232_; lean_object* v_nano_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_second_232_ = lean_ctor_get(v_tm_231_, 0);
v_nano_233_ = lean_ctor_get(v_tm_231_, 1);
v___x_234_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_235_ = lean_int_mul(v_second_232_, v___x_234_);
v___x_236_ = lean_int_add(v___x_235_, v_nano_233_);
lean_dec(v___x_235_);
v___x_237_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_238_ = lean_int_div(v___x_236_, v___x_237_);
lean_dec(v___x_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toMilliseconds___boxed(lean_object* v_tm_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Std_Time_WallTime_toMilliseconds(v_tm_239_);
lean_dec_ref(v_tm_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds(lean_object* v_t_241_, lean_object* v_s_242_){
_start:
{
lean_object* v_second_243_; lean_object* v_nano_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_second_248_; lean_object* v_nano_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_second_243_ = lean_ctor_get(v_t_241_, 0);
v_nano_244_ = lean_ctor_get(v_t_241_, 1);
v___x_245_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_246_ = lean_int_mul(v_s_242_, v___x_245_);
v___x_247_ = l_Std_Time_Duration_ofNanoseconds(v___x_246_);
lean_dec(v___x_246_);
v_second_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_second_248_);
v_nano_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_nano_249_);
lean_dec_ref(v___x_247_);
v___x_250_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_251_ = lean_int_mul(v_second_243_, v___x_250_);
v___x_252_ = lean_int_add(v___x_251_, v_nano_244_);
lean_dec(v___x_251_);
v___x_253_ = lean_int_mul(v_second_248_, v___x_250_);
lean_dec(v_second_248_);
v___x_254_ = lean_int_add(v___x_253_, v_nano_249_);
lean_dec(v_nano_249_);
lean_dec(v___x_253_);
v___x_255_ = lean_int_add(v___x_252_, v___x_254_);
lean_dec(v___x_254_);
lean_dec(v___x_252_);
v___x_256_ = l_Std_Time_Duration_ofNanoseconds(v___x_255_);
lean_dec(v___x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMilliseconds___boxed(lean_object* v_t_257_, lean_object* v_s_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Std_Time_WallTime_addMilliseconds(v_t_257_, v_s_258_);
lean_dec(v_s_258_);
lean_dec_ref(v_t_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds(lean_object* v_t_260_, lean_object* v_s_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v_second_265_; lean_object* v_nano_266_; lean_object* v_second_267_; lean_object* v_nano_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_262_ = lean_obj_once(&l_Std_Time_WallTime_ofMilliseconds___closed__0, &l_Std_Time_WallTime_ofMilliseconds___closed__0_once, _init_l_Std_Time_WallTime_ofMilliseconds___closed__0);
v___x_263_ = lean_int_mul(v_s_261_, v___x_262_);
v___x_264_ = l_Std_Time_Duration_ofNanoseconds(v___x_263_);
lean_dec(v___x_263_);
v_second_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_second_265_);
v_nano_266_ = lean_ctor_get(v___x_264_, 1);
lean_inc(v_nano_266_);
lean_dec_ref(v___x_264_);
v_second_267_ = lean_ctor_get(v_t_260_, 0);
v_nano_268_ = lean_ctor_get(v_t_260_, 1);
v___x_269_ = lean_int_neg(v_second_265_);
lean_dec(v_second_265_);
v___x_270_ = lean_int_neg(v_nano_266_);
lean_dec(v_nano_266_);
v___x_271_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_272_ = lean_int_mul(v_second_267_, v___x_271_);
v___x_273_ = lean_int_add(v___x_272_, v_nano_268_);
lean_dec(v___x_272_);
v___x_274_ = lean_int_mul(v___x_269_, v___x_271_);
lean_dec(v___x_269_);
v___x_275_ = lean_int_add(v___x_274_, v___x_270_);
lean_dec(v___x_270_);
lean_dec(v___x_274_);
v___x_276_ = lean_int_add(v___x_273_, v___x_275_);
lean_dec(v___x_275_);
lean_dec(v___x_273_);
v___x_277_ = l_Std_Time_Duration_ofNanoseconds(v___x_276_);
lean_dec(v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMilliseconds___boxed(lean_object* v_t_278_, lean_object* v_s_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Std_Time_WallTime_subMilliseconds(v_t_278_, v_s_279_);
lean_dec(v_s_279_);
lean_dec_ref(v_t_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds(lean_object* v_t_281_, lean_object* v_s_282_){
_start:
{
lean_object* v_second_283_; lean_object* v_nano_284_; lean_object* v___x_285_; lean_object* v_second_286_; lean_object* v_nano_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_second_283_ = lean_ctor_get(v_t_281_, 0);
v_nano_284_ = lean_ctor_get(v_t_281_, 1);
v___x_285_ = l_Std_Time_Duration_ofNanoseconds(v_s_282_);
v_second_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_second_286_);
v_nano_287_ = lean_ctor_get(v___x_285_, 1);
lean_inc(v_nano_287_);
lean_dec_ref(v___x_285_);
v___x_288_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_289_ = lean_int_mul(v_second_283_, v___x_288_);
v___x_290_ = lean_int_add(v___x_289_, v_nano_284_);
lean_dec(v___x_289_);
v___x_291_ = lean_int_mul(v_second_286_, v___x_288_);
lean_dec(v_second_286_);
v___x_292_ = lean_int_add(v___x_291_, v_nano_287_);
lean_dec(v_nano_287_);
lean_dec(v___x_291_);
v___x_293_ = lean_int_add(v___x_290_, v___x_292_);
lean_dec(v___x_292_);
lean_dec(v___x_290_);
v___x_294_ = l_Std_Time_Duration_ofNanoseconds(v___x_293_);
lean_dec(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addNanoseconds___boxed(lean_object* v_t_295_, lean_object* v_s_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Std_Time_WallTime_addNanoseconds(v_t_295_, v_s_296_);
lean_dec(v_s_296_);
lean_dec_ref(v_t_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds(lean_object* v_t_298_, lean_object* v_s_299_){
_start:
{
lean_object* v___x_300_; lean_object* v_second_301_; lean_object* v_nano_302_; lean_object* v_second_303_; lean_object* v_nano_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_300_ = l_Std_Time_Duration_ofNanoseconds(v_s_299_);
v_second_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_second_301_);
v_nano_302_ = lean_ctor_get(v___x_300_, 1);
lean_inc(v_nano_302_);
lean_dec_ref(v___x_300_);
v_second_303_ = lean_ctor_get(v_t_298_, 0);
v_nano_304_ = lean_ctor_get(v_t_298_, 1);
v___x_305_ = lean_int_neg(v_second_301_);
lean_dec(v_second_301_);
v___x_306_ = lean_int_neg(v_nano_302_);
lean_dec(v_nano_302_);
v___x_307_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_308_ = lean_int_mul(v_second_303_, v___x_307_);
v___x_309_ = lean_int_add(v___x_308_, v_nano_304_);
lean_dec(v___x_308_);
v___x_310_ = lean_int_mul(v___x_305_, v___x_307_);
lean_dec(v___x_305_);
v___x_311_ = lean_int_add(v___x_310_, v___x_306_);
lean_dec(v___x_306_);
lean_dec(v___x_310_);
v___x_312_ = lean_int_add(v___x_309_, v___x_311_);
lean_dec(v___x_311_);
lean_dec(v___x_309_);
v___x_313_ = l_Std_Time_Duration_ofNanoseconds(v___x_312_);
lean_dec(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subNanoseconds___boxed(lean_object* v_t_314_, lean_object* v_s_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Std_Time_WallTime_subNanoseconds(v_t_314_, v_s_315_);
lean_dec(v_s_315_);
lean_dec_ref(v_t_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds(lean_object* v_t_317_, lean_object* v_s_318_){
_start:
{
lean_object* v_second_319_; lean_object* v_nano_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_second_319_ = lean_ctor_get(v_t_317_, 0);
v_nano_320_ = lean_ctor_get(v_t_317_, 1);
v___x_321_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_322_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_323_ = lean_int_mul(v_second_319_, v___x_322_);
v___x_324_ = lean_int_add(v___x_323_, v_nano_320_);
lean_dec(v___x_323_);
v___x_325_ = lean_int_mul(v_s_318_, v___x_322_);
v___x_326_ = lean_int_add(v___x_325_, v___x_321_);
lean_dec(v___x_325_);
v___x_327_ = lean_int_add(v___x_324_, v___x_326_);
lean_dec(v___x_326_);
lean_dec(v___x_324_);
v___x_328_ = l_Std_Time_Duration_ofNanoseconds(v___x_327_);
lean_dec(v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addSeconds___boxed(lean_object* v_t_329_, lean_object* v_s_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_Time_WallTime_addSeconds(v_t_329_, v_s_330_);
lean_dec(v_s_330_);
lean_dec_ref(v_t_329_);
return v_res_331_;
}
}
static lean_object* _init_l_Std_Time_WallTime_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_333_ = lean_int_neg(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds(lean_object* v_t_334_, lean_object* v_s_335_){
_start:
{
lean_object* v_second_336_; lean_object* v_nano_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_second_336_ = lean_ctor_get(v_t_334_, 0);
v_nano_337_ = lean_ctor_get(v_t_334_, 1);
v___x_338_ = lean_int_neg(v_s_335_);
v___x_339_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_340_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_341_ = lean_int_mul(v_second_336_, v___x_340_);
v___x_342_ = lean_int_add(v___x_341_, v_nano_337_);
lean_dec(v___x_341_);
v___x_343_ = lean_int_mul(v___x_338_, v___x_340_);
lean_dec(v___x_338_);
v___x_344_ = lean_int_add(v___x_343_, v___x_339_);
lean_dec(v___x_343_);
v___x_345_ = lean_int_add(v___x_342_, v___x_344_);
lean_dec(v___x_344_);
lean_dec(v___x_342_);
v___x_346_ = l_Std_Time_Duration_ofNanoseconds(v___x_345_);
lean_dec(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subSeconds___boxed(lean_object* v_t_347_, lean_object* v_s_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Std_Time_WallTime_subSeconds(v_t_347_, v_s_348_);
lean_dec(v_s_348_);
lean_dec_ref(v_t_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes(lean_object* v_t_350_, lean_object* v_m_351_){
_start:
{
lean_object* v_second_352_; lean_object* v_nano_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_second_352_ = lean_ctor_get(v_t_350_, 0);
v_nano_353_ = lean_ctor_get(v_t_350_, 1);
v___x_354_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_355_ = lean_int_mul(v_m_351_, v___x_354_);
v___x_356_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_357_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_358_ = lean_int_mul(v_second_352_, v___x_357_);
v___x_359_ = lean_int_add(v___x_358_, v_nano_353_);
lean_dec(v___x_358_);
v___x_360_ = lean_int_mul(v___x_355_, v___x_357_);
lean_dec(v___x_355_);
v___x_361_ = lean_int_add(v___x_360_, v___x_356_);
lean_dec(v___x_360_);
v___x_362_ = lean_int_add(v___x_359_, v___x_361_);
lean_dec(v___x_361_);
lean_dec(v___x_359_);
v___x_363_ = l_Std_Time_Duration_ofNanoseconds(v___x_362_);
lean_dec(v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addMinutes___boxed(lean_object* v_t_364_, lean_object* v_m_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Std_Time_WallTime_addMinutes(v_t_364_, v_m_365_);
lean_dec(v_m_365_);
lean_dec_ref(v_t_364_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes(lean_object* v_t_367_, lean_object* v_m_368_){
_start:
{
lean_object* v_second_369_; lean_object* v_nano_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_second_369_ = lean_ctor_get(v_t_367_, 0);
v_nano_370_ = lean_ctor_get(v_t_367_, 1);
v___x_371_ = lean_obj_once(&l_Std_Time_WallTime_toMinutes___closed__0, &l_Std_Time_WallTime_toMinutes___closed__0_once, _init_l_Std_Time_WallTime_toMinutes___closed__0);
v___x_372_ = lean_int_mul(v_m_368_, v___x_371_);
v___x_373_ = lean_int_neg(v___x_372_);
lean_dec(v___x_372_);
v___x_374_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_375_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_376_ = lean_int_mul(v_second_369_, v___x_375_);
v___x_377_ = lean_int_add(v___x_376_, v_nano_370_);
lean_dec(v___x_376_);
v___x_378_ = lean_int_mul(v___x_373_, v___x_375_);
lean_dec(v___x_373_);
v___x_379_ = lean_int_add(v___x_378_, v___x_374_);
lean_dec(v___x_378_);
v___x_380_ = lean_int_add(v___x_377_, v___x_379_);
lean_dec(v___x_379_);
lean_dec(v___x_377_);
v___x_381_ = l_Std_Time_Duration_ofNanoseconds(v___x_380_);
lean_dec(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subMinutes___boxed(lean_object* v_t_382_, lean_object* v_m_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Std_Time_WallTime_subMinutes(v_t_382_, v_m_383_);
lean_dec(v_m_383_);
lean_dec_ref(v_t_382_);
return v_res_384_;
}
}
static lean_object* _init_l_Std_Time_WallTime_addHours___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_unsigned_to_nat(3600u);
v___x_386_ = lean_nat_to_int(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours(lean_object* v_t_387_, lean_object* v_h_388_){
_start:
{
lean_object* v_second_389_; lean_object* v_nano_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v_second_389_ = lean_ctor_get(v_t_387_, 0);
v_nano_390_ = lean_ctor_get(v_t_387_, 1);
v___x_391_ = lean_obj_once(&l_Std_Time_WallTime_addHours___closed__0, &l_Std_Time_WallTime_addHours___closed__0_once, _init_l_Std_Time_WallTime_addHours___closed__0);
v___x_392_ = lean_int_mul(v_h_388_, v___x_391_);
v___x_393_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_394_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_395_ = lean_int_mul(v_second_389_, v___x_394_);
v___x_396_ = lean_int_add(v___x_395_, v_nano_390_);
lean_dec(v___x_395_);
v___x_397_ = lean_int_mul(v___x_392_, v___x_394_);
lean_dec(v___x_392_);
v___x_398_ = lean_int_add(v___x_397_, v___x_393_);
lean_dec(v___x_397_);
v___x_399_ = lean_int_add(v___x_396_, v___x_398_);
lean_dec(v___x_398_);
lean_dec(v___x_396_);
v___x_400_ = l_Std_Time_Duration_ofNanoseconds(v___x_399_);
lean_dec(v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addHours___boxed(lean_object* v_t_401_, lean_object* v_h_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Std_Time_WallTime_addHours(v_t_401_, v_h_402_);
lean_dec(v_h_402_);
lean_dec_ref(v_t_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours(lean_object* v_t_404_, lean_object* v_h_405_){
_start:
{
lean_object* v_second_406_; lean_object* v_nano_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v_second_406_ = lean_ctor_get(v_t_404_, 0);
v_nano_407_ = lean_ctor_get(v_t_404_, 1);
v___x_408_ = lean_obj_once(&l_Std_Time_WallTime_addHours___closed__0, &l_Std_Time_WallTime_addHours___closed__0_once, _init_l_Std_Time_WallTime_addHours___closed__0);
v___x_409_ = lean_int_mul(v_h_405_, v___x_408_);
v___x_410_ = lean_int_neg(v___x_409_);
lean_dec(v___x_409_);
v___x_411_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_412_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_413_ = lean_int_mul(v_second_406_, v___x_412_);
v___x_414_ = lean_int_add(v___x_413_, v_nano_407_);
lean_dec(v___x_413_);
v___x_415_ = lean_int_mul(v___x_410_, v___x_412_);
lean_dec(v___x_410_);
v___x_416_ = lean_int_add(v___x_415_, v___x_411_);
lean_dec(v___x_415_);
v___x_417_ = lean_int_add(v___x_414_, v___x_416_);
lean_dec(v___x_416_);
lean_dec(v___x_414_);
v___x_418_ = l_Std_Time_Duration_ofNanoseconds(v___x_417_);
lean_dec(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subHours___boxed(lean_object* v_t_419_, lean_object* v_h_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Std_Time_WallTime_subHours(v_t_419_, v_h_420_);
lean_dec(v_h_420_);
lean_dec_ref(v_t_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays(lean_object* v_t_422_, lean_object* v_d_423_){
_start:
{
lean_object* v_second_424_; lean_object* v_nano_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_second_424_ = lean_ctor_get(v_t_422_, 0);
v_nano_425_ = lean_ctor_get(v_t_422_, 1);
v___x_426_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_427_ = lean_int_mul(v_d_423_, v___x_426_);
v___x_428_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_429_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_430_ = lean_int_mul(v_second_424_, v___x_429_);
v___x_431_ = lean_int_add(v___x_430_, v_nano_425_);
lean_dec(v___x_430_);
v___x_432_ = lean_int_mul(v___x_427_, v___x_429_);
lean_dec(v___x_427_);
v___x_433_ = lean_int_add(v___x_432_, v___x_428_);
lean_dec(v___x_432_);
v___x_434_ = lean_int_add(v___x_431_, v___x_433_);
lean_dec(v___x_433_);
lean_dec(v___x_431_);
v___x_435_ = l_Std_Time_Duration_ofNanoseconds(v___x_434_);
lean_dec(v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDays___boxed(lean_object* v_t_436_, lean_object* v_d_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Std_Time_WallTime_addDays(v_t_436_, v_d_437_);
lean_dec(v_d_437_);
lean_dec_ref(v_t_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays(lean_object* v_t_439_, lean_object* v_d_440_){
_start:
{
lean_object* v_second_441_; lean_object* v_nano_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_second_441_ = lean_ctor_get(v_t_439_, 0);
v_nano_442_ = lean_ctor_get(v_t_439_, 1);
v___x_443_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_444_ = lean_int_mul(v_d_440_, v___x_443_);
v___x_445_ = lean_int_neg(v___x_444_);
lean_dec(v___x_444_);
v___x_446_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_447_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_448_ = lean_int_mul(v_second_441_, v___x_447_);
v___x_449_ = lean_int_add(v___x_448_, v_nano_442_);
lean_dec(v___x_448_);
v___x_450_ = lean_int_mul(v___x_445_, v___x_447_);
lean_dec(v___x_445_);
v___x_451_ = lean_int_add(v___x_450_, v___x_446_);
lean_dec(v___x_450_);
v___x_452_ = lean_int_add(v___x_449_, v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_449_);
v___x_453_ = l_Std_Time_Duration_ofNanoseconds(v___x_452_);
lean_dec(v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDays___boxed(lean_object* v_t_454_, lean_object* v_d_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Std_Time_WallTime_subDays(v_t_454_, v_d_455_);
lean_dec(v_d_455_);
lean_dec_ref(v_t_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks(lean_object* v_t_457_, lean_object* v_d_458_){
_start:
{
lean_object* v_second_459_; lean_object* v_nano_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_second_459_ = lean_ctor_get(v_t_457_, 0);
v_nano_460_ = lean_ctor_get(v_t_457_, 1);
v___x_461_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_462_ = lean_int_mul(v_d_458_, v___x_461_);
v___x_463_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_464_ = lean_int_mul(v___x_462_, v___x_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_466_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_467_ = lean_int_mul(v_second_459_, v___x_466_);
v___x_468_ = lean_int_add(v___x_467_, v_nano_460_);
lean_dec(v___x_467_);
v___x_469_ = lean_int_mul(v___x_464_, v___x_466_);
lean_dec(v___x_464_);
v___x_470_ = lean_int_add(v___x_469_, v___x_465_);
lean_dec(v___x_469_);
v___x_471_ = lean_int_add(v___x_468_, v___x_470_);
lean_dec(v___x_470_);
lean_dec(v___x_468_);
v___x_472_ = l_Std_Time_Duration_ofNanoseconds(v___x_471_);
lean_dec(v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addWeeks___boxed(lean_object* v_t_473_, lean_object* v_d_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Std_Time_WallTime_addWeeks(v_t_473_, v_d_474_);
lean_dec(v_d_474_);
lean_dec_ref(v_t_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks(lean_object* v_t_476_, lean_object* v_d_477_){
_start:
{
lean_object* v_second_478_; lean_object* v_nano_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_second_478_ = lean_ctor_get(v_t_476_, 0);
v_nano_479_ = lean_ctor_get(v_t_476_, 1);
v___x_480_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__7, &l_Std_Time_instReprWallTime_repr___redArg___closed__7_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__7);
v___x_481_ = lean_int_mul(v_d_477_, v___x_480_);
v___x_482_ = lean_obj_once(&l_Std_Time_WallTime_toDays___closed__0, &l_Std_Time_WallTime_toDays___closed__0_once, _init_l_Std_Time_WallTime_toDays___closed__0);
v___x_483_ = lean_int_mul(v___x_481_, v___x_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_int_neg(v___x_483_);
lean_dec(v___x_483_);
v___x_485_ = lean_obj_once(&l_Std_Time_WallTime_subSeconds___closed__0, &l_Std_Time_WallTime_subSeconds___closed__0_once, _init_l_Std_Time_WallTime_subSeconds___closed__0);
v___x_486_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_487_ = lean_int_mul(v_second_478_, v___x_486_);
v___x_488_ = lean_int_add(v___x_487_, v_nano_479_);
lean_dec(v___x_487_);
v___x_489_ = lean_int_mul(v___x_484_, v___x_486_);
lean_dec(v___x_484_);
v___x_490_ = lean_int_add(v___x_489_, v___x_485_);
lean_dec(v___x_489_);
v___x_491_ = lean_int_add(v___x_488_, v___x_490_);
lean_dec(v___x_490_);
lean_dec(v___x_488_);
v___x_492_ = l_Std_Time_Duration_ofNanoseconds(v___x_491_);
lean_dec(v___x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subWeeks___boxed(lean_object* v_t_493_, lean_object* v_d_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Std_Time_WallTime_subWeeks(v_t_493_, v_d_494_);
lean_dec(v_d_494_);
lean_dec_ref(v_t_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration(lean_object* v_t_496_, lean_object* v_d_497_){
_start:
{
lean_object* v_second_498_; lean_object* v_nano_499_; lean_object* v_second_500_; lean_object* v_nano_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_second_498_ = lean_ctor_get(v_t_496_, 0);
v_nano_499_ = lean_ctor_get(v_t_496_, 1);
v_second_500_ = lean_ctor_get(v_d_497_, 0);
v_nano_501_ = lean_ctor_get(v_d_497_, 1);
v___x_502_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_503_ = lean_int_mul(v_second_498_, v___x_502_);
v___x_504_ = lean_int_add(v___x_503_, v_nano_499_);
lean_dec(v___x_503_);
v___x_505_ = lean_int_mul(v_second_500_, v___x_502_);
v___x_506_ = lean_int_add(v___x_505_, v_nano_501_);
lean_dec(v___x_505_);
v___x_507_ = lean_int_add(v___x_504_, v___x_506_);
lean_dec(v___x_506_);
lean_dec(v___x_504_);
v___x_508_ = l_Std_Time_Duration_ofNanoseconds(v___x_507_);
lean_dec(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_addDuration___boxed(lean_object* v_t_509_, lean_object* v_d_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Std_Time_WallTime_addDuration(v_t_509_, v_d_510_);
lean_dec_ref(v_d_510_);
lean_dec_ref(v_t_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration(lean_object* v_t_512_, lean_object* v_d_513_){
_start:
{
lean_object* v_second_514_; lean_object* v_nano_515_; lean_object* v_second_516_; lean_object* v_nano_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_second_514_ = lean_ctor_get(v_d_513_, 0);
v_nano_515_ = lean_ctor_get(v_d_513_, 1);
v_second_516_ = lean_ctor_get(v_t_512_, 0);
v_nano_517_ = lean_ctor_get(v_t_512_, 1);
v___x_518_ = lean_int_neg(v_second_514_);
v___x_519_ = lean_int_neg(v_nano_515_);
v___x_520_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_521_ = lean_int_mul(v_second_516_, v___x_520_);
v___x_522_ = lean_int_add(v___x_521_, v_nano_517_);
lean_dec(v___x_521_);
v___x_523_ = lean_int_mul(v___x_518_, v___x_520_);
lean_dec(v___x_518_);
v___x_524_ = lean_int_add(v___x_523_, v___x_519_);
lean_dec(v___x_519_);
lean_dec(v___x_523_);
v___x_525_ = lean_int_add(v___x_522_, v___x_524_);
lean_dec(v___x_524_);
lean_dec(v___x_522_);
v___x_526_ = l_Std_Time_Duration_ofNanoseconds(v___x_525_);
lean_dec(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_subDuration___boxed(lean_object* v_t_527_, lean_object* v_d_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_Time_WallTime_subDuration(v_t_527_, v_d_528_);
lean_dec_ref(v_d_528_);
lean_dec_ref(v_t_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration(lean_object* v_wt_530_){
_start:
{
lean_inc_ref(v_wt_530_);
return v_wt_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_toDuration___boxed(lean_object* v_wt_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Std_Time_WallTime_toDuration(v_wt_531_);
lean_dec_ref(v_wt_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0(lean_object* v_x_565_, lean_object* v_y_566_){
_start:
{
lean_object* v_second_567_; lean_object* v_nano_568_; lean_object* v_second_569_; lean_object* v_nano_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_second_567_ = lean_ctor_get(v_y_566_, 0);
v_nano_568_ = lean_ctor_get(v_y_566_, 1);
v_second_569_ = lean_ctor_get(v_x_565_, 0);
v_nano_570_ = lean_ctor_get(v_x_565_, 1);
v___x_571_ = lean_int_neg(v_second_567_);
v___x_572_ = lean_int_neg(v_nano_568_);
v___x_573_ = lean_obj_once(&l_Std_Time_instReprWallTime__1___lam__0___closed__2, &l_Std_Time_instReprWallTime__1___lam__0___closed__2_once, _init_l_Std_Time_instReprWallTime__1___lam__0___closed__2);
v___x_574_ = lean_int_mul(v_second_569_, v___x_573_);
v___x_575_ = lean_int_add(v___x_574_, v_nano_570_);
lean_dec(v___x_574_);
v___x_576_ = lean_int_mul(v___x_571_, v___x_573_);
lean_dec(v___x_571_);
v___x_577_ = lean_int_add(v___x_576_, v___x_572_);
lean_dec(v___x_572_);
lean_dec(v___x_576_);
v___x_578_ = lean_int_add(v___x_575_, v___x_577_);
lean_dec(v___x_577_);
lean_dec(v___x_575_);
v___x_579_ = l_Std_Time_Duration_ofNanoseconds(v___x_578_);
lean_dec(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instHSubDuration__1___lam__0___boxed(lean_object* v_x_580_, lean_object* v_y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Std_Time_WallTime_instHSubDuration__1___lam__0(v_x_580_, v_y_581_);
lean_dec_ref(v_y_581_);
lean_dec_ref(v_x_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_WallTime_instOfNat(lean_object* v_n_585_){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_586_ = lean_nat_to_int(v_n_585_);
v___x_587_ = lean_obj_once(&l_Std_Time_instReprWallTime_repr___redArg___closed__14, &l_Std_Time_instReprWallTime_repr___redArg___closed__14_once, _init_l_Std_Time_instReprWallTime_repr___redArg___closed__14);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
return v___x_588_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedWallTime_default = _init_l_Std_Time_instInhabitedWallTime_default();
lean_mark_persistent(l_Std_Time_instInhabitedWallTime_default);
l_Std_Time_instInhabitedWallTime = _init_l_Std_Time_instInhabitedWallTime();
lean_mark_persistent(l_Std_Time_instInhabitedWallTime);
l_Std_Time_instLEWallTime = _init_l_Std_Time_instLEWallTime();
lean_mark_persistent(l_Std_Time_instLEWallTime);
l_Std_Time_instLTWallTime = _init_l_Std_Time_instLTWallTime();
lean_mark_persistent(l_Std_Time_instLTWallTime);
l_Std_Time_instOrdWallTime = _init_l_Std_Time_instOrdWallTime();
lean_mark_persistent(l_Std_Time_instOrdWallTime);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Time_Duration(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_DateTime_WallTime(builtin);
}
#ifdef __cplusplus
}
#endif
