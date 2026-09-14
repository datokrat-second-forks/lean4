// Lean compiler output
// Module: Std.Time.Date.Unit.Day
// Imports: public import Std.Time.Time
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
uint8_t lean_int_dec_le(lean_object*, lean_object*);
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
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Day_instReprOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instReprOrdinal___aux__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Day_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instReprOrdinal = (const lean_object*)&l_Std_Time_Day_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Day_instLTOrdinal;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3;
static lean_once_cell_t l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOrdinal___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_instOrdOrdinal___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Day_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Day_instOrdOrdinal = (const lean_object*)&l_Std_Time_Day_instOrdOrdinal___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0 = (const lean_object*)&l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear(uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___boxed(lean_object*);
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
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1(lean_object*);
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2;
static lean_once_cell_t l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3(lean_object*);
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
static lean_object* _init_l_Std_Time_Day_instReprOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___aux__1(lean_object* v_n_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Day_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___aux__1___closed__0);
v___x_6_ = lean_int_dec_lt(v_n_3_, v___x_5_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = l_Int_repr(v_n_3_);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = l_Int_repr(v_n_3_);
v___x_10_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
v___x_11_ = l_Repr_addAppParen(v___x_10_, v_a_4_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___aux__1___boxed(lean_object* v_n_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_Time_Day_instReprOrdinal___aux__1(v_n_12_, v_a_13_);
lean_dec(v_a_13_);
lean_dec(v_n_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0(lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Day_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___aux__1___closed__0);
v___x_18_ = lean_int_dec_lt(v___y_15_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = l_Int_repr(v___y_15_);
v___x_20_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
else
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = l_Int_repr(v___y_15_);
v___x_22_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
v___x_23_ = l_Repr_addAppParen(v___x_22_, v___y_16_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOrdinal___lam__0___boxed(lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Std_Time_Day_instReprOrdinal___lam__0(v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec(v___y_24_);
return v_res_26_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal___aux__1(lean_object* v_a_29_, lean_object* v_b_30_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_int_dec_eq(v_a_29_, v_b_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___aux__1___boxed(lean_object* v_a_32_, lean_object* v_b_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = l_Std_Time_Day_instDecidableEqOrdinal___aux__1(v_a_32_, v_b_33_);
lean_dec(v_b_33_);
lean_dec(v_a_32_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOrdinal(lean_object* v_a_36_, lean_object* v_b_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_int_dec_eq(v_a_36_, v_b_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOrdinal___boxed(lean_object* v_a_39_, lean_object* v_b_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l_Std_Time_Day_instDecidableEqOrdinal(v_a_39_, v_b_40_);
lean_dec(v_b_40_);
lean_dec(v_a_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOrdinal(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOrdinal(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_box(0);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(30u);
v___x_48_ = lean_nat_to_int(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__1);
v___x_50_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_51_ = lean_int_add(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_53_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__2);
v___x_54_ = lean_int_sub(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v_range_57_; 
v___x_55_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_56_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__3);
v_range_57_ = lean_int_add(v___x_56_, v___x_55_);
return v_range_57_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal___aux__1(lean_object* v_n_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v_range_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_59_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_60_ = lean_nat_to_int(v_n_58_);
v_range_61_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4);
v___x_62_ = lean_int_sub(v___x_60_, v___x_59_);
lean_dec(v___x_60_);
v___x_63_ = lean_int_emod(v___x_62_, v_range_61_);
lean_dec(v___x_62_);
v___x_64_ = lean_int_add(v___x_63_, v_range_61_);
lean_dec(v___x_63_);
v___x_65_ = lean_int_emod(v___x_64_, v_range_61_);
lean_dec(v___x_64_);
v___x_66_ = lean_int_add(v___x_65_, v___x_59_);
lean_dec(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOrdinal(lean_object* v_n_67_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_range_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_68_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_69_ = lean_nat_to_int(v_n_67_);
v_range_70_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4);
v___x_71_ = lean_int_sub(v___x_69_, v___x_68_);
lean_dec(v___x_69_);
v___x_72_ = lean_int_emod(v___x_71_, v_range_70_);
lean_dec(v___x_71_);
v___x_73_ = lean_int_add(v___x_72_, v_range_70_);
lean_dec(v___x_72_);
v___x_74_ = lean_int_emod(v___x_73_, v_range_70_);
lean_dec(v___x_73_);
v___x_75_ = lean_int_add(v___x_74_, v___x_68_);
lean_dec(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOrdinal___aux__1(lean_object* v_x_76_, lean_object* v_y_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = lean_int_dec_le(v_x_76_, v_y_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOrdinal___aux__1___boxed(lean_object* v_x_79_, lean_object* v_y_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_Std_Time_Day_instDecidableLeOrdinal___aux__1(v_x_79_, v_y_80_);
lean_dec(v_y_80_);
lean_dec(v_x_79_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOrdinal(lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
uint8_t v___x_85_; 
v___x_85_ = lean_int_dec_le(v___y_83_, v___y_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOrdinal___boxed(lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Std_Time_Day_instDecidableLeOrdinal(v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec(v___y_86_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOrdinal___aux__1(lean_object* v_x_90_, lean_object* v_y_91_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_int_dec_lt(v_x_90_, v_y_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOrdinal___aux__1___boxed(lean_object* v_x_93_, lean_object* v_y_94_){
_start:
{
uint8_t v_res_95_; lean_object* v_r_96_; 
v_res_95_ = l_Std_Time_Day_instDecidableLtOrdinal___aux__1(v_x_93_, v_y_94_);
lean_dec(v_y_94_);
lean_dec(v_x_93_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOrdinal(lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
uint8_t v___x_99_; 
v___x_99_ = lean_int_dec_lt(v___y_97_, v___y_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOrdinal___boxed(lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
uint8_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = l_Std_Time_Day_instDecidableLtOrdinal(v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec(v___y_100_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_105_ = lean_int_sub(v___x_104_, v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_range_106_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4);
v___x_107_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__0, &l_Std_Time_Day_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__0);
v___x_108_ = lean_int_emod(v___x_107_, v_range_106_);
return v___x_108_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_range_109_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4);
v___x_110_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__1, &l_Std_Time_Day_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__1);
v___x_111_ = lean_int_add(v___x_110_, v_range_109_);
return v___x_111_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_range_112_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__4);
v___x_113_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__2, &l_Std_Time_Day_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__2);
v___x_114_ = lean_int_emod(v___x_113_, v_range_112_);
return v___x_114_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_116_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__3, &l_Std_Time_Day_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__3);
v___x_117_ = lean_int_add(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOrdinal___closed__4, &l_Std_Time_Day_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Day_instInhabitedOrdinal___closed__4);
return v___x_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOrdinal___aux__1(lean_object* v_x_119_, lean_object* v_y_120_){
_start:
{
uint8_t v___x_121_; 
v___x_121_ = lean_int_dec_lt(v_x_119_, v_y_120_);
if (v___x_121_ == 0)
{
uint8_t v___x_122_; 
v___x_122_ = lean_int_dec_eq(v_x_119_, v_y_120_);
if (v___x_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = 2;
return v___x_123_;
}
else
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOrdinal___aux__1___boxed(lean_object* v_x_126_, lean_object* v_y_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Std_Time_Day_instOrdOrdinal___aux__1(v_x_126_, v_y_127_);
lean_dec(v_y_127_);
lean_dec(v_x_126_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk(lean_object* v_toUnitVal_132_){
_start:
{
lean_inc(v_toUnitVal_132_);
return v_toUnitVal_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_mk___boxed(lean_object* v_toUnitVal_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Std_Time_Day_Offset_mk(v_toUnitVal_133_);
lean_dec(v_toUnitVal_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal(lean_object* v_self_135_){
_start:
{
lean_inc(v_self_135_);
return v_self_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toUnitVal___boxed(lean_object* v_self_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Std_Time_Day_Offset_toUnitVal(v_self_136_);
lean_dec(v_self_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val(lean_object* v_offset_138_){
_start:
{
lean_inc(v_offset_138_);
return v_offset_138_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_val___boxed(lean_object* v_offset_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_Time_Day_Offset_val(v_offset_139_);
lean_dec(v_offset_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0(lean_object* v_offset_141_, lean_object* v_prec_142_){
_start:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Day_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___aux__1___closed__0);
v___x_144_ = lean_int_dec_lt(v_offset_141_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = l_Int_repr(v_offset_141_);
v___x_146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = l_Int_repr(v_offset_141_);
v___x_148_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
v___x_149_ = l_Repr_addAppParen(v___x_148_, v_prec_142_);
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instReprOffset___lam__0___boxed(lean_object* v_offset_150_, lean_object* v_prec_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Std_Time_Day_instReprOffset___lam__0(v_offset_150_, v_prec_151_);
lean_dec(v_prec_151_);
lean_dec(v_offset_150_);
return v_res_152_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_157_;
}
}
static lean_object* _init_l_Std_Time_Day_instInhabitedOffset(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Std_Time_Day_instInhabitedOffset___closed__0, &l_Std_Time_Day_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Day_instInhabitedOffset___closed__0);
return v___x_158_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableEqOffset(lean_object* v_x_159_, lean_object* v_y_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = lean_int_dec_eq(v_x_159_, v_y_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableEqOffset___boxed(lean_object* v_x_162_, lean_object* v_y_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_Std_Time_Day_instDecidableEqOffset(v_x_162_, v_y_163_);
lean_dec(v_y_163_);
lean_dec(v_x_162_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
static lean_object* _init_l_Std_Time_Day_instLEOffset(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_box(0);
return v___x_172_;
}
}
static lean_object* _init_l_Std_Time_Day_instLTOffset(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_box(0);
return v___x_173_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instOrdOffset___lam__0(lean_object* v_x_174_, lean_object* v_y_175_){
_start:
{
uint8_t v___x_176_; 
v___x_176_ = lean_int_dec_lt(v_x_174_, v_y_175_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
v___x_177_ = lean_int_dec_eq(v_x_174_, v_y_175_);
if (v___x_177_ == 0)
{
uint8_t v___x_178_; 
v___x_178_ = 2;
return v___x_178_;
}
else
{
uint8_t v___x_179_; 
v___x_179_ = 1;
return v___x_179_;
}
}
else
{
uint8_t v___x_180_; 
v___x_180_ = 0;
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOrdOffset___lam__0___boxed(lean_object* v_x_181_, lean_object* v_y_182_){
_start:
{
uint8_t v_res_183_; lean_object* v_r_184_; 
v_res_183_ = l_Std_Time_Day_instOrdOffset___lam__0(v_x_181_, v_y_182_);
lean_dec(v_y_182_);
lean_dec(v_x_181_);
v_r_184_ = lean_box(v_res_183_);
return v_r_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instOfNatOffset(lean_object* v_n_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_nat_to_int(v_n_187_);
return v___x_188_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLeOffset(lean_object* v_x_189_, lean_object* v_y_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = lean_int_dec_le(v_x_189_, v_y_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLeOffset___boxed(lean_object* v_x_192_, lean_object* v_y_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Std_Time_Day_instDecidableLeOffset(v_x_192_, v_y_193_);
lean_dec(v_y_193_);
lean_dec(v_x_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_instDecidableLtOffset(lean_object* v_x_196_, lean_object* v_y_197_){
_start:
{
uint8_t v___x_198_; 
v___x_198_ = lean_int_dec_lt(v_x_196_, v_y_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_instDecidableLtOffset___boxed(lean_object* v_x_199_, lean_object* v_y_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = l_Std_Time_Day_instDecidableLtOffset(v_x_199_, v_y_200_);
lean_dec(v_y_200_);
lean_dec(v_x_199_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg(lean_object* v_data_203_){
_start:
{
lean_inc(v_data_203_);
return v_data_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___redArg___boxed(lean_object* v_data_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Std_Time_Day_Ordinal_ofInt___redArg(v_data_204_);
lean_dec(v_data_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt(lean_object* v_data_206_, lean_object* v_h_207_){
_start:
{
lean_inc(v_data_206_);
return v_data_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofInt___boxed(lean_object* v_data_208_, lean_object* v_h_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Time_Day_Ordinal_ofInt(v_data_208_, v_h_209_);
lean_dec(v_data_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0(lean_object* v_r_211_, lean_object* v_p_212_){
_start:
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = lean_obj_once(&l_Std_Time_Day_instReprOrdinal___aux__1___closed__0, &l_Std_Time_Day_instReprOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instReprOrdinal___aux__1___closed__0);
v___x_214_ = lean_int_dec_lt(v_r_211_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = l_Int_repr(v_r_211_);
v___x_216_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = l_Int_repr(v_r_211_);
v___x_218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
v___x_219_ = l_Repr_addAppParen(v___x_218_, v_p_212_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0___boxed(lean_object* v_r_220_, lean_object* v_p_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_Time_Day_Ordinal_instReprOfYear___redArg___lam__0(v_r_220_, v_p_221_);
lean_dec(v_p_221_);
lean_dec(v_r_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg(){
_start:
{
lean_object* v___f_225_; 
v___f_225_ = ((lean_object*)(l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0));
return v___f_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___redArg___boxed(lean_object* v___dummy_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Std_Time_Day_Ordinal_instReprOfYear___redArg();
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear(uint8_t v_leap_228_){
_start:
{
lean_object* v___f_229_; 
v___f_229_ = ((lean_object*)(l_Std_Time_Day_Ordinal_instReprOfYear___redArg___closed__0));
return v___f_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instReprOfYear___boxed(lean_object* v_leap_230_){
_start:
{
uint8_t v_leap_boxed_231_; lean_object* v_res_232_; 
v_leap_boxed_231_ = lean_unbox(v_leap_230_);
v_res_232_ = l_Std_Time_Day_Ordinal_instReprOfYear(v_leap_boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg(){
_start:
{
lean_object* v___f_234_; 
v___f_234_ = ((lean_object*)(l_Std_Time_Day_instToStringOffset___closed__0));
return v___f_234_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___redArg___boxed(lean_object* v___dummy_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Std_Time_Day_Ordinal_instToStringOfYear___redArg();
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear(uint8_t v_leap_237_){
_start:
{
lean_object* v___f_238_; 
v___f_238_ = ((lean_object*)(l_Std_Time_Day_instToStringOffset___closed__0));
return v___f_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instToStringOfYear___boxed(lean_object* v_leap_239_){
_start:
{
uint8_t v_leap_boxed_240_; lean_object* v_res_241_; 
v_leap_boxed_240_ = lean_unbox(v_leap_239_);
v_res_241_ = l_Std_Time_Day_Ordinal_instToStringOfYear(v_leap_boxed_240_);
return v_res_241_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___redArg(lean_object* v_a_242_, lean_object* v_b_243_){
_start:
{
uint8_t v___x_244_; 
v___x_244_ = lean_int_dec_eq(v_a_242_, v_b_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___redArg___boxed(lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___redArg(v_a_245_, v_b_246_);
lean_dec(v_b_246_);
lean_dec(v_a_245_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1(uint8_t v_leap_249_, lean_object* v_a_250_, lean_object* v_b_251_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = lean_int_dec_eq(v_a_250_, v_b_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1___boxed(lean_object* v_leap_253_, lean_object* v_a_254_, lean_object* v_b_255_){
_start:
{
uint8_t v_leap_boxed_256_; uint8_t v_res_257_; lean_object* v_r_258_; 
v_leap_boxed_256_ = lean_unbox(v_leap_253_);
v_res_257_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear___aux__1(v_leap_boxed_256_, v_a_254_, v_b_255_);
lean_dec(v_b_255_);
lean_dec(v_a_254_);
v_r_258_ = lean_box(v_res_257_);
return v_r_258_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(lean_object* v_a_259_, lean_object* v_b_260_){
_start:
{
uint8_t v___x_261_; 
v___x_261_ = lean_int_dec_eq(v_a_259_, v_b_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg___boxed(lean_object* v_a_262_, lean_object* v_b_263_){
_start:
{
uint8_t v_res_264_; lean_object* v_r_265_; 
v_res_264_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear___redArg(v_a_262_, v_b_263_);
lean_dec(v_b_263_);
lean_dec(v_a_262_);
v_r_265_ = lean_box(v_res_264_);
return v_r_265_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instDecidableEqOfYear(uint8_t v_leap_266_, lean_object* v_a_267_, lean_object* v_b_268_){
_start:
{
uint8_t v___x_269_; 
v___x_269_ = lean_int_dec_eq(v_a_267_, v_b_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instDecidableEqOfYear___boxed(lean_object* v_leap_270_, lean_object* v_a_271_, lean_object* v_b_272_){
_start:
{
uint8_t v_leap_boxed_273_; uint8_t v_res_274_; lean_object* v_r_275_; 
v_leap_boxed_273_ = lean_unbox(v_leap_270_);
v_res_274_ = l_Std_Time_Day_Ordinal_instDecidableEqOfYear(v_leap_boxed_273_, v_a_271_, v_b_272_);
lean_dec(v_b_272_);
lean_dec(v_a_271_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___redArg(lean_object* v_x_276_, lean_object* v_y_277_){
_start:
{
uint8_t v___x_278_; 
v___x_278_ = lean_int_dec_lt(v_x_276_, v_y_277_);
if (v___x_278_ == 0)
{
uint8_t v___x_279_; 
v___x_279_ = lean_int_dec_eq(v_x_276_, v_y_277_);
if (v___x_279_ == 0)
{
uint8_t v___x_280_; 
v___x_280_ = 2;
return v___x_280_;
}
else
{
uint8_t v___x_281_; 
v___x_281_ = 1;
return v___x_281_;
}
}
else
{
uint8_t v___x_282_; 
v___x_282_ = 0;
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___redArg___boxed(lean_object* v_x_283_, lean_object* v_y_284_){
_start:
{
uint8_t v_res_285_; lean_object* v_r_286_; 
v_res_285_ = l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___redArg(v_x_283_, v_y_284_);
lean_dec(v_y_284_);
lean_dec(v_x_283_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1(uint8_t v_leap_287_, lean_object* v_x_288_, lean_object* v_y_289_){
_start:
{
uint8_t v___x_290_; 
v___x_290_ = lean_int_dec_lt(v_x_288_, v_y_289_);
if (v___x_290_ == 0)
{
uint8_t v___x_291_; 
v___x_291_ = lean_int_dec_eq(v_x_288_, v_y_289_);
if (v___x_291_ == 0)
{
uint8_t v___x_292_; 
v___x_292_ = 2;
return v___x_292_;
}
else
{
uint8_t v___x_293_; 
v___x_293_ = 1;
return v___x_293_;
}
}
else
{
uint8_t v___x_294_; 
v___x_294_ = 0;
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___boxed(lean_object* v_leap_295_, lean_object* v_x_296_, lean_object* v_y_297_){
_start:
{
uint8_t v_leap_boxed_298_; uint8_t v_res_299_; lean_object* v_r_300_; 
v_leap_boxed_298_ = lean_unbox(v_leap_295_);
v_res_299_ = l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1(v_leap_boxed_298_, v_x_296_, v_y_297_);
lean_dec(v_y_297_);
lean_dec(v_x_296_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear(uint8_t v_leap_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_box(v_leap_301_);
v___x_303_ = lean_alloc_closure((void*)(l_Std_Time_Day_Ordinal_instOrdOfYear___aux__1___boxed), 3, 1);
lean_closure_set(v___x_303_, 0, v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOrdOfYear___boxed(lean_object* v_leap_304_){
_start:
{
uint8_t v_leap_boxed_305_; lean_object* v_res_306_; 
v_leap_boxed_305_ = lean_unbox(v_leap_304_);
v_res_306_ = l_Std_Time_Day_Ordinal_instOrdOfYear(v_leap_boxed_305_);
return v_res_306_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__10));
v___x_334_ = l_Lean_mkAtom(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__12);
v___x_336_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_337_ = lean_array_push(v___x_336_, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__16));
v___x_349_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_350_ = lean_array_push(v___x_349_, v___x_348_);
return v___x_350_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__17);
v___x_352_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__15));
v___x_353_ = lean_box(2);
v___x_354_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
lean_ctor_set(v___x_354_, 2, v___x_351_);
return v___x_354_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__18);
v___x_356_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__13);
v___x_357_ = lean_array_push(v___x_356_, v___x_355_);
return v___x_357_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_358_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__19);
v___x_359_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__11));
v___x_360_ = lean_box(2);
v___x_361_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v___x_359_);
lean_ctor_set(v___x_361_, 2, v___x_358_);
return v___x_361_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__20);
v___x_363_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_364_ = lean_array_push(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_365_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__21);
v___x_366_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__9));
v___x_367_ = lean_box(2);
v___x_368_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set(v___x_368_, 2, v___x_365_);
return v___x_368_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__22);
v___x_370_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_371_ = lean_array_push(v___x_370_, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_372_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__23);
v___x_373_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__7));
v___x_374_ = lean_box(2);
v___x_375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_373_);
lean_ctor_set(v___x_375_, 2, v___x_372_);
return v___x_375_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__24);
v___x_377_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__5));
v___x_378_ = lean_array_push(v___x_377_, v___x_376_);
return v___x_378_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__25);
v___x_380_ = ((lean_object*)(l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__4));
v___x_381_ = lean_box(2);
v___x_382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
lean_ctor_set(v___x_382_, 2, v___x_379_);
return v___x_382_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3(void){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___redArg(lean_object* v_data_384_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = lean_nat_to_int(v_data_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat(uint8_t v_leap_386_, lean_object* v_data_387_, lean_object* v_h_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_nat_to_int(v_data_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_ofNat___boxed(lean_object* v_leap_390_, lean_object* v_data_391_, lean_object* v_h_392_){
_start:
{
uint8_t v_leap_boxed_393_; lean_object* v_res_394_; 
v_leap_boxed_393_ = lean_unbox(v_leap_390_);
v_res_394_ = l_Std_Time_Day_Ordinal_OfYear_ofNat(v_leap_boxed_393_, v_data_391_, v_h_392_);
return v_res_394_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_unsigned_to_nat(365u);
v___x_396_ = lean_nat_to_int(v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__0);
v___x_398_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_399_ = lean_int_add(v___x_398_, v___x_397_);
return v___x_399_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_401_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__1);
v___x_402_ = lean_int_sub(v___x_401_, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v_range_405_; 
v___x_403_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_404_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__2);
v_range_405_ = lean_int_add(v___x_404_, v___x_403_);
return v_range_405_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1(lean_object* v_n_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v_range_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_407_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_408_ = lean_nat_to_int(v_n_406_);
v_range_409_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3);
v___x_410_ = lean_int_sub(v___x_408_, v___x_407_);
lean_dec(v___x_408_);
v___x_411_ = lean_int_emod(v___x_410_, v_range_409_);
lean_dec(v___x_410_);
v___x_412_ = lean_int_add(v___x_411_, v_range_409_);
lean_dec(v___x_411_);
v___x_413_ = lean_int_emod(v___x_412_, v_range_409_);
lean_dec(v___x_412_);
v___x_414_ = lean_int_add(v___x_413_, v___x_407_);
lean_dec(v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_unsigned_to_nat(364u);
v___x_416_ = lean_nat_to_int(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__0);
v___x_418_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_419_ = lean_int_add(v___x_418_, v___x_417_);
return v___x_419_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_421_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__1);
v___x_422_ = lean_int_sub(v___x_421_, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_range_425_; 
v___x_423_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_424_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__2);
v_range_425_ = lean_int_add(v___x_424_, v___x_423_);
return v_range_425_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3(lean_object* v_n_426_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v_range_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_427_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_428_ = lean_nat_to_int(v_n_426_);
v_range_429_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3);
v___x_430_ = lean_int_sub(v___x_428_, v___x_427_);
lean_dec(v___x_428_);
v___x_431_ = lean_int_emod(v___x_430_, v_range_429_);
lean_dec(v___x_430_);
v___x_432_ = lean_int_add(v___x_431_, v_range_429_);
lean_dec(v___x_431_);
v___x_433_ = lean_int_emod(v___x_432_, v_range_429_);
lean_dec(v___x_432_);
v___x_434_ = lean_int_add(v___x_433_, v___x_427_);
lean_dec(v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear(uint8_t v_leap_435_, lean_object* v_n_436_){
_start:
{
if (v_leap_435_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_range_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_437_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_438_ = lean_nat_to_int(v_n_436_);
v_range_439_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__3___closed__3);
v___x_440_ = lean_int_sub(v___x_438_, v___x_437_);
lean_dec(v___x_438_);
v___x_441_ = lean_int_emod(v___x_440_, v_range_439_);
lean_dec(v___x_440_);
v___x_442_ = lean_int_add(v___x_441_, v_range_439_);
lean_dec(v___x_441_);
v___x_443_ = lean_int_emod(v___x_442_, v_range_439_);
lean_dec(v___x_442_);
v___x_444_ = lean_int_add(v___x_443_, v___x_437_);
lean_dec(v___x_443_);
return v___x_444_;
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v_range_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_445_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
v___x_446_ = lean_nat_to_int(v_n_436_);
v_range_447_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3, &l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3_once, _init_l_Std_Time_Day_Ordinal_instOfNatOfYear___aux__1___closed__3);
v___x_448_ = lean_int_sub(v___x_446_, v___x_445_);
lean_dec(v___x_446_);
v___x_449_ = lean_int_emod(v___x_448_, v_range_447_);
lean_dec(v___x_448_);
v___x_450_ = lean_int_add(v___x_449_, v_range_447_);
lean_dec(v___x_449_);
v___x_451_ = lean_int_emod(v___x_450_, v_range_447_);
lean_dec(v___x_450_);
v___x_452_ = lean_int_add(v___x_451_, v___x_445_);
lean_dec(v___x_451_);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instOfNatOfYear___boxed(lean_object* v_leap_453_, lean_object* v_n_454_){
_start:
{
uint8_t v_leap_boxed_455_; lean_object* v_res_456_; 
v_leap_boxed_455_ = lean_unbox(v_leap_453_);
v_res_456_ = l_Std_Time_Day_Ordinal_instOfNatOfYear(v_leap_boxed_455_, v_n_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg(){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = lean_obj_once(&l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Day_instOfNatOrdinal___aux__1___closed__0);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg___boxed(lean_object* v___dummy_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v_res_460_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0(void){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear___redArg();
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear(uint8_t v_leap_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_obj_once(&l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0, &l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0_once, _init_l_Std_Time_Day_Ordinal_instInhabitedOfYear___closed__0);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_instInhabitedOfYear___boxed(lean_object* v_leap_464_){
_start:
{
uint8_t v_leap_boxed_465_; lean_object* v_res_466_; 
v_leap_boxed_465_ = lean_unbox(v_leap_464_);
v_res_466_ = l_Std_Time_Day_Ordinal_instInhabitedOfYear(v_leap_boxed_465_);
return v_res_466_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lean_obj_once(&l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26, &l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26_once, _init_l_Std_Time_Day_Ordinal_OfYear_ofNat___auto__3___closed__26);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat___redArg(lean_object* v_data_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lean_nat_to_int(v_data_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofNat(lean_object* v_data_470_, lean_object* v_h_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_nat_to_int(v_data_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Std_Time_Day_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_unsigned_to_nat(1u);
v___x_474_ = lean_nat_to_int(v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_ofFin(lean_object* v_data_475_){
_start:
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_dec_le(v___x_476_, v_data_475_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_dec(v_data_475_);
v___x_478_ = lean_obj_once(&l_Std_Time_Day_Ordinal_ofFin___closed__0, &l_Std_Time_Day_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Day_Ordinal_ofFin___closed__0);
return v___x_478_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_nat_to_int(v_data_475_);
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset(lean_object* v_ordinal_480_){
_start:
{
lean_inc(v_ordinal_480_);
return v_ordinal_480_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_toOffset___boxed(lean_object* v_ordinal_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Std_Time_Day_Ordinal_toOffset(v_ordinal_481_);
lean_dec(v_ordinal_481_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(lean_object* v_ofYear_483_){
_start:
{
lean_inc(v_ofYear_483_);
return v_ofYear_483_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg___boxed(lean_object* v_ofYear_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Std_Time_Day_Ordinal_OfYear_toOffset___redArg(v_ofYear_484_);
lean_dec(v_ofYear_484_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset(uint8_t v_leap_486_, lean_object* v_ofYear_487_){
_start:
{
lean_inc(v_ofYear_487_);
return v_ofYear_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Ordinal_OfYear_toOffset___boxed(lean_object* v_leap_488_, lean_object* v_ofYear_489_){
_start:
{
uint8_t v_leap_boxed_490_; lean_object* v_res_491_; 
v_leap_boxed_490_ = lean_unbox(v_leap_488_);
v_res_491_ = l_Std_Time_Day_Ordinal_OfYear_toOffset(v_leap_boxed_490_, v_ofYear_489_);
lean_dec(v_ofYear_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0_spec__0(lean_object* v_a_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_nat_to_int(v_a_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Day_Ordinal_OfYear_toOffset_spec__0(lean_object* v_a_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_nat_to_int(v_a_494_);
v___x_496_ = l_Rat_ofInt(v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg(lean_object* v_off_497_){
_start:
{
lean_inc(v_off_497_);
return v_off_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___redArg___boxed(lean_object* v_off_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Std_Time_Day_Offset_toOrdinal___redArg(v_off_498_);
lean_dec(v_off_498_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal(lean_object* v_off_500_, lean_object* v_h_501_){
_start:
{
lean_inc(v_off_500_);
return v_off_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toOrdinal___boxed(lean_object* v_off_502_, lean_object* v_h_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Std_Time_Day_Offset_toOrdinal(v_off_502_, v_h_503_);
lean_dec(v_off_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNat(lean_object* v_data_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = lean_nat_to_int(v_data_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt(lean_object* v_data_507_){
_start:
{
lean_inc(v_data_507_);
return v_data_507_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofInt___boxed(lean_object* v_data_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_Time_Day_Offset_ofInt(v_data_508_);
lean_dec(v_data_508_);
return v_res_509_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_cstr_to_nat("86400000000000");
v___x_511_ = lean_nat_to_int(v___x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds(lean_object* v_days_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_514_ = lean_int_mul(v_days_512_, v___x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toNanoseconds___boxed(lean_object* v_days_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Time_Day_Offset_toNanoseconds(v_days_515_);
lean_dec(v_days_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds(lean_object* v_ns_517_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_obj_once(&l_Std_Time_Day_Offset_toNanoseconds___closed__0, &l_Std_Time_Day_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toNanoseconds___closed__0);
v___x_519_ = lean_int_ediv(v_ns_517_, v___x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofNanoseconds___boxed(lean_object* v_ns_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Std_Time_Day_Offset_ofNanoseconds(v_ns_520_);
lean_dec(v_ns_520_);
return v_res_521_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_unsigned_to_nat(86400000u);
v___x_523_ = lean_nat_to_int(v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds(lean_object* v_days_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_526_ = lean_int_mul(v_days_524_, v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMilliseconds___boxed(lean_object* v_days_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Std_Time_Day_Offset_toMilliseconds(v_days_527_);
lean_dec(v_days_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds(lean_object* v_ms_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_obj_once(&l_Std_Time_Day_Offset_toMilliseconds___closed__0, &l_Std_Time_Day_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Day_Offset_toMilliseconds___closed__0);
v___x_531_ = lean_int_ediv(v_ms_529_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMilliseconds___boxed(lean_object* v_ms_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Std_Time_Day_Offset_ofMilliseconds(v_ms_532_);
lean_dec(v_ms_532_);
return v_res_533_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_unsigned_to_nat(86400u);
v___x_535_ = lean_nat_to_int(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds(lean_object* v_days_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_538_ = lean_int_mul(v_days_536_, v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object* v_days_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Std_Time_Day_Offset_toSeconds(v_days_539_);
lean_dec(v_days_539_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds(lean_object* v_secs_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_obj_once(&l_Std_Time_Day_Offset_toSeconds___closed__0, &l_Std_Time_Day_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Day_Offset_toSeconds___closed__0);
v___x_543_ = lean_int_ediv(v_secs_541_, v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofSeconds___boxed(lean_object* v_secs_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Std_Time_Day_Offset_ofSeconds(v_secs_544_);
lean_dec(v_secs_544_);
return v_res_545_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(1440u);
v___x_547_ = lean_nat_to_int(v___x_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes(lean_object* v_days_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_550_ = lean_int_mul(v_days_548_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toMinutes___boxed(lean_object* v_days_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_Time_Day_Offset_toMinutes(v_days_551_);
lean_dec(v_days_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes(lean_object* v_minutes_553_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_obj_once(&l_Std_Time_Day_Offset_toMinutes___closed__0, &l_Std_Time_Day_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Day_Offset_toMinutes___closed__0);
v___x_555_ = lean_int_ediv(v_minutes_553_, v___x_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofMinutes___boxed(lean_object* v_minutes_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Std_Time_Day_Offset_ofMinutes(v_minutes_556_);
lean_dec(v_minutes_556_);
return v_res_557_;
}
}
static lean_object* _init_l_Std_Time_Day_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = lean_unsigned_to_nat(24u);
v___x_559_ = lean_nat_to_int(v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours(lean_object* v_days_560_){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_562_ = lean_int_mul(v_days_560_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_toHours___boxed(lean_object* v_days_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Std_Time_Day_Offset_toHours(v_days_563_);
lean_dec(v_days_563_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours(lean_object* v_hours_565_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_obj_once(&l_Std_Time_Day_Offset_toHours___closed__0, &l_Std_Time_Day_Offset_toHours___closed__0_once, _init_l_Std_Time_Day_Offset_toHours___closed__0);
v___x_567_ = lean_int_ediv(v_hours_565_, v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Day_Offset_ofHours___boxed(lean_object* v_hours_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Std_Time_Day_Offset_ofHours(v_hours_568_);
lean_dec(v_hours_568_);
return v_res_569_;
}
}
lean_object* runtime_initialize_Std_Time_Time(uint8_t builtin);
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
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Day(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Time(builtin);
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
