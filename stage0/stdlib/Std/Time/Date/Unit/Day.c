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
lean_object* l_Int_repr___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toBounded___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instOrdOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT const lean_object* l_Std_Time_Day_instOrdOffset = (const lean_object*)&l_Std_Time_Day_instOrdOrdinal___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___boxed(lean_object*);
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
static lean_object* _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object* v_x_9_, lean_object* v_prec_10_){
_start:
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0);
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object* v_x_18_, lean_object* v_prec_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Time_Day_instReprOrdinal___lam__0(v_x_18_, v_prec_19_);
lean_dec(v_prec_19_);
lean_dec(v_x_18_);
return v_res_20_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object* v_a_23_, lean_object* v_b_24_){
_start:
{
uint8_t v___x_25_; 
v___x_25_ = lean_int_dec_eq(v_a_23_, v_b_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object* v_a_26_, lean_object* v_b_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Std_Time_Day_instDecidableEqOrdinal(v_a_26_, v_b_27_);
lean_dec(v_b_27_);
lean_dec(v_a_26_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOrdinal(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(0);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOrdinal(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_box(0);
return v___x_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLEOrdinal(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = lean_int_dec_le(v_a_32_, v_b_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLEOrdinal___boxed(lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_Time_Day_instDecidableLEOrdinal(v_a_35_, v_b_36_);
lean_dec(v_b_36_);
lean_dec(v_a_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLTOrdinal(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v___x_41_; 
v___x_41_ = lean_int_dec_lt(v_a_39_, v_b_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLTOrdinal___boxed(lean_object* v_a_42_, lean_object* v_b_43_){
_start:
{
uint8_t v_res_44_; lean_object* v_r_45_; 
v_res_44_ = l_Std_Time_Day_instDecidableLTOrdinal(v_a_42_, v_b_43_);
lean_dec(v_b_43_);
lean_dec(v_a_42_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___lam__0(lean_object* v_x_46_, lean_object* v_y_47_){
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
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___lam__0___boxed(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Std_Time_Day_instOrdOrdinal___lam__0(v_x_53_, v_y_54_);
lean_dec(v_y_54_);
lean_dec(v_x_53_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val(lean_object* v_ordinal_59_){
_start:
{
lean_inc(v_ordinal_59_);
return v_ordinal_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_val___boxed(lean_object* v_ordinal_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Std_Time_Day_Ordinal_val(v_ordinal_60_);
lean_dec(v_ordinal_60_);
return v_res_61_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(30u);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__1, &l_Std_Time_Day_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__1);
v___x_67_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_68_ = lean_int_add(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_70_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__2, &l_Std_Time_Day_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__2);
v___x_71_ = lean_int_sub(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_range_74_; 
v___x_72_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_73_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__3, &l_Std_Time_Day_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__3);
v_range_74_ = lean_int_add(v___x_73_, v___x_72_);
return v_range_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal(lean_object* v_n_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v_range_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_76_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_77_ = lean_nat_to_int(v_n_75_);
v_range_78_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
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
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_85_ = lean_int_sub(v___x_84_, v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_range_86_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_87_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__0, &l_Std_Time_Day_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0);
v___x_88_ = lean_int_emod(v___x_87_, v_range_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_range_89_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_90_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__1, &l_Std_Time_Day_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1);
v___x_91_ = lean_int_add(v___x_90_, v_range_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_range_92_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__4, &l_Std_Time_Day_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__4);
v___x_93_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__2, &l_Std_Time_Day_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2);
v___x_94_ = lean_int_emod(v___x_93_, v_range_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_96_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__3, &l_Std_Time_Day_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3);
v___x_97_ = lean_int_add(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__4, &l_Std_Time_Day_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk(lean_object* v_toUnitVal_99_){
_start:
{
lean_inc(v_toUnitVal_99_);
return v_toUnitVal_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk___boxed(lean_object* v_toUnitVal_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Std_Time_Day_Offset_mk(v_toUnitVal_100_);
lean_dec(v_toUnitVal_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal(lean_object* v_self_102_){
_start:
{
lean_inc(v_self_102_);
return v_self_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal___boxed(lean_object* v_self_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Std_Time_Day_Offset_toUnitVal(v_self_103_);
lean_dec(v_self_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val(lean_object* v_offset_105_){
_start:
{
lean_inc(v_offset_105_);
return v_offset_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val___boxed(lean_object* v_offset_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Time_Day_Offset_val(v_offset_106_);
lean_dec(v_offset_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0(lean_object* v_offset_108_, lean_object* v_prec_109_){
_start:
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___lam__0___closed__0, &l_Std_Time_Day_instReprOrdinal___lam__0___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___lam__0___closed__0);
v___x_111_ = lean_int_dec_lt(v_offset_108_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = l_Int_repr(v_offset_108_);
v___x_113_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
else
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = l_Int_repr(v_offset_108_);
v___x_115_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
v___x_116_ = l_Repr_addAppParen(v___x_115_, v_prec_109_);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0___boxed(lean_object* v_offset_117_, lean_object* v_prec_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Std_Time_Day_instReprOffset___lam__0(v_offset_117_, v_prec_118_);
lean_dec(v_prec_118_);
lean_dec(v_offset_117_);
return v_res_119_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_124_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOffset___closed__0, &l_Std_Time_Day_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Day_instInhabitedOffset___closed__0);
return v___x_125_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOffset(lean_object* v_x_126_, lean_object* v_y_127_){
_start:
{
uint8_t v___x_128_; 
v___x_128_ = lean_int_dec_eq(v_x_126_, v_y_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOffset___boxed(lean_object* v_x_129_, lean_object* v_y_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Std_Time_Day_instDecidableEqOffset(v_x_129_, v_y_130_);
lean_dec(v_y_130_);
lean_dec(v_x_129_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOffset(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOffset(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_box(0);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOffset(lean_object* v_n_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_nat_to_int(v_n_142_);
return v___x_143_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOffset(lean_object* v_x_144_, lean_object* v_y_145_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_int_dec_le(v_x_144_, v_y_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOffset___boxed(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Std_Time_Day_instDecidableLeOffset(v_x_147_, v_y_148_);
lean_dec(v_y_148_);
lean_dec(v_x_147_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOffset(lean_object* v_x_151_, lean_object* v_y_152_){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = lean_int_dec_lt(v_x_151_, v_y_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOffset___boxed(lean_object* v_x_154_, lean_object* v_y_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Std_Time_Day_instDecidableLtOffset(v_x_154_, v_y_155_);
lean_dec(v_y_155_);
lean_dec(v_x_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg(lean_object* v_data_158_){
_start:
{
lean_inc(v_data_158_);
return v_data_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg___boxed(lean_object* v_data_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Std_Time_Day_Ordinal_ofInt___redArg(v_data_159_);
lean_dec(v_data_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt(lean_object* v_data_161_, lean_object* v_h_162_){
_start:
{
lean_inc(v_data_161_);
return v_data_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___boxed(lean_object* v_data_163_, lean_object* v_h_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Time_Day_Ordinal_ofInt(v_data_163_, v_h_164_);
lean_dec(v_data_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg(lean_object* v_toBounded_166_){
_start:
{
lean_inc(v_toBounded_166_);
return v_toBounded_166_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___redArg___boxed(lean_object* v_toBounded_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Std_Time_Day_Ordinal_OfYear_mk___redArg(v_toBounded_167_);
lean_dec(v_toBounded_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk(uint8_t v_leap_169_, lean_object* v_toBounded_170_){
_start:
{
lean_inc(v_toBounded_170_);
return v_toBounded_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_mk___boxed(lean_object* v_leap_171_, lean_object* v_toBounded_172_){
_start:
{
uint8_t v_leap_boxed_173_; lean_object* v_res_174_; 
v_leap_boxed_173_ = lean_unbox(v_leap_171_);
v_res_174_ = l_Std_Time_Day_Ordinal_OfYear_mk(v_leap_boxed_173_, v_toBounded_172_);
lean_dec(v_toBounded_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg(lean_object* v_self_175_){
_start:
{
lean_inc(v_self_175_);
return v_self_175_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg___boxed(lean_object* v_self_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Std_Time_Day_Ordinal_OfYear_toBounded___redArg(v_self_176_);
lean_dec(v_self_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded(uint8_t v_leap_178_, lean_object* v_self_179_){
_start:
{
lean_inc(v_self_179_);
return v_self_179_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toBounded___boxed(lean_object* v_leap_180_, lean_object* v_self_181_){
_start:
{
uint8_t v_leap_boxed_182_; lean_object* v_res_183_; 
v_leap_boxed_182_ = lean_unbox(v_leap_180_);
v_res_183_ = l_Std_Time_Day_Ordinal_OfYear_toBounded(v_leap_boxed_182_, v_self_181_);
lean_dec(v_self_181_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg(){
_start:
{
lean_object* v___f_185_; 
v___f_185_ = ((lean_object*)(l_Std_Time_Day_instReprOrdinal___closed__0));
return v___f_185_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object* v___dummy_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t v_leap_188_){
_start:
{
lean_object* v___f_189_; 
v___f_189_ = ((lean_object*)(l_Std_Time_Day_instReprOrdinal___closed__0));
return v___f_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object* v_leap_190_){
_start:
{
uint8_t v_leap_boxed_191_; lean_object* v_res_192_; 
v_leap_boxed_191_ = lean_unbox(v_leap_190_);
v_res_192_ = l_Std_Time_Day_Ordinal_instReprOfYear(v_leap_boxed_191_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg(){
_start:
{
lean_object* v___f_194_; 
v___f_194_ = ((lean_object*)(l_Std_Time_Day_instToStringOffset___closed__0));
return v___f_194_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object* v___dummy_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t v_leap_197_){
_start:
{
lean_object* v___f_198_; 
v___f_198_ = ((lean_object*)(l_Std_Time_Day_instToStringOffset___closed__0));
return v___f_198_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object* v_leap_199_){
_start:
{
uint8_t v_leap_boxed_200_; lean_object* v_res_201_; 
v_leap_boxed_200_ = lean_unbox(v_leap_199_);
v_res_201_ = l_Std_Time_Day_Ordinal_instToStringOfYear(v_leap_boxed_200_);
return v_res_201_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(lean_object* v_a_202_, lean_object* v_b_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = lean_int_dec_eq(v_a_202_, v_b_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg___boxed(lean_object* v_a_205_, lean_object* v_b_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(v_a_205_, v_b_206_);
lean_dec(v_b_206_);
lean_dec(v_a_205_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t v_leap_209_, lean_object* v_a_210_, lean_object* v_b_211_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = lean_int_dec_eq(v_a_210_, v_b_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object* v_leap_213_, lean_object* v_a_214_, lean_object* v_b_215_){
_start:
{
uint8_t v_leap_boxed_216_; uint8_t v_res_217_; lean_object* v_r_218_; 
v_leap_boxed_216_ = lean_unbox(v_leap_213_);
v_res_217_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear(v_leap_boxed_216_, v_a_214_, v_b_215_);
lean_dec(v_b_215_);
lean_dec(v_a_214_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg(){
_start:
{
lean_object* v___f_220_; 
v___f_220_ = ((lean_object*)(l_Std_Time_Day_instOrdOrdinal___closed__0));
return v___f_220_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___redArg___boxed(lean_object* v___dummy_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_Time_Day_Ordinal_instOrdOfYear___redArg();
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear(uint8_t v_leap_223_){
_start:
{
lean_object* v___f_224_; 
v___f_224_ = ((lean_object*)(l_Std_Time_Day_instOrdOrdinal___closed__0));
return v___f_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___boxed(lean_object* v_leap_225_){
_start:
{
uint8_t v_leap_boxed_226_; lean_object* v_res_227_; 
v_leap_boxed_226_ = lean_unbox(v_leap_225_);
v_res_227_ = l_Std_Time_Day_Ordinal_instOrdOfYear(v_leap_boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg(lean_object* v_ordinal_228_){
_start:
{
lean_inc(v_ordinal_228_);
return v_ordinal_228_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___redArg___boxed(lean_object* v_ordinal_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Std_Time_Day_Ordinal_OfYear_val___redArg(v_ordinal_229_);
lean_dec(v_ordinal_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val(uint8_t v_leap_231_, lean_object* v_ordinal_232_){
_start:
{
lean_inc(v_ordinal_232_);
return v_ordinal_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_val___boxed(lean_object* v_leap_233_, lean_object* v_ordinal_234_){
_start:
{
uint8_t v_leap_boxed_235_; lean_object* v_res_236_; 
v_leap_boxed_235_ = lean_unbox(v_leap_233_);
v_res_236_ = l_Std_Time_Day_Ordinal_OfYear_val(v_leap_boxed_235_, v_ordinal_234_);
lean_dec(v_ordinal_234_);
return v_res_236_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10));
v___x_264_ = l_Lean_mkAtom(v___x_263_);
return v___x_264_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12);
v___x_266_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_267_ = lean_array_push(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16));
v___x_279_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_280_ = lean_array_push(v___x_279_, v___x_278_);
return v___x_280_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_281_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17);
v___x_282_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15));
v___x_283_ = lean_box(2);
v___x_284_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___x_282_);
lean_ctor_set(v___x_284_, 2, v___x_281_);
return v___x_284_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18);
v___x_286_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13);
v___x_287_ = lean_array_push(v___x_286_, v___x_285_);
return v___x_287_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_288_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19);
v___x_289_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11));
v___x_290_ = lean_box(2);
v___x_291_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_289_);
lean_ctor_set(v___x_291_, 2, v___x_288_);
return v___x_291_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20);
v___x_293_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_294_ = lean_array_push(v___x_293_, v___x_292_);
return v___x_294_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_295_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21);
v___x_296_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9));
v___x_297_ = lean_box(2);
v___x_298_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v___x_296_);
lean_ctor_set(v___x_298_, 2, v___x_295_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22);
v___x_300_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_301_ = lean_array_push(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_302_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23);
v___x_303_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7));
v___x_304_ = lean_box(2);
v___x_305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_303_);
lean_ctor_set(v___x_305_, 2, v___x_302_);
return v___x_305_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24);
v___x_307_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_308_ = lean_array_push(v___x_307_, v___x_306_);
return v___x_308_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25);
v___x_310_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4));
v___x_311_ = lean_box(2);
v___x_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v___x_310_);
lean_ctor_set(v___x_312_, 2, v___x_309_);
return v___x_312_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___redArg(lean_object* v_data_314_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = lean_nat_to_int(v_data_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat(uint8_t v_leap_316_, lean_object* v_data_317_, lean_object* v_h_318_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_nat_to_int(v_data_317_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___boxed(lean_object* v_leap_320_, lean_object* v_data_321_, lean_object* v_h_322_){
_start:
{
uint8_t v_leap_boxed_323_; lean_object* v_res_324_; 
v_leap_boxed_323_ = lean_unbox(v_leap_320_);
v_res_324_ = l_Std_Time_Day_Ordinal_OfYear_ofNat(v_leap_boxed_323_, v_data_321_, v_h_322_);
return v_res_324_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(364u);
v___x_326_ = lean_nat_to_int(v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__0);
v___x_328_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_329_ = lean_int_add(v___x_328_, v___x_327_);
return v___x_329_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_331_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__1);
v___x_332_ = lean_int_sub(v___x_331_, v___x_330_);
return v___x_332_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v_range_335_; 
v___x_333_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_334_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__2);
v_range_335_ = lean_int_add(v___x_334_, v___x_333_);
return v_range_335_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(365u);
v___x_337_ = lean_nat_to_int(v___x_336_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__4);
v___x_339_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_340_ = lean_int_add(v___x_339_, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_342_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__5);
v___x_343_ = lean_int_sub(v___x_342_, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v_range_346_; 
v___x_344_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_345_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__6);
v_range_346_ = lean_int_add(v___x_345_, v___x_344_);
return v_range_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear(uint8_t v_leap_347_, lean_object* v_n_348_){
_start:
{
if (v_leap_347_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_range_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_349_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_350_ = lean_nat_to_int(v_n_348_);
v_range_351_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__3);
v___x_352_ = lean_int_sub(v___x_350_, v___x_349_);
lean_dec(v___x_350_);
v___x_353_ = lean_int_emod(v___x_352_, v_range_351_);
lean_dec(v___x_352_);
v___x_354_ = lean_int_add(v___x_353_, v_range_351_);
lean_dec(v___x_353_);
v___x_355_ = lean_int_emod(v___x_354_, v_range_351_);
lean_dec(v___x_354_);
v___x_356_ = lean_int_add(v___x_355_, v___x_349_);
lean_dec(v___x_355_);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_range_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_357_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
v___x_358_ = lean_nat_to_int(v_n_348_);
v_range_359_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7, &l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___closed__7);
v___x_360_ = lean_int_sub(v___x_358_, v___x_357_);
lean_dec(v___x_358_);
v___x_361_ = lean_int_emod(v___x_360_, v_range_359_);
lean_dec(v___x_360_);
v___x_362_ = lean_int_add(v___x_361_, v_range_359_);
lean_dec(v___x_361_);
v___x_363_ = lean_int_emod(v___x_362_, v_range_359_);
lean_dec(v___x_362_);
v___x_364_ = lean_int_add(v___x_363_, v___x_357_);
lean_dec(v___x_363_);
return v___x_364_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___boxed(lean_object* v_leap_365_, lean_object* v_n_366_){
_start:
{
uint8_t v_leap_boxed_367_; lean_object* v_res_368_; 
v_leap_boxed_367_ = lean_unbox(v_leap_365_);
v_res_368_ = l_Std_Time_Day_Ordinal_instOfNatOfYear(v_leap_boxed_367_, v_n_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg(){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___closed__0, &l_Std_Time_Day_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___closed__0);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg___boxed(lean_object* v___dummy_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v_res_372_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear(uint8_t v_leap_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0, &l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___boxed(lean_object* v_leap_376_){
_start:
{
uint8_t v_leap_boxed_377_; lean_object* v_res_378_; 
v_leap_boxed_377_ = lean_unbox(v_leap_376_);
v_res_378_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear(v_leap_boxed_377_);
return v_res_378_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat___redArg(lean_object* v_data_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_nat_to_int(v_data_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat(lean_object* v_data_382_, lean_object* v_h_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_nat_to_int(v_data_382_);
return v___x_384_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_unsigned_to_nat(1u);
v___x_386_ = lean_nat_to_int(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofFin(lean_object* v_data_387_){
_start:
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = lean_nat_dec_le(v___x_388_, v_data_387_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; 
lean_dec(v_data_387_);
v___x_390_ = lean_obj_once(&l_Std_Time_Day_Ordinal_ofFin___closed__0, &l_Std_Time_Day_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Day_Ordinal_ofFin___closed__0);
return v___x_390_;
}
else
{
lean_object* v___x_391_; 
v___x_391_ = lean_nat_to_int(v_data_387_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset(lean_object* v_ordinal_392_){
_start:
{
lean_inc(v_ordinal_392_);
return v_ordinal_392_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset___boxed(lean_object* v_ordinal_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Std_Time_Day_Ordinal_toOffset(v_ordinal_393_);
lean_dec(v_ordinal_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(lean_object* v_ofYear_395_){
_start:
{
lean_inc(v_ofYear_395_);
return v_ofYear_395_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg___boxed(lean_object* v_ofYear_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(v_ofYear_396_);
lean_dec(v_ofYear_396_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset(uint8_t v_leap_398_, lean_object* v_ofYear_399_){
_start:
{
lean_inc(v_ofYear_399_);
return v_ofYear_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___boxed(lean_object* v_leap_400_, lean_object* v_ofYear_401_){
_start:
{
uint8_t v_leap_boxed_402_; lean_object* v_res_403_; 
v_leap_boxed_402_ = lean_unbox(v_leap_400_);
v_res_403_ = l_Std_Time_Day_Ordinal_OfYear_toOffset(v_leap_boxed_402_, v_ofYear_401_);
lean_dec(v_ofYear_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0_spec__0(lean_object* v_a_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_nat_to_int(v_a_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0(lean_object* v_a_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_nat_to_int(v_a_406_);
v___x_408_ = l_Rat_ofInt(v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg(lean_object* v_off_409_){
_start:
{
lean_inc(v_off_409_);
return v_off_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg___boxed(lean_object* v_off_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_Time_Day_Offset_toOrdinal___redArg(v_off_410_);
lean_dec(v_off_410_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal(lean_object* v_off_412_, lean_object* v_h_413_){
_start:
{
lean_inc(v_off_412_);
return v_off_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___boxed(lean_object* v_off_414_, lean_object* v_h_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Std_Time_Day_Offset_toOrdinal(v_off_414_, v_h_415_);
lean_dec(v_off_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNat(lean_object* v_data_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_nat_to_int(v_data_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt(lean_object* v_data_419_){
_start:
{
lean_inc(v_data_419_);
return v_data_419_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt___boxed(lean_object* v_data_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Std_Time_Day_Offset_ofInt(v_data_420_);
lean_dec(v_data_420_);
return v_res_421_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_cstr_to_nat("86400000000000");
v___x_423_ = lean_nat_to_int(v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds(lean_object* v_days_424_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_426_ = lean_int_mul(v_days_424_, v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds___boxed(lean_object* v_days_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Std_Time_Day_Offset_toNanoseconds(v_days_427_);
lean_dec(v_days_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds(lean_object* v_ns_429_){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_431_ = lean_int_ediv(v_ns_429_, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds___boxed(lean_object* v_ns_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_Time_Day_Offset_ofNanoseconds(v_ns_432_);
lean_dec(v_ns_432_);
return v_res_433_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_unsigned_to_nat(86400000u);
v___x_435_ = lean_nat_to_int(v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds(lean_object* v_days_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_438_ = lean_int_mul(v_days_436_, v___x_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds___boxed(lean_object* v_days_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Std_Time_Day_Offset_toMilliseconds(v_days_439_);
lean_dec(v_days_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds(lean_object* v_ms_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_443_ = lean_int_ediv(v_ms_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds___boxed(lean_object* v_ms_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Std_Time_Day_Offset_ofMilliseconds(v_ms_444_);
lean_dec(v_ms_444_);
return v_res_445_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_unsigned_to_nat(86400u);
v___x_447_ = lean_nat_to_int(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds(lean_object* v_days_448_){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_450_ = lean_int_mul(v_days_448_, v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object* v_days_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Std_Time_Day_Offset_toSeconds(v_days_451_);
lean_dec(v_days_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds(lean_object* v_secs_453_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_455_ = lean_int_ediv(v_secs_453_, v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds___boxed(lean_object* v_secs_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Std_Time_Day_Offset_ofSeconds(v_secs_456_);
lean_dec(v_secs_456_);
return v_res_457_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_unsigned_to_nat(1440u);
v___x_459_ = lean_nat_to_int(v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes(lean_object* v_days_460_){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_462_ = lean_int_mul(v_days_460_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes___boxed(lean_object* v_days_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Std_Time_Day_Offset_toMinutes(v_days_463_);
lean_dec(v_days_463_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes(lean_object* v_minutes_465_){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_467_ = lean_int_ediv(v_minutes_465_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes___boxed(lean_object* v_minutes_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_Time_Day_Offset_ofMinutes(v_minutes_468_);
lean_dec(v_minutes_468_);
return v_res_469_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_unsigned_to_nat(24u);
v___x_471_ = lean_nat_to_int(v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours(lean_object* v_days_472_){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_474_ = lean_int_mul(v_days_472_, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours___boxed(lean_object* v_days_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Std_Time_Day_Offset_toHours(v_days_475_);
lean_dec(v_days_475_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours(lean_object* v_hours_477_){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_479_ = lean_int_ediv(v_hours_477_, v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours___boxed(lean_object* v_hours_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Std_Time_Day_Offset_ofHours(v_hours_480_);
lean_dec(v_hours_480_);
return v_res_481_;
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
