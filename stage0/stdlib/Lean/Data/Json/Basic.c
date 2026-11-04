// Lean compiler output
// Module: Lean.Data.Json.Basic
// Imports: public import Init.Data.Range public import Init.Data.OfScientific public import Init.Data.Hashable public import Std.Data.TreeMap.Raw.Basic public import Init.Data.Ord.String import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Nat import Init.Data.String.Substring import Init.Data.ToString.Macro
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
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint64_t lean_string_hash(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Substring_Raw_nextn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_negate(double);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
uint8_t lean_float_beq(double, double);
uint8_t lean_float_decLt(double, double);
double lean_float_of_nat(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
double lean_float_mul(double, double);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instHashableJsonNumber_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instHashableJsonNumber_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_instHashableJsonNumber_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableJsonNumber_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableJsonNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableJsonNumber_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableJsonNumber___closed__0 = (const lean_object*)&l_Lean_instHashableJsonNumber___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableJsonNumber = (const lean_object*)&l_Lean_instHashableJsonNumber___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_JsonNumber_fromNat_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instCoeNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_fromNat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instCoeNat___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instCoeNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instCoeNat = (const lean_object*)&l_Lean_JsonNumber_instCoeNat___closed__0_value;
static const lean_closure_object l_Lean_JsonNumber_instCoeInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_fromInt, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instCoeInt___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instCoeInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instCoeInt = (const lean_object*)&l_Lean_JsonNumber_instCoeInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__1;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__2;
static lean_once_cell_t l_Lean_JsonNumber_normalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_normalize___closed__3;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_normalize(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonNumber_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_ltProp;
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instDecidableLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instOrd___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOrd___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instOrd___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instOrd___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instOrd = (const lean_object*)&l_Lean_JsonNumber_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_JsonNumber_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_JsonNumber_toString___closed__0 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_JsonNumber_toString___closed__1 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__1_value;
static const lean_string_object l_Lean_JsonNumber_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_JsonNumber_toString___closed__2 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__2_value;
static lean_once_cell_t l_Lean_JsonNumber_toString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_toString___closed__3;
static const lean_string_object l_Lean_JsonNumber_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_JsonNumber_toString___closed__4 = (const lean_object*)&l_Lean_JsonNumber_toString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instToString___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instToString = (const lean_object*)&l_Lean_JsonNumber_instToString___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__0_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__1 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__1_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__2 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__2_value;
static const lean_string_object l_Lean_JsonNumber_instRepr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__3 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_JsonNumber_instRepr___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__4;
static lean_once_cell_t l_Lean_JsonNumber_instRepr___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__5;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__6 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_JsonNumber_instRepr___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__3_value)}};
static const lean_object* l_Lean_JsonNumber_instRepr___lam__0___closed__7 = (const lean_object*)&l_Lean_JsonNumber_instRepr___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instRepr___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instRepr = (const lean_object*)&l_Lean_JsonNumber_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instOfScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instOfScientific___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instOfScientific___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instOfScientific___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instOfScientific = (const lean_object*)&l_Lean_JsonNumber_instOfScientific___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instNeg___lam__0(lean_object*);
static const lean_closure_object l_Lean_JsonNumber_instNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_JsonNumber_instNeg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_JsonNumber_instNeg___closed__0 = (const lean_object*)&l_Lean_JsonNumber_instNeg___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_JsonNumber_instNeg = (const lean_object*)&l_Lean_JsonNumber_instNeg___closed__0_value;
static lean_once_cell_t l_Lean_JsonNumber_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instInhabited;
static lean_once_cell_t l_Lean_JsonNumber_toFloat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_toFloat___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_toFloat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_toFloat___closed__1;
LEAN_EXPORT double l_Lean_JsonNumber_toFloat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toFloat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Data.Json.Basic"};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0_value;
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Data.Json.Basic.0.Lean.JsonNumber.fromPositiveFloat!"};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1_value;
static const lean_string_object l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to parse "};
static const lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2 = (const lean_object*)&l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(double);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___boxed(lean_object*);
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_fromFloat_x3f___closed__0;
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__1;
static lean_once_cell_t l_Lean_JsonNumber_fromFloat_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_JsonNumber_fromFloat_x3f___closed__2;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-Infinity"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__3 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__3_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__3_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__4 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__4_value;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Infinity"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__5 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__5_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__5_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__6 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__6_value;
static const lean_string_object l_Lean_JsonNumber_fromFloat_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "NaN"};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__7 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__7_value;
static const lean_ctor_object l_Lean_JsonNumber_fromFloat_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__7_value)}};
static const lean_object* l_Lean_JsonNumber_fromFloat_x3f___closed__8 = (const lean_object*)&l_Lean_JsonNumber_fromFloat_x3f___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f(double);
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_strLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_strLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedJson_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedJson;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Json_instBEq___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instBEq___private__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Json_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instBEq___private__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instBEq___closed__0 = (const lean_object*)&l_Lean_Json_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instBEq = (const lean_object*)&l_Lean_Json_instBEq___closed__0_value;
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT uint64_t l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(lean_object*);
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Json_instHashable___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instHashable___private__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Json_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instHashable___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instHashable___closed__0 = (const lean_object*)&l_Lean_Json_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instHashable = (const lean_object*)&l_Lean_Json_instHashable___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mkObj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeNat___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeNat___closed__0 = (const lean_object*)&l_Lean_Json_instCoeNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeNat = (const lean_object*)&l_Lean_Json_instCoeNat___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeInt___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeInt___closed__0 = (const lean_object*)&l_Lean_Json_instCoeInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeInt = (const lean_object*)&l_Lean_Json_instCoeInt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeString___closed__0 = (const lean_object*)&l_Lean_Json_instCoeString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeString = (const lean_object*)&l_Lean_Json_instCoeString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeBool___closed__0 = (const lean_object*)&l_Lean_Json_instCoeBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeBool = (const lean_object*)&l_Lean_Json_instCoeBool___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instOfNat(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Json_isNull(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_isNull___boxed(lean_object*);
static const lean_string_object l_Lean_Json_getObj_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "object expected"};
static const lean_object* l_Lean_Json_getObj_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObj_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getObj_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getObj_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObj_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getArr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "array expected"};
static const lean_object* l_Lean_Json_getArr_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getArr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getArr_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getArr_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getArr_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getStr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "String expected"};
static const lean_object* l_Lean_Json_getStr_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getStr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getStr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getStr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getStr_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getStr_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getStr_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Natural number expected"};
static const lean_object* l_Lean_Json_getNat_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getNat_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getNat_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getNat_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getNat_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getNat_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getInt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Integer expected"};
static const lean_object* l_Lean_Json_getInt_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getInt_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getInt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getInt_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getInt_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getInt_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getInt_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getBool_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Bool expected"};
static const lean_object* l_Lean_Json_getBool_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getBool_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getBool_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getBool_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getBool_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getBool_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Json_getNum_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number expected"};
static const lean_object* l_Lean_Json_getNum_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getNum_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getNum_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getNum_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getNum_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getNum_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getNum_x3f(lean_object*);
static const lean_string_object l_Lean_Json_getObjVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "property not found: "};
static const lean_object* l_Lean_Json_getObjVal_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getObjVal_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObjVal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObj_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getObjVal_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getObjVal_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_getArrVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "index out of bounds: "};
static const lean_object* l_Lean_Json_getArrVal_x3f___closed__0 = (const lean_object*)&l_Lean_Json_getArrVal_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Json_getArrVal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getArr_x3f___closed__0_value)}};
static const lean_object* l_Lean_Json_getArrVal_x3f___closed__1 = (const lean_object*)&l_Lean_Json_getArrVal_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getArrVal_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Json_setObjVal_x21_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_setObjVal_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Json.setObjVal!"};
static const lean_object* l_Lean_Json_setObjVal_x21___closed__0 = (const lean_object*)&l_Lean_Json_setObjVal_x21___closed__0_value;
static const lean_string_object l_Lean_Json_setObjVal_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Json.setObjVal!: not an object: {j}"};
static const lean_object* l_Lean_Json_setObjVal_x21___closed__1 = (const lean_object*)&l_Lean_Json_setObjVal_x21___closed__1_value;
static lean_once_cell_t l_Lean_Json_setObjVal_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json_setObjVal_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_mergeObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_instCoeArrayStructured___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeArrayStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeArrayStructured___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeArrayStructured___closed__0 = (const lean_object*)&l_Lean_Json_instCoeArrayStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeArrayStructured = (const lean_object*)&l_Lean_Json_instCoeArrayStructured___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_instCoeRawStringStructured___lam__0(lean_object*);
static const lean_closure_object l_Lean_Json_instCoeRawStringStructured___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_instCoeRawStringStructured___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Json_instCoeRawStringStructured___closed__0 = (const lean_object*)&l_Lean_Json_instCoeRawStringStructured___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Json_instCoeRawStringStructured = (const lean_object*)&l_Lean_Json_instCoeRawStringStructured___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_mantissa_3_; lean_object* v_exponent_4_; lean_object* v_mantissa_5_; lean_object* v_exponent_6_; uint8_t v___x_7_; 
v_mantissa_3_ = lean_ctor_get(v_x_1_, 0);
v_exponent_4_ = lean_ctor_get(v_x_1_, 1);
v_mantissa_5_ = lean_ctor_get(v_x_2_, 0);
v_exponent_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_int_dec_eq(v_mantissa_3_, v_mantissa_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_nat_dec_eq(v_exponent_4_, v_exponent_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber_decEq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_instDecidableEqJsonNumber_decEq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableEqJsonNumber(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = l_Lean_instDecidableEqJsonNumber_decEq(v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqJsonNumber___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = l_Lean_instDecidableEqJsonNumber(v_x_16_, v_x_17_);
lean_dec_ref(v_x_17_);
lean_dec_ref(v_x_16_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
static lean_object* _init_l_Lean_instHashableJsonNumber_hash___closed__0(void){
_start:
{
lean_object* v_natZero_20_; lean_object* v_intZero_21_; 
v_natZero_20_ = lean_unsigned_to_nat(0u);
v_intZero_21_ = lean_nat_to_int(v_natZero_20_);
return v_intZero_21_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableJsonNumber_hash(lean_object* v_x_22_){
_start:
{
lean_object* v_mantissa_23_; lean_object* v_exponent_24_; uint64_t v___x_25_; uint64_t v___y_27_; lean_object* v_intZero_31_; uint8_t v_isNeg_32_; 
v_mantissa_23_ = lean_ctor_get(v_x_22_, 0);
v_exponent_24_ = lean_ctor_get(v_x_22_, 1);
v___x_25_ = 0ULL;
v_intZero_31_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v_isNeg_32_ = lean_int_dec_lt(v_mantissa_23_, v_intZero_31_);
if (v_isNeg_32_ == 0)
{
lean_object* v_a_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint64_t v___x_36_; 
v_a_33_ = lean_nat_abs(v_mantissa_23_);
v___x_34_ = lean_unsigned_to_nat(2u);
v___x_35_ = lean_nat_mul(v___x_34_, v_a_33_);
lean_dec(v_a_33_);
v___x_36_ = lean_uint64_of_nat(v___x_35_);
lean_dec(v___x_35_);
v___y_27_ = v___x_36_;
goto v___jp_26_;
}
else
{
lean_object* v_abs_37_; lean_object* v_one_38_; lean_object* v_a_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint64_t v___x_43_; 
v_abs_37_ = lean_nat_abs(v_mantissa_23_);
v_one_38_ = lean_unsigned_to_nat(1u);
v_a_39_ = lean_nat_sub(v_abs_37_, v_one_38_);
lean_dec(v_abs_37_);
v___x_40_ = lean_unsigned_to_nat(2u);
v___x_41_ = lean_nat_mul(v___x_40_, v_a_39_);
lean_dec(v_a_39_);
v___x_42_ = lean_nat_add(v___x_41_, v_one_38_);
lean_dec(v___x_41_);
v___x_43_ = lean_uint64_of_nat(v___x_42_);
lean_dec(v___x_42_);
v___y_27_ = v___x_43_;
goto v___jp_26_;
}
v___jp_26_:
{
uint64_t v___x_28_; uint64_t v___x_29_; uint64_t v___x_30_; 
v___x_28_ = lean_uint64_mix_hash(v___x_25_, v___y_27_);
v___x_29_ = lean_uint64_of_nat(v_exponent_24_);
v___x_30_ = lean_uint64_mix_hash(v___x_28_, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableJsonNumber_hash___boxed(lean_object* v_x_44_){
_start:
{
uint64_t v_res_45_; lean_object* v_r_46_; 
v_res_45_ = l_Lean_instHashableJsonNumber_hash(v_x_44_);
lean_dec_ref(v_x_44_);
v_r_46_ = lean_box_uint64(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_JsonNumber_fromNat_spec__0(lean_object* v_a_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_nat_to_int(v_a_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromNat(lean_object* v_n_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_nat_to_int(v_n_51_);
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromInt(lean_object* v_n_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_unsigned_to_nat(0u);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v_n_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfNat(lean_object* v_n_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_JsonNumber_fromNat(v_n_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(lean_object* v_n_64_, lean_object* v_digits_65_){
_start:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_unsigned_to_nat(9u);
v___x_67_ = lean_nat_dec_le(v_n_64_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_68_ = lean_unsigned_to_nat(10u);
v___x_69_ = lean_nat_div(v_n_64_, v___x_68_);
lean_dec(v_n_64_);
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_nat_add(v_digits_65_, v___x_70_);
lean_dec(v_digits_65_);
v_n_64_ = v___x_69_;
v_digits_65_ = v___x_71_;
goto _start;
}
else
{
lean_dec(v_n_64_);
return v_digits_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(lean_object* v_n_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits_loop(v_n_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(lean_object* v_upperBound_76_, lean_object* v_a_77_, lean_object* v_b_78_){
_start:
{
uint8_t v___x_79_; 
v___x_79_ = lean_nat_dec_lt(v_a_77_, v_upperBound_76_);
if (v___x_79_ == 0)
{
lean_dec(v_a_77_);
return v_b_78_;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = lean_unsigned_to_nat(10u);
v___x_82_ = lean_nat_mod(v_b_78_, v___x_81_);
v___x_83_ = lean_nat_dec_eq(v___x_82_, v___x_80_);
lean_dec(v___x_82_);
if (v___x_83_ == 0)
{
lean_dec(v_a_77_);
return v_b_78_;
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_nat_div(v_b_78_, v___x_81_);
lean_dec(v_b_78_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_add(v_a_77_, v___x_85_);
lean_dec(v_a_77_);
v_a_77_ = v___x_86_;
v_b_78_ = v___x_84_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg___boxed(lean_object* v_upperBound_88_, lean_object* v_a_89_, lean_object* v_b_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_upperBound_88_, v_a_89_, v_b_90_);
lean_dec(v_upperBound_88_);
return v_res_91_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__0, &l_Lean_JsonNumber_normalize___closed__0_once, _init_l_Lean_JsonNumber_normalize___closed__0);
v___x_95_ = lean_int_neg(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_JsonNumber_normalize___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__2, &l_Lean_JsonNumber_normalize___closed__2_once, _init_l_Lean_JsonNumber_normalize___closed__2);
v___x_100_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_normalize(lean_object* v_x_102_){
_start:
{
lean_object* v_mantissa_103_; lean_object* v_exponent_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_128_; 
v_mantissa_103_ = lean_ctor_get(v_x_102_, 0);
v_exponent_104_ = lean_ctor_get(v_x_102_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_102_);
if (v_isSharedCheck_128_ == 0)
{
v___x_106_ = v_x_102_;
v_isShared_107_ = v_isSharedCheck_128_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_exponent_104_);
lean_inc(v_mantissa_103_);
lean_dec(v_x_102_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_128_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___y_110_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_123_ = lean_int_dec_eq(v_mantissa_103_, v___x_122_);
if (v___x_123_ == 0)
{
uint8_t v___x_124_; 
v___x_124_ = lean_int_dec_lt(v___x_122_, v_mantissa_103_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__1, &l_Lean_JsonNumber_normalize___closed__1_once, _init_l_Lean_JsonNumber_normalize___closed__1);
v___y_110_ = v___x_125_;
goto v___jp_109_;
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__0, &l_Lean_JsonNumber_normalize___closed__0_once, _init_l_Lean_JsonNumber_normalize___closed__0);
v___y_110_ = v___x_126_;
goto v___jp_109_;
}
}
else
{
lean_object* v___x_127_; 
lean_del_object(v___x_106_);
lean_dec(v_exponent_104_);
lean_dec(v_mantissa_103_);
v___x_127_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__3, &l_Lean_JsonNumber_normalize___closed__3_once, _init_l_Lean_JsonNumber_normalize___closed__3);
return v___x_127_;
}
v___jp_109_:
{
lean_object* v_mAbs_111_; lean_object* v_nDigits_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v_mAbs_111_ = lean_nat_abs(v_mantissa_103_);
lean_dec(v_mantissa_103_);
lean_inc(v_mAbs_111_);
v_nDigits_112_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_mAbs_111_);
v___x_113_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_nDigits_112_, v___x_108_, v_mAbs_111_);
v___x_114_ = lean_nat_to_int(v_exponent_104_);
v___x_115_ = lean_int_neg(v___x_114_);
lean_dec(v___x_114_);
v___x_116_ = lean_nat_to_int(v_nDigits_112_);
v___x_117_ = lean_int_add(v___x_115_, v___x_116_);
lean_dec(v___x_116_);
lean_dec(v___x_115_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_117_);
lean_ctor_set(v___x_106_, 0, v___x_113_);
v___x_119_ = v___x_106_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; 
lean_inc(v___y_110_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v___y_110_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
return v___x_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(lean_object* v_upperBound_129_, lean_object* v_inst_130_, lean_object* v_R_131_, lean_object* v_a_132_, lean_object* v_b_133_, lean_object* v_c_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___redArg(v_upperBound_129_, v_a_132_, v_b_133_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0___boxed(lean_object* v_upperBound_136_, lean_object* v_inst_137_, lean_object* v_R_138_, lean_object* v_a_139_, lean_object* v_b_140_, lean_object* v_c_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_JsonNumber_normalize_spec__0(v_upperBound_136_, v_inst_137_, v_R_138_, v_a_139_, v_b_140_, v_c_141_);
lean_dec(v_upperBound_136_);
return v_res_142_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_lt(lean_object* v_a_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_fst_146_; lean_object* v_snd_147_; lean_object* v___x_167_; lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_170_; lean_object* v_fst_171_; lean_object* v_snd_172_; uint8_t v___x_173_; 
v___x_167_ = l_Lean_JsonNumber_normalize(v_a_143_);
v_fst_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_fst_168_);
v_snd_169_ = lean_ctor_get(v___x_167_, 1);
lean_inc(v_snd_169_);
lean_dec_ref(v___x_167_);
v___x_170_ = l_Lean_JsonNumber_normalize(v_b_144_);
v_fst_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_fst_171_);
v_snd_172_ = lean_ctor_get(v___x_170_, 1);
lean_inc(v_snd_172_);
lean_dec_ref(v___x_170_);
v___x_173_ = lean_int_dec_eq(v_fst_168_, v_fst_171_);
if (v___x_173_ == 0)
{
uint8_t v___x_174_; 
lean_dec(v_snd_172_);
lean_dec(v_snd_169_);
v___x_174_ = lean_int_dec_lt(v_fst_168_, v_fst_171_);
lean_dec(v_fst_171_);
lean_dec(v_fst_168_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; uint8_t v___x_176_; 
lean_dec(v_fst_171_);
v___x_175_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_176_ = lean_int_dec_eq(v_fst_168_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_obj_once(&l_Lean_JsonNumber_normalize___closed__1, &l_Lean_JsonNumber_normalize___closed__1_once, _init_l_Lean_JsonNumber_normalize___closed__1);
v___x_178_ = lean_int_dec_eq(v_fst_168_, v___x_177_);
lean_dec(v_fst_168_);
if (v___x_178_ == 0)
{
v_fst_146_ = v_snd_169_;
v_snd_147_ = v_snd_172_;
goto v___jp_145_;
}
else
{
v_fst_146_ = v_snd_172_;
v_snd_147_ = v_snd_169_;
goto v___jp_145_;
}
}
else
{
uint8_t v___x_179_; 
lean_dec(v_snd_172_);
lean_dec(v_snd_169_);
lean_dec(v_fst_168_);
v___x_179_ = 0;
return v___x_179_;
}
}
v___jp_145_:
{
lean_object* v_fst_148_; lean_object* v_snd_149_; lean_object* v_fst_150_; lean_object* v_snd_151_; uint8_t v___x_152_; 
v_fst_148_ = lean_ctor_get(v_fst_146_, 0);
lean_inc(v_fst_148_);
v_snd_149_ = lean_ctor_get(v_fst_146_, 1);
lean_inc(v_snd_149_);
lean_dec_ref(v_fst_146_);
v_fst_150_ = lean_ctor_get(v_snd_147_, 0);
lean_inc(v_fst_150_);
v_snd_151_ = lean_ctor_get(v_snd_147_, 1);
lean_inc(v_snd_151_);
lean_dec_ref(v_snd_147_);
v___x_152_ = lean_int_dec_lt(v_snd_149_, v_snd_151_);
if (v___x_152_ == 0)
{
uint8_t v___x_153_; 
v___x_153_ = lean_int_dec_lt(v_snd_151_, v_snd_149_);
lean_dec(v_snd_149_);
lean_dec(v_snd_151_);
if (v___x_153_ == 0)
{
lean_object* v_amDigits_154_; lean_object* v_bmDigits_155_; uint8_t v___x_156_; 
lean_inc(v_fst_148_);
v_amDigits_154_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_fst_148_);
lean_inc(v_fst_150_);
v_bmDigits_155_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_fst_150_);
v___x_156_ = lean_nat_dec_lt(v_amDigits_154_, v_bmDigits_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_157_ = lean_unsigned_to_nat(10u);
v___x_158_ = lean_nat_sub(v_amDigits_154_, v_bmDigits_155_);
lean_dec(v_bmDigits_155_);
lean_dec(v_amDigits_154_);
v___x_159_ = lean_nat_pow(v___x_157_, v___x_158_);
lean_dec(v___x_158_);
v___x_160_ = lean_nat_mul(v_fst_150_, v___x_159_);
lean_dec(v___x_159_);
lean_dec(v_fst_150_);
v___x_161_ = lean_nat_dec_lt(v_fst_148_, v___x_160_);
lean_dec(v___x_160_);
lean_dec(v_fst_148_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_162_ = lean_unsigned_to_nat(10u);
v___x_163_ = lean_nat_sub(v_bmDigits_155_, v_amDigits_154_);
lean_dec(v_amDigits_154_);
lean_dec(v_bmDigits_155_);
v___x_164_ = lean_nat_pow(v___x_162_, v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = lean_nat_mul(v_fst_148_, v___x_164_);
lean_dec(v___x_164_);
lean_dec(v_fst_148_);
v___x_166_ = lean_nat_dec_lt(v___x_165_, v_fst_150_);
lean_dec(v_fst_150_);
lean_dec(v___x_165_);
return v___x_166_;
}
}
else
{
lean_dec(v_fst_150_);
lean_dec(v_fst_148_);
return v___x_152_;
}
}
else
{
lean_dec(v_snd_151_);
lean_dec(v_fst_150_);
lean_dec(v_snd_149_);
lean_dec(v_fst_148_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_lt___boxed(lean_object* v_a_180_, lean_object* v_b_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_JsonNumber_lt(v_a_180_, v_b_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
static lean_object* _init_l_Lean_JsonNumber_ltProp(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_box(0);
return v___x_184_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instDecidableLt(lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
uint8_t v___x_187_; 
v___x_187_ = l_Lean_JsonNumber_lt(v_a_185_, v_b_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instDecidableLt___boxed(lean_object* v_a_188_, lean_object* v_b_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Lean_JsonNumber_instDecidableLt(v_a_188_, v_b_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT uint8_t l_Lean_JsonNumber_instOrd___lam__0(lean_object* v_x_192_, lean_object* v_y_193_){
_start:
{
uint8_t v___x_194_; 
lean_inc_ref(v_y_193_);
lean_inc_ref(v_x_192_);
v___x_194_ = l_Lean_JsonNumber_lt(v_x_192_, v_y_193_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; 
v___x_195_ = l_Lean_JsonNumber_lt(v_y_193_, v_x_192_);
if (v___x_195_ == 0)
{
uint8_t v___x_196_; 
v___x_196_ = 1;
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = 2;
return v___x_197_;
}
}
else
{
uint8_t v___x_198_; 
lean_dec_ref(v_y_193_);
lean_dec_ref(v_x_192_);
v___x_198_ = 0;
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOrd___lam__0___boxed(lean_object* v_x_199_, lean_object* v_y_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = l_Lean_JsonNumber_instOrd___lam__0(v_x_199_, v_y_200_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(lean_object* v_s_205_, lean_object* v_begPos_206_, lean_object* v_i_207_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_208_ = lean_unsigned_to_nat(1u);
v___x_209_ = lean_nat_add(v_begPos_206_, v___x_208_);
v___x_210_ = lean_nat_dec_le(v___x_209_, v_i_207_);
lean_dec(v___x_209_);
if (v___x_210_ == 0)
{
return v_i_207_;
}
else
{
lean_object* v_i_x27_211_; uint32_t v_c_212_; uint32_t v___x_213_; uint8_t v___x_214_; 
v_i_x27_211_ = lean_string_utf8_prev(v_s_205_, v_i_207_);
v_c_212_ = lean_string_utf8_get(v_s_205_, v_i_x27_211_);
v___x_213_ = 48;
v___x_214_ = lean_uint32_dec_eq(v_c_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_dec(v_i_x27_211_);
return v_i_207_;
}
else
{
lean_dec(v_i_207_);
v_i_207_ = v_i_x27_211_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0___boxed(lean_object* v_s_216_, lean_object* v_begPos_217_, lean_object* v_i_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(v_s_216_, v_begPos_217_, v_i_218_);
lean_dec(v_begPos_217_);
lean_dec_ref(v_s_216_);
return v_res_219_;
}
}
static lean_object* _init_l_Lean_JsonNumber_toString___closed__3(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(9u);
v___x_224_ = lean_nat_to_int(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toString(lean_object* v_x_226_){
_start:
{
lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v_mantissa_237_; lean_object* v_exponent_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v_mantissa_237_ = lean_ctor_get(v_x_226_, 0);
lean_inc(v_mantissa_237_);
v_exponent_238_ = lean_ctor_get(v_x_226_, 1);
lean_inc(v_exponent_238_);
lean_dec_ref(v_x_226_);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_dec_eq(v_exponent_238_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_276_; uint8_t v___x_285_; 
v___x_241_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_285_ = lean_int_dec_le(v___x_241_, v_mantissa_237_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
v___x_286_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__4));
v___y_276_ = v___x_286_;
goto v___jp_275_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__2));
v___y_276_ = v___x_287_;
goto v___jp_275_;
}
v___jp_242_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_e_254_; lean_object* v_right_255_; uint8_t v___x_256_; 
v___x_248_ = lean_nat_add(v___y_247_, v___y_245_);
lean_dec(v___y_245_);
lean_dec(v___y_247_);
v___x_249_ = l_Nat_reprFast(v___x_248_);
v___x_250_ = lean_string_utf8_byte_size(v___x_249_);
lean_inc_ref(v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_239_);
lean_ctor_set(v___x_251_, 2, v___x_250_);
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = l_Substring_Raw_nextn(v___x_251_, v___x_252_, v___x_239_);
lean_dec_ref_known(v___x_251_, 3);
v_e_254_ = l_Substring_Raw_takeRightWhileAux___at___00Lean_JsonNumber_toString_spec__0(v___x_249_, v___x_253_, v___x_250_);
v_right_255_ = lean_string_utf8_extract(v___x_249_, v___x_253_, v_e_254_);
lean_dec(v_e_254_);
lean_dec(v___x_253_);
lean_dec_ref(v___x_249_);
v___x_256_ = lean_int_dec_eq(v___y_243_, v___x_241_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__1));
v___x_258_ = l_Int_repr(v___y_243_);
lean_dec(v___y_243_);
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
lean_dec_ref(v___x_258_);
v___y_228_ = v___y_244_;
v___y_229_ = v_right_255_;
v___y_230_ = v___y_246_;
v___y_231_ = v___x_259_;
goto v___jp_227_;
}
else
{
lean_object* v___x_260_; 
lean_dec(v___y_243_);
v___x_260_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__2));
v___y_228_ = v___y_244_;
v___y_229_ = v_right_255_;
v___y_230_ = v___y_246_;
v___y_231_ = v___x_260_;
goto v___jp_227_;
}
}
v___jp_261_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_e_x27_268_; lean_object* v___x_269_; lean_object* v_left_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_265_ = lean_unsigned_to_nat(10u);
v___x_266_ = lean_nat_abs(v___y_264_);
v___x_267_ = lean_nat_sub(v_exponent_238_, v___x_266_);
lean_dec(v___x_266_);
lean_dec(v_exponent_238_);
v_e_x27_268_ = lean_nat_pow(v___x_265_, v___x_267_);
lean_dec(v___x_267_);
v___x_269_ = lean_nat_div(v___y_262_, v_e_x27_268_);
v_left_270_ = l_Nat_reprFast(v___x_269_);
v___x_271_ = lean_nat_mod(v___y_262_, v_e_x27_268_);
lean_dec(v___y_262_);
v___x_272_ = lean_nat_dec_eq(v___x_271_, v___x_239_);
if (v___x_272_ == 0)
{
v___y_243_ = v___y_264_;
v___y_244_ = v_left_270_;
v___y_245_ = v___x_271_;
v___y_246_ = v___y_263_;
v___y_247_ = v_e_x27_268_;
goto v___jp_242_;
}
else
{
uint8_t v___x_273_; 
v___x_273_ = lean_int_dec_eq(v___y_264_, v___x_241_);
if (v___x_273_ == 0)
{
v___y_243_ = v___y_264_;
v___y_244_ = v_left_270_;
v___y_245_ = v___x_271_;
v___y_246_ = v___y_263_;
v___y_247_ = v_e_x27_268_;
goto v___jp_242_;
}
else
{
lean_object* v___x_274_; 
lean_dec(v___x_271_);
lean_dec(v_e_x27_268_);
lean_dec(v___y_264_);
lean_inc_ref(v___y_263_);
v___x_274_ = lean_string_append(v___y_263_, v_left_270_);
lean_dec_ref(v_left_270_);
return v___x_274_;
}
}
}
v___jp_275_:
{
lean_object* v_m_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_exp_283_; uint8_t v___x_284_; 
v_m_277_ = lean_nat_abs(v_mantissa_237_);
lean_dec(v_mantissa_237_);
v___x_278_ = lean_obj_once(&l_Lean_JsonNumber_toString___closed__3, &l_Lean_JsonNumber_toString___closed__3_once, _init_l_Lean_JsonNumber_toString___closed__3);
lean_inc(v_m_277_);
v___x_279_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_countDigits(v_m_277_);
v___x_280_ = lean_nat_to_int(v___x_279_);
v___x_281_ = lean_int_add(v___x_278_, v___x_280_);
lean_dec(v___x_280_);
lean_inc(v_exponent_238_);
v___x_282_ = lean_nat_to_int(v_exponent_238_);
v_exp_283_ = lean_int_sub(v___x_281_, v___x_282_);
lean_dec(v___x_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_int_dec_lt(v_exp_283_, v___x_241_);
if (v___x_284_ == 0)
{
lean_dec(v_exp_283_);
v___y_262_ = v_m_277_;
v___y_263_ = v___y_276_;
v___y_264_ = v___x_241_;
goto v___jp_261_;
}
else
{
v___y_262_ = v_m_277_;
v___y_263_ = v___y_276_;
v___y_264_ = v_exp_283_;
goto v___jp_261_;
}
}
}
else
{
lean_object* v___x_288_; 
lean_dec(v_exponent_238_);
v___x_288_ = l_Int_repr(v_mantissa_237_);
lean_dec(v_mantissa_237_);
return v___x_288_;
}
v___jp_227_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
lean_inc_ref(v___y_230_);
v___x_232_ = lean_string_append(v___y_230_, v___y_228_);
lean_dec_ref(v___y_228_);
v___x_233_ = ((lean_object*)(l_Lean_JsonNumber_toString___closed__0));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
v___x_235_ = lean_string_append(v___x_234_, v___y_229_);
lean_dec_ref(v___y_229_);
v___x_236_ = lean_string_append(v___x_235_, v___y_231_);
lean_dec_ref(v___y_231_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl(lean_object* v_x_289_, lean_object* v_x_290_){
_start:
{
lean_object* v_mantissa_291_; lean_object* v_exponent_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_305_; 
v_mantissa_291_ = lean_ctor_get(v_x_289_, 0);
v_exponent_292_ = lean_ctor_get(v_x_289_, 1);
v_isSharedCheck_305_ = !lean_is_exclusive(v_x_289_);
if (v_isSharedCheck_305_ == 0)
{
v___x_294_ = v_x_289_;
v_isShared_295_ = v_isSharedCheck_305_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_exponent_292_);
lean_inc(v_mantissa_291_);
lean_dec(v_x_289_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_305_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_296_ = lean_unsigned_to_nat(10u);
v___x_297_ = lean_nat_sub(v_x_290_, v_exponent_292_);
v___x_298_ = lean_nat_pow(v___x_296_, v___x_297_);
lean_dec(v___x_297_);
v___x_299_ = lean_nat_to_int(v___x_298_);
v___x_300_ = lean_int_mul(v_mantissa_291_, v___x_299_);
lean_dec(v___x_299_);
lean_dec(v_mantissa_291_);
v___x_301_ = lean_nat_sub(v_exponent_292_, v_x_290_);
lean_dec(v_exponent_292_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 1, v___x_301_);
lean_ctor_set(v___x_294_, 0, v___x_300_);
v___x_303_ = v___x_294_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftl___boxed(lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_JsonNumber_shiftl(v_x_306_, v_x_307_);
lean_dec(v_x_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr(lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
lean_object* v_mantissa_311_; lean_object* v_exponent_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_320_; 
v_mantissa_311_ = lean_ctor_get(v_x_309_, 0);
v_exponent_312_ = lean_ctor_get(v_x_309_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_x_309_);
if (v_isSharedCheck_320_ == 0)
{
v___x_314_ = v_x_309_;
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_exponent_312_);
lean_inc(v_mantissa_311_);
lean_dec(v_x_309_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = lean_nat_add(v_exponent_312_, v_x_310_);
lean_dec(v_exponent_312_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_316_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_mantissa_311_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_shiftr___boxed(lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_JsonNumber_shiftr(v_x_321_, v_x_322_);
lean_dec(v_x_322_);
return v_res_323_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instRepr___lam__0___closed__4(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__0));
v___x_332_ = lean_string_length(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instRepr___lam__0___closed__5(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l_Lean_JsonNumber_instRepr___lam__0___closed__4, &l_Lean_JsonNumber_instRepr___lam__0___closed__4_once, _init_l_Lean_JsonNumber_instRepr___lam__0___closed__4);
v___x_334_ = lean_nat_to_int(v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0(lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
lean_object* v_mantissa_341_; lean_object* v_exponent_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_371_; 
v_mantissa_341_ = lean_ctor_get(v_x_339_, 0);
v_exponent_342_ = lean_ctor_get(v_x_339_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_x_339_);
if (v_isSharedCheck_371_ == 0)
{
v___x_344_ = v_x_339_;
v_isShared_345_ = v_isSharedCheck_371_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_exponent_342_);
lean_inc(v_mantissa_341_);
lean_dec(v_x_339_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_371_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___y_347_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_365_ = lean_int_dec_lt(v_mantissa_341_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = l_Int_repr(v_mantissa_341_);
lean_dec(v_mantissa_341_);
v___x_367_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
v___y_347_ = v___x_367_;
goto v___jp_346_;
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_368_ = l_Int_repr(v_mantissa_341_);
lean_dec(v_mantissa_341_);
v___x_369_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
v___x_370_ = l_Repr_addAppParen(v___x_369_, v___x_363_);
v___y_347_ = v___x_370_;
goto v___jp_346_;
}
v___jp_346_:
{
lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_348_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__2));
if (v_isShared_345_ == 0)
{
lean_ctor_set_tag(v___x_344_, 5);
lean_ctor_set(v___x_344_, 1, v___x_348_);
lean_ctor_set(v___x_344_, 0, v___y_347_);
v___x_350_ = v___x_344_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___y_347_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v___x_348_);
v___x_350_ = v_reuseFailAlloc_362_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v___x_361_; 
v___x_351_ = l_Nat_reprFast(v_exponent_342_);
v___x_352_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
v___x_353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_350_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = lean_obj_once(&l_Lean_JsonNumber_instRepr___lam__0___closed__5, &l_Lean_JsonNumber_instRepr___lam__0___closed__5_once, _init_l_Lean_JsonNumber_instRepr___lam__0___closed__5);
v___x_355_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__6));
v___x_356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_353_);
v___x_357_ = ((lean_object*)(l_Lean_JsonNumber_instRepr___lam__0___closed__7));
v___x_358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_354_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = 0;
v___x_361_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*1, v___x_360_);
return v___x_361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instRepr___lam__0___boxed(lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_JsonNumber_instRepr___lam__0(v_x_372_, v_x_373_);
lean_dec(v_x_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0(lean_object* v_mantissa_377_, uint8_t v_exponentSign_378_, lean_object* v_decimalExponent_379_){
_start:
{
if (v_exponentSign_378_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_380_ = lean_unsigned_to_nat(10u);
v___x_381_ = lean_nat_pow(v___x_380_, v_decimalExponent_379_);
lean_dec(v_decimalExponent_379_);
v___x_382_ = lean_nat_mul(v_mantissa_377_, v___x_381_);
lean_dec(v___x_381_);
lean_dec(v_mantissa_377_);
v___x_383_ = lean_nat_to_int(v___x_382_);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
return v___x_385_;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_nat_to_int(v_mantissa_377_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v_decimalExponent_379_);
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instOfScientific___lam__0___boxed(lean_object* v_mantissa_388_, lean_object* v_exponentSign_389_, lean_object* v_decimalExponent_390_){
_start:
{
uint8_t v_exponentSign_boxed_391_; lean_object* v_res_392_; 
v_exponentSign_boxed_391_ = lean_unbox(v_exponentSign_389_);
v_res_392_ = l_Lean_JsonNumber_instOfScientific___lam__0(v_mantissa_388_, v_exponentSign_boxed_391_, v_decimalExponent_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_instNeg___lam__0(lean_object* v_jn_395_){
_start:
{
lean_object* v_mantissa_396_; lean_object* v_exponent_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_405_; 
v_mantissa_396_ = lean_ctor_get(v_jn_395_, 0);
v_exponent_397_ = lean_ctor_get(v_jn_395_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v_jn_395_);
if (v_isSharedCheck_405_ == 0)
{
v___x_399_ = v_jn_395_;
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_exponent_397_);
lean_inc(v_mantissa_396_);
lean_dec(v_jn_395_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_401_ = lean_int_neg(v_mantissa_396_);
lean_dec(v_mantissa_396_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v___x_401_);
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_exponent_397_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
static lean_object* _init_l_Lean_JsonNumber_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_unsigned_to_nat(0u);
v___x_409_ = l_Lean_JsonNumber_fromNat(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_JsonNumber_instInhabited(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l_Lean_JsonNumber_instInhabited___closed__0, &l_Lean_JsonNumber_instInhabited___closed__0_once, _init_l_Lean_JsonNumber_instInhabited___closed__0);
return v___x_410_;
}
}
static double _init_l_Lean_JsonNumber_toFloat___closed__0(void){
_start:
{
lean_object* v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; double v___x_414_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = 1;
v___x_413_ = lean_unsigned_to_nat(10u);
v___x_414_ = l_Float_ofScientific(v___x_413_, v___x_412_, v___x_411_);
return v___x_414_;
}
}
static double _init_l_Lean_JsonNumber_toFloat___closed__1(void){
_start:
{
double v___x_415_; double v___x_416_; 
v___x_415_ = lean_float_once(&l_Lean_JsonNumber_toFloat___closed__0, &l_Lean_JsonNumber_toFloat___closed__0_once, _init_l_Lean_JsonNumber_toFloat___closed__0);
v___x_416_ = lean_float_negate(v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT double l_Lean_JsonNumber_toFloat(lean_object* v_x_417_){
_start:
{
lean_object* v_mantissa_418_; lean_object* v_exponent_419_; double v___y_421_; lean_object* v___x_426_; uint8_t v___x_427_; 
v_mantissa_418_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_mantissa_418_);
v_exponent_419_ = lean_ctor_get(v_x_417_, 1);
lean_inc(v_exponent_419_);
lean_dec_ref(v_x_417_);
v___x_426_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v___x_427_ = lean_int_dec_le(v___x_426_, v_mantissa_418_);
if (v___x_427_ == 0)
{
double v___x_428_; 
v___x_428_ = lean_float_once(&l_Lean_JsonNumber_toFloat___closed__1, &l_Lean_JsonNumber_toFloat___closed__1_once, _init_l_Lean_JsonNumber_toFloat___closed__1);
v___y_421_ = v___x_428_;
goto v___jp_420_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; double v___x_431_; 
v___x_429_ = lean_unsigned_to_nat(10u);
v___x_430_ = lean_unsigned_to_nat(1u);
v___x_431_ = l_Float_ofScientific(v___x_429_, v___x_427_, v___x_430_);
v___y_421_ = v___x_431_;
goto v___jp_420_;
}
v___jp_420_:
{
lean_object* v___x_422_; uint8_t v___x_423_; double v___x_424_; double v___x_425_; 
v___x_422_ = lean_nat_abs(v_mantissa_418_);
lean_dec(v_mantissa_418_);
v___x_423_ = 1;
v___x_424_ = l_Float_ofScientific(v___x_422_, v___x_423_, v_exponent_419_);
v___x_425_ = lean_float_mul(v___y_421_, v___x_424_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_toFloat___boxed(lean_object* v_x_432_){
_start:
{
double v_res_433_; lean_object* v_r_434_; 
v_res_433_ = l_Lean_JsonNumber_toFloat(v_x_432_);
v_r_434_ = lean_box_float(v_res_433_);
return v_r_434_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(lean_object* v_msg_435_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = l_Lean_JsonNumber_instInhabited;
v___x_437_ = lean_panic_fn_borrowed(v___x_436_, v_msg_435_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(double v_x_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_float_to_string(v_x_441_);
v___x_443_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v___x_442_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_444_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0));
v___x_445_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__1));
v___x_446_ = lean_unsigned_to_nat(164u);
v___x_447_ = lean_unsigned_to_nat(12u);
v___x_448_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__2));
v___x_449_ = lean_string_append(v___x_448_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_450_ = l_mkPanicMessageWithDecl(v___x_444_, v___x_445_, v___x_446_, v___x_447_, v___x_449_);
lean_dec_ref(v___x_449_);
v___x_451_ = l_panic___at___00__private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21_spec__0(v___x_450_);
return v___x_451_;
}
else
{
lean_object* v_val_452_; lean_object* v_snd_453_; lean_object* v_fst_454_; uint8_t v___x_455_; 
lean_dec_ref(v___x_442_);
v_val_452_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_val_452_);
lean_dec_ref_known(v___x_443_, 1);
v_snd_453_ = lean_ctor_get(v_val_452_, 1);
lean_inc(v_snd_453_);
v_fst_454_ = lean_ctor_get(v_snd_453_, 0);
v___x_455_ = lean_unbox(v_fst_454_);
if (v___x_455_ == 0)
{
lean_object* v_fst_456_; lean_object* v_snd_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_469_; 
v_fst_456_ = lean_ctor_get(v_val_452_, 0);
lean_inc(v_fst_456_);
lean_dec(v_val_452_);
v_snd_457_ = lean_ctor_get(v_snd_453_, 1);
v_isSharedCheck_469_ = !lean_is_exclusive(v_snd_453_);
if (v_isSharedCheck_469_ == 0)
{
lean_object* v_unused_470_; 
v_unused_470_ = lean_ctor_get(v_snd_453_, 0);
lean_dec(v_unused_470_);
v___x_459_ = v_snd_453_;
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_snd_457_);
lean_dec(v_snd_453_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_461_ = lean_unsigned_to_nat(10u);
v___x_462_ = lean_nat_pow(v___x_461_, v_snd_457_);
lean_dec(v_snd_457_);
v___x_463_ = lean_nat_mul(v_fst_456_, v___x_462_);
lean_dec(v___x_462_);
lean_dec(v_fst_456_);
v___x_464_ = lean_nat_to_int(v___x_463_);
v___x_465_ = lean_unsigned_to_nat(0u);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 1, v___x_465_);
lean_ctor_set(v___x_459_, 0, v___x_464_);
v___x_467_ = v___x_459_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v_fst_471_; lean_object* v_snd_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_480_; 
v_fst_471_ = lean_ctor_get(v_val_452_, 0);
lean_inc(v_fst_471_);
lean_dec(v_val_452_);
v_snd_472_ = lean_ctor_get(v_snd_453_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_snd_453_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; 
v_unused_481_ = lean_ctor_get(v_snd_453_, 0);
lean_dec(v_unused_481_);
v___x_474_ = v_snd_453_;
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_snd_472_);
lean_dec(v_snd_453_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_476_ = lean_nat_to_int(v_fst_471_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_snd_472_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___boxed(lean_object* v_x_482_){
_start:
{
double v_x_boxed_483_; lean_object* v_res_484_; 
v_x_boxed_483_ = lean_unbox_float(v_x_482_);
lean_dec_ref(v_x_482_);
v_res_484_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v_x_boxed_483_);
return v_res_484_;
}
}
static double _init_l_Lean_JsonNumber_fromFloat_x3f___closed__0(void){
_start:
{
lean_object* v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; double v___x_488_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = 1;
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = l_Float_ofScientific(v___x_487_, v___x_486_, v___x_485_);
return v___x_488_;
}
}
static lean_object* _init_l_Lean_JsonNumber_fromFloat_x3f___closed__1(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_obj_once(&l_Lean_JsonNumber_instInhabited___closed__0, &l_Lean_JsonNumber_instInhabited___closed__0_once, _init_l_Lean_JsonNumber_instInhabited___closed__0);
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
static double _init_l_Lean_JsonNumber_fromFloat_x3f___closed__2(void){
_start:
{
lean_object* v___x_491_; double v___x_492_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = lean_float_of_nat(v___x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f(double v_x_502_){
_start:
{
uint8_t v___x_503_; 
v___x_503_ = lean_float_isnan(v_x_502_);
if (v___x_503_ == 0)
{
uint8_t v___x_504_; 
v___x_504_ = lean_float_isinf(v_x_502_);
if (v___x_504_ == 0)
{
double v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_float_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__0, &l_Lean_JsonNumber_fromFloat_x3f___closed__0_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__0);
v___x_506_ = lean_float_beq(v_x_502_, v___x_505_);
if (v___x_506_ == 0)
{
uint8_t v___x_507_; 
v___x_507_ = lean_float_decLt(v_x_502_, v___x_505_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v_x_502_);
v___x_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
else
{
double v___x_510_; lean_object* v___x_511_; lean_object* v_mantissa_512_; lean_object* v_exponent_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_522_; 
v___x_510_ = lean_float_negate(v_x_502_);
v___x_511_ = l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21(v___x_510_);
v_mantissa_512_ = lean_ctor_get(v___x_511_, 0);
v_exponent_513_ = lean_ctor_get(v___x_511_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_522_ == 0)
{
v___x_515_ = v___x_511_;
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_exponent_513_);
lean_inc(v_mantissa_512_);
lean_dec(v___x_511_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_517_ = lean_int_neg(v_mantissa_512_);
lean_dec(v_mantissa_512_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_517_);
v___x_519_ = v___x_515_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v_exponent_513_);
v___x_519_ = v_reuseFailAlloc_521_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_520_; 
v___x_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
}
}
else
{
lean_object* v___x_523_; 
v___x_523_ = lean_obj_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__1, &l_Lean_JsonNumber_fromFloat_x3f___closed__1_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__1);
return v___x_523_;
}
}
else
{
double v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_float_once(&l_Lean_JsonNumber_fromFloat_x3f___closed__2, &l_Lean_JsonNumber_fromFloat_x3f___closed__2_once, _init_l_Lean_JsonNumber_fromFloat_x3f___closed__2);
v___x_525_ = lean_float_decLt(v___x_524_, v_x_502_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
v___x_526_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__4));
return v___x_526_;
}
else
{
lean_object* v___x_527_; 
v___x_527_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__6));
return v___x_527_;
}
}
}
else
{
lean_object* v___x_528_; 
v___x_528_ = ((lean_object*)(l_Lean_JsonNumber_fromFloat_x3f___closed__8));
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_JsonNumber_fromFloat_x3f___boxed(lean_object* v_x_529_){
_start:
{
double v_x_boxed_530_; lean_object* v_res_531_; 
v_x_boxed_530_ = lean_unbox_float(v_x_529_);
lean_dec_ref(v_x_529_);
v_res_531_ = l_Lean_JsonNumber_fromFloat_x3f(v_x_boxed_530_);
return v_res_531_;
}
}
LEAN_EXPORT uint8_t l_Lean_strLt(lean_object* v_a_532_, lean_object* v_b_533_){
_start:
{
uint8_t v___x_534_; 
v___x_534_ = lean_string_dec_lt(v_a_532_, v_b_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_strLt___boxed(lean_object* v_a_535_, lean_object* v_b_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Lean_strLt(v_a_535_, v_b_536_);
lean_dec_ref(v_b_536_);
lean_dec_ref(v_a_535_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl(lean_object* v_x_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_tag_nat(v_x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorIdx___impl___boxed(lean_object* v_x_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_Json_ctorIdx___impl(v_x_541_);
lean_dec(v_x_541_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___redArg(lean_object* v_t_543_, lean_object* v_k_544_){
_start:
{
switch(lean_obj_tag(v_t_543_))
{
case 0:
{
return v_k_544_;
}
case 1:
{
uint8_t v_b_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_b_545_ = lean_ctor_get_uint8(v_t_543_, 0);
lean_dec_ref_known(v_t_543_, 0);
v___x_546_ = lean_box(v_b_545_);
v___x_547_ = lean_apply_1(v_k_544_, v___x_546_);
return v___x_547_;
}
case 5:
{
lean_object* v_kvPairs_548_; lean_object* v___x_549_; 
v_kvPairs_548_ = lean_ctor_get(v_t_543_, 0);
lean_inc(v_kvPairs_548_);
lean_dec_ref_known(v_t_543_, 1);
v___x_549_ = lean_apply_1(v_k_544_, v_kvPairs_548_);
return v___x_549_;
}
default: 
{
lean_object* v_n_550_; lean_object* v___x_551_; 
v_n_550_ = lean_ctor_get(v_t_543_, 0);
lean_inc_ref(v_n_550_);
lean_dec(v_t_543_);
v___x_551_ = lean_apply_1(v_k_544_, v_n_550_);
return v___x_551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim(lean_object* v_motive__1_552_, lean_object* v_ctorIdx_553_, lean_object* v_t_554_, lean_object* v_h_555_, lean_object* v_k_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Json_ctorElim___redArg(v_t_554_, v_k_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_ctorElim___boxed(lean_object* v_motive__1_558_, lean_object* v_ctorIdx_559_, lean_object* v_t_560_, lean_object* v_h_561_, lean_object* v_k_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_Json_ctorElim(v_motive__1_558_, v_ctorIdx_559_, v_t_560_, v_h_561_, v_k_562_);
lean_dec(v_ctorIdx_559_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_null_elim___redArg(lean_object* v_t_564_, lean_object* v_null_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lean_Json_ctorElim___redArg(v_t_564_, v_null_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_null_elim(lean_object* v_motive__1_567_, lean_object* v_t_568_, lean_object* v_h_569_, lean_object* v_null_570_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l_Lean_Json_ctorElim___redArg(v_t_568_, v_null_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim___redArg(lean_object* v_t_572_, lean_object* v_bool_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_Json_ctorElim___redArg(v_t_572_, v_bool_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_bool_elim(lean_object* v_motive__1_575_, lean_object* v_t_576_, lean_object* v_h_577_, lean_object* v_bool_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_Json_ctorElim___redArg(v_t_576_, v_bool_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_num_elim___redArg(lean_object* v_t_580_, lean_object* v_num_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_Json_ctorElim___redArg(v_t_580_, v_num_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_num_elim(lean_object* v_motive__1_583_, lean_object* v_t_584_, lean_object* v_h_585_, lean_object* v_num_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Json_ctorElim___redArg(v_t_584_, v_num_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_str_elim___redArg(lean_object* v_t_588_, lean_object* v_str_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_Json_ctorElim___redArg(v_t_588_, v_str_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_str_elim(lean_object* v_motive__1_591_, lean_object* v_t_592_, lean_object* v_h_593_, lean_object* v_str_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Json_ctorElim___redArg(v_t_592_, v_str_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim___redArg(lean_object* v_t_596_, lean_object* v_arr_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_Json_ctorElim___redArg(v_t_596_, v_arr_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_arr_elim(lean_object* v_motive__1_599_, lean_object* v_t_600_, lean_object* v_h_601_, lean_object* v_arr_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_Json_ctorElim___redArg(v_t_600_, v_arr_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim___redArg(lean_object* v_t_604_, lean_object* v_obj_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_Json_ctorElim___redArg(v_t_604_, v_obj_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_obj_elim(lean_object* v_motive__1_607_, lean_object* v_t_608_, lean_object* v_h_609_, lean_object* v_obj_610_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lean_Json_ctorElim___redArg(v_t_608_, v_obj_610_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_instInhabitedJson_default(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_box(0);
return v___x_612_;
}
}
static lean_object* _init_l_Lean_instInhabitedJson(void){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = lean_box(0);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(lean_object* v_init_614_, lean_object* v_x_615_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
lean_object* v_l_616_; lean_object* v_r_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_l_616_ = lean_ctor_get(v_x_615_, 3);
v_r_617_ = lean_ctor_get(v_x_615_, 4);
v___x_618_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_614_, v_l_616_);
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = lean_nat_add(v___x_618_, v___x_619_);
lean_dec(v___x_618_);
v_init_614_ = v___x_620_;
v_x_615_ = v_r_617_;
goto _start;
}
else
{
return v_init_614_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1___boxed(lean_object* v_init_622_, lean_object* v_x_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_622_, v_x_623_);
lean_dec(v_x_623_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(lean_object* v_t_625_, lean_object* v_k_626_){
_start:
{
if (lean_obj_tag(v_t_625_) == 0)
{
lean_object* v_k_627_; lean_object* v_v_628_; lean_object* v_l_629_; lean_object* v_r_630_; uint8_t v___x_631_; 
v_k_627_ = lean_ctor_get(v_t_625_, 1);
v_v_628_ = lean_ctor_get(v_t_625_, 2);
v_l_629_ = lean_ctor_get(v_t_625_, 3);
v_r_630_ = lean_ctor_get(v_t_625_, 4);
v___x_631_ = lean_string_compare(v_k_626_, v_k_627_);
switch(v___x_631_)
{
case 0:
{
v_t_625_ = v_l_629_;
goto _start;
}
case 1:
{
lean_object* v___x_633_; 
lean_inc(v_v_628_);
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v_v_628_);
return v___x_633_;
}
default: 
{
v_t_625_ = v_r_630_;
goto _start;
}
}
}
else
{
lean_object* v___x_635_; 
v___x_635_ = lean_box(0);
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg___boxed(lean_object* v_t_636_, lean_object* v_k_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_t_636_, v_k_637_);
lean_dec_ref(v_k_637_);
lean_dec(v_t_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(lean_object* v_kvPairs_642_, lean_object* v_init_643_, lean_object* v_x_644_){
_start:
{
if (lean_obj_tag(v_x_644_) == 0)
{
lean_object* v_k_645_; lean_object* v_v_646_; lean_object* v_l_647_; lean_object* v_r_648_; lean_object* v___x_649_; 
v_k_645_ = lean_ctor_get(v_x_644_, 1);
v_v_646_ = lean_ctor_get(v_x_644_, 2);
v_l_647_ = lean_ctor_get(v_x_644_, 3);
v_r_648_ = lean_ctor_get(v_x_644_, 4);
v___x_649_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_kvPairs_642_, v_init_643_, v_l_647_);
if (lean_obj_tag(v___x_649_) == 0)
{
return v___x_649_;
}
else
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_668_; 
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_668_ == 0)
{
lean_object* v_unused_669_; 
v_unused_669_ = lean_ctor_get(v___x_649_, 0);
lean_dec(v_unused_669_);
v___x_651_ = v___x_649_;
v_isShared_652_ = v_isSharedCheck_668_;
goto v_resetjp_650_;
}
else
{
lean_dec(v___x_649_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_668_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; uint8_t v___y_655_; lean_object* v___x_662_; 
v___x_653_ = lean_box(0);
v___x_662_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_kvPairs_642_, v_k_645_);
if (lean_obj_tag(v___x_662_) == 0)
{
uint8_t v___x_663_; 
v___x_663_ = 0;
v___y_655_ = v___x_663_;
goto v___jp_654_;
}
else
{
lean_object* v_val_664_; uint8_t v___x_665_; 
v_val_664_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v___x_662_, 1);
v___x_665_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_v_646_, v_val_664_);
lean_dec(v_val_664_);
if (v___x_665_ == 0)
{
v___y_655_ = v___x_665_;
goto v___jp_654_;
}
else
{
lean_object* v___x_666_; 
lean_del_object(v___x_651_);
v___x_666_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0));
v_init_643_ = v___x_666_;
v_x_644_ = v_r_648_;
goto _start;
}
}
v___jp_654_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_656_ = lean_box(v___y_655_);
v___x_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_653_);
if (v_isShared_652_ == 0)
{
lean_ctor_set_tag(v___x_651_, 0);
lean_ctor_set(v___x_651_, 0, v___x_658_);
v___x_660_ = v___x_651_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
else
{
lean_object* v___x_670_; 
v___x_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_670_, 0, v_init_643_);
return v___x_670_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
switch(lean_obj_tag(v_x_671_))
{
case 0:
{
if (lean_obj_tag(v_x_672_) == 0)
{
uint8_t v___x_673_; 
v___x_673_ = 1;
return v___x_673_;
}
else
{
uint8_t v___x_674_; 
v___x_674_ = 0;
return v___x_674_;
}
}
case 1:
{
if (lean_obj_tag(v_x_672_) == 1)
{
uint8_t v_b_675_; 
v_b_675_ = lean_ctor_get_uint8(v_x_672_, 0);
if (v_b_675_ == 0)
{
uint8_t v_b_676_; 
v_b_676_ = lean_ctor_get_uint8(v_x_671_, 0);
if (v_b_676_ == 0)
{
uint8_t v___x_677_; 
v___x_677_ = 1;
return v___x_677_;
}
else
{
return v_b_675_;
}
}
else
{
uint8_t v_b_678_; 
v_b_678_ = lean_ctor_get_uint8(v_x_671_, 0);
return v_b_678_;
}
}
else
{
uint8_t v___x_679_; 
v___x_679_ = 0;
return v___x_679_;
}
}
case 2:
{
if (lean_obj_tag(v_x_672_) == 2)
{
lean_object* v_n_680_; lean_object* v_n_681_; uint8_t v___x_682_; 
v_n_680_ = lean_ctor_get(v_x_671_, 0);
v_n_681_ = lean_ctor_get(v_x_672_, 0);
v___x_682_ = l_Lean_instDecidableEqJsonNumber_decEq(v_n_680_, v_n_681_);
return v___x_682_;
}
else
{
uint8_t v___x_683_; 
v___x_683_ = 0;
return v___x_683_;
}
}
case 3:
{
if (lean_obj_tag(v_x_672_) == 3)
{
lean_object* v_s_684_; lean_object* v_s_685_; uint8_t v___x_686_; 
v_s_684_ = lean_ctor_get(v_x_671_, 0);
v_s_685_ = lean_ctor_get(v_x_672_, 0);
v___x_686_ = lean_string_dec_eq(v_s_684_, v_s_685_);
return v___x_686_;
}
else
{
uint8_t v___x_687_; 
v___x_687_ = 0;
return v___x_687_;
}
}
case 4:
{
if (lean_obj_tag(v_x_672_) == 4)
{
lean_object* v_elems_688_; lean_object* v_elems_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v_elems_688_ = lean_ctor_get(v_x_671_, 0);
v_elems_689_ = lean_ctor_get(v_x_672_, 0);
v___x_690_ = lean_array_get_size(v_elems_688_);
v___x_691_ = lean_array_get_size(v_elems_689_);
v___x_692_ = lean_nat_dec_eq(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
return v___x_692_;
}
else
{
uint8_t v___x_693_; 
v___x_693_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_elems_688_, v_elems_689_, v___x_690_);
return v___x_693_;
}
}
else
{
uint8_t v___x_694_; 
v___x_694_ = 0;
return v___x_694_;
}
}
default: 
{
if (lean_obj_tag(v_x_672_) == 5)
{
lean_object* v_kvPairs_695_; lean_object* v_kvPairs_696_; lean_object* v___x_697_; lean_object* v_szA_698_; lean_object* v_szB_699_; uint8_t v___x_700_; lean_object* v___y_702_; 
v_kvPairs_695_ = lean_ctor_get(v_x_671_, 0);
v_kvPairs_696_ = lean_ctor_get(v_x_672_, 0);
v___x_697_ = lean_unsigned_to_nat(0u);
v_szA_698_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v___x_697_, v_kvPairs_695_);
v_szB_699_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v___x_697_, v_kvPairs_696_);
v___x_700_ = lean_nat_dec_eq(v_szA_698_, v_szB_699_);
lean_dec(v_szB_699_);
lean_dec(v_szA_698_);
if (v___x_700_ == 0)
{
return v___x_700_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_a_708_; 
v___x_706_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___closed__0));
v___x_707_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_kvPairs_696_, v___x_706_, v_kvPairs_695_);
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref(v___x_707_);
v___y_702_ = v_a_708_;
goto v___jp_701_;
}
v___jp_701_:
{
lean_object* v_fst_703_; 
v_fst_703_ = lean_ctor_get(v___y_702_, 0);
lean_inc(v_fst_703_);
lean_dec_ref(v___y_702_);
if (lean_obj_tag(v_fst_703_) == 0)
{
return v___x_700_;
}
else
{
lean_object* v_val_704_; uint8_t v___x_705_; 
v_val_704_ = lean_ctor_get(v_fst_703_, 0);
lean_inc(v_val_704_);
lean_dec_ref_known(v_fst_703_, 1);
v___x_705_ = lean_unbox(v_val_704_);
lean_dec(v_val_704_);
return v___x_705_;
}
}
}
else
{
uint8_t v___x_709_; 
v___x_709_ = 0;
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(lean_object* v_xs_710_, lean_object* v_ys_711_, lean_object* v_x_712_){
_start:
{
lean_object* v_zero_713_; uint8_t v_isZero_714_; 
v_zero_713_ = lean_unsigned_to_nat(0u);
v_isZero_714_ = lean_nat_dec_eq(v_x_712_, v_zero_713_);
if (v_isZero_714_ == 1)
{
lean_dec(v_x_712_);
return v_isZero_714_;
}
else
{
lean_object* v_one_715_; lean_object* v_n_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v_one_715_ = lean_unsigned_to_nat(1u);
v_n_716_ = lean_nat_sub(v_x_712_, v_one_715_);
lean_dec(v_x_712_);
v___x_717_ = lean_array_fget_borrowed(v_xs_710_, v_n_716_);
v___x_718_ = lean_array_fget_borrowed(v_ys_711_, v_n_716_);
v___x_719_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v___x_717_, v___x_718_);
if (v___x_719_ == 0)
{
lean_dec(v_n_716_);
return v___x_719_;
}
else
{
v_x_712_ = v_n_716_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg___boxed(lean_object* v_xs_721_, lean_object* v_ys_722_, lean_object* v_x_723_){
_start:
{
uint8_t v_res_724_; lean_object* v_r_725_; 
v_res_724_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_xs_721_, v_ys_722_, v_x_723_);
lean_dec_ref(v_ys_722_);
lean_dec_ref(v_xs_721_);
v_r_725_ = lean_box(v_res_724_);
return v_r_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3___boxed(lean_object* v_kvPairs_726_, lean_object* v_init_727_, lean_object* v_x_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__3(v_kvPairs_726_, v_init_727_, v_x_728_);
lean_dec(v_x_728_);
lean_dec(v_kvPairs_726_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27___boxed(lean_object* v_x_730_, lean_object* v_x_731_){
_start:
{
uint8_t v_res_732_; lean_object* v_r_733_; 
v_res_732_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_x_730_, v_x_731_);
lean_dec(v_x_731_);
lean_dec(v_x_730_);
v_r_733_ = lean_box(v_res_732_);
return v_r_733_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(lean_object* v_xs_734_, lean_object* v_ys_735_, lean_object* v_hsz_736_, lean_object* v_x_737_, lean_object* v_x_738_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___redArg(v_xs_734_, v_ys_735_, v_x_737_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0___boxed(lean_object* v_xs_740_, lean_object* v_ys_741_, lean_object* v_hsz_742_, lean_object* v_x_743_, lean_object* v_x_744_){
_start:
{
uint8_t v_res_745_; lean_object* v_r_746_; 
v_res_745_ = l_Array_isEqvAux___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__0(v_xs_740_, v_ys_741_, v_hsz_742_, v_x_743_, v_x_744_);
lean_dec_ref(v_ys_741_);
lean_dec_ref(v_xs_740_);
v_r_746_ = lean_box(v_res_745_);
return v_r_746_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(lean_object* v_init_747_, lean_object* v_t_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1_spec__1(v_init_747_, v_t_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1___boxed(lean_object* v_init_750_, lean_object* v_t_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__1(v_init_750_, v_t_751_);
lean_dec(v_t_751_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(lean_object* v_00_u03b4_753_, lean_object* v_t_754_, lean_object* v_k_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_t_754_, v_k_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___boxed(lean_object* v_00_u03b4_757_, lean_object* v_t_758_, lean_object* v_k_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2(v_00_u03b4_757_, v_t_758_, v_k_759_);
lean_dec_ref(v_k_759_);
lean_dec(v_t_758_);
return v_res_760_;
}
}
LEAN_EXPORT uint8_t l_Lean_Json_instBEq___private__1(lean_object* v_a_761_, lean_object* v_a_762_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27(v_a_761_, v_a_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instBEq___private__1___boxed(lean_object* v_a_764_, lean_object* v_a_765_){
_start:
{
uint8_t v_res_766_; lean_object* v_r_767_; 
v_res_766_ = l_Lean_Json_instBEq___private__1(v_a_764_, v_a_765_);
lean_dec(v_a_765_);
lean_dec(v_a_764_);
v_r_767_ = lean_box(v_res_766_);
return v_r_767_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(lean_object* v_as_770_, size_t v_i_771_, size_t v_stop_772_, uint64_t v_b_773_){
_start:
{
uint8_t v___x_774_; 
v___x_774_ = lean_usize_dec_eq(v_i_771_, v_stop_772_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint64_t v___x_776_; uint64_t v___x_777_; size_t v___x_778_; size_t v___x_779_; 
v___x_775_ = lean_array_uget_borrowed(v_as_770_, v_i_771_);
v___x_776_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v___x_775_);
v___x_777_ = lean_uint64_mix_hash(v_b_773_, v___x_776_);
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_771_, v___x_778_);
v_i_771_ = v___x_779_;
v_b_773_ = v___x_777_;
goto _start;
}
else
{
return v_b_773_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(lean_object* v_x_781_){
_start:
{
switch(lean_obj_tag(v_x_781_))
{
case 0:
{
uint64_t v___x_782_; 
v___x_782_ = 11ULL;
return v___x_782_;
}
case 1:
{
uint8_t v_b_783_; 
v_b_783_ = lean_ctor_get_uint8(v_x_781_, 0);
if (v_b_783_ == 0)
{
uint64_t v___x_784_; 
v___x_784_ = 889925284873970544ULL;
return v___x_784_;
}
else
{
uint64_t v___x_785_; 
v___x_785_ = 7849220421742680397ULL;
return v___x_785_;
}
}
case 2:
{
lean_object* v_n_786_; uint64_t v___x_787_; uint64_t v___x_788_; uint64_t v___x_789_; 
v_n_786_ = lean_ctor_get(v_x_781_, 0);
v___x_787_ = 17ULL;
v___x_788_ = l_Lean_instHashableJsonNumber_hash(v_n_786_);
v___x_789_ = lean_uint64_mix_hash(v___x_787_, v___x_788_);
return v___x_789_;
}
case 3:
{
lean_object* v_s_790_; uint64_t v___x_791_; uint64_t v___x_792_; uint64_t v___x_793_; 
v_s_790_ = lean_ctor_get(v_x_781_, 0);
v___x_791_ = 19ULL;
v___x_792_ = lean_string_hash(v_s_790_);
v___x_793_ = lean_uint64_mix_hash(v___x_791_, v___x_792_);
return v___x_793_;
}
case 4:
{
lean_object* v_elems_794_; lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_elems_794_ = lean_ctor_get(v_x_781_, 0);
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = lean_array_get_size(v_elems_794_);
v___x_797_ = lean_nat_dec_lt(v___x_795_, v___x_796_);
if (v___x_797_ == 0)
{
uint64_t v___x_798_; 
v___x_798_ = 179905158410471120ULL;
return v___x_798_;
}
else
{
uint64_t v___x_799_; uint64_t v___x_800_; size_t v___x_801_; size_t v___x_802_; uint64_t v___x_803_; uint64_t v___x_804_; 
v___x_799_ = 23ULL;
v___x_800_ = 7ULL;
v___x_801_ = ((size_t)0ULL);
v___x_802_ = lean_usize_of_nat(v___x_796_);
v___x_803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(v_elems_794_, v___x_801_, v___x_802_, v___x_800_);
v___x_804_ = lean_uint64_mix_hash(v___x_799_, v___x_803_);
return v___x_804_;
}
}
default: 
{
lean_object* v_kvPairs_805_; uint64_t v___x_806_; uint64_t v___x_807_; uint64_t v___x_808_; uint64_t v___x_809_; 
v_kvPairs_805_ = lean_ctor_get(v_x_781_, 0);
v___x_806_ = 29ULL;
v___x_807_ = 7ULL;
v___x_808_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v___x_807_, v_kvPairs_805_);
v___x_809_ = lean_uint64_mix_hash(v___x_806_, v___x_808_);
return v___x_809_;
}
}
}
}
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(uint64_t v_init_810_, lean_object* v_x_811_){
_start:
{
if (lean_obj_tag(v_x_811_) == 0)
{
lean_object* v_k_812_; lean_object* v_v_813_; lean_object* v_l_814_; lean_object* v_r_815_; uint64_t v___x_816_; uint64_t v___x_817_; uint64_t v___x_818_; uint64_t v___x_819_; uint64_t v___x_820_; 
v_k_812_ = lean_ctor_get(v_x_811_, 1);
v_v_813_ = lean_ctor_get(v_x_811_, 2);
v_l_814_ = lean_ctor_get(v_x_811_, 3);
v_r_815_ = lean_ctor_get(v_x_811_, 4);
v___x_816_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_810_, v_l_814_);
v___x_817_ = lean_string_hash(v_k_812_);
v___x_818_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_v_813_);
v___x_819_ = lean_uint64_mix_hash(v___x_817_, v___x_818_);
v___x_820_ = lean_uint64_mix_hash(v___x_816_, v___x_819_);
v_init_810_ = v___x_820_;
v_x_811_ = v_r_815_;
goto _start;
}
else
{
return v_init_810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1___boxed(lean_object* v_init_822_, lean_object* v_x_823_){
_start:
{
uint64_t v_init_boxed_824_; uint64_t v_res_825_; lean_object* v_r_826_; 
v_init_boxed_824_ = lean_unbox_uint64(v_init_822_);
lean_dec_ref(v_init_822_);
v_res_825_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_boxed_824_, v_x_823_);
lean_dec(v_x_823_);
v_r_826_ = lean_box_uint64(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0___boxed(lean_object* v_as_827_, lean_object* v_i_828_, lean_object* v_stop_829_, lean_object* v_b_830_){
_start:
{
size_t v_i_boxed_831_; size_t v_stop_boxed_832_; uint64_t v_b_boxed_833_; uint64_t v_res_834_; lean_object* v_r_835_; 
v_i_boxed_831_ = lean_unbox_usize(v_i_828_);
lean_dec(v_i_828_);
v_stop_boxed_832_ = lean_unbox_usize(v_stop_829_);
lean_dec(v_stop_829_);
v_b_boxed_833_ = lean_unbox_uint64(v_b_830_);
lean_dec_ref(v_b_830_);
v_res_834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__0(v_as_827_, v_i_boxed_831_, v_stop_boxed_832_, v_b_boxed_833_);
lean_dec_ref(v_as_827_);
v_r_835_ = lean_box_uint64(v_res_834_);
return v_r_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27___boxed(lean_object* v_x_836_){
_start:
{
uint64_t v_res_837_; lean_object* v_r_838_; 
v_res_837_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_x_836_);
lean_dec(v_x_836_);
v_r_838_ = lean_box_uint64(v_res_837_);
return v_r_838_;
}
}
LEAN_EXPORT uint64_t l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(uint64_t v_init_839_, lean_object* v_t_840_){
_start:
{
uint64_t v___x_841_; 
v___x_841_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1_spec__1(v_init_839_, v_t_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1___boxed(lean_object* v_init_842_, lean_object* v_t_843_){
_start:
{
uint64_t v_init_boxed_844_; uint64_t v_res_845_; lean_object* v_r_846_; 
v_init_boxed_844_ = lean_unbox_uint64(v_init_842_);
lean_dec_ref(v_init_842_);
v_res_845_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27_spec__1(v_init_boxed_844_, v_t_843_);
lean_dec(v_t_843_);
v_r_846_ = lean_box_uint64(v_res_845_);
return v_r_846_;
}
}
LEAN_EXPORT uint64_t l_Lean_Json_instHashable___private__1(lean_object* v_a_847_){
_start:
{
uint64_t v___x_848_; 
v___x_848_ = l___private_Lean_Data_Json_Basic_0__Lean_Json_hash_x27(v_a_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instHashable___private__1___boxed(lean_object* v_a_849_){
_start:
{
uint64_t v_res_850_; lean_object* v_r_851_; 
v_res_850_ = l_Lean_Json_instHashable___private__1(v_a_849_);
lean_dec(v_a_849_);
v_r_851_ = lean_box_uint64(v_res_850_);
return v_r_851_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(lean_object* v_k_854_, lean_object* v_v_855_, lean_object* v_t_856_){
_start:
{
if (lean_obj_tag(v_t_856_) == 0)
{
lean_object* v_size_857_; lean_object* v_k_858_; lean_object* v_v_859_; lean_object* v_l_860_; lean_object* v_r_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_1141_; 
v_size_857_ = lean_ctor_get(v_t_856_, 0);
v_k_858_ = lean_ctor_get(v_t_856_, 1);
v_v_859_ = lean_ctor_get(v_t_856_, 2);
v_l_860_ = lean_ctor_get(v_t_856_, 3);
v_r_861_ = lean_ctor_get(v_t_856_, 4);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_t_856_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_863_ = v_t_856_;
v_isShared_864_ = v_isSharedCheck_1141_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_r_861_);
lean_inc(v_l_860_);
lean_inc(v_v_859_);
lean_inc(v_k_858_);
lean_inc(v_size_857_);
lean_dec(v_t_856_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_1141_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
uint8_t v___x_865_; 
v___x_865_ = lean_string_compare(v_k_854_, v_k_858_);
switch(v___x_865_)
{
case 0:
{
lean_object* v_impl_866_; lean_object* v___x_867_; 
lean_dec(v_size_857_);
v_impl_866_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_854_, v_v_855_, v_l_860_);
v___x_867_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_861_) == 0)
{
lean_object* v_size_868_; lean_object* v_size_869_; lean_object* v_k_870_; lean_object* v_v_871_; lean_object* v_l_872_; lean_object* v_r_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_size_868_ = lean_ctor_get(v_r_861_, 0);
v_size_869_ = lean_ctor_get(v_impl_866_, 0);
v_k_870_ = lean_ctor_get(v_impl_866_, 1);
v_v_871_ = lean_ctor_get(v_impl_866_, 2);
v_l_872_ = lean_ctor_get(v_impl_866_, 3);
v_r_873_ = lean_ctor_get(v_impl_866_, 4);
lean_inc(v_r_873_);
v___x_874_ = lean_unsigned_to_nat(3u);
v___x_875_ = lean_nat_mul(v___x_874_, v_size_868_);
v___x_876_ = lean_nat_dec_lt(v___x_875_, v_size_869_);
lean_dec(v___x_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
lean_dec(v_r_873_);
v___x_877_ = lean_nat_add(v___x_867_, v_size_869_);
v___x_878_ = lean_nat_add(v___x_877_, v_size_868_);
lean_dec(v___x_877_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 3, v_impl_866_);
lean_ctor_set(v___x_863_, 0, v___x_878_);
v___x_880_ = v___x_863_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_881_, 3, v_impl_866_);
lean_ctor_set(v_reuseFailAlloc_881_, 4, v_r_861_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_947_; 
lean_inc(v_l_872_);
lean_inc(v_v_871_);
lean_inc(v_k_870_);
lean_inc(v_size_869_);
v_isSharedCheck_947_ = !lean_is_exclusive(v_impl_866_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; lean_object* v_unused_949_; lean_object* v_unused_950_; lean_object* v_unused_951_; lean_object* v_unused_952_; 
v_unused_948_ = lean_ctor_get(v_impl_866_, 4);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_impl_866_, 3);
lean_dec(v_unused_949_);
v_unused_950_ = lean_ctor_get(v_impl_866_, 2);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v_impl_866_, 1);
lean_dec(v_unused_951_);
v_unused_952_ = lean_ctor_get(v_impl_866_, 0);
lean_dec(v_unused_952_);
v___x_883_ = v_impl_866_;
v_isShared_884_ = v_isSharedCheck_947_;
goto v_resetjp_882_;
}
else
{
lean_dec(v_impl_866_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_947_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v_size_885_; lean_object* v_size_886_; lean_object* v_k_887_; lean_object* v_v_888_; lean_object* v_l_889_; lean_object* v_r_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v_size_885_ = lean_ctor_get(v_l_872_, 0);
v_size_886_ = lean_ctor_get(v_r_873_, 0);
v_k_887_ = lean_ctor_get(v_r_873_, 1);
v_v_888_ = lean_ctor_get(v_r_873_, 2);
v_l_889_ = lean_ctor_get(v_r_873_, 3);
v_r_890_ = lean_ctor_get(v_r_873_, 4);
v___x_891_ = lean_unsigned_to_nat(2u);
v___x_892_ = lean_nat_mul(v___x_891_, v_size_885_);
v___x_893_ = lean_nat_dec_lt(v_size_886_, v___x_892_);
lean_dec(v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_922_; 
lean_inc(v_r_890_);
lean_inc(v_l_889_);
lean_inc(v_v_888_);
lean_inc(v_k_887_);
v_isSharedCheck_922_ = !lean_is_exclusive(v_r_873_);
if (v_isSharedCheck_922_ == 0)
{
lean_object* v_unused_923_; lean_object* v_unused_924_; lean_object* v_unused_925_; lean_object* v_unused_926_; lean_object* v_unused_927_; 
v_unused_923_ = lean_ctor_get(v_r_873_, 4);
lean_dec(v_unused_923_);
v_unused_924_ = lean_ctor_get(v_r_873_, 3);
lean_dec(v_unused_924_);
v_unused_925_ = lean_ctor_get(v_r_873_, 2);
lean_dec(v_unused_925_);
v_unused_926_ = lean_ctor_get(v_r_873_, 1);
lean_dec(v_unused_926_);
v_unused_927_ = lean_ctor_get(v_r_873_, 0);
lean_dec(v_unused_927_);
v___x_895_ = v_r_873_;
v_isShared_896_ = v_isSharedCheck_922_;
goto v_resetjp_894_;
}
else
{
lean_dec(v_r_873_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_922_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___x_910_; lean_object* v___y_912_; 
v___x_897_ = lean_nat_add(v___x_867_, v_size_869_);
lean_dec(v_size_869_);
v___x_898_ = lean_nat_add(v___x_897_, v_size_868_);
lean_dec(v___x_897_);
v___x_910_ = lean_nat_add(v___x_867_, v_size_885_);
if (lean_obj_tag(v_l_889_) == 0)
{
lean_object* v_size_920_; 
v_size_920_ = lean_ctor_get(v_l_889_, 0);
lean_inc(v_size_920_);
v___y_912_ = v_size_920_;
goto v___jp_911_;
}
else
{
lean_object* v___x_921_; 
v___x_921_ = lean_unsigned_to_nat(0u);
v___y_912_ = v___x_921_;
goto v___jp_911_;
}
v___jp_899_:
{
lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_903_ = lean_nat_add(v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec(v___y_901_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 4, v_r_861_);
lean_ctor_set(v___x_895_, 3, v_r_890_);
lean_ctor_set(v___x_895_, 2, v_v_859_);
lean_ctor_set(v___x_895_, 1, v_k_858_);
lean_ctor_set(v___x_895_, 0, v___x_903_);
v___x_905_ = v___x_895_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_909_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_909_, 3, v_r_890_);
lean_ctor_set(v_reuseFailAlloc_909_, 4, v_r_861_);
v___x_905_ = v_reuseFailAlloc_909_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_907_; 
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 4, v___x_905_);
lean_ctor_set(v___x_883_, 3, v___y_900_);
lean_ctor_set(v___x_883_, 2, v_v_888_);
lean_ctor_set(v___x_883_, 1, v_k_887_);
lean_ctor_set(v___x_883_, 0, v___x_898_);
v___x_907_ = v___x_883_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_887_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_888_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v___y_900_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
v___jp_911_:
{
lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_913_ = lean_nat_add(v___x_910_, v___y_912_);
lean_dec(v___y_912_);
lean_dec(v___x_910_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_l_889_);
lean_ctor_set(v___x_863_, 3, v_l_872_);
lean_ctor_set(v___x_863_, 2, v_v_871_);
lean_ctor_set(v___x_863_, 1, v_k_870_);
lean_ctor_set(v___x_863_, 0, v___x_913_);
v___x_915_ = v___x_863_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_k_870_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v_v_871_);
lean_ctor_set(v_reuseFailAlloc_919_, 3, v_l_872_);
lean_ctor_set(v_reuseFailAlloc_919_, 4, v_l_889_);
v___x_915_ = v_reuseFailAlloc_919_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_916_; 
v___x_916_ = lean_nat_add(v___x_867_, v_size_868_);
if (lean_obj_tag(v_r_890_) == 0)
{
lean_object* v_size_917_; 
v_size_917_ = lean_ctor_get(v_r_890_, 0);
lean_inc(v_size_917_);
v___y_900_ = v___x_915_;
v___y_901_ = v___x_916_;
v___y_902_ = v_size_917_;
goto v___jp_899_;
}
else
{
lean_object* v___x_918_; 
v___x_918_ = lean_unsigned_to_nat(0u);
v___y_900_ = v___x_915_;
v___y_901_ = v___x_916_;
v___y_902_ = v___x_918_;
goto v___jp_899_;
}
}
}
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
lean_del_object(v___x_863_);
v___x_928_ = lean_nat_add(v___x_867_, v_size_869_);
lean_dec(v_size_869_);
v___x_929_ = lean_nat_add(v___x_928_, v_size_868_);
lean_dec(v___x_928_);
v___x_930_ = lean_nat_add(v___x_867_, v_size_868_);
v___x_931_ = lean_nat_add(v___x_930_, v_size_886_);
lean_dec(v___x_930_);
lean_inc_ref(v_r_861_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 4, v_r_861_);
lean_ctor_set(v___x_883_, 3, v_r_873_);
lean_ctor_set(v___x_883_, 2, v_v_859_);
lean_ctor_set(v___x_883_, 1, v_k_858_);
lean_ctor_set(v___x_883_, 0, v___x_931_);
v___x_933_ = v___x_883_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_946_, 3, v_r_873_);
lean_ctor_set(v_reuseFailAlloc_946_, 4, v_r_861_);
v___x_933_ = v_reuseFailAlloc_946_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
v_isSharedCheck_940_ = !lean_is_exclusive(v_r_861_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; lean_object* v_unused_942_; lean_object* v_unused_943_; lean_object* v_unused_944_; lean_object* v_unused_945_; 
v_unused_941_ = lean_ctor_get(v_r_861_, 4);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_r_861_, 3);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_r_861_, 2);
lean_dec(v_unused_943_);
v_unused_944_ = lean_ctor_get(v_r_861_, 1);
lean_dec(v_unused_944_);
v_unused_945_ = lean_ctor_get(v_r_861_, 0);
lean_dec(v_unused_945_);
v___x_935_ = v_r_861_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_dec(v_r_861_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 4, v___x_933_);
lean_ctor_set(v___x_935_, 3, v_l_872_);
lean_ctor_set(v___x_935_, 2, v_v_871_);
lean_ctor_set(v___x_935_, 1, v_k_870_);
lean_ctor_set(v___x_935_, 0, v___x_929_);
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_k_870_);
lean_ctor_set(v_reuseFailAlloc_939_, 2, v_v_871_);
lean_ctor_set(v_reuseFailAlloc_939_, 3, v_l_872_);
lean_ctor_set(v_reuseFailAlloc_939_, 4, v___x_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_953_; 
v_l_953_ = lean_ctor_get(v_impl_866_, 3);
if (lean_obj_tag(v_l_953_) == 0)
{
lean_object* v_r_954_; lean_object* v_k_955_; lean_object* v_v_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_967_; 
lean_inc_ref(v_l_953_);
v_r_954_ = lean_ctor_get(v_impl_866_, 4);
v_k_955_ = lean_ctor_get(v_impl_866_, 1);
v_v_956_ = lean_ctor_get(v_impl_866_, 2);
v_isSharedCheck_967_ = !lean_is_exclusive(v_impl_866_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; lean_object* v_unused_969_; 
v_unused_968_ = lean_ctor_get(v_impl_866_, 3);
lean_dec(v_unused_968_);
v_unused_969_ = lean_ctor_get(v_impl_866_, 0);
lean_dec(v_unused_969_);
v___x_958_ = v_impl_866_;
v_isShared_959_ = v_isSharedCheck_967_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_r_954_);
lean_inc(v_v_956_);
lean_inc(v_k_955_);
lean_dec(v_impl_866_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_967_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_960_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_954_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 3, v_r_954_);
lean_ctor_set(v___x_958_, 2, v_v_859_);
lean_ctor_set(v___x_958_, 1, v_k_858_);
lean_ctor_set(v___x_958_, 0, v___x_867_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_966_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_966_, 3, v_r_954_);
lean_ctor_set(v_reuseFailAlloc_966_, 4, v_r_954_);
v___x_962_ = v_reuseFailAlloc_966_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_964_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v___x_962_);
lean_ctor_set(v___x_863_, 3, v_l_953_);
lean_ctor_set(v___x_863_, 2, v_v_956_);
lean_ctor_set(v___x_863_, 1, v_k_955_);
lean_ctor_set(v___x_863_, 0, v___x_960_);
v___x_964_ = v___x_863_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_k_955_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_v_956_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_l_953_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v___x_962_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
else
{
lean_object* v_r_970_; 
v_r_970_ = lean_ctor_get(v_impl_866_, 4);
lean_inc(v_r_970_);
if (lean_obj_tag(v_r_970_) == 0)
{
lean_object* v_k_971_; lean_object* v_v_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_995_; 
lean_inc(v_l_953_);
v_k_971_ = lean_ctor_get(v_impl_866_, 1);
v_v_972_ = lean_ctor_get(v_impl_866_, 2);
v_isSharedCheck_995_ = !lean_is_exclusive(v_impl_866_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; lean_object* v_unused_997_; lean_object* v_unused_998_; 
v_unused_996_ = lean_ctor_get(v_impl_866_, 4);
lean_dec(v_unused_996_);
v_unused_997_ = lean_ctor_get(v_impl_866_, 3);
lean_dec(v_unused_997_);
v_unused_998_ = lean_ctor_get(v_impl_866_, 0);
lean_dec(v_unused_998_);
v___x_974_ = v_impl_866_;
v_isShared_975_ = v_isSharedCheck_995_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_v_972_);
lean_inc(v_k_971_);
lean_dec(v_impl_866_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_995_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v_k_976_; lean_object* v_v_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_991_; 
v_k_976_ = lean_ctor_get(v_r_970_, 1);
v_v_977_ = lean_ctor_get(v_r_970_, 2);
v_isSharedCheck_991_ = !lean_is_exclusive(v_r_970_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v_r_970_, 4);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_r_970_, 3);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_r_970_, 0);
lean_dec(v_unused_994_);
v___x_979_ = v_r_970_;
v_isShared_980_ = v_isSharedCheck_991_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_v_977_);
lean_inc(v_k_976_);
lean_dec(v_r_970_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_991_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; lean_object* v___x_983_; 
v___x_981_ = lean_unsigned_to_nat(3u);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 4, v_l_953_);
lean_ctor_set(v___x_979_, 3, v_l_953_);
lean_ctor_set(v___x_979_, 2, v_v_972_);
lean_ctor_set(v___x_979_, 1, v_k_971_);
lean_ctor_set(v___x_979_, 0, v___x_867_);
v___x_983_ = v___x_979_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_k_971_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_v_972_);
lean_ctor_set(v_reuseFailAlloc_990_, 3, v_l_953_);
lean_ctor_set(v_reuseFailAlloc_990_, 4, v_l_953_);
v___x_983_ = v_reuseFailAlloc_990_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
lean_object* v___x_985_; 
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 4, v_l_953_);
lean_ctor_set(v___x_974_, 2, v_v_859_);
lean_ctor_set(v___x_974_, 1, v_k_858_);
lean_ctor_set(v___x_974_, 0, v___x_867_);
v___x_985_ = v___x_974_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_989_, 3, v_l_953_);
lean_ctor_set(v_reuseFailAlloc_989_, 4, v_l_953_);
v___x_985_ = v_reuseFailAlloc_989_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_987_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v___x_985_);
lean_ctor_set(v___x_863_, 3, v___x_983_);
lean_ctor_set(v___x_863_, 2, v_v_977_);
lean_ctor_set(v___x_863_, 1, v_k_976_);
lean_ctor_set(v___x_863_, 0, v___x_981_);
v___x_987_ = v___x_863_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_981_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_k_976_);
lean_ctor_set(v_reuseFailAlloc_988_, 2, v_v_977_);
lean_ctor_set(v_reuseFailAlloc_988_, 3, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_988_, 4, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
}
else
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = lean_unsigned_to_nat(2u);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_r_970_);
lean_ctor_set(v___x_863_, 3, v_impl_866_);
lean_ctor_set(v___x_863_, 0, v___x_999_);
v___x_1001_ = v___x_863_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1002_, 3, v_impl_866_);
lean_ctor_set(v_reuseFailAlloc_1002_, 4, v_r_970_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1004_; 
lean_dec(v_v_859_);
lean_dec(v_k_858_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 2, v_v_855_);
lean_ctor_set(v___x_863_, 1, v_k_854_);
v___x_1004_ = v___x_863_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_size_857_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_k_854_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_v_855_);
lean_ctor_set(v_reuseFailAlloc_1005_, 3, v_l_860_);
lean_ctor_set(v_reuseFailAlloc_1005_, 4, v_r_861_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
default: 
{
lean_object* v_impl_1006_; lean_object* v___x_1007_; 
lean_dec(v_size_857_);
v_impl_1006_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_854_, v_v_855_, v_r_861_);
v___x_1007_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_860_) == 0)
{
lean_object* v_size_1008_; lean_object* v_size_1009_; lean_object* v_k_1010_; lean_object* v_v_1011_; lean_object* v_l_1012_; lean_object* v_r_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_size_1008_ = lean_ctor_get(v_l_860_, 0);
v_size_1009_ = lean_ctor_get(v_impl_1006_, 0);
v_k_1010_ = lean_ctor_get(v_impl_1006_, 1);
v_v_1011_ = lean_ctor_get(v_impl_1006_, 2);
v_l_1012_ = lean_ctor_get(v_impl_1006_, 3);
lean_inc(v_l_1012_);
v_r_1013_ = lean_ctor_get(v_impl_1006_, 4);
v___x_1014_ = lean_unsigned_to_nat(3u);
v___x_1015_ = lean_nat_mul(v___x_1014_, v_size_1008_);
v___x_1016_ = lean_nat_dec_lt(v___x_1015_, v_size_1009_);
lean_dec(v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1020_; 
lean_dec(v_l_1012_);
v___x_1017_ = lean_nat_add(v___x_1007_, v_size_1008_);
v___x_1018_ = lean_nat_add(v___x_1017_, v_size_1009_);
lean_dec(v___x_1017_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_impl_1006_);
lean_ctor_set(v___x_863_, 0, v___x_1018_);
v___x_1020_ = v___x_863_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1021_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1021_, 3, v_l_860_);
lean_ctor_set(v_reuseFailAlloc_1021_, 4, v_impl_1006_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
else
{
lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1085_; 
lean_inc(v_r_1013_);
lean_inc(v_v_1011_);
lean_inc(v_k_1010_);
lean_inc(v_size_1009_);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_impl_1006_);
if (v_isSharedCheck_1085_ == 0)
{
lean_object* v_unused_1086_; lean_object* v_unused_1087_; lean_object* v_unused_1088_; lean_object* v_unused_1089_; lean_object* v_unused_1090_; 
v_unused_1086_ = lean_ctor_get(v_impl_1006_, 4);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_impl_1006_, 3);
lean_dec(v_unused_1087_);
v_unused_1088_ = lean_ctor_get(v_impl_1006_, 2);
lean_dec(v_unused_1088_);
v_unused_1089_ = lean_ctor_get(v_impl_1006_, 1);
lean_dec(v_unused_1089_);
v_unused_1090_ = lean_ctor_get(v_impl_1006_, 0);
lean_dec(v_unused_1090_);
v___x_1023_ = v_impl_1006_;
v_isShared_1024_ = v_isSharedCheck_1085_;
goto v_resetjp_1022_;
}
else
{
lean_dec(v_impl_1006_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1085_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v_size_1025_; lean_object* v_k_1026_; lean_object* v_v_1027_; lean_object* v_l_1028_; lean_object* v_r_1029_; lean_object* v_size_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v_size_1025_ = lean_ctor_get(v_l_1012_, 0);
v_k_1026_ = lean_ctor_get(v_l_1012_, 1);
v_v_1027_ = lean_ctor_get(v_l_1012_, 2);
v_l_1028_ = lean_ctor_get(v_l_1012_, 3);
v_r_1029_ = lean_ctor_get(v_l_1012_, 4);
v_size_1030_ = lean_ctor_get(v_r_1013_, 0);
v___x_1031_ = lean_unsigned_to_nat(2u);
v___x_1032_ = lean_nat_mul(v___x_1031_, v_size_1030_);
v___x_1033_ = lean_nat_dec_lt(v_size_1025_, v___x_1032_);
lean_dec(v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1061_; 
lean_inc(v_r_1029_);
lean_inc(v_l_1028_);
lean_inc(v_v_1027_);
lean_inc(v_k_1026_);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_l_1012_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; lean_object* v_unused_1063_; lean_object* v_unused_1064_; lean_object* v_unused_1065_; lean_object* v_unused_1066_; 
v_unused_1062_ = lean_ctor_get(v_l_1012_, 4);
lean_dec(v_unused_1062_);
v_unused_1063_ = lean_ctor_get(v_l_1012_, 3);
lean_dec(v_unused_1063_);
v_unused_1064_ = lean_ctor_get(v_l_1012_, 2);
lean_dec(v_unused_1064_);
v_unused_1065_ = lean_ctor_get(v_l_1012_, 1);
lean_dec(v_unused_1065_);
v_unused_1066_ = lean_ctor_get(v_l_1012_, 0);
lean_dec(v_unused_1066_);
v___x_1035_ = v_l_1012_;
v_isShared_1036_ = v_isSharedCheck_1061_;
goto v_resetjp_1034_;
}
else
{
lean_dec(v_l_1012_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1061_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1051_; 
v___x_1037_ = lean_nat_add(v___x_1007_, v_size_1008_);
v___x_1038_ = lean_nat_add(v___x_1037_, v_size_1009_);
lean_dec(v_size_1009_);
if (lean_obj_tag(v_l_1028_) == 0)
{
lean_object* v_size_1059_; 
v_size_1059_ = lean_ctor_get(v_l_1028_, 0);
lean_inc(v_size_1059_);
v___y_1051_ = v_size_1059_;
goto v___jp_1050_;
}
else
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___y_1051_ = v___x_1060_;
goto v___jp_1050_;
}
v___jp_1039_:
{
lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1043_ = lean_nat_add(v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec(v___y_1041_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 4, v_r_1013_);
lean_ctor_set(v___x_1035_, 3, v_r_1029_);
lean_ctor_set(v___x_1035_, 2, v_v_1011_);
lean_ctor_set(v___x_1035_, 1, v_k_1010_);
lean_ctor_set(v___x_1035_, 0, v___x_1043_);
v___x_1045_ = v___x_1035_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_k_1010_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v_v_1011_);
lean_ctor_set(v_reuseFailAlloc_1049_, 3, v_r_1029_);
lean_ctor_set(v_reuseFailAlloc_1049_, 4, v_r_1013_);
v___x_1045_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1047_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 4, v___x_1045_);
lean_ctor_set(v___x_1023_, 3, v___y_1040_);
lean_ctor_set(v___x_1023_, 2, v_v_1027_);
lean_ctor_set(v___x_1023_, 1, v_k_1026_);
lean_ctor_set(v___x_1023_, 0, v___x_1038_);
v___x_1047_ = v___x_1023_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_k_1026_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v_v_1027_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v___y_1040_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
v___jp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = lean_nat_add(v___x_1037_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec(v___x_1037_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_l_1028_);
lean_ctor_set(v___x_863_, 0, v___x_1052_);
v___x_1054_ = v___x_863_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1058_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1058_, 3, v_l_860_);
lean_ctor_set(v_reuseFailAlloc_1058_, 4, v_l_1028_);
v___x_1054_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_nat_add(v___x_1007_, v_size_1030_);
if (lean_obj_tag(v_r_1029_) == 0)
{
lean_object* v_size_1056_; 
v_size_1056_ = lean_ctor_get(v_r_1029_, 0);
lean_inc(v_size_1056_);
v___y_1040_ = v___x_1054_;
v___y_1041_ = v___x_1055_;
v___y_1042_ = v_size_1056_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_unsigned_to_nat(0u);
v___y_1040_ = v___x_1054_;
v___y_1041_ = v___x_1055_;
v___y_1042_ = v___x_1057_;
goto v___jp_1039_;
}
}
}
}
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
lean_del_object(v___x_863_);
v___x_1067_ = lean_nat_add(v___x_1007_, v_size_1008_);
v___x_1068_ = lean_nat_add(v___x_1067_, v_size_1009_);
lean_dec(v_size_1009_);
v___x_1069_ = lean_nat_add(v___x_1067_, v_size_1025_);
lean_dec(v___x_1067_);
lean_inc_ref(v_l_860_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 4, v_l_1012_);
lean_ctor_set(v___x_1023_, 3, v_l_860_);
lean_ctor_set(v___x_1023_, 2, v_v_859_);
lean_ctor_set(v___x_1023_, 1, v_k_858_);
lean_ctor_set(v___x_1023_, 0, v___x_1069_);
v___x_1071_ = v___x_1023_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1084_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1084_, 3, v_l_860_);
lean_ctor_set(v_reuseFailAlloc_1084_, 4, v_l_1012_);
v___x_1071_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
v_isSharedCheck_1078_ = !lean_is_exclusive(v_l_860_);
if (v_isSharedCheck_1078_ == 0)
{
lean_object* v_unused_1079_; lean_object* v_unused_1080_; lean_object* v_unused_1081_; lean_object* v_unused_1082_; lean_object* v_unused_1083_; 
v_unused_1079_ = lean_ctor_get(v_l_860_, 4);
lean_dec(v_unused_1079_);
v_unused_1080_ = lean_ctor_get(v_l_860_, 3);
lean_dec(v_unused_1080_);
v_unused_1081_ = lean_ctor_get(v_l_860_, 2);
lean_dec(v_unused_1081_);
v_unused_1082_ = lean_ctor_get(v_l_860_, 1);
lean_dec(v_unused_1082_);
v_unused_1083_ = lean_ctor_get(v_l_860_, 0);
lean_dec(v_unused_1083_);
v___x_1073_ = v_l_860_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_dec(v_l_860_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 4, v_r_1013_);
lean_ctor_set(v___x_1073_, 3, v___x_1071_);
lean_ctor_set(v___x_1073_, 2, v_v_1011_);
lean_ctor_set(v___x_1073_, 1, v_k_1010_);
lean_ctor_set(v___x_1073_, 0, v___x_1068_);
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_k_1010_);
lean_ctor_set(v_reuseFailAlloc_1077_, 2, v_v_1011_);
lean_ctor_set(v_reuseFailAlloc_1077_, 3, v___x_1071_);
lean_ctor_set(v_reuseFailAlloc_1077_, 4, v_r_1013_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1091_; 
v_l_1091_ = lean_ctor_get(v_impl_1006_, 3);
lean_inc(v_l_1091_);
if (lean_obj_tag(v_l_1091_) == 0)
{
lean_object* v_r_1092_; lean_object* v_k_1093_; lean_object* v_v_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1117_; 
v_r_1092_ = lean_ctor_get(v_impl_1006_, 4);
v_k_1093_ = lean_ctor_get(v_impl_1006_, 1);
v_v_1094_ = lean_ctor_get(v_impl_1006_, 2);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_impl_1006_);
if (v_isSharedCheck_1117_ == 0)
{
lean_object* v_unused_1118_; lean_object* v_unused_1119_; 
v_unused_1118_ = lean_ctor_get(v_impl_1006_, 3);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_impl_1006_, 0);
lean_dec(v_unused_1119_);
v___x_1096_ = v_impl_1006_;
v_isShared_1097_ = v_isSharedCheck_1117_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_r_1092_);
lean_inc(v_v_1094_);
lean_inc(v_k_1093_);
lean_dec(v_impl_1006_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1117_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v_k_1098_; lean_object* v_v_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1113_; 
v_k_1098_ = lean_ctor_get(v_l_1091_, 1);
v_v_1099_ = lean_ctor_get(v_l_1091_, 2);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_l_1091_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; lean_object* v_unused_1115_; lean_object* v_unused_1116_; 
v_unused_1114_ = lean_ctor_get(v_l_1091_, 4);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_l_1091_, 3);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_l_1091_, 0);
lean_dec(v_unused_1116_);
v___x_1101_ = v_l_1091_;
v_isShared_1102_ = v_isSharedCheck_1113_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_v_1099_);
lean_inc(v_k_1098_);
lean_dec(v_l_1091_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1113_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1103_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1092_, 2);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 4, v_r_1092_);
lean_ctor_set(v___x_1101_, 3, v_r_1092_);
lean_ctor_set(v___x_1101_, 2, v_v_859_);
lean_ctor_set(v___x_1101_, 1, v_k_858_);
lean_ctor_set(v___x_1101_, 0, v___x_1007_);
v___x_1105_ = v___x_1101_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1112_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1112_, 3, v_r_1092_);
lean_ctor_set(v_reuseFailAlloc_1112_, 4, v_r_1092_);
v___x_1105_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; 
lean_inc(v_r_1092_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 3, v_r_1092_);
lean_ctor_set(v___x_1096_, 0, v___x_1007_);
v___x_1107_ = v___x_1096_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_k_1093_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_v_1094_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v_r_1092_);
lean_ctor_set(v_reuseFailAlloc_1111_, 4, v_r_1092_);
v___x_1107_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v___x_1107_);
lean_ctor_set(v___x_863_, 3, v___x_1105_);
lean_ctor_set(v___x_863_, 2, v_v_1099_);
lean_ctor_set(v___x_863_, 1, v_k_1098_);
lean_ctor_set(v___x_863_, 0, v___x_1103_);
v___x_1109_ = v___x_863_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_k_1098_);
lean_ctor_set(v_reuseFailAlloc_1110_, 2, v_v_1099_);
lean_ctor_set(v_reuseFailAlloc_1110_, 3, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1110_, 4, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
}
else
{
lean_object* v_r_1120_; 
v_r_1120_ = lean_ctor_get(v_impl_1006_, 4);
lean_inc(v_r_1120_);
if (lean_obj_tag(v_r_1120_) == 0)
{
lean_object* v_k_1121_; lean_object* v_v_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1133_; 
v_k_1121_ = lean_ctor_get(v_impl_1006_, 1);
v_v_1122_ = lean_ctor_get(v_impl_1006_, 2);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_impl_1006_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; lean_object* v_unused_1135_; lean_object* v_unused_1136_; 
v_unused_1134_ = lean_ctor_get(v_impl_1006_, 4);
lean_dec(v_unused_1134_);
v_unused_1135_ = lean_ctor_get(v_impl_1006_, 3);
lean_dec(v_unused_1135_);
v_unused_1136_ = lean_ctor_get(v_impl_1006_, 0);
lean_dec(v_unused_1136_);
v___x_1124_ = v_impl_1006_;
v_isShared_1125_ = v_isSharedCheck_1133_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_v_1122_);
lean_inc(v_k_1121_);
lean_dec(v_impl_1006_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1133_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1126_ = lean_unsigned_to_nat(3u);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 4, v_l_1091_);
lean_ctor_set(v___x_1124_, 2, v_v_859_);
lean_ctor_set(v___x_1124_, 1, v_k_858_);
lean_ctor_set(v___x_1124_, 0, v___x_1007_);
v___x_1128_ = v___x_1124_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1132_, 3, v_l_1091_);
lean_ctor_set(v_reuseFailAlloc_1132_, 4, v_l_1091_);
v___x_1128_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1130_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_r_1120_);
lean_ctor_set(v___x_863_, 3, v___x_1128_);
lean_ctor_set(v___x_863_, 2, v_v_1122_);
lean_ctor_set(v___x_863_, 1, v_k_1121_);
lean_ctor_set(v___x_863_, 0, v___x_1126_);
v___x_1130_ = v___x_863_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_k_1121_);
lean_ctor_set(v_reuseFailAlloc_1131_, 2, v_v_1122_);
lean_ctor_set(v_reuseFailAlloc_1131_, 3, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1131_, 4, v_r_1120_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
else
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = lean_unsigned_to_nat(2u);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 4, v_impl_1006_);
lean_ctor_set(v___x_863_, 3, v_r_1120_);
lean_ctor_set(v___x_863_, 0, v___x_1137_);
v___x_1139_ = v___x_863_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1140_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1140_, 3, v_r_1120_);
lean_ctor_set(v_reuseFailAlloc_1140_, 4, v_impl_1006_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_unsigned_to_nat(1u);
v___x_1143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
lean_ctor_set(v___x_1143_, 1, v_k_854_);
lean_ctor_set(v___x_1143_, 2, v_v_855_);
lean_ctor_set(v___x_1143_, 3, v_t_856_);
lean_ctor_set(v___x_1143_, 4, v_t_856_);
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(lean_object* v_as_x27_1144_, lean_object* v_b_1145_){
_start:
{
if (lean_obj_tag(v_as_x27_1144_) == 0)
{
return v_b_1145_;
}
else
{
lean_object* v_head_1146_; lean_object* v_tail_1147_; lean_object* v_fst_1148_; lean_object* v_snd_1149_; lean_object* v_r_1150_; 
v_head_1146_ = lean_ctor_get(v_as_x27_1144_, 0);
v_tail_1147_ = lean_ctor_get(v_as_x27_1144_, 1);
v_fst_1148_ = lean_ctor_get(v_head_1146_, 0);
v_snd_1149_ = lean_ctor_get(v_head_1146_, 1);
lean_inc(v_snd_1149_);
lean_inc(v_fst_1148_);
v_r_1150_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_fst_1148_, v_snd_1149_, v_b_1145_);
v_as_x27_1144_ = v_tail_1147_;
v_b_1145_ = v_r_1150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg___boxed(lean_object* v_as_x27_1152_, lean_object* v_b_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_as_x27_1152_, v_b_1153_);
lean_dec(v_as_x27_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mkObj(lean_object* v_o_1155_){
_start:
{
lean_object* v_r_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v_r_1156_ = lean_box(1);
v___x_1157_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_o_1155_, v_r_1156_);
v___x_1158_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mkObj___boxed(lean_object* v_o_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_Json_mkObj(v_o_1159_);
lean_dec(v_o_1159_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0(lean_object* v_00_u03b2_1161_, lean_object* v_k_1162_, lean_object* v_v_1163_, lean_object* v_t_1164_, lean_object* v_hl_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Json_mkObj_spec__0___redArg(v_k_1162_, v_v_1163_, v_t_1164_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(lean_object* v_as_1167_, lean_object* v_as_x27_1168_, lean_object* v_b_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___redArg(v_as_x27_1168_, v_b_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1___boxed(lean_object* v_as_1172_, lean_object* v_as_x27_1173_, lean_object* v_b_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_List_forIn_x27_loop___at___00Lean_Json_mkObj_spec__1(v_as_1172_, v_as_x27_1173_, v_b_1174_, v_a_1175_);
lean_dec(v_as_x27_1173_);
lean_dec(v_as_1172_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeNat___lam__0(lean_object* v_n_1177_){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = l_Lean_JsonNumber_fromNat(v_n_1177_);
v___x_1179_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeInt___lam__0(lean_object* v_n_1182_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = l_Lean_JsonNumber_fromInt(v_n_1182_);
v___x_1184_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeString___lam__0(lean_object* v_s_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_s_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0(uint8_t v_b_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1192_, 0, v_b_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeBool___lam__0___boxed(lean_object* v_b_1193_){
_start:
{
uint8_t v_b_boxed_1194_; lean_object* v_res_1195_; 
v_b_boxed_1194_ = lean_unbox(v_b_1193_);
v_res_1195_ = l_Lean_Json_instCoeBool___lam__0(v_b_boxed_1194_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instOfNat(lean_object* v_n_1198_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = l_Lean_JsonNumber_fromNat(v_n_1198_);
v___x_1200_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT uint8_t l_Lean_Json_isNull(lean_object* v_x_1201_){
_start:
{
if (lean_obj_tag(v_x_1201_) == 0)
{
uint8_t v___x_1202_; 
v___x_1202_ = 1;
return v___x_1202_;
}
else
{
uint8_t v___x_1203_; 
v___x_1203_ = 0;
return v___x_1203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_isNull___boxed(lean_object* v_x_1204_){
_start:
{
uint8_t v_res_1205_; lean_object* v_r_1206_; 
v_res_1205_ = l_Lean_Json_isNull(v_x_1204_);
lean_dec(v_x_1204_);
v_r_1206_ = lean_box(v_res_1205_);
return v_r_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObj_x3f(lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 5)
{
lean_object* v_kvPairs_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
v_kvPairs_1211_ = lean_ctor_get(v_x_1210_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_x_1210_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v_x_1210_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_kvPairs_1211_);
lean_dec(v_x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set_tag(v___x_1213_, 1);
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_kvPairs_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
else
{
lean_object* v___x_1219_; 
lean_dec(v_x_1210_);
v___x_1219_ = ((lean_object*)(l_Lean_Json_getObj_x3f___closed__1));
return v___x_1219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getArr_x3f(lean_object* v_x_1223_){
_start:
{
if (lean_obj_tag(v_x_1223_) == 4)
{
lean_object* v_elems_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
v_elems_1224_ = lean_ctor_get(v_x_1223_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_x_1223_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v_x_1223_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_elems_1224_);
lean_dec(v_x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
lean_ctor_set_tag(v___x_1226_, 1);
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_elems_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
else
{
lean_object* v___x_1232_; 
lean_dec(v_x_1223_);
v___x_1232_ = ((lean_object*)(l_Lean_Json_getArr_x3f___closed__1));
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getStr_x3f(lean_object* v_x_1236_){
_start:
{
if (lean_obj_tag(v_x_1236_) == 3)
{
lean_object* v_s_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_s_1237_ = lean_ctor_get(v_x_1236_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_x_1236_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v_x_1236_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_s_1237_);
lean_dec(v_x_1236_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set_tag(v___x_1239_, 1);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_s_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
else
{
lean_object* v___x_1245_; 
lean_dec(v_x_1236_);
v___x_1245_ = ((lean_object*)(l_Lean_Json_getStr_x3f___closed__1));
return v___x_1245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getNat_x3f(lean_object* v_x_1249_){
_start:
{
if (lean_obj_tag(v_x_1249_) == 2)
{
lean_object* v_n_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1266_; 
v_n_1252_ = lean_ctor_get(v_x_1249_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_x_1249_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1254_ = v_x_1249_;
v_isShared_1255_ = v_isSharedCheck_1266_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_n_1252_);
lean_dec(v_x_1249_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1266_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v_mantissa_1256_; lean_object* v_exponent_1257_; lean_object* v_natZero_1258_; lean_object* v_intZero_1259_; uint8_t v_isNeg_1260_; 
v_mantissa_1256_ = lean_ctor_get(v_n_1252_, 0);
lean_inc(v_mantissa_1256_);
v_exponent_1257_ = lean_ctor_get(v_n_1252_, 1);
lean_inc(v_exponent_1257_);
lean_dec_ref(v_n_1252_);
v_natZero_1258_ = lean_unsigned_to_nat(0u);
v_intZero_1259_ = lean_obj_once(&l_Lean_instHashableJsonNumber_hash___closed__0, &l_Lean_instHashableJsonNumber_hash___closed__0_once, _init_l_Lean_instHashableJsonNumber_hash___closed__0);
v_isNeg_1260_ = lean_int_dec_lt(v_mantissa_1256_, v_intZero_1259_);
if (v_isNeg_1260_ == 0)
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_nat_dec_eq(v_exponent_1257_, v_natZero_1258_);
lean_dec(v_exponent_1257_);
if (v___x_1261_ == 0)
{
lean_dec(v_mantissa_1256_);
lean_del_object(v___x_1254_);
goto v___jp_1250_;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; 
v_a_1262_ = lean_nat_abs(v_mantissa_1256_);
lean_dec(v_mantissa_1256_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 1);
lean_ctor_set(v___x_1254_, 0, v_a_1262_);
v___x_1264_ = v___x_1254_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
else
{
lean_dec(v_exponent_1257_);
lean_dec(v_mantissa_1256_);
lean_del_object(v___x_1254_);
goto v___jp_1250_;
}
}
}
else
{
lean_dec(v_x_1249_);
goto v___jp_1250_;
}
v___jp_1250_:
{
lean_object* v___x_1251_; 
v___x_1251_ = ((lean_object*)(l_Lean_Json_getNat_x3f___closed__1));
return v___x_1251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getInt_x3f(lean_object* v_x_1270_){
_start:
{
if (lean_obj_tag(v_x_1270_) == 2)
{
lean_object* v_n_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1284_; 
v_n_1273_ = lean_ctor_get(v_x_1270_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1270_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1275_ = v_x_1270_;
v_isShared_1276_ = v_isSharedCheck_1284_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_n_1273_);
lean_dec(v_x_1270_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1284_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v_mantissa_1277_; lean_object* v_exponent_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v_mantissa_1277_ = lean_ctor_get(v_n_1273_, 0);
lean_inc(v_mantissa_1277_);
v_exponent_1278_ = lean_ctor_get(v_n_1273_, 1);
lean_inc(v_exponent_1278_);
lean_dec_ref(v_n_1273_);
v___x_1279_ = lean_unsigned_to_nat(0u);
v___x_1280_ = lean_nat_dec_eq(v_exponent_1278_, v___x_1279_);
lean_dec(v_exponent_1278_);
if (v___x_1280_ == 0)
{
lean_dec(v_mantissa_1277_);
lean_del_object(v___x_1275_);
goto v___jp_1271_;
}
else
{
lean_object* v___x_1282_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set_tag(v___x_1275_, 1);
lean_ctor_set(v___x_1275_, 0, v_mantissa_1277_);
v___x_1282_ = v___x_1275_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_mantissa_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
lean_dec(v_x_1270_);
goto v___jp_1271_;
}
v___jp_1271_:
{
lean_object* v___x_1272_; 
v___x_1272_ = ((lean_object*)(l_Lean_Json_getInt_x3f___closed__1));
return v___x_1272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f(lean_object* v_x_1288_){
_start:
{
if (lean_obj_tag(v_x_1288_) == 1)
{
uint8_t v_b_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_b_1289_ = lean_ctor_get_uint8(v_x_1288_, 0);
v___x_1290_ = lean_box(v_b_1289_);
v___x_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; 
v___x_1292_ = ((lean_object*)(l_Lean_Json_getBool_x3f___closed__1));
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object* v_x_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Json_getBool_x3f(v_x_1293_);
lean_dec(v_x_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getNum_x3f(lean_object* v_x_1298_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 2)
{
lean_object* v_n_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
v_n_1299_ = lean_ctor_get(v_x_1298_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v_x_1298_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v_x_1298_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_n_1299_);
lean_dec(v_x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set_tag(v___x_1301_, 1);
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_n_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
else
{
lean_object* v___x_1307_; 
lean_dec(v_x_1298_);
v___x_1307_ = ((lean_object*)(l_Lean_Json_getNum_x3f___closed__1));
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f(lean_object* v_x_1311_, lean_object* v_x_1312_){
_start:
{
if (lean_obj_tag(v_x_1311_) == 5)
{
lean_object* v_kvPairs_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1331_; 
v_kvPairs_1313_ = lean_ctor_get(v_x_1311_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_x_1311_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1315_ = v_x_1311_;
v_isShared_1316_ = v_isSharedCheck_1331_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_kvPairs_1313_);
lean_dec(v_x_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1331_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; 
v___x_1317_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_Json_Basic_0__Lean_Json_beq_x27_spec__2___redArg(v_kvPairs_1313_, v_x_1312_);
lean_dec(v_kvPairs_1313_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1318_ = ((lean_object*)(l_Lean_Json_getObjVal_x3f___closed__0));
v___x_1319_ = lean_string_append(v___x_1318_, v_x_1312_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1319_);
v___x_1321_ = v___x_1315_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
else
{
lean_object* v_val_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_del_object(v___x_1315_);
v_val_1323_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1317_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_val_1323_);
lean_dec(v___x_1317_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_val_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
else
{
lean_object* v___x_1332_; 
lean_dec(v_x_1311_);
v___x_1332_ = ((lean_object*)(l_Lean_Json_getObjVal_x3f___closed__1));
return v___x_1332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjVal_x3f___boxed(lean_object* v_x_1333_, lean_object* v_x_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Json_getObjVal_x3f(v_x_1333_, v_x_1334_);
lean_dec_ref(v_x_1334_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getArrVal_x3f(lean_object* v_x_1339_, lean_object* v_x_1340_){
_start:
{
if (lean_obj_tag(v_x_1339_) == 4)
{
lean_object* v_elems_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1357_; 
v_elems_1341_ = lean_ctor_get(v_x_1339_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_x_1339_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1343_ = v_x_1339_;
v_isShared_1344_ = v_isSharedCheck_1357_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_elems_1341_);
lean_dec(v_x_1339_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1357_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = lean_array_get_size(v_elems_1341_);
v___x_1346_ = lean_nat_dec_lt(v_x_1340_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
lean_dec_ref(v_elems_1341_);
v___x_1347_ = ((lean_object*)(l_Lean_Json_getArrVal_x3f___closed__0));
v___x_1348_ = l_Nat_reprFast(v_x_1340_);
v___x_1349_ = lean_string_append(v___x_1347_, v___x_1348_);
lean_dec_ref(v___x_1348_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set_tag(v___x_1343_, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1349_);
v___x_1351_ = v___x_1343_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1353_ = lean_array_fget(v_elems_1341_, v_x_1340_);
lean_dec(v_x_1340_);
lean_dec_ref(v_elems_1341_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set_tag(v___x_1343_, 1);
lean_ctor_set(v___x_1343_, 0, v___x_1353_);
v___x_1355_ = v___x_1343_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
else
{
lean_object* v___x_1358_; 
lean_dec(v_x_1340_);
lean_dec(v_x_1339_);
v___x_1358_ = ((lean_object*)(l_Lean_Json_getArrVal_x3f___closed__1));
return v___x_1358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD(lean_object* v_j_1359_, lean_object* v_k_1360_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lean_Json_getObjVal_x3f(v_j_1359_, v_k_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v___x_1362_; 
lean_dec_ref_known(v___x_1361_, 1);
v___x_1362_ = lean_box(0);
return v___x_1362_;
}
else
{
lean_object* v_a_1363_; 
v_a_1363_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1361_, 1);
return v_a_1363_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValD___boxed(lean_object* v_j_1364_, lean_object* v_k_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lean_Json_getObjValD(v_j_1364_, v_k_1365_);
lean_dec_ref(v_k_1365_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Json_setObjVal_x21_spec__1(lean_object* v_msg_1367_){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_box(0);
v___x_1369_ = lean_panic_fn_borrowed(v___x_1368_, v_msg_1367_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(lean_object* v_msg_1370_){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_box(1);
v___x_1372_ = lean_panic_fn_borrowed(v___x_1371_, v_msg_1370_);
return v___x_1372_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1376_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2));
v___x_1377_ = lean_unsigned_to_nat(35u);
v___x_1378_ = lean_unsigned_to_nat(182u);
v___x_1379_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1));
v___x_1380_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1381_ = l_mkPanicMessageWithDecl(v___x_1380_, v___x_1379_, v___x_1378_, v___x_1377_, v___x_1376_);
return v___x_1381_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1382_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__2));
v___x_1383_ = lean_unsigned_to_nat(21u);
v___x_1384_ = lean_unsigned_to_nat(183u);
v___x_1385_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__1));
v___x_1386_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1387_ = l_mkPanicMessageWithDecl(v___x_1386_, v___x_1385_, v___x_1384_, v___x_1383_, v___x_1382_);
return v___x_1387_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1390_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6));
v___x_1391_ = lean_unsigned_to_nat(35u);
v___x_1392_ = lean_unsigned_to_nat(276u);
v___x_1393_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5));
v___x_1394_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1395_ = l_mkPanicMessageWithDecl(v___x_1394_, v___x_1393_, v___x_1392_, v___x_1391_, v___x_1390_);
return v___x_1395_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1396_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__6));
v___x_1397_ = lean_unsigned_to_nat(21u);
v___x_1398_ = lean_unsigned_to_nat(277u);
v___x_1399_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__5));
v___x_1400_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__0));
v___x_1401_ = l_mkPanicMessageWithDecl(v___x_1400_, v___x_1399_, v___x_1398_, v___x_1397_, v___x_1396_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(lean_object* v_k_1402_, lean_object* v_v_1403_, lean_object* v_t_1404_){
_start:
{
if (lean_obj_tag(v_t_1404_) == 0)
{
lean_object* v_size_1405_; lean_object* v_k_1406_; lean_object* v_v_1407_; lean_object* v_l_1408_; lean_object* v_r_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1765_; 
v_size_1405_ = lean_ctor_get(v_t_1404_, 0);
v_k_1406_ = lean_ctor_get(v_t_1404_, 1);
v_v_1407_ = lean_ctor_get(v_t_1404_, 2);
v_l_1408_ = lean_ctor_get(v_t_1404_, 3);
v_r_1409_ = lean_ctor_get(v_t_1404_, 4);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_t_1404_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1411_ = v_t_1404_;
v_isShared_1412_ = v_isSharedCheck_1765_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_r_1409_);
lean_inc(v_l_1408_);
lean_inc(v_v_1407_);
lean_inc(v_k_1406_);
lean_inc(v_size_1405_);
lean_dec(v_t_1404_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1765_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
uint8_t v___x_1413_; 
v___x_1413_ = lean_string_compare(v_k_1402_, v_k_1406_);
switch(v___x_1413_)
{
case 0:
{
lean_object* v___x_1414_; 
lean_dec(v_size_1405_);
v___x_1414_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1402_, v_v_1403_, v_l_1408_);
if (lean_obj_tag(v_r_1409_) == 0)
{
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_size_1415_; lean_object* v_size_1416_; lean_object* v_k_1417_; lean_object* v_v_1418_; lean_object* v_l_1419_; lean_object* v_r_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v_size_1415_ = lean_ctor_get(v_r_1409_, 0);
v_size_1416_ = lean_ctor_get(v___x_1414_, 0);
v_k_1417_ = lean_ctor_get(v___x_1414_, 1);
v_v_1418_ = lean_ctor_get(v___x_1414_, 2);
v_l_1419_ = lean_ctor_get(v___x_1414_, 3);
v_r_1420_ = lean_ctor_get(v___x_1414_, 4);
lean_inc(v_r_1420_);
v___x_1421_ = lean_unsigned_to_nat(3u);
v___x_1422_ = lean_nat_mul(v___x_1421_, v_size_1415_);
v___x_1423_ = lean_nat_dec_lt(v___x_1422_, v_size_1416_);
lean_dec(v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1428_; 
lean_dec(v_r_1420_);
v___x_1424_ = lean_unsigned_to_nat(1u);
v___x_1425_ = lean_nat_add(v___x_1424_, v_size_1416_);
v___x_1426_ = lean_nat_add(v___x_1425_, v_size_1415_);
lean_dec(v___x_1425_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 3, v___x_1414_);
lean_ctor_set(v___x_1411_, 0, v___x_1426_);
v___x_1428_ = v___x_1411_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1426_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1429_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1429_, 3, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1429_, 4, v_r_1409_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
else
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1501_; 
lean_inc(v_l_1419_);
lean_inc(v_v_1418_);
lean_inc(v_k_1417_);
lean_inc(v_size_1416_);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; lean_object* v_unused_1503_; lean_object* v_unused_1504_; lean_object* v_unused_1505_; lean_object* v_unused_1506_; 
v_unused_1502_ = lean_ctor_get(v___x_1414_, 4);
lean_dec(v_unused_1502_);
v_unused_1503_ = lean_ctor_get(v___x_1414_, 3);
lean_dec(v_unused_1503_);
v_unused_1504_ = lean_ctor_get(v___x_1414_, 2);
lean_dec(v_unused_1504_);
v_unused_1505_ = lean_ctor_get(v___x_1414_, 1);
lean_dec(v_unused_1505_);
v_unused_1506_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1506_);
v___x_1431_ = v___x_1414_;
v_isShared_1432_ = v_isSharedCheck_1501_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v___x_1414_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1501_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
if (lean_obj_tag(v_l_1419_) == 0)
{
if (lean_obj_tag(v_r_1420_) == 0)
{
lean_object* v_size_1433_; lean_object* v_size_1434_; lean_object* v_k_1435_; lean_object* v_v_1436_; lean_object* v_l_1437_; lean_object* v_r_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v_size_1433_ = lean_ctor_get(v_l_1419_, 0);
v_size_1434_ = lean_ctor_get(v_r_1420_, 0);
v_k_1435_ = lean_ctor_get(v_r_1420_, 1);
v_v_1436_ = lean_ctor_get(v_r_1420_, 2);
v_l_1437_ = lean_ctor_get(v_r_1420_, 3);
v_r_1438_ = lean_ctor_get(v_r_1420_, 4);
v___x_1439_ = lean_unsigned_to_nat(2u);
v___x_1440_ = lean_nat_mul(v___x_1439_, v_size_1433_);
v___x_1441_ = lean_nat_dec_lt(v_size_1434_, v___x_1440_);
lean_dec(v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1471_; 
lean_inc(v_r_1438_);
lean_inc(v_l_1437_);
lean_inc(v_v_1436_);
lean_inc(v_k_1435_);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_r_1420_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; lean_object* v_unused_1473_; lean_object* v_unused_1474_; lean_object* v_unused_1475_; lean_object* v_unused_1476_; 
v_unused_1472_ = lean_ctor_get(v_r_1420_, 4);
lean_dec(v_unused_1472_);
v_unused_1473_ = lean_ctor_get(v_r_1420_, 3);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_r_1420_, 2);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_r_1420_, 1);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_r_1420_, 0);
lean_dec(v_unused_1476_);
v___x_1443_ = v_r_1420_;
v_isShared_1444_ = v_isSharedCheck_1471_;
goto v_resetjp_1442_;
}
else
{
lean_dec(v_r_1420_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1471_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___x_1459_; lean_object* v___y_1461_; 
v___x_1445_ = lean_unsigned_to_nat(1u);
v___x_1446_ = lean_nat_add(v___x_1445_, v_size_1416_);
lean_dec(v_size_1416_);
v___x_1447_ = lean_nat_add(v___x_1446_, v_size_1415_);
lean_dec(v___x_1446_);
v___x_1459_ = lean_nat_add(v___x_1445_, v_size_1433_);
if (lean_obj_tag(v_l_1437_) == 0)
{
lean_object* v_size_1469_; 
v_size_1469_ = lean_ctor_get(v_l_1437_, 0);
lean_inc(v_size_1469_);
v___y_1461_ = v_size_1469_;
goto v___jp_1460_;
}
else
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_unsigned_to_nat(0u);
v___y_1461_ = v___x_1470_;
goto v___jp_1460_;
}
v___jp_1448_:
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1452_ = lean_nat_add(v___y_1449_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec(v___y_1449_);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 4, v_r_1409_);
lean_ctor_set(v___x_1443_, 3, v_r_1438_);
lean_ctor_set(v___x_1443_, 2, v_v_1407_);
lean_ctor_set(v___x_1443_, 1, v_k_1406_);
lean_ctor_set(v___x_1443_, 0, v___x_1452_);
v___x_1454_ = v___x_1443_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1458_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1458_, 3, v_r_1438_);
lean_ctor_set(v_reuseFailAlloc_1458_, 4, v_r_1409_);
v___x_1454_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1456_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v___x_1454_);
lean_ctor_set(v___x_1431_, 3, v___y_1450_);
lean_ctor_set(v___x_1431_, 2, v_v_1436_);
lean_ctor_set(v___x_1431_, 1, v_k_1435_);
lean_ctor_set(v___x_1431_, 0, v___x_1447_);
v___x_1456_ = v___x_1431_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v_k_1435_);
lean_ctor_set(v_reuseFailAlloc_1457_, 2, v_v_1436_);
lean_ctor_set(v_reuseFailAlloc_1457_, 3, v___y_1450_);
lean_ctor_set(v_reuseFailAlloc_1457_, 4, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
v___jp_1460_:
{
lean_object* v___x_1462_; lean_object* v___x_1464_; 
v___x_1462_ = lean_nat_add(v___x_1459_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec(v___x_1459_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_l_1437_);
lean_ctor_set(v___x_1411_, 3, v_l_1419_);
lean_ctor_set(v___x_1411_, 2, v_v_1418_);
lean_ctor_set(v___x_1411_, 1, v_k_1417_);
lean_ctor_set(v___x_1411_, 0, v___x_1462_);
v___x_1464_ = v___x_1411_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_k_1417_);
lean_ctor_set(v_reuseFailAlloc_1468_, 2, v_v_1418_);
lean_ctor_set(v_reuseFailAlloc_1468_, 3, v_l_1419_);
lean_ctor_set(v_reuseFailAlloc_1468_, 4, v_l_1437_);
v___x_1464_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_nat_add(v___x_1445_, v_size_1415_);
if (lean_obj_tag(v_r_1438_) == 0)
{
lean_object* v_size_1466_; 
v_size_1466_ = lean_ctor_get(v_r_1438_, 0);
lean_inc(v_size_1466_);
v___y_1449_ = v___x_1465_;
v___y_1450_ = v___x_1464_;
v___y_1451_ = v_size_1466_;
goto v___jp_1448_;
}
else
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_unsigned_to_nat(0u);
v___y_1449_ = v___x_1465_;
v___y_1450_ = v___x_1464_;
v___y_1451_ = v___x_1467_;
goto v___jp_1448_;
}
}
}
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
lean_del_object(v___x_1411_);
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = lean_nat_add(v___x_1477_, v_size_1416_);
lean_dec(v_size_1416_);
v___x_1479_ = lean_nat_add(v___x_1478_, v_size_1415_);
lean_dec(v___x_1478_);
v___x_1480_ = lean_nat_add(v___x_1477_, v_size_1415_);
v___x_1481_ = lean_nat_add(v___x_1480_, v_size_1434_);
lean_dec(v___x_1480_);
lean_inc_ref(v_r_1409_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v_r_1409_);
lean_ctor_set(v___x_1431_, 3, v_r_1420_);
lean_ctor_set(v___x_1431_, 2, v_v_1407_);
lean_ctor_set(v___x_1431_, 1, v_k_1406_);
lean_ctor_set(v___x_1431_, 0, v___x_1481_);
v___x_1483_ = v___x_1431_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1496_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1496_, 3, v_r_1420_);
lean_ctor_set(v_reuseFailAlloc_1496_, 4, v_r_1409_);
v___x_1483_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
v_isSharedCheck_1490_ = !lean_is_exclusive(v_r_1409_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; lean_object* v_unused_1492_; lean_object* v_unused_1493_; lean_object* v_unused_1494_; lean_object* v_unused_1495_; 
v_unused_1491_ = lean_ctor_get(v_r_1409_, 4);
lean_dec(v_unused_1491_);
v_unused_1492_ = lean_ctor_get(v_r_1409_, 3);
lean_dec(v_unused_1492_);
v_unused_1493_ = lean_ctor_get(v_r_1409_, 2);
lean_dec(v_unused_1493_);
v_unused_1494_ = lean_ctor_get(v_r_1409_, 1);
lean_dec(v_unused_1494_);
v_unused_1495_ = lean_ctor_get(v_r_1409_, 0);
lean_dec(v_unused_1495_);
v___x_1485_ = v_r_1409_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_dec(v_r_1409_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v___x_1483_);
lean_ctor_set(v___x_1485_, 3, v_l_1419_);
lean_ctor_set(v___x_1485_, 2, v_v_1418_);
lean_ctor_set(v___x_1485_, 1, v_k_1417_);
lean_ctor_set(v___x_1485_, 0, v___x_1479_);
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_k_1417_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v_v_1418_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v_l_1419_);
lean_ctor_set(v_reuseFailAlloc_1489_, 4, v___x_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
else
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_dec_ref_known(v_l_1419_, 5);
lean_del_object(v___x_1431_);
lean_dec(v_v_1418_);
lean_dec(v_k_1417_);
lean_dec(v_size_1416_);
lean_dec_ref_known(v_r_1409_, 5);
lean_del_object(v___x_1411_);
lean_dec(v_v_1407_);
lean_dec(v_k_1406_);
v___x_1497_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__3);
v___x_1498_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1497_);
return v___x_1498_;
}
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_del_object(v___x_1431_);
lean_dec(v_r_1420_);
lean_dec(v_v_1418_);
lean_dec(v_k_1417_);
lean_dec(v_size_1416_);
lean_dec_ref_known(v_r_1409_, 5);
lean_del_object(v___x_1411_);
lean_dec(v_v_1407_);
lean_dec(v_k_1406_);
v___x_1499_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__4);
v___x_1500_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1499_);
return v___x_1500_;
}
}
}
}
else
{
lean_object* v_size_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v_size_1507_ = lean_ctor_get(v_r_1409_, 0);
v___x_1508_ = lean_unsigned_to_nat(1u);
v___x_1509_ = lean_nat_add(v___x_1508_, v_size_1507_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 3, v___x_1414_);
lean_ctor_set(v___x_1411_, 0, v___x_1509_);
v___x_1511_ = v___x_1411_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1512_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1512_, 3, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1512_, 4, v_r_1409_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
else
{
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_l_1513_; 
v_l_1513_ = lean_ctor_get(v___x_1414_, 3);
if (lean_obj_tag(v_l_1513_) == 0)
{
lean_object* v_r_1514_; 
lean_inc_ref(v_l_1513_);
v_r_1514_ = lean_ctor_get(v___x_1414_, 4);
lean_inc(v_r_1514_);
if (lean_obj_tag(v_r_1514_) == 0)
{
lean_object* v_size_1515_; lean_object* v_k_1516_; lean_object* v_v_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1531_; 
v_size_1515_ = lean_ctor_get(v___x_1414_, 0);
v_k_1516_ = lean_ctor_get(v___x_1414_, 1);
v_v_1517_ = lean_ctor_get(v___x_1414_, 2);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; lean_object* v_unused_1533_; 
v_unused_1532_ = lean_ctor_get(v___x_1414_, 4);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v___x_1414_, 3);
lean_dec(v_unused_1533_);
v___x_1519_ = v___x_1414_;
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_v_1517_);
lean_inc(v_k_1516_);
lean_inc(v_size_1515_);
lean_dec(v___x_1414_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v_size_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v_size_1521_ = lean_ctor_get(v_r_1514_, 0);
v___x_1522_ = lean_unsigned_to_nat(1u);
v___x_1523_ = lean_nat_add(v___x_1522_, v_size_1515_);
lean_dec(v_size_1515_);
v___x_1524_ = lean_nat_add(v___x_1522_, v_size_1521_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 4, v_r_1409_);
lean_ctor_set(v___x_1519_, 3, v_r_1514_);
lean_ctor_set(v___x_1519_, 2, v_v_1407_);
lean_ctor_set(v___x_1519_, 1, v_k_1406_);
lean_ctor_set(v___x_1519_, 0, v___x_1524_);
v___x_1526_ = v___x_1519_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1524_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1530_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1530_, 3, v_r_1514_);
lean_ctor_set(v_reuseFailAlloc_1530_, 4, v_r_1409_);
v___x_1526_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1528_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1526_);
lean_ctor_set(v___x_1411_, 3, v_l_1513_);
lean_ctor_set(v___x_1411_, 2, v_v_1517_);
lean_ctor_set(v___x_1411_, 1, v_k_1516_);
lean_ctor_set(v___x_1411_, 0, v___x_1523_);
v___x_1528_ = v___x_1411_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1523_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_k_1516_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_v_1517_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v_l_1513_);
lean_ctor_set(v_reuseFailAlloc_1529_, 4, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
else
{
lean_object* v_k_1534_; lean_object* v_v_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1547_; 
v_k_1534_ = lean_ctor_get(v___x_1414_, 1);
v_v_1535_ = lean_ctor_get(v___x_1414_, 2);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1547_ == 0)
{
lean_object* v_unused_1548_; lean_object* v_unused_1549_; lean_object* v_unused_1550_; 
v_unused_1548_ = lean_ctor_get(v___x_1414_, 4);
lean_dec(v_unused_1548_);
v_unused_1549_ = lean_ctor_get(v___x_1414_, 3);
lean_dec(v_unused_1549_);
v_unused_1550_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1550_);
v___x_1537_ = v___x_1414_;
v_isShared_1538_ = v_isSharedCheck_1547_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
lean_dec(v___x_1414_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1547_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1539_ = lean_unsigned_to_nat(3u);
v___x_1540_ = lean_unsigned_to_nat(1u);
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 3, v_r_1514_);
lean_ctor_set(v___x_1537_, 2, v_v_1407_);
lean_ctor_set(v___x_1537_, 1, v_k_1406_);
lean_ctor_set(v___x_1537_, 0, v___x_1540_);
v___x_1542_ = v___x_1537_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1546_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1546_, 3, v_r_1514_);
lean_ctor_set(v_reuseFailAlloc_1546_, 4, v_r_1514_);
v___x_1542_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1544_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1542_);
lean_ctor_set(v___x_1411_, 3, v_l_1513_);
lean_ctor_set(v___x_1411_, 2, v_v_1535_);
lean_ctor_set(v___x_1411_, 1, v_k_1534_);
lean_ctor_set(v___x_1411_, 0, v___x_1539_);
v___x_1544_ = v___x_1411_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1545_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1545_, 3, v_l_1513_);
lean_ctor_set(v_reuseFailAlloc_1545_, 4, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
else
{
lean_object* v_r_1551_; 
v_r_1551_ = lean_ctor_get(v___x_1414_, 4);
lean_inc(v_r_1551_);
if (lean_obj_tag(v_r_1551_) == 0)
{
lean_object* v_k_1552_; lean_object* v_v_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1577_; 
lean_inc(v_l_1513_);
v_k_1552_ = lean_ctor_get(v___x_1414_, 1);
v_v_1553_ = lean_ctor_get(v___x_1414_, 2);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; lean_object* v_unused_1579_; lean_object* v_unused_1580_; 
v_unused_1578_ = lean_ctor_get(v___x_1414_, 4);
lean_dec(v_unused_1578_);
v_unused_1579_ = lean_ctor_get(v___x_1414_, 3);
lean_dec(v_unused_1579_);
v_unused_1580_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1580_);
v___x_1555_ = v___x_1414_;
v_isShared_1556_ = v_isSharedCheck_1577_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_v_1553_);
lean_inc(v_k_1552_);
lean_dec(v___x_1414_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1577_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v_k_1557_; lean_object* v_v_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1573_; 
v_k_1557_ = lean_ctor_get(v_r_1551_, 1);
v_v_1558_ = lean_ctor_get(v_r_1551_, 2);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_r_1551_);
if (v_isSharedCheck_1573_ == 0)
{
lean_object* v_unused_1574_; lean_object* v_unused_1575_; lean_object* v_unused_1576_; 
v_unused_1574_ = lean_ctor_get(v_r_1551_, 4);
lean_dec(v_unused_1574_);
v_unused_1575_ = lean_ctor_get(v_r_1551_, 3);
lean_dec(v_unused_1575_);
v_unused_1576_ = lean_ctor_get(v_r_1551_, 0);
lean_dec(v_unused_1576_);
v___x_1560_ = v_r_1551_;
v_isShared_1561_ = v_isSharedCheck_1573_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_v_1558_);
lean_inc(v_k_1557_);
lean_dec(v_r_1551_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1573_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1562_ = lean_unsigned_to_nat(3u);
v___x_1563_ = lean_unsigned_to_nat(1u);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 4, v_l_1513_);
lean_ctor_set(v___x_1560_, 3, v_l_1513_);
lean_ctor_set(v___x_1560_, 2, v_v_1553_);
lean_ctor_set(v___x_1560_, 1, v_k_1552_);
lean_ctor_set(v___x_1560_, 0, v___x_1563_);
v___x_1565_ = v___x_1560_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v_k_1552_);
lean_ctor_set(v_reuseFailAlloc_1572_, 2, v_v_1553_);
lean_ctor_set(v_reuseFailAlloc_1572_, 3, v_l_1513_);
lean_ctor_set(v_reuseFailAlloc_1572_, 4, v_l_1513_);
v___x_1565_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1567_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 4, v_l_1513_);
lean_ctor_set(v___x_1555_, 2, v_v_1407_);
lean_ctor_set(v___x_1555_, 1, v_k_1406_);
lean_ctor_set(v___x_1555_, 0, v___x_1563_);
v___x_1567_ = v___x_1555_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1571_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1571_, 3, v_l_1513_);
lean_ctor_set(v_reuseFailAlloc_1571_, 4, v_l_1513_);
v___x_1567_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1569_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1567_);
lean_ctor_set(v___x_1411_, 3, v___x_1565_);
lean_ctor_set(v___x_1411_, 2, v_v_1558_);
lean_ctor_set(v___x_1411_, 1, v_k_1557_);
lean_ctor_set(v___x_1411_, 0, v___x_1562_);
v___x_1569_ = v___x_1411_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1562_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1570_, 3, v___x_1565_);
lean_ctor_set(v_reuseFailAlloc_1570_, 4, v___x_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
}
else
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = lean_unsigned_to_nat(2u);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_r_1551_);
lean_ctor_set(v___x_1411_, 3, v___x_1414_);
lean_ctor_set(v___x_1411_, 0, v___x_1581_);
v___x_1583_ = v___x_1411_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1584_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1584_, 3, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1584_, 4, v_r_1551_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_unsigned_to_nat(1u);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1414_);
lean_ctor_set(v___x_1411_, 3, v___x_1414_);
lean_ctor_set(v___x_1411_, 0, v___x_1585_);
v___x_1587_ = v___x_1411_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1588_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1588_, 3, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1588_, 4, v___x_1414_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
case 1:
{
lean_object* v___x_1590_; 
lean_dec(v_v_1407_);
lean_dec(v_k_1406_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 2, v_v_1403_);
lean_ctor_set(v___x_1411_, 1, v_k_1402_);
v___x_1590_ = v___x_1411_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_size_1405_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_k_1402_);
lean_ctor_set(v_reuseFailAlloc_1591_, 2, v_v_1403_);
lean_ctor_set(v_reuseFailAlloc_1591_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1591_, 4, v_r_1409_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
default: 
{
lean_object* v___x_1592_; 
lean_dec(v_size_1405_);
v___x_1592_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1402_, v_v_1403_, v_r_1409_);
if (lean_obj_tag(v_l_1408_) == 0)
{
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_size_1593_; lean_object* v_size_1594_; lean_object* v_k_1595_; lean_object* v_v_1596_; lean_object* v_l_1597_; lean_object* v_r_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v_size_1593_ = lean_ctor_get(v_l_1408_, 0);
v_size_1594_ = lean_ctor_get(v___x_1592_, 0);
v_k_1595_ = lean_ctor_get(v___x_1592_, 1);
v_v_1596_ = lean_ctor_get(v___x_1592_, 2);
v_l_1597_ = lean_ctor_get(v___x_1592_, 3);
lean_inc(v_l_1597_);
v_r_1598_ = lean_ctor_get(v___x_1592_, 4);
v___x_1599_ = lean_unsigned_to_nat(3u);
v___x_1600_ = lean_nat_mul(v___x_1599_, v_size_1593_);
v___x_1601_ = lean_nat_dec_lt(v___x_1600_, v_size_1594_);
lean_dec(v___x_1600_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1606_; 
lean_dec(v_l_1597_);
v___x_1602_ = lean_unsigned_to_nat(1u);
v___x_1603_ = lean_nat_add(v___x_1602_, v_size_1593_);
v___x_1604_ = lean_nat_add(v___x_1603_, v_size_1594_);
lean_dec(v___x_1603_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1592_);
lean_ctor_set(v___x_1411_, 0, v___x_1604_);
v___x_1606_ = v___x_1411_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1604_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1607_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1607_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1607_, 4, v___x_1592_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
else
{
lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1677_; 
lean_inc(v_r_1598_);
lean_inc(v_v_1596_);
lean_inc(v_k_1595_);
lean_inc(v_size_1594_);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1677_ == 0)
{
lean_object* v_unused_1678_; lean_object* v_unused_1679_; lean_object* v_unused_1680_; lean_object* v_unused_1681_; lean_object* v_unused_1682_; 
v_unused_1678_ = lean_ctor_get(v___x_1592_, 4);
lean_dec(v_unused_1678_);
v_unused_1679_ = lean_ctor_get(v___x_1592_, 3);
lean_dec(v_unused_1679_);
v_unused_1680_ = lean_ctor_get(v___x_1592_, 2);
lean_dec(v_unused_1680_);
v_unused_1681_ = lean_ctor_get(v___x_1592_, 1);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v___x_1592_, 0);
lean_dec(v_unused_1682_);
v___x_1609_ = v___x_1592_;
v_isShared_1610_ = v_isSharedCheck_1677_;
goto v_resetjp_1608_;
}
else
{
lean_dec(v___x_1592_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1677_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
if (lean_obj_tag(v_l_1597_) == 0)
{
if (lean_obj_tag(v_r_1598_) == 0)
{
lean_object* v_size_1611_; lean_object* v_k_1612_; lean_object* v_v_1613_; lean_object* v_l_1614_; lean_object* v_r_1615_; lean_object* v_size_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v_size_1611_ = lean_ctor_get(v_l_1597_, 0);
v_k_1612_ = lean_ctor_get(v_l_1597_, 1);
v_v_1613_ = lean_ctor_get(v_l_1597_, 2);
v_l_1614_ = lean_ctor_get(v_l_1597_, 3);
v_r_1615_ = lean_ctor_get(v_l_1597_, 4);
v_size_1616_ = lean_ctor_get(v_r_1598_, 0);
v___x_1617_ = lean_unsigned_to_nat(2u);
v___x_1618_ = lean_nat_mul(v___x_1617_, v_size_1616_);
v___x_1619_ = lean_nat_dec_lt(v_size_1611_, v___x_1618_);
lean_dec(v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1648_; 
lean_inc(v_r_1615_);
lean_inc(v_l_1614_);
lean_inc(v_v_1613_);
lean_inc(v_k_1612_);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_l_1597_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; lean_object* v_unused_1650_; lean_object* v_unused_1651_; lean_object* v_unused_1652_; lean_object* v_unused_1653_; 
v_unused_1649_ = lean_ctor_get(v_l_1597_, 4);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_l_1597_, 3);
lean_dec(v_unused_1650_);
v_unused_1651_ = lean_ctor_get(v_l_1597_, 2);
lean_dec(v_unused_1651_);
v_unused_1652_ = lean_ctor_get(v_l_1597_, 1);
lean_dec(v_unused_1652_);
v_unused_1653_ = lean_ctor_get(v_l_1597_, 0);
lean_dec(v_unused_1653_);
v___x_1621_ = v_l_1597_;
v_isShared_1622_ = v_isSharedCheck_1648_;
goto v_resetjp_1620_;
}
else
{
lean_dec(v_l_1597_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1648_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1638_; 
v___x_1623_ = lean_unsigned_to_nat(1u);
v___x_1624_ = lean_nat_add(v___x_1623_, v_size_1593_);
v___x_1625_ = lean_nat_add(v___x_1624_, v_size_1594_);
lean_dec(v_size_1594_);
if (lean_obj_tag(v_l_1614_) == 0)
{
lean_object* v_size_1646_; 
v_size_1646_ = lean_ctor_get(v_l_1614_, 0);
lean_inc(v_size_1646_);
v___y_1638_ = v_size_1646_;
goto v___jp_1637_;
}
else
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_unsigned_to_nat(0u);
v___y_1638_ = v___x_1647_;
goto v___jp_1637_;
}
v___jp_1626_:
{
lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1630_ = lean_nat_add(v___y_1627_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec(v___y_1627_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 4, v_r_1598_);
lean_ctor_set(v___x_1621_, 3, v_r_1615_);
lean_ctor_set(v___x_1621_, 2, v_v_1596_);
lean_ctor_set(v___x_1621_, 1, v_k_1595_);
lean_ctor_set(v___x_1621_, 0, v___x_1630_);
v___x_1632_ = v___x_1621_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1636_, 1, v_k_1595_);
lean_ctor_set(v_reuseFailAlloc_1636_, 2, v_v_1596_);
lean_ctor_set(v_reuseFailAlloc_1636_, 3, v_r_1615_);
lean_ctor_set(v_reuseFailAlloc_1636_, 4, v_r_1598_);
v___x_1632_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
lean_object* v___x_1634_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 4, v___x_1632_);
lean_ctor_set(v___x_1609_, 3, v___y_1628_);
lean_ctor_set(v___x_1609_, 2, v_v_1613_);
lean_ctor_set(v___x_1609_, 1, v_k_1612_);
lean_ctor_set(v___x_1609_, 0, v___x_1625_);
v___x_1634_ = v___x_1609_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_k_1612_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_v_1613_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v___y_1628_);
lean_ctor_set(v_reuseFailAlloc_1635_, 4, v___x_1632_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
v___jp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1641_; 
v___x_1639_ = lean_nat_add(v___x_1624_, v___y_1638_);
lean_dec(v___y_1638_);
lean_dec(v___x_1624_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_l_1614_);
lean_ctor_set(v___x_1411_, 0, v___x_1639_);
v___x_1641_ = v___x_1411_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1639_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1645_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1645_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1645_, 4, v_l_1614_);
v___x_1641_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_nat_add(v___x_1623_, v_size_1616_);
if (lean_obj_tag(v_r_1615_) == 0)
{
lean_object* v_size_1643_; 
v_size_1643_ = lean_ctor_get(v_r_1615_, 0);
lean_inc(v_size_1643_);
v___y_1627_ = v___x_1642_;
v___y_1628_ = v___x_1641_;
v___y_1629_ = v_size_1643_;
goto v___jp_1626_;
}
else
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_unsigned_to_nat(0u);
v___y_1627_ = v___x_1642_;
v___y_1628_ = v___x_1641_;
v___y_1629_ = v___x_1644_;
goto v___jp_1626_;
}
}
}
}
}
else
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1659_; 
lean_del_object(v___x_1411_);
v___x_1654_ = lean_unsigned_to_nat(1u);
v___x_1655_ = lean_nat_add(v___x_1654_, v_size_1593_);
v___x_1656_ = lean_nat_add(v___x_1655_, v_size_1594_);
lean_dec(v_size_1594_);
v___x_1657_ = lean_nat_add(v___x_1655_, v_size_1611_);
lean_dec(v___x_1655_);
lean_inc_ref(v_l_1408_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 4, v_l_1597_);
lean_ctor_set(v___x_1609_, 3, v_l_1408_);
lean_ctor_set(v___x_1609_, 2, v_v_1407_);
lean_ctor_set(v___x_1609_, 1, v_k_1406_);
lean_ctor_set(v___x_1609_, 0, v___x_1657_);
v___x_1659_ = v___x_1609_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1672_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1672_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1672_, 4, v_l_1597_);
v___x_1659_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
v_isSharedCheck_1666_ = !lean_is_exclusive(v_l_1408_);
if (v_isSharedCheck_1666_ == 0)
{
lean_object* v_unused_1667_; lean_object* v_unused_1668_; lean_object* v_unused_1669_; lean_object* v_unused_1670_; lean_object* v_unused_1671_; 
v_unused_1667_ = lean_ctor_get(v_l_1408_, 4);
lean_dec(v_unused_1667_);
v_unused_1668_ = lean_ctor_get(v_l_1408_, 3);
lean_dec(v_unused_1668_);
v_unused_1669_ = lean_ctor_get(v_l_1408_, 2);
lean_dec(v_unused_1669_);
v_unused_1670_ = lean_ctor_get(v_l_1408_, 1);
lean_dec(v_unused_1670_);
v_unused_1671_ = lean_ctor_get(v_l_1408_, 0);
lean_dec(v_unused_1671_);
v___x_1661_ = v_l_1408_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_dec(v_l_1408_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 4, v_r_1598_);
lean_ctor_set(v___x_1661_, 3, v___x_1659_);
lean_ctor_set(v___x_1661_, 2, v_v_1596_);
lean_ctor_set(v___x_1661_, 1, v_k_1595_);
lean_ctor_set(v___x_1661_, 0, v___x_1656_);
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1656_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_k_1595_);
lean_ctor_set(v_reuseFailAlloc_1665_, 2, v_v_1596_);
lean_ctor_set(v_reuseFailAlloc_1665_, 3, v___x_1659_);
lean_ctor_set(v_reuseFailAlloc_1665_, 4, v_r_1598_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
lean_dec_ref_known(v_l_1597_, 5);
lean_del_object(v___x_1609_);
lean_dec(v_v_1596_);
lean_dec(v_k_1595_);
lean_dec(v_size_1594_);
lean_dec_ref_known(v_l_1408_, 5);
lean_del_object(v___x_1411_);
lean_dec(v_v_1407_);
lean_dec(v_k_1406_);
v___x_1673_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__7);
v___x_1674_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1673_);
return v___x_1674_;
}
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_del_object(v___x_1609_);
lean_dec(v_r_1598_);
lean_dec(v_v_1596_);
lean_dec(v_k_1595_);
lean_dec(v_size_1594_);
lean_dec_ref_known(v_l_1408_, 5);
lean_del_object(v___x_1411_);
lean_dec(v_v_1407_);
lean_dec(v_k_1406_);
v___x_1675_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg___closed__8);
v___x_1676_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v___x_1675_);
return v___x_1676_;
}
}
}
}
else
{
lean_object* v_size_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1687_; 
v_size_1683_ = lean_ctor_get(v_l_1408_, 0);
v___x_1684_ = lean_unsigned_to_nat(1u);
v___x_1685_ = lean_nat_add(v___x_1684_, v_size_1683_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1592_);
lean_ctor_set(v___x_1411_, 0, v___x_1685_);
v___x_1687_ = v___x_1411_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
lean_ctor_set(v_reuseFailAlloc_1688_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1688_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1688_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1688_, 4, v___x_1592_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
else
{
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_l_1689_; 
v_l_1689_ = lean_ctor_get(v___x_1592_, 3);
lean_inc(v_l_1689_);
if (lean_obj_tag(v_l_1689_) == 0)
{
lean_object* v_r_1690_; 
v_r_1690_ = lean_ctor_get(v___x_1592_, 4);
lean_inc(v_r_1690_);
if (lean_obj_tag(v_r_1690_) == 0)
{
lean_object* v_size_1691_; lean_object* v_k_1692_; lean_object* v_v_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1707_; 
v_size_1691_ = lean_ctor_get(v___x_1592_, 0);
v_k_1692_ = lean_ctor_get(v___x_1592_, 1);
v_v_1693_ = lean_ctor_get(v___x_1592_, 2);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1707_ == 0)
{
lean_object* v_unused_1708_; lean_object* v_unused_1709_; 
v_unused_1708_ = lean_ctor_get(v___x_1592_, 4);
lean_dec(v_unused_1708_);
v_unused_1709_ = lean_ctor_get(v___x_1592_, 3);
lean_dec(v_unused_1709_);
v___x_1695_ = v___x_1592_;
v_isShared_1696_ = v_isSharedCheck_1707_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_v_1693_);
lean_inc(v_k_1692_);
lean_inc(v_size_1691_);
lean_dec(v___x_1592_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1707_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v_size_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1702_; 
v_size_1697_ = lean_ctor_get(v_l_1689_, 0);
v___x_1698_ = lean_unsigned_to_nat(1u);
v___x_1699_ = lean_nat_add(v___x_1698_, v_size_1691_);
lean_dec(v_size_1691_);
v___x_1700_ = lean_nat_add(v___x_1698_, v_size_1697_);
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 4, v_l_1689_);
lean_ctor_set(v___x_1695_, 3, v_l_1408_);
lean_ctor_set(v___x_1695_, 2, v_v_1407_);
lean_ctor_set(v___x_1695_, 1, v_k_1406_);
lean_ctor_set(v___x_1695_, 0, v___x_1700_);
v___x_1702_ = v___x_1695_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1706_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1706_, 3, v_l_1408_);
lean_ctor_set(v_reuseFailAlloc_1706_, 4, v_l_1689_);
v___x_1702_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
lean_object* v___x_1704_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_r_1690_);
lean_ctor_set(v___x_1411_, 3, v___x_1702_);
lean_ctor_set(v___x_1411_, 2, v_v_1693_);
lean_ctor_set(v___x_1411_, 1, v_k_1692_);
lean_ctor_set(v___x_1411_, 0, v___x_1699_);
v___x_1704_ = v___x_1411_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_k_1692_);
lean_ctor_set(v_reuseFailAlloc_1705_, 2, v_v_1693_);
lean_ctor_set(v_reuseFailAlloc_1705_, 3, v___x_1702_);
lean_ctor_set(v_reuseFailAlloc_1705_, 4, v_r_1690_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
else
{
lean_object* v_k_1710_; lean_object* v_v_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1735_; 
v_k_1710_ = lean_ctor_get(v___x_1592_, 1);
v_v_1711_ = lean_ctor_get(v___x_1592_, 2);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1735_ == 0)
{
lean_object* v_unused_1736_; lean_object* v_unused_1737_; lean_object* v_unused_1738_; 
v_unused_1736_ = lean_ctor_get(v___x_1592_, 4);
lean_dec(v_unused_1736_);
v_unused_1737_ = lean_ctor_get(v___x_1592_, 3);
lean_dec(v_unused_1737_);
v_unused_1738_ = lean_ctor_get(v___x_1592_, 0);
lean_dec(v_unused_1738_);
v___x_1713_ = v___x_1592_;
v_isShared_1714_ = v_isSharedCheck_1735_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_v_1711_);
lean_inc(v_k_1710_);
lean_dec(v___x_1592_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1735_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_k_1715_; lean_object* v_v_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1731_; 
v_k_1715_ = lean_ctor_get(v_l_1689_, 1);
v_v_1716_ = lean_ctor_get(v_l_1689_, 2);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_l_1689_);
if (v_isSharedCheck_1731_ == 0)
{
lean_object* v_unused_1732_; lean_object* v_unused_1733_; lean_object* v_unused_1734_; 
v_unused_1732_ = lean_ctor_get(v_l_1689_, 4);
lean_dec(v_unused_1732_);
v_unused_1733_ = lean_ctor_get(v_l_1689_, 3);
lean_dec(v_unused_1733_);
v_unused_1734_ = lean_ctor_get(v_l_1689_, 0);
lean_dec(v_unused_1734_);
v___x_1718_ = v_l_1689_;
v_isShared_1719_ = v_isSharedCheck_1731_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_v_1716_);
lean_inc(v_k_1715_);
lean_dec(v_l_1689_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1731_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1720_ = lean_unsigned_to_nat(3u);
v___x_1721_ = lean_unsigned_to_nat(1u);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 4, v_r_1690_);
lean_ctor_set(v___x_1718_, 3, v_r_1690_);
lean_ctor_set(v___x_1718_, 2, v_v_1407_);
lean_ctor_set(v___x_1718_, 1, v_k_1406_);
lean_ctor_set(v___x_1718_, 0, v___x_1721_);
v___x_1723_ = v___x_1718_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1730_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1730_, 3, v_r_1690_);
lean_ctor_set(v_reuseFailAlloc_1730_, 4, v_r_1690_);
v___x_1723_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1725_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 3, v_r_1690_);
lean_ctor_set(v___x_1713_, 0, v___x_1721_);
v___x_1725_ = v___x_1713_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_k_1710_);
lean_ctor_set(v_reuseFailAlloc_1729_, 2, v_v_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 3, v_r_1690_);
lean_ctor_set(v_reuseFailAlloc_1729_, 4, v_r_1690_);
v___x_1725_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1727_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1725_);
lean_ctor_set(v___x_1411_, 3, v___x_1723_);
lean_ctor_set(v___x_1411_, 2, v_v_1716_);
lean_ctor_set(v___x_1411_, 1, v_k_1715_);
lean_ctor_set(v___x_1411_, 0, v___x_1720_);
v___x_1727_ = v___x_1411_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_k_1715_);
lean_ctor_set(v_reuseFailAlloc_1728_, 2, v_v_1716_);
lean_ctor_set(v_reuseFailAlloc_1728_, 3, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1728_, 4, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1739_; 
v_r_1739_ = lean_ctor_get(v___x_1592_, 4);
lean_inc(v_r_1739_);
if (lean_obj_tag(v_r_1739_) == 0)
{
lean_object* v_k_1740_; lean_object* v_v_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1753_; 
v_k_1740_ = lean_ctor_get(v___x_1592_, 1);
v_v_1741_ = lean_ctor_get(v___x_1592_, 2);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1753_ == 0)
{
lean_object* v_unused_1754_; lean_object* v_unused_1755_; lean_object* v_unused_1756_; 
v_unused_1754_ = lean_ctor_get(v___x_1592_, 4);
lean_dec(v_unused_1754_);
v_unused_1755_ = lean_ctor_get(v___x_1592_, 3);
lean_dec(v_unused_1755_);
v_unused_1756_ = lean_ctor_get(v___x_1592_, 0);
lean_dec(v_unused_1756_);
v___x_1743_ = v___x_1592_;
v_isShared_1744_ = v_isSharedCheck_1753_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_v_1741_);
lean_inc(v_k_1740_);
lean_dec(v___x_1592_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1753_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1745_ = lean_unsigned_to_nat(3u);
v___x_1746_ = lean_unsigned_to_nat(1u);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 4, v_l_1689_);
lean_ctor_set(v___x_1743_, 2, v_v_1407_);
lean_ctor_set(v___x_1743_, 1, v_k_1406_);
lean_ctor_set(v___x_1743_, 0, v___x_1746_);
v___x_1748_ = v___x_1743_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1746_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1752_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1752_, 3, v_l_1689_);
lean_ctor_set(v_reuseFailAlloc_1752_, 4, v_l_1689_);
v___x_1748_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1750_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v_r_1739_);
lean_ctor_set(v___x_1411_, 3, v___x_1748_);
lean_ctor_set(v___x_1411_, 2, v_v_1741_);
lean_ctor_set(v___x_1411_, 1, v_k_1740_);
lean_ctor_set(v___x_1411_, 0, v___x_1745_);
v___x_1750_ = v___x_1411_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1745_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_k_1740_);
lean_ctor_set(v_reuseFailAlloc_1751_, 2, v_v_1741_);
lean_ctor_set(v_reuseFailAlloc_1751_, 3, v___x_1748_);
lean_ctor_set(v_reuseFailAlloc_1751_, 4, v_r_1739_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1757_ = lean_unsigned_to_nat(2u);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1592_);
lean_ctor_set(v___x_1411_, 3, v_r_1739_);
lean_ctor_set(v___x_1411_, 0, v___x_1757_);
v___x_1759_ = v___x_1411_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1760_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1760_, 3, v_r_1739_);
lean_ctor_set(v_reuseFailAlloc_1760_, 4, v___x_1592_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
else
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = lean_unsigned_to_nat(1u);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 4, v___x_1592_);
lean_ctor_set(v___x_1411_, 3, v___x_1592_);
lean_ctor_set(v___x_1411_, 0, v___x_1761_);
v___x_1763_ = v___x_1411_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v_k_1406_);
lean_ctor_set(v_reuseFailAlloc_1764_, 2, v_v_1407_);
lean_ctor_set(v_reuseFailAlloc_1764_, 3, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1764_, 4, v___x_1592_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
lean_ctor_set(v___x_1767_, 1, v_k_1402_);
lean_ctor_set(v___x_1767_, 2, v_v_1403_);
lean_ctor_set(v___x_1767_, 3, v_t_1404_);
lean_ctor_set(v___x_1767_, 4, v_t_1404_);
return v___x_1767_;
}
}
}
static lean_object* _init_l_Lean_Json_setObjVal_x21___closed__2(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1770_ = ((lean_object*)(l_Lean_Json_setObjVal_x21___closed__1));
v___x_1771_ = lean_unsigned_to_nat(21u);
v___x_1772_ = lean_unsigned_to_nat(290u);
v___x_1773_ = ((lean_object*)(l_Lean_Json_setObjVal_x21___closed__0));
v___x_1774_ = ((lean_object*)(l___private_Lean_Data_Json_Basic_0__Lean_JsonNumber_fromPositiveFloat_x21___closed__0));
v___x_1775_ = l_mkPanicMessageWithDecl(v___x_1774_, v___x_1773_, v___x_1772_, v___x_1771_, v___x_1770_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_setObjVal_x21(lean_object* v_x_1776_, lean_object* v_x_1777_, lean_object* v_x_1778_){
_start:
{
if (lean_obj_tag(v_x_1776_) == 5)
{
lean_object* v_kvPairs_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1787_; 
v_kvPairs_1779_ = lean_ctor_get(v_x_1776_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_x_1776_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1781_ = v_x_1776_;
v_isShared_1782_ = v_isSharedCheck_1787_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_kvPairs_1779_);
lean_dec(v_x_1776_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1787_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1783_; lean_object* v___x_1785_; 
v___x_1783_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_x_1777_, v_x_1778_, v_kvPairs_1779_);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 0, v___x_1783_);
v___x_1785_ = v___x_1781_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1783_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
lean_dec(v_x_1778_);
lean_dec_ref(v_x_1777_);
lean_dec(v_x_1776_);
v___x_1788_ = lean_obj_once(&l_Lean_Json_setObjVal_x21___closed__2, &l_Lean_Json_setObjVal_x21___closed__2_once, _init_l_Lean_Json_setObjVal_x21___closed__2);
v___x_1789_ = l_panic___at___00Lean_Json_setObjVal_x21_spec__1(v___x_1788_);
return v___x_1789_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0(lean_object* v_00_u03b2_1790_, lean_object* v_msg_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0_spec__0___redArg(v_msg_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0(lean_object* v_00_u03b2_1793_, lean_object* v_k_1794_, lean_object* v_v_1795_, lean_object* v_t_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1794_, v_v_1795_, v_t_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(lean_object* v_init_1798_, lean_object* v_x_1799_){
_start:
{
if (lean_obj_tag(v_x_1799_) == 0)
{
lean_object* v_k_1800_; lean_object* v_v_1801_; lean_object* v_l_1802_; lean_object* v_r_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v_k_1800_ = lean_ctor_get(v_x_1799_, 1);
lean_inc(v_k_1800_);
v_v_1801_ = lean_ctor_get(v_x_1799_, 2);
lean_inc(v_v_1801_);
v_l_1802_ = lean_ctor_get(v_x_1799_, 3);
lean_inc(v_l_1802_);
v_r_1803_ = lean_ctor_get(v_x_1799_, 4);
lean_inc(v_r_1803_);
lean_dec_ref_known(v_x_1799_, 5);
v___x_1804_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_init_1798_, v_l_1802_);
v___x_1805_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_Json_setObjVal_x21_spec__0___redArg(v_k_1800_, v_v_1801_, v___x_1804_);
v_init_1798_ = v___x_1805_;
v_x_1799_ = v_r_1803_;
goto _start;
}
else
{
return v_init_1798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_mergeObj(lean_object* v_x_1807_, lean_object* v_x_1808_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 5)
{
if (lean_obj_tag(v_x_1808_) == 5)
{
lean_object* v_kvPairs_1809_; lean_object* v_kvPairs_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1818_; 
v_kvPairs_1809_ = lean_ctor_get(v_x_1807_, 0);
lean_inc(v_kvPairs_1809_);
lean_dec_ref_known(v_x_1807_, 1);
v_kvPairs_1810_ = lean_ctor_get(v_x_1808_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_x_1808_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1812_ = v_x_1808_;
v_isShared_1813_ = v_isSharedCheck_1818_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_kvPairs_1810_);
lean_dec(v_x_1808_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1818_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
v___x_1814_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_kvPairs_1809_, v_kvPairs_1810_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v___x_1814_);
v___x_1816_ = v___x_1812_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
else
{
lean_dec_ref_known(v_x_1807_, 1);
return v_x_1808_;
}
}
else
{
lean_dec(v_x_1807_);
return v_x_1808_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0(lean_object* v_init_1819_, lean_object* v_t_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Json_mergeObj_spec__0_spec__0(v_init_1819_, v_t_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl(lean_object* v_x_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_obj_tag_nat(v_x_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorIdx___impl___boxed(lean_object* v_x_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Json_Structured_ctorIdx___impl(v_x_1824_);
lean_dec_ref(v_x_1824_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___redArg(lean_object* v_t_1826_, lean_object* v_k_1827_){
_start:
{
if (lean_obj_tag(v_t_1826_) == 0)
{
lean_object* v_elems_1828_; lean_object* v___x_1829_; 
v_elems_1828_ = lean_ctor_get(v_t_1826_, 0);
lean_inc_ref(v_elems_1828_);
lean_dec_ref_known(v_t_1826_, 1);
v___x_1829_ = lean_apply_1(v_k_1827_, v_elems_1828_);
return v___x_1829_;
}
else
{
lean_object* v_kvPairs_1830_; lean_object* v___x_1831_; 
v_kvPairs_1830_ = lean_ctor_get(v_t_1826_, 0);
lean_inc(v_kvPairs_1830_);
lean_dec_ref_known(v_t_1826_, 1);
v___x_1831_ = lean_apply_1(v_k_1827_, v_kvPairs_1830_);
return v___x_1831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim(lean_object* v_motive_1832_, lean_object* v_ctorIdx_1833_, lean_object* v_t_1834_, lean_object* v_h_1835_, lean_object* v_k_1836_){
_start:
{
lean_object* v___x_1837_; 
v___x_1837_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1834_, v_k_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_ctorElim___boxed(lean_object* v_motive_1838_, lean_object* v_ctorIdx_1839_, lean_object* v_t_1840_, lean_object* v_h_1841_, lean_object* v_k_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_Json_Structured_ctorElim(v_motive_1838_, v_ctorIdx_1839_, v_t_1840_, v_h_1841_, v_k_1842_);
lean_dec(v_ctorIdx_1839_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim___redArg(lean_object* v_t_1844_, lean_object* v_arr_1845_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1844_, v_arr_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_arr_elim(lean_object* v_motive_1847_, lean_object* v_t_1848_, lean_object* v_h_1849_, lean_object* v_arr_1850_){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1848_, v_arr_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim___redArg(lean_object* v_t_1852_, lean_object* v_obj_1853_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1852_, v_obj_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_Structured_obj_elim(lean_object* v_motive_1855_, lean_object* v_t_1856_, lean_object* v_h_1857_, lean_object* v_obj_1858_){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = l_Lean_Json_Structured_ctorElim___redArg(v_t_1856_, v_obj_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeArrayStructured___lam__0(lean_object* v_elems_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_elems_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_instCoeRawStringStructured___lam__0(lean_object* v_kvPairs_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1865_, 0, v_kvPairs_1864_);
return v___x_1865_;
}
}
lean_object* runtime_initialize_Init_Data_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_OfScientific(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeMap_Raw_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Substring(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_JsonNumber_ltProp = _init_l_Lean_JsonNumber_ltProp();
lean_mark_persistent(l_Lean_JsonNumber_ltProp);
l_Lean_JsonNumber_instInhabited = _init_l_Lean_JsonNumber_instInhabited();
lean_mark_persistent(l_Lean_JsonNumber_instInhabited);
l_Lean_instInhabitedJson_default = _init_l_Lean_instInhabitedJson_default();
lean_mark_persistent(l_Lean_instInhabitedJson_default);
l_Lean_instInhabitedJson = _init_l_Lean_instInhabitedJson();
lean_mark_persistent(l_Lean_instInhabitedJson);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Range(uint8_t builtin);
lean_object* initialize_Init_Data_OfScientific(uint8_t builtin);
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Std_Data_TreeMap_Raw_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* initialize_Init_Data_String_Substring(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_OfScientific(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeMap_Raw_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Substring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
