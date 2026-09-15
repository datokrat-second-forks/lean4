// Lean compiler output
// Module: Std.Time.DateTime.Timestamp
// Imports: public import Init.System.IO public import Std.Time.Duration public import Std.Time.DateTime.WallTime
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
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
extern lean_object* l_Std_Time_instOrdDuration;
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__11;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__12 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__14;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__15 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__15_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__16_value;
static const lean_string_object l_Std_Time_instReprTimestamp_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Time_instReprTimestamp_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_instReprTimestamp_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__1(lean_object*);
static const lean_closure_object l_Std_Time_instReprTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprTimestamp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprTimestamp = (const lean_object*)&l_Std_Time_instReprTimestamp___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedTimestamp_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedTimestamp_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimestamp_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedTimestamp;
LEAN_EXPORT lean_object* l_Std_Time_instLETimestamp;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instLTTimestamp;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instToStringTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instToStringTimestamp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instToStringTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instToStringTimestamp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instToStringTimestamp = (const lean_object*)&l_Std_Time_instToStringTimestamp___closed__0_value;
static const lean_string_object l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Timestamp.ofNanoseconds "};
static const lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprTimestamp__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__0_value)}};
static const lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__1 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___lam__0___closed__1_value;
static lean_once_cell_t l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprTimestamp__1___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprTimestamp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprTimestamp__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprTimestamp__1___closed__0 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprTimestamp__1 = (const lean_object*)&l_Std_Time_instReprTimestamp__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_instOrdTimestamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instOrdTimestamp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instOrdTimestamp___closed__0 = (const lean_object*)&l_Std_Time_instOrdTimestamp___closed__0_value;
static lean_once_cell_t l_Std_Time_instOrdTimestamp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdTimestamp___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp;
lean_object* lean_get_current_time();
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_now___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofSecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Timestamp_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Timestamp_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Timestamp_instHAddDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddDuration___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddDuration = (const lean_object*)&l_Std_Time_Timestamp_instHAddDuration___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubDuration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subDuration___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubDuration___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubDuration = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subDays___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__1 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subWeeks___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__1 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__1___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__2 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subHours___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__2___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__2 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__2___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__3 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subMinutes___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__3___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__3 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__3___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__4 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subSeconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__4___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__4 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__4___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__5 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subMilliseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__5___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__5 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__5___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_addNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHAddOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHAddOffset__6 = (const lean_object*)&l_Std_Time_Timestamp_instHAddOffset__6___closed__0_value;
static const lean_closure_object l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_subNanoseconds___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubOffset__6___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubOffset__6 = (const lean_object*)&l_Std_Time_Timestamp_instHSubOffset__6___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Timestamp_instHSubDuration__1___closed__0 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Timestamp_instHSubDuration__1 = (const lean_object*)&l_Std_Time_Timestamp_instHSubDuration__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(7u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__0));
v___x_21_ = lean_string_length(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__10, &l_Std_Time_instReprTimestamp_repr___redArg___closed__10_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__10);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_to_int(v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___redArg(lean_object* v_x_33_){
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
v___x_39_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__6));
v___x_40_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_76_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
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
v___x_80_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__16));
lean_inc(v_nano_35_);
v_fst_63_ = v___x_80_;
v_fst_64_ = v_second_34_;
v_snd_65_ = v_nano_35_;
goto v___jp_62_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__17));
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
v___x_84_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__17));
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
v___x_87_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__16));
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
v___x_45_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__8));
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
v___x_54_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__11, &l_Std_Time_instReprTimestamp_repr___redArg___closed__11_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__11);
v___x_55_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__12));
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_53_);
v___x_57_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__13));
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
v___x_68_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_69_ = lean_int_dec_eq(v_nano_35_, v___x_68_);
lean_dec(v_nano_35_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_70_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__15));
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
v___x_75_ = ((lean_object*)(l_Std_Time_instReprTimestamp_repr___redArg___closed__16));
v___y_42_ = v___x_67_;
v___y_43_ = v___x_75_;
goto v___jp_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr(lean_object* v_x_89_, lean_object* v_prec_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Std_Time_instReprTimestamp_repr___redArg(v_x_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp_repr___boxed(lean_object* v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Std_Time_instReprTimestamp_repr(v_x_92_, v_prec_93_);
lean_dec(v_prec_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprTimestamp_repr_spec__1(lean_object* v_a_95_){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_nat_to_int(v_a_95_);
v___x_97_ = l_Rat_ofInt(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp_decEq(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
uint8_t v___x_102_; 
v___x_102_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_100_, v_x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp_decEq___boxed(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l_Std_Time_instDecidableEqTimestamp_decEq(v_x_103_, v_x_104_);
lean_dec_ref(v_x_104_);
lean_dec_ref(v_x_103_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqTimestamp(lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
uint8_t v___x_109_; 
v___x_109_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_107_, v_x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqTimestamp___boxed(lean_object* v_x_110_, lean_object* v_x_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = l_Std_Time_instDecidableEqTimestamp(v_x_110_, v_x_111_);
lean_dec_ref(v_x_111_);
lean_dec_ref(v_x_110_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp_default___closed__0(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp_default(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l_Std_Time_instInhabitedTimestamp_default___closed__0, &l_Std_Time_instInhabitedTimestamp_default___closed__0_once, _init_l_Std_Time_instInhabitedTimestamp_default___closed__0);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedTimestamp(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Std_Time_instInhabitedTimestamp_default;
return v___x_117_;
}
}
static lean_object* _init_l_Std_Time_instLETimestamp(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
return v___x_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLeTimestamp(lean_object* v_x_119_, lean_object* v_y_120_){
_start:
{
uint8_t v___x_121_; 
v___x_121_ = l_Std_Time_Duration_instDecidableLe(v_x_119_, v_y_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLeTimestamp___boxed(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Std_Time_instDecidableLeTimestamp(v_x_122_, v_y_123_);
lean_dec_ref(v_y_123_);
lean_dec_ref(v_x_122_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
static lean_object* _init_l_Std_Time_instLTTimestamp(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_box(0);
return v___x_126_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableLtTimestamp(lean_object* v_x_127_, lean_object* v_y_128_){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = l_Std_Time_Duration_instDecidableLt(v_x_127_, v_y_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableLtTimestamp___boxed(lean_object* v_x_130_, lean_object* v_y_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_Std_Time_instDecidableLtTimestamp(v_x_130_, v_y_131_);
lean_dec_ref(v_y_131_);
lean_dec_ref(v_x_130_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0(lean_object* v_s_134_){
_start:
{
lean_object* v_second_135_; lean_object* v___x_136_; 
v_second_135_ = lean_ctor_get(v_s_134_, 0);
v___x_136_ = l_Int_repr(v_second_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringTimestamp___lam__0___boxed(lean_object* v_s_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Std_Time_instToStringTimestamp___lam__0(v_s_137_);
lean_dec_ref(v_s_137_);
return v_res_138_;
}
}
static lean_object* _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_unsigned_to_nat(1000000000u);
v___x_145_ = lean_nat_to_int(v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0(lean_object* v_s_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_second_148_; lean_object* v_nano_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_171_; 
v_second_148_ = lean_ctor_get(v_s_146_, 0);
v_nano_149_ = lean_ctor_get(v_s_146_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_s_146_);
if (v_isSharedCheck_171_ == 0)
{
v___x_151_ = v_s_146_;
v_isShared_152_ = v_isSharedCheck_171_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_nano_149_);
lean_inc(v_second_148_);
lean_dec(v_s_146_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_171_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___y_155_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_153_ = ((lean_object*)(l_Std_Time_instReprTimestamp__1___lam__0___closed__1));
v___x_160_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_161_ = lean_int_mul(v_second_148_, v___x_160_);
lean_dec(v_second_148_);
v___x_162_ = lean_int_add(v___x_161_, v_nano_149_);
lean_dec(v_nano_149_);
lean_dec(v___x_161_);
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_165_ = lean_int_dec_lt(v___x_162_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = l_Int_repr(v___x_162_);
lean_dec(v___x_162_);
v___x_167_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
v___y_155_ = v___x_167_;
goto v___jp_154_;
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = l_Int_repr(v___x_162_);
lean_dec(v___x_162_);
v___x_169_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___x_170_ = l_Repr_addAppParen(v___x_169_, v___x_163_);
v___y_155_ = v___x_170_;
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v___x_157_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 5);
lean_ctor_set(v___x_151_, 1, v___y_155_);
lean_ctor_set(v___x_151_, 0, v___x_153_);
v___x_157_ = v___x_151_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_153_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___y_155_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = l_Repr_addAppParen(v___x_157_, v___y_147_);
return v___x_158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprTimestamp__1___lam__0___boxed(lean_object* v_s_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Std_Time_instReprTimestamp__1___lam__0(v_s_172_, v___y_173_);
lean_dec(v___y_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0(lean_object* v_x_177_){
_start:
{
lean_inc_ref(v_x_177_);
return v_x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdTimestamp___lam__0___boxed(lean_object* v_x_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Std_Time_instOrdTimestamp___lam__0(v_x_178_);
lean_dec_ref(v_x_178_);
return v_res_179_;
}
}
static lean_object* _init_l_Std_Time_instOrdTimestamp___closed__1(void){
_start:
{
lean_object* v___f_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___f_181_ = ((lean_object*)(l_Std_Time_instOrdTimestamp___closed__0));
v___x_182_ = l_Std_Time_instOrdDuration;
v___x_183_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_183_, 0, lean_box(0));
lean_closure_set(v___x_183_, 1, lean_box(0));
lean_closure_set(v___x_183_, 2, v___x_182_);
lean_closure_set(v___x_183_, 3, v___f_181_);
return v___x_183_;
}
}
static lean_object* _init_l_Std_Time_instOrdTimestamp(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Std_Time_instOrdTimestamp___closed__1, &l_Std_Time_instOrdTimestamp___closed__1_once, _init_l_Std_Time_instOrdTimestamp___closed__1);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_now___boxed(lean_object* v_a_00___x40___internal___hyg_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = lean_get_current_time();
return v_res_187_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(60u);
v___x_189_ = lean_nat_to_int(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(lean_object* v_tm_190_){
_start:
{
lean_object* v_second_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_second_191_ = lean_ctor_get(v_tm_190_, 0);
v___x_192_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_193_ = lean_int_div(v_second_191_, v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___boxed(lean_object* v_tm_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Std_Time_Timestamp_toMinutesSinceUnixEpoch(v_tm_194_);
lean_dec_ref(v_tm_194_);
return v_res_195_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(86400u);
v___x_197_ = lean_nat_to_int(v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch(lean_object* v_tm_198_){
_start:
{
lean_object* v_second_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_second_199_ = lean_ctor_get(v_tm_198_, 0);
v___x_200_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_201_ = lean_int_div(v_second_199_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDaysSinceUnixEpoch___boxed(lean_object* v_tm_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Std_Time_Timestamp_toDaysSinceUnixEpoch(v_tm_202_);
lean_dec_ref(v_tm_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofSecondsSinceUnixEpoch(lean_object* v_secs_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v_secs_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(lean_object* v_nanos_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Std_Time_Duration_ofNanoseconds(v_nanos_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch___boxed(lean_object* v_nanos_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Time_Timestamp_ofNanosecondsSinceUnixEpoch(v_nanos_209_);
lean_dec(v_nanos_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(lean_object* v_duration_211_){
_start:
{
lean_inc_ref(v_duration_211_);
return v_duration_211_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofDurationSinceUnixEpoch___boxed(lean_object* v_duration_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Std_Time_Timestamp_ofDurationSinceUnixEpoch(v_duration_212_);
lean_dec_ref(v_duration_212_);
return v_res_213_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1000000u);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(lean_object* v_milli_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_218_ = lean_int_mul(v_milli_216_, v___x_217_);
v___x_219_ = l_Std_Time_Duration_ofNanoseconds(v___x_218_);
lean_dec(v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___boxed(lean_object* v_milli_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch(v_milli_220_);
lean_dec(v_milli_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(lean_object* v_t_222_){
_start:
{
lean_object* v_second_223_; 
v_second_223_ = lean_ctor_get(v_t_222_, 0);
lean_inc(v_second_223_);
return v_second_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toSecondsSinceUnixEpoch___boxed(lean_object* v_t_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Std_Time_Timestamp_toSecondsSinceUnixEpoch(v_t_224_);
lean_dec_ref(v_t_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(lean_object* v_tm_226_){
_start:
{
lean_object* v_second_227_; lean_object* v_nano_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v_nanos_231_; 
v_second_227_ = lean_ctor_get(v_tm_226_, 0);
v_nano_228_ = lean_ctor_get(v_tm_226_, 1);
v___x_229_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_230_ = lean_int_mul(v_second_227_, v___x_229_);
v_nanos_231_ = lean_int_add(v___x_230_, v_nano_228_);
lean_dec(v___x_230_);
return v_nanos_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch___boxed(lean_object* v_tm_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Std_Time_Timestamp_toNanosecondsSinceUnixEpoch(v_tm_232_);
lean_dec_ref(v_tm_232_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(lean_object* v_tm_234_){
_start:
{
lean_object* v_second_235_; lean_object* v_nano_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_second_235_ = lean_ctor_get(v_tm_234_, 0);
v_nano_236_ = lean_ctor_get(v_tm_234_, 1);
v___x_237_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_238_ = lean_int_mul(v_second_235_, v___x_237_);
v___x_239_ = lean_int_add(v___x_238_, v_nano_236_);
lean_dec(v___x_238_);
v___x_240_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_241_ = lean_int_div(v___x_239_, v___x_240_);
lean_dec(v___x_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch___boxed(lean_object* v_tm_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_Time_Timestamp_toMillisecondsSinceUnixEpoch(v_tm_242_);
lean_dec_ref(v_tm_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since(lean_object* v_f_244_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lean_get_current_time();
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_267_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_267_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_267_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_267_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v_second_251_; lean_object* v_nano_252_; lean_object* v_second_253_; lean_object* v_nano_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v_second_251_ = lean_ctor_get(v_f_244_, 0);
v_nano_252_ = lean_ctor_get(v_f_244_, 1);
v_second_253_ = lean_ctor_get(v_a_247_, 0);
lean_inc(v_second_253_);
v_nano_254_ = lean_ctor_get(v_a_247_, 1);
lean_inc(v_nano_254_);
lean_dec(v_a_247_);
v___x_255_ = lean_int_neg(v_second_251_);
v___x_256_ = lean_int_neg(v_nano_252_);
v___x_257_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_258_ = lean_int_mul(v_second_253_, v___x_257_);
lean_dec(v_second_253_);
v___x_259_ = lean_int_add(v___x_258_, v_nano_254_);
lean_dec(v_nano_254_);
lean_dec(v___x_258_);
v___x_260_ = lean_int_mul(v___x_255_, v___x_257_);
lean_dec(v___x_255_);
v___x_261_ = lean_int_add(v___x_260_, v___x_256_);
lean_dec(v___x_256_);
lean_dec(v___x_260_);
v___x_262_ = lean_int_add(v___x_259_, v___x_261_);
lean_dec(v___x_261_);
lean_dec(v___x_259_);
v___x_263_ = l_Std_Time_Duration_ofNanoseconds(v___x_262_);
lean_dec(v___x_262_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_263_);
v___x_265_ = v___x_249_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_246_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_246_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_since___boxed(lean_object* v_f_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Std_Time_Timestamp_since(v_f_276_);
lean_dec_ref(v_f_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch(lean_object* v_tm_279_){
_start:
{
lean_inc_ref(v_tm_279_);
return v_tm_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_toDurationSinceUnixEpoch___boxed(lean_object* v_tm_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Std_Time_Timestamp_toDurationSinceUnixEpoch(v_tm_280_);
lean_dec_ref(v_tm_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds(lean_object* v_t_282_, lean_object* v_s_283_){
_start:
{
lean_object* v_second_284_; lean_object* v_nano_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_second_289_; lean_object* v_nano_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_second_284_ = lean_ctor_get(v_t_282_, 0);
v_nano_285_ = lean_ctor_get(v_t_282_, 1);
v___x_286_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_287_ = lean_int_mul(v_s_283_, v___x_286_);
v___x_288_ = l_Std_Time_Duration_ofNanoseconds(v___x_287_);
lean_dec(v___x_287_);
v_second_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_second_289_);
v_nano_290_ = lean_ctor_get(v___x_288_, 1);
lean_inc(v_nano_290_);
lean_dec_ref(v___x_288_);
v___x_291_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_292_ = lean_int_mul(v_second_284_, v___x_291_);
v___x_293_ = lean_int_add(v___x_292_, v_nano_285_);
lean_dec(v___x_292_);
v___x_294_ = lean_int_mul(v_second_289_, v___x_291_);
lean_dec(v_second_289_);
v___x_295_ = lean_int_add(v___x_294_, v_nano_290_);
lean_dec(v_nano_290_);
lean_dec(v___x_294_);
v___x_296_ = lean_int_add(v___x_293_, v___x_295_);
lean_dec(v___x_295_);
lean_dec(v___x_293_);
v___x_297_ = l_Std_Time_Duration_ofNanoseconds(v___x_296_);
lean_dec(v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMilliseconds___boxed(lean_object* v_t_298_, lean_object* v_s_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Std_Time_Timestamp_addMilliseconds(v_t_298_, v_s_299_);
lean_dec(v_s_299_);
lean_dec_ref(v_t_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds(lean_object* v_t_301_, lean_object* v_s_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_second_306_; lean_object* v_nano_307_; lean_object* v_second_308_; lean_object* v_nano_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_303_ = lean_obj_once(&l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_ofMillisecondsSinceUnixEpoch___closed__0);
v___x_304_ = lean_int_mul(v_s_302_, v___x_303_);
v___x_305_ = l_Std_Time_Duration_ofNanoseconds(v___x_304_);
lean_dec(v___x_304_);
v_second_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_second_306_);
v_nano_307_ = lean_ctor_get(v___x_305_, 1);
lean_inc(v_nano_307_);
lean_dec_ref(v___x_305_);
v_second_308_ = lean_ctor_get(v_t_301_, 0);
v_nano_309_ = lean_ctor_get(v_t_301_, 1);
v___x_310_ = lean_int_neg(v_second_306_);
lean_dec(v_second_306_);
v___x_311_ = lean_int_neg(v_nano_307_);
lean_dec(v_nano_307_);
v___x_312_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_313_ = lean_int_mul(v_second_308_, v___x_312_);
v___x_314_ = lean_int_add(v___x_313_, v_nano_309_);
lean_dec(v___x_313_);
v___x_315_ = lean_int_mul(v___x_310_, v___x_312_);
lean_dec(v___x_310_);
v___x_316_ = lean_int_add(v___x_315_, v___x_311_);
lean_dec(v___x_311_);
lean_dec(v___x_315_);
v___x_317_ = lean_int_add(v___x_314_, v___x_316_);
lean_dec(v___x_316_);
lean_dec(v___x_314_);
v___x_318_ = l_Std_Time_Duration_ofNanoseconds(v___x_317_);
lean_dec(v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMilliseconds___boxed(lean_object* v_t_319_, lean_object* v_s_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Std_Time_Timestamp_subMilliseconds(v_t_319_, v_s_320_);
lean_dec(v_s_320_);
lean_dec_ref(v_t_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds(lean_object* v_t_322_, lean_object* v_s_323_){
_start:
{
lean_object* v_second_324_; lean_object* v_nano_325_; lean_object* v___x_326_; lean_object* v_second_327_; lean_object* v_nano_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_second_324_ = lean_ctor_get(v_t_322_, 0);
v_nano_325_ = lean_ctor_get(v_t_322_, 1);
v___x_326_ = l_Std_Time_Duration_ofNanoseconds(v_s_323_);
v_second_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_second_327_);
v_nano_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_nano_328_);
lean_dec_ref(v___x_326_);
v___x_329_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_330_ = lean_int_mul(v_second_324_, v___x_329_);
v___x_331_ = lean_int_add(v___x_330_, v_nano_325_);
lean_dec(v___x_330_);
v___x_332_ = lean_int_mul(v_second_327_, v___x_329_);
lean_dec(v_second_327_);
v___x_333_ = lean_int_add(v___x_332_, v_nano_328_);
lean_dec(v_nano_328_);
lean_dec(v___x_332_);
v___x_334_ = lean_int_add(v___x_331_, v___x_333_);
lean_dec(v___x_333_);
lean_dec(v___x_331_);
v___x_335_ = l_Std_Time_Duration_ofNanoseconds(v___x_334_);
lean_dec(v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addNanoseconds___boxed(lean_object* v_t_336_, lean_object* v_s_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Std_Time_Timestamp_addNanoseconds(v_t_336_, v_s_337_);
lean_dec(v_s_337_);
lean_dec_ref(v_t_336_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds(lean_object* v_t_339_, lean_object* v_s_340_){
_start:
{
lean_object* v___x_341_; lean_object* v_second_342_; lean_object* v_nano_343_; lean_object* v_second_344_; lean_object* v_nano_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_341_ = l_Std_Time_Duration_ofNanoseconds(v_s_340_);
v_second_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_second_342_);
v_nano_343_ = lean_ctor_get(v___x_341_, 1);
lean_inc(v_nano_343_);
lean_dec_ref(v___x_341_);
v_second_344_ = lean_ctor_get(v_t_339_, 0);
v_nano_345_ = lean_ctor_get(v_t_339_, 1);
v___x_346_ = lean_int_neg(v_second_342_);
lean_dec(v_second_342_);
v___x_347_ = lean_int_neg(v_nano_343_);
lean_dec(v_nano_343_);
v___x_348_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_349_ = lean_int_mul(v_second_344_, v___x_348_);
v___x_350_ = lean_int_add(v___x_349_, v_nano_345_);
lean_dec(v___x_349_);
v___x_351_ = lean_int_mul(v___x_346_, v___x_348_);
lean_dec(v___x_346_);
v___x_352_ = lean_int_add(v___x_351_, v___x_347_);
lean_dec(v___x_347_);
lean_dec(v___x_351_);
v___x_353_ = lean_int_add(v___x_350_, v___x_352_);
lean_dec(v___x_352_);
lean_dec(v___x_350_);
v___x_354_ = l_Std_Time_Duration_ofNanoseconds(v___x_353_);
lean_dec(v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subNanoseconds___boxed(lean_object* v_t_355_, lean_object* v_s_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Std_Time_Timestamp_subNanoseconds(v_t_355_, v_s_356_);
lean_dec(v_s_356_);
lean_dec_ref(v_t_355_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds(lean_object* v_t_358_, lean_object* v_s_359_){
_start:
{
lean_object* v_second_360_; lean_object* v_nano_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_second_360_ = lean_ctor_get(v_t_358_, 0);
v_nano_361_ = lean_ctor_get(v_t_358_, 1);
v___x_362_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_363_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_364_ = lean_int_mul(v_second_360_, v___x_363_);
v___x_365_ = lean_int_add(v___x_364_, v_nano_361_);
lean_dec(v___x_364_);
v___x_366_ = lean_int_mul(v_s_359_, v___x_363_);
v___x_367_ = lean_int_add(v___x_366_, v___x_362_);
lean_dec(v___x_366_);
v___x_368_ = lean_int_add(v___x_365_, v___x_367_);
lean_dec(v___x_367_);
lean_dec(v___x_365_);
v___x_369_ = l_Std_Time_Duration_ofNanoseconds(v___x_368_);
lean_dec(v___x_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addSeconds___boxed(lean_object* v_t_370_, lean_object* v_s_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Std_Time_Timestamp_addSeconds(v_t_370_, v_s_371_);
lean_dec(v_s_371_);
lean_dec_ref(v_t_370_);
return v_res_372_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_374_ = lean_int_neg(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds(lean_object* v_t_375_, lean_object* v_s_376_){
_start:
{
lean_object* v_second_377_; lean_object* v_nano_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_second_377_ = lean_ctor_get(v_t_375_, 0);
v_nano_378_ = lean_ctor_get(v_t_375_, 1);
v___x_379_ = lean_int_neg(v_s_376_);
v___x_380_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_381_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_382_ = lean_int_mul(v_second_377_, v___x_381_);
v___x_383_ = lean_int_add(v___x_382_, v_nano_378_);
lean_dec(v___x_382_);
v___x_384_ = lean_int_mul(v___x_379_, v___x_381_);
lean_dec(v___x_379_);
v___x_385_ = lean_int_add(v___x_384_, v___x_380_);
lean_dec(v___x_384_);
v___x_386_ = lean_int_add(v___x_383_, v___x_385_);
lean_dec(v___x_385_);
lean_dec(v___x_383_);
v___x_387_ = l_Std_Time_Duration_ofNanoseconds(v___x_386_);
lean_dec(v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subSeconds___boxed(lean_object* v_t_388_, lean_object* v_s_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Std_Time_Timestamp_subSeconds(v_t_388_, v_s_389_);
lean_dec(v_s_389_);
lean_dec_ref(v_t_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes(lean_object* v_t_391_, lean_object* v_m_392_){
_start:
{
lean_object* v_second_393_; lean_object* v_nano_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v_second_393_ = lean_ctor_get(v_t_391_, 0);
v_nano_394_ = lean_ctor_get(v_t_391_, 1);
v___x_395_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_396_ = lean_int_mul(v_m_392_, v___x_395_);
v___x_397_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_398_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_399_ = lean_int_mul(v_second_393_, v___x_398_);
v___x_400_ = lean_int_add(v___x_399_, v_nano_394_);
lean_dec(v___x_399_);
v___x_401_ = lean_int_mul(v___x_396_, v___x_398_);
lean_dec(v___x_396_);
v___x_402_ = lean_int_add(v___x_401_, v___x_397_);
lean_dec(v___x_401_);
v___x_403_ = lean_int_add(v___x_400_, v___x_402_);
lean_dec(v___x_402_);
lean_dec(v___x_400_);
v___x_404_ = l_Std_Time_Duration_ofNanoseconds(v___x_403_);
lean_dec(v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addMinutes___boxed(lean_object* v_t_405_, lean_object* v_m_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Std_Time_Timestamp_addMinutes(v_t_405_, v_m_406_);
lean_dec(v_m_406_);
lean_dec_ref(v_t_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes(lean_object* v_t_408_, lean_object* v_m_409_){
_start:
{
lean_object* v_second_410_; lean_object* v_nano_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_second_410_ = lean_ctor_get(v_t_408_, 0);
v_nano_411_ = lean_ctor_get(v_t_408_, 1);
v___x_412_ = lean_obj_once(&l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toMinutesSinceUnixEpoch___closed__0);
v___x_413_ = lean_int_mul(v_m_409_, v___x_412_);
v___x_414_ = lean_int_neg(v___x_413_);
lean_dec(v___x_413_);
v___x_415_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_416_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_417_ = lean_int_mul(v_second_410_, v___x_416_);
v___x_418_ = lean_int_add(v___x_417_, v_nano_411_);
lean_dec(v___x_417_);
v___x_419_ = lean_int_mul(v___x_414_, v___x_416_);
lean_dec(v___x_414_);
v___x_420_ = lean_int_add(v___x_419_, v___x_415_);
lean_dec(v___x_419_);
v___x_421_ = lean_int_add(v___x_418_, v___x_420_);
lean_dec(v___x_420_);
lean_dec(v___x_418_);
v___x_422_ = l_Std_Time_Duration_ofNanoseconds(v___x_421_);
lean_dec(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subMinutes___boxed(lean_object* v_t_423_, lean_object* v_m_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Std_Time_Timestamp_subMinutes(v_t_423_, v_m_424_);
lean_dec(v_m_424_);
lean_dec_ref(v_t_423_);
return v_res_425_;
}
}
static lean_object* _init_l_Std_Time_Timestamp_addHours___closed__0(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_unsigned_to_nat(3600u);
v___x_427_ = lean_nat_to_int(v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours(lean_object* v_t_428_, lean_object* v_h_429_){
_start:
{
lean_object* v_second_430_; lean_object* v_nano_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_second_430_ = lean_ctor_get(v_t_428_, 0);
v_nano_431_ = lean_ctor_get(v_t_428_, 1);
v___x_432_ = lean_obj_once(&l_Std_Time_Timestamp_addHours___closed__0, &l_Std_Time_Timestamp_addHours___closed__0_once, _init_l_Std_Time_Timestamp_addHours___closed__0);
v___x_433_ = lean_int_mul(v_h_429_, v___x_432_);
v___x_434_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_435_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_436_ = lean_int_mul(v_second_430_, v___x_435_);
v___x_437_ = lean_int_add(v___x_436_, v_nano_431_);
lean_dec(v___x_436_);
v___x_438_ = lean_int_mul(v___x_433_, v___x_435_);
lean_dec(v___x_433_);
v___x_439_ = lean_int_add(v___x_438_, v___x_434_);
lean_dec(v___x_438_);
v___x_440_ = lean_int_add(v___x_437_, v___x_439_);
lean_dec(v___x_439_);
lean_dec(v___x_437_);
v___x_441_ = l_Std_Time_Duration_ofNanoseconds(v___x_440_);
lean_dec(v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addHours___boxed(lean_object* v_t_442_, lean_object* v_h_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Std_Time_Timestamp_addHours(v_t_442_, v_h_443_);
lean_dec(v_h_443_);
lean_dec_ref(v_t_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours(lean_object* v_t_445_, lean_object* v_h_446_){
_start:
{
lean_object* v_second_447_; lean_object* v_nano_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_second_447_ = lean_ctor_get(v_t_445_, 0);
v_nano_448_ = lean_ctor_get(v_t_445_, 1);
v___x_449_ = lean_obj_once(&l_Std_Time_Timestamp_addHours___closed__0, &l_Std_Time_Timestamp_addHours___closed__0_once, _init_l_Std_Time_Timestamp_addHours___closed__0);
v___x_450_ = lean_int_mul(v_h_446_, v___x_449_);
v___x_451_ = lean_int_neg(v___x_450_);
lean_dec(v___x_450_);
v___x_452_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_453_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_454_ = lean_int_mul(v_second_447_, v___x_453_);
v___x_455_ = lean_int_add(v___x_454_, v_nano_448_);
lean_dec(v___x_454_);
v___x_456_ = lean_int_mul(v___x_451_, v___x_453_);
lean_dec(v___x_451_);
v___x_457_ = lean_int_add(v___x_456_, v___x_452_);
lean_dec(v___x_456_);
v___x_458_ = lean_int_add(v___x_455_, v___x_457_);
lean_dec(v___x_457_);
lean_dec(v___x_455_);
v___x_459_ = l_Std_Time_Duration_ofNanoseconds(v___x_458_);
lean_dec(v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subHours___boxed(lean_object* v_t_460_, lean_object* v_h_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Std_Time_Timestamp_subHours(v_t_460_, v_h_461_);
lean_dec(v_h_461_);
lean_dec_ref(v_t_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays(lean_object* v_t_463_, lean_object* v_d_464_){
_start:
{
lean_object* v_second_465_; lean_object* v_nano_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_second_465_ = lean_ctor_get(v_t_463_, 0);
v_nano_466_ = lean_ctor_get(v_t_463_, 1);
v___x_467_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_468_ = lean_int_mul(v_d_464_, v___x_467_);
v___x_469_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_470_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_471_ = lean_int_mul(v_second_465_, v___x_470_);
v___x_472_ = lean_int_add(v___x_471_, v_nano_466_);
lean_dec(v___x_471_);
v___x_473_ = lean_int_mul(v___x_468_, v___x_470_);
lean_dec(v___x_468_);
v___x_474_ = lean_int_add(v___x_473_, v___x_469_);
lean_dec(v___x_473_);
v___x_475_ = lean_int_add(v___x_472_, v___x_474_);
lean_dec(v___x_474_);
lean_dec(v___x_472_);
v___x_476_ = l_Std_Time_Duration_ofNanoseconds(v___x_475_);
lean_dec(v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDays___boxed(lean_object* v_t_477_, lean_object* v_d_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Std_Time_Timestamp_addDays(v_t_477_, v_d_478_);
lean_dec(v_d_478_);
lean_dec_ref(v_t_477_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays(lean_object* v_t_480_, lean_object* v_d_481_){
_start:
{
lean_object* v_second_482_; lean_object* v_nano_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_second_482_ = lean_ctor_get(v_t_480_, 0);
v_nano_483_ = lean_ctor_get(v_t_480_, 1);
v___x_484_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_485_ = lean_int_mul(v_d_481_, v___x_484_);
v___x_486_ = lean_int_neg(v___x_485_);
lean_dec(v___x_485_);
v___x_487_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_488_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_489_ = lean_int_mul(v_second_482_, v___x_488_);
v___x_490_ = lean_int_add(v___x_489_, v_nano_483_);
lean_dec(v___x_489_);
v___x_491_ = lean_int_mul(v___x_486_, v___x_488_);
lean_dec(v___x_486_);
v___x_492_ = lean_int_add(v___x_491_, v___x_487_);
lean_dec(v___x_491_);
v___x_493_ = lean_int_add(v___x_490_, v___x_492_);
lean_dec(v___x_492_);
lean_dec(v___x_490_);
v___x_494_ = l_Std_Time_Duration_ofNanoseconds(v___x_493_);
lean_dec(v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDays___boxed(lean_object* v_t_495_, lean_object* v_d_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Std_Time_Timestamp_subDays(v_t_495_, v_d_496_);
lean_dec(v_d_496_);
lean_dec_ref(v_t_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks(lean_object* v_t_498_, lean_object* v_d_499_){
_start:
{
lean_object* v_second_500_; lean_object* v_nano_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_second_500_ = lean_ctor_get(v_t_498_, 0);
v_nano_501_ = lean_ctor_get(v_t_498_, 1);
v___x_502_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_503_ = lean_int_mul(v_d_499_, v___x_502_);
v___x_504_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_505_ = lean_int_mul(v___x_503_, v___x_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_507_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_508_ = lean_int_mul(v_second_500_, v___x_507_);
v___x_509_ = lean_int_add(v___x_508_, v_nano_501_);
lean_dec(v___x_508_);
v___x_510_ = lean_int_mul(v___x_505_, v___x_507_);
lean_dec(v___x_505_);
v___x_511_ = lean_int_add(v___x_510_, v___x_506_);
lean_dec(v___x_510_);
v___x_512_ = lean_int_add(v___x_509_, v___x_511_);
lean_dec(v___x_511_);
lean_dec(v___x_509_);
v___x_513_ = l_Std_Time_Duration_ofNanoseconds(v___x_512_);
lean_dec(v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addWeeks___boxed(lean_object* v_t_514_, lean_object* v_d_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Time_Timestamp_addWeeks(v_t_514_, v_d_515_);
lean_dec(v_d_515_);
lean_dec_ref(v_t_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks(lean_object* v_t_517_, lean_object* v_d_518_){
_start:
{
lean_object* v_second_519_; lean_object* v_nano_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_second_519_ = lean_ctor_get(v_t_517_, 0);
v_nano_520_ = lean_ctor_get(v_t_517_, 1);
v___x_521_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__7, &l_Std_Time_instReprTimestamp_repr___redArg___closed__7_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__7);
v___x_522_ = lean_int_mul(v_d_518_, v___x_521_);
v___x_523_ = lean_obj_once(&l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0, &l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0_once, _init_l_Std_Time_Timestamp_toDaysSinceUnixEpoch___closed__0);
v___x_524_ = lean_int_mul(v___x_522_, v___x_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_int_neg(v___x_524_);
lean_dec(v___x_524_);
v___x_526_ = lean_obj_once(&l_Std_Time_Timestamp_subSeconds___closed__0, &l_Std_Time_Timestamp_subSeconds___closed__0_once, _init_l_Std_Time_Timestamp_subSeconds___closed__0);
v___x_527_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_528_ = lean_int_mul(v_second_519_, v___x_527_);
v___x_529_ = lean_int_add(v___x_528_, v_nano_520_);
lean_dec(v___x_528_);
v___x_530_ = lean_int_mul(v___x_525_, v___x_527_);
lean_dec(v___x_525_);
v___x_531_ = lean_int_add(v___x_530_, v___x_526_);
lean_dec(v___x_530_);
v___x_532_ = lean_int_add(v___x_529_, v___x_531_);
lean_dec(v___x_531_);
lean_dec(v___x_529_);
v___x_533_ = l_Std_Time_Duration_ofNanoseconds(v___x_532_);
lean_dec(v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subWeeks___boxed(lean_object* v_t_534_, lean_object* v_d_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Std_Time_Timestamp_subWeeks(v_t_534_, v_d_535_);
lean_dec(v_d_535_);
lean_dec_ref(v_t_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration(lean_object* v_t_537_, lean_object* v_d_538_){
_start:
{
lean_object* v_second_539_; lean_object* v_nano_540_; lean_object* v_second_541_; lean_object* v_nano_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_second_539_ = lean_ctor_get(v_t_537_, 0);
v_nano_540_ = lean_ctor_get(v_t_537_, 1);
v_second_541_ = lean_ctor_get(v_d_538_, 0);
v_nano_542_ = lean_ctor_get(v_d_538_, 1);
v___x_543_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_544_ = lean_int_mul(v_second_539_, v___x_543_);
v___x_545_ = lean_int_add(v___x_544_, v_nano_540_);
lean_dec(v___x_544_);
v___x_546_ = lean_int_mul(v_second_541_, v___x_543_);
v___x_547_ = lean_int_add(v___x_546_, v_nano_542_);
lean_dec(v___x_546_);
v___x_548_ = lean_int_add(v___x_545_, v___x_547_);
lean_dec(v___x_547_);
lean_dec(v___x_545_);
v___x_549_ = l_Std_Time_Duration_ofNanoseconds(v___x_548_);
lean_dec(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_addDuration___boxed(lean_object* v_t_550_, lean_object* v_d_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_Time_Timestamp_addDuration(v_t_550_, v_d_551_);
lean_dec_ref(v_d_551_);
lean_dec_ref(v_t_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration(lean_object* v_t_553_, lean_object* v_d_554_){
_start:
{
lean_object* v_second_555_; lean_object* v_nano_556_; lean_object* v_second_557_; lean_object* v_nano_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_second_555_ = lean_ctor_get(v_d_554_, 0);
v_nano_556_ = lean_ctor_get(v_d_554_, 1);
v_second_557_ = lean_ctor_get(v_t_553_, 0);
v_nano_558_ = lean_ctor_get(v_t_553_, 1);
v___x_559_ = lean_int_neg(v_second_555_);
v___x_560_ = lean_int_neg(v_nano_556_);
v___x_561_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_562_ = lean_int_mul(v_second_557_, v___x_561_);
v___x_563_ = lean_int_add(v___x_562_, v_nano_558_);
lean_dec(v___x_562_);
v___x_564_ = lean_int_mul(v___x_559_, v___x_561_);
lean_dec(v___x_559_);
v___x_565_ = lean_int_add(v___x_564_, v___x_560_);
lean_dec(v___x_560_);
lean_dec(v___x_564_);
v___x_566_ = lean_int_add(v___x_563_, v___x_565_);
lean_dec(v___x_565_);
lean_dec(v___x_563_);
v___x_567_ = l_Std_Time_Duration_ofNanoseconds(v___x_566_);
lean_dec(v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_subDuration___boxed(lean_object* v_t_568_, lean_object* v_d_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_Time_Timestamp_subDuration(v_t_568_, v_d_569_);
lean_dec_ref(v_d_569_);
lean_dec_ref(v_t_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0(lean_object* v_x_603_, lean_object* v_y_604_){
_start:
{
lean_object* v_second_605_; lean_object* v_nano_606_; lean_object* v_second_607_; lean_object* v_nano_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_second_605_ = lean_ctor_get(v_y_604_, 0);
v_nano_606_ = lean_ctor_get(v_y_604_, 1);
v_second_607_ = lean_ctor_get(v_x_603_, 0);
v_nano_608_ = lean_ctor_get(v_x_603_, 1);
v___x_609_ = lean_int_neg(v_second_605_);
v___x_610_ = lean_int_neg(v_nano_606_);
v___x_611_ = lean_obj_once(&l_Std_Time_instReprTimestamp__1___lam__0___closed__2, &l_Std_Time_instReprTimestamp__1___lam__0___closed__2_once, _init_l_Std_Time_instReprTimestamp__1___lam__0___closed__2);
v___x_612_ = lean_int_mul(v_second_607_, v___x_611_);
v___x_613_ = lean_int_add(v___x_612_, v_nano_608_);
lean_dec(v___x_612_);
v___x_614_ = lean_int_mul(v___x_609_, v___x_611_);
lean_dec(v___x_609_);
v___x_615_ = lean_int_add(v___x_614_, v___x_610_);
lean_dec(v___x_610_);
lean_dec(v___x_614_);
v___x_616_ = lean_int_add(v___x_613_, v___x_615_);
lean_dec(v___x_615_);
lean_dec(v___x_613_);
v___x_617_ = l_Std_Time_Duration_ofNanoseconds(v___x_616_);
lean_dec(v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instHSubDuration__1___lam__0___boxed(lean_object* v_x_618_, lean_object* v_y_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Std_Time_Timestamp_instHSubDuration__1___lam__0(v_x_618_, v_y_619_);
lean_dec_ref(v_y_619_);
lean_dec_ref(v_x_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Timestamp_instOfNat(lean_object* v_n_623_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_nat_to_int(v_n_623_);
v___x_625_ = lean_obj_once(&l_Std_Time_instReprTimestamp_repr___redArg___closed__14, &l_Std_Time_instReprTimestamp_repr___redArg___closed__14_once, _init_l_Std_Time_instReprTimestamp_repr___redArg___closed__14);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
return v___x_626_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
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
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedTimestamp_default = _init_l_Std_Time_instInhabitedTimestamp_default();
lean_mark_persistent(l_Std_Time_instInhabitedTimestamp_default);
l_Std_Time_instInhabitedTimestamp = _init_l_Std_Time_instInhabitedTimestamp();
lean_mark_persistent(l_Std_Time_instInhabitedTimestamp);
l_Std_Time_instLETimestamp = _init_l_Std_Time_instLETimestamp();
lean_mark_persistent(l_Std_Time_instLETimestamp);
l_Std_Time_instLTTimestamp = _init_l_Std_Time_instLTTimestamp();
lean_mark_persistent(l_Std_Time_instLTTimestamp);
l_Std_Time_instOrdTimestamp = _init_l_Std_Time_instOrdTimestamp();
lean_mark_persistent(l_Std_Time_instOrdTimestamp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Time_Duration(uint8_t builtin);
lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_DateTime_Timestamp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_DateTime_Timestamp(builtin);
}
#ifdef __cplusplus
}
#endif
