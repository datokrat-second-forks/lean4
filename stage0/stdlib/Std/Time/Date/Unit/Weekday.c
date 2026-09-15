// Lean compiler output
// Module: Std.Time.Date.Unit.Weekday
// Imports: public import Std.Time.Date.Unit.Day public import Init.Transport
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
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.Weekday.monday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__0 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__0_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__1 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__1_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Std.Time.Weekday.tuesday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__2 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__2_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__2_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__3 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__3_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Time.Weekday.wednesday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__4 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__4_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__4_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__5 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__5_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Time.Weekday.thursday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__6 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__6_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__6_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__7 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__7_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.Weekday.friday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__8 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__8_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__8_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__9 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__9_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Time.Weekday.saturday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__10 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__10_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__10_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__11 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__11_value;
static const lean_string_object l_Std_Time_instReprWeekday_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.Weekday.sunday"};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__12 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__12_value;
static const lean_ctor_object l_Std_Time_instReprWeekday_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprWeekday_repr___closed__12_value)}};
static const lean_object* l_Std_Time_instReprWeekday_repr___closed__13 = (const lean_object*)&l_Std_Time_instReprWeekday_repr___closed__13_value;
static lean_once_cell_t l_Std_Time_instReprWeekday_repr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWeekday_repr___closed__14;
static lean_once_cell_t l_Std_Time_instReprWeekday_repr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprWeekday_repr___closed__15;
LEAN_EXPORT lean_object* l_Std_Time_instReprWeekday_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprWeekday_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprWeekday___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprWeekday_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprWeekday___closed__0 = (const lean_object*)&l_Std_Time_instReprWeekday___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprWeekday = (const lean_object*)&l_Std_Time_instReprWeekday___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_instInhabitedWeekday_default;
LEAN_EXPORT uint8_t l_Std_Time_instInhabitedWeekday;
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWeekday(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWeekday___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Weekday_Ordinal_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Weekday_Ordinal_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Weekday_Ordinal_equiv___closed__0 = (const lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Weekday_Ordinal_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__0_value),((lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Weekday_Ordinal_equiv___closed__1 = (const lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Weekday_Ordinal_equiv = (const lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__1_value;
static lean_once_cell_t l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Weekday_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Weekday_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Weekday_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Weekday_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Weekday_instReprOrdinal = (const lean_object*)&l_Std_Time_Weekday_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instLTOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instLEOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Weekday_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Weekday_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Weekday_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Weekday_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Weekday_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Weekday_instOrdOrdinal = (const lean_object*)&l_Std_Time_Weekday_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Weekday_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Weekday_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Weekday_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Weekday_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instOfNatOrdinal___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Weekday_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Weekday_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Weekday_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Weekday_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instInhabitedOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Weekday_instInhabitedOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_instInhabitedOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instInhabitedOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofOrdinal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofOrdinal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Weekday_toOrdinal_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__4;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__5;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__6;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__7;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__8;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__9;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__10;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__11;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__12;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__13;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__14;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__15;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__16;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__17;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__18;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__19;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__20;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__21;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__22;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__23;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__24;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__25;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__26;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__27;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__28;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__29;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__30;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__31;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__32;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__33;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__34;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__35;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__36;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__37;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__38;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__39;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__40;
static lean_once_cell_t l_Std_Time_Weekday_toOrdinal___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_toOrdinal___closed__41;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toOrdinal___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Weekday_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Weekday_toOrdinal___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Weekday_instOrd___closed__0 = (const lean_object*)&l_Std_Time_Weekday_instOrd___closed__0_value;
static const lean_closure_object l_Std_Time_Weekday_instOrd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_compareOn___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Weekday_instOrdOrdinal___closed__0_value),((lean_object*)&l_Std_Time_Weekday_instOrd___closed__0_value)} };
static const lean_object* l_Std_Time_Weekday_instOrd___closed__1 = (const lean_object*)&l_Std_Time_Weekday_instOrd___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Weekday_instOrd = (const lean_object*)&l_Std_Time_Weekday_instOrd___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toNat(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toNat___boxed(lean_object*);
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__0 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__0_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__1 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__1_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__2 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__2_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__3 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__3_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__4 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__4_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__5 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__5_value;
static const lean_ctor_object l_Std_Time_Weekday_ofNat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Time_Weekday_ofNat_x3f___closed__6 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x3f___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x3f___boxed(lean_object*);
static const lean_string_object l_Std_Time_Weekday_ofNat_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Time.Date.Unit.Weekday"};
static const lean_object* l_Std_Time_Weekday_ofNat_x21___closed__0 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x21___closed__0_value;
static const lean_string_object l_Std_Time_Weekday_ofNat_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Time.Weekday.ofNat!"};
static const lean_object* l_Std_Time_Weekday_ofNat_x21___closed__1 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x21___closed__1_value;
static const lean_string_object l_Std_Time_Weekday_ofNat_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invalid weekday"};
static const lean_object* l_Std_Time_Weekday_ofNat_x21___closed__2 = (const lean_object*)&l_Std_Time_Weekday_ofNat_x21___closed__2_value;
static lean_once_cell_t l_Std_Time_Weekday_ofNat_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Weekday_ofNat_x21___closed__3;
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofNat_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Weekday_next(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_next___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Weekday_isWeekend(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_isWeekend___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
uint8_t v_x_boxed_10_; lean_object* v_res_11_; 
v_x_boxed_10_ = lean_unbox(v_x_9_);
v_res_11_ = l_Std_Time_Weekday_ctorIdx(v_x_boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___redArg(lean_object* v_k_12_){
_start:
{
lean_inc(v_k_12_);
return v_k_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___redArg___boxed(lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_Time_Weekday_ctorElim___redArg(v_k_13_);
lean_dec(v_k_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, uint8_t v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_inc(v_k_19_);
return v_k_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
uint8_t v_t_boxed_25_; lean_object* v_res_26_; 
v_t_boxed_25_ = lean_unbox(v_t_22_);
v_res_26_ = l_Std_Time_Weekday_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_boxed_25_, v_h_23_, v_k_24_);
lean_dec(v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___redArg(lean_object* v_monday_27_){
_start:
{
lean_inc(v_monday_27_);
return v_monday_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___redArg___boxed(lean_object* v_monday_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Std_Time_Weekday_monday_elim___redArg(v_monday_28_);
lean_dec(v_monday_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim(lean_object* v_motive_30_, uint8_t v_t_31_, lean_object* v_h_32_, lean_object* v_monday_33_){
_start:
{
lean_inc(v_monday_33_);
return v_monday_33_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_monday_elim___boxed(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_monday_37_){
_start:
{
uint8_t v_t_boxed_38_; lean_object* v_res_39_; 
v_t_boxed_38_ = lean_unbox(v_t_35_);
v_res_39_ = l_Std_Time_Weekday_monday_elim(v_motive_34_, v_t_boxed_38_, v_h_36_, v_monday_37_);
lean_dec(v_monday_37_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___redArg(lean_object* v_tuesday_40_){
_start:
{
lean_inc(v_tuesday_40_);
return v_tuesday_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___redArg___boxed(lean_object* v_tuesday_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Std_Time_Weekday_tuesday_elim___redArg(v_tuesday_41_);
lean_dec(v_tuesday_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim(lean_object* v_motive_43_, uint8_t v_t_44_, lean_object* v_h_45_, lean_object* v_tuesday_46_){
_start:
{
lean_inc(v_tuesday_46_);
return v_tuesday_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_tuesday_elim___boxed(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_tuesday_50_){
_start:
{
uint8_t v_t_boxed_51_; lean_object* v_res_52_; 
v_t_boxed_51_ = lean_unbox(v_t_48_);
v_res_52_ = l_Std_Time_Weekday_tuesday_elim(v_motive_47_, v_t_boxed_51_, v_h_49_, v_tuesday_50_);
lean_dec(v_tuesday_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___redArg(lean_object* v_wednesday_53_){
_start:
{
lean_inc(v_wednesday_53_);
return v_wednesday_53_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___redArg___boxed(lean_object* v_wednesday_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Std_Time_Weekday_wednesday_elim___redArg(v_wednesday_54_);
lean_dec(v_wednesday_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim(lean_object* v_motive_56_, uint8_t v_t_57_, lean_object* v_h_58_, lean_object* v_wednesday_59_){
_start:
{
lean_inc(v_wednesday_59_);
return v_wednesday_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_wednesday_elim___boxed(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_wednesday_63_){
_start:
{
uint8_t v_t_boxed_64_; lean_object* v_res_65_; 
v_t_boxed_64_ = lean_unbox(v_t_61_);
v_res_65_ = l_Std_Time_Weekday_wednesday_elim(v_motive_60_, v_t_boxed_64_, v_h_62_, v_wednesday_63_);
lean_dec(v_wednesday_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___redArg(lean_object* v_thursday_66_){
_start:
{
lean_inc(v_thursday_66_);
return v_thursday_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___redArg___boxed(lean_object* v_thursday_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Std_Time_Weekday_thursday_elim___redArg(v_thursday_67_);
lean_dec(v_thursday_67_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim(lean_object* v_motive_69_, uint8_t v_t_70_, lean_object* v_h_71_, lean_object* v_thursday_72_){
_start:
{
lean_inc(v_thursday_72_);
return v_thursday_72_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_thursday_elim___boxed(lean_object* v_motive_73_, lean_object* v_t_74_, lean_object* v_h_75_, lean_object* v_thursday_76_){
_start:
{
uint8_t v_t_boxed_77_; lean_object* v_res_78_; 
v_t_boxed_77_ = lean_unbox(v_t_74_);
v_res_78_ = l_Std_Time_Weekday_thursday_elim(v_motive_73_, v_t_boxed_77_, v_h_75_, v_thursday_76_);
lean_dec(v_thursday_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___redArg(lean_object* v_friday_79_){
_start:
{
lean_inc(v_friday_79_);
return v_friday_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___redArg___boxed(lean_object* v_friday_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Std_Time_Weekday_friday_elim___redArg(v_friday_80_);
lean_dec(v_friday_80_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim(lean_object* v_motive_82_, uint8_t v_t_83_, lean_object* v_h_84_, lean_object* v_friday_85_){
_start:
{
lean_inc(v_friday_85_);
return v_friday_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_friday_elim___boxed(lean_object* v_motive_86_, lean_object* v_t_87_, lean_object* v_h_88_, lean_object* v_friday_89_){
_start:
{
uint8_t v_t_boxed_90_; lean_object* v_res_91_; 
v_t_boxed_90_ = lean_unbox(v_t_87_);
v_res_91_ = l_Std_Time_Weekday_friday_elim(v_motive_86_, v_t_boxed_90_, v_h_88_, v_friday_89_);
lean_dec(v_friday_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___redArg(lean_object* v_saturday_92_){
_start:
{
lean_inc(v_saturday_92_);
return v_saturday_92_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___redArg___boxed(lean_object* v_saturday_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Std_Time_Weekday_saturday_elim___redArg(v_saturday_93_);
lean_dec(v_saturday_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim(lean_object* v_motive_95_, uint8_t v_t_96_, lean_object* v_h_97_, lean_object* v_saturday_98_){
_start:
{
lean_inc(v_saturday_98_);
return v_saturday_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_saturday_elim___boxed(lean_object* v_motive_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_saturday_102_){
_start:
{
uint8_t v_t_boxed_103_; lean_object* v_res_104_; 
v_t_boxed_103_ = lean_unbox(v_t_100_);
v_res_104_ = l_Std_Time_Weekday_saturday_elim(v_motive_99_, v_t_boxed_103_, v_h_101_, v_saturday_102_);
lean_dec(v_saturday_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___redArg(lean_object* v_sunday_105_){
_start:
{
lean_inc(v_sunday_105_);
return v_sunday_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___redArg___boxed(lean_object* v_sunday_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Time_Weekday_sunday_elim___redArg(v_sunday_106_);
lean_dec(v_sunday_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim(lean_object* v_motive_108_, uint8_t v_t_109_, lean_object* v_h_110_, lean_object* v_sunday_111_){
_start:
{
lean_inc(v_sunday_111_);
return v_sunday_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_sunday_elim___boxed(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_sunday_115_){
_start:
{
uint8_t v_t_boxed_116_; lean_object* v_res_117_; 
v_t_boxed_116_ = lean_unbox(v_t_113_);
v_res_117_ = l_Std_Time_Weekday_sunday_elim(v_motive_112_, v_t_boxed_116_, v_h_114_, v_sunday_115_);
lean_dec(v_sunday_115_);
return v_res_117_;
}
}
static lean_object* _init_l_Std_Time_instReprWeekday_repr___closed__14(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_unsigned_to_nat(2u);
v___x_140_ = lean_nat_to_int(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_l_Std_Time_instReprWeekday_repr___closed__15(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_to_int(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWeekday_repr(uint8_t v_x_143_, lean_object* v_prec_144_){
_start:
{
lean_object* v___y_146_; lean_object* v___y_153_; lean_object* v___y_160_; lean_object* v___y_167_; lean_object* v___y_174_; lean_object* v___y_181_; lean_object* v___y_188_; 
switch(v_x_143_)
{
case 0:
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(1024u);
v___x_195_ = lean_nat_dec_le(v___x_194_, v_prec_144_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_146_ = v___x_196_;
goto v___jp_145_;
}
else
{
lean_object* v___x_197_; 
v___x_197_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_146_ = v___x_197_;
goto v___jp_145_;
}
}
case 1:
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(1024u);
v___x_199_ = lean_nat_dec_le(v___x_198_, v_prec_144_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_153_ = v___x_200_;
goto v___jp_152_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_153_ = v___x_201_;
goto v___jp_152_;
}
}
case 2:
{
lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(1024u);
v___x_203_ = lean_nat_dec_le(v___x_202_, v_prec_144_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_160_ = v___x_204_;
goto v___jp_159_;
}
else
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_160_ = v___x_205_;
goto v___jp_159_;
}
}
case 3:
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(1024u);
v___x_207_ = lean_nat_dec_le(v___x_206_, v_prec_144_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_167_ = v___x_208_;
goto v___jp_166_;
}
else
{
lean_object* v___x_209_; 
v___x_209_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_167_ = v___x_209_;
goto v___jp_166_;
}
}
case 4:
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(1024u);
v___x_211_ = lean_nat_dec_le(v___x_210_, v_prec_144_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_174_ = v___x_212_;
goto v___jp_173_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_174_ = v___x_213_;
goto v___jp_173_;
}
}
case 5:
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1024u);
v___x_215_ = lean_nat_dec_le(v___x_214_, v_prec_144_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
v___x_216_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_181_ = v___x_216_;
goto v___jp_180_;
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_181_ = v___x_217_;
goto v___jp_180_;
}
}
default: 
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(1024u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v_prec_144_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___y_188_ = v___x_220_;
goto v___jp_187_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___y_188_ = v___x_221_;
goto v___jp_187_;
}
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__1));
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
v___x_154_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__3));
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
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__5));
lean_inc(v___y_160_);
v___x_162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_162_, 0, v___y_160_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = 0;
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = l_Repr_addAppParen(v___x_164_, v_prec_144_);
return v___x_165_;
}
v___jp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_168_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__7));
lean_inc(v___y_167_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___y_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = 0;
v___x_171_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_prec_144_);
return v___x_172_;
}
v___jp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_175_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__9));
lean_inc(v___y_174_);
v___x_176_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_176_, 0, v___y_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = 0;
v___x_178_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*1, v___x_177_);
v___x_179_ = l_Repr_addAppParen(v___x_178_, v_prec_144_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__11));
lean_inc(v___y_181_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = 0;
v___x_185_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_144_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_189_ = ((lean_object*)(l_Std_Time_instReprWeekday_repr___closed__13));
lean_inc(v___y_188_);
v___x_190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_190_, 0, v___y_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = 0;
v___x_192_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_191_);
v___x_193_ = l_Repr_addAppParen(v___x_192_, v_prec_144_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprWeekday_repr___boxed(lean_object* v_x_222_, lean_object* v_prec_223_){
_start:
{
uint8_t v_x_387__boxed_224_; lean_object* v_res_225_; 
v_x_387__boxed_224_ = lean_unbox(v_x_222_);
v_res_225_ = l_Std_Time_instReprWeekday_repr(v_x_387__boxed_224_, v_prec_223_);
lean_dec(v_prec_223_);
return v_res_225_;
}
}
static uint8_t _init_l_Std_Time_instInhabitedWeekday_default(void){
_start:
{
uint8_t v___x_228_; 
v___x_228_ = 0;
return v___x_228_;
}
}
static uint8_t _init_l_Std_Time_instInhabitedWeekday(void){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = 0;
return v___x_229_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofNat(lean_object* v_n_230_){
_start:
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_unsigned_to_nat(2u);
v___x_232_ = lean_nat_dec_le(v_n_230_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_unsigned_to_nat(4u);
v___x_234_ = lean_nat_dec_le(v_n_230_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(5u);
v___x_236_ = lean_nat_dec_le(v_n_230_, v___x_235_);
if (v___x_236_ == 0)
{
uint8_t v___x_237_; 
v___x_237_ = 6;
return v___x_237_;
}
else
{
uint8_t v___x_238_; 
v___x_238_ = 5;
return v___x_238_;
}
}
else
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(3u);
v___x_240_ = lean_nat_dec_le(v_n_230_, v___x_239_);
if (v___x_240_ == 0)
{
uint8_t v___x_241_; 
v___x_241_ = 4;
return v___x_241_;
}
else
{
uint8_t v___x_242_; 
v___x_242_ = 3;
return v___x_242_;
}
}
}
else
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(0u);
v___x_244_ = lean_nat_dec_le(v_n_230_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_dec_le(v_n_230_, v___x_245_);
if (v___x_246_ == 0)
{
uint8_t v___x_247_; 
v___x_247_ = 2;
return v___x_247_;
}
else
{
uint8_t v___x_248_; 
v___x_248_ = 1;
return v___x_248_;
}
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat___boxed(lean_object* v_n_250_){
_start:
{
uint8_t v_res_251_; lean_object* v_r_252_; 
v_res_251_ = l_Std_Time_Weekday_ofNat(v_n_250_);
lean_dec(v_n_250_);
v_r_252_ = lean_box(v_res_251_);
return v_r_252_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqWeekday(uint8_t v_x_253_, uint8_t v_y_254_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_255_ = l_Std_Time_Weekday_ctorIdx(v_x_253_);
v___x_256_ = l_Std_Time_Weekday_ctorIdx(v_y_254_);
v___x_257_ = lean_nat_dec_eq(v___x_255_, v___x_256_);
lean_dec(v___x_256_);
lean_dec(v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqWeekday___boxed(lean_object* v_x_258_, lean_object* v_y_259_){
_start:
{
uint8_t v_x_20__boxed_260_; uint8_t v_y_21__boxed_261_; uint8_t v_res_262_; lean_object* v_r_263_; 
v_x_20__boxed_260_ = lean_unbox(v_x_258_);
v_y_21__boxed_261_ = lean_unbox(v_y_259_);
v_res_262_ = l_Std_Time_instDecidableEqWeekday(v_x_20__boxed_260_, v_y_21__boxed_261_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_mk(lean_object* v_toBounded_264_){
_start:
{
lean_inc(v_toBounded_264_);
return v_toBounded_264_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_mk___boxed(lean_object* v_toBounded_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Std_Time_Weekday_Ordinal_mk(v_toBounded_265_);
lean_dec(v_toBounded_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_toBounded(lean_object* v_self_267_){
_start:
{
lean_inc(v_self_267_);
return v_self_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_toBounded___boxed(lean_object* v_self_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Std_Time_Weekday_Ordinal_toBounded(v_self_268_);
lean_dec(v_self_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_equiv___lam__0(lean_object* v___y_270_){
_start:
{
lean_inc(v___y_270_);
return v___y_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_equiv___lam__0___boxed(lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Std_Time_Weekday_Ordinal_equiv___lam__0(v___y_271_);
lean_dec(v___y_271_);
return v_res_272_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_nat_to_int(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instReprOrdinal___lam__0(lean_object* v___x_279_, lean_object* v_x_280_, lean_object* v_prec_281_){
_start:
{
lean_object* v_invFun_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_invFun_282_ = lean_ctor_get(v___x_279_, 1);
lean_inc(v_invFun_282_);
lean_dec_ref(v___x_279_);
v___x_283_ = lean_apply_1(v_invFun_282_, v_x_280_);
v___x_284_ = lean_obj_once(&l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0);
v___x_285_ = lean_int_dec_lt(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = l_Int_repr(v___x_283_);
lean_dec(v___x_283_);
v___x_287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = l_Int_repr(v___x_283_);
lean_dec(v___x_283_);
v___x_289_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
v___x_290_ = l_Repr_addAppParen(v___x_289_, v_prec_281_);
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instReprOrdinal___lam__0___boxed(lean_object* v___x_291_, lean_object* v_x_292_, lean_object* v_prec_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Std_Time_Weekday_instReprOrdinal___lam__0(v___x_291_, v_x_292_, v_prec_293_);
lean_dec(v_prec_293_);
return v_res_294_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableEqOrdinal(lean_object* v_a_298_, lean_object* v_b_299_){
_start:
{
lean_object* v___x_300_; lean_object* v_invFun_301_; lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_300_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_invFun_301_ = lean_ctor_get(v___x_300_, 1);
lean_inc_n(v_invFun_301_, 2);
v___x_302_ = lean_apply_1(v_invFun_301_, v_a_298_);
v___x_303_ = lean_apply_1(v_invFun_301_, v_b_299_);
v___x_304_ = lean_int_dec_eq(v___x_302_, v___x_303_);
lean_dec(v___x_303_);
lean_dec(v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableEqOrdinal___boxed(lean_object* v_a_305_, lean_object* v_b_306_){
_start:
{
uint8_t v_res_307_; lean_object* v_r_308_; 
v_res_307_ = l_Std_Time_Weekday_instDecidableEqOrdinal(v_a_305_, v_b_306_);
v_r_308_ = lean_box(v_res_307_);
return v_r_308_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instLTOrdinal(void){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_box(0);
return v___x_309_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instLEOrdinal(void){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_box(0);
return v___x_310_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableLEOrdinal(lean_object* v_a_311_, lean_object* v_b_312_){
_start:
{
lean_object* v___x_313_; lean_object* v_invFun_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_313_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_invFun_314_ = lean_ctor_get(v___x_313_, 1);
lean_inc_n(v_invFun_314_, 2);
v___x_315_ = lean_apply_1(v_invFun_314_, v_a_311_);
v___x_316_ = lean_apply_1(v_invFun_314_, v_b_312_);
v___x_317_ = lean_int_dec_le(v___x_315_, v___x_316_);
lean_dec(v___x_316_);
lean_dec(v___x_315_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableLEOrdinal___boxed(lean_object* v_a_318_, lean_object* v_b_319_){
_start:
{
uint8_t v_res_320_; lean_object* v_r_321_; 
v_res_320_ = l_Std_Time_Weekday_instDecidableLEOrdinal(v_a_318_, v_b_319_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instDecidableLTOrdinal(lean_object* v_a_322_, lean_object* v_b_323_){
_start:
{
lean_object* v___x_324_; lean_object* v_invFun_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_324_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_invFun_325_ = lean_ctor_get(v___x_324_, 1);
lean_inc_n(v_invFun_325_, 2);
v___x_326_ = lean_apply_1(v_invFun_325_, v_a_322_);
v___x_327_ = lean_apply_1(v_invFun_325_, v_b_323_);
v___x_328_ = lean_int_dec_lt(v___x_326_, v___x_327_);
lean_dec(v___x_327_);
lean_dec(v___x_326_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instDecidableLTOrdinal___boxed(lean_object* v_a_329_, lean_object* v_b_330_){
_start:
{
uint8_t v_res_331_; lean_object* v_r_332_; 
v_res_331_ = l_Std_Time_Weekday_instDecidableLTOrdinal(v_a_329_, v_b_330_);
v_r_332_ = lean_box(v_res_331_);
return v_r_332_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_instOrdOrdinal___lam__0(lean_object* v___x_333_, lean_object* v_x_334_, lean_object* v_y_335_){
_start:
{
lean_object* v_invFun_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_invFun_336_ = lean_ctor_get(v___x_333_, 1);
lean_inc_n(v_invFun_336_, 2);
lean_dec_ref(v___x_333_);
v___x_337_ = lean_apply_1(v_invFun_336_, v_x_334_);
v___x_338_ = lean_apply_1(v_invFun_336_, v_y_335_);
v___x_339_ = lean_int_dec_lt(v___x_337_, v___x_338_);
if (v___x_339_ == 0)
{
uint8_t v___x_340_; 
v___x_340_ = lean_int_dec_eq(v___x_337_, v___x_338_);
lean_dec(v___x_338_);
lean_dec(v___x_337_);
if (v___x_340_ == 0)
{
uint8_t v___x_341_; 
v___x_341_ = 2;
return v___x_341_;
}
else
{
uint8_t v___x_342_; 
v___x_342_ = 1;
return v___x_342_;
}
}
else
{
uint8_t v___x_343_; 
lean_dec(v___x_338_);
lean_dec(v___x_337_);
v___x_343_ = 0;
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instOrdOrdinal___lam__0___boxed(lean_object* v___x_344_, lean_object* v_x_345_, lean_object* v_y_346_){
_start:
{
uint8_t v_res_347_; lean_object* v_r_348_; 
v_res_347_ = l_Std_Time_Weekday_instOrdOrdinal___lam__0(v___x_344_, v_x_345_, v_y_346_);
v_r_348_ = lean_box(v_res_347_);
return v_r_348_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_val(lean_object* v_ordinal_352_){
_start:
{
lean_inc(v_ordinal_352_);
return v_ordinal_352_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_Ordinal_val___boxed(lean_object* v_ordinal_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Std_Time_Weekday_Ordinal_val(v_ordinal_353_);
lean_dec(v_ordinal_353_);
return v_res_354_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_unsigned_to_nat(6u);
v___x_356_ = lean_nat_to_int(v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__0, &l_Std_Time_Weekday_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__0);
v___x_358_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_359_ = lean_int_add(v___x_358_, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_361_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__1, &l_Std_Time_Weekday_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__1);
v___x_362_ = lean_int_sub(v___x_361_, v___x_360_);
return v___x_362_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_range_365_; 
v___x_363_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_364_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__2, &l_Std_Time_Weekday_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__2);
v_range_365_ = lean_int_add(v___x_364_, v___x_363_);
return v_range_365_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_instOfNatOrdinal(lean_object* v_n_366_){
_start:
{
lean_object* v___x_367_; lean_object* v_toFun_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_range_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_367_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_368_ = lean_ctor_get(v___x_367_, 0);
v___x_369_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_370_ = lean_nat_to_int(v_n_366_);
v_range_371_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__3, &l_Std_Time_Weekday_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__3);
v___x_372_ = lean_int_sub(v___x_370_, v___x_369_);
lean_dec(v___x_370_);
v___x_373_ = lean_int_emod(v___x_372_, v_range_371_);
lean_dec(v___x_372_);
v___x_374_ = lean_int_add(v___x_373_, v_range_371_);
lean_dec(v___x_373_);
v___x_375_ = lean_int_emod(v___x_374_, v_range_371_);
lean_dec(v___x_374_);
v___x_376_ = lean_int_add(v___x_375_, v___x_369_);
lean_dec(v___x_375_);
lean_inc(v_toFun_368_);
v___x_377_ = lean_apply_1(v_toFun_368_, v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_379_ = lean_int_sub(v___x_378_, v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_range_380_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__3, &l_Std_Time_Weekday_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__3);
v___x_381_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__0, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__0);
v___x_382_ = lean_int_emod(v___x_381_, v_range_380_);
return v___x_382_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_range_383_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__3, &l_Std_Time_Weekday_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__3);
v___x_384_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__1, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__1);
v___x_385_ = lean_int_add(v___x_384_, v_range_383_);
return v___x_385_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_range_386_ = lean_obj_once(&l_Std_Time_Weekday_instOfNatOrdinal___closed__3, &l_Std_Time_Weekday_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Weekday_instOfNatOrdinal___closed__3);
v___x_387_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__2, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__2);
v___x_388_ = lean_int_emod(v___x_387_, v_range_386_);
return v___x_388_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_390_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__3, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__3);
v___x_391_ = lean_int_add(v___x_390_, v___x_389_);
return v___x_391_;
}
}
static lean_object* _init_l_Std_Time_Weekday_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_392_; lean_object* v_toFun_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_392_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_393_ = lean_ctor_get(v___x_392_, 0);
v___x_394_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__4, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_393_);
v___x_395_ = lean_apply_1(v_toFun_393_, v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofOrdinal(lean_object* v_ordinal_396_){
_start:
{
lean_object* v_natZero_397_; lean_object* v_intZero_398_; uint8_t v_isNeg_399_; lean_object* v_a_400_; uint8_t v_isZero_401_; lean_object* v_one_402_; lean_object* v_n_403_; uint8_t v_isZero_404_; 
v_natZero_397_ = lean_unsigned_to_nat(0u);
v_intZero_398_ = lean_obj_once(&l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Weekday_instReprOrdinal___lam__0___closed__0);
v_isNeg_399_ = lean_int_dec_lt(v_ordinal_396_, v_intZero_398_);
v_a_400_ = lean_nat_abs(v_ordinal_396_);
v_isZero_401_ = lean_nat_dec_eq(v_a_400_, v_natZero_397_);
v_one_402_ = lean_unsigned_to_nat(1u);
v_n_403_ = lean_nat_sub(v_a_400_, v_one_402_);
lean_dec(v_a_400_);
v_isZero_404_ = lean_nat_dec_eq(v_n_403_, v_natZero_397_);
if (v_isZero_404_ == 1)
{
uint8_t v___x_405_; 
lean_dec(v_n_403_);
v___x_405_ = 0;
return v___x_405_;
}
else
{
lean_object* v_n_406_; uint8_t v_isZero_407_; 
v_n_406_ = lean_nat_sub(v_n_403_, v_one_402_);
lean_dec(v_n_403_);
v_isZero_407_ = lean_nat_dec_eq(v_n_406_, v_natZero_397_);
if (v_isZero_407_ == 1)
{
uint8_t v___x_408_; 
lean_dec(v_n_406_);
v___x_408_ = 1;
return v___x_408_;
}
else
{
lean_object* v_n_409_; uint8_t v_isZero_410_; 
v_n_409_ = lean_nat_sub(v_n_406_, v_one_402_);
lean_dec(v_n_406_);
v_isZero_410_ = lean_nat_dec_eq(v_n_409_, v_natZero_397_);
if (v_isZero_410_ == 1)
{
uint8_t v___x_411_; 
lean_dec(v_n_409_);
v___x_411_ = 2;
return v___x_411_;
}
else
{
lean_object* v_n_412_; uint8_t v_isZero_413_; 
v_n_412_ = lean_nat_sub(v_n_409_, v_one_402_);
lean_dec(v_n_409_);
v_isZero_413_ = lean_nat_dec_eq(v_n_412_, v_natZero_397_);
if (v_isZero_413_ == 1)
{
uint8_t v___x_414_; 
lean_dec(v_n_412_);
v___x_414_ = 3;
return v___x_414_;
}
else
{
lean_object* v_n_415_; uint8_t v_isZero_416_; 
v_n_415_ = lean_nat_sub(v_n_412_, v_one_402_);
lean_dec(v_n_412_);
v_isZero_416_ = lean_nat_dec_eq(v_n_415_, v_natZero_397_);
if (v_isZero_416_ == 1)
{
uint8_t v___x_417_; 
lean_dec(v_n_415_);
v___x_417_ = 4;
return v___x_417_;
}
else
{
lean_object* v_n_418_; uint8_t v_isZero_419_; 
v_n_418_ = lean_nat_sub(v_n_415_, v_one_402_);
lean_dec(v_n_415_);
v_isZero_419_ = lean_nat_dec_eq(v_n_418_, v_natZero_397_);
if (v_isZero_419_ == 1)
{
uint8_t v___x_420_; 
lean_dec(v_n_418_);
v___x_420_ = 5;
return v___x_420_;
}
else
{
lean_object* v_n_421_; uint8_t v_isZero_422_; uint8_t v___x_423_; 
v_n_421_ = lean_nat_sub(v_n_418_, v_one_402_);
lean_dec(v_n_418_);
v_isZero_422_ = lean_nat_dec_eq(v_n_421_, v_natZero_397_);
lean_dec(v_n_421_);
v___x_423_ = 6;
return v___x_423_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofOrdinal___boxed(lean_object* v_ordinal_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = l_Std_Time_Weekday_ofOrdinal(v_ordinal_424_);
lean_dec(v_ordinal_424_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Weekday_toOrdinal_spec__0(lean_object* v_a_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = lean_nat_to_int(v_a_427_);
return v___x_428_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__0(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_unsigned_to_nat(6u);
v___x_430_ = lean_nat_to_int(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__1(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__0, &l_Std_Time_Weekday_toOrdinal___closed__0_once, _init_l_Std_Time_Weekday_toOrdinal___closed__0);
v___x_432_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_433_ = lean_int_add(v___x_432_, v___x_431_);
return v___x_433_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__2(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_435_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__1, &l_Std_Time_Weekday_toOrdinal___closed__1_once, _init_l_Std_Time_Weekday_toOrdinal___closed__1);
v___x_436_ = lean_int_sub(v___x_435_, v___x_434_);
return v___x_436_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__3(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_range_439_; 
v___x_437_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_438_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__2, &l_Std_Time_Weekday_toOrdinal___closed__2_once, _init_l_Std_Time_Weekday_toOrdinal___closed__2);
v_range_439_ = lean_int_add(v___x_438_, v___x_437_);
return v_range_439_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__4(void){
_start:
{
lean_object* v_range_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_range_440_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_441_ = lean_obj_once(&l_Std_Time_Weekday_instInhabitedOrdinal___closed__0, &l_Std_Time_Weekday_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Weekday_instInhabitedOrdinal___closed__0);
v___x_442_ = lean_int_emod(v___x_441_, v_range_440_);
return v___x_442_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__5(void){
_start:
{
lean_object* v_range_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v_range_443_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_444_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__4, &l_Std_Time_Weekday_toOrdinal___closed__4_once, _init_l_Std_Time_Weekday_toOrdinal___closed__4);
v___x_445_ = lean_int_add(v___x_444_, v_range_443_);
return v___x_445_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__6(void){
_start:
{
lean_object* v_range_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_range_446_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_447_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__5, &l_Std_Time_Weekday_toOrdinal___closed__5_once, _init_l_Std_Time_Weekday_toOrdinal___closed__5);
v___x_448_ = lean_int_emod(v___x_447_, v_range_446_);
return v___x_448_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__7(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_450_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__6, &l_Std_Time_Weekday_toOrdinal___closed__6_once, _init_l_Std_Time_Weekday_toOrdinal___closed__6);
v___x_451_ = lean_int_add(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__8(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_453_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__14, &l_Std_Time_instReprWeekday_repr___closed__14_once, _init_l_Std_Time_instReprWeekday_repr___closed__14);
v___x_454_ = lean_int_sub(v___x_453_, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__9(void){
_start:
{
lean_object* v_range_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_range_455_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_456_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__8, &l_Std_Time_Weekday_toOrdinal___closed__8_once, _init_l_Std_Time_Weekday_toOrdinal___closed__8);
v___x_457_ = lean_int_emod(v___x_456_, v_range_455_);
return v___x_457_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__10(void){
_start:
{
lean_object* v_range_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_range_458_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_459_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__9, &l_Std_Time_Weekday_toOrdinal___closed__9_once, _init_l_Std_Time_Weekday_toOrdinal___closed__9);
v___x_460_ = lean_int_add(v___x_459_, v_range_458_);
return v___x_460_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__11(void){
_start:
{
lean_object* v_range_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_range_461_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_462_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__10, &l_Std_Time_Weekday_toOrdinal___closed__10_once, _init_l_Std_Time_Weekday_toOrdinal___closed__10);
v___x_463_ = lean_int_emod(v___x_462_, v_range_461_);
return v___x_463_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__12(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_465_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__11, &l_Std_Time_Weekday_toOrdinal___closed__11_once, _init_l_Std_Time_Weekday_toOrdinal___closed__11);
v___x_466_ = lean_int_add(v___x_465_, v___x_464_);
return v___x_466_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__13(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_unsigned_to_nat(3u);
v___x_468_ = lean_nat_to_int(v___x_467_);
return v___x_468_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__14(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_470_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__13, &l_Std_Time_Weekday_toOrdinal___closed__13_once, _init_l_Std_Time_Weekday_toOrdinal___closed__13);
v___x_471_ = lean_int_sub(v___x_470_, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__15(void){
_start:
{
lean_object* v_range_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_range_472_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_473_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__14, &l_Std_Time_Weekday_toOrdinal___closed__14_once, _init_l_Std_Time_Weekday_toOrdinal___closed__14);
v___x_474_ = lean_int_emod(v___x_473_, v_range_472_);
return v___x_474_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__16(void){
_start:
{
lean_object* v_range_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_range_475_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_476_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__15, &l_Std_Time_Weekday_toOrdinal___closed__15_once, _init_l_Std_Time_Weekday_toOrdinal___closed__15);
v___x_477_ = lean_int_add(v___x_476_, v_range_475_);
return v___x_477_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__17(void){
_start:
{
lean_object* v_range_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_range_478_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_479_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__16, &l_Std_Time_Weekday_toOrdinal___closed__16_once, _init_l_Std_Time_Weekday_toOrdinal___closed__16);
v___x_480_ = lean_int_emod(v___x_479_, v_range_478_);
return v___x_480_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__18(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_482_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__17, &l_Std_Time_Weekday_toOrdinal___closed__17_once, _init_l_Std_Time_Weekday_toOrdinal___closed__17);
v___x_483_ = lean_int_add(v___x_482_, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__19(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_unsigned_to_nat(4u);
v___x_485_ = lean_nat_to_int(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__20(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_487_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__19, &l_Std_Time_Weekday_toOrdinal___closed__19_once, _init_l_Std_Time_Weekday_toOrdinal___closed__19);
v___x_488_ = lean_int_sub(v___x_487_, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__21(void){
_start:
{
lean_object* v_range_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_range_489_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_490_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__20, &l_Std_Time_Weekday_toOrdinal___closed__20_once, _init_l_Std_Time_Weekday_toOrdinal___closed__20);
v___x_491_ = lean_int_emod(v___x_490_, v_range_489_);
return v___x_491_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__22(void){
_start:
{
lean_object* v_range_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_range_492_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_493_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__21, &l_Std_Time_Weekday_toOrdinal___closed__21_once, _init_l_Std_Time_Weekday_toOrdinal___closed__21);
v___x_494_ = lean_int_add(v___x_493_, v_range_492_);
return v___x_494_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__23(void){
_start:
{
lean_object* v_range_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_range_495_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_496_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__22, &l_Std_Time_Weekday_toOrdinal___closed__22_once, _init_l_Std_Time_Weekday_toOrdinal___closed__22);
v___x_497_ = lean_int_emod(v___x_496_, v_range_495_);
return v___x_497_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__24(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_499_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__23, &l_Std_Time_Weekday_toOrdinal___closed__23_once, _init_l_Std_Time_Weekday_toOrdinal___closed__23);
v___x_500_ = lean_int_add(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__25(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_unsigned_to_nat(5u);
v___x_502_ = lean_nat_to_int(v___x_501_);
return v___x_502_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__26(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_504_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__25, &l_Std_Time_Weekday_toOrdinal___closed__25_once, _init_l_Std_Time_Weekday_toOrdinal___closed__25);
v___x_505_ = lean_int_sub(v___x_504_, v___x_503_);
return v___x_505_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__27(void){
_start:
{
lean_object* v_range_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_range_506_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_507_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__26, &l_Std_Time_Weekday_toOrdinal___closed__26_once, _init_l_Std_Time_Weekday_toOrdinal___closed__26);
v___x_508_ = lean_int_emod(v___x_507_, v_range_506_);
return v___x_508_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__28(void){
_start:
{
lean_object* v_range_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v_range_509_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_510_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__27, &l_Std_Time_Weekday_toOrdinal___closed__27_once, _init_l_Std_Time_Weekday_toOrdinal___closed__27);
v___x_511_ = lean_int_add(v___x_510_, v_range_509_);
return v___x_511_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__29(void){
_start:
{
lean_object* v_range_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_range_512_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_513_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__28, &l_Std_Time_Weekday_toOrdinal___closed__28_once, _init_l_Std_Time_Weekday_toOrdinal___closed__28);
v___x_514_ = lean_int_emod(v___x_513_, v_range_512_);
return v___x_514_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__30(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_516_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__29, &l_Std_Time_Weekday_toOrdinal___closed__29_once, _init_l_Std_Time_Weekday_toOrdinal___closed__29);
v___x_517_ = lean_int_add(v___x_516_, v___x_515_);
return v___x_517_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__31(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_519_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__0, &l_Std_Time_Weekday_toOrdinal___closed__0_once, _init_l_Std_Time_Weekday_toOrdinal___closed__0);
v___x_520_ = lean_int_sub(v___x_519_, v___x_518_);
return v___x_520_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__32(void){
_start:
{
lean_object* v_range_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v_range_521_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_522_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__31, &l_Std_Time_Weekday_toOrdinal___closed__31_once, _init_l_Std_Time_Weekday_toOrdinal___closed__31);
v___x_523_ = lean_int_emod(v___x_522_, v_range_521_);
return v___x_523_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__33(void){
_start:
{
lean_object* v_range_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_range_524_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_525_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__32, &l_Std_Time_Weekday_toOrdinal___closed__32_once, _init_l_Std_Time_Weekday_toOrdinal___closed__32);
v___x_526_ = lean_int_add(v___x_525_, v_range_524_);
return v___x_526_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__34(void){
_start:
{
lean_object* v_range_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_range_527_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_528_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__33, &l_Std_Time_Weekday_toOrdinal___closed__33_once, _init_l_Std_Time_Weekday_toOrdinal___closed__33);
v___x_529_ = lean_int_emod(v___x_528_, v_range_527_);
return v___x_529_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__35(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_531_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__34, &l_Std_Time_Weekday_toOrdinal___closed__34_once, _init_l_Std_Time_Weekday_toOrdinal___closed__34);
v___x_532_ = lean_int_add(v___x_531_, v___x_530_);
return v___x_532_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__36(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(7u);
v___x_534_ = lean_nat_to_int(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__37(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_536_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__36, &l_Std_Time_Weekday_toOrdinal___closed__36_once, _init_l_Std_Time_Weekday_toOrdinal___closed__36);
v___x_537_ = lean_int_sub(v___x_536_, v___x_535_);
return v___x_537_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__38(void){
_start:
{
lean_object* v_range_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_range_538_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_539_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__37, &l_Std_Time_Weekday_toOrdinal___closed__37_once, _init_l_Std_Time_Weekday_toOrdinal___closed__37);
v___x_540_ = lean_int_emod(v___x_539_, v_range_538_);
return v___x_540_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__39(void){
_start:
{
lean_object* v_range_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_range_541_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_542_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__38, &l_Std_Time_Weekday_toOrdinal___closed__38_once, _init_l_Std_Time_Weekday_toOrdinal___closed__38);
v___x_543_ = lean_int_add(v___x_542_, v_range_541_);
return v___x_543_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__40(void){
_start:
{
lean_object* v_range_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_range_544_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__3, &l_Std_Time_Weekday_toOrdinal___closed__3_once, _init_l_Std_Time_Weekday_toOrdinal___closed__3);
v___x_545_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__39, &l_Std_Time_Weekday_toOrdinal___closed__39_once, _init_l_Std_Time_Weekday_toOrdinal___closed__39);
v___x_546_ = lean_int_emod(v___x_545_, v_range_544_);
return v___x_546_;
}
}
static lean_object* _init_l_Std_Time_Weekday_toOrdinal___closed__41(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_obj_once(&l_Std_Time_instReprWeekday_repr___closed__15, &l_Std_Time_instReprWeekday_repr___closed__15_once, _init_l_Std_Time_instReprWeekday_repr___closed__15);
v___x_548_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__40, &l_Std_Time_Weekday_toOrdinal___closed__40_once, _init_l_Std_Time_Weekday_toOrdinal___closed__40);
v___x_549_ = lean_int_add(v___x_548_, v___x_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t v_x_550_){
_start:
{
switch(v_x_550_)
{
case 0:
{
lean_object* v___x_551_; lean_object* v_toFun_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_551_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_552_ = lean_ctor_get(v___x_551_, 0);
v___x_553_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__7, &l_Std_Time_Weekday_toOrdinal___closed__7_once, _init_l_Std_Time_Weekday_toOrdinal___closed__7);
lean_inc(v_toFun_552_);
v___x_554_ = lean_apply_1(v_toFun_552_, v___x_553_);
return v___x_554_;
}
case 1:
{
lean_object* v___x_555_; lean_object* v_toFun_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_555_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_556_ = lean_ctor_get(v___x_555_, 0);
v___x_557_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__12, &l_Std_Time_Weekday_toOrdinal___closed__12_once, _init_l_Std_Time_Weekday_toOrdinal___closed__12);
lean_inc(v_toFun_556_);
v___x_558_ = lean_apply_1(v_toFun_556_, v___x_557_);
return v___x_558_;
}
case 2:
{
lean_object* v___x_559_; lean_object* v_toFun_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_559_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_560_ = lean_ctor_get(v___x_559_, 0);
v___x_561_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__18, &l_Std_Time_Weekday_toOrdinal___closed__18_once, _init_l_Std_Time_Weekday_toOrdinal___closed__18);
lean_inc(v_toFun_560_);
v___x_562_ = lean_apply_1(v_toFun_560_, v___x_561_);
return v___x_562_;
}
case 3:
{
lean_object* v___x_563_; lean_object* v_toFun_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_563_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_564_ = lean_ctor_get(v___x_563_, 0);
v___x_565_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__24, &l_Std_Time_Weekday_toOrdinal___closed__24_once, _init_l_Std_Time_Weekday_toOrdinal___closed__24);
lean_inc(v_toFun_564_);
v___x_566_ = lean_apply_1(v_toFun_564_, v___x_565_);
return v___x_566_;
}
case 4:
{
lean_object* v___x_567_; lean_object* v_toFun_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_567_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_568_ = lean_ctor_get(v___x_567_, 0);
v___x_569_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__30, &l_Std_Time_Weekday_toOrdinal___closed__30_once, _init_l_Std_Time_Weekday_toOrdinal___closed__30);
lean_inc(v_toFun_568_);
v___x_570_ = lean_apply_1(v_toFun_568_, v___x_569_);
return v___x_570_;
}
case 5:
{
lean_object* v___x_571_; lean_object* v_toFun_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_572_ = lean_ctor_get(v___x_571_, 0);
v___x_573_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__35, &l_Std_Time_Weekday_toOrdinal___closed__35_once, _init_l_Std_Time_Weekday_toOrdinal___closed__35);
lean_inc(v_toFun_572_);
v___x_574_ = lean_apply_1(v_toFun_572_, v___x_573_);
return v___x_574_;
}
default: 
{
lean_object* v___x_575_; lean_object* v_toFun_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = ((lean_object*)(l_Std_Time_Weekday_Ordinal_equiv));
v_toFun_576_ = lean_ctor_get(v___x_575_, 0);
v___x_577_ = lean_obj_once(&l_Std_Time_Weekday_toOrdinal___closed__41, &l_Std_Time_Weekday_toOrdinal___closed__41_once, _init_l_Std_Time_Weekday_toOrdinal___closed__41);
lean_inc(v_toFun_576_);
v___x_578_ = lean_apply_1(v_toFun_576_, v___x_577_);
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toOrdinal___boxed(lean_object* v_x_579_){
_start:
{
uint8_t v_x_618__boxed_580_; lean_object* v_res_581_; 
v_x_618__boxed_580_ = lean_unbox(v_x_579_);
v_res_581_ = l_Std_Time_Weekday_toOrdinal(v_x_618__boxed_580_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___redArg(uint8_t v_x_587_, lean_object* v_h__1_588_, lean_object* v_h__2_589_, lean_object* v_h__3_590_, lean_object* v_h__4_591_, lean_object* v_h__5_592_, lean_object* v_h__6_593_, lean_object* v_h__7_594_){
_start:
{
switch(v_x_587_)
{
case 0:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__6_593_);
lean_dec(v_h__5_592_);
lean_dec(v_h__4_591_);
lean_dec(v_h__3_590_);
lean_dec(v_h__2_589_);
v___x_595_ = lean_box(0);
v___x_596_ = lean_apply_1(v_h__1_588_, v___x_595_);
return v___x_596_;
}
case 1:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__6_593_);
lean_dec(v_h__5_592_);
lean_dec(v_h__4_591_);
lean_dec(v_h__3_590_);
lean_dec(v_h__1_588_);
v___x_597_ = lean_box(0);
v___x_598_ = lean_apply_1(v_h__2_589_, v___x_597_);
return v___x_598_;
}
case 2:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__6_593_);
lean_dec(v_h__5_592_);
lean_dec(v_h__4_591_);
lean_dec(v_h__2_589_);
lean_dec(v_h__1_588_);
v___x_599_ = lean_box(0);
v___x_600_ = lean_apply_1(v_h__3_590_, v___x_599_);
return v___x_600_;
}
case 3:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__6_593_);
lean_dec(v_h__5_592_);
lean_dec(v_h__3_590_);
lean_dec(v_h__2_589_);
lean_dec(v_h__1_588_);
v___x_601_ = lean_box(0);
v___x_602_ = lean_apply_1(v_h__4_591_, v___x_601_);
return v___x_602_;
}
case 4:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__6_593_);
lean_dec(v_h__4_591_);
lean_dec(v_h__3_590_);
lean_dec(v_h__2_589_);
lean_dec(v_h__1_588_);
v___x_603_ = lean_box(0);
v___x_604_ = lean_apply_1(v_h__5_592_, v___x_603_);
return v___x_604_;
}
case 5:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
lean_dec(v_h__7_594_);
lean_dec(v_h__5_592_);
lean_dec(v_h__4_591_);
lean_dec(v_h__3_590_);
lean_dec(v_h__2_589_);
lean_dec(v_h__1_588_);
v___x_605_ = lean_box(0);
v___x_606_ = lean_apply_1(v_h__6_593_, v___x_605_);
return v___x_606_;
}
default: 
{
lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec(v_h__6_593_);
lean_dec(v_h__5_592_);
lean_dec(v_h__4_591_);
lean_dec(v_h__3_590_);
lean_dec(v_h__2_589_);
lean_dec(v_h__1_588_);
v___x_607_ = lean_box(0);
v___x_608_ = lean_apply_1(v_h__7_594_, v___x_607_);
return v___x_608_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___redArg___boxed(lean_object* v_x_609_, lean_object* v_h__1_610_, lean_object* v_h__2_611_, lean_object* v_h__3_612_, lean_object* v_h__4_613_, lean_object* v_h__5_614_, lean_object* v_h__6_615_, lean_object* v_h__7_616_){
_start:
{
uint8_t v_x_69__boxed_617_; lean_object* v_res_618_; 
v_x_69__boxed_617_ = lean_unbox(v_x_609_);
v_res_618_ = l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___redArg(v_x_69__boxed_617_, v_h__1_610_, v_h__2_611_, v_h__3_612_, v_h__4_613_, v_h__5_614_, v_h__6_615_, v_h__7_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter(lean_object* v_motive_619_, uint8_t v_x_620_, lean_object* v_h__1_621_, lean_object* v_h__2_622_, lean_object* v_h__3_623_, lean_object* v_h__4_624_, lean_object* v_h__5_625_, lean_object* v_h__6_626_, lean_object* v_h__7_627_){
_start:
{
switch(v_x_620_)
{
case 0:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__6_626_);
lean_dec(v_h__5_625_);
lean_dec(v_h__4_624_);
lean_dec(v_h__3_623_);
lean_dec(v_h__2_622_);
v___x_628_ = lean_box(0);
v___x_629_ = lean_apply_1(v_h__1_621_, v___x_628_);
return v___x_629_;
}
case 1:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__6_626_);
lean_dec(v_h__5_625_);
lean_dec(v_h__4_624_);
lean_dec(v_h__3_623_);
lean_dec(v_h__1_621_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_apply_1(v_h__2_622_, v___x_630_);
return v___x_631_;
}
case 2:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__6_626_);
lean_dec(v_h__5_625_);
lean_dec(v_h__4_624_);
lean_dec(v_h__2_622_);
lean_dec(v_h__1_621_);
v___x_632_ = lean_box(0);
v___x_633_ = lean_apply_1(v_h__3_623_, v___x_632_);
return v___x_633_;
}
case 3:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__6_626_);
lean_dec(v_h__5_625_);
lean_dec(v_h__3_623_);
lean_dec(v_h__2_622_);
lean_dec(v_h__1_621_);
v___x_634_ = lean_box(0);
v___x_635_ = lean_apply_1(v_h__4_624_, v___x_634_);
return v___x_635_;
}
case 4:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__6_626_);
lean_dec(v_h__4_624_);
lean_dec(v_h__3_623_);
lean_dec(v_h__2_622_);
lean_dec(v_h__1_621_);
v___x_636_ = lean_box(0);
v___x_637_ = lean_apply_1(v_h__5_625_, v___x_636_);
return v___x_637_;
}
case 5:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
lean_dec(v_h__7_627_);
lean_dec(v_h__5_625_);
lean_dec(v_h__4_624_);
lean_dec(v_h__3_623_);
lean_dec(v_h__2_622_);
lean_dec(v_h__1_621_);
v___x_638_ = lean_box(0);
v___x_639_ = lean_apply_1(v_h__6_626_, v___x_638_);
return v___x_639_;
}
default: 
{
lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec(v_h__6_626_);
lean_dec(v_h__5_625_);
lean_dec(v_h__4_624_);
lean_dec(v_h__3_623_);
lean_dec(v_h__2_622_);
lean_dec(v_h__1_621_);
v___x_640_ = lean_box(0);
v___x_641_ = lean_apply_1(v_h__7_627_, v___x_640_);
return v___x_641_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter___boxed(lean_object* v_motive_642_, lean_object* v_x_643_, lean_object* v_h__1_644_, lean_object* v_h__2_645_, lean_object* v_h__3_646_, lean_object* v_h__4_647_, lean_object* v_h__5_648_, lean_object* v_h__6_649_, lean_object* v_h__7_650_){
_start:
{
uint8_t v_x_100__boxed_651_; lean_object* v_res_652_; 
v_x_100__boxed_651_ = lean_unbox(v_x_643_);
v_res_652_ = l___private_Std_Time_Date_Unit_Weekday_0__Std_Time_instReprWeekday_repr_match__1_splitter(v_motive_642_, v_x_100__boxed_651_, v_h__1_644_, v_h__2_645_, v_h__3_646_, v_h__4_647_, v_h__5_648_, v_h__6_649_, v_h__7_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toNat(uint8_t v_x_653_){
_start:
{
switch(v_x_653_)
{
case 0:
{
lean_object* v___x_654_; 
v___x_654_ = lean_unsigned_to_nat(1u);
return v___x_654_;
}
case 1:
{
lean_object* v___x_655_; 
v___x_655_ = lean_unsigned_to_nat(2u);
return v___x_655_;
}
case 2:
{
lean_object* v___x_656_; 
v___x_656_ = lean_unsigned_to_nat(3u);
return v___x_656_;
}
case 3:
{
lean_object* v___x_657_; 
v___x_657_ = lean_unsigned_to_nat(4u);
return v___x_657_;
}
case 4:
{
lean_object* v___x_658_; 
v___x_658_ = lean_unsigned_to_nat(5u);
return v___x_658_;
}
case 5:
{
lean_object* v___x_659_; 
v___x_659_ = lean_unsigned_to_nat(6u);
return v___x_659_;
}
default: 
{
lean_object* v___x_660_; 
v___x_660_ = lean_unsigned_to_nat(7u);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_toNat___boxed(lean_object* v_x_661_){
_start:
{
uint8_t v_x_74__boxed_662_; lean_object* v_res_663_; 
v_x_74__boxed_662_ = lean_unbox(v_x_661_);
v_res_663_ = l_Std_Time_Weekday_toNat(v_x_74__boxed_662_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x3f(lean_object* v_x_685_){
_start:
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = lean_nat_dec_eq(v_x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(2u);
v___x_689_ = lean_nat_dec_eq(v_x_685_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_690_ = lean_unsigned_to_nat(3u);
v___x_691_ = lean_nat_dec_eq(v_x_685_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(4u);
v___x_693_ = lean_nat_dec_eq(v_x_685_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = lean_unsigned_to_nat(5u);
v___x_695_ = lean_nat_dec_eq(v_x_685_, v___x_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_unsigned_to_nat(6u);
v___x_697_ = lean_nat_dec_eq(v_x_685_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = lean_unsigned_to_nat(7u);
v___x_699_ = lean_nat_dec_eq(v_x_685_, v___x_698_);
if (v___x_699_ == 0)
{
lean_object* v___x_700_; 
v___x_700_ = lean_box(0);
return v___x_700_;
}
else
{
lean_object* v___x_701_; 
v___x_701_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__0));
return v___x_701_;
}
}
else
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__1));
return v___x_702_;
}
}
else
{
lean_object* v___x_703_; 
v___x_703_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__2));
return v___x_703_;
}
}
else
{
lean_object* v___x_704_; 
v___x_704_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__3));
return v___x_704_;
}
}
else
{
lean_object* v___x_705_; 
v___x_705_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__4));
return v___x_705_;
}
}
else
{
lean_object* v___x_706_; 
v___x_706_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__5));
return v___x_706_;
}
}
else
{
lean_object* v___x_707_; 
v___x_707_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x3f___closed__6));
return v___x_707_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x3f___boxed(lean_object* v_x_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Std_Time_Weekday_ofNat_x3f(v_x_708_);
lean_dec(v_x_708_);
return v_res_709_;
}
}
static lean_object* _init_l_Std_Time_Weekday_ofNat_x21___closed__3(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_713_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x21___closed__2));
v___x_714_ = lean_unsigned_to_nat(12u);
v___x_715_ = lean_unsigned_to_nat(132u);
v___x_716_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x21___closed__1));
v___x_717_ = ((lean_object*)(l_Std_Time_Weekday_ofNat_x21___closed__0));
v___x_718_ = l_mkPanicMessageWithDecl(v___x_717_, v___x_716_, v___x_715_, v___x_714_, v___x_713_);
return v___x_718_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_ofNat_x21(lean_object* v_n_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Std_Time_Weekday_ofNat_x3f(v_n_719_);
if (lean_obj_tag(v___x_720_) == 0)
{
uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_721_ = 0;
v___x_722_ = lean_obj_once(&l_Std_Time_Weekday_ofNat_x21___closed__3, &l_Std_Time_Weekday_ofNat_x21___closed__3_once, _init_l_Std_Time_Weekday_ofNat_x21___closed__3);
v___x_723_ = lean_box(v___x_721_);
v___x_724_ = l_panic___redArg(v___x_723_, v___x_722_);
lean_dec(v___x_723_);
v___x_725_ = lean_unbox(v___x_724_);
lean_dec(v___x_724_);
return v___x_725_;
}
else
{
lean_object* v_val_726_; uint8_t v___x_727_; 
v_val_726_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v___x_720_, 1);
v___x_727_ = lean_unbox(v_val_726_);
lean_dec(v_val_726_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_ofNat_x21___boxed(lean_object* v_n_728_){
_start:
{
uint8_t v_res_729_; lean_object* v_r_730_; 
v_res_729_ = l_Std_Time_Weekday_ofNat_x21(v_n_728_);
lean_dec(v_n_728_);
v_r_730_ = lean_box(v_res_729_);
return v_r_730_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_next(uint8_t v_x_731_){
_start:
{
switch(v_x_731_)
{
case 0:
{
uint8_t v___x_732_; 
v___x_732_ = 1;
return v___x_732_;
}
case 1:
{
uint8_t v___x_733_; 
v___x_733_ = 2;
return v___x_733_;
}
case 2:
{
uint8_t v___x_734_; 
v___x_734_ = 3;
return v___x_734_;
}
case 3:
{
uint8_t v___x_735_; 
v___x_735_ = 4;
return v___x_735_;
}
case 4:
{
uint8_t v___x_736_; 
v___x_736_ = 5;
return v___x_736_;
}
case 5:
{
uint8_t v___x_737_; 
v___x_737_ = 6;
return v___x_737_;
}
default: 
{
uint8_t v___x_738_; 
v___x_738_ = 0;
return v___x_738_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_next___boxed(lean_object* v_x_739_){
_start:
{
uint8_t v_x_53__boxed_740_; uint8_t v_res_741_; lean_object* v_r_742_; 
v_x_53__boxed_740_ = lean_unbox(v_x_739_);
v_res_741_ = l_Std_Time_Weekday_next(v_x_53__boxed_740_);
v_r_742_ = lean_box(v_res_741_);
return v_r_742_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Weekday_isWeekend(uint8_t v_x_743_){
_start:
{
switch(v_x_743_)
{
case 5:
{
uint8_t v___x_744_; 
v___x_744_ = 1;
return v___x_744_;
}
case 6:
{
uint8_t v___x_745_; 
v___x_745_ = 1;
return v___x_745_;
}
default: 
{
uint8_t v___x_746_; 
v___x_746_ = 0;
return v___x_746_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Weekday_isWeekend___boxed(lean_object* v_x_747_){
_start:
{
uint8_t v_x_22__boxed_748_; uint8_t v_res_749_; lean_object* v_r_750_; 
v_x_22__boxed_748_ = lean_unbox(v_x_747_);
v_res_749_ = l_Std_Time_Weekday_isWeekend(v_x_22__boxed_748_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_Unit_Weekday(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedWeekday_default = _init_l_Std_Time_instInhabitedWeekday_default();
l_Std_Time_instInhabitedWeekday = _init_l_Std_Time_instInhabitedWeekday();
l_Std_Time_Weekday_instLTOrdinal = _init_l_Std_Time_Weekday_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Weekday_instLTOrdinal);
l_Std_Time_Weekday_instLEOrdinal = _init_l_Std_Time_Weekday_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Weekday_instLEOrdinal);
l_Std_Time_Weekday_instInhabitedOrdinal = _init_l_Std_Time_Weekday_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Weekday_instInhabitedOrdinal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_Unit_Weekday(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Weekday(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Weekday(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_Unit_Weekday(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_Unit_Weekday(builtin);
}
#ifdef __cplusplus
}
#endif
