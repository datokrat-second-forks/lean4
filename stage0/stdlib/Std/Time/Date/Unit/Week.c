// Lean compiler output
// Module: Std.Time.Date.Unit.Week
// Imports: public import Std.Time.Date.Unit.Day
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
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instLEOrdinal;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instLTOrdinal;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3;
static lean_once_cell_t l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4;
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLeOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLeOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLeOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLeOrdinal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLtOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLtOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLtOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLtOrdinal___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instOrdOrdinal___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instReprOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instReprOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2;
static lean_once_cell_t l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1(lean_object*);
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
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_Aligned_instOrdOrdinal___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Std_Time_Week_instReprOrdinal = (const lean_object*)&l_Std_Time_Week_OfYear_instReprOrdinal___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2;
static lean_once_cell_t l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1(lean_object*);
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
LEAN_EXPORT uint8_t l_Std_Time_Week_instOrdOrdinal___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Week_instOrdOrdinal___aux__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_Week_instOrdOrdinal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Week_instOrdOrdinal___aux__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Week_instOrdOrdinal___closed__0 = (const lean_object*)&l_Std_Time_Week_instOrdOrdinal___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Week_instOrdOrdinal = (const lean_object*)&l_Std_Time_Week_instOrdOrdinal___closed__0_value;
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
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___aux__1(lean_object* v_n_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_77_ = lean_int_dec_lt(v_n_74_, v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = l_Int_repr(v_n_74_);
v___x_79_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = l_Int_repr(v_n_74_);
v___x_81_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
v___x_82_ = l_Repr_addAppParen(v___x_81_, v_a_75_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___aux__1___boxed(lean_object* v_n_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Std_Time_Week_OfYear_instReprOrdinal___aux__1(v_n_83_, v_a_84_);
lean_dec(v_a_84_);
lean_dec(v_n_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_89_ = lean_int_dec_lt(v___y_86_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = l_Int_repr(v___y_86_);
v___x_91_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = l_Int_repr(v___y_86_);
v___x_93_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
v___x_94_ = l_Repr_addAppParen(v___x_93_, v___y_87_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instReprOrdinal___lam__0___boxed(lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Std_Time_Week_OfYear_instReprOrdinal___lam__0(v___y_95_, v___y_96_);
lean_dec(v___y_96_);
lean_dec(v___y_95_);
return v_res_97_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal___aux__1(lean_object* v_a_100_, lean_object* v_b_101_){
_start:
{
uint8_t v___x_102_; 
v___x_102_ = lean_int_dec_eq(v_a_100_, v_b_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___aux__1___boxed(lean_object* v_a_103_, lean_object* v_b_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l_Std_Time_Week_OfYear_instDecidableEqOrdinal___aux__1(v_a_103_, v_b_104_);
lean_dec(v_b_104_);
lean_dec(v_a_103_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableEqOrdinal(lean_object* v_a_107_, lean_object* v_b_108_){
_start:
{
uint8_t v___x_109_; 
v___x_109_ = lean_int_dec_eq(v_a_107_, v_b_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableEqOrdinal___boxed(lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = l_Std_Time_Week_OfYear_instDecidableEqOrdinal(v_a_110_, v_b_111_);
lean_dec(v_b_111_);
lean_dec(v_a_110_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLEOrdinal(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_box(0);
return v___x_114_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instLTOrdinal(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_box(0);
return v___x_115_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(1u);
v___x_117_ = lean_nat_to_int(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(52u);
v___x_119_ = lean_nat_to_int(v___x_118_);
return v___x_119_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__1);
v___x_121_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_122_ = lean_int_add(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_124_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__2);
v___x_125_ = lean_int_sub(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v_range_128_; 
v___x_126_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_127_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__3);
v_range_128_ = lean_int_add(v___x_127_, v___x_126_);
return v_range_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1(lean_object* v_n_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v_range_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_130_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_131_ = lean_nat_to_int(v_n_129_);
v_range_132_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4);
v___x_133_ = lean_int_sub(v___x_131_, v___x_130_);
lean_dec(v___x_131_);
v___x_134_ = lean_int_emod(v___x_133_, v_range_132_);
lean_dec(v___x_133_);
v___x_135_ = lean_int_add(v___x_134_, v_range_132_);
lean_dec(v___x_134_);
v___x_136_ = lean_int_emod(v___x_135_, v_range_132_);
lean_dec(v___x_135_);
v___x_137_ = lean_int_add(v___x_136_, v___x_130_);
lean_dec(v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOfNatOrdinal(lean_object* v_n_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v_range_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_139_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_140_ = lean_nat_to_int(v_n_138_);
v_range_141_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4);
v___x_142_ = lean_int_sub(v___x_140_, v___x_139_);
lean_dec(v___x_140_);
v___x_143_ = lean_int_emod(v___x_142_, v_range_141_);
lean_dec(v___x_142_);
v___x_144_ = lean_int_add(v___x_143_, v_range_141_);
lean_dec(v___x_143_);
v___x_145_ = lean_int_emod(v___x_144_, v_range_141_);
lean_dec(v___x_144_);
v___x_146_ = lean_int_add(v___x_145_, v___x_139_);
lean_dec(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLeOrdinal___aux__1(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = lean_int_dec_le(v_x_147_, v_y_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLeOrdinal___aux__1___boxed(lean_object* v_x_150_, lean_object* v_y_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = l_Std_Time_Week_OfYear_instDecidableLeOrdinal___aux__1(v_x_150_, v_y_151_);
lean_dec(v_y_151_);
lean_dec(v_x_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLeOrdinal(lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = lean_int_dec_le(v___y_154_, v___y_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLeOrdinal___boxed(lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Std_Time_Week_OfYear_instDecidableLeOrdinal(v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec(v___y_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLtOrdinal___aux__1(lean_object* v_x_161_, lean_object* v_y_162_){
_start:
{
uint8_t v___x_163_; 
v___x_163_ = lean_int_dec_lt(v_x_161_, v_y_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLtOrdinal___aux__1___boxed(lean_object* v_x_164_, lean_object* v_y_165_){
_start:
{
uint8_t v_res_166_; lean_object* v_r_167_; 
v_res_166_ = l_Std_Time_Week_OfYear_instDecidableLtOrdinal___aux__1(v_x_164_, v_y_165_);
lean_dec(v_y_165_);
lean_dec(v_x_164_);
v_r_167_ = lean_box(v_res_166_);
return v_r_167_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instDecidableLtOrdinal(lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = lean_int_dec_lt(v___y_168_, v___y_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instDecidableLtOrdinal___boxed(lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
uint8_t v_res_173_; lean_object* v_r_174_; 
v_res_173_ = l_Std_Time_Week_OfYear_instDecidableLtOrdinal(v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec(v___y_171_);
v_r_174_ = lean_box(v_res_173_);
return v_r_174_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_176_ = lean_int_sub(v___x_175_, v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_range_177_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4);
v___x_178_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_179_ = lean_int_emod(v___x_178_, v_range_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_range_180_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4);
v___x_181_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__1);
v___x_182_ = lean_int_add(v___x_181_, v_range_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v_range_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_range_183_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__4);
v___x_184_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__2);
v___x_185_ = lean_int_emod(v___x_184_, v_range_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_187_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__3);
v___x_188_ = lean_int_add(v___x_187_, v___x_186_);
return v___x_188_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__4);
return v___x_189_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1(lean_object* v_x_190_, lean_object* v_y_191_){
_start:
{
uint8_t v___x_192_; 
v___x_192_ = lean_int_dec_lt(v_x_190_, v_y_191_);
if (v___x_192_ == 0)
{
uint8_t v___x_193_; 
v___x_193_ = lean_int_dec_eq(v_x_190_, v_y_191_);
if (v___x_193_ == 0)
{
uint8_t v___x_194_; 
v___x_194_ = 2;
return v___x_194_;
}
else
{
uint8_t v___x_195_; 
v___x_195_ = 1;
return v___x_195_;
}
}
else
{
uint8_t v___x_196_; 
v___x_196_ = 0;
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1___boxed(lean_object* v_x_197_, lean_object* v_y_198_){
_start:
{
uint8_t v_res_199_; lean_object* v_r_200_; 
v_res_199_ = l_Std_Time_Week_OfYear_instOrdOrdinal___aux__1(v_x_197_, v_y_198_);
lean_dec(v_y_198_);
lean_dec(v_x_197_);
v_r_200_ = lean_box(v_res_199_);
return v_r_200_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(lean_object* v_data_203_){
_start:
{
lean_inc(v_data_203_);
return v_data_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg___boxed(lean_object* v_data_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Std_Time_Week_OfYear_Ordinal_ofInt___redArg(v_data_204_);
lean_dec(v_data_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt(lean_object* v_data_206_, lean_object* v_h_207_){
_start:
{
lean_inc(v_data_206_);
return v_data_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofInt___boxed(lean_object* v_data_208_, lean_object* v_h_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Time_Week_OfYear_Ordinal_ofInt(v_data_208_, v_h_209_);
lean_dec(v_data_208_);
return v_res_210_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__10));
v___x_238_ = l_Lean_mkAtom(v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__12);
v___x_240_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_241_ = lean_array_push(v___x_240_, v___x_239_);
return v___x_241_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__16));
v___x_253_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_254_ = lean_array_push(v___x_253_, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_255_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__17);
v___x_256_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__15));
v___x_257_ = lean_box(2);
v___x_258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
lean_ctor_set(v___x_258_, 2, v___x_255_);
return v___x_258_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__18);
v___x_260_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__13);
v___x_261_ = lean_array_push(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_262_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__19);
v___x_263_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__11));
v___x_264_ = lean_box(2);
v___x_265_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___x_263_);
lean_ctor_set(v___x_265_, 2, v___x_262_);
return v___x_265_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__20);
v___x_267_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_268_ = lean_array_push(v___x_267_, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_269_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__21);
v___x_270_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__9));
v___x_271_ = lean_box(2);
v___x_272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_270_);
lean_ctor_set(v___x_272_, 2, v___x_269_);
return v___x_272_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__22);
v___x_274_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_275_ = lean_array_push(v___x_274_, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_276_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__23);
v___x_277_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__7));
v___x_278_ = lean_box(2);
v___x_279_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
lean_ctor_set(v___x_279_, 2, v___x_276_);
return v___x_279_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__24);
v___x_281_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__5));
v___x_282_ = lean_array_push(v___x_281_, v___x_280_);
return v___x_282_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_283_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__25);
v___x_284_ = ((lean_object*)(l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__4));
v___x_285_ = lean_box(2);
v___x_286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_283_);
return v___x_286_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26, &l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofNat___auto__1___closed__26);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat___redArg(lean_object* v_data_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_nat_to_int(v_data_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofNat(lean_object* v_data_290_, lean_object* v_h_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_nat_to_int(v_data_290_);
return v___x_292_;
}
}
static lean_object* _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_unsigned_to_nat(1u);
v___x_294_ = lean_nat_to_int(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_ofFin(lean_object* v_data_295_){
_start:
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = lean_nat_dec_le(v___x_296_, v_data_295_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; 
lean_dec(v_data_295_);
v___x_298_ = lean_obj_once(&l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0, &l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0_once, _init_l_Std_Time_Week_OfYear_Ordinal_ofFin___closed__0);
return v___x_298_;
}
else
{
lean_object* v___x_299_; 
v___x_299_ = lean_nat_to_int(v_data_295_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset(lean_object* v_ordinal_300_){
_start:
{
lean_inc(v_ordinal_300_);
return v_ordinal_300_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_OfYear_Ordinal_toOffset___boxed(lean_object* v_ordinal_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Std_Time_Week_OfYear_Ordinal_toOffset(v_ordinal_301_);
lean_dec(v_ordinal_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instReprOrdinal___aux__1(lean_object* v_n_303_, lean_object* v_a_304_){
_start:
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_306_ = lean_int_dec_lt(v_n_303_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = l_Int_repr(v_n_303_);
v___x_308_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = l_Int_repr(v_n_303_);
v___x_310_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
v___x_311_ = l_Repr_addAppParen(v___x_310_, v_a_304_);
return v___x_311_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instReprOrdinal___aux__1___boxed(lean_object* v_n_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Std_Time_Week_Aligned_instReprOrdinal___aux__1(v_n_312_, v_a_313_);
lean_dec(v_a_313_);
lean_dec(v_n_312_);
return v_res_314_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal___aux__1(lean_object* v_a_316_, lean_object* v_b_317_){
_start:
{
uint8_t v___x_318_; 
v___x_318_ = lean_int_dec_eq(v_a_316_, v_b_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___aux__1___boxed(lean_object* v_a_319_, lean_object* v_b_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Std_Time_Week_Aligned_instDecidableEqOrdinal___aux__1(v_a_319_, v_b_320_);
lean_dec(v_b_320_);
lean_dec(v_a_319_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instDecidableEqOrdinal(lean_object* v_a_323_, lean_object* v_b_324_){
_start:
{
uint8_t v___x_325_; 
v___x_325_ = lean_int_dec_eq(v_a_323_, v_b_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instDecidableEqOrdinal___boxed(lean_object* v_a_326_, lean_object* v_b_327_){
_start:
{
uint8_t v_res_328_; lean_object* v_r_329_; 
v_res_328_ = l_Std_Time_Week_Aligned_instDecidableEqOrdinal(v_a_326_, v_b_327_);
lean_dec(v_b_327_);
lean_dec(v_a_326_);
v_r_329_ = lean_box(v_res_328_);
return v_r_329_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_unsigned_to_nat(4u);
v___x_331_ = lean_nat_to_int(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__0);
v___x_333_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_334_ = lean_int_add(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_336_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__1);
v___x_337_ = lean_int_sub(v___x_336_, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_range_340_; 
v___x_338_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_339_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__2);
v_range_340_ = lean_int_add(v___x_339_, v___x_338_);
return v_range_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1(lean_object* v_n_341_){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_range_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_342_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_343_ = lean_nat_to_int(v_n_341_);
v_range_344_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3);
v___x_345_ = lean_int_sub(v___x_343_, v___x_342_);
lean_dec(v___x_343_);
v___x_346_ = lean_int_emod(v___x_345_, v_range_344_);
lean_dec(v___x_345_);
v___x_347_ = lean_int_add(v___x_346_, v_range_344_);
lean_dec(v___x_346_);
v___x_348_ = lean_int_emod(v___x_347_, v_range_344_);
lean_dec(v___x_347_);
v___x_349_ = lean_int_add(v___x_348_, v___x_342_);
lean_dec(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOfNatOrdinal(lean_object* v_n_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_range_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_351_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_352_ = lean_nat_to_int(v_n_350_);
v_range_353_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3);
v___x_354_ = lean_int_sub(v___x_352_, v___x_351_);
lean_dec(v___x_352_);
v___x_355_ = lean_int_emod(v___x_354_, v_range_353_);
lean_dec(v___x_354_);
v___x_356_ = lean_int_add(v___x_355_, v_range_353_);
lean_dec(v___x_355_);
v___x_357_ = lean_int_emod(v___x_356_, v_range_353_);
lean_dec(v___x_356_);
v___x_358_ = lean_int_add(v___x_357_, v___x_351_);
lean_dec(v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_range_359_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3);
v___x_360_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_361_ = lean_int_emod(v___x_360_, v_range_359_);
return v___x_361_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v_range_362_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3);
v___x_363_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__0);
v___x_364_ = lean_int_add(v___x_363_, v_range_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_range_365_ = lean_obj_once(&l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_Aligned_instOfNatOrdinal___aux__1___closed__3);
v___x_366_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__1);
v___x_367_ = lean_int_emod(v___x_366_, v_range_365_);
return v___x_367_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_369_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__2);
v___x_370_ = lean_int_add(v___x_369_, v___x_368_);
return v___x_370_;
}
}
static lean_object* _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_obj_once(&l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_Aligned_instInhabitedOrdinal___closed__3);
return v___x_371_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1(lean_object* v_x_372_, lean_object* v_y_373_){
_start:
{
uint8_t v___x_374_; 
v___x_374_ = lean_int_dec_lt(v_x_372_, v_y_373_);
if (v___x_374_ == 0)
{
uint8_t v___x_375_; 
v___x_375_ = lean_int_dec_eq(v_x_372_, v_y_373_);
if (v___x_375_ == 0)
{
uint8_t v___x_376_; 
v___x_376_ = 2;
return v___x_376_;
}
else
{
uint8_t v___x_377_; 
v___x_377_ = 1;
return v___x_377_;
}
}
else
{
uint8_t v___x_378_; 
v___x_378_ = 0;
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1___boxed(lean_object* v_x_379_, lean_object* v_y_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = l_Std_Time_Week_Aligned_instOrdOrdinal___aux__1(v_x_379_, v_y_380_);
lean_dec(v_y_380_);
lean_dec(v_x_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOrdinal___aux__1(lean_object* v_n_385_, lean_object* v_a_386_){
_start:
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = lean_obj_once(&l_Std_Time_Week_instReprOffset___lam__0___closed__0, &l_Std_Time_Week_instReprOffset___lam__0___closed__0_once, _init_l_Std_Time_Week_instReprOffset___lam__0___closed__0);
v___x_388_ = lean_int_dec_lt(v_n_385_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = l_Int_repr(v_n_385_);
v___x_390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = l_Int_repr(v_n_385_);
v___x_392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
v___x_393_ = l_Repr_addAppParen(v___x_392_, v_a_386_);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instReprOrdinal___aux__1___boxed(lean_object* v_n_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Std_Time_Week_instReprOrdinal___aux__1(v_n_394_, v_a_395_);
lean_dec(v_a_395_);
lean_dec(v_n_394_);
return v_res_396_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal___aux__1(lean_object* v_a_398_, lean_object* v_b_399_){
_start:
{
uint8_t v___x_400_; 
v___x_400_ = lean_int_dec_eq(v_a_398_, v_b_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___aux__1___boxed(lean_object* v_a_401_, lean_object* v_b_402_){
_start:
{
uint8_t v_res_403_; lean_object* v_r_404_; 
v_res_403_ = l_Std_Time_Week_instDecidableEqOrdinal___aux__1(v_a_401_, v_b_402_);
lean_dec(v_b_402_);
lean_dec(v_a_401_);
v_r_404_ = lean_box(v_res_403_);
return v_r_404_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instDecidableEqOrdinal(lean_object* v_a_405_, lean_object* v_b_406_){
_start:
{
uint8_t v___x_407_; 
v___x_407_ = lean_int_dec_eq(v_a_405_, v_b_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instDecidableEqOrdinal___boxed(lean_object* v_a_408_, lean_object* v_b_409_){
_start:
{
uint8_t v_res_410_; lean_object* v_r_411_; 
v_res_410_ = l_Std_Time_Week_instDecidableEqOrdinal(v_a_408_, v_b_409_);
lean_dec(v_b_409_);
lean_dec(v_a_408_);
v_r_411_ = lean_box(v_res_410_);
return v_r_411_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(5u);
v___x_413_ = lean_nat_to_int(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__0);
v___x_415_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_416_ = lean_int_add(v___x_415_, v___x_414_);
return v___x_416_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_418_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__1);
v___x_419_ = lean_int_sub(v___x_418_, v___x_417_);
return v___x_419_;
}
}
static lean_object* _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_range_422_; 
v___x_420_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_421_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__2);
v_range_422_ = lean_int_add(v___x_421_, v___x_420_);
return v_range_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal___aux__1(lean_object* v_n_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_range_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_424_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_425_ = lean_nat_to_int(v_n_423_);
v_range_426_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3);
v___x_427_ = lean_int_sub(v___x_425_, v___x_424_);
lean_dec(v___x_425_);
v___x_428_ = lean_int_emod(v___x_427_, v_range_426_);
lean_dec(v___x_427_);
v___x_429_ = lean_int_add(v___x_428_, v_range_426_);
lean_dec(v___x_428_);
v___x_430_ = lean_int_emod(v___x_429_, v_range_426_);
lean_dec(v___x_429_);
v___x_431_ = lean_int_add(v___x_430_, v___x_424_);
lean_dec(v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOfNatOrdinal(lean_object* v_n_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_range_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_433_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_434_ = lean_nat_to_int(v_n_432_);
v_range_435_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3);
v___x_436_ = lean_int_sub(v___x_434_, v___x_433_);
lean_dec(v___x_434_);
v___x_437_ = lean_int_emod(v___x_436_, v_range_435_);
lean_dec(v___x_436_);
v___x_438_ = lean_int_add(v___x_437_, v_range_435_);
lean_dec(v___x_437_);
v___x_439_ = lean_int_emod(v___x_438_, v_range_435_);
lean_dec(v___x_438_);
v___x_440_ = lean_int_add(v___x_439_, v___x_433_);
lean_dec(v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0(void){
_start:
{
lean_object* v_range_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_range_441_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3);
v___x_442_ = lean_obj_once(&l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_OfYear_instInhabitedOrdinal___closed__0);
v___x_443_ = lean_int_emod(v___x_442_, v_range_441_);
return v___x_443_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1(void){
_start:
{
lean_object* v_range_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_range_444_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3);
v___x_445_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__0, &l_Std_Time_Week_instInhabitedOrdinal___closed__0_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__0);
v___x_446_ = lean_int_add(v___x_445_, v_range_444_);
return v___x_446_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2(void){
_start:
{
lean_object* v_range_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_range_447_ = lean_obj_once(&l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3, &l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3_once, _init_l_Std_Time_Week_instOfNatOrdinal___aux__1___closed__3);
v___x_448_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__1, &l_Std_Time_Week_instInhabitedOrdinal___closed__1_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__1);
v___x_449_ = lean_int_emod(v___x_448_, v_range_447_);
return v___x_449_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_obj_once(&l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0, &l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0_once, _init_l_Std_Time_Week_OfYear_instOfNatOrdinal___aux__1___closed__0);
v___x_451_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__2, &l_Std_Time_Week_instInhabitedOrdinal___closed__2_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__2);
v___x_452_ = lean_int_add(v___x_451_, v___x_450_);
return v___x_452_;
}
}
static lean_object* _init_l_Std_Time_Week_instInhabitedOrdinal(void){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = lean_obj_once(&l_Std_Time_Week_instInhabitedOrdinal___closed__3, &l_Std_Time_Week_instInhabitedOrdinal___closed__3_once, _init_l_Std_Time_Week_instInhabitedOrdinal___closed__3);
return v___x_453_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Week_instOrdOrdinal___aux__1(lean_object* v_x_454_, lean_object* v_y_455_){
_start:
{
uint8_t v___x_456_; 
v___x_456_ = lean_int_dec_lt(v_x_454_, v_y_455_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; 
v___x_457_ = lean_int_dec_eq(v_x_454_, v_y_455_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = 2;
return v___x_458_;
}
else
{
uint8_t v___x_459_; 
v___x_459_ = 1;
return v___x_459_;
}
}
else
{
uint8_t v___x_460_; 
v___x_460_ = 0;
return v___x_460_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_instOrdOrdinal___aux__1___boxed(lean_object* v_x_461_, lean_object* v_y_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_Std_Time_Week_instOrdOrdinal___aux__1(v_x_461_, v_y_462_);
lean_dec(v_y_462_);
lean_dec(v_x_461_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNat(lean_object* v_data_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = lean_nat_to_int(v_data_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt(lean_object* v_data_469_){
_start:
{
lean_inc(v_data_469_);
return v_data_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofInt___boxed(lean_object* v_data_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Std_Time_Week_Offset_ofInt(v_data_470_);
lean_dec(v_data_470_);
return v_res_471_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_unsigned_to_nat(604800000u);
v___x_473_ = lean_nat_to_int(v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds(lean_object* v_weeks_474_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_476_ = lean_int_mul(v_weeks_474_, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMilliseconds___boxed(lean_object* v_weeks_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_Time_Week_Offset_toMilliseconds(v_weeks_477_);
lean_dec(v_weeks_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds(lean_object* v_millis_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_obj_once(&l_Std_Time_Week_Offset_toMilliseconds___closed__0, &l_Std_Time_Week_Offset_toMilliseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toMilliseconds___closed__0);
v___x_481_ = lean_int_ediv(v_millis_479_, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMilliseconds___boxed(lean_object* v_millis_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Std_Time_Week_Offset_ofMilliseconds(v_millis_482_);
lean_dec(v_millis_482_);
return v_res_483_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_cstr_to_nat("604800000000000");
v___x_485_ = lean_nat_to_int(v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds(lean_object* v_weeks_486_){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_488_ = lean_int_mul(v_weeks_486_, v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toNanoseconds___boxed(lean_object* v_weeks_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Time_Week_Offset_toNanoseconds(v_weeks_489_);
lean_dec(v_weeks_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds(lean_object* v_nanos_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&l_Std_Time_Week_Offset_toNanoseconds___closed__0, &l_Std_Time_Week_Offset_toNanoseconds___closed__0_once, _init_l_Std_Time_Week_Offset_toNanoseconds___closed__0);
v___x_493_ = lean_int_ediv(v_nanos_491_, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofNanoseconds___boxed(lean_object* v_nanos_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Std_Time_Week_Offset_ofNanoseconds(v_nanos_494_);
lean_dec(v_nanos_494_);
return v_res_495_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toSeconds___closed__0(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = lean_unsigned_to_nat(604800u);
v___x_497_ = lean_nat_to_int(v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds(lean_object* v_weeks_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_500_ = lean_int_mul(v_weeks_498_, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toSeconds___boxed(lean_object* v_weeks_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Std_Time_Week_Offset_toSeconds(v_weeks_501_);
lean_dec(v_weeks_501_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds(lean_object* v_secs_503_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_obj_once(&l_Std_Time_Week_Offset_toSeconds___closed__0, &l_Std_Time_Week_Offset_toSeconds___closed__0_once, _init_l_Std_Time_Week_Offset_toSeconds___closed__0);
v___x_505_ = lean_int_ediv(v_secs_503_, v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofSeconds___boxed(lean_object* v_secs_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Std_Time_Week_Offset_ofSeconds(v_secs_506_);
lean_dec(v_secs_506_);
return v_res_507_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(10080u);
v___x_509_ = lean_nat_to_int(v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes(lean_object* v_weeks_510_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_512_ = lean_int_mul(v_weeks_510_, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toMinutes___boxed(lean_object* v_weeks_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Std_Time_Week_Offset_toMinutes(v_weeks_513_);
lean_dec(v_weeks_513_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes(lean_object* v_minutes_515_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_obj_once(&l_Std_Time_Week_Offset_toMinutes___closed__0, &l_Std_Time_Week_Offset_toMinutes___closed__0_once, _init_l_Std_Time_Week_Offset_toMinutes___closed__0);
v___x_517_ = lean_int_ediv(v_minutes_515_, v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofMinutes___boxed(lean_object* v_minutes_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Std_Time_Week_Offset_ofMinutes(v_minutes_518_);
lean_dec(v_minutes_518_);
return v_res_519_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toHours___closed__0(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_unsigned_to_nat(168u);
v___x_521_ = lean_nat_to_int(v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours(lean_object* v_weeks_522_){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_524_ = lean_int_mul(v_weeks_522_, v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toHours___boxed(lean_object* v_weeks_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Std_Time_Week_Offset_toHours(v_weeks_525_);
lean_dec(v_weeks_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours(lean_object* v_hours_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_obj_once(&l_Std_Time_Week_Offset_toHours___closed__0, &l_Std_Time_Week_Offset_toHours___closed__0_once, _init_l_Std_Time_Week_Offset_toHours___closed__0);
v___x_529_ = lean_int_ediv(v_hours_527_, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofHours___boxed(lean_object* v_hours_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Std_Time_Week_Offset_ofHours(v_hours_530_);
lean_dec(v_hours_530_);
return v_res_531_;
}
}
static lean_object* _init_l_Std_Time_Week_Offset_toDays___closed__0(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_unsigned_to_nat(7u);
v___x_533_ = lean_nat_to_int(v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays(lean_object* v_weeks_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_536_ = lean_int_mul(v_weeks_534_, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object* v_weeks_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Std_Time_Week_Offset_toDays(v_weeks_537_);
lean_dec(v_weeks_537_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays(lean_object* v_days_539_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_obj_once(&l_Std_Time_Week_Offset_toDays___closed__0, &l_Std_Time_Week_Offset_toDays___closed__0_once, _init_l_Std_Time_Week_Offset_toDays___closed__0);
v___x_541_ = lean_int_ediv(v_days_539_, v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Week_Offset_ofDays___boxed(lean_object* v_days_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Std_Time_Week_Offset_ofDays(v_days_542_);
lean_dec(v_days_542_);
return v_res_543_;
}
}
lean_object* runtime_initialize_Std_Time_Date_Unit_Day(uint8_t builtin);
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
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Date_Unit_Week(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date_Unit_Day(builtin);
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
