// Lean compiler output
// Module: Std.Time.Date.Unit.Week
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
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_neg___boxed(lean_object*);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toUnitVal(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toUnitVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_equiv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_equiv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Time_Week_Offset_equiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_Offset_equiv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_Offset_equiv___closed__0 = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__0_value;
static const lean_ctor_object l_Std_Time_Week_Offset_equiv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__0_value),((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__0_value)}};
static const lean_object* l_Std_Time_Week_Offset_equiv___closed__1 = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_Offset_equiv = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_instReprOffset___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instReprOffset___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_instReprOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_instReprOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instReprOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instReprOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instReprOffset = (const lean_object*)&l_Std_Time_Week_instReprOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Week_instToStringOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instToStringOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instToStringOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instToStringOffset = (const lean_object*)&l_Std_Time_Week_instToStringOffset___closed__0_value;
static lean_once_cell_t l_Std_Time_Week_instInhabitedOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instInhabitedOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_instInhabitedOffset;
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOffset___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_instAddOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instAddOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instAddOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instAddOffset = (const lean_object*)&l_Std_Time_Week_instAddOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Week_instSubOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instSubOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instSubOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instSubOffset = (const lean_object*)&l_Std_Time_Week_instSubOffset___closed__0_value;
static const lean_closure_object l_Std_Time_Week_instNegOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_neg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instNegOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instNegOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instNegOffset = (const lean_object*)&l_Std_Time_Week_instNegOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_instLEOffset;
LEAN_EXPORT lean_object* l_Std_Time_Week_instLTOffset;
LEAN_EXPORT uint8_t l_Std_Time_Week_instOrdOffset___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instOrdOffset___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_instOrdOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_instOrdOffset___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instOrdOffset___closed__0 = (const lean_object*)&l_Std_Time_Week_instOrdOffset___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instOrdOffset = (const lean_object*)&l_Std_Time_Week_instOrdOffset___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOffset(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLeOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLeOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLtOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLtOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_Ordinal_equiv = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instLTOrdinal;
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLEOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLEOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLTOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLTOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3;
static lean_once_cell_t l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__3 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__3_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_0),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_1),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value_aux_2),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4_value;
static const lean_array_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__6 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__6_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_0),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_1),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value_aux_2),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__8 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__8_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9_value;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_0),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_1),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value_aux_2),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11_value;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13;
static const lean_string_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__14 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__14_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_0),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_1),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value_aux_2),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15_value;
static const lean_ctor_object l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9_value),((lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5_value)}};
static const lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16 = (const lean_object*)&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16_value;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25;
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_Ordinal_equiv = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value;
static const lean_closure_object l_Std_Time_Week_Aligned_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_Aligned_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_Aligned_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_Aligned_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_Ordinal_equiv = (const lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value;
static const lean_closure_object l_Std_Time_Week_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Time_Week_Offset_equiv___closed__1_value)} };
static const lean_object* l_Std_Time_Week_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal(lean_object*);
static lean_once_cell_t l_Std_Time_Week_instInhabitedOrdinal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instInhabitedOrdinal___closed__0;
static lean_once_cell_t l_Std_Time_Week_instInhabitedOrdinal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instInhabitedOrdinal___closed__1;
static lean_once_cell_t l_Std_Time_Week_instInhabitedOrdinal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instInhabitedOrdinal___closed__2;
static lean_once_cell_t l_Std_Time_Week_instInhabitedOrdinal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instInhabitedOrdinal___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_instInhabitedOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Week_Offset_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Offset_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_mk(lean_object* v_toUnitVal_1_){
_start:
{
lean_inc(v_toUnitVal_1_);
return v_toUnitVal_1_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_mk___boxed(lean_object* v_toUnitVal_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Std_Time_Week_Offset_mk(v_toUnitVal_2_);
lean_dec(v_toUnitVal_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toUnitVal(lean_object* v_self_4_){
_start:
{
lean_inc(v_self_4_);
return v_self_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toUnitVal___boxed(lean_object* v_self_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Time_Week_Offset_toUnitVal(v_self_5_);
lean_dec(v_self_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_equiv___lam__0(lean_object* v___y_7_){
_start:
{
lean_inc(v___y_7_);
return v___y_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_equiv___lam__0___boxed(lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Week_Offset_equiv___lam__0(v___y_8_);
lean_dec(v___y_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val(lean_object* v_offset_14_){
_start:
{
lean_inc(v_offset_14_);
return v_offset_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val___boxed(lean_object* v_offset_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Std_Time_Week_Offset_val(v_offset_15_);
lean_dec(v_offset_15_);
return v_res_16_;
}
}
static lean_object* _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_nat_to_int(v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0(lean_object* v_offset_19_, lean_object* v_prec_20_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_22_ = lean_int_dec_lt(v_offset_19_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = l_Int_repr(v_offset_19_);
v___x_24_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = l_Int_repr(v_offset_19_);
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
v___x_27_ = l_Repr_addAppParen(v___x_26_, v_prec_20_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0___boxed(lean_object* v_offset_28_, lean_object* v_prec_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Std_Time_Week_instReprOffset___lam__0(v_offset_28_, v_prec_29_);
lean_dec(v_prec_29_);
lean_dec(v_offset_28_);
return v_res_30_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_35_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOffset(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOffset___closed__0, &l_Std_Time_Week_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Week_instInhabitedOffset___closed__0);
return v___x_36_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOffset(lean_object* v_x_37_, lean_object* v_y_38_){
_start:
{
uint8_t v___x_39_; 
v___x_39_ = lean_int_dec_eq(v_x_37_, v_y_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOffset___boxed(lean_object* v_x_40_, lean_object* v_y_41_){
_start:
{
uint8_t v_res_42_; lean_object* v_r_43_; 
v_res_42_ = l_Std_Time_Week_instDecidableEqOffset(v_x_40_, v_y_41_);
lean_dec(v_y_41_);
lean_dec(v_x_40_);
v_r_43_ = lean_box(v_res_42_);
return v_r_43_;
}
}
static lean_object* _init_l_Std_Time_Week_instLEOffset(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_box(0);
return v___x_50_;
}
}
static lean_object* _init_l_Std_Time_Week_instLTOffset(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_box(0);
return v___x_51_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instOrdOffset___lam__0(lean_object* v_x_52_, lean_object* v_y_53_){
_start:
{
uint8_t v___x_54_; 
v___x_54_ = lean_int_dec_lt(v_x_52_, v_y_53_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; 
v___x_55_ = lean_int_dec_eq(v_x_52_, v_y_53_);
if (v___x_55_ == 0)
{
uint8_t v___x_56_; 
v___x_56_ = 2;
return v___x_56_;
}
else
{
uint8_t v___x_57_; 
v___x_57_ = 1;
return v___x_57_;
}
}
else
{
uint8_t v___x_58_; 
v___x_58_ = 0;
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOrdOffset___lam__0___boxed(lean_object* v_x_59_, lean_object* v_y_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Std_Time_Week_instOrdOffset___lam__0(v_x_59_, v_y_60_);
lean_dec(v_y_60_);
lean_dec(v_x_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOffset(lean_object* v_n_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_nat_to_int(v_n_65_);
return v___x_66_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLeOffset(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v___x_69_; 
v___x_69_ = lean_int_dec_le(v_x_67_, v_y_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLeOffset___boxed(lean_object* v_x_70_, lean_object* v_y_71_){
_start:
{
uint8_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l_Std_Time_Week_instDecidableLeOffset(v_x_70_, v_y_71_);
lean_dec(v_y_71_);
lean_dec(v_x_70_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLtOffset(lean_object* v_x_74_, lean_object* v_y_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_int_dec_lt(v_x_74_, v_y_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLtOffset___boxed(lean_object* v_x_77_, lean_object* v_y_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Std_Time_Week_instDecidableLtOffset(v_x_77_, v_y_78_);
lean_dec(v_y_78_);
lean_dec(v_x_77_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk(lean_object* v_toBounded_81_){
_start:
{
lean_inc(v_toBounded_81_);
return v_toBounded_81_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk___boxed(lean_object* v_toBounded_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Std_Time_Week_OfYear_Ordinal_mk(v_toBounded_82_);
lean_dec(v_toBounded_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded(lean_object* v_self_84_){
_start:
{
lean_inc(v_self_84_);
return v_self_84_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded___boxed(lean_object* v_self_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Std_Time_Week_OfYear_Ordinal_toBounded(v_self_85_);
lean_dec(v_self_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object* v___x_88_, lean_object* v_x_89_, lean_object* v_prec_90_){
_start:
{
lean_object* v_invFun_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_invFun_91_ = lean_ctor_get(v___x_88_, 1);
lean_inc(v_invFun_91_);
lean_dec_ref(v___x_88_);
v___x_92_ = lean_apply_1(v_invFun_91_, v_x_89_);
v___x_93_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_94_ = lean_int_dec_lt(v___x_92_, v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = l_Int_repr(v___x_92_);
lean_dec(v___x_92_);
v___x_96_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
else
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = l_Int_repr(v___x_92_);
lean_dec(v___x_92_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___x_99_ = l_Repr_addAppParen(v___x_98_, v_prec_90_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object* v___x_100_, lean_object* v_x_101_, lean_object* v_prec_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(v___x_100_, v_x_101_, v_prec_102_);
lean_dec(v_prec_102_);
return v_res_103_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal(lean_object* v_a_107_, lean_object* v_b_108_){
_start:
{
lean_object* v___x_109_; lean_object* v_invFun_110_; lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_109_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_equiv));
v_invFun_110_ = lean_ctor_get(v___x_109_, 1);
lean_inc_n(v_invFun_110_, 2);
v___x_111_ = lean_apply_1(v_invFun_110_, v_a_107_);
v___x_112_ = lean_apply_1(v_invFun_110_, v_b_108_);
v___x_113_ = lean_int_dec_eq(v___x_111_, v___x_112_);
lean_dec(v___x_112_);
lean_dec(v___x_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___boxed(lean_object* v_a_114_, lean_object* v_b_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Std_Time_Week_OfYear_instDecidableEqOrdinal(v_a_114_, v_b_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLEOrdinal(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLTOrdinal(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_box(0);
return v___x_119_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLEOrdinal(lean_object* v_a_120_, lean_object* v_b_121_){
_start:
{
lean_object* v___x_122_; lean_object* v_invFun_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_122_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_equiv));
v_invFun_123_ = lean_ctor_get(v___x_122_, 1);
lean_inc_n(v_invFun_123_, 2);
v___x_124_ = lean_apply_1(v_invFun_123_, v_a_120_);
v___x_125_ = lean_apply_1(v_invFun_123_, v_b_121_);
v___x_126_ = lean_int_dec_le(v___x_124_, v___x_125_);
lean_dec(v___x_125_);
lean_dec(v___x_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLEOrdinal___boxed(lean_object* v_a_127_, lean_object* v_b_128_){
_start:
{
uint8_t v_res_129_; lean_object* v_r_130_; 
v_res_129_ = l_Std_Time_Week_OfYear_instDecidableLEOrdinal(v_a_127_, v_b_128_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLTOrdinal(lean_object* v_a_131_, lean_object* v_b_132_){
_start:
{
lean_object* v___x_133_; lean_object* v_invFun_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_133_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_equiv));
v_invFun_134_ = lean_ctor_get(v___x_133_, 1);
lean_inc_n(v_invFun_134_, 2);
v___x_135_ = lean_apply_1(v_invFun_134_, v_a_131_);
v___x_136_ = lean_apply_1(v_invFun_134_, v_b_132_);
v___x_137_ = lean_int_dec_lt(v___x_135_, v___x_136_);
lean_dec(v___x_136_);
lean_dec(v___x_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLTOrdinal___boxed(lean_object* v_a_138_, lean_object* v_b_139_){
_start:
{
uint8_t v_res_140_; lean_object* v_r_141_; 
v_res_140_ = l_Std_Time_Week_OfYear_instDecidableLTOrdinal(v_a_138_, v_b_139_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0(lean_object* v___x_142_, lean_object* v_x_143_, lean_object* v_y_144_){
_start:
{
lean_object* v_invFun_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v_invFun_145_ = lean_ctor_get(v___x_142_, 1);
lean_inc_n(v_invFun_145_, 2);
lean_dec_ref(v___x_142_);
v___x_146_ = lean_apply_1(v_invFun_145_, v_x_143_);
v___x_147_ = lean_apply_1(v_invFun_145_, v_y_144_);
v___x_148_ = lean_int_dec_lt(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
uint8_t v___x_149_; 
v___x_149_ = lean_int_dec_eq(v___x_146_, v___x_147_);
lean_dec(v___x_147_);
lean_dec(v___x_146_);
if (v___x_149_ == 0)
{
uint8_t v___x_150_; 
v___x_150_ = 2;
return v___x_150_;
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 1;
return v___x_151_;
}
}
else
{
uint8_t v___x_152_; 
lean_dec(v___x_147_);
lean_dec(v___x_146_);
v___x_152_ = 0;
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0___boxed(lean_object* v___x_153_, lean_object* v_x_154_, lean_object* v_y_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Std_Time_Week_OfYear_instOrdOrdinal___lam__0(v___x_153_, v_x_154_, v_y_155_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val(lean_object* v_ordinal_161_){
_start:
{
lean_inc(v_ordinal_161_);
return v_ordinal_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val___boxed(lean_object* v_ordinal_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Std_Time_Week_OfYear_Ordinal_val(v_ordinal_162_);
lean_dec(v_ordinal_162_);
return v_res_163_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(1u);
v___x_165_ = lean_nat_to_int(v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(52u);
v___x_167_ = lean_nat_to_int(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1);
v___x_169_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_170_ = lean_int_add(v___x_169_, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_172_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2);
v___x_173_ = lean_int_sub(v___x_172_, v___x_171_);
return v___x_173_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v_range_176_; 
v___x_174_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_175_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3);
v_range_176_ = lean_int_add(v___x_175_, v___x_174_);
return v_range_176_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal(lean_object* v_n_177_){
_start:
{
lean_object* v___x_178_; lean_object* v_toFun_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v_range_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_178_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_equiv));
v_toFun_179_ = lean_ctor_get(v___x_178_, 0);
v___x_180_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_181_ = lean_nat_to_int(v_n_177_);
v_range_182_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_183_ = lean_int_sub(v___x_181_, v___x_180_);
lean_dec(v___x_181_);
v___x_184_ = lean_int_emod(v___x_183_, v_range_182_);
lean_dec(v___x_183_);
v___x_185_ = lean_int_add(v___x_184_, v_range_182_);
lean_dec(v___x_184_);
v___x_186_ = lean_int_emod(v___x_185_, v_range_182_);
lean_dec(v___x_185_);
v___x_187_ = lean_int_add(v___x_186_, v___x_180_);
lean_dec(v___x_186_);
lean_inc(v_toFun_179_);
v___x_188_ = lean_apply_1(v_toFun_179_, v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_190_ = lean_int_sub(v___x_189_, v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_range_191_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_192_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_193_ = lean_int_emod(v___x_192_, v_range_191_);
return v___x_193_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_range_194_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_195_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1);
v___x_196_ = lean_int_add(v___x_195_, v_range_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_range_197_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_198_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2);
v___x_199_ = lean_int_emod(v___x_198_, v_range_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_201_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3);
v___x_202_ = lean_int_add(v___x_201_, v___x_200_);
return v___x_202_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_203_; lean_object* v_toFun_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_203_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_equiv));
v_toFun_204_ = lean_ctor_get(v___x_203_, 0);
v___x_205_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4);
lean_inc(v_toFun_204_);
v___x_206_ = lean_apply_1(v_toFun_204_, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(lean_object* v_data_207_){
_start:
{
lean_inc(v_data_207_);
return v_data_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg___boxed(lean_object* v_data_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(v_data_208_);
lean_dec(v_data_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt(lean_object* v_data_210_, lean_object* v_h_211_){
_start:
{
lean_inc(v_data_210_);
return v_data_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___boxed(lean_object* v_data_212_, lean_object* v_h_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_Week_OfYear_Ordinal_ofInt(v_data_212_, v_h_213_);
lean_dec(v_data_212_);
return v_res_214_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10));
v___x_242_ = l_Lean_mkAtom(v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12);
v___x_244_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_245_ = lean_array_push(v___x_244_, v___x_243_);
return v___x_245_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16));
v___x_257_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_258_ = lean_array_push(v___x_257_, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_259_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17);
v___x_260_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15));
v___x_261_ = lean_box(2);
v___x_262_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_260_);
lean_ctor_set(v___x_262_, 2, v___x_259_);
return v___x_262_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18);
v___x_264_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13);
v___x_265_ = lean_array_push(v___x_264_, v___x_263_);
return v___x_265_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_266_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19);
v___x_267_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11));
v___x_268_ = lean_box(2);
v___x_269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_267_);
lean_ctor_set(v___x_269_, 2, v___x_266_);
return v___x_269_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20);
v___x_271_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_272_ = lean_array_push(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_273_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21);
v___x_274_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9));
v___x_275_ = lean_box(2);
v___x_276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
lean_ctor_set(v___x_276_, 2, v___x_273_);
return v___x_276_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22);
v___x_278_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_279_ = lean_array_push(v___x_278_, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_280_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23);
v___x_281_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7));
v___x_282_ = lean_box(2);
v___x_283_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_281_);
lean_ctor_set(v___x_283_, 2, v___x_280_);
return v___x_283_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24);
v___x_285_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_286_ = lean_array_push(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25);
v___x_288_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4));
v___x_289_ = lean_box(2);
v___x_290_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
lean_ctor_set(v___x_290_, 2, v___x_287_);
return v___x_290_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___redArg(lean_object* v_data_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_nat_to_int(v_data_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat(lean_object* v_data_294_, lean_object* v_h_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_nat_to_int(v_data_294_);
return v___x_296_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = lean_nat_to_int(v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofFin(lean_object* v_data_299_){
_start:
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(1u);
v___x_301_ = lean_nat_dec_le(v___x_300_, v_data_299_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_dec(v_data_299_);
v___x_302_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0, &l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0);
return v___x_302_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_nat_to_int(v_data_299_);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset(lean_object* v_ordinal_304_){
_start:
{
lean_inc(v_ordinal_304_);
return v_ordinal_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset___boxed(lean_object* v_ordinal_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_Time_Week_OfYear_Ordinal_toOffset(v_ordinal_305_);
lean_dec(v_ordinal_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk(lean_object* v_toBounded_307_){
_start:
{
lean_inc(v_toBounded_307_);
return v_toBounded_307_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk___boxed(lean_object* v_toBounded_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Std_Time_Week_Aligned_Ordinal_mk(v_toBounded_308_);
lean_dec(v_toBounded_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded(lean_object* v_self_310_){
_start:
{
lean_inc(v_self_310_);
return v_self_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded___boxed(lean_object* v_self_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Std_Time_Week_Aligned_Ordinal_toBounded(v_self_311_);
lean_dec(v_self_311_);
return v_res_312_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object* v_a_317_, lean_object* v_b_318_){
_start:
{
lean_object* v___x_319_; lean_object* v_invFun_320_; lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_319_ = ((lean_object*)(l_Std_Time_Week_Aligned_Ordinal_equiv));
v_invFun_320_ = lean_ctor_get(v___x_319_, 1);
lean_inc_n(v_invFun_320_, 2);
v___x_321_ = lean_apply_1(v_invFun_320_, v_a_317_);
v___x_322_ = lean_apply_1(v_invFun_320_, v_b_318_);
v___x_323_ = lean_int_dec_eq(v___x_321_, v___x_322_);
lean_dec(v___x_322_);
lean_dec(v___x_321_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object* v_a_324_, lean_object* v_b_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l_Std_Time_Week_Aligned_instDecidableEqOrdinal(v_a_324_, v_b_325_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val(lean_object* v_ordinal_331_){
_start:
{
lean_inc(v_ordinal_331_);
return v_ordinal_331_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val___boxed(lean_object* v_ordinal_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Std_Time_Week_Aligned_Ordinal_val(v_ordinal_332_);
lean_dec(v_ordinal_332_);
return v_res_333_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(4u);
v___x_335_ = lean_nat_to_int(v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0);
v___x_337_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_338_ = lean_int_add(v___x_337_, v___x_336_);
return v___x_338_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_340_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1);
v___x_341_ = lean_int_sub(v___x_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_range_344_; 
v___x_342_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_343_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2);
v_range_344_ = lean_int_add(v___x_343_, v___x_342_);
return v_range_344_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal(lean_object* v_n_345_){
_start:
{
lean_object* v___x_346_; lean_object* v_toFun_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_range_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_346_ = ((lean_object*)(l_Std_Time_Week_Aligned_Ordinal_equiv));
v_toFun_347_ = lean_ctor_get(v___x_346_, 0);
v___x_348_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_349_ = lean_nat_to_int(v_n_345_);
v_range_350_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_351_ = lean_int_sub(v___x_349_, v___x_348_);
lean_dec(v___x_349_);
v___x_352_ = lean_int_emod(v___x_351_, v_range_350_);
lean_dec(v___x_351_);
v___x_353_ = lean_int_add(v___x_352_, v_range_350_);
lean_dec(v___x_352_);
v___x_354_ = lean_int_emod(v___x_353_, v_range_350_);
lean_dec(v___x_353_);
v___x_355_ = lean_int_add(v___x_354_, v___x_348_);
lean_dec(v___x_354_);
lean_inc(v_toFun_347_);
v___x_356_ = lean_apply_1(v_toFun_347_, v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_range_357_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_358_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_359_ = lean_int_emod(v___x_358_, v_range_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_range_360_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_361_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0);
v___x_362_ = lean_int_add(v___x_361_, v_range_360_);
return v___x_362_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_range_363_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_364_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1);
v___x_365_ = lean_int_emod(v___x_364_, v_range_363_);
return v___x_365_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_367_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2);
v___x_368_ = lean_int_add(v___x_367_, v___x_366_);
return v___x_368_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_369_; lean_object* v_toFun_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_369_ = ((lean_object*)(l_Std_Time_Week_Aligned_Ordinal_equiv));
v_toFun_370_ = lean_ctor_get(v___x_369_, 0);
v___x_371_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3);
lean_inc(v_toFun_370_);
v___x_372_ = lean_apply_1(v_toFun_370_, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk(lean_object* v_toBounded_373_){
_start:
{
lean_inc(v_toBounded_373_);
return v_toBounded_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk___boxed(lean_object* v_toBounded_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Std_Time_Week_Ordinal_mk(v_toBounded_374_);
lean_dec(v_toBounded_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded(lean_object* v_self_376_){
_start:
{
lean_inc(v_self_376_);
return v_self_376_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded___boxed(lean_object* v_self_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Std_Time_Week_Ordinal_toBounded(v_self_377_);
lean_dec(v_self_377_);
return v_res_378_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object* v_a_383_, lean_object* v_b_384_){
_start:
{
lean_object* v___x_385_; lean_object* v_invFun_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_385_ = ((lean_object*)(l_Std_Time_Week_Ordinal_equiv));
v_invFun_386_ = lean_ctor_get(v___x_385_, 1);
lean_inc_n(v_invFun_386_, 2);
v___x_387_ = lean_apply_1(v_invFun_386_, v_a_383_);
v___x_388_ = lean_apply_1(v_invFun_386_, v_b_384_);
v___x_389_ = lean_int_dec_eq(v___x_387_, v___x_388_);
lean_dec(v___x_388_);
lean_dec(v___x_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = l_Std_Time_Week_instDecidableEqOrdinal(v_a_390_, v_b_391_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val(lean_object* v_ordinal_397_){
_start:
{
lean_inc(v_ordinal_397_);
return v_ordinal_397_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val___boxed(lean_object* v_ordinal_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Std_Time_Week_Ordinal_val(v_ordinal_398_);
lean_dec(v_ordinal_398_);
return v_res_399_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(5u);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__0, &l_Std_Time_Week_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__0);
v___x_403_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_404_ = lean_int_add(v___x_403_, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_406_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__1, &l_Std_Time_Week_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__1);
v___x_407_ = lean_int_sub(v___x_406_, v___x_405_);
return v___x_407_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v_range_410_; 
v___x_408_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_409_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__2, &l_Std_Time_Week_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__2);
v_range_410_ = lean_int_add(v___x_409_, v___x_408_);
return v_range_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal(lean_object* v_n_411_){
_start:
{
lean_object* v___x_412_; lean_object* v_toFun_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_range_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_412_ = ((lean_object*)(l_Std_Time_Week_Ordinal_equiv));
v_toFun_413_ = lean_ctor_get(v___x_412_, 0);
v___x_414_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_415_ = lean_nat_to_int(v_n_411_);
v_range_416_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_417_ = lean_int_sub(v___x_415_, v___x_414_);
lean_dec(v___x_415_);
v___x_418_ = lean_int_emod(v___x_417_, v_range_416_);
lean_dec(v___x_417_);
v___x_419_ = lean_int_add(v___x_418_, v_range_416_);
lean_dec(v___x_418_);
v___x_420_ = lean_int_emod(v___x_419_, v_range_416_);
lean_dec(v___x_419_);
v___x_421_ = lean_int_add(v___x_420_, v___x_414_);
lean_dec(v___x_420_);
lean_inc(v_toFun_413_);
v___x_422_ = lean_apply_1(v_toFun_413_, v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_range_423_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_424_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_425_ = lean_int_emod(v___x_424_, v_range_423_);
return v___x_425_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_range_426_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_427_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0);
v___x_428_ = lean_int_add(v___x_427_, v_range_426_);
return v___x_428_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_range_429_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_430_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1);
v___x_431_ = lean_int_emod(v___x_430_, v_range_429_);
return v___x_431_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_433_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2);
v___x_434_ = lean_int_add(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_435_; lean_object* v_toFun_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_435_ = ((lean_object*)(l_Std_Time_Week_Ordinal_equiv));
v_toFun_436_ = lean_ctor_get(v___x_435_, 0);
v___x_437_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3);
lean_inc(v_toFun_436_);
v___x_438_ = lean_apply_1(v_toFun_436_, v___x_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNat(lean_object* v_data_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lean_nat_to_int(v_data_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt(lean_object* v_data_441_){
_start:
{
lean_inc(v_data_441_);
return v_data_441_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt___boxed(lean_object* v_data_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Std_Time_Week_Offset_ofInt(v_data_442_);
lean_dec(v_data_442_);
return v_res_443_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_unsigned_to_nat(604800000u);
v___x_445_ = lean_nat_to_int(v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds(lean_object* v_weeks_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_448_ = lean_int_mul(v_weeks_446_, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds___boxed(lean_object* v_weeks_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Std_Time_Week_Offset_toMilliseconds(v_weeks_449_);
lean_dec(v_weeks_449_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds(lean_object* v_millis_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_453_ = lean_int_ediv(v_millis_451_, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds___boxed(lean_object* v_millis_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Std_Time_Week_Offset_ofMilliseconds(v_millis_454_);
lean_dec(v_millis_454_);
return v_res_455_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_cstr_to_nat("604800000000000");
v___x_457_ = lean_nat_to_int(v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds(lean_object* v_weeks_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_460_ = lean_int_mul(v_weeks_458_, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds___boxed(lean_object* v_weeks_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Std_Time_Week_Offset_toNanoseconds(v_weeks_461_);
lean_dec(v_weeks_461_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds(lean_object* v_nanos_463_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_465_ = lean_int_ediv(v_nanos_463_, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds___boxed(lean_object* v_nanos_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Std_Time_Week_Offset_ofNanoseconds(v_nanos_466_);
lean_dec(v_nanos_466_);
return v_res_467_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(604800u);
v___x_469_ = lean_nat_to_int(v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds(lean_object* v_weeks_470_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_472_ = lean_int_mul(v_weeks_470_, v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds___boxed(lean_object* v_weeks_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Std_Time_Week_Offset_toSeconds(v_weeks_473_);
lean_dec(v_weeks_473_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds(lean_object* v_secs_475_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_477_ = lean_int_ediv(v_secs_475_, v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds___boxed(lean_object* v_secs_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Std_Time_Week_Offset_ofSeconds(v_secs_478_);
lean_dec(v_secs_478_);
return v_res_479_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(10080u);
v___x_481_ = lean_nat_to_int(v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes(lean_object* v_weeks_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_484_ = lean_int_mul(v_weeks_482_, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes___boxed(lean_object* v_weeks_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Std_Time_Week_Offset_toMinutes(v_weeks_485_);
lean_dec(v_weeks_485_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes(lean_object* v_minutes_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_489_ = lean_int_ediv(v_minutes_487_, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes___boxed(lean_object* v_minutes_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_Time_Week_Offset_ofMinutes(v_minutes_490_);
lean_dec(v_minutes_490_);
return v_res_491_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_unsigned_to_nat(168u);
v___x_493_ = lean_nat_to_int(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours(lean_object* v_weeks_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_496_ = lean_int_mul(v_weeks_494_, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours___boxed(lean_object* v_weeks_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_Time_Week_Offset_toHours(v_weeks_497_);
lean_dec(v_weeks_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours(lean_object* v_hours_499_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_501_ = lean_int_ediv(v_hours_499_, v___x_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours___boxed(lean_object* v_hours_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_Time_Week_Offset_ofHours(v_hours_502_);
lean_dec(v_hours_502_);
return v_res_503_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toDays___closed__0(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_unsigned_to_nat(7u);
v___x_505_ = lean_nat_to_int(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays(lean_object* v_weeks_506_){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_508_ = lean_int_mul(v_weeks_506_, v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object* v_weeks_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Std_Time_Week_Offset_toDays(v_weeks_509_);
lean_dec(v_weeks_509_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays(lean_object* v_days_511_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_513_ = lean_int_ediv(v_days_511_, v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays___boxed(lean_object* v_days_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Std_Time_Week_Offset_ofDays(v_days_514_);
lean_dec(v_days_514_);
return v_res_515_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Date_Unit_Week(uint8_t builtin) {
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
l_Std_Time_Week_instInhabitedOffset = _init_l_Std_Time_Week_instInhabitedOffset();
lean_mark_persistent(l_Std_Time_Week_instInhabitedOffset);
l_Std_Time_Week_instLEOffset = _init_l_Std_Time_Week_instLEOffset();
lean_mark_persistent(l_Std_Time_Week_instLEOffset);
l_Std_Time_Week_instLTOffset = _init_l_Std_Time_Week_instLTOffset();
lean_mark_persistent(l_Std_Time_Week_instLTOffset);
l_Std_Time_Week_OfYear_instLEOrdinal = _init_l_Std_Time_Week_OfYear_instLEOrdinal();
lean_mark_persistent(l_Std_Time_Week_OfYear_instLEOrdinal);
l_Std_Time_Week_OfYear_instLTOrdinal = _init_l_Std_Time_Week_OfYear_instLTOrdinal();
lean_mark_persistent(l_Std_Time_Week_OfYear_instLTOrdinal);
l_Std_Time_Week_OfYear_instInhabitedOrdinal = _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Week_OfYear_instInhabitedOrdinal);
l_Std_Time_Week_Aligned_instInhabitedOrdinal = _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Week_Aligned_instInhabitedOrdinal);
l_Std_Time_Week_instInhabitedOrdinal = _init_l_Std_Time_Week_instInhabitedOrdinal();
lean_mark_persistent(l_Std_Time_Week_instInhabitedOrdinal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Date_Unit_Week(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1 = _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1();
lean_mark_persistent(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Week(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Day(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Date_Unit_Week(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Date_Unit_Week(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Date_Unit_Week(builtin);
}
#ifdef __cplusplus
}
#endif
