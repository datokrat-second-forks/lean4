// Lean compiler output
// Module: Std.Time.Date.Unit.Month
// Imports: public import Std.Time.Date.Unit.Day import Init.Data.Fin.Lemmas public import Init.Transport
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
lean_object* l_Int_ediv___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_instNatCast___lam__0(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Month_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instReprOrdinal = (const lean_object*)&l_Std_Time_Month_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Month_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Month_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instOrdOrdinal = (const lean_object*)&l_Std_Time_Month_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Month_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Month_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Month_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Month_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Month_instOfNatOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Month_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Month_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Month_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Month_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Month_instInhabitedOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Month_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instReprOffset = (const lean_object*)&l_Std_Time_Month_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Month_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instToStringOffset = (const lean_object*)&l_Std_Time_Month_instToStringOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instAddOffset = (const lean_object*)&l_Std_Time_Month_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Month_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instSubOffset = (const lean_object*)&l_Std_Time_Month_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Month_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instNegOffset = (const lean_object*)&l_Std_Time_Month_instNegOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Month_instMulOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instMulOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instMulOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instMulOffset = (const lean_object*)&l_Std_Time_Month_instMulOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Month_instDivOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_ediv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instDivOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instDivOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instDivOffset = (const lean_object*)&l_Std_Time_Month_instDivOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Month_instLTOffset;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instOrdOffset = (const lean_object*)&l_Std_Time_Month_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Month_instReprQuarter = (const lean_object*)&l_Std_Time_Month_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqQuarter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqQuarter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instLTQuarter;
LEAN_EXPORT lean_object* l_Std_Time_Month_instLEQuarter;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instOrdQuarter = (const lean_object*)&l_Std_Time_Month_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Month_instOfNatQuarter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatQuarter___closed__0;
static lean_once_cell_t l_Std_Time_Month_instOfNatQuarter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatQuarter___closed__1;
static lean_once_cell_t l_Std_Time_Month_instOfNatQuarter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatQuarter___closed__2;
static lean_once_cell_t l_Std_Time_Month_instOfNatQuarter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instOfNatQuarter___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatQuarter(lean_object*);
static lean_once_cell_t l_Std_Time_Month_instInhabitedQuarter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedQuarter___closed__0;
static lean_once_cell_t l_Std_Time_Month_instInhabitedQuarter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedQuarter___closed__1;
static lean_once_cell_t l_Std_Time_Month_instInhabitedQuarter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedQuarter___closed__2;
static lean_once_cell_t l_Std_Time_Month_instInhabitedQuarter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instInhabitedQuarter___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Month_instInhabitedQuarter;
static lean_once_cell_t l_Std_Time_Month_Quarter_ofMonth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Quarter_ofMonth___closed__0;
static lean_once_cell_t l_Std_Time_Month_Quarter_ofMonth___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Quarter_ofMonth___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_january;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_february___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_february___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_february;
static lean_once_cell_t l_Std_Time_Month_Ordinal_march___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_march___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_march___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_march___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_march___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_march___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_march___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_march___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_march___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_march___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_march;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_april___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_april___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_april;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_may___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_may___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_may;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_june___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_june___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_june;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_july___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_july___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_july;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_august___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_august___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_august;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_september___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_september___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_september;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_october___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_october___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_october;
static lean_once_cell_t l_Std_Time_Month_Ordinal_november___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_november___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_november___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_november___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_november___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_november___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_november___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_november___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_november___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_november___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_november;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_december___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_december___closed__5;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_december;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__3 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__3_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_0),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_1),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value_aux_2),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4_value;
static const lean_array_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__6 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__6_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_0),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_1),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value_aux_2),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__8 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__8_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9_value;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_0),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_1),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value_aux_2),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11_value;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13;
static const lean_string_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__14 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__14_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_0),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_1),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value_aux_2),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9_value),((lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5_value)}};
static const lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__16 = (const lean_object*)&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__16_value;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25;
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat___auto__1;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Month_Ordinal_ofFin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_ofFin___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__2(lean_object*);
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__5;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__6;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__7;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__8;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__9;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__10;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__11;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__12;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toSeconds___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toSeconds___closed__13;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_Month_Ordinal_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Month_Ordinal_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toDays___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toDays___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toDays___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_toDays___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_toDays___closed__2;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21;
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10;
static lean_once_cell_t l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__0;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__1;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__2;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__3;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__4;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__5;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__6;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__7;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__8;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__9;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__10;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__11;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__12;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__13;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__14;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__15;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__16;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__17;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__18;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__19;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__20;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__21;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__22;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__23;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__24;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__25;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__26;
static lean_once_cell_t l_Std_Time_Month_Ordinal_days___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_Ordinal_days___closed__27;
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Month_Ordinal_mk(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Month_Ordinal_toBounded(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
static lean_object* _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0(lean_object* v_x_9_, lean_object* v_prec_10_){
_start:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_12_ = lean_int_dec_lt(v_x_9_, v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = l_Int_repr(v_x_9_);
v___x_14_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
else
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = l_Int_repr(v_x_9_);
v___x_16_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
v___x_17_ = l_Repr_addAppParen(v___x_16_, v_prec_10_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___boxed(lean_object* v_x_18_, lean_object* v_prec_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Time_Month_instReprOrdinal___lam__0(v_x_18_, v_prec_19_);
lean_dec(v_prec_19_);
lean_dec(v_x_18_);
return v_res_20_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOrdinal(lean_object* v_a_23_, lean_object* v_b_24_){
_start:
{
uint8_t v___x_25_; 
v___x_25_ = lean_int_dec_eq(v_a_23_, v_b_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOrdinal___boxed(lean_object* v_a_26_, lean_object* v_b_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Std_Time_Month_instDecidableEqOrdinal(v_a_26_, v_b_27_);
lean_dec(v_b_27_);
lean_dec(v_a_26_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEOrdinal(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(0);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTOrdinal(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_box(0);
return v___x_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLEOrdinal(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = lean_int_dec_le(v_a_32_, v_b_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLEOrdinal___boxed(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_Time_Month_instDecidableLEOrdinal(v_a_35_, v_b_36_);
lean_dec(v_b_36_);
lean_dec(v_a_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLTOrdinal(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v___x_41_; 
v___x_41_ = lean_int_dec_lt(v_a_39_, v_b_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLTOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Month_instDecidableLTOrdinal(v_a_42_, v_b_43_);
lean_dec(v_b_43_);
lean_dec(v_a_42_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOrdinal___lam__0(lean_object* v_x_46_, lean_object* v_y_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = lean_int_dec_lt(v_x_46_, v_y_47_);
if (v___x_48_ == 0)
{
uint8_t v___x_49_; 
v___x_49_ = lean_int_dec_eq(v_x_46_, v_y_47_);
if (v___x_49_ == 0)
{
uint8_t v___x_50_; 
v___x_50_ = 2;
return v___x_50_;
}
else
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOrdinal___lam__0___boxed(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Std_Time_Month_instOrdOrdinal___lam__0(v_x_53_, v_y_54_);
lean_dec(v_y_54_);
lean_dec(v_x_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val(lean_object* v_ordinal_59_){
_start:
{
lean_inc(v_ordinal_59_);
return v_ordinal_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val___boxed(lean_object* v_ordinal_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Std_Time_Month_Ordinal_val(v_ordinal_60_);
lean_dec(v_ordinal_60_);
return v_res_61_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(11u);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__1, &l_Std_Time_Month_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__1);
v___x_67_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_68_ = lean_int_add(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_70_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__2, &l_Std_Time_Month_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__2);
v___x_71_ = lean_int_sub(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_range_74_; 
v___x_72_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_73_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__3, &l_Std_Time_Month_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__3);
v_range_74_ = lean_int_add(v___x_73_, v___x_72_);
return v_range_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOrdinal(lean_object* v_n_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v_range_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_76_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_77_ = lean_nat_to_int(v_n_75_);
v_range_78_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_79_ = lean_int_sub(v___x_77_, v___x_76_);
lean_dec(v___x_77_);
v___x_80_ = lean_int_emod(v___x_79_, v_range_78_);
lean_dec(v___x_79_);
v___x_81_ = lean_int_add(v___x_80_, v_range_78_);
lean_dec(v___x_80_);
v___x_82_ = lean_int_emod(v___x_81_, v_range_78_);
lean_dec(v___x_81_);
v___x_83_ = lean_int_add(v___x_82_, v___x_76_);
lean_dec(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_85_ = lean_int_sub(v___x_84_, v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_range_86_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_87_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__0, &l_Std_Time_Month_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0);
v___x_88_ = lean_int_emod(v___x_87_, v_range_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_range_89_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_90_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__1, &l_Std_Time_Month_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__1);
v___x_91_ = lean_int_add(v___x_90_, v_range_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_range_92_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_93_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__2, &l_Std_Time_Month_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__2);
v___x_94_ = lean_int_emod(v___x_93_, v_range_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_96_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__3, &l_Std_Time_Month_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__3);
v___x_97_ = lean_int_add(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__4, &l_Std_Time_Month_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk(lean_object* v_toInt_99_){
_start:
{
lean_inc(v_toInt_99_);
return v_toInt_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk___boxed(lean_object* v_toInt_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Std_Time_Month_Offset_mk(v_toInt_100_);
lean_dec(v_toInt_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt(lean_object* v_self_102_){
_start:
{
lean_inc(v_self_102_);
return v_self_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt___boxed(lean_object* v_self_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Std_Time_Month_Offset_toInt(v_self_103_);
lean_dec(v_self_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0(lean_object* v_offset_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_108_ = lean_int_dec_lt(v_offset_105_, v___x_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = l_Int_repr(v_offset_105_);
v___x_110_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Int_repr(v_offset_105_);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_106_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0___boxed(lean_object* v_offset_114_, lean_object* v_prec_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Std_Time_Month_instReprOffset___lam__0(v_offset_114_, v_prec_115_);
lean_dec(v_prec_115_);
lean_dec(v_offset_114_);
return v_res_116_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOffset(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
return v___x_121_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOffset(lean_object* v_x_122_, lean_object* v_y_123_){
_start:
{
uint8_t v___x_124_; 
v___x_124_ = lean_int_dec_eq(v_x_122_, v_y_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOffset___boxed(lean_object* v_x_125_, lean_object* v_y_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = l_Std_Time_Month_instDecidableEqOffset(v_x_125_, v_y_126_);
lean_dec(v_y_126_);
lean_dec(v_x_125_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEOffset(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTOffset(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_box(0);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOffset(lean_object* v_n_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_nat_to_int(v_n_142_);
return v___x_143_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLeOffset(lean_object* v_x_144_, lean_object* v_y_145_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_int_dec_le(v_x_144_, v_y_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLeOffset___boxed(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Std_Time_Month_instDecidableLeOffset(v_x_147_, v_y_148_);
lean_dec(v_y_148_);
lean_dec(v_x_147_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLtOffset(lean_object* v_x_151_, lean_object* v_y_152_){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = lean_int_dec_lt(v_x_151_, v_y_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLtOffset___boxed(lean_object* v_x_154_, lean_object* v_y_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Std_Time_Month_instDecidableLtOffset(v_x_154_, v_y_155_);
lean_dec(v_y_155_);
lean_dec(v_x_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk(lean_object* v_toBounded_158_){
_start:
{
lean_inc(v_toBounded_158_);
return v_toBounded_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk___boxed(lean_object* v_toBounded_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Std_Time_Month_Quarter_mk(v_toBounded_159_);
lean_dec(v_toBounded_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded(lean_object* v_self_161_){
_start:
{
lean_inc(v_self_161_);
return v_self_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded___boxed(lean_object* v_self_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Std_Time_Month_Quarter_toBounded(v_self_162_);
lean_dec(v_self_162_);
return v_res_163_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqQuarter(lean_object* v_a_165_, lean_object* v_b_166_){
_start:
{
uint8_t v___x_167_; 
v___x_167_ = lean_int_dec_eq(v_a_165_, v_b_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqQuarter___boxed(lean_object* v_a_168_, lean_object* v_b_169_){
_start:
{
uint8_t v_res_170_; lean_object* v_r_171_; 
v_res_170_ = l_Std_Time_Month_instDecidableEqQuarter(v_a_168_, v_b_169_);
lean_dec(v_b_169_);
lean_dec(v_a_168_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTQuarter(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_box(0);
return v___x_172_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEQuarter(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_box(0);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val(lean_object* v_quarter_175_){
_start:
{
lean_inc(v_quarter_175_);
return v_quarter_175_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val___boxed(lean_object* v_quarter_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Std_Time_Month_Quarter_val(v_quarter_176_);
lean_dec(v_quarter_176_);
return v_res_177_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__0(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(3u);
v___x_179_ = lean_nat_to_int(v___x_178_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__1(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__0, &l_Std_Time_Month_instOfNatQuarter___closed__0_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__0);
v___x_181_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_182_ = lean_int_add(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_184_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__1, &l_Std_Time_Month_instOfNatQuarter___closed__1_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__1);
v___x_185_ = lean_int_sub(v___x_184_, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_range_188_; 
v___x_186_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_187_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__2, &l_Std_Time_Month_instOfNatQuarter___closed__2_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__2);
v_range_188_ = lean_int_add(v___x_187_, v___x_186_);
return v_range_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatQuarter(lean_object* v_n_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_range_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_190_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_191_ = lean_nat_to_int(v_n_189_);
v_range_192_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_193_ = lean_int_sub(v___x_191_, v___x_190_);
lean_dec(v___x_191_);
v___x_194_ = lean_int_emod(v___x_193_, v_range_192_);
lean_dec(v___x_193_);
v___x_195_ = lean_int_add(v___x_194_, v_range_192_);
lean_dec(v___x_194_);
v___x_196_ = lean_int_emod(v___x_195_, v_range_192_);
lean_dec(v___x_195_);
v___x_197_ = lean_int_add(v___x_196_, v___x_190_);
lean_dec(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__0(void){
_start:
{
lean_object* v_range_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_range_198_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_199_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__0, &l_Std_Time_Month_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0);
v___x_200_ = lean_int_emod(v___x_199_, v_range_198_);
return v___x_200_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__1(void){
_start:
{
lean_object* v_range_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_range_201_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_202_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__0, &l_Std_Time_Month_instInhabitedQuarter___closed__0_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__0);
v___x_203_ = lean_int_add(v___x_202_, v_range_201_);
return v___x_203_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__2(void){
_start:
{
lean_object* v_range_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v_range_204_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_205_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__1, &l_Std_Time_Month_instInhabitedQuarter___closed__1_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__1);
v___x_206_ = lean_int_emod(v___x_205_, v_range_204_);
return v___x_206_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__3(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_208_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__2, &l_Std_Time_Month_instInhabitedQuarter___closed__2_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__2);
v___x_209_ = lean_int_add(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__3, &l_Std_Time_Month_instInhabitedQuarter___closed__3_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__3);
return v___x_210_;
}
}
static lean_object* _init_l_Std_Time_Month_Quarter_ofMonth___closed__0(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_unsigned_to_nat(3u);
v___x_212_ = lean_nat_to_int(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_l_Std_Time_Month_Quarter_ofMonth___closed__1(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_214_ = lean_int_neg(v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth(lean_object* v_month_215_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_216_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_217_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__0, &l_Std_Time_Month_Quarter_ofMonth___closed__0_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__0);
v___x_218_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_219_ = lean_int_add(v_month_215_, v___x_218_);
v___x_220_ = lean_int_ediv(v___x_219_, v___x_217_);
lean_dec(v___x_219_);
v___x_221_ = lean_int_add(v___x_220_, v___x_216_);
lean_dec(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth___boxed(lean_object* v_month_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Std_Time_Month_Quarter_ofMonth(v_month_222_);
lean_dec(v_month_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofNat(lean_object* v_data_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_nat_to_int(v_data_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt(lean_object* v_data_226_){
_start:
{
lean_inc(v_data_226_);
return v_data_226_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt___boxed(lean_object* v_data_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Std_Time_Month_Offset_ofInt(v_data_227_);
lean_dec(v_data_227_);
return v_res_228_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_january(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__4, &l_Std_Time_Month_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4);
return v___x_229_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__0(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(2u);
v___x_231_ = lean_nat_to_int(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_233_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__0, &l_Std_Time_Month_Ordinal_february___closed__0_once, _init_l_Std_Time_Month_Ordinal_february___closed__0);
v___x_234_ = lean_int_sub(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__2(void){
_start:
{
lean_object* v_range_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v_range_235_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_236_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__1, &l_Std_Time_Month_Ordinal_february___closed__1_once, _init_l_Std_Time_Month_Ordinal_february___closed__1);
v___x_237_ = lean_int_emod(v___x_236_, v_range_235_);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__3(void){
_start:
{
lean_object* v_range_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_range_238_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_239_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__2, &l_Std_Time_Month_Ordinal_february___closed__2_once, _init_l_Std_Time_Month_Ordinal_february___closed__2);
v___x_240_ = lean_int_add(v___x_239_, v_range_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__4(void){
_start:
{
lean_object* v_range_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_range_241_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_242_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__3, &l_Std_Time_Month_Ordinal_february___closed__3_once, _init_l_Std_Time_Month_Ordinal_february___closed__3);
v___x_243_ = lean_int_emod(v___x_242_, v_range_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__5(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_245_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__4, &l_Std_Time_Month_Ordinal_february___closed__4_once, _init_l_Std_Time_Month_Ordinal_february___closed__4);
v___x_246_ = lean_int_add(v___x_245_, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__5, &l_Std_Time_Month_Ordinal_february___closed__5_once, _init_l_Std_Time_Month_Ordinal_february___closed__5);
return v___x_247_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__0(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_249_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__0, &l_Std_Time_Month_instOfNatQuarter___closed__0_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__0);
v___x_250_ = lean_int_sub(v___x_249_, v___x_248_);
return v___x_250_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__1(void){
_start:
{
lean_object* v_range_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_range_251_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_252_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__0, &l_Std_Time_Month_Ordinal_march___closed__0_once, _init_l_Std_Time_Month_Ordinal_march___closed__0);
v___x_253_ = lean_int_emod(v___x_252_, v_range_251_);
return v___x_253_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__2(void){
_start:
{
lean_object* v_range_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_range_254_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_255_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__1, &l_Std_Time_Month_Ordinal_march___closed__1_once, _init_l_Std_Time_Month_Ordinal_march___closed__1);
v___x_256_ = lean_int_add(v___x_255_, v_range_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__3(void){
_start:
{
lean_object* v_range_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_range_257_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_258_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__2, &l_Std_Time_Month_Ordinal_march___closed__2_once, _init_l_Std_Time_Month_Ordinal_march___closed__2);
v___x_259_ = lean_int_emod(v___x_258_, v_range_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__4(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_261_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__3, &l_Std_Time_Month_Ordinal_march___closed__3_once, _init_l_Std_Time_Month_Ordinal_march___closed__3);
v___x_262_ = lean_int_add(v___x_261_, v___x_260_);
return v___x_262_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__4, &l_Std_Time_Month_Ordinal_march___closed__4_once, _init_l_Std_Time_Month_Ordinal_march___closed__4);
return v___x_263_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__0(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_unsigned_to_nat(4u);
v___x_265_ = lean_nat_to_int(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__1(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_267_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__0, &l_Std_Time_Month_Ordinal_april___closed__0_once, _init_l_Std_Time_Month_Ordinal_april___closed__0);
v___x_268_ = lean_int_sub(v___x_267_, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__2(void){
_start:
{
lean_object* v_range_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_range_269_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_270_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__1, &l_Std_Time_Month_Ordinal_april___closed__1_once, _init_l_Std_Time_Month_Ordinal_april___closed__1);
v___x_271_ = lean_int_emod(v___x_270_, v_range_269_);
return v___x_271_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__3(void){
_start:
{
lean_object* v_range_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_range_272_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_273_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__2, &l_Std_Time_Month_Ordinal_april___closed__2_once, _init_l_Std_Time_Month_Ordinal_april___closed__2);
v___x_274_ = lean_int_add(v___x_273_, v_range_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__4(void){
_start:
{
lean_object* v_range_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_range_275_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_276_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__3, &l_Std_Time_Month_Ordinal_april___closed__3_once, _init_l_Std_Time_Month_Ordinal_april___closed__3);
v___x_277_ = lean_int_emod(v___x_276_, v_range_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__5(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_279_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__4, &l_Std_Time_Month_Ordinal_april___closed__4_once, _init_l_Std_Time_Month_Ordinal_april___closed__4);
v___x_280_ = lean_int_add(v___x_279_, v___x_278_);
return v___x_280_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april(void){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__5, &l_Std_Time_Month_Ordinal_april___closed__5_once, _init_l_Std_Time_Month_Ordinal_april___closed__5);
return v___x_281_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__0(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(5u);
v___x_283_ = lean_nat_to_int(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__1(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_285_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__0, &l_Std_Time_Month_Ordinal_may___closed__0_once, _init_l_Std_Time_Month_Ordinal_may___closed__0);
v___x_286_ = lean_int_sub(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__2(void){
_start:
{
lean_object* v_range_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_range_287_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_288_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__1, &l_Std_Time_Month_Ordinal_may___closed__1_once, _init_l_Std_Time_Month_Ordinal_may___closed__1);
v___x_289_ = lean_int_emod(v___x_288_, v_range_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__3(void){
_start:
{
lean_object* v_range_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_range_290_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_291_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__2, &l_Std_Time_Month_Ordinal_may___closed__2_once, _init_l_Std_Time_Month_Ordinal_may___closed__2);
v___x_292_ = lean_int_add(v___x_291_, v_range_290_);
return v___x_292_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__4(void){
_start:
{
lean_object* v_range_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_range_293_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_294_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__3, &l_Std_Time_Month_Ordinal_may___closed__3_once, _init_l_Std_Time_Month_Ordinal_may___closed__3);
v___x_295_ = lean_int_emod(v___x_294_, v_range_293_);
return v___x_295_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__5(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_297_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__4, &l_Std_Time_Month_Ordinal_may___closed__4_once, _init_l_Std_Time_Month_Ordinal_may___closed__4);
v___x_298_ = lean_int_add(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may(void){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__5, &l_Std_Time_Month_Ordinal_may___closed__5_once, _init_l_Std_Time_Month_Ordinal_may___closed__5);
return v___x_299_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__0(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(6u);
v___x_301_ = lean_nat_to_int(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__1(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_303_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__0, &l_Std_Time_Month_Ordinal_june___closed__0_once, _init_l_Std_Time_Month_Ordinal_june___closed__0);
v___x_304_ = lean_int_sub(v___x_303_, v___x_302_);
return v___x_304_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__2(void){
_start:
{
lean_object* v_range_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_range_305_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_306_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__1, &l_Std_Time_Month_Ordinal_june___closed__1_once, _init_l_Std_Time_Month_Ordinal_june___closed__1);
v___x_307_ = lean_int_emod(v___x_306_, v_range_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__3(void){
_start:
{
lean_object* v_range_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_range_308_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_309_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__2, &l_Std_Time_Month_Ordinal_june___closed__2_once, _init_l_Std_Time_Month_Ordinal_june___closed__2);
v___x_310_ = lean_int_add(v___x_309_, v_range_308_);
return v___x_310_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__4(void){
_start:
{
lean_object* v_range_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_range_311_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_312_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__3, &l_Std_Time_Month_Ordinal_june___closed__3_once, _init_l_Std_Time_Month_Ordinal_june___closed__3);
v___x_313_ = lean_int_emod(v___x_312_, v_range_311_);
return v___x_313_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__5(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_315_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__4, &l_Std_Time_Month_Ordinal_june___closed__4_once, _init_l_Std_Time_Month_Ordinal_june___closed__4);
v___x_316_ = lean_int_add(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__5, &l_Std_Time_Month_Ordinal_june___closed__5_once, _init_l_Std_Time_Month_Ordinal_june___closed__5);
return v___x_317_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__0(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(7u);
v___x_319_ = lean_nat_to_int(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__1(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_321_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__0, &l_Std_Time_Month_Ordinal_july___closed__0_once, _init_l_Std_Time_Month_Ordinal_july___closed__0);
v___x_322_ = lean_int_sub(v___x_321_, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__2(void){
_start:
{
lean_object* v_range_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_range_323_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_324_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__1, &l_Std_Time_Month_Ordinal_july___closed__1_once, _init_l_Std_Time_Month_Ordinal_july___closed__1);
v___x_325_ = lean_int_emod(v___x_324_, v_range_323_);
return v___x_325_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__3(void){
_start:
{
lean_object* v_range_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_range_326_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_327_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__2, &l_Std_Time_Month_Ordinal_july___closed__2_once, _init_l_Std_Time_Month_Ordinal_july___closed__2);
v___x_328_ = lean_int_add(v___x_327_, v_range_326_);
return v___x_328_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__4(void){
_start:
{
lean_object* v_range_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_range_329_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_330_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__3, &l_Std_Time_Month_Ordinal_july___closed__3_once, _init_l_Std_Time_Month_Ordinal_july___closed__3);
v___x_331_ = lean_int_emod(v___x_330_, v_range_329_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__5(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_333_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__4, &l_Std_Time_Month_Ordinal_july___closed__4_once, _init_l_Std_Time_Month_Ordinal_july___closed__4);
v___x_334_ = lean_int_add(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__5, &l_Std_Time_Month_Ordinal_july___closed__5_once, _init_l_Std_Time_Month_Ordinal_july___closed__5);
return v___x_335_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__0(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(8u);
v___x_337_ = lean_nat_to_int(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__1(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_339_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__0, &l_Std_Time_Month_Ordinal_august___closed__0_once, _init_l_Std_Time_Month_Ordinal_august___closed__0);
v___x_340_ = lean_int_sub(v___x_339_, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__2(void){
_start:
{
lean_object* v_range_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_range_341_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_342_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__1, &l_Std_Time_Month_Ordinal_august___closed__1_once, _init_l_Std_Time_Month_Ordinal_august___closed__1);
v___x_343_ = lean_int_emod(v___x_342_, v_range_341_);
return v___x_343_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__3(void){
_start:
{
lean_object* v_range_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_range_344_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_345_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__2, &l_Std_Time_Month_Ordinal_august___closed__2_once, _init_l_Std_Time_Month_Ordinal_august___closed__2);
v___x_346_ = lean_int_add(v___x_345_, v_range_344_);
return v___x_346_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__4(void){
_start:
{
lean_object* v_range_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_range_347_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_348_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__3, &l_Std_Time_Month_Ordinal_august___closed__3_once, _init_l_Std_Time_Month_Ordinal_august___closed__3);
v___x_349_ = lean_int_emod(v___x_348_, v_range_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__5(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_351_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__4, &l_Std_Time_Month_Ordinal_august___closed__4_once, _init_l_Std_Time_Month_Ordinal_august___closed__4);
v___x_352_ = lean_int_add(v___x_351_, v___x_350_);
return v___x_352_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august(void){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__5, &l_Std_Time_Month_Ordinal_august___closed__5_once, _init_l_Std_Time_Month_Ordinal_august___closed__5);
return v___x_353_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__0(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(9u);
v___x_355_ = lean_nat_to_int(v___x_354_);
return v___x_355_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__1(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_357_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__0, &l_Std_Time_Month_Ordinal_september___closed__0_once, _init_l_Std_Time_Month_Ordinal_september___closed__0);
v___x_358_ = lean_int_sub(v___x_357_, v___x_356_);
return v___x_358_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__2(void){
_start:
{
lean_object* v_range_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_range_359_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_360_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__1, &l_Std_Time_Month_Ordinal_september___closed__1_once, _init_l_Std_Time_Month_Ordinal_september___closed__1);
v___x_361_ = lean_int_emod(v___x_360_, v_range_359_);
return v___x_361_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__3(void){
_start:
{
lean_object* v_range_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v_range_362_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_363_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__2, &l_Std_Time_Month_Ordinal_september___closed__2_once, _init_l_Std_Time_Month_Ordinal_september___closed__2);
v___x_364_ = lean_int_add(v___x_363_, v_range_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__4(void){
_start:
{
lean_object* v_range_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_range_365_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_366_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__3, &l_Std_Time_Month_Ordinal_september___closed__3_once, _init_l_Std_Time_Month_Ordinal_september___closed__3);
v___x_367_ = lean_int_emod(v___x_366_, v_range_365_);
return v___x_367_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__5(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_369_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__4, &l_Std_Time_Month_Ordinal_september___closed__4_once, _init_l_Std_Time_Month_Ordinal_september___closed__4);
v___x_370_ = lean_int_add(v___x_369_, v___x_368_);
return v___x_370_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__5, &l_Std_Time_Month_Ordinal_september___closed__5_once, _init_l_Std_Time_Month_Ordinal_september___closed__5);
return v___x_371_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__0(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_unsigned_to_nat(10u);
v___x_373_ = lean_nat_to_int(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_375_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__0, &l_Std_Time_Month_Ordinal_october___closed__0_once, _init_l_Std_Time_Month_Ordinal_october___closed__0);
v___x_376_ = lean_int_sub(v___x_375_, v___x_374_);
return v___x_376_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__2(void){
_start:
{
lean_object* v_range_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_range_377_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_378_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__1, &l_Std_Time_Month_Ordinal_october___closed__1_once, _init_l_Std_Time_Month_Ordinal_october___closed__1);
v___x_379_ = lean_int_emod(v___x_378_, v_range_377_);
return v___x_379_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__3(void){
_start:
{
lean_object* v_range_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_range_380_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_381_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__2, &l_Std_Time_Month_Ordinal_october___closed__2_once, _init_l_Std_Time_Month_Ordinal_october___closed__2);
v___x_382_ = lean_int_add(v___x_381_, v_range_380_);
return v___x_382_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__4(void){
_start:
{
lean_object* v_range_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_range_383_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_384_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__3, &l_Std_Time_Month_Ordinal_october___closed__3_once, _init_l_Std_Time_Month_Ordinal_october___closed__3);
v___x_385_ = lean_int_emod(v___x_384_, v_range_383_);
return v___x_385_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__5(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_387_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__4, &l_Std_Time_Month_Ordinal_october___closed__4_once, _init_l_Std_Time_Month_Ordinal_october___closed__4);
v___x_388_ = lean_int_add(v___x_387_, v___x_386_);
return v___x_388_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__5, &l_Std_Time_Month_Ordinal_october___closed__5_once, _init_l_Std_Time_Month_Ordinal_october___closed__5);
return v___x_389_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__0(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_391_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__1, &l_Std_Time_Month_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__1);
v___x_392_ = lean_int_sub(v___x_391_, v___x_390_);
return v___x_392_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__1(void){
_start:
{
lean_object* v_range_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_range_393_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_394_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__0, &l_Std_Time_Month_Ordinal_november___closed__0_once, _init_l_Std_Time_Month_Ordinal_november___closed__0);
v___x_395_ = lean_int_emod(v___x_394_, v_range_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__2(void){
_start:
{
lean_object* v_range_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_range_396_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_397_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__1, &l_Std_Time_Month_Ordinal_november___closed__1_once, _init_l_Std_Time_Month_Ordinal_november___closed__1);
v___x_398_ = lean_int_add(v___x_397_, v_range_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__3(void){
_start:
{
lean_object* v_range_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_range_399_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_400_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__2, &l_Std_Time_Month_Ordinal_november___closed__2_once, _init_l_Std_Time_Month_Ordinal_november___closed__2);
v___x_401_ = lean_int_emod(v___x_400_, v_range_399_);
return v___x_401_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__4(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_403_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__3, &l_Std_Time_Month_Ordinal_november___closed__3_once, _init_l_Std_Time_Month_Ordinal_november___closed__3);
v___x_404_ = lean_int_add(v___x_403_, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__4, &l_Std_Time_Month_Ordinal_november___closed__4_once, _init_l_Std_Time_Month_Ordinal_november___closed__4);
return v___x_405_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__0(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(12u);
v___x_407_ = lean_nat_to_int(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__1(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_408_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_409_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__0, &l_Std_Time_Month_Ordinal_december___closed__0_once, _init_l_Std_Time_Month_Ordinal_december___closed__0);
v___x_410_ = lean_int_sub(v___x_409_, v___x_408_);
return v___x_410_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__2(void){
_start:
{
lean_object* v_range_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_range_411_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_412_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__1, &l_Std_Time_Month_Ordinal_december___closed__1_once, _init_l_Std_Time_Month_Ordinal_december___closed__1);
v___x_413_ = lean_int_emod(v___x_412_, v_range_411_);
return v___x_413_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__3(void){
_start:
{
lean_object* v_range_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_range_414_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_415_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__2, &l_Std_Time_Month_Ordinal_december___closed__2_once, _init_l_Std_Time_Month_Ordinal_december___closed__2);
v___x_416_ = lean_int_add(v___x_415_, v_range_414_);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__4(void){
_start:
{
lean_object* v_range_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_range_417_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_418_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__3, &l_Std_Time_Month_Ordinal_december___closed__3_once, _init_l_Std_Time_Month_Ordinal_december___closed__3);
v___x_419_ = lean_int_emod(v___x_418_, v_range_417_);
return v___x_419_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__5(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_421_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__4, &l_Std_Time_Month_Ordinal_december___closed__4_once, _init_l_Std_Time_Month_Ordinal_december___closed__4);
v___x_422_ = lean_int_add(v___x_421_, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december(void){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__5, &l_Std_Time_Month_Ordinal_december___closed__5_once, _init_l_Std_Time_Month_Ordinal_december___closed__5);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset(lean_object* v_month_424_){
_start:
{
lean_inc(v_month_424_);
return v_month_424_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset___boxed(lean_object* v_month_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Std_Time_Month_Ordinal_toOffset(v_month_425_);
lean_dec(v_month_425_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg(lean_object* v_data_427_){
_start:
{
lean_inc(v_data_427_);
return v_data_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg___boxed(lean_object* v_data_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Std_Time_Month_Ordinal_ofInt___redArg(v_data_428_);
lean_dec(v_data_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt(lean_object* v_data_430_, lean_object* v_h_431_){
_start:
{
lean_inc(v_data_430_);
return v_data_430_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___boxed(lean_object* v_data_432_, lean_object* v_h_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Std_Time_Month_Ordinal_ofInt(v_data_432_, v_h_433_);
lean_dec(v_data_432_);
return v_res_434_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10));
v___x_462_ = l_Lean_mkAtom(v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_463_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12);
v___x_464_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_465_ = lean_array_push(v___x_464_, v___x_463_);
return v___x_465_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__16));
v___x_477_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_478_ = lean_array_push(v___x_477_, v___x_476_);
return v___x_478_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_479_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17);
v___x_480_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15));
v___x_481_ = lean_box(2);
v___x_482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_480_);
lean_ctor_set(v___x_482_, 2, v___x_479_);
return v___x_482_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18);
v___x_484_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13);
v___x_485_ = lean_array_push(v___x_484_, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_486_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19);
v___x_487_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11));
v___x_488_ = lean_box(2);
v___x_489_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
lean_ctor_set(v___x_489_, 1, v___x_487_);
lean_ctor_set(v___x_489_, 2, v___x_486_);
return v___x_489_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20);
v___x_491_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_492_ = lean_array_push(v___x_491_, v___x_490_);
return v___x_492_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21);
v___x_494_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9));
v___x_495_ = lean_box(2);
v___x_496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set(v___x_496_, 2, v___x_493_);
return v___x_496_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_497_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22);
v___x_498_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_499_ = lean_array_push(v___x_498_, v___x_497_);
return v___x_499_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_500_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23);
v___x_501_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7));
v___x_502_ = lean_box(2);
v___x_503_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___x_501_);
lean_ctor_set(v___x_503_, 2, v___x_500_);
return v___x_503_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24);
v___x_505_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_506_ = lean_array_push(v___x_505_, v___x_504_);
return v___x_506_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_507_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25);
v___x_508_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4));
v___x_509_ = lean_box(2);
v___x_510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
lean_ctor_set(v___x_510_, 1, v___x_508_);
lean_ctor_set(v___x_510_, 2, v___x_507_);
return v___x_510_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat___redArg(lean_object* v_data_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = lean_nat_to_int(v_data_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat(lean_object* v_data_514_, lean_object* v_h_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_nat_to_int(v_data_514_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat(lean_object* v_month_517_){
_start:
{
lean_object* v_intZero_518_; uint8_t v_isNeg_519_; lean_object* v_a_520_; 
v_intZero_518_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v_isNeg_519_ = lean_int_dec_lt(v_month_517_, v_intZero_518_);
v_a_520_ = lean_nat_abs(v_month_517_);
return v_a_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat___boxed(lean_object* v_month_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Std_Time_Month_Ordinal_toNat(v_month_521_);
lean_dec(v_month_521_);
return v_res_522_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_to_int(v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofFin(lean_object* v_data_525_){
_start:
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_dec_le(v___x_526_, v_data_525_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_dec(v_data_525_);
v___x_528_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofFin___closed__0, &l_Std_Time_Month_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Month_Ordinal_ofFin___closed__0);
return v___x_528_;
}
else
{
lean_object* v___x_529_; 
v___x_529_ = lean_nat_to_int(v_data_525_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__1(lean_object* v_a_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_nat_to_int(v_a_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__2(lean_object* v_a_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Rat_ofInt(v_a_532_);
return v___x_533_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_534_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(31u);
v___x_536_ = lean_nat_to_int(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__2(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(59u);
v___x_538_ = lean_nat_to_int(v___x_537_);
return v___x_538_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__3(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_unsigned_to_nat(90u);
v___x_540_ = lean_nat_to_int(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__4(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(120u);
v___x_542_ = lean_nat_to_int(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__5(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_unsigned_to_nat(151u);
v___x_544_ = lean_nat_to_int(v___x_543_);
return v___x_544_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__6(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(181u);
v___x_546_ = lean_nat_to_int(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__7(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_unsigned_to_nat(212u);
v___x_548_ = lean_nat_to_int(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__8(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(243u);
v___x_550_ = lean_nat_to_int(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__9(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(273u);
v___x_552_ = lean_nat_to_int(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__10(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(304u);
v___x_554_ = lean_nat_to_int(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__11(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(334u);
v___x_556_ = lean_nat_to_int(v___x_555_);
return v___x_556_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v_intZero_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v_daysAcc_582_; 
v___x_557_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__11, &l_Std_Time_Month_Ordinal_toSeconds___closed__11_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__11);
v___x_558_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__10, &l_Std_Time_Month_Ordinal_toSeconds___closed__10_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__10);
v___x_559_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__9, &l_Std_Time_Month_Ordinal_toSeconds___closed__9_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__9);
v___x_560_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__8, &l_Std_Time_Month_Ordinal_toSeconds___closed__8_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__8);
v___x_561_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__7, &l_Std_Time_Month_Ordinal_toSeconds___closed__7_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__7);
v___x_562_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__6, &l_Std_Time_Month_Ordinal_toSeconds___closed__6_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__6);
v___x_563_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__5, &l_Std_Time_Month_Ordinal_toSeconds___closed__5_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__5);
v___x_564_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__4, &l_Std_Time_Month_Ordinal_toSeconds___closed__4_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__4);
v___x_565_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__3, &l_Std_Time_Month_Ordinal_toSeconds___closed__3_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__3);
v___x_566_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__2, &l_Std_Time_Month_Ordinal_toSeconds___closed__2_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__2);
v___x_567_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__1, &l_Std_Time_Month_Ordinal_toSeconds___closed__1_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1);
v_intZero_568_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_569_ = lean_unsigned_to_nat(12u);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_569_);
v___x_571_ = lean_array_push(v___x_570_, v_intZero_568_);
v___x_572_ = lean_array_push(v___x_571_, v___x_567_);
v___x_573_ = lean_array_push(v___x_572_, v___x_566_);
v___x_574_ = lean_array_push(v___x_573_, v___x_565_);
v___x_575_ = lean_array_push(v___x_574_, v___x_564_);
v___x_576_ = lean_array_push(v___x_575_, v___x_563_);
v___x_577_ = lean_array_push(v___x_576_, v___x_562_);
v___x_578_ = lean_array_push(v___x_577_, v___x_561_);
v___x_579_ = lean_array_push(v___x_578_, v___x_560_);
v___x_580_ = lean_array_push(v___x_579_, v___x_559_);
v___x_581_ = lean_array_push(v___x_580_, v___x_558_);
v_daysAcc_582_ = lean_array_push(v___x_581_, v___x_557_);
return v_daysAcc_582_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__13(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(86400u);
v___x_584_ = lean_nat_to_int(v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds(uint8_t v_leap_585_, lean_object* v_month_586_){
_start:
{
lean_object* v_intZero_587_; uint8_t v_isNeg_588_; lean_object* v___x_589_; lean_object* v_a_590_; lean_object* v_daysAcc_591_; lean_object* v_days_592_; lean_object* v___x_593_; lean_object* v_time_594_; 
v_intZero_587_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v_isNeg_588_ = lean_int_dec_lt(v_month_586_, v_intZero_587_);
v___x_589_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__0, &l_Std_Time_Month_Ordinal_toSeconds___closed__0_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__0);
v_a_590_ = lean_nat_abs(v_month_586_);
v_daysAcc_591_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__12, &l_Std_Time_Month_Ordinal_toSeconds___closed__12_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12);
v_days_592_ = lean_array_get_borrowed(v___x_589_, v_daysAcc_591_, v_a_590_);
v___x_593_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__13, &l_Std_Time_Month_Ordinal_toSeconds___closed__13_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__13);
v_time_594_ = lean_int_mul(v_days_592_, v___x_593_);
if (v_leap_585_ == 0)
{
lean_dec(v_a_590_);
return v_time_594_;
}
else
{
lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_595_ = lean_unsigned_to_nat(2u);
v___x_596_ = lean_nat_dec_le(v___x_595_, v_a_590_);
lean_dec(v_a_590_);
if (v___x_596_ == 0)
{
return v_time_594_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = lean_int_add(v_time_594_, v___x_593_);
lean_dec(v_time_594_);
return v___x_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds___boxed(lean_object* v_leap_598_, lean_object* v_month_599_){
_start:
{
uint8_t v_leap_boxed_600_; lean_object* v_res_601_; 
v_leap_boxed_600_ = lean_unbox(v_leap_598_);
v_res_601_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_boxed_600_, v_month_599_);
lean_dec(v_month_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__0(lean_object* v_a_602_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_nat_to_int(v_a_602_);
v___x_604_ = l_Rat_ofInt(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(60u);
v___x_606_ = lean_nat_to_int(v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes(uint8_t v_leap_607_, lean_object* v_month_608_){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_607_, v_month_608_);
v___x_610_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toMinutes___closed__0, &l_Std_Time_Month_Ordinal_toMinutes___closed__0_once, _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0);
v___x_611_ = lean_int_div(v___x_609_, v___x_610_);
lean_dec(v___x_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes___boxed(lean_object* v_leap_612_, lean_object* v_month_613_){
_start:
{
uint8_t v_leap_boxed_614_; lean_object* v_res_615_; 
v_leap_boxed_614_ = lean_unbox(v_leap_612_);
v_res_615_ = l_Std_Time_Month_Ordinal_toMinutes(v_leap_boxed_614_, v_month_613_);
lean_dec(v_month_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours(uint8_t v_leap_616_, lean_object* v_month_617_){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_618_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_616_, v_month_617_);
v___x_619_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toMinutes___closed__0, &l_Std_Time_Month_Ordinal_toMinutes___closed__0_once, _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0);
v___x_620_ = lean_int_div(v___x_618_, v___x_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_int_div(v___x_620_, v___x_619_);
lean_dec(v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours___boxed(lean_object* v_leap_622_, lean_object* v_month_623_){
_start:
{
uint8_t v_leap_boxed_624_; lean_object* v_res_625_; 
v_leap_boxed_624_ = lean_unbox(v_leap_622_);
v_res_625_ = l_Std_Time_Month_Ordinal_toHours(v_leap_boxed_624_, v_month_623_);
lean_dec(v_month_623_);
return v_res_625_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__0(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = l_Rat_instNatCast___lam__0(v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__1(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_unsigned_to_nat(86400u);
v___x_629_ = l_Rat_instNatCast___lam__0(v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__2(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v_ratio_632_; 
v___x_630_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__1, &l_Std_Time_Month_Ordinal_toDays___closed__1_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__1);
v___x_631_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__0, &l_Std_Time_Month_Ordinal_toDays___closed__0_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__0);
v_ratio_632_ = l_Rat_div(v___x_631_, v___x_630_);
return v_ratio_632_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays(uint8_t v_leap_633_, lean_object* v_month_634_){
_start:
{
lean_object* v_ratio_635_; lean_object* v_num_636_; lean_object* v_den_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_ratio_635_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__2, &l_Std_Time_Month_Ordinal_toDays___closed__2_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__2);
v_num_636_ = lean_ctor_get(v_ratio_635_, 0);
v_den_637_ = lean_ctor_get(v_ratio_635_, 1);
v___x_638_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_633_, v_month_634_);
v___x_639_ = lean_int_mul(v___x_638_, v_num_636_);
lean_dec(v___x_638_);
lean_inc(v_den_637_);
v___x_640_ = lean_nat_to_int(v_den_637_);
v___x_641_ = lean_int_ediv(v___x_639_, v___x_640_);
lean_dec(v___x_640_);
lean_dec(v___x_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays___boxed(lean_object* v_leap_642_, lean_object* v_month_643_){
_start:
{
uint8_t v_leap_boxed_644_; lean_object* v_res_645_; 
v_leap_boxed_644_ = lean_unbox(v_leap_642_);
v_res_645_ = l_Std_Time_Month_Ordinal_toDays(v_leap_boxed_644_, v_month_643_);
lean_dec(v_month_643_);
return v_res_645_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(30u);
v___x_647_ = lean_nat_to_int(v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_648_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0);
v___x_649_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_650_ = lean_int_add(v___x_649_, v___x_648_);
return v___x_650_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_unsigned_to_nat(31u);
v___x_652_ = lean_nat_to_int(v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_654_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1);
v___x_655_ = lean_int_sub(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v_range_658_; 
v___x_656_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_657_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3);
v_range_658_ = lean_int_add(v___x_657_, v___x_656_);
return v_range_658_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_660_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2);
v___x_661_ = lean_int_sub(v___x_660_, v___x_659_);
return v___x_661_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6(void){
_start:
{
lean_object* v_range_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v_range_662_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_663_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5);
v___x_664_ = lean_int_emod(v___x_663_, v_range_662_);
return v___x_664_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7(void){
_start:
{
lean_object* v_range_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_range_665_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_666_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6);
v___x_667_ = lean_int_add(v___x_666_, v_range_665_);
return v___x_667_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8(void){
_start:
{
lean_object* v_range_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_range_668_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_669_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7);
v___x_670_ = lean_int_emod(v___x_669_, v_range_668_);
return v___x_670_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_672_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8);
v___x_673_ = lean_int_add(v___x_672_, v___x_671_);
return v___x_673_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_unsigned_to_nat(28u);
v___x_675_ = lean_nat_to_int(v___x_674_);
return v___x_675_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_677_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10);
v___x_678_ = lean_int_sub(v___x_677_, v___x_676_);
return v___x_678_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12(void){
_start:
{
lean_object* v_range_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v_range_679_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_680_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11);
v___x_681_ = lean_int_emod(v___x_680_, v_range_679_);
return v___x_681_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13(void){
_start:
{
lean_object* v_range_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v_range_682_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_683_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12);
v___x_684_ = lean_int_add(v___x_683_, v_range_682_);
return v___x_684_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14(void){
_start:
{
lean_object* v_range_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_range_685_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_686_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13);
v___x_687_ = lean_int_emod(v___x_686_, v_range_685_);
return v___x_687_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_689_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14);
v___x_690_ = lean_int_add(v___x_689_, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_692_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0);
v___x_693_ = lean_int_sub(v___x_692_, v___x_691_);
return v___x_693_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17(void){
_start:
{
lean_object* v_range_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_range_694_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_695_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16);
v___x_696_ = lean_int_emod(v___x_695_, v_range_694_);
return v___x_696_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18(void){
_start:
{
lean_object* v_range_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_range_697_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_698_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17);
v___x_699_ = lean_int_add(v___x_698_, v_range_697_);
return v___x_699_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19(void){
_start:
{
lean_object* v_range_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v_range_700_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_701_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18);
v___x_702_ = lean_int_emod(v___x_701_, v_range_700_);
return v___x_702_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_704_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19);
v___x_705_ = lean_int_add(v___x_704_, v___x_703_);
return v___x_705_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_706_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20);
v___x_707_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15);
v___x_708_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9);
v___x_709_ = lean_unsigned_to_nat(12u);
v___x_710_ = lean_mk_empty_array_with_capacity(v___x_709_);
v___x_711_ = lean_array_push(v___x_710_, v___x_708_);
v___x_712_ = lean_array_push(v___x_711_, v___x_707_);
v___x_713_ = lean_array_push(v___x_712_, v___x_708_);
v___x_714_ = lean_array_push(v___x_713_, v___x_706_);
v___x_715_ = lean_array_push(v___x_714_, v___x_708_);
v___x_716_ = lean_array_push(v___x_715_, v___x_706_);
v___x_717_ = lean_array_push(v___x_716_, v___x_708_);
v___x_718_ = lean_array_push(v___x_717_, v___x_708_);
v___x_719_ = lean_array_push(v___x_718_, v___x_706_);
v___x_720_ = lean_array_push(v___x_719_, v___x_708_);
v___x_721_ = lean_array_push(v___x_720_, v___x_706_);
v___x_722_ = lean_array_push(v___x_721_, v___x_708_);
return v___x_722_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap(void){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__21);
return v___x_723_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = lean_nat_to_int(v___x_724_);
return v___x_725_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(59u);
v___x_727_ = lean_nat_to_int(v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(90u);
v___x_729_ = lean_nat_to_int(v___x_728_);
return v___x_729_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_unsigned_to_nat(120u);
v___x_731_ = lean_nat_to_int(v___x_730_);
return v___x_731_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_unsigned_to_nat(151u);
v___x_733_ = lean_nat_to_int(v___x_732_);
return v___x_733_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_unsigned_to_nat(181u);
v___x_735_ = lean_nat_to_int(v___x_734_);
return v___x_735_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_unsigned_to_nat(212u);
v___x_737_ = lean_nat_to_int(v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_unsigned_to_nat(243u);
v___x_739_ = lean_nat_to_int(v___x_738_);
return v___x_739_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = lean_unsigned_to_nat(273u);
v___x_741_ = lean_nat_to_int(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_unsigned_to_nat(304u);
v___x_743_ = lean_nat_to_int(v___x_742_);
return v___x_743_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_unsigned_to_nat(334u);
v___x_745_ = lean_nat_to_int(v___x_744_);
return v___x_745_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_746_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10);
v___x_747_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9);
v___x_748_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8);
v___x_749_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7);
v___x_750_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6);
v___x_751_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5);
v___x_752_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4);
v___x_753_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3);
v___x_754_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2);
v___x_755_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1);
v___x_756_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2);
v___x_757_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0);
v___x_758_ = lean_unsigned_to_nat(12u);
v___x_759_ = lean_mk_empty_array_with_capacity(v___x_758_);
v___x_760_ = lean_array_push(v___x_759_, v___x_757_);
v___x_761_ = lean_array_push(v___x_760_, v___x_756_);
v___x_762_ = lean_array_push(v___x_761_, v___x_755_);
v___x_763_ = lean_array_push(v___x_762_, v___x_754_);
v___x_764_ = lean_array_push(v___x_763_, v___x_753_);
v___x_765_ = lean_array_push(v___x_764_, v___x_752_);
v___x_766_ = lean_array_push(v___x_765_, v___x_751_);
v___x_767_ = lean_array_push(v___x_766_, v___x_750_);
v___x_768_ = lean_array_push(v___x_767_, v___x_749_);
v___x_769_ = lean_array_push(v___x_768_, v___x_748_);
v___x_770_ = lean_array_push(v___x_769_, v___x_747_);
v___x_771_ = lean_array_push(v___x_770_, v___x_746_);
return v___x_771_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11);
return v___x_772_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__0(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_unsigned_to_nat(2u);
v___x_774_ = lean_nat_to_int(v___x_773_);
return v___x_774_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__1(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_unsigned_to_nat(30u);
v___x_776_ = lean_nat_to_int(v___x_775_);
return v___x_776_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__2(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__1, &l_Std_Time_Month_Ordinal_days___closed__1_once, _init_l_Std_Time_Month_Ordinal_days___closed__1);
v___x_778_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_779_ = lean_int_add(v___x_778_, v___x_777_);
return v___x_779_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__3(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_780_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_781_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__2, &l_Std_Time_Month_Ordinal_days___closed__2_once, _init_l_Std_Time_Month_Ordinal_days___closed__2);
v___x_782_ = lean_int_sub(v___x_781_, v___x_780_);
return v___x_782_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__4(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v_range_785_; 
v___x_783_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_784_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__3, &l_Std_Time_Month_Ordinal_days___closed__3_once, _init_l_Std_Time_Month_Ordinal_days___closed__3);
v_range_785_ = lean_int_add(v___x_784_, v___x_783_);
return v_range_785_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__5(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_787_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__1, &l_Std_Time_Month_Ordinal_toSeconds___closed__1_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1);
v___x_788_ = lean_int_sub(v___x_787_, v___x_786_);
return v___x_788_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__6(void){
_start:
{
lean_object* v_range_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_range_789_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_790_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__5, &l_Std_Time_Month_Ordinal_days___closed__5_once, _init_l_Std_Time_Month_Ordinal_days___closed__5);
v___x_791_ = lean_int_emod(v___x_790_, v_range_789_);
return v___x_791_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__7(void){
_start:
{
lean_object* v_range_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v_range_792_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_793_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__6, &l_Std_Time_Month_Ordinal_days___closed__6_once, _init_l_Std_Time_Month_Ordinal_days___closed__6);
v___x_794_ = lean_int_add(v___x_793_, v_range_792_);
return v___x_794_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__8(void){
_start:
{
lean_object* v_range_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_range_795_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_796_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__7, &l_Std_Time_Month_Ordinal_days___closed__7_once, _init_l_Std_Time_Month_Ordinal_days___closed__7);
v___x_797_ = lean_int_emod(v___x_796_, v_range_795_);
return v___x_797_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__9(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_799_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__8, &l_Std_Time_Month_Ordinal_days___closed__8_once, _init_l_Std_Time_Month_Ordinal_days___closed__8);
v___x_800_ = lean_int_add(v___x_799_, v___x_798_);
return v___x_800_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__10(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_unsigned_to_nat(28u);
v___x_802_ = lean_nat_to_int(v___x_801_);
return v___x_802_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__11(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_804_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__10, &l_Std_Time_Month_Ordinal_days___closed__10_once, _init_l_Std_Time_Month_Ordinal_days___closed__10);
v___x_805_ = lean_int_sub(v___x_804_, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__12(void){
_start:
{
lean_object* v_range_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_range_806_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_807_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__11, &l_Std_Time_Month_Ordinal_days___closed__11_once, _init_l_Std_Time_Month_Ordinal_days___closed__11);
v___x_808_ = lean_int_emod(v___x_807_, v_range_806_);
return v___x_808_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__13(void){
_start:
{
lean_object* v_range_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_range_809_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_810_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__12, &l_Std_Time_Month_Ordinal_days___closed__12_once, _init_l_Std_Time_Month_Ordinal_days___closed__12);
v___x_811_ = lean_int_add(v___x_810_, v_range_809_);
return v___x_811_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__14(void){
_start:
{
lean_object* v_range_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_range_812_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_813_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__13, &l_Std_Time_Month_Ordinal_days___closed__13_once, _init_l_Std_Time_Month_Ordinal_days___closed__13);
v___x_814_ = lean_int_emod(v___x_813_, v_range_812_);
return v___x_814_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__15(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_816_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__14, &l_Std_Time_Month_Ordinal_days___closed__14_once, _init_l_Std_Time_Month_Ordinal_days___closed__14);
v___x_817_ = lean_int_add(v___x_816_, v___x_815_);
return v___x_817_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__16(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_819_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__1, &l_Std_Time_Month_Ordinal_days___closed__1_once, _init_l_Std_Time_Month_Ordinal_days___closed__1);
v___x_820_ = lean_int_sub(v___x_819_, v___x_818_);
return v___x_820_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__17(void){
_start:
{
lean_object* v_range_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_range_821_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_822_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__16, &l_Std_Time_Month_Ordinal_days___closed__16_once, _init_l_Std_Time_Month_Ordinal_days___closed__16);
v___x_823_ = lean_int_emod(v___x_822_, v_range_821_);
return v___x_823_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__18(void){
_start:
{
lean_object* v_range_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_range_824_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_825_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__17, &l_Std_Time_Month_Ordinal_days___closed__17_once, _init_l_Std_Time_Month_Ordinal_days___closed__17);
v___x_826_ = lean_int_add(v___x_825_, v_range_824_);
return v___x_826_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__19(void){
_start:
{
lean_object* v_range_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v_range_827_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_828_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__18, &l_Std_Time_Month_Ordinal_days___closed__18_once, _init_l_Std_Time_Month_Ordinal_days___closed__18);
v___x_829_ = lean_int_emod(v___x_828_, v_range_827_);
return v___x_829_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__20(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_831_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__19, &l_Std_Time_Month_Ordinal_days___closed__19_once, _init_l_Std_Time_Month_Ordinal_days___closed__19);
v___x_832_ = lean_int_add(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__21(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_833_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__20, &l_Std_Time_Month_Ordinal_days___closed__20_once, _init_l_Std_Time_Month_Ordinal_days___closed__20);
v___x_834_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__15, &l_Std_Time_Month_Ordinal_days___closed__15_once, _init_l_Std_Time_Month_Ordinal_days___closed__15);
v___x_835_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__9, &l_Std_Time_Month_Ordinal_days___closed__9_once, _init_l_Std_Time_Month_Ordinal_days___closed__9);
v___x_836_ = lean_unsigned_to_nat(12u);
v___x_837_ = lean_mk_empty_array_with_capacity(v___x_836_);
v___x_838_ = lean_array_push(v___x_837_, v___x_835_);
v___x_839_ = lean_array_push(v___x_838_, v___x_834_);
v___x_840_ = lean_array_push(v___x_839_, v___x_835_);
v___x_841_ = lean_array_push(v___x_840_, v___x_833_);
v___x_842_ = lean_array_push(v___x_841_, v___x_835_);
v___x_843_ = lean_array_push(v___x_842_, v___x_833_);
v___x_844_ = lean_array_push(v___x_843_, v___x_835_);
v___x_845_ = lean_array_push(v___x_844_, v___x_835_);
v___x_846_ = lean_array_push(v___x_845_, v___x_833_);
v___x_847_ = lean_array_push(v___x_846_, v___x_835_);
v___x_848_ = lean_array_push(v___x_847_, v___x_833_);
v___x_849_ = lean_array_push(v___x_848_, v___x_835_);
return v___x_849_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__22(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_unsigned_to_nat(29u);
v___x_851_ = lean_nat_to_int(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__23(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_852_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_853_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__22, &l_Std_Time_Month_Ordinal_days___closed__22_once, _init_l_Std_Time_Month_Ordinal_days___closed__22);
v___x_854_ = lean_int_sub(v___x_853_, v___x_852_);
return v___x_854_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__24(void){
_start:
{
lean_object* v_range_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_range_855_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_856_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__23, &l_Std_Time_Month_Ordinal_days___closed__23_once, _init_l_Std_Time_Month_Ordinal_days___closed__23);
v___x_857_ = lean_int_emod(v___x_856_, v_range_855_);
return v___x_857_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__25(void){
_start:
{
lean_object* v_range_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_range_858_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_859_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__24, &l_Std_Time_Month_Ordinal_days___closed__24_once, _init_l_Std_Time_Month_Ordinal_days___closed__24);
v___x_860_ = lean_int_add(v___x_859_, v_range_858_);
return v___x_860_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__26(void){
_start:
{
lean_object* v_range_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_range_861_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_862_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__25, &l_Std_Time_Month_Ordinal_days___closed__25_once, _init_l_Std_Time_Month_Ordinal_days___closed__25);
v___x_863_ = lean_int_emod(v___x_862_, v_range_861_);
return v___x_863_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__27(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_865_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__26, &l_Std_Time_Month_Ordinal_days___closed__26_once, _init_l_Std_Time_Month_Ordinal_days___closed__26);
v___x_866_ = lean_int_add(v___x_865_, v___x_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days(uint8_t v_leap_867_, lean_object* v_month_868_){
_start:
{
lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_869_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__0, &l_Std_Time_Month_Ordinal_days___closed__0_once, _init_l_Std_Time_Month_Ordinal_days___closed__0);
v___x_870_ = lean_int_dec_eq(v_month_868_, v___x_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_871_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__21, &l_Std_Time_Month_Ordinal_days___closed__21_once, _init_l_Std_Time_Month_Ordinal_days___closed__21);
v___x_872_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_873_ = lean_int_add(v_month_868_, v___x_872_);
v___x_874_ = l_Int_toNat(v___x_873_);
lean_dec(v___x_873_);
v___x_875_ = lean_array_fget_borrowed(v___x_871_, v___x_874_);
lean_dec(v___x_874_);
lean_inc(v___x_875_);
return v___x_875_;
}
else
{
if (v_leap_867_ == 0)
{
lean_object* v___x_876_; 
v___x_876_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__15, &l_Std_Time_Month_Ordinal_days___closed__15_once, _init_l_Std_Time_Month_Ordinal_days___closed__15);
return v___x_876_;
}
else
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__27, &l_Std_Time_Month_Ordinal_days___closed__27_once, _init_l_Std_Time_Month_Ordinal_days___closed__27);
return v___x_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days___boxed(lean_object* v_leap_878_, lean_object* v_month_879_){
_start:
{
uint8_t v_leap_boxed_880_; lean_object* v_res_881_; 
v_leap_boxed_880_ = lean_unbox(v_leap_878_);
v_res_881_ = l_Std_Time_Month_Ordinal_days(v_leap_boxed_880_, v_month_879_);
lean_dec(v_month_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays(uint8_t v_leap_882_, lean_object* v_month_883_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_884_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_885_ = lean_unsigned_to_nat(12u);
v___x_886_ = lean_mk_empty_array_with_capacity(v___x_885_);
lean_dec_ref(v___x_886_);
v___x_887_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__12, &l_Std_Time_Month_Ordinal_toSeconds___closed__12_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12);
v___x_888_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_889_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_890_ = lean_int_add(v_month_883_, v___x_889_);
v___x_891_ = l_Int_toNat(v___x_890_);
lean_dec(v___x_890_);
v___x_892_ = lean_array_fget_borrowed(v___x_887_, v___x_891_);
lean_dec(v___x_891_);
if (v_leap_882_ == 0)
{
lean_object* v___x_893_; 
v___x_893_ = lean_int_add(v___x_892_, v___x_884_);
return v___x_893_;
}
else
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__0, &l_Std_Time_Month_Ordinal_days___closed__0_once, _init_l_Std_Time_Month_Ordinal_days___closed__0);
v___x_895_ = lean_int_dec_lt(v___x_894_, v_month_883_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
v___x_896_ = lean_int_add(v___x_892_, v___x_884_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; 
v___x_897_ = lean_int_add(v___x_892_, v___x_888_);
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays___boxed(lean_object* v_leap_898_, lean_object* v_month_899_){
_start:
{
uint8_t v_leap_boxed_900_; lean_object* v_res_901_; 
v_leap_boxed_900_ = lean_unbox(v_leap_898_);
v_res_901_ = l_Std_Time_Month_Ordinal_cumulativeDays(v_leap_boxed_900_, v_month_899_);
lean_dec(v_month_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay(uint8_t v_leap_902_, lean_object* v_month_903_, lean_object* v_day_904_){
_start:
{
lean_object* v_max_905_; uint8_t v___x_906_; 
v_max_905_ = l_Std_Time_Month_Ordinal_days(v_leap_902_, v_month_903_);
v___x_906_ = lean_int_dec_lt(v_max_905_, v_day_904_);
if (v___x_906_ == 0)
{
lean_dec(v_max_905_);
lean_inc(v_day_904_);
return v_day_904_;
}
else
{
return v_max_905_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay___boxed(lean_object* v_leap_907_, lean_object* v_month_908_, lean_object* v_day_909_){
_start:
{
uint8_t v_leap_boxed_910_; lean_object* v_res_911_; 
v_leap_boxed_910_ = lean_unbox(v_leap_907_);
v_res_911_ = l_Std_Time_Month_Ordinal_clipDay(v_leap_boxed_910_, v_month_908_, v_day_909_);
lean_dec(v_day_909_);
lean_dec(v_month_908_);
return v_res_911_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Fin_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_Unit_Month(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Fin_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Month_instLEOrdinal = _init_l_Std_Time_Month_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Month_instLEOrdinal);
l_Std_Time_Month_instLTOrdinal = _init_l_Std_Time_Month_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Month_instLTOrdinal);
l_Std_Time_Month_instInhabitedOrdinal = _init_l_Std_Time_Month_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Month_instInhabitedOrdinal);
l_Std_Time_Month_instInhabitedOffset = _init_l_Std_Time_Month_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Month_instInhabitedOffset);
l_Std_Time_Month_instLEOffset = _init_l_Std_Time_Month_instLEOffset();
lean_mark_persistent(l_Std_Time_Month_instLEOffset);
l_Std_Time_Month_instLTOffset = _init_l_Std_Time_Month_instLTOffset();
lean_mark_persistent(l_Std_Time_Month_instLTOffset);
l_Std_Time_Month_instLTQuarter = _init_l_Std_Time_Month_instLTQuarter();
lean_mark_persistent(l_Std_Time_Month_instLTQuarter);
l_Std_Time_Month_instLEQuarter = _init_l_Std_Time_Month_instLEQuarter();
lean_mark_persistent(l_Std_Time_Month_instLEQuarter);
l_Std_Time_Month_instInhabitedQuarter = _init_l_Std_Time_Month_instInhabitedQuarter();
lean_mark_persistent(l_Std_Time_Month_instInhabitedQuarter);
l_Std_Time_Month_Ordinal_january = _init_l_Std_Time_Month_Ordinal_january();
lean_mark_persistent(l_Std_Time_Month_Ordinal_january);
l_Std_Time_Month_Ordinal_february = _init_l_Std_Time_Month_Ordinal_february();
lean_mark_persistent(l_Std_Time_Month_Ordinal_february);
l_Std_Time_Month_Ordinal_march = _init_l_Std_Time_Month_Ordinal_march();
lean_mark_persistent(l_Std_Time_Month_Ordinal_march);
l_Std_Time_Month_Ordinal_april = _init_l_Std_Time_Month_Ordinal_april();
lean_mark_persistent(l_Std_Time_Month_Ordinal_april);
l_Std_Time_Month_Ordinal_may = _init_l_Std_Time_Month_Ordinal_may();
lean_mark_persistent(l_Std_Time_Month_Ordinal_may);
l_Std_Time_Month_Ordinal_june = _init_l_Std_Time_Month_Ordinal_june();
lean_mark_persistent(l_Std_Time_Month_Ordinal_june);
l_Std_Time_Month_Ordinal_july = _init_l_Std_Time_Month_Ordinal_july();
lean_mark_persistent(l_Std_Time_Month_Ordinal_july);
l_Std_Time_Month_Ordinal_august = _init_l_Std_Time_Month_Ordinal_august();
lean_mark_persistent(l_Std_Time_Month_Ordinal_august);
l_Std_Time_Month_Ordinal_september = _init_l_Std_Time_Month_Ordinal_september();
lean_mark_persistent(l_Std_Time_Month_Ordinal_september);
l_Std_Time_Month_Ordinal_october = _init_l_Std_Time_Month_Ordinal_october();
lean_mark_persistent(l_Std_Time_Month_Ordinal_october);
l_Std_Time_Month_Ordinal_november = _init_l_Std_Time_Month_Ordinal_november();
lean_mark_persistent(l_Std_Time_Month_Ordinal_november);
l_Std_Time_Month_Ordinal_december = _init_l_Std_Time_Month_Ordinal_december();
lean_mark_persistent(l_Std_Time_Month_Ordinal_december);
l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap = _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap();
lean_mark_persistent(l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap);
l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes = _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes();
lean_mark_persistent(l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_Unit_Month(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Time_Month_Ordinal_ofNat___auto__1 = _init_l_Std_Time_Month_Ordinal_ofNat___auto__1();
lean_mark_persistent(l_Std_Time_Month_Ordinal_ofNat___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* initialize_Init_Data_Fin_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Month(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Fin_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_Unit_Month(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_Unit_Month(builtin);
}
#ifdef __cplusplus
}
#endif
