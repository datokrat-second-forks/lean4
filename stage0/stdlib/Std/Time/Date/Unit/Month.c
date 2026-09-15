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
extern lean_object* l_Std_Time_Day_Ordinal_equiv;
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_instNatCast___lam__0(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Month_Ordinal_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_Ordinal_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_Ordinal_equiv___closed__0 = (const lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Month_Ordinal_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__0_value),((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Month_Ordinal_equiv___closed__1 = (const lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_Ordinal_equiv = (const lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value;
static lean_once_cell_t l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value)} };
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
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value)} };
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
LEAN_EXPORT const lean_object* l_Std_Time_Month_Offset_equiv = (const lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value;
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
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Month_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Month_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Month_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instOrdOffset = (const lean_object*)&l_Std_Time_Month_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Month_Quarter_equiv = (const lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value;
static const lean_closure_object l_Std_Time_Month_instReprQuarter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Month_instReprQuarter___closed__0 = (const lean_object*)&l_Std_Time_Month_instReprQuarter___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instReprQuarter = (const lean_object*)&l_Std_Time_Month_instReprQuarter___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqQuarter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqQuarter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Month_instLTQuarter;
LEAN_EXPORT lean_object* l_Std_Time_Month_instLEQuarter;
static const lean_closure_object l_Std_Time_Month_instOrdQuarter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Month_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Month_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Month_instOrdQuarter___closed__0 = (const lean_object*)&l_Std_Time_Month_instOrdQuarter___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Month_instOrdQuarter = (const lean_object*)&l_Std_Time_Month_instOrdQuarter___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_equiv___lam__0(lean_object* v___y_7_){
_start:
{
lean_inc(v___y_7_);
return v___y_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_equiv___lam__0___boxed(lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Month_Ordinal_equiv___lam__0(v___y_8_);
lean_dec(v___y_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0(lean_object* v___x_16_, lean_object* v_x_17_, lean_object* v_prec_18_){
_start:
{
lean_object* v_invFun_19_; lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_invFun_19_ = lean_ctor_get(v___x_16_, 1);
lean_inc(v_invFun_19_);
lean_dec_ref(v___x_16_);
v___x_20_ = lean_apply_1(v_invFun_19_, v_x_17_);
v___x_21_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
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
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOrdinal___lam__0___boxed(lean_object* v___x_28_, lean_object* v_x_29_, lean_object* v_prec_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Time_Month_instReprOrdinal___lam__0(v___x_28_, v_x_29_, v_prec_30_);
lean_dec(v_prec_30_);
return v_res_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOrdinal(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
lean_object* v___x_37_; lean_object* v_invFun_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_37_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Month_instDecidableEqOrdinal(v_a_42_, v_b_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEOrdinal(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTOrdinal(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLEOrdinal(lean_object* v_a_48_, lean_object* v_b_49_){
_start:
{
lean_object* v___x_50_; lean_object* v_invFun_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_50_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLEOrdinal___boxed(lean_object* v_a_55_, lean_object* v_b_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l_Std_Time_Month_instDecidableLEOrdinal(v_a_55_, v_b_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLTOrdinal(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
lean_object* v___x_61_; lean_object* v_invFun_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_61_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLTOrdinal___boxed(lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Std_Time_Month_instDecidableLTOrdinal(v_a_66_, v_b_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOrdinal___lam__0(lean_object* v___x_70_, lean_object* v_x_71_, lean_object* v_y_72_){
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
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOrdinal___lam__0___boxed(lean_object* v___x_81_, lean_object* v_x_82_, lean_object* v_y_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Std_Time_Month_instOrdOrdinal___lam__0(v___x_81_, v_x_82_, v_y_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val(lean_object* v_ordinal_89_){
_start:
{
lean_inc(v_ordinal_89_);
return v_ordinal_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_val___boxed(lean_object* v_ordinal_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Time_Month_Ordinal_val(v_ordinal_90_);
lean_dec(v_ordinal_90_);
return v_res_91_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(11u);
v___x_95_ = lean_nat_to_int(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__1, &l_Std_Time_Month_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__1);
v___x_97_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_98_ = lean_int_add(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_100_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__2, &l_Std_Time_Month_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__2);
v___x_101_ = lean_int_sub(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_range_104_; 
v___x_102_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_103_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__3, &l_Std_Time_Month_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__3);
v_range_104_ = lean_int_add(v___x_103_, v___x_102_);
return v_range_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOrdinal(lean_object* v_n_105_){
_start:
{
lean_object* v___x_106_; lean_object* v_toFun_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_range_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_106_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_107_ = lean_ctor_get(v___x_106_, 0);
v___x_108_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_109_ = lean_nat_to_int(v_n_105_);
v_range_110_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_111_ = lean_int_sub(v___x_109_, v___x_108_);
lean_dec(v___x_109_);
v___x_112_ = lean_int_emod(v___x_111_, v_range_110_);
lean_dec(v___x_111_);
v___x_113_ = lean_int_add(v___x_112_, v_range_110_);
lean_dec(v___x_112_);
v___x_114_ = lean_int_emod(v___x_113_, v_range_110_);
lean_dec(v___x_113_);
v___x_115_ = lean_int_add(v___x_114_, v___x_108_);
lean_dec(v___x_114_);
lean_inc(v_toFun_107_);
v___x_116_ = lean_apply_1(v_toFun_107_, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_118_ = lean_int_sub(v___x_117_, v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_range_119_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_120_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__0, &l_Std_Time_Month_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0);
v___x_121_ = lean_int_emod(v___x_120_, v_range_119_);
return v___x_121_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_range_122_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_123_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__1, &l_Std_Time_Month_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__1);
v___x_124_ = lean_int_add(v___x_123_, v_range_122_);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_range_125_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_126_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__2, &l_Std_Time_Month_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__2);
v___x_127_ = lean_int_emod(v___x_126_, v_range_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_129_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__3, &l_Std_Time_Month_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__3);
v___x_130_ = lean_int_add(v___x_129_, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_131_; lean_object* v_toFun_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_131_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_132_ = lean_ctor_get(v___x_131_, 0);
v___x_133_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__4, &l_Std_Time_Month_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_132_);
v___x_134_ = lean_apply_1(v_toFun_132_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk(lean_object* v_toInt_135_){
_start:
{
lean_inc(v_toInt_135_);
return v_toInt_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_mk___boxed(lean_object* v_toInt_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Month_Offset_mk(v_toInt_136_);
lean_dec(v_toInt_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt(lean_object* v_self_138_){
_start:
{
lean_inc(v_self_138_);
return v_self_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_toInt___boxed(lean_object* v_self_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_Time_Month_Offset_toInt(v_self_139_);
lean_dec(v_self_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0(lean_object* v_offset_142_, lean_object* v_prec_143_){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_145_ = lean_int_dec_lt(v_offset_142_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = l_Int_repr(v_offset_142_);
v___x_147_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = l_Int_repr(v_offset_142_);
v___x_149_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
v___x_150_ = l_Repr_addAppParen(v___x_149_, v_prec_143_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instReprOffset___lam__0___boxed(lean_object* v_offset_151_, lean_object* v_prec_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Std_Time_Month_instReprOffset___lam__0(v_offset_151_, v_prec_152_);
lean_dec(v_prec_152_);
lean_dec(v_offset_151_);
return v_res_153_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedOffset(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
return v___x_158_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqOffset(lean_object* v_x_159_, lean_object* v_y_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = lean_int_dec_eq(v_x_159_, v_y_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqOffset___boxed(lean_object* v_x_162_, lean_object* v_y_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_Std_Time_Month_instDecidableEqOffset(v_x_162_, v_y_163_);
lean_dec(v_y_163_);
lean_dec(v_x_162_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEOffset(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTOffset(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instOrdOffset___lam__0(lean_object* v_x_178_, lean_object* v_y_179_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = lean_int_dec_lt(v_x_178_, v_y_179_);
if (v___x_180_ == 0)
{
uint8_t v___x_181_; 
v___x_181_ = lean_int_dec_eq(v_x_178_, v_y_179_);
if (v___x_181_ == 0)
{
uint8_t v___x_182_; 
v___x_182_ = 2;
return v___x_182_;
}
else
{
uint8_t v___x_183_; 
v___x_183_ = 1;
return v___x_183_;
}
}
else
{
uint8_t v___x_184_; 
v___x_184_ = 0;
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOrdOffset___lam__0___boxed(lean_object* v_x_185_, lean_object* v_y_186_){
_start:
{
uint8_t v_res_187_; lean_object* v_r_188_; 
v_res_187_ = l_Std_Time_Month_instOrdOffset___lam__0(v_x_185_, v_y_186_);
lean_dec(v_y_186_);
lean_dec(v_x_185_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatOffset(lean_object* v_n_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_nat_to_int(v_n_191_);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLeOffset(lean_object* v_x_193_, lean_object* v_y_194_){
_start:
{
uint8_t v___x_195_; 
v___x_195_ = lean_int_dec_le(v_x_193_, v_y_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLeOffset___boxed(lean_object* v_x_196_, lean_object* v_y_197_){
_start:
{
uint8_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = l_Std_Time_Month_instDecidableLeOffset(v_x_196_, v_y_197_);
lean_dec(v_y_197_);
lean_dec(v_x_196_);
v_r_199_ = lean_box(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableLtOffset(lean_object* v_x_200_, lean_object* v_y_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_int_dec_lt(v_x_200_, v_y_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableLtOffset___boxed(lean_object* v_x_203_, lean_object* v_y_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_Std_Time_Month_instDecidableLtOffset(v_x_203_, v_y_204_);
lean_dec(v_y_204_);
lean_dec(v_x_203_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk(lean_object* v_toBounded_207_){
_start:
{
lean_inc(v_toBounded_207_);
return v_toBounded_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_mk___boxed(lean_object* v_toBounded_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_Time_Month_Quarter_mk(v_toBounded_208_);
lean_dec(v_toBounded_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded(lean_object* v_self_210_){
_start:
{
lean_inc(v_self_210_);
return v_self_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_toBounded___boxed(lean_object* v_self_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Std_Time_Month_Quarter_toBounded(v_self_211_);
lean_dec(v_self_211_);
return v_res_212_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Month_instDecidableEqQuarter(lean_object* v_a_217_, lean_object* v_b_218_){
_start:
{
lean_object* v___x_219_; lean_object* v_invFun_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_219_ = ((lean_object*)(l_Std_Time_Month_Quarter_equiv));
v_invFun_220_ = lean_ctor_get(v___x_219_, 1);
lean_inc_n(v_invFun_220_, 2);
v___x_221_ = lean_apply_1(v_invFun_220_, v_a_217_);
v___x_222_ = lean_apply_1(v_invFun_220_, v_b_218_);
v___x_223_ = lean_int_dec_eq(v___x_221_, v___x_222_);
lean_dec(v___x_222_);
lean_dec(v___x_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instDecidableEqQuarter___boxed(lean_object* v_a_224_, lean_object* v_b_225_){
_start:
{
uint8_t v_res_226_; lean_object* v_r_227_; 
v_res_226_ = l_Std_Time_Month_instDecidableEqQuarter(v_a_224_, v_b_225_);
v_r_227_ = lean_box(v_res_226_);
return v_r_227_;
}
}
static lean_object* _init_l_Std_Time_Month_instLTQuarter(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_box(0);
return v___x_228_;
}
}
static lean_object* _init_l_Std_Time_Month_instLEQuarter(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_box(0);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val(lean_object* v_quarter_233_){
_start:
{
lean_inc(v_quarter_233_);
return v_quarter_233_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_val___boxed(lean_object* v_quarter_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Std_Time_Month_Quarter_val(v_quarter_234_);
lean_dec(v_quarter_234_);
return v_res_235_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__0(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_unsigned_to_nat(3u);
v___x_237_ = lean_nat_to_int(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__1(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__0, &l_Std_Time_Month_instOfNatQuarter___closed__0_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__0);
v___x_239_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_240_ = lean_int_add(v___x_239_, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__2(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_242_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__1, &l_Std_Time_Month_instOfNatQuarter___closed__1_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__1);
v___x_243_ = lean_int_sub(v___x_242_, v___x_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Std_Time_Month_instOfNatQuarter___closed__3(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_range_246_; 
v___x_244_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_245_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__2, &l_Std_Time_Month_instOfNatQuarter___closed__2_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__2);
v_range_246_ = lean_int_add(v___x_245_, v___x_244_);
return v_range_246_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_instOfNatQuarter(lean_object* v_n_247_){
_start:
{
lean_object* v___x_248_; lean_object* v_toFun_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_range_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_248_ = ((lean_object*)(l_Std_Time_Month_Quarter_equiv));
v_toFun_249_ = lean_ctor_get(v___x_248_, 0);
v___x_250_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_251_ = lean_nat_to_int(v_n_247_);
v_range_252_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_253_ = lean_int_sub(v___x_251_, v___x_250_);
lean_dec(v___x_251_);
v___x_254_ = lean_int_emod(v___x_253_, v_range_252_);
lean_dec(v___x_253_);
v___x_255_ = lean_int_add(v___x_254_, v_range_252_);
lean_dec(v___x_254_);
v___x_256_ = lean_int_emod(v___x_255_, v_range_252_);
lean_dec(v___x_255_);
v___x_257_ = lean_int_add(v___x_256_, v___x_250_);
lean_dec(v___x_256_);
lean_inc(v_toFun_249_);
v___x_258_ = lean_apply_1(v_toFun_249_, v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__0(void){
_start:
{
lean_object* v_range_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_range_259_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_260_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__0, &l_Std_Time_Month_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__0);
v___x_261_ = lean_int_emod(v___x_260_, v_range_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__1(void){
_start:
{
lean_object* v_range_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_range_262_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_263_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__0, &l_Std_Time_Month_instInhabitedQuarter___closed__0_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__0);
v___x_264_ = lean_int_add(v___x_263_, v_range_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__2(void){
_start:
{
lean_object* v_range_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_range_265_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__3, &l_Std_Time_Month_instOfNatQuarter___closed__3_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__3);
v___x_266_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__1, &l_Std_Time_Month_instInhabitedQuarter___closed__1_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__1);
v___x_267_ = lean_int_emod(v___x_266_, v_range_265_);
return v___x_267_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter___closed__3(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_269_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__2, &l_Std_Time_Month_instInhabitedQuarter___closed__2_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__2);
v___x_270_ = lean_int_add(v___x_269_, v___x_268_);
return v___x_270_;
}
}
static lean_object* _init_l_Std_Time_Month_instInhabitedQuarter(void){
_start:
{
lean_object* v___x_271_; lean_object* v_toFun_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_271_ = ((lean_object*)(l_Std_Time_Month_Quarter_equiv));
v_toFun_272_ = lean_ctor_get(v___x_271_, 0);
v___x_273_ = lean_obj_once(&l_Std_Time_Month_instInhabitedQuarter___closed__3, &l_Std_Time_Month_instInhabitedQuarter___closed__3_once, _init_l_Std_Time_Month_instInhabitedQuarter___closed__3);
lean_inc(v_toFun_272_);
v___x_274_ = lean_apply_1(v_toFun_272_, v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l_Std_Time_Month_Quarter_ofMonth___closed__0(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(3u);
v___x_276_ = lean_nat_to_int(v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Std_Time_Month_Quarter_ofMonth___closed__1(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_278_ = lean_int_neg(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth(lean_object* v_month_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_280_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_281_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__0, &l_Std_Time_Month_Quarter_ofMonth___closed__0_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__0);
v___x_282_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_283_ = lean_int_add(v_month_279_, v___x_282_);
v___x_284_ = lean_int_ediv(v___x_283_, v___x_281_);
lean_dec(v___x_283_);
v___x_285_ = lean_int_add(v___x_284_, v___x_280_);
lean_dec(v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Quarter_ofMonth___boxed(lean_object* v_month_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_Time_Month_Quarter_ofMonth(v_month_286_);
lean_dec(v_month_286_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofNat(lean_object* v_data_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_nat_to_int(v_data_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt(lean_object* v_data_290_){
_start:
{
lean_inc(v_data_290_);
return v_data_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Offset_ofInt___boxed(lean_object* v_data_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Time_Month_Offset_ofInt(v_data_291_);
lean_dec(v_data_291_);
return v_res_292_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_january(void){
_start:
{
lean_object* v___x_293_; lean_object* v_toFun_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_293_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_294_ = lean_ctor_get(v___x_293_, 0);
v___x_295_ = lean_obj_once(&l_Std_Time_Month_instInhabitedOrdinal___closed__4, &l_Std_Time_Month_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Month_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_294_);
v___x_296_ = lean_apply_1(v_toFun_294_, v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(2u);
v___x_298_ = lean_nat_to_int(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_300_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__0, &l_Std_Time_Month_Ordinal_february___closed__0_once, _init_l_Std_Time_Month_Ordinal_february___closed__0);
v___x_301_ = lean_int_sub(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__2(void){
_start:
{
lean_object* v_range_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_range_302_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_303_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__1, &l_Std_Time_Month_Ordinal_february___closed__1_once, _init_l_Std_Time_Month_Ordinal_february___closed__1);
v___x_304_ = lean_int_emod(v___x_303_, v_range_302_);
return v___x_304_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__3(void){
_start:
{
lean_object* v_range_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_range_305_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_306_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__2, &l_Std_Time_Month_Ordinal_february___closed__2_once, _init_l_Std_Time_Month_Ordinal_february___closed__2);
v___x_307_ = lean_int_add(v___x_306_, v_range_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__4(void){
_start:
{
lean_object* v_range_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_range_308_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_309_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__3, &l_Std_Time_Month_Ordinal_february___closed__3_once, _init_l_Std_Time_Month_Ordinal_february___closed__3);
v___x_310_ = lean_int_emod(v___x_309_, v_range_308_);
return v___x_310_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february___closed__5(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_312_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__4, &l_Std_Time_Month_Ordinal_february___closed__4_once, _init_l_Std_Time_Month_Ordinal_february___closed__4);
v___x_313_ = lean_int_add(v___x_312_, v___x_311_);
return v___x_313_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_february(void){
_start:
{
lean_object* v___x_314_; lean_object* v_toFun_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_314_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_315_ = lean_ctor_get(v___x_314_, 0);
v___x_316_ = lean_obj_once(&l_Std_Time_Month_Ordinal_february___closed__5, &l_Std_Time_Month_Ordinal_february___closed__5_once, _init_l_Std_Time_Month_Ordinal_february___closed__5);
lean_inc(v_toFun_315_);
v___x_317_ = lean_apply_1(v_toFun_315_, v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__0(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_319_ = lean_obj_once(&l_Std_Time_Month_instOfNatQuarter___closed__0, &l_Std_Time_Month_instOfNatQuarter___closed__0_once, _init_l_Std_Time_Month_instOfNatQuarter___closed__0);
v___x_320_ = lean_int_sub(v___x_319_, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__1(void){
_start:
{
lean_object* v_range_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_range_321_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_322_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__0, &l_Std_Time_Month_Ordinal_march___closed__0_once, _init_l_Std_Time_Month_Ordinal_march___closed__0);
v___x_323_ = lean_int_emod(v___x_322_, v_range_321_);
return v___x_323_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__2(void){
_start:
{
lean_object* v_range_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_range_324_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_325_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__1, &l_Std_Time_Month_Ordinal_march___closed__1_once, _init_l_Std_Time_Month_Ordinal_march___closed__1);
v___x_326_ = lean_int_add(v___x_325_, v_range_324_);
return v___x_326_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__3(void){
_start:
{
lean_object* v_range_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_range_327_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_328_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__2, &l_Std_Time_Month_Ordinal_march___closed__2_once, _init_l_Std_Time_Month_Ordinal_march___closed__2);
v___x_329_ = lean_int_emod(v___x_328_, v_range_327_);
return v___x_329_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march___closed__4(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_331_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__3, &l_Std_Time_Month_Ordinal_march___closed__3_once, _init_l_Std_Time_Month_Ordinal_march___closed__3);
v___x_332_ = lean_int_add(v___x_331_, v___x_330_);
return v___x_332_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_march(void){
_start:
{
lean_object* v___x_333_; lean_object* v_toFun_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_334_ = lean_ctor_get(v___x_333_, 0);
v___x_335_ = lean_obj_once(&l_Std_Time_Month_Ordinal_march___closed__4, &l_Std_Time_Month_Ordinal_march___closed__4_once, _init_l_Std_Time_Month_Ordinal_march___closed__4);
lean_inc(v_toFun_334_);
v___x_336_ = lean_apply_1(v_toFun_334_, v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__0(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(4u);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__1(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_340_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__0, &l_Std_Time_Month_Ordinal_april___closed__0_once, _init_l_Std_Time_Month_Ordinal_april___closed__0);
v___x_341_ = lean_int_sub(v___x_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__2(void){
_start:
{
lean_object* v_range_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_range_342_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_343_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__1, &l_Std_Time_Month_Ordinal_april___closed__1_once, _init_l_Std_Time_Month_Ordinal_april___closed__1);
v___x_344_ = lean_int_emod(v___x_343_, v_range_342_);
return v___x_344_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__3(void){
_start:
{
lean_object* v_range_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_range_345_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_346_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__2, &l_Std_Time_Month_Ordinal_april___closed__2_once, _init_l_Std_Time_Month_Ordinal_april___closed__2);
v___x_347_ = lean_int_add(v___x_346_, v_range_345_);
return v___x_347_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__4(void){
_start:
{
lean_object* v_range_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_range_348_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_349_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__3, &l_Std_Time_Month_Ordinal_april___closed__3_once, _init_l_Std_Time_Month_Ordinal_april___closed__3);
v___x_350_ = lean_int_emod(v___x_349_, v_range_348_);
return v___x_350_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april___closed__5(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_351_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_352_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__4, &l_Std_Time_Month_Ordinal_april___closed__4_once, _init_l_Std_Time_Month_Ordinal_april___closed__4);
v___x_353_ = lean_int_add(v___x_352_, v___x_351_);
return v___x_353_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_april(void){
_start:
{
lean_object* v___x_354_; lean_object* v_toFun_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_354_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_355_ = lean_ctor_get(v___x_354_, 0);
v___x_356_ = lean_obj_once(&l_Std_Time_Month_Ordinal_april___closed__5, &l_Std_Time_Month_Ordinal_april___closed__5_once, _init_l_Std_Time_Month_Ordinal_april___closed__5);
lean_inc(v_toFun_355_);
v___x_357_ = lean_apply_1(v_toFun_355_, v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__0(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(5u);
v___x_359_ = lean_nat_to_int(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__1(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_361_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__0, &l_Std_Time_Month_Ordinal_may___closed__0_once, _init_l_Std_Time_Month_Ordinal_may___closed__0);
v___x_362_ = lean_int_sub(v___x_361_, v___x_360_);
return v___x_362_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__2(void){
_start:
{
lean_object* v_range_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_range_363_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_364_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__1, &l_Std_Time_Month_Ordinal_may___closed__1_once, _init_l_Std_Time_Month_Ordinal_may___closed__1);
v___x_365_ = lean_int_emod(v___x_364_, v_range_363_);
return v___x_365_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__3(void){
_start:
{
lean_object* v_range_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_range_366_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_367_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__2, &l_Std_Time_Month_Ordinal_may___closed__2_once, _init_l_Std_Time_Month_Ordinal_may___closed__2);
v___x_368_ = lean_int_add(v___x_367_, v_range_366_);
return v___x_368_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__4(void){
_start:
{
lean_object* v_range_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_range_369_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_370_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__3, &l_Std_Time_Month_Ordinal_may___closed__3_once, _init_l_Std_Time_Month_Ordinal_may___closed__3);
v___x_371_ = lean_int_emod(v___x_370_, v_range_369_);
return v___x_371_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may___closed__5(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_373_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__4, &l_Std_Time_Month_Ordinal_may___closed__4_once, _init_l_Std_Time_Month_Ordinal_may___closed__4);
v___x_374_ = lean_int_add(v___x_373_, v___x_372_);
return v___x_374_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_may(void){
_start:
{
lean_object* v___x_375_; lean_object* v_toFun_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_376_ = lean_ctor_get(v___x_375_, 0);
v___x_377_ = lean_obj_once(&l_Std_Time_Month_Ordinal_may___closed__5, &l_Std_Time_Month_Ordinal_may___closed__5_once, _init_l_Std_Time_Month_Ordinal_may___closed__5);
lean_inc(v_toFun_376_);
v___x_378_ = lean_apply_1(v_toFun_376_, v___x_377_);
return v___x_378_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__0(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_unsigned_to_nat(6u);
v___x_380_ = lean_nat_to_int(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__1(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_382_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__0, &l_Std_Time_Month_Ordinal_june___closed__0_once, _init_l_Std_Time_Month_Ordinal_june___closed__0);
v___x_383_ = lean_int_sub(v___x_382_, v___x_381_);
return v___x_383_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__2(void){
_start:
{
lean_object* v_range_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v_range_384_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_385_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__1, &l_Std_Time_Month_Ordinal_june___closed__1_once, _init_l_Std_Time_Month_Ordinal_june___closed__1);
v___x_386_ = lean_int_emod(v___x_385_, v_range_384_);
return v___x_386_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__3(void){
_start:
{
lean_object* v_range_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_range_387_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_388_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__2, &l_Std_Time_Month_Ordinal_june___closed__2_once, _init_l_Std_Time_Month_Ordinal_june___closed__2);
v___x_389_ = lean_int_add(v___x_388_, v_range_387_);
return v___x_389_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__4(void){
_start:
{
lean_object* v_range_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_range_390_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_391_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__3, &l_Std_Time_Month_Ordinal_june___closed__3_once, _init_l_Std_Time_Month_Ordinal_june___closed__3);
v___x_392_ = lean_int_emod(v___x_391_, v_range_390_);
return v___x_392_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june___closed__5(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_394_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__4, &l_Std_Time_Month_Ordinal_june___closed__4_once, _init_l_Std_Time_Month_Ordinal_june___closed__4);
v___x_395_ = lean_int_add(v___x_394_, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_june(void){
_start:
{
lean_object* v___x_396_; lean_object* v_toFun_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_396_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_397_ = lean_ctor_get(v___x_396_, 0);
v___x_398_ = lean_obj_once(&l_Std_Time_Month_Ordinal_june___closed__5, &l_Std_Time_Month_Ordinal_june___closed__5_once, _init_l_Std_Time_Month_Ordinal_june___closed__5);
lean_inc(v_toFun_397_);
v___x_399_ = lean_apply_1(v_toFun_397_, v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__0(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(7u);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__1(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_403_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__0, &l_Std_Time_Month_Ordinal_july___closed__0_once, _init_l_Std_Time_Month_Ordinal_july___closed__0);
v___x_404_ = lean_int_sub(v___x_403_, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__2(void){
_start:
{
lean_object* v_range_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v_range_405_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_406_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__1, &l_Std_Time_Month_Ordinal_july___closed__1_once, _init_l_Std_Time_Month_Ordinal_july___closed__1);
v___x_407_ = lean_int_emod(v___x_406_, v_range_405_);
return v___x_407_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__3(void){
_start:
{
lean_object* v_range_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v_range_408_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_409_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__2, &l_Std_Time_Month_Ordinal_july___closed__2_once, _init_l_Std_Time_Month_Ordinal_july___closed__2);
v___x_410_ = lean_int_add(v___x_409_, v_range_408_);
return v___x_410_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__4(void){
_start:
{
lean_object* v_range_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_range_411_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_412_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__3, &l_Std_Time_Month_Ordinal_july___closed__3_once, _init_l_Std_Time_Month_Ordinal_july___closed__3);
v___x_413_ = lean_int_emod(v___x_412_, v_range_411_);
return v___x_413_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july___closed__5(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_415_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__4, &l_Std_Time_Month_Ordinal_july___closed__4_once, _init_l_Std_Time_Month_Ordinal_july___closed__4);
v___x_416_ = lean_int_add(v___x_415_, v___x_414_);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_july(void){
_start:
{
lean_object* v___x_417_; lean_object* v_toFun_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_417_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_418_ = lean_ctor_get(v___x_417_, 0);
v___x_419_ = lean_obj_once(&l_Std_Time_Month_Ordinal_july___closed__5, &l_Std_Time_Month_Ordinal_july___closed__5_once, _init_l_Std_Time_Month_Ordinal_july___closed__5);
lean_inc(v_toFun_418_);
v___x_420_ = lean_apply_1(v_toFun_418_, v___x_419_);
return v___x_420_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__0(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_unsigned_to_nat(8u);
v___x_422_ = lean_nat_to_int(v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__1(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_424_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__0, &l_Std_Time_Month_Ordinal_august___closed__0_once, _init_l_Std_Time_Month_Ordinal_august___closed__0);
v___x_425_ = lean_int_sub(v___x_424_, v___x_423_);
return v___x_425_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__2(void){
_start:
{
lean_object* v_range_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_range_426_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_427_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__1, &l_Std_Time_Month_Ordinal_august___closed__1_once, _init_l_Std_Time_Month_Ordinal_august___closed__1);
v___x_428_ = lean_int_emod(v___x_427_, v_range_426_);
return v___x_428_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__3(void){
_start:
{
lean_object* v_range_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_range_429_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_430_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__2, &l_Std_Time_Month_Ordinal_august___closed__2_once, _init_l_Std_Time_Month_Ordinal_august___closed__2);
v___x_431_ = lean_int_add(v___x_430_, v_range_429_);
return v___x_431_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__4(void){
_start:
{
lean_object* v_range_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_range_432_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_433_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__3, &l_Std_Time_Month_Ordinal_august___closed__3_once, _init_l_Std_Time_Month_Ordinal_august___closed__3);
v___x_434_ = lean_int_emod(v___x_433_, v_range_432_);
return v___x_434_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august___closed__5(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_436_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__4, &l_Std_Time_Month_Ordinal_august___closed__4_once, _init_l_Std_Time_Month_Ordinal_august___closed__4);
v___x_437_ = lean_int_add(v___x_436_, v___x_435_);
return v___x_437_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_august(void){
_start:
{
lean_object* v___x_438_; lean_object* v_toFun_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_438_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_439_ = lean_ctor_get(v___x_438_, 0);
v___x_440_ = lean_obj_once(&l_Std_Time_Month_Ordinal_august___closed__5, &l_Std_Time_Month_Ordinal_august___closed__5_once, _init_l_Std_Time_Month_Ordinal_august___closed__5);
lean_inc(v_toFun_439_);
v___x_441_ = lean_apply_1(v_toFun_439_, v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__0(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_unsigned_to_nat(9u);
v___x_443_ = lean_nat_to_int(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__1(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_444_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_445_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__0, &l_Std_Time_Month_Ordinal_september___closed__0_once, _init_l_Std_Time_Month_Ordinal_september___closed__0);
v___x_446_ = lean_int_sub(v___x_445_, v___x_444_);
return v___x_446_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__2(void){
_start:
{
lean_object* v_range_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_range_447_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_448_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__1, &l_Std_Time_Month_Ordinal_september___closed__1_once, _init_l_Std_Time_Month_Ordinal_september___closed__1);
v___x_449_ = lean_int_emod(v___x_448_, v_range_447_);
return v___x_449_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__3(void){
_start:
{
lean_object* v_range_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_range_450_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_451_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__2, &l_Std_Time_Month_Ordinal_september___closed__2_once, _init_l_Std_Time_Month_Ordinal_september___closed__2);
v___x_452_ = lean_int_add(v___x_451_, v_range_450_);
return v___x_452_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__4(void){
_start:
{
lean_object* v_range_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_range_453_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_454_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__3, &l_Std_Time_Month_Ordinal_september___closed__3_once, _init_l_Std_Time_Month_Ordinal_september___closed__3);
v___x_455_ = lean_int_emod(v___x_454_, v_range_453_);
return v___x_455_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september___closed__5(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_457_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__4, &l_Std_Time_Month_Ordinal_september___closed__4_once, _init_l_Std_Time_Month_Ordinal_september___closed__4);
v___x_458_ = lean_int_add(v___x_457_, v___x_456_);
return v___x_458_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_september(void){
_start:
{
lean_object* v___x_459_; lean_object* v_toFun_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_459_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_460_ = lean_ctor_get(v___x_459_, 0);
v___x_461_ = lean_obj_once(&l_Std_Time_Month_Ordinal_september___closed__5, &l_Std_Time_Month_Ordinal_september___closed__5_once, _init_l_Std_Time_Month_Ordinal_september___closed__5);
lean_inc(v_toFun_460_);
v___x_462_ = lean_apply_1(v_toFun_460_, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__0(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(10u);
v___x_464_ = lean_nat_to_int(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__1(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_466_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__0, &l_Std_Time_Month_Ordinal_october___closed__0_once, _init_l_Std_Time_Month_Ordinal_october___closed__0);
v___x_467_ = lean_int_sub(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__2(void){
_start:
{
lean_object* v_range_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_range_468_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_469_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__1, &l_Std_Time_Month_Ordinal_october___closed__1_once, _init_l_Std_Time_Month_Ordinal_october___closed__1);
v___x_470_ = lean_int_emod(v___x_469_, v_range_468_);
return v___x_470_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__3(void){
_start:
{
lean_object* v_range_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_range_471_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_472_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__2, &l_Std_Time_Month_Ordinal_october___closed__2_once, _init_l_Std_Time_Month_Ordinal_october___closed__2);
v___x_473_ = lean_int_add(v___x_472_, v_range_471_);
return v___x_473_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__4(void){
_start:
{
lean_object* v_range_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_range_474_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_475_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__3, &l_Std_Time_Month_Ordinal_october___closed__3_once, _init_l_Std_Time_Month_Ordinal_october___closed__3);
v___x_476_ = lean_int_emod(v___x_475_, v_range_474_);
return v___x_476_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october___closed__5(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_478_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__4, &l_Std_Time_Month_Ordinal_october___closed__4_once, _init_l_Std_Time_Month_Ordinal_october___closed__4);
v___x_479_ = lean_int_add(v___x_478_, v___x_477_);
return v___x_479_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_october(void){
_start:
{
lean_object* v___x_480_; lean_object* v_toFun_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_480_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_481_ = lean_ctor_get(v___x_480_, 0);
v___x_482_ = lean_obj_once(&l_Std_Time_Month_Ordinal_october___closed__5, &l_Std_Time_Month_Ordinal_october___closed__5_once, _init_l_Std_Time_Month_Ordinal_october___closed__5);
lean_inc(v_toFun_481_);
v___x_483_ = lean_apply_1(v_toFun_481_, v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__0(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_485_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__1, &l_Std_Time_Month_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__1);
v___x_486_ = lean_int_sub(v___x_485_, v___x_484_);
return v___x_486_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__1(void){
_start:
{
lean_object* v_range_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_range_487_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_488_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__0, &l_Std_Time_Month_Ordinal_november___closed__0_once, _init_l_Std_Time_Month_Ordinal_november___closed__0);
v___x_489_ = lean_int_emod(v___x_488_, v_range_487_);
return v___x_489_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__2(void){
_start:
{
lean_object* v_range_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_range_490_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_491_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__1, &l_Std_Time_Month_Ordinal_november___closed__1_once, _init_l_Std_Time_Month_Ordinal_november___closed__1);
v___x_492_ = lean_int_add(v___x_491_, v_range_490_);
return v___x_492_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__3(void){
_start:
{
lean_object* v_range_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_range_493_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_494_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__2, &l_Std_Time_Month_Ordinal_november___closed__2_once, _init_l_Std_Time_Month_Ordinal_november___closed__2);
v___x_495_ = lean_int_emod(v___x_494_, v_range_493_);
return v___x_495_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november___closed__4(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_497_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__3, &l_Std_Time_Month_Ordinal_november___closed__3_once, _init_l_Std_Time_Month_Ordinal_november___closed__3);
v___x_498_ = lean_int_add(v___x_497_, v___x_496_);
return v___x_498_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_november(void){
_start:
{
lean_object* v___x_499_; lean_object* v_toFun_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_499_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_500_ = lean_ctor_get(v___x_499_, 0);
v___x_501_ = lean_obj_once(&l_Std_Time_Month_Ordinal_november___closed__4, &l_Std_Time_Month_Ordinal_november___closed__4_once, _init_l_Std_Time_Month_Ordinal_november___closed__4);
lean_inc(v_toFun_500_);
v___x_502_ = lean_apply_1(v_toFun_500_, v___x_501_);
return v___x_502_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__0(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_unsigned_to_nat(12u);
v___x_504_ = lean_nat_to_int(v___x_503_);
return v___x_504_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__1(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_506_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__0, &l_Std_Time_Month_Ordinal_december___closed__0_once, _init_l_Std_Time_Month_Ordinal_december___closed__0);
v___x_507_ = lean_int_sub(v___x_506_, v___x_505_);
return v___x_507_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__2(void){
_start:
{
lean_object* v_range_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_range_508_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_509_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__1, &l_Std_Time_Month_Ordinal_december___closed__1_once, _init_l_Std_Time_Month_Ordinal_december___closed__1);
v___x_510_ = lean_int_emod(v___x_509_, v_range_508_);
return v___x_510_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__3(void){
_start:
{
lean_object* v_range_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_range_511_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_512_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__2, &l_Std_Time_Month_Ordinal_december___closed__2_once, _init_l_Std_Time_Month_Ordinal_december___closed__2);
v___x_513_ = lean_int_add(v___x_512_, v_range_511_);
return v___x_513_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__4(void){
_start:
{
lean_object* v_range_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_range_514_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__4, &l_Std_Time_Month_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__4);
v___x_515_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__3, &l_Std_Time_Month_Ordinal_december___closed__3_once, _init_l_Std_Time_Month_Ordinal_december___closed__3);
v___x_516_ = lean_int_emod(v___x_515_, v_range_514_);
return v___x_516_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december___closed__5(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_517_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_518_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__4, &l_Std_Time_Month_Ordinal_december___closed__4_once, _init_l_Std_Time_Month_Ordinal_december___closed__4);
v___x_519_ = lean_int_add(v___x_518_, v___x_517_);
return v___x_519_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_december(void){
_start:
{
lean_object* v___x_520_; lean_object* v_toFun_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_520_ = ((lean_object*)(l_Std_Time_Month_Ordinal_equiv));
v_toFun_521_ = lean_ctor_get(v___x_520_, 0);
v___x_522_ = lean_obj_once(&l_Std_Time_Month_Ordinal_december___closed__5, &l_Std_Time_Month_Ordinal_december___closed__5_once, _init_l_Std_Time_Month_Ordinal_december___closed__5);
lean_inc(v_toFun_521_);
v___x_523_ = lean_apply_1(v_toFun_521_, v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset(lean_object* v_month_524_){
_start:
{
lean_inc(v_month_524_);
return v_month_524_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toOffset___boxed(lean_object* v_month_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Std_Time_Month_Ordinal_toOffset(v_month_525_);
lean_dec(v_month_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg(lean_object* v_data_527_){
_start:
{
lean_inc(v_data_527_);
return v_data_527_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___redArg___boxed(lean_object* v_data_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_Time_Month_Ordinal_ofInt___redArg(v_data_528_);
lean_dec(v_data_528_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt(lean_object* v_data_530_, lean_object* v_h_531_){
_start:
{
lean_inc(v_data_530_);
return v_data_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofInt___boxed(lean_object* v_data_532_, lean_object* v_h_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_Time_Month_Ordinal_ofInt(v_data_532_, v_h_533_);
lean_dec(v_data_532_);
return v_res_534_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__10));
v___x_562_ = l_Lean_mkAtom(v___x_561_);
return v___x_562_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__12);
v___x_564_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_565_ = lean_array_push(v___x_564_, v___x_563_);
return v___x_565_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__16));
v___x_577_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_578_ = lean_array_push(v___x_577_, v___x_576_);
return v___x_578_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__17);
v___x_580_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__15));
v___x_581_ = lean_box(2);
v___x_582_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_580_);
lean_ctor_set(v___x_582_, 2, v___x_579_);
return v___x_582_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__18);
v___x_584_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__13);
v___x_585_ = lean_array_push(v___x_584_, v___x_583_);
return v___x_585_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_586_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__19);
v___x_587_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__11));
v___x_588_ = lean_box(2);
v___x_589_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
lean_ctor_set(v___x_589_, 2, v___x_586_);
return v___x_589_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__20);
v___x_591_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_592_ = lean_array_push(v___x_591_, v___x_590_);
return v___x_592_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_593_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__21);
v___x_594_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__9));
v___x_595_ = lean_box(2);
v___x_596_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_594_);
lean_ctor_set(v___x_596_, 2, v___x_593_);
return v___x_596_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__22);
v___x_598_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_599_ = lean_array_push(v___x_598_, v___x_597_);
return v___x_599_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__23);
v___x_601_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__7));
v___x_602_ = lean_box(2);
v___x_603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_601_);
lean_ctor_set(v___x_603_, 2, v___x_600_);
return v___x_603_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__24);
v___x_605_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__5));
v___x_606_ = lean_array_push(v___x_605_, v___x_604_);
return v___x_606_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26(void){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__25);
v___x_608_ = ((lean_object*)(l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__4));
v___x_609_ = lean_box(2);
v___x_610_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
lean_ctor_set(v___x_610_, 2, v___x_607_);
return v___x_610_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26, &l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26_once, _init_l_Std_Time_Month_Ordinal_ofNat___auto__1___closed__26);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat___redArg(lean_object* v_data_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_nat_to_int(v_data_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofNat(lean_object* v_data_614_, lean_object* v_h_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_nat_to_int(v_data_614_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat(lean_object* v_month_617_){
_start:
{
lean_object* v_intZero_618_; uint8_t v_isNeg_619_; lean_object* v_a_620_; 
v_intZero_618_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v_isNeg_619_ = lean_int_dec_lt(v_month_617_, v_intZero_618_);
v_a_620_ = lean_nat_abs(v_month_617_);
return v_a_620_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toNat___boxed(lean_object* v_month_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Std_Time_Month_Ordinal_toNat(v_month_621_);
lean_dec(v_month_621_);
return v_res_622_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_to_int(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_ofFin(lean_object* v_data_625_){
_start:
{
lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = lean_nat_dec_le(v___x_626_, v_data_625_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
lean_dec(v_data_625_);
v___x_628_ = lean_obj_once(&l_Std_Time_Month_Ordinal_ofFin___closed__0, &l_Std_Time_Month_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Month_Ordinal_ofFin___closed__0);
return v___x_628_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = lean_nat_to_int(v_data_625_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__1(lean_object* v_a_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = lean_nat_to_int(v_a_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__2(lean_object* v_a_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Rat_ofInt(v_a_632_);
return v___x_633_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_634_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_unsigned_to_nat(31u);
v___x_636_ = lean_nat_to_int(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__2(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(59u);
v___x_638_ = lean_nat_to_int(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__3(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_unsigned_to_nat(90u);
v___x_640_ = lean_nat_to_int(v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__4(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(120u);
v___x_642_ = lean_nat_to_int(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__5(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = lean_unsigned_to_nat(151u);
v___x_644_ = lean_nat_to_int(v___x_643_);
return v___x_644_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__6(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_unsigned_to_nat(181u);
v___x_646_ = lean_nat_to_int(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__7(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_unsigned_to_nat(212u);
v___x_648_ = lean_nat_to_int(v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__8(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_unsigned_to_nat(243u);
v___x_650_ = lean_nat_to_int(v___x_649_);
return v___x_650_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__9(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_unsigned_to_nat(273u);
v___x_652_ = lean_nat_to_int(v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__10(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_unsigned_to_nat(304u);
v___x_654_ = lean_nat_to_int(v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__11(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_unsigned_to_nat(334u);
v___x_656_ = lean_nat_to_int(v___x_655_);
return v___x_656_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_intZero_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_daysAcc_682_; 
v___x_657_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__11, &l_Std_Time_Month_Ordinal_toSeconds___closed__11_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__11);
v___x_658_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__10, &l_Std_Time_Month_Ordinal_toSeconds___closed__10_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__10);
v___x_659_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__9, &l_Std_Time_Month_Ordinal_toSeconds___closed__9_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__9);
v___x_660_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__8, &l_Std_Time_Month_Ordinal_toSeconds___closed__8_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__8);
v___x_661_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__7, &l_Std_Time_Month_Ordinal_toSeconds___closed__7_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__7);
v___x_662_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__6, &l_Std_Time_Month_Ordinal_toSeconds___closed__6_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__6);
v___x_663_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__5, &l_Std_Time_Month_Ordinal_toSeconds___closed__5_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__5);
v___x_664_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__4, &l_Std_Time_Month_Ordinal_toSeconds___closed__4_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__4);
v___x_665_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__3, &l_Std_Time_Month_Ordinal_toSeconds___closed__3_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__3);
v___x_666_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__2, &l_Std_Time_Month_Ordinal_toSeconds___closed__2_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__2);
v___x_667_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__1, &l_Std_Time_Month_Ordinal_toSeconds___closed__1_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1);
v_intZero_668_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_669_ = lean_unsigned_to_nat(12u);
v___x_670_ = lean_mk_empty_array_with_capacity(v___x_669_);
v___x_671_ = lean_array_push(v___x_670_, v_intZero_668_);
v___x_672_ = lean_array_push(v___x_671_, v___x_667_);
v___x_673_ = lean_array_push(v___x_672_, v___x_666_);
v___x_674_ = lean_array_push(v___x_673_, v___x_665_);
v___x_675_ = lean_array_push(v___x_674_, v___x_664_);
v___x_676_ = lean_array_push(v___x_675_, v___x_663_);
v___x_677_ = lean_array_push(v___x_676_, v___x_662_);
v___x_678_ = lean_array_push(v___x_677_, v___x_661_);
v___x_679_ = lean_array_push(v___x_678_, v___x_660_);
v___x_680_ = lean_array_push(v___x_679_, v___x_659_);
v___x_681_ = lean_array_push(v___x_680_, v___x_658_);
v_daysAcc_682_ = lean_array_push(v___x_681_, v___x_657_);
return v_daysAcc_682_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toSeconds___closed__13(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_unsigned_to_nat(86400u);
v___x_684_ = lean_nat_to_int(v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds(uint8_t v_leap_685_, lean_object* v_month_686_){
_start:
{
lean_object* v_intZero_687_; uint8_t v_isNeg_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v_daysAcc_691_; lean_object* v_days_692_; lean_object* v___x_693_; lean_object* v_time_694_; 
v_intZero_687_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v_isNeg_688_ = lean_int_dec_lt(v_month_686_, v_intZero_687_);
v___x_689_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__0, &l_Std_Time_Month_Ordinal_toSeconds___closed__0_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__0);
v_a_690_ = lean_nat_abs(v_month_686_);
v_daysAcc_691_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__12, &l_Std_Time_Month_Ordinal_toSeconds___closed__12_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12);
v_days_692_ = lean_array_get_borrowed(v___x_689_, v_daysAcc_691_, v_a_690_);
v___x_693_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__13, &l_Std_Time_Month_Ordinal_toSeconds___closed__13_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__13);
v_time_694_ = lean_int_mul(v_days_692_, v___x_693_);
if (v_leap_685_ == 0)
{
lean_dec(v_a_690_);
return v_time_694_;
}
else
{
lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_695_ = lean_unsigned_to_nat(2u);
v___x_696_ = lean_nat_dec_le(v___x_695_, v_a_690_);
lean_dec(v_a_690_);
if (v___x_696_ == 0)
{
return v_time_694_;
}
else
{
lean_object* v___x_697_; 
v___x_697_ = lean_int_add(v_time_694_, v___x_693_);
lean_dec(v_time_694_);
return v___x_697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toSeconds___boxed(lean_object* v_leap_698_, lean_object* v_month_699_){
_start:
{
uint8_t v_leap_boxed_700_; lean_object* v_res_701_; 
v_leap_boxed_700_ = lean_unbox(v_leap_698_);
v_res_701_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_boxed_700_, v_month_699_);
lean_dec(v_month_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Month_Ordinal_toSeconds_spec__0(lean_object* v_a_702_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_nat_to_int(v_a_702_);
v___x_704_ = l_Rat_ofInt(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_unsigned_to_nat(60u);
v___x_706_ = lean_nat_to_int(v___x_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes(uint8_t v_leap_707_, lean_object* v_month_708_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_709_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_707_, v_month_708_);
v___x_710_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toMinutes___closed__0, &l_Std_Time_Month_Ordinal_toMinutes___closed__0_once, _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0);
v___x_711_ = lean_int_div(v___x_709_, v___x_710_);
lean_dec(v___x_709_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toMinutes___boxed(lean_object* v_leap_712_, lean_object* v_month_713_){
_start:
{
uint8_t v_leap_boxed_714_; lean_object* v_res_715_; 
v_leap_boxed_714_ = lean_unbox(v_leap_712_);
v_res_715_ = l_Std_Time_Month_Ordinal_toMinutes(v_leap_boxed_714_, v_month_713_);
lean_dec(v_month_713_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours(uint8_t v_leap_716_, lean_object* v_month_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_718_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_716_, v_month_717_);
v___x_719_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toMinutes___closed__0, &l_Std_Time_Month_Ordinal_toMinutes___closed__0_once, _init_l_Std_Time_Month_Ordinal_toMinutes___closed__0);
v___x_720_ = lean_int_div(v___x_718_, v___x_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_int_div(v___x_720_, v___x_719_);
lean_dec(v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toHours___boxed(lean_object* v_leap_722_, lean_object* v_month_723_){
_start:
{
uint8_t v_leap_boxed_724_; lean_object* v_res_725_; 
v_leap_boxed_724_ = lean_unbox(v_leap_722_);
v_res_725_ = l_Std_Time_Month_Ordinal_toHours(v_leap_boxed_724_, v_month_723_);
lean_dec(v_month_723_);
return v_res_725_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__0(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(1u);
v___x_727_ = l_Rat_instNatCast___lam__0(v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__1(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(86400u);
v___x_729_ = l_Rat_instNatCast___lam__0(v___x_728_);
return v___x_729_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_toDays___closed__2(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_ratio_732_; 
v___x_730_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__1, &l_Std_Time_Month_Ordinal_toDays___closed__1_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__1);
v___x_731_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__0, &l_Std_Time_Month_Ordinal_toDays___closed__0_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__0);
v_ratio_732_ = l_Rat_div(v___x_731_, v___x_730_);
return v_ratio_732_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays(uint8_t v_leap_733_, lean_object* v_month_734_){
_start:
{
lean_object* v_ratio_735_; lean_object* v_num_736_; lean_object* v_den_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_ratio_735_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toDays___closed__2, &l_Std_Time_Month_Ordinal_toDays___closed__2_once, _init_l_Std_Time_Month_Ordinal_toDays___closed__2);
v_num_736_ = lean_ctor_get(v_ratio_735_, 0);
v_den_737_ = lean_ctor_get(v_ratio_735_, 1);
v___x_738_ = l_Std_Time_Month_Ordinal_toSeconds(v_leap_733_, v_month_734_);
v___x_739_ = lean_int_mul(v___x_738_, v_num_736_);
lean_dec(v___x_738_);
lean_inc(v_den_737_);
v___x_740_ = lean_nat_to_int(v_den_737_);
v___x_741_ = lean_int_ediv(v___x_739_, v___x_740_);
lean_dec(v___x_740_);
lean_dec(v___x_739_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_toDays___boxed(lean_object* v_leap_742_, lean_object* v_month_743_){
_start:
{
uint8_t v_leap_boxed_744_; lean_object* v_res_745_; 
v_leap_boxed_744_ = lean_unbox(v_leap_742_);
v_res_745_ = l_Std_Time_Month_Ordinal_toDays(v_leap_boxed_744_, v_month_743_);
lean_dec(v_month_743_);
return v_res_745_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_unsigned_to_nat(30u);
v___x_747_ = lean_nat_to_int(v___x_746_);
return v___x_747_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0);
v___x_749_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_750_ = lean_int_add(v___x_749_, v___x_748_);
return v___x_750_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_unsigned_to_nat(31u);
v___x_752_ = lean_nat_to_int(v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_754_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__1);
v___x_755_ = lean_int_sub(v___x_754_, v___x_753_);
return v___x_755_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_range_758_; 
v___x_756_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_757_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__3);
v_range_758_ = lean_int_add(v___x_757_, v___x_756_);
return v_range_758_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_760_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2);
v___x_761_ = lean_int_sub(v___x_760_, v___x_759_);
return v___x_761_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6(void){
_start:
{
lean_object* v_range_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_range_762_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_763_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__5);
v___x_764_ = lean_int_emod(v___x_763_, v_range_762_);
return v___x_764_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7(void){
_start:
{
lean_object* v_range_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_range_765_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_766_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__6);
v___x_767_ = lean_int_add(v___x_766_, v_range_765_);
return v___x_767_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8(void){
_start:
{
lean_object* v_range_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_range_768_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_769_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__7);
v___x_770_ = lean_int_emod(v___x_769_, v_range_768_);
return v___x_770_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_772_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__8);
v___x_773_ = lean_int_add(v___x_772_, v___x_771_);
return v___x_773_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_unsigned_to_nat(28u);
v___x_775_ = lean_nat_to_int(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_777_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__10);
v___x_778_ = lean_int_sub(v___x_777_, v___x_776_);
return v___x_778_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12(void){
_start:
{
lean_object* v_range_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_range_779_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_780_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__11);
v___x_781_ = lean_int_emod(v___x_780_, v_range_779_);
return v___x_781_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13(void){
_start:
{
lean_object* v_range_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_range_782_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_783_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__12);
v___x_784_ = lean_int_add(v___x_783_, v_range_782_);
return v___x_784_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14(void){
_start:
{
lean_object* v_range_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_range_785_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_786_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__13);
v___x_787_ = lean_int_emod(v___x_786_, v_range_785_);
return v___x_787_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_788_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_789_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__14);
v___x_790_ = lean_int_add(v___x_789_, v___x_788_);
return v___x_790_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_792_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__0);
v___x_793_ = lean_int_sub(v___x_792_, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17(void){
_start:
{
lean_object* v_range_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_range_794_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_795_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__16);
v___x_796_ = lean_int_emod(v___x_795_, v_range_794_);
return v___x_796_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18(void){
_start:
{
lean_object* v_range_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_range_797_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_798_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__17);
v___x_799_ = lean_int_add(v___x_798_, v_range_797_);
return v___x_799_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19(void){
_start:
{
lean_object* v_range_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v_range_800_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__4);
v___x_801_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__18);
v___x_802_ = lean_int_emod(v___x_801_, v_range_800_);
return v___x_802_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_804_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__19);
v___x_805_ = lean_int_add(v___x_804_, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap(void){
_start:
{
lean_object* v___x_806_; lean_object* v_toFun_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_806_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_807_ = lean_ctor_get(v___x_806_, 0);
v___x_808_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__9);
lean_inc_n(v_toFun_807_, 3);
v___x_809_ = lean_apply_1(v_toFun_807_, v___x_808_);
v___x_810_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__15);
v___x_811_ = lean_apply_1(v_toFun_807_, v___x_810_);
v___x_812_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__20);
v___x_813_ = lean_apply_1(v_toFun_807_, v___x_812_);
v___x_814_ = lean_unsigned_to_nat(12u);
v___x_815_ = lean_mk_empty_array_with_capacity(v___x_814_);
lean_inc_n(v___x_809_, 6);
v___x_816_ = lean_array_push(v___x_815_, v___x_809_);
v___x_817_ = lean_array_push(v___x_816_, v___x_811_);
v___x_818_ = lean_array_push(v___x_817_, v___x_809_);
lean_inc_n(v___x_813_, 3);
v___x_819_ = lean_array_push(v___x_818_, v___x_813_);
v___x_820_ = lean_array_push(v___x_819_, v___x_809_);
v___x_821_ = lean_array_push(v___x_820_, v___x_813_);
v___x_822_ = lean_array_push(v___x_821_, v___x_809_);
v___x_823_ = lean_array_push(v___x_822_, v___x_809_);
v___x_824_ = lean_array_push(v___x_823_, v___x_813_);
v___x_825_ = lean_array_push(v___x_824_, v___x_809_);
v___x_826_ = lean_array_push(v___x_825_, v___x_813_);
v___x_827_ = lean_array_push(v___x_826_, v___x_809_);
return v___x_827_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_nat_to_int(v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_unsigned_to_nat(59u);
v___x_831_ = lean_nat_to_int(v___x_830_);
return v___x_831_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(90u);
v___x_833_ = lean_nat_to_int(v___x_832_);
return v___x_833_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_unsigned_to_nat(120u);
v___x_835_ = lean_nat_to_int(v___x_834_);
return v___x_835_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_unsigned_to_nat(151u);
v___x_837_ = lean_nat_to_int(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(181u);
v___x_839_ = lean_nat_to_int(v___x_838_);
return v___x_839_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_unsigned_to_nat(212u);
v___x_841_ = lean_nat_to_int(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_unsigned_to_nat(243u);
v___x_843_ = lean_nat_to_int(v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(273u);
v___x_845_ = lean_nat_to_int(v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_unsigned_to_nat(304u);
v___x_847_ = lean_nat_to_int(v___x_846_);
return v___x_847_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(334u);
v___x_849_ = lean_nat_to_int(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_850_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__10);
v___x_851_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__9);
v___x_852_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__8);
v___x_853_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__7);
v___x_854_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__6);
v___x_855_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__5);
v___x_856_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__4);
v___x_857_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__3);
v___x_858_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__2);
v___x_859_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__1);
v___x_860_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_monthSizesNonLeap___closed__2);
v___x_861_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__0);
v___x_862_ = lean_unsigned_to_nat(12u);
v___x_863_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_864_ = lean_array_push(v___x_863_, v___x_861_);
v___x_865_ = lean_array_push(v___x_864_, v___x_860_);
v___x_866_ = lean_array_push(v___x_865_, v___x_859_);
v___x_867_ = lean_array_push(v___x_866_, v___x_858_);
v___x_868_ = lean_array_push(v___x_867_, v___x_857_);
v___x_869_ = lean_array_push(v___x_868_, v___x_856_);
v___x_870_ = lean_array_push(v___x_869_, v___x_855_);
v___x_871_ = lean_array_push(v___x_870_, v___x_854_);
v___x_872_ = lean_array_push(v___x_871_, v___x_853_);
v___x_873_ = lean_array_push(v___x_872_, v___x_852_);
v___x_874_ = lean_array_push(v___x_873_, v___x_851_);
v___x_875_ = lean_array_push(v___x_874_, v___x_850_);
return v___x_875_;
}
}
static lean_object* _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes(void){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = lean_obj_once(&l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11, &l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11_once, _init_l___private_Std_Time_Date_Unit_Month_0__Std_Time_Month_Ordinal_cumulativeSizes___closed__11);
return v___x_876_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__0(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_unsigned_to_nat(2u);
v___x_878_ = lean_nat_to_int(v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__1(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_unsigned_to_nat(30u);
v___x_880_ = lean_nat_to_int(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__2(void){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_881_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__1, &l_Std_Time_Month_Ordinal_days___closed__1_once, _init_l_Std_Time_Month_Ordinal_days___closed__1);
v___x_882_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_883_ = lean_int_add(v___x_882_, v___x_881_);
return v___x_883_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__3(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_884_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_885_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__2, &l_Std_Time_Month_Ordinal_days___closed__2_once, _init_l_Std_Time_Month_Ordinal_days___closed__2);
v___x_886_ = lean_int_sub(v___x_885_, v___x_884_);
return v___x_886_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__4(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v_range_889_; 
v___x_887_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_888_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__3, &l_Std_Time_Month_Ordinal_days___closed__3_once, _init_l_Std_Time_Month_Ordinal_days___closed__3);
v_range_889_ = lean_int_add(v___x_888_, v___x_887_);
return v_range_889_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__5(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_890_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_891_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__1, &l_Std_Time_Month_Ordinal_toSeconds___closed__1_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__1);
v___x_892_ = lean_int_sub(v___x_891_, v___x_890_);
return v___x_892_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__6(void){
_start:
{
lean_object* v_range_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v_range_893_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_894_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__5, &l_Std_Time_Month_Ordinal_days___closed__5_once, _init_l_Std_Time_Month_Ordinal_days___closed__5);
v___x_895_ = lean_int_emod(v___x_894_, v_range_893_);
return v___x_895_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__7(void){
_start:
{
lean_object* v_range_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_range_896_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_897_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__6, &l_Std_Time_Month_Ordinal_days___closed__6_once, _init_l_Std_Time_Month_Ordinal_days___closed__6);
v___x_898_ = lean_int_add(v___x_897_, v_range_896_);
return v___x_898_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__8(void){
_start:
{
lean_object* v_range_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_range_899_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_900_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__7, &l_Std_Time_Month_Ordinal_days___closed__7_once, _init_l_Std_Time_Month_Ordinal_days___closed__7);
v___x_901_ = lean_int_emod(v___x_900_, v_range_899_);
return v___x_901_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__9(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_903_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__8, &l_Std_Time_Month_Ordinal_days___closed__8_once, _init_l_Std_Time_Month_Ordinal_days___closed__8);
v___x_904_ = lean_int_add(v___x_903_, v___x_902_);
return v___x_904_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__10(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_unsigned_to_nat(28u);
v___x_906_ = lean_nat_to_int(v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__11(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_908_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__10, &l_Std_Time_Month_Ordinal_days___closed__10_once, _init_l_Std_Time_Month_Ordinal_days___closed__10);
v___x_909_ = lean_int_sub(v___x_908_, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__12(void){
_start:
{
lean_object* v_range_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_range_910_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_911_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__11, &l_Std_Time_Month_Ordinal_days___closed__11_once, _init_l_Std_Time_Month_Ordinal_days___closed__11);
v___x_912_ = lean_int_emod(v___x_911_, v_range_910_);
return v___x_912_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__13(void){
_start:
{
lean_object* v_range_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_range_913_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_914_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__12, &l_Std_Time_Month_Ordinal_days___closed__12_once, _init_l_Std_Time_Month_Ordinal_days___closed__12);
v___x_915_ = lean_int_add(v___x_914_, v_range_913_);
return v___x_915_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__14(void){
_start:
{
lean_object* v_range_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v_range_916_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_917_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__13, &l_Std_Time_Month_Ordinal_days___closed__13_once, _init_l_Std_Time_Month_Ordinal_days___closed__13);
v___x_918_ = lean_int_emod(v___x_917_, v_range_916_);
return v___x_918_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__15(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_920_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__14, &l_Std_Time_Month_Ordinal_days___closed__14_once, _init_l_Std_Time_Month_Ordinal_days___closed__14);
v___x_921_ = lean_int_add(v___x_920_, v___x_919_);
return v___x_921_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__16(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_922_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_923_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__1, &l_Std_Time_Month_Ordinal_days___closed__1_once, _init_l_Std_Time_Month_Ordinal_days___closed__1);
v___x_924_ = lean_int_sub(v___x_923_, v___x_922_);
return v___x_924_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__17(void){
_start:
{
lean_object* v_range_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_range_925_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_926_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__16, &l_Std_Time_Month_Ordinal_days___closed__16_once, _init_l_Std_Time_Month_Ordinal_days___closed__16);
v___x_927_ = lean_int_emod(v___x_926_, v_range_925_);
return v___x_927_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__18(void){
_start:
{
lean_object* v_range_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_range_928_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_929_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__17, &l_Std_Time_Month_Ordinal_days___closed__17_once, _init_l_Std_Time_Month_Ordinal_days___closed__17);
v___x_930_ = lean_int_add(v___x_929_, v_range_928_);
return v___x_930_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__19(void){
_start:
{
lean_object* v_range_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_range_931_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_932_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__18, &l_Std_Time_Month_Ordinal_days___closed__18_once, _init_l_Std_Time_Month_Ordinal_days___closed__18);
v___x_933_ = lean_int_emod(v___x_932_, v_range_931_);
return v___x_933_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__20(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_934_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_935_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__19, &l_Std_Time_Month_Ordinal_days___closed__19_once, _init_l_Std_Time_Month_Ordinal_days___closed__19);
v___x_936_ = lean_int_add(v___x_935_, v___x_934_);
return v___x_936_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__21(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_unsigned_to_nat(29u);
v___x_938_ = lean_nat_to_int(v___x_937_);
return v___x_938_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__22(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_939_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_940_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__21, &l_Std_Time_Month_Ordinal_days___closed__21_once, _init_l_Std_Time_Month_Ordinal_days___closed__21);
v___x_941_ = lean_int_sub(v___x_940_, v___x_939_);
return v___x_941_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__23(void){
_start:
{
lean_object* v_range_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_range_942_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_943_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__22, &l_Std_Time_Month_Ordinal_days___closed__22_once, _init_l_Std_Time_Month_Ordinal_days___closed__22);
v___x_944_ = lean_int_emod(v___x_943_, v_range_942_);
return v___x_944_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__24(void){
_start:
{
lean_object* v_range_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_range_945_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_946_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__23, &l_Std_Time_Month_Ordinal_days___closed__23_once, _init_l_Std_Time_Month_Ordinal_days___closed__23);
v___x_947_ = lean_int_add(v___x_946_, v_range_945_);
return v___x_947_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__25(void){
_start:
{
lean_object* v_range_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v_range_948_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__4, &l_Std_Time_Month_Ordinal_days___closed__4_once, _init_l_Std_Time_Month_Ordinal_days___closed__4);
v___x_949_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__24, &l_Std_Time_Month_Ordinal_days___closed__24_once, _init_l_Std_Time_Month_Ordinal_days___closed__24);
v___x_950_ = lean_int_emod(v___x_949_, v_range_948_);
return v___x_950_;
}
}
static lean_object* _init_l_Std_Time_Month_Ordinal_days___closed__26(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_951_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_952_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__25, &l_Std_Time_Month_Ordinal_days___closed__25_once, _init_l_Std_Time_Month_Ordinal_days___closed__25);
v___x_953_ = lean_int_add(v___x_952_, v___x_951_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days(uint8_t v_leap_954_, lean_object* v_month_955_){
_start:
{
lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__0, &l_Std_Time_Month_Ordinal_days___closed__0_once, _init_l_Std_Time_Month_Ordinal_days___closed__0);
v___x_957_ = lean_int_dec_eq(v_month_955_, v___x_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v_toFun_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_958_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_959_ = lean_ctor_get(v___x_958_, 0);
v___x_960_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__9, &l_Std_Time_Month_Ordinal_days___closed__9_once, _init_l_Std_Time_Month_Ordinal_days___closed__9);
lean_inc_n(v_toFun_959_, 3);
v___x_961_ = lean_apply_1(v_toFun_959_, v___x_960_);
v___x_962_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__15, &l_Std_Time_Month_Ordinal_days___closed__15_once, _init_l_Std_Time_Month_Ordinal_days___closed__15);
v___x_963_ = lean_apply_1(v_toFun_959_, v___x_962_);
v___x_964_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__20, &l_Std_Time_Month_Ordinal_days___closed__20_once, _init_l_Std_Time_Month_Ordinal_days___closed__20);
v___x_965_ = lean_apply_1(v_toFun_959_, v___x_964_);
v___x_966_ = lean_unsigned_to_nat(12u);
v___x_967_ = lean_mk_empty_array_with_capacity(v___x_966_);
lean_inc_n(v___x_961_, 6);
v___x_968_ = lean_array_push(v___x_967_, v___x_961_);
v___x_969_ = lean_array_push(v___x_968_, v___x_963_);
v___x_970_ = lean_array_push(v___x_969_, v___x_961_);
lean_inc_n(v___x_965_, 3);
v___x_971_ = lean_array_push(v___x_970_, v___x_965_);
v___x_972_ = lean_array_push(v___x_971_, v___x_961_);
v___x_973_ = lean_array_push(v___x_972_, v___x_965_);
v___x_974_ = lean_array_push(v___x_973_, v___x_961_);
v___x_975_ = lean_array_push(v___x_974_, v___x_961_);
v___x_976_ = lean_array_push(v___x_975_, v___x_965_);
v___x_977_ = lean_array_push(v___x_976_, v___x_961_);
v___x_978_ = lean_array_push(v___x_977_, v___x_965_);
v___x_979_ = lean_array_push(v___x_978_, v___x_961_);
v___x_980_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_981_ = lean_int_add(v_month_955_, v___x_980_);
v___x_982_ = l_Int_toNat(v___x_981_);
lean_dec(v___x_981_);
v___x_983_ = lean_array_fget(v___x_979_, v___x_982_);
lean_dec(v___x_982_);
lean_dec_ref(v___x_979_);
return v___x_983_;
}
else
{
if (v_leap_954_ == 0)
{
lean_object* v___x_984_; lean_object* v_toFun_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_984_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_985_ = lean_ctor_get(v___x_984_, 0);
v___x_986_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__15, &l_Std_Time_Month_Ordinal_days___closed__15_once, _init_l_Std_Time_Month_Ordinal_days___closed__15);
lean_inc(v_toFun_985_);
v___x_987_ = lean_apply_1(v_toFun_985_, v___x_986_);
return v___x_987_;
}
else
{
lean_object* v___x_988_; lean_object* v_toFun_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_988_ = l_Std_Time_Day_Ordinal_equiv;
v_toFun_989_ = lean_ctor_get(v___x_988_, 0);
v___x_990_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__26, &l_Std_Time_Month_Ordinal_days___closed__26_once, _init_l_Std_Time_Month_Ordinal_days___closed__26);
lean_inc(v_toFun_989_);
v___x_991_ = lean_apply_1(v_toFun_989_, v___x_990_);
return v___x_991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_days___boxed(lean_object* v_leap_992_, lean_object* v_month_993_){
_start:
{
uint8_t v_leap_boxed_994_; lean_object* v_res_995_; 
v_leap_boxed_994_ = lean_unbox(v_leap_992_);
v_res_995_ = l_Std_Time_Month_Ordinal_days(v_leap_boxed_994_, v_month_993_);
lean_dec(v_month_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays(uint8_t v_leap_996_, lean_object* v_month_997_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_998_ = lean_obj_once(&l_Std_Time_Month_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Month_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Month_instReprOrdinal___lam__0___closed__0);
v___x_999_ = lean_unsigned_to_nat(12u);
v___x_1000_ = lean_mk_empty_array_with_capacity(v___x_999_);
lean_dec_ref(v___x_1000_);
v___x_1001_ = lean_obj_once(&l_Std_Time_Month_Ordinal_toSeconds___closed__12, &l_Std_Time_Month_Ordinal_toSeconds___closed__12_once, _init_l_Std_Time_Month_Ordinal_toSeconds___closed__12);
v___x_1002_ = lean_obj_once(&l_Std_Time_Month_instOfNatOrdinal___closed__0, &l_Std_Time_Month_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Month_instOfNatOrdinal___closed__0);
v___x_1003_ = lean_obj_once(&l_Std_Time_Month_Quarter_ofMonth___closed__1, &l_Std_Time_Month_Quarter_ofMonth___closed__1_once, _init_l_Std_Time_Month_Quarter_ofMonth___closed__1);
v___x_1004_ = lean_int_add(v_month_997_, v___x_1003_);
v___x_1005_ = l_Int_toNat(v___x_1004_);
lean_dec(v___x_1004_);
v___x_1006_ = lean_array_fget_borrowed(v___x_1001_, v___x_1005_);
lean_dec(v___x_1005_);
if (v_leap_996_ == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_int_add(v___x_1006_, v___x_998_);
return v___x_1007_;
}
else
{
lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = lean_obj_once(&l_Std_Time_Month_Ordinal_days___closed__0, &l_Std_Time_Month_Ordinal_days___closed__0_once, _init_l_Std_Time_Month_Ordinal_days___closed__0);
v___x_1009_ = lean_int_dec_lt(v___x_1008_, v_month_997_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_int_add(v___x_1006_, v___x_998_);
return v___x_1010_;
}
else
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_int_add(v___x_1006_, v___x_1002_);
return v___x_1011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_cumulativeDays___boxed(lean_object* v_leap_1012_, lean_object* v_month_1013_){
_start:
{
uint8_t v_leap_boxed_1014_; lean_object* v_res_1015_; 
v_leap_boxed_1014_ = lean_unbox(v_leap_1012_);
v_res_1015_ = l_Std_Time_Month_Ordinal_cumulativeDays(v_leap_boxed_1014_, v_month_1013_);
lean_dec(v_month_1013_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay(uint8_t v_leap_1016_, lean_object* v_month_1017_, lean_object* v_day_1018_){
_start:
{
lean_object* v_max_1019_; uint8_t v___x_1020_; 
v_max_1019_ = l_Std_Time_Month_Ordinal_days(v_leap_1016_, v_month_1017_);
v___x_1020_ = lean_int_dec_lt(v_max_1019_, v_day_1018_);
if (v___x_1020_ == 0)
{
lean_dec(v_max_1019_);
lean_inc(v_day_1018_);
return v_day_1018_;
}
else
{
return v_max_1019_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Month_Ordinal_clipDay___boxed(lean_object* v_leap_1021_, lean_object* v_month_1022_, lean_object* v_day_1023_){
_start:
{
uint8_t v_leap_boxed_1024_; lean_object* v_res_1025_; 
v_leap_boxed_1024_ = lean_unbox(v_leap_1021_);
v_res_1025_ = l_Std_Time_Month_Ordinal_clipDay(v_leap_boxed_1024_, v_month_1022_, v_day_1023_);
lean_dec(v_day_1023_);
lean_dec(v_month_1022_);
return v_res_1025_;
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
