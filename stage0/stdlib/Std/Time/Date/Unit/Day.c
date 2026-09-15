// Lean compiler output
// Module: Std.Time.Date.Unit.Day
// Imports: public import Std.Time.Time public import Init.Transport
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
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Day_Ordinal_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_Ordinal_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_Ordinal_equiv___closed__0 = (const lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__0_value),((lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Day_Ordinal_equiv___closed__1 = (const lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_Ordinal_equiv = (const lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__1_value;
static lean_once_cell_t l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Day_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Day_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instReprOrdinal = (const lean_object*)&l_Std_Time_Day_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Day_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Day_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Day_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instOrdOrdinal = (const lean_object*)&l_Std_Time_Day_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Day_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Day_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Day_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Day_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Day_instInhabitedOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Day_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Day_Offset_equiv = (const lean_object*)&l_Std_Time_Day_Ordinal_equiv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instReprOffset = (const lean_object*)&l_Std_Time_Day_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Day_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instToStringOffset = (const lean_object*)&l_Std_Time_Day_instToStringOffset___closed__0_value;
static lean_once_cell_t l_Std_Time_Day_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instAddOffset = (const lean_object*)&l_Std_Time_Day_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Day_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instSubOffset = (const lean_object*)&l_Std_Time_Day_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Day_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instNegOffset = (const lean_object*)&l_Std_Time_Day_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Day_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Day_instLTOffset;
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Day_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instOrdOffset = (const lean_object*)&l_Std_Time_Day_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instReprOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__3 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__3_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_0),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_1),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value_aux_2),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4_value;
static const lean_array_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__6 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__6_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_0),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_1),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value_aux_2),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__8 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__8_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9_value;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_0),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_1),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value_aux_2),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11_value;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13;
static const lean_string_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__14 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__14_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_0),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_1),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value_aux_2),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15_value;
static const lean_ctor_object l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9_value),((lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5_value)}};
static const lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16 = (const lean_object*)&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16_value;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25;
static lean_once_cell_t l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat___auto__1;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_ofFin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_ofFin___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Offset_toNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Offset_toNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Offset_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Offset_toMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Offset_toSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Offset_toSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Offset_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Offset_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Offset_toHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Offset_toHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk(lean_object* v_toBounded_1_){
_start:
{
lean_inc(v_toBounded_1_);
return v_toBounded_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk___boxed(lean_object* v_toBounded_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Day_Ordinal_mk(v_toBounded_2_);
lean_dec(v_toBounded_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Day_Ordinal_toBounded(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_equiv___lam__0(lean_object* v___y_7_){
_start:
{
lean_inc(v___y_7_);
return v___y_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_equiv___lam__0___boxed(lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Day_Ordinal_equiv___lam__0(v___y_8_);
lean_dec(v___y_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object* v___x_16_, lean_object* v_x_17_, lean_object* v_prec_18_){
_start:
{
lean_object* v_invFun_19_; lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v_invFun_19_ = lean_ctor_get(v___x_16_, 1);
lean_inc(v_invFun_19_);
lean_dec_ref(v___x_16_);
v___x_20_ = lean_apply_1(v_invFun_19_, v_x_17_);
v___x_21_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0);
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object* v___x_28_, lean_object* v_x_29_, lean_object* v_prec_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Time_Day_instReprOrdinal___lam__0(v___x_28_, v_x_29_, v_prec_30_);
lean_dec(v_prec_30_);
return v_res_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
lean_object* v___x_37_; lean_object* v_invFun_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_37_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Day_instDecidableEqOrdinal(v_a_42_, v_b_43_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOrdinal(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOrdinal(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLEOrdinal(lean_object* v_a_48_, lean_object* v_b_49_){
_start:
{
lean_object* v___x_50_; lean_object* v_invFun_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_50_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLEOrdinal___boxed(lean_object* v_a_55_, lean_object* v_b_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l_Std_Time_Day_instDecidableLEOrdinal(v_a_55_, v_b_56_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLTOrdinal(lean_object* v_a_59_, lean_object* v_b_60_){
_start:
{
lean_object* v___x_61_; lean_object* v_invFun_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_61_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv));
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLTOrdinal___boxed(lean_object* v_a_66_, lean_object* v_b_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Std_Time_Day_instDecidableLTOrdinal(v_a_66_, v_b_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___lam__0(lean_object* v___x_70_, lean_object* v_x_71_, lean_object* v_y_72_){
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___lam__0___boxed(lean_object* v___x_81_, lean_object* v_x_82_, lean_object* v_y_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Std_Time_Day_instOrdOrdinal___lam__0(v___x_81_, v_x_82_, v_y_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val(lean_object* v_ordinal_89_){
_start:
{
lean_inc(v_ordinal_89_);
return v_ordinal_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val___boxed(lean_object* v_ordinal_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Time_Day_Ordinal_val(v_ordinal_90_);
lean_dec(v_ordinal_90_);
return v_res_91_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(30u);
v___x_95_ = lean_nat_to_int(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__1, &l_Std_Time_Day_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__1);
v___x_97_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_98_ = lean_int_add(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_100_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__2, &l_Std_Time_Day_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__2);
v___x_101_ = lean_int_sub(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_range_104_; 
v___x_102_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_103_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__3, &l_Std_Time_Day_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__3);
v_range_104_ = lean_int_add(v___x_103_, v___x_102_);
return v_range_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal(lean_object* v_n_105_){
_start:
{
lean_object* v___x_106_; lean_object* v_toFun_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_range_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_106_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv));
v_toFun_107_ = lean_ctor_get(v___x_106_, 0);
v___x_108_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_109_ = lean_nat_to_int(v_n_105_);
v_range_110_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
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
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_118_ = lean_int_sub(v___x_117_, v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_range_119_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_120_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__0, &l_Std_Time_Day_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0);
v___x_121_ = lean_int_emod(v___x_120_, v_range_119_);
return v___x_121_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_range_122_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_123_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__1, &l_Std_Time_Day_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1);
v___x_124_ = lean_int_add(v___x_123_, v_range_122_);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_range_125_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_126_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__2, &l_Std_Time_Day_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2);
v___x_127_ = lean_int_emod(v___x_126_, v_range_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_129_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__3, &l_Std_Time_Day_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3);
v___x_130_ = lean_int_add(v___x_129_, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_131_; lean_object* v_toFun_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_131_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv));
v_toFun_132_ = lean_ctor_get(v___x_131_, 0);
v___x_133_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__4, &l_Std_Time_Day_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_132_);
v___x_134_ = lean_apply_1(v_toFun_132_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk(lean_object* v_toUnitVal_135_){
_start:
{
lean_inc(v_toUnitVal_135_);
return v_toUnitVal_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk___boxed(lean_object* v_toUnitVal_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Day_Offset_mk(v_toUnitVal_136_);
lean_dec(v_toUnitVal_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal(lean_object* v_self_138_){
_start:
{
lean_inc(v_self_138_);
return v_self_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal___boxed(lean_object* v_self_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_Time_Day_Offset_toUnitVal(v_self_139_);
lean_dec(v_self_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val(lean_object* v_offset_142_){
_start:
{
lean_inc(v_offset_142_);
return v_offset_142_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val___boxed(lean_object* v_offset_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Std_Time_Day_Offset_val(v_offset_143_);
lean_dec(v_offset_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0(lean_object* v_offset_145_, lean_object* v_prec_146_){
_start:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0);
v___x_148_ = lean_int_dec_lt(v_offset_145_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = l_Int_repr(v_offset_145_);
v___x_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = l_Int_repr(v_offset_145_);
v___x_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
v___x_153_ = l_Repr_addAppParen(v___x_152_, v_prec_146_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0___boxed(lean_object* v_offset_154_, lean_object* v_prec_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_Time_Day_instReprOffset___lam__0(v_offset_154_, v_prec_155_);
lean_dec(v_prec_155_);
lean_dec(v_offset_154_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_161_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOffset___closed__0, &l_Std_Time_Day_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Day_instInhabitedOffset___closed__0);
return v___x_162_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOffset(lean_object* v_x_163_, lean_object* v_y_164_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = lean_int_dec_eq(v_x_163_, v_y_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOffset___boxed(lean_object* v_x_166_, lean_object* v_y_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Std_Time_Day_instDecidableEqOffset(v_x_166_, v_y_167_);
lean_dec(v_y_167_);
lean_dec(v_x_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOffset(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOffset(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOffset___lam__0(lean_object* v_x_178_, lean_object* v_y_179_){
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOffset___lam__0___boxed(lean_object* v_x_185_, lean_object* v_y_186_){
_start:
{
uint8_t v_res_187_; lean_object* v_r_188_; 
v_res_187_ = l_Std_Time_Day_instOrdOffset___lam__0(v_x_185_, v_y_186_);
lean_dec(v_y_186_);
lean_dec(v_x_185_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOffset(lean_object* v_n_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_nat_to_int(v_n_191_);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOffset(lean_object* v_x_193_, lean_object* v_y_194_){
_start:
{
uint8_t v___x_195_; 
v___x_195_ = lean_int_dec_le(v_x_193_, v_y_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOffset___boxed(lean_object* v_x_196_, lean_object* v_y_197_){
_start:
{
uint8_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = l_Std_Time_Day_instDecidableLeOffset(v_x_196_, v_y_197_);
lean_dec(v_y_197_);
lean_dec(v_x_196_);
v_r_199_ = lean_box(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOffset(lean_object* v_x_200_, lean_object* v_y_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_int_dec_lt(v_x_200_, v_y_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOffset___boxed(lean_object* v_x_203_, lean_object* v_y_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_Std_Time_Day_instDecidableLtOffset(v_x_203_, v_y_204_);
lean_dec(v_y_204_);
lean_dec(v_x_203_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg(lean_object* v_data_207_){
_start:
{
lean_inc(v_data_207_);
return v_data_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg___boxed(lean_object* v_data_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_Time_Day_Ordinal_ofInt___redArg(v_data_208_);
lean_dec(v_data_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt(lean_object* v_data_210_, lean_object* v_h_211_){
_start:
{
lean_inc(v_data_210_);
return v_data_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___boxed(lean_object* v_data_212_, lean_object* v_h_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_Day_Ordinal_ofInt(v_data_212_, v_h_213_);
lean_dec(v_data_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg(lean_object* v_toBounded_215_){
_start:
{
lean_inc(v_toBounded_215_);
return v_toBounded_215_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg___boxed(lean_object* v_toBounded_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Std_Time_Day_Ordinal_OfYear_mk___redArg(v_toBounded_216_);
lean_dec(v_toBounded_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk(uint8_t v_leap_218_, lean_object* v_toBounded_219_){
_start:
{
lean_inc(v_toBounded_219_);
return v_toBounded_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___boxed(lean_object* v_leap_220_, lean_object* v_toBounded_221_){
_start:
{
uint8_t v_leap_boxed_222_; lean_object* v_res_223_; 
v_leap_boxed_222_ = lean_unbox(v_leap_220_);
v_res_223_ = l_Std_Time_Day_Ordinal_OfYear_mk(v_leap_boxed_222_, v_toBounded_221_);
lean_dec(v_toBounded_221_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg(lean_object* v_self_224_){
_start:
{
lean_inc(v_self_224_);
return v_self_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg___boxed(lean_object* v_self_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg(v_self_225_);
lean_dec(v_self_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded(uint8_t v_leap_227_, lean_object* v_self_228_){
_start:
{
lean_inc(v_self_228_);
return v_self_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___boxed(lean_object* v_leap_229_, lean_object* v_self_230_){
_start:
{
uint8_t v_leap_boxed_231_; lean_object* v_res_232_; 
v_leap_boxed_231_ = lean_unbox(v_leap_229_);
v_res_232_ = l_Std_Time_Day_Ordinal_OfYear_toBounded(v_leap_boxed_231_, v_self_230_);
lean_dec(v_self_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___redArg(){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = ((lean_object*)(l_Std_Time_Day_Ordinal_equiv___closed__1));
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___redArg___boxed(lean_object* v___dummy_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Std_Time_Day_Ordinal_OfYear_equiv___redArg();
return v_res_236_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Std_Time_Day_Ordinal_OfYear_equiv___redArg();
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv(uint8_t v_leap_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_equiv___boxed(lean_object* v_leap_240_){
_start:
{
uint8_t v_leap_boxed_241_; lean_object* v_res_242_; 
v_leap_boxed_241_ = lean_unbox(v_leap_240_);
v_res_242_ = l_Std_Time_Day_Ordinal_OfYear_equiv(v_leap_boxed_241_);
return v_res_242_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0(void){
_start:
{
lean_object* v___x_243_; lean_object* v___f_244_; 
v___x_243_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v___f_244_ = lean_alloc_closure((void*)(l_Std_Time_Day_instReprOrdinal___lam__0___boxed), 3, 1);
lean_closure_set(v___f_244_, 0, v___x_243_);
return v___f_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg(){
_start:
{
lean_object* v___f_246_; 
v___f_246_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0, &l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0_once, _init_l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0);
return v___f_246_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object* v___dummy_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
return v_res_248_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instReprOfYear___closed__0(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t v_leap_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instReprOfYear___closed__0, &l_Std_Time_Day_Ordinal_instReprOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instReprOfYear___closed__0);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object* v_leap_252_){
_start:
{
uint8_t v_leap_boxed_253_; lean_object* v_res_254_; 
v_leap_boxed_253_ = lean_unbox(v_leap_252_);
v_res_254_ = l_Std_Time_Day_Ordinal_instReprOfYear(v_leap_boxed_253_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___lam__0(lean_object* v_invFun_255_, lean_object* v_x_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_apply_1(v_invFun_255_, v_x_256_);
v___x_258_ = l_Int_repr(v___x_257_);
lean_dec(v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg(){
_start:
{
lean_object* v___x_260_; lean_object* v_invFun_261_; lean_object* v___f_262_; 
v___x_260_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v_invFun_261_ = lean_ctor_get(v___x_260_, 1);
lean_inc(v_invFun_261_);
v___f_262_ = lean_alloc_closure((void*)(l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___lam__0), 2, 1);
lean_closure_set(v___f_262_, 0, v_invFun_261_);
return v___f_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object* v___dummy_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
return v_res_264_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0(void){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t v_leap_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0, &l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instToStringOfYear___closed__0);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object* v_leap_268_){
_start:
{
uint8_t v_leap_boxed_269_; lean_object* v_res_270_; 
v_leap_boxed_269_ = lean_unbox(v_leap_268_);
v_res_270_ = l_Std_Time_Day_Ordinal_instToStringOfYear(v_leap_boxed_269_);
return v_res_270_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t v_leap_271_, lean_object* v_a_272_, lean_object* v_b_273_){
_start:
{
lean_object* v___x_274_; lean_object* v_invFun_275_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_274_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v_invFun_275_ = lean_ctor_get(v___x_274_, 1);
lean_inc_n(v_invFun_275_, 2);
v___x_276_ = lean_apply_1(v_invFun_275_, v_a_272_);
v___x_277_ = lean_apply_1(v_invFun_275_, v_b_273_);
v___x_278_ = lean_int_dec_eq(v___x_276_, v___x_277_);
lean_dec(v___x_277_);
lean_dec(v___x_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object* v_leap_279_, lean_object* v_a_280_, lean_object* v_b_281_){
_start:
{
uint8_t v_leap_boxed_282_; uint8_t v_res_283_; lean_object* v_r_284_; 
v_leap_boxed_282_ = lean_unbox(v_leap_279_);
v_res_283_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear(v_leap_boxed_282_, v_a_280_, v_b_281_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0(void){
_start:
{
lean_object* v___x_285_; lean_object* v___f_286_; 
v___x_285_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v___f_286_ = lean_alloc_closure((void*)(l_Std_Time_Day_instOrdOrdinal___lam__0___boxed), 3, 1);
lean_closure_set(v___f_286_, 0, v___x_285_);
return v___f_286_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg(){
_start:
{
lean_object* v___f_288_; 
v___f_288_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0, &l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___closed__0);
return v___f_288_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___boxed(lean_object* v___dummy_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Std_Time_Day_Ordinal_instOrdOfYear___redArg();
return v_res_290_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0(void){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Std_Time_Day_Ordinal_instOrdOfYear___redArg();
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear(uint8_t v_leap_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0, &l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOrdOfYear___closed__0);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___boxed(lean_object* v_leap_294_){
_start:
{
uint8_t v_leap_boxed_295_; lean_object* v_res_296_; 
v_leap_boxed_295_ = lean_unbox(v_leap_294_);
v_res_296_ = l_Std_Time_Day_Ordinal_instOrdOfYear(v_leap_boxed_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg(lean_object* v_ordinal_297_){
_start:
{
lean_inc(v_ordinal_297_);
return v_ordinal_297_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg___boxed(lean_object* v_ordinal_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Std_Time_Day_Ordinal_OfYear_val___redArg(v_ordinal_298_);
lean_dec(v_ordinal_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val(uint8_t v_leap_300_, lean_object* v_ordinal_301_){
_start:
{
lean_inc(v_ordinal_301_);
return v_ordinal_301_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___boxed(lean_object* v_leap_302_, lean_object* v_ordinal_303_){
_start:
{
uint8_t v_leap_boxed_304_; lean_object* v_res_305_; 
v_leap_boxed_304_ = lean_unbox(v_leap_302_);
v_res_305_ = l_Std_Time_Day_Ordinal_OfYear_val(v_leap_boxed_304_, v_ordinal_303_);
lean_dec(v_ordinal_303_);
return v_res_305_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10));
v___x_333_ = l_Lean_mkAtom(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12);
v___x_335_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_336_ = lean_array_push(v___x_335_, v___x_334_);
return v___x_336_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16));
v___x_348_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_349_ = lean_array_push(v___x_348_, v___x_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_350_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17);
v___x_351_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15));
v___x_352_ = lean_box(2);
v___x_353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___x_351_);
lean_ctor_set(v___x_353_, 2, v___x_350_);
return v___x_353_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18);
v___x_355_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13);
v___x_356_ = lean_array_push(v___x_355_, v___x_354_);
return v___x_356_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_357_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19);
v___x_358_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11));
v___x_359_ = lean_box(2);
v___x_360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_358_);
lean_ctor_set(v___x_360_, 2, v___x_357_);
return v___x_360_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_361_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20);
v___x_362_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_363_ = lean_array_push(v___x_362_, v___x_361_);
return v___x_363_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_364_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21);
v___x_365_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9));
v___x_366_ = lean_box(2);
v___x_367_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v___x_365_);
lean_ctor_set(v___x_367_, 2, v___x_364_);
return v___x_367_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22);
v___x_369_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_370_ = lean_array_push(v___x_369_, v___x_368_);
return v___x_370_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_371_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23);
v___x_372_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7));
v___x_373_ = lean_box(2);
v___x_374_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
lean_ctor_set(v___x_374_, 2, v___x_371_);
return v___x_374_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_375_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24);
v___x_376_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_377_ = lean_array_push(v___x_376_, v___x_375_);
return v___x_377_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_378_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25);
v___x_379_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4));
v___x_380_ = lean_box(2);
v___x_381_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
lean_ctor_set(v___x_381_, 1, v___x_379_);
lean_ctor_set(v___x_381_, 2, v___x_378_);
return v___x_381_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3(void){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___redArg(lean_object* v_data_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_nat_to_int(v_data_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat(uint8_t v_leap_385_, lean_object* v_data_386_, lean_object* v_h_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_nat_to_int(v_data_386_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___boxed(lean_object* v_leap_389_, lean_object* v_data_390_, lean_object* v_h_391_){
_start:
{
uint8_t v_leap_boxed_392_; lean_object* v_res_393_; 
v_leap_boxed_392_ = lean_unbox(v_leap_389_);
v_res_393_ = l_Std_Time_Day_Ordinal_OfYear_ofNat(v_leap_boxed_392_, v_data_390_, v_h_391_);
return v_res_393_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(364u);
v___x_395_ = lean_nat_to_int(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0);
v___x_397_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_398_ = lean_int_add(v___x_397_, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_400_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1);
v___x_401_ = lean_int_sub(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_range_404_; 
v___x_402_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_403_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2);
v_range_404_ = lean_int_add(v___x_403_, v___x_402_);
return v_range_404_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_unsigned_to_nat(365u);
v___x_406_ = lean_nat_to_int(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4);
v___x_408_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_409_ = lean_int_add(v___x_408_, v___x_407_);
return v___x_409_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_410_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_411_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5);
v___x_412_ = lean_int_sub(v___x_411_, v___x_410_);
return v___x_412_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v_range_415_; 
v___x_413_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_414_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6);
v_range_415_ = lean_int_add(v___x_414_, v___x_413_);
return v_range_415_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear(uint8_t v_leap_416_, lean_object* v_n_417_){
_start:
{
if (v_leap_416_ == 0)
{
lean_object* v___x_418_; lean_object* v_toFun_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_range_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_418_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v_toFun_419_ = lean_ctor_get(v___x_418_, 0);
v___x_420_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_421_ = lean_nat_to_int(v_n_417_);
v_range_422_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3);
v___x_423_ = lean_int_sub(v___x_421_, v___x_420_);
lean_dec(v___x_421_);
v___x_424_ = lean_int_emod(v___x_423_, v_range_422_);
lean_dec(v___x_423_);
v___x_425_ = lean_int_add(v___x_424_, v_range_422_);
lean_dec(v___x_424_);
v___x_426_ = lean_int_emod(v___x_425_, v_range_422_);
lean_dec(v___x_425_);
v___x_427_ = lean_int_add(v___x_426_, v___x_420_);
lean_dec(v___x_426_);
lean_inc(v_toFun_419_);
v___x_428_ = lean_apply_1(v_toFun_419_, v___x_427_);
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v_toFun_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_range_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_429_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0, &l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0_once, _init_l_Std_Time_Day_Ordinal_OfYear_equiv___closed__0);
v_toFun_430_ = lean_ctor_get(v___x_429_, 0);
v___x_431_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_432_ = lean_nat_to_int(v_n_417_);
v_range_433_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7);
v___x_434_ = lean_int_sub(v___x_432_, v___x_431_);
lean_dec(v___x_432_);
v___x_435_ = lean_int_emod(v___x_434_, v_range_433_);
lean_dec(v___x_434_);
v___x_436_ = lean_int_add(v___x_435_, v_range_433_);
lean_dec(v___x_435_);
v___x_437_ = lean_int_emod(v___x_436_, v_range_433_);
lean_dec(v___x_436_);
v___x_438_ = lean_int_add(v___x_437_, v___x_431_);
lean_dec(v___x_437_);
lean_inc(v_toFun_430_);
v___x_439_ = lean_apply_1(v_toFun_430_, v___x_438_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___boxed(lean_object* v_leap_440_, lean_object* v_n_441_){
_start:
{
uint8_t v_leap_boxed_442_; lean_object* v_res_443_; 
v_leap_boxed_442_ = lean_unbox(v_leap_440_);
v_res_443_ = l_Std_Time_Day_Ordinal_instOfNatOfYear(v_leap_boxed_442_, v_n_441_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg(){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg___boxed(lean_object* v___dummy_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v_res_447_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0(void){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear(uint8_t v_leap_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0, &l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___boxed(lean_object* v_leap_451_){
_start:
{
uint8_t v_leap_boxed_452_; lean_object* v_res_453_; 
v_leap_boxed_452_ = lean_unbox(v_leap_451_);
v_res_453_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear(v_leap_boxed_452_);
return v_res_453_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat___redArg(lean_object* v_data_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = lean_nat_to_int(v_data_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat(lean_object* v_data_457_, lean_object* v_h_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lean_nat_to_int(v_data_457_);
return v___x_459_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_to_int(v___x_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofFin(lean_object* v_data_462_){
_start:
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_nat_dec_le(v___x_463_, v_data_462_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
lean_dec(v_data_462_);
v___x_465_ = lean_obj_once(&l_Std_Time_Day_Ordinal_ofFin___closed__0, &l_Std_Time_Day_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Day_Ordinal_ofFin___closed__0);
return v___x_465_;
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_nat_to_int(v_data_462_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset(lean_object* v_ordinal_467_){
_start:
{
lean_inc(v_ordinal_467_);
return v_ordinal_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset___boxed(lean_object* v_ordinal_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_Time_Day_Ordinal_toOffset(v_ordinal_468_);
lean_dec(v_ordinal_468_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(lean_object* v_ofYear_470_){
_start:
{
lean_inc(v_ofYear_470_);
return v_ofYear_470_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg___boxed(lean_object* v_ofYear_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(v_ofYear_471_);
lean_dec(v_ofYear_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset(uint8_t v_leap_473_, lean_object* v_ofYear_474_){
_start:
{
lean_inc(v_ofYear_474_);
return v_ofYear_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___boxed(lean_object* v_leap_475_, lean_object* v_ofYear_476_){
_start:
{
uint8_t v_leap_boxed_477_; lean_object* v_res_478_; 
v_leap_boxed_477_ = lean_unbox(v_leap_475_);
v_res_478_ = l_Std_Time_Day_Ordinal_OfYear_toOffset(v_leap_boxed_477_, v_ofYear_476_);
lean_dec(v_ofYear_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0_spec__0(lean_object* v_a_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_nat_to_int(v_a_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0(lean_object* v_a_481_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_nat_to_int(v_a_481_);
v___x_483_ = l_Rat_ofInt(v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg(lean_object* v_off_484_){
_start:
{
lean_inc(v_off_484_);
return v_off_484_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg___boxed(lean_object* v_off_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Std_Time_Day_Offset_toOrdinal___redArg(v_off_485_);
lean_dec(v_off_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal(lean_object* v_off_487_, lean_object* v_h_488_){
_start:
{
lean_inc(v_off_487_);
return v_off_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___boxed(lean_object* v_off_489_, lean_object* v_h_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_Time_Day_Offset_toOrdinal(v_off_489_, v_h_490_);
lean_dec(v_off_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNat(lean_object* v_data_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_nat_to_int(v_data_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt(lean_object* v_data_494_){
_start:
{
lean_inc(v_data_494_);
return v_data_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt___boxed(lean_object* v_data_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Std_Time_Day_Offset_ofInt(v_data_495_);
lean_dec(v_data_495_);
return v_res_496_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_cstr_to_nat("86400000000000");
v___x_498_ = lean_nat_to_int(v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds(lean_object* v_days_499_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_501_ = lean_int_mul(v_days_499_, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds___boxed(lean_object* v_days_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_Time_Day_Offset_toNanoseconds(v_days_502_);
lean_dec(v_days_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds(lean_object* v_ns_504_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_506_ = lean_int_ediv(v_ns_504_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds___boxed(lean_object* v_ns_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Std_Time_Day_Offset_ofNanoseconds(v_ns_507_);
lean_dec(v_ns_507_);
return v_res_508_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_unsigned_to_nat(86400000u);
v___x_510_ = lean_nat_to_int(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds(lean_object* v_days_511_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_513_ = lean_int_mul(v_days_511_, v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds___boxed(lean_object* v_days_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Std_Time_Day_Offset_toMilliseconds(v_days_514_);
lean_dec(v_days_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds(lean_object* v_ms_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_518_ = lean_int_ediv(v_ms_516_, v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds___boxed(lean_object* v_ms_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Std_Time_Day_Offset_ofMilliseconds(v_ms_519_);
lean_dec(v_ms_519_);
return v_res_520_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(86400u);
v___x_522_ = lean_nat_to_int(v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds(lean_object* v_days_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_525_ = lean_int_mul(v_days_523_, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object* v_days_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Std_Time_Day_Offset_toSeconds(v_days_526_);
lean_dec(v_days_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds(lean_object* v_secs_528_){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_530_ = lean_int_ediv(v_secs_528_, v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds___boxed(lean_object* v_secs_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Std_Time_Day_Offset_ofSeconds(v_secs_531_);
lean_dec(v_secs_531_);
return v_res_532_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(1440u);
v___x_534_ = lean_nat_to_int(v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes(lean_object* v_days_535_){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_537_ = lean_int_mul(v_days_535_, v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes___boxed(lean_object* v_days_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Std_Time_Day_Offset_toMinutes(v_days_538_);
lean_dec(v_days_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes(lean_object* v_minutes_540_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_542_ = lean_int_ediv(v_minutes_540_, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes___boxed(lean_object* v_minutes_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Std_Time_Day_Offset_ofMinutes(v_minutes_543_);
lean_dec(v_minutes_543_);
return v_res_544_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(24u);
v___x_546_ = lean_nat_to_int(v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours(lean_object* v_days_547_){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_549_ = lean_int_mul(v_days_547_, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours___boxed(lean_object* v_days_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Std_Time_Day_Offset_toHours(v_days_550_);
lean_dec(v_days_550_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours(lean_object* v_hours_552_){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_554_ = lean_int_ediv(v_hours_552_, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours___boxed(lean_object* v_hours_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Std_Time_Day_Offset_ofHours(v_hours_555_);
lean_dec(v_hours_555_);
return v_res_556_;
}
}
lean_object* runtime_initialize_Std_Time_Time(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_Unit_Day(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_Day_instLEOrdinal = _init_l_Std_Time_Day_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Day_instLEOrdinal);
l_Std_Time_Day_instLTOrdinal = _init_l_Std_Time_Day_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Day_instLTOrdinal);
l_Std_Time_Day_instInhabitedOrdinal = _init_l_Std_Time_Day_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Day_instInhabitedOrdinal);
l_Std_Time_Day_instInhabitedOffset = _init_l_Std_Time_Day_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Day_instInhabitedOffset);
l_Std_Time_Day_instLEOffset = _init_l_Std_Time_Day_instLEOffset();
lean_mark_persistent(l_Std_Time_Day_instLEOffset);
l_Std_Time_Day_instLTOffset = _init_l_Std_Time_Day_instLTOffset();
lean_mark_persistent(l_Std_Time_Day_instLTOffset);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_Unit_Day(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3 = _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3();
lean_mark_persistent(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3);
l_Std_Time_Day_Ordinal_ofNat___auto__1 = _init_l_Std_Time_Day_Ordinal_ofNat___auto__1();
lean_mark_persistent(l_Std_Time_Day_Ordinal_ofNat___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Time(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Day(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_Unit_Day(builtin);
}
#ifdef __cplusplus
}
#endif
