// Lean compiler output
// Module: Std.Time.Zoned.ZoneRules
// Imports: public import Std.Time.Zoned.TimeZone public import Std.Time.DateTime.Timestamp public import Std.Time.DateTime.WallTime public import Std.Time.Zoned.RecurringRule
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
lean_object* l_Std_Time_TimeZone_instReprOffset_repr___redArg(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDate_ofEpochDay(lean_object*);
lean_object* l_Std_Time_TimeZone_TransitionSpec_toEpochDay(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_Offset_toIsoString(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprUTLocal_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.TimeZone.UTLocal.ut"};
static const lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprUTLocal_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__1_value;
static const lean_string_object l_Std_Time_TimeZone_instReprUTLocal_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Time.TimeZone.UTLocal.local"};
static const lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprUTLocal_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4;
static lean_once_cell_t l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprUTLocal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprUTLocal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprUTLocal___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprUTLocal = (const lean_object*)&l_Std_Time_TimeZone_instReprUTLocal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instInhabitedUTLocal_default;
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instInhabitedUTLocal;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprStdWall_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Time.TimeZone.StdWall.wall"};
static const lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprStdWall_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__1_value;
static const lean_string_object l_Std_Time_TimeZone_instReprStdWall_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Std.Time.TimeZone.StdWall.standard"};
static const lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprStdWall_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprStdWall_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprStdWall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprStdWall_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprStdWall___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprStdWall = (const lean_object*)&l_Std_Time_TimeZone_instReprStdWall___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instInhabitedStdWall_default;
LEAN_EXPORT uint8_t l_Std_Time_TimeZone_instInhabitedStdWall;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instReprLocalTimeType_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "gmtOffset"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__3_value),((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isDst"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__10 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__11 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "abbreviation"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__13 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__14 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__14_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wall"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__16 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__16_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__16_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__17 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__17_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "utLocal"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__19 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__19_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__19_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__20 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__20_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identifier"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__22 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__22_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__22_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__23 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__23_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24;
static const lean_string_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__25 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__25_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26;
static lean_once_cell_t l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__25_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprLocalTimeType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprLocalTimeType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprLocalTimeType = (const lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0;
static const lean_string_object l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__1_value;
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedLocalTimeType_default;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instInhabitedLocalTimeType_default_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedLocalTimeType;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone___boxed(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "time"};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "localTimeType"};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__4 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprTransition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprTransition_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprTransition___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprTransition = (const lean_object*)&l_Std_Time_TimeZone_instReprTransition___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0;
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedTransition_default;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedTransition;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "initialLocalTimeType"};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__2_value),((lean_object*)&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__3 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4;
static const lean_string_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "transitions"};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__5 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__6 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7;
static const lean_string_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "transitionRule"};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__8 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__9 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__9_value;
static lean_once_cell_t l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_TimeZone_instReprZoneRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_TimeZone_instReprZoneRules_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_TimeZone_instReprZoneRules___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_TimeZone_instReprZoneRules = (const lean_object*)&l_Std_Time_TimeZone_instReprZoneRules___closed__0_value;
static const lean_array_object l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__0_value;
static lean_once_cell_t l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedZoneRules_default;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instInhabitedZoneRules;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timestamp(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionForTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionForTimestamp___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_TimeZone_Transition_timezoneAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "cannot find local timezone."};
static const lean_object* l_Std_Time_TimeZone_Transition_timezoneAt___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_Transition_timezoneAt___closed__0_value;
static const lean_ctor_object l_Std_Time_TimeZone_Transition_timezoneAt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_Transition_timezoneAt___closed__0_value)}};
static const lean_object* l_Std_Time_TimeZone_Transition_timezoneAt___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_Transition_timezoneAt___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timezoneAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timezoneAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds_spec__0(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_RecurringRule_timezoneAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_RecurringRule_timezoneAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___lam__0(lean_object*, lean_object*);
static const lean_array_object l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___closed__0 = (const lean_object*)&l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_TimeZone_ZoneRules_UTC___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_ZoneRules_UTC___closed__0;
static const lean_string_object l_Std_Time_TimeZone_ZoneRules_UTC___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l_Std_Time_TimeZone_ZoneRules_UTC___closed__1 = (const lean_object*)&l_Std_Time_TimeZone_ZoneRules_UTC___closed__1_value;
static const lean_ctor_object l_Std_Time_TimeZone_ZoneRules_UTC___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_TimeZone_ZoneRules_UTC___closed__1_value)}};
static const lean_object* l_Std_Time_TimeZone_ZoneRules_UTC___closed__2 = (const lean_object*)&l_Std_Time_TimeZone_ZoneRules_UTC___closed__2_value;
static lean_once_cell_t l_Std_Time_TimeZone_ZoneRules_UTC___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_ZoneRules_UTC___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_UTC;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_ofTimeZone(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_ofTimeZone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Time_TimeZone_UTLocal_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_TimeZone_UTLocal_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Time_TimeZone_UTLocal_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___redArg(lean_object* v_ut_22_){
_start:
{
lean_inc(v_ut_22_);
return v_ut_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___redArg___boxed(lean_object* v_ut_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Time_TimeZone_UTLocal_ut_elim___redArg(v_ut_23_);
lean_dec(v_ut_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_ut_28_){
_start:
{
lean_inc(v_ut_28_);
return v_ut_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_ut_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_ut_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Time_TimeZone_UTLocal_ut_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_ut_32_);
lean_dec(v_ut_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___redArg(lean_object* v_local_35_){
_start:
{
lean_inc(v_local_35_);
return v_local_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___redArg___boxed(lean_object* v_local_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Time_TimeZone_UTLocal_local_elim___redArg(v_local_36_);
lean_dec(v_local_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_local_41_){
_start:
{
lean_inc(v_local_41_);
return v_local_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_UTLocal_local_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_local_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Time_TimeZone_UTLocal_local_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_local_45_);
lean_dec(v_local_45_);
return v_res_47_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(2u);
v___x_55_ = lean_nat_to_int(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_unsigned_to_nat(1u);
v___x_57_ = lean_nat_to_int(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr(uint8_t v_x_58_, lean_object* v_prec_59_){
_start:
{
lean_object* v___y_61_; lean_object* v___y_68_; 
if (v_x_58_ == 0)
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1024u);
v___x_75_ = lean_nat_dec_le(v___x_74_, v_prec_59_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4);
v___y_61_ = v___x_76_;
goto v___jp_60_;
}
else
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5);
v___y_61_ = v___x_77_;
goto v___jp_60_;
}
}
else
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = lean_unsigned_to_nat(1024u);
v___x_79_ = lean_nat_dec_le(v___x_78_, v_prec_59_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
v___x_80_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4);
v___y_68_ = v___x_80_;
goto v___jp_67_;
}
else
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5);
v___y_68_ = v___x_81_;
goto v___jp_67_;
}
}
v___jp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_62_ = ((lean_object*)(l_Std_Time_TimeZone_instReprUTLocal_repr___closed__1));
lean_inc(v___y_61_);
v___x_63_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_63_, 0, v___y_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = 0;
v___x_65_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*1, v___x_64_);
v___x_66_ = l_Repr_addAppParen(v___x_65_, v_prec_59_);
return v___x_66_;
}
v___jp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_69_ = ((lean_object*)(l_Std_Time_TimeZone_instReprUTLocal_repr___closed__3));
lean_inc(v___y_68_);
v___x_70_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_70_, 0, v___y_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = 0;
v___x_72_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_prec_59_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprUTLocal_repr___boxed(lean_object* v_x_82_, lean_object* v_prec_83_){
_start:
{
uint8_t v_x_117__boxed_84_; lean_object* v_res_85_; 
v_x_117__boxed_84_ = lean_unbox(v_x_82_);
v_res_85_ = l_Std_Time_TimeZone_instReprUTLocal_repr(v_x_117__boxed_84_, v_prec_83_);
lean_dec(v_prec_83_);
return v_res_85_;
}
}
static uint8_t _init_l_Std_Time_TimeZone_instInhabitedUTLocal_default(void){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
static uint8_t _init_l_Std_Time_TimeZone_instInhabitedUTLocal(void){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = 0;
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorIdx(uint8_t v_x_90_){
_start:
{
if (v_x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = lean_unsigned_to_nat(0u);
return v___x_91_;
}
else
{
lean_object* v___x_92_; 
v___x_92_ = lean_unsigned_to_nat(1u);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorIdx___boxed(lean_object* v_x_93_){
_start:
{
uint8_t v_x_boxed_94_; lean_object* v_res_95_; 
v_x_boxed_94_ = lean_unbox(v_x_93_);
v_res_95_ = l_Std_Time_TimeZone_StdWall_ctorIdx(v_x_boxed_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___redArg(lean_object* v_k_96_){
_start:
{
lean_inc(v_k_96_);
return v_k_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___redArg___boxed(lean_object* v_k_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Std_Time_TimeZone_StdWall_ctorElim___redArg(v_k_97_);
lean_dec(v_k_97_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim(lean_object* v_motive_99_, lean_object* v_ctorIdx_100_, uint8_t v_t_101_, lean_object* v_h_102_, lean_object* v_k_103_){
_start:
{
lean_inc(v_k_103_);
return v_k_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_ctorElim___boxed(lean_object* v_motive_104_, lean_object* v_ctorIdx_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_k_108_){
_start:
{
uint8_t v_t_boxed_109_; lean_object* v_res_110_; 
v_t_boxed_109_ = lean_unbox(v_t_106_);
v_res_110_ = l_Std_Time_TimeZone_StdWall_ctorElim(v_motive_104_, v_ctorIdx_105_, v_t_boxed_109_, v_h_107_, v_k_108_);
lean_dec(v_k_108_);
lean_dec(v_ctorIdx_105_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___redArg(lean_object* v_wall_111_){
_start:
{
lean_inc(v_wall_111_);
return v_wall_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___redArg___boxed(lean_object* v_wall_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Std_Time_TimeZone_StdWall_wall_elim___redArg(v_wall_112_);
lean_dec(v_wall_112_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim(lean_object* v_motive_114_, uint8_t v_t_115_, lean_object* v_h_116_, lean_object* v_wall_117_){
_start:
{
lean_inc(v_wall_117_);
return v_wall_117_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_wall_elim___boxed(lean_object* v_motive_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_wall_121_){
_start:
{
uint8_t v_t_boxed_122_; lean_object* v_res_123_; 
v_t_boxed_122_ = lean_unbox(v_t_119_);
v_res_123_ = l_Std_Time_TimeZone_StdWall_wall_elim(v_motive_118_, v_t_boxed_122_, v_h_120_, v_wall_121_);
lean_dec(v_wall_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___redArg(lean_object* v_standard_124_){
_start:
{
lean_inc(v_standard_124_);
return v_standard_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___redArg___boxed(lean_object* v_standard_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Std_Time_TimeZone_StdWall_standard_elim___redArg(v_standard_125_);
lean_dec(v_standard_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim(lean_object* v_motive_127_, uint8_t v_t_128_, lean_object* v_h_129_, lean_object* v_standard_130_){
_start:
{
lean_inc(v_standard_130_);
return v_standard_130_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_StdWall_standard_elim___boxed(lean_object* v_motive_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_standard_134_){
_start:
{
uint8_t v_t_boxed_135_; lean_object* v_res_136_; 
v_t_boxed_135_ = lean_unbox(v_t_132_);
v_res_136_ = l_Std_Time_TimeZone_StdWall_standard_elim(v_motive_131_, v_t_boxed_135_, v_h_133_, v_standard_134_);
lean_dec(v_standard_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprStdWall_repr(uint8_t v_x_143_, lean_object* v_prec_144_){
_start:
{
lean_object* v___y_146_; lean_object* v___y_153_; 
if (v_x_143_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(1024u);
v___x_160_ = lean_nat_dec_le(v___x_159_, v_prec_144_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
v___x_161_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4);
v___y_146_ = v___x_161_;
goto v___jp_145_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5);
v___y_146_ = v___x_162_;
goto v___jp_145_;
}
}
else
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = lean_nat_dec_le(v___x_163_, v_prec_144_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__4);
v___y_153_ = v___x_165_;
goto v___jp_152_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5, &l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5_once, _init_l_Std_Time_TimeZone_instReprUTLocal_repr___closed__5);
v___y_153_ = v___x_166_;
goto v___jp_152_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = ((lean_object*)(l_Std_Time_TimeZone_instReprStdWall_repr___closed__1));
lean_inc(v___y_146_);
v___x_148_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_148_, 0, v___y_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = 0;
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_149_);
v___x_151_ = l_Repr_addAppParen(v___x_150_, v_prec_144_);
return v___x_151_;
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(l_Std_Time_TimeZone_instReprStdWall_repr___closed__3));
lean_inc(v___y_153_);
v___x_155_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_155_, 0, v___y_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = 0;
v___x_157_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*1, v___x_156_);
v___x_158_ = l_Repr_addAppParen(v___x_157_, v_prec_144_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprStdWall_repr___boxed(lean_object* v_x_167_, lean_object* v_prec_168_){
_start:
{
uint8_t v_x_113__boxed_169_; lean_object* v_res_170_; 
v_x_113__boxed_169_ = lean_unbox(v_x_167_);
v_res_170_ = l_Std_Time_TimeZone_instReprStdWall_repr(v_x_113__boxed_169_, v_prec_168_);
lean_dec(v_prec_168_);
return v_res_170_;
}
}
static uint8_t _init_l_Std_Time_TimeZone_instInhabitedStdWall_default(void){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = 0;
return v___x_173_;
}
}
static uint8_t _init_l_Std_Time_TimeZone_instInhabitedStdWall(void){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = 0;
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instReprLocalTimeType_repr_spec__0(lean_object* v_a_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_nat_to_int(v_a_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(13u);
v___x_191_ = lean_nat_to_int(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(9u);
v___x_199_ = lean_nat_to_int(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(16u);
v___x_204_ = lean_nat_to_int(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(8u);
v___x_209_ = lean_nat_to_int(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_unsigned_to_nat(11u);
v___x_214_ = lean_nat_to_int(v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(14u);
v___x_219_ = lean_nat_to_int(v___x_218_);
return v___x_219_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__0));
v___x_222_ = lean_string_length(v___x_221_);
return v___x_222_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__26);
v___x_224_ = lean_nat_to_int(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg(lean_object* v_x_229_){
_start:
{
lean_object* v_gmtOffset_230_; uint8_t v_isDst_231_; lean_object* v_abbreviation_232_; uint8_t v_wall_233_; uint8_t v_utLocal_234_; lean_object* v_identifier_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_gmtOffset_230_ = lean_ctor_get(v_x_229_, 0);
lean_inc(v_gmtOffset_230_);
v_isDst_231_ = lean_ctor_get_uint8(v_x_229_, sizeof(void*)*3);
v_abbreviation_232_ = lean_ctor_get(v_x_229_, 1);
lean_inc_ref(v_abbreviation_232_);
v_wall_233_ = lean_ctor_get_uint8(v_x_229_, sizeof(void*)*3 + 1);
v_utLocal_234_ = lean_ctor_get_uint8(v_x_229_, sizeof(void*)*3 + 2);
v_identifier_235_ = lean_ctor_get(v_x_229_, 2);
lean_inc_ref(v_identifier_235_);
lean_dec_ref(v_x_229_);
v___x_236_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5));
v___x_237_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__6));
v___x_238_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__7);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = l_Std_Time_TimeZone_instReprOffset_repr___redArg(v_gmtOffset_230_);
lean_dec(v_gmtOffset_230_);
v___x_241_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_238_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = 0;
v___x_243_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*1, v___x_242_);
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_237_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9));
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_box(1);
v___x_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__11));
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v___x_236_);
v___x_252_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__12);
v___x_253_ = l_Bool_repr___redArg(v_isDst_231_);
v___x_254_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set_uint8(v___x_255_, sizeof(void*)*1, v___x_242_);
v___x_256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_251_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_245_);
v___x_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_247_);
v___x_259_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__14));
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_236_);
v___x_262_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__15);
v___x_263_ = l_String_quote(v_abbreviation_232_);
v___x_264_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
v___x_265_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_262_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set_uint8(v___x_266_, sizeof(void*)*1, v___x_242_);
v___x_267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_261_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_245_);
v___x_269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_247_);
v___x_270_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__17));
v___x_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_236_);
v___x_273_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18);
v___x_274_ = l_Std_Time_TimeZone_instReprStdWall_repr(v_wall_233_, v___x_239_);
v___x_275_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set_uint8(v___x_276_, sizeof(void*)*1, v___x_242_);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_272_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___x_245_);
v___x_279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_247_);
v___x_280_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__20));
v___x_281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_279_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_236_);
v___x_283_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__21);
v___x_284_ = l_Std_Time_TimeZone_instReprUTLocal_repr(v_utLocal_234_, v___x_239_);
v___x_285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set_uint8(v___x_286_, sizeof(void*)*1, v___x_242_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_282_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___x_245_);
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_247_);
v___x_290_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__23));
v___x_291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_236_);
v___x_293_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__24);
v___x_294_ = l_String_quote(v_identifier_235_);
v___x_295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
v___x_296_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_293_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set_uint8(v___x_297_, sizeof(void*)*1, v___x_242_);
v___x_298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_292_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27);
v___x_300_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28));
v___x_301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v___x_298_);
v___x_302_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29));
v___x_303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_301_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_299_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set_uint8(v___x_305_, sizeof(void*)*1, v___x_242_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr(lean_object* v_x_306_, lean_object* v_prec_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg(v_x_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprLocalTimeType_repr___boxed(lean_object* v_x_309_, lean_object* v_prec_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Std_Time_TimeZone_instReprLocalTimeType_repr(v_x_309_, v_prec_310_);
lean_dec(v_prec_310_);
return v_res_311_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_nat_to_int(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2(void){
_start:
{
uint8_t v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_317_ = 0;
v___x_318_ = 0;
v___x_319_ = ((lean_object*)(l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__1));
v___x_320_ = 0;
v___x_321_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0);
v___x_322_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_319_);
lean_ctor_set(v___x_322_, 2, v___x_319_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*3, v___x_320_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*3 + 1, v___x_318_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*3 + 2, v___x_317_);
return v___x_322_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default(void){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__2);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_TimeZone_instInhabitedLocalTimeType_default_spec__0(lean_object* v_a_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_nat_to_int(v_a_324_);
v___x_326_ = l_Rat_ofInt(v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_Std_Time_TimeZone_instInhabitedLocalTimeType_default;
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object* v_time_328_){
_start:
{
lean_object* v_gmtOffset_329_; uint8_t v_isDst_330_; lean_object* v_abbreviation_331_; lean_object* v_identifier_332_; lean_object* v___x_333_; 
v_gmtOffset_329_ = lean_ctor_get(v_time_328_, 0);
v_isDst_330_ = lean_ctor_get_uint8(v_time_328_, sizeof(void*)*3);
v_abbreviation_331_ = lean_ctor_get(v_time_328_, 1);
v_identifier_332_ = lean_ctor_get(v_time_328_, 2);
lean_inc_ref(v_abbreviation_331_);
lean_inc_ref(v_identifier_332_);
lean_inc(v_gmtOffset_329_);
v___x_333_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_333_, 0, v_gmtOffset_329_);
lean_ctor_set(v___x_333_, 1, v_identifier_332_);
lean_ctor_set(v___x_333_, 2, v_abbreviation_331_);
lean_ctor_set_uint8(v___x_333_, sizeof(void*)*3, v_isDst_330_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone___boxed(lean_object* v_time_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v_time_334_);
lean_dec_ref(v_time_334_);
return v_res_335_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(17u);
v___x_349_ = lean_nat_to_int(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr___redArg(lean_object* v_x_350_){
_start:
{
lean_object* v_time_351_; lean_object* v_localTimeType_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_394_; 
v_time_351_ = lean_ctor_get(v_x_350_, 0);
v_localTimeType_352_ = lean_ctor_get(v_x_350_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v_x_350_);
if (v_isSharedCheck_394_ == 0)
{
v___x_354_ = v_x_350_;
v_isShared_355_ = v_isSharedCheck_394_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_localTimeType_352_);
lean_inc(v_time_351_);
lean_dec(v_x_350_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_394_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___y_360_; lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_356_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5));
v___x_357_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__3));
v___x_358_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__18);
v___x_386_ = lean_unsigned_to_nat(0u);
v___x_387_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0);
v___x_388_ = lean_int_dec_lt(v_time_351_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = l_Int_repr(v_time_351_);
lean_dec(v_time_351_);
v___x_390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
v___y_360_ = v___x_390_;
goto v___jp_359_;
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = l_Int_repr(v_time_351_);
lean_dec(v_time_351_);
v___x_392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
v___x_393_ = l_Repr_addAppParen(v___x_392_, v___x_386_);
v___y_360_ = v___x_393_;
goto v___jp_359_;
}
v___jp_359_:
{
lean_object* v___x_362_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 4);
lean_ctor_set(v___x_354_, 1, v___y_360_);
lean_ctor_set(v___x_354_, 0, v___x_358_);
v___x_362_ = v___x_354_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_358_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v___y_360_);
v___x_362_ = v_reuseFailAlloc_385_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
uint8_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_363_ = 0;
v___x_364_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set_uint8(v___x_364_, sizeof(void*)*1, v___x_363_);
v___x_365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_357_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9));
v___x_367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = lean_box(1);
v___x_369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = ((lean_object*)(l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__5));
v___x_371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_356_);
v___x_373_ = lean_obj_once(&l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6, &l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6_once, _init_l_Std_Time_TimeZone_instReprTransition_repr___redArg___closed__6);
v___x_374_ = l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg(v_localTimeType_352_);
v___x_375_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*1, v___x_363_);
v___x_377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_372_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27);
v___x_379_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28));
v___x_380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_377_);
v___x_381_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29));
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_380_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_378_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set_uint8(v___x_384_, sizeof(void*)*1, v___x_363_);
return v___x_384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr(lean_object* v_x_395_, lean_object* v_prec_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Std_Time_TimeZone_instReprTransition_repr___redArg(v_x_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprTransition_repr___boxed(lean_object* v_x_398_, lean_object* v_prec_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Std_Time_TimeZone_instReprTransition_repr(v_x_398_, v_prec_399_);
lean_dec(v_prec_399_);
return v_res_400_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_403_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = l_Std_Time_TimeZone_instInhabitedLocalTimeType_default;
v___x_405_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0, &l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedTransition_default___closed__0);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedTransition_default(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1, &l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1_once, _init_l_Std_Time_TimeZone_instInhabitedTransition_default___closed__1);
return v___x_407_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedTransition(void){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Std_Time_TimeZone_instInhabitedTransition_default;
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1(lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
lean_object* v___x_417_; 
v___x_417_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__1));
return v___x_417_;
}
else
{
lean_object* v_val_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_val_418_ = lean_ctor_get(v_x_415_, 0);
lean_inc(v_val_418_);
lean_dec_ref_known(v_x_415_, 1);
v___x_419_ = ((lean_object*)(l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___closed__3));
v___x_420_ = l_Std_Time_TimeZone_instReprRecurringRule_repr___redArg(v_val_418_);
v___x_421_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = l_Repr_addAppParen(v___x_421_, v_x_416_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1___boxed(lean_object* v_x_423_, lean_object* v_x_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1(v_x_423_, v_x_424_);
lean_dec(v_x_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_426_, lean_object* v_x_427_, lean_object* v_x_428_){
_start:
{
if (lean_obj_tag(v_x_428_) == 0)
{
lean_dec(v_x_426_);
return v_x_427_;
}
else
{
lean_object* v_head_429_; lean_object* v_tail_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_440_; 
v_head_429_ = lean_ctor_get(v_x_428_, 0);
v_tail_430_ = lean_ctor_get(v_x_428_, 1);
v_isSharedCheck_440_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_440_ == 0)
{
v___x_432_ = v_x_428_;
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_tail_430_);
lean_inc(v_head_429_);
lean_dec(v_x_428_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
lean_inc(v_x_426_);
if (v_isShared_433_ == 0)
{
lean_ctor_set_tag(v___x_432_, 5);
lean_ctor_set(v___x_432_, 1, v_x_426_);
lean_ctor_set(v___x_432_, 0, v_x_427_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_x_427_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_x_426_);
v___x_435_ = v_reuseFailAlloc_439_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = l_Std_Time_TimeZone_instReprTransition_repr___redArg(v_head_429_);
v___x_437_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v_x_427_ = v___x_437_;
v_x_428_ = v_tail_430_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2(lean_object* v_x_441_, lean_object* v_x_442_, lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
lean_dec(v_x_441_);
return v_x_442_;
}
else
{
lean_object* v_head_444_; lean_object* v_tail_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_455_; 
v_head_444_ = lean_ctor_get(v_x_443_, 0);
v_tail_445_ = lean_ctor_get(v_x_443_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_443_);
if (v_isSharedCheck_455_ == 0)
{
v___x_447_ = v_x_443_;
v_isShared_448_ = v_isSharedCheck_455_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_tail_445_);
lean_inc(v_head_444_);
lean_dec(v_x_443_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_455_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
lean_inc(v_x_441_);
if (v_isShared_448_ == 0)
{
lean_ctor_set_tag(v___x_447_, 5);
lean_ctor_set(v___x_447_, 1, v_x_441_);
lean_ctor_set(v___x_447_, 0, v_x_442_);
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_x_442_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_x_441_);
v___x_450_ = v_reuseFailAlloc_454_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = l_Std_Time_TimeZone_instReprTransition_repr___redArg(v_head_444_);
v___x_452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2_spec__3(v_x_441_, v___x_452_, v_tail_445_);
return v___x_453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0(lean_object* v_x_456_, lean_object* v_x_457_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
lean_object* v___x_458_; 
lean_dec(v_x_457_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
lean_object* v_tail_459_; 
v_tail_459_ = lean_ctor_get(v_x_456_, 1);
if (lean_obj_tag(v_tail_459_) == 0)
{
lean_object* v_head_460_; lean_object* v___x_461_; 
lean_dec(v_x_457_);
v_head_460_ = lean_ctor_get(v_x_456_, 0);
lean_inc(v_head_460_);
lean_dec_ref_known(v_x_456_, 2);
v___x_461_ = l_Std_Time_TimeZone_instReprTransition_repr___redArg(v_head_460_);
return v___x_461_;
}
else
{
lean_object* v_head_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
lean_inc(v_tail_459_);
v_head_462_ = lean_ctor_get(v_x_456_, 0);
lean_inc(v_head_462_);
lean_dec_ref_known(v_x_456_, 2);
v___x_463_ = l_Std_Time_TimeZone_instReprTransition_repr___redArg(v_head_462_);
v___x_464_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0_spec__2(v_x_457_, v___x_463_, v_tail_459_);
return v___x_464_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__0));
v___x_471_ = lean_string_length(v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__3);
v___x_473_ = lean_nat_to_int(v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0(lean_object* v_xs_481_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_482_ = lean_array_get_size(v_xs_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_nat_dec_eq(v___x_482_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_485_ = lean_array_to_list(v_xs_481_);
v___x_486_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__1));
v___x_487_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0_spec__0(v___x_485_, v___x_486_);
v___x_488_ = lean_obj_once(&l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4, &l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__4);
v___x_489_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__5));
v___x_490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_487_);
v___x_491_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__6));
v___x_492_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_488_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = l_Std_Format_fill(v___x_493_);
return v___x_494_;
}
else
{
lean_object* v___x_495_; 
lean_dec_ref(v_xs_481_);
v___x_495_ = ((lean_object*)(l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0___closed__8));
return v___x_495_;
}
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(24u);
v___x_506_ = lean_nat_to_int(v___x_505_);
return v___x_506_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(15u);
v___x_511_ = lean_nat_to_int(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_unsigned_to_nat(18u);
v___x_516_ = lean_nat_to_int(v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___redArg(lean_object* v_x_517_){
_start:
{
lean_object* v_initialLocalTimeType_518_; lean_object* v_transitions_519_; lean_object* v_transitionRule_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_initialLocalTimeType_518_ = lean_ctor_get(v_x_517_, 0);
lean_inc_ref(v_initialLocalTimeType_518_);
v_transitions_519_ = lean_ctor_get(v_x_517_, 1);
lean_inc_ref(v_transitions_519_);
v_transitionRule_520_ = lean_ctor_get(v_x_517_, 2);
lean_inc(v_transitionRule_520_);
lean_dec_ref(v_x_517_);
v___x_521_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__5));
v___x_522_ = ((lean_object*)(l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__3));
v___x_523_ = lean_obj_once(&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4, &l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4_once, _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__4);
v___x_524_ = lean_unsigned_to_nat(0u);
v___x_525_ = l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg(v_initialLocalTimeType_518_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_523_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_522_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__9));
v___x_531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_box(1);
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = ((lean_object*)(l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__6));
v___x_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v___x_521_);
v___x_537_ = lean_obj_once(&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7, &l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7_once, _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__7);
v___x_538_ = l_Array_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__0(v_transitions_519_);
v___x_539_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*1, v___x_527_);
v___x_541_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_536_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
lean_ctor_set(v___x_542_, 1, v___x_530_);
v___x_543_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_532_);
v___x_544_ = ((lean_object*)(l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__9));
v___x_545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
lean_ctor_set(v___x_546_, 1, v___x_521_);
v___x_547_ = lean_obj_once(&l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10, &l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10_once, _init_l_Std_Time_TimeZone_instReprZoneRules_repr___redArg___closed__10);
v___x_548_ = l_Option_repr___at___00Std_Time_TimeZone_instReprZoneRules_repr_spec__1(v_transitionRule_520_, v___x_524_);
v___x_549_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*1, v___x_527_);
v___x_551_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_546_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = lean_obj_once(&l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27, &l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27_once, _init_l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__27);
v___x_553_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__28));
v___x_554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
lean_ctor_set(v___x_554_, 1, v___x_551_);
v___x_555_ = ((lean_object*)(l_Std_Time_TimeZone_instReprLocalTimeType_repr___redArg___closed__29));
v___x_556_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_552_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set_uint8(v___x_558_, sizeof(void*)*1, v___x_527_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr(lean_object* v_x_559_, lean_object* v_prec_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Std_Time_TimeZone_instReprZoneRules_repr___redArg(v_x_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_instReprZoneRules_repr___boxed(lean_object* v_x_562_, lean_object* v_prec_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Std_Time_TimeZone_instReprZoneRules_repr(v_x_562_, v_prec_563_);
lean_dec(v_prec_563_);
return v_res_564_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_569_ = lean_box(0);
v___x_570_ = ((lean_object*)(l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__0));
v___x_571_ = l_Std_Time_TimeZone_instInhabitedLocalTimeType_default;
v___x_572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_570_);
lean_ctor_set(v___x_572_, 2, v___x_569_);
return v___x_572_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedZoneRules_default(void){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1, &l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1_once, _init_l_Std_Time_TimeZone_instInhabitedZoneRules_default___closed__1);
return v___x_573_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_instInhabitedZoneRules(void){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Std_Time_TimeZone_instInhabitedZoneRules_default;
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timestamp(lean_object* v_t_575_){
_start:
{
lean_object* v_time_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_time_576_ = lean_ctor_get(v_t_575_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_t_575_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; 
v_unused_585_ = lean_ctor_get(v_t_575_, 1);
lean_dec(v_unused_585_);
v___x_578_ = v_t_575_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_time_576_);
lean_dec(v_t_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 1, v___x_580_);
v___x_582_ = v___x_578_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_time_576_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___x_580_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition(lean_object* v_transition_586_){
_start:
{
lean_object* v_localTimeType_587_; lean_object* v_gmtOffset_588_; uint8_t v_isDst_589_; lean_object* v_abbreviation_590_; lean_object* v_identifier_591_; lean_object* v___x_592_; 
v_localTimeType_587_ = lean_ctor_get(v_transition_586_, 1);
v_gmtOffset_588_ = lean_ctor_get(v_localTimeType_587_, 0);
v_isDst_589_ = lean_ctor_get_uint8(v_localTimeType_587_, sizeof(void*)*3);
v_abbreviation_590_ = lean_ctor_get(v_localTimeType_587_, 1);
v_identifier_591_ = lean_ctor_get(v_localTimeType_587_, 2);
lean_inc_ref(v_abbreviation_590_);
lean_inc_ref(v_identifier_591_);
lean_inc(v_gmtOffset_588_);
v___x_592_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_592_, 0, v_gmtOffset_588_);
lean_ctor_set(v___x_592_, 1, v_identifier_591_);
lean_ctor_set(v___x_592_, 2, v_abbreviation_590_);
lean_ctor_set_uint8(v___x_592_, sizeof(void*)*3, v_isDst_589_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition___boxed(lean_object* v_transition_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition(v_transition_593_);
lean_dec_ref(v_transition_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0(lean_object* v_value_595_, lean_object* v_as_596_, lean_object* v_j_597_){
_start:
{
lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_598_ = lean_array_get_size(v_as_596_);
v___x_599_ = lean_nat_dec_lt(v_j_597_, v___x_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; 
lean_dec(v_j_597_);
v___x_600_ = lean_box(0);
return v___x_600_;
}
else
{
lean_object* v___x_601_; lean_object* v_time_602_; uint8_t v___x_603_; 
v___x_601_ = lean_array_fget_borrowed(v_as_596_, v_j_597_);
v_time_602_ = lean_ctor_get(v___x_601_, 0);
v___x_603_ = lean_int_dec_lt(v_value_595_, v_time_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_unsigned_to_nat(1u);
v___x_605_ = lean_nat_add(v_j_597_, v___x_604_);
lean_dec(v_j_597_);
v_j_597_ = v___x_605_;
goto _start;
}
else
{
lean_object* v___x_607_; 
v___x_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_607_, 0, v_j_597_);
return v___x_607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0___boxed(lean_object* v_value_608_, lean_object* v_as_609_, lean_object* v_j_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0(v_value_608_, v_as_609_, v_j_610_);
lean_dec_ref(v_as_609_);
lean_dec(v_value_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp(lean_object* v_transitions_612_, lean_object* v_timestamp_613_){
_start:
{
lean_object* v_second_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v_second_614_ = lean_ctor_get(v_timestamp_613_, 0);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = l_Array_findIdx_x3f_loop___at___00Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp_spec__0(v_second_614_, v_transitions_612_, v___x_615_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_get_size(v_transitions_612_);
v___x_618_ = lean_nat_dec_eq(v___x_617_, v___x_615_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = lean_nat_sub(v___x_617_, v___x_619_);
v___x_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
else
{
return v___x_616_;
}
}
else
{
lean_object* v_val_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_633_; 
v_val_622_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_633_ == 0)
{
v___x_624_ = v___x_616_;
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_val_622_);
lean_dec(v___x_616_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
uint8_t v___x_626_; 
v___x_626_ = lean_nat_dec_eq(v_val_622_, v___x_615_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_sub(v_val_622_, v___x_627_);
lean_dec(v_val_622_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_628_);
v___x_630_ = v___x_624_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
else
{
lean_object* v___x_632_; 
lean_del_object(v___x_624_);
lean_dec(v_val_622_);
v___x_632_ = lean_box(0);
return v___x_632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp___boxed(lean_object* v_transitions_634_, lean_object* v_timestamp_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp(v_transitions_634_, v_timestamp_635_);
lean_dec_ref(v_timestamp_635_);
lean_dec_ref(v_transitions_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionForTimestamp(lean_object* v_transitions_637_, lean_object* v_timestamp_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp(v_transitions_637_, v_timestamp_638_);
if (lean_obj_tag(v___x_639_) == 1)
{
lean_object* v_val_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_651_; 
v_val_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_651_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_651_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_val_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_651_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = lean_array_get_size(v_transitions_637_);
v___x_645_ = lean_nat_dec_lt(v_val_640_, v___x_644_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; 
lean_del_object(v___x_642_);
lean_dec(v_val_640_);
v___x_646_ = lean_box(0);
return v___x_646_;
}
else
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_array_fget_borrowed(v_transitions_637_, v_val_640_);
lean_dec(v_val_640_);
lean_inc(v___x_647_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_647_);
v___x_649_ = v___x_642_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
lean_object* v___x_652_; 
lean_dec(v___x_639_);
v___x_652_ = lean_box(0);
return v___x_652_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_findTransitionForTimestamp___boxed(lean_object* v_transitions_653_, lean_object* v_timestamp_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Std_Time_TimeZone_Transition_findTransitionForTimestamp(v_transitions_653_, v_timestamp_654_);
lean_dec_ref(v_timestamp_654_);
lean_dec_ref(v_transitions_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timezoneAt(lean_object* v_transitions_659_, lean_object* v_tm_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Std_Time_TimeZone_Transition_findTransitionForTimestamp(v_transitions_659_, v_tm_660_);
if (lean_obj_tag(v___x_661_) == 1)
{
lean_object* v_val_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_670_; 
v_val_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_670_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_val_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_670_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v___x_668_; 
v___x_666_ = l_Std_Time_TimeZone_Transition_createTimeZoneFromTransition(v_val_662_);
lean_dec(v_val_662_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v___x_666_);
v___x_668_ = v___x_664_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_object* v___x_671_; 
lean_dec(v___x_661_);
v___x_671_ = ((lean_object*)(l_Std_Time_TimeZone_Transition_timezoneAt___closed__1));
return v___x_671_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_Transition_timezoneAt___boxed(lean_object* v_transitions_672_, lean_object* v_tm_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Std_Time_TimeZone_Transition_timezoneAt(v_transitions_672_, v_tm_673_);
lean_dec_ref(v_tm_673_);
lean_dec_ref(v_transitions_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds_spec__0(lean_object* v_a_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Rat_ofInt(v_a_675_);
return v___x_676_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_unsigned_to_nat(86400u);
v___x_678_ = lean_nat_to_int(v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds(lean_object* v_rule_679_, lean_object* v_year_680_, lean_object* v_wallOffset_681_){
_start:
{
lean_object* v_spec_682_; lean_object* v_time_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v_spec_682_ = lean_ctor_get(v_rule_679_, 0);
lean_inc_ref(v_spec_682_);
v_time_683_ = lean_ctor_get(v_rule_679_, 1);
lean_inc(v_time_683_);
lean_dec_ref(v_rule_679_);
v___x_684_ = l_Std_Time_TimeZone_TransitionSpec_toEpochDay(v_spec_682_, v_year_680_);
v___x_685_ = lean_obj_once(&l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0, &l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0_once, _init_l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0);
v___x_686_ = lean_int_mul(v___x_684_, v___x_685_);
lean_dec(v___x_684_);
v___x_687_ = lean_int_add(v___x_686_, v_time_683_);
lean_dec(v_time_683_);
lean_dec(v___x_686_);
v___x_688_ = lean_int_sub(v___x_687_, v_wallOffset_681_);
lean_dec(v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___boxed(lean_object* v_rule_689_, lean_object* v_year_690_, lean_object* v_wallOffset_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds(v_rule_689_, v_year_690_, v_wallOffset_691_);
lean_dec(v_wallOffset_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_RecurringRule_timezoneAt(lean_object* v_rule_693_, lean_object* v_tm_694_){
_start:
{
lean_object* v_stdName_695_; lean_object* v_stdOffset_696_; lean_object* v_dst_697_; uint8_t v___x_698_; lean_object* v_stdTz_699_; 
v_stdName_695_ = lean_ctor_get(v_rule_693_, 0);
lean_inc_ref_n(v_stdName_695_, 2);
v_stdOffset_696_ = lean_ctor_get(v_rule_693_, 1);
lean_inc_n(v_stdOffset_696_, 2);
v_dst_697_ = lean_ctor_get(v_rule_693_, 2);
lean_inc(v_dst_697_);
lean_dec_ref(v_rule_693_);
v___x_698_ = 0;
v_stdTz_699_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_stdTz_699_, 0, v_stdOffset_696_);
lean_ctor_set(v_stdTz_699_, 1, v_stdName_695_);
lean_ctor_set(v_stdTz_699_, 2, v_stdName_695_);
lean_ctor_set_uint8(v_stdTz_699_, sizeof(void*)*3, v___x_698_);
if (lean_obj_tag(v_dst_697_) == 1)
{
lean_object* v_val_700_; lean_object* v_name_701_; lean_object* v_offset_702_; lean_object* v_start_703_; lean_object* v_end___704_; uint8_t v___x_705_; lean_object* v_dstTz_706_; 
v_val_700_ = lean_ctor_get(v_dst_697_, 0);
lean_inc(v_val_700_);
lean_dec_ref_known(v_dst_697_, 1);
v_name_701_ = lean_ctor_get(v_val_700_, 0);
lean_inc_ref_n(v_name_701_, 2);
v_offset_702_ = lean_ctor_get(v_val_700_, 1);
lean_inc_n(v_offset_702_, 2);
v_start_703_ = lean_ctor_get(v_val_700_, 2);
lean_inc(v_start_703_);
v_end___704_ = lean_ctor_get(v_val_700_, 3);
lean_inc(v_end___704_);
lean_dec(v_val_700_);
v___x_705_ = 1;
v_dstTz_706_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_dstTz_706_, 0, v_offset_702_);
lean_ctor_set(v_dstTz_706_, 1, v_name_701_);
lean_ctor_set(v_dstTz_706_, 2, v_name_701_);
lean_ctor_set_uint8(v_dstTz_706_, sizeof(void*)*3, v___x_705_);
if (lean_obj_tag(v_start_703_) == 1)
{
if (lean_obj_tag(v_end___704_) == 1)
{
lean_object* v_val_707_; lean_object* v_val_708_; lean_object* v_second_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v_year_713_; lean_object* v_dstStart_714_; lean_object* v_dstEnd_715_; uint8_t v___x_716_; 
v_val_707_ = lean_ctor_get(v_start_703_, 0);
lean_inc(v_val_707_);
lean_dec_ref_known(v_start_703_, 1);
v_val_708_ = lean_ctor_get(v_end___704_, 0);
lean_inc(v_val_708_);
lean_dec_ref_known(v_end___704_, 1);
v_second_709_ = lean_ctor_get(v_tm_694_, 0);
v___x_710_ = lean_obj_once(&l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0, &l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0_once, _init_l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds___closed__0);
v___x_711_ = lean_int_ediv(v_second_709_, v___x_710_);
v___x_712_ = l_Std_Time_PlainDate_ofEpochDay(v___x_711_);
lean_dec(v___x_711_);
v_year_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc_n(v_year_713_, 2);
lean_dec_ref(v___x_712_);
v_dstStart_714_ = l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds(v_val_707_, v_year_713_, v_stdOffset_696_);
lean_dec(v_stdOffset_696_);
v_dstEnd_715_ = l___private_Std_Time_Zoned_ZoneRules_0__Std_Time_TimeZone_RecurringRule_transitionUtcSeconds(v_val_708_, v_year_713_, v_offset_702_);
lean_dec(v_offset_702_);
v___x_716_ = lean_int_dec_le(v_dstStart_714_, v_dstEnd_715_);
if (v___x_716_ == 0)
{
uint8_t v___x_717_; 
v___x_717_ = lean_int_dec_lt(v_second_709_, v_dstEnd_715_);
lean_dec(v_dstEnd_715_);
if (v___x_717_ == 0)
{
uint8_t v___x_718_; 
v___x_718_ = lean_int_dec_le(v_dstStart_714_, v_second_709_);
lean_dec(v_dstStart_714_);
if (v___x_718_ == 0)
{
lean_dec_ref_known(v_dstTz_706_, 3);
return v_stdTz_699_;
}
else
{
lean_dec_ref_known(v_stdTz_699_, 3);
return v_dstTz_706_;
}
}
else
{
lean_dec(v_dstStart_714_);
lean_dec_ref_known(v_stdTz_699_, 3);
return v_dstTz_706_;
}
}
else
{
uint8_t v___x_719_; 
v___x_719_ = lean_int_dec_le(v_dstStart_714_, v_second_709_);
lean_dec(v_dstStart_714_);
if (v___x_719_ == 0)
{
lean_dec(v_dstEnd_715_);
lean_dec_ref_known(v_dstTz_706_, 3);
return v_stdTz_699_;
}
else
{
uint8_t v___x_720_; 
v___x_720_ = lean_int_dec_lt(v_second_709_, v_dstEnd_715_);
lean_dec(v_dstEnd_715_);
if (v___x_720_ == 0)
{
lean_dec_ref_known(v_dstTz_706_, 3);
return v_stdTz_699_;
}
else
{
lean_dec_ref_known(v_stdTz_699_, 3);
return v_dstTz_706_;
}
}
}
}
else
{
lean_dec_ref_known(v_start_703_, 1);
lean_dec_ref_known(v_dstTz_706_, 3);
lean_dec(v_end___704_);
lean_dec(v_offset_702_);
lean_dec(v_stdOffset_696_);
return v_stdTz_699_;
}
}
else
{
lean_dec_ref_known(v_dstTz_706_, 3);
lean_dec(v_end___704_);
lean_dec(v_start_703_);
lean_dec(v_offset_702_);
lean_dec(v_stdOffset_696_);
return v_stdTz_699_;
}
}
else
{
lean_dec(v_dst_697_);
lean_dec(v_stdOffset_696_);
return v_stdTz_699_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_RecurringRule_timezoneAt___boxed(lean_object* v_rule_721_, lean_object* v_tm_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Std_Time_TimeZone_RecurringRule_timezoneAt(v_rule_721_, v_tm_722_);
lean_dec_ref(v_tm_722_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___lam__0(lean_object* v_second_724_, lean_object* v_00___725_){
_start:
{
uint8_t v___x_726_; lean_object* v___x_727_; 
v___x_726_ = 1;
v___x_727_ = l_Std_Time_TimeZone_Offset_toIsoString(v_second_724_, v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object* v_second_730_, lean_object* v_identifier_731_, lean_object* v_abbreviation_732_){
_start:
{
uint8_t v___x_733_; uint8_t v___y_735_; uint8_t v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_744_; 
v___x_733_ = 0;
if (lean_obj_tag(v_abbreviation_732_) == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_box(0);
lean_inc(v_second_730_);
v___x_751_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___lam__0(v_second_730_, v___x_750_);
v___y_744_ = v___x_751_;
goto v___jp_743_;
}
else
{
lean_object* v_val_752_; 
v_val_752_ = lean_ctor_get(v_abbreviation_732_, 0);
lean_inc(v_val_752_);
lean_dec_ref_known(v_abbreviation_732_, 1);
v___y_744_ = v_val_752_;
goto v___jp_743_;
}
v___jp_734_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_739_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_739_, 0, v_second_730_);
lean_ctor_set(v___x_739_, 1, v___y_737_);
lean_ctor_set(v___x_739_, 2, v___y_738_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*3, v___x_733_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*3 + 1, v___y_736_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*3 + 2, v___y_735_);
v___x_740_ = ((lean_object*)(l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___closed__0));
v___x_741_ = lean_box(0);
v___x_742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_742_, 0, v___x_739_);
lean_ctor_set(v___x_742_, 1, v___x_740_);
lean_ctor_set(v___x_742_, 2, v___x_741_);
return v___x_742_;
}
v___jp_743_:
{
uint8_t v___x_745_; uint8_t v___x_746_; 
v___x_745_ = 1;
v___x_746_ = 0;
if (lean_obj_tag(v_identifier_731_) == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_box(0);
lean_inc(v_second_730_);
v___x_748_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___lam__0(v_second_730_, v___x_747_);
v___y_735_ = v___x_746_;
v___y_736_ = v___x_745_;
v___y_737_ = v___y_744_;
v___y_738_ = v___x_748_;
goto v___jp_734_;
}
else
{
lean_object* v_val_749_; 
v_val_749_ = lean_ctor_get(v_identifier_731_, 0);
lean_inc(v_val_749_);
lean_dec_ref_known(v_identifier_731_, 1);
v___y_735_ = v___x_746_;
v___y_736_ = v___x_745_;
v___y_737_ = v___y_744_;
v___y_738_ = v_val_749_;
goto v___jp_734_;
}
}
}
}
static lean_object* _init_l_Std_Time_TimeZone_ZoneRules_UTC___closed__0(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_nat_to_int(v___x_753_);
return v___x_754_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_ZoneRules_UTC___closed__3(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_758_ = ((lean_object*)(l_Std_Time_TimeZone_ZoneRules_UTC___closed__2));
v___x_759_ = lean_obj_once(&l_Std_Time_TimeZone_ZoneRules_UTC___closed__0, &l_Std_Time_TimeZone_ZoneRules_UTC___closed__0_once, _init_l_Std_Time_TimeZone_ZoneRules_UTC___closed__0);
v___x_760_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_759_, v___x_758_, v___x_758_);
return v___x_760_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_ZoneRules_UTC(void){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = lean_obj_once(&l_Std_Time_TimeZone_ZoneRules_UTC___closed__3, &l_Std_Time_TimeZone_ZoneRules_UTC___closed__3_once, _init_l_Std_Time_TimeZone_ZoneRules_UTC___closed__3);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(lean_object* v_zr_762_, lean_object* v_timestamp_763_){
_start:
{
lean_object* v_initialLocalTimeType_764_; lean_object* v_transitions_765_; lean_object* v_transitionRule_766_; lean_object* v___x_767_; 
v_initialLocalTimeType_764_ = lean_ctor_get(v_zr_762_, 0);
lean_inc_ref(v_initialLocalTimeType_764_);
v_transitions_765_ = lean_ctor_get(v_zr_762_, 1);
lean_inc_ref(v_transitions_765_);
v_transitionRule_766_ = lean_ctor_get(v_zr_762_, 2);
lean_inc(v_transitionRule_766_);
lean_dec_ref(v_zr_762_);
v___x_767_ = l_Std_Time_TimeZone_Transition_findTransitionIndexForTimestamp(v_transitions_765_, v_timestamp_763_);
if (lean_obj_tag(v___x_767_) == 1)
{
lean_object* v_val_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_val_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_val_768_);
lean_dec_ref_known(v___x_767_, 1);
v___x_769_ = lean_array_get_size(v_transitions_765_);
v___x_770_ = lean_nat_dec_lt(v_val_768_, v___x_769_);
if (v___x_770_ == 0)
{
lean_dec(v_val_768_);
lean_dec(v_transitionRule_766_);
lean_dec_ref(v_transitions_765_);
return v_initialLocalTimeType_764_;
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
lean_dec_ref(v_initialLocalTimeType_764_);
v___x_771_ = lean_array_fget(v_transitions_765_, v_val_768_);
lean_dec_ref(v_transitions_765_);
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = lean_nat_add(v_val_768_, v___x_772_);
lean_dec(v_val_768_);
v___x_774_ = lean_nat_dec_eq(v___x_773_, v___x_769_);
lean_dec(v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v_localTimeType_775_; 
lean_dec(v_transitionRule_766_);
v_localTimeType_775_ = lean_ctor_get(v___x_771_, 1);
lean_inc_ref(v_localTimeType_775_);
lean_dec(v___x_771_);
return v_localTimeType_775_;
}
else
{
if (lean_obj_tag(v_transitionRule_766_) == 1)
{
lean_object* v_val_776_; lean_object* v_localTimeType_777_; lean_object* v_tz_778_; lean_object* v_offset_779_; lean_object* v_name_780_; lean_object* v_abbreviation_781_; uint8_t v_isDST_782_; uint8_t v_wall_783_; uint8_t v_utLocal_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_val_776_ = lean_ctor_get(v_transitionRule_766_, 0);
lean_inc(v_val_776_);
lean_dec_ref_known(v_transitionRule_766_, 1);
v_localTimeType_777_ = lean_ctor_get(v___x_771_, 1);
lean_inc_ref(v_localTimeType_777_);
lean_dec(v___x_771_);
v_tz_778_ = l_Std_Time_TimeZone_RecurringRule_timezoneAt(v_val_776_, v_timestamp_763_);
v_offset_779_ = lean_ctor_get(v_tz_778_, 0);
lean_inc(v_offset_779_);
v_name_780_ = lean_ctor_get(v_tz_778_, 1);
lean_inc_ref(v_name_780_);
v_abbreviation_781_ = lean_ctor_get(v_tz_778_, 2);
lean_inc_ref(v_abbreviation_781_);
v_isDST_782_ = lean_ctor_get_uint8(v_tz_778_, sizeof(void*)*3);
lean_dec_ref(v_tz_778_);
v_wall_783_ = lean_ctor_get_uint8(v_localTimeType_777_, sizeof(void*)*3 + 1);
v_utLocal_784_ = lean_ctor_get_uint8(v_localTimeType_777_, sizeof(void*)*3 + 2);
v_isSharedCheck_791_ = !lean_is_exclusive(v_localTimeType_777_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; lean_object* v_unused_793_; lean_object* v_unused_794_; 
v_unused_792_ = lean_ctor_get(v_localTimeType_777_, 2);
lean_dec(v_unused_792_);
v_unused_793_ = lean_ctor_get(v_localTimeType_777_, 1);
lean_dec(v_unused_793_);
v_unused_794_ = lean_ctor_get(v_localTimeType_777_, 0);
lean_dec(v_unused_794_);
v___x_786_ = v_localTimeType_777_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_dec(v_localTimeType_777_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 2, v_name_780_);
lean_ctor_set(v___x_786_, 1, v_abbreviation_781_);
lean_ctor_set(v___x_786_, 0, v_offset_779_);
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_offset_779_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_abbreviation_781_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v_name_780_);
lean_ctor_set_uint8(v_reuseFailAlloc_790_, sizeof(void*)*3 + 1, v_wall_783_);
lean_ctor_set_uint8(v_reuseFailAlloc_790_, sizeof(void*)*3 + 2, v_utLocal_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_ctor_set_uint8(v___x_789_, sizeof(void*)*3, v_isDST_782_);
return v___x_789_;
}
}
}
else
{
lean_object* v_localTimeType_795_; 
lean_dec(v_transitionRule_766_);
v_localTimeType_795_ = lean_ctor_get(v___x_771_, 1);
lean_inc_ref(v_localTimeType_795_);
lean_dec(v___x_771_);
return v_localTimeType_795_;
}
}
}
}
else
{
lean_dec(v___x_767_);
lean_dec(v_transitionRule_766_);
lean_dec_ref(v_transitions_765_);
return v_initialLocalTimeType_764_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp___boxed(lean_object* v_zr_796_, lean_object* v_timestamp_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(v_zr_796_, v_timestamp_797_);
lean_dec_ref(v_timestamp_797_);
return v_res_798_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_unsigned_to_nat(1000000000u);
v___x_800_ = lean_nat_to_int(v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0(lean_object* v_wallTime_801_, lean_object* v_as_802_, size_t v_sz_803_, size_t v_i_804_, lean_object* v_b_805_){
_start:
{
uint8_t v___x_806_; 
v___x_806_ = lean_usize_dec_lt(v_i_804_, v_sz_803_);
if (v___x_806_ == 0)
{
return v_b_805_;
}
else
{
lean_object* v_snd_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_837_; 
v_snd_807_ = lean_ctor_get(v_b_805_, 1);
v_isSharedCheck_837_ = !lean_is_exclusive(v_b_805_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v_b_805_, 0);
lean_dec(v_unused_838_);
v___x_809_ = v_b_805_;
v_isShared_810_ = v_isSharedCheck_837_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_snd_807_);
lean_dec(v_b_805_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_837_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v_gmtOffset_811_; lean_object* v_a_812_; lean_object* v___x_813_; lean_object* v_second_814_; lean_object* v_nano_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; uint8_t v___x_824_; 
v_gmtOffset_811_ = lean_ctor_get(v_snd_807_, 0);
v_a_812_ = lean_array_uget_borrowed(v_as_802_, v_i_804_);
lean_inc(v_a_812_);
v___x_813_ = l_Std_Time_TimeZone_Transition_timestamp(v_a_812_);
v_second_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_second_814_);
v_nano_815_ = lean_ctor_get(v___x_813_, 1);
lean_inc(v_nano_815_);
lean_dec_ref(v___x_813_);
v___x_816_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0);
v___x_817_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0);
v___x_818_ = lean_int_mul(v_second_814_, v___x_817_);
lean_dec(v_second_814_);
v___x_819_ = lean_int_add(v___x_818_, v_nano_815_);
lean_dec(v_nano_815_);
lean_dec(v___x_818_);
v___x_820_ = lean_int_mul(v_gmtOffset_811_, v___x_817_);
v___x_821_ = lean_int_add(v___x_820_, v___x_816_);
lean_dec(v___x_820_);
v___x_822_ = lean_int_add(v___x_819_, v___x_821_);
lean_dec(v___x_821_);
lean_dec(v___x_819_);
v___x_823_ = l_Std_Time_Duration_ofNanoseconds(v___x_822_);
lean_dec(v___x_822_);
v___x_824_ = l_Std_Time_Duration_instDecidableLt(v_wallTime_801_, v___x_823_);
lean_dec_ref(v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v_localTimeType_825_; lean_object* v___x_826_; lean_object* v___x_828_; 
lean_dec(v_snd_807_);
v_localTimeType_825_ = lean_ctor_get(v_a_812_, 1);
v___x_826_ = lean_box(0);
lean_inc_ref(v_localTimeType_825_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v_localTimeType_825_);
lean_ctor_set(v___x_809_, 0, v___x_826_);
v___x_828_ = v___x_809_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_826_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_localTimeType_825_);
v___x_828_ = v_reuseFailAlloc_832_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
size_t v___x_829_; size_t v___x_830_; 
v___x_829_ = ((size_t)1ULL);
v___x_830_ = lean_usize_add(v_i_804_, v___x_829_);
v_i_804_ = v___x_830_;
v_b_805_ = v___x_828_;
goto _start;
}
}
else
{
lean_object* v___x_833_; lean_object* v___x_835_; 
lean_inc(v_snd_807_);
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v_snd_807_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_833_);
v___x_835_ = v___x_809_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_snd_807_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___boxed(lean_object* v_wallTime_839_, lean_object* v_as_840_, lean_object* v_sz_841_, lean_object* v_i_842_, lean_object* v_b_843_){
_start:
{
size_t v_sz_boxed_844_; size_t v_i_boxed_845_; lean_object* v_res_846_; 
v_sz_boxed_844_ = lean_unbox_usize(v_sz_841_);
lean_dec(v_sz_841_);
v_i_boxed_845_ = lean_unbox_usize(v_i_842_);
lean_dec(v_i_842_);
v_res_846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0(v_wallTime_839_, v_as_840_, v_sz_boxed_844_, v_i_boxed_845_, v_b_843_);
lean_dec_ref(v_as_840_);
lean_dec_ref(v_wallTime_839_);
return v_res_846_;
}
}
static lean_object* _init_l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_obj_once(&l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0, &l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0_once, _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default___closed__0);
v___x_848_ = lean_int_neg(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(lean_object* v_zr_849_, lean_object* v_wallTime_850_){
_start:
{
lean_object* v_initialLocalTimeType_851_; lean_object* v_transitions_852_; lean_object* v_transitionRule_853_; lean_object* v___x_854_; lean_object* v___x_855_; size_t v_sz_856_; size_t v___x_857_; lean_object* v___x_858_; lean_object* v_fst_859_; 
v_initialLocalTimeType_851_ = lean_ctor_get(v_zr_849_, 0);
lean_inc_ref(v_initialLocalTimeType_851_);
v_transitions_852_ = lean_ctor_get(v_zr_849_, 1);
lean_inc_ref(v_transitions_852_);
v_transitionRule_853_ = lean_ctor_get(v_zr_849_, 2);
lean_inc(v_transitionRule_853_);
lean_dec_ref(v_zr_849_);
v___x_854_ = lean_box(0);
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
lean_ctor_set(v___x_855_, 1, v_initialLocalTimeType_851_);
v_sz_856_ = lean_array_size(v_transitions_852_);
v___x_857_ = ((size_t)0ULL);
v___x_858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0(v_wallTime_850_, v_transitions_852_, v_sz_856_, v___x_857_, v___x_855_);
lean_dec_ref(v_transitions_852_);
v_fst_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_fst_859_);
if (lean_obj_tag(v_fst_859_) == 0)
{
if (lean_obj_tag(v_transitionRule_853_) == 1)
{
lean_object* v_snd_860_; lean_object* v_val_861_; lean_object* v_gmtOffset_862_; uint8_t v_wall_863_; uint8_t v_utLocal_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_887_; 
v_snd_860_ = lean_ctor_get(v___x_858_, 1);
lean_inc(v_snd_860_);
lean_dec_ref(v___x_858_);
v_val_861_ = lean_ctor_get(v_transitionRule_853_, 0);
lean_inc(v_val_861_);
lean_dec_ref_known(v_transitionRule_853_, 1);
v_gmtOffset_862_ = lean_ctor_get(v_snd_860_, 0);
v_wall_863_ = lean_ctor_get_uint8(v_snd_860_, sizeof(void*)*3 + 1);
v_utLocal_864_ = lean_ctor_get_uint8(v_snd_860_, sizeof(void*)*3 + 2);
v_isSharedCheck_887_ = !lean_is_exclusive(v_snd_860_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; lean_object* v_unused_889_; 
v_unused_888_ = lean_ctor_get(v_snd_860_, 2);
lean_dec(v_unused_888_);
v_unused_889_ = lean_ctor_get(v_snd_860_, 1);
lean_dec(v_unused_889_);
v___x_866_ = v_snd_860_;
v_isShared_867_ = v_isSharedCheck_887_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_gmtOffset_862_);
lean_dec(v_snd_860_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_887_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v_second_868_; lean_object* v_nano_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_offset_880_; lean_object* v_name_881_; lean_object* v_abbreviation_882_; uint8_t v_isDST_883_; lean_object* v___x_885_; 
v_second_868_ = lean_ctor_get(v_wallTime_850_, 0);
v_nano_869_ = lean_ctor_get(v_wallTime_850_, 1);
v___x_870_ = lean_int_neg(v_gmtOffset_862_);
lean_dec(v_gmtOffset_862_);
v___x_871_ = lean_obj_once(&l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0, &l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0_once, _init_l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___closed__0);
v___x_872_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime_spec__0___closed__0);
v___x_873_ = lean_int_mul(v_second_868_, v___x_872_);
v___x_874_ = lean_int_add(v___x_873_, v_nano_869_);
lean_dec(v___x_873_);
v___x_875_ = lean_int_mul(v___x_870_, v___x_872_);
lean_dec(v___x_870_);
v___x_876_ = lean_int_add(v___x_875_, v___x_871_);
lean_dec(v___x_875_);
v___x_877_ = lean_int_add(v___x_874_, v___x_876_);
lean_dec(v___x_876_);
lean_dec(v___x_874_);
v___x_878_ = l_Std_Time_Duration_ofNanoseconds(v___x_877_);
lean_dec(v___x_877_);
v___x_879_ = l_Std_Time_TimeZone_RecurringRule_timezoneAt(v_val_861_, v___x_878_);
lean_dec_ref(v___x_878_);
v_offset_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_offset_880_);
v_name_881_ = lean_ctor_get(v___x_879_, 1);
lean_inc_ref(v_name_881_);
v_abbreviation_882_ = lean_ctor_get(v___x_879_, 2);
lean_inc_ref(v_abbreviation_882_);
v_isDST_883_ = lean_ctor_get_uint8(v___x_879_, sizeof(void*)*3);
lean_dec_ref(v___x_879_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 2, v_name_881_);
lean_ctor_set(v___x_866_, 1, v_abbreviation_882_);
lean_ctor_set(v___x_866_, 0, v_offset_880_);
v___x_885_ = v___x_866_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_offset_880_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_abbreviation_882_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_name_881_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*3 + 1, v_wall_863_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*3 + 2, v_utLocal_864_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*3, v_isDST_883_);
return v___x_885_;
}
}
}
else
{
lean_object* v_snd_890_; 
lean_dec(v_transitionRule_853_);
v_snd_890_ = lean_ctor_get(v___x_858_, 1);
lean_inc(v_snd_890_);
lean_dec_ref(v___x_858_);
return v_snd_890_;
}
}
else
{
lean_object* v_val_891_; 
lean_dec_ref(v___x_858_);
lean_dec(v_transitionRule_853_);
v_val_891_ = lean_ctor_get(v_fst_859_, 0);
lean_inc(v_val_891_);
lean_dec_ref_known(v_fst_859_, 1);
return v_val_891_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime___boxed(lean_object* v_zr_892_, lean_object* v_wallTime_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(v_zr_892_, v_wallTime_893_);
lean_dec_ref(v_wallTime_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object* v_zr_895_, lean_object* v_tm_896_){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(v_zr_895_, v_tm_896_);
v___x_898_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v___x_897_);
lean_dec_ref(v___x_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt___boxed(lean_object* v_zr_899_, lean_object* v_tm_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v_zr_899_, v_tm_900_);
lean_dec_ref(v_tm_900_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_ofTimeZone(lean_object* v_tz_902_){
_start:
{
lean_object* v_offset_903_; lean_object* v_name_904_; lean_object* v_abbreviation_905_; uint8_t v_isDST_906_; uint8_t v___x_907_; uint8_t v___x_908_; lean_object* v_ltt_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_offset_903_ = lean_ctor_get(v_tz_902_, 0);
v_name_904_ = lean_ctor_get(v_tz_902_, 1);
v_abbreviation_905_ = lean_ctor_get(v_tz_902_, 2);
v_isDST_906_ = lean_ctor_get_uint8(v_tz_902_, sizeof(void*)*3);
v___x_907_ = 0;
v___x_908_ = 1;
lean_inc_ref(v_name_904_);
lean_inc_ref(v_abbreviation_905_);
lean_inc(v_offset_903_);
v_ltt_909_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_909_, 0, v_offset_903_);
lean_ctor_set(v_ltt_909_, 1, v_abbreviation_905_);
lean_ctor_set(v_ltt_909_, 2, v_name_904_);
lean_ctor_set_uint8(v_ltt_909_, sizeof(void*)*3, v_isDST_906_);
lean_ctor_set_uint8(v_ltt_909_, sizeof(void*)*3 + 1, v___x_907_);
lean_ctor_set_uint8(v_ltt_909_, sizeof(void*)*3 + 2, v___x_908_);
v___x_910_ = ((lean_object*)(l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone___closed__0));
v___x_911_ = lean_box(0);
v___x_912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_912_, 0, v_ltt_909_);
lean_ctor_set(v___x_912_, 1, v___x_910_);
lean_ctor_set(v___x_912_, 2, v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_ZoneRules_ofTimeZone___boxed(lean_object* v_tz_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Std_Time_TimeZone_ZoneRules_ofTimeZone(v_tz_913_);
lean_dec_ref(v_tz_913_);
return v_res_914_;
}
}
lean_object* runtime_initialize_Std_Time_Zoned_TimeZone(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_DateTime_Timestamp(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned_RecurringRule(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_RecurringRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_TimeZone_instInhabitedUTLocal_default = _init_l_Std_Time_TimeZone_instInhabitedUTLocal_default();
l_Std_Time_TimeZone_instInhabitedUTLocal = _init_l_Std_Time_TimeZone_instInhabitedUTLocal();
l_Std_Time_TimeZone_instInhabitedStdWall_default = _init_l_Std_Time_TimeZone_instInhabitedStdWall_default();
l_Std_Time_TimeZone_instInhabitedStdWall = _init_l_Std_Time_TimeZone_instInhabitedStdWall();
l_Std_Time_TimeZone_instInhabitedLocalTimeType_default = _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType_default();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedLocalTimeType_default);
l_Std_Time_TimeZone_instInhabitedLocalTimeType = _init_l_Std_Time_TimeZone_instInhabitedLocalTimeType();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedLocalTimeType);
l_Std_Time_TimeZone_instInhabitedTransition_default = _init_l_Std_Time_TimeZone_instInhabitedTransition_default();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedTransition_default);
l_Std_Time_TimeZone_instInhabitedTransition = _init_l_Std_Time_TimeZone_instInhabitedTransition();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedTransition);
l_Std_Time_TimeZone_instInhabitedZoneRules_default = _init_l_Std_Time_TimeZone_instInhabitedZoneRules_default();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedZoneRules_default);
l_Std_Time_TimeZone_instInhabitedZoneRules = _init_l_Std_Time_TimeZone_instInhabitedZoneRules();
lean_mark_persistent(l_Std_Time_TimeZone_instInhabitedZoneRules);
l_Std_Time_TimeZone_ZoneRules_UTC = _init_l_Std_Time_TimeZone_ZoneRules_UTC();
lean_mark_persistent(l_Std_Time_TimeZone_ZoneRules_UTC);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Zoned_TimeZone(uint8_t builtin);
lean_object* initialize_Std_Time_DateTime_Timestamp(uint8_t builtin);
lean_object* initialize_Std_Time_DateTime_WallTime(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned_RecurringRule(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Zoned_TimeZone(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_DateTime_Timestamp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_DateTime_WallTime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned_RecurringRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_ZoneRules(builtin);
}
#ifdef __cplusplus
}
#endif
