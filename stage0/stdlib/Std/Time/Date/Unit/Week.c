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
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_instOrdOffset___closed__0_value;
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
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_instOrdOffset___closed__0_value;
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
LEAN_EXPORT const lean_object* l_Std_Time_Week_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_instOrdOffset___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val(lean_object* v_offset_7_){
_start:
{
lean_inc(v_offset_7_);
return v_offset_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_val___boxed(lean_object* v_offset_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Time_Week_Offset_val(v_offset_8_);
lean_dec(v_offset_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_nat_to_int(v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0(lean_object* v_offset_12_, lean_object* v_prec_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_15_ = lean_int_dec_lt(v_offset_12_, v___x_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = l_Int_repr(v_offset_12_);
v___x_17_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = l_Int_repr(v_offset_12_);
v___x_19_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
v___x_20_ = l_Repr_addAppParen(v___x_19_, v_prec_13_);
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOffset___lam__0___boxed(lean_object* v_offset_21_, lean_object* v_prec_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Std_Time_Week_instReprOffset___lam__0(v_offset_21_, v_prec_22_);
lean_dec(v_prec_22_);
lean_dec(v_offset_21_);
return v_res_23_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOffset___closed__0(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_28_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOffset(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOffset___closed__0, &l_Std_Time_Week_instInhabitedOffset___closed__0_once, _init_l_Std_Time_Week_instInhabitedOffset___closed__0);
return v___x_29_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOffset(lean_object* v_x_30_, lean_object* v_y_31_){
_start:
{
uint8_t v___x_32_; 
v___x_32_ = lean_int_dec_eq(v_x_30_, v_y_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOffset___boxed(lean_object* v_x_33_, lean_object* v_y_34_){
_start:
{
uint8_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = l_Std_Time_Week_instDecidableEqOffset(v_x_33_, v_y_34_);
lean_dec(v_y_34_);
lean_dec(v_x_33_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
static lean_object* _init_l_Std_Time_Week_instLEOffset(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Time_Week_instLTOffset(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_box(0);
return v___x_44_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instOrdOffset___lam__0(lean_object* v_x_45_, lean_object* v_y_46_){
_start:
{
uint8_t v___x_47_; 
v___x_47_ = lean_int_dec_lt(v_x_45_, v_y_46_);
if (v___x_47_ == 0)
{
uint8_t v___x_48_; 
v___x_48_ = lean_int_dec_eq(v_x_45_, v_y_46_);
if (v___x_48_ == 0)
{
uint8_t v___x_49_; 
v___x_49_ = 2;
return v___x_49_;
}
else
{
uint8_t v___x_50_; 
v___x_50_ = 1;
return v___x_50_;
}
}
else
{
uint8_t v___x_51_; 
v___x_51_ = 0;
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOrdOffset___lam__0___boxed(lean_object* v_x_52_, lean_object* v_y_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Std_Time_Week_instOrdOffset___lam__0(v_x_52_, v_y_53_);
lean_dec(v_y_53_);
lean_dec(v_x_52_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOffset(lean_object* v_n_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_nat_to_int(v_n_58_);
return v___x_59_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLeOffset(lean_object* v_x_60_, lean_object* v_y_61_){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = lean_int_dec_le(v_x_60_, v_y_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLeOffset___boxed(lean_object* v_x_63_, lean_object* v_y_64_){
_start:
{
uint8_t v_res_65_; lean_object* v_r_66_; 
v_res_65_ = l_Std_Time_Week_instDecidableLeOffset(v_x_63_, v_y_64_);
lean_dec(v_y_64_);
lean_dec(v_x_63_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableLtOffset(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v___x_69_; 
v___x_69_ = lean_int_dec_lt(v_x_67_, v_y_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableLtOffset___boxed(lean_object* v_x_70_, lean_object* v_y_71_){
_start:
{
uint8_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l_Std_Time_Week_instDecidableLtOffset(v_x_70_, v_y_71_);
lean_dec(v_y_71_);
lean_dec(v_x_70_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk(lean_object* v_toBounded_74_){
_start:
{
lean_inc(v_toBounded_74_);
return v_toBounded_74_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_mk___boxed(lean_object* v_toBounded_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Std_Time_Week_OfYear_Ordinal_mk(v_toBounded_75_);
lean_dec(v_toBounded_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded(lean_object* v_self_77_){
_start:
{
lean_inc(v_self_77_);
return v_self_77_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toBounded___boxed(lean_object* v_self_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Std_Time_Week_OfYear_Ordinal_toBounded(v_self_78_);
lean_dec(v_self_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object* v_x_80_, lean_object* v_prec_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_83_ = lean_int_dec_lt(v_x_80_, v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = l_Int_repr(v_x_80_);
v___x_85_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
else
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = l_Int_repr(v_x_80_);
v___x_87_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___x_88_ = l_Repr_addAppParen(v___x_87_, v_prec_81_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object* v_x_89_, lean_object* v_prec_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(v_x_89_, v_prec_90_);
lean_dec(v_prec_90_);
lean_dec(v_x_89_);
return v_res_91_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal(lean_object* v_a_94_, lean_object* v_b_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_int_dec_eq(v_a_94_, v_b_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___boxed(lean_object* v_a_97_, lean_object* v_b_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Std_Time_Week_OfYear_instDecidableEqOrdinal(v_a_97_, v_b_98_);
lean_dec(v_b_98_);
lean_dec(v_a_97_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLEOrdinal(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_box(0);
return v___x_101_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLTOrdinal(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_box(0);
return v___x_102_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLEOrdinal(lean_object* v_a_103_, lean_object* v_b_104_){
_start:
{
uint8_t v___x_105_; 
v___x_105_ = lean_int_dec_le(v_a_103_, v_b_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLEOrdinal___boxed(lean_object* v_a_106_, lean_object* v_b_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = l_Std_Time_Week_OfYear_instDecidableLEOrdinal(v_a_106_, v_b_107_);
lean_dec(v_b_107_);
lean_dec(v_a_106_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLTOrdinal(lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
uint8_t v___x_112_; 
v___x_112_ = lean_int_dec_lt(v_a_110_, v_b_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLTOrdinal___boxed(lean_object* v_a_113_, lean_object* v_b_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Std_Time_Week_OfYear_instDecidableLTOrdinal(v_a_113_, v_b_114_);
lean_dec(v_b_114_);
lean_dec(v_a_113_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val(lean_object* v_ordinal_118_){
_start:
{
lean_inc(v_ordinal_118_);
return v_ordinal_118_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_val___boxed(lean_object* v_ordinal_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Std_Time_Week_OfYear_Ordinal_val(v_ordinal_119_);
lean_dec(v_ordinal_119_);
return v_res_120_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_to_int(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(52u);
v___x_124_ = lean_nat_to_int(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__1);
v___x_126_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_127_ = lean_int_add(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_129_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__2);
v___x_130_ = lean_int_sub(v___x_129_, v___x_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_range_133_; 
v___x_131_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_132_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__3);
v_range_133_ = lean_int_add(v___x_132_, v___x_131_);
return v_range_133_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal(lean_object* v_n_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_range_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_135_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_136_ = lean_nat_to_int(v_n_134_);
v_range_137_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_138_ = lean_int_sub(v___x_136_, v___x_135_);
lean_dec(v___x_136_);
v___x_139_ = lean_int_emod(v___x_138_, v_range_137_);
lean_dec(v___x_138_);
v___x_140_ = lean_int_add(v___x_139_, v_range_137_);
lean_dec(v___x_139_);
v___x_141_ = lean_int_emod(v___x_140_, v_range_137_);
lean_dec(v___x_140_);
v___x_142_ = lean_int_add(v___x_141_, v___x_135_);
lean_dec(v___x_141_);
return v___x_142_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_144_ = lean_int_sub(v___x_143_, v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_range_145_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_146_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_147_ = lean_int_emod(v___x_146_, v_range_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_range_148_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_149_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1);
v___x_150_ = lean_int_add(v___x_149_, v_range_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_range_151_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__4);
v___x_152_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2);
v___x_153_ = lean_int_emod(v___x_152_, v_range_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_155_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3);
v___x_156_ = lean_int_add(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(lean_object* v_data_158_){
_start:
{
lean_inc(v_data_158_);
return v_data_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg___boxed(lean_object* v_data_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(v_data_159_);
lean_dec(v_data_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt(lean_object* v_data_161_, lean_object* v_h_162_){
_start:
{
lean_inc(v_data_161_);
return v_data_161_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___boxed(lean_object* v_data_163_, lean_object* v_h_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Time_Week_OfYear_Ordinal_ofInt(v_data_163_, v_h_164_);
lean_dec(v_data_163_);
return v_res_165_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10));
v___x_193_ = l_Lean_mkAtom(v___x_192_);
return v___x_193_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12);
v___x_195_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_196_ = lean_array_push(v___x_195_, v___x_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16));
v___x_208_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_209_ = lean_array_push(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_210_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17);
v___x_211_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15));
v___x_212_ = lean_box(2);
v___x_213_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v___x_211_);
lean_ctor_set(v___x_213_, 2, v___x_210_);
return v___x_213_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18);
v___x_215_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13);
v___x_216_ = lean_array_push(v___x_215_, v___x_214_);
return v___x_216_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_217_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19);
v___x_218_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11));
v___x_219_ = lean_box(2);
v___x_220_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_218_);
lean_ctor_set(v___x_220_, 2, v___x_217_);
return v___x_220_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20);
v___x_222_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_223_ = lean_array_push(v___x_222_, v___x_221_);
return v___x_223_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_224_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21);
v___x_225_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9));
v___x_226_ = lean_box(2);
v___x_227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
lean_ctor_set(v___x_227_, 2, v___x_224_);
return v___x_227_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22);
v___x_229_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_230_ = lean_array_push(v___x_229_, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_231_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23);
v___x_232_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7));
v___x_233_ = lean_box(2);
v___x_234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_232_);
lean_ctor_set(v___x_234_, 2, v___x_231_);
return v___x_234_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24);
v___x_236_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_237_ = lean_array_push(v___x_236_, v___x_235_);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_238_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25);
v___x_239_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4));
v___x_240_ = lean_box(2);
v___x_241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_239_);
lean_ctor_set(v___x_241_, 2, v___x_238_);
return v___x_241_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___redArg(lean_object* v_data_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = lean_nat_to_int(v_data_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat(lean_object* v_data_245_, lean_object* v_h_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_nat_to_int(v_data_245_);
return v___x_247_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(1u);
v___x_249_ = lean_nat_to_int(v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofFin(lean_object* v_data_250_){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_unsigned_to_nat(1u);
v___x_252_ = lean_nat_dec_le(v___x_251_, v_data_250_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
lean_dec(v_data_250_);
v___x_253_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0, &l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0);
return v___x_253_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_nat_to_int(v_data_250_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset(lean_object* v_ordinal_255_){
_start:
{
lean_inc(v_ordinal_255_);
return v_ordinal_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset___boxed(lean_object* v_ordinal_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Std_Time_Week_OfYear_Ordinal_toOffset(v_ordinal_256_);
lean_dec(v_ordinal_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk(lean_object* v_toBounded_258_){
_start:
{
lean_inc(v_toBounded_258_);
return v_toBounded_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_mk___boxed(lean_object* v_toBounded_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Std_Time_Week_Aligned_Ordinal_mk(v_toBounded_259_);
lean_dec(v_toBounded_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded(lean_object* v_self_261_){
_start:
{
lean_inc(v_self_261_);
return v_self_261_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_toBounded___boxed(lean_object* v_self_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Std_Time_Week_Aligned_Ordinal_toBounded(v_self_262_);
lean_dec(v_self_262_);
return v_res_263_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object* v_a_265_, lean_object* v_b_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = lean_int_dec_eq(v_a_265_, v_b_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object* v_a_268_, lean_object* v_b_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_Std_Time_Week_Aligned_instDecidableEqOrdinal(v_a_268_, v_b_269_);
lean_dec(v_b_269_);
lean_dec(v_a_268_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val(lean_object* v_ordinal_273_){
_start:
{
lean_inc(v_ordinal_273_);
return v_ordinal_273_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_Ordinal_val___boxed(lean_object* v_ordinal_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Std_Time_Week_Aligned_Ordinal_val(v_ordinal_274_);
lean_dec(v_ordinal_274_);
return v_res_275_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = lean_unsigned_to_nat(4u);
v___x_277_ = lean_nat_to_int(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__0);
v___x_279_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_280_ = lean_int_add(v___x_279_, v___x_278_);
return v___x_280_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_282_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__1);
v___x_283_ = lean_int_sub(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_range_286_; 
v___x_284_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_285_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__2);
v_range_286_ = lean_int_add(v___x_285_, v___x_284_);
return v_range_286_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal(lean_object* v_n_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_range_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_288_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_289_ = lean_nat_to_int(v_n_287_);
v_range_290_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_291_ = lean_int_sub(v___x_289_, v___x_288_);
lean_dec(v___x_289_);
v___x_292_ = lean_int_emod(v___x_291_, v_range_290_);
lean_dec(v___x_291_);
v___x_293_ = lean_int_add(v___x_292_, v_range_290_);
lean_dec(v___x_292_);
v___x_294_ = lean_int_emod(v___x_293_, v_range_290_);
lean_dec(v___x_293_);
v___x_295_ = lean_int_add(v___x_294_, v___x_288_);
lean_dec(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_range_296_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_297_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_298_ = lean_int_emod(v___x_297_, v_range_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_range_299_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_300_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0);
v___x_301_ = lean_int_add(v___x_300_, v_range_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_range_302_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___closed__3);
v___x_303_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1);
v___x_304_ = lean_int_emod(v___x_303_, v_range_302_);
return v___x_304_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_306_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2);
v___x_307_ = lean_int_add(v___x_306_, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk(lean_object* v_toBounded_309_){
_start:
{
lean_inc(v_toBounded_309_);
return v_toBounded_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_mk___boxed(lean_object* v_toBounded_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Std_Time_Week_Ordinal_mk(v_toBounded_310_);
lean_dec(v_toBounded_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded(lean_object* v_self_312_){
_start:
{
lean_inc(v_self_312_);
return v_self_312_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_toBounded___boxed(lean_object* v_self_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Std_Time_Week_Ordinal_toBounded(v_self_313_);
lean_dec(v_self_313_);
return v_res_314_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object* v_a_316_, lean_object* v_b_317_){
_start:
{
uint8_t v___x_318_; 
v___x_318_ = lean_int_dec_eq(v_a_316_, v_b_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object* v_a_319_, lean_object* v_b_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Std_Time_Week_instDecidableEqOrdinal(v_a_319_, v_b_320_);
lean_dec(v_b_320_);
lean_dec(v_a_319_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val(lean_object* v_ordinal_324_){
_start:
{
lean_inc(v_ordinal_324_);
return v_ordinal_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Ordinal_val___boxed(lean_object* v_ordinal_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Time_Week_Ordinal_val(v_ordinal_325_);
lean_dec(v_ordinal_325_);
return v_res_326_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__0(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(5u);
v___x_328_ = lean_nat_to_int(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__1(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__0, &l_Std_Time_Week_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__0);
v___x_330_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_331_ = lean_int_add(v___x_330_, v___x_329_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__2(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_333_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__1, &l_Std_Time_Week_instOfNatOrdinal___closed__1_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__1);
v___x_334_ = lean_int_sub(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___closed__3(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_range_337_; 
v___x_335_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_336_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__2, &l_Std_Time_Week_instOfNatOrdinal___closed__2_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__2);
v_range_337_ = lean_int_add(v___x_336_, v___x_335_);
return v_range_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal(lean_object* v_n_338_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v_range_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_339_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_340_ = lean_nat_to_int(v_n_338_);
v_range_341_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_342_ = lean_int_sub(v___x_340_, v___x_339_);
lean_dec(v___x_340_);
v___x_343_ = lean_int_emod(v___x_342_, v_range_341_);
lean_dec(v___x_342_);
v___x_344_ = lean_int_add(v___x_343_, v_range_341_);
lean_dec(v___x_343_);
v___x_345_ = lean_int_emod(v___x_344_, v_range_341_);
lean_dec(v___x_344_);
v___x_346_ = lean_int_add(v___x_345_, v___x_339_);
lean_dec(v___x_345_);
return v___x_346_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_range_347_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_348_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_349_ = lean_int_emod(v___x_348_, v_range_347_);
return v___x_349_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_range_350_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_351_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0);
v___x_352_ = lean_int_add(v___x_351_, v_range_350_);
return v___x_352_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v_range_353_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___closed__3, &l_Std_Time_Week_instOfNatOrdinal___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___closed__3);
v___x_354_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1);
v___x_355_ = lean_int_emod(v___x_354_, v_range_353_);
return v___x_355_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___closed__0);
v___x_357_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2);
v___x_358_ = lean_int_add(v___x_357_, v___x_356_);
return v___x_358_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNat(lean_object* v_data_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_nat_to_int(v_data_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt(lean_object* v_data_362_){
_start:
{
lean_inc(v_data_362_);
return v_data_362_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt___boxed(lean_object* v_data_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Std_Time_Week_Offset_ofInt(v_data_363_);
lean_dec(v_data_363_);
return v_res_364_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(604800000u);
v___x_366_ = lean_nat_to_int(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds(lean_object* v_weeks_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_369_ = lean_int_mul(v_weeks_367_, v___x_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds___boxed(lean_object* v_weeks_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Std_Time_Week_Offset_toMilliseconds(v_weeks_370_);
lean_dec(v_weeks_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds(lean_object* v_millis_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_374_ = lean_int_ediv(v_millis_372_, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds___boxed(lean_object* v_millis_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_Time_Week_Offset_ofMilliseconds(v_millis_375_);
lean_dec(v_millis_375_);
return v_res_376_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_cstr_to_nat("604800000000000");
v___x_378_ = lean_nat_to_int(v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds(lean_object* v_weeks_379_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_381_ = lean_int_mul(v_weeks_379_, v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds___boxed(lean_object* v_weeks_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_Time_Week_Offset_toNanoseconds(v_weeks_382_);
lean_dec(v_weeks_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds(lean_object* v_nanos_384_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_386_ = lean_int_ediv(v_nanos_384_, v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds___boxed(lean_object* v_nanos_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Std_Time_Week_Offset_ofNanoseconds(v_nanos_387_);
lean_dec(v_nanos_387_);
return v_res_388_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_unsigned_to_nat(604800u);
v___x_390_ = lean_nat_to_int(v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds(lean_object* v_weeks_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_393_ = lean_int_mul(v_weeks_391_, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds___boxed(lean_object* v_weeks_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Std_Time_Week_Offset_toSeconds(v_weeks_394_);
lean_dec(v_weeks_394_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds(lean_object* v_secs_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_398_ = lean_int_ediv(v_secs_396_, v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds___boxed(lean_object* v_secs_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Std_Time_Week_Offset_ofSeconds(v_secs_399_);
lean_dec(v_secs_399_);
return v_res_400_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_unsigned_to_nat(10080u);
v___x_402_ = lean_nat_to_int(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes(lean_object* v_weeks_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_405_ = lean_int_mul(v_weeks_403_, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes___boxed(lean_object* v_weeks_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Std_Time_Week_Offset_toMinutes(v_weeks_406_);
lean_dec(v_weeks_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes(lean_object* v_minutes_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_410_ = lean_int_ediv(v_minutes_408_, v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes___boxed(lean_object* v_minutes_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Std_Time_Week_Offset_ofMinutes(v_minutes_411_);
lean_dec(v_minutes_411_);
return v_res_412_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_unsigned_to_nat(168u);
v___x_414_ = lean_nat_to_int(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours(lean_object* v_weeks_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_417_ = lean_int_mul(v_weeks_415_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours___boxed(lean_object* v_weeks_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Std_Time_Week_Offset_toHours(v_weeks_418_);
lean_dec(v_weeks_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours(lean_object* v_hours_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_422_ = lean_int_ediv(v_hours_420_, v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours___boxed(lean_object* v_hours_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Std_Time_Week_Offset_ofHours(v_hours_423_);
lean_dec(v_hours_423_);
return v_res_424_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toDays___closed__0(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_unsigned_to_nat(7u);
v___x_426_ = lean_nat_to_int(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays(lean_object* v_weeks_427_){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_429_ = lean_int_mul(v_weeks_427_, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object* v_weeks_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Std_Time_Week_Offset_toDays(v_weeks_430_);
lean_dec(v_weeks_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays(lean_object* v_days_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_434_ = lean_int_ediv(v_days_432_, v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays___boxed(lean_object* v_days_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Std_Time_Week_Offset_ofDays(v_days_435_);
lean_dec(v_days_435_);
return v_res_436_;
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
