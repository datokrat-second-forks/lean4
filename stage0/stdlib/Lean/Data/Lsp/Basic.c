// Lean compiler output
// Module: Lean.Data.Lsp.Basic
// Imports: public import Lean.Data.Json public import Lean.Data.Lsp.BasicAux public import Init.Data.Option.Coe
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_compare___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_string_hash(lean_object*);
lean_object* l_Lean_Lsp_instToJsonPosition_toJson(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPosition_fromJson(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instInhabitedRange_default;
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdRange_ord(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqRange_beq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instInhabitedLocation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Lsp_instInhabitedLocation_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedLocation_default___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instInhabitedLocation_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instInhabitedLocation_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_instInhabitedLocation_default;
LEAN_EXPORT lean_object* l_Lean_Lsp_instInhabitedLocation;
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqLocation_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqLocation_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqLocation_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqLocation = (const lean_object*)&l_Lean_Lsp_instBEqLocation___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uri"};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value;
static const lean_array_object l_Lean_Lsp_instToJsonLocation_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonLocation_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLocation = (const lean_object*)&l_Lean_Lsp_instToJsonLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Location"};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(12, 37, 85, 10, 186, 200, 38, 42)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 169, 49, 149, 57, 117, 3, 84)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocation_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 10, 234, 83, 106, 95, 218, 176)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLocation = (const lean_object*)&l_Lean_Lsp_instFromJsonLocation___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdLocation_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdLocation_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instOrdLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instOrdLocation_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instOrdLocation___closed__0 = (const lean_object*)&l_Lean_Lsp_instOrdLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instOrdLocation = (const lean_object*)&l_Lean_Lsp_instOrdLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "originSelectionRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "targetUri"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "targetSelectionRange"};
static const lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLocationLink_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLocationLink = (const lean_object*)&l_Lean_Lsp_instToJsonLocationLink___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LocationLink"};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 124, 242, 62, 124, 12, 27, 89)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "originSelectionRange\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 74, 194, 55, 146, 231, 63, 35)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(175, 177, 170, 233, 220, 50, 208, 212)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(45, 64, 248, 134, 128, 146, 245, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(152, 179, 191, 7, 212, 29, 154, 211)}};
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLocationLink_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLocationLink = (const lean_object*)&l_Lean_Lsp_instFromJsonLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonCommand_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "arguments"};
static const lean_object* l_Lean_Lsp_instToJsonCommand_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCommand_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCommand___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCommand___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCommand = (const lean_object*)&l_Lean_Lsp_instToJsonCommand___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 221, 30, 152, 116, 110, 187, 228)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 99, 171, 63, 21, 188, 124, 202)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonCommand_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11;
static const lean_string_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arguments\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(221, 101, 169, 240, 246, 136, 10, 251)}};
static const lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCommand_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCommand___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCommand = (const lean_object*)&l_Lean_Lsp_instFromJsonCommand___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonSnippetString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonSnippetString_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonSnippetString___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonSnippetString = (const lean_object*)&l_Lean_Lsp_instToJsonSnippetString___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SnippetString"};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 167, 3, 44, 46, 125, 236, 78)}};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 65, 47, 208, 134, 160, 30, 25)}};
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonSnippetString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonSnippetString_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonSnippetString___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonSnippetString = (const lean_object*)&l_Lean_Lsp_instFromJsonSnippetString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "newText"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "leanExtSnippet"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "annotationId"};
static const lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextEdit = (const lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TextEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 98, 67, 125, 163, 99, 155, 129)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 243, 28, 135, 144, 87, 14, 78)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "leanExtSnippet\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(177, 115, 84, 239, 31, 238, 106, 122)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14;
static const lean_string_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "annotationId\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__15_value),LEAN_SCALAR_PTR_LITERAL(37, 162, 73, 47, 154, 76, 17, 22)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEditBatch___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextEditBatch___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextEdit___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextEditBatch = (const lean_object*)&l_Lean_Lsp_instFromJsonTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEditBatch___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextEditBatch___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonTextEdit___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextEditBatch = (const lean_object*)&l_Lean_Lsp_instToJsonTextEditBatch___closed__0_value;
static const lean_array_object l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instEmptyCollectionTextEditBatch = (const lean_object*)&l_Lean_Lsp_instEmptyCollectionTextEditBatch___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instAppendTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instAppendTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instAppendTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instAppendTextEditBatch = (const lean_object*)&l_Lean_Lsp_instAppendTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0 = (const lean_object*)&l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch = (const lean_object*)&l_Lean_Lsp_instCoeTextEditTextEditBatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentIdentifier___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "TextDocumentIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 38, 97, 8, 168, 165, 246, 123)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "VersionedTextDocumentIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 213, 117, 64, 157, 88, 14, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "version\?"};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(251, 148, 229, 74, 154, 149, 54, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "textDocument"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "edits"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TextDocumentEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 209, 213, 215, 209, 99, 14, 164)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 223, 21, 223, 122, 31, 128, 254)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(31, 84, 119, 36, 206, 155, 200, 147)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentEdit___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "needsConfirmation"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "description"};
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonChangeAnnotation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonChangeAnnotation = (const lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ChangeAnnotation"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 29, 38, 56, 166, 211, 67, 130)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 195, 177, 11, 70, 212, 216, 195)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 228, 249, 245, 195, 42, 25, 231)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11;
static const lean_string_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "description\?"};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(153, 157, 232, 40, 135, 180, 81, 193)}};
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation = (const lean_object*)&l_Lean_Lsp_instFromJsonChangeAnnotation___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "overwrite"};
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ignoreIfExists"};
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions = (const lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CreateFile"};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Options"};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 28, 133, 85, 52, 115, 205, 71)}};
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value_aux_2),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(53, 167, 246, 247, 255, 188, 202, 139)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 87, 170, 114, 241, 70, 204, 130)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 134, 117, 77, 156, 66, 145, 205)}};
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions = (const lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursive"};
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ignoreIfNotExists"};
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions = (const lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "DeleteFile"};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 170, 69, 207, 171, 46, 13)}};
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value_aux_2),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 176, 229, 133, 131, 198, 118, 8)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 70, 223, 116, 74, 127, 72, 80)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(4, 158, 228, 176, 92, 223, 55, 182)}};
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions = (const lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "options"};
static const lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonCreateFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonCreateFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonCreateFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonCreateFile = (const lean_object*)&l_Lean_Lsp_instToJsonCreateFile___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value_aux_1),((lean_object*)&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 28, 133, 85, 52, 115, 205, 71)}};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "options\?"};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(86, 227, 221, 148, 173, 251, 188, 232)}};
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonCreateFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonCreateFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonCreateFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonCreateFile = (const lean_object*)&l_Lean_Lsp_instFromJsonCreateFile___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "oldUri"};
static const lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "newUri"};
static const lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRenameFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRenameFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRenameFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRenameFile = (const lean_object*)&l_Lean_Lsp_instToJsonRenameFile___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "RenameFile"};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 122, 246, 46, 146, 210, 110, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 34, 198, 243, 229, 35, 216, 220)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(124, 1, 162, 227, 227, 137, 70, 155)}};
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRenameFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRenameFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRenameFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRenameFile = (const lean_object*)&l_Lean_Lsp_instFromJsonRenameFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeleteFile_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDeleteFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDeleteFile_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDeleteFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDeleteFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDeleteFile = (const lean_object*)&l_Lean_Lsp_instToJsonDeleteFile___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value_aux_1),((lean_object*)&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 170, 69, 207, 171, 46, 13)}};
static const lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDeleteFile_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDeleteFile___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDeleteFile = (const lean_object*)&l_Lean_Lsp_instFromJsonDeleteFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "create"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rename"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5_value)}};
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentChange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDocumentChange___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentChange___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentChange = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unrecognized kind: "};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentChange___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentChange___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentChange___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentChange = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentChange___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "changes"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "documentChanges"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "changeAnnotations"};
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkspaceEdit_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit = (const lean_object*)&l_Lean_Lsp_instToJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0_value;
static const lean_closure_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "WorkspaceEdit"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 53, 41, 159, 108, 63, 180, 34)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "changes\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(170, 115, 240, 184, 226, 123, 111, 156)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentChanges\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(98, 237, 212, 122, 169, 183, 78, 106)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "changeAnnotations\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(173, 82, 27, 192, 32, 217, 85, 156)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkspaceEdit___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_WorkspaceEdit_instEmptyCollection = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instEmptyCollection___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value)} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0_value;
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1_value)} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0 = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend = (const lean_object*)&l_Lean_Lsp_WorkspaceEdit_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "edit"};
static const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams = (const lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ApplyWorkspaceEditParams"};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 203, 7, 144, 87, 77, 77, 21)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "label\?"};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 151, 242, 23, 214, 92, 131, 60)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8;
static const lean_ctor_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 25, 214, 57, 9, 124, 16, 157)}};
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams = (const lean_object*)&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "languageId"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentItem_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentItem = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "TextDocumentItem"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 222, 104, 203, 181, 123, 142, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 221, 17, 12, 58, 230, 139, 137)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 50, 73, 160, 48, 142, 108)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 32, 191, 158, 22, 157, 236, 165)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentItem___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "position"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "TextDocumentPositionParams"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 35, 84, 107, 140, 105, 155, 176)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 172, 67, 66, 136, 94, 119, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentPositionParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams = (const lean_object*)&l_Lean_Lsp_instToStringTextDocumentPositionParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "language"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scheme"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pattern"};
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDocumentFilter_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentFilter___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentFilter = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "DocumentFilter"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 157, 11, 58, 62, 79, 241, 202)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "language\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(233, 71, 114, 86, 193, 11, 227, 251)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scheme\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(74, 1, 75, 28, 84, 23, 43, 79)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pattern\?"};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(67, 60, 32, 224, 244, 193, 130, 57)}};
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentFilter_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentFilter = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentSelector___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDocumentSelector___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDocumentFilter___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonDocumentSelector___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDocumentSelector = (const lean_object*)&l_Lean_Lsp_instFromJsonDocumentSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentSelector___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDocumentSelector___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonDocumentFilter___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonDocumentSelector___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDocumentSelector = (const lean_object*)&l_Lean_Lsp_instToJsonDocumentSelector___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instToJsonStaticRegistrationOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "StaticRegistrationOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 234, 254, 241, 255, 41, 26, 245)}};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "id\?"};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(119, 56, 220, 73, 171, 75, 97, 56)}};
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonStaticRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "documentSelector"};
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "TextDocumentRegistrationOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 175, 91, 79, 225, 82, 151, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "documentSelector\?"};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 242, 138, 38, 210, 232, 124, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_MarkupKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupKind_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupKind_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableMarkupKind_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableMarkupKind = (const lean_object*)&l_Lean_Lsp_instHashableMarkupKind___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown MarkupKind"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "plaintext"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "markdown"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonMarkupKind = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonMarkupKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonMarkupKind___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonMarkupKind = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonMarkupContent = (const lean_object*)&l_Lean_Lsp_instToJsonMarkupContent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MarkupContent"};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 181, 133, 8, 53, 221, 67, 106)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonMarkupContent_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonMarkupContent = (const lean_object*)&l_Lean_Lsp_instFromJsonMarkupContent___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupContent_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupContent_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableMarkupContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableMarkupContent_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableMarkupContent___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableMarkupContent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableMarkupContent = (const lean_object*)&l_Lean_Lsp_instHashableMarkupContent___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cancellable"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "percentage"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressReport___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressBegin___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressEnd___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "workDoneToken"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "WorkDoneProgressParams"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 48, 2, 139, 191, 231, 94, 9)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "workDoneToken\?"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 131, 217, 139, 108, 77, 104, 24)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "partialResultToken"};
static const lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonPartialResultParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonPartialResultParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonPartialResultParams = (const lean_object*)&l_Lean_Lsp_instToJsonPartialResultParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "PartialResultParams"};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 225, 75, 153, 56, 162, 219, 65)}};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3;
static const lean_string_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "partialResultToken\?"};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(29, 35, 64, 120, 46, 112, 112, 255)}};
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonPartialResultParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonPartialResultParams = (const lean_object*)&l_Lean_Lsp_instFromJsonPartialResultParams___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "workDoneProgress"};
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions = (const lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "WorkDoneProgressOptions"};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 128, 234, 9, 207, 171, 228, 26)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3;
static const lean_ctor_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 28, 234, 148, 40, 91, 235, 8)}};
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions = (const lean_object*)&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "properties"};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ResolveSupport"};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(167, 30, 224, 186, 11, 21, 232, 51)}};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 175, 253, 162, 13, 144, 103, 64)}};
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonResolveSupport_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonResolveSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonResolveSupport = (const lean_object*)&l_Lean_Lsp_instFromJsonResolveSupport___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonResolveSupport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonResolveSupport_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonResolveSupport___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonResolveSupport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonResolveSupport = (const lean_object*)&l_Lean_Lsp_instToJsonResolveSupport___closed__0_value;
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = l_Lean_Lsp_instInhabitedRange_default;
v___x_3_ = ((lean_object*)(l_Lean_Lsp_instInhabitedLocation_default___closed__0));
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
lean_ctor_set(v___x_4_, 1, v___x_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Lsp_instInhabitedLocation_default___closed__1, &l_Lean_Lsp_instInhabitedLocation_default___closed__1_once, _init_l_Lean_Lsp_instInhabitedLocation_default___closed__1);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedLocation(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Lsp_instInhabitedLocation_default;
return v___x_6_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqLocation_beq(lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
lean_object* v_uri_9_; lean_object* v_range_10_; lean_object* v_uri_11_; lean_object* v_range_12_; uint8_t v___x_13_; 
v_uri_9_ = lean_ctor_get(v_x_7_, 0);
v_range_10_ = lean_ctor_get(v_x_7_, 1);
v_uri_11_ = lean_ctor_get(v_x_8_, 0);
v_range_12_ = lean_ctor_get(v_x_8_, 1);
v___x_13_ = lean_string_dec_eq(v_uri_9_, v_uri_11_);
if (v___x_13_ == 0)
{
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = l_Lean_Lsp_instBEqRange_beq(v_range_10_, v_range_12_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqLocation_beq___boxed(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_Lsp_instBEqLocation_beq(v_x_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_x_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(lean_object* v_a_21_, lean_object* v_a_22_){
_start:
{
if (lean_obj_tag(v_a_21_) == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_array_to_list(v_a_22_);
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_26_; 
v_head_24_ = lean_ctor_get(v_a_21_, 0);
lean_inc(v_head_24_);
v_tail_25_ = lean_ctor_get(v_a_21_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_a_21_, 2);
v___x_26_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_22_, v_head_24_);
v_a_21_ = v_tail_25_;
v_a_22_ = v___x_26_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocation_toJson(lean_object* v_x_32_){
_start:
{
lean_object* v_uri_33_; lean_object* v_range_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_54_; 
v_uri_33_ = lean_ctor_get(v_x_32_, 0);
v_range_34_ = lean_ctor_get(v_x_32_, 1);
v_isSharedCheck_54_ = !lean_is_exclusive(v_x_32_);
if (v_isSharedCheck_54_ == 0)
{
v___x_36_ = v_x_32_;
v_isShared_37_ = v_isSharedCheck_54_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_range_34_);
lean_inc(v_uri_33_);
lean_dec(v_x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_54_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_38_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_39_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_39_, 0, v_uri_33_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_39_);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_41_ = v___x_36_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v___x_39_);
v___x_41_ = v_reuseFailAlloc_53_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_42_ = lean_box(0);
v___x_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_45_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_34_);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_42_);
v___x_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_42_);
v___x_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_43_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_51_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_49_, v___x_50_);
v___x_52_ = l_Lean_Json_mkObj(v___x_51_);
lean_dec(v___x_51_);
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(lean_object* v_j_57_, lean_object* v_k_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = l_Lean_Json_getObjValD(v_j_57_, v_k_58_);
v___x_60_ = l_Lean_Json_getStr_x3f(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0___boxed(lean_object* v_j_61_, lean_object* v_k_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_j_61_, v_k_62_);
lean_dec_ref(v_k_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(lean_object* v_j_64_, lean_object* v_k_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = l_Lean_Json_getObjValD(v_j_64_, v_k_65_);
v___x_67_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1___boxed(lean_object* v_j_68_, lean_object* v_k_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_j_68_, v_k_69_);
lean_dec_ref(v_k_69_);
return v_res_70_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4(void){
_start:
{
uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = 1;
v___x_79_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__3));
v___x_80_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_83_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__4);
v___x_84_ = lean_string_append(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8(void){
_start:
{
uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = 1;
v___x_88_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__7));
v___x_89_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_91_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6);
v___x_92_ = lean_string_append(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_95_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__9);
v___x_96_ = lean_string_append(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13(void){
_start:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = 1;
v___x_100_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__12));
v___x_101_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13);
v___x_103_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__6);
v___x_104_ = lean_string_append(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_106_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__14);
v___x_107_ = lean_string_append(v___x_106_, v___x_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocation_fromJson(lean_object* v_json_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_108_);
v___x_110_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_108_, v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_120_; 
lean_dec(v_json_108_);
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_120_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_115_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__11);
v___x_116_ = lean_string_append(v___x_115_, v_a_111_);
lean_dec(v_a_111_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_116_);
v___x_118_ = v___x_113_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec(v_json_108_);
v_a_121_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_110_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_110_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 0);
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_a_129_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_129_);
lean_dec_ref_known(v___x_110_, 1);
v___x_130_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_131_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_108_, v___x_130_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_141_; 
lean_dec(v_a_129_);
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_141_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_136_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__15);
v___x_137_ = lean_string_append(v___x_136_, v_a_132_);
lean_dec(v_a_132_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_137_);
v___x_139_ = v___x_134_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec(v_a_129_);
v_a_142_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_131_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_131_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set_tag(v___x_144_, 0);
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_158_; 
v_a_150_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_158_ == 0)
{
v___x_152_ = v___x_131_;
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_131_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_a_129_);
lean_ctor_set(v___x_154_, 1, v_a_150_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_154_);
v___x_156_ = v___x_152_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdLocation_ord(lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
lean_object* v_uri_163_; lean_object* v_range_164_; lean_object* v_uri_165_; lean_object* v_range_166_; uint8_t v___x_167_; 
v_uri_163_ = lean_ctor_get(v_x_161_, 0);
v_range_164_ = lean_ctor_get(v_x_161_, 1);
v_uri_165_ = lean_ctor_get(v_x_162_, 0);
v_range_166_ = lean_ctor_get(v_x_162_, 1);
v___x_167_ = lean_string_compare(v_uri_163_, v_uri_165_);
if (v___x_167_ == 1)
{
uint8_t v___x_168_; 
v___x_168_ = l_Lean_Lsp_instOrdRange_ord(v_range_164_, v_range_166_);
if (v___x_168_ == 1)
{
return v___x_168_;
}
else
{
return v___x_168_;
}
}
else
{
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdLocation_ord___boxed(lean_object* v_x_169_, lean_object* v_x_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Lean_Lsp_instOrdLocation_ord(v_x_169_, v_x_170_);
lean_dec_ref(v_x_170_);
lean_dec_ref(v_x_169_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(lean_object* v_k_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
lean_object* v___x_177_; 
lean_dec_ref(v_k_175_);
v___x_177_ = lean_box(0);
return v___x_177_;
}
else
{
lean_object* v_val_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_val_178_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_val_178_);
lean_dec_ref_known(v_x_176_, 1);
v___x_179_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_178_);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_k_175_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLocationLink_toJson(lean_object* v_x_187_){
_start:
{
lean_object* v_originSelectionRange_x3f_188_; lean_object* v_targetUri_189_; lean_object* v_targetRange_190_; lean_object* v_targetSelectionRange_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_originSelectionRange_x3f_188_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_originSelectionRange_x3f_188_);
v_targetUri_189_ = lean_ctor_get(v_x_187_, 1);
lean_inc_ref(v_targetUri_189_);
v_targetRange_190_ = lean_ctor_get(v_x_187_, 2);
lean_inc_ref(v_targetRange_190_);
v_targetSelectionRange_191_ = lean_ctor_get(v_x_187_, 3);
lean_inc_ref(v_targetSelectionRange_191_);
lean_dec_ref(v_x_187_);
v___x_192_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0));
v___x_193_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLocationLink_toJson_spec__0(v___x_192_, v_originSelectionRange_x3f_188_);
v___x_194_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1));
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v_targetUri_189_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2));
v___x_200_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetRange_190_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_199_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___x_197_);
v___x_203_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3));
v___x_204_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetSelectionRange_191_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_197_);
v___x_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_197_);
v___x_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_202_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_198_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_193_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_212_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_210_, v___x_211_);
v___x_213_ = l_Lean_Json_mkObj(v___x_212_);
lean_dec(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(lean_object* v_x_218_){
_start:
{
if (lean_obj_tag(v_x_218_) == 0)
{
lean_object* v___x_219_; 
v___x_219_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0___closed__0));
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_x_218_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_237_; 
v_a_229_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_237_ == 0)
{
v___x_231_ = v___x_220_;
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_220_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_a_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(lean_object* v_j_238_, lean_object* v_k_239_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = l_Lean_Json_getObjValD(v_j_238_, v_k_239_);
v___x_241_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0_spec__0(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0___boxed(lean_object* v_j_242_, lean_object* v_k_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(v_j_242_, v_k_243_);
lean_dec_ref(v_k_243_);
return v_res_244_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2(void){
_start:
{
uint8_t v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = 1;
v___x_251_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__1));
v___x_252_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_251_, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_254_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__2);
v___x_255_ = lean_string_append(v___x_254_, v___x_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6(void){
_start:
{
uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = 1;
v___x_260_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__5));
v___x_261_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__6);
v___x_263_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_264_ = lean_string_append(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_266_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__7);
v___x_267_ = lean_string_append(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10(void){
_start:
{
uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = 1;
v___x_271_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__9));
v___x_272_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__10);
v___x_274_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_275_ = lean_string_append(v___x_274_, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_277_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__11);
v___x_278_ = lean_string_append(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14(void){
_start:
{
uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = 1;
v___x_282_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__13));
v___x_283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__14);
v___x_285_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_286_ = lean_string_append(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_287_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_288_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__15);
v___x_289_ = lean_string_append(v___x_288_, v___x_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18(void){
_start:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = 1;
v___x_293_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__17));
v___x_294_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_293_, v___x_292_);
return v___x_294_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__18);
v___x_296_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__3);
v___x_297_ = lean_string_append(v___x_296_, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_299_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__19);
v___x_300_ = lean_string_append(v___x_299_, v___x_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLocationLink_fromJson(lean_object* v_json_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__0));
lean_inc(v_json_301_);
v___x_303_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocationLink_fromJson_spec__0(v_json_301_, v___x_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_json_301_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_313_ == 0)
{
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_313_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_313_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_308_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__8);
v___x_309_ = lean_string_append(v___x_308_, v_a_304_);
lean_dec(v_a_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_309_);
v___x_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
else
{
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_json_301_);
v_a_314_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_303_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_303_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 0);
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_a_322_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_303_, 1);
v___x_323_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__1));
lean_inc(v_json_301_);
v___x_324_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_301_, v___x_323_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_334_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__12);
v___x_330_ = lean_string_append(v___x_329_, v_a_325_);
lean_dec(v_a_325_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_330_);
v___x_332_ = v___x_327_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_335_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_324_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_324_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 0);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_343_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_324_, 1);
v___x_344_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__2));
lean_inc(v_json_301_);
v___x_345_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_301_, v___x_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_a_343_);
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_350_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__16);
v___x_351_ = lean_string_append(v___x_350_, v_a_346_);
lean_dec(v_a_346_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_351_);
v___x_353_ = v___x_348_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_a_343_);
lean_dec(v_a_322_);
lean_dec(v_json_301_);
v_a_356_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_345_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_345_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 0);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_364_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_345_, 1);
v___x_365_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocationLink_toJson___closed__3));
v___x_366_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_301_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_376_; 
lean_dec(v_a_364_);
lean_dec(v_a_343_);
lean_dec(v_a_322_);
v_a_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_376_ == 0)
{
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_371_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20, &l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20_once, _init_l_Lean_Lsp_instFromJsonLocationLink_fromJson___closed__20);
v___x_372_ = lean_string_append(v___x_371_, v_a_367_);
lean_dec(v_a_367_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v___x_372_);
v___x_374_ = v___x_369_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_a_364_);
lean_dec(v_a_343_);
lean_dec(v_a_322_);
v_a_377_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_366_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_366_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 0);
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_393_; 
v_a_385_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_393_ == 0)
{
v___x_387_ = v___x_366_;
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_366_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_393_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_389_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_389_, 0, v_a_322_);
lean_ctor_set(v___x_389_, 1, v_a_343_);
lean_ctor_set(v___x_389_, 2, v_a_364_);
lean_ctor_set(v___x_389_, 3, v_a_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_389_);
v___x_391_ = v___x_387_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(size_t v_sz_396_, size_t v_i_397_, lean_object* v_bs_398_){
_start:
{
uint8_t v___x_399_; 
v___x_399_ = lean_usize_dec_lt(v_i_397_, v_sz_396_);
if (v___x_399_ == 0)
{
return v_bs_398_;
}
else
{
lean_object* v_v_400_; lean_object* v___x_401_; lean_object* v_bs_x27_402_; size_t v___x_403_; size_t v___x_404_; lean_object* v___x_405_; 
v_v_400_ = lean_array_uget(v_bs_398_, v_i_397_);
v___x_401_ = lean_unsigned_to_nat(0u);
v_bs_x27_402_ = lean_array_uset(v_bs_398_, v_i_397_, v___x_401_);
v___x_403_ = ((size_t)1ULL);
v___x_404_ = lean_usize_add(v_i_397_, v___x_403_);
v___x_405_ = lean_array_uset(v_bs_x27_402_, v_i_397_, v_v_400_);
v_i_397_ = v___x_404_;
v_bs_398_ = v___x_405_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_407_, lean_object* v_i_408_, lean_object* v_bs_409_){
_start:
{
size_t v_sz_boxed_410_; size_t v_i_boxed_411_; lean_object* v_res_412_; 
v_sz_boxed_410_ = lean_unbox_usize(v_sz_407_);
lean_dec(v_sz_407_);
v_i_boxed_411_ = lean_unbox_usize(v_i_408_);
lean_dec(v_i_408_);
v_res_412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(v_sz_boxed_410_, v_i_boxed_411_, v_bs_409_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(lean_object* v_a_413_){
_start:
{
size_t v_sz_414_; size_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_sz_414_ = lean_array_size(v_a_413_);
v___x_415_ = ((size_t)0ULL);
v___x_416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0_spec__1(v_sz_414_, v___x_415_, v_a_413_);
v___x_417_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(lean_object* v_k_418_, lean_object* v_x_419_){
_start:
{
if (lean_obj_tag(v_x_419_) == 0)
{
lean_object* v___x_420_; 
lean_dec_ref(v_k_418_);
v___x_420_ = lean_box(0);
return v___x_420_;
}
else
{
lean_object* v_val_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_val_421_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_val_421_);
lean_dec_ref_known(v_x_419_, 1);
v___x_422_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0_spec__0(v_val_421_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v_k_418_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = lean_box(0);
v___x_425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCommand_toJson(lean_object* v_x_429_){
_start:
{
lean_object* v_title_430_; lean_object* v_command_431_; lean_object* v_arguments_x3f_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_title_430_ = lean_ctor_get(v_x_429_, 0);
lean_inc_ref(v_title_430_);
v_command_431_ = lean_ctor_get(v_x_429_, 1);
lean_inc_ref(v_command_431_);
v_arguments_x3f_432_ = lean_ctor_get(v_x_429_, 2);
lean_inc(v_arguments_x3f_432_);
lean_dec_ref(v_x_429_);
v___x_433_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
v___x_434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_434_, 0, v_title_430_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = lean_box(0);
v___x_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__1));
v___x_439_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_439_, 0, v_command_431_);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_436_);
v___x_442_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__2));
v___x_443_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCommand_toJson_spec__0(v___x_442_, v_arguments_x3f_432_);
v___x_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_436_);
v___x_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_441_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_437_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_448_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_446_, v___x_447_);
v___x_449_ = l_Lean_Json_mkObj(v___x_448_);
lean_dec(v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_452_, size_t v_i_453_, lean_object* v_bs_454_){
_start:
{
uint8_t v___x_455_; 
v___x_455_ = lean_usize_dec_lt(v_i_453_, v_sz_452_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_456_, 0, v_bs_454_);
return v___x_456_;
}
else
{
lean_object* v_v_457_; lean_object* v___x_458_; lean_object* v_bs_x27_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; 
v_v_457_ = lean_array_uget(v_bs_454_, v_i_453_);
v___x_458_ = lean_unsigned_to_nat(0u);
v_bs_x27_459_ = lean_array_uset(v_bs_454_, v_i_453_, v___x_458_);
v___x_460_ = ((size_t)1ULL);
v___x_461_ = lean_usize_add(v_i_453_, v___x_460_);
v___x_462_ = lean_array_uset(v_bs_x27_459_, v_i_453_, v_v_457_);
v_i_453_ = v___x_461_;
v_bs_454_ = v___x_462_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_464_, lean_object* v_i_465_, lean_object* v_bs_466_){
_start:
{
size_t v_sz_boxed_467_; size_t v_i_boxed_468_; lean_object* v_res_469_; 
v_sz_boxed_467_ = lean_unbox_usize(v_sz_464_);
lean_dec(v_sz_464_);
v_i_boxed_468_ = lean_unbox_usize(v_i_465_);
lean_dec(v_i_465_);
v_res_469_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_467_, v_i_boxed_468_, v_bs_466_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 4)
{
lean_object* v_elems_473_; size_t v_sz_474_; size_t v___x_475_; lean_object* v___x_476_; 
v_elems_473_ = lean_ctor_get(v_x_472_, 0);
lean_inc_ref(v_elems_473_);
lean_dec_ref_known(v_x_472_, 1);
v_sz_474_ = lean_array_size(v_elems_473_);
v___x_475_ = ((size_t)0ULL);
v___x_476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_474_, v___x_475_, v_elems_473_);
return v___x_476_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_477_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_478_ = lean_unsigned_to_nat(80u);
v___x_479_ = l_Lean_Json_pretty(v_x_472_, v___x_478_);
v___x_480_ = lean_string_append(v___x_477_, v___x_479_);
lean_dec_ref(v___x_479_);
v___x_481_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v___x_487_; 
v___x_487_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0___closed__0));
return v___x_487_;
}
else
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1(v_x_486_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_a_497_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v___x_488_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_488_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_501_, 0, v_a_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(lean_object* v_j_506_, lean_object* v_k_507_){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = l_Lean_Json_getObjValD(v_j_506_, v_k_507_);
v___x_509_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0(v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0___boxed(lean_object* v_j_510_, lean_object* v_k_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(v_j_510_, v_k_511_);
lean_dec_ref(v_k_511_);
return v_res_512_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2(void){
_start:
{
uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = 1;
v___x_519_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__1));
v___x_520_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_519_, v___x_518_);
return v___x_520_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_521_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_522_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__2);
v___x_523_ = lean_string_append(v___x_522_, v___x_521_);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5(void){
_start:
{
uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = 1;
v___x_527_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__4));
v___x_528_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_527_, v___x_526_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__5);
v___x_530_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_531_ = lean_string_append(v___x_530_, v___x_529_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_533_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__6);
v___x_534_ = lean_string_append(v___x_533_, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9(void){
_start:
{
uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = 1;
v___x_538_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__8));
v___x_539_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_538_, v___x_537_);
return v___x_539_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__9);
v___x_541_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_542_ = lean_string_append(v___x_541_, v___x_540_);
return v___x_542_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_544_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__10);
v___x_545_ = lean_string_append(v___x_544_, v___x_543_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14(void){
_start:
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_549_ = 1;
v___x_550_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCommand_fromJson___closed__13));
v___x_551_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_550_, v___x_549_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__14);
v___x_553_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__3);
v___x_554_ = lean_string_append(v___x_553_, v___x_552_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_556_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__15);
v___x_557_ = lean_string_append(v___x_556_, v___x_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCommand_fromJson(lean_object* v_json_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
lean_inc(v_json_558_);
v___x_560_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_558_, v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_570_; 
lean_dec(v_json_558_);
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_570_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_570_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_570_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_565_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__7);
v___x_566_ = lean_string_append(v___x_565_, v_a_561_);
lean_dec(v_a_561_);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_566_);
v___x_568_ = v___x_563_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec(v_json_558_);
v_a_571_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_560_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_560_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 0);
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_a_579_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_560_, 1);
v___x_580_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__1));
lean_inc(v_json_558_);
v___x_581_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_558_, v___x_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_a_579_);
lean_dec(v_json_558_);
v_a_582_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_591_ == 0)
{
v___x_584_ = v___x_581_;
v_isShared_585_ = v_isSharedCheck_591_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_591_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_586_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__11);
v___x_587_ = lean_string_append(v___x_586_, v_a_582_);
lean_dec(v_a_582_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_587_);
v___x_589_ = v___x_584_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
else
{
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec(v_a_579_);
lean_dec(v_json_558_);
v_a_592_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_581_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_581_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set_tag(v___x_594_, 0);
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
else
{
lean_object* v_a_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_a_600_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_600_);
lean_dec_ref_known(v___x_581_, 1);
v___x_601_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__2));
v___x_602_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0(v_json_558_, v___x_601_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_600_);
lean_dec(v_a_579_);
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_612_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_612_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_612_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_607_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16, &l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonCommand_fromJson___closed__16);
v___x_608_ = lean_string_append(v___x_607_, v_a_603_);
lean_dec(v_a_603_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_608_);
v___x_610_ = v___x_605_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_a_600_);
lean_dec(v_a_579_);
v_a_613_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_602_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_602_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 0);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_629_; 
v_a_621_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_629_ == 0)
{
v___x_623_ = v___x_602_;
v_isShared_624_ = v_isSharedCheck_629_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_602_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_629_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_625_, 0, v_a_579_);
lean_ctor_set(v___x_625_, 1, v_a_600_);
lean_ctor_set(v___x_625_, 2, v_a_621_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_625_);
v___x_627_ = v___x_623_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonSnippetString_toJson(lean_object* v_x_633_){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_634_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_635_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_635_, 0, v_x_633_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_box(0);
v___x_638_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v___x_637_);
v___x_640_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_641_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_639_, v___x_640_);
v___x_642_ = l_Lean_Json_mkObj(v___x_641_);
lean_dec(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2(void){
_start:
{
uint8_t v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = 1;
v___x_651_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__1));
v___x_652_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_651_, v___x_650_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_654_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__2);
v___x_655_ = lean_string_append(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5(void){
_start:
{
uint8_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = 1;
v___x_659_ = ((lean_object*)(l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__4));
v___x_660_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_659_, v___x_658_);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_661_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5);
v___x_662_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__3);
v___x_663_ = lean_string_append(v___x_662_, v___x_661_);
return v___x_663_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_664_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_665_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__6);
v___x_666_ = lean_string_append(v___x_665_, v___x_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonSnippetString_fromJson(lean_object* v_json_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_669_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_667_, v___x_668_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_679_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_679_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_674_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__7);
v___x_675_ = lean_string_append(v___x_674_, v_a_670_);
lean_dec(v_a_670_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_675_);
v___x_677_ = v___x_672_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
v_a_680_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_669_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_669_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
lean_ctor_set_tag(v___x_682_, 0);
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
v_a_688_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_669_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_669_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(lean_object* v_k_698_, lean_object* v_x_699_){
_start:
{
if (lean_obj_tag(v_x_699_) == 0)
{
lean_object* v___x_700_; 
lean_dec_ref(v_k_698_);
v___x_700_ = lean_box(0);
return v___x_700_;
}
else
{
lean_object* v_val_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v_val_701_ = lean_ctor_get(v_x_699_, 0);
lean_inc(v_val_701_);
lean_dec_ref_known(v_x_699_, 1);
v___x_702_ = l_Lean_Lsp_instToJsonSnippetString_toJson(v_val_701_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_k_698_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = lean_box(0);
v___x_705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(lean_object* v_k_706_, lean_object* v_x_707_){
_start:
{
if (lean_obj_tag(v_x_707_) == 0)
{
lean_object* v___x_708_; 
lean_dec_ref(v_k_706_);
v___x_708_ = lean_box(0);
return v___x_708_;
}
else
{
lean_object* v_val_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_719_; 
v_val_709_ = lean_ctor_get(v_x_707_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_719_ == 0)
{
v___x_711_ = v_x_707_;
v_isShared_712_ = v_isSharedCheck_719_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_val_709_);
lean_dec(v_x_707_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_719_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set_tag(v___x_711_, 3);
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_val_709_);
v___x_714_ = v_reuseFailAlloc_718_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v_k_706_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = lean_box(0);
v___x_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEdit_toJson(lean_object* v_x_723_){
_start:
{
lean_object* v_range_724_; lean_object* v_newText_725_; lean_object* v_leanExtSnippet_x3f_726_; lean_object* v_annotationId_x3f_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_range_724_ = lean_ctor_get(v_x_723_, 0);
lean_inc_ref(v_range_724_);
v_newText_725_ = lean_ctor_get(v_x_723_, 1);
lean_inc_ref(v_newText_725_);
v_leanExtSnippet_x3f_726_ = lean_ctor_get(v_x_723_, 2);
lean_inc(v_leanExtSnippet_x3f_726_);
v_annotationId_x3f_727_ = lean_ctor_get(v_x_723_, 3);
lean_inc(v_annotationId_x3f_727_);
lean_dec_ref(v_x_723_);
v___x_728_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
v___x_729_ = l_Lean_Lsp_instToJsonRange_toJson(v_range_724_);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_728_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = lean_box(0);
v___x_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0));
v___x_734_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_734_, 0, v_newText_725_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
lean_ctor_set(v___x_736_, 1, v___x_731_);
v___x_737_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1));
v___x_738_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__0(v___x_737_, v_leanExtSnippet_x3f_726_);
v___x_739_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_740_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_739_, v_annotationId_x3f_727_);
v___x_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v___x_731_);
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_738_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_736_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_732_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_746_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_744_, v___x_745_);
v___x_747_ = l_Lean_Json_mkObj(v___x_746_);
lean_dec(v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(lean_object* v_x_752_){
_start:
{
if (lean_obj_tag(v_x_752_) == 0)
{
lean_object* v___x_753_; 
v___x_753_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_753_;
}
else
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_Lsp_instFromJsonSnippetString_fromJson(v_x_752_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
v_a_763_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_771_ == 0)
{
v___x_765_ = v___x_754_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_754_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_767_, 0, v_a_763_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_767_);
v___x_769_ = v___x_765_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(lean_object* v_j_772_, lean_object* v_k_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = l_Lean_Json_getObjValD(v_j_772_, v_k_773_);
v___x_775_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0___boxed(lean_object* v_j_776_, lean_object* v_k_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(v_j_776_, v_k_777_);
lean_dec_ref(v_k_777_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_779_) == 0)
{
lean_object* v___x_780_; 
v___x_780_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_780_;
}
else
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_Json_getStr_x3f(v_x_779_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_798_; 
v_a_790_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_798_ == 0)
{
v___x_792_ = v___x_781_;
v_isShared_793_ = v_isSharedCheck_798_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_781_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_798_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_794_, 0, v_a_790_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_794_);
v___x_796_ = v___x_792_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(lean_object* v_j_799_, lean_object* v_k_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = l_Lean_Json_getObjValD(v_j_799_, v_k_800_);
v___x_802_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1_spec__2(v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1___boxed(lean_object* v_j_803_, lean_object* v_k_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_j_803_, v_k_804_);
lean_dec_ref(v_k_804_);
return v_res_805_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = 1;
v___x_812_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__1));
v___x_813_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_815_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__2);
v___x_816_ = lean_string_append(v___x_815_, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__13);
v___x_818_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_819_ = lean_string_append(v___x_818_, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_821_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__4);
v___x_822_ = lean_string_append(v___x_821_, v___x_820_);
return v___x_822_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7(void){
_start:
{
uint8_t v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = 1;
v___x_826_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__6));
v___x_827_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_826_, v___x_825_);
return v___x_827_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_828_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__7);
v___x_829_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_830_ = lean_string_append(v___x_829_, v___x_828_);
return v___x_830_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_831_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_832_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__8);
v___x_833_ = lean_string_append(v___x_832_, v___x_831_);
return v___x_833_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12(void){
_start:
{
uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = 1;
v___x_838_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__11));
v___x_839_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__12);
v___x_841_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_842_ = lean_string_append(v___x_841_, v___x_840_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_844_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__13);
v___x_845_ = lean_string_append(v___x_844_, v___x_843_);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17(void){
_start:
{
uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = 1;
v___x_850_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__16));
v___x_851_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_850_, v___x_849_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_852_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_853_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__3);
v___x_854_ = lean_string_append(v___x_853_, v___x_852_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_856_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__18);
v___x_857_ = lean_string_append(v___x_856_, v___x_855_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEdit_fromJson(lean_object* v_json_858_){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__1));
lean_inc(v_json_858_);
v___x_860_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__1(v_json_858_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_json_858_);
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_870_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_870_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_870_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_865_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__5);
v___x_866_ = lean_string_append(v___x_865_, v_a_861_);
lean_dec(v_a_861_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_866_);
v___x_868_ = v___x_863_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
else
{
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v_json_858_);
v_a_871_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_860_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_860_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set_tag(v___x_873_, 0);
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_879_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_860_, 1);
v___x_880_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__0));
lean_inc(v_json_858_);
v___x_881_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_858_, v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_891_; 
lean_dec(v_a_879_);
lean_dec(v_json_858_);
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_891_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_886_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__9);
v___x_887_ = lean_string_append(v___x_886_, v_a_882_);
lean_dec(v_a_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_887_);
v___x_889_ = v___x_884_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
else
{
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec(v_a_879_);
lean_dec(v_json_858_);
v_a_892_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_881_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_881_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set_tag(v___x_894_, 0);
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_881_, 1);
v___x_901_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__1));
lean_inc(v_json_858_);
v___x_902_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__0(v_json_858_, v___x_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_912_; 
lean_dec(v_a_900_);
lean_dec(v_a_879_);
lean_dec(v_json_858_);
v_a_903_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_912_ == 0)
{
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_907_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__14);
v___x_908_ = lean_string_append(v___x_907_, v_a_903_);
lean_dec(v_a_903_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_908_);
v___x_910_ = v___x_905_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
else
{
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_a_900_);
lean_dec(v_a_879_);
lean_dec(v_json_858_);
v_a_913_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_902_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_902_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 0);
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_921_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_902_, 1);
v___x_922_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_923_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_858_, v___x_922_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_a_921_);
lean_dec(v_a_900_);
lean_dec(v_a_879_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_933_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_933_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_933_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_928_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__19);
v___x_929_ = lean_string_append(v___x_928_, v_a_924_);
lean_dec(v_a_924_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_929_);
v___x_931_ = v___x_926_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_921_);
lean_dec(v_a_900_);
lean_dec(v_a_879_);
v_a_934_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_923_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_923_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set_tag(v___x_936_, 0);
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_950_; 
v_a_942_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_950_ == 0)
{
v___x_944_ = v___x_923_;
v_isShared_945_ = v_isSharedCheck_950_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_923_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_950_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_946_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_946_, 0, v_a_879_);
lean_ctor_set(v___x_946_, 1, v_a_900_);
lean_ctor_set(v___x_946_, 2, v_a_921_);
lean_ctor_set(v___x_946_, 3, v_a_942_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_946_);
v___x_948_ = v___x_944_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextEditBatch___lam__0(lean_object* v___x_953_, lean_object* v_x_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lean_Array_fromJson_x3f___redArg(v___x_953_, v_x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
v_a_964_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_955_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_955_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextEditBatch___lam__0(lean_object* v___x_975_, lean_object* v_x_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_Array_toJson___redArg(v___x_975_, v_x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instCoeTextEditTextEditBatch___lam__0(lean_object* v_te_986_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = lean_mk_empty_array_with_capacity(v___x_987_);
v___x_989_ = lean_array_push(v___x_988_, v_te_986_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(lean_object* v_x_992_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_993_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_994_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_994_, 0, v_x_992_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lean_box(0);
v___x_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set(v___x_998_, 1, v___x_996_);
v___x_999_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1000_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_998_, v___x_999_);
v___x_1001_ = l_Lean_Json_mkObj(v___x_1000_);
lean_dec(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = 1;
v___x_1010_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__1));
v___x_1011_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1010_, v___x_1009_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1013_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__2);
v___x_1014_ = lean_string_append(v___x_1013_, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1016_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__3);
v___x_1017_ = lean_string_append(v___x_1016_, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1019_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__4);
v___x_1020_ = lean_string_append(v___x_1019_, v___x_1018_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(lean_object* v_json_1021_){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1023_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1021_, v___x_1022_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1033_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson___closed__5);
v___x_1029_ = lean_string_append(v___x_1028_, v_a_1024_);
lean_dec(v_a_1024_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1029_);
v___x_1031_ = v___x_1026_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
else
{
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
v_a_1034_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_1023_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_1023_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 0);
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_a_1042_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1023_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1023_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(lean_object* v_k_1052_, lean_object* v_x_1053_){
_start:
{
if (lean_obj_tag(v_x_1053_) == 0)
{
lean_object* v___x_1054_; 
lean_dec_ref(v_k_1052_);
v___x_1054_ = lean_box(0);
return v___x_1054_;
}
else
{
lean_object* v_val_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1066_; 
v_val_1055_ = lean_ctor_get(v_x_1053_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_x_1053_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1057_ = v_x_1053_;
v_isShared_1058_ = v_isSharedCheck_1066_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_val_1055_);
lean_dec(v_x_1053_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1066_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = l_Lean_JsonNumber_fromNat(v_val_1055_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set_tag(v___x_1057_, 2);
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1062_, 0, v_k_1052_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_box(0);
v___x_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(lean_object* v_x_1068_){
_start:
{
lean_object* v_uri_1069_; lean_object* v_version_x3f_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1088_; 
v_uri_1069_ = lean_ctor_get(v_x_1068_, 0);
v_version_x3f_1070_ = lean_ctor_get(v_x_1068_, 1);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_x_1068_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1072_ = v_x_1068_;
v_isShared_1073_ = v_isSharedCheck_1088_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_version_x3f_1070_);
lean_inc(v_uri_1069_);
lean_dec(v_x_1068_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1088_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1074_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_uri_1069_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 1, v___x_1075_);
lean_ctor_set(v___x_1072_, 0, v___x_1074_);
v___x_1077_ = v___x_1072_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1074_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1078_ = lean_box(0);
v___x_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_1081_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_1080_, v_version_x3f_1070_);
v___x_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v___x_1078_);
v___x_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1079_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
v___x_1084_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1085_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1083_, v___x_1084_);
v___x_1086_ = l_Lean_Json_mkObj(v___x_1085_);
lean_dec(v___x_1085_);
return v___x_1086_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(lean_object* v_x_1093_){
_start:
{
if (lean_obj_tag(v_x_1093_) == 0)
{
lean_object* v___x_1094_; 
v___x_1094_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0___closed__0));
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lean_Json_getNat_x3f(v_x_1093_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1095_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1095_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1112_; 
v_a_1104_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1106_ = v___x_1095_;
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1095_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1108_, 0, v_a_1104_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1108_);
v___x_1110_ = v___x_1106_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(lean_object* v_j_1113_, lean_object* v_k_1114_){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = l_Lean_Json_getObjValD(v_j_1113_, v_k_1114_);
v___x_1116_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0_spec__0(v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0___boxed(lean_object* v_j_1117_, lean_object* v_k_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(v_j_1117_, v_k_1118_);
lean_dec_ref(v_k_1118_);
return v_res_1119_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = 1;
v___x_1126_ = ((lean_object*)(l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__1));
v___x_1127_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1126_, v___x_1125_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1129_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__2);
v___x_1130_ = lean_string_append(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1131_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1132_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3);
v___x_1133_ = lean_string_append(v___x_1132_, v___x_1131_);
return v___x_1133_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1135_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__4);
v___x_1136_ = lean_string_append(v___x_1135_, v___x_1134_);
return v___x_1136_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8(void){
_start:
{
uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = 1;
v___x_1141_ = ((lean_object*)(l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__7));
v___x_1142_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1141_, v___x_1140_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__8);
v___x_1144_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__3);
v___x_1145_ = lean_string_append(v___x_1144_, v___x_1143_);
return v___x_1145_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1147_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__9);
v___x_1148_ = lean_string_append(v___x_1147_, v___x_1146_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(lean_object* v_json_1149_){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_1149_);
v___x_1151_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1149_, v___x_1150_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_json_1149_);
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1161_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1161_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1156_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__5);
v___x_1157_ = lean_string_append(v___x_1156_, v_a_1152_);
lean_dec(v_a_1152_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1157_);
v___x_1159_ = v___x_1154_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
else
{
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec(v_json_1149_);
v_a_1162_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1151_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1151_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set_tag(v___x_1164_, 0);
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_a_1170_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1171_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_1172_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson_spec__0(v_json_1149_, v___x_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1182_; 
lean_dec(v_a_1170_);
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1182_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1182_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1177_ = lean_obj_once(&l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10, &l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson___closed__10);
v___x_1178_ = lean_string_append(v___x_1177_, v_a_1173_);
lean_dec(v_a_1173_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1178_);
v___x_1180_ = v___x_1175_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
else
{
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec(v_a_1170_);
v_a_1183_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1172_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1172_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
lean_ctor_set_tag(v___x_1185_, 0);
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1199_; 
v_a_1191_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1193_ = v___x_1172_;
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1172_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v_a_1170_);
lean_ctor_set(v___x_1195_, 1, v_a_1191_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1195_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(size_t v_sz_1202_, size_t v_i_1203_, lean_object* v_bs_1204_){
_start:
{
uint8_t v___x_1205_; 
v___x_1205_ = lean_usize_dec_lt(v_i_1203_, v_sz_1202_);
if (v___x_1205_ == 0)
{
return v_bs_1204_;
}
else
{
lean_object* v_v_1206_; lean_object* v___x_1207_; lean_object* v_bs_x27_1208_; lean_object* v___x_1209_; size_t v___x_1210_; size_t v___x_1211_; lean_object* v___x_1212_; 
v_v_1206_ = lean_array_uget(v_bs_1204_, v_i_1203_);
v___x_1207_ = lean_unsigned_to_nat(0u);
v_bs_x27_1208_ = lean_array_uset(v_bs_1204_, v_i_1203_, v___x_1207_);
v___x_1209_ = l_Lean_Lsp_instToJsonTextEdit_toJson(v_v_1206_);
v___x_1210_ = ((size_t)1ULL);
v___x_1211_ = lean_usize_add(v_i_1203_, v___x_1210_);
v___x_1212_ = lean_array_uset(v_bs_x27_1208_, v_i_1203_, v___x_1209_);
v_i_1203_ = v___x_1211_;
v_bs_1204_ = v___x_1212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1214_, lean_object* v_i_1215_, lean_object* v_bs_1216_){
_start:
{
size_t v_sz_boxed_1217_; size_t v_i_boxed_1218_; lean_object* v_res_1219_; 
v_sz_boxed_1217_ = lean_unbox_usize(v_sz_1214_);
lean_dec(v_sz_1214_);
v_i_boxed_1218_ = lean_unbox_usize(v_i_1215_);
lean_dec(v_i_1215_);
v_res_1219_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(v_sz_boxed_1217_, v_i_boxed_1218_, v_bs_1216_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(lean_object* v_a_1220_){
_start:
{
size_t v_sz_1221_; size_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_sz_1221_ = lean_array_size(v_a_1220_);
v___x_1222_ = ((size_t)0ULL);
v___x_1223_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0_spec__0(v_sz_1221_, v___x_1222_, v_a_1220_);
v___x_1224_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(lean_object* v_x_1227_){
_start:
{
lean_object* v_textDocument_1228_; lean_object* v_edits_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1249_; 
v_textDocument_1228_ = lean_ctor_get(v_x_1227_, 0);
v_edits_1229_ = lean_ctor_get(v_x_1227_, 1);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1231_ = v_x_1227_;
v_isShared_1232_ = v_isSharedCheck_1249_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_edits_1229_);
lean_inc(v_textDocument_1228_);
lean_dec(v_x_1227_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1249_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1233_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
v___x_1234_ = l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson(v_textDocument_1228_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v___x_1234_);
lean_ctor_set(v___x_1231_, 0, v___x_1233_);
v___x_1236_ = v___x_1231_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1237_ = lean_box(0);
v___x_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1));
v___x_1240_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(v_edits_1229_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
lean_ctor_set(v___x_1242_, 1, v___x_1237_);
v___x_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___x_1237_);
v___x_1244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1238_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1246_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1244_, v___x_1245_);
v___x_1247_ = l_Lean_Json_mkObj(v___x_1246_);
lean_dec(v___x_1246_);
return v___x_1247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(lean_object* v_j_1252_, lean_object* v_k_1253_){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = l_Lean_Json_getObjValD(v_j_1252_, v_k_1253_);
v___x_1255_ = l_Lean_Lsp_instFromJsonVersionedTextDocumentIdentifier_fromJson(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0___boxed(lean_object* v_j_1256_, lean_object* v_k_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(v_j_1256_, v_k_1257_);
lean_dec_ref(v_k_1257_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(size_t v_sz_1259_, size_t v_i_1260_, lean_object* v_bs_1261_){
_start:
{
uint8_t v___x_1262_; 
v___x_1262_ = lean_usize_dec_lt(v_i_1260_, v_sz_1259_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1263_, 0, v_bs_1261_);
return v___x_1263_;
}
else
{
lean_object* v_v_1264_; lean_object* v___x_1265_; 
v_v_1264_ = lean_array_uget_borrowed(v_bs_1261_, v_i_1260_);
lean_inc(v_v_1264_);
v___x_1265_ = l_Lean_Lsp_instFromJsonTextEdit_fromJson(v_v_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec_ref(v_bs_1261_);
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1275_; lean_object* v_bs_x27_1276_; size_t v___x_1277_; size_t v___x_1278_; lean_object* v___x_1279_; 
v_a_1274_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1275_ = lean_unsigned_to_nat(0u);
v_bs_x27_1276_ = lean_array_uset(v_bs_1261_, v_i_1260_, v___x_1275_);
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1260_, v___x_1277_);
v___x_1279_ = lean_array_uset(v_bs_x27_1276_, v_i_1260_, v_a_1274_);
v_i_1260_ = v___x_1278_;
v_bs_1261_ = v___x_1279_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_1281_, lean_object* v_i_1282_, lean_object* v_bs_1283_){
_start:
{
size_t v_sz_boxed_1284_; size_t v_i_boxed_1285_; lean_object* v_res_1286_; 
v_sz_boxed_1284_ = lean_unbox_usize(v_sz_1281_);
lean_dec(v_sz_1281_);
v_i_boxed_1285_ = lean_unbox_usize(v_i_1282_);
lean_dec(v_i_1282_);
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_1284_, v_i_boxed_1285_, v_bs_1283_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(lean_object* v_x_1287_){
_start:
{
if (lean_obj_tag(v_x_1287_) == 4)
{
lean_object* v_elems_1288_; size_t v_sz_1289_; size_t v___x_1290_; lean_object* v___x_1291_; 
v_elems_1288_ = lean_ctor_get(v_x_1287_, 0);
lean_inc_ref(v_elems_1288_);
lean_dec_ref_known(v_x_1287_, 1);
v_sz_1289_ = lean_array_size(v_elems_1288_);
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1_spec__2(v_sz_1289_, v___x_1290_, v_elems_1288_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1292_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_1293_ = lean_unsigned_to_nat(80u);
v___x_1294_ = l_Lean_Json_pretty(v_x_1287_, v___x_1293_);
v___x_1295_ = lean_string_append(v___x_1292_, v___x_1294_);
lean_dec_ref(v___x_1294_);
v___x_1296_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_1297_ = lean_string_append(v___x_1295_, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(lean_object* v_j_1299_, lean_object* v_k_1300_){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = l_Lean_Json_getObjValD(v_j_1299_, v_k_1300_);
v___x_1302_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1302_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
v_a_1311_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1302_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1302_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1___boxed(lean_object* v_j_1319_, lean_object* v_k_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(v_j_1319_, v_k_1320_);
lean_dec_ref(v_k_1320_);
return v_res_1321_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1327_ = 1;
v___x_1328_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__1));
v___x_1329_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1328_, v___x_1327_);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1331_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__2);
v___x_1332_ = lean_string_append(v___x_1331_, v___x_1330_);
return v___x_1332_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = 1;
v___x_1336_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__4));
v___x_1337_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1336_, v___x_1335_);
return v___x_1337_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5);
v___x_1339_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3);
v___x_1340_ = lean_string_append(v___x_1339_, v___x_1338_);
return v___x_1340_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1342_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__6);
v___x_1343_ = lean_string_append(v___x_1342_, v___x_1341_);
return v___x_1343_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = 1;
v___x_1347_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__8));
v___x_1348_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1347_, v___x_1346_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1349_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__9);
v___x_1350_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__3);
v___x_1351_ = lean_string_append(v___x_1350_, v___x_1349_);
return v___x_1351_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1353_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__10);
v___x_1354_ = lean_string_append(v___x_1353_, v___x_1352_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(lean_object* v_json_1355_){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
lean_inc(v_json_1355_);
v___x_1357_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__0(v_json_1355_, v___x_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1367_; 
lean_dec(v_json_1355_);
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1360_ = v___x_1357_;
v_isShared_1361_ = v_isSharedCheck_1367_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1357_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1367_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
v___x_1362_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__7);
v___x_1363_ = lean_string_append(v___x_1362_, v_a_1358_);
lean_dec(v_a_1358_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1363_);
v___x_1365_ = v___x_1360_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
else
{
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
lean_dec(v_json_1355_);
v_a_1368_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1357_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1357_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set_tag(v___x_1370_, 0);
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v_a_1376_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1376_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1377_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__1));
v___x_1378_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1(v_json_1355_, v___x_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v_a_1376_);
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1381_ = v___x_1378_;
v_isShared_1382_ = v_isSharedCheck_1388_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1378_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1388_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1383_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__11);
v___x_1384_ = lean_string_append(v___x_1383_, v_a_1379_);
lean_dec(v_a_1379_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 0, v___x_1384_);
v___x_1386_ = v___x_1381_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
else
{
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec(v_a_1376_);
v_a_1389_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1378_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1378_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
lean_ctor_set_tag(v___x_1391_, 0);
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1405_; 
v_a_1397_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1399_ = v___x_1378_;
v_isShared_1400_ = v_isSharedCheck_1405_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1378_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1405_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_a_1376_);
lean_ctor_set(v___x_1401_, 1, v_a_1397_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1401_);
v___x_1403_ = v___x_1399_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonChangeAnnotation_toJson(lean_object* v_x_1411_){
_start:
{
lean_object* v_label_1412_; uint8_t v_needsConfirmation_1413_; lean_object* v_description_x3f_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_label_1412_ = lean_ctor_get(v_x_1411_, 0);
lean_inc_ref(v_label_1412_);
v_needsConfirmation_1413_ = lean_ctor_get_uint8(v_x_1411_, sizeof(void*)*2);
v_description_x3f_1414_ = lean_ctor_get(v_x_1411_, 1);
lean_inc(v_description_x3f_1414_);
lean_dec_ref(v_x_1411_);
v___x_1415_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
v___x_1416_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_label_1412_);
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1415_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1));
v___x_1421_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1421_, 0, v_needsConfirmation_1413_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v___x_1418_);
v___x_1424_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2));
v___x_1425_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1424_, v_description_x3f_1414_);
v___x_1426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set(v___x_1426_, 1, v___x_1418_);
v___x_1427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1423_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v___x_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1419_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1430_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1428_, v___x_1429_);
v___x_1431_ = l_Lean_Json_mkObj(v___x_1430_);
lean_dec(v___x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(lean_object* v_j_1434_, lean_object* v_k_1435_){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = l_Lean_Json_getObjValD(v_j_1434_, v_k_1435_);
v___x_1437_ = l_Lean_Json_getBool_x3f(v___x_1436_);
lean_dec(v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0___boxed(lean_object* v_j_1438_, lean_object* v_k_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_j_1438_, v_k_1439_);
lean_dec_ref(v_k_1439_);
return v_res_1440_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1446_ = 1;
v___x_1447_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__1));
v___x_1448_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1447_, v___x_1446_);
return v___x_1448_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1450_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__2);
v___x_1451_ = lean_string_append(v___x_1450_, v___x_1449_);
return v___x_1451_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = 1;
v___x_1455_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__4));
v___x_1456_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1455_, v___x_1454_);
return v___x_1456_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1457_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__5);
v___x_1458_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1459_ = lean_string_append(v___x_1458_, v___x_1457_);
return v___x_1459_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1460_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1461_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__6);
v___x_1462_ = lean_string_append(v___x_1461_, v___x_1460_);
return v___x_1462_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = 1;
v___x_1466_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__8));
v___x_1467_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1466_, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__9);
v___x_1469_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1470_ = lean_string_append(v___x_1469_, v___x_1468_);
return v___x_1470_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1472_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__10);
v___x_1473_ = lean_string_append(v___x_1472_, v___x_1471_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14(void){
_start:
{
uint8_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = 1;
v___x_1478_ = ((lean_object*)(l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__13));
v___x_1479_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1478_, v___x_1477_);
return v___x_1479_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__14);
v___x_1481_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__3);
v___x_1482_ = lean_string_append(v___x_1481_, v___x_1480_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1483_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1484_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__15);
v___x_1485_ = lean_string_append(v___x_1484_, v___x_1483_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(lean_object* v_json_1486_){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
lean_inc(v_json_1486_);
v___x_1488_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1486_, v___x_1487_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v_json_1486_);
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1493_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__7);
v___x_1494_ = lean_string_append(v___x_1493_, v_a_1489_);
lean_dec(v_a_1489_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1494_);
v___x_1496_ = v___x_1491_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
else
{
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_json_1486_);
v_a_1499_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1488_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1488_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set_tag(v___x_1501_, 0);
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_a_1507_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1508_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__1));
lean_inc(v_json_1486_);
v___x_1509_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1486_, v___x_1508_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1519_; 
lean_dec(v_a_1507_);
lean_dec(v_json_1486_);
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1514_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__11);
v___x_1515_ = lean_string_append(v___x_1514_, v_a_1510_);
lean_dec(v_a_1510_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1515_);
v___x_1517_ = v___x_1512_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v_a_1507_);
lean_dec(v_json_1486_);
v_a_1520_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1509_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1509_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set_tag(v___x_1522_, 0);
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_a_1528_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1529_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__2));
v___x_1530_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_1486_, v___x_1529_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_a_1528_);
lean_dec(v_a_1507_);
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1533_ = v___x_1530_;
v_isShared_1534_ = v_isSharedCheck_1540_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1540_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1535_ = lean_obj_once(&l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16, &l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson___closed__16);
v___x_1536_ = lean_string_append(v___x_1535_, v_a_1531_);
lean_dec(v_a_1531_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 0, v___x_1536_);
v___x_1538_ = v___x_1533_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
else
{
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec(v_a_1528_);
lean_dec(v_a_1507_);
v_a_1541_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1530_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1530_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
lean_ctor_set_tag(v___x_1543_, 0);
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1558_; 
v_a_1549_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1551_ = v___x_1530_;
v_isShared_1552_ = v_isSharedCheck_1558_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1530_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1558_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1556_; 
v___x_1553_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1553_, 0, v_a_1507_);
lean_ctor_set(v___x_1553_, 1, v_a_1549_);
v___x_1554_ = lean_unbox(v_a_1528_);
lean_dec(v_a_1528_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*2, v___x_1554_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 0, v___x_1553_);
v___x_1556_ = v___x_1551_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1553_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(lean_object* v_x_1563_){
_start:
{
uint8_t v_overwrite_1564_; uint8_t v_ignoreIfExists_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_overwrite_1564_ = lean_ctor_get_uint8(v_x_1563_, 0);
v_ignoreIfExists_1565_ = lean_ctor_get_uint8(v_x_1563_, 1);
v___x_1566_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0));
v___x_1567_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1567_, 0, v_overwrite_1564_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = lean_box(0);
v___x_1570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1));
v___x_1572_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1572_, 0, v_ignoreIfExists_1565_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___x_1569_);
v___x_1575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
lean_ctor_set(v___x_1575_, 1, v___x_1569_);
v___x_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1570_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1578_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1576_, v___x_1577_);
v___x_1579_ = l_Lean_Json_mkObj(v___x_1578_);
lean_dec(v___x_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___boxed(lean_object* v_x_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(v_x_1580_);
lean_dec_ref(v_x_1580_);
return v_res_1581_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3(void){
_start:
{
uint8_t v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = 1;
v___x_1592_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__2));
v___x_1593_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1592_, v___x_1591_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1595_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__3);
v___x_1596_ = lean_string_append(v___x_1595_, v___x_1594_);
return v___x_1596_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1599_ = 1;
v___x_1600_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__5));
v___x_1601_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1600_, v___x_1599_);
return v___x_1601_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__6);
v___x_1603_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4);
v___x_1604_ = lean_string_append(v___x_1603_, v___x_1602_);
return v___x_1604_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1606_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__7);
v___x_1607_ = lean_string_append(v___x_1606_, v___x_1605_);
return v___x_1607_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10(void){
_start:
{
uint8_t v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = 1;
v___x_1611_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__9));
v___x_1612_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1611_, v___x_1610_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1613_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__10);
v___x_1614_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__4);
v___x_1615_ = lean_string_append(v___x_1614_, v___x_1613_);
return v___x_1615_;
}
}
static lean_object* _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1616_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1617_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__11);
v___x_1618_ = lean_string_append(v___x_1617_, v___x_1616_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(lean_object* v_json_1619_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__0));
lean_inc(v_json_1619_);
v___x_1621_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1619_, v___x_1620_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_json_1619_);
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1624_ = v___x_1621_;
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1621_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1629_; 
v___x_1626_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__8);
v___x_1627_ = lean_string_append(v___x_1626_, v_a_1622_);
lean_dec(v_a_1622_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v___x_1627_);
v___x_1629_ = v___x_1624_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
else
{
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec(v_json_1619_);
v_a_1632_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1621_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1621_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
lean_ctor_set_tag(v___x_1634_, 0);
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_a_1640_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1641_ = ((lean_object*)(l_Lean_Lsp_CreateFile_instToJsonOptions_toJson___closed__1));
v___x_1642_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1619_, v___x_1641_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_a_1640_);
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1652_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1652_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1650_; 
v___x_1647_ = lean_obj_once(&l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12, &l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12_once, _init_l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson___closed__12);
v___x_1648_ = lean_string_append(v___x_1647_, v_a_1643_);
lean_dec(v_a_1643_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1648_);
v___x_1650_ = v___x_1645_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
else
{
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1640_);
v_a_1653_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1642_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1642_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
lean_ctor_set_tag(v___x_1655_, 0);
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1671_; 
v_a_1661_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1663_ = v___x_1642_;
v_isShared_1664_ = v_isSharedCheck_1671_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1642_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1671_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1665_; uint8_t v___x_1666_; uint8_t v___x_1667_; lean_object* v___x_1669_; 
v___x_1665_ = lean_alloc_ctor(0, 0, 2);
v___x_1666_ = lean_unbox(v_a_1640_);
lean_dec(v_a_1640_);
lean_ctor_set_uint8(v___x_1665_, 0, v___x_1666_);
v___x_1667_ = lean_unbox(v_a_1661_);
lean_dec(v_a_1661_);
lean_ctor_set_uint8(v___x_1665_, 1, v___x_1667_);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v___x_1665_);
v___x_1669_ = v___x_1663_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1665_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(lean_object* v_x_1676_){
_start:
{
uint8_t v_recursive_1677_; uint8_t v_ignoreIfNotExists_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v_recursive_1677_ = lean_ctor_get_uint8(v_x_1676_, 0);
v_ignoreIfNotExists_1678_ = lean_ctor_get_uint8(v_x_1676_, 1);
v___x_1679_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0));
v___x_1680_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1680_, 0, v_recursive_1677_);
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = lean_box(0);
v___x_1683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1));
v___x_1685_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1685_, 0, v_ignoreIfNotExists_1678_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
lean_ctor_set(v___x_1687_, 1, v___x_1682_);
v___x_1688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v___x_1682_);
v___x_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1683_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1691_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1689_, v___x_1690_);
v___x_1692_ = l_Lean_Json_mkObj(v___x_1691_);
lean_dec(v___x_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___boxed(lean_object* v_x_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(v_x_1693_);
lean_dec_ref(v_x_1693_);
return v_res_1694_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = 1;
v___x_1704_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__1));
v___x_1705_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1704_, v___x_1703_);
return v___x_1705_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1706_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1707_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__2);
v___x_1708_ = lean_string_append(v___x_1707_, v___x_1706_);
return v___x_1708_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = 1;
v___x_1712_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__4));
v___x_1713_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1712_, v___x_1711_);
return v___x_1713_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__5);
v___x_1715_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3);
v___x_1716_ = lean_string_append(v___x_1715_, v___x_1714_);
return v___x_1716_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1717_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1718_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__6);
v___x_1719_ = lean_string_append(v___x_1718_, v___x_1717_);
return v___x_1719_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1722_ = 1;
v___x_1723_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__8));
v___x_1724_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1723_, v___x_1722_);
return v___x_1724_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__9);
v___x_1726_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__3);
v___x_1727_ = lean_string_append(v___x_1726_, v___x_1725_);
return v___x_1727_;
}
}
static lean_object* _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1728_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1729_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__10);
v___x_1730_ = lean_string_append(v___x_1729_, v___x_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(lean_object* v_json_1731_){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__0));
lean_inc(v_json_1731_);
v___x_1733_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1731_, v___x_1732_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_json_1731_);
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1743_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1743_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1738_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__7);
v___x_1739_ = lean_string_append(v___x_1738_, v_a_1734_);
lean_dec(v_a_1734_);
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 0, v___x_1739_);
v___x_1741_ = v___x_1736_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
lean_dec(v_json_1731_);
v_a_1744_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1733_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1733_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 0);
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_a_1752_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1733_, 1);
v___x_1753_ = ((lean_object*)(l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson___closed__1));
v___x_1754_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_1731_, v___x_1753_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1764_; 
lean_dec(v_a_1752_);
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1757_ = v___x_1754_;
v_isShared_1758_ = v_isSharedCheck_1764_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1754_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1764_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; 
v___x_1759_ = lean_obj_once(&l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11, &l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11_once, _init_l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson___closed__11);
v___x_1760_ = lean_string_append(v___x_1759_, v_a_1755_);
lean_dec(v_a_1755_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 0, v___x_1760_);
v___x_1762_ = v___x_1757_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
else
{
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec(v_a_1752_);
v_a_1765_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1754_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1754_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 0);
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1783_; 
v_a_1773_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1775_ = v___x_1754_;
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1754_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1777_; uint8_t v___x_1778_; uint8_t v___x_1779_; lean_object* v___x_1781_; 
v___x_1777_ = lean_alloc_ctor(0, 0, 2);
v___x_1778_ = lean_unbox(v_a_1752_);
lean_dec(v_a_1752_);
lean_ctor_set_uint8(v___x_1777_, 0, v___x_1778_);
v___x_1779_ = lean_unbox(v_a_1773_);
lean_dec(v_a_1773_);
lean_ctor_set_uint8(v___x_1777_, 1, v___x_1779_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 0, v___x_1777_);
v___x_1781_ = v___x_1775_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1777_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(lean_object* v_k_1786_, lean_object* v_x_1787_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_object* v___x_1788_; 
lean_dec_ref(v_k_1786_);
v___x_1788_ = lean_box(0);
return v___x_1788_;
}
else
{
lean_object* v_val_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_val_1789_ = lean_ctor_get(v_x_1787_, 0);
v___x_1790_ = l_Lean_Lsp_CreateFile_instToJsonOptions_toJson(v_val_1789_);
v___x_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1791_, 0, v_k_1786_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
v___x_1792_ = lean_box(0);
v___x_1793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1791_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
return v___x_1793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0___boxed(lean_object* v_k_1794_, lean_object* v_x_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v_k_1794_, v_x_1795_);
lean_dec(v_x_1795_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCreateFile_toJson(lean_object* v_x_1798_){
_start:
{
lean_object* v_uri_1799_; lean_object* v_options_x3f_1800_; lean_object* v_annotationId_x3f_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v_uri_1799_ = lean_ctor_get(v_x_1798_, 0);
lean_inc_ref(v_uri_1799_);
v_options_x3f_1800_ = lean_ctor_get(v_x_1798_, 1);
lean_inc(v_options_x3f_1800_);
v_annotationId_x3f_1801_ = lean_ctor_get(v_x_1798_, 2);
lean_inc(v_annotationId_x3f_1801_);
lean_dec_ref(v_x_1798_);
v___x_1802_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_1803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1803_, 0, v_uri_1799_);
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1802_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
v___x_1805_ = lean_box(0);
v___x_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1804_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_1808_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v___x_1807_, v_options_x3f_1800_);
lean_dec(v_options_x3f_1800_);
v___x_1809_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1810_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1809_, v_annotationId_x3f_1801_);
v___x_1811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
lean_ctor_set(v___x_1811_, 1, v___x_1805_);
v___x_1812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1808_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1806_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1815_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1813_, v___x_1814_);
v___x_1816_ = l_Lean_Json_mkObj(v___x_1815_);
lean_dec(v___x_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1821_) == 0)
{
lean_object* v___x_1822_; 
v___x_1822_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0___closed__0));
return v___x_1822_;
}
else
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_Lsp_CreateFile_instFromJsonOptions_fromJson(v_x_1821_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1831_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1827_ == 0)
{
v___x_1829_ = v___x_1826_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_a_1824_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1840_; 
v_a_1832_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1834_ = v___x_1823_;
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1823_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1836_, 0, v_a_1832_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1836_);
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(lean_object* v_j_1841_, lean_object* v_k_1842_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = l_Lean_Json_getObjValD(v_j_1841_, v_k_1842_);
v___x_1844_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0_spec__0(v___x_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0___boxed(lean_object* v_j_1845_, lean_object* v_k_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_j_1845_, v_k_1846_);
lean_dec_ref(v_k_1846_);
return v_res_1847_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1(void){
_start:
{
uint8_t v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1852_ = 1;
v___x_1853_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__0));
v___x_1854_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1853_, v___x_1852_);
return v___x_1854_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2(void){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1855_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1856_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__1);
v___x_1857_ = lean_string_append(v___x_1856_, v___x_1855_);
return v___x_1857_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1858_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_1859_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1860_ = lean_string_append(v___x_1859_, v___x_1858_);
return v___x_1860_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4(void){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1861_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1862_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__3);
v___x_1863_ = lean_string_append(v___x_1862_, v___x_1861_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7(void){
_start:
{
uint8_t v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = 1;
v___x_1868_ = ((lean_object*)(l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__6));
v___x_1869_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1868_, v___x_1867_);
return v___x_1869_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_1871_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1872_ = lean_string_append(v___x_1871_, v___x_1870_);
return v___x_1872_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1873_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1874_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__8);
v___x_1875_ = lean_string_append(v___x_1874_, v___x_1873_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_1877_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__2);
v___x_1878_ = lean_string_append(v___x_1877_, v___x_1876_);
return v___x_1878_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_1880_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__10);
v___x_1881_ = lean_string_append(v___x_1880_, v___x_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCreateFile_fromJson(lean_object* v_json_1882_){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_1882_);
v___x_1884_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_1882_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1894_; 
lean_dec(v_json_1882_);
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1894_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1894_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1889_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__4);
v___x_1890_ = lean_string_append(v___x_1889_, v_a_1885_);
lean_dec(v_a_1885_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1890_);
v___x_1892_ = v___x_1887_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
else
{
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v_json_1882_);
v_a_1895_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1884_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1884_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set_tag(v___x_1897_, 0);
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v_a_1903_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1904_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_1882_);
v___x_1905_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_json_1882_, v___x_1904_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_a_1903_);
lean_dec(v_json_1882_);
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1915_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1915_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1910_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__9);
v___x_1911_ = lean_string_append(v___x_1910_, v_a_1906_);
lean_dec(v_a_1906_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 0, v___x_1911_);
v___x_1913_ = v___x_1908_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
else
{
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec(v_a_1903_);
lean_dec(v_json_1882_);
v_a_1916_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1905_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1905_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
lean_ctor_set_tag(v___x_1918_, 0);
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v_a_1924_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1925_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1926_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_1882_, v___x_1925_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1936_; 
lean_dec(v_a_1924_);
lean_dec(v_a_1903_);
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
v___x_1931_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__11);
v___x_1932_ = lean_string_append(v___x_1931_, v_a_1927_);
lean_dec(v_a_1927_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 0, v___x_1932_);
v___x_1934_ = v___x_1929_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
else
{
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_a_1924_);
lean_dec(v_a_1903_);
v_a_1937_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1926_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1926_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
lean_ctor_set_tag(v___x_1939_, 0);
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1953_; 
v_a_1945_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1947_ = v___x_1926_;
v_isShared_1948_ = v_isSharedCheck_1953_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1926_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1953_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1949_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1949_, 0, v_a_1903_);
lean_ctor_set(v___x_1949_, 1, v_a_1924_);
lean_ctor_set(v___x_1949_, 2, v_a_1945_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1949_);
v___x_1951_ = v___x_1947_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRenameFile_toJson(lean_object* v_x_1958_){
_start:
{
lean_object* v_oldUri_1959_; lean_object* v_newUri_1960_; lean_object* v_options_x3f_1961_; lean_object* v_annotationId_x3f_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v_oldUri_1959_ = lean_ctor_get(v_x_1958_, 0);
lean_inc_ref(v_oldUri_1959_);
v_newUri_1960_ = lean_ctor_get(v_x_1958_, 1);
lean_inc_ref(v_newUri_1960_);
v_options_x3f_1961_ = lean_ctor_get(v_x_1958_, 2);
lean_inc(v_options_x3f_1961_);
v_annotationId_x3f_1962_ = lean_ctor_get(v_x_1958_, 3);
lean_inc(v_annotationId_x3f_1962_);
lean_dec_ref(v_x_1958_);
v___x_1963_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0));
v___x_1964_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1964_, 0, v_oldUri_1959_);
v___x_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1963_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
v___x_1966_ = lean_box(0);
v___x_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1965_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1));
v___x_1969_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1969_, 0, v_newUri_1960_);
v___x_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
lean_ctor_set(v___x_1971_, 1, v___x_1966_);
v___x_1972_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_1973_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonCreateFile_toJson_spec__0(v___x_1972_, v_options_x3f_1961_);
lean_dec(v_options_x3f_1961_);
v___x_1974_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_1975_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_1974_, v_annotationId_x3f_1962_);
v___x_1976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
lean_ctor_set(v___x_1976_, 1, v___x_1966_);
v___x_1977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1973_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
v___x_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1971_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1967_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_1981_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_1979_, v___x_1980_);
v___x_1982_ = l_Lean_Json_mkObj(v___x_1981_);
lean_dec(v___x_1981_);
return v___x_1982_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2(void){
_start:
{
uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1990_ = 1;
v___x_1991_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__1));
v___x_1992_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1991_, v___x_1990_);
return v___x_1992_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1993_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_1994_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__2);
v___x_1995_ = lean_string_append(v___x_1994_, v___x_1993_);
return v___x_1995_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = 1;
v___x_1999_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__4));
v___x_2000_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1999_, v___x_1998_);
return v___x_2000_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2001_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__5);
v___x_2002_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2003_ = lean_string_append(v___x_2002_, v___x_2001_);
return v___x_2003_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2004_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2005_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__6);
v___x_2006_ = lean_string_append(v___x_2005_, v___x_2004_);
return v___x_2006_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9(void){
_start:
{
uint8_t v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2009_ = 1;
v___x_2010_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__8));
v___x_2011_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2010_, v___x_2009_);
return v___x_2011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__9);
v___x_2013_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2014_ = lean_string_append(v___x_2013_, v___x_2012_);
return v___x_2014_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2016_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__10);
v___x_2017_ = lean_string_append(v___x_2016_, v___x_2015_);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2018_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_2019_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2020_ = lean_string_append(v___x_2019_, v___x_2018_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2022_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__12);
v___x_2023_ = lean_string_append(v___x_2022_, v___x_2021_);
return v___x_2023_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2024_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_2025_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__3);
v___x_2026_ = lean_string_append(v___x_2025_, v___x_2024_);
return v___x_2026_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2027_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2028_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__14);
v___x_2029_ = lean_string_append(v___x_2028_, v___x_2027_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRenameFile_fromJson(lean_object* v_json_2030_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__0));
lean_inc(v_json_2030_);
v___x_2032_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2030_, v___x_2031_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v_json_2030_);
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2035_ = v___x_2032_;
v_isShared_2036_ = v_isSharedCheck_2042_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2032_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2042_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2037_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__7);
v___x_2038_ = lean_string_append(v___x_2037_, v_a_2033_);
lean_dec(v_a_2033_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2038_);
v___x_2040_ = v___x_2035_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
else
{
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec(v_json_2030_);
v_a_2043_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2032_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2032_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set_tag(v___x_2045_, 0);
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v_a_2051_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2032_, 1);
v___x_2052_ = ((lean_object*)(l_Lean_Lsp_instToJsonRenameFile_toJson___closed__1));
lean_inc(v_json_2030_);
v___x_2053_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2030_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2063_; 
lean_dec(v_a_2051_);
lean_dec(v_json_2030_);
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2058_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__11);
v___x_2059_ = lean_string_append(v___x_2058_, v_a_2054_);
lean_dec(v_a_2054_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v___x_2059_);
v___x_2061_ = v___x_2056_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
else
{
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
lean_dec(v_a_2051_);
lean_dec(v_json_2030_);
v_a_2064_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2053_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2053_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set_tag(v___x_2066_, 0);
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v_a_2072_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2073_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_2030_);
v___x_2074_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCreateFile_fromJson_spec__0(v_json_2030_, v___x_2073_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2084_; 
lean_dec(v_a_2072_);
lean_dec(v_a_2051_);
lean_dec(v_json_2030_);
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2077_ = v___x_2074_;
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2074_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2084_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
v___x_2079_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__13);
v___x_2080_ = lean_string_append(v___x_2079_, v_a_2075_);
lean_dec(v_a_2075_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2080_);
v___x_2082_ = v___x_2077_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2080_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
else
{
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v_a_2072_);
lean_dec(v_a_2051_);
lean_dec(v_json_2030_);
v_a_2085_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2074_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2074_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set_tag(v___x_2087_, 0);
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_a_2093_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2094_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2095_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_2030_, v___x_2094_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2105_; 
lean_dec(v_a_2093_);
lean_dec(v_a_2072_);
lean_dec(v_a_2051_);
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2098_ = v___x_2095_;
v_isShared_2099_ = v_isSharedCheck_2105_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2095_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2105_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2103_; 
v___x_2100_ = lean_obj_once(&l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15, &l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonRenameFile_fromJson___closed__15);
v___x_2101_ = lean_string_append(v___x_2100_, v_a_2096_);
lean_dec(v_a_2096_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2101_);
v___x_2103_ = v___x_2098_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2101_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
else
{
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_a_2093_);
lean_dec(v_a_2072_);
lean_dec(v_a_2051_);
v_a_2106_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2095_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2095_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
lean_ctor_set_tag(v___x_2108_, 0);
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2122_; 
v_a_2114_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2116_ = v___x_2095_;
v_isShared_2117_ = v_isSharedCheck_2122_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2095_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2122_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2120_; 
v___x_2118_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2118_, 0, v_a_2051_);
lean_ctor_set(v___x_2118_, 1, v_a_2072_);
lean_ctor_set(v___x_2118_, 2, v_a_2093_);
lean_ctor_set(v___x_2118_, 3, v_a_2114_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2118_);
v___x_2120_ = v___x_2116_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v___x_2118_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(lean_object* v_k_2125_, lean_object* v_x_2126_){
_start:
{
if (lean_obj_tag(v_x_2126_) == 0)
{
lean_object* v___x_2127_; 
lean_dec_ref(v_k_2125_);
v___x_2127_ = lean_box(0);
return v___x_2127_;
}
else
{
lean_object* v_val_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_val_2128_ = lean_ctor_get(v_x_2126_, 0);
v___x_2129_ = l_Lean_Lsp_DeleteFile_instToJsonOptions_toJson(v_val_2128_);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v_k_2125_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_box(0);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
return v___x_2132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0___boxed(lean_object* v_k_2133_, lean_object* v_x_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(v_k_2133_, v_x_2134_);
lean_dec(v_x_2134_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeleteFile_toJson(lean_object* v_x_2136_){
_start:
{
lean_object* v_uri_2137_; lean_object* v_options_x3f_2138_; lean_object* v_annotationId_x3f_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v_uri_2137_ = lean_ctor_get(v_x_2136_, 0);
lean_inc_ref(v_uri_2137_);
v_options_x3f_2138_ = lean_ctor_get(v_x_2136_, 1);
lean_inc(v_options_x3f_2138_);
v_annotationId_x3f_2139_ = lean_ctor_get(v_x_2136_, 2);
lean_inc(v_annotationId_x3f_2139_);
lean_dec_ref(v_x_2136_);
v___x_2140_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_2141_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2141_, 0, v_uri_2137_);
v___x_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = lean_box(0);
v___x_2144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
v___x_2146_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonDeleteFile_toJson_spec__0(v___x_2145_, v_options_x3f_2138_);
lean_dec(v_options_x3f_2138_);
v___x_2147_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2148_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_2147_, v_annotationId_x3f_2139_);
v___x_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
lean_ctor_set(v___x_2149_, 1, v___x_2143_);
v___x_2150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2150_, 0, v___x_2146_);
lean_ctor_set(v___x_2150_, 1, v___x_2149_);
v___x_2151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2144_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_2153_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_2151_, v___x_2152_);
v___x_2154_ = l_Lean_Json_mkObj(v___x_2153_);
lean_dec(v___x_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(lean_object* v_x_2159_){
_start:
{
if (lean_obj_tag(v_x_2159_) == 0)
{
lean_object* v___x_2160_; 
v___x_2160_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0___closed__0));
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Lean_Lsp_DeleteFile_instFromJsonOptions_fromJson(v_x_2159_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2178_; 
v_a_2170_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2172_ = v___x_2161_;
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2161_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2178_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2174_; lean_object* v___x_2176_; 
v___x_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_a_2170_);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v___x_2174_);
v___x_2176_ = v___x_2172_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(lean_object* v_j_2179_, lean_object* v_k_2180_){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = l_Lean_Json_getObjValD(v_j_2179_, v_k_2180_);
v___x_2182_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0_spec__0(v___x_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0___boxed(lean_object* v_j_2183_, lean_object* v_k_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(v_j_2183_, v_k_2184_);
lean_dec_ref(v_k_2184_);
return v_res_2185_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1(void){
_start:
{
uint8_t v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = 1;
v___x_2191_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__0));
v___x_2192_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_2194_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__1);
v___x_2195_ = lean_string_append(v___x_2194_, v___x_2193_);
return v___x_2195_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2196_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_2197_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2198_ = lean_string_append(v___x_2197_, v___x_2196_);
return v___x_2198_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4(void){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2199_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2200_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__3);
v___x_2201_ = lean_string_append(v___x_2200_, v___x_2199_);
return v___x_2201_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_obj_once(&l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonCreateFile_fromJson___closed__7);
v___x_2203_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2204_ = lean_string_append(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2206_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__5);
v___x_2207_ = lean_string_append(v___x_2206_, v___x_2205_);
return v___x_2207_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextEdit_fromJson___closed__17);
v___x_2209_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__2);
v___x_2210_ = lean_string_append(v___x_2209_, v___x_2208_);
return v___x_2210_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_2212_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__7);
v___x_2213_ = lean_string_append(v___x_2212_, v___x_2211_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeleteFile_fromJson(lean_object* v_json_2214_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_2214_);
v___x_2216_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_2214_, v___x_2215_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2226_; 
lean_dec(v_json_2214_);
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2226_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2226_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2221_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__4);
v___x_2222_ = lean_string_append(v___x_2221_, v_a_2217_);
lean_dec(v_a_2217_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2222_);
v___x_2224_ = v___x_2219_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___x_2222_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
else
{
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec(v_json_2214_);
v_a_2227_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2216_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2216_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
lean_ctor_set_tag(v___x_2229_, 0);
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_a_2235_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2236_ = ((lean_object*)(l_Lean_Lsp_instToJsonCreateFile_toJson___closed__0));
lean_inc(v_json_2214_);
v___x_2237_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonDeleteFile_fromJson_spec__0(v_json_2214_, v___x_2236_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_a_2235_);
lean_dec(v_json_2214_);
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2240_ = v___x_2237_;
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2237_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2242_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__6);
v___x_2243_ = lean_string_append(v___x_2242_, v_a_2238_);
lean_dec(v_a_2238_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 0, v___x_2243_);
v___x_2245_ = v___x_2240_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2243_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
else
{
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_dec(v_a_2235_);
lean_dec(v_json_2214_);
v_a_2248_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2237_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2237_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
lean_ctor_set_tag(v___x_2250_, 0);
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v_a_2256_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_a_2256_);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2257_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextEdit_toJson___closed__2));
v___x_2258_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_2214_, v___x_2257_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2268_; 
lean_dec(v_a_2256_);
lean_dec(v_a_2235_);
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2268_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2268_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2266_; 
v___x_2263_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDeleteFile_fromJson___closed__8);
v___x_2264_ = lean_string_append(v___x_2263_, v_a_2259_);
lean_dec(v_a_2259_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2264_);
v___x_2266_ = v___x_2261_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
else
{
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
lean_dec(v_a_2256_);
lean_dec(v_a_2235_);
v_a_2269_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2258_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2258_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
lean_ctor_set_tag(v___x_2271_, 0);
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2285_; 
v_a_2277_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2279_ = v___x_2258_;
v_isShared_2280_ = v_isSharedCheck_2285_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2258_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2285_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2281_; lean_object* v___x_2283_; 
v___x_2281_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2281_, 0, v_a_2235_);
lean_ctor_set(v___x_2281_, 1, v_a_2256_);
lean_ctor_set(v___x_2281_, 2, v_a_2277_);
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v___x_2281_);
v___x_2283_ = v___x_2279_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx(lean_object* v_x_2288_){
_start:
{
switch(lean_obj_tag(v_x_2288_))
{
case 0:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_unsigned_to_nat(0u);
return v___x_2289_;
}
case 1:
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_unsigned_to_nat(1u);
return v___x_2290_;
}
case 2:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_unsigned_to_nat(2u);
return v___x_2291_;
}
default: 
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_unsigned_to_nat(3u);
return v___x_2292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorIdx___boxed(lean_object* v_x_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_Lsp_DocumentChange_ctorIdx(v_x_2293_);
lean_dec_ref(v_x_2293_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___redArg(lean_object* v_t_2295_, lean_object* v_k_2296_){
_start:
{
lean_object* v_a_2297_; lean_object* v___x_2298_; 
v_a_2297_ = lean_ctor_get(v_t_2295_, 0);
lean_inc_ref(v_a_2297_);
lean_dec_ref(v_t_2295_);
v___x_2298_ = lean_apply_1(v_k_2296_, v_a_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim(lean_object* v_motive_2299_, lean_object* v_ctorIdx_2300_, lean_object* v_t_2301_, lean_object* v_h_2302_, lean_object* v_k_2303_){
_start:
{
lean_object* v___x_2304_; 
v___x_2304_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2301_, v_k_2303_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_ctorElim___boxed(lean_object* v_motive_2305_, lean_object* v_ctorIdx_2306_, lean_object* v_t_2307_, lean_object* v_h_2308_, lean_object* v_k_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lean_Lsp_DocumentChange_ctorElim(v_motive_2305_, v_ctorIdx_2306_, v_t_2307_, v_h_2308_, v_k_2309_);
lean_dec(v_ctorIdx_2306_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim___redArg(lean_object* v_t_2311_, lean_object* v_create_2312_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2311_, v_create_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_create_elim(lean_object* v_motive_2314_, lean_object* v_t_2315_, lean_object* v_h_2316_, lean_object* v_create_2317_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2315_, v_create_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim___redArg(lean_object* v_t_2319_, lean_object* v_rename_2320_){
_start:
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2319_, v_rename_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_rename_elim(lean_object* v_motive_2322_, lean_object* v_t_2323_, lean_object* v_h_2324_, lean_object* v_rename_2325_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2323_, v_rename_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim___redArg(lean_object* v_t_2327_, lean_object* v_delete_2328_){
_start:
{
lean_object* v___x_2329_; 
v___x_2329_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2327_, v_delete_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_delete_elim(lean_object* v_motive_2330_, lean_object* v_t_2331_, lean_object* v_h_2332_, lean_object* v_delete_2333_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2331_, v_delete_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim___redArg(lean_object* v_t_2335_, lean_object* v_edit_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2335_, v_edit_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DocumentChange_edit_elim(lean_object* v_motive_2338_, lean_object* v_t_2339_, lean_object* v_h_2340_, lean_object* v_edit_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_Lsp_DocumentChange_ctorElim___redArg(v_t_2339_, v_edit_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentChange___lam__0(lean_object* v_x_2353_){
_start:
{
switch(lean_obj_tag(v_x_2353_))
{
case 0:
{
lean_object* v_a_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v_a_2354_ = lean_ctor_get(v_x_2353_, 0);
lean_inc_ref(v_a_2354_);
lean_dec_ref_known(v_x_2353_, 1);
v___x_2355_ = l_Lean_Lsp_instToJsonCreateFile_toJson(v_a_2354_);
v___x_2356_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2357_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2));
v___x_2358_ = l_Lean_Json_setObjVal_x21(v___x_2355_, v___x_2356_, v___x_2357_);
return v___x_2358_;
}
case 1:
{
lean_object* v_a_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v_a_2359_ = lean_ctor_get(v_x_2353_, 0);
lean_inc_ref(v_a_2359_);
lean_dec_ref_known(v_x_2353_, 1);
v___x_2360_ = l_Lean_Lsp_instToJsonRenameFile_toJson(v_a_2359_);
v___x_2361_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2362_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4));
v___x_2363_ = l_Lean_Json_setObjVal_x21(v___x_2360_, v___x_2361_, v___x_2362_);
return v___x_2363_;
}
case 2:
{
lean_object* v_a_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v_a_2364_ = lean_ctor_get(v_x_2353_, 0);
lean_inc_ref(v_a_2364_);
lean_dec_ref_known(v_x_2353_, 1);
v___x_2365_ = l_Lean_Lsp_instToJsonDeleteFile_toJson(v_a_2364_);
v___x_2366_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2367_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6));
v___x_2368_ = l_Lean_Json_setObjVal_x21(v___x_2365_, v___x_2366_, v___x_2367_);
return v___x_2368_;
}
default: 
{
lean_object* v_a_2369_; lean_object* v___x_2370_; 
v_a_2369_ = lean_ctor_get(v_x_2353_, 0);
lean_inc_ref(v_a_2369_);
lean_dec_ref_known(v_x_2353_, 1);
v___x_2370_ = l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(v_a_2369_);
return v___x_2370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__0(lean_object* v_kind_2374_){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2375_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0));
v___x_2376_ = lean_unsigned_to_nat(80u);
v___x_2377_ = l_Lean_Json_pretty(v_kind_2374_, v___x_2376_);
v___x_2378_ = lean_string_append(v___x_2375_, v___x_2377_);
lean_dec_ref(v___x_2377_);
v___x_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentChange___lam__1(lean_object* v___f_2380_, lean_object* v_j_2381_){
_start:
{
lean_object* v___y_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v_j_2381_);
v___x_2404_ = l_Lean_Json_getObjVal_x3f(v_j_2381_, v___x_2403_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_dec_ref_known(v___x_2404_, 1);
lean_dec_ref(v___f_2380_);
goto v___jp_2382_;
}
else
{
lean_object* v_a_2405_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
if (lean_obj_tag(v_a_2405_) == 3)
{
lean_object* v_s_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_s_2406_ = lean_ctor_get(v_a_2405_, 0);
v___x_2407_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1));
v___x_2408_ = lean_string_dec_eq(v_s_2406_, v___x_2407_);
if (v___x_2408_ == 0)
{
lean_object* v___x_2409_; uint8_t v___x_2410_; 
v___x_2409_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3));
v___x_2410_ = lean_string_dec_eq(v_s_2406_, v___x_2409_);
if (v___x_2410_ == 0)
{
lean_object* v___x_2411_; uint8_t v___x_2412_; 
v___x_2411_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5));
v___x_2412_ = lean_string_dec_eq(v_s_2406_, v___x_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_apply_1(v___f_2380_, v_a_2405_);
v___y_2402_ = v___x_2413_;
goto v___jp_2401_;
}
else
{
lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2429_; 
lean_dec_ref(v___f_2380_);
v_isSharedCheck_2429_ = !lean_is_exclusive(v_a_2405_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; 
v_unused_2430_ = lean_ctor_get(v_a_2405_, 0);
lean_dec(v_unused_2430_);
v___x_2415_ = v_a_2405_;
v_isShared_2416_ = v_isSharedCheck_2429_;
goto v_resetjp_2414_;
}
else
{
lean_dec(v_a_2405_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2429_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; 
lean_inc(v_j_2381_);
v___x_2417_ = l_Lean_Lsp_instFromJsonDeleteFile_fromJson(v_j_2381_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_dec_ref_known(v___x_2417_, 1);
lean_del_object(v___x_2415_);
goto v___jp_2382_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2428_; 
lean_dec(v_j_2381_);
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2428_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2428_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2416_ == 0)
{
lean_ctor_set_tag(v___x_2415_, 2);
lean_ctor_set(v___x_2415_, 0, v_a_2418_);
v___x_2423_ = v___x_2415_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
lean_object* v___x_2425_; 
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2423_);
v___x_2425_ = v___x_2420_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2446_; 
lean_dec_ref(v___f_2380_);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_a_2405_);
if (v_isSharedCheck_2446_ == 0)
{
lean_object* v_unused_2447_; 
v_unused_2447_ = lean_ctor_get(v_a_2405_, 0);
lean_dec(v_unused_2447_);
v___x_2432_ = v_a_2405_;
v_isShared_2433_ = v_isSharedCheck_2446_;
goto v_resetjp_2431_;
}
else
{
lean_dec(v_a_2405_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2446_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2434_; 
lean_inc(v_j_2381_);
v___x_2434_ = l_Lean_Lsp_instFromJsonRenameFile_fromJson(v_j_2381_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_dec_ref_known(v___x_2434_, 1);
lean_del_object(v___x_2432_);
goto v___jp_2382_;
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2445_; 
lean_dec(v_j_2381_);
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2445_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2445_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2433_ == 0)
{
lean_ctor_set_tag(v___x_2432_, 1);
lean_ctor_set(v___x_2432_, 0, v_a_2435_);
v___x_2440_ = v___x_2432_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2442_; 
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2440_);
v___x_2442_ = v___x_2437_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2463_; 
lean_dec_ref(v___f_2380_);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_a_2405_);
if (v_isSharedCheck_2463_ == 0)
{
lean_object* v_unused_2464_; 
v_unused_2464_ = lean_ctor_get(v_a_2405_, 0);
lean_dec(v_unused_2464_);
v___x_2449_ = v_a_2405_;
v_isShared_2450_ = v_isSharedCheck_2463_;
goto v_resetjp_2448_;
}
else
{
lean_dec(v_a_2405_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2463_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; 
lean_inc(v_j_2381_);
v___x_2451_ = l_Lean_Lsp_instFromJsonCreateFile_fromJson(v_j_2381_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_dec_ref_known(v___x_2451_, 1);
lean_del_object(v___x_2449_);
goto v___jp_2382_;
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2462_; 
lean_dec(v_j_2381_);
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2462_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2462_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 0);
lean_ctor_set(v___x_2449_, 0, v_a_2452_);
v___x_2457_ = v___x_2449_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2459_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v___x_2457_);
v___x_2459_ = v___x_2454_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2465_; 
v___x_2465_ = lean_apply_1(v___f_2380_, v_a_2405_);
v___y_2402_ = v___x_2465_;
goto v___jp_2401_;
}
}
v___jp_2382_:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(v_j_2381_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2383_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2383_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2400_; 
v_a_2392_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2394_ = v___x_2383_;
v_isShared_2395_ = v_isSharedCheck_2400_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2383_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2400_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2396_; lean_object* v___x_2398_; 
v___x_2396_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2392_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v___x_2396_);
v___x_2398_ = v___x_2394_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
v___jp_2401_:
{
if (lean_obj_tag(v___y_2402_) == 0)
{
lean_dec_ref_known(v___y_2402_, 1);
goto v___jp_2382_;
}
else
{
lean_dec(v_j_2381_);
return v___y_2402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(lean_object* v_t_2470_){
_start:
{
if (lean_obj_tag(v_t_2470_) == 0)
{
lean_object* v_size_2471_; lean_object* v_k_2472_; lean_object* v_v_2473_; lean_object* v_l_2474_; lean_object* v_r_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2485_; 
v_size_2471_ = lean_ctor_get(v_t_2470_, 0);
v_k_2472_ = lean_ctor_get(v_t_2470_, 1);
v_v_2473_ = lean_ctor_get(v_t_2470_, 2);
v_l_2474_ = lean_ctor_get(v_t_2470_, 3);
v_r_2475_ = lean_ctor_get(v_t_2470_, 4);
v_isSharedCheck_2485_ = !lean_is_exclusive(v_t_2470_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2477_ = v_t_2470_;
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_r_2475_);
lean_inc(v_l_2474_);
lean_inc(v_v_2473_);
lean_inc(v_k_2472_);
lean_inc(v_size_2471_);
lean_dec(v_t_2470_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2479_ = l_Lean_Lsp_instToJsonChangeAnnotation_toJson(v_v_2473_);
v___x_2480_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_l_2474_);
v___x_2481_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_r_2475_);
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 4, v___x_2481_);
lean_ctor_set(v___x_2477_, 3, v___x_2480_);
lean_ctor_set(v___x_2477_, 2, v___x_2479_);
v___x_2483_ = v___x_2477_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_size_2471_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_k_2472_);
lean_ctor_set(v_reuseFailAlloc_2484_, 2, v___x_2479_);
lean_ctor_set(v_reuseFailAlloc_2484_, 3, v___x_2480_);
lean_ctor_set(v_reuseFailAlloc_2484_, 4, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
else
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_box(1);
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(lean_object* v_map_2487_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4_spec__7(v_map_2487_);
v___x_2489_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(lean_object* v_k_2490_, lean_object* v_x_2491_){
_start:
{
if (lean_obj_tag(v_x_2491_) == 0)
{
lean_object* v___x_2492_; 
lean_dec_ref(v_k_2490_);
v___x_2492_ = lean_box(0);
return v___x_2492_;
}
else
{
lean_object* v_val_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v_val_2493_ = lean_ctor_get(v_x_2491_, 0);
lean_inc(v_val_2493_);
lean_dec_ref_known(v_x_2491_, 1);
v___x_2494_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2_spec__4(v_val_2493_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v_k_2490_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___x_2496_ = lean_box(0);
v___x_2497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2495_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
return v___x_2497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(size_t v_sz_2498_, size_t v_i_2499_, lean_object* v_bs_2500_){
_start:
{
uint8_t v___x_2501_; 
v___x_2501_ = lean_usize_dec_lt(v_i_2499_, v_sz_2498_);
if (v___x_2501_ == 0)
{
return v_bs_2500_;
}
else
{
lean_object* v_v_2502_; lean_object* v___x_2503_; lean_object* v_bs_x27_2504_; lean_object* v___y_2506_; 
v_v_2502_ = lean_array_uget(v_bs_2500_, v_i_2499_);
v___x_2503_ = lean_unsigned_to_nat(0u);
v_bs_x27_2504_ = lean_array_uset(v_bs_2500_, v_i_2499_, v___x_2503_);
switch(lean_obj_tag(v_v_2502_))
{
case 0:
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_a_2511_ = lean_ctor_get(v_v_2502_, 0);
lean_inc_ref(v_a_2511_);
lean_dec_ref_known(v_v_2502_, 1);
v___x_2512_ = l_Lean_Lsp_instToJsonCreateFile_toJson(v_a_2511_);
v___x_2513_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2514_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__2));
v___x_2515_ = l_Lean_Json_setObjVal_x21(v___x_2512_, v___x_2513_, v___x_2514_);
v___y_2506_ = v___x_2515_;
goto v___jp_2505_;
}
case 1:
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v_a_2516_ = lean_ctor_get(v_v_2502_, 0);
lean_inc_ref(v_a_2516_);
lean_dec_ref_known(v_v_2502_, 1);
v___x_2517_ = l_Lean_Lsp_instToJsonRenameFile_toJson(v_a_2516_);
v___x_2518_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2519_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__4));
v___x_2520_ = l_Lean_Json_setObjVal_x21(v___x_2517_, v___x_2518_, v___x_2519_);
v___y_2506_ = v___x_2520_;
goto v___jp_2505_;
}
case 2:
{
lean_object* v_a_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v_a_2521_ = lean_ctor_get(v_v_2502_, 0);
lean_inc_ref(v_a_2521_);
lean_dec_ref_known(v_v_2502_, 1);
v___x_2522_ = l_Lean_Lsp_instToJsonDeleteFile_toJson(v_a_2521_);
v___x_2523_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_2524_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__6));
v___x_2525_ = l_Lean_Json_setObjVal_x21(v___x_2522_, v___x_2523_, v___x_2524_);
v___y_2506_ = v___x_2525_;
goto v___jp_2505_;
}
default: 
{
lean_object* v_a_2526_; lean_object* v___x_2527_; 
v_a_2526_ = lean_ctor_get(v_v_2502_, 0);
lean_inc_ref(v_a_2526_);
lean_dec_ref_known(v_v_2502_, 1);
v___x_2527_ = l_Lean_Lsp_instToJsonTextDocumentEdit_toJson(v_a_2526_);
v___y_2506_ = v___x_2527_;
goto v___jp_2505_;
}
}
v___jp_2505_:
{
size_t v___x_2507_; size_t v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = ((size_t)1ULL);
v___x_2508_ = lean_usize_add(v_i_2499_, v___x_2507_);
v___x_2509_ = lean_array_uset(v_bs_x27_2504_, v_i_2499_, v___y_2506_);
v_i_2499_ = v___x_2508_;
v_bs_2500_ = v___x_2509_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4___boxed(lean_object* v_sz_2528_, lean_object* v_i_2529_, lean_object* v_bs_2530_){
_start:
{
size_t v_sz_boxed_2531_; size_t v_i_boxed_2532_; lean_object* v_res_2533_; 
v_sz_boxed_2531_ = lean_unbox_usize(v_sz_2528_);
lean_dec(v_sz_2528_);
v_i_boxed_2532_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_res_2533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(v_sz_boxed_2531_, v_i_boxed_2532_, v_bs_2530_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(lean_object* v_a_2534_){
_start:
{
size_t v_sz_2535_; size_t v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_sz_2535_ = lean_array_size(v_a_2534_);
v___x_2536_ = ((size_t)0ULL);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2_spec__4(v_sz_2535_, v___x_2536_, v_a_2534_);
v___x_2538_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(lean_object* v_k_2539_, lean_object* v_x_2540_){
_start:
{
if (lean_obj_tag(v_x_2540_) == 0)
{
lean_object* v___x_2541_; 
lean_dec_ref(v_k_2539_);
v___x_2541_ = lean_box(0);
return v___x_2541_;
}
else
{
lean_object* v_val_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_val_2542_ = lean_ctor_get(v_x_2540_, 0);
lean_inc(v_val_2542_);
lean_dec_ref_known(v_x_2540_, 1);
v___x_2543_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1_spec__2(v_val_2542_);
v___x_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2544_, 0, v_k_2539_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = lean_box(0);
v___x_2546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2544_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(lean_object* v_t_2547_){
_start:
{
if (lean_obj_tag(v_t_2547_) == 0)
{
lean_object* v_size_2548_; lean_object* v_k_2549_; lean_object* v_v_2550_; lean_object* v_l_2551_; lean_object* v_r_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2562_; 
v_size_2548_ = lean_ctor_get(v_t_2547_, 0);
v_k_2549_ = lean_ctor_get(v_t_2547_, 1);
v_v_2550_ = lean_ctor_get(v_t_2547_, 2);
v_l_2551_ = lean_ctor_get(v_t_2547_, 3);
v_r_2552_ = lean_ctor_get(v_t_2547_, 4);
v_isSharedCheck_2562_ = !lean_is_exclusive(v_t_2547_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2554_ = v_t_2547_;
v_isShared_2555_ = v_isSharedCheck_2562_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_r_2552_);
lean_inc(v_l_2551_);
lean_inc(v_v_2550_);
lean_inc(v_k_2549_);
lean_inc(v_size_2548_);
lean_dec(v_t_2547_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2562_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2556_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonTextDocumentEdit_toJson_spec__0(v_v_2550_);
v___x_2557_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_l_2551_);
v___x_2558_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_r_2552_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 4, v___x_2558_);
lean_ctor_set(v___x_2554_, 3, v___x_2557_);
lean_ctor_set(v___x_2554_, 2, v___x_2556_);
v___x_2560_ = v___x_2554_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_size_2548_);
lean_ctor_set(v_reuseFailAlloc_2561_, 1, v_k_2549_);
lean_ctor_set(v_reuseFailAlloc_2561_, 2, v___x_2556_);
lean_ctor_set(v_reuseFailAlloc_2561_, 3, v___x_2557_);
lean_ctor_set(v_reuseFailAlloc_2561_, 4, v___x_2558_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
else
{
lean_object* v___x_2563_; 
v___x_2563_ = lean_box(1);
return v___x_2563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(lean_object* v_map_2564_){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0_spec__1(v_map_2564_);
v___x_2566_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(lean_object* v_k_2567_, lean_object* v_x_2568_){
_start:
{
if (lean_obj_tag(v_x_2568_) == 0)
{
lean_object* v___x_2569_; 
lean_dec_ref(v_k_2567_);
v___x_2569_ = lean_box(0);
return v___x_2569_;
}
else
{
lean_object* v_val_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v_val_2570_ = lean_ctor_get(v_x_2568_, 0);
lean_inc(v_val_2570_);
lean_dec_ref_known(v_x_2568_, 1);
v___x_2571_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0_spec__0(v_val_2570_);
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v_k_2567_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2572_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
return v___x_2574_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(lean_object* v_x_2578_){
_start:
{
lean_object* v_changes_x3f_2579_; lean_object* v_documentChanges_x3f_2580_; lean_object* v_changeAnnotations_x3f_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v_changes_x3f_2579_ = lean_ctor_get(v_x_2578_, 0);
lean_inc(v_changes_x3f_2579_);
v_documentChanges_x3f_2580_ = lean_ctor_get(v_x_2578_, 1);
lean_inc(v_documentChanges_x3f_2580_);
v_changeAnnotations_x3f_2581_ = lean_ctor_get(v_x_2578_, 2);
lean_inc(v_changeAnnotations_x3f_2581_);
lean_dec_ref(v_x_2578_);
v___x_2582_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0));
v___x_2583_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__0(v___x_2582_, v_changes_x3f_2579_);
v___x_2584_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1));
v___x_2585_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__1(v___x_2584_, v_documentChanges_x3f_2580_);
v___x_2586_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2));
v___x_2587_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonWorkspaceEdit_toJson_spec__2(v___x_2586_, v_changeAnnotations_x3f_2581_);
v___x_2588_ = lean_box(0);
v___x_2589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2585_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2583_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_2593_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_2591_, v___x_2592_);
v___x_2594_ = l_Lean_Json_mkObj(v___x_2593_);
lean_dec(v___x_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_cmp_2597_, lean_object* v_k_2598_, lean_object* v_v_2599_, lean_object* v_t_2600_){
_start:
{
if (lean_obj_tag(v_t_2600_) == 0)
{
lean_object* v_size_2601_; lean_object* v_k_2602_; lean_object* v_v_2603_; lean_object* v_l_2604_; lean_object* v_r_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2886_; 
v_size_2601_ = lean_ctor_get(v_t_2600_, 0);
v_k_2602_ = lean_ctor_get(v_t_2600_, 1);
v_v_2603_ = lean_ctor_get(v_t_2600_, 2);
v_l_2604_ = lean_ctor_get(v_t_2600_, 3);
v_r_2605_ = lean_ctor_get(v_t_2600_, 4);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_t_2600_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2607_ = v_t_2600_;
v_isShared_2608_ = v_isSharedCheck_2886_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_r_2605_);
lean_inc(v_l_2604_);
lean_inc(v_v_2603_);
lean_inc(v_k_2602_);
lean_inc(v_size_2601_);
lean_dec(v_t_2600_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2886_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2609_; uint8_t v___x_2610_; 
lean_inc_ref(v_cmp_2597_);
lean_inc(v_k_2602_);
lean_inc_ref(v_k_2598_);
v___x_2609_ = lean_apply_2(v_cmp_2597_, v_k_2598_, v_k_2602_);
v___x_2610_ = lean_unbox(v___x_2609_);
switch(v___x_2610_)
{
case 0:
{
lean_object* v_impl_2611_; lean_object* v___x_2612_; 
lean_dec(v_size_2601_);
v_impl_2611_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2597_, v_k_2598_, v_v_2599_, v_l_2604_);
v___x_2612_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2605_) == 0)
{
lean_object* v_size_2613_; lean_object* v_size_2614_; lean_object* v_k_2615_; lean_object* v_v_2616_; lean_object* v_l_2617_; lean_object* v_r_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; 
v_size_2613_ = lean_ctor_get(v_r_2605_, 0);
v_size_2614_ = lean_ctor_get(v_impl_2611_, 0);
lean_inc(v_size_2614_);
v_k_2615_ = lean_ctor_get(v_impl_2611_, 1);
lean_inc(v_k_2615_);
v_v_2616_ = lean_ctor_get(v_impl_2611_, 2);
lean_inc(v_v_2616_);
v_l_2617_ = lean_ctor_get(v_impl_2611_, 3);
lean_inc(v_l_2617_);
v_r_2618_ = lean_ctor_get(v_impl_2611_, 4);
lean_inc(v_r_2618_);
v___x_2619_ = lean_unsigned_to_nat(3u);
v___x_2620_ = lean_nat_mul(v___x_2619_, v_size_2613_);
v___x_2621_ = lean_nat_dec_lt(v___x_2620_, v_size_2614_);
lean_dec(v___x_2620_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2625_; 
lean_dec(v_r_2618_);
lean_dec(v_l_2617_);
lean_dec(v_v_2616_);
lean_dec(v_k_2615_);
v___x_2622_ = lean_nat_add(v___x_2612_, v_size_2614_);
lean_dec(v_size_2614_);
v___x_2623_ = lean_nat_add(v___x_2622_, v_size_2613_);
lean_dec(v___x_2622_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 3, v_impl_2611_);
lean_ctor_set(v___x_2607_, 0, v___x_2623_);
v___x_2625_ = v___x_2607_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v___x_2623_);
lean_ctor_set(v_reuseFailAlloc_2626_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2626_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2626_, 3, v_impl_2611_);
lean_ctor_set(v_reuseFailAlloc_2626_, 4, v_r_2605_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
else
{
lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2692_; 
v_isSharedCheck_2692_ = !lean_is_exclusive(v_impl_2611_);
if (v_isSharedCheck_2692_ == 0)
{
lean_object* v_unused_2693_; lean_object* v_unused_2694_; lean_object* v_unused_2695_; lean_object* v_unused_2696_; lean_object* v_unused_2697_; 
v_unused_2693_ = lean_ctor_get(v_impl_2611_, 4);
lean_dec(v_unused_2693_);
v_unused_2694_ = lean_ctor_get(v_impl_2611_, 3);
lean_dec(v_unused_2694_);
v_unused_2695_ = lean_ctor_get(v_impl_2611_, 2);
lean_dec(v_unused_2695_);
v_unused_2696_ = lean_ctor_get(v_impl_2611_, 1);
lean_dec(v_unused_2696_);
v_unused_2697_ = lean_ctor_get(v_impl_2611_, 0);
lean_dec(v_unused_2697_);
v___x_2628_ = v_impl_2611_;
v_isShared_2629_ = v_isSharedCheck_2692_;
goto v_resetjp_2627_;
}
else
{
lean_dec(v_impl_2611_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2692_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v_size_2630_; lean_object* v_size_2631_; lean_object* v_k_2632_; lean_object* v_v_2633_; lean_object* v_l_2634_; lean_object* v_r_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
v_size_2630_ = lean_ctor_get(v_l_2617_, 0);
v_size_2631_ = lean_ctor_get(v_r_2618_, 0);
v_k_2632_ = lean_ctor_get(v_r_2618_, 1);
v_v_2633_ = lean_ctor_get(v_r_2618_, 2);
v_l_2634_ = lean_ctor_get(v_r_2618_, 3);
v_r_2635_ = lean_ctor_get(v_r_2618_, 4);
v___x_2636_ = lean_unsigned_to_nat(2u);
v___x_2637_ = lean_nat_mul(v___x_2636_, v_size_2630_);
v___x_2638_ = lean_nat_dec_lt(v_size_2631_, v___x_2637_);
lean_dec(v___x_2637_);
if (v___x_2638_ == 0)
{
lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2667_; 
lean_inc(v_r_2635_);
lean_inc(v_l_2634_);
lean_inc(v_v_2633_);
lean_inc(v_k_2632_);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_r_2618_);
if (v_isSharedCheck_2667_ == 0)
{
lean_object* v_unused_2668_; lean_object* v_unused_2669_; lean_object* v_unused_2670_; lean_object* v_unused_2671_; lean_object* v_unused_2672_; 
v_unused_2668_ = lean_ctor_get(v_r_2618_, 4);
lean_dec(v_unused_2668_);
v_unused_2669_ = lean_ctor_get(v_r_2618_, 3);
lean_dec(v_unused_2669_);
v_unused_2670_ = lean_ctor_get(v_r_2618_, 2);
lean_dec(v_unused_2670_);
v_unused_2671_ = lean_ctor_get(v_r_2618_, 1);
lean_dec(v_unused_2671_);
v_unused_2672_ = lean_ctor_get(v_r_2618_, 0);
lean_dec(v_unused_2672_);
v___x_2640_ = v_r_2618_;
v_isShared_2641_ = v_isSharedCheck_2667_;
goto v_resetjp_2639_;
}
else
{
lean_dec(v_r_2618_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2667_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___x_2655_; lean_object* v___y_2657_; 
v___x_2642_ = lean_nat_add(v___x_2612_, v_size_2614_);
lean_dec(v_size_2614_);
v___x_2643_ = lean_nat_add(v___x_2642_, v_size_2613_);
lean_dec(v___x_2642_);
v___x_2655_ = lean_nat_add(v___x_2612_, v_size_2630_);
if (lean_obj_tag(v_l_2634_) == 0)
{
lean_object* v_size_2665_; 
v_size_2665_ = lean_ctor_get(v_l_2634_, 0);
lean_inc(v_size_2665_);
v___y_2657_ = v_size_2665_;
goto v___jp_2656_;
}
else
{
lean_object* v___x_2666_; 
v___x_2666_ = lean_unsigned_to_nat(0u);
v___y_2657_ = v___x_2666_;
goto v___jp_2656_;
}
v___jp_2644_:
{
lean_object* v___x_2648_; lean_object* v___x_2650_; 
v___x_2648_ = lean_nat_add(v___y_2645_, v___y_2647_);
lean_dec(v___y_2647_);
lean_dec(v___y_2645_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 4, v_r_2605_);
lean_ctor_set(v___x_2640_, 3, v_r_2635_);
lean_ctor_set(v___x_2640_, 2, v_v_2603_);
lean_ctor_set(v___x_2640_, 1, v_k_2602_);
lean_ctor_set(v___x_2640_, 0, v___x_2648_);
v___x_2650_ = v___x_2640_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v_r_2635_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v_r_2605_);
v___x_2650_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2652_; 
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 4, v___x_2650_);
lean_ctor_set(v___x_2628_, 3, v___y_2646_);
lean_ctor_set(v___x_2628_, 2, v_v_2633_);
lean_ctor_set(v___x_2628_, 1, v_k_2632_);
lean_ctor_set(v___x_2628_, 0, v___x_2643_);
v___x_2652_ = v___x_2628_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2643_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_k_2632_);
lean_ctor_set(v_reuseFailAlloc_2653_, 2, v_v_2633_);
lean_ctor_set(v_reuseFailAlloc_2653_, 3, v___y_2646_);
lean_ctor_set(v_reuseFailAlloc_2653_, 4, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
v___jp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2658_ = lean_nat_add(v___x_2655_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec(v___x_2655_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_l_2634_);
lean_ctor_set(v___x_2607_, 3, v_l_2617_);
lean_ctor_set(v___x_2607_, 2, v_v_2616_);
lean_ctor_set(v___x_2607_, 1, v_k_2615_);
lean_ctor_set(v___x_2607_, 0, v___x_2658_);
v___x_2660_ = v___x_2607_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2658_);
lean_ctor_set(v_reuseFailAlloc_2664_, 1, v_k_2615_);
lean_ctor_set(v_reuseFailAlloc_2664_, 2, v_v_2616_);
lean_ctor_set(v_reuseFailAlloc_2664_, 3, v_l_2617_);
lean_ctor_set(v_reuseFailAlloc_2664_, 4, v_l_2634_);
v___x_2660_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_nat_add(v___x_2612_, v_size_2613_);
if (lean_obj_tag(v_r_2635_) == 0)
{
lean_object* v_size_2662_; 
v_size_2662_ = lean_ctor_get(v_r_2635_, 0);
lean_inc(v_size_2662_);
v___y_2645_ = v___x_2661_;
v___y_2646_ = v___x_2660_;
v___y_2647_ = v_size_2662_;
goto v___jp_2644_;
}
else
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_unsigned_to_nat(0u);
v___y_2645_ = v___x_2661_;
v___y_2646_ = v___x_2660_;
v___y_2647_ = v___x_2663_;
goto v___jp_2644_;
}
}
}
}
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
lean_del_object(v___x_2607_);
v___x_2673_ = lean_nat_add(v___x_2612_, v_size_2614_);
lean_dec(v_size_2614_);
v___x_2674_ = lean_nat_add(v___x_2673_, v_size_2613_);
lean_dec(v___x_2673_);
v___x_2675_ = lean_nat_add(v___x_2612_, v_size_2613_);
v___x_2676_ = lean_nat_add(v___x_2675_, v_size_2631_);
lean_dec(v___x_2675_);
lean_inc_ref(v_r_2605_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 4, v_r_2605_);
lean_ctor_set(v___x_2628_, 3, v_r_2618_);
lean_ctor_set(v___x_2628_, 2, v_v_2603_);
lean_ctor_set(v___x_2628_, 1, v_k_2602_);
lean_ctor_set(v___x_2628_, 0, v___x_2676_);
v___x_2678_ = v___x_2628_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2676_);
lean_ctor_set(v_reuseFailAlloc_2691_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2691_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2691_, 3, v_r_2618_);
lean_ctor_set(v_reuseFailAlloc_2691_, 4, v_r_2605_);
v___x_2678_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
v_isSharedCheck_2685_ = !lean_is_exclusive(v_r_2605_);
if (v_isSharedCheck_2685_ == 0)
{
lean_object* v_unused_2686_; lean_object* v_unused_2687_; lean_object* v_unused_2688_; lean_object* v_unused_2689_; lean_object* v_unused_2690_; 
v_unused_2686_ = lean_ctor_get(v_r_2605_, 4);
lean_dec(v_unused_2686_);
v_unused_2687_ = lean_ctor_get(v_r_2605_, 3);
lean_dec(v_unused_2687_);
v_unused_2688_ = lean_ctor_get(v_r_2605_, 2);
lean_dec(v_unused_2688_);
v_unused_2689_ = lean_ctor_get(v_r_2605_, 1);
lean_dec(v_unused_2689_);
v_unused_2690_ = lean_ctor_get(v_r_2605_, 0);
lean_dec(v_unused_2690_);
v___x_2680_ = v_r_2605_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_dec(v_r_2605_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 4, v___x_2678_);
lean_ctor_set(v___x_2680_, 3, v_l_2617_);
lean_ctor_set(v___x_2680_, 2, v_v_2616_);
lean_ctor_set(v___x_2680_, 1, v_k_2615_);
lean_ctor_set(v___x_2680_, 0, v___x_2674_);
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2674_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_k_2615_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v_v_2616_);
lean_ctor_set(v_reuseFailAlloc_2684_, 3, v_l_2617_);
lean_ctor_set(v_reuseFailAlloc_2684_, 4, v___x_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2698_; 
v_l_2698_ = lean_ctor_get(v_impl_2611_, 3);
lean_inc(v_l_2698_);
if (lean_obj_tag(v_l_2698_) == 0)
{
lean_object* v_r_2699_; lean_object* v_k_2700_; lean_object* v_v_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2712_; 
v_r_2699_ = lean_ctor_get(v_impl_2611_, 4);
v_k_2700_ = lean_ctor_get(v_impl_2611_, 1);
v_v_2701_ = lean_ctor_get(v_impl_2611_, 2);
v_isSharedCheck_2712_ = !lean_is_exclusive(v_impl_2611_);
if (v_isSharedCheck_2712_ == 0)
{
lean_object* v_unused_2713_; lean_object* v_unused_2714_; 
v_unused_2713_ = lean_ctor_get(v_impl_2611_, 3);
lean_dec(v_unused_2713_);
v_unused_2714_ = lean_ctor_get(v_impl_2611_, 0);
lean_dec(v_unused_2714_);
v___x_2703_ = v_impl_2611_;
v_isShared_2704_ = v_isSharedCheck_2712_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_r_2699_);
lean_inc(v_v_2701_);
lean_inc(v_k_2700_);
lean_dec(v_impl_2611_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2712_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2705_; lean_object* v___x_2707_; 
v___x_2705_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2699_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 3, v_r_2699_);
lean_ctor_set(v___x_2703_, 2, v_v_2603_);
lean_ctor_set(v___x_2703_, 1, v_k_2602_);
lean_ctor_set(v___x_2703_, 0, v___x_2612_);
v___x_2707_ = v___x_2703_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2711_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2711_, 3, v_r_2699_);
lean_ctor_set(v_reuseFailAlloc_2711_, 4, v_r_2699_);
v___x_2707_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2709_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v___x_2707_);
lean_ctor_set(v___x_2607_, 3, v_l_2698_);
lean_ctor_set(v___x_2607_, 2, v_v_2701_);
lean_ctor_set(v___x_2607_, 1, v_k_2700_);
lean_ctor_set(v___x_2607_, 0, v___x_2705_);
v___x_2709_ = v___x_2607_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2705_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v_k_2700_);
lean_ctor_set(v_reuseFailAlloc_2710_, 2, v_v_2701_);
lean_ctor_set(v_reuseFailAlloc_2710_, 3, v_l_2698_);
lean_ctor_set(v_reuseFailAlloc_2710_, 4, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_r_2715_; 
v_r_2715_ = lean_ctor_get(v_impl_2611_, 4);
lean_inc(v_r_2715_);
if (lean_obj_tag(v_r_2715_) == 0)
{
lean_object* v_k_2716_; lean_object* v_v_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2740_; 
v_k_2716_ = lean_ctor_get(v_impl_2611_, 1);
v_v_2717_ = lean_ctor_get(v_impl_2611_, 2);
v_isSharedCheck_2740_ = !lean_is_exclusive(v_impl_2611_);
if (v_isSharedCheck_2740_ == 0)
{
lean_object* v_unused_2741_; lean_object* v_unused_2742_; lean_object* v_unused_2743_; 
v_unused_2741_ = lean_ctor_get(v_impl_2611_, 4);
lean_dec(v_unused_2741_);
v_unused_2742_ = lean_ctor_get(v_impl_2611_, 3);
lean_dec(v_unused_2742_);
v_unused_2743_ = lean_ctor_get(v_impl_2611_, 0);
lean_dec(v_unused_2743_);
v___x_2719_ = v_impl_2611_;
v_isShared_2720_ = v_isSharedCheck_2740_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_v_2717_);
lean_inc(v_k_2716_);
lean_dec(v_impl_2611_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2740_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v_k_2721_; lean_object* v_v_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2736_; 
v_k_2721_ = lean_ctor_get(v_r_2715_, 1);
v_v_2722_ = lean_ctor_get(v_r_2715_, 2);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_r_2715_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; lean_object* v_unused_2738_; lean_object* v_unused_2739_; 
v_unused_2737_ = lean_ctor_get(v_r_2715_, 4);
lean_dec(v_unused_2737_);
v_unused_2738_ = lean_ctor_get(v_r_2715_, 3);
lean_dec(v_unused_2738_);
v_unused_2739_ = lean_ctor_get(v_r_2715_, 0);
lean_dec(v_unused_2739_);
v___x_2724_ = v_r_2715_;
v_isShared_2725_ = v_isSharedCheck_2736_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_v_2722_);
lean_inc(v_k_2721_);
lean_dec(v_r_2715_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2736_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2726_; lean_object* v___x_2728_; 
v___x_2726_ = lean_unsigned_to_nat(3u);
if (v_isShared_2725_ == 0)
{
lean_ctor_set(v___x_2724_, 4, v_l_2698_);
lean_ctor_set(v___x_2724_, 3, v_l_2698_);
lean_ctor_set(v___x_2724_, 2, v_v_2717_);
lean_ctor_set(v___x_2724_, 1, v_k_2716_);
lean_ctor_set(v___x_2724_, 0, v___x_2612_);
v___x_2728_ = v___x_2724_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v_k_2716_);
lean_ctor_set(v_reuseFailAlloc_2735_, 2, v_v_2717_);
lean_ctor_set(v_reuseFailAlloc_2735_, 3, v_l_2698_);
lean_ctor_set(v_reuseFailAlloc_2735_, 4, v_l_2698_);
v___x_2728_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
lean_object* v___x_2730_; 
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 4, v_l_2698_);
lean_ctor_set(v___x_2719_, 2, v_v_2603_);
lean_ctor_set(v___x_2719_, 1, v_k_2602_);
lean_ctor_set(v___x_2719_, 0, v___x_2612_);
v___x_2730_ = v___x_2719_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2734_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2734_, 3, v_l_2698_);
lean_ctor_set(v_reuseFailAlloc_2734_, 4, v_l_2698_);
v___x_2730_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2732_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v___x_2730_);
lean_ctor_set(v___x_2607_, 3, v___x_2728_);
lean_ctor_set(v___x_2607_, 2, v_v_2722_);
lean_ctor_set(v___x_2607_, 1, v_k_2721_);
lean_ctor_set(v___x_2607_, 0, v___x_2726_);
v___x_2732_ = v___x_2607_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2726_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v_k_2721_);
lean_ctor_set(v_reuseFailAlloc_2733_, 2, v_v_2722_);
lean_ctor_set(v_reuseFailAlloc_2733_, 3, v___x_2728_);
lean_ctor_set(v_reuseFailAlloc_2733_, 4, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
}
}
else
{
lean_object* v___x_2744_; lean_object* v___x_2746_; 
v___x_2744_ = lean_unsigned_to_nat(2u);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_r_2715_);
lean_ctor_set(v___x_2607_, 3, v_impl_2611_);
lean_ctor_set(v___x_2607_, 0, v___x_2744_);
v___x_2746_ = v___x_2607_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2744_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2747_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2747_, 3, v_impl_2611_);
lean_ctor_set(v_reuseFailAlloc_2747_, 4, v_r_2715_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2749_; 
lean_dec(v_v_2603_);
lean_dec(v_k_2602_);
lean_dec_ref(v_cmp_2597_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 2, v_v_2599_);
lean_ctor_set(v___x_2607_, 1, v_k_2598_);
v___x_2749_ = v___x_2607_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_size_2601_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v_k_2598_);
lean_ctor_set(v_reuseFailAlloc_2750_, 2, v_v_2599_);
lean_ctor_set(v_reuseFailAlloc_2750_, 3, v_l_2604_);
lean_ctor_set(v_reuseFailAlloc_2750_, 4, v_r_2605_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
default: 
{
lean_object* v_impl_2751_; lean_object* v___x_2752_; 
lean_dec(v_size_2601_);
v_impl_2751_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2597_, v_k_2598_, v_v_2599_, v_r_2605_);
v___x_2752_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2604_) == 0)
{
lean_object* v_size_2753_; lean_object* v_size_2754_; lean_object* v_k_2755_; lean_object* v_v_2756_; lean_object* v_l_2757_; lean_object* v_r_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v_size_2753_ = lean_ctor_get(v_l_2604_, 0);
v_size_2754_ = lean_ctor_get(v_impl_2751_, 0);
lean_inc(v_size_2754_);
v_k_2755_ = lean_ctor_get(v_impl_2751_, 1);
lean_inc(v_k_2755_);
v_v_2756_ = lean_ctor_get(v_impl_2751_, 2);
lean_inc(v_v_2756_);
v_l_2757_ = lean_ctor_get(v_impl_2751_, 3);
lean_inc(v_l_2757_);
v_r_2758_ = lean_ctor_get(v_impl_2751_, 4);
lean_inc(v_r_2758_);
v___x_2759_ = lean_unsigned_to_nat(3u);
v___x_2760_ = lean_nat_mul(v___x_2759_, v_size_2753_);
v___x_2761_ = lean_nat_dec_lt(v___x_2760_, v_size_2754_);
lean_dec(v___x_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
lean_dec(v_r_2758_);
lean_dec(v_l_2757_);
lean_dec(v_v_2756_);
lean_dec(v_k_2755_);
v___x_2762_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2763_ = lean_nat_add(v___x_2762_, v_size_2754_);
lean_dec(v_size_2754_);
lean_dec(v___x_2762_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_impl_2751_);
lean_ctor_set(v___x_2607_, 0, v___x_2763_);
v___x_2765_ = v___x_2607_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2766_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2766_, 3, v_l_2604_);
lean_ctor_set(v_reuseFailAlloc_2766_, 4, v_impl_2751_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
else
{
lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2830_; 
v_isSharedCheck_2830_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; lean_object* v_unused_2832_; lean_object* v_unused_2833_; lean_object* v_unused_2834_; lean_object* v_unused_2835_; 
v_unused_2831_ = lean_ctor_get(v_impl_2751_, 4);
lean_dec(v_unused_2831_);
v_unused_2832_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2832_);
v_unused_2833_ = lean_ctor_get(v_impl_2751_, 2);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_impl_2751_, 1);
lean_dec(v_unused_2834_);
v_unused_2835_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2835_);
v___x_2768_ = v_impl_2751_;
v_isShared_2769_ = v_isSharedCheck_2830_;
goto v_resetjp_2767_;
}
else
{
lean_dec(v_impl_2751_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2830_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v_size_2770_; lean_object* v_k_2771_; lean_object* v_v_2772_; lean_object* v_l_2773_; lean_object* v_r_2774_; lean_object* v_size_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; uint8_t v___x_2778_; 
v_size_2770_ = lean_ctor_get(v_l_2757_, 0);
v_k_2771_ = lean_ctor_get(v_l_2757_, 1);
v_v_2772_ = lean_ctor_get(v_l_2757_, 2);
v_l_2773_ = lean_ctor_get(v_l_2757_, 3);
v_r_2774_ = lean_ctor_get(v_l_2757_, 4);
v_size_2775_ = lean_ctor_get(v_r_2758_, 0);
v___x_2776_ = lean_unsigned_to_nat(2u);
v___x_2777_ = lean_nat_mul(v___x_2776_, v_size_2775_);
v___x_2778_ = lean_nat_dec_lt(v_size_2770_, v___x_2777_);
lean_dec(v___x_2777_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2806_; 
lean_inc(v_r_2774_);
lean_inc(v_l_2773_);
lean_inc(v_v_2772_);
lean_inc(v_k_2771_);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_l_2757_);
if (v_isSharedCheck_2806_ == 0)
{
lean_object* v_unused_2807_; lean_object* v_unused_2808_; lean_object* v_unused_2809_; lean_object* v_unused_2810_; lean_object* v_unused_2811_; 
v_unused_2807_ = lean_ctor_get(v_l_2757_, 4);
lean_dec(v_unused_2807_);
v_unused_2808_ = lean_ctor_get(v_l_2757_, 3);
lean_dec(v_unused_2808_);
v_unused_2809_ = lean_ctor_get(v_l_2757_, 2);
lean_dec(v_unused_2809_);
v_unused_2810_ = lean_ctor_get(v_l_2757_, 1);
lean_dec(v_unused_2810_);
v_unused_2811_ = lean_ctor_get(v_l_2757_, 0);
lean_dec(v_unused_2811_);
v___x_2780_ = v_l_2757_;
v_isShared_2781_ = v_isSharedCheck_2806_;
goto v_resetjp_2779_;
}
else
{
lean_dec(v_l_2757_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2806_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2796_; 
v___x_2782_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2783_ = lean_nat_add(v___x_2782_, v_size_2754_);
lean_dec(v_size_2754_);
if (lean_obj_tag(v_l_2773_) == 0)
{
lean_object* v_size_2804_; 
v_size_2804_ = lean_ctor_get(v_l_2773_, 0);
lean_inc(v_size_2804_);
v___y_2796_ = v_size_2804_;
goto v___jp_2795_;
}
else
{
lean_object* v___x_2805_; 
v___x_2805_ = lean_unsigned_to_nat(0u);
v___y_2796_ = v___x_2805_;
goto v___jp_2795_;
}
v___jp_2784_:
{
lean_object* v___x_2788_; lean_object* v___x_2790_; 
v___x_2788_ = lean_nat_add(v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec(v___y_2786_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 4, v_r_2758_);
lean_ctor_set(v___x_2780_, 3, v_r_2774_);
lean_ctor_set(v___x_2780_, 2, v_v_2756_);
lean_ctor_set(v___x_2780_, 1, v_k_2755_);
lean_ctor_set(v___x_2780_, 0, v___x_2788_);
v___x_2790_ = v___x_2780_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v___x_2788_);
lean_ctor_set(v_reuseFailAlloc_2794_, 1, v_k_2755_);
lean_ctor_set(v_reuseFailAlloc_2794_, 2, v_v_2756_);
lean_ctor_set(v_reuseFailAlloc_2794_, 3, v_r_2774_);
lean_ctor_set(v_reuseFailAlloc_2794_, 4, v_r_2758_);
v___x_2790_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
lean_object* v___x_2792_; 
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 4, v___x_2790_);
lean_ctor_set(v___x_2768_, 3, v___y_2785_);
lean_ctor_set(v___x_2768_, 2, v_v_2772_);
lean_ctor_set(v___x_2768_, 1, v_k_2771_);
lean_ctor_set(v___x_2768_, 0, v___x_2783_);
v___x_2792_ = v___x_2768_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v_k_2771_);
lean_ctor_set(v_reuseFailAlloc_2793_, 2, v_v_2772_);
lean_ctor_set(v_reuseFailAlloc_2793_, 3, v___y_2785_);
lean_ctor_set(v_reuseFailAlloc_2793_, 4, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
v___jp_2795_:
{
lean_object* v___x_2797_; lean_object* v___x_2799_; 
v___x_2797_ = lean_nat_add(v___x_2782_, v___y_2796_);
lean_dec(v___y_2796_);
lean_dec(v___x_2782_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_l_2773_);
lean_ctor_set(v___x_2607_, 0, v___x_2797_);
v___x_2799_ = v___x_2607_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v___x_2797_);
lean_ctor_set(v_reuseFailAlloc_2803_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2803_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2803_, 3, v_l_2604_);
lean_ctor_set(v_reuseFailAlloc_2803_, 4, v_l_2773_);
v___x_2799_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_nat_add(v___x_2752_, v_size_2775_);
if (lean_obj_tag(v_r_2774_) == 0)
{
lean_object* v_size_2801_; 
v_size_2801_ = lean_ctor_get(v_r_2774_, 0);
lean_inc(v_size_2801_);
v___y_2785_ = v___x_2799_;
v___y_2786_ = v___x_2800_;
v___y_2787_ = v_size_2801_;
goto v___jp_2784_;
}
else
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_unsigned_to_nat(0u);
v___y_2785_ = v___x_2799_;
v___y_2786_ = v___x_2800_;
v___y_2787_ = v___x_2802_;
goto v___jp_2784_;
}
}
}
}
}
else
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
lean_del_object(v___x_2607_);
v___x_2812_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2813_ = lean_nat_add(v___x_2812_, v_size_2754_);
lean_dec(v_size_2754_);
v___x_2814_ = lean_nat_add(v___x_2812_, v_size_2770_);
lean_dec(v___x_2812_);
lean_inc_ref(v_l_2604_);
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 4, v_l_2757_);
lean_ctor_set(v___x_2768_, 3, v_l_2604_);
lean_ctor_set(v___x_2768_, 2, v_v_2603_);
lean_ctor_set(v___x_2768_, 1, v_k_2602_);
lean_ctor_set(v___x_2768_, 0, v___x_2814_);
v___x_2816_ = v___x_2768_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v_l_2604_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_l_2757_);
v___x_2816_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
v_isSharedCheck_2823_ = !lean_is_exclusive(v_l_2604_);
if (v_isSharedCheck_2823_ == 0)
{
lean_object* v_unused_2824_; lean_object* v_unused_2825_; lean_object* v_unused_2826_; lean_object* v_unused_2827_; lean_object* v_unused_2828_; 
v_unused_2824_ = lean_ctor_get(v_l_2604_, 4);
lean_dec(v_unused_2824_);
v_unused_2825_ = lean_ctor_get(v_l_2604_, 3);
lean_dec(v_unused_2825_);
v_unused_2826_ = lean_ctor_get(v_l_2604_, 2);
lean_dec(v_unused_2826_);
v_unused_2827_ = lean_ctor_get(v_l_2604_, 1);
lean_dec(v_unused_2827_);
v_unused_2828_ = lean_ctor_get(v_l_2604_, 0);
lean_dec(v_unused_2828_);
v___x_2818_ = v_l_2604_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_dec(v_l_2604_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 4, v_r_2758_);
lean_ctor_set(v___x_2818_, 3, v___x_2816_);
lean_ctor_set(v___x_2818_, 2, v_v_2756_);
lean_ctor_set(v___x_2818_, 1, v_k_2755_);
lean_ctor_set(v___x_2818_, 0, v___x_2813_);
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2813_);
lean_ctor_set(v_reuseFailAlloc_2822_, 1, v_k_2755_);
lean_ctor_set(v_reuseFailAlloc_2822_, 2, v_v_2756_);
lean_ctor_set(v_reuseFailAlloc_2822_, 3, v___x_2816_);
lean_ctor_set(v_reuseFailAlloc_2822_, 4, v_r_2758_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2836_; 
v_l_2836_ = lean_ctor_get(v_impl_2751_, 3);
lean_inc(v_l_2836_);
if (lean_obj_tag(v_l_2836_) == 0)
{
lean_object* v_r_2837_; lean_object* v_k_2838_; lean_object* v_v_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2862_; 
v_r_2837_ = lean_ctor_get(v_impl_2751_, 4);
v_k_2838_ = lean_ctor_get(v_impl_2751_, 1);
v_v_2839_ = lean_ctor_get(v_impl_2751_, 2);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; lean_object* v_unused_2864_; 
v_unused_2863_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2863_);
v_unused_2864_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2864_);
v___x_2841_ = v_impl_2751_;
v_isShared_2842_ = v_isSharedCheck_2862_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_r_2837_);
lean_inc(v_v_2839_);
lean_inc(v_k_2838_);
lean_dec(v_impl_2751_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2862_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v_k_2843_; lean_object* v_v_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2858_; 
v_k_2843_ = lean_ctor_get(v_l_2836_, 1);
v_v_2844_ = lean_ctor_get(v_l_2836_, 2);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_l_2836_);
if (v_isSharedCheck_2858_ == 0)
{
lean_object* v_unused_2859_; lean_object* v_unused_2860_; lean_object* v_unused_2861_; 
v_unused_2859_ = lean_ctor_get(v_l_2836_, 4);
lean_dec(v_unused_2859_);
v_unused_2860_ = lean_ctor_get(v_l_2836_, 3);
lean_dec(v_unused_2860_);
v_unused_2861_ = lean_ctor_get(v_l_2836_, 0);
lean_dec(v_unused_2861_);
v___x_2846_ = v_l_2836_;
v_isShared_2847_ = v_isSharedCheck_2858_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_v_2844_);
lean_inc(v_k_2843_);
lean_dec(v_l_2836_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2858_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2848_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2837_, 2);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 4, v_r_2837_);
lean_ctor_set(v___x_2846_, 3, v_r_2837_);
lean_ctor_set(v___x_2846_, 2, v_v_2603_);
lean_ctor_set(v___x_2846_, 1, v_k_2602_);
lean_ctor_set(v___x_2846_, 0, v___x_2752_);
v___x_2850_ = v___x_2846_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2857_, 3, v_r_2837_);
lean_ctor_set(v_reuseFailAlloc_2857_, 4, v_r_2837_);
v___x_2850_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2852_; 
lean_inc(v_r_2837_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 3, v_r_2837_);
lean_ctor_set(v___x_2841_, 0, v___x_2752_);
v___x_2852_ = v___x_2841_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v_k_2838_);
lean_ctor_set(v_reuseFailAlloc_2856_, 2, v_v_2839_);
lean_ctor_set(v_reuseFailAlloc_2856_, 3, v_r_2837_);
lean_ctor_set(v_reuseFailAlloc_2856_, 4, v_r_2837_);
v___x_2852_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
lean_object* v___x_2854_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v___x_2852_);
lean_ctor_set(v___x_2607_, 3, v___x_2850_);
lean_ctor_set(v___x_2607_, 2, v_v_2844_);
lean_ctor_set(v___x_2607_, 1, v_k_2843_);
lean_ctor_set(v___x_2607_, 0, v___x_2848_);
v___x_2854_ = v___x_2607_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v_k_2843_);
lean_ctor_set(v_reuseFailAlloc_2855_, 2, v_v_2844_);
lean_ctor_set(v_reuseFailAlloc_2855_, 3, v___x_2850_);
lean_ctor_set(v_reuseFailAlloc_2855_, 4, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
}
}
else
{
lean_object* v_r_2865_; 
v_r_2865_ = lean_ctor_get(v_impl_2751_, 4);
lean_inc(v_r_2865_);
if (lean_obj_tag(v_r_2865_) == 0)
{
lean_object* v_k_2866_; lean_object* v_v_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2878_; 
v_k_2866_ = lean_ctor_get(v_impl_2751_, 1);
v_v_2867_ = lean_ctor_get(v_impl_2751_, 2);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; lean_object* v_unused_2880_; lean_object* v_unused_2881_; 
v_unused_2879_ = lean_ctor_get(v_impl_2751_, 4);
lean_dec(v_unused_2879_);
v_unused_2880_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2880_);
v_unused_2881_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2881_);
v___x_2869_ = v_impl_2751_;
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_v_2867_);
lean_inc(v_k_2866_);
lean_dec(v_impl_2751_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2873_; 
v___x_2871_ = lean_unsigned_to_nat(3u);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 4, v_l_2836_);
lean_ctor_set(v___x_2869_, 2, v_v_2603_);
lean_ctor_set(v___x_2869_, 1, v_k_2602_);
lean_ctor_set(v___x_2869_, 0, v___x_2752_);
v___x_2873_ = v___x_2869_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2877_, 3, v_l_2836_);
lean_ctor_set(v_reuseFailAlloc_2877_, 4, v_l_2836_);
v___x_2873_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2875_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_r_2865_);
lean_ctor_set(v___x_2607_, 3, v___x_2873_);
lean_ctor_set(v___x_2607_, 2, v_v_2867_);
lean_ctor_set(v___x_2607_, 1, v_k_2866_);
lean_ctor_set(v___x_2607_, 0, v___x_2871_);
v___x_2875_ = v___x_2607_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v_k_2866_);
lean_ctor_set(v_reuseFailAlloc_2876_, 2, v_v_2867_);
lean_ctor_set(v_reuseFailAlloc_2876_, 3, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2876_, 4, v_r_2865_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2884_; 
v___x_2882_ = lean_unsigned_to_nat(2u);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 4, v_impl_2751_);
lean_ctor_set(v___x_2607_, 3, v_r_2865_);
lean_ctor_set(v___x_2607_, 0, v___x_2882_);
v___x_2884_ = v___x_2607_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v___x_2882_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_k_2602_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_v_2603_);
lean_ctor_set(v_reuseFailAlloc_2885_, 3, v_r_2865_);
lean_ctor_set(v_reuseFailAlloc_2885_, 4, v_impl_2751_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
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
lean_object* v___x_2887_; lean_object* v___x_2888_; 
lean_dec_ref(v_cmp_2597_);
v___x_2887_ = lean_unsigned_to_nat(1u);
v___x_2888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
lean_ctor_set(v___x_2888_, 1, v_k_2598_);
lean_ctor_set(v___x_2888_, 2, v_v_2599_);
lean_ctor_set(v___x_2888_, 3, v_t_2600_);
lean_ctor_set(v___x_2888_, 4, v_t_2600_);
return v___x_2888_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(lean_object* v_cmp_2889_, lean_object* v_init_2890_, lean_object* v_x_2891_){
_start:
{
if (lean_obj_tag(v_x_2891_) == 0)
{
lean_object* v_k_2892_; lean_object* v_v_2893_; lean_object* v_l_2894_; lean_object* v_r_2895_; lean_object* v___x_2896_; 
v_k_2892_ = lean_ctor_get(v_x_2891_, 1);
lean_inc(v_k_2892_);
v_v_2893_ = lean_ctor_get(v_x_2891_, 2);
lean_inc(v_v_2893_);
v_l_2894_ = lean_ctor_get(v_x_2891_, 3);
lean_inc(v_l_2894_);
v_r_2895_ = lean_ctor_get(v_x_2891_, 4);
lean_inc(v_r_2895_);
lean_dec_ref_known(v_x_2891_, 5);
lean_inc_ref(v_cmp_2889_);
v___x_2896_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(v_cmp_2889_, v_init_2890_, v_l_2894_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_dec(v_r_2895_);
lean_dec(v_v_2893_);
lean_dec(v_k_2892_);
lean_dec_ref(v_cmp_2889_);
return v___x_2896_;
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2898_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
v___x_2898_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentEdit_fromJson_spec__1_spec__1(v_v_2893_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
lean_dec(v_a_2897_);
lean_dec(v_r_2895_);
lean_dec(v_k_2892_);
lean_dec_ref(v_cmp_2889_);
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2898_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2898_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2907_);
lean_dec_ref_known(v___x_2898_, 1);
lean_inc_ref(v_cmp_2889_);
v___x_2908_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2889_, v_k_2892_, v_a_2907_, v_a_2897_);
v_init_2890_ = v___x_2908_;
v_x_2891_ = v_r_2895_;
goto _start;
}
}
}
else
{
lean_object* v___x_2910_; 
lean_dec_ref(v_cmp_2889_);
v___x_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_init_2890_);
return v___x_2910_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(lean_object* v_cmp_2911_, lean_object* v_j_2912_){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = l_Lean_Json_getObj_x3f(v_j_2912_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec_ref(v_cmp_2911_);
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2913_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2913_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_a_2922_ = lean_ctor_get(v___x_2913_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2913_, 1);
v___x_2923_ = lean_box(1);
v___x_2924_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7_spec__11(v_cmp_2911_, v___x_2923_, v_a_2922_);
return v___x_2924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(lean_object* v_x_2928_){
_start:
{
if (lean_obj_tag(v_x_2928_) == 0)
{
lean_object* v___x_2929_; 
v___x_2929_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0));
return v___x_2929_;
}
else
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1));
v___x_2931_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4_spec__7(v___x_2930_, v_x_2928_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2948_; 
v_a_2940_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2942_ = v___x_2931_;
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2931_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2944_, 0, v_a_2940_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2944_);
v___x_2946_ = v___x_2942_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2944_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(lean_object* v_j_2949_, lean_object* v_k_2950_){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = l_Lean_Json_getObjValD(v_j_2949_, v_k_2950_);
v___x_2952_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4(v___x_2951_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2___boxed(lean_object* v_j_2953_, lean_object* v_k_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(v_j_2953_, v_k_2954_);
lean_dec_ref(v_k_2954_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(lean_object* v_cmp_2956_, lean_object* v_init_2957_, lean_object* v_x_2958_){
_start:
{
if (lean_obj_tag(v_x_2958_) == 0)
{
lean_object* v_k_2959_; lean_object* v_v_2960_; lean_object* v_l_2961_; lean_object* v_r_2962_; lean_object* v___x_2963_; 
v_k_2959_ = lean_ctor_get(v_x_2958_, 1);
lean_inc(v_k_2959_);
v_v_2960_ = lean_ctor_get(v_x_2958_, 2);
lean_inc(v_v_2960_);
v_l_2961_ = lean_ctor_get(v_x_2958_, 3);
lean_inc(v_l_2961_);
v_r_2962_ = lean_ctor_get(v_x_2958_, 4);
lean_inc(v_r_2962_);
lean_dec_ref_known(v_x_2958_, 5);
lean_inc_ref(v_cmp_2956_);
v___x_2963_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(v_cmp_2956_, v_init_2957_, v_l_2961_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_dec(v_r_2962_);
lean_dec(v_v_2960_);
lean_dec(v_k_2959_);
lean_dec_ref(v_cmp_2956_);
return v___x_2963_;
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2965_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2963_, 1);
v___x_2965_ = l_Lean_Lsp_instFromJsonChangeAnnotation_fromJson(v_v_2960_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
lean_dec(v_a_2964_);
lean_dec(v_r_2962_);
lean_dec(v_k_2959_);
lean_dec_ref(v_cmp_2956_);
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2965_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2965_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2975_; 
v_a_2974_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2965_, 1);
lean_inc_ref(v_cmp_2956_);
v___x_2975_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_2956_, v_k_2959_, v_a_2974_, v_a_2964_);
v_init_2957_ = v___x_2975_;
v_x_2958_ = v_r_2962_;
goto _start;
}
}
}
else
{
lean_object* v___x_2977_; 
lean_dec_ref(v_cmp_2956_);
v___x_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2977_, 0, v_init_2957_);
return v___x_2977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(lean_object* v_cmp_2978_, lean_object* v_j_2979_){
_start:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lean_Json_getObj_x3f(v_j_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
lean_dec_ref(v_cmp_2978_);
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_a_2989_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2980_, 1);
v___x_2990_ = lean_box(1);
v___x_2991_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__8(v_cmp_2978_, v___x_2990_, v_a_2989_);
return v___x_2991_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(lean_object* v_x_2992_){
_start:
{
if (lean_obj_tag(v_x_2992_) == 0)
{
lean_object* v___x_2993_; 
v___x_2993_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__0));
return v___x_2993_;
}
else
{
lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2994_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2_spec__4___closed__1));
v___x_2995_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4(v___x_2994_, v_x_2992_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3012_; 
v_a_3004_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3006_ = v___x_2995_;
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2995_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3008_; lean_object* v___x_3010_; 
v___x_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3008_, 0, v_a_3004_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v___x_3008_);
v___x_3010_ = v___x_3006_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3008_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(lean_object* v_j_3013_, lean_object* v_k_3014_){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3015_ = l_Lean_Json_getObjValD(v_j_3013_, v_k_3014_);
v___x_3016_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2(v___x_3015_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1___boxed(lean_object* v_j_3017_, lean_object* v_k_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(v_j_3017_, v_k_3018_);
lean_dec_ref(v_k_3018_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(lean_object* v_kind_3020_){
_start:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3021_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentChange___lam__0___closed__0));
v___x_3022_ = lean_unsigned_to_nat(80u);
v___x_3023_ = l_Lean_Json_pretty(v_kind_3020_, v___x_3022_);
v___x_3024_ = lean_string_append(v___x_3021_, v___x_3023_);
lean_dec_ref(v___x_3023_);
v___x_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(size_t v_sz_3026_, size_t v_i_3027_, lean_object* v_bs_3028_){
_start:
{
uint8_t v___x_3029_; 
v___x_3029_ = lean_usize_dec_lt(v_i_3027_, v_sz_3026_);
if (v___x_3029_ == 0)
{
lean_object* v___x_3030_; 
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v_bs_3028_);
return v___x_3030_;
}
else
{
lean_object* v_v_3031_; lean_object* v___x_3032_; lean_object* v_bs_x27_3033_; lean_object* v_a_3035_; lean_object* v___y_3053_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v_v_3031_ = lean_array_uget(v_bs_3028_, v_i_3027_);
v___x_3032_ = lean_unsigned_to_nat(0u);
v_bs_x27_3033_ = lean_array_uset(v_bs_3028_, v_i_3027_, v___x_3032_);
v___x_3055_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v_v_3031_);
v___x_3056_ = l_Lean_Json_getObjVal_x3f(v_v_3031_, v___x_3055_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_dec_ref_known(v___x_3056_, 1);
goto v___jp_3040_;
}
else
{
lean_object* v_a_3057_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
if (lean_obj_tag(v_a_3057_) == 3)
{
lean_object* v_s_3058_; lean_object* v___x_3059_; uint8_t v___x_3060_; 
v_s_3058_ = lean_ctor_get(v_a_3057_, 0);
v___x_3059_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__1));
v___x_3060_ = lean_string_dec_eq(v_s_3058_, v___x_3059_);
if (v___x_3060_ == 0)
{
lean_object* v___x_3061_; uint8_t v___x_3062_; 
v___x_3061_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__3));
v___x_3062_ = lean_string_dec_eq(v_s_3058_, v___x_3061_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3063_; uint8_t v___x_3064_; 
v___x_3063_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__5));
v___x_3064_ = lean_string_dec_eq(v_s_3058_, v___x_3063_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; 
v___x_3065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(v_a_3057_);
v___y_3053_ = v___x_3065_;
goto v___jp_3052_;
}
else
{
lean_object* v___x_3066_; 
lean_dec_ref_known(v_a_3057_, 1);
lean_inc(v_v_3031_);
v___x_3066_ = l_Lean_Lsp_instFromJsonDeleteFile_fromJson(v_v_3031_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_dec_ref_known(v___x_3066_, 1);
goto v___jp_3040_;
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec(v_v_3031_);
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3066_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
lean_ctor_set_tag(v___x_3069_, 2);
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
v_a_3035_ = v___x_3072_;
goto v___jp_3034_;
}
}
}
}
}
else
{
lean_object* v___x_3075_; 
lean_dec_ref_known(v_a_3057_, 1);
lean_inc(v_v_3031_);
v___x_3075_ = l_Lean_Lsp_instFromJsonRenameFile_fromJson(v_v_3031_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_dec_ref_known(v___x_3075_, 1);
goto v___jp_3040_;
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_v_3031_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
v_a_3035_ = v___x_3081_;
goto v___jp_3034_;
}
}
}
}
}
else
{
lean_object* v___x_3084_; 
lean_dec_ref_known(v_a_3057_, 1);
lean_inc(v_v_3031_);
v___x_3084_ = l_Lean_Lsp_instFromJsonCreateFile_fromJson(v_v_3031_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_dec_ref_known(v___x_3084_, 1);
goto v___jp_3040_;
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec(v_v_3031_);
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3084_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3084_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set_tag(v___x_3087_, 0);
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
v_a_3035_ = v___x_3090_;
goto v___jp_3034_;
}
}
}
}
}
else
{
lean_object* v___x_3093_; 
v___x_3093_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___lam__0(v_a_3057_);
v___y_3053_ = v___x_3093_;
goto v___jp_3052_;
}
}
v___jp_3034_:
{
size_t v___x_3036_; size_t v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = ((size_t)1ULL);
v___x_3037_ = lean_usize_add(v_i_3027_, v___x_3036_);
v___x_3038_ = lean_array_uset(v_bs_x27_3033_, v_i_3027_, v_a_3035_);
v_i_3027_ = v___x_3037_;
v_bs_3028_ = v___x_3038_;
goto _start;
}
v___jp_3040_:
{
lean_object* v___x_3041_; 
v___x_3041_ = l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson(v_v_3031_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref(v_bs_x27_3033_);
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3041_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3041_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3041_, 1);
v___x_3051_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3051_, 0, v_a_3050_);
v_a_3035_ = v___x_3051_;
goto v___jp_3034_;
}
}
v___jp_3052_:
{
if (lean_obj_tag(v___y_3053_) == 0)
{
lean_dec_ref_known(v___y_3053_, 1);
goto v___jp_3040_;
}
else
{
lean_object* v_a_3054_; 
lean_dec(v_v_3031_);
v_a_3054_ = lean_ctor_get(v___y_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref_known(v___y_3053_, 1);
v_a_3035_ = v_a_3054_;
goto v___jp_3034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_sz_3094_, lean_object* v_i_3095_, lean_object* v_bs_3096_){
_start:
{
size_t v_sz_boxed_3097_; size_t v_i_boxed_3098_; lean_object* v_res_3099_; 
v_sz_boxed_3097_ = lean_unbox_usize(v_sz_3094_);
lean_dec(v_sz_3094_);
v_i_boxed_3098_ = lean_unbox_usize(v_i_3095_);
lean_dec(v_i_3095_);
v_res_3099_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_boxed_3097_, v_i_boxed_3098_, v_bs_3096_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_3100_){
_start:
{
if (lean_obj_tag(v_x_3100_) == 4)
{
lean_object* v_elems_3101_; size_t v_sz_3102_; size_t v___x_3103_; lean_object* v___x_3104_; 
v_elems_3101_ = lean_ctor_get(v_x_3100_, 0);
lean_inc_ref(v_elems_3101_);
lean_dec_ref_known(v_x_3100_, 1);
v_sz_3102_ = lean_array_size(v_elems_3101_);
v___x_3103_ = ((size_t)0ULL);
v___x_3104_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_3102_, v___x_3103_, v_elems_3101_);
return v___x_3104_;
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3105_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_3106_ = lean_unsigned_to_nat(80u);
v___x_3107_ = l_Lean_Json_pretty(v_x_3100_, v___x_3106_);
v___x_3108_ = lean_string_append(v___x_3105_, v___x_3107_);
lean_dec_ref(v___x_3107_);
v___x_3109_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_3110_ = lean_string_append(v___x_3108_, v___x_3109_);
v___x_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
return v___x_3111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(lean_object* v_x_3114_){
_start:
{
if (lean_obj_tag(v_x_3114_) == 0)
{
lean_object* v___x_3115_; 
v___x_3115_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0___closed__0));
return v___x_3115_;
}
else
{
lean_object* v___x_3116_; 
v___x_3116_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0_spec__1(v_x_3114_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3116_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3116_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3133_; 
v_a_3125_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3127_ = v___x_3116_;
v_isShared_3128_ = v_isSharedCheck_3133_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3116_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3133_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3129_, 0, v_a_3125_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v___x_3129_);
v___x_3131_ = v___x_3127_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3129_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(lean_object* v_j_3134_, lean_object* v_k_3135_){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = l_Lean_Json_getObjValD(v_j_3134_, v_k_3135_);
v___x_3137_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0_spec__0(v___x_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0___boxed(lean_object* v_j_3138_, lean_object* v_k_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(v_j_3138_, v_k_3139_);
lean_dec_ref(v_k_3139_);
return v_res_3140_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3146_ = 1;
v___x_3147_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__1));
v___x_3148_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3147_, v___x_3146_);
return v___x_3148_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3149_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3150_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__2);
v___x_3151_ = lean_string_append(v___x_3150_, v___x_3149_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3155_ = 1;
v___x_3156_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__5));
v___x_3157_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3156_, v___x_3155_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__6);
v___x_3159_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3160_ = lean_string_append(v___x_3159_, v___x_3158_);
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3161_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3162_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__7);
v___x_3163_ = lean_string_append(v___x_3162_, v___x_3161_);
return v___x_3163_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3167_ = 1;
v___x_3168_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__10));
v___x_3169_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3168_, v___x_3167_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__11);
v___x_3171_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3172_ = lean_string_append(v___x_3171_, v___x_3170_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3174_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__12);
v___x_3175_ = lean_string_append(v___x_3174_, v___x_3173_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16(void){
_start:
{
uint8_t v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = 1;
v___x_3180_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__15));
v___x_3181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3180_, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__16);
v___x_3183_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__3);
v___x_3184_ = lean_string_append(v___x_3183_, v___x_3182_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3186_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__17);
v___x_3187_ = lean_string_append(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(lean_object* v_json_3188_){
_start:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__0));
lean_inc(v_json_3188_);
v___x_3190_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__2(v_json_3188_, v___x_3189_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3200_; 
lean_dec(v_json_3188_);
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3193_ = v___x_3190_;
v_isShared_3194_ = v_isSharedCheck_3200_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3190_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3200_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3195_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__8);
v___x_3196_ = lean_string_append(v___x_3195_, v_a_3191_);
lean_dec(v_a_3191_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 0, v___x_3196_);
v___x_3198_ = v___x_3193_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
else
{
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec(v_json_3188_);
v_a_3201_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3190_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3190_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 0);
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v_a_3209_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v___x_3190_, 1);
v___x_3210_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__1));
lean_inc(v_json_3188_);
v___x_3211_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__0(v_json_3188_, v___x_3210_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3221_; 
lean_dec(v_a_3209_);
lean_dec(v_json_3188_);
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3214_ = v___x_3211_;
v_isShared_3215_ = v_isSharedCheck_3221_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3221_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3219_; 
v___x_3216_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__13);
v___x_3217_ = lean_string_append(v___x_3216_, v_a_3212_);
lean_dec(v_a_3212_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 0, v___x_3217_);
v___x_3219_ = v___x_3214_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3217_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
else
{
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec(v_a_3209_);
lean_dec(v_json_3188_);
v_a_3222_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3211_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3211_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
lean_ctor_set_tag(v___x_3224_, 0);
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_a_3230_ = lean_ctor_get(v___x_3211_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3211_, 1);
v___x_3231_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkspaceEdit_toJson___closed__2));
v___x_3232_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1(v_json_3188_, v___x_3231_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_a_3230_);
lean_dec(v_a_3209_);
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3242_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3242_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3240_; 
v___x_3237_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18, &l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson___closed__18);
v___x_3238_ = lean_string_append(v___x_3237_, v_a_3233_);
lean_dec(v_a_3233_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3238_);
v___x_3240_ = v___x_3235_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___x_3238_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
else
{
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
lean_dec(v_a_3230_);
lean_dec(v_a_3209_);
v_a_3243_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3232_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3232_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
lean_ctor_set_tag(v___x_3245_, 0);
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3259_; 
v_a_3251_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3253_ = v___x_3232_;
v_isShared_3254_ = v_isSharedCheck_3259_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3232_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3259_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3255_; lean_object* v___x_3257_; 
v___x_3255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3255_, 0, v_a_3209_);
lean_ctor_set(v___x_3255_, 1, v_a_3230_);
lean_ctor_set(v___x_3255_, 2, v_a_3251_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set(v___x_3253_, 0, v___x_3255_);
v___x_3257_ = v___x_3253_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3255_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7(lean_object* v_cmp_3260_, lean_object* v_00_u03b2_3261_, lean_object* v_k_3262_, lean_object* v_v_3263_, lean_object* v_t_3264_, lean_object* v_hl_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonWorkspaceEdit_fromJson_spec__1_spec__2_spec__4_spec__7___redArg(v_cmp_3260_, v_k_3262_, v_v_3263_, v_t_3264_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(lean_object* v_b_u2082_3272_, lean_object* v_x_3273_){
_start:
{
lean_object* v___x_3274_; 
v___x_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3274_, 0, v_b_u2082_3272_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed(lean_object* v_b_u2082_3275_, lean_object* v_x_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0(v_b_u2082_3275_, v_x_3276_);
lean_dec(v_x_3276_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__1(lean_object* v___x_3278_, lean_object* v_t_3279_, lean_object* v_a_3280_, lean_object* v_b_u2082_3281_){
_start:
{
lean_object* v___f_3282_; lean_object* v___x_3283_; 
v___f_3282_ = lean_alloc_closure((void*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3282_, 0, v_b_u2082_3281_);
v___x_3283_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___x_3278_, v_a_3280_, v___f_3282_, v_t_3279_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2(lean_object* v_b_u2082_3284_, lean_object* v_x_3285_){
_start:
{
if (lean_obj_tag(v_x_3285_) == 0)
{
lean_object* v___x_3286_; 
v___x_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3286_, 0, v_b_u2082_3284_);
return v___x_3286_;
}
else
{
lean_object* v_val_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3295_; 
v_val_3287_ = lean_ctor_get(v_x_3285_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_x_3285_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3289_ = v_x_3285_;
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_val_3287_);
lean_dec(v_x_3285_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3295_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3291_; lean_object* v___x_3293_; 
v___x_3291_ = l_Array_append___redArg(v_val_3287_, v_b_u2082_3284_);
lean_dec_ref(v_b_u2082_3284_);
if (v_isShared_3290_ == 0)
{
lean_ctor_set(v___x_3289_, 0, v___x_3291_);
v___x_3293_ = v___x_3289_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3291_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__3(lean_object* v___x_3296_, lean_object* v_t_3297_, lean_object* v_a_3298_, lean_object* v_b_u2082_3299_){
_start:
{
lean_object* v___f_3300_; lean_object* v___x_3301_; 
v___f_3300_ = lean_alloc_closure((void*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__2), 2, 1);
lean_closure_set(v___f_3300_, 0, v_b_u2082_3299_);
v___x_3301_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___x_3296_, v_a_3298_, v___f_3300_, v_t_3297_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4(lean_object* v_x_3306_, lean_object* v_y_3307_){
_start:
{
lean_object* v_changes_x3f_3308_; lean_object* v_documentChanges_x3f_3309_; lean_object* v_changeAnnotations_x3f_3310_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3349_; 
v_changes_x3f_3308_ = lean_ctor_get(v_y_3307_, 0);
lean_inc(v_changes_x3f_3308_);
v_documentChanges_x3f_3309_ = lean_ctor_get(v_y_3307_, 1);
lean_inc(v_documentChanges_x3f_3309_);
v_changeAnnotations_x3f_3310_ = lean_ctor_get(v_y_3307_, 2);
lean_inc(v_changeAnnotations_x3f_3310_);
lean_dec_ref(v_y_3307_);
if (lean_obj_tag(v_changes_x3f_3308_) == 0)
{
lean_object* v_changes_x3f_3362_; 
v_changes_x3f_3362_ = lean_ctor_get(v_x_3306_, 0);
lean_inc(v_changes_x3f_3362_);
v___y_3349_ = v_changes_x3f_3362_;
goto v___jp_3348_;
}
else
{
lean_object* v_changes_x3f_3363_; 
v_changes_x3f_3363_ = lean_ctor_get(v_x_3306_, 0);
lean_inc(v_changes_x3f_3363_);
if (lean_obj_tag(v_changes_x3f_3363_) == 0)
{
v___y_3349_ = v_changes_x3f_3308_;
goto v___jp_3348_;
}
else
{
lean_object* v_val_3364_; lean_object* v_val_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3374_; 
v_val_3364_ = lean_ctor_get(v_changes_x3f_3308_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v_changes_x3f_3308_, 1);
v_val_3365_ = lean_ctor_get(v_changes_x3f_3363_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v_changes_x3f_3363_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3367_ = v_changes_x3f_3363_;
v_isShared_3368_ = v_isSharedCheck_3374_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_val_3365_);
lean_dec(v_changes_x3f_3363_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3374_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___f_3369_; lean_object* v___x_3370_; lean_object* v___x_3372_; 
v___f_3369_ = ((lean_object*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__1));
v___x_3370_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_3369_, v_val_3365_, v_val_3364_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v___x_3370_);
v___x_3372_ = v___x_3367_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3370_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
v___y_3349_ = v___x_3372_;
goto v___jp_3348_;
}
}
}
}
v___jp_3311_:
{
if (lean_obj_tag(v_changeAnnotations_x3f_3310_) == 0)
{
lean_object* v_changeAnnotations_x3f_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
v_changeAnnotations_x3f_3314_ = lean_ctor_get(v_x_3306_, 2);
v_isSharedCheck_3321_ = !lean_is_exclusive(v_x_3306_);
if (v_isSharedCheck_3321_ == 0)
{
lean_object* v_unused_3322_; lean_object* v_unused_3323_; 
v_unused_3322_ = lean_ctor_get(v_x_3306_, 1);
lean_dec(v_unused_3322_);
v_unused_3323_ = lean_ctor_get(v_x_3306_, 0);
lean_dec(v_unused_3323_);
v___x_3316_ = v_x_3306_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_changeAnnotations_x3f_3314_);
lean_dec(v_x_3306_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 1, v___y_3313_);
lean_ctor_set(v___x_3316_, 0, v___y_3312_);
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v___y_3312_);
lean_ctor_set(v_reuseFailAlloc_3320_, 1, v___y_3313_);
lean_ctor_set(v_reuseFailAlloc_3320_, 2, v_changeAnnotations_x3f_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
else
{
lean_object* v_changeAnnotations_x3f_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3345_; 
v_changeAnnotations_x3f_3324_ = lean_ctor_get(v_x_3306_, 2);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_x_3306_);
if (v_isSharedCheck_3345_ == 0)
{
lean_object* v_unused_3346_; lean_object* v_unused_3347_; 
v_unused_3346_ = lean_ctor_get(v_x_3306_, 1);
lean_dec(v_unused_3346_);
v_unused_3347_ = lean_ctor_get(v_x_3306_, 0);
lean_dec(v_unused_3347_);
v___x_3326_ = v_x_3306_;
v_isShared_3327_ = v_isSharedCheck_3345_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_changeAnnotations_x3f_3324_);
lean_dec(v_x_3306_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3345_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
if (lean_obj_tag(v_changeAnnotations_x3f_3324_) == 0)
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 2, v_changeAnnotations_x3f_3310_);
lean_ctor_set(v___x_3326_, 1, v___y_3313_);
lean_ctor_set(v___x_3326_, 0, v___y_3312_);
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v___y_3312_);
lean_ctor_set(v_reuseFailAlloc_3330_, 1, v___y_3313_);
lean_ctor_set(v_reuseFailAlloc_3330_, 2, v_changeAnnotations_x3f_3310_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
else
{
lean_object* v_val_3331_; lean_object* v_val_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3344_; 
v_val_3331_ = lean_ctor_get(v_changeAnnotations_x3f_3310_, 0);
lean_inc(v_val_3331_);
lean_dec_ref_known(v_changeAnnotations_x3f_3310_, 1);
v_val_3332_ = lean_ctor_get(v_changeAnnotations_x3f_3324_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v_changeAnnotations_x3f_3324_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3334_ = v_changeAnnotations_x3f_3324_;
v_isShared_3335_ = v_isSharedCheck_3344_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_val_3332_);
lean_dec(v_changeAnnotations_x3f_3324_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3344_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___f_3336_; lean_object* v___x_3337_; lean_object* v___x_3339_; 
v___f_3336_ = ((lean_object*)(l_Lean_Lsp_WorkspaceEdit_instAppend___lam__4___closed__0));
v___x_3337_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_3336_, v_val_3332_, v_val_3331_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v___x_3337_);
v___x_3339_ = v___x_3334_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3341_; 
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 2, v___x_3339_);
lean_ctor_set(v___x_3326_, 1, v___y_3313_);
lean_ctor_set(v___x_3326_, 0, v___y_3312_);
v___x_3341_ = v___x_3326_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___y_3312_);
lean_ctor_set(v_reuseFailAlloc_3342_, 1, v___y_3313_);
lean_ctor_set(v_reuseFailAlloc_3342_, 2, v___x_3339_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
}
}
}
v___jp_3348_:
{
if (lean_obj_tag(v_documentChanges_x3f_3309_) == 0)
{
lean_object* v_documentChanges_x3f_3350_; 
v_documentChanges_x3f_3350_ = lean_ctor_get(v_x_3306_, 1);
lean_inc(v_documentChanges_x3f_3350_);
v___y_3312_ = v___y_3349_;
v___y_3313_ = v_documentChanges_x3f_3350_;
goto v___jp_3311_;
}
else
{
lean_object* v_documentChanges_x3f_3351_; 
v_documentChanges_x3f_3351_ = lean_ctor_get(v_x_3306_, 1);
lean_inc(v_documentChanges_x3f_3351_);
if (lean_obj_tag(v_documentChanges_x3f_3351_) == 0)
{
v___y_3312_ = v___y_3349_;
v___y_3313_ = v_documentChanges_x3f_3309_;
goto v___jp_3311_;
}
else
{
lean_object* v_val_3352_; lean_object* v_val_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3361_; 
v_val_3352_ = lean_ctor_get(v_documentChanges_x3f_3309_, 0);
lean_inc(v_val_3352_);
lean_dec_ref_known(v_documentChanges_x3f_3309_, 1);
v_val_3353_ = lean_ctor_get(v_documentChanges_x3f_3351_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_documentChanges_x3f_3351_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3355_ = v_documentChanges_x3f_3351_;
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_val_3353_);
lean_dec(v_documentChanges_x3f_3351_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3357_; lean_object* v___x_3359_; 
v___x_3357_ = l_Array_append___redArg(v_val_3353_, v_val_3352_);
lean_dec(v_val_3352_);
if (v_isShared_3356_ == 0)
{
lean_ctor_set(v___x_3355_, 0, v___x_3357_);
v___x_3359_ = v___x_3355_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
v___y_3312_ = v___y_3349_;
v___y_3313_ = v___x_3359_;
goto v___jp_3311_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(lean_object* v_e_3377_){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3378_ = lean_box(0);
v___x_3379_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3379_, 0, v_e_3377_);
v___x_3380_ = lean_unsigned_to_nat(1u);
v___x_3381_ = lean_mk_empty_array_with_capacity(v___x_3380_);
v___x_3382_ = lean_array_push(v___x_3381_, v___x_3379_);
v___x_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3382_);
v___x_3384_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3378_);
lean_ctor_set(v___x_3384_, 1, v___x_3383_);
lean_ctor_set(v___x_3384_, 2, v___x_3378_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_WorkspaceEdit_ofTextEdit(lean_object* v_doc_3385_, lean_object* v_te_3386_){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3387_ = lean_unsigned_to_nat(1u);
v___x_3388_ = lean_mk_empty_array_with_capacity(v___x_3387_);
v___x_3389_ = lean_array_push(v___x_3388_, v_te_3386_);
v___x_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3390_, 0, v_doc_3385_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = l_Lean_Lsp_WorkspaceEdit_ofTextDocumentEdit(v___x_3390_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson(lean_object* v_x_3393_){
_start:
{
lean_object* v_label_x3f_3394_; lean_object* v_edit_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3413_; 
v_label_x3f_3394_ = lean_ctor_get(v_x_3393_, 0);
v_edit_3395_ = lean_ctor_get(v_x_3393_, 1);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_x_3393_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3397_ = v_x_3393_;
v_isShared_3398_ = v_isSharedCheck_3413_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_edit_3395_);
lean_inc(v_label_x3f_3394_);
lean_dec(v_x_3393_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3413_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3399_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
v___x_3400_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3399_, v_label_x3f_3394_);
v___x_3401_ = ((lean_object*)(l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0));
v___x_3402_ = l_Lean_Lsp_instToJsonWorkspaceEdit_toJson(v_edit_3395_);
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 1, v___x_3402_);
lean_ctor_set(v___x_3397_, 0, v___x_3401_);
v___x_3404_ = v___x_3397_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3401_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3405_ = lean_box(0);
v___x_3406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3404_);
lean_ctor_set(v___x_3406_, 1, v___x_3405_);
v___x_3407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
lean_ctor_set(v___x_3407_, 1, v___x_3405_);
v___x_3408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3400_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
v___x_3409_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3410_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3408_, v___x_3409_);
v___x_3411_ = l_Lean_Json_mkObj(v___x_3410_);
lean_dec(v___x_3410_);
return v___x_3411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(lean_object* v_j_3416_, lean_object* v_k_3417_){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = l_Lean_Json_getObjValD(v_j_3416_, v_k_3417_);
v___x_3419_ = l_Lean_Lsp_instFromJsonWorkspaceEdit_fromJson(v___x_3418_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0___boxed(lean_object* v_j_3420_, lean_object* v_k_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(v_j_3420_, v_k_3421_);
lean_dec_ref(v_k_3421_);
return v_res_3422_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = 1;
v___x_3429_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__1));
v___x_3430_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3429_, v___x_3428_);
return v___x_3430_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3431_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3432_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__2);
v___x_3433_ = lean_string_append(v___x_3432_, v___x_3431_);
return v___x_3433_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3437_ = 1;
v___x_3438_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__5));
v___x_3439_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3438_, v___x_3437_);
return v___x_3439_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3440_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__6);
v___x_3441_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3);
v___x_3442_ = lean_string_append(v___x_3441_, v___x_3440_);
return v___x_3442_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3444_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__7);
v___x_3445_ = lean_string_append(v___x_3444_, v___x_3443_);
return v___x_3445_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10(void){
_start:
{
uint8_t v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3448_ = 1;
v___x_3449_ = ((lean_object*)(l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__9));
v___x_3450_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3449_, v___x_3448_);
return v___x_3450_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11(void){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3451_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__10);
v___x_3452_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__3);
v___x_3453_ = lean_string_append(v___x_3452_, v___x_3451_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3455_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__11);
v___x_3456_ = lean_string_append(v___x_3455_, v___x_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson(lean_object* v_json_3457_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3458_ = ((lean_object*)(l_Lean_Lsp_instToJsonChangeAnnotation_toJson___closed__0));
lean_inc(v_json_3457_);
v___x_3459_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3457_, v___x_3458_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3469_; 
lean_dec(v_json_3457_);
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3469_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3467_; 
v___x_3464_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__8);
v___x_3465_ = lean_string_append(v___x_3464_, v_a_3460_);
lean_dec(v_a_3460_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3465_);
v___x_3467_ = v___x_3462_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3465_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
else
{
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v_json_3457_);
v_a_3470_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3459_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3459_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
lean_ctor_set_tag(v___x_3472_, 0);
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v_a_3478_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3479_ = ((lean_object*)(l_Lean_Lsp_instToJsonApplyWorkspaceEditParams_toJson___closed__0));
v___x_3480_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson_spec__0(v_json_3457_, v___x_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3490_; 
lean_dec(v_a_3478_);
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3483_ = v___x_3480_;
v_isShared_3484_ = v_isSharedCheck_3490_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3480_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3490_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v___x_3485_ = lean_obj_once(&l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonApplyWorkspaceEditParams_fromJson___closed__12);
v___x_3486_ = lean_string_append(v___x_3485_, v_a_3481_);
lean_dec(v_a_3481_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v___x_3486_);
v___x_3488_ = v___x_3483_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
lean_dec(v_a_3478_);
v_a_3491_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3480_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3480_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set_tag(v___x_3493_, 0);
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3507_; 
v_a_3499_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3501_ = v___x_3480_;
v_isShared_3502_ = v_isSharedCheck_3507_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3480_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3507_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3503_; lean_object* v___x_3505_; 
v___x_3503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3503_, 0, v_a_3478_);
lean_ctor_set(v___x_3503_, 1, v_a_3499_);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 0, v___x_3503_);
v___x_3505_ = v___x_3501_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v___x_3503_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentItem_toJson(lean_object* v_x_3512_){
_start:
{
lean_object* v_uri_3513_; lean_object* v_languageId_3514_; lean_object* v_version_3515_; lean_object* v_text_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; 
v_uri_3513_ = lean_ctor_get(v_x_3512_, 0);
lean_inc_ref(v_uri_3513_);
v_languageId_3514_ = lean_ctor_get(v_x_3512_, 1);
lean_inc_ref(v_languageId_3514_);
v_version_3515_ = lean_ctor_get(v_x_3512_, 2);
lean_inc(v_version_3515_);
v_text_3516_ = lean_ctor_get(v_x_3512_, 3);
lean_inc_ref(v_text_3516_);
lean_dec_ref(v_x_3512_);
v___x_3517_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
v___x_3518_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3518_, 0, v_uri_3513_);
v___x_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3517_);
lean_ctor_set(v___x_3519_, 1, v___x_3518_);
v___x_3520_ = lean_box(0);
v___x_3521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3519_);
lean_ctor_set(v___x_3521_, 1, v___x_3520_);
v___x_3522_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0));
v___x_3523_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3523_, 0, v_languageId_3514_);
v___x_3524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3522_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
lean_ctor_set(v___x_3525_, 1, v___x_3520_);
v___x_3526_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
v___x_3527_ = l_Lean_JsonNumber_fromNat(v_version_3515_);
v___x_3528_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
v___x_3529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3526_);
lean_ctor_set(v___x_3529_, 1, v___x_3528_);
v___x_3530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
lean_ctor_set(v___x_3530_, 1, v___x_3520_);
v___x_3531_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1));
v___x_3532_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3532_, 0, v_text_3516_);
v___x_3533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
lean_ctor_set(v___x_3534_, 1, v___x_3520_);
v___x_3535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3534_);
lean_ctor_set(v___x_3535_, 1, v___x_3520_);
v___x_3536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3530_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3525_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3521_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3540_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3538_, v___x_3539_);
v___x_3541_ = l_Lean_Json_mkObj(v___x_3540_);
lean_dec(v___x_3540_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(lean_object* v_j_3544_, lean_object* v_k_3545_){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = l_Lean_Json_getObjValD(v_j_3544_, v_k_3545_);
v___x_3547_ = l_Lean_Json_getNat_x3f(v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0___boxed(lean_object* v_j_3548_, lean_object* v_k_3549_){
_start:
{
lean_object* v_res_3550_; 
v_res_3550_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(v_j_3548_, v_k_3549_);
lean_dec_ref(v_k_3549_);
return v_res_3550_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3556_ = 1;
v___x_3557_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__1));
v___x_3558_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3557_, v___x_3556_);
return v___x_3558_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3559_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3560_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__2);
v___x_3561_ = lean_string_append(v___x_3560_, v___x_3559_);
return v___x_3561_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3562_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLocation_fromJson___closed__8);
v___x_3563_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3564_ = lean_string_append(v___x_3563_, v___x_3562_);
return v___x_3564_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3565_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3566_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__4);
v___x_3567_ = lean_string_append(v___x_3566_, v___x_3565_);
return v___x_3567_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7(void){
_start:
{
uint8_t v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3570_ = 1;
v___x_3571_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__6));
v___x_3572_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3571_, v___x_3570_);
return v___x_3572_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3573_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__7);
v___x_3574_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3575_ = lean_string_append(v___x_3574_, v___x_3573_);
return v___x_3575_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3576_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3577_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__8);
v___x_3578_ = lean_string_append(v___x_3577_, v___x_3576_);
return v___x_3578_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3581_ = 1;
v___x_3582_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__10));
v___x_3583_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3582_, v___x_3581_);
return v___x_3583_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3584_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__11);
v___x_3585_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3586_ = lean_string_append(v___x_3585_, v___x_3584_);
return v___x_3586_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3587_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3588_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__12);
v___x_3589_ = lean_string_append(v___x_3588_, v___x_3587_);
return v___x_3589_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15(void){
_start:
{
uint8_t v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3592_ = 1;
v___x_3593_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__14));
v___x_3594_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3593_, v___x_3592_);
return v___x_3594_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16(void){
_start:
{
lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3595_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__15);
v___x_3596_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__3);
v___x_3597_ = lean_string_append(v___x_3596_, v___x_3595_);
return v___x_3597_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3598_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3599_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__16);
v___x_3600_ = lean_string_append(v___x_3599_, v___x_3598_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson(lean_object* v_json_3601_){
_start:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3602_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__0));
lean_inc(v_json_3601_);
v___x_3603_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3601_, v___x_3602_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3613_; 
lean_dec(v_json_3601_);
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3606_ = v___x_3603_;
v_isShared_3607_ = v_isSharedCheck_3613_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3603_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3613_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3611_; 
v___x_3608_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__5);
v___x_3609_ = lean_string_append(v___x_3608_, v_a_3604_);
lean_dec(v_a_3604_);
if (v_isShared_3607_ == 0)
{
lean_ctor_set(v___x_3606_, 0, v___x_3609_);
v___x_3611_ = v___x_3606_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3609_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
else
{
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
lean_dec(v_json_3601_);
v_a_3614_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3603_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3603_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
lean_ctor_set_tag(v___x_3616_, 0);
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v_a_3622_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3623_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__0));
lean_inc(v_json_3601_);
v___x_3624_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3601_, v___x_3623_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3634_; 
lean_dec(v_a_3622_);
lean_dec(v_json_3601_);
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3627_ = v___x_3624_;
v_isShared_3628_ = v_isSharedCheck_3634_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3624_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3634_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3632_; 
v___x_3629_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__9);
v___x_3630_ = lean_string_append(v___x_3629_, v_a_3625_);
lean_dec(v_a_3625_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 0, v___x_3630_);
v___x_3632_ = v___x_3627_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3630_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
else
{
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_dec(v_a_3622_);
lean_dec(v_json_3601_);
v_a_3635_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3624_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3624_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
lean_ctor_set_tag(v___x_3637_, 0);
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
else
{
lean_object* v_a_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v_a_3643_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_a_3643_);
lean_dec_ref_known(v___x_3624_, 1);
v___x_3644_ = ((lean_object*)(l_Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson___closed__0));
lean_inc(v_json_3601_);
v___x_3645_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentItem_fromJson_spec__0(v_json_3601_, v___x_3644_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3655_; 
lean_dec(v_a_3643_);
lean_dec(v_a_3622_);
lean_dec(v_json_3601_);
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3655_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3655_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3653_; 
v___x_3650_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__13);
v___x_3651_ = lean_string_append(v___x_3650_, v_a_3646_);
lean_dec(v_a_3646_);
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 0, v___x_3651_);
v___x_3653_ = v___x_3648_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3651_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
else
{
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
lean_dec(v_a_3643_);
lean_dec(v_a_3622_);
lean_dec(v_json_3601_);
v_a_3656_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3645_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3645_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
lean_ctor_set_tag(v___x_3658_, 0);
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v_a_3664_ = lean_ctor_get(v___x_3645_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3645_, 1);
v___x_3665_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentItem_toJson___closed__1));
v___x_3666_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_3601_, v___x_3665_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3676_; 
lean_dec(v_a_3664_);
lean_dec(v_a_3643_);
lean_dec(v_a_3622_);
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3669_ = v___x_3666_;
v_isShared_3670_ = v_isSharedCheck_3676_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3666_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3676_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3674_; 
v___x_3671_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17, &l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonTextDocumentItem_fromJson___closed__17);
v___x_3672_ = lean_string_append(v___x_3671_, v_a_3667_);
lean_dec(v_a_3667_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3672_);
v___x_3674_ = v___x_3669_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
else
{
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
lean_dec(v_a_3664_);
lean_dec(v_a_3643_);
lean_dec(v_a_3622_);
v_a_3677_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3666_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3666_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
lean_ctor_set_tag(v___x_3679_, 0);
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3693_; 
v_a_3685_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3687_ = v___x_3666_;
v_isShared_3688_ = v_isSharedCheck_3693_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3666_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3693_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3689_; lean_object* v___x_3691_; 
v___x_3689_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3689_, 0, v_a_3622_);
lean_ctor_set(v___x_3689_, 1, v_a_3643_);
lean_ctor_set(v___x_3689_, 2, v_a_3664_);
lean_ctor_set(v___x_3689_, 3, v_a_3685_);
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 0, v___x_3689_);
v___x_3691_ = v___x_3687_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson(lean_object* v_x_3697_){
_start:
{
lean_object* v_textDocument_3698_; lean_object* v_position_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3719_; 
v_textDocument_3698_ = lean_ctor_get(v_x_3697_, 0);
v_position_3699_ = lean_ctor_get(v_x_3697_, 1);
v_isSharedCheck_3719_ = !lean_is_exclusive(v_x_3697_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3701_ = v_x_3697_;
v_isShared_3702_ = v_isSharedCheck_3719_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_position_3699_);
lean_inc(v_textDocument_3698_);
lean_dec(v_x_3697_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3719_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3703_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
v___x_3704_ = l_Lean_Lsp_instToJsonTextDocumentIdentifier_toJson(v_textDocument_3698_);
if (v_isShared_3702_ == 0)
{
lean_ctor_set(v___x_3701_, 1, v___x_3704_);
lean_ctor_set(v___x_3701_, 0, v___x_3703_);
v___x_3706_ = v___x_3701_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3703_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3707_ = lean_box(0);
v___x_3708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3706_);
lean_ctor_set(v___x_3708_, 1, v___x_3707_);
v___x_3709_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0));
v___x_3710_ = l_Lean_Lsp_instToJsonPosition_toJson(v_position_3699_);
v___x_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3709_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v___x_3712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
lean_ctor_set(v___x_3712_, 1, v___x_3707_);
v___x_3713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set(v___x_3713_, 1, v___x_3707_);
v___x_3714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3708_);
lean_ctor_set(v___x_3714_, 1, v___x_3713_);
v___x_3715_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3716_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3714_, v___x_3715_);
v___x_3717_ = l_Lean_Json_mkObj(v___x_3716_);
lean_dec(v___x_3716_);
return v___x_3717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(lean_object* v_j_3722_, lean_object* v_k_3723_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3724_ = l_Lean_Json_getObjValD(v_j_3722_, v_k_3723_);
v___x_3725_ = l_Lean_Lsp_instFromJsonTextDocumentIdentifier_fromJson(v___x_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0___boxed(lean_object* v_j_3726_, lean_object* v_k_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(v_j_3726_, v_k_3727_);
lean_dec_ref(v_k_3727_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(lean_object* v_j_3729_, lean_object* v_k_3730_){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = l_Lean_Json_getObjValD(v_j_3729_, v_k_3730_);
v___x_3732_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v___x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1___boxed(lean_object* v_j_3733_, lean_object* v_k_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(v_j_3733_, v_k_3734_);
lean_dec_ref(v_k_3734_);
return v_res_3735_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3741_ = 1;
v___x_3742_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__1));
v___x_3743_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3742_, v___x_3741_);
return v___x_3743_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3744_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3745_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__2);
v___x_3746_ = lean_string_append(v___x_3745_, v___x_3744_);
return v___x_3746_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3747_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentEdit_fromJson___closed__5);
v___x_3748_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3);
v___x_3749_ = lean_string_append(v___x_3748_, v___x_3747_);
return v___x_3749_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3750_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3751_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__4);
v___x_3752_ = lean_string_append(v___x_3751_, v___x_3750_);
return v___x_3752_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7(void){
_start:
{
uint8_t v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3755_ = 1;
v___x_3756_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__6));
v___x_3757_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3756_, v___x_3755_);
return v___x_3757_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__7);
v___x_3759_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__3);
v___x_3760_ = lean_string_append(v___x_3759_, v___x_3758_);
return v___x_3760_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3761_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3762_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__8);
v___x_3763_ = lean_string_append(v___x_3762_, v___x_3761_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson(lean_object* v_json_3764_){
_start:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentEdit_toJson___closed__0));
lean_inc(v_json_3764_);
v___x_3766_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__0(v_json_3764_, v___x_3765_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3776_; 
lean_dec(v_json_3764_);
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3776_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3776_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3774_; 
v___x_3771_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__5);
v___x_3772_ = lean_string_append(v___x_3771_, v_a_3767_);
lean_dec(v_a_3767_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v___x_3772_);
v___x_3774_ = v___x_3769_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3772_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
else
{
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec(v_json_3764_);
v_a_3777_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3766_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3766_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
lean_ctor_set_tag(v___x_3779_, 0);
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; 
v_a_3785_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_a_3785_);
lean_dec_ref_known(v___x_3766_, 1);
v___x_3786_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentPositionParams_toJson___closed__0));
v___x_3787_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson_spec__1(v_json_3764_, v___x_3786_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3797_; 
lean_dec(v_a_3785_);
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3797_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3797_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3792_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonTextDocumentPositionParams_fromJson___closed__9);
v___x_3793_ = lean_string_append(v___x_3792_, v_a_3788_);
lean_dec(v_a_3788_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3793_);
v___x_3795_ = v___x_3790_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3793_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
else
{
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec(v_a_3785_);
v_a_3798_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3787_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3787_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
lean_ctor_set_tag(v___x_3800_, 0);
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3814_; 
v_a_3806_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3808_ = v___x_3787_;
v_isShared_3809_ = v_isSharedCheck_3814_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3787_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3814_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3810_; lean_object* v___x_3812_; 
v___x_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3810_, 0, v_a_3785_);
lean_ctor_set(v___x_3810_, 1, v_a_3806_);
if (v_isShared_3809_ == 0)
{
lean_ctor_set(v___x_3808_, 0, v___x_3810_);
v___x_3812_ = v___x_3808_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0(lean_object* v_p_3818_){
_start:
{
lean_object* v_position_3819_; lean_object* v_textDocument_3820_; lean_object* v_line_3821_; lean_object* v_character_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v_position_3819_ = lean_ctor_get(v_p_3818_, 1);
lean_inc_ref(v_position_3819_);
v_textDocument_3820_ = lean_ctor_get(v_p_3818_, 0);
lean_inc_ref(v_textDocument_3820_);
lean_dec_ref(v_p_3818_);
v_line_3821_ = lean_ctor_get(v_position_3819_, 0);
lean_inc(v_line_3821_);
v_character_3822_ = lean_ctor_get(v_position_3819_, 1);
lean_inc(v_character_3822_);
lean_dec_ref(v_position_3819_);
v___x_3823_ = ((lean_object*)(l_Lean_Lsp_instToStringTextDocumentPositionParams___lam__0___closed__0));
v___x_3824_ = lean_string_append(v_textDocument_3820_, v___x_3823_);
v___x_3825_ = l_Nat_reprFast(v_line_3821_);
v___x_3826_ = lean_string_append(v___x_3824_, v___x_3825_);
lean_dec_ref(v___x_3825_);
v___x_3827_ = lean_string_append(v___x_3826_, v___x_3823_);
v___x_3828_ = l_Nat_reprFast(v_character_3822_);
v___x_3829_ = lean_string_append(v___x_3827_, v___x_3828_);
lean_dec_ref(v___x_3828_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentFilter_toJson(lean_object* v_x_3835_){
_start:
{
lean_object* v_language_x3f_3836_; lean_object* v_scheme_x3f_3837_; lean_object* v_pattern_x3f_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v_language_x3f_3836_ = lean_ctor_get(v_x_3835_, 0);
lean_inc(v_language_x3f_3836_);
v_scheme_x3f_3837_ = lean_ctor_get(v_x_3835_, 1);
lean_inc(v_scheme_x3f_3837_);
v_pattern_x3f_3838_ = lean_ctor_get(v_x_3835_, 2);
lean_inc(v_pattern_x3f_3838_);
lean_dec_ref(v_x_3835_);
v___x_3839_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0));
v___x_3840_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3839_, v_language_x3f_3836_);
v___x_3841_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1));
v___x_3842_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3841_, v_scheme_x3f_3837_);
v___x_3843_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2));
v___x_3844_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_3843_, v_pattern_x3f_3838_);
v___x_3845_ = lean_box(0);
v___x_3846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3844_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
v___x_3847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3842_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3840_);
lean_ctor_set(v___x_3848_, 1, v___x_3847_);
v___x_3849_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_3850_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_3848_, v___x_3849_);
v___x_3851_ = l_Lean_Json_mkObj(v___x_3850_);
lean_dec(v___x_3850_);
return v___x_3851_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = 1;
v___x_3860_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__1));
v___x_3861_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3860_, v___x_3859_);
return v___x_3861_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v___x_3862_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_3863_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__2);
v___x_3864_ = lean_string_append(v___x_3863_, v___x_3862_);
return v___x_3864_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3868_ = 1;
v___x_3869_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__5));
v___x_3870_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3869_, v___x_3868_);
return v___x_3870_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__6);
v___x_3872_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3873_ = lean_string_append(v___x_3872_, v___x_3871_);
return v___x_3873_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3875_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__7);
v___x_3876_ = lean_string_append(v___x_3875_, v___x_3874_);
return v___x_3876_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11(void){
_start:
{
uint8_t v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = 1;
v___x_3881_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__10));
v___x_3882_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3881_, v___x_3880_);
return v___x_3882_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3883_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__11);
v___x_3884_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3885_ = lean_string_append(v___x_3884_, v___x_3883_);
return v___x_3885_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13(void){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3887_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__12);
v___x_3888_ = lean_string_append(v___x_3887_, v___x_3886_);
return v___x_3888_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16(void){
_start:
{
uint8_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3892_ = 1;
v___x_3893_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__15));
v___x_3894_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3893_, v___x_3892_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3895_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__16);
v___x_3896_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__3);
v___x_3897_ = lean_string_append(v___x_3896_, v___x_3895_);
return v___x_3897_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18(void){
_start:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3898_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_3899_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__17);
v___x_3900_ = lean_string_append(v___x_3899_, v___x_3898_);
return v___x_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(lean_object* v_json_3901_){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__0));
lean_inc(v_json_3901_);
v___x_3903_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3901_, v___x_3902_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3913_; 
lean_dec(v_json_3901_);
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3906_ = v___x_3903_;
v_isShared_3907_ = v_isSharedCheck_3913_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3903_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3913_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3911_; 
v___x_3908_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__8);
v___x_3909_ = lean_string_append(v___x_3908_, v_a_3904_);
lean_dec(v_a_3904_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v___x_3909_);
v___x_3911_ = v___x_3906_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v___x_3909_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
else
{
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_dec(v_json_3901_);
v_a_3914_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3903_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3903_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
lean_ctor_set_tag(v___x_3916_, 0);
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
else
{
lean_object* v_a_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; 
v_a_3922_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3903_, 1);
v___x_3923_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__1));
lean_inc(v_json_3901_);
v___x_3924_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3901_, v___x_3923_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3934_; 
lean_dec(v_a_3922_);
lean_dec(v_json_3901_);
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3927_ = v___x_3924_;
v_isShared_3928_ = v_isSharedCheck_3934_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3924_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3934_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3929_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__13);
v___x_3930_ = lean_string_append(v___x_3929_, v_a_3925_);
lean_dec(v_a_3925_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 0, v___x_3930_);
v___x_3932_ = v___x_3927_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
else
{
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3942_; 
lean_dec(v_a_3922_);
lean_dec(v_json_3901_);
v_a_3935_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3937_ = v___x_3924_;
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3924_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set_tag(v___x_3937_, 0);
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v_a_3943_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_a_3943_);
lean_dec_ref_known(v___x_3924_, 1);
v___x_3944_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentFilter_toJson___closed__2));
v___x_3945_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_3901_, v___x_3944_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3955_; 
lean_dec(v_a_3943_);
lean_dec(v_a_3922_);
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3948_ = v___x_3945_;
v_isShared_3949_ = v_isSharedCheck_3955_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3945_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3955_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3953_; 
v___x_3950_ = lean_obj_once(&l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18, &l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonDocumentFilter_fromJson___closed__18);
v___x_3951_ = lean_string_append(v___x_3950_, v_a_3946_);
lean_dec(v_a_3946_);
if (v_isShared_3949_ == 0)
{
lean_ctor_set(v___x_3948_, 0, v___x_3951_);
v___x_3953_ = v___x_3948_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v___x_3951_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
else
{
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
lean_dec(v_a_3943_);
lean_dec(v_a_3922_);
v_a_3956_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3945_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3945_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
lean_ctor_set_tag(v___x_3958_, 0);
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3972_; 
v_a_3964_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3966_ = v___x_3945_;
v_isShared_3967_ = v_isSharedCheck_3972_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3945_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3972_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3968_; lean_object* v___x_3970_; 
v___x_3968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3968_, 0, v_a_3922_);
lean_ctor_set(v___x_3968_, 1, v_a_3943_);
lean_ctor_set(v___x_3968_, 2, v_a_3964_);
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3968_);
v___x_3970_ = v___x_3966_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3968_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDocumentSelector___lam__0(lean_object* v___x_3975_, lean_object* v_x_3976_){
_start:
{
lean_object* v___x_3977_; 
v___x_3977_ = l_Lean_Array_fromJson_x3f___redArg(v___x_3975_, v_x_3976_);
if (lean_obj_tag(v___x_3977_) == 0)
{
lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
v_a_3978_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3977_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3977_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
v_a_3986_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3977_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3977_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDocumentSelector___lam__0(lean_object* v___x_3997_, lean_object* v_x_3998_){
_start:
{
lean_object* v___x_3999_; 
v___x_3999_ = l_Lean_Array_toJson___redArg(v___x_3997_, v_x_3998_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson(lean_object* v_x_4004_){
_start:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4005_ = ((lean_object*)(l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0));
v___x_4006_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4005_, v_x_4004_);
v___x_4007_ = lean_box(0);
v___x_4008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4006_);
lean_ctor_set(v___x_4008_, 1, v___x_4007_);
v___x_4009_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4010_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4008_, v___x_4009_);
v___x_4011_ = l_Lean_Json_mkObj(v___x_4010_);
lean_dec(v___x_4010_);
return v___x_4011_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4019_ = 1;
v___x_4020_ = ((lean_object*)(l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__1));
v___x_4021_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4020_, v___x_4019_);
return v___x_4021_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4022_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4023_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__2);
v___x_4024_ = lean_string_append(v___x_4023_, v___x_4022_);
return v___x_4024_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4028_ = 1;
v___x_4029_ = ((lean_object*)(l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__5));
v___x_4030_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4029_, v___x_4028_);
return v___x_4030_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4031_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__6);
v___x_4032_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__3);
v___x_4033_ = lean_string_append(v___x_4032_, v___x_4031_);
return v___x_4033_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; 
v___x_4034_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4035_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__7);
v___x_4036_ = lean_string_append(v___x_4035_, v___x_4034_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson(lean_object* v_json_4037_){
_start:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4038_ = ((lean_object*)(l_Lean_Lsp_instToJsonStaticRegistrationOptions_toJson___closed__0));
v___x_4039_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4037_, v___x_4038_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4049_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4042_ = v___x_4039_;
v_isShared_4043_ = v_isSharedCheck_4049_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4039_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4049_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4047_; 
v___x_4044_ = lean_obj_once(&l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8, &l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonStaticRegistrationOptions_fromJson___closed__8);
v___x_4045_ = lean_string_append(v___x_4044_, v_a_4040_);
lean_dec(v_a_4040_);
if (v_isShared_4043_ == 0)
{
lean_ctor_set(v___x_4042_, 0, v___x_4045_);
v___x_4047_ = v___x_4042_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v___x_4045_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
else
{
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
v_a_4050_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_4039_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4039_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
lean_ctor_set_tag(v___x_4052_, 0);
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
v_a_4058_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4039_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4039_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4063_; 
if (v_isShared_4061_ == 0)
{
v___x_4063_ = v___x_4060_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4058_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(size_t v_sz_4068_, size_t v_i_4069_, lean_object* v_bs_4070_){
_start:
{
uint8_t v___x_4071_; 
v___x_4071_ = lean_usize_dec_lt(v_i_4069_, v_sz_4068_);
if (v___x_4071_ == 0)
{
return v_bs_4070_;
}
else
{
lean_object* v_v_4072_; lean_object* v___x_4073_; lean_object* v_bs_x27_4074_; lean_object* v___x_4075_; size_t v___x_4076_; size_t v___x_4077_; lean_object* v___x_4078_; 
v_v_4072_ = lean_array_uget(v_bs_4070_, v_i_4069_);
v___x_4073_ = lean_unsigned_to_nat(0u);
v_bs_x27_4074_ = lean_array_uset(v_bs_4070_, v_i_4069_, v___x_4073_);
v___x_4075_ = l_Lean_Lsp_instToJsonDocumentFilter_toJson(v_v_4072_);
v___x_4076_ = ((size_t)1ULL);
v___x_4077_ = lean_usize_add(v_i_4069_, v___x_4076_);
v___x_4078_ = lean_array_uset(v_bs_x27_4074_, v_i_4069_, v___x_4075_);
v_i_4069_ = v___x_4077_;
v_bs_4070_ = v___x_4078_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4080_, lean_object* v_i_4081_, lean_object* v_bs_4082_){
_start:
{
size_t v_sz_boxed_4083_; size_t v_i_boxed_4084_; lean_object* v_res_4085_; 
v_sz_boxed_4083_ = lean_unbox_usize(v_sz_4080_);
lean_dec(v_sz_4080_);
v_i_boxed_4084_ = lean_unbox_usize(v_i_4081_);
lean_dec(v_i_4081_);
v_res_4085_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(v_sz_boxed_4083_, v_i_boxed_4084_, v_bs_4082_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(lean_object* v_a_4086_){
_start:
{
size_t v_sz_4087_; size_t v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; 
v_sz_4087_ = lean_array_size(v_a_4086_);
v___x_4088_ = ((size_t)0ULL);
v___x_4089_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0_spec__1(v_sz_4087_, v___x_4088_, v_a_4086_);
v___x_4090_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4090_, 0, v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(lean_object* v_k_4091_, lean_object* v_x_4092_){
_start:
{
if (lean_obj_tag(v_x_4092_) == 0)
{
lean_object* v___x_4093_; 
lean_dec_ref(v_k_4091_);
v___x_4093_ = lean_box(0);
return v___x_4093_;
}
else
{
lean_object* v_val_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
v_val_4094_ = lean_ctor_get(v_x_4092_, 0);
lean_inc(v_val_4094_);
lean_dec_ref_known(v_x_4092_, 1);
v___x_4095_ = l_Lean_Array_toJson___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0_spec__0(v_val_4094_);
v___x_4096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4096_, 0, v_k_4091_);
lean_ctor_set(v___x_4096_, 1, v___x_4095_);
v___x_4097_ = lean_box(0);
v___x_4098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4096_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
return v___x_4098_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson(lean_object* v_x_4100_){
_start:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4101_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0));
v___x_4102_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson_spec__0(v___x_4101_, v_x_4100_);
v___x_4103_ = lean_box(0);
v___x_4104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4102_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4106_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4104_, v___x_4105_);
v___x_4107_ = l_Lean_Json_mkObj(v___x_4106_);
lean_dec(v___x_4106_);
return v___x_4107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_4110_, size_t v_i_4111_, lean_object* v_bs_4112_){
_start:
{
uint8_t v___x_4113_; 
v___x_4113_ = lean_usize_dec_lt(v_i_4111_, v_sz_4110_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; 
v___x_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4114_, 0, v_bs_4112_);
return v___x_4114_;
}
else
{
lean_object* v_v_4115_; lean_object* v___x_4116_; 
v_v_4115_ = lean_array_uget_borrowed(v_bs_4112_, v_i_4111_);
lean_inc(v_v_4115_);
v___x_4116_ = l_Lean_Lsp_instFromJsonDocumentFilter_fromJson(v_v_4115_);
if (lean_obj_tag(v___x_4116_) == 0)
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
lean_dec_ref(v_bs_4112_);
v_a_4117_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4116_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4116_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4126_; lean_object* v_bs_x27_4127_; size_t v___x_4128_; size_t v___x_4129_; lean_object* v___x_4130_; 
v_a_4125_ = lean_ctor_get(v___x_4116_, 0);
lean_inc(v_a_4125_);
lean_dec_ref_known(v___x_4116_, 1);
v___x_4126_ = lean_unsigned_to_nat(0u);
v_bs_x27_4127_ = lean_array_uset(v_bs_4112_, v_i_4111_, v___x_4126_);
v___x_4128_ = ((size_t)1ULL);
v___x_4129_ = lean_usize_add(v_i_4111_, v___x_4128_);
v___x_4130_ = lean_array_uset(v_bs_x27_4127_, v_i_4111_, v_a_4125_);
v_i_4111_ = v___x_4129_;
v_bs_4112_ = v___x_4130_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_4132_, lean_object* v_i_4133_, lean_object* v_bs_4134_){
_start:
{
size_t v_sz_boxed_4135_; size_t v_i_boxed_4136_; lean_object* v_res_4137_; 
v_sz_boxed_4135_ = lean_unbox_usize(v_sz_4132_);
lean_dec(v_sz_4132_);
v_i_boxed_4136_ = lean_unbox_usize(v_i_4133_);
lean_dec(v_i_4133_);
v_res_4137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_4135_, v_i_boxed_4136_, v_bs_4134_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_4138_){
_start:
{
if (lean_obj_tag(v_x_4138_) == 4)
{
lean_object* v_elems_4139_; size_t v_sz_4140_; size_t v___x_4141_; lean_object* v___x_4142_; 
v_elems_4139_ = lean_ctor_get(v_x_4138_, 0);
lean_inc_ref(v_elems_4139_);
lean_dec_ref_known(v_x_4138_, 1);
v_sz_4140_ = lean_array_size(v_elems_4139_);
v___x_4141_ = ((size_t)0ULL);
v___x_4142_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_4140_, v___x_4141_, v_elems_4139_);
return v___x_4142_;
}
else
{
lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4143_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_4144_ = lean_unsigned_to_nat(80u);
v___x_4145_ = l_Lean_Json_pretty(v_x_4138_, v___x_4144_);
v___x_4146_ = lean_string_append(v___x_4143_, v___x_4145_);
lean_dec_ref(v___x_4145_);
v___x_4147_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_4148_ = lean_string_append(v___x_4146_, v___x_4147_);
v___x_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4148_);
return v___x_4149_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(lean_object* v_x_4152_){
_start:
{
if (lean_obj_tag(v_x_4152_) == 0)
{
lean_object* v___x_4153_; 
v___x_4153_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0___closed__0));
return v___x_4153_;
}
else
{
lean_object* v___x_4154_; 
v___x_4154_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0_spec__1(v_x_4152_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4162_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4157_ = v___x_4154_;
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4171_; 
v_a_4163_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4165_ = v___x_4154_;
v_isShared_4166_ = v_isSharedCheck_4171_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_a_4163_);
lean_dec(v___x_4154_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4171_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4167_; lean_object* v___x_4169_; 
v___x_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4167_, 0, v_a_4163_);
if (v_isShared_4166_ == 0)
{
lean_ctor_set(v___x_4165_, 0, v___x_4167_);
v___x_4169_ = v___x_4165_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v___x_4167_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(lean_object* v_j_4172_, lean_object* v_k_4173_){
_start:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4174_ = l_Lean_Json_getObjValD(v_j_4172_, v_k_4173_);
v___x_4175_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0_spec__0(v___x_4174_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0___boxed(lean_object* v_j_4176_, lean_object* v_k_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(v_j_4176_, v_k_4177_);
lean_dec_ref(v_k_4177_);
return v_res_4178_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4184_ = 1;
v___x_4185_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__1));
v___x_4186_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4185_, v___x_4184_);
return v___x_4186_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4187_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4188_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__2);
v___x_4189_ = lean_string_append(v___x_4188_, v___x_4187_);
return v___x_4189_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4193_ = 1;
v___x_4194_ = ((lean_object*)(l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__5));
v___x_4195_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4194_, v___x_4193_);
return v___x_4195_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___x_4196_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__6);
v___x_4197_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__3);
v___x_4198_ = lean_string_append(v___x_4197_, v___x_4196_);
return v___x_4198_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; 
v___x_4199_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4200_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__7);
v___x_4201_ = lean_string_append(v___x_4200_, v___x_4199_);
return v___x_4201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson(lean_object* v_json_4202_){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = ((lean_object*)(l_Lean_Lsp_instToJsonTextDocumentRegistrationOptions_toJson___closed__0));
v___x_4204_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson_spec__0(v_json_4202_, v___x_4203_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4214_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4207_ = v___x_4204_;
v_isShared_4208_ = v_isSharedCheck_4214_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4214_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4212_; 
v___x_4209_ = lean_obj_once(&l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8, &l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonTextDocumentRegistrationOptions_fromJson___closed__8);
v___x_4210_ = lean_string_append(v___x_4209_, v_a_4205_);
lean_dec(v_a_4205_);
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 0, v___x_4210_);
v___x_4212_ = v___x_4207_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v___x_4210_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
else
{
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
v_a_4215_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___x_4204_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4204_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
lean_ctor_set_tag(v___x_4217_, 0);
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
else
{
lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
v_a_4223_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4225_ = v___x_4204_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_dec(v___x_4204_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx(uint8_t v_x_4233_){
_start:
{
if (v_x_4233_ == 0)
{
lean_object* v___x_4234_; 
v___x_4234_ = lean_unsigned_to_nat(0u);
return v___x_4234_;
}
else
{
lean_object* v___x_4235_; 
v___x_4235_ = lean_unsigned_to_nat(1u);
return v___x_4235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorIdx___boxed(lean_object* v_x_4236_){
_start:
{
uint8_t v_x_boxed_4237_; lean_object* v_res_4238_; 
v_x_boxed_4237_ = lean_unbox(v_x_4236_);
v_res_4238_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_x_boxed_4237_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg(lean_object* v_k_4239_){
_start:
{
lean_inc(v_k_4239_);
return v_k_4239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___redArg___boxed(lean_object* v_k_4240_){
_start:
{
lean_object* v_res_4241_; 
v_res_4241_ = l_Lean_Lsp_MarkupKind_ctorElim___redArg(v_k_4240_);
lean_dec(v_k_4240_);
return v_res_4241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim(lean_object* v_motive_4242_, lean_object* v_ctorIdx_4243_, uint8_t v_t_4244_, lean_object* v_h_4245_, lean_object* v_k_4246_){
_start:
{
lean_inc(v_k_4246_);
return v_k_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ctorElim___boxed(lean_object* v_motive_4247_, lean_object* v_ctorIdx_4248_, lean_object* v_t_4249_, lean_object* v_h_4250_, lean_object* v_k_4251_){
_start:
{
uint8_t v_t_boxed_4252_; lean_object* v_res_4253_; 
v_t_boxed_4252_ = lean_unbox(v_t_4249_);
v_res_4253_ = l_Lean_Lsp_MarkupKind_ctorElim(v_motive_4247_, v_ctorIdx_4248_, v_t_boxed_4252_, v_h_4250_, v_k_4251_);
lean_dec(v_k_4251_);
lean_dec(v_ctorIdx_4248_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(lean_object* v_plaintext_4254_){
_start:
{
lean_inc(v_plaintext_4254_);
return v_plaintext_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___redArg___boxed(lean_object* v_plaintext_4255_){
_start:
{
lean_object* v_res_4256_; 
v_res_4256_ = l_Lean_Lsp_MarkupKind_plaintext_elim___redArg(v_plaintext_4255_);
lean_dec(v_plaintext_4255_);
return v_res_4256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim(lean_object* v_motive_4257_, uint8_t v_t_4258_, lean_object* v_h_4259_, lean_object* v_plaintext_4260_){
_start:
{
lean_inc(v_plaintext_4260_);
return v_plaintext_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_plaintext_elim___boxed(lean_object* v_motive_4261_, lean_object* v_t_4262_, lean_object* v_h_4263_, lean_object* v_plaintext_4264_){
_start:
{
uint8_t v_t_boxed_4265_; lean_object* v_res_4266_; 
v_t_boxed_4265_ = lean_unbox(v_t_4262_);
v_res_4266_ = l_Lean_Lsp_MarkupKind_plaintext_elim(v_motive_4261_, v_t_boxed_4265_, v_h_4263_, v_plaintext_4264_);
lean_dec(v_plaintext_4264_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg(lean_object* v_markdown_4267_){
_start:
{
lean_inc(v_markdown_4267_);
return v_markdown_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___redArg___boxed(lean_object* v_markdown_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lean_Lsp_MarkupKind_markdown_elim___redArg(v_markdown_4268_);
lean_dec(v_markdown_4268_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim(lean_object* v_motive_4270_, uint8_t v_t_4271_, lean_object* v_h_4272_, lean_object* v_markdown_4273_){
_start:
{
lean_inc(v_markdown_4273_);
return v_markdown_4273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_markdown_elim___boxed(lean_object* v_motive_4274_, lean_object* v_t_4275_, lean_object* v_h_4276_, lean_object* v_markdown_4277_){
_start:
{
uint8_t v_t_boxed_4278_; lean_object* v_res_4279_; 
v_t_boxed_4278_ = lean_unbox(v_t_4275_);
v_res_4279_ = l_Lean_Lsp_MarkupKind_markdown_elim(v_motive_4274_, v_t_boxed_4278_, v_h_4276_, v_markdown_4277_);
lean_dec(v_markdown_4277_);
return v_res_4279_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_MarkupKind_ofNat(lean_object* v_n_4280_){
_start:
{
lean_object* v___x_4281_; uint8_t v___x_4282_; 
v___x_4281_ = lean_unsigned_to_nat(0u);
v___x_4282_ = lean_nat_dec_le(v_n_4280_, v___x_4281_);
if (v___x_4282_ == 0)
{
uint8_t v___x_4283_; 
v___x_4283_ = 1;
return v___x_4283_;
}
else
{
uint8_t v___x_4284_; 
v___x_4284_ = 0;
return v___x_4284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_MarkupKind_ofNat___boxed(lean_object* v_n_4285_){
_start:
{
uint8_t v_res_4286_; lean_object* v_r_4287_; 
v_res_4286_ = l_Lean_Lsp_MarkupKind_ofNat(v_n_4285_);
lean_dec(v_n_4285_);
v_r_4287_ = lean_box(v_res_4286_);
return v_r_4287_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupKind(uint8_t v_x_4288_, uint8_t v_y_4289_){
_start:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; uint8_t v___x_4292_; 
v___x_4290_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_x_4288_);
v___x_4291_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_y_4289_);
v___x_4292_ = lean_nat_dec_eq(v___x_4290_, v___x_4291_);
lean_dec(v___x_4291_);
lean_dec(v___x_4290_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupKind___boxed(lean_object* v_x_4293_, lean_object* v_y_4294_){
_start:
{
uint8_t v_x_20__boxed_4295_; uint8_t v_y_21__boxed_4296_; uint8_t v_res_4297_; lean_object* v_r_4298_; 
v_x_20__boxed_4295_ = lean_unbox(v_x_4293_);
v_y_21__boxed_4296_ = lean_unbox(v_y_4294_);
v_res_4297_ = l_Lean_Lsp_instDecidableEqMarkupKind(v_x_20__boxed_4295_, v_y_21__boxed_4296_);
v_r_4298_ = lean_box(v_res_4297_);
return v_r_4298_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupKind_hash(uint8_t v_x_4299_){
_start:
{
if (v_x_4299_ == 0)
{
uint64_t v___x_4300_; 
v___x_4300_ = 0ULL;
return v___x_4300_;
}
else
{
uint64_t v___x_4301_; 
v___x_4301_ = 1ULL;
return v___x_4301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupKind_hash___boxed(lean_object* v_x_4302_){
_start:
{
uint8_t v_x_28__boxed_4303_; uint64_t v_res_4304_; lean_object* v_r_4305_; 
v_x_28__boxed_4303_ = lean_unbox(v_x_4302_);
v_res_4304_ = l_Lean_Lsp_instHashableMarkupKind_hash(v_x_28__boxed_4303_);
v_r_4305_ = lean_box_uint64(v_res_4304_);
return v_r_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0(lean_object* v_x_4319_){
_start:
{
if (lean_obj_tag(v_x_4319_) == 3)
{
lean_object* v_s_4322_; lean_object* v___x_4323_; uint8_t v___x_4324_; 
v_s_4322_ = lean_ctor_get(v_x_4319_, 0);
v___x_4323_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2));
v___x_4324_ = lean_string_dec_eq(v_s_4322_, v___x_4323_);
if (v___x_4324_ == 0)
{
lean_object* v___x_4325_; uint8_t v___x_4326_; 
v___x_4325_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3));
v___x_4326_ = lean_string_dec_eq(v_s_4322_, v___x_4325_);
if (v___x_4326_ == 0)
{
goto v___jp_4320_;
}
else
{
lean_object* v___x_4327_; 
v___x_4327_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4));
return v___x_4327_;
}
}
else
{
lean_object* v___x_4328_; 
v___x_4328_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5));
return v___x_4328_;
}
}
else
{
goto v___jp_4320_;
}
v___jp_4320_:
{
lean_object* v___x_4321_; 
v___x_4321_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1));
return v___x_4321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupKind___lam__0___boxed(lean_object* v_x_4329_){
_start:
{
lean_object* v_res_4330_; 
v_res_4330_ = l_Lean_Lsp_instFromJsonMarkupKind___lam__0(v_x_4329_);
lean_dec(v_x_4329_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0(uint8_t v_x_4337_){
_start:
{
if (v_x_4337_ == 0)
{
lean_object* v___x_4338_; 
v___x_4338_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0));
return v___x_4338_;
}
else
{
lean_object* v___x_4339_; 
v___x_4339_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1));
return v___x_4339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupKind___lam__0___boxed(lean_object* v_x_4340_){
_start:
{
uint8_t v_x_38__boxed_4341_; lean_object* v_res_4342_; 
v_x_38__boxed_4341_ = lean_unbox(v_x_4340_);
v_res_4342_ = l_Lean_Lsp_instToJsonMarkupKind___lam__0(v_x_38__boxed_4341_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson(lean_object* v_x_4345_){
_start:
{
uint8_t v_kind_4346_; lean_object* v_value_4347_; lean_object* v___x_4348_; lean_object* v___y_4350_; 
v_kind_4346_ = lean_ctor_get_uint8(v_x_4345_, sizeof(void*)*1);
v_value_4347_ = lean_ctor_get(v_x_4345_, 0);
v___x_4348_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
if (v_kind_4346_ == 0)
{
lean_object* v___x_4363_; 
v___x_4363_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__0));
v___y_4350_ = v___x_4363_;
goto v___jp_4349_;
}
else
{
lean_object* v___x_4364_; 
v___x_4364_ = ((lean_object*)(l_Lean_Lsp_instToJsonMarkupKind___lam__0___closed__1));
v___y_4350_ = v___x_4364_;
goto v___jp_4349_;
}
v___jp_4349_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
lean_inc(v___y_4350_);
v___x_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4348_);
lean_ctor_set(v___x_4351_, 1, v___y_4350_);
v___x_4352_ = lean_box(0);
v___x_4353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4351_);
lean_ctor_set(v___x_4353_, 1, v___x_4352_);
v___x_4354_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
lean_inc_ref(v_value_4347_);
v___x_4355_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4355_, 0, v_value_4347_);
v___x_4356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4356_, 0, v___x_4354_);
lean_ctor_set(v___x_4356_, 1, v___x_4355_);
v___x_4357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4357_, 0, v___x_4356_);
lean_ctor_set(v___x_4357_, 1, v___x_4352_);
v___x_4358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4357_);
lean_ctor_set(v___x_4358_, 1, v___x_4352_);
v___x_4359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4353_);
lean_ctor_set(v___x_4359_, 1, v___x_4358_);
v___x_4360_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4361_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4359_, v___x_4360_);
v___x_4362_ = l_Lean_Json_mkObj(v___x_4361_);
lean_dec(v___x_4361_);
return v___x_4362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonMarkupContent_toJson___boxed(lean_object* v_x_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l_Lean_Lsp_instToJsonMarkupContent_toJson(v_x_4365_);
lean_dec_ref(v_x_4365_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(lean_object* v_j_4369_, lean_object* v_k_4370_){
_start:
{
lean_object* v___x_4373_; 
v___x_4373_ = l_Lean_Json_getObjValD(v_j_4369_, v_k_4370_);
if (lean_obj_tag(v___x_4373_) == 3)
{
lean_object* v_s_4374_; lean_object* v___x_4375_; uint8_t v___x_4376_; 
v_s_4374_ = lean_ctor_get(v___x_4373_, 0);
lean_inc_ref(v_s_4374_);
lean_dec_ref_known(v___x_4373_, 1);
v___x_4375_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__2));
v___x_4376_ = lean_string_dec_eq(v_s_4374_, v___x_4375_);
if (v___x_4376_ == 0)
{
lean_object* v___x_4377_; uint8_t v___x_4378_; 
v___x_4377_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__3));
v___x_4378_ = lean_string_dec_eq(v_s_4374_, v___x_4377_);
lean_dec_ref(v_s_4374_);
if (v___x_4378_ == 0)
{
goto v___jp_4371_;
}
else
{
lean_object* v___x_4379_; 
v___x_4379_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__4));
return v___x_4379_;
}
}
else
{
lean_object* v___x_4380_; 
lean_dec_ref(v_s_4374_);
v___x_4380_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__5));
return v___x_4380_;
}
}
else
{
lean_dec(v___x_4373_);
goto v___jp_4371_;
}
v___jp_4371_:
{
lean_object* v___x_4372_; 
v___x_4372_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupKind___lam__0___closed__1));
return v___x_4372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0___boxed(lean_object* v_j_4381_, lean_object* v_k_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(v_j_4381_, v_k_4382_);
lean_dec_ref(v_k_4382_);
return v_res_4383_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4389_ = 1;
v___x_4390_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__1));
v___x_4391_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4390_, v___x_4389_);
return v___x_4391_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4392_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4393_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__2);
v___x_4394_ = lean_string_append(v___x_4393_, v___x_4392_);
return v___x_4394_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5(void){
_start:
{
uint8_t v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v___x_4397_ = 1;
v___x_4398_ = ((lean_object*)(l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__4));
v___x_4399_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4398_, v___x_4397_);
return v___x_4399_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6(void){
_start:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; 
v___x_4400_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__5);
v___x_4401_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3);
v___x_4402_ = lean_string_append(v___x_4401_, v___x_4400_);
return v___x_4402_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4403_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4404_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__6);
v___x_4405_ = lean_string_append(v___x_4404_, v___x_4403_);
return v___x_4405_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4406_ = lean_obj_once(&l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5, &l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonSnippetString_fromJson___closed__5);
v___x_4407_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__3);
v___x_4408_ = lean_string_append(v___x_4407_, v___x_4406_);
return v___x_4408_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9(void){
_start:
{
lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4409_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4410_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__8);
v___x_4411_ = lean_string_append(v___x_4410_, v___x_4409_);
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonMarkupContent_fromJson(lean_object* v_json_4412_){
_start:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4413_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
lean_inc(v_json_4412_);
v___x_4414_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonMarkupContent_fromJson_spec__0(v_json_4412_, v___x_4413_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4424_; 
lean_dec(v_json_4412_);
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4424_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4424_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4422_; 
v___x_4419_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__7);
v___x_4420_ = lean_string_append(v___x_4419_, v_a_4415_);
lean_dec(v_a_4415_);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v___x_4420_);
v___x_4422_ = v___x_4417_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v___x_4420_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
else
{
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4432_; 
lean_dec(v_json_4412_);
v_a_4425_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4432_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4432_ == 0)
{
v___x_4427_ = v___x_4414_;
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v___x_4414_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
lean_ctor_set_tag(v___x_4427_, 0);
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_a_4425_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
}
else
{
lean_object* v_a_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v_a_4433_ = lean_ctor_get(v___x_4414_, 0);
lean_inc(v_a_4433_);
lean_dec_ref_known(v___x_4414_, 1);
v___x_4434_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_4435_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLocation_fromJson_spec__0(v_json_4412_, v___x_4434_);
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4445_; 
lean_dec(v_a_4433_);
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4438_ = v___x_4435_;
v_isShared_4439_ = v_isSharedCheck_4445_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4435_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4445_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4443_; 
v___x_4440_ = lean_obj_once(&l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9, &l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonMarkupContent_fromJson___closed__9);
v___x_4441_ = lean_string_append(v___x_4440_, v_a_4436_);
lean_dec(v_a_4436_);
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 0, v___x_4441_);
v___x_4443_ = v___x_4438_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v___x_4441_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
else
{
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4453_; 
lean_dec(v_a_4433_);
v_a_4446_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4448_ = v___x_4435_;
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4435_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
lean_ctor_set_tag(v___x_4448_, 0);
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4446_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4463_; 
v_a_4454_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4456_ = v___x_4435_;
v_isShared_4457_ = v_isSharedCheck_4463_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4435_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4463_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4458_; uint8_t v___x_4459_; lean_object* v___x_4461_; 
v___x_4458_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4458_, 0, v_a_4454_);
v___x_4459_ = lean_unbox(v_a_4433_);
lean_dec(v_a_4433_);
lean_ctor_set_uint8(v___x_4458_, sizeof(void*)*1, v___x_4459_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 0, v___x_4458_);
v___x_4461_ = v___x_4456_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4458_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent_decEq(lean_object* v_x_4466_, lean_object* v_x_4467_){
_start:
{
uint8_t v_kind_4468_; lean_object* v_value_4469_; uint8_t v_kind_4470_; lean_object* v_value_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; uint8_t v___x_4474_; 
v_kind_4468_ = lean_ctor_get_uint8(v_x_4466_, sizeof(void*)*1);
v_value_4469_ = lean_ctor_get(v_x_4466_, 0);
v_kind_4470_ = lean_ctor_get_uint8(v_x_4467_, sizeof(void*)*1);
v_value_4471_ = lean_ctor_get(v_x_4467_, 0);
v___x_4472_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_kind_4468_);
v___x_4473_ = l_Lean_Lsp_MarkupKind_ctorIdx(v_kind_4470_);
v___x_4474_ = lean_nat_dec_eq(v___x_4472_, v___x_4473_);
lean_dec(v___x_4473_);
lean_dec(v___x_4472_);
if (v___x_4474_ == 0)
{
return v___x_4474_;
}
else
{
uint8_t v___x_4475_; 
v___x_4475_ = lean_string_dec_eq(v_value_4469_, v_value_4471_);
return v___x_4475_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent_decEq___boxed(lean_object* v_x_4476_, lean_object* v_x_4477_){
_start:
{
uint8_t v_res_4478_; lean_object* v_r_4479_; 
v_res_4478_ = l_Lean_Lsp_instDecidableEqMarkupContent_decEq(v_x_4476_, v_x_4477_);
lean_dec_ref(v_x_4477_);
lean_dec_ref(v_x_4476_);
v_r_4479_ = lean_box(v_res_4478_);
return v_r_4479_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instDecidableEqMarkupContent(lean_object* v_x_4480_, lean_object* v_x_4481_){
_start:
{
uint8_t v___x_4482_; 
v___x_4482_ = l_Lean_Lsp_instDecidableEqMarkupContent_decEq(v_x_4480_, v_x_4481_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instDecidableEqMarkupContent___boxed(lean_object* v_x_4483_, lean_object* v_x_4484_){
_start:
{
uint8_t v_res_4485_; lean_object* v_r_4486_; 
v_res_4485_ = l_Lean_Lsp_instDecidableEqMarkupContent(v_x_4483_, v_x_4484_);
lean_dec_ref(v_x_4484_);
lean_dec_ref(v_x_4483_);
v_r_4486_ = lean_box(v_res_4485_);
return v_r_4486_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableMarkupContent_hash(lean_object* v_x_4487_){
_start:
{
uint8_t v_kind_4488_; lean_object* v_value_4489_; uint64_t v___x_4490_; uint64_t v___x_4491_; uint64_t v___x_4492_; uint64_t v___x_4493_; uint64_t v___x_4494_; 
v_kind_4488_ = lean_ctor_get_uint8(v_x_4487_, sizeof(void*)*1);
v_value_4489_ = lean_ctor_get(v_x_4487_, 0);
v___x_4490_ = 0ULL;
v___x_4491_ = l_Lean_Lsp_instHashableMarkupKind_hash(v_kind_4488_);
v___x_4492_ = lean_uint64_mix_hash(v___x_4490_, v___x_4491_);
v___x_4493_ = lean_string_hash(v_value_4489_);
v___x_4494_ = lean_uint64_mix_hash(v___x_4492_, v___x_4493_);
return v___x_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableMarkupContent_hash___boxed(lean_object* v_x_4495_){
_start:
{
uint64_t v_res_4496_; lean_object* v_r_4497_; 
v_res_4496_ = l_Lean_Lsp_instHashableMarkupContent_hash(v_x_4495_);
lean_dec_ref(v_x_4495_);
v_r_4497_ = lean_box_uint64(v_res_4496_);
return v_r_4497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(lean_object* v_inst_4502_, lean_object* v_x_4503_){
_start:
{
lean_object* v_token_4504_; lean_object* v_value_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4526_; 
v_token_4504_ = lean_ctor_get(v_x_4503_, 0);
v_value_4505_ = lean_ctor_get(v_x_4503_, 1);
v_isSharedCheck_4526_ = !lean_is_exclusive(v_x_4503_);
if (v_isSharedCheck_4526_ == 0)
{
v___x_4507_ = v_x_4503_;
v_isShared_4508_ = v_isSharedCheck_4526_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_value_4505_);
lean_inc(v_token_4504_);
lean_dec(v_x_4503_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4526_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4512_; 
v___x_4509_ = ((lean_object*)(l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__0));
v___x_4510_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4510_, 0, v_token_4504_);
if (v_isShared_4508_ == 0)
{
lean_ctor_set(v___x_4507_, 1, v___x_4510_);
lean_ctor_set(v___x_4507_, 0, v___x_4509_);
v___x_4512_ = v___x_4507_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v___x_4509_);
lean_ctor_set(v_reuseFailAlloc_4525_, 1, v___x_4510_);
v___x_4512_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4513_ = lean_box(0);
v___x_4514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4512_);
lean_ctor_set(v___x_4514_, 1, v___x_4513_);
v___x_4515_ = ((lean_object*)(l_Lean_Lsp_instToJsonSnippetString_toJson___closed__0));
v___x_4516_ = lean_apply_1(v_inst_4502_, v_value_4505_);
v___x_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4515_);
lean_ctor_set(v___x_4517_, 1, v___x_4516_);
v___x_4518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4517_);
lean_ctor_set(v___x_4518_, 1, v___x_4513_);
v___x_4519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
lean_ctor_set(v___x_4519_, 1, v___x_4513_);
v___x_4520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4514_);
lean_ctor_set(v___x_4520_, 1, v___x_4519_);
v___x_4521_ = ((lean_object*)(l_Lean_Lsp_instToJsonProgressParams_toJson___redArg___closed__1));
v___x_4522_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4523_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_box(0), lean_box(0), v___x_4521_, v___x_4520_, v___x_4522_);
v___x_4524_ = l_Lean_Json_mkObj(v___x_4523_);
lean_dec(v___x_4523_);
return v___x_4524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams_toJson(lean_object* v_00_u03b1_4527_, lean_object* v_inst_4528_, lean_object* v_x_4529_){
_start:
{
lean_object* v___x_4530_; 
v___x_4530_ = l_Lean_Lsp_instToJsonProgressParams_toJson___redArg(v_inst_4528_, v_x_4529_);
return v___x_4530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams___redArg(lean_object* v_inst_4531_){
_start:
{
lean_object* v___x_4532_; 
v___x_4532_ = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonProgressParams_toJson), 3, 2);
lean_closure_set(v___x_4532_, 0, lean_box(0));
lean_closure_set(v___x_4532_, 1, v_inst_4531_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonProgressParams(lean_object* v_00_u03b1_4533_, lean_object* v_inst_4534_){
_start:
{
lean_object* v___x_4535_; 
v___x_4535_ = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonProgressParams_toJson), 3, 2);
lean_closure_set(v___x_4535_, 0, lean_box(0));
lean_closure_set(v___x_4535_, 1, v_inst_4534_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson(lean_object* v_x_4539_){
_start:
{
lean_object* v_kind_4540_; lean_object* v_message_x3f_4541_; uint8_t v_cancellable_4542_; lean_object* v_percentage_x3f_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v_kind_4540_ = lean_ctor_get(v_x_4539_, 0);
lean_inc_ref(v_kind_4540_);
v_message_x3f_4541_ = lean_ctor_get(v_x_4539_, 1);
lean_inc(v_message_x3f_4541_);
v_cancellable_4542_ = lean_ctor_get_uint8(v_x_4539_, sizeof(void*)*3);
v_percentage_x3f_4543_ = lean_ctor_get(v_x_4539_, 2);
lean_inc(v_percentage_x3f_4543_);
lean_dec_ref(v_x_4539_);
v___x_4544_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4545_, 0, v_kind_4540_);
v___x_4546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4544_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = lean_box(0);
v___x_4548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4546_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4550_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4549_, v_message_x3f_4541_);
v___x_4551_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1));
v___x_4552_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4552_, 0, v_cancellable_4542_);
v___x_4553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4551_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4553_);
lean_ctor_set(v___x_4554_, 1, v___x_4547_);
v___x_4555_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2));
v___x_4556_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_4555_, v_percentage_x3f_4543_);
v___x_4557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4556_);
lean_ctor_set(v___x_4557_, 1, v___x_4547_);
v___x_4558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4558_, 0, v___x_4554_);
lean_ctor_set(v___x_4558_, 1, v___x_4557_);
v___x_4559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4550_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
v___x_4560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4548_);
lean_ctor_set(v___x_4560_, 1, v___x_4559_);
v___x_4561_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4562_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4560_, v___x_4561_);
v___x_4563_ = l_Lean_Json_mkObj(v___x_4562_);
lean_dec(v___x_4562_);
return v___x_4563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressBegin_toJson(lean_object* v_x_4566_){
_start:
{
lean_object* v_toWorkDoneProgressReport_4567_; lean_object* v_title_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4603_; 
v_toWorkDoneProgressReport_4567_ = lean_ctor_get(v_x_4566_, 0);
v_title_4568_ = lean_ctor_get(v_x_4566_, 1);
v_isSharedCheck_4603_ = !lean_is_exclusive(v_x_4566_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4570_ = v_x_4566_;
v_isShared_4571_ = v_isSharedCheck_4603_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_title_4568_);
lean_inc(v_toWorkDoneProgressReport_4567_);
lean_dec(v_x_4566_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4603_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v_kind_4572_; lean_object* v_message_x3f_4573_; uint8_t v_cancellable_4574_; lean_object* v_percentage_x3f_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4579_; 
v_kind_4572_ = lean_ctor_get(v_toWorkDoneProgressReport_4567_, 0);
lean_inc_ref(v_kind_4572_);
v_message_x3f_4573_ = lean_ctor_get(v_toWorkDoneProgressReport_4567_, 1);
lean_inc(v_message_x3f_4573_);
v_cancellable_4574_ = lean_ctor_get_uint8(v_toWorkDoneProgressReport_4567_, sizeof(void*)*3);
v_percentage_x3f_4575_ = lean_ctor_get(v_toWorkDoneProgressReport_4567_, 2);
lean_inc(v_percentage_x3f_4575_);
lean_dec_ref(v_toWorkDoneProgressReport_4567_);
v___x_4576_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4577_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4577_, 0, v_kind_4572_);
if (v_isShared_4571_ == 0)
{
lean_ctor_set(v___x_4570_, 1, v___x_4577_);
lean_ctor_set(v___x_4570_, 0, v___x_4576_);
v___x_4579_ = v___x_4570_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v___x_4576_);
lean_ctor_set(v_reuseFailAlloc_4602_, 1, v___x_4577_);
v___x_4579_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v___x_4580_ = lean_box(0);
v___x_4581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4581_, 0, v___x_4579_);
lean_ctor_set(v___x_4581_, 1, v___x_4580_);
v___x_4582_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4583_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4582_, v_message_x3f_4573_);
v___x_4584_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__1));
v___x_4585_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4585_, 0, v_cancellable_4574_);
v___x_4586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4584_);
lean_ctor_set(v___x_4586_, 1, v___x_4585_);
v___x_4587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4587_, 0, v___x_4586_);
lean_ctor_set(v___x_4587_, 1, v___x_4580_);
v___x_4588_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__2));
v___x_4589_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonVersionedTextDocumentIdentifier_toJson_spec__0(v___x_4588_, v_percentage_x3f_4575_);
v___x_4590_ = ((lean_object*)(l_Lean_Lsp_instToJsonCommand_toJson___closed__0));
v___x_4591_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4591_, 0, v_title_4568_);
v___x_4592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4590_);
lean_ctor_set(v___x_4592_, 1, v___x_4591_);
v___x_4593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4592_);
lean_ctor_set(v___x_4593_, 1, v___x_4580_);
v___x_4594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4594_, 0, v___x_4593_);
lean_ctor_set(v___x_4594_, 1, v___x_4580_);
v___x_4595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4595_, 0, v___x_4589_);
lean_ctor_set(v___x_4595_, 1, v___x_4594_);
v___x_4596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4587_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
v___x_4597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4597_, 0, v___x_4583_);
lean_ctor_set(v___x_4597_, 1, v___x_4596_);
v___x_4598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4581_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
v___x_4599_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4600_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4598_, v___x_4599_);
v___x_4601_ = l_Lean_Json_mkObj(v___x_4600_);
lean_dec(v___x_4600_);
return v___x_4601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressEnd_toJson(lean_object* v_x_4606_){
_start:
{
lean_object* v_kind_4607_; lean_object* v_message_x3f_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4626_; 
v_kind_4607_ = lean_ctor_get(v_x_4606_, 0);
v_message_x3f_4608_ = lean_ctor_get(v_x_4606_, 1);
v_isSharedCheck_4626_ = !lean_is_exclusive(v_x_4606_);
if (v_isSharedCheck_4626_ == 0)
{
v___x_4610_ = v_x_4606_;
v_isShared_4611_ = v_isSharedCheck_4626_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_message_x3f_4608_);
lean_inc(v_kind_4607_);
lean_dec(v_x_4606_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4626_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___x_4612_ = ((lean_object*)(l_Lean_Lsp_instToJsonDocumentChange___lam__0___closed__0));
v___x_4613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_kind_4607_);
if (v_isShared_4611_ == 0)
{
lean_ctor_set(v___x_4610_, 1, v___x_4613_);
lean_ctor_set(v___x_4610_, 0, v___x_4612_);
v___x_4615_ = v___x_4610_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4612_);
lean_ctor_set(v_reuseFailAlloc_4625_, 1, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4616_ = lean_box(0);
v___x_4617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4615_);
lean_ctor_set(v___x_4617_, 1, v___x_4616_);
v___x_4618_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressReport_toJson___closed__0));
v___x_4619_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4618_, v_message_x3f_4608_);
v___x_4620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4620_, 0, v___x_4619_);
lean_ctor_set(v___x_4620_, 1, v___x_4616_);
v___x_4621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4621_, 0, v___x_4617_);
lean_ctor_set(v___x_4621_, 1, v___x_4620_);
v___x_4622_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4623_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4621_, v___x_4622_);
v___x_4624_ = l_Lean_Json_mkObj(v___x_4623_);
lean_dec(v___x_4623_);
return v___x_4624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson(lean_object* v_x_4630_){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4631_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0));
v___x_4632_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4631_, v_x_4630_);
v___x_4633_ = lean_box(0);
v___x_4634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4632_);
lean_ctor_set(v___x_4634_, 1, v___x_4633_);
v___x_4635_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4636_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4634_, v___x_4635_);
v___x_4637_ = l_Lean_Json_mkObj(v___x_4636_);
lean_dec(v___x_4636_);
return v___x_4637_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
v___x_4645_ = 1;
v___x_4646_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__1));
v___x_4647_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4646_, v___x_4645_);
return v___x_4647_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4648_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4649_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__2);
v___x_4650_ = lean_string_append(v___x_4649_, v___x_4648_);
return v___x_4650_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = 1;
v___x_4655_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__5));
v___x_4656_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4655_, v___x_4654_);
return v___x_4656_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__6);
v___x_4658_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__3);
v___x_4659_ = lean_string_append(v___x_4658_, v___x_4657_);
return v___x_4659_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4660_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4661_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__7);
v___x_4662_ = lean_string_append(v___x_4661_, v___x_4660_);
return v___x_4662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson(lean_object* v_json_4663_){
_start:
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4664_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressParams_toJson___closed__0));
v___x_4665_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4663_, v___x_4664_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4666_; lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4675_; 
v_a_4666_ = lean_ctor_get(v___x_4665_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4665_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4668_ = v___x_4665_;
v_isShared_4669_ = v_isSharedCheck_4675_;
goto v_resetjp_4667_;
}
else
{
lean_inc(v_a_4666_);
lean_dec(v___x_4665_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4675_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4673_; 
v___x_4670_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressParams_fromJson___closed__8);
v___x_4671_ = lean_string_append(v___x_4670_, v_a_4666_);
lean_dec(v_a_4666_);
if (v_isShared_4669_ == 0)
{
lean_ctor_set(v___x_4668_, 0, v___x_4671_);
v___x_4673_ = v___x_4668_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v___x_4671_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
else
{
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
v_a_4676_ = lean_ctor_get(v___x_4665_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4665_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4665_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4665_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
lean_ctor_set_tag(v___x_4678_, 0);
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
else
{
lean_object* v_a_4684_; lean_object* v___x_4686_; uint8_t v_isShared_4687_; uint8_t v_isSharedCheck_4691_; 
v_a_4684_ = lean_ctor_get(v___x_4665_, 0);
v_isSharedCheck_4691_ = !lean_is_exclusive(v___x_4665_);
if (v_isSharedCheck_4691_ == 0)
{
v___x_4686_ = v___x_4665_;
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
else
{
lean_inc(v_a_4684_);
lean_dec(v___x_4665_);
v___x_4686_ = lean_box(0);
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
v_resetjp_4685_:
{
lean_object* v___x_4689_; 
if (v_isShared_4687_ == 0)
{
v___x_4689_ = v___x_4686_;
goto v_reusejp_4688_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_a_4684_);
v___x_4689_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4688_;
}
v_reusejp_4688_:
{
return v___x_4689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonPartialResultParams_toJson(lean_object* v_x_4695_){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4696_ = ((lean_object*)(l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0));
v___x_4697_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonTextEdit_toJson_spec__1(v___x_4696_, v_x_4695_);
v___x_4698_ = lean_box(0);
v___x_4699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4697_);
lean_ctor_set(v___x_4699_, 1, v___x_4698_);
v___x_4700_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4701_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4699_, v___x_4700_);
v___x_4702_ = l_Lean_Json_mkObj(v___x_4701_);
lean_dec(v___x_4701_);
return v___x_4702_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4710_ = 1;
v___x_4711_ = ((lean_object*)(l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__1));
v___x_4712_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4711_, v___x_4710_);
return v___x_4712_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4713_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4714_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__2);
v___x_4715_ = lean_string_append(v___x_4714_, v___x_4713_);
return v___x_4715_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4719_ = 1;
v___x_4720_ = ((lean_object*)(l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__5));
v___x_4721_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4720_, v___x_4719_);
return v___x_4721_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4722_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__6);
v___x_4723_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__3);
v___x_4724_ = lean_string_append(v___x_4723_, v___x_4722_);
return v___x_4724_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
v___x_4725_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4726_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__7);
v___x_4727_ = lean_string_append(v___x_4726_, v___x_4725_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonPartialResultParams_fromJson(lean_object* v_json_4728_){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; 
v___x_4729_ = ((lean_object*)(l_Lean_Lsp_instToJsonPartialResultParams_toJson___closed__0));
v___x_4730_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonTextEdit_fromJson_spec__1(v_json_4728_, v___x_4729_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4740_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4733_ = v___x_4730_;
v_isShared_4734_ = v_isSharedCheck_4740_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v___x_4730_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4740_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4738_; 
v___x_4735_ = lean_obj_once(&l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonPartialResultParams_fromJson___closed__8);
v___x_4736_ = lean_string_append(v___x_4735_, v_a_4731_);
lean_dec(v_a_4731_);
if (v_isShared_4734_ == 0)
{
lean_ctor_set(v___x_4733_, 0, v___x_4736_);
v___x_4738_ = v___x_4733_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v___x_4736_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
return v___x_4738_;
}
}
}
else
{
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4748_; 
v_a_4741_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4743_ = v___x_4730_;
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
else
{
lean_inc(v_a_4741_);
lean_dec(v___x_4730_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v___x_4746_; 
if (v_isShared_4744_ == 0)
{
lean_ctor_set_tag(v___x_4743_, 0);
v___x_4746_ = v___x_4743_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_a_4741_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
v_a_4749_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4730_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4730_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(uint8_t v_x_4760_){
_start:
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v___x_4761_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0));
v___x_4762_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4762_, 0, v_x_4760_);
v___x_4763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4761_);
lean_ctor_set(v___x_4763_, 1, v___x_4762_);
v___x_4764_ = lean_box(0);
v___x_4765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4763_);
lean_ctor_set(v___x_4765_, 1, v___x_4764_);
v___x_4766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4766_, 0, v___x_4765_);
lean_ctor_set(v___x_4766_, 1, v___x_4764_);
v___x_4767_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4768_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4766_, v___x_4767_);
v___x_4769_ = l_Lean_Json_mkObj(v___x_4768_);
lean_dec(v___x_4768_);
return v___x_4769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___boxed(lean_object* v_x_4770_){
_start:
{
uint8_t v_x_29__boxed_4771_; lean_object* v_res_4772_; 
v_x_29__boxed_4771_ = lean_unbox(v_x_4770_);
v_res_4772_ = l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson(v_x_29__boxed_4771_);
return v_res_4772_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2(void){
_start:
{
uint8_t v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v___x_4780_ = 1;
v___x_4781_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__1));
v___x_4782_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4781_, v___x_4780_);
return v___x_4782_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3(void){
_start:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; 
v___x_4783_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4784_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__2);
v___x_4785_ = lean_string_append(v___x_4784_, v___x_4783_);
return v___x_4785_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5(void){
_start:
{
uint8_t v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4788_ = 1;
v___x_4789_ = ((lean_object*)(l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__4));
v___x_4790_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4789_, v___x_4788_);
return v___x_4790_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6(void){
_start:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4791_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__5);
v___x_4792_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__3);
v___x_4793_ = lean_string_append(v___x_4792_, v___x_4791_);
return v___x_4793_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4794_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4795_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__6);
v___x_4796_ = lean_string_append(v___x_4795_, v___x_4794_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson(lean_object* v_json_4797_){
_start:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4798_ = ((lean_object*)(l_Lean_Lsp_instToJsonWorkDoneProgressOptions_toJson___closed__0));
v___x_4799_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonChangeAnnotation_fromJson_spec__0(v_json_4797_, v___x_4798_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4809_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4802_ = v___x_4799_;
v_isShared_4803_ = v_isSharedCheck_4809_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_a_4800_);
lean_dec(v___x_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4809_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4807_; 
v___x_4804_ = lean_obj_once(&l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7, &l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonWorkDoneProgressOptions_fromJson___closed__7);
v___x_4805_ = lean_string_append(v___x_4804_, v_a_4800_);
lean_dec(v_a_4800_);
if (v_isShared_4803_ == 0)
{
lean_ctor_set(v___x_4802_, 0, v___x_4805_);
v___x_4807_ = v___x_4802_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v___x_4805_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
else
{
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4817_; 
v_a_4810_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4812_ = v___x_4799_;
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4799_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4815_; 
if (v_isShared_4813_ == 0)
{
lean_ctor_set_tag(v___x_4812_, 0);
v___x_4815_ = v___x_4812_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v_a_4810_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
v_a_4818_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4799_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4799_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(size_t v_sz_4828_, size_t v_i_4829_, lean_object* v_bs_4830_){
_start:
{
uint8_t v___x_4831_; 
v___x_4831_ = lean_usize_dec_lt(v_i_4829_, v_sz_4828_);
if (v___x_4831_ == 0)
{
lean_object* v___x_4832_; 
v___x_4832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4832_, 0, v_bs_4830_);
return v___x_4832_;
}
else
{
lean_object* v_v_4833_; lean_object* v___x_4834_; 
v_v_4833_ = lean_array_uget_borrowed(v_bs_4830_, v_i_4829_);
lean_inc(v_v_4833_);
v___x_4834_ = l_Lean_Json_getStr_x3f(v_v_4833_);
if (lean_obj_tag(v___x_4834_) == 0)
{
lean_object* v_a_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4842_; 
lean_dec_ref(v_bs_4830_);
v_a_4835_ = lean_ctor_get(v___x_4834_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v___x_4834_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4837_ = v___x_4834_;
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_a_4835_);
lean_dec(v___x_4834_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4840_; 
if (v_isShared_4838_ == 0)
{
v___x_4840_ = v___x_4837_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_a_4835_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
else
{
lean_object* v_a_4843_; lean_object* v___x_4844_; lean_object* v_bs_x27_4845_; size_t v___x_4846_; size_t v___x_4847_; lean_object* v___x_4848_; 
v_a_4843_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_a_4843_);
lean_dec_ref_known(v___x_4834_, 1);
v___x_4844_ = lean_unsigned_to_nat(0u);
v_bs_x27_4845_ = lean_array_uset(v_bs_4830_, v_i_4829_, v___x_4844_);
v___x_4846_ = ((size_t)1ULL);
v___x_4847_ = lean_usize_add(v_i_4829_, v___x_4846_);
v___x_4848_ = lean_array_uset(v_bs_x27_4845_, v_i_4829_, v_a_4843_);
v_i_4829_ = v___x_4847_;
v_bs_4830_ = v___x_4848_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4850_, lean_object* v_i_4851_, lean_object* v_bs_4852_){
_start:
{
size_t v_sz_boxed_4853_; size_t v_i_boxed_4854_; lean_object* v_res_4855_; 
v_sz_boxed_4853_ = lean_unbox_usize(v_sz_4850_);
lean_dec(v_sz_4850_);
v_i_boxed_4854_ = lean_unbox_usize(v_i_4851_);
lean_dec(v_i_4851_);
v_res_4855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_4853_, v_i_boxed_4854_, v_bs_4852_);
return v_res_4855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(lean_object* v_x_4856_){
_start:
{
if (lean_obj_tag(v_x_4856_) == 4)
{
lean_object* v_elems_4857_; size_t v_sz_4858_; size_t v___x_4859_; lean_object* v___x_4860_; 
v_elems_4857_ = lean_ctor_get(v_x_4856_, 0);
lean_inc_ref(v_elems_4857_);
lean_dec_ref_known(v_x_4856_, 1);
v_sz_4858_ = lean_array_size(v_elems_4857_);
v___x_4859_ = ((size_t)0ULL);
v___x_4860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0_spec__1(v_sz_4858_, v___x_4859_, v_elems_4857_);
return v___x_4860_;
}
else
{
lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
v___x_4861_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__0));
v___x_4862_ = lean_unsigned_to_nat(80u);
v___x_4863_ = l_Lean_Json_pretty(v_x_4856_, v___x_4862_);
v___x_4864_ = lean_string_append(v___x_4861_, v___x_4863_);
lean_dec_ref(v___x_4863_);
v___x_4865_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonCommand_fromJson_spec__0_spec__0_spec__1___closed__1));
v___x_4866_ = lean_string_append(v___x_4864_, v___x_4865_);
v___x_4867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
return v___x_4867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(lean_object* v_j_4868_, lean_object* v_k_4869_){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; 
v___x_4870_ = l_Lean_Json_getObjValD(v_j_4868_, v_k_4869_);
v___x_4871_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0_spec__0(v___x_4870_);
return v___x_4871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0___boxed(lean_object* v_j_4872_, lean_object* v_k_4873_){
_start:
{
lean_object* v_res_4874_; 
v_res_4874_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(v_j_4872_, v_k_4873_);
lean_dec_ref(v_k_4873_);
return v_res_4874_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4881_ = 1;
v___x_4882_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__2));
v___x_4883_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4882_, v___x_4881_);
return v___x_4883_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4884_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__5));
v___x_4885_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__3);
v___x_4886_ = lean_string_append(v___x_4885_, v___x_4884_);
return v___x_4886_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4889_ = 1;
v___x_4890_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__5));
v___x_4891_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4890_, v___x_4889_);
return v___x_4891_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4892_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__6);
v___x_4893_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__4);
v___x_4894_ = lean_string_append(v___x_4893_, v___x_4892_);
return v___x_4894_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; 
v___x_4895_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLocation_fromJson___closed__10));
v___x_4896_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__7);
v___x_4897_ = lean_string_append(v___x_4896_, v___x_4895_);
return v___x_4897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonResolveSupport_fromJson(lean_object* v_json_4898_){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4899_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0));
v___x_4900_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonResolveSupport_fromJson_spec__0(v_json_4898_, v___x_4899_);
if (lean_obj_tag(v___x_4900_) == 0)
{
lean_object* v_a_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4910_; 
v_a_4901_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4903_ = v___x_4900_;
v_isShared_4904_ = v_isSharedCheck_4910_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_a_4901_);
lean_dec(v___x_4900_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4910_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4908_; 
v___x_4905_ = lean_obj_once(&l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8, &l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__8);
v___x_4906_ = lean_string_append(v___x_4905_, v_a_4901_);
lean_dec(v_a_4901_);
if (v_isShared_4904_ == 0)
{
lean_ctor_set(v___x_4903_, 0, v___x_4906_);
v___x_4908_ = v___x_4903_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4906_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
else
{
if (lean_obj_tag(v___x_4900_) == 0)
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
v_a_4911_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4900_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4900_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 0);
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
else
{
lean_object* v_a_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4926_; 
v_a_4919_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4926_ == 0)
{
v___x_4921_ = v___x_4900_;
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_a_4919_);
lean_dec(v___x_4900_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v___x_4924_; 
if (v_isShared_4922_ == 0)
{
v___x_4924_ = v___x_4921_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_a_4919_);
v___x_4924_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
return v___x_4924_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(size_t v_sz_4929_, size_t v_i_4930_, lean_object* v_bs_4931_){
_start:
{
uint8_t v___x_4932_; 
v___x_4932_ = lean_usize_dec_lt(v_i_4930_, v_sz_4929_);
if (v___x_4932_ == 0)
{
return v_bs_4931_;
}
else
{
lean_object* v_v_4933_; lean_object* v___x_4934_; lean_object* v_bs_x27_4935_; lean_object* v___x_4936_; size_t v___x_4937_; size_t v___x_4938_; lean_object* v___x_4939_; 
v_v_4933_ = lean_array_uget(v_bs_4931_, v_i_4930_);
v___x_4934_ = lean_unsigned_to_nat(0u);
v_bs_x27_4935_ = lean_array_uset(v_bs_4931_, v_i_4930_, v___x_4934_);
v___x_4936_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4936_, 0, v_v_4933_);
v___x_4937_ = ((size_t)1ULL);
v___x_4938_ = lean_usize_add(v_i_4930_, v___x_4937_);
v___x_4939_ = lean_array_uset(v_bs_x27_4935_, v_i_4930_, v___x_4936_);
v_i_4930_ = v___x_4938_;
v_bs_4931_ = v___x_4939_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4941_, lean_object* v_i_4942_, lean_object* v_bs_4943_){
_start:
{
size_t v_sz_boxed_4944_; size_t v_i_boxed_4945_; lean_object* v_res_4946_; 
v_sz_boxed_4944_ = lean_unbox_usize(v_sz_4941_);
lean_dec(v_sz_4941_);
v_i_boxed_4945_ = lean_unbox_usize(v_i_4942_);
lean_dec(v_i_4942_);
v_res_4946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(v_sz_boxed_4944_, v_i_boxed_4945_, v_bs_4943_);
return v_res_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(lean_object* v_a_4947_){
_start:
{
size_t v_sz_4948_; size_t v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
v_sz_4948_ = lean_array_size(v_a_4947_);
v___x_4949_ = ((size_t)0ULL);
v___x_4950_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0_spec__0(v_sz_4948_, v___x_4949_, v_a_4947_);
v___x_4951_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4950_);
return v___x_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolveSupport_toJson(lean_object* v_x_4952_){
_start:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4953_ = ((lean_object*)(l_Lean_Lsp_instFromJsonResolveSupport_fromJson___closed__0));
v___x_4954_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonResolveSupport_toJson_spec__0(v_x_4952_);
v___x_4955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4955_, 0, v___x_4953_);
lean_ctor_set(v___x_4955_, 1, v___x_4954_);
v___x_4956_ = lean_box(0);
v___x_4957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4955_);
lean_ctor_set(v___x_4957_, 1, v___x_4956_);
v___x_4958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4957_);
lean_ctor_set(v___x_4958_, 1, v___x_4956_);
v___x_4959_ = ((lean_object*)(l_Lean_Lsp_instToJsonLocation_toJson___closed__2));
v___x_4960_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLocation_toJson_spec__0(v___x_4958_, v___x_4959_);
v___x_4961_ = l_Lean_Json_mkObj(v___x_4960_);
lean_dec(v___x_4960_);
return v___x_4961_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedLocation_default = _init_l_Lean_Lsp_instInhabitedLocation_default();
lean_mark_persistent(l_Lean_Lsp_instInhabitedLocation_default);
l_Lean_Lsp_instInhabitedLocation = _init_l_Lean_Lsp_instInhabitedLocation();
lean_mark_persistent(l_Lean_Lsp_instInhabitedLocation);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
