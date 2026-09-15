// Lean compiler output
// Module: Std.Time.Time.Unit.Nanosecond
// Imports: public import Std.Time.Internal public import Init.Transport
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
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_Ordinal_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_Ordinal_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__0_value),((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___closed__1 = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_equiv = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value;
static lean_once_cell_t l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOrdinal = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Offset_equiv = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprOffset = (const lean_object*)&l_Std_Time_Nanosecond_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instToStringOffset = (const lean_object*)&l_Std_Time_Nanosecond_instToStringOffset___closed__0_value;
static lean_once_cell_t l_Std_Time_Nanosecond_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Nanosecond_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instAddOffset = (const lean_object*)&l_Std_Time_Nanosecond_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instSubOffset = (const lean_object*)&l_Std_Time_Nanosecond_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Nanosecond_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instNegOffset = (const lean_object*)&l_Std_Time_Nanosecond_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTOffset;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Nanosecond_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdOffset = (const lean_object*)&l_Std_Time_Nanosecond_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Span_equiv = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value;
static const lean_closure_object l_Std_Time_Nanosecond_instReprSpan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_instReprSpan___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instReprSpan___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instReprSpan = (const lean_object*)&l_Std_Time_Nanosecond_instReprSpan___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLESpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instLTSpan;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLESpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLESpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTSpan___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_instOrdSpan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_instOrdSpan___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_instOrdSpan___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_instOrdSpan = (const lean_object*)&l_Std_Time_Nanosecond_instOrdSpan___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instInhabitedSpan;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_equiv = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value;
static const lean_closure_object l_Std_Time_Nanosecond_Ordinal_instReprOfDay___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instReprOfDay___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instReprOfDay = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instReprOfDay___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLEOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instLTOfDay;
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Nanosecond_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0 = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Nanosecond_Ordinal_instOrdOfDay = (const lean_object*)&l_Std_Time_Nanosecond_Ordinal_instOrdOfDay___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay;
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_mk___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Nanosecond_Ordinal_mk(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toBounded___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Nanosecond_Ordinal_toBounded(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___lam__0(lean_object* v___y_7_){
_start:
{
lean_inc(v___y_7_);
return v___y_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_equiv___lam__0___boxed(lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Nanosecond_Ordinal_equiv___lam__0(v___y_8_);
lean_dec(v___y_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object* v___x_16_, lean_object* v_x_17_, lean_object* v_prec_18_){
_start:
{
lean_object* v_invFun_19_; lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_invFun_19_ = lean_ctor_get(v___x_16_, 1);
lean_inc(v_invFun_19_);
lean_dec_ref(v___x_16_);
v___x_20_ = lean_apply_1(v_invFun_19_, v_x_17_);
v___x_21_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
v___x_22_ = lean_int_dec_lt(v___x_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = l_Int_repr(v___x_20_);
lean_dec(v___x_20_);
v___x_24_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = l_Int_repr(v___x_20_);
lean_dec(v___x_20_);
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
v___x_27_ = l_Repr_addAppParen(v___x_26_, v_prec_18_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0___boxed(lean_object* v___x_28_, lean_object* v_x_29_, lean_object* v_prec_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v___x_28_, v_x_29_, v_prec_30_);
lean_dec(v_prec_30_);
return v_res_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOrdinal(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
lean_object* v___x_37_; lean_object* v_invFun_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_37_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_equiv));
v_invFun_38_ = lean_ctor_get(v___x_37_, 1);
lean_inc_n(v_invFun_38_, 2);
v___x_39_ = lean_apply_1(v_invFun_38_, v_a_35_);
v___x_40_ = lean_apply_1(v_invFun_38_, v_b_36_);
v___x_41_ = lean_int_dec_eq(v___x_39_, v___x_40_);
lean_dec(v___x_40_);
lean_dec(v___x_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Nanosecond_instDecidableEqOrdinal(v_a_42_, v_b_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOrdinal(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOrdinal(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLEOrdinal(lean_object* v_a_48_, lean_object* v_b_49_){
_start:
{
lean_object* v___x_50_; lean_object* v_invFun_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_50_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_equiv));
v_invFun_51_ = lean_ctor_get(v___x_50_, 1);
lean_inc_n(v_invFun_51_, 2);
v___x_52_ = lean_apply_1(v_invFun_51_, v_a_48_);
v___x_53_ = lean_apply_1(v_invFun_51_, v_b_49_);
v___x_54_ = lean_int_dec_le(v___x_52_, v___x_53_);
lean_dec(v___x_53_);
lean_dec(v___x_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLEOrdinal___boxed(lean_object* v_a_55_, lean_object* v_b_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l_Std_Time_Nanosecond_instDecidableLEOrdinal(v_a_55_, v_b_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTOrdinal(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
lean_object* v___x_61_; lean_object* v_invFun_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_61_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_equiv));
v_invFun_62_ = lean_ctor_get(v___x_61_, 1);
lean_inc_n(v_invFun_62_, 2);
v___x_63_ = lean_apply_1(v_invFun_62_, v_a_59_);
v___x_64_ = lean_apply_1(v_invFun_62_, v_b_60_);
v___x_65_ = lean_int_dec_lt(v___x_63_, v___x_64_);
lean_dec(v___x_64_);
lean_dec(v___x_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTOrdinal___boxed(lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Std_Time_Nanosecond_instDecidableLTOrdinal(v_a_66_, v_b_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(lean_object* v___x_70_, lean_object* v_x_71_, lean_object* v_y_72_){
_start:
{
lean_object* v_invFun_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_invFun_73_ = lean_ctor_get(v___x_70_, 1);
lean_inc_n(v_invFun_73_, 2);
lean_dec_ref(v___x_70_);
v___x_74_ = lean_apply_1(v_invFun_73_, v_x_71_);
v___x_75_ = lean_apply_1(v_invFun_73_, v_y_72_);
v___x_76_ = lean_int_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_int_dec_eq(v___x_74_, v___x_75_);
lean_dec(v___x_75_);
lean_dec(v___x_74_);
if (v___x_77_ == 0)
{
uint8_t v___x_78_; 
v___x_78_ = 2;
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 1;
return v___x_79_;
}
}
else
{
uint8_t v___x_80_; 
lean_dec(v___x_75_);
lean_dec(v___x_74_);
v___x_80_ = 0;
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOrdinal___lam__0___boxed(lean_object* v___x_81_, lean_object* v_x_82_, lean_object* v_y_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Std_Time_Nanosecond_instOrdOrdinal___lam__0(v___x_81_, v_x_82_, v_y_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val(lean_object* v_ordinal_89_){
_start:
{
lean_inc(v_ordinal_89_);
return v_ordinal_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_val___boxed(lean_object* v_ordinal_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Time_Nanosecond_Ordinal_val(v_ordinal_90_);
lean_dec(v_ordinal_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal(lean_object* v_n_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_unsigned_to_nat(1000000000u);
v___x_94_ = lean_nat_mod(v_n_92_, v___x_93_);
v___x_95_ = lean_nat_to_int(v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOrdinal___boxed(lean_object* v_n_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Std_Time_Nanosecond_instOfNatOrdinal(v_n_96_);
lean_dec(v_n_96_);
return v_res_97_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = lean_unsigned_to_nat(1000000000u);
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_100_ = lean_nat_mod(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__0);
v___x_102_ = lean_nat_to_int(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1, &l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Nanosecond_instInhabitedOrdinal___closed__1);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk(lean_object* v_toUnitVal_104_){
_start:
{
lean_inc(v_toUnitVal_104_);
return v_toUnitVal_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_mk___boxed(lean_object* v_toUnitVal_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Std_Time_Nanosecond_Offset_mk(v_toUnitVal_105_);
lean_dec(v_toUnitVal_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal(lean_object* v_self_107_){
_start:
{
lean_inc(v_self_107_);
return v_self_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_toUnitVal___boxed(lean_object* v_self_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Std_Time_Nanosecond_Offset_toUnitVal(v_self_108_);
lean_dec(v_self_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val(lean_object* v_offset_111_){
_start:
{
lean_inc(v_offset_111_);
return v_offset_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_val___boxed(lean_object* v_offset_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Std_Time_Nanosecond_Offset_val(v_offset_112_);
lean_dec(v_offset_112_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0(lean_object* v_offset_114_, lean_object* v_prec_115_){
_start:
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
v___x_117_ = lean_int_dec_lt(v_offset_114_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = l_Int_repr(v_offset_114_);
v___x_119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = l_Int_repr(v_offset_114_);
v___x_121_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
v___x_122_ = l_Repr_addAppParen(v___x_121_, v_prec_115_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instReprOffset___lam__0___boxed(lean_object* v_offset_123_, lean_object* v_prec_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Std_Time_Nanosecond_instReprOffset___lam__0(v_offset_123_, v_prec_124_);
lean_dec(v_prec_124_);
lean_dec(v_offset_123_);
return v_res_125_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_130_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedOffset(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Std_Time_Nanosecond_instInhabitedOffset___closed__0, &l_Std_Time_Nanosecond_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Nanosecond_instInhabitedOffset___closed__0);
return v___x_131_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqOffset(lean_object* v_x_132_, lean_object* v_y_133_){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = lean_int_dec_eq(v_x_132_, v_y_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqOffset___boxed(lean_object* v_x_135_, lean_object* v_y_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Std_Time_Nanosecond_instDecidableEqOffset(v_x_135_, v_y_136_);
lean_dec(v_y_136_);
lean_dec(v_x_135_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLEOffset(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_box(0);
return v___x_145_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTOffset(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_box(0);
return v___x_146_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instOrdOffset___lam__0(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = lean_int_dec_lt(v_x_147_, v_y_148_);
if (v___x_149_ == 0)
{
uint8_t v___x_150_; 
v___x_150_ = lean_int_dec_eq(v_x_147_, v_y_148_);
if (v___x_150_ == 0)
{
uint8_t v___x_151_; 
v___x_151_ = 2;
return v___x_151_;
}
else
{
uint8_t v___x_152_; 
v___x_152_ = 1;
return v___x_152_;
}
}
else
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOrdOffset___lam__0___boxed(lean_object* v_x_154_, lean_object* v_y_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Std_Time_Nanosecond_instOrdOffset___lam__0(v_x_154_, v_y_155_);
lean_dec(v_y_155_);
lean_dec(v_x_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instOfNatOffset(lean_object* v_n_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_nat_to_int(v_n_160_);
return v___x_161_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLeOffset(lean_object* v_x_162_, lean_object* v_y_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = lean_int_dec_le(v_x_162_, v_y_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLeOffset___boxed(lean_object* v_x_165_, lean_object* v_y_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l_Std_Time_Nanosecond_instDecidableLeOffset(v_x_165_, v_y_166_);
lean_dec(v_y_166_);
lean_dec(v_x_165_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLtOffset(lean_object* v_x_169_, lean_object* v_y_170_){
_start:
{
uint8_t v___x_171_; 
v___x_171_ = lean_int_dec_lt(v_x_169_, v_y_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLtOffset___boxed(lean_object* v_x_172_, lean_object* v_y_173_){
_start:
{
uint8_t v_res_174_; lean_object* v_r_175_; 
v_res_174_ = l_Std_Time_Nanosecond_instDecidableLtOffset(v_x_172_, v_y_173_);
lean_dec(v_y_173_);
lean_dec(v_x_172_);
v_r_175_ = lean_box(v_res_174_);
return v_r_175_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofNat(lean_object* v_data_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_nat_to_int(v_data_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt(lean_object* v_data_178_){
_start:
{
lean_inc(v_data_178_);
return v_data_178_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Offset_ofInt___boxed(lean_object* v_data_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Std_Time_Nanosecond_Offset_ofInt(v_data_179_);
lean_dec(v_data_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk(lean_object* v_toBounded_181_){
_start:
{
lean_inc(v_toBounded_181_);
return v_toBounded_181_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_mk___boxed(lean_object* v_toBounded_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Std_Time_Nanosecond_Span_mk(v_toBounded_182_);
lean_dec(v_toBounded_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded(lean_object* v_self_184_){
_start:
{
lean_inc(v_self_184_);
return v_self_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toBounded___boxed(lean_object* v_self_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Std_Time_Nanosecond_Span_toBounded(v_self_185_);
lean_dec(v_self_185_);
return v_res_186_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableEqSpan(lean_object* v_a_191_, lean_object* v_b_192_){
_start:
{
lean_object* v___x_193_; lean_object* v_invFun_194_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_193_ = ((lean_object*)(l_Std_Time_Nanosecond_Span_equiv));
v_invFun_194_ = lean_ctor_get(v___x_193_, 1);
lean_inc_n(v_invFun_194_, 2);
v___x_195_ = lean_apply_1(v_invFun_194_, v_a_191_);
v___x_196_ = lean_apply_1(v_invFun_194_, v_b_192_);
v___x_197_ = lean_int_dec_eq(v___x_195_, v___x_196_);
lean_dec(v___x_196_);
lean_dec(v___x_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableEqSpan___boxed(lean_object* v_a_198_, lean_object* v_b_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Std_Time_Nanosecond_instDecidableEqSpan(v_a_198_, v_b_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLESpan(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instLTSpan(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_box(0);
return v___x_203_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLESpan(lean_object* v_a_204_, lean_object* v_b_205_){
_start:
{
lean_object* v___x_206_; lean_object* v_invFun_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_206_ = ((lean_object*)(l_Std_Time_Nanosecond_Span_equiv));
v_invFun_207_ = lean_ctor_get(v___x_206_, 1);
lean_inc_n(v_invFun_207_, 2);
v___x_208_ = lean_apply_1(v_invFun_207_, v_a_204_);
v___x_209_ = lean_apply_1(v_invFun_207_, v_b_205_);
v___x_210_ = lean_int_dec_le(v___x_208_, v___x_209_);
lean_dec(v___x_209_);
lean_dec(v___x_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLESpan___boxed(lean_object* v_a_211_, lean_object* v_b_212_){
_start:
{
uint8_t v_res_213_; lean_object* v_r_214_; 
v_res_213_ = l_Std_Time_Nanosecond_instDecidableLESpan(v_a_211_, v_b_212_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_instDecidableLTSpan(lean_object* v_a_215_, lean_object* v_b_216_){
_start:
{
lean_object* v___x_217_; lean_object* v_invFun_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_217_ = ((lean_object*)(l_Std_Time_Nanosecond_Span_equiv));
v_invFun_218_ = lean_ctor_get(v___x_217_, 1);
lean_inc_n(v_invFun_218_, 2);
v___x_219_ = lean_apply_1(v_invFun_218_, v_a_215_);
v___x_220_ = lean_apply_1(v_invFun_218_, v_b_216_);
v___x_221_ = lean_int_dec_lt(v___x_219_, v___x_220_);
lean_dec(v___x_220_);
lean_dec(v___x_219_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_instDecidableLTSpan___boxed(lean_object* v_a_222_, lean_object* v_b_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l_Std_Time_Nanosecond_instDecidableLTSpan(v_a_222_, v_b_223_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val(lean_object* v_span_229_){
_start:
{
lean_inc(v_span_229_);
return v_span_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_val___boxed(lean_object* v_span_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Std_Time_Nanosecond_Span_val(v_span_230_);
lean_dec(v_span_230_);
return v_res_231_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_instInhabitedSpan(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object* v_span_233_){
_start:
{
lean_inc(v_span_233_);
return v_span_233_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Span_toOffset___boxed(lean_object* v_span_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Std_Time_Nanosecond_Span_toOffset(v_span_234_);
lean_dec(v_span_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0_spec__0(lean_object* v_a_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_nat_to_int(v_a_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Nanosecond_Span_toOffset_spec__0(lean_object* v_a_238_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_nat_to_int(v_a_238_);
v___x_240_ = l_Rat_ofInt(v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk(lean_object* v_toBounded_241_){
_start:
{
lean_inc(v_toBounded_241_);
return v_toBounded_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_mk___boxed(lean_object* v_toBounded_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_Time_Nanosecond_Ordinal_OfDay_mk(v_toBounded_242_);
lean_dec(v_toBounded_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(lean_object* v_self_244_){
_start:
{
lean_inc(v_self_244_);
return v_self_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded___boxed(lean_object* v_self_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Std_Time_Nanosecond_Ordinal_OfDay_toBounded(v_self_245_);
lean_dec(v_self_245_);
return v_res_246_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(lean_object* v_a_251_, lean_object* v_b_252_){
_start:
{
lean_object* v___x_253_; lean_object* v_invFun_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_253_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_OfDay_equiv));
v_invFun_254_ = lean_ctor_get(v___x_253_, 1);
lean_inc_n(v_invFun_254_, 2);
v___x_255_ = lean_apply_1(v_invFun_254_, v_a_251_);
v___x_256_ = lean_apply_1(v_invFun_254_, v_b_252_);
v___x_257_ = lean_int_dec_eq(v___x_255_, v___x_256_);
lean_dec(v___x_256_);
lean_dec(v___x_255_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay___boxed(lean_object* v_a_258_, lean_object* v_b_259_){
_start:
{
uint8_t v_res_260_; lean_object* v_r_261_; 
v_res_260_ = l_Std_Time_Nanosecond_Ordinal_instDecidableEqOfDay(v_a_258_, v_b_259_);
v_r_261_ = lean_box(v_res_260_);
return v_r_261_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLEOfDay(void){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_box(0);
return v___x_262_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instLTOfDay(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_box(0);
return v___x_263_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(lean_object* v_a_264_, lean_object* v_b_265_){
_start:
{
lean_object* v___x_266_; lean_object* v_invFun_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_266_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_OfDay_equiv));
v_invFun_267_ = lean_ctor_get(v___x_266_, 1);
lean_inc_n(v_invFun_267_, 2);
v___x_268_ = lean_apply_1(v_invFun_267_, v_a_264_);
v___x_269_ = lean_apply_1(v_invFun_267_, v_b_265_);
v___x_270_ = lean_int_dec_le(v___x_268_, v___x_269_);
lean_dec(v___x_269_);
lean_dec(v___x_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay___boxed(lean_object* v_a_271_, lean_object* v_b_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLEOfDay(v_a_271_, v_b_272_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(lean_object* v_a_275_, lean_object* v_b_276_){
_start:
{
lean_object* v___x_277_; lean_object* v_invFun_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_277_ = ((lean_object*)(l_Std_Time_Nanosecond_Ordinal_OfDay_equiv));
v_invFun_278_ = lean_ctor_get(v___x_277_, 1);
lean_inc_n(v_invFun_278_, 2);
v___x_279_ = lean_apply_1(v_invFun_278_, v_a_275_);
v___x_280_ = lean_apply_1(v_invFun_278_, v_b_276_);
v___x_281_ = lean_int_dec_lt(v___x_279_, v___x_280_);
lean_dec(v___x_280_);
lean_dec(v___x_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay___boxed(lean_object* v_a_282_, lean_object* v_b_283_){
_start:
{
uint8_t v_res_284_; lean_object* v_r_285_; 
v_res_284_ = l_Std_Time_Nanosecond_Ordinal_instDecidableLTOfDay(v_a_282_, v_b_283_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val(lean_object* v_ordinal_289_){
_start:
{
lean_inc(v_ordinal_289_);
return v_ordinal_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_OfDay_val___boxed(lean_object* v_ordinal_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Std_Time_Nanosecond_Ordinal_OfDay_val(v_ordinal_290_);
lean_dec(v_ordinal_290_);
return v_res_291_;
}
}
static lean_object* _init_l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_obj_once(&l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Nanosecond_instReprOrdinal___lam__0___closed__0);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(lean_object* v_data_293_){
_start:
{
lean_inc(v_data_293_);
return v_data_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___redArg___boxed(lean_object* v_data_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Std_Time_Nanosecond_Ordinal_ofInt___redArg(v_data_294_);
lean_dec(v_data_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt(lean_object* v_data_296_, lean_object* v_h_297_){
_start:
{
lean_inc(v_data_296_);
return v_data_296_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofInt___boxed(lean_object* v_data_298_, lean_object* v_h_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Std_Time_Nanosecond_Ordinal_ofInt(v_data_298_, v_h_299_);
lean_dec(v_data_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat___redArg(lean_object* v_data_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_nat_to_int(v_data_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofNat(lean_object* v_data_303_, lean_object* v_h_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_nat_to_int(v_data_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_ofFin(lean_object* v_data_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_nat_to_int(v_data_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset(lean_object* v_ordinal_308_){
_start:
{
lean_inc(v_ordinal_308_);
return v_ordinal_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Nanosecond_Ordinal_toOffset___boxed(lean_object* v_ordinal_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_Time_Nanosecond_Ordinal_toOffset(v_ordinal_309_);
lean_dec(v_ordinal_309_);
return v_res_310_;
}
}
lean_object* runtime_initialize_Std_Time_Internal(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Nanosecond_instLEOrdinal = _init_l_Std_Time_Nanosecond_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instLEOrdinal);
l_Std_Time_Nanosecond_instLTOrdinal = _init_l_Std_Time_Nanosecond_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTOrdinal);
l_Std_Time_Nanosecond_instInhabitedOrdinal = _init_l_Std_Time_Nanosecond_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedOrdinal);
l_Std_Time_Nanosecond_instInhabitedOffset = _init_l_Std_Time_Nanosecond_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedOffset);
l_Std_Time_Nanosecond_instLEOffset = _init_l_Std_Time_Nanosecond_instLEOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instLEOffset);
l_Std_Time_Nanosecond_instLTOffset = _init_l_Std_Time_Nanosecond_instLTOffset();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTOffset);
l_Std_Time_Nanosecond_instLESpan = _init_l_Std_Time_Nanosecond_instLESpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instLESpan);
l_Std_Time_Nanosecond_instLTSpan = _init_l_Std_Time_Nanosecond_instLTSpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instLTSpan);
l_Std_Time_Nanosecond_instInhabitedSpan = _init_l_Std_Time_Nanosecond_instInhabitedSpan();
lean_mark_persistent(l_Std_Time_Nanosecond_instInhabitedSpan);
l_Std_Time_Nanosecond_Ordinal_instLEOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instLEOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instLEOfDay);
l_Std_Time_Nanosecond_Ordinal_instLTOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instLTOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instLTOfDay);
l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay = _init_l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay();
lean_mark_persistent(l_Std_Time_Nanosecond_Ordinal_instInhabitedOfDay);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Internal(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Time_Unit_Nanosecond(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Time_Unit_Nanosecond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Time_Unit_Nanosecond(builtin);
}
#ifdef __cplusplus
}
#endif
