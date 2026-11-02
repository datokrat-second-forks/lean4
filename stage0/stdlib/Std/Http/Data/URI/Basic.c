// Lean compiler output
// Module: Std.Http.Data.URI.Basic
// Imports: import Init.Data.ToString public import Std.Net public import Std.Http.Internal public import Std.Http.Data.URI.Encoding public import Init.Data.String.Search public import Init.Data.String.Length
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t l_Nat_blt(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_sarray_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv4Addr_decEq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv6Addr_decEq(lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_ByteArray_empty;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
extern lean_object* l_Std_Net_instInhabitedIPv4Addr_default;
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Option_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
static const lean_string_object l_Std_Http_URI_instInhabitedScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Std_Http_URI_instInhabitedScheme___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedScheme = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.Data.URI.Basic"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Scheme.ofString!"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__1_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid URI scheme: "};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__2 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_defaultPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Std_Http_URI_Scheme_defaultPort___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_defaultPort___closed__0_value;
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedUserInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "password"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprUserInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprUserInfo = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqUserInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqUserInfo = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedHost_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedHost_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqHost_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqHost = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Http.URI.Host."};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv4"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__2_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__3_value;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__4;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprHost___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprHost = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringHost___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringHost = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.empty"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Http.URI.Port.omitted"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.value"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPort_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPort___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPort = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedAuthority_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userInfo"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprAuthority_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprAuthority = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqAuthority_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqAuthority = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringAuthority___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringAuthority = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedPath_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedPath_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath_default = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value;
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "segments"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "absolute"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPath_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPath = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqPath_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqPath = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instToStringPath___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__3 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__4 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__5 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__6 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__7 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__8 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__9 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__10 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringPath = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_repr___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Prod_repr___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprQuery = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqQuery = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object*);
static const lean_string_object l_Std_Http_URI_Query_formatQueryParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Std_Http_URI_Query_formatQueryParam___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_formatQueryParam___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_Query_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Query_empty___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_empty = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_URI_Query_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Query_get___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_get___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Query_toRawString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_Std_Http_URI_Query_toRawString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_toRawString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instEmptyCollection = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instSingletonProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instSingletonProdString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instSingletonProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instSingletonProdString = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instInsertProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instInsertProdString___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instInsertProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instInsertProdString = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Query_instToString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Std_Http_URI_Query_instToString___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value;
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value)} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__1 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instToString = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scheme"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__4;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "authority"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "query"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fragment"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURI_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURI___closed__0 = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURI = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURI_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedURI_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI_default = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instBEqURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instBEqURI_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instBEqURI___closed__0 = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instBEqURI = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_instToStringURI___lam__1___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___lam__1___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_instToStringURI___lam__1___closed__1 = (const lean_object*)&l_Std_Http_instToStringURI___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURI___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringURI___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURI = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder_default = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Builder_empty = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setScheme_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Http.URI.Builder.setScheme!"};
static const lean_object* l_Std_Http_URI_Builder_setScheme_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setScheme_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Builder.setHost!"};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid domain name: "};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprOrigin_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprOrigin = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqOrigin_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqOrigin = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object*);
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprRelativeRef_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprRelativeRef = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqRelativeRef_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqRelativeRef = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringRelativeRef___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringRelativeRef = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.absolute"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__2_value;
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.relative"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURIReference_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURIReference___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURIReference = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURIReference_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value)}};
static const lean_object* l_Std_Http_instInhabitedURIReference_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference_default = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instToStringURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURIReference___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_instToStringURIReference___closed__0 = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURIReference = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_instInhabitedRequestTarget_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedRequestTarget_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget_default = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.asteriskForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__1_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Http.RequestTarget.originForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__4_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.absoluteForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__6 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__7 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__7_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Http.RequestTarget.authorityForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__8 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__9 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__10 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprRequestTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprRequestTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprRequestTarget___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprRequestTarget = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
static const lean_array_object l_Std_Http_RequestTarget_path___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value;
static const lean_ctor_object l_Std_Http_RequestTarget_path___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__1 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object*);
static const lean_string_object l_Std_Http_RequestTarget_instToString___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_RequestTarget_instToString___lam__2___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instToString___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_RequestTarget_instToString___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instToString = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instEncodeV11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instEncodeV11___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value),((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_RequestTarget_instEncodeV11___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instEncodeV11 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object* v_s_3_, lean_object* v_p_4_){
_start:
{
lean_object* v___y_6_; lean_object* v___y_7_; uint32_t v___y_11_; lean_object* v___x_23_; uint8_t v_decide_24_; 
v___x_23_ = lean_string_utf8_byte_size(v_s_3_);
v_decide_24_ = lean_nat_dec_eq(v_p_4_, v___x_23_);
if (v_decide_24_ == 0)
{
uint32_t v___x_25_; uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_25_ = lean_string_utf8_get_fast(v_s_3_, v_p_4_);
v___x_26_ = 65;
v___x_27_ = lean_uint32_dec_le(v___x_26_, v___x_25_);
if (v___x_27_ == 0)
{
v___y_11_ = v___x_25_;
goto v___jp_10_;
}
else
{
uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_28_ = 90;
v___x_29_ = lean_uint32_dec_le(v___x_25_, v___x_28_);
if (v___x_29_ == 0)
{
v___y_11_ = v___x_25_;
goto v___jp_10_;
}
else
{
uint32_t v___x_30_; uint32_t v___x_31_; 
v___x_30_ = 32;
v___x_31_ = lean_uint32_add(v___x_25_, v___x_30_);
v___y_11_ = v___x_31_;
goto v___jp_10_;
}
}
}
else
{
lean_dec(v_p_4_);
return v_s_3_;
}
v___jp_5_:
{
lean_object* v___x_8_; 
v___x_8_ = lean_nat_add(v_p_4_, v___y_7_);
lean_dec(v_p_4_);
v_s_3_ = v___y_6_;
v_p_4_ = v___x_8_;
goto _start;
}
v___jp_10_:
{
lean_object* v___x_12_; uint32_t v___x_13_; uint8_t v___x_14_; 
lean_inc(v_p_4_);
v___x_12_ = lean_string_utf8_set(v_s_3_, v_p_4_, v___y_11_);
v___x_13_ = 127;
v___x_14_ = lean_uint32_dec_le(v___y_11_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 2047;
v___x_16_ = lean_uint32_dec_le(v___y_11_, v___x_15_);
if (v___x_16_ == 0)
{
uint32_t v___x_17_; uint8_t v___x_18_; 
v___x_17_ = 65535;
v___x_18_ = lean_uint32_dec_le(v___y_11_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(4u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_19_;
goto v___jp_5_;
}
else
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(3u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_20_;
goto v___jp_5_;
}
}
else
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(2u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_21_;
goto v___jp_5_;
}
}
else
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(1u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_22_;
goto v___jp_5_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 1;
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; uint32_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_head_34_ = lean_ctor_get(v_x_32_, 0);
v_tail_35_ = lean_ctor_get(v_x_32_, 1);
v___x_65_ = lean_unbox_uint32(v_head_34_);
v___x_66_ = lean_uint32_to_nat(v___x_65_);
v___x_67_ = lean_unsigned_to_nat(128u);
v___x_68_ = l_Nat_blt(v___x_66_, v___x_67_);
lean_dec(v___x_66_);
if (v___x_68_ == 0)
{
goto v___jp_36_;
}
else
{
uint32_t v___x_69_; uint32_t v___x_70_; uint8_t v___x_71_; 
v___x_69_ = 48;
v___x_70_ = lean_unbox_uint32(v_head_34_);
v___x_71_ = lean_uint32_dec_le(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
goto v___jp_57_;
}
else
{
uint32_t v___x_72_; uint32_t v___x_73_; uint8_t v___x_74_; 
v___x_72_ = 57;
v___x_73_ = lean_unbox_uint32(v_head_34_);
v___x_74_ = lean_uint32_dec_le(v___x_73_, v___x_72_);
if (v___x_74_ == 0)
{
goto v___jp_57_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
v___jp_36_:
{
uint32_t v___x_37_; uint32_t v___x_38_; uint8_t v___x_39_; 
v___x_37_ = 43;
v___x_38_ = lean_unbox_uint32(v_head_34_);
v___x_39_ = lean_uint32_dec_eq(v___x_38_, v___x_37_);
if (v___x_39_ == 0)
{
uint32_t v___x_40_; uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_40_ = 45;
v___x_41_ = lean_unbox_uint32(v_head_34_);
v___x_42_ = lean_uint32_dec_eq(v___x_41_, v___x_40_);
if (v___x_42_ == 0)
{
uint32_t v___x_43_; uint32_t v___x_44_; uint8_t v___x_45_; 
v___x_43_ = 46;
v___x_44_ = lean_unbox_uint32(v_head_34_);
v___x_45_ = lean_uint32_dec_eq(v___x_44_, v___x_43_);
if (v___x_45_ == 0)
{
return v___x_45_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
v___jp_49_:
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = 97;
v___x_51_ = lean_unbox_uint32(v_head_34_);
v___x_52_ = lean_uint32_dec_le(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
goto v___jp_36_;
}
else
{
uint32_t v___x_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = 122;
v___x_54_ = lean_unbox_uint32(v_head_34_);
v___x_55_ = lean_uint32_dec_le(v___x_54_, v___x_53_);
if (v___x_55_ == 0)
{
goto v___jp_36_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
v___jp_57_:
{
uint32_t v___x_58_; uint32_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = 65;
v___x_59_ = lean_unbox_uint32(v_head_34_);
v___x_60_ = lean_uint32_dec_le(v___x_58_, v___x_59_);
if (v___x_60_ == 0)
{
goto v___jp_49_;
}
else
{
uint32_t v___x_61_; uint32_t v___x_62_; uint8_t v___x_63_; 
v___x_61_ = 90;
v___x_62_ = lean_unbox_uint32(v_head_34_);
v___x_63_ = lean_uint32_dec_le(v___x_62_, v___x_61_);
if (v___x_63_ == 0)
{
goto v___jp_49_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object* v_x_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v_x_76_);
lean_dec(v_x_76_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object* v_s_79_){
_start:
{
lean_object* v___x_80_; lean_object* v_lower_81_; uint8_t v___x_82_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v_lower_81_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_79_, v___x_80_);
lean_inc_ref(v_lower_81_);
v___x_82_ = l_Std_Http_Internal_instDecidableIsLowerCase(v_lower_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; 
lean_dec_ref(v_lower_81_);
v___x_83_ = lean_box(0);
return v___x_83_;
}
else
{
lean_object* v___x_84_; uint8_t v___x_85_; 
lean_inc_ref(v_lower_81_);
v___x_84_ = l_String_toListImpl(v_lower_81_);
v___x_85_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v___x_84_);
lean_dec_ref(v_lower_81_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
v___x_87_ = l_List_head_x3f___redArg(v___x_84_);
lean_dec(v___x_84_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v___x_88_; 
lean_dec_ref(v_lower_81_);
v___x_88_ = lean_box(0);
return v___x_88_;
}
else
{
lean_object* v_val_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_112_; 
v_val_89_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_112_ == 0)
{
v___x_91_ = v___x_87_;
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_val_89_);
lean_dec(v___x_87_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
uint32_t v___x_105_; uint32_t v___x_106_; uint8_t v___x_107_; 
v___x_105_ = 65;
v___x_106_ = lean_unbox_uint32(v_val_89_);
v___x_107_ = lean_uint32_dec_le(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
goto v___jp_93_;
}
else
{
uint32_t v___x_108_; uint32_t v___x_109_; uint8_t v___x_110_; 
v___x_108_ = 90;
v___x_109_ = lean_unbox_uint32(v_val_89_);
v___x_110_ = lean_uint32_dec_le(v___x_109_, v___x_108_);
if (v___x_110_ == 0)
{
goto v___jp_93_;
}
else
{
lean_object* v___x_111_; 
lean_del_object(v___x_91_);
lean_dec(v_val_89_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v_lower_81_);
return v___x_111_;
}
}
v___jp_93_:
{
uint32_t v___x_94_; uint32_t v___x_95_; uint8_t v___x_96_; 
v___x_94_ = 97;
v___x_95_ = lean_unbox_uint32(v_val_89_);
v___x_96_ = lean_uint32_dec_le(v___x_94_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_del_object(v___x_91_);
lean_dec(v_val_89_);
lean_dec_ref(v_lower_81_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = 122;
v___x_99_ = lean_unbox_uint32(v_val_89_);
lean_dec(v_val_89_);
v___x_100_ = lean_uint32_dec_le(v___x_99_, v___x_98_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
lean_del_object(v___x_91_);
lean_dec_ref(v_lower_81_);
v___x_101_ = lean_box(0);
return v___x_101_;
}
else
{
lean_object* v___x_103_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v_lower_81_);
v___x_103_ = v___x_91_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_lower_81_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
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
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object* v_msg_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
v___x_115_ = lean_panic_fn_borrowed(v___x_114_, v_msg_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object* v_s_119_){
_start:
{
lean_object* v___x_120_; 
lean_inc_ref(v_s_119_);
v___x_120_ = l_Std_Http_URI_Scheme_ofString_x3f(v_s_119_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_121_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_122_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__1));
v___x_123_ = lean_unsigned_to_nat(84u);
v___x_124_ = lean_unsigned_to_nat(12u);
v___x_125_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_126_ = l_String_quote(v_s_119_);
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = l_mkPanicMessageWithDecl(v___x_121_, v___x_122_, v___x_123_, v___x_124_, v___x_127_);
lean_dec_ref(v___x_127_);
v___x_129_ = l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(v___x_128_);
return v___x_129_;
}
else
{
lean_object* v_val_130_; 
lean_dec_ref(v_s_119_);
v_val_130_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_val_130_);
lean_dec_ref_known(v___x_120_, 1);
return v_val_130_;
}
}
}
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object* v_scheme_132_){
_start:
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___x_134_ = lean_string_dec_eq(v_scheme_132_, v___x_133_);
if (v___x_134_ == 0)
{
uint16_t v___x_135_; 
v___x_135_ = 80;
return v___x_135_;
}
else
{
uint16_t v___x_136_; 
v___x_136_ = 443;
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object* v_scheme_137_){
_start:
{
uint16_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_137_);
lean_dec_ref(v_scheme_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t v_port_140_){
_start:
{
uint16_t v___x_141_; uint8_t v___x_142_; 
v___x_141_ = 443;
v___x_142_ = lean_uint16_dec_eq(v_port_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
return v___x_143_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object* v_port_145_){
_start:
{
uint16_t v_port_boxed_146_; lean_object* v_res_147_; 
v_port_boxed_146_ = lean_unbox(v_port_145_);
v_res_147_ = l_Std_Http_URI_Scheme_ofPort(v_port_boxed_146_);
return v_res_147_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = l_ByteArray_empty;
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Std_Http_URI_instInhabitedUserInfo_default___closed__0, &l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0);
return v___x_151_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Std_Http_URI_instInhabitedUserInfo_default;
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
if (lean_obj_tag(v_x_159_) == 0)
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_161_;
}
else
{
lean_object* v_val_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_174_; 
v_val_162_ = lean_ctor_get(v_x_159_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_174_ == 0)
{
v___x_164_ = v_x_159_;
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_val_162_);
lean_dec(v_x_159_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_166_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_167_ = lean_string_from_utf8_unchecked(v_val_162_);
v___x_168_ = l_String_quote(v___x_167_);
if (v_isShared_165_ == 0)
{
lean_ctor_set_tag(v___x_164_, 3);
lean_ctor_set(v___x_164_, 0, v___x_168_);
v___x_170_ = v___x_164_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_168_);
v___x_170_ = v_reuseFailAlloc_173_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_166_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_x_160_);
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_x_175_, v_x_176_);
lean_dec(v_x_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_nat_to_int(v_a_178_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(12u);
v___x_194_ = lean_nat_to_int(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0));
v___x_203_ = lean_string_length(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13);
v___x_205_ = lean_nat_to_int(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object* v_x_210_){
_start:
{
lean_object* v_username_211_; lean_object* v_password_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_247_; 
v_username_211_ = lean_ctor_get(v_x_210_, 0);
v_password_212_ = lean_ctor_get(v_x_210_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_210_);
if (v_isSharedCheck_247_ == 0)
{
v___x_214_ = v_x_210_;
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_password_212_);
lean_inc(v_username_211_);
lean_dec(v_x_210_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_216_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_217_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6));
v___x_218_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_219_ = lean_string_from_utf8_unchecked(v_username_211_);
v___x_220_ = l_String_quote(v___x_219_);
v___x_221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
if (v_isShared_215_ == 0)
{
lean_ctor_set_tag(v___x_214_, 4);
lean_ctor_set(v___x_214_, 1, v___x_221_);
lean_ctor_set(v___x_214_, 0, v___x_218_);
v___x_223_ = v___x_214_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_221_);
v___x_223_ = v_reuseFailAlloc_246_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_224_ = 0;
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_224_);
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_217_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_box(1);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11));
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_216_);
v___x_234_ = lean_unsigned_to_nat(0u);
v___x_235_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_password_212_, v___x_234_);
v___x_236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_218_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*1, v___x_224_);
v___x_238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_233_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_240_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_238_);
v___x_242_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_239_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_224_);
return v___x_245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object* v_x_248_, lean_object* v_prec_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_x_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object* v_x_251_, lean_object* v_prec_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Std_Http_URI_instReprUserInfo_repr(v_x_251_, v_prec_252_);
lean_dec(v_prec_252_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object* v_x_256_, lean_object* v_x_257_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
if (lean_obj_tag(v_x_257_) == 0)
{
uint8_t v___x_258_; 
v___x_258_ = 1;
return v___x_258_;
}
else
{
uint8_t v___x_259_; 
v___x_259_ = 0;
return v___x_259_;
}
}
else
{
if (lean_obj_tag(v_x_257_) == 0)
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
else
{
lean_object* v_val_261_; lean_object* v_val_262_; uint8_t v___x_263_; 
v_val_261_ = lean_ctor_get(v_x_256_, 0);
v_val_262_ = lean_ctor_get(v_x_257_, 0);
v___x_263_ = lean_sarray_dec_eq(v_val_261_, v_val_262_);
return v___x_263_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_x_264_, v_x_265_);
lean_dec(v_x_265_);
lean_dec(v_x_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
lean_object* v_username_270_; lean_object* v_password_271_; lean_object* v_username_272_; lean_object* v_password_273_; uint8_t v___x_274_; 
v_username_270_ = lean_ctor_get(v_x_268_, 0);
v_password_271_ = lean_ctor_get(v_x_268_, 1);
v_username_272_ = lean_ctor_get(v_x_269_, 0);
v_password_273_ = lean_ctor_get(v_x_269_, 1);
v___x_274_ = lean_sarray_dec_eq(v_username_270_, v_username_272_);
if (v___x_274_ == 0)
{
return v___x_274_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_password_271_, v_password_273_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
uint8_t v_res_278_; lean_object* v_r_279_; 
v_res_278_ = l_Std_Http_URI_instBEqUserInfo_beq(v_x_276_, v_x_277_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object* v_username_282_, lean_object* v_password_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_282_);
if (lean_obj_tag(v_password_283_) == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_box(0);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
return v___x_286_;
}
else
{
lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_296_; 
v_val_287_ = lean_ctor_get(v_password_283_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_password_283_);
if (v_isSharedCheck_296_ == 0)
{
v___x_289_ = v_password_283_;
v_isShared_290_ = v_isSharedCheck_296_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_dec(v_password_283_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_296_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_291_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_287_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_291_);
v___x_293_ = v___x_289_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_295_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_284_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object* v_ui_297_){
_start:
{
lean_object* v_username_298_; lean_object* v___x_299_; 
v_username_298_ = lean_ctor_get(v_ui_297_, 0);
v___x_299_ = l_Std_Http_URI_EncodedUserInfo_decode(v_username_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object* v_ui_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Std_Http_URI_UserInfo_username_x3f(v_ui_300_);
lean_dec_ref(v_ui_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object* v_ui_302_){
_start:
{
lean_object* v_password_303_; 
v_password_303_ = lean_ctor_get(v_ui_302_, 1);
if (lean_obj_tag(v_password_303_) == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_box(0);
return v___x_304_;
}
else
{
lean_object* v_val_305_; lean_object* v___x_306_; 
v_val_305_ = lean_ctor_get(v_password_303_, 0);
v___x_306_ = l_Std_Http_URI_EncodedUserInfo_decode(v_val_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object* v_ui_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Std_Http_URI_UserInfo_password_x3f(v_ui_307_);
lean_dec_ref(v_ui_307_);
return v_res_308_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object* v___x_309_, lean_object* v_x_310_){
_start:
{
if (lean_obj_tag(v_x_310_) == 0)
{
uint8_t v___x_311_; 
v___x_311_ = 1;
return v___x_311_;
}
else
{
lean_object* v_head_312_; lean_object* v_tail_313_; uint32_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v_head_312_ = lean_ctor_get(v_x_310_, 0);
v_tail_313_ = lean_ctor_get(v_x_310_, 1);
v___x_319_ = lean_unbox_uint32(v_head_312_);
v___x_320_ = lean_uint32_to_nat(v___x_319_);
v___x_321_ = lean_unsigned_to_nat(128u);
v___x_322_ = l_Nat_blt(v___x_320_, v___x_321_);
lean_dec(v___x_320_);
if (v___x_322_ == 0)
{
goto v___jp_314_;
}
else
{
lean_object* v___x_323_; uint8_t v___x_324_; uint32_t v___x_341_; uint32_t v___x_342_; uint8_t v___x_343_; 
v___x_323_ = lean_unsigned_to_nat(63u);
v___x_324_ = lean_nat_dec_le(v___x_309_, v___x_323_);
v___x_341_ = 48;
v___x_342_ = lean_unbox_uint32(v_head_312_);
v___x_343_ = lean_uint32_dec_le(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
goto v___jp_334_;
}
else
{
uint32_t v___x_344_; uint32_t v___x_345_; uint8_t v___x_346_; 
v___x_344_ = 57;
v___x_345_ = lean_unbox_uint32(v_head_312_);
v___x_346_ = lean_uint32_dec_le(v___x_345_, v___x_344_);
if (v___x_346_ == 0)
{
goto v___jp_334_;
}
else
{
goto v___jp_325_;
}
}
v___jp_325_:
{
if (v___x_324_ == 0)
{
goto v___jp_314_;
}
else
{
v_x_310_ = v_tail_313_;
goto _start;
}
}
v___jp_327_:
{
uint32_t v___x_328_; uint32_t v___x_329_; uint8_t v___x_330_; 
v___x_328_ = 97;
v___x_329_ = lean_unbox_uint32(v_head_312_);
v___x_330_ = lean_uint32_dec_le(v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
goto v___jp_314_;
}
else
{
uint32_t v___x_331_; uint32_t v___x_332_; uint8_t v___x_333_; 
v___x_331_ = 122;
v___x_332_ = lean_unbox_uint32(v_head_312_);
v___x_333_ = lean_uint32_dec_le(v___x_332_, v___x_331_);
if (v___x_333_ == 0)
{
goto v___jp_314_;
}
else
{
goto v___jp_325_;
}
}
}
v___jp_334_:
{
uint32_t v___x_335_; uint32_t v___x_336_; uint8_t v___x_337_; 
v___x_335_ = 65;
v___x_336_ = lean_unbox_uint32(v_head_312_);
v___x_337_ = lean_uint32_dec_le(v___x_335_, v___x_336_);
if (v___x_337_ == 0)
{
goto v___jp_327_;
}
else
{
uint32_t v___x_338_; uint32_t v___x_339_; uint8_t v___x_340_; 
v___x_338_ = 90;
v___x_339_ = lean_unbox_uint32(v_head_312_);
v___x_340_ = lean_uint32_dec_le(v___x_339_, v___x_338_);
if (v___x_340_ == 0)
{
goto v___jp_327_;
}
else
{
goto v___jp_325_;
}
}
}
}
v___jp_314_:
{
uint32_t v___x_315_; uint32_t v___x_316_; uint8_t v___x_317_; 
v___x_315_ = 45;
v___x_316_ = lean_unbox_uint32(v_head_312_);
v___x_317_ = lean_uint32_dec_eq(v___x_316_, v___x_315_);
if (v___x_317_ == 0)
{
return v___x_317_;
}
else
{
v_x_310_ = v_tail_313_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object* v___x_347_, lean_object* v_x_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v___x_347_, v_x_348_);
lean_dec(v_x_348_);
lean_dec(v___x_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object* v_s_351_){
_start:
{
uint32_t v___y_353_; uint32_t v___y_359_; lean_object* v_chars_364_; lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v_chars_364_ = l_String_toListImpl(v_s_351_);
v___x_381_ = l_List_lengthTR___redArg(v_chars_364_);
v___x_382_ = lean_unsigned_to_nat(63u);
v___x_383_ = lean_nat_dec_le(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v___x_381_);
lean_dec(v_chars_364_);
return v___x_383_;
}
else
{
uint8_t v___x_384_; 
v___x_384_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v___x_381_, v_chars_364_);
lean_dec(v___x_381_);
if (v___x_384_ == 0)
{
lean_dec(v_chars_364_);
return v___x_384_;
}
else
{
lean_object* v___x_385_; 
v___x_385_ = l_List_head_x3f___redArg(v_chars_364_);
if (lean_obj_tag(v___x_385_) == 0)
{
uint8_t v___x_386_; 
lean_dec(v_chars_364_);
v___x_386_ = 0;
return v___x_386_;
}
else
{
lean_object* v_val_387_; uint32_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v_val_387_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_val_387_);
lean_dec_ref_known(v___x_385_, 1);
v___x_402_ = lean_unbox_uint32(v_val_387_);
v___x_403_ = lean_uint32_to_nat(v___x_402_);
v___x_404_ = lean_unsigned_to_nat(128u);
v___x_405_ = l_Nat_blt(v___x_403_, v___x_404_);
lean_dec(v___x_403_);
if (v___x_405_ == 0)
{
lean_dec(v_val_387_);
lean_dec(v_chars_364_);
return v___x_405_;
}
else
{
uint32_t v___x_406_; uint32_t v___x_407_; uint8_t v___x_408_; 
v___x_406_ = 48;
v___x_407_ = lean_unbox_uint32(v_val_387_);
v___x_408_ = lean_uint32_dec_le(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
goto v___jp_395_;
}
else
{
uint32_t v___x_409_; uint32_t v___x_410_; uint8_t v___x_411_; 
v___x_409_ = 57;
v___x_410_ = lean_unbox_uint32(v_val_387_);
v___x_411_ = lean_uint32_dec_le(v___x_410_, v___x_409_);
if (v___x_411_ == 0)
{
goto v___jp_395_;
}
else
{
lean_dec(v_val_387_);
goto v___jp_365_;
}
}
}
v___jp_388_:
{
uint32_t v___x_389_; uint32_t v___x_390_; uint8_t v___x_391_; 
v___x_389_ = 97;
v___x_390_ = lean_unbox_uint32(v_val_387_);
v___x_391_ = lean_uint32_dec_le(v___x_389_, v___x_390_);
if (v___x_391_ == 0)
{
lean_dec(v_val_387_);
lean_dec(v_chars_364_);
return v___x_391_;
}
else
{
uint32_t v___x_392_; uint32_t v___x_393_; uint8_t v___x_394_; 
v___x_392_ = 122;
v___x_393_ = lean_unbox_uint32(v_val_387_);
lean_dec(v_val_387_);
v___x_394_ = lean_uint32_dec_le(v___x_393_, v___x_392_);
if (v___x_394_ == 0)
{
lean_dec(v_chars_364_);
return v___x_394_;
}
else
{
goto v___jp_365_;
}
}
}
v___jp_395_:
{
uint32_t v___x_396_; uint32_t v___x_397_; uint8_t v___x_398_; 
v___x_396_ = 65;
v___x_397_ = lean_unbox_uint32(v_val_387_);
v___x_398_ = lean_uint32_dec_le(v___x_396_, v___x_397_);
if (v___x_398_ == 0)
{
goto v___jp_388_;
}
else
{
uint32_t v___x_399_; uint32_t v___x_400_; uint8_t v___x_401_; 
v___x_399_ = 90;
v___x_400_ = lean_unbox_uint32(v_val_387_);
v___x_401_ = lean_uint32_dec_le(v___x_400_, v___x_399_);
if (v___x_401_ == 0)
{
goto v___jp_388_;
}
else
{
lean_dec(v_val_387_);
goto v___jp_365_;
}
}
}
}
}
}
v___jp_352_:
{
uint32_t v___x_354_; uint8_t v___x_355_; 
v___x_354_ = 97;
v___x_355_ = lean_uint32_dec_le(v___x_354_, v___y_353_);
if (v___x_355_ == 0)
{
return v___x_355_;
}
else
{
uint32_t v___x_356_; uint8_t v___x_357_; 
v___x_356_ = 122;
v___x_357_ = lean_uint32_dec_le(v___y_353_, v___x_356_);
return v___x_357_;
}
}
v___jp_358_:
{
uint32_t v___x_360_; uint8_t v___x_361_; 
v___x_360_ = 65;
v___x_361_ = lean_uint32_dec_le(v___x_360_, v___y_359_);
if (v___x_361_ == 0)
{
v___y_353_ = v___y_359_;
goto v___jp_352_;
}
else
{
uint32_t v___x_362_; uint8_t v___x_363_; 
v___x_362_ = 90;
v___x_363_ = lean_uint32_dec_le(v___y_359_, v___x_362_);
if (v___x_363_ == 0)
{
v___y_353_ = v___y_359_;
goto v___jp_352_;
}
else
{
return v___x_363_;
}
}
}
v___jp_365_:
{
lean_object* v___x_366_; 
v___x_366_ = l_List_getLast_x3f___redArg(v_chars_364_);
lean_dec(v_chars_364_);
if (lean_obj_tag(v___x_366_) == 0)
{
uint8_t v___x_367_; 
v___x_367_ = 0;
return v___x_367_;
}
else
{
lean_object* v_val_368_; uint32_t v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v_val_368_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_val_368_);
lean_dec_ref_known(v___x_366_, 1);
v___x_369_ = lean_unbox_uint32(v_val_368_);
v___x_370_ = lean_uint32_to_nat(v___x_369_);
v___x_371_ = lean_unsigned_to_nat(128u);
v___x_372_ = l_Nat_blt(v___x_370_, v___x_371_);
lean_dec(v___x_370_);
if (v___x_372_ == 0)
{
lean_dec(v_val_368_);
return v___x_372_;
}
else
{
uint32_t v___x_373_; uint32_t v___x_374_; uint8_t v___x_375_; 
v___x_373_ = 48;
v___x_374_ = lean_unbox_uint32(v_val_368_);
v___x_375_ = lean_uint32_dec_le(v___x_373_, v___x_374_);
if (v___x_375_ == 0)
{
uint32_t v___x_376_; 
v___x_376_ = lean_unbox_uint32(v_val_368_);
lean_dec(v_val_368_);
v___y_359_ = v___x_376_;
goto v___jp_358_;
}
else
{
uint32_t v___x_377_; uint32_t v___x_378_; uint8_t v___x_379_; 
v___x_377_ = 57;
v___x_378_ = lean_unbox_uint32(v_val_368_);
v___x_379_ = lean_uint32_dec_le(v___x_378_, v___x_377_);
if (v___x_379_ == 0)
{
uint32_t v___x_380_; 
v___x_380_ = lean_unbox_uint32(v_val_368_);
lean_dec(v_val_368_);
v___y_359_ = v___x_380_;
goto v___jp_358_;
}
else
{
lean_dec(v_val_368_);
return v___x_379_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object* v_s_412_){
_start:
{
uint8_t v_res_413_; lean_object* v_r_414_; 
v_res_413_ = l_Std_Http_URI_isValidDomainLabel(v_s_412_);
v_r_414_ = lean_box(v_res_413_);
return v_r_414_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg(){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0));
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object* v___dummy_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v_res_420_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object* v_s_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object* v_s_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(v_s_424_);
lean_dec_ref(v_s_424_);
return v_res_425_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(uint8_t v___x_426_, lean_object* v_lower_427_, lean_object* v___x_428_, lean_object* v___x_429_, lean_object* v_a_430_, uint8_t v_b_431_){
_start:
{
uint8_t v___y_433_; lean_object* v_it_434_; lean_object* v_startInclusive_435_; lean_object* v_endExclusive_436_; uint8_t v___y_441_; 
if (v___x_426_ == 0)
{
uint8_t v___x_467_; 
v___x_467_ = 1;
v___y_441_ = v___x_467_;
goto v___jp_440_;
}
else
{
uint8_t v___x_468_; 
v___x_468_ = 0;
v___y_441_ = v___x_468_;
goto v___jp_440_;
}
v___jp_432_:
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_string_utf8_extract_fast(v_lower_427_, v_startInclusive_435_, v_endExclusive_436_);
lean_dec(v_endExclusive_436_);
lean_dec(v_startInclusive_435_);
v___x_438_ = l_Std_Http_URI_isValidDomainLabel(v___x_437_);
if (v___x_438_ == 0)
{
lean_dec(v_it_434_);
lean_dec(v___x_429_);
return v___x_438_;
}
else
{
v_a_430_ = v_it_434_;
v_b_431_ = v___y_433_;
goto _start;
}
}
v___jp_440_:
{
if (lean_obj_tag(v_a_430_) == 0)
{
lean_object* v_currPos_442_; lean_object* v_searcher_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_466_; 
v_currPos_442_ = lean_ctor_get(v_a_430_, 0);
v_searcher_443_ = lean_ctor_get(v_a_430_, 1);
v_isSharedCheck_466_ = !lean_is_exclusive(v_a_430_);
if (v_isSharedCheck_466_ == 0)
{
v___x_445_ = v_a_430_;
v_isShared_446_ = v_isSharedCheck_466_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_searcher_443_);
lean_inc(v_currPos_442_);
lean_dec(v_a_430_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_466_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
uint8_t v_decide_447_; 
v_decide_447_ = lean_nat_dec_eq(v_searcher_443_, v___x_429_);
if (v_decide_447_ == 0)
{
uint32_t v___x_448_; uint32_t v___x_449_; uint8_t v___x_450_; 
v___x_448_ = 46;
v___x_449_ = lean_string_utf8_get_fast(v_lower_427_, v_searcher_443_);
v___x_450_ = lean_uint32_dec_eq(v___x_449_, v___x_448_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = lean_string_utf8_next_fast(v_lower_427_, v_searcher_443_);
lean_dec(v_searcher_443_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 1, v___x_451_);
v___x_453_ = v___x_445_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_currPos_442_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v___x_451_);
v___x_453_ = v_reuseFailAlloc_455_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
v_a_430_ = v___x_453_;
goto _start;
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_slice_459_; lean_object* v_nextIt_461_; 
v___x_456_ = lean_string_utf8_next_fast(v_lower_427_, v_searcher_443_);
v___x_457_ = lean_nat_sub(v___x_456_, v_searcher_443_);
v___x_458_ = lean_nat_add(v_searcher_443_, v___x_457_);
lean_dec(v___x_457_);
v_slice_459_ = l_String_Slice_subslice_x21(v___x_428_, v_currPos_442_, v_searcher_443_);
lean_inc(v___x_458_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 1, v___x_458_);
lean_ctor_set(v___x_445_, 0, v___x_458_);
v_nextIt_461_ = v___x_445_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v___x_458_);
v_nextIt_461_ = v_reuseFailAlloc_464_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v_startInclusive_462_; lean_object* v_endExclusive_463_; 
v_startInclusive_462_ = lean_ctor_get(v_slice_459_, 0);
lean_inc(v_startInclusive_462_);
v_endExclusive_463_ = lean_ctor_get(v_slice_459_, 1);
lean_inc(v_endExclusive_463_);
lean_dec_ref(v_slice_459_);
v___y_433_ = v___y_441_;
v_it_434_ = v_nextIt_461_;
v_startInclusive_435_ = v_startInclusive_462_;
v_endExclusive_436_ = v_endExclusive_463_;
goto v___jp_432_;
}
}
}
else
{
lean_object* v___x_465_; 
lean_del_object(v___x_445_);
lean_dec(v_searcher_443_);
v___x_465_ = lean_box(1);
lean_inc(v___x_429_);
v___y_433_ = v___y_441_;
v_it_434_ = v___x_465_;
v_startInclusive_435_ = v_currPos_442_;
v_endExclusive_436_ = v___x_429_;
goto v___jp_432_;
}
}
}
else
{
lean_dec(v___x_429_);
return v_b_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object* v___x_469_, lean_object* v_lower_470_, lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v_a_473_, lean_object* v_b_474_){
_start:
{
uint8_t v___x_3760__boxed_475_; uint8_t v_b_boxed_476_; uint8_t v_res_477_; lean_object* v_r_478_; 
v___x_3760__boxed_475_ = lean_unbox(v___x_469_);
v_b_boxed_476_ = lean_unbox(v_b_474_);
v_res_477_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___x_3760__boxed_475_, v_lower_470_, v___x_471_, v___x_472_, v_a_473_, v_b_boxed_476_);
lean_dec_ref(v___x_471_);
lean_dec_ref(v_lower_470_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object* v___x_479_, lean_object* v_lower_480_, lean_object* v___x_481_, lean_object* v_a_482_, uint8_t v_b_483_){
_start:
{
if (lean_obj_tag(v_a_482_) == 0)
{
lean_object* v_currPos_484_; lean_object* v_searcher_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_500_; 
v_currPos_484_ = lean_ctor_get(v_a_482_, 0);
v_searcher_485_ = lean_ctor_get(v_a_482_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v_a_482_);
if (v_isSharedCheck_500_ == 0)
{
v___x_487_ = v_a_482_;
v_isShared_488_ = v_isSharedCheck_500_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_searcher_485_);
lean_inc(v_currPos_484_);
lean_dec(v_a_482_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_500_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; uint8_t v___x_490_; uint8_t v_decide_491_; 
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = lean_nat_dec_eq(v___x_479_, v___x_489_);
v_decide_491_ = lean_nat_dec_eq(v_searcher_485_, v___x_481_);
if (v_decide_491_ == 0)
{
uint32_t v___x_492_; uint32_t v___x_493_; uint8_t v___x_494_; 
v___x_492_ = 46;
v___x_493_ = lean_string_utf8_get_fast(v_lower_480_, v_searcher_485_);
v___x_494_ = lean_uint32_dec_eq(v___x_493_, v___x_492_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_495_ = lean_string_utf8_next_fast(v_lower_480_, v_searcher_485_);
lean_dec(v_searcher_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 1, v___x_495_);
v___x_497_ = v___x_487_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_currPos_484_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v___x_495_);
v___x_497_ = v_reuseFailAlloc_499_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
v_a_482_ = v___x_497_;
goto _start;
}
}
else
{
lean_del_object(v___x_487_);
lean_dec(v_searcher_485_);
lean_dec(v_currPos_484_);
return v___x_490_;
}
}
else
{
lean_del_object(v___x_487_);
lean_dec(v_searcher_485_);
lean_dec(v_currPos_484_);
return v___x_490_;
}
}
}
else
{
return v_b_483_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object* v___x_501_, lean_object* v_lower_502_, lean_object* v___x_503_, lean_object* v_a_504_, lean_object* v_b_505_){
_start:
{
uint8_t v_b_boxed_506_; uint8_t v_res_507_; lean_object* v_r_508_; 
v_b_boxed_506_ = lean_unbox(v_b_505_);
v_res_507_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_501_, v_lower_502_, v___x_503_, v_a_504_, v_b_boxed_506_);
lean_dec(v___x_503_);
lean_dec_ref(v_lower_502_);
lean_dec(v___x_501_);
v_r_508_ = lean_box(v_res_507_);
return v_r_508_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object* v_s_509_){
_start:
{
lean_object* v___x_510_; lean_object* v_lower_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_510_ = lean_unsigned_to_nat(0u);
v_lower_511_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_509_, v___x_510_);
v___x_512_ = lean_string_utf8_byte_size(v_lower_511_);
v___x_513_ = lean_nat_dec_eq(v___x_512_, v___x_510_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; uint8_t v___x_517_; 
lean_inc_ref(v_lower_511_);
v___x_514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_514_, 0, v_lower_511_);
lean_ctor_set(v___x_514_, 1, v___x_510_);
lean_ctor_set(v___x_514_, 2, v___x_512_);
v___x_515_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
v___x_516_ = 1;
v___x_517_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_512_, v_lower_511_, v___x_512_, v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
uint8_t v___x_518_; 
v___x_518_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___x_517_, v_lower_511_, v___x_514_, v___x_512_, v___x_515_, v___x_516_);
lean_dec_ref_known(v___x_514_, 3);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
lean_dec_ref(v_lower_511_);
v___x_519_ = lean_box(0);
return v___x_519_;
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_520_ = lean_string_length(v_lower_511_);
v___x_521_ = lean_unsigned_to_nat(255u);
v___x_522_ = lean_nat_dec_le(v___x_520_, v___x_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; 
lean_dec_ref(v_lower_511_);
v___x_523_ = lean_box(0);
return v___x_523_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v_lower_511_);
return v___x_524_;
}
}
}
else
{
lean_object* v___x_525_; 
lean_dec_ref_known(v___x_514_, 3);
lean_dec_ref(v_lower_511_);
v___x_525_ = lean_box(0);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec_ref(v_lower_511_);
v___x_526_ = lean_box(0);
return v___x_526_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object* v___x_527_, lean_object* v_lower_528_, lean_object* v___x_529_, lean_object* v___x_530_, lean_object* v_inst_531_, lean_object* v_R_532_, lean_object* v_a_533_, uint8_t v_b_534_, lean_object* v_c_535_){
_start:
{
uint8_t v___x_536_; 
v___x_536_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_527_, v_lower_528_, v___x_530_, v_a_533_, v_b_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object* v___x_537_, lean_object* v_lower_538_, lean_object* v___x_539_, lean_object* v___x_540_, lean_object* v_inst_541_, lean_object* v_R_542_, lean_object* v_a_543_, lean_object* v_b_544_, lean_object* v_c_545_){
_start:
{
uint8_t v_b_boxed_546_; uint8_t v_res_547_; lean_object* v_r_548_; 
v_b_boxed_546_ = lean_unbox(v_b_544_);
v_res_547_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(v___x_537_, v_lower_538_, v___x_539_, v___x_540_, v_inst_541_, v_R_542_, v_a_543_, v_b_boxed_546_, v_c_545_);
lean_dec(v___x_540_);
lean_dec_ref(v___x_539_);
lean_dec_ref(v_lower_538_);
lean_dec(v___x_537_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(uint8_t v___x_549_, lean_object* v_lower_550_, lean_object* v___x_551_, lean_object* v___x_552_, lean_object* v_inst_553_, lean_object* v_R_554_, lean_object* v_a_555_, uint8_t v_b_556_, lean_object* v_c_557_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___x_549_, v_lower_550_, v___x_551_, v___x_552_, v_a_555_, v_b_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object* v___x_559_, lean_object* v_lower_560_, lean_object* v___x_561_, lean_object* v___x_562_, lean_object* v_inst_563_, lean_object* v_R_564_, lean_object* v_a_565_, lean_object* v_b_566_, lean_object* v_c_567_){
_start:
{
uint8_t v___x_3918__boxed_568_; uint8_t v_b_boxed_569_; uint8_t v_res_570_; lean_object* v_r_571_; 
v___x_3918__boxed_568_ = lean_unbox(v___x_559_);
v_b_boxed_569_ = lean_unbox(v_b_566_);
v_res_570_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(v___x_3918__boxed_568_, v_lower_560_, v___x_561_, v___x_562_, v_inst_563_, v_R_564_, v_a_565_, v_b_boxed_569_, v_c_567_);
lean_dec_ref(v___x_561_);
lean_dec_ref(v_lower_560_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl(lean_object* v_x_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_obj_tag_nat(v_x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl___boxed(lean_object* v_x_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Std_Http_URI_Host_ctorIdx___impl(v_x_574_);
lean_dec_ref(v_x_574_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object* v_t_576_, lean_object* v_k_577_){
_start:
{
lean_object* v_name_578_; lean_object* v___x_579_; 
v_name_578_ = lean_ctor_get(v_t_576_, 0);
lean_inc_ref(v_name_578_);
lean_dec_ref(v_t_576_);
v___x_579_ = lean_apply_1(v_k_577_, v_name_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object* v_motive_580_, lean_object* v_ctorIdx_581_, lean_object* v_t_582_, lean_object* v_h_583_, lean_object* v_k_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_582_, v_k_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object* v_motive_586_, lean_object* v_ctorIdx_587_, lean_object* v_t_588_, lean_object* v_h_589_, lean_object* v_k_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Std_Http_URI_Host_ctorElim(v_motive_586_, v_ctorIdx_587_, v_t_588_, v_h_589_, v_k_590_);
lean_dec(v_ctorIdx_587_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object* v_t_592_, lean_object* v_name_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_592_, v_name_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object* v_motive_595_, lean_object* v_t_596_, lean_object* v_h_597_, lean_object* v_name_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_596_, v_name_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object* v_t_600_, lean_object* v_ipv4_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_600_, v_ipv4_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object* v_motive_603_, lean_object* v_t_604_, lean_object* v_h_605_, lean_object* v_ipv4_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_604_, v_ipv4_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object* v_t_608_, lean_object* v_ipv6_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_608_, v_ipv6_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object* v_motive_611_, lean_object* v_t_612_, lean_object* v_h_613_, lean_object* v_ipv6_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_612_, v_ipv6_614_);
return v___x_615_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default___closed__0(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = l_Std_Net_instInhabitedIPv4Addr_default;
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default(void){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l_Std_Http_URI_instInhabitedHost_default___closed__0, &l_Std_Http_URI_instInhabitedHost_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedHost_default___closed__0);
return v___x_618_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost(void){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Std_Http_URI_instInhabitedHost_default;
return v___x_619_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object* v_x_620_, lean_object* v_x_621_){
_start:
{
switch(lean_obj_tag(v_x_620_))
{
case 0:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v_name_622_; lean_object* v_name_623_; uint8_t v___x_624_; 
v_name_622_ = lean_ctor_get(v_x_620_, 0);
v_name_623_ = lean_ctor_get(v_x_621_, 0);
v___x_624_ = lean_string_dec_eq(v_name_622_, v_name_623_);
return v___x_624_;
}
else
{
uint8_t v___x_625_; 
v___x_625_ = 0;
return v___x_625_;
}
}
case 1:
{
if (lean_obj_tag(v_x_621_) == 1)
{
lean_object* v_ipv4_626_; lean_object* v_ipv4_627_; uint8_t v___x_628_; 
v_ipv4_626_ = lean_ctor_get(v_x_620_, 0);
v_ipv4_627_ = lean_ctor_get(v_x_621_, 0);
v___x_628_ = l_Std_Net_instDecidableEqIPv4Addr_decEq(v_ipv4_626_, v_ipv4_627_);
return v___x_628_;
}
else
{
uint8_t v___x_629_; 
v___x_629_ = 0;
return v___x_629_;
}
}
default: 
{
if (lean_obj_tag(v_x_621_) == 2)
{
lean_object* v_ipv6_630_; lean_object* v_ipv6_631_; uint8_t v___x_632_; 
v_ipv6_630_ = lean_ctor_get(v_x_620_, 0);
v_ipv6_631_ = lean_ctor_get(v_x_621_, 0);
v___x_632_ = l_Std_Net_instDecidableEqIPv6Addr_decEq(v_ipv6_630_, v_ipv6_631_);
return v___x_632_;
}
else
{
uint8_t v___x_633_; 
v___x_633_ = 0;
return v___x_633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
uint8_t v_res_636_; lean_object* v_r_637_; 
v_res_636_ = l_Std_Http_URI_instBEqHost_beq(v_x_634_, v_x_635_);
lean_dec_ref(v_x_635_);
lean_dec_ref(v_x_634_);
v_r_637_ = lean_box(v_res_636_);
return v_r_637_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__4(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_unsigned_to_nat(2u);
v___x_645_ = lean_nat_to_int(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__5(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(1u);
v___x_647_ = lean_nat_to_int(v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object* v_x_648_, lean_object* v_prec_649_){
_start:
{
lean_object* v___y_651_; lean_object* v_ctr_652_; lean_object* v_a_653_; lean_object* v___y_665_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_unsigned_to_nat(1024u);
v___x_697_ = lean_nat_dec_le(v___x_696_, v_prec_649_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; 
v___x_698_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_665_ = v___x_698_;
goto v___jp_664_;
}
else
{
lean_object* v___x_699_; 
v___x_699_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_665_ = v___x_699_;
goto v___jp_664_;
}
v___jp_650_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_654_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_655_ = lean_string_append(v___x_654_, v_ctr_652_);
v___x_656_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
v___x_657_ = lean_box(1);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_656_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
lean_ctor_set(v___x_659_, 1, v_a_653_);
lean_inc(v___y_651_);
v___x_660_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_660_, 0, v___y_651_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = 0;
v___x_662_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set_uint8(v___x_662_, sizeof(void*)*1, v___x_661_);
v___x_663_ = l_Repr_addAppParen(v___x_662_, v_prec_649_);
return v___x_663_;
}
v___jp_664_:
{
switch(lean_obj_tag(v_x_648_))
{
case 0:
{
lean_object* v_name_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_675_; 
v_name_666_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_675_ == 0)
{
v___x_668_ = v_x_648_;
v_isShared_669_ = v_isSharedCheck_675_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_name_666_);
lean_dec(v_x_648_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_675_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_673_; 
v___x_670_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_671_ = l_String_quote(v_name_666_);
if (v_isShared_669_ == 0)
{
lean_ctor_set_tag(v___x_668_, 3);
lean_ctor_set(v___x_668_, 0, v___x_671_);
v___x_673_ = v___x_668_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
v___y_651_ = v___y_665_;
v_ctr_652_ = v___x_670_;
v_a_653_ = v___x_673_;
goto v___jp_650_;
}
}
}
case 1:
{
lean_object* v_ipv4_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_685_; 
v_ipv4_676_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_685_ == 0)
{
v___x_678_ = v_x_648_;
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_ipv4_676_);
lean_dec(v_x_648_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_680_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_681_ = lean_uv_ntop_v4(v_ipv4_676_);
lean_dec_ref(v_ipv4_676_);
if (v_isShared_679_ == 0)
{
lean_ctor_set_tag(v___x_678_, 3);
lean_ctor_set(v___x_678_, 0, v___x_681_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
v___y_651_ = v___y_665_;
v_ctr_652_ = v___x_680_;
v_a_653_ = v___x_683_;
goto v___jp_650_;
}
}
}
default: 
{
lean_object* v_ipv6_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_695_; 
v_ipv6_686_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_695_ == 0)
{
v___x_688_ = v_x_648_;
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_ipv6_686_);
lean_dec(v_x_648_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_690_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_691_ = lean_uv_ntop_v6(v_ipv6_686_);
lean_dec_ref(v_ipv6_686_);
if (v_isShared_689_ == 0)
{
lean_ctor_set_tag(v___x_688_, 3);
lean_ctor_set(v___x_688_, 0, v___x_691_);
v___x_693_ = v___x_688_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
v___y_651_ = v___y_665_;
v_ctr_652_ = v___x_690_;
v_a_653_ = v___x_693_;
goto v___jp_650_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object* v_x_700_, lean_object* v_prec_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Std_Http_URI_instReprHost___lam__0(v_x_700_, v_prec_701_);
lean_dec(v_prec_701_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object* v_x_707_){
_start:
{
switch(lean_obj_tag(v_x_707_))
{
case 0:
{
lean_object* v_name_708_; 
v_name_708_ = lean_ctor_get(v_x_707_, 0);
lean_inc_ref(v_name_708_);
return v_name_708_;
}
case 1:
{
lean_object* v_ipv4_709_; lean_object* v___x_710_; 
v_ipv4_709_ = lean_ctor_get(v_x_707_, 0);
v___x_710_ = lean_uv_ntop_v4(v_ipv4_709_);
return v___x_710_;
}
default: 
{
lean_object* v_ipv6_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_ipv6_711_ = lean_ctor_get(v_x_707_, 0);
v___x_712_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_713_ = lean_uv_ntop_v6(v_ipv6_711_);
v___x_714_ = lean_string_append(v___x_712_, v___x_713_);
lean_dec_ref(v___x_713_);
v___x_715_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_716_ = lean_string_append(v___x_714_, v___x_715_);
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object* v_x_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Std_Http_URI_instToStringHost___lam__0(v_x_717_);
lean_dec_ref(v_x_717_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl(lean_object* v_x_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lean_obj_tag_nat(v_x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl___boxed(lean_object* v_x_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Std_Http_URI_Port_ctorIdx___impl(v_x_723_);
lean_dec(v_x_723_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object* v_t_725_, lean_object* v_k_726_){
_start:
{
if (lean_obj_tag(v_t_725_) == 2)
{
uint16_t v_port_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_port_727_ = lean_ctor_get_uint16(v_t_725_, 0);
v___x_728_ = lean_box(v_port_727_);
v___x_729_ = lean_apply_1(v_k_726_, v___x_728_);
return v___x_729_;
}
else
{
return v_k_726_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object* v_t_730_, lean_object* v_k_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_730_, v_k_731_);
lean_dec(v_t_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object* v_motive_733_, lean_object* v_ctorIdx_734_, lean_object* v_t_735_, lean_object* v_h_736_, lean_object* v_k_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_735_, v_k_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object* v_motive_739_, lean_object* v_ctorIdx_740_, lean_object* v_t_741_, lean_object* v_h_742_, lean_object* v_k_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Std_Http_URI_Port_ctorElim(v_motive_739_, v_ctorIdx_740_, v_t_741_, v_h_742_, v_k_743_);
lean_dec(v_t_741_);
lean_dec(v_ctorIdx_740_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object* v_t_745_, lean_object* v_omitted_746_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_745_, v_omitted_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object* v_t_748_, lean_object* v_omitted_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Std_Http_URI_Port_omitted_elim___redArg(v_t_748_, v_omitted_749_);
lean_dec(v_t_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object* v_motive_751_, lean_object* v_t_752_, lean_object* v_h_753_, lean_object* v_omitted_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_752_, v_omitted_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object* v_motive_756_, lean_object* v_t_757_, lean_object* v_h_758_, lean_object* v_omitted_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Std_Http_URI_Port_omitted_elim(v_motive_756_, v_t_757_, v_h_758_, v_omitted_759_);
lean_dec(v_t_757_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object* v_t_761_, lean_object* v_empty_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_761_, v_empty_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object* v_t_764_, lean_object* v_empty_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Std_Http_URI_Port_empty_elim___redArg(v_t_764_, v_empty_765_);
lean_dec(v_t_764_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object* v_motive_767_, lean_object* v_t_768_, lean_object* v_h_769_, lean_object* v_empty_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_768_, v_empty_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object* v_motive_772_, lean_object* v_t_773_, lean_object* v_h_774_, lean_object* v_empty_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Std_Http_URI_Port_empty_elim(v_motive_772_, v_t_773_, v_h_774_, v_empty_775_);
lean_dec(v_t_773_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object* v_t_777_, lean_object* v_value_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_777_, v_value_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object* v_t_780_, lean_object* v_value_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Std_Http_URI_Port_value_elim___redArg(v_t_780_, v_value_781_);
lean_dec(v_t_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object* v_motive_783_, lean_object* v_t_784_, lean_object* v_h_785_, lean_object* v_value_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_784_, v_value_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object* v_motive_788_, lean_object* v_t_789_, lean_object* v_h_790_, lean_object* v_value_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Std_Http_URI_Port_value_elim(v_motive_788_, v_t_789_, v_h_790_, v_value_791_);
lean_dec(v_t_789_);
return v_res_792_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort_default(void){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = lean_box(0);
return v___x_793_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort(void){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = lean_box(0);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object* v_x_807_, lean_object* v_prec_808_){
_start:
{
lean_object* v___y_810_; lean_object* v___y_817_; 
switch(lean_obj_tag(v_x_807_))
{
case 0:
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = lean_unsigned_to_nat(1024u);
v___x_824_ = lean_nat_dec_le(v___x_823_, v_prec_808_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_817_ = v___x_825_;
goto v___jp_816_;
}
else
{
lean_object* v___x_826_; 
v___x_826_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_817_ = v___x_826_;
goto v___jp_816_;
}
}
case 1:
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(1024u);
v___x_828_ = lean_nat_dec_le(v___x_827_, v_prec_808_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_810_ = v___x_829_;
goto v___jp_809_;
}
else
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_810_ = v___x_830_;
goto v___jp_809_;
}
}
default: 
{
uint16_t v_port_831_; lean_object* v___y_833_; lean_object* v___x_843_; uint8_t v___x_844_; 
v_port_831_ = lean_ctor_get_uint16(v_x_807_, 0);
v___x_843_ = lean_unsigned_to_nat(1024u);
v___x_844_ = lean_nat_dec_le(v___x_843_, v_prec_808_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_833_ = v___x_845_;
goto v___jp_832_;
}
else
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_833_ = v___x_846_;
goto v___jp_832_;
}
v___jp_832_:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_834_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__6));
v___x_835_ = lean_uint16_to_nat(v_port_831_);
v___x_836_ = l_Nat_reprFast(v___x_835_);
v___x_837_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
v___x_838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_834_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
lean_inc(v___y_833_);
v___x_839_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_839_, 0, v___y_833_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = 0;
v___x_841_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set_uint8(v___x_841_, sizeof(void*)*1, v___x_840_);
v___x_842_ = l_Repr_addAppParen(v___x_841_, v_prec_808_);
return v___x_842_;
}
}
}
v___jp_809_:
{
lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_811_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__1));
lean_inc(v___y_810_);
v___x_812_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_812_, 0, v___y_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = 0;
v___x_814_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set_uint8(v___x_814_, sizeof(void*)*1, v___x_813_);
v___x_815_ = l_Repr_addAppParen(v___x_814_, v_prec_808_);
return v___x_815_;
}
v___jp_816_:
{
lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_818_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__3));
lean_inc(v___y_817_);
v___x_819_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_819_, 0, v___y_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = 0;
v___x_821_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_821_, 0, v___x_819_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*1, v___x_820_);
v___x_822_ = l_Repr_addAppParen(v___x_821_, v_prec_808_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object* v_x_847_, lean_object* v_prec_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Std_Http_URI_instReprPort_repr(v_x_847_, v_prec_848_);
lean_dec(v_prec_848_);
lean_dec(v_x_847_);
return v_res_849_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object* v_x_852_, lean_object* v_x_853_){
_start:
{
switch(lean_obj_tag(v_x_852_))
{
case 0:
{
if (lean_obj_tag(v_x_853_) == 0)
{
uint8_t v___x_854_; 
v___x_854_ = 1;
return v___x_854_;
}
else
{
uint8_t v___x_855_; 
v___x_855_ = 0;
return v___x_855_;
}
}
case 1:
{
if (lean_obj_tag(v_x_853_) == 1)
{
uint8_t v___x_856_; 
v___x_856_ = 1;
return v___x_856_;
}
else
{
uint8_t v___x_857_; 
v___x_857_ = 0;
return v___x_857_;
}
}
default: 
{
if (lean_obj_tag(v_x_853_) == 2)
{
uint16_t v_port_858_; uint16_t v_port_859_; uint8_t v___x_860_; 
v_port_858_ = lean_ctor_get_uint16(v_x_852_, 0);
v_port_859_ = lean_ctor_get_uint16(v_x_853_, 0);
v___x_860_ = lean_uint16_dec_eq(v_port_858_, v_port_859_);
return v___x_860_;
}
else
{
uint8_t v___x_861_; 
v___x_861_ = 0;
return v___x_861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
uint8_t v_res_864_; lean_object* v_r_865_; 
v_res_864_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_862_, v_x_863_);
lean_dec(v_x_863_);
lean_dec(v_x_862_);
v_r_865_ = lean_box(v_res_864_);
return v_r_865_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object* v_x_866_, lean_object* v_x_867_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_866_, v_x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
uint8_t v_res_871_; lean_object* v_r_872_; 
v_res_871_ = l_Std_Http_URI_instDecidableEqPort(v_x_869_, v_x_870_);
lean_dec(v_x_870_);
lean_dec(v_x_869_);
v_r_872_ = lean_box(v_res_871_);
return v_r_872_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_873_ = lean_box(0);
v___x_874_ = l_Std_Http_URI_instInhabitedHost_default;
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_874_);
lean_ctor_set(v___x_876_, 2, v___x_873_);
return v___x_876_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Std_Http_URI_instInhabitedAuthority_default___closed__0, &l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0);
return v___x_877_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority(void){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Std_Http_URI_instInhabitedAuthority_default;
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object* v_x_879_, lean_object* v_x_880_){
_start:
{
if (lean_obj_tag(v_x_879_) == 0)
{
lean_object* v___x_881_; 
v___x_881_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_881_;
}
else
{
lean_object* v_val_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_val_882_ = lean_ctor_get(v_x_879_, 0);
lean_inc(v_val_882_);
lean_dec_ref_known(v_x_879_, 1);
v___x_883_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_884_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_val_882_);
v___x_885_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Repr_addAppParen(v___x_885_, v_x_880_);
return v___x_886_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object* v_x_887_, lean_object* v_x_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_x_887_, v_x_888_);
lean_dec(v_x_888_);
return v_res_889_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(8u);
v___x_903_ = lean_nat_to_int(v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object* v_x_907_){
_start:
{
lean_object* v_userInfo_908_; lean_object* v_host_909_; lean_object* v_port_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v_ctr_930_; lean_object* v_a_931_; 
v_userInfo_908_ = lean_ctor_get(v_x_907_, 0);
lean_inc(v_userInfo_908_);
v_host_909_ = lean_ctor_get(v_x_907_, 1);
lean_inc_ref(v_host_909_);
v_port_910_ = lean_ctor_get(v_x_907_, 2);
lean_inc(v_port_910_);
lean_dec_ref(v_x_907_);
v___x_911_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_912_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3));
v___x_913_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_userInfo_908_, v___x_914_);
v___x_916_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_913_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = 0;
v___x_918_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*1, v___x_917_);
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_912_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_921_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = lean_box(1);
v___x_923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_925_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___x_911_);
v___x_927_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_928_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_909_))
{
case 0:
{
lean_object* v_name_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_968_; 
v_name_959_ = lean_ctor_get(v_host_909_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_host_909_);
if (v_isSharedCheck_968_ == 0)
{
v___x_961_ = v_host_909_;
v_isShared_962_ = v_isSharedCheck_968_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_name_959_);
lean_dec(v_host_909_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_968_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_963_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_964_ = l_String_quote(v_name_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 3);
lean_ctor_set(v___x_961_, 0, v___x_964_);
v___x_966_ = v___x_961_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
v_ctr_930_ = v___x_963_;
v_a_931_ = v___x_966_;
goto v___jp_929_;
}
}
}
case 1:
{
lean_object* v_ipv4_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_978_; 
v_ipv4_969_ = lean_ctor_get(v_host_909_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v_host_909_);
if (v_isSharedCheck_978_ == 0)
{
v___x_971_ = v_host_909_;
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_ipv4_969_);
lean_dec(v_host_909_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_973_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_974_ = lean_uv_ntop_v4(v_ipv4_969_);
lean_dec_ref(v_ipv4_969_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 3);
lean_ctor_set(v___x_971_, 0, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
v_ctr_930_ = v___x_973_;
v_a_931_ = v___x_976_;
goto v___jp_929_;
}
}
}
default: 
{
lean_object* v_ipv6_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_988_; 
v_ipv6_979_ = lean_ctor_get(v_host_909_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_host_909_);
if (v_isSharedCheck_988_ == 0)
{
v___x_981_ = v_host_909_;
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_ipv6_979_);
lean_dec(v_host_909_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_983_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_984_ = lean_uv_ntop_v6(v_ipv6_979_);
lean_dec_ref(v_ipv6_979_);
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 3);
lean_ctor_set(v___x_981_, 0, v___x_984_);
v___x_986_ = v___x_981_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
v_ctr_930_ = v___x_983_;
v_a_931_ = v___x_986_;
goto v___jp_929_;
}
}
}
}
v___jp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_932_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_933_ = lean_string_append(v___x_932_, v_ctr_930_);
v___x_934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
v___x_935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_922_);
v___x_936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_935_);
lean_ctor_set(v___x_936_, 1, v_a_931_);
v___x_937_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_928_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set_uint8(v___x_938_, sizeof(void*)*1, v___x_917_);
v___x_939_ = l_Repr_addAppParen(v___x_938_, v___x_914_);
v___x_940_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_927_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set_uint8(v___x_941_, sizeof(void*)*1, v___x_917_);
v___x_942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_926_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
lean_ctor_set(v___x_943_, 1, v___x_920_);
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_922_);
v___x_945_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
lean_ctor_set(v___x_947_, 1, v___x_911_);
v___x_948_ = l_Std_Http_URI_instReprPort_repr(v_port_910_, v___x_914_);
lean_dec(v_port_910_);
v___x_949_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_927_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*1, v___x_917_);
v___x_951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_947_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_953_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
lean_ctor_set(v___x_954_, 1, v___x_951_);
v___x_955_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_952_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set_uint8(v___x_958_, sizeof(void*)*1, v___x_917_);
return v___x_958_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object* v_x_989_, lean_object* v_prec_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_x_989_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object* v_x_992_, lean_object* v_prec_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Std_Http_URI_instReprAuthority_repr(v_x_992_, v_prec_993_);
lean_dec(v_prec_993_);
return v_res_994_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object* v_x_997_, lean_object* v_x_998_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
if (lean_obj_tag(v_x_998_) == 0)
{
uint8_t v___x_999_; 
v___x_999_ = 1;
return v___x_999_;
}
else
{
uint8_t v___x_1000_; 
v___x_1000_ = 0;
return v___x_1000_;
}
}
else
{
if (lean_obj_tag(v_x_998_) == 0)
{
uint8_t v___x_1001_; 
v___x_1001_ = 0;
return v___x_1001_;
}
else
{
lean_object* v_val_1002_; lean_object* v_val_1003_; uint8_t v___x_1004_; 
v_val_1002_ = lean_ctor_get(v_x_997_, 0);
v_val_1003_ = lean_ctor_get(v_x_998_, 0);
v___x_1004_ = l_Std_Http_URI_instBEqUserInfo_beq(v_val_1002_, v_val_1003_);
return v___x_1004_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object* v_x_1005_, lean_object* v_x_1006_){
_start:
{
uint8_t v_res_1007_; lean_object* v_r_1008_; 
v_res_1007_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_x_1005_, v_x_1006_);
lean_dec(v_x_1006_);
lean_dec(v_x_1005_);
v_r_1008_ = lean_box(v_res_1007_);
return v_r_1008_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object* v_x_1009_, lean_object* v_x_1010_){
_start:
{
lean_object* v_userInfo_1011_; lean_object* v_host_1012_; lean_object* v_port_1013_; lean_object* v_userInfo_1014_; lean_object* v_host_1015_; lean_object* v_port_1016_; uint8_t v___x_1017_; 
v_userInfo_1011_ = lean_ctor_get(v_x_1009_, 0);
v_host_1012_ = lean_ctor_get(v_x_1009_, 1);
v_port_1013_ = lean_ctor_get(v_x_1009_, 2);
v_userInfo_1014_ = lean_ctor_get(v_x_1010_, 0);
v_host_1015_ = lean_ctor_get(v_x_1010_, 1);
v_port_1016_ = lean_ctor_get(v_x_1010_, 2);
v___x_1017_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_userInfo_1011_, v_userInfo_1014_);
if (v___x_1017_ == 0)
{
return v___x_1017_;
}
else
{
uint8_t v___x_1018_; 
v___x_1018_ = l_Std_Http_URI_instBEqHost_beq(v_host_1012_, v_host_1015_);
if (v___x_1018_ == 0)
{
return v___x_1018_;
}
else
{
uint8_t v___x_1019_; 
v___x_1019_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1013_, v_port_1016_);
return v___x_1019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
uint8_t v_res_1022_; lean_object* v_r_1023_; 
v_res_1022_ = l_Std_Http_URI_instBEqAuthority_beq(v_x_1020_, v_x_1021_);
lean_dec_ref(v_x_1021_);
lean_dec_ref(v_x_1020_);
v_r_1023_ = lean_box(v_res_1022_);
return v_r_1023_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object* v_auth_1029_){
_start:
{
lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v_userInfo_1036_; lean_object* v_host_1037_; lean_object* v_port_1038_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1050_; 
v_userInfo_1036_ = lean_ctor_get(v_auth_1029_, 0);
lean_inc(v_userInfo_1036_);
v_host_1037_ = lean_ctor_get(v_auth_1029_, 1);
lean_inc_ref(v_host_1037_);
v_port_1038_ = lean_ctor_get(v_auth_1029_, 2);
lean_inc(v_port_1038_);
lean_dec_ref(v_auth_1029_);
if (lean_obj_tag(v_userInfo_1036_) == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1050_ = v___x_1060_;
goto v___jp_1049_;
}
else
{
lean_object* v_val_1061_; lean_object* v_password_1062_; 
v_val_1061_ = lean_ctor_get(v_userInfo_1036_, 0);
lean_inc(v_val_1061_);
lean_dec_ref_known(v_userInfo_1036_, 1);
v_password_1062_ = lean_ctor_get(v_val_1061_, 1);
if (lean_obj_tag(v_password_1062_) == 0)
{
lean_object* v_username_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_username_1063_ = lean_ctor_get(v_val_1061_, 0);
lean_inc_ref(v_username_1063_);
lean_dec(v_val_1061_);
v___x_1064_ = lean_string_from_utf8_unchecked(v_username_1063_);
v___x_1065_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
v___y_1050_ = v___x_1066_;
goto v___jp_1049_;
}
else
{
lean_object* v_username_1067_; lean_object* v_val_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_inc_ref(v_password_1062_);
v_username_1067_ = lean_ctor_get(v_val_1061_, 0);
lean_inc_ref(v_username_1067_);
lean_dec(v_val_1061_);
v_val_1068_ = lean_ctor_get(v_password_1062_, 0);
lean_inc(v_val_1068_);
lean_dec_ref_known(v_password_1062_, 1);
v___x_1069_ = lean_string_from_utf8_unchecked(v_username_1067_);
v___x_1070_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1071_ = lean_string_append(v___x_1069_, v___x_1070_);
v___x_1072_ = lean_string_from_utf8_unchecked(v_val_1068_);
v___x_1073_ = lean_string_append(v___x_1071_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
v___y_1050_ = v___x_1075_;
goto v___jp_1049_;
}
}
v___jp_1030_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = lean_string_append(v___y_1032_, v___y_1031_);
lean_dec_ref(v___y_1031_);
v___x_1035_ = lean_string_append(v___x_1034_, v___y_1033_);
lean_dec_ref(v___y_1033_);
return v___x_1035_;
}
v___jp_1039_:
{
switch(lean_obj_tag(v_port_1038_))
{
case 0:
{
lean_object* v___x_1042_; 
v___x_1042_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1031_ = v___y_1041_;
v___y_1032_ = v___y_1040_;
v___y_1033_ = v___x_1042_;
goto v___jp_1030_;
}
case 1:
{
lean_object* v___x_1043_; 
v___x_1043_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_1031_ = v___y_1041_;
v___y_1032_ = v___y_1040_;
v___y_1033_ = v___x_1043_;
goto v___jp_1030_;
}
default: 
{
uint16_t v_port_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_port_1044_ = lean_ctor_get_uint16(v_port_1038_, 0);
lean_dec_ref_known(v_port_1038_, 0);
v___x_1045_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1046_ = lean_uint16_to_nat(v_port_1044_);
v___x_1047_ = l_Nat_reprFast(v___x_1046_);
v___x_1048_ = lean_string_append(v___x_1045_, v___x_1047_);
lean_dec_ref(v___x_1047_);
v___y_1031_ = v___y_1041_;
v___y_1032_ = v___y_1040_;
v___y_1033_ = v___x_1048_;
goto v___jp_1030_;
}
}
}
v___jp_1049_:
{
switch(lean_obj_tag(v_host_1037_))
{
case 0:
{
lean_object* v_name_1051_; 
v_name_1051_ = lean_ctor_get(v_host_1037_, 0);
lean_inc_ref(v_name_1051_);
lean_dec_ref_known(v_host_1037_, 1);
v___y_1040_ = v___y_1050_;
v___y_1041_ = v_name_1051_;
goto v___jp_1039_;
}
case 1:
{
lean_object* v_ipv4_1052_; lean_object* v___x_1053_; 
v_ipv4_1052_ = lean_ctor_get(v_host_1037_, 0);
lean_inc_ref(v_ipv4_1052_);
lean_dec_ref_known(v_host_1037_, 1);
v___x_1053_ = lean_uv_ntop_v4(v_ipv4_1052_);
lean_dec_ref(v_ipv4_1052_);
v___y_1040_ = v___y_1050_;
v___y_1041_ = v___x_1053_;
goto v___jp_1039_;
}
default: 
{
lean_object* v_ipv6_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_ipv6_1054_ = lean_ctor_get(v_host_1037_, 0);
lean_inc_ref(v_ipv6_1054_);
lean_dec_ref_known(v_host_1037_, 1);
v___x_1055_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_1056_ = lean_uv_ntop_v6(v_ipv6_1054_);
lean_dec_ref(v_ipv6_1054_);
v___x_1057_ = lean_string_append(v___x_1055_, v___x_1056_);
lean_dec_ref(v___x_1056_);
v___x_1058_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_1059_ = lean_string_append(v___x_1057_, v___x_1058_);
v___y_1040_ = v___y_1050_;
v___y_1041_ = v___x_1059_;
goto v___jp_1039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_){
_start:
{
if (lean_obj_tag(v_x_1087_) == 0)
{
lean_dec(v_x_1085_);
return v_x_1086_;
}
else
{
lean_object* v_head_1088_; lean_object* v_tail_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1101_; 
v_head_1088_ = lean_ctor_get(v_x_1087_, 0);
v_tail_1089_ = lean_ctor_get(v_x_1087_, 1);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_x_1087_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1091_ = v_x_1087_;
v_isShared_1092_ = v_isSharedCheck_1101_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_tail_1089_);
lean_inc(v_head_1088_);
lean_dec(v_x_1087_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1101_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
lean_inc(v_x_1085_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set_tag(v___x_1091_, 5);
lean_ctor_set(v___x_1091_, 1, v_x_1085_);
lean_ctor_set(v___x_1091_, 0, v_x_1086_);
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_x_1086_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_x_1085_);
v___x_1094_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1095_ = lean_string_from_utf8_unchecked(v_head_1088_);
v___x_1096_ = l_String_quote(v___x_1095_);
v___x_1097_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
v___x_1098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1094_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v_x_1086_ = v___x_1098_;
v_x_1087_ = v_tail_1089_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object* v_x_1102_, lean_object* v_x_1103_, lean_object* v_x_1104_){
_start:
{
if (lean_obj_tag(v_x_1104_) == 0)
{
lean_dec(v_x_1102_);
return v_x_1103_;
}
else
{
lean_object* v_head_1105_; lean_object* v_tail_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1118_; 
v_head_1105_ = lean_ctor_get(v_x_1104_, 0);
v_tail_1106_ = lean_ctor_get(v_x_1104_, 1);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_x_1104_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1108_ = v_x_1104_;
v_isShared_1109_ = v_isSharedCheck_1118_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_tail_1106_);
lean_inc(v_head_1105_);
lean_dec(v_x_1104_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1118_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
lean_inc(v_x_1102_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set_tag(v___x_1108_, 5);
lean_ctor_set(v___x_1108_, 1, v_x_1102_);
lean_ctor_set(v___x_1108_, 0, v_x_1103_);
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_x_1103_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_x_1102_);
v___x_1111_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1112_ = lean_string_from_utf8_unchecked(v_head_1105_);
v___x_1113_ = l_String_quote(v___x_1112_);
v___x_1114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
v___x_1115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1111_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(v_x_1102_, v___x_1115_, v_tail_1106_);
return v___x_1116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object* v___y_1119_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = lean_string_from_utf8_unchecked(v___y_1119_);
v___x_1121_ = l_String_quote(v___x_1120_);
v___x_1122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
lean_object* v___x_1125_; 
lean_dec(v_x_1124_);
v___x_1125_ = lean_box(0);
return v___x_1125_;
}
else
{
lean_object* v_tail_1126_; 
v_tail_1126_ = lean_ctor_get(v_x_1123_, 1);
if (lean_obj_tag(v_tail_1126_) == 0)
{
lean_object* v_head_1127_; lean_object* v___x_1128_; 
lean_dec(v_x_1124_);
v_head_1127_ = lean_ctor_get(v_x_1123_, 0);
lean_inc(v_head_1127_);
lean_dec_ref_known(v_x_1123_, 2);
v___x_1128_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1127_);
return v___x_1128_;
}
else
{
lean_object* v_head_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_inc(v_tail_1126_);
v_head_1129_ = lean_ctor_get(v_x_1123_, 0);
lean_inc(v_head_1129_);
lean_dec_ref_known(v_x_1123_, 2);
v___x_1130_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1129_);
v___x_1131_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(v_x_1124_, v___x_1130_, v_tail_1126_);
return v___x_1131_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0));
v___x_1137_ = lean_string_length(v___x_1136_);
return v___x_1137_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2);
v___x_1139_ = lean_nat_to_int(v___x_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object* v_xs_1147_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1148_ = lean_array_get_size(v_xs_1147_);
v___x_1149_ = lean_unsigned_to_nat(0u);
v___x_1150_ = lean_nat_dec_eq(v___x_1148_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1151_ = lean_array_to_list(v_xs_1147_);
v___x_1152_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1153_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(v___x_1151_, v___x_1152_);
v___x_1154_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1155_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___x_1153_);
v___x_1157_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1154_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = l_Std_Format_fill(v___x_1159_);
return v___x_1160_;
}
else
{
lean_object* v___x_1161_; 
lean_dec_ref(v_xs_1147_);
v___x_1161_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1161_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object* v_x_1174_){
_start:
{
lean_object* v_segments_1175_; uint8_t v_absolute_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1208_; 
v_segments_1175_ = lean_ctor_get(v_x_1174_, 0);
v_absolute_1176_ = lean_ctor_get_uint8(v_x_1174_, sizeof(void*)*1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_x_1174_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1178_ = v_x_1174_;
v_isShared_1179_ = v_isSharedCheck_1208_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_segments_1175_);
lean_dec(v_x_1174_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1208_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; lean_object* v___x_1187_; 
v___x_1180_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1181_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__3));
v___x_1182_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1183_ = l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(v_segments_1175_);
v___x_1184_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1182_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = 0;
if (v_isShared_1179_ == 0)
{
lean_ctor_set_tag(v___x_1178_, 6);
lean_ctor_set(v___x_1178_, 0, v___x_1184_);
v___x_1187_ = v___x_1178_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1184_);
v___x_1187_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_ctor_set_uint8(v___x_1187_, sizeof(void*)*1, v___x_1185_);
v___x_1188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1181_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___x_1191_ = lean_box(1);
v___x_1192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__5));
v___x_1194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
lean_ctor_set(v___x_1195_, 1, v___x_1180_);
v___x_1196_ = l_Bool_repr___redArg(v_absolute_1176_);
v___x_1197_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1182_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*1, v___x_1185_);
v___x_1199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1195_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1201_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v___x_1199_);
v___x_1203_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1202_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1200_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
lean_ctor_set_uint8(v___x_1206_, sizeof(void*)*1, v___x_1185_);
return v___x_1206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object* v_x_1209_, lean_object* v_prec_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Std_Http_URI_instReprPath_repr___redArg(v_x_1209_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object* v_x_1212_, lean_object* v_prec_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Std_Http_URI_instReprPath_repr(v_x_1212_, v_prec_1213_);
lean_dec(v_prec_1213_);
return v_res_1214_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object* v_xs_1217_, lean_object* v_ys_1218_, lean_object* v_x_1219_){
_start:
{
lean_object* v_zero_1220_; uint8_t v_isZero_1221_; 
v_zero_1220_ = lean_unsigned_to_nat(0u);
v_isZero_1221_ = lean_nat_dec_eq(v_x_1219_, v_zero_1220_);
if (v_isZero_1221_ == 1)
{
lean_dec(v_x_1219_);
return v_isZero_1221_;
}
else
{
lean_object* v_one_1222_; lean_object* v_n_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; 
v_one_1222_ = lean_unsigned_to_nat(1u);
v_n_1223_ = lean_nat_sub(v_x_1219_, v_one_1222_);
lean_dec(v_x_1219_);
v___x_1224_ = lean_array_fget_borrowed(v_xs_1217_, v_n_1223_);
v___x_1225_ = lean_array_fget_borrowed(v_ys_1218_, v_n_1223_);
v___x_1226_ = lean_sarray_dec_eq(v___x_1224_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_dec(v_n_1223_);
return v___x_1226_;
}
else
{
v_x_1219_ = v_n_1223_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object* v_xs_1228_, lean_object* v_ys_1229_, lean_object* v_x_1230_){
_start:
{
uint8_t v_res_1231_; lean_object* v_r_1232_; 
v_res_1231_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1228_, v_ys_1229_, v_x_1230_);
lean_dec_ref(v_ys_1229_);
lean_dec_ref(v_xs_1228_);
v_r_1232_ = lean_box(v_res_1231_);
return v_r_1232_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object* v_x_1233_, lean_object* v_x_1234_){
_start:
{
lean_object* v_segments_1235_; uint8_t v_absolute_1236_; lean_object* v_segments_1237_; uint8_t v_absolute_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; 
v_segments_1235_ = lean_ctor_get(v_x_1233_, 0);
v_absolute_1236_ = lean_ctor_get_uint8(v_x_1233_, sizeof(void*)*1);
v_segments_1237_ = lean_ctor_get(v_x_1234_, 0);
v_absolute_1238_ = lean_ctor_get_uint8(v_x_1234_, sizeof(void*)*1);
v___x_1239_ = lean_array_get_size(v_segments_1235_);
v___x_1240_ = lean_array_get_size(v_segments_1237_);
v___x_1241_ = lean_nat_dec_eq(v___x_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
return v___x_1241_;
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_segments_1235_, v_segments_1237_, v___x_1239_);
if (v___x_1242_ == 0)
{
return v___x_1242_;
}
else
{
if (v_absolute_1238_ == 0)
{
if (v_absolute_1236_ == 0)
{
return v___x_1242_;
}
else
{
return v_absolute_1238_;
}
}
else
{
return v_absolute_1236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
uint8_t v_res_1245_; lean_object* v_r_1246_; 
v_res_1245_ = l_Std_Http_URI_instBEqPath_beq(v_x_1243_, v_x_1244_);
lean_dec_ref(v_x_1244_);
lean_dec_ref(v_x_1243_);
v_r_1246_ = lean_box(v_res_1245_);
return v_r_1246_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object* v_xs_1247_, lean_object* v_ys_1248_, lean_object* v_hsz_1249_, lean_object* v_x_1250_, lean_object* v_x_1251_){
_start:
{
uint8_t v___x_1252_; 
v___x_1252_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1247_, v_ys_1248_, v_x_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object* v_xs_1253_, lean_object* v_ys_1254_, lean_object* v_hsz_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_res_1258_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(v_xs_1253_, v_ys_1254_, v_hsz_1255_, v_x_1256_, v_x_1257_);
lean_dec_ref(v_ys_1254_);
lean_dec_ref(v_xs_1253_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object* v_x_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_string_from_utf8_unchecked(v_x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object* v___f_1284_, lean_object* v_path_1285_){
_start:
{
lean_object* v_segments_1286_; uint8_t v_absolute_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; size_t v_sz_1290_; size_t v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v_result_1294_; 
v_segments_1286_ = lean_ctor_get(v_path_1285_, 0);
lean_inc_ref(v_segments_1286_);
v_absolute_1287_ = lean_ctor_get_uint8(v_path_1285_, sizeof(void*)*1);
lean_dec_ref(v_path_1285_);
v___x_1288_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_1289_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_1290_ = lean_array_size(v_segments_1286_);
v___x_1291_ = ((size_t)0ULL);
v___x_1292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1289_, v___f_1284_, v_sz_1290_, v___x_1291_, v_segments_1286_);
v___x_1293_ = lean_array_to_list(v___x_1292_);
v_result_1294_ = l_String_intercalate(v___x_1288_, v___x_1293_);
if (v_absolute_1287_ == 0)
{
return v_result_1294_;
}
else
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_string_append(v___x_1288_, v_result_1294_);
lean_dec_ref(v_result_1294_);
return v___x_1295_;
}
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object* v_p_1300_){
_start:
{
lean_object* v_segments_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v_segments_1301_ = lean_ctor_get(v_p_1300_, 0);
v___x_1302_ = lean_array_get_size(v_segments_1301_);
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_nat_dec_eq(v___x_1302_, v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object* v_p_1305_){
_start:
{
uint8_t v_res_1306_; lean_object* v_r_1307_; 
v_res_1306_ = l_Std_Http_URI_Path_isEmpty(v_p_1305_);
lean_dec_ref(v_p_1305_);
v_r_1307_ = lean_box(v_res_1306_);
return v_r_1307_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object* v_p_1308_){
_start:
{
lean_object* v_segments_1309_; uint8_t v_absolute_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v_segments_1309_ = lean_ctor_get(v_p_1308_, 0);
v_absolute_1310_ = lean_ctor_get_uint8(v_p_1308_, sizeof(void*)*1);
v___x_1311_ = lean_array_get_size(v_segments_1309_);
v___x_1312_ = lean_unsigned_to_nat(0u);
v___x_1313_ = lean_nat_dec_eq(v___x_1311_, v___x_1312_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1321_; 
lean_inc_ref(v_segments_1309_);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_p_1308_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v_p_1308_, 0);
lean_dec(v_unused_1322_);
v___x_1315_ = v_p_1308_;
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
else
{
lean_dec(v_p_1308_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1321_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_array_pop(v_segments_1309_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1317_);
v___x_1319_ = v___x_1315_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
lean_ctor_set_uint8(v_reuseFailAlloc_1320_, sizeof(void*)*1, v_absolute_1310_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
return v_p_1308_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object* v_p1_1323_, lean_object* v_p2_1324_){
_start:
{
uint8_t v_absolute_1325_; 
v_absolute_1325_ = lean_ctor_get_uint8(v_p2_1324_, sizeof(void*)*1);
if (v_absolute_1325_ == 0)
{
lean_object* v_segments_1326_; lean_object* v_segments_1327_; uint8_t v_absolute_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1336_; 
v_segments_1326_ = lean_ctor_get(v_p2_1324_, 0);
v_segments_1327_ = lean_ctor_get(v_p1_1323_, 0);
v_absolute_1328_ = lean_ctor_get_uint8(v_p1_1323_, sizeof(void*)*1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_p1_1323_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1330_ = v_p1_1323_;
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_segments_1327_);
lean_dec(v_p1_1323_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1336_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1332_ = l_Array_append___redArg(v_segments_1327_, v_segments_1326_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1332_);
v___x_1334_ = v___x_1330_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*1, v_absolute_1328_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
lean_dec_ref(v_p1_1323_);
lean_inc_ref(v_p2_1324_);
return v_p2_1324_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object* v_p1_1337_, lean_object* v_p2_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Std_Http_URI_Path_join(v_p1_1337_, v_p2_1338_);
lean_dec_ref(v_p2_1338_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object* v_p_1340_, lean_object* v_segment_1341_){
_start:
{
lean_object* v_segments_1342_; uint8_t v_absolute_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1352_; 
v_segments_1342_ = lean_ctor_get(v_p_1340_, 0);
v_absolute_1343_ = lean_ctor_get_uint8(v_p_1340_, sizeof(void*)*1);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_p_1340_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1345_ = v_p_1340_;
v_isShared_1346_ = v_isSharedCheck_1352_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_segments_1342_);
lean_dec(v_p_1340_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1352_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1347_ = l_Std_Http_URI_EncodedSegment_encode(v_segment_1341_);
v___x_1348_ = lean_array_push(v_segments_1342_, v___x_1347_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1348_);
v___x_1350_ = v___x_1345_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v___x_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1351_, sizeof(void*)*1, v_absolute_1343_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object* v_p_1353_, lean_object* v_segment_1354_){
_start:
{
lean_object* v_segments_1355_; uint8_t v_absolute_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1364_; 
v_segments_1355_ = lean_ctor_get(v_p_1353_, 0);
v_absolute_1356_ = lean_ctor_get_uint8(v_p_1353_, sizeof(void*)*1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_p_1353_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1358_ = v_p_1353_;
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_segments_1355_);
lean_dec(v_p_1353_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1364_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1360_ = lean_array_push(v_segments_1355_, v_segment_1354_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1360_);
v___x_1362_ = v___x_1358_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1363_, sizeof(void*)*1, v_absolute_1356_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object* v_input_1367_, lean_object* v_output_1368_){
_start:
{
if (lean_obj_tag(v_input_1367_) == 0)
{
lean_object* v___x_1369_; 
v___x_1369_ = l_List_reverse___redArg(v_output_1368_);
return v___x_1369_;
}
else
{
lean_object* v_head_1370_; lean_object* v_tail_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1388_; 
v_head_1370_ = lean_ctor_get(v_input_1367_, 0);
v_tail_1371_ = lean_ctor_get(v_input_1367_, 1);
v_isSharedCheck_1388_ = !lean_is_exclusive(v_input_1367_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1373_ = v_input_1367_;
v_isShared_1374_ = v_isSharedCheck_1388_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_tail_1371_);
lean_inc(v_head_1370_);
lean_dec(v_input_1367_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1388_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
lean_inc(v_head_1370_);
v___x_1375_ = lean_string_from_utf8_unchecked(v_head_1370_);
v___x_1376_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0));
v___x_1377_ = lean_string_dec_eq(v___x_1375_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1));
v___x_1379_ = lean_string_dec_eq(v___x_1375_, v___x_1378_);
lean_dec_ref(v___x_1375_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1381_; 
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 1, v_output_1368_);
v___x_1381_ = v___x_1373_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_head_1370_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_output_1368_);
v___x_1381_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
v_input_1367_ = v_tail_1371_;
v_output_1368_ = v___x_1381_;
goto _start;
}
}
else
{
lean_del_object(v___x_1373_);
lean_dec(v_head_1370_);
if (lean_obj_tag(v_output_1368_) == 0)
{
v_input_1367_ = v_tail_1371_;
goto _start;
}
else
{
lean_object* v_tail_1385_; 
v_tail_1385_ = lean_ctor_get(v_output_1368_, 1);
lean_inc(v_tail_1385_);
lean_dec_ref_known(v_output_1368_, 2);
v_input_1367_ = v_tail_1371_;
v_output_1368_ = v_tail_1385_;
goto _start;
}
}
}
else
{
lean_dec_ref(v___x_1375_);
lean_del_object(v___x_1373_);
lean_dec(v_head_1370_);
v_input_1367_ = v_tail_1371_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object* v_p_1389_){
_start:
{
lean_object* v_segments_1390_; uint8_t v_absolute_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1402_; 
v_segments_1390_ = lean_ctor_get(v_p_1389_, 0);
v_absolute_1391_ = lean_ctor_get_uint8(v_p_1389_, sizeof(void*)*1);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_p_1389_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1393_ = v_p_1389_;
v_isShared_1394_ = v_isSharedCheck_1402_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_segments_1390_);
lean_dec(v_p_1389_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1402_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1395_ = lean_array_to_list(v_segments_1390_);
v___x_1396_ = lean_box(0);
v___x_1397_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(v___x_1395_, v___x_1396_);
v___x_1398_ = lean_array_mk(v___x_1397_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 0, v___x_1398_);
v___x_1400_ = v___x_1393_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, sizeof(void*)*1, v_absolute_1391_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t v_sz_1403_, size_t v_i_1404_, lean_object* v_bs_1405_){
_start:
{
uint8_t v___x_1406_; 
v___x_1406_ = lean_usize_dec_lt(v_i_1404_, v_sz_1403_);
if (v___x_1406_ == 0)
{
return v_bs_1405_;
}
else
{
lean_object* v_v_1407_; lean_object* v___x_1408_; lean_object* v_bs_x27_1409_; lean_object* v___y_1411_; lean_object* v___x_1416_; 
v_v_1407_ = lean_array_uget(v_bs_1405_, v_i_1404_);
v___x_1408_ = lean_unsigned_to_nat(0u);
v_bs_x27_1409_ = lean_array_uset(v_bs_1405_, v_i_1404_, v___x_1408_);
v___x_1416_ = l_Std_Http_URI_EncodedSegment_decode(v_v_1407_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_string_from_utf8_unchecked(v_v_1407_);
v___y_1411_ = v___x_1417_;
goto v___jp_1410_;
}
else
{
lean_object* v_val_1418_; 
lean_dec(v_v_1407_);
v_val_1418_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_val_1418_);
lean_dec_ref_known(v___x_1416_, 1);
v___y_1411_ = v_val_1418_;
goto v___jp_1410_;
}
v___jp_1410_:
{
size_t v___x_1412_; size_t v___x_1413_; lean_object* v___x_1414_; 
v___x_1412_ = ((size_t)1ULL);
v___x_1413_ = lean_usize_add(v_i_1404_, v___x_1412_);
v___x_1414_ = lean_array_uset(v_bs_x27_1409_, v_i_1404_, v___y_1411_);
v_i_1404_ = v___x_1413_;
v_bs_1405_ = v___x_1414_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object* v_sz_1419_, lean_object* v_i_1420_, lean_object* v_bs_1421_){
_start:
{
size_t v_sz_boxed_1422_; size_t v_i_boxed_1423_; lean_object* v_res_1424_; 
v_sz_boxed_1422_ = lean_unbox_usize(v_sz_1419_);
lean_dec(v_sz_1419_);
v_i_boxed_1423_ = lean_unbox_usize(v_i_1420_);
lean_dec(v_i_1420_);
v_res_1424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_boxed_1422_, v_i_boxed_1423_, v_bs_1421_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object* v_p_1425_){
_start:
{
lean_object* v_segments_1426_; size_t v_sz_1427_; size_t v___x_1428_; lean_object* v___x_1429_; 
v_segments_1426_ = lean_ctor_get(v_p_1425_, 0);
lean_inc_ref(v_segments_1426_);
lean_dec_ref(v_p_1425_);
v_sz_1427_ = lean_array_size(v_segments_1426_);
v___x_1428_ = ((size_t)0ULL);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_1427_, v___x_1428_, v_segments_1426_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object* v_xs_1438_){
_start:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1440_ = l_Array_repr___redArg(v___x_1439_, v_xs_1438_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object* v_xs_1441_, lean_object* v_x_1442_){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1444_ = l_Array_repr___redArg(v___x_1443_, v_xs_1441_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object* v_xs_1445_, lean_object* v_x_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Std_Http_URI_instReprQuery___aux__1(v_xs_1445_, v_x_1446_);
lean_dec(v_x_1446_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_1448_, lean_object* v_x_1449_, lean_object* v_x_1450_){
_start:
{
if (lean_obj_tag(v_x_1450_) == 0)
{
lean_dec(v_x_1448_);
return v_x_1449_;
}
else
{
lean_object* v_head_1451_; lean_object* v_tail_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1461_; 
v_head_1451_ = lean_ctor_get(v_x_1450_, 0);
v_tail_1452_ = lean_ctor_get(v_x_1450_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_x_1450_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1454_ = v_x_1450_;
v_isShared_1455_ = v_isSharedCheck_1461_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_tail_1452_);
lean_inc(v_head_1451_);
lean_dec(v_x_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1461_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
lean_inc(v_x_1448_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 5);
lean_ctor_set(v___x_1454_, 1, v_x_1448_);
lean_ctor_set(v___x_1454_, 0, v_x_1449_);
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_x_1449_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v_x_1448_);
v___x_1457_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
lean_ctor_set(v___x_1458_, 1, v_head_1451_);
v_x_1449_ = v___x_1458_;
v_x_1450_ = v_tail_1452_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object* v_x_1462_, lean_object* v_x_1463_){
_start:
{
if (lean_obj_tag(v_x_1462_) == 0)
{
lean_object* v___x_1464_; 
lean_dec(v_x_1463_);
v___x_1464_ = lean_box(0);
return v___x_1464_;
}
else
{
lean_object* v_tail_1465_; 
v_tail_1465_ = lean_ctor_get(v_x_1462_, 1);
if (lean_obj_tag(v_tail_1465_) == 0)
{
lean_object* v_head_1466_; 
lean_dec(v_x_1463_);
v_head_1466_ = lean_ctor_get(v_x_1462_, 0);
lean_inc(v_head_1466_);
lean_dec_ref_known(v_x_1462_, 2);
return v_head_1466_;
}
else
{
lean_object* v_head_1467_; lean_object* v___x_1468_; 
lean_inc(v_tail_1465_);
v_head_1467_ = lean_ctor_get(v_x_1462_, 0);
lean_inc(v_head_1467_);
lean_dec_ref_known(v_x_1462_, 2);
v___x_1468_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(v_x_1463_, v_head_1467_, v_tail_1465_);
return v___x_1468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object* v_x_1469_, lean_object* v_x_1470_){
_start:
{
if (lean_obj_tag(v_x_1469_) == 0)
{
lean_object* v___x_1471_; 
v___x_1471_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_1471_;
}
else
{
lean_object* v_val_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1484_; 
v_val_1472_ = lean_ctor_get(v_x_1469_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_x_1469_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1474_ = v_x_1469_;
v_isShared_1475_ = v_isSharedCheck_1484_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_val_1472_);
lean_dec(v_x_1469_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1484_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1480_; 
v___x_1476_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_1477_ = lean_string_from_utf8_unchecked(v_val_1472_);
v___x_1478_ = l_String_quote(v___x_1477_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set_tag(v___x_1474_, 3);
lean_ctor_set(v___x_1474_, 0, v___x_1478_);
v___x_1480_ = v___x_1474_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1476_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = l_Repr_addAppParen(v___x_1481_, v_x_1470_);
return v___x_1482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object* v_x_1485_, lean_object* v_x_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_x_1485_, v_x_1486_);
lean_dec(v_x_1486_);
return v_res_1487_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0));
v___x_1491_ = lean_string_length(v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2);
v___x_1493_ = lean_nat_to_int(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object* v_x_1498_){
_start:
{
lean_object* v_fst_1499_; lean_object* v_snd_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1525_; 
v_fst_1499_ = lean_ctor_get(v_x_1498_, 0);
v_snd_1500_ = lean_ctor_get(v_x_1498_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_x_1498_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1502_ = v_x_1498_;
v_isShared_1503_ = v_isSharedCheck_1525_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_snd_1500_);
lean_inc(v_fst_1499_);
lean_dec(v_x_1498_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1525_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1504_ = lean_string_from_utf8_unchecked(v_fst_1499_);
v___x_1505_ = l_String_quote(v___x_1504_);
v___x_1506_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
v___x_1507_ = lean_box(0);
if (v_isShared_1503_ == 0)
{
lean_ctor_set_tag(v___x_1502_, 1);
lean_ctor_set(v___x_1502_, 1, v___x_1507_);
lean_ctor_set(v___x_1502_, 0, v___x_1506_);
v___x_1509_ = v___x_1502_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; 
v___x_1510_ = lean_unsigned_to_nat(0u);
v___x_1511_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_snd_1500_, v___x_1510_);
v___x_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1511_);
lean_ctor_set(v___x_1512_, 1, v___x_1509_);
v___x_1513_ = l_List_reverse___redArg(v___x_1512_);
v___x_1514_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1515_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(v___x_1513_, v___x_1514_);
v___x_1516_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3);
v___x_1517_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4));
v___x_1518_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
lean_ctor_set(v___x_1518_, 1, v___x_1515_);
v___x_1519_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5));
v___x_1520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1518_);
lean_ctor_set(v___x_1520_, 1, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1516_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = 0;
v___x_1523_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set_uint8(v___x_1523_, sizeof(void*)*1, v___x_1522_);
return v___x_1523_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object* v_x_1526_, lean_object* v_x_1527_, lean_object* v_x_1528_){
_start:
{
if (lean_obj_tag(v_x_1528_) == 0)
{
lean_dec(v_x_1526_);
return v_x_1527_;
}
else
{
lean_object* v_head_1529_; lean_object* v_tail_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1540_; 
v_head_1529_ = lean_ctor_get(v_x_1528_, 0);
v_tail_1530_ = lean_ctor_get(v_x_1528_, 1);
v_isSharedCheck_1540_ = !lean_is_exclusive(v_x_1528_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1532_ = v_x_1528_;
v_isShared_1533_ = v_isSharedCheck_1540_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_tail_1530_);
lean_inc(v_head_1529_);
lean_dec(v_x_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1540_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
lean_inc(v_x_1526_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set_tag(v___x_1532_, 5);
lean_ctor_set(v___x_1532_, 1, v_x_1526_);
lean_ctor_set(v___x_1532_, 0, v_x_1527_);
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_x_1527_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_x_1526_);
v___x_1535_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1529_);
v___x_1537_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1535_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v_x_1527_ = v___x_1537_;
v_x_1528_ = v_tail_1530_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object* v_x_1541_, lean_object* v_x_1542_, lean_object* v_x_1543_){
_start:
{
if (lean_obj_tag(v_x_1543_) == 0)
{
lean_dec(v_x_1541_);
return v_x_1542_;
}
else
{
lean_object* v_head_1544_; lean_object* v_tail_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1555_; 
v_head_1544_ = lean_ctor_get(v_x_1543_, 0);
v_tail_1545_ = lean_ctor_get(v_x_1543_, 1);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_x_1543_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1547_ = v_x_1543_;
v_isShared_1548_ = v_isSharedCheck_1555_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_tail_1545_);
lean_inc(v_head_1544_);
lean_dec(v_x_1543_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1555_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
lean_inc(v_x_1541_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set_tag(v___x_1547_, 5);
lean_ctor_set(v___x_1547_, 1, v_x_1541_);
lean_ctor_set(v___x_1547_, 0, v_x_1542_);
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_x_1542_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_x_1541_);
v___x_1550_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1544_);
v___x_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(v_x_1541_, v___x_1552_, v_tail_1545_);
return v___x_1553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object* v_x_1556_, lean_object* v_x_1557_){
_start:
{
if (lean_obj_tag(v_x_1556_) == 0)
{
lean_object* v___x_1558_; 
lean_dec(v_x_1557_);
v___x_1558_ = lean_box(0);
return v___x_1558_;
}
else
{
lean_object* v_tail_1559_; 
v_tail_1559_ = lean_ctor_get(v_x_1556_, 1);
if (lean_obj_tag(v_tail_1559_) == 0)
{
lean_object* v_head_1560_; lean_object* v___x_1561_; 
lean_dec(v_x_1557_);
v_head_1560_ = lean_ctor_get(v_x_1556_, 0);
lean_inc(v_head_1560_);
lean_dec_ref_known(v_x_1556_, 2);
v___x_1561_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1560_);
return v___x_1561_;
}
else
{
lean_object* v_head_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_inc(v_tail_1559_);
v_head_1562_ = lean_ctor_get(v_x_1556_, 0);
lean_inc(v_head_1562_);
lean_dec_ref_known(v_x_1556_, 2);
v___x_1563_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1562_);
v___x_1564_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(v_x_1557_, v___x_1563_, v_tail_1559_);
return v___x_1564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object* v_xs_1565_){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; 
v___x_1566_ = lean_array_get_size(v_xs_1565_);
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = lean_nat_dec_eq(v___x_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1569_ = lean_array_to_list(v_xs_1565_);
v___x_1570_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1571_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(v___x_1569_, v___x_1570_);
v___x_1572_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1573_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___x_1571_);
v___x_1575_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1572_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = l_Std_Format_fill(v___x_1577_);
return v___x_1578_;
}
else
{
lean_object* v___x_1579_; 
lean_dec_ref(v_xs_1565_);
v___x_1579_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1579_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v___y_1580_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Std_Http_URI_instReprQuery___lam__0(v___y_1583_, v___y_1584_);
lean_dec(v___y_1584_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object* v_x_1588_, lean_object* v_x_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_x_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object* v_x_1591_, lean_object* v_x_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(v_x_1591_, v_x_1592_);
lean_dec(v_x_1592_);
return v_res_1593_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object* v___f_1598_, lean_object* v_x_1599_, lean_object* v_x_1600_){
_start:
{
lean_object* v_fst_1601_; lean_object* v_snd_1602_; lean_object* v_fst_1603_; lean_object* v_snd_1604_; uint8_t v___x_1605_; 
v_fst_1601_ = lean_ctor_get(v_x_1599_, 0);
lean_inc(v_fst_1601_);
v_snd_1602_ = lean_ctor_get(v_x_1599_, 1);
lean_inc(v_snd_1602_);
lean_dec_ref(v_x_1599_);
v_fst_1603_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_fst_1603_);
v_snd_1604_ = lean_ctor_get(v_x_1600_, 1);
lean_inc(v_snd_1604_);
lean_dec_ref(v_x_1600_);
v___x_1605_ = lean_sarray_dec_eq(v_fst_1601_, v_fst_1603_);
lean_dec(v_fst_1603_);
lean_dec(v_fst_1601_);
if (v___x_1605_ == 0)
{
lean_dec(v_snd_1604_);
lean_dec(v_snd_1602_);
lean_dec_ref(v___f_1598_);
return v___x_1605_;
}
else
{
uint8_t v___x_1606_; 
v___x_1606_ = l_instBEqOption_beq___redArg(v___f_1598_, v_snd_1602_, v_snd_1604_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object* v___f_1607_, lean_object* v_x_1608_, lean_object* v_x_1609_){
_start:
{
uint8_t v_res_1610_; lean_object* v_r_1611_; 
v_res_1610_ = l_Std_Http_URI_instBEqQuery___aux__1___lam__0(v___f_1607_, v_x_1608_, v_x_1609_);
v_r_1611_ = lean_box(v_res_1610_);
return v_r_1611_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object* v_xs_1615_, lean_object* v_ys_1616_){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1617_ = lean_array_get_size(v_xs_1615_);
v___x_1618_ = lean_array_get_size(v_ys_1616_);
v___x_1619_ = lean_nat_dec_eq(v___x_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
return v___x_1619_;
}
else
{
lean_object* v___f_1620_; uint8_t v___x_1621_; 
v___f_1620_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__1));
v___x_1621_ = l_Array_isEqvAux___redArg(v_xs_1615_, v_ys_1616_, v___f_1620_, v___x_1617_);
return v___x_1621_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object* v_xs_1622_, lean_object* v_ys_1623_){
_start:
{
uint8_t v_res_1624_; lean_object* v_r_1625_; 
v_res_1624_ = l_Std_Http_URI_instBEqQuery___aux__1(v_xs_1622_, v_ys_1623_);
lean_dec_ref(v_ys_1623_);
lean_dec_ref(v_xs_1622_);
v_r_1625_ = lean_box(v_res_1624_);
return v_r_1625_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object* v_x_1626_, lean_object* v_x_1627_){
_start:
{
if (lean_obj_tag(v_x_1626_) == 0)
{
if (lean_obj_tag(v_x_1627_) == 0)
{
uint8_t v___x_1628_; 
v___x_1628_ = 1;
return v___x_1628_;
}
else
{
uint8_t v___x_1629_; 
v___x_1629_ = 0;
return v___x_1629_;
}
}
else
{
if (lean_obj_tag(v_x_1627_) == 0)
{
uint8_t v___x_1630_; 
v___x_1630_ = 0;
return v___x_1630_;
}
else
{
lean_object* v_val_1631_; lean_object* v_val_1632_; uint8_t v___x_1633_; 
v_val_1631_ = lean_ctor_get(v_x_1626_, 0);
v_val_1632_ = lean_ctor_get(v_x_1627_, 0);
v___x_1633_ = lean_sarray_dec_eq(v_val_1631_, v_val_1632_);
return v___x_1633_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object* v_x_1634_, lean_object* v_x_1635_){
_start:
{
uint8_t v_res_1636_; lean_object* v_r_1637_; 
v_res_1636_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_x_1634_, v_x_1635_);
lean_dec(v_x_1635_);
lean_dec(v_x_1634_);
v_r_1637_ = lean_box(v_res_1636_);
return v_r_1637_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object* v_xs_1638_, lean_object* v_ys_1639_, lean_object* v_x_1640_){
_start:
{
lean_object* v_zero_1641_; uint8_t v_isZero_1642_; 
v_zero_1641_ = lean_unsigned_to_nat(0u);
v_isZero_1642_ = lean_nat_dec_eq(v_x_1640_, v_zero_1641_);
if (v_isZero_1642_ == 1)
{
lean_dec(v_x_1640_);
return v_isZero_1642_;
}
else
{
lean_object* v_one_1643_; lean_object* v_n_1644_; lean_object* v___x_1645_; lean_object* v_fst_1646_; lean_object* v_snd_1647_; lean_object* v___x_1648_; lean_object* v_fst_1649_; lean_object* v_snd_1650_; uint8_t v___x_1651_; 
v_one_1643_ = lean_unsigned_to_nat(1u);
v_n_1644_ = lean_nat_sub(v_x_1640_, v_one_1643_);
lean_dec(v_x_1640_);
v___x_1645_ = lean_array_fget_borrowed(v_xs_1638_, v_n_1644_);
v_fst_1646_ = lean_ctor_get(v___x_1645_, 0);
v_snd_1647_ = lean_ctor_get(v___x_1645_, 1);
v___x_1648_ = lean_array_fget_borrowed(v_ys_1639_, v_n_1644_);
v_fst_1649_ = lean_ctor_get(v___x_1648_, 0);
v_snd_1650_ = lean_ctor_get(v___x_1648_, 1);
v___x_1651_ = lean_sarray_dec_eq(v_fst_1646_, v_fst_1649_);
if (v___x_1651_ == 0)
{
lean_dec(v_n_1644_);
return v___x_1651_;
}
else
{
uint8_t v___x_1652_; 
v___x_1652_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_snd_1647_, v_snd_1650_);
if (v___x_1652_ == 0)
{
lean_dec(v_n_1644_);
return v___x_1652_;
}
else
{
v_x_1640_ = v_n_1644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object* v_xs_1654_, lean_object* v_ys_1655_, lean_object* v_x_1656_){
_start:
{
uint8_t v_res_1657_; lean_object* v_r_1658_; 
v_res_1657_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1654_, v_ys_1655_, v_x_1656_);
lean_dec_ref(v_ys_1655_);
lean_dec_ref(v_xs_1654_);
v_r_1658_ = lean_box(v_res_1657_);
return v_r_1658_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; 
v___x_1661_ = lean_array_get_size(v___y_1659_);
v___x_1662_ = lean_array_get_size(v___y_1660_);
v___x_1663_ = lean_nat_dec_eq(v___x_1661_, v___x_1662_);
if (v___x_1663_ == 0)
{
return v___x_1663_;
}
else
{
uint8_t v___x_1664_; 
v___x_1664_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v___y_1659_, v___y_1660_, v___x_1661_);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
uint8_t v_res_1667_; lean_object* v_r_1668_; 
v_res_1667_ = l_Std_Http_URI_instBEqQuery___lam__0(v___y_1665_, v___y_1666_);
lean_dec_ref(v___y_1666_);
lean_dec_ref(v___y_1665_);
v_r_1668_ = lean_box(v_res_1667_);
return v_r_1668_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object* v_xs_1671_, lean_object* v_ys_1672_, lean_object* v_hsz_1673_, lean_object* v_x_1674_, lean_object* v_x_1675_){
_start:
{
uint8_t v___x_1676_; 
v___x_1676_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1671_, v_ys_1672_, v_x_1674_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object* v_xs_1677_, lean_object* v_ys_1678_, lean_object* v_hsz_1679_, lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
uint8_t v_res_1682_; lean_object* v_r_1683_; 
v_res_1682_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(v_xs_1677_, v_ys_1678_, v_hsz_1679_, v_x_1680_, v_x_1681_);
lean_dec_ref(v_ys_1678_);
lean_dec_ref(v_xs_1677_);
v_r_1683_ = lean_box(v_res_1682_);
return v_r_1683_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object* v_as_1684_){
_start:
{
lean_object* v___f_1685_; lean_object* v___x_1686_; 
v___f_1685_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__0));
v___x_1686_ = l_List_eraseDupsBy___redArg(v___f_1685_, v_as_1684_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t v_sz_1687_, size_t v_i_1688_, lean_object* v_bs_1689_){
_start:
{
uint8_t v___x_1690_; 
v___x_1690_ = lean_usize_dec_lt(v_i_1688_, v_sz_1687_);
if (v___x_1690_ == 0)
{
return v_bs_1689_;
}
else
{
lean_object* v_v_1691_; lean_object* v_fst_1692_; lean_object* v___x_1693_; lean_object* v_bs_x27_1694_; size_t v___x_1695_; size_t v___x_1696_; lean_object* v___x_1697_; 
v_v_1691_ = lean_array_uget_borrowed(v_bs_1689_, v_i_1688_);
v_fst_1692_ = lean_ctor_get(v_v_1691_, 0);
lean_inc(v_fst_1692_);
v___x_1693_ = lean_unsigned_to_nat(0u);
v_bs_x27_1694_ = lean_array_uset(v_bs_1689_, v_i_1688_, v___x_1693_);
v___x_1695_ = ((size_t)1ULL);
v___x_1696_ = lean_usize_add(v_i_1688_, v___x_1695_);
v___x_1697_ = lean_array_uset(v_bs_x27_1694_, v_i_1688_, v_fst_1692_);
v_i_1688_ = v___x_1696_;
v_bs_1689_ = v___x_1697_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object* v_sz_1699_, lean_object* v_i_1700_, lean_object* v_bs_1701_){
_start:
{
size_t v_sz_boxed_1702_; size_t v_i_boxed_1703_; lean_object* v_res_1704_; 
v_sz_boxed_1702_ = lean_unbox_usize(v_sz_1699_);
lean_dec(v_sz_1699_);
v_i_boxed_1703_ = lean_unbox_usize(v_i_1700_);
lean_dec(v_i_1700_);
v_res_1704_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_boxed_1702_, v_i_boxed_1703_, v_bs_1701_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object* v_query_1705_){
_start:
{
size_t v_sz_1706_; size_t v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_sz_1706_ = lean_array_size(v_query_1705_);
v___x_1707_ = ((size_t)0ULL);
v___x_1708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_1706_, v___x_1707_, v_query_1705_);
v___x_1709_ = lean_array_to_list(v___x_1708_);
v___x_1710_ = l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(v___x_1709_);
v___x_1711_ = lean_array_mk(v___x_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t v_sz_1712_, size_t v_i_1713_, lean_object* v_bs_1714_){
_start:
{
uint8_t v___x_1715_; 
v___x_1715_ = lean_usize_dec_lt(v_i_1713_, v_sz_1712_);
if (v___x_1715_ == 0)
{
return v_bs_1714_;
}
else
{
lean_object* v_v_1716_; lean_object* v_snd_1717_; lean_object* v___x_1718_; lean_object* v_bs_x27_1719_; size_t v___x_1720_; size_t v___x_1721_; lean_object* v___x_1722_; 
v_v_1716_ = lean_array_uget_borrowed(v_bs_1714_, v_i_1713_);
v_snd_1717_ = lean_ctor_get(v_v_1716_, 1);
lean_inc(v_snd_1717_);
v___x_1718_ = lean_unsigned_to_nat(0u);
v_bs_x27_1719_ = lean_array_uset(v_bs_1714_, v_i_1713_, v___x_1718_);
v___x_1720_ = ((size_t)1ULL);
v___x_1721_ = lean_usize_add(v_i_1713_, v___x_1720_);
v___x_1722_ = lean_array_uset(v_bs_x27_1719_, v_i_1713_, v_snd_1717_);
v_i_1713_ = v___x_1721_;
v_bs_1714_ = v___x_1722_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object* v_sz_1724_, lean_object* v_i_1725_, lean_object* v_bs_1726_){
_start:
{
size_t v_sz_boxed_1727_; size_t v_i_boxed_1728_; lean_object* v_res_1729_; 
v_sz_boxed_1727_ = lean_unbox_usize(v_sz_1724_);
lean_dec(v_sz_1724_);
v_i_boxed_1728_ = lean_unbox_usize(v_i_1725_);
lean_dec(v_i_1725_);
v_res_1729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_boxed_1727_, v_i_boxed_1728_, v_bs_1726_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object* v_query_1730_){
_start:
{
size_t v_sz_1731_; size_t v___x_1732_; lean_object* v___x_1733_; 
v_sz_1731_ = lean_array_size(v_query_1730_);
v___x_1732_ = ((size_t)0ULL);
v___x_1733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_1731_, v___x_1732_, v_query_1730_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object* v_query_1734_){
_start:
{
lean_inc_ref(v_query_1734_);
return v_query_1734_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object* v_query_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Std_Http_URI_Query_toArray(v_query_1735_);
lean_dec_ref(v_query_1735_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object* v_key_1738_, lean_object* v_value_1739_){
_start:
{
if (lean_obj_tag(v_value_1739_) == 0)
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_string_from_utf8_unchecked(v_key_1738_);
return v___x_1740_;
}
else
{
lean_object* v_val_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v_val_1741_ = lean_ctor_get(v_value_1739_, 0);
lean_inc(v_val_1741_);
lean_dec_ref_known(v_value_1739_, 1);
v___x_1742_ = lean_string_from_utf8_unchecked(v_key_1738_);
v___x_1743_ = ((lean_object*)(l_Std_Http_URI_Query_formatQueryParam___closed__0));
v___x_1744_ = lean_string_append(v___x_1742_, v___x_1743_);
v___x_1745_ = lean_string_from_utf8_unchecked(v_val_1741_);
v___x_1746_ = lean_string_append(v___x_1744_, v___x_1745_);
lean_dec_ref(v___x_1745_);
return v___x_1746_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object* v_key_1750_, lean_object* v_as_1751_, size_t v_sz_1752_, size_t v_i_1753_, lean_object* v_b_1754_){
_start:
{
uint8_t v___x_1755_; 
v___x_1755_ = lean_usize_dec_lt(v_i_1753_, v_sz_1752_);
if (v___x_1755_ == 0)
{
lean_inc_ref(v_b_1754_);
return v_b_1754_;
}
else
{
lean_object* v_a_1756_; lean_object* v_fst_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v_a_1756_ = lean_array_uget_borrowed(v_as_1751_, v_i_1753_);
v_fst_1757_ = lean_ctor_get(v_a_1756_, 0);
v___x_1758_ = lean_box(0);
v___x_1759_ = lean_sarray_dec_eq(v_fst_1757_, v_key_1750_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; size_t v___x_1761_; size_t v___x_1762_; 
v___x_1760_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v___x_1761_ = ((size_t)1ULL);
v___x_1762_ = lean_usize_add(v_i_1753_, v___x_1761_);
v_i_1753_ = v___x_1762_;
v_b_1754_ = v___x_1760_;
goto _start;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
lean_inc(v_a_1756_);
v___x_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1764_, 0, v_a_1756_);
v___x_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
lean_ctor_set(v___x_1766_, 1, v___x_1758_);
return v___x_1766_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object* v_key_1767_, lean_object* v_as_1768_, lean_object* v_sz_1769_, lean_object* v_i_1770_, lean_object* v_b_1771_){
_start:
{
size_t v_sz_boxed_1772_; size_t v_i_boxed_1773_; lean_object* v_res_1774_; 
v_sz_boxed_1772_ = lean_unbox_usize(v_sz_1769_);
lean_dec(v_sz_1769_);
v_i_boxed_1773_ = lean_unbox_usize(v_i_1770_);
lean_dec(v_i_1770_);
v_res_1774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1767_, v_as_1768_, v_sz_boxed_1772_, v_i_boxed_1773_, v_b_1771_);
lean_dec_ref(v_b_1771_);
lean_dec_ref(v_as_1768_);
lean_dec_ref(v_key_1767_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object* v_query_1775_, lean_object* v_key_1776_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; size_t v_sz_1779_; size_t v___x_1780_; lean_object* v___x_1781_; lean_object* v_fst_1782_; 
v___x_1777_ = lean_box(0);
v___x_1778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v_sz_1779_ = lean_array_size(v_query_1775_);
v___x_1780_ = ((size_t)0ULL);
v___x_1781_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1776_, v_query_1775_, v_sz_1779_, v___x_1780_, v___x_1778_);
v_fst_1782_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_fst_1782_);
lean_dec_ref(v___x_1781_);
if (lean_obj_tag(v_fst_1782_) == 0)
{
return v___x_1777_;
}
else
{
lean_object* v_val_1783_; 
v_val_1783_ = lean_ctor_get(v_fst_1782_, 0);
lean_inc(v_val_1783_);
lean_dec_ref_known(v_fst_1782_, 1);
if (lean_obj_tag(v_val_1783_) == 0)
{
return v___x_1777_;
}
else
{
lean_object* v_val_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1792_; 
v_val_1784_ = lean_ctor_get(v_val_1783_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v_val_1783_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1786_ = v_val_1783_;
v_isShared_1787_ = v_isSharedCheck_1792_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_val_1784_);
lean_dec(v_val_1783_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1792_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_snd_1788_; lean_object* v___x_1790_; 
v_snd_1788_ = lean_ctor_get(v_val_1784_, 1);
lean_inc(v_snd_1788_);
lean_dec(v_val_1784_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v_snd_1788_);
v___x_1790_ = v___x_1786_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_snd_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object* v_query_1793_, lean_object* v_key_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1793_, v_key_1794_);
lean_dec_ref(v_key_1794_);
lean_dec_ref(v_query_1793_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object* v_query_1796_, lean_object* v_key_1797_){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1797_);
v___x_1799_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1796_, v___x_1798_);
lean_dec_ref(v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object* v_query_1800_, lean_object* v_key_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Std_Http_URI_Query_find_x3f(v_query_1800_, v_key_1801_);
lean_dec_ref(v_query_1800_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object* v_key_1803_, lean_object* v_as_1804_, size_t v_i_1805_, size_t v_stop_1806_, lean_object* v_b_1807_){
_start:
{
lean_object* v___y_1809_; uint8_t v___x_1813_; 
v___x_1813_ = lean_usize_dec_eq(v_i_1805_, v_stop_1806_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v_fst_1815_; lean_object* v_snd_1816_; uint8_t v___x_1817_; 
v___x_1814_ = lean_array_uget_borrowed(v_as_1804_, v_i_1805_);
v_fst_1815_ = lean_ctor_get(v___x_1814_, 0);
v_snd_1816_ = lean_ctor_get(v___x_1814_, 1);
v___x_1817_ = lean_sarray_dec_eq(v_fst_1815_, v_key_1803_);
if (v___x_1817_ == 0)
{
v___y_1809_ = v_b_1807_;
goto v___jp_1808_;
}
else
{
lean_object* v___x_1818_; 
lean_inc(v_snd_1816_);
v___x_1818_ = lean_array_push(v_b_1807_, v_snd_1816_);
v___y_1809_ = v___x_1818_;
goto v___jp_1808_;
}
}
else
{
return v_b_1807_;
}
v___jp_1808_:
{
size_t v___x_1810_; size_t v___x_1811_; 
v___x_1810_ = ((size_t)1ULL);
v___x_1811_ = lean_usize_add(v_i_1805_, v___x_1810_);
v_i_1805_ = v___x_1811_;
v_b_1807_ = v___y_1809_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object* v_key_1819_, lean_object* v_as_1820_, lean_object* v_i_1821_, lean_object* v_stop_1822_, lean_object* v_b_1823_){
_start:
{
size_t v_i_boxed_1824_; size_t v_stop_boxed_1825_; lean_object* v_res_1826_; 
v_i_boxed_1824_ = lean_unbox_usize(v_i_1821_);
lean_dec(v_i_1821_);
v_stop_boxed_1825_ = lean_unbox_usize(v_stop_1822_);
lean_dec(v_stop_1822_);
v_res_1826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1819_, v_as_1820_, v_i_boxed_1824_, v_stop_boxed_1825_, v_b_1823_);
lean_dec_ref(v_as_1820_);
lean_dec_ref(v_key_1819_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object* v_key_1829_, lean_object* v_as_1830_, lean_object* v_start_1831_, lean_object* v_stop_1832_){
_start:
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0));
v___x_1834_ = lean_nat_dec_lt(v_start_1831_, v_stop_1832_);
if (v___x_1834_ == 0)
{
return v___x_1833_;
}
else
{
lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = lean_array_get_size(v_as_1830_);
v___x_1836_ = lean_nat_dec_le(v_stop_1832_, v___x_1835_);
if (v___x_1836_ == 0)
{
uint8_t v___x_1837_; 
v___x_1837_ = lean_nat_dec_lt(v_start_1831_, v___x_1835_);
if (v___x_1837_ == 0)
{
return v___x_1833_;
}
else
{
size_t v___x_1838_; size_t v___x_1839_; lean_object* v___x_1840_; 
v___x_1838_ = lean_usize_of_nat(v_start_1831_);
v___x_1839_ = lean_usize_of_nat(v___x_1835_);
v___x_1840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1829_, v_as_1830_, v___x_1838_, v___x_1839_, v___x_1833_);
return v___x_1840_;
}
}
else
{
size_t v___x_1841_; size_t v___x_1842_; lean_object* v___x_1843_; 
v___x_1841_ = lean_usize_of_nat(v_start_1831_);
v___x_1842_ = lean_usize_of_nat(v_stop_1832_);
v___x_1843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1829_, v_as_1830_, v___x_1841_, v___x_1842_, v___x_1833_);
return v___x_1843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object* v_key_1844_, lean_object* v_as_1845_, lean_object* v_start_1846_, lean_object* v_stop_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_1844_, v_as_1845_, v_start_1846_, v_stop_1847_);
lean_dec(v_stop_1847_);
lean_dec(v_start_1846_);
lean_dec_ref(v_as_1845_);
lean_dec_ref(v_key_1844_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object* v_query_1849_, lean_object* v_key_1850_){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1851_ = lean_unsigned_to_nat(0u);
v___x_1852_ = lean_array_get_size(v_query_1849_);
v___x_1853_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_1850_, v_query_1849_, v___x_1851_, v___x_1852_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object* v_query_1854_, lean_object* v_key_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Std_Http_URI_Query_findAllEncoded(v_query_1854_, v_key_1855_);
lean_dec_ref(v_key_1855_);
lean_dec_ref(v_query_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object* v_query_1857_, lean_object* v_key_1858_){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1858_);
v___x_1860_ = l_Std_Http_URI_Query_findAllEncoded(v_query_1857_, v___x_1859_);
lean_dec_ref(v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object* v_query_1861_, lean_object* v_key_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Std_Http_URI_Query_findAll(v_query_1861_, v_key_1862_);
lean_dec_ref(v_query_1861_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object* v_query_1864_, lean_object* v_key_1865_, lean_object* v_value_1866_){
_start:
{
lean_object* v_encodedKey_1867_; lean_object* v_encodedValue_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_encodedKey_1867_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1865_);
v_encodedValue_1868_ = l_Std_Http_URI_EncodedQueryParam_encode(v_value_1866_);
v___x_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1869_, 0, v_encodedValue_1868_);
v___x_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1870_, 0, v_encodedKey_1867_);
lean_ctor_set(v___x_1870_, 1, v___x_1869_);
v___x_1871_ = lean_array_push(v_query_1864_, v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object* v_query_1872_, lean_object* v_key_1873_, lean_object* v_value_1874_){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1875_, 0, v_key_1873_);
lean_ctor_set(v___x_1875_, 1, v_value_1874_);
v___x_1876_ = lean_array_push(v_query_1872_, v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object* v_pairs_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_array_mk(v_pairs_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object* v_key_1882_, lean_object* v_as_1883_, size_t v_i_1884_, size_t v_stop_1885_){
_start:
{
uint8_t v___x_1886_; 
v___x_1886_ = lean_usize_dec_eq(v_i_1884_, v_stop_1885_);
if (v___x_1886_ == 0)
{
lean_object* v___x_1887_; lean_object* v_fst_1888_; uint8_t v___x_1889_; 
v___x_1887_ = lean_array_uget_borrowed(v_as_1883_, v_i_1884_);
v_fst_1888_ = lean_ctor_get(v___x_1887_, 0);
v___x_1889_ = lean_sarray_dec_eq(v_fst_1888_, v_key_1882_);
if (v___x_1889_ == 0)
{
size_t v___x_1890_; size_t v___x_1891_; 
v___x_1890_ = ((size_t)1ULL);
v___x_1891_ = lean_usize_add(v_i_1884_, v___x_1890_);
v_i_1884_ = v___x_1891_;
goto _start;
}
else
{
return v___x_1889_;
}
}
else
{
uint8_t v___x_1893_; 
v___x_1893_ = 0;
return v___x_1893_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object* v_key_1894_, lean_object* v_as_1895_, lean_object* v_i_1896_, lean_object* v_stop_1897_){
_start:
{
size_t v_i_boxed_1898_; size_t v_stop_boxed_1899_; uint8_t v_res_1900_; lean_object* v_r_1901_; 
v_i_boxed_1898_ = lean_unbox_usize(v_i_1896_);
lean_dec(v_i_1896_);
v_stop_boxed_1899_ = lean_unbox_usize(v_stop_1897_);
lean_dec(v_stop_1897_);
v_res_1900_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_1894_, v_as_1895_, v_i_boxed_1898_, v_stop_boxed_1899_);
lean_dec_ref(v_as_1895_);
lean_dec_ref(v_key_1894_);
v_r_1901_ = lean_box(v_res_1900_);
return v_r_1901_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object* v_query_1902_, lean_object* v_key_1903_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = lean_array_get_size(v_query_1902_);
v___x_1906_ = lean_nat_dec_lt(v___x_1904_, v___x_1905_);
if (v___x_1906_ == 0)
{
return v___x_1906_;
}
else
{
if (v___x_1906_ == 0)
{
return v___x_1906_;
}
else
{
size_t v___x_1907_; size_t v___x_1908_; uint8_t v___x_1909_; 
v___x_1907_ = ((size_t)0ULL);
v___x_1908_ = lean_usize_of_nat(v___x_1905_);
v___x_1909_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_1903_, v_query_1902_, v___x_1907_, v___x_1908_);
return v___x_1909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object* v_query_1910_, lean_object* v_key_1911_){
_start:
{
uint8_t v_res_1912_; lean_object* v_r_1913_; 
v_res_1912_ = l_Std_Http_URI_Query_containsEncoded(v_query_1910_, v_key_1911_);
lean_dec_ref(v_key_1911_);
lean_dec_ref(v_query_1910_);
v_r_1913_ = lean_box(v_res_1912_);
return v_r_1913_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object* v_query_1914_, lean_object* v_key_1915_){
_start:
{
lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1915_);
v___x_1917_ = l_Std_Http_URI_Query_containsEncoded(v_query_1914_, v___x_1916_);
lean_dec_ref(v___x_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object* v_query_1918_, lean_object* v_key_1919_){
_start:
{
uint8_t v_res_1920_; lean_object* v_r_1921_; 
v_res_1920_ = l_Std_Http_URI_Query_contains(v_query_1918_, v_key_1919_);
lean_dec_ref(v_query_1918_);
v_r_1921_ = lean_box(v_res_1920_);
return v_r_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object* v_key_1922_, lean_object* v_as_1923_, size_t v_i_1924_, size_t v_stop_1925_, lean_object* v_b_1926_){
_start:
{
lean_object* v___y_1928_; uint8_t v___x_1932_; 
v___x_1932_ = lean_usize_dec_eq(v_i_1924_, v_stop_1925_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v_fst_1934_; uint8_t v___x_1935_; 
v___x_1933_ = lean_array_uget_borrowed(v_as_1923_, v_i_1924_);
v_fst_1934_ = lean_ctor_get(v___x_1933_, 0);
v___x_1935_ = lean_sarray_dec_eq(v_fst_1934_, v_key_1922_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
lean_inc(v___x_1933_);
v___x_1936_ = lean_array_push(v_b_1926_, v___x_1933_);
v___y_1928_ = v___x_1936_;
goto v___jp_1927_;
}
else
{
v___y_1928_ = v_b_1926_;
goto v___jp_1927_;
}
}
else
{
return v_b_1926_;
}
v___jp_1927_:
{
size_t v___x_1929_; size_t v___x_1930_; 
v___x_1929_ = ((size_t)1ULL);
v___x_1930_ = lean_usize_add(v_i_1924_, v___x_1929_);
v_i_1924_ = v___x_1930_;
v_b_1926_ = v___y_1928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object* v_key_1937_, lean_object* v_as_1938_, lean_object* v_i_1939_, lean_object* v_stop_1940_, lean_object* v_b_1941_){
_start:
{
size_t v_i_boxed_1942_; size_t v_stop_boxed_1943_; lean_object* v_res_1944_; 
v_i_boxed_1942_ = lean_unbox_usize(v_i_1939_);
lean_dec(v_i_1939_);
v_stop_boxed_1943_ = lean_unbox_usize(v_stop_1940_);
lean_dec(v_stop_1940_);
v_res_1944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_1937_, v_as_1938_, v_i_boxed_1942_, v_stop_boxed_1943_, v_b_1941_);
lean_dec_ref(v_as_1938_);
lean_dec_ref(v_key_1937_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object* v_query_1945_, lean_object* v_key_1946_){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; uint8_t v___x_1950_; 
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = lean_array_get_size(v_query_1945_);
v___x_1949_ = ((lean_object*)(l_Std_Http_URI_Query_empty___closed__0));
v___x_1950_ = lean_nat_dec_lt(v___x_1947_, v___x_1948_);
if (v___x_1950_ == 0)
{
return v___x_1949_;
}
else
{
size_t v___x_1951_; size_t v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = ((size_t)0ULL);
v___x_1952_ = lean_usize_of_nat(v___x_1948_);
v___x_1953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_1946_, v_query_1945_, v___x_1951_, v___x_1952_, v___x_1949_);
return v___x_1953_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object* v_query_1954_, lean_object* v_key_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Std_Http_URI_Query_eraseEncoded(v_query_1954_, v_key_1955_);
lean_dec_ref(v_key_1955_);
lean_dec_ref(v_query_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object* v_query_1957_, lean_object* v_key_1958_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1958_);
v___x_1960_ = l_Std_Http_URI_Query_eraseEncoded(v_query_1957_, v___x_1959_);
lean_dec_ref(v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object* v_query_1961_, lean_object* v_key_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Std_Http_URI_Query_erase(v_query_1961_, v_key_1962_);
lean_dec_ref(v_query_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object* v_query_1966_, lean_object* v_key_1967_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Std_Http_URI_Query_find_x3f(v_query_1966_, v_key_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_box(0);
return v___x_1969_;
}
else
{
lean_object* v_val_1970_; 
v_val_1970_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_val_1970_);
lean_dec_ref_known(v___x_1968_, 1);
if (lean_obj_tag(v_val_1970_) == 0)
{
lean_object* v___x_1971_; 
v___x_1971_ = ((lean_object*)(l_Std_Http_URI_Query_get___closed__0));
return v___x_1971_;
}
else
{
lean_object* v_val_1972_; lean_object* v___x_1973_; 
v_val_1972_ = lean_ctor_get(v_val_1970_, 0);
lean_inc(v_val_1972_);
lean_dec_ref_known(v_val_1970_, 1);
v___x_1973_ = l_Std_Http_URI_EncodedQueryParam_decode(v_val_1972_);
lean_dec(v_val_1972_);
return v___x_1973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object* v_query_1974_, lean_object* v_key_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l_Std_Http_URI_Query_get(v_query_1974_, v_key_1975_);
lean_dec_ref(v_query_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object* v_query_1977_, lean_object* v_key_1978_, lean_object* v_default_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Std_Http_URI_Query_get(v_query_1977_, v_key_1978_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_inc_ref(v_default_1979_);
return v_default_1979_;
}
else
{
lean_object* v_val_1981_; 
v_val_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_val_1981_);
lean_dec_ref_known(v___x_1980_, 1);
return v_val_1981_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object* v_query_1982_, lean_object* v_key_1983_, lean_object* v_default_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Std_Http_URI_Query_getD(v_query_1982_, v_key_1983_, v_default_1984_);
lean_dec_ref(v_default_1984_);
lean_dec_ref(v_query_1982_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object* v_query_1986_, lean_object* v_key_1987_, lean_object* v_value_1988_){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
lean_inc_ref(v_key_1987_);
v___x_1989_ = l_Std_Http_URI_Query_erase(v_query_1986_, v_key_1987_);
v___x_1990_ = l_Std_Http_URI_Query_insert(v___x_1989_, v_key_1987_, v_value_1988_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object* v_query_1991_, lean_object* v_key_1992_, lean_object* v_value_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Std_Http_URI_Query_set(v_query_1991_, v_key_1992_, v_value_1993_);
lean_dec_ref(v_query_1991_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t v_sz_1995_, size_t v_i_1996_, lean_object* v_bs_1997_){
_start:
{
uint8_t v___x_1998_; 
v___x_1998_ = lean_usize_dec_lt(v_i_1996_, v_sz_1995_);
if (v___x_1998_ == 0)
{
return v_bs_1997_;
}
else
{
lean_object* v_v_1999_; lean_object* v_fst_2000_; lean_object* v_snd_2001_; lean_object* v___x_2002_; lean_object* v_bs_x27_2003_; lean_object* v___x_2004_; size_t v___x_2005_; size_t v___x_2006_; lean_object* v___x_2007_; 
v_v_1999_ = lean_array_uget_borrowed(v_bs_1997_, v_i_1996_);
v_fst_2000_ = lean_ctor_get(v_v_1999_, 0);
lean_inc(v_fst_2000_);
v_snd_2001_ = lean_ctor_get(v_v_1999_, 1);
lean_inc(v_snd_2001_);
v___x_2002_ = lean_unsigned_to_nat(0u);
v_bs_x27_2003_ = lean_array_uset(v_bs_1997_, v_i_1996_, v___x_2002_);
v___x_2004_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2000_, v_snd_2001_);
v___x_2005_ = ((size_t)1ULL);
v___x_2006_ = lean_usize_add(v_i_1996_, v___x_2005_);
v___x_2007_ = lean_array_uset(v_bs_x27_2003_, v_i_1996_, v___x_2004_);
v_i_1996_ = v___x_2006_;
v_bs_1997_ = v___x_2007_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object* v_sz_2009_, lean_object* v_i_2010_, lean_object* v_bs_2011_){
_start:
{
size_t v_sz_boxed_2012_; size_t v_i_boxed_2013_; lean_object* v_res_2014_; 
v_sz_boxed_2012_ = lean_unbox_usize(v_sz_2009_);
lean_dec(v_sz_2009_);
v_i_boxed_2013_ = lean_unbox_usize(v_i_2010_);
lean_dec(v_i_2010_);
v_res_2014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_boxed_2012_, v_i_boxed_2013_, v_bs_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object* v_query_2016_){
_start:
{
size_t v_sz_2017_; size_t v___x_2018_; lean_object* v_params_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v_sz_2017_ = lean_array_size(v_query_2016_);
v___x_2018_ = ((size_t)0ULL);
v_params_2019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_2017_, v___x_2018_, v_query_2016_);
v___x_2020_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2021_ = lean_array_to_list(v_params_2019_);
v___x_2022_ = l_String_intercalate(v___x_2020_, v___x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object* v_x_2024_){
_start:
{
lean_object* v_fst_2025_; lean_object* v_snd_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_fst_2025_ = lean_ctor_get(v_x_2024_, 0);
lean_inc(v_fst_2025_);
v_snd_2026_ = lean_ctor_get(v_x_2024_, 1);
lean_inc(v_snd_2026_);
lean_dec_ref(v_x_2024_);
v___x_2027_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
v___x_2028_ = l_Std_Http_URI_Query_insert(v___x_2027_, v_fst_2025_, v_snd_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object* v_x_2031_, lean_object* v_q_2032_){
_start:
{
lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2035_; 
v_fst_2033_ = lean_ctor_get(v_x_2031_, 0);
lean_inc(v_fst_2033_);
v_snd_2034_ = lean_ctor_get(v_x_2031_, 1);
lean_inc(v_snd_2034_);
lean_dec_ref(v_x_2031_);
v___x_2035_ = l_Std_Http_URI_Query_insert(v_q_2032_, v_fst_2033_, v_snd_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object* v_x_2038_){
_start:
{
lean_object* v_fst_2039_; lean_object* v_snd_2040_; lean_object* v___x_2041_; 
v_fst_2039_ = lean_ctor_get(v_x_2038_, 0);
lean_inc(v_fst_2039_);
v_snd_2040_ = lean_ctor_get(v_x_2038_, 1);
lean_inc(v_snd_2040_);
lean_dec_ref(v_x_2038_);
v___x_2041_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2039_, v_snd_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object* v___f_2043_, lean_object* v_q_2044_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; 
v___x_2045_ = lean_array_get_size(v_q_2044_);
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = lean_nat_dec_eq(v___x_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v_encodedParams_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2048_ = lean_array_to_list(v_q_2044_);
v___x_2049_ = lean_box(0);
v_encodedParams_2050_ = l_List_mapTR_loop___redArg(v___f_2043_, v___x_2048_, v___x_2049_);
v___x_2051_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2052_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2053_ = l_String_intercalate(v___x_2052_, v_encodedParams_2050_);
v___x_2054_ = lean_string_append(v___x_2051_, v___x_2053_);
lean_dec_ref(v___x_2053_);
return v___x_2054_;
}
else
{
lean_object* v___x_2055_; 
lean_dec_ref(v_q_2044_);
lean_dec_ref(v___f_2043_);
v___x_2055_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2055_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
if (lean_obj_tag(v_a_2060_) == 0)
{
lean_object* v___x_2062_; 
v___x_2062_ = l_List_reverse___redArg(v_a_2061_);
return v___x_2062_;
}
else
{
lean_object* v_head_2063_; lean_object* v_tail_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2075_; 
v_head_2063_ = lean_ctor_get(v_a_2060_, 0);
v_tail_2064_ = lean_ctor_get(v_a_2060_, 1);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_a_2060_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2066_ = v_a_2060_;
v_isShared_2067_ = v_isSharedCheck_2075_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_tail_2064_);
lean_inc(v_head_2063_);
lean_dec(v_a_2060_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2075_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v_fst_2068_; lean_object* v_snd_2069_; lean_object* v___x_2070_; lean_object* v___x_2072_; 
v_fst_2068_ = lean_ctor_get(v_head_2063_, 0);
lean_inc(v_fst_2068_);
v_snd_2069_ = lean_ctor_get(v_head_2063_, 1);
lean_inc(v_snd_2069_);
lean_dec(v_head_2063_);
v___x_2070_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2068_, v_snd_2069_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 1, v_a_2061_);
lean_ctor_set(v___x_2066_, 0, v___x_2070_);
v___x_2072_ = v___x_2066_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2070_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_a_2061_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
v_a_2060_ = v_tail_2064_;
v_a_2061_ = v___x_2072_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object* v_x_2076_){
_start:
{
if (lean_obj_tag(v_x_2076_) == 0)
{
lean_object* v___x_2077_; 
v___x_2077_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2077_;
}
else
{
lean_object* v_val_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v_val_2078_ = lean_ctor_get(v_x_2076_, 0);
lean_inc(v_val_2078_);
lean_dec_ref_known(v_x_2076_, 1);
v___x_2079_ = lean_array_get_size(v_val_2078_);
v___x_2080_ = lean_unsigned_to_nat(0u);
v___x_2081_ = lean_nat_dec_eq(v___x_2079_, v___x_2080_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v_encodedParams_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2082_ = lean_array_to_list(v_val_2078_);
v___x_2083_ = lean_box(0);
v_encodedParams_2084_ = l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(v___x_2082_, v___x_2083_);
v___x_2085_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2086_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2087_ = l_String_intercalate(v___x_2086_, v_encodedParams_2084_);
v___x_2088_ = lean_string_append(v___x_2085_, v___x_2087_);
lean_dec_ref(v___x_2087_);
return v___x_2088_;
}
else
{
lean_object* v___x_2089_; 
lean_dec(v_val_2078_);
v___x_2089_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
return v___x_2089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object* v_x_2090_, lean_object* v_x_2091_){
_start:
{
if (lean_obj_tag(v_x_2090_) == 0)
{
lean_object* v___x_2092_; 
v___x_2092_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2092_;
}
else
{
lean_object* v_val_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_val_2093_ = lean_ctor_get(v_x_2090_, 0);
lean_inc(v_val_2093_);
lean_dec_ref_known(v_x_2090_, 1);
v___x_2094_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2095_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_val_2093_);
v___x_2096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = l_Repr_addAppParen(v___x_2096_, v_x_2091_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object* v_x_2098_, lean_object* v_x_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_x_2098_, v_x_2099_);
lean_dec(v_x_2099_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object* v_x_2101_, lean_object* v_x_2102_){
_start:
{
if (lean_obj_tag(v_x_2101_) == 0)
{
lean_object* v___x_2103_; 
v___x_2103_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2103_;
}
else
{
lean_object* v_val_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v_val_2104_ = lean_ctor_get(v_x_2101_, 0);
lean_inc(v_val_2104_);
lean_dec_ref_known(v_x_2101_, 1);
v___x_2105_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2106_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v_val_2104_);
v___x_2107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = l_Repr_addAppParen(v___x_2107_, v_x_2102_);
return v___x_2108_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_x_2109_, v_x_2110_);
lean_dec(v_x_2110_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object* v_x_2112_, lean_object* v_x_2113_){
_start:
{
if (lean_obj_tag(v_x_2112_) == 0)
{
lean_object* v___x_2114_; 
v___x_2114_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2114_;
}
else
{
lean_object* v_val_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2126_; 
v_val_2115_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2117_ = v_x_2112_;
v_isShared_2118_ = v_isSharedCheck_2126_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_val_2115_);
lean_dec(v_x_2112_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2126_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2122_; 
v___x_2119_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2120_ = l_String_quote(v_val_2115_);
if (v_isShared_2118_ == 0)
{
lean_ctor_set_tag(v___x_2117_, 3);
lean_ctor_set(v___x_2117_, 0, v___x_2120_);
v___x_2122_ = v___x_2117_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2120_);
v___x_2122_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2119_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = l_Repr_addAppParen(v___x_2123_, v_x_2113_);
return v___x_2124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object* v_x_2127_, lean_object* v_x_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_x_2127_, v_x_2128_);
lean_dec(v_x_2128_);
return v_res_2129_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = lean_unsigned_to_nat(10u);
v___x_2140_ = lean_nat_to_int(v___x_2139_);
return v___x_2140_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_unsigned_to_nat(13u);
v___x_2145_ = lean_nat_to_int(v___x_2144_);
return v___x_2145_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_unsigned_to_nat(9u);
v___x_2153_ = lean_nat_to_int(v___x_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object* v_x_2157_){
_start:
{
lean_object* v_scheme_2158_; lean_object* v_authority_2159_; lean_object* v_path_2160_; lean_object* v_query_2161_; lean_object* v_fragment_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v_scheme_2158_ = lean_ctor_get(v_x_2157_, 0);
lean_inc_ref(v_scheme_2158_);
v_authority_2159_ = lean_ctor_get(v_x_2157_, 1);
lean_inc(v_authority_2159_);
v_path_2160_ = lean_ctor_get(v_x_2157_, 2);
lean_inc_ref(v_path_2160_);
v_query_2161_ = lean_ctor_get(v_x_2157_, 3);
lean_inc(v_query_2161_);
v_fragment_2162_ = lean_ctor_get(v_x_2157_, 4);
lean_inc(v_fragment_2162_);
lean_dec_ref(v_x_2157_);
v___x_2163_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2164_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2165_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2166_ = l_String_quote(v_scheme_2158_);
v___x_2167_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2165_);
lean_ctor_set(v___x_2168_, 1, v___x_2167_);
v___x_2169_ = 0;
v___x_2170_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*1, v___x_2169_);
v___x_2171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2164_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_2173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = lean_box(1);
v___x_2175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2173_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__6));
v___x_2177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2175_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
lean_ctor_set(v___x_2178_, 1, v___x_2163_);
v___x_2179_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_2159_, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2179_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
lean_ctor_set_uint8(v___x_2183_, sizeof(void*)*1, v___x_2169_);
v___x_2184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2178_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2172_);
v___x_2186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
lean_ctor_set(v___x_2186_, 1, v___x_2174_);
v___x_2187_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_2188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
lean_ctor_set(v___x_2189_, 1, v___x_2163_);
v___x_2190_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_2191_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_2160_);
v___x_2192_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
lean_ctor_set_uint8(v___x_2193_, sizeof(void*)*1, v___x_2169_);
v___x_2194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2189_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
lean_ctor_set(v___x_2195_, 1, v___x_2172_);
v___x_2196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
lean_ctor_set(v___x_2196_, 1, v___x_2174_);
v___x_2197_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_2198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
lean_ctor_set(v___x_2199_, 1, v___x_2163_);
v___x_2200_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_2201_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_2161_, v___x_2180_);
v___x_2202_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___x_2203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
lean_ctor_set_uint8(v___x_2203_, sizeof(void*)*1, v___x_2169_);
v___x_2204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2199_);
lean_ctor_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
lean_ctor_set(v___x_2205_, 1, v___x_2172_);
v___x_2206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
lean_ctor_set(v___x_2206_, 1, v___x_2174_);
v___x_2207_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_2208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2206_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
v___x_2209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
lean_ctor_set(v___x_2209_, 1, v___x_2163_);
v___x_2210_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_2211_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_2162_, v___x_2180_);
v___x_2212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
lean_ctor_set_uint8(v___x_2213_, sizeof(void*)*1, v___x_2169_);
v___x_2214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2209_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_2216_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_2217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
lean_ctor_set(v___x_2217_, 1, v___x_2214_);
v___x_2218_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_2219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2217_);
lean_ctor_set(v___x_2219_, 1, v___x_2218_);
v___x_2220_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2215_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
lean_ctor_set_uint8(v___x_2221_, sizeof(void*)*1, v___x_2169_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object* v_x_2222_, lean_object* v_prec_2223_){
_start:
{
lean_object* v___x_2224_; 
v___x_2224_ = l_Std_Http_instReprURI_repr___redArg(v_x_2222_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object* v_x_2225_, lean_object* v_prec_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Std_Http_instReprURI_repr(v_x_2225_, v_prec_2226_);
lean_dec(v_prec_2226_);
return v_res_2227_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object* v_x_2236_, lean_object* v_x_2237_){
_start:
{
if (lean_obj_tag(v_x_2236_) == 0)
{
if (lean_obj_tag(v_x_2237_) == 0)
{
uint8_t v___x_2238_; 
v___x_2238_ = 1;
return v___x_2238_;
}
else
{
uint8_t v___x_2239_; 
v___x_2239_ = 0;
return v___x_2239_;
}
}
else
{
if (lean_obj_tag(v_x_2237_) == 0)
{
uint8_t v___x_2240_; 
v___x_2240_ = 0;
return v___x_2240_;
}
else
{
lean_object* v_val_2241_; lean_object* v_val_2242_; uint8_t v___x_2243_; 
v_val_2241_ = lean_ctor_get(v_x_2236_, 0);
v_val_2242_ = lean_ctor_get(v_x_2237_, 0);
v___x_2243_ = l_Std_Http_URI_instBEqAuthority_beq(v_val_2241_, v_val_2242_);
return v___x_2243_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
uint8_t v_res_2246_; lean_object* v_r_2247_; 
v_res_2246_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_x_2244_, v_x_2245_);
lean_dec(v_x_2245_);
lean_dec(v_x_2244_);
v_r_2247_ = lean_box(v_res_2246_);
return v_r_2247_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object* v_x_2248_, lean_object* v_x_2249_){
_start:
{
if (lean_obj_tag(v_x_2248_) == 0)
{
if (lean_obj_tag(v_x_2249_) == 0)
{
uint8_t v___x_2250_; 
v___x_2250_ = 1;
return v___x_2250_;
}
else
{
uint8_t v___x_2251_; 
v___x_2251_ = 0;
return v___x_2251_;
}
}
else
{
if (lean_obj_tag(v_x_2249_) == 0)
{
uint8_t v___x_2252_; 
v___x_2252_ = 0;
return v___x_2252_;
}
else
{
lean_object* v_val_2253_; lean_object* v_val_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; 
v_val_2253_ = lean_ctor_get(v_x_2248_, 0);
v_val_2254_ = lean_ctor_get(v_x_2249_, 0);
v___x_2255_ = lean_array_get_size(v_val_2253_);
v___x_2256_ = lean_array_get_size(v_val_2254_);
v___x_2257_ = lean_nat_dec_eq(v___x_2255_, v___x_2256_);
if (v___x_2257_ == 0)
{
return v___x_2257_;
}
else
{
uint8_t v___x_2258_; 
v___x_2258_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_val_2253_, v_val_2254_, v___x_2255_);
return v___x_2258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object* v_x_2259_, lean_object* v_x_2260_){
_start:
{
uint8_t v_res_2261_; lean_object* v_r_2262_; 
v_res_2261_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_x_2259_, v_x_2260_);
lean_dec(v_x_2260_);
lean_dec(v_x_2259_);
v_r_2262_ = lean_box(v_res_2261_);
return v_r_2262_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object* v_x_2263_, lean_object* v_x_2264_){
_start:
{
if (lean_obj_tag(v_x_2263_) == 0)
{
if (lean_obj_tag(v_x_2264_) == 0)
{
uint8_t v___x_2265_; 
v___x_2265_ = 1;
return v___x_2265_;
}
else
{
uint8_t v___x_2266_; 
v___x_2266_ = 0;
return v___x_2266_;
}
}
else
{
if (lean_obj_tag(v_x_2264_) == 0)
{
uint8_t v___x_2267_; 
v___x_2267_ = 0;
return v___x_2267_;
}
else
{
lean_object* v_val_2268_; lean_object* v_val_2269_; uint8_t v___x_2270_; 
v_val_2268_ = lean_ctor_get(v_x_2263_, 0);
v_val_2269_ = lean_ctor_get(v_x_2264_, 0);
v___x_2270_ = lean_string_dec_eq(v_val_2268_, v_val_2269_);
return v___x_2270_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object* v_x_2271_, lean_object* v_x_2272_){
_start:
{
uint8_t v_res_2273_; lean_object* v_r_2274_; 
v_res_2273_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_x_2271_, v_x_2272_);
lean_dec(v_x_2272_);
lean_dec(v_x_2271_);
v_r_2274_ = lean_box(v_res_2273_);
return v_r_2274_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object* v_x_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v_scheme_2277_; lean_object* v_authority_2278_; lean_object* v_path_2279_; lean_object* v_query_2280_; lean_object* v_fragment_2281_; lean_object* v_scheme_2282_; lean_object* v_authority_2283_; lean_object* v_path_2284_; lean_object* v_query_2285_; lean_object* v_fragment_2286_; uint8_t v___x_2287_; 
v_scheme_2277_ = lean_ctor_get(v_x_2275_, 0);
v_authority_2278_ = lean_ctor_get(v_x_2275_, 1);
v_path_2279_ = lean_ctor_get(v_x_2275_, 2);
v_query_2280_ = lean_ctor_get(v_x_2275_, 3);
v_fragment_2281_ = lean_ctor_get(v_x_2275_, 4);
v_scheme_2282_ = lean_ctor_get(v_x_2276_, 0);
v_authority_2283_ = lean_ctor_get(v_x_2276_, 1);
v_path_2284_ = lean_ctor_get(v_x_2276_, 2);
v_query_2285_ = lean_ctor_get(v_x_2276_, 3);
v_fragment_2286_ = lean_ctor_get(v_x_2276_, 4);
v___x_2287_ = lean_string_dec_eq(v_scheme_2277_, v_scheme_2282_);
if (v___x_2287_ == 0)
{
return v___x_2287_;
}
else
{
uint8_t v___x_2288_; 
v___x_2288_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_2278_, v_authority_2283_);
if (v___x_2288_ == 0)
{
return v___x_2288_;
}
else
{
uint8_t v___x_2289_; 
v___x_2289_ = l_Std_Http_URI_instBEqPath_beq(v_path_2279_, v_path_2284_);
if (v___x_2289_ == 0)
{
return v___x_2289_;
}
else
{
uint8_t v___x_2290_; 
v___x_2290_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_2280_, v_query_2285_);
if (v___x_2290_ == 0)
{
return v___x_2290_;
}
else
{
uint8_t v___x_2291_; 
v___x_2291_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_2281_, v_fragment_2286_);
return v___x_2291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object* v_x_2292_, lean_object* v_x_2293_){
_start:
{
uint8_t v_res_2294_; lean_object* v_r_2295_; 
v_res_2294_ = l_Std_Http_instBEqURI_beq(v_x_2292_, v_x_2293_);
lean_dec_ref(v_x_2293_);
lean_dec_ref(v_x_2292_);
v_r_2295_ = lean_box(v_res_2294_);
return v_r_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__1(lean_object* v___f_2300_, lean_object* v_uri_2301_){
_start:
{
lean_object* v_scheme_2302_; lean_object* v_authority_2303_; lean_object* v_path_2304_; lean_object* v_query_2305_; lean_object* v_fragment_2306_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2310_; lean_object* v___y_2311_; lean_object* v___y_2319_; lean_object* v___y_2320_; lean_object* v___y_2329_; 
v_scheme_2302_ = lean_ctor_get(v_uri_2301_, 0);
lean_inc_ref(v_scheme_2302_);
v_authority_2303_ = lean_ctor_get(v_uri_2301_, 1);
lean_inc(v_authority_2303_);
v_path_2304_ = lean_ctor_get(v_uri_2301_, 2);
lean_inc_ref(v_path_2304_);
v_query_2305_ = lean_ctor_get(v_uri_2301_, 3);
lean_inc(v_query_2305_);
v_fragment_2306_ = lean_ctor_get(v_uri_2301_, 4);
lean_inc(v_fragment_2306_);
lean_dec_ref(v_uri_2301_);
if (lean_obj_tag(v_authority_2303_) == 0)
{
lean_object* v___x_2340_; 
v___x_2340_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2329_ = v___x_2340_;
goto v___jp_2328_;
}
else
{
lean_object* v_val_2341_; lean_object* v_userInfo_2342_; lean_object* v_host_2343_; lean_object* v_port_2344_; lean_object* v___x_2345_; lean_object* v___y_2347_; lean_object* v___y_2348_; lean_object* v___y_2349_; lean_object* v___y_2354_; lean_object* v___y_2355_; lean_object* v___y_2364_; 
v_val_2341_ = lean_ctor_get(v_authority_2303_, 0);
lean_inc(v_val_2341_);
lean_dec_ref_known(v_authority_2303_, 1);
v_userInfo_2342_ = lean_ctor_get(v_val_2341_, 0);
lean_inc(v_userInfo_2342_);
v_host_2343_ = lean_ctor_get(v_val_2341_, 1);
lean_inc_ref(v_host_2343_);
v_port_2344_ = lean_ctor_get(v_val_2341_, 2);
lean_inc(v_port_2344_);
lean_dec(v_val_2341_);
v___x_2345_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_2342_) == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2364_ = v___x_2374_;
goto v___jp_2363_;
}
else
{
lean_object* v_val_2375_; lean_object* v_password_2376_; 
v_val_2375_ = lean_ctor_get(v_userInfo_2342_, 0);
lean_inc(v_val_2375_);
lean_dec_ref_known(v_userInfo_2342_, 1);
v_password_2376_ = lean_ctor_get(v_val_2375_, 1);
if (lean_obj_tag(v_password_2376_) == 0)
{
lean_object* v_username_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v_username_2377_ = lean_ctor_get(v_val_2375_, 0);
lean_inc_ref(v_username_2377_);
lean_dec(v_val_2375_);
v___x_2378_ = lean_string_from_utf8_unchecked(v_username_2377_);
v___x_2379_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2380_ = lean_string_append(v___x_2378_, v___x_2379_);
v___y_2364_ = v___x_2380_;
goto v___jp_2363_;
}
else
{
lean_object* v_username_2381_; lean_object* v_val_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
lean_inc_ref(v_password_2376_);
v_username_2381_ = lean_ctor_get(v_val_2375_, 0);
lean_inc_ref(v_username_2381_);
lean_dec(v_val_2375_);
v_val_2382_ = lean_ctor_get(v_password_2376_, 0);
lean_inc(v_val_2382_);
lean_dec_ref_known(v_password_2376_, 1);
v___x_2383_ = lean_string_from_utf8_unchecked(v_username_2381_);
v___x_2384_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2385_ = lean_string_append(v___x_2383_, v___x_2384_);
v___x_2386_ = lean_string_from_utf8_unchecked(v_val_2382_);
v___x_2387_ = lean_string_append(v___x_2385_, v___x_2386_);
lean_dec_ref(v___x_2386_);
v___x_2388_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2389_ = lean_string_append(v___x_2387_, v___x_2388_);
v___y_2364_ = v___x_2389_;
goto v___jp_2363_;
}
}
v___jp_2346_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2350_ = lean_string_append(v___y_2348_, v___y_2347_);
lean_dec_ref(v___y_2347_);
v___x_2351_ = lean_string_append(v___x_2350_, v___y_2349_);
lean_dec_ref(v___y_2349_);
v___x_2352_ = lean_string_append(v___x_2345_, v___x_2351_);
lean_dec_ref(v___x_2351_);
v___y_2329_ = v___x_2352_;
goto v___jp_2328_;
}
v___jp_2353_:
{
switch(lean_obj_tag(v_port_2344_))
{
case 0:
{
lean_object* v___x_2356_; 
v___x_2356_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2347_ = v___y_2355_;
v___y_2348_ = v___y_2354_;
v___y_2349_ = v___x_2356_;
goto v___jp_2346_;
}
case 1:
{
lean_object* v___x_2357_; 
v___x_2357_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_2347_ = v___y_2355_;
v___y_2348_ = v___y_2354_;
v___y_2349_ = v___x_2357_;
goto v___jp_2346_;
}
default: 
{
uint16_t v_port_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v_port_2358_ = lean_ctor_get_uint16(v_port_2344_, 0);
lean_dec_ref_known(v_port_2344_, 0);
v___x_2359_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2360_ = lean_uint16_to_nat(v_port_2358_);
v___x_2361_ = l_Nat_reprFast(v___x_2360_);
v___x_2362_ = lean_string_append(v___x_2359_, v___x_2361_);
lean_dec_ref(v___x_2361_);
v___y_2347_ = v___y_2355_;
v___y_2348_ = v___y_2354_;
v___y_2349_ = v___x_2362_;
goto v___jp_2346_;
}
}
}
v___jp_2363_:
{
switch(lean_obj_tag(v_host_2343_))
{
case 0:
{
lean_object* v_name_2365_; 
v_name_2365_ = lean_ctor_get(v_host_2343_, 0);
lean_inc_ref(v_name_2365_);
lean_dec_ref_known(v_host_2343_, 1);
v___y_2354_ = v___y_2364_;
v___y_2355_ = v_name_2365_;
goto v___jp_2353_;
}
case 1:
{
lean_object* v_ipv4_2366_; lean_object* v___x_2367_; 
v_ipv4_2366_ = lean_ctor_get(v_host_2343_, 0);
lean_inc_ref(v_ipv4_2366_);
lean_dec_ref_known(v_host_2343_, 1);
v___x_2367_ = lean_uv_ntop_v4(v_ipv4_2366_);
lean_dec_ref(v_ipv4_2366_);
v___y_2354_ = v___y_2364_;
v___y_2355_ = v___x_2367_;
goto v___jp_2353_;
}
default: 
{
lean_object* v_ipv6_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v_ipv6_2368_ = lean_ctor_get(v_host_2343_, 0);
lean_inc_ref(v_ipv6_2368_);
lean_dec_ref_known(v_host_2343_, 1);
v___x_2369_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_2370_ = lean_uv_ntop_v6(v_ipv6_2368_);
lean_dec_ref(v_ipv6_2368_);
v___x_2371_ = lean_string_append(v___x_2369_, v___x_2370_);
lean_dec_ref(v___x_2370_);
v___x_2372_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_2373_ = lean_string_append(v___x_2371_, v___x_2372_);
v___y_2354_ = v___y_2364_;
v___y_2355_ = v___x_2373_;
goto v___jp_2353_;
}
}
}
}
v___jp_2307_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2312_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2313_ = lean_string_append(v_scheme_2302_, v___x_2312_);
v___x_2314_ = lean_string_append(v___x_2313_, v___y_2310_);
lean_dec_ref(v___y_2310_);
v___x_2315_ = lean_string_append(v___x_2314_, v___y_2309_);
lean_dec_ref(v___y_2309_);
v___x_2316_ = lean_string_append(v___x_2315_, v___y_2308_);
lean_dec_ref(v___y_2308_);
v___x_2317_ = lean_string_append(v___x_2316_, v___y_2311_);
lean_dec_ref(v___y_2311_);
return v___x_2317_;
}
v___jp_2318_:
{
lean_object* v_queryPart_2321_; 
v_queryPart_2321_ = l_Std_Http_URI_Query_formatOption(v_query_2305_);
if (lean_obj_tag(v_fragment_2306_) == 0)
{
lean_object* v___x_2322_; 
v___x_2322_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2308_ = v_queryPart_2321_;
v___y_2309_ = v___y_2320_;
v___y_2310_ = v___y_2319_;
v___y_2311_ = v___x_2322_;
goto v___jp_2307_;
}
else
{
lean_object* v_val_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_val_2323_ = lean_ctor_get(v_fragment_2306_, 0);
lean_inc(v_val_2323_);
lean_dec_ref_known(v_fragment_2306_, 1);
v___x_2324_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_2325_ = l_Std_Http_URI_EncodedFragment_encode(v_val_2323_);
v___x_2326_ = lean_string_from_utf8_unchecked(v___x_2325_);
v___x_2327_ = lean_string_append(v___x_2324_, v___x_2326_);
lean_dec_ref(v___x_2326_);
v___y_2308_ = v_queryPart_2321_;
v___y_2309_ = v___y_2320_;
v___y_2310_ = v___y_2319_;
v___y_2311_ = v___x_2327_;
goto v___jp_2307_;
}
}
v___jp_2328_:
{
lean_object* v_segments_2330_; uint8_t v_absolute_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; size_t v_sz_2334_; size_t v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v_result_2338_; 
v_segments_2330_ = lean_ctor_get(v_path_2304_, 0);
lean_inc_ref(v_segments_2330_);
v_absolute_2331_ = lean_ctor_get_uint8(v_path_2304_, sizeof(void*)*1);
lean_dec_ref(v_path_2304_);
v___x_2332_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_2333_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_2334_ = lean_array_size(v_segments_2330_);
v___x_2335_ = ((size_t)0ULL);
v___x_2336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2333_, v___f_2300_, v_sz_2334_, v___x_2335_, v_segments_2330_);
v___x_2337_ = lean_array_to_list(v___x_2336_);
v_result_2338_ = l_String_intercalate(v___x_2332_, v___x_2337_);
if (v_absolute_2331_ == 0)
{
v___y_2319_ = v___y_2329_;
v___y_2320_ = v_result_2338_;
goto v___jp_2318_;
}
else
{
lean_object* v___x_2339_; 
v___x_2339_ = lean_string_append(v___x_2332_, v_result_2338_);
lean_dec_ref(v_result_2338_);
v___y_2319_ = v___y_2329_;
v___y_2320_ = v___x_2339_;
goto v___jp_2318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object* v_b_2402_, lean_object* v_scheme_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Std_Http_URI_Scheme_ofString_x3f(v_scheme_2403_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v___x_2405_; 
lean_dec_ref(v_b_2402_);
v___x_2405_ = lean_box(0);
return v___x_2405_;
}
else
{
lean_object* v_userInfo_2406_; lean_object* v_host_2407_; lean_object* v_port_2408_; lean_object* v_pathSegments_2409_; lean_object* v_query_2410_; lean_object* v_fragment_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2426_; 
v_userInfo_2406_ = lean_ctor_get(v_b_2402_, 1);
v_host_2407_ = lean_ctor_get(v_b_2402_, 2);
v_port_2408_ = lean_ctor_get(v_b_2402_, 3);
v_pathSegments_2409_ = lean_ctor_get(v_b_2402_, 4);
v_query_2410_ = lean_ctor_get(v_b_2402_, 5);
v_fragment_2411_ = lean_ctor_get(v_b_2402_, 6);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_b_2402_);
if (v_isSharedCheck_2426_ == 0)
{
lean_object* v_unused_2427_; 
v_unused_2427_ = lean_ctor_get(v_b_2402_, 0);
lean_dec(v_unused_2427_);
v___x_2413_ = v_b_2402_;
v_isShared_2414_ = v_isSharedCheck_2426_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_fragment_2411_);
lean_inc(v_query_2410_);
lean_inc(v_pathSegments_2409_);
lean_inc(v_port_2408_);
lean_inc(v_host_2407_);
lean_inc(v_userInfo_2406_);
lean_dec(v_b_2402_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2426_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
lean_inc_ref(v___x_2404_);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 0, v___x_2404_);
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v_userInfo_2406_);
lean_ctor_set(v_reuseFailAlloc_2425_, 2, v_host_2407_);
lean_ctor_set(v_reuseFailAlloc_2425_, 3, v_port_2408_);
lean_ctor_set(v_reuseFailAlloc_2425_, 4, v_pathSegments_2409_);
lean_ctor_set(v_reuseFailAlloc_2425_, 5, v_query_2410_);
lean_ctor_set(v_reuseFailAlloc_2425_, 6, v_fragment_2411_);
v___x_2416_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2423_ == 0)
{
lean_object* v_unused_2424_; 
v_unused_2424_ = lean_ctor_get(v___x_2404_, 0);
lean_dec(v_unused_2424_);
v___x_2418_ = v___x_2404_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_dec(v___x_2404_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 0, v___x_2416_);
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object* v_msg_2428_){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = ((lean_object*)(l_Std_Http_URI_instInhabitedBuilder_default));
v___x_2430_ = lean_panic_fn_borrowed(v___x_2429_, v_msg_2428_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object* v_b_2432_, lean_object* v_scheme_2433_){
_start:
{
lean_object* v___x_2434_; 
lean_inc_ref(v_scheme_2433_);
v___x_2434_ = l_Std_Http_URI_Builder_setScheme_x3f(v_b_2432_, v_scheme_2433_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2435_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2436_ = ((lean_object*)(l_Std_Http_URI_Builder_setScheme_x21___closed__0));
v___x_2437_ = lean_unsigned_to_nat(687u);
v___x_2438_ = lean_unsigned_to_nat(14u);
v___x_2439_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_2440_ = l_String_quote(v_scheme_2433_);
v___x_2441_ = lean_string_append(v___x_2439_, v___x_2440_);
lean_dec_ref(v___x_2440_);
v___x_2442_ = l_mkPanicMessageWithDecl(v___x_2435_, v___x_2436_, v___x_2437_, v___x_2438_, v___x_2441_);
lean_dec_ref(v___x_2441_);
v___x_2443_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2442_);
return v___x_2443_;
}
else
{
lean_object* v_val_2444_; 
lean_dec_ref(v_scheme_2433_);
v_val_2444_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_val_2444_);
lean_dec_ref_known(v___x_2434_, 1);
return v_val_2444_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object* v_b_2445_, lean_object* v_username_2446_, lean_object* v_password_2447_){
_start:
{
lean_object* v_scheme_2448_; lean_object* v_host_2449_; lean_object* v_port_2450_; lean_object* v_pathSegments_2451_; lean_object* v_query_2452_; lean_object* v_fragment_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2476_; 
v_scheme_2448_ = lean_ctor_get(v_b_2445_, 0);
v_host_2449_ = lean_ctor_get(v_b_2445_, 2);
v_port_2450_ = lean_ctor_get(v_b_2445_, 3);
v_pathSegments_2451_ = lean_ctor_get(v_b_2445_, 4);
v_query_2452_ = lean_ctor_get(v_b_2445_, 5);
v_fragment_2453_ = lean_ctor_get(v_b_2445_, 6);
v_isSharedCheck_2476_ = !lean_is_exclusive(v_b_2445_);
if (v_isSharedCheck_2476_ == 0)
{
lean_object* v_unused_2477_; 
v_unused_2477_ = lean_ctor_get(v_b_2445_, 1);
lean_dec(v_unused_2477_);
v___x_2455_ = v_b_2445_;
v_isShared_2456_ = v_isSharedCheck_2476_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_fragment_2453_);
lean_inc(v_query_2452_);
lean_inc(v_pathSegments_2451_);
lean_inc(v_port_2450_);
lean_inc(v_host_2449_);
lean_inc(v_scheme_2448_);
lean_dec(v_b_2445_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2476_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___y_2458_; lean_object* v___x_2463_; 
v___x_2463_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_2446_);
if (lean_obj_tag(v_password_2447_) == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_box(0);
v___x_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___y_2458_ = v___x_2465_;
goto v___jp_2457_;
}
else
{
lean_object* v_val_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2475_; 
v_val_2466_ = lean_ctor_get(v_password_2447_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_password_2447_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2468_ = v_password_2447_;
v_isShared_2469_ = v_isSharedCheck_2475_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_val_2466_);
lean_dec(v_password_2447_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2475_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2470_; lean_object* v___x_2472_; 
v___x_2470_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_2466_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2470_);
v___x_2472_ = v___x_2468_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2463_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
v___y_2458_ = v___x_2473_;
goto v___jp_2457_;
}
}
}
v___jp_2457_:
{
lean_object* v___x_2459_; lean_object* v___x_2461_; 
v___x_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___y_2458_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 1, v___x_2459_);
v___x_2461_ = v___x_2455_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_scheme_2448_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v___x_2459_);
lean_ctor_set(v_reuseFailAlloc_2462_, 2, v_host_2449_);
lean_ctor_set(v_reuseFailAlloc_2462_, 3, v_port_2450_);
lean_ctor_set(v_reuseFailAlloc_2462_, 4, v_pathSegments_2451_);
lean_ctor_set(v_reuseFailAlloc_2462_, 5, v_query_2452_);
lean_ctor_set(v_reuseFailAlloc_2462_, 6, v_fragment_2453_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object* v_b_2478_, lean_object* v_name_2479_){
_start:
{
lean_object* v___x_2480_; 
v___x_2480_ = l_Std_Http_URI_DomainName_ofString_x3f(v_name_2479_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v___x_2481_; 
lean_dec_ref(v_b_2478_);
v___x_2481_ = lean_box(0);
return v___x_2481_;
}
else
{
lean_object* v_val_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2505_; 
v_val_2482_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2484_ = v___x_2480_;
v_isShared_2485_ = v_isSharedCheck_2505_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_val_2482_);
lean_dec(v___x_2480_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2505_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v_scheme_2486_; lean_object* v_userInfo_2487_; lean_object* v_port_2488_; lean_object* v_pathSegments_2489_; lean_object* v_query_2490_; lean_object* v_fragment_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2503_; 
v_scheme_2486_ = lean_ctor_get(v_b_2478_, 0);
v_userInfo_2487_ = lean_ctor_get(v_b_2478_, 1);
v_port_2488_ = lean_ctor_get(v_b_2478_, 3);
v_pathSegments_2489_ = lean_ctor_get(v_b_2478_, 4);
v_query_2490_ = lean_ctor_get(v_b_2478_, 5);
v_fragment_2491_ = lean_ctor_get(v_b_2478_, 6);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_b_2478_);
if (v_isSharedCheck_2503_ == 0)
{
lean_object* v_unused_2504_; 
v_unused_2504_ = lean_ctor_get(v_b_2478_, 2);
lean_dec(v_unused_2504_);
v___x_2493_ = v_b_2478_;
v_isShared_2494_ = v_isSharedCheck_2503_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_fragment_2491_);
lean_inc(v_query_2490_);
lean_inc(v_pathSegments_2489_);
lean_inc(v_port_2488_);
lean_inc(v_userInfo_2487_);
lean_inc(v_scheme_2486_);
lean_dec(v_b_2478_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2503_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2495_; lean_object* v___x_2497_; 
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v_val_2482_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 0, v___x_2495_);
v___x_2497_ = v___x_2484_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v___x_2495_);
v___x_2497_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2499_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 2, v___x_2497_);
v___x_2499_ = v___x_2493_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_scheme_2486_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v_userInfo_2487_);
lean_ctor_set(v_reuseFailAlloc_2501_, 2, v___x_2497_);
lean_ctor_set(v_reuseFailAlloc_2501_, 3, v_port_2488_);
lean_ctor_set(v_reuseFailAlloc_2501_, 4, v_pathSegments_2489_);
lean_ctor_set(v_reuseFailAlloc_2501_, 5, v_query_2490_);
lean_ctor_set(v_reuseFailAlloc_2501_, 6, v_fragment_2491_);
v___x_2499_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
return v___x_2500_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object* v_b_2508_, lean_object* v_name_2509_){
_start:
{
lean_object* v___x_2510_; 
lean_inc_ref(v_name_2509_);
v___x_2510_ = l_Std_Http_URI_Builder_setHost_x3f(v_b_2508_, v_name_2509_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2511_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2512_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__0));
v___x_2513_ = lean_unsigned_to_nat(716u);
v___x_2514_ = lean_unsigned_to_nat(14u);
v___x_2515_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__1));
v___x_2516_ = l_String_quote(v_name_2509_);
v___x_2517_ = lean_string_append(v___x_2515_, v___x_2516_);
lean_dec_ref(v___x_2516_);
v___x_2518_ = l_mkPanicMessageWithDecl(v___x_2511_, v___x_2512_, v___x_2513_, v___x_2514_, v___x_2517_);
lean_dec_ref(v___x_2517_);
v___x_2519_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2518_);
return v___x_2519_;
}
else
{
lean_object* v_val_2520_; 
lean_dec_ref(v_name_2509_);
v_val_2520_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_val_2520_);
lean_dec_ref_known(v___x_2510_, 1);
return v_val_2520_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object* v_b_2521_, lean_object* v_addr_2522_){
_start:
{
lean_object* v_scheme_2523_; lean_object* v_userInfo_2524_; lean_object* v_port_2525_; lean_object* v_pathSegments_2526_; lean_object* v_query_2527_; lean_object* v_fragment_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2537_; 
v_scheme_2523_ = lean_ctor_get(v_b_2521_, 0);
v_userInfo_2524_ = lean_ctor_get(v_b_2521_, 1);
v_port_2525_ = lean_ctor_get(v_b_2521_, 3);
v_pathSegments_2526_ = lean_ctor_get(v_b_2521_, 4);
v_query_2527_ = lean_ctor_get(v_b_2521_, 5);
v_fragment_2528_ = lean_ctor_get(v_b_2521_, 6);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_b_2521_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; 
v_unused_2538_ = lean_ctor_get(v_b_2521_, 2);
lean_dec(v_unused_2538_);
v___x_2530_ = v_b_2521_;
v_isShared_2531_ = v_isSharedCheck_2537_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_fragment_2528_);
lean_inc(v_query_2527_);
lean_inc(v_pathSegments_2526_);
lean_inc(v_port_2525_);
lean_inc(v_userInfo_2524_);
lean_inc(v_scheme_2523_);
lean_dec(v_b_2521_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2537_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2532_, 0, v_addr_2522_);
v___x_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 2, v___x_2533_);
v___x_2535_ = v___x_2530_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_scheme_2523_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v_userInfo_2524_);
lean_ctor_set(v_reuseFailAlloc_2536_, 2, v___x_2533_);
lean_ctor_set(v_reuseFailAlloc_2536_, 3, v_port_2525_);
lean_ctor_set(v_reuseFailAlloc_2536_, 4, v_pathSegments_2526_);
lean_ctor_set(v_reuseFailAlloc_2536_, 5, v_query_2527_);
lean_ctor_set(v_reuseFailAlloc_2536_, 6, v_fragment_2528_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object* v_b_2539_, lean_object* v_addr_2540_){
_start:
{
lean_object* v_scheme_2541_; lean_object* v_userInfo_2542_; lean_object* v_port_2543_; lean_object* v_pathSegments_2544_; lean_object* v_query_2545_; lean_object* v_fragment_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2555_; 
v_scheme_2541_ = lean_ctor_get(v_b_2539_, 0);
v_userInfo_2542_ = lean_ctor_get(v_b_2539_, 1);
v_port_2543_ = lean_ctor_get(v_b_2539_, 3);
v_pathSegments_2544_ = lean_ctor_get(v_b_2539_, 4);
v_query_2545_ = lean_ctor_get(v_b_2539_, 5);
v_fragment_2546_ = lean_ctor_get(v_b_2539_, 6);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_b_2539_);
if (v_isSharedCheck_2555_ == 0)
{
lean_object* v_unused_2556_; 
v_unused_2556_ = lean_ctor_get(v_b_2539_, 2);
lean_dec(v_unused_2556_);
v___x_2548_ = v_b_2539_;
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_fragment_2546_);
lean_inc(v_query_2545_);
lean_inc(v_pathSegments_2544_);
lean_inc(v_port_2543_);
lean_inc(v_userInfo_2542_);
lean_inc(v_scheme_2541_);
lean_dec(v_b_2539_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2553_; 
v___x_2550_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_addr_2540_);
v___x_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 2, v___x_2551_);
v___x_2553_ = v___x_2548_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_scheme_2541_);
lean_ctor_set(v_reuseFailAlloc_2554_, 1, v_userInfo_2542_);
lean_ctor_set(v_reuseFailAlloc_2554_, 2, v___x_2551_);
lean_ctor_set(v_reuseFailAlloc_2554_, 3, v_port_2543_);
lean_ctor_set(v_reuseFailAlloc_2554_, 4, v_pathSegments_2544_);
lean_ctor_set(v_reuseFailAlloc_2554_, 5, v_query_2545_);
lean_ctor_set(v_reuseFailAlloc_2554_, 6, v_fragment_2546_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object* v_b_2557_, uint16_t v_port_2558_){
_start:
{
lean_object* v_scheme_2559_; lean_object* v_userInfo_2560_; lean_object* v_host_2561_; lean_object* v_pathSegments_2562_; lean_object* v_query_2563_; lean_object* v_fragment_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2572_; 
v_scheme_2559_ = lean_ctor_get(v_b_2557_, 0);
v_userInfo_2560_ = lean_ctor_get(v_b_2557_, 1);
v_host_2561_ = lean_ctor_get(v_b_2557_, 2);
v_pathSegments_2562_ = lean_ctor_get(v_b_2557_, 4);
v_query_2563_ = lean_ctor_get(v_b_2557_, 5);
v_fragment_2564_ = lean_ctor_get(v_b_2557_, 6);
v_isSharedCheck_2572_ = !lean_is_exclusive(v_b_2557_);
if (v_isSharedCheck_2572_ == 0)
{
lean_object* v_unused_2573_; 
v_unused_2573_ = lean_ctor_get(v_b_2557_, 3);
lean_dec(v_unused_2573_);
v___x_2566_ = v_b_2557_;
v_isShared_2567_ = v_isSharedCheck_2572_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_fragment_2564_);
lean_inc(v_query_2563_);
lean_inc(v_pathSegments_2562_);
lean_inc(v_host_2561_);
lean_inc(v_userInfo_2560_);
lean_inc(v_scheme_2559_);
lean_dec(v_b_2557_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2572_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2570_; 
v___x_2568_ = lean_alloc_ctor(2, 0, 2);
lean_ctor_set_uint16(v___x_2568_, 0, v_port_2558_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 3, v___x_2568_);
v___x_2570_ = v___x_2566_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_scheme_2559_);
lean_ctor_set(v_reuseFailAlloc_2571_, 1, v_userInfo_2560_);
lean_ctor_set(v_reuseFailAlloc_2571_, 2, v_host_2561_);
lean_ctor_set(v_reuseFailAlloc_2571_, 3, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2571_, 4, v_pathSegments_2562_);
lean_ctor_set(v_reuseFailAlloc_2571_, 5, v_query_2563_);
lean_ctor_set(v_reuseFailAlloc_2571_, 6, v_fragment_2564_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object* v_b_2574_, lean_object* v_port_2575_){
_start:
{
uint16_t v_port_boxed_2576_; lean_object* v_res_2577_; 
v_port_boxed_2576_ = lean_unbox(v_port_2575_);
v_res_2577_ = l_Std_Http_URI_Builder_setPort(v_b_2574_, v_port_boxed_2576_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object* v_b_2578_, lean_object* v_segments_2579_){
_start:
{
lean_object* v_scheme_2580_; lean_object* v_userInfo_2581_; lean_object* v_host_2582_; lean_object* v_port_2583_; lean_object* v_query_2584_; lean_object* v_fragment_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
v_scheme_2580_ = lean_ctor_get(v_b_2578_, 0);
v_userInfo_2581_ = lean_ctor_get(v_b_2578_, 1);
v_host_2582_ = lean_ctor_get(v_b_2578_, 2);
v_port_2583_ = lean_ctor_get(v_b_2578_, 3);
v_query_2584_ = lean_ctor_get(v_b_2578_, 5);
v_fragment_2585_ = lean_ctor_get(v_b_2578_, 6);
v_isSharedCheck_2592_ = !lean_is_exclusive(v_b_2578_);
if (v_isSharedCheck_2592_ == 0)
{
lean_object* v_unused_2593_; 
v_unused_2593_ = lean_ctor_get(v_b_2578_, 4);
lean_dec(v_unused_2593_);
v___x_2587_ = v_b_2578_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_fragment_2585_);
lean_inc(v_query_2584_);
lean_inc(v_port_2583_);
lean_inc(v_host_2582_);
lean_inc(v_userInfo_2581_);
lean_inc(v_scheme_2580_);
lean_dec(v_b_2578_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 4, v_segments_2579_);
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_scheme_2580_);
lean_ctor_set(v_reuseFailAlloc_2591_, 1, v_userInfo_2581_);
lean_ctor_set(v_reuseFailAlloc_2591_, 2, v_host_2582_);
lean_ctor_set(v_reuseFailAlloc_2591_, 3, v_port_2583_);
lean_ctor_set(v_reuseFailAlloc_2591_, 4, v_segments_2579_);
lean_ctor_set(v_reuseFailAlloc_2591_, 5, v_query_2584_);
lean_ctor_set(v_reuseFailAlloc_2591_, 6, v_fragment_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object* v_b_2594_, lean_object* v_segment_2595_){
_start:
{
lean_object* v_scheme_2596_; lean_object* v_userInfo_2597_; lean_object* v_host_2598_; lean_object* v_port_2599_; lean_object* v_pathSegments_2600_; lean_object* v_query_2601_; lean_object* v_fragment_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2610_; 
v_scheme_2596_ = lean_ctor_get(v_b_2594_, 0);
v_userInfo_2597_ = lean_ctor_get(v_b_2594_, 1);
v_host_2598_ = lean_ctor_get(v_b_2594_, 2);
v_port_2599_ = lean_ctor_get(v_b_2594_, 3);
v_pathSegments_2600_ = lean_ctor_get(v_b_2594_, 4);
v_query_2601_ = lean_ctor_get(v_b_2594_, 5);
v_fragment_2602_ = lean_ctor_get(v_b_2594_, 6);
v_isSharedCheck_2610_ = !lean_is_exclusive(v_b_2594_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2604_ = v_b_2594_;
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_fragment_2602_);
lean_inc(v_query_2601_);
lean_inc(v_pathSegments_2600_);
lean_inc(v_port_2599_);
lean_inc(v_host_2598_);
lean_inc(v_userInfo_2597_);
lean_inc(v_scheme_2596_);
lean_dec(v_b_2594_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2606_; lean_object* v___x_2608_; 
v___x_2606_ = lean_array_push(v_pathSegments_2600_, v_segment_2595_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 4, v___x_2606_);
v___x_2608_ = v___x_2604_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_scheme_2596_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v_userInfo_2597_);
lean_ctor_set(v_reuseFailAlloc_2609_, 2, v_host_2598_);
lean_ctor_set(v_reuseFailAlloc_2609_, 3, v_port_2599_);
lean_ctor_set(v_reuseFailAlloc_2609_, 4, v___x_2606_);
lean_ctor_set(v_reuseFailAlloc_2609_, 5, v_query_2601_);
lean_ctor_set(v_reuseFailAlloc_2609_, 6, v_fragment_2602_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object* v_b_2611_, lean_object* v_key_2612_, lean_object* v_value_2613_){
_start:
{
lean_object* v_scheme_2614_; lean_object* v_userInfo_2615_; lean_object* v_host_2616_; lean_object* v_port_2617_; lean_object* v_pathSegments_2618_; lean_object* v_query_2619_; lean_object* v_fragment_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2630_; 
v_scheme_2614_ = lean_ctor_get(v_b_2611_, 0);
v_userInfo_2615_ = lean_ctor_get(v_b_2611_, 1);
v_host_2616_ = lean_ctor_get(v_b_2611_, 2);
v_port_2617_ = lean_ctor_get(v_b_2611_, 3);
v_pathSegments_2618_ = lean_ctor_get(v_b_2611_, 4);
v_query_2619_ = lean_ctor_get(v_b_2611_, 5);
v_fragment_2620_ = lean_ctor_get(v_b_2611_, 6);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_b_2611_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2622_ = v_b_2611_;
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_fragment_2620_);
lean_inc(v_query_2619_);
lean_inc(v_pathSegments_2618_);
lean_inc(v_port_2617_);
lean_inc(v_host_2616_);
lean_inc(v_userInfo_2615_);
lean_inc(v_scheme_2614_);
lean_dec(v_b_2611_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
v___x_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2624_, 0, v_value_2613_);
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v_key_2612_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_array_push(v_query_2619_, v___x_2625_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 5, v___x_2626_);
v___x_2628_ = v___x_2622_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_scheme_2614_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_userInfo_2615_);
lean_ctor_set(v_reuseFailAlloc_2629_, 2, v_host_2616_);
lean_ctor_set(v_reuseFailAlloc_2629_, 3, v_port_2617_);
lean_ctor_set(v_reuseFailAlloc_2629_, 4, v_pathSegments_2618_);
lean_ctor_set(v_reuseFailAlloc_2629_, 5, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2629_, 6, v_fragment_2620_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object* v_b_2631_, lean_object* v_key_2632_){
_start:
{
lean_object* v_scheme_2633_; lean_object* v_userInfo_2634_; lean_object* v_host_2635_; lean_object* v_port_2636_; lean_object* v_pathSegments_2637_; lean_object* v_query_2638_; lean_object* v_fragment_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2649_; 
v_scheme_2633_ = lean_ctor_get(v_b_2631_, 0);
v_userInfo_2634_ = lean_ctor_get(v_b_2631_, 1);
v_host_2635_ = lean_ctor_get(v_b_2631_, 2);
v_port_2636_ = lean_ctor_get(v_b_2631_, 3);
v_pathSegments_2637_ = lean_ctor_get(v_b_2631_, 4);
v_query_2638_ = lean_ctor_get(v_b_2631_, 5);
v_fragment_2639_ = lean_ctor_get(v_b_2631_, 6);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_b_2631_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2641_ = v_b_2631_;
v_isShared_2642_ = v_isSharedCheck_2649_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_fragment_2639_);
lean_inc(v_query_2638_);
lean_inc(v_pathSegments_2637_);
lean_inc(v_port_2636_);
lean_inc(v_host_2635_);
lean_inc(v_userInfo_2634_);
lean_inc(v_scheme_2633_);
lean_dec(v_b_2631_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2649_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; 
v___x_2643_ = lean_box(0);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v_key_2632_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = lean_array_push(v_query_2638_, v___x_2644_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 5, v___x_2645_);
v___x_2647_ = v___x_2641_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_scheme_2633_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v_userInfo_2634_);
lean_ctor_set(v_reuseFailAlloc_2648_, 2, v_host_2635_);
lean_ctor_set(v_reuseFailAlloc_2648_, 3, v_port_2636_);
lean_ctor_set(v_reuseFailAlloc_2648_, 4, v_pathSegments_2637_);
lean_ctor_set(v_reuseFailAlloc_2648_, 5, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2648_, 6, v_fragment_2639_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object* v_b_2650_, lean_object* v_query_2651_){
_start:
{
lean_object* v_scheme_2652_; lean_object* v_userInfo_2653_; lean_object* v_host_2654_; lean_object* v_port_2655_; lean_object* v_pathSegments_2656_; lean_object* v_fragment_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
v_scheme_2652_ = lean_ctor_get(v_b_2650_, 0);
v_userInfo_2653_ = lean_ctor_get(v_b_2650_, 1);
v_host_2654_ = lean_ctor_get(v_b_2650_, 2);
v_port_2655_ = lean_ctor_get(v_b_2650_, 3);
v_pathSegments_2656_ = lean_ctor_get(v_b_2650_, 4);
v_fragment_2657_ = lean_ctor_get(v_b_2650_, 6);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_b_2650_);
if (v_isSharedCheck_2664_ == 0)
{
lean_object* v_unused_2665_; 
v_unused_2665_ = lean_ctor_get(v_b_2650_, 5);
lean_dec(v_unused_2665_);
v___x_2659_ = v_b_2650_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_fragment_2657_);
lean_inc(v_pathSegments_2656_);
lean_inc(v_port_2655_);
lean_inc(v_host_2654_);
lean_inc(v_userInfo_2653_);
lean_inc(v_scheme_2652_);
lean_dec(v_b_2650_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 5, v_query_2651_);
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_scheme_2652_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_userInfo_2653_);
lean_ctor_set(v_reuseFailAlloc_2663_, 2, v_host_2654_);
lean_ctor_set(v_reuseFailAlloc_2663_, 3, v_port_2655_);
lean_ctor_set(v_reuseFailAlloc_2663_, 4, v_pathSegments_2656_);
lean_ctor_set(v_reuseFailAlloc_2663_, 5, v_query_2651_);
lean_ctor_set(v_reuseFailAlloc_2663_, 6, v_fragment_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object* v_b_2666_, lean_object* v_fragment_2667_){
_start:
{
lean_object* v_scheme_2668_; lean_object* v_userInfo_2669_; lean_object* v_host_2670_; lean_object* v_port_2671_; lean_object* v_pathSegments_2672_; lean_object* v_query_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2681_; 
v_scheme_2668_ = lean_ctor_get(v_b_2666_, 0);
v_userInfo_2669_ = lean_ctor_get(v_b_2666_, 1);
v_host_2670_ = lean_ctor_get(v_b_2666_, 2);
v_port_2671_ = lean_ctor_get(v_b_2666_, 3);
v_pathSegments_2672_ = lean_ctor_get(v_b_2666_, 4);
v_query_2673_ = lean_ctor_get(v_b_2666_, 5);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_b_2666_);
if (v_isSharedCheck_2681_ == 0)
{
lean_object* v_unused_2682_; 
v_unused_2682_ = lean_ctor_get(v_b_2666_, 6);
lean_dec(v_unused_2682_);
v___x_2675_ = v_b_2666_;
v_isShared_2676_ = v_isSharedCheck_2681_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_query_2673_);
lean_inc(v_pathSegments_2672_);
lean_inc(v_port_2671_);
lean_inc(v_host_2670_);
lean_inc(v_userInfo_2669_);
lean_inc(v_scheme_2668_);
lean_dec(v_b_2666_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2681_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2677_; lean_object* v___x_2679_; 
v___x_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_fragment_2667_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 6, v___x_2677_);
v___x_2679_ = v___x_2675_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_scheme_2668_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v_userInfo_2669_);
lean_ctor_set(v_reuseFailAlloc_2680_, 2, v_host_2670_);
lean_ctor_set(v_reuseFailAlloc_2680_, 3, v_port_2671_);
lean_ctor_set(v_reuseFailAlloc_2680_, 4, v_pathSegments_2672_);
lean_ctor_set(v_reuseFailAlloc_2680_, 5, v_query_2673_);
lean_ctor_set(v_reuseFailAlloc_2680_, 6, v___x_2677_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t v_sz_2683_, size_t v_i_2684_, lean_object* v_bs_2685_){
_start:
{
uint8_t v___x_2686_; 
v___x_2686_ = lean_usize_dec_lt(v_i_2684_, v_sz_2683_);
if (v___x_2686_ == 0)
{
return v_bs_2685_;
}
else
{
lean_object* v_v_2687_; lean_object* v___x_2688_; lean_object* v_bs_x27_2689_; lean_object* v___x_2690_; size_t v___x_2691_; size_t v___x_2692_; lean_object* v___x_2693_; 
v_v_2687_ = lean_array_uget(v_bs_2685_, v_i_2684_);
v___x_2688_ = lean_unsigned_to_nat(0u);
v_bs_x27_2689_ = lean_array_uset(v_bs_2685_, v_i_2684_, v___x_2688_);
v___x_2690_ = l_Std_Http_URI_EncodedSegment_encode(v_v_2687_);
v___x_2691_ = ((size_t)1ULL);
v___x_2692_ = lean_usize_add(v_i_2684_, v___x_2691_);
v___x_2693_ = lean_array_uset(v_bs_x27_2689_, v_i_2684_, v___x_2690_);
v_i_2684_ = v___x_2692_;
v_bs_2685_ = v___x_2693_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object* v_sz_2695_, lean_object* v_i_2696_, lean_object* v_bs_2697_){
_start:
{
size_t v_sz_boxed_2698_; size_t v_i_boxed_2699_; lean_object* v_res_2700_; 
v_sz_boxed_2698_ = lean_unbox_usize(v_sz_2695_);
lean_dec(v_sz_2695_);
v_i_boxed_2699_ = lean_unbox_usize(v_i_2696_);
lean_dec(v_i_2696_);
v_res_2700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_boxed_2698_, v_i_boxed_2699_, v_bs_2697_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t v_sz_2701_, size_t v_i_2702_, lean_object* v_bs_2703_){
_start:
{
uint8_t v___x_2704_; 
v___x_2704_ = lean_usize_dec_lt(v_i_2702_, v_sz_2701_);
if (v___x_2704_ == 0)
{
return v_bs_2703_;
}
else
{
lean_object* v_v_2705_; lean_object* v_fst_2706_; lean_object* v_snd_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2736_; 
v_v_2705_ = lean_array_uget(v_bs_2703_, v_i_2702_);
v_fst_2706_ = lean_ctor_get(v_v_2705_, 0);
v_snd_2707_ = lean_ctor_get(v_v_2705_, 1);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_v_2705_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2709_ = v_v_2705_;
v_isShared_2710_ = v_isSharedCheck_2736_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_snd_2707_);
lean_inc(v_fst_2706_);
lean_dec(v_v_2705_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2736_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2711_; lean_object* v_bs_x27_2712_; lean_object* v___y_2714_; lean_object* v___x_2719_; 
v___x_2711_ = lean_unsigned_to_nat(0u);
v_bs_x27_2712_ = lean_array_uset(v_bs_2703_, v_i_2702_, v___x_2711_);
v___x_2719_ = l_Std_Http_URI_EncodedQueryParam_encode(v_fst_2706_);
if (lean_obj_tag(v_snd_2707_) == 0)
{
lean_object* v___x_2720_; lean_object* v___x_2722_; 
v___x_2720_ = lean_box(0);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 1, v___x_2720_);
lean_ctor_set(v___x_2709_, 0, v___x_2719_);
v___x_2722_ = v___x_2709_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2719_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___x_2720_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
v___y_2714_ = v___x_2722_;
goto v___jp_2713_;
}
}
else
{
lean_object* v_val_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2735_; 
v_val_2724_ = lean_ctor_get(v_snd_2707_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v_snd_2707_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2726_ = v_snd_2707_;
v_isShared_2727_ = v_isSharedCheck_2735_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_val_2724_);
lean_dec(v_snd_2707_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2735_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2730_; 
v___x_2728_ = l_Std_Http_URI_EncodedQueryParam_encode(v_val_2724_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v___x_2728_);
v___x_2730_ = v___x_2726_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2728_);
v___x_2730_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2732_; 
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 1, v___x_2730_);
lean_ctor_set(v___x_2709_, 0, v___x_2719_);
v___x_2732_ = v___x_2709_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2719_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
v___y_2714_ = v___x_2732_;
goto v___jp_2713_;
}
}
}
}
v___jp_2713_:
{
size_t v___x_2715_; size_t v___x_2716_; lean_object* v___x_2717_; 
v___x_2715_ = ((size_t)1ULL);
v___x_2716_ = lean_usize_add(v_i_2702_, v___x_2715_);
v___x_2717_ = lean_array_uset(v_bs_x27_2712_, v_i_2702_, v___y_2714_);
v_i_2702_ = v___x_2716_;
v_bs_2703_ = v___x_2717_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object* v_sz_2737_, lean_object* v_i_2738_, lean_object* v_bs_2739_){
_start:
{
size_t v_sz_boxed_2740_; size_t v_i_boxed_2741_; lean_object* v_res_2742_; 
v_sz_boxed_2740_ = lean_unbox_usize(v_sz_2737_);
lean_dec(v_sz_2737_);
v_i_boxed_2741_ = lean_unbox_usize(v_i_2738_);
lean_dec(v_i_2738_);
v_res_2742_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_boxed_2740_, v_i_boxed_2741_, v_bs_2739_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object* v_b_2743_){
_start:
{
lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; uint8_t v___y_2749_; lean_object* v___y_2750_; lean_object* v_scheme_2766_; lean_object* v_userInfo_2767_; lean_object* v_host_2768_; lean_object* v_port_2769_; lean_object* v_pathSegments_2770_; lean_object* v_query_2771_; lean_object* v_fragment_2772_; lean_object* v___y_2774_; 
v_scheme_2766_ = lean_ctor_get(v_b_2743_, 0);
lean_inc(v_scheme_2766_);
v_userInfo_2767_ = lean_ctor_get(v_b_2743_, 1);
lean_inc(v_userInfo_2767_);
v_host_2768_ = lean_ctor_get(v_b_2743_, 2);
lean_inc(v_host_2768_);
v_port_2769_ = lean_ctor_get(v_b_2743_, 3);
lean_inc(v_port_2769_);
v_pathSegments_2770_ = lean_ctor_get(v_b_2743_, 4);
lean_inc_ref(v_pathSegments_2770_);
v_query_2771_ = lean_ctor_get(v_b_2743_, 5);
lean_inc_ref(v_query_2771_);
v_fragment_2772_ = lean_ctor_get(v_b_2743_, 6);
lean_inc(v_fragment_2772_);
lean_dec_ref(v_b_2743_);
if (lean_obj_tag(v_scheme_2766_) == 0)
{
lean_object* v___x_2787_; 
v___x_2787_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___y_2774_ = v___x_2787_;
goto v___jp_2773_;
}
else
{
lean_object* v_val_2788_; 
v_val_2788_ = lean_ctor_get(v_scheme_2766_, 0);
lean_inc(v_val_2788_);
lean_dec_ref_known(v_scheme_2766_, 1);
v___y_2774_ = v_val_2788_;
goto v___jp_2773_;
}
v___jp_2744_:
{
size_t v_sz_2751_; size_t v___x_2752_; lean_object* v___x_2753_; lean_object* v_path_2754_; size_t v_sz_2755_; lean_object* v_query_2756_; lean_object* v___x_2757_; lean_object* v_query_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v_sz_2751_ = lean_array_size(v___y_2747_);
v___x_2752_ = ((size_t)0ULL);
v___x_2753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_2751_, v___x_2752_, v___y_2747_);
v_path_2754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_path_2754_, 0, v___x_2753_);
lean_ctor_set_uint8(v_path_2754_, sizeof(void*)*1, v___y_2749_);
v_sz_2755_ = lean_array_size(v___y_2748_);
v_query_2756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_2755_, v___x_2752_, v___y_2748_);
v___x_2757_ = lean_array_to_list(v_query_2756_);
v_query_2758_ = lean_array_mk(v___x_2757_);
v___x_2759_ = lean_array_get_size(v_query_2758_);
v___x_2760_ = lean_unsigned_to_nat(0u);
v___x_2761_ = lean_nat_dec_eq(v___x_2759_, v___x_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2762_, 0, v_query_2758_);
v___x_2763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2763_, 0, v___y_2746_);
lean_ctor_set(v___x_2763_, 1, v___y_2750_);
lean_ctor_set(v___x_2763_, 2, v_path_2754_);
lean_ctor_set(v___x_2763_, 3, v___x_2762_);
lean_ctor_set(v___x_2763_, 4, v___y_2745_);
return v___x_2763_;
}
else
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
lean_dec_ref(v_query_2758_);
v___x_2764_ = lean_box(0);
v___x_2765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2765_, 0, v___y_2746_);
lean_ctor_set(v___x_2765_, 1, v___y_2750_);
lean_ctor_set(v___x_2765_, 2, v_path_2754_);
lean_ctor_set(v___x_2765_, 3, v___x_2764_);
lean_ctor_set(v___x_2765_, 4, v___y_2745_);
return v___x_2765_;
}
}
v___jp_2773_:
{
if (lean_obj_tag(v_host_2768_) == 0)
{
uint8_t v___x_2775_; lean_object* v___x_2776_; 
lean_dec(v_port_2769_);
lean_dec(v_userInfo_2767_);
v___x_2775_ = 1;
v___x_2776_ = lean_box(0);
v___y_2745_ = v_fragment_2772_;
v___y_2746_ = v___y_2774_;
v___y_2747_ = v_pathSegments_2770_;
v___y_2748_ = v_query_2771_;
v___y_2749_ = v___x_2775_;
v___y_2750_ = v___x_2776_;
goto v___jp_2744_;
}
else
{
lean_object* v_val_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2786_; 
v_val_2777_ = lean_ctor_get(v_host_2768_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_host_2768_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2779_ = v_host_2768_;
v_isShared_2780_ = v_isSharedCheck_2786_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_val_2777_);
lean_dec(v_host_2768_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2786_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
uint8_t v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2781_ = 1;
v___x_2782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2782_, 0, v_userInfo_2767_);
lean_ctor_set(v___x_2782_, 1, v_val_2777_);
lean_ctor_set(v___x_2782_, 2, v_port_2769_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 0, v___x_2782_);
v___x_2784_ = v___x_2779_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
v___y_2745_ = v_fragment_2772_;
v___y_2746_ = v___y_2774_;
v___y_2747_ = v_pathSegments_2770_;
v___y_2748_ = v_query_2771_;
v___y_2749_ = v___x_2781_;
v___y_2750_ = v___x_2784_;
goto v___jp_2744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object* v_uri_2789_, lean_object* v_scheme_2790_){
_start:
{
lean_object* v_authority_2791_; lean_object* v_path_2792_; lean_object* v_query_2793_; lean_object* v_fragment_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2802_; 
v_authority_2791_ = lean_ctor_get(v_uri_2789_, 1);
v_path_2792_ = lean_ctor_get(v_uri_2789_, 2);
v_query_2793_ = lean_ctor_get(v_uri_2789_, 3);
v_fragment_2794_ = lean_ctor_get(v_uri_2789_, 4);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_uri_2789_);
if (v_isSharedCheck_2802_ == 0)
{
lean_object* v_unused_2803_; 
v_unused_2803_ = lean_ctor_get(v_uri_2789_, 0);
lean_dec(v_unused_2803_);
v___x_2796_ = v_uri_2789_;
v_isShared_2797_ = v_isSharedCheck_2802_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_fragment_2794_);
lean_inc(v_query_2793_);
lean_inc(v_path_2792_);
lean_inc(v_authority_2791_);
lean_dec(v_uri_2789_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2802_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2798_; lean_object* v___x_2800_; 
v___x_2798_ = l_Std_Http_URI_Scheme_ofString_x21(v_scheme_2790_);
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v___x_2798_);
v___x_2800_ = v___x_2796_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v___x_2798_);
lean_ctor_set(v_reuseFailAlloc_2801_, 1, v_authority_2791_);
lean_ctor_set(v_reuseFailAlloc_2801_, 2, v_path_2792_);
lean_ctor_set(v_reuseFailAlloc_2801_, 3, v_query_2793_);
lean_ctor_set(v_reuseFailAlloc_2801_, 4, v_fragment_2794_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object* v_uri_2804_, lean_object* v_authority_2805_){
_start:
{
lean_object* v_scheme_2806_; lean_object* v_path_2807_; lean_object* v_query_2808_; lean_object* v_fragment_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
v_scheme_2806_ = lean_ctor_get(v_uri_2804_, 0);
v_path_2807_ = lean_ctor_get(v_uri_2804_, 2);
v_query_2808_ = lean_ctor_get(v_uri_2804_, 3);
v_fragment_2809_ = lean_ctor_get(v_uri_2804_, 4);
v_isSharedCheck_2816_ = !lean_is_exclusive(v_uri_2804_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v_uri_2804_, 1);
lean_dec(v_unused_2817_);
v___x_2811_ = v_uri_2804_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_fragment_2809_);
lean_inc(v_query_2808_);
lean_inc(v_path_2807_);
lean_inc(v_scheme_2806_);
lean_dec(v_uri_2804_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 1, v_authority_2805_);
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_scheme_2806_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_authority_2805_);
lean_ctor_set(v_reuseFailAlloc_2815_, 2, v_path_2807_);
lean_ctor_set(v_reuseFailAlloc_2815_, 3, v_query_2808_);
lean_ctor_set(v_reuseFailAlloc_2815_, 4, v_fragment_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object* v_uri_2818_, lean_object* v_path_2819_){
_start:
{
lean_object* v_scheme_2820_; lean_object* v_authority_2821_; lean_object* v_query_2822_; lean_object* v_fragment_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
v_scheme_2820_ = lean_ctor_get(v_uri_2818_, 0);
v_authority_2821_ = lean_ctor_get(v_uri_2818_, 1);
v_query_2822_ = lean_ctor_get(v_uri_2818_, 3);
v_fragment_2823_ = lean_ctor_get(v_uri_2818_, 4);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_uri_2818_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v_uri_2818_, 2);
lean_dec(v_unused_2831_);
v___x_2825_ = v_uri_2818_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_fragment_2823_);
lean_inc(v_query_2822_);
lean_inc(v_authority_2821_);
lean_inc(v_scheme_2820_);
lean_dec(v_uri_2818_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 2, v_path_2819_);
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_scheme_2820_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_authority_2821_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_path_2819_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v_query_2822_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_fragment_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object* v_uri_2832_, lean_object* v_query_2833_){
_start:
{
lean_object* v_scheme_2834_; lean_object* v_authority_2835_; lean_object* v_path_2836_; lean_object* v_fragment_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2845_; 
v_scheme_2834_ = lean_ctor_get(v_uri_2832_, 0);
v_authority_2835_ = lean_ctor_get(v_uri_2832_, 1);
v_path_2836_ = lean_ctor_get(v_uri_2832_, 2);
v_fragment_2837_ = lean_ctor_get(v_uri_2832_, 4);
v_isSharedCheck_2845_ = !lean_is_exclusive(v_uri_2832_);
if (v_isSharedCheck_2845_ == 0)
{
lean_object* v_unused_2846_; 
v_unused_2846_ = lean_ctor_get(v_uri_2832_, 3);
lean_dec(v_unused_2846_);
v___x_2839_ = v_uri_2832_;
v_isShared_2840_ = v_isSharedCheck_2845_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_fragment_2837_);
lean_inc(v_path_2836_);
lean_inc(v_authority_2835_);
lean_inc(v_scheme_2834_);
lean_dec(v_uri_2832_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2845_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2841_; lean_object* v___x_2843_; 
v___x_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2841_, 0, v_query_2833_);
if (v_isShared_2840_ == 0)
{
lean_ctor_set(v___x_2839_, 3, v___x_2841_);
v___x_2843_ = v___x_2839_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_scheme_2834_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_authority_2835_);
lean_ctor_set(v_reuseFailAlloc_2844_, 2, v_path_2836_);
lean_ctor_set(v_reuseFailAlloc_2844_, 3, v___x_2841_);
lean_ctor_set(v_reuseFailAlloc_2844_, 4, v_fragment_2837_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object* v_uri_2847_, lean_object* v_fragment_2848_){
_start:
{
lean_object* v_scheme_2849_; lean_object* v_authority_2850_; lean_object* v_path_2851_; lean_object* v_query_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
v_scheme_2849_ = lean_ctor_get(v_uri_2847_, 0);
v_authority_2850_ = lean_ctor_get(v_uri_2847_, 1);
v_path_2851_ = lean_ctor_get(v_uri_2847_, 2);
v_query_2852_ = lean_ctor_get(v_uri_2847_, 3);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_uri_2847_);
if (v_isSharedCheck_2859_ == 0)
{
lean_object* v_unused_2860_; 
v_unused_2860_ = lean_ctor_get(v_uri_2847_, 4);
lean_dec(v_unused_2860_);
v___x_2854_ = v_uri_2847_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_query_2852_);
lean_inc(v_path_2851_);
lean_inc(v_authority_2850_);
lean_inc(v_scheme_2849_);
lean_dec(v_uri_2847_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 4, v_fragment_2848_);
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_scheme_2849_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v_authority_2850_);
lean_ctor_set(v_reuseFailAlloc_2858_, 2, v_path_2851_);
lean_ctor_set(v_reuseFailAlloc_2858_, 3, v_query_2852_);
lean_ctor_set(v_reuseFailAlloc_2858_, 4, v_fragment_2848_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object* v_uri_2861_){
_start:
{
lean_object* v_scheme_2862_; lean_object* v_authority_2863_; lean_object* v_path_2864_; lean_object* v_query_2865_; lean_object* v_fragment_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2874_; 
v_scheme_2862_ = lean_ctor_get(v_uri_2861_, 0);
v_authority_2863_ = lean_ctor_get(v_uri_2861_, 1);
v_path_2864_ = lean_ctor_get(v_uri_2861_, 2);
v_query_2865_ = lean_ctor_get(v_uri_2861_, 3);
v_fragment_2866_ = lean_ctor_get(v_uri_2861_, 4);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_uri_2861_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2868_ = v_uri_2861_;
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_fragment_2866_);
lean_inc(v_query_2865_);
lean_inc(v_path_2864_);
lean_inc(v_authority_2863_);
lean_inc(v_scheme_2862_);
lean_dec(v_uri_2861_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = l_Std_Http_URI_Path_normalize(v_path_2864_);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 2, v___x_2870_);
v___x_2872_ = v___x_2868_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_scheme_2862_);
lean_ctor_set(v_reuseFailAlloc_2873_, 1, v_authority_2863_);
lean_ctor_set(v_reuseFailAlloc_2873_, 2, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2873_, 3, v_query_2865_);
lean_ctor_set(v_reuseFailAlloc_2873_, 4, v_fragment_2866_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object* v_x_2875_){
_start:
{
lean_object* v_scheme_2876_; lean_object* v_host_2877_; uint16_t v_port_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; uint8_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v_ctr_2899_; lean_object* v_a_2900_; 
v_scheme_2876_ = lean_ctor_get(v_x_2875_, 0);
lean_inc_ref(v_scheme_2876_);
v_host_2877_ = lean_ctor_get(v_x_2875_, 1);
lean_inc_ref(v_host_2877_);
v_port_2878_ = lean_ctor_get_uint16(v_x_2875_, sizeof(void*)*2);
lean_dec_ref(v_x_2875_);
v___x_2879_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2880_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2881_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2882_ = l_String_quote(v_scheme_2876_);
v___x_2883_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
v___x_2884_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2881_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = 0;
v___x_2886_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2886_, 0, v___x_2884_);
lean_ctor_set_uint8(v___x_2886_, sizeof(void*)*1, v___x_2885_);
v___x_2887_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2880_);
lean_ctor_set(v___x_2887_, 1, v___x_2886_);
v___x_2888_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_2889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2887_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = lean_box(1);
v___x_2891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_2893_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
lean_ctor_set(v___x_2894_, 1, v___x_2879_);
v___x_2895_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_2896_ = lean_unsigned_to_nat(0u);
v___x_2897_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_2877_))
{
case 0:
{
lean_object* v_name_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2939_; 
v_name_2930_ = lean_ctor_get(v_host_2877_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v_host_2877_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2932_ = v_host_2877_;
v_isShared_2933_ = v_isSharedCheck_2939_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_name_2930_);
lean_dec(v_host_2877_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2939_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2937_; 
v___x_2934_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_2935_ = l_String_quote(v_name_2930_);
if (v_isShared_2933_ == 0)
{
lean_ctor_set_tag(v___x_2932_, 3);
lean_ctor_set(v___x_2932_, 0, v___x_2935_);
v___x_2937_ = v___x_2932_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2935_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
v_ctr_2899_ = v___x_2934_;
v_a_2900_ = v___x_2937_;
goto v___jp_2898_;
}
}
}
case 1:
{
lean_object* v_ipv4_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2949_; 
v_ipv4_2940_ = lean_ctor_get(v_host_2877_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_host_2877_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2942_ = v_host_2877_;
v_isShared_2943_ = v_isSharedCheck_2949_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_ipv4_2940_);
lean_dec(v_host_2877_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2949_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2944_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_2945_ = lean_uv_ntop_v4(v_ipv4_2940_);
lean_dec_ref(v_ipv4_2940_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set_tag(v___x_2942_, 3);
lean_ctor_set(v___x_2942_, 0, v___x_2945_);
v___x_2947_ = v___x_2942_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
v_ctr_2899_ = v___x_2944_;
v_a_2900_ = v___x_2947_;
goto v___jp_2898_;
}
}
}
default: 
{
lean_object* v_ipv6_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2959_; 
v_ipv6_2950_ = lean_ctor_get(v_host_2877_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v_host_2877_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2952_ = v_host_2877_;
v_isShared_2953_ = v_isSharedCheck_2959_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_ipv6_2950_);
lean_dec(v_host_2877_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2959_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2957_; 
v___x_2954_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_2955_ = lean_uv_ntop_v6(v_ipv6_2950_);
lean_dec_ref(v_ipv6_2950_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set_tag(v___x_2952_, 3);
lean_ctor_set(v___x_2952_, 0, v___x_2955_);
v___x_2957_ = v___x_2952_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2955_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
v_ctr_2899_ = v___x_2954_;
v_a_2900_ = v___x_2957_;
goto v___jp_2898_;
}
}
}
}
v___jp_2898_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2901_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_2902_ = lean_string_append(v___x_2901_, v_ctr_2899_);
v___x_2903_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
v___x_2904_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
lean_ctor_set(v___x_2904_, 1, v___x_2890_);
v___x_2905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
lean_ctor_set(v___x_2905_, 1, v_a_2900_);
v___x_2906_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2897_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
v___x_2907_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*1, v___x_2885_);
v___x_2908_ = l_Repr_addAppParen(v___x_2907_, v___x_2896_);
v___x_2909_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2895_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
lean_ctor_set_uint8(v___x_2910_, sizeof(void*)*1, v___x_2885_);
v___x_2911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2894_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
lean_ctor_set(v___x_2912_, 1, v___x_2888_);
v___x_2913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
lean_ctor_set(v___x_2913_, 1, v___x_2890_);
v___x_2914_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_2915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2913_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
lean_ctor_set(v___x_2916_, 1, v___x_2879_);
v___x_2917_ = lean_uint16_to_nat(v_port_2878_);
v___x_2918_ = l_Nat_reprFast(v___x_2917_);
v___x_2919_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
v___x_2920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2895_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___x_2921_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
lean_ctor_set_uint8(v___x_2921_, sizeof(void*)*1, v___x_2885_);
v___x_2922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2916_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_2924_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_2925_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
lean_ctor_set(v___x_2925_, 1, v___x_2922_);
v___x_2926_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_2927_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2925_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2923_);
lean_ctor_set(v___x_2928_, 1, v___x_2927_);
v___x_2929_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
lean_ctor_set_uint8(v___x_2929_, sizeof(void*)*1, v___x_2885_);
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object* v_x_2960_, lean_object* v_prec_2961_){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Std_Http_URI_instReprOrigin_repr___redArg(v_x_2960_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object* v_x_2963_, lean_object* v_prec_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Std_Http_URI_instReprOrigin_repr(v_x_2963_, v_prec_2964_);
lean_dec(v_prec_2964_);
return v_res_2965_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object* v_x_2968_, lean_object* v_x_2969_){
_start:
{
lean_object* v_scheme_2970_; lean_object* v_host_2971_; uint16_t v_port_2972_; lean_object* v_scheme_2973_; lean_object* v_host_2974_; uint16_t v_port_2975_; uint8_t v___x_2976_; 
v_scheme_2970_ = lean_ctor_get(v_x_2968_, 0);
v_host_2971_ = lean_ctor_get(v_x_2968_, 1);
v_port_2972_ = lean_ctor_get_uint16(v_x_2968_, sizeof(void*)*2);
v_scheme_2973_ = lean_ctor_get(v_x_2969_, 0);
v_host_2974_ = lean_ctor_get(v_x_2969_, 1);
v_port_2975_ = lean_ctor_get_uint16(v_x_2969_, sizeof(void*)*2);
v___x_2976_ = lean_string_dec_eq(v_scheme_2970_, v_scheme_2973_);
if (v___x_2976_ == 0)
{
return v___x_2976_;
}
else
{
uint8_t v___x_2977_; 
v___x_2977_ = l_Std_Http_URI_instBEqHost_beq(v_host_2971_, v_host_2974_);
if (v___x_2977_ == 0)
{
return v___x_2977_;
}
else
{
uint8_t v___x_2978_; 
v___x_2978_ = lean_uint16_dec_eq(v_port_2972_, v_port_2975_);
return v___x_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object* v_x_2979_, lean_object* v_x_2980_){
_start:
{
uint8_t v_res_2981_; lean_object* v_r_2982_; 
v_res_2981_ = l_Std_Http_URI_instBEqOrigin_beq(v_x_2979_, v_x_2980_);
lean_dec_ref(v_x_2980_);
lean_dec_ref(v_x_2979_);
v_r_2982_ = lean_box(v_res_2981_);
return v_r_2982_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object* v_o_2985_){
_start:
{
lean_object* v_scheme_2986_; lean_object* v_host_2987_; uint16_t v_port_2988_; lean_object* v___y_2990_; uint16_t v_defaultPort_2996_; uint8_t v___x_2997_; 
v_scheme_2986_ = lean_ctor_get(v_o_2985_, 0);
lean_inc_ref(v_scheme_2986_);
v_host_2987_ = lean_ctor_get(v_o_2985_, 1);
lean_inc_ref(v_host_2987_);
v_port_2988_ = lean_ctor_get_uint16(v_o_2985_, sizeof(void*)*2);
lean_dec_ref(v_o_2985_);
v_defaultPort_2996_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_2986_);
lean_dec_ref(v_scheme_2986_);
v___x_2997_ = lean_uint16_dec_eq(v_port_2988_, v_defaultPort_2996_);
if (v___x_2997_ == 0)
{
switch(lean_obj_tag(v_host_2987_))
{
case 0:
{
lean_object* v_name_2998_; 
v_name_2998_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_name_2998_);
lean_dec_ref_known(v_host_2987_, 1);
v___y_2990_ = v_name_2998_;
goto v___jp_2989_;
}
case 1:
{
lean_object* v_ipv4_2999_; lean_object* v___x_3000_; 
v_ipv4_2999_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_ipv4_2999_);
lean_dec_ref_known(v_host_2987_, 1);
v___x_3000_ = lean_uv_ntop_v4(v_ipv4_2999_);
lean_dec_ref(v_ipv4_2999_);
v___y_2990_ = v___x_3000_;
goto v___jp_2989_;
}
default: 
{
lean_object* v_ipv6_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v_ipv6_3001_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_ipv6_3001_);
lean_dec_ref_known(v_host_2987_, 1);
v___x_3002_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3003_ = lean_uv_ntop_v6(v_ipv6_3001_);
lean_dec_ref(v_ipv6_3001_);
v___x_3004_ = lean_string_append(v___x_3002_, v___x_3003_);
lean_dec_ref(v___x_3003_);
v___x_3005_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3006_ = lean_string_append(v___x_3004_, v___x_3005_);
v___y_2990_ = v___x_3006_;
goto v___jp_2989_;
}
}
}
else
{
switch(lean_obj_tag(v_host_2987_))
{
case 0:
{
lean_object* v_name_3007_; 
v_name_3007_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_name_3007_);
lean_dec_ref_known(v_host_2987_, 1);
return v_name_3007_;
}
case 1:
{
lean_object* v_ipv4_3008_; lean_object* v___x_3009_; 
v_ipv4_3008_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_ipv4_3008_);
lean_dec_ref_known(v_host_2987_, 1);
v___x_3009_ = lean_uv_ntop_v4(v_ipv4_3008_);
lean_dec_ref(v_ipv4_3008_);
return v___x_3009_;
}
default: 
{
lean_object* v_ipv6_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_ipv6_3010_ = lean_ctor_get(v_host_2987_, 0);
lean_inc_ref(v_ipv6_3010_);
lean_dec_ref_known(v_host_2987_, 1);
v___x_3011_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3012_ = lean_uv_ntop_v6(v_ipv6_3010_);
lean_dec_ref(v_ipv6_3010_);
v___x_3013_ = lean_string_append(v___x_3011_, v___x_3012_);
lean_dec_ref(v___x_3012_);
v___x_3014_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3015_ = lean_string_append(v___x_3013_, v___x_3014_);
return v___x_3015_;
}
}
}
v___jp_2989_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2991_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2992_ = lean_string_append(v___y_2990_, v___x_2991_);
v___x_2993_ = lean_uint16_to_nat(v_port_2988_);
v___x_2994_ = l_Nat_reprFast(v___x_2993_);
v___x_2995_ = lean_string_append(v___x_2992_, v___x_2994_);
lean_dec_ref(v___x_2994_);
return v___x_2995_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object* v_x_3022_){
_start:
{
lean_object* v_authority_3023_; lean_object* v_path_3024_; lean_object* v_query_3025_; lean_object* v_fragment_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v_authority_3023_ = lean_ctor_get(v_x_3022_, 0);
lean_inc(v_authority_3023_);
v_path_3024_ = lean_ctor_get(v_x_3022_, 1);
lean_inc_ref(v_path_3024_);
v_query_3025_ = lean_ctor_get(v_x_3022_, 2);
lean_inc(v_query_3025_);
v_fragment_3026_ = lean_ctor_get(v_x_3022_, 3);
lean_inc(v_fragment_3026_);
lean_dec_ref(v_x_3022_);
v___x_3027_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3028_ = ((lean_object*)(l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1));
v___x_3029_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_3030_ = lean_unsigned_to_nat(0u);
v___x_3031_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_3023_, v___x_3030_);
v___x_3032_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3029_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = 0;
v___x_3034_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3034_, 0, v___x_3032_);
lean_ctor_set_uint8(v___x_3034_, sizeof(void*)*1, v___x_3033_);
v___x_3035_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3028_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3035_);
lean_ctor_set(v___x_3037_, 1, v___x_3036_);
v___x_3038_ = lean_box(1);
v___x_3039_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3037_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_3041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
lean_ctor_set(v___x_3042_, 1, v___x_3027_);
v___x_3043_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3044_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3024_);
v___x_3045_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set_uint8(v___x_3046_, sizeof(void*)*1, v___x_3033_);
v___x_3047_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3042_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
lean_ctor_set(v___x_3048_, 1, v___x_3036_);
v___x_3049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
lean_ctor_set(v___x_3049_, 1, v___x_3038_);
v___x_3050_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_3051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3049_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
v___x_3052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
lean_ctor_set(v___x_3052_, 1, v___x_3027_);
v___x_3053_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_3054_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3025_, v___x_3030_);
v___x_3055_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3053_);
lean_ctor_set(v___x_3055_, 1, v___x_3054_);
v___x_3056_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
lean_ctor_set_uint8(v___x_3056_, sizeof(void*)*1, v___x_3033_);
v___x_3057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3052_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3057_);
lean_ctor_set(v___x_3058_, 1, v___x_3036_);
v___x_3059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
lean_ctor_set(v___x_3059_, 1, v___x_3038_);
v___x_3060_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_3061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3059_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
v___x_3062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
lean_ctor_set(v___x_3062_, 1, v___x_3027_);
v___x_3063_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_3064_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_3026_, v___x_3030_);
v___x_3065_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
lean_ctor_set_uint8(v___x_3066_, sizeof(void*)*1, v___x_3033_);
v___x_3067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3062_);
lean_ctor_set(v___x_3067_, 1, v___x_3066_);
v___x_3068_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3069_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
lean_ctor_set(v___x_3070_, 1, v___x_3067_);
v___x_3071_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3070_);
lean_ctor_set(v___x_3072_, 1, v___x_3071_);
v___x_3073_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3068_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
v___x_3074_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
lean_ctor_set_uint8(v___x_3074_, sizeof(void*)*1, v___x_3033_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object* v_x_3075_, lean_object* v_prec_3076_){
_start:
{
lean_object* v___x_3077_; 
v___x_3077_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_x_3075_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object* v_x_3078_, lean_object* v_prec_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Std_Http_URI_instReprRelativeRef_repr(v_x_3078_, v_prec_3079_);
lean_dec(v_prec_3079_);
return v_res_3080_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object* v_x_3088_, lean_object* v_x_3089_){
_start:
{
lean_object* v_authority_3090_; lean_object* v_path_3091_; lean_object* v_query_3092_; lean_object* v_fragment_3093_; lean_object* v_authority_3094_; lean_object* v_path_3095_; lean_object* v_query_3096_; lean_object* v_fragment_3097_; uint8_t v___x_3098_; 
v_authority_3090_ = lean_ctor_get(v_x_3088_, 0);
v_path_3091_ = lean_ctor_get(v_x_3088_, 1);
v_query_3092_ = lean_ctor_get(v_x_3088_, 2);
v_fragment_3093_ = lean_ctor_get(v_x_3088_, 3);
v_authority_3094_ = lean_ctor_get(v_x_3089_, 0);
v_path_3095_ = lean_ctor_get(v_x_3089_, 1);
v_query_3096_ = lean_ctor_get(v_x_3089_, 2);
v_fragment_3097_ = lean_ctor_get(v_x_3089_, 3);
v___x_3098_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_3090_, v_authority_3094_);
if (v___x_3098_ == 0)
{
return v___x_3098_;
}
else
{
uint8_t v___x_3099_; 
v___x_3099_ = l_Std_Http_URI_instBEqPath_beq(v_path_3091_, v_path_3095_);
if (v___x_3099_ == 0)
{
return v___x_3099_;
}
else
{
uint8_t v___x_3100_; 
v___x_3100_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_3092_, v_query_3096_);
if (v___x_3100_ == 0)
{
return v___x_3100_;
}
else
{
uint8_t v___x_3101_; 
v___x_3101_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_3093_, v_fragment_3097_);
return v___x_3101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object* v_x_3102_, lean_object* v_x_3103_){
_start:
{
uint8_t v_res_3104_; lean_object* v_r_3105_; 
v_res_3104_ = l_Std_Http_URI_instBEqRelativeRef_beq(v_x_3102_, v_x_3103_);
lean_dec_ref(v_x_3103_);
lean_dec_ref(v_x_3102_);
v_r_3105_ = lean_box(v_res_3104_);
return v_r_3105_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__1(lean_object* v___f_3108_, lean_object* v_ref_3109_){
_start:
{
lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v_authority_3118_; lean_object* v_path_3119_; lean_object* v_query_3120_; lean_object* v_fragment_3121_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3133_; 
v_authority_3118_ = lean_ctor_get(v_ref_3109_, 0);
lean_inc(v_authority_3118_);
v_path_3119_ = lean_ctor_get(v_ref_3109_, 1);
lean_inc_ref(v_path_3119_);
v_query_3120_ = lean_ctor_get(v_ref_3109_, 2);
lean_inc(v_query_3120_);
v_fragment_3121_ = lean_ctor_get(v_ref_3109_, 3);
lean_inc(v_fragment_3121_);
lean_dec_ref(v_ref_3109_);
if (lean_obj_tag(v_authority_3118_) == 0)
{
lean_object* v___x_3144_; 
v___x_3144_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3133_ = v___x_3144_;
goto v___jp_3132_;
}
else
{
lean_object* v_val_3145_; lean_object* v_userInfo_3146_; lean_object* v_host_3147_; lean_object* v_port_3148_; lean_object* v___x_3149_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3168_; 
v_val_3145_ = lean_ctor_get(v_authority_3118_, 0);
lean_inc(v_val_3145_);
lean_dec_ref_known(v_authority_3118_, 1);
v_userInfo_3146_ = lean_ctor_get(v_val_3145_, 0);
lean_inc(v_userInfo_3146_);
v_host_3147_ = lean_ctor_get(v_val_3145_, 1);
lean_inc_ref(v_host_3147_);
v_port_3148_ = lean_ctor_get(v_val_3145_, 2);
lean_inc(v_port_3148_);
lean_dec(v_val_3145_);
v___x_3149_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3146_) == 0)
{
lean_object* v___x_3178_; 
v___x_3178_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3168_ = v___x_3178_;
goto v___jp_3167_;
}
else
{
lean_object* v_val_3179_; lean_object* v_password_3180_; 
v_val_3179_ = lean_ctor_get(v_userInfo_3146_, 0);
lean_inc(v_val_3179_);
lean_dec_ref_known(v_userInfo_3146_, 1);
v_password_3180_ = lean_ctor_get(v_val_3179_, 1);
if (lean_obj_tag(v_password_3180_) == 0)
{
lean_object* v_username_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v_username_3181_ = lean_ctor_get(v_val_3179_, 0);
lean_inc_ref(v_username_3181_);
lean_dec(v_val_3179_);
v___x_3182_ = lean_string_from_utf8_unchecked(v_username_3181_);
v___x_3183_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3184_ = lean_string_append(v___x_3182_, v___x_3183_);
v___y_3168_ = v___x_3184_;
goto v___jp_3167_;
}
else
{
lean_object* v_username_3185_; lean_object* v_val_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
lean_inc_ref(v_password_3180_);
v_username_3185_ = lean_ctor_get(v_val_3179_, 0);
lean_inc_ref(v_username_3185_);
lean_dec(v_val_3179_);
v_val_3186_ = lean_ctor_get(v_password_3180_, 0);
lean_inc(v_val_3186_);
lean_dec_ref_known(v_password_3180_, 1);
v___x_3187_ = lean_string_from_utf8_unchecked(v_username_3185_);
v___x_3188_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3189_ = lean_string_append(v___x_3187_, v___x_3188_);
v___x_3190_ = lean_string_from_utf8_unchecked(v_val_3186_);
v___x_3191_ = lean_string_append(v___x_3189_, v___x_3190_);
lean_dec_ref(v___x_3190_);
v___x_3192_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3193_ = lean_string_append(v___x_3191_, v___x_3192_);
v___y_3168_ = v___x_3193_;
goto v___jp_3167_;
}
}
v___jp_3150_:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3154_ = lean_string_append(v___y_3152_, v___y_3151_);
lean_dec_ref(v___y_3151_);
v___x_3155_ = lean_string_append(v___x_3154_, v___y_3153_);
lean_dec_ref(v___y_3153_);
v___x_3156_ = lean_string_append(v___x_3149_, v___x_3155_);
lean_dec_ref(v___x_3155_);
v___y_3133_ = v___x_3156_;
goto v___jp_3132_;
}
v___jp_3157_:
{
switch(lean_obj_tag(v_port_3148_))
{
case 0:
{
lean_object* v___x_3160_; 
v___x_3160_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3151_ = v___y_3159_;
v___y_3152_ = v___y_3158_;
v___y_3153_ = v___x_3160_;
goto v___jp_3150_;
}
case 1:
{
lean_object* v___x_3161_; 
v___x_3161_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3151_ = v___y_3159_;
v___y_3152_ = v___y_3158_;
v___y_3153_ = v___x_3161_;
goto v___jp_3150_;
}
default: 
{
uint16_t v_port_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v_port_3162_ = lean_ctor_get_uint16(v_port_3148_, 0);
lean_dec_ref_known(v_port_3148_, 0);
v___x_3163_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3164_ = lean_uint16_to_nat(v_port_3162_);
v___x_3165_ = l_Nat_reprFast(v___x_3164_);
v___x_3166_ = lean_string_append(v___x_3163_, v___x_3165_);
lean_dec_ref(v___x_3165_);
v___y_3151_ = v___y_3159_;
v___y_3152_ = v___y_3158_;
v___y_3153_ = v___x_3166_;
goto v___jp_3150_;
}
}
}
v___jp_3167_:
{
switch(lean_obj_tag(v_host_3147_))
{
case 0:
{
lean_object* v_name_3169_; 
v_name_3169_ = lean_ctor_get(v_host_3147_, 0);
lean_inc_ref(v_name_3169_);
lean_dec_ref_known(v_host_3147_, 1);
v___y_3158_ = v___y_3168_;
v___y_3159_ = v_name_3169_;
goto v___jp_3157_;
}
case 1:
{
lean_object* v_ipv4_3170_; lean_object* v___x_3171_; 
v_ipv4_3170_ = lean_ctor_get(v_host_3147_, 0);
lean_inc_ref(v_ipv4_3170_);
lean_dec_ref_known(v_host_3147_, 1);
v___x_3171_ = lean_uv_ntop_v4(v_ipv4_3170_);
lean_dec_ref(v_ipv4_3170_);
v___y_3158_ = v___y_3168_;
v___y_3159_ = v___x_3171_;
goto v___jp_3157_;
}
default: 
{
lean_object* v_ipv6_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v_ipv6_3172_ = lean_ctor_get(v_host_3147_, 0);
lean_inc_ref(v_ipv6_3172_);
lean_dec_ref_known(v_host_3147_, 1);
v___x_3173_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3174_ = lean_uv_ntop_v6(v_ipv6_3172_);
lean_dec_ref(v_ipv6_3172_);
v___x_3175_ = lean_string_append(v___x_3173_, v___x_3174_);
lean_dec_ref(v___x_3174_);
v___x_3176_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3177_ = lean_string_append(v___x_3175_, v___x_3176_);
v___y_3158_ = v___y_3168_;
v___y_3159_ = v___x_3177_;
goto v___jp_3157_;
}
}
}
}
v___jp_3110_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3115_ = lean_string_append(v___y_3112_, v___y_3113_);
lean_dec_ref(v___y_3113_);
v___x_3116_ = lean_string_append(v___x_3115_, v___y_3111_);
lean_dec_ref(v___y_3111_);
v___x_3117_ = lean_string_append(v___x_3116_, v___y_3114_);
lean_dec_ref(v___y_3114_);
return v___x_3117_;
}
v___jp_3122_:
{
lean_object* v_queryPart_3125_; 
v_queryPart_3125_ = l_Std_Http_URI_Query_formatOption(v_query_3120_);
if (lean_obj_tag(v_fragment_3121_) == 0)
{
lean_object* v___x_3126_; 
v___x_3126_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3111_ = v_queryPart_3125_;
v___y_3112_ = v___y_3123_;
v___y_3113_ = v___y_3124_;
v___y_3114_ = v___x_3126_;
goto v___jp_3110_;
}
else
{
lean_object* v_val_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_val_3127_ = lean_ctor_get(v_fragment_3121_, 0);
lean_inc(v_val_3127_);
lean_dec_ref_known(v_fragment_3121_, 1);
v___x_3128_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3129_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3127_);
v___x_3130_ = lean_string_from_utf8_unchecked(v___x_3129_);
v___x_3131_ = lean_string_append(v___x_3128_, v___x_3130_);
lean_dec_ref(v___x_3130_);
v___y_3111_ = v_queryPart_3125_;
v___y_3112_ = v___y_3123_;
v___y_3113_ = v___y_3124_;
v___y_3114_ = v___x_3131_;
goto v___jp_3110_;
}
}
v___jp_3132_:
{
lean_object* v_segments_3134_; uint8_t v_absolute_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; size_t v_sz_3138_; size_t v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v_result_3142_; 
v_segments_3134_ = lean_ctor_get(v_path_3119_, 0);
lean_inc_ref(v_segments_3134_);
v_absolute_3135_ = lean_ctor_get_uint8(v_path_3119_, sizeof(void*)*1);
lean_dec_ref(v_path_3119_);
v___x_3136_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3137_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3138_ = lean_array_size(v_segments_3134_);
v___x_3139_ = ((size_t)0ULL);
v___x_3140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3137_, v___f_3108_, v_sz_3138_, v___x_3139_, v_segments_3134_);
v___x_3141_ = lean_array_to_list(v___x_3140_);
v_result_3142_ = l_String_intercalate(v___x_3136_, v___x_3141_);
if (v_absolute_3135_ == 0)
{
v___y_3123_ = v___y_3133_;
v___y_3124_ = v_result_3142_;
goto v___jp_3122_;
}
else
{
lean_object* v___x_3143_; 
v___x_3143_ = lean_string_append(v___x_3136_, v_result_3142_);
lean_dec_ref(v_result_3142_);
v___y_3123_ = v___y_3133_;
v___y_3124_ = v___x_3143_;
goto v___jp_3122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl(lean_object* v_x_3197_){
_start:
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_obj_tag_nat(v_x_3197_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl___boxed(lean_object* v_x_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Std_Http_URIReference_ctorIdx___impl(v_x_3199_);
lean_dec_ref(v_x_3199_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object* v_t_3201_, lean_object* v_k_3202_){
_start:
{
lean_object* v_uri_3203_; lean_object* v___x_3204_; 
v_uri_3203_ = lean_ctor_get(v_t_3201_, 0);
lean_inc_ref(v_uri_3203_);
lean_dec_ref(v_t_3201_);
v___x_3204_ = lean_apply_1(v_k_3202_, v_uri_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object* v_motive_3205_, lean_object* v_ctorIdx_3206_, lean_object* v_t_3207_, lean_object* v_h_3208_, lean_object* v_k_3209_){
_start:
{
lean_object* v___x_3210_; 
v___x_3210_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3207_, v_k_3209_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object* v_motive_3211_, lean_object* v_ctorIdx_3212_, lean_object* v_t_3213_, lean_object* v_h_3214_, lean_object* v_k_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l_Std_Http_URIReference_ctorElim(v_motive_3211_, v_ctorIdx_3212_, v_t_3213_, v_h_3214_, v_k_3215_);
lean_dec(v_ctorIdx_3212_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object* v_t_3217_, lean_object* v_absolute_3218_){
_start:
{
lean_object* v___x_3219_; 
v___x_3219_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3217_, v_absolute_3218_);
return v___x_3219_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object* v_motive_3220_, lean_object* v_t_3221_, lean_object* v_h_3222_, lean_object* v_absolute_3223_){
_start:
{
lean_object* v___x_3224_; 
v___x_3224_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3221_, v_absolute_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object* v_t_3225_, lean_object* v_relative_3226_){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3225_, v_relative_3226_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object* v_motive_3228_, lean_object* v_t_3229_, lean_object* v_h_3230_, lean_object* v_relative_3231_){
_start:
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3229_, v_relative_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object* v_x_3245_, lean_object* v_prec_3246_){
_start:
{
if (lean_obj_tag(v_x_3245_) == 0)
{
lean_object* v_uri_3247_; lean_object* v___y_3249_; lean_object* v___x_3257_; uint8_t v___x_3258_; 
v_uri_3247_ = lean_ctor_get(v_x_3245_, 0);
lean_inc_ref(v_uri_3247_);
lean_dec_ref_known(v_x_3245_, 1);
v___x_3257_ = lean_unsigned_to_nat(1024u);
v___x_3258_ = lean_nat_dec_le(v___x_3257_, v_prec_3246_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3249_ = v___x_3259_;
goto v___jp_3248_;
}
else
{
lean_object* v___x_3260_; 
v___x_3260_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3249_ = v___x_3260_;
goto v___jp_3248_;
}
v___jp_3248_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; uint8_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3250_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__2));
v___x_3251_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3247_);
v___x_3252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
lean_inc(v___y_3249_);
v___x_3253_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___y_3249_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = 0;
v___x_3255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set_uint8(v___x_3255_, sizeof(void*)*1, v___x_3254_);
v___x_3256_ = l_Repr_addAppParen(v___x_3255_, v_prec_3246_);
return v___x_3256_;
}
}
else
{
lean_object* v_ref_3261_; lean_object* v___y_3263_; lean_object* v___x_3271_; uint8_t v___x_3272_; 
v_ref_3261_ = lean_ctor_get(v_x_3245_, 0);
lean_inc_ref(v_ref_3261_);
lean_dec_ref_known(v_x_3245_, 1);
v___x_3271_ = lean_unsigned_to_nat(1024u);
v___x_3272_ = lean_nat_dec_le(v___x_3271_, v_prec_3246_);
if (v___x_3272_ == 0)
{
lean_object* v___x_3273_; 
v___x_3273_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3263_ = v___x_3273_;
goto v___jp_3262_;
}
else
{
lean_object* v___x_3274_; 
v___x_3274_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3263_ = v___x_3274_;
goto v___jp_3262_;
}
v___jp_3262_:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; uint8_t v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3264_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__5));
v___x_3265_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_ref_3261_);
v___x_3266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3264_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
lean_inc(v___y_3263_);
v___x_3267_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___y_3263_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
v___x_3268_ = 0;
v___x_3269_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3269_, 0, v___x_3267_);
lean_ctor_set_uint8(v___x_3269_, sizeof(void*)*1, v___x_3268_);
v___x_3270_ = l_Repr_addAppParen(v___x_3269_, v_prec_3246_);
return v___x_3270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object* v_x_3275_, lean_object* v_prec_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Std_Http_instReprURIReference_repr(v_x_3275_, v_prec_3276_);
lean_dec(v_prec_3276_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__2(lean_object* v___f_3284_, lean_object* v___f_3285_, lean_object* v_x_3286_){
_start:
{
lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; 
if (lean_obj_tag(v_x_3286_) == 0)
{
lean_object* v_uri_3295_; lean_object* v_scheme_3296_; lean_object* v_authority_3297_; lean_object* v_path_3298_; lean_object* v_query_3299_; lean_object* v_fragment_3300_; lean_object* v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3323_; 
lean_dec_ref(v___f_3285_);
v_uri_3295_ = lean_ctor_get(v_x_3286_, 0);
lean_inc_ref(v_uri_3295_);
lean_dec_ref_known(v_x_3286_, 1);
v_scheme_3296_ = lean_ctor_get(v_uri_3295_, 0);
lean_inc_ref(v_scheme_3296_);
v_authority_3297_ = lean_ctor_get(v_uri_3295_, 1);
lean_inc(v_authority_3297_);
v_path_3298_ = lean_ctor_get(v_uri_3295_, 2);
lean_inc_ref(v_path_3298_);
v_query_3299_ = lean_ctor_get(v_uri_3295_, 3);
lean_inc(v_query_3299_);
v_fragment_3300_ = lean_ctor_get(v_uri_3295_, 4);
lean_inc(v_fragment_3300_);
lean_dec_ref(v_uri_3295_);
if (lean_obj_tag(v_authority_3297_) == 0)
{
lean_object* v___x_3334_; 
v___x_3334_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3323_ = v___x_3334_;
goto v___jp_3322_;
}
else
{
lean_object* v_val_3335_; lean_object* v_userInfo_3336_; lean_object* v_host_3337_; lean_object* v_port_3338_; lean_object* v___x_3339_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3358_; 
v_val_3335_ = lean_ctor_get(v_authority_3297_, 0);
lean_inc(v_val_3335_);
lean_dec_ref_known(v_authority_3297_, 1);
v_userInfo_3336_ = lean_ctor_get(v_val_3335_, 0);
lean_inc(v_userInfo_3336_);
v_host_3337_ = lean_ctor_get(v_val_3335_, 1);
lean_inc_ref(v_host_3337_);
v_port_3338_ = lean_ctor_get(v_val_3335_, 2);
lean_inc(v_port_3338_);
lean_dec(v_val_3335_);
v___x_3339_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3336_) == 0)
{
lean_object* v___x_3368_; 
v___x_3368_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3358_ = v___x_3368_;
goto v___jp_3357_;
}
else
{
lean_object* v_val_3369_; lean_object* v_password_3370_; 
v_val_3369_ = lean_ctor_get(v_userInfo_3336_, 0);
lean_inc(v_val_3369_);
lean_dec_ref_known(v_userInfo_3336_, 1);
v_password_3370_ = lean_ctor_get(v_val_3369_, 1);
if (lean_obj_tag(v_password_3370_) == 0)
{
lean_object* v_username_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v_username_3371_ = lean_ctor_get(v_val_3369_, 0);
lean_inc_ref(v_username_3371_);
lean_dec(v_val_3369_);
v___x_3372_ = lean_string_from_utf8_unchecked(v_username_3371_);
v___x_3373_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3374_ = lean_string_append(v___x_3372_, v___x_3373_);
v___y_3358_ = v___x_3374_;
goto v___jp_3357_;
}
else
{
lean_object* v_username_3375_; lean_object* v_val_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
lean_inc_ref(v_password_3370_);
v_username_3375_ = lean_ctor_get(v_val_3369_, 0);
lean_inc_ref(v_username_3375_);
lean_dec(v_val_3369_);
v_val_3376_ = lean_ctor_get(v_password_3370_, 0);
lean_inc(v_val_3376_);
lean_dec_ref_known(v_password_3370_, 1);
v___x_3377_ = lean_string_from_utf8_unchecked(v_username_3375_);
v___x_3378_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3379_ = lean_string_append(v___x_3377_, v___x_3378_);
v___x_3380_ = lean_string_from_utf8_unchecked(v_val_3376_);
v___x_3381_ = lean_string_append(v___x_3379_, v___x_3380_);
lean_dec_ref(v___x_3380_);
v___x_3382_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3383_ = lean_string_append(v___x_3381_, v___x_3382_);
v___y_3358_ = v___x_3383_;
goto v___jp_3357_;
}
}
v___jp_3340_:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3344_ = lean_string_append(v___y_3341_, v___y_3342_);
lean_dec_ref(v___y_3342_);
v___x_3345_ = lean_string_append(v___x_3344_, v___y_3343_);
lean_dec_ref(v___y_3343_);
v___x_3346_ = lean_string_append(v___x_3339_, v___x_3345_);
lean_dec_ref(v___x_3345_);
v___y_3323_ = v___x_3346_;
goto v___jp_3322_;
}
v___jp_3347_:
{
switch(lean_obj_tag(v_port_3338_))
{
case 0:
{
lean_object* v___x_3350_; 
v___x_3350_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3341_ = v___y_3348_;
v___y_3342_ = v___y_3349_;
v___y_3343_ = v___x_3350_;
goto v___jp_3340_;
}
case 1:
{
lean_object* v___x_3351_; 
v___x_3351_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3341_ = v___y_3348_;
v___y_3342_ = v___y_3349_;
v___y_3343_ = v___x_3351_;
goto v___jp_3340_;
}
default: 
{
uint16_t v_port_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v_port_3352_ = lean_ctor_get_uint16(v_port_3338_, 0);
lean_dec_ref_known(v_port_3338_, 0);
v___x_3353_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3354_ = lean_uint16_to_nat(v_port_3352_);
v___x_3355_ = l_Nat_reprFast(v___x_3354_);
v___x_3356_ = lean_string_append(v___x_3353_, v___x_3355_);
lean_dec_ref(v___x_3355_);
v___y_3341_ = v___y_3348_;
v___y_3342_ = v___y_3349_;
v___y_3343_ = v___x_3356_;
goto v___jp_3340_;
}
}
}
v___jp_3357_:
{
switch(lean_obj_tag(v_host_3337_))
{
case 0:
{
lean_object* v_name_3359_; 
v_name_3359_ = lean_ctor_get(v_host_3337_, 0);
lean_inc_ref(v_name_3359_);
lean_dec_ref_known(v_host_3337_, 1);
v___y_3348_ = v___y_3358_;
v___y_3349_ = v_name_3359_;
goto v___jp_3347_;
}
case 1:
{
lean_object* v_ipv4_3360_; lean_object* v___x_3361_; 
v_ipv4_3360_ = lean_ctor_get(v_host_3337_, 0);
lean_inc_ref(v_ipv4_3360_);
lean_dec_ref_known(v_host_3337_, 1);
v___x_3361_ = lean_uv_ntop_v4(v_ipv4_3360_);
lean_dec_ref(v_ipv4_3360_);
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___x_3361_;
goto v___jp_3347_;
}
default: 
{
lean_object* v_ipv6_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_ipv6_3362_ = lean_ctor_get(v_host_3337_, 0);
lean_inc_ref(v_ipv6_3362_);
lean_dec_ref_known(v_host_3337_, 1);
v___x_3363_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3364_ = lean_uv_ntop_v6(v_ipv6_3362_);
lean_dec_ref(v_ipv6_3362_);
v___x_3365_ = lean_string_append(v___x_3363_, v___x_3364_);
lean_dec_ref(v___x_3364_);
v___x_3366_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3367_ = lean_string_append(v___x_3365_, v___x_3366_);
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___x_3367_;
goto v___jp_3347_;
}
}
}
}
v___jp_3301_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3306_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3307_ = lean_string_append(v_scheme_3296_, v___x_3306_);
v___x_3308_ = lean_string_append(v___x_3307_, v___y_3302_);
lean_dec_ref(v___y_3302_);
v___x_3309_ = lean_string_append(v___x_3308_, v___y_3304_);
lean_dec_ref(v___y_3304_);
v___x_3310_ = lean_string_append(v___x_3309_, v___y_3303_);
lean_dec_ref(v___y_3303_);
v___x_3311_ = lean_string_append(v___x_3310_, v___y_3305_);
lean_dec_ref(v___y_3305_);
return v___x_3311_;
}
v___jp_3312_:
{
lean_object* v_queryPart_3315_; 
v_queryPart_3315_ = l_Std_Http_URI_Query_formatOption(v_query_3299_);
if (lean_obj_tag(v_fragment_3300_) == 0)
{
lean_object* v___x_3316_; 
v___x_3316_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3302_ = v___y_3313_;
v___y_3303_ = v_queryPart_3315_;
v___y_3304_ = v___y_3314_;
v___y_3305_ = v___x_3316_;
goto v___jp_3301_;
}
else
{
lean_object* v_val_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v_val_3317_ = lean_ctor_get(v_fragment_3300_, 0);
lean_inc(v_val_3317_);
lean_dec_ref_known(v_fragment_3300_, 1);
v___x_3318_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3319_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3317_);
v___x_3320_ = lean_string_from_utf8_unchecked(v___x_3319_);
v___x_3321_ = lean_string_append(v___x_3318_, v___x_3320_);
lean_dec_ref(v___x_3320_);
v___y_3302_ = v___y_3313_;
v___y_3303_ = v_queryPart_3315_;
v___y_3304_ = v___y_3314_;
v___y_3305_ = v___x_3321_;
goto v___jp_3301_;
}
}
v___jp_3322_:
{
lean_object* v_segments_3324_; uint8_t v_absolute_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; size_t v_sz_3328_; size_t v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v_result_3332_; 
v_segments_3324_ = lean_ctor_get(v_path_3298_, 0);
lean_inc_ref(v_segments_3324_);
v_absolute_3325_ = lean_ctor_get_uint8(v_path_3298_, sizeof(void*)*1);
lean_dec_ref(v_path_3298_);
v___x_3326_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3327_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3328_ = lean_array_size(v_segments_3324_);
v___x_3329_ = ((size_t)0ULL);
v___x_3330_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3327_, v___f_3284_, v_sz_3328_, v___x_3329_, v_segments_3324_);
v___x_3331_ = lean_array_to_list(v___x_3330_);
v_result_3332_ = l_String_intercalate(v___x_3326_, v___x_3331_);
if (v_absolute_3325_ == 0)
{
v___y_3313_ = v___y_3323_;
v___y_3314_ = v_result_3332_;
goto v___jp_3312_;
}
else
{
lean_object* v___x_3333_; 
v___x_3333_ = lean_string_append(v___x_3326_, v_result_3332_);
lean_dec_ref(v_result_3332_);
v___y_3313_ = v___y_3323_;
v___y_3314_ = v___x_3333_;
goto v___jp_3312_;
}
}
}
else
{
lean_object* v_ref_3384_; lean_object* v_authority_3385_; lean_object* v_path_3386_; lean_object* v_query_3387_; lean_object* v_fragment_3388_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3400_; 
lean_dec_ref(v___f_3284_);
v_ref_3384_ = lean_ctor_get(v_x_3286_, 0);
lean_inc_ref(v_ref_3384_);
lean_dec_ref_known(v_x_3286_, 1);
v_authority_3385_ = lean_ctor_get(v_ref_3384_, 0);
lean_inc(v_authority_3385_);
v_path_3386_ = lean_ctor_get(v_ref_3384_, 1);
lean_inc_ref(v_path_3386_);
v_query_3387_ = lean_ctor_get(v_ref_3384_, 2);
lean_inc(v_query_3387_);
v_fragment_3388_ = lean_ctor_get(v_ref_3384_, 3);
lean_inc(v_fragment_3388_);
lean_dec_ref(v_ref_3384_);
if (lean_obj_tag(v_authority_3385_) == 0)
{
lean_object* v___x_3411_; 
v___x_3411_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3400_ = v___x_3411_;
goto v___jp_3399_;
}
else
{
lean_object* v_val_3412_; lean_object* v_userInfo_3413_; lean_object* v_host_3414_; lean_object* v_port_3415_; lean_object* v___x_3416_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3435_; 
v_val_3412_ = lean_ctor_get(v_authority_3385_, 0);
lean_inc(v_val_3412_);
lean_dec_ref_known(v_authority_3385_, 1);
v_userInfo_3413_ = lean_ctor_get(v_val_3412_, 0);
lean_inc(v_userInfo_3413_);
v_host_3414_ = lean_ctor_get(v_val_3412_, 1);
lean_inc_ref(v_host_3414_);
v_port_3415_ = lean_ctor_get(v_val_3412_, 2);
lean_inc(v_port_3415_);
lean_dec(v_val_3412_);
v___x_3416_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3413_) == 0)
{
lean_object* v___x_3445_; 
v___x_3445_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3435_ = v___x_3445_;
goto v___jp_3434_;
}
else
{
lean_object* v_val_3446_; lean_object* v_password_3447_; 
v_val_3446_ = lean_ctor_get(v_userInfo_3413_, 0);
lean_inc(v_val_3446_);
lean_dec_ref_known(v_userInfo_3413_, 1);
v_password_3447_ = lean_ctor_get(v_val_3446_, 1);
if (lean_obj_tag(v_password_3447_) == 0)
{
lean_object* v_username_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_username_3448_ = lean_ctor_get(v_val_3446_, 0);
lean_inc_ref(v_username_3448_);
lean_dec(v_val_3446_);
v___x_3449_ = lean_string_from_utf8_unchecked(v_username_3448_);
v___x_3450_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3451_ = lean_string_append(v___x_3449_, v___x_3450_);
v___y_3435_ = v___x_3451_;
goto v___jp_3434_;
}
else
{
lean_object* v_username_3452_; lean_object* v_val_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
lean_inc_ref(v_password_3447_);
v_username_3452_ = lean_ctor_get(v_val_3446_, 0);
lean_inc_ref(v_username_3452_);
lean_dec(v_val_3446_);
v_val_3453_ = lean_ctor_get(v_password_3447_, 0);
lean_inc(v_val_3453_);
lean_dec_ref_known(v_password_3447_, 1);
v___x_3454_ = lean_string_from_utf8_unchecked(v_username_3452_);
v___x_3455_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3456_ = lean_string_append(v___x_3454_, v___x_3455_);
v___x_3457_ = lean_string_from_utf8_unchecked(v_val_3453_);
v___x_3458_ = lean_string_append(v___x_3456_, v___x_3457_);
lean_dec_ref(v___x_3457_);
v___x_3459_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3460_ = lean_string_append(v___x_3458_, v___x_3459_);
v___y_3435_ = v___x_3460_;
goto v___jp_3434_;
}
}
v___jp_3417_:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = lean_string_append(v___y_3418_, v___y_3419_);
lean_dec_ref(v___y_3419_);
v___x_3422_ = lean_string_append(v___x_3421_, v___y_3420_);
lean_dec_ref(v___y_3420_);
v___x_3423_ = lean_string_append(v___x_3416_, v___x_3422_);
lean_dec_ref(v___x_3422_);
v___y_3400_ = v___x_3423_;
goto v___jp_3399_;
}
v___jp_3424_:
{
switch(lean_obj_tag(v_port_3415_))
{
case 0:
{
lean_object* v___x_3427_; 
v___x_3427_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3418_ = v___y_3425_;
v___y_3419_ = v___y_3426_;
v___y_3420_ = v___x_3427_;
goto v___jp_3417_;
}
case 1:
{
lean_object* v___x_3428_; 
v___x_3428_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3418_ = v___y_3425_;
v___y_3419_ = v___y_3426_;
v___y_3420_ = v___x_3428_;
goto v___jp_3417_;
}
default: 
{
uint16_t v_port_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_port_3429_ = lean_ctor_get_uint16(v_port_3415_, 0);
lean_dec_ref_known(v_port_3415_, 0);
v___x_3430_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3431_ = lean_uint16_to_nat(v_port_3429_);
v___x_3432_ = l_Nat_reprFast(v___x_3431_);
v___x_3433_ = lean_string_append(v___x_3430_, v___x_3432_);
lean_dec_ref(v___x_3432_);
v___y_3418_ = v___y_3425_;
v___y_3419_ = v___y_3426_;
v___y_3420_ = v___x_3433_;
goto v___jp_3417_;
}
}
}
v___jp_3434_:
{
switch(lean_obj_tag(v_host_3414_))
{
case 0:
{
lean_object* v_name_3436_; 
v_name_3436_ = lean_ctor_get(v_host_3414_, 0);
lean_inc_ref(v_name_3436_);
lean_dec_ref_known(v_host_3414_, 1);
v___y_3425_ = v___y_3435_;
v___y_3426_ = v_name_3436_;
goto v___jp_3424_;
}
case 1:
{
lean_object* v_ipv4_3437_; lean_object* v___x_3438_; 
v_ipv4_3437_ = lean_ctor_get(v_host_3414_, 0);
lean_inc_ref(v_ipv4_3437_);
lean_dec_ref_known(v_host_3414_, 1);
v___x_3438_ = lean_uv_ntop_v4(v_ipv4_3437_);
lean_dec_ref(v_ipv4_3437_);
v___y_3425_ = v___y_3435_;
v___y_3426_ = v___x_3438_;
goto v___jp_3424_;
}
default: 
{
lean_object* v_ipv6_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v_ipv6_3439_ = lean_ctor_get(v_host_3414_, 0);
lean_inc_ref(v_ipv6_3439_);
lean_dec_ref_known(v_host_3414_, 1);
v___x_3440_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3441_ = lean_uv_ntop_v6(v_ipv6_3439_);
lean_dec_ref(v_ipv6_3439_);
v___x_3442_ = lean_string_append(v___x_3440_, v___x_3441_);
lean_dec_ref(v___x_3441_);
v___x_3443_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3444_ = lean_string_append(v___x_3442_, v___x_3443_);
v___y_3425_ = v___y_3435_;
v___y_3426_ = v___x_3444_;
goto v___jp_3424_;
}
}
}
}
v___jp_3389_:
{
lean_object* v_queryPart_3392_; 
v_queryPart_3392_ = l_Std_Http_URI_Query_formatOption(v_query_3387_);
if (lean_obj_tag(v_fragment_3388_) == 0)
{
lean_object* v___x_3393_; 
v___x_3393_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3288_ = v___y_3391_;
v___y_3289_ = v_queryPart_3392_;
v___y_3290_ = v___y_3390_;
v___y_3291_ = v___x_3393_;
goto v___jp_3287_;
}
else
{
lean_object* v_val_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v_val_3394_ = lean_ctor_get(v_fragment_3388_, 0);
lean_inc(v_val_3394_);
lean_dec_ref_known(v_fragment_3388_, 1);
v___x_3395_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3396_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3394_);
v___x_3397_ = lean_string_from_utf8_unchecked(v___x_3396_);
v___x_3398_ = lean_string_append(v___x_3395_, v___x_3397_);
lean_dec_ref(v___x_3397_);
v___y_3288_ = v___y_3391_;
v___y_3289_ = v_queryPart_3392_;
v___y_3290_ = v___y_3390_;
v___y_3291_ = v___x_3398_;
goto v___jp_3287_;
}
}
v___jp_3399_:
{
lean_object* v_segments_3401_; uint8_t v_absolute_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; size_t v_sz_3405_; size_t v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v_result_3409_; 
v_segments_3401_ = lean_ctor_get(v_path_3386_, 0);
lean_inc_ref(v_segments_3401_);
v_absolute_3402_ = lean_ctor_get_uint8(v_path_3386_, sizeof(void*)*1);
lean_dec_ref(v_path_3386_);
v___x_3403_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3404_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3405_ = lean_array_size(v_segments_3401_);
v___x_3406_ = ((size_t)0ULL);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3404_, v___f_3285_, v_sz_3405_, v___x_3406_, v_segments_3401_);
v___x_3408_ = lean_array_to_list(v___x_3407_);
v_result_3409_ = l_String_intercalate(v___x_3403_, v___x_3408_);
if (v_absolute_3402_ == 0)
{
v___y_3390_ = v___y_3400_;
v___y_3391_ = v_result_3409_;
goto v___jp_3389_;
}
else
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_string_append(v___x_3403_, v_result_3409_);
lean_dec_ref(v_result_3409_);
v___y_3390_ = v___y_3400_;
v___y_3391_ = v___x_3410_;
goto v___jp_3389_;
}
}
}
v___jp_3287_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3292_ = lean_string_append(v___y_3290_, v___y_3288_);
lean_dec_ref(v___y_3288_);
v___x_3293_ = lean_string_append(v___x_3292_, v___y_3289_);
lean_dec_ref(v___y_3289_);
v___x_3294_ = lean_string_append(v___x_3293_, v___y_3291_);
lean_dec_ref(v___y_3291_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl(lean_object* v_x_3464_){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_obj_tag_nat(v_x_3464_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl___boxed(lean_object* v_x_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Std_Http_RequestTarget_ctorIdx___impl(v_x_3466_);
lean_dec(v_x_3466_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object* v_t_3468_, lean_object* v_k_3469_){
_start:
{
switch(lean_obj_tag(v_t_3468_))
{
case 0:
{
lean_object* v_path_3470_; lean_object* v_query_3471_; lean_object* v___x_3472_; 
v_path_3470_ = lean_ctor_get(v_t_3468_, 0);
lean_inc_ref(v_path_3470_);
v_query_3471_ = lean_ctor_get(v_t_3468_, 1);
lean_inc(v_query_3471_);
lean_dec_ref_known(v_t_3468_, 2);
v___x_3472_ = lean_apply_2(v_k_3469_, v_path_3470_, v_query_3471_);
return v___x_3472_;
}
case 3:
{
return v_k_3469_;
}
default: 
{
lean_object* v_uri_3473_; lean_object* v___x_3474_; 
v_uri_3473_ = lean_ctor_get(v_t_3468_, 0);
lean_inc_ref(v_uri_3473_);
lean_dec(v_t_3468_);
v___x_3474_ = lean_apply_1(v_k_3469_, v_uri_3473_);
return v___x_3474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object* v_motive_3475_, lean_object* v_ctorIdx_3476_, lean_object* v_t_3477_, lean_object* v_h_3478_, lean_object* v_k_3479_){
_start:
{
lean_object* v___x_3480_; 
v___x_3480_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3477_, v_k_3479_);
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object* v_motive_3481_, lean_object* v_ctorIdx_3482_, lean_object* v_t_3483_, lean_object* v_h_3484_, lean_object* v_k_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l_Std_Http_RequestTarget_ctorElim(v_motive_3481_, v_ctorIdx_3482_, v_t_3483_, v_h_3484_, v_k_3485_);
lean_dec(v_ctorIdx_3482_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object* v_t_3487_, lean_object* v_originForm_3488_){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3487_, v_originForm_3488_);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object* v_motive_3490_, lean_object* v_t_3491_, lean_object* v_h_3492_, lean_object* v_originForm_3493_){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3491_, v_originForm_3493_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object* v_t_3495_, lean_object* v_absoluteForm_3496_){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3495_, v_absoluteForm_3496_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object* v_motive_3498_, lean_object* v_t_3499_, lean_object* v_h_3500_, lean_object* v_absoluteForm_3501_){
_start:
{
lean_object* v___x_3502_; 
v___x_3502_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3499_, v_absoluteForm_3501_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object* v_t_3503_, lean_object* v_authorityForm_3504_){
_start:
{
lean_object* v___x_3505_; 
v___x_3505_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3503_, v_authorityForm_3504_);
return v___x_3505_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object* v_motive_3506_, lean_object* v_t_3507_, lean_object* v_h_3508_, lean_object* v_authorityForm_3509_){
_start:
{
lean_object* v___x_3510_; 
v___x_3510_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3507_, v_authorityForm_3509_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object* v_t_3511_, lean_object* v_asteriskForm_3512_){
_start:
{
lean_object* v___x_3513_; 
v___x_3513_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3511_, v_asteriskForm_3512_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object* v_motive_3514_, lean_object* v_t_3515_, lean_object* v_h_3516_, lean_object* v_asteriskForm_3517_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3515_, v_asteriskForm_3517_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object* v_x_3545_, lean_object* v_prec_3546_){
_start:
{
lean_object* v___y_3548_; 
switch(lean_obj_tag(v_x_3545_))
{
case 0:
{
lean_object* v_path_3554_; lean_object* v_query_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3579_; 
v_path_3554_ = lean_ctor_get(v_x_3545_, 0);
v_query_3555_ = lean_ctor_get(v_x_3545_, 1);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_x_3545_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3557_ = v_x_3545_;
v_isShared_3558_ = v_isSharedCheck_3579_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_query_3555_);
lean_inc(v_path_3554_);
lean_dec(v_x_3545_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3579_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___y_3560_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3575_ = lean_unsigned_to_nat(1024u);
v___x_3576_ = lean_nat_dec_le(v___x_3575_, v_prec_3546_);
if (v___x_3576_ == 0)
{
lean_object* v___x_3577_; 
v___x_3577_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3560_ = v___x_3577_;
goto v___jp_3559_;
}
else
{
lean_object* v___x_3578_; 
v___x_3578_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3560_ = v___x_3578_;
goto v___jp_3559_;
}
v___jp_3559_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3566_; 
v___x_3561_ = lean_box(1);
v___x_3562_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__4));
v___x_3563_ = lean_unsigned_to_nat(1024u);
v___x_3564_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3554_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set_tag(v___x_3557_, 5);
lean_ctor_set(v___x_3557_, 1, v___x_3564_);
lean_ctor_set(v___x_3557_, 0, v___x_3562_);
v___x_3566_ = v___x_3557_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3562_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v___x_3564_);
v___x_3566_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3567_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
lean_ctor_set(v___x_3567_, 1, v___x_3561_);
v___x_3568_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3555_, v___x_3563_);
v___x_3569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3567_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
lean_inc(v___y_3560_);
v___x_3570_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___y_3560_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v___x_3571_ = 0;
v___x_3572_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3572_, 0, v___x_3570_);
lean_ctor_set_uint8(v___x_3572_, sizeof(void*)*1, v___x_3571_);
v___x_3573_ = l_Repr_addAppParen(v___x_3572_, v_prec_3546_);
return v___x_3573_;
}
}
}
}
case 1:
{
lean_object* v_uri_3580_; lean_object* v___y_3582_; lean_object* v___x_3590_; uint8_t v___x_3591_; 
v_uri_3580_ = lean_ctor_get(v_x_3545_, 0);
lean_inc_ref(v_uri_3580_);
lean_dec_ref_known(v_x_3545_, 1);
v___x_3590_ = lean_unsigned_to_nat(1024u);
v___x_3591_ = lean_nat_dec_le(v___x_3590_, v_prec_3546_);
if (v___x_3591_ == 0)
{
lean_object* v___x_3592_; 
v___x_3592_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3582_ = v___x_3592_;
goto v___jp_3581_;
}
else
{
lean_object* v___x_3593_; 
v___x_3593_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3582_ = v___x_3593_;
goto v___jp_3581_;
}
v___jp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; uint8_t v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3583_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__7));
v___x_3584_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3580_);
v___x_3585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3583_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
lean_inc(v___y_3582_);
v___x_3586_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3586_, 0, v___y_3582_);
lean_ctor_set(v___x_3586_, 1, v___x_3585_);
v___x_3587_ = 0;
v___x_3588_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3588_, 0, v___x_3586_);
lean_ctor_set_uint8(v___x_3588_, sizeof(void*)*1, v___x_3587_);
v___x_3589_ = l_Repr_addAppParen(v___x_3588_, v_prec_3546_);
return v___x_3589_;
}
}
case 2:
{
lean_object* v_authority_3594_; lean_object* v___y_3596_; lean_object* v___x_3604_; uint8_t v___x_3605_; 
v_authority_3594_ = lean_ctor_get(v_x_3545_, 0);
lean_inc_ref(v_authority_3594_);
lean_dec_ref_known(v_x_3545_, 1);
v___x_3604_ = lean_unsigned_to_nat(1024u);
v___x_3605_ = lean_nat_dec_le(v___x_3604_, v_prec_3546_);
if (v___x_3605_ == 0)
{
lean_object* v___x_3606_; 
v___x_3606_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3596_ = v___x_3606_;
goto v___jp_3595_;
}
else
{
lean_object* v___x_3607_; 
v___x_3607_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3596_ = v___x_3607_;
goto v___jp_3595_;
}
v___jp_3595_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; uint8_t v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3597_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__10));
v___x_3598_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_authority_3594_);
v___x_3599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3597_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
lean_inc(v___y_3596_);
v___x_3600_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___y_3596_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
v___x_3601_ = 0;
v___x_3602_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3602_, 0, v___x_3600_);
lean_ctor_set_uint8(v___x_3602_, sizeof(void*)*1, v___x_3601_);
v___x_3603_ = l_Repr_addAppParen(v___x_3602_, v_prec_3546_);
return v___x_3603_;
}
}
default: 
{
lean_object* v___x_3608_; uint8_t v___x_3609_; 
v___x_3608_ = lean_unsigned_to_nat(1024u);
v___x_3609_ = lean_nat_dec_le(v___x_3608_, v_prec_3546_);
if (v___x_3609_ == 0)
{
lean_object* v___x_3610_; 
v___x_3610_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3548_ = v___x_3610_;
goto v___jp_3547_;
}
else
{
lean_object* v___x_3611_; 
v___x_3611_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3548_ = v___x_3611_;
goto v___jp_3547_;
}
}
}
v___jp_3547_:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3549_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__1));
lean_inc(v___y_3548_);
v___x_3550_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___y_3548_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = 0;
v___x_3552_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3552_, 0, v___x_3550_);
lean_ctor_set_uint8(v___x_3552_, sizeof(void*)*1, v___x_3551_);
v___x_3553_ = l_Repr_addAppParen(v___x_3552_, v_prec_3546_);
return v___x_3553_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object* v_x_3612_, lean_object* v_prec_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Std_Http_instReprRequestTarget_repr(v_x_3612_, v_prec_3613_);
lean_dec(v_prec_3613_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object* v_x_3622_){
_start:
{
switch(lean_obj_tag(v_x_3622_))
{
case 0:
{
lean_object* v_path_3623_; 
v_path_3623_ = lean_ctor_get(v_x_3622_, 0);
lean_inc_ref(v_path_3623_);
return v_path_3623_;
}
case 1:
{
lean_object* v_uri_3624_; lean_object* v_path_3625_; 
v_uri_3624_ = lean_ctor_get(v_x_3622_, 0);
v_path_3625_ = lean_ctor_get(v_uri_3624_, 2);
lean_inc_ref(v_path_3625_);
return v_path_3625_;
}
default: 
{
lean_object* v___x_3626_; 
v___x_3626_ = ((lean_object*)(l_Std_Http_RequestTarget_path___closed__1));
return v___x_3626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object* v_x_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Std_Http_RequestTarget_path(v_x_3627_);
lean_dec(v_x_3627_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object* v_x_3629_){
_start:
{
switch(lean_obj_tag(v_x_3629_))
{
case 0:
{
lean_object* v_query_3630_; 
v_query_3630_ = lean_ctor_get(v_x_3629_, 1);
if (lean_obj_tag(v_query_3630_) == 0)
{
lean_object* v___x_3631_; 
v___x_3631_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3631_;
}
else
{
lean_object* v_val_3632_; 
v_val_3632_ = lean_ctor_get(v_query_3630_, 0);
lean_inc(v_val_3632_);
return v_val_3632_;
}
}
case 1:
{
lean_object* v_uri_3633_; lean_object* v_query_3634_; 
v_uri_3633_ = lean_ctor_get(v_x_3629_, 0);
v_query_3634_ = lean_ctor_get(v_uri_3633_, 3);
if (lean_obj_tag(v_query_3634_) == 0)
{
lean_object* v___x_3635_; 
v___x_3635_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3635_;
}
else
{
lean_object* v_val_3636_; 
v_val_3636_ = lean_ctor_get(v_query_3634_, 0);
lean_inc(v_val_3636_);
return v_val_3636_;
}
}
default: 
{
lean_object* v___x_3637_; 
v___x_3637_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object* v_x_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Std_Http_RequestTarget_query(v_x_3638_);
lean_dec(v_x_3638_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object* v_x_3640_){
_start:
{
switch(lean_obj_tag(v_x_3640_))
{
case 2:
{
lean_object* v_authority_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
v_authority_3641_ = lean_ctor_get(v_x_3640_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_x_3640_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v_x_3640_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_authority_3641_);
lean_dec(v_x_3640_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
lean_ctor_set_tag(v___x_3643_, 1);
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_authority_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
case 1:
{
lean_object* v_uri_3649_; lean_object* v_authority_3650_; 
v_uri_3649_ = lean_ctor_get(v_x_3640_, 0);
lean_inc_ref(v_uri_3649_);
lean_dec_ref_known(v_x_3640_, 1);
v_authority_3650_ = lean_ctor_get(v_uri_3649_, 1);
lean_inc(v_authority_3650_);
lean_dec_ref(v_uri_3649_);
return v_authority_3650_;
}
default: 
{
lean_object* v___x_3651_; 
lean_dec(v_x_3640_);
v___x_3651_ = lean_box(0);
return v___x_3651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__2(lean_object* v___f_3653_, lean_object* v___f_3654_, lean_object* v_x_3655_){
_start:
{
lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; 
switch(lean_obj_tag(v_x_3655_))
{
case 0:
{
lean_object* v_path_3662_; lean_object* v_query_3663_; lean_object* v___y_3665_; lean_object* v_segments_3668_; uint8_t v_absolute_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; size_t v_sz_3672_; size_t v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v_result_3676_; 
lean_dec_ref(v___f_3654_);
v_path_3662_ = lean_ctor_get(v_x_3655_, 0);
lean_inc_ref(v_path_3662_);
v_query_3663_ = lean_ctor_get(v_x_3655_, 1);
lean_inc(v_query_3663_);
lean_dec_ref_known(v_x_3655_, 2);
v_segments_3668_ = lean_ctor_get(v_path_3662_, 0);
lean_inc_ref(v_segments_3668_);
v_absolute_3669_ = lean_ctor_get_uint8(v_path_3662_, sizeof(void*)*1);
lean_dec_ref(v_path_3662_);
v___x_3670_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3671_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3672_ = lean_array_size(v_segments_3668_);
v___x_3673_ = ((size_t)0ULL);
v___x_3674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3671_, v___f_3653_, v_sz_3672_, v___x_3673_, v_segments_3668_);
v___x_3675_ = lean_array_to_list(v___x_3674_);
v_result_3676_ = l_String_intercalate(v___x_3670_, v___x_3675_);
if (v_absolute_3669_ == 0)
{
v___y_3665_ = v_result_3676_;
goto v___jp_3664_;
}
else
{
lean_object* v___x_3677_; 
v___x_3677_ = lean_string_append(v___x_3670_, v_result_3676_);
lean_dec_ref(v_result_3676_);
v___y_3665_ = v___x_3677_;
goto v___jp_3664_;
}
v___jp_3664_:
{
lean_object* v_queryStr_3666_; lean_object* v___x_3667_; 
v_queryStr_3666_ = l_Std_Http_URI_Query_formatOption(v_query_3663_);
v___x_3667_ = lean_string_append(v___y_3665_, v_queryStr_3666_);
lean_dec_ref(v_queryStr_3666_);
return v___x_3667_;
}
}
case 1:
{
lean_object* v_uri_3678_; lean_object* v_scheme_3679_; lean_object* v_authority_3680_; lean_object* v_path_3681_; lean_object* v_query_3682_; lean_object* v_fragment_3683_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3706_; 
lean_dec_ref(v___f_3653_);
v_uri_3678_ = lean_ctor_get(v_x_3655_, 0);
lean_inc_ref(v_uri_3678_);
lean_dec_ref_known(v_x_3655_, 1);
v_scheme_3679_ = lean_ctor_get(v_uri_3678_, 0);
lean_inc_ref(v_scheme_3679_);
v_authority_3680_ = lean_ctor_get(v_uri_3678_, 1);
lean_inc(v_authority_3680_);
v_path_3681_ = lean_ctor_get(v_uri_3678_, 2);
lean_inc_ref(v_path_3681_);
v_query_3682_ = lean_ctor_get(v_uri_3678_, 3);
lean_inc(v_query_3682_);
v_fragment_3683_ = lean_ctor_get(v_uri_3678_, 4);
lean_inc(v_fragment_3683_);
lean_dec_ref(v_uri_3678_);
if (lean_obj_tag(v_authority_3680_) == 0)
{
lean_object* v___x_3717_; 
v___x_3717_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3706_ = v___x_3717_;
goto v___jp_3705_;
}
else
{
lean_object* v_val_3718_; lean_object* v_userInfo_3719_; lean_object* v_host_3720_; lean_object* v_port_3721_; lean_object* v___x_3722_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3741_; 
v_val_3718_ = lean_ctor_get(v_authority_3680_, 0);
lean_inc(v_val_3718_);
lean_dec_ref_known(v_authority_3680_, 1);
v_userInfo_3719_ = lean_ctor_get(v_val_3718_, 0);
lean_inc(v_userInfo_3719_);
v_host_3720_ = lean_ctor_get(v_val_3718_, 1);
lean_inc_ref(v_host_3720_);
v_port_3721_ = lean_ctor_get(v_val_3718_, 2);
lean_inc(v_port_3721_);
lean_dec(v_val_3718_);
v___x_3722_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3719_) == 0)
{
lean_object* v___x_3751_; 
v___x_3751_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3741_ = v___x_3751_;
goto v___jp_3740_;
}
else
{
lean_object* v_val_3752_; lean_object* v_password_3753_; 
v_val_3752_ = lean_ctor_get(v_userInfo_3719_, 0);
lean_inc(v_val_3752_);
lean_dec_ref_known(v_userInfo_3719_, 1);
v_password_3753_ = lean_ctor_get(v_val_3752_, 1);
if (lean_obj_tag(v_password_3753_) == 0)
{
lean_object* v_username_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v_username_3754_ = lean_ctor_get(v_val_3752_, 0);
lean_inc_ref(v_username_3754_);
lean_dec(v_val_3752_);
v___x_3755_ = lean_string_from_utf8_unchecked(v_username_3754_);
v___x_3756_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3757_ = lean_string_append(v___x_3755_, v___x_3756_);
v___y_3741_ = v___x_3757_;
goto v___jp_3740_;
}
else
{
lean_object* v_username_3758_; lean_object* v_val_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
lean_inc_ref(v_password_3753_);
v_username_3758_ = lean_ctor_get(v_val_3752_, 0);
lean_inc_ref(v_username_3758_);
lean_dec(v_val_3752_);
v_val_3759_ = lean_ctor_get(v_password_3753_, 0);
lean_inc(v_val_3759_);
lean_dec_ref_known(v_password_3753_, 1);
v___x_3760_ = lean_string_from_utf8_unchecked(v_username_3758_);
v___x_3761_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3762_ = lean_string_append(v___x_3760_, v___x_3761_);
v___x_3763_ = lean_string_from_utf8_unchecked(v_val_3759_);
v___x_3764_ = lean_string_append(v___x_3762_, v___x_3763_);
lean_dec_ref(v___x_3763_);
v___x_3765_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3766_ = lean_string_append(v___x_3764_, v___x_3765_);
v___y_3741_ = v___x_3766_;
goto v___jp_3740_;
}
}
v___jp_3723_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3727_ = lean_string_append(v___y_3725_, v___y_3724_);
lean_dec_ref(v___y_3724_);
v___x_3728_ = lean_string_append(v___x_3727_, v___y_3726_);
lean_dec_ref(v___y_3726_);
v___x_3729_ = lean_string_append(v___x_3722_, v___x_3728_);
lean_dec_ref(v___x_3728_);
v___y_3706_ = v___x_3729_;
goto v___jp_3705_;
}
v___jp_3730_:
{
switch(lean_obj_tag(v_port_3721_))
{
case 0:
{
lean_object* v___x_3733_; 
v___x_3733_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3724_ = v___y_3732_;
v___y_3725_ = v___y_3731_;
v___y_3726_ = v___x_3733_;
goto v___jp_3723_;
}
case 1:
{
lean_object* v___x_3734_; 
v___x_3734_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3724_ = v___y_3732_;
v___y_3725_ = v___y_3731_;
v___y_3726_ = v___x_3734_;
goto v___jp_3723_;
}
default: 
{
uint16_t v_port_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v_port_3735_ = lean_ctor_get_uint16(v_port_3721_, 0);
lean_dec_ref_known(v_port_3721_, 0);
v___x_3736_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3737_ = lean_uint16_to_nat(v_port_3735_);
v___x_3738_ = l_Nat_reprFast(v___x_3737_);
v___x_3739_ = lean_string_append(v___x_3736_, v___x_3738_);
lean_dec_ref(v___x_3738_);
v___y_3724_ = v___y_3732_;
v___y_3725_ = v___y_3731_;
v___y_3726_ = v___x_3739_;
goto v___jp_3723_;
}
}
}
v___jp_3740_:
{
switch(lean_obj_tag(v_host_3720_))
{
case 0:
{
lean_object* v_name_3742_; 
v_name_3742_ = lean_ctor_get(v_host_3720_, 0);
lean_inc_ref(v_name_3742_);
lean_dec_ref_known(v_host_3720_, 1);
v___y_3731_ = v___y_3741_;
v___y_3732_ = v_name_3742_;
goto v___jp_3730_;
}
case 1:
{
lean_object* v_ipv4_3743_; lean_object* v___x_3744_; 
v_ipv4_3743_ = lean_ctor_get(v_host_3720_, 0);
lean_inc_ref(v_ipv4_3743_);
lean_dec_ref_known(v_host_3720_, 1);
v___x_3744_ = lean_uv_ntop_v4(v_ipv4_3743_);
lean_dec_ref(v_ipv4_3743_);
v___y_3731_ = v___y_3741_;
v___y_3732_ = v___x_3744_;
goto v___jp_3730_;
}
default: 
{
lean_object* v_ipv6_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v_ipv6_3745_ = lean_ctor_get(v_host_3720_, 0);
lean_inc_ref(v_ipv6_3745_);
lean_dec_ref_known(v_host_3720_, 1);
v___x_3746_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3747_ = lean_uv_ntop_v6(v_ipv6_3745_);
lean_dec_ref(v_ipv6_3745_);
v___x_3748_ = lean_string_append(v___x_3746_, v___x_3747_);
lean_dec_ref(v___x_3747_);
v___x_3749_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3750_ = lean_string_append(v___x_3748_, v___x_3749_);
v___y_3731_ = v___y_3741_;
v___y_3732_ = v___x_3750_;
goto v___jp_3730_;
}
}
}
}
v___jp_3684_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3689_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3690_ = lean_string_append(v_scheme_3679_, v___x_3689_);
v___x_3691_ = lean_string_append(v___x_3690_, v___y_3685_);
lean_dec_ref(v___y_3685_);
v___x_3692_ = lean_string_append(v___x_3691_, v___y_3687_);
lean_dec_ref(v___y_3687_);
v___x_3693_ = lean_string_append(v___x_3692_, v___y_3686_);
lean_dec_ref(v___y_3686_);
v___x_3694_ = lean_string_append(v___x_3693_, v___y_3688_);
lean_dec_ref(v___y_3688_);
return v___x_3694_;
}
v___jp_3695_:
{
lean_object* v_queryPart_3698_; 
v_queryPart_3698_ = l_Std_Http_URI_Query_formatOption(v_query_3682_);
if (lean_obj_tag(v_fragment_3683_) == 0)
{
lean_object* v___x_3699_; 
v___x_3699_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3685_ = v___y_3696_;
v___y_3686_ = v_queryPart_3698_;
v___y_3687_ = v___y_3697_;
v___y_3688_ = v___x_3699_;
goto v___jp_3684_;
}
else
{
lean_object* v_val_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v_val_3700_ = lean_ctor_get(v_fragment_3683_, 0);
lean_inc(v_val_3700_);
lean_dec_ref_known(v_fragment_3683_, 1);
v___x_3701_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3702_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3700_);
v___x_3703_ = lean_string_from_utf8_unchecked(v___x_3702_);
v___x_3704_ = lean_string_append(v___x_3701_, v___x_3703_);
lean_dec_ref(v___x_3703_);
v___y_3685_ = v___y_3696_;
v___y_3686_ = v_queryPart_3698_;
v___y_3687_ = v___y_3697_;
v___y_3688_ = v___x_3704_;
goto v___jp_3684_;
}
}
v___jp_3705_:
{
lean_object* v_segments_3707_; uint8_t v_absolute_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; size_t v_sz_3711_; size_t v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v_result_3715_; 
v_segments_3707_ = lean_ctor_get(v_path_3681_, 0);
lean_inc_ref(v_segments_3707_);
v_absolute_3708_ = lean_ctor_get_uint8(v_path_3681_, sizeof(void*)*1);
lean_dec_ref(v_path_3681_);
v___x_3709_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3710_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3711_ = lean_array_size(v_segments_3707_);
v___x_3712_ = ((size_t)0ULL);
v___x_3713_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3710_, v___f_3654_, v_sz_3711_, v___x_3712_, v_segments_3707_);
v___x_3714_ = lean_array_to_list(v___x_3713_);
v_result_3715_ = l_String_intercalate(v___x_3709_, v___x_3714_);
if (v_absolute_3708_ == 0)
{
v___y_3696_ = v___y_3706_;
v___y_3697_ = v_result_3715_;
goto v___jp_3695_;
}
else
{
lean_object* v___x_3716_; 
v___x_3716_ = lean_string_append(v___x_3709_, v_result_3715_);
lean_dec_ref(v_result_3715_);
v___y_3696_ = v___y_3706_;
v___y_3697_ = v___x_3716_;
goto v___jp_3695_;
}
}
}
case 2:
{
lean_object* v_authority_3767_; lean_object* v_userInfo_3768_; lean_object* v_host_3769_; lean_object* v_port_3770_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3782_; 
lean_dec_ref(v___f_3654_);
lean_dec_ref(v___f_3653_);
v_authority_3767_ = lean_ctor_get(v_x_3655_, 0);
lean_inc_ref(v_authority_3767_);
lean_dec_ref_known(v_x_3655_, 1);
v_userInfo_3768_ = lean_ctor_get(v_authority_3767_, 0);
lean_inc(v_userInfo_3768_);
v_host_3769_ = lean_ctor_get(v_authority_3767_, 1);
lean_inc_ref(v_host_3769_);
v_port_3770_ = lean_ctor_get(v_authority_3767_, 2);
lean_inc(v_port_3770_);
lean_dec_ref(v_authority_3767_);
if (lean_obj_tag(v_userInfo_3768_) == 0)
{
lean_object* v___x_3792_; 
v___x_3792_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3782_ = v___x_3792_;
goto v___jp_3781_;
}
else
{
lean_object* v_val_3793_; lean_object* v_password_3794_; 
v_val_3793_ = lean_ctor_get(v_userInfo_3768_, 0);
lean_inc(v_val_3793_);
lean_dec_ref_known(v_userInfo_3768_, 1);
v_password_3794_ = lean_ctor_get(v_val_3793_, 1);
if (lean_obj_tag(v_password_3794_) == 0)
{
lean_object* v_username_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v_username_3795_ = lean_ctor_get(v_val_3793_, 0);
lean_inc_ref(v_username_3795_);
lean_dec(v_val_3793_);
v___x_3796_ = lean_string_from_utf8_unchecked(v_username_3795_);
v___x_3797_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3798_ = lean_string_append(v___x_3796_, v___x_3797_);
v___y_3782_ = v___x_3798_;
goto v___jp_3781_;
}
else
{
lean_object* v_username_3799_; lean_object* v_val_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
lean_inc_ref(v_password_3794_);
v_username_3799_ = lean_ctor_get(v_val_3793_, 0);
lean_inc_ref(v_username_3799_);
lean_dec(v_val_3793_);
v_val_3800_ = lean_ctor_get(v_password_3794_, 0);
lean_inc(v_val_3800_);
lean_dec_ref_known(v_password_3794_, 1);
v___x_3801_ = lean_string_from_utf8_unchecked(v_username_3799_);
v___x_3802_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3803_ = lean_string_append(v___x_3801_, v___x_3802_);
v___x_3804_ = lean_string_from_utf8_unchecked(v_val_3800_);
v___x_3805_ = lean_string_append(v___x_3803_, v___x_3804_);
lean_dec_ref(v___x_3804_);
v___x_3806_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3807_ = lean_string_append(v___x_3805_, v___x_3806_);
v___y_3782_ = v___x_3807_;
goto v___jp_3781_;
}
}
v___jp_3771_:
{
switch(lean_obj_tag(v_port_3770_))
{
case 0:
{
lean_object* v___x_3774_; 
v___x_3774_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3657_ = v___y_3772_;
v___y_3658_ = v___y_3773_;
v___y_3659_ = v___x_3774_;
goto v___jp_3656_;
}
case 1:
{
lean_object* v___x_3775_; 
v___x_3775_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3657_ = v___y_3772_;
v___y_3658_ = v___y_3773_;
v___y_3659_ = v___x_3775_;
goto v___jp_3656_;
}
default: 
{
uint16_t v_port_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
v_port_3776_ = lean_ctor_get_uint16(v_port_3770_, 0);
lean_dec_ref_known(v_port_3770_, 0);
v___x_3777_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3778_ = lean_uint16_to_nat(v_port_3776_);
v___x_3779_ = l_Nat_reprFast(v___x_3778_);
v___x_3780_ = lean_string_append(v___x_3777_, v___x_3779_);
lean_dec_ref(v___x_3779_);
v___y_3657_ = v___y_3772_;
v___y_3658_ = v___y_3773_;
v___y_3659_ = v___x_3780_;
goto v___jp_3656_;
}
}
}
v___jp_3781_:
{
switch(lean_obj_tag(v_host_3769_))
{
case 0:
{
lean_object* v_name_3783_; 
v_name_3783_ = lean_ctor_get(v_host_3769_, 0);
lean_inc_ref(v_name_3783_);
lean_dec_ref_known(v_host_3769_, 1);
v___y_3772_ = v___y_3782_;
v___y_3773_ = v_name_3783_;
goto v___jp_3771_;
}
case 1:
{
lean_object* v_ipv4_3784_; lean_object* v___x_3785_; 
v_ipv4_3784_ = lean_ctor_get(v_host_3769_, 0);
lean_inc_ref(v_ipv4_3784_);
lean_dec_ref_known(v_host_3769_, 1);
v___x_3785_ = lean_uv_ntop_v4(v_ipv4_3784_);
lean_dec_ref(v_ipv4_3784_);
v___y_3772_ = v___y_3782_;
v___y_3773_ = v___x_3785_;
goto v___jp_3771_;
}
default: 
{
lean_object* v_ipv6_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v_ipv6_3786_ = lean_ctor_get(v_host_3769_, 0);
lean_inc_ref(v_ipv6_3786_);
lean_dec_ref_known(v_host_3769_, 1);
v___x_3787_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3788_ = lean_uv_ntop_v6(v_ipv6_3786_);
lean_dec_ref(v_ipv6_3786_);
v___x_3789_ = lean_string_append(v___x_3787_, v___x_3788_);
lean_dec_ref(v___x_3788_);
v___x_3790_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3791_ = lean_string_append(v___x_3789_, v___x_3790_);
v___y_3772_ = v___y_3782_;
v___y_3773_ = v___x_3791_;
goto v___jp_3771_;
}
}
}
}
default: 
{
lean_object* v___x_3808_; 
lean_dec_ref(v___f_3654_);
lean_dec_ref(v___f_3653_);
v___x_3808_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
return v___x_3808_;
}
}
v___jp_3656_:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3660_ = lean_string_append(v___y_3657_, v___y_3658_);
lean_dec_ref(v___y_3658_);
v___x_3661_ = lean_string_append(v___x_3660_, v___y_3659_);
lean_dec_ref(v___y_3659_);
return v___x_3661_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__2(lean_object* v___f_3812_, lean_object* v___f_3813_, lean_object* v_buffer_3814_, lean_object* v_target_3815_){
_start:
{
lean_object* v___y_3817_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; 
switch(lean_obj_tag(v_target_3815_))
{
case 0:
{
lean_object* v_path_3837_; lean_object* v_query_3838_; lean_object* v___y_3840_; lean_object* v_segments_3843_; uint8_t v_absolute_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; size_t v_sz_3847_; size_t v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v_result_3851_; 
lean_dec_ref(v___f_3813_);
v_path_3837_ = lean_ctor_get(v_target_3815_, 0);
lean_inc_ref(v_path_3837_);
v_query_3838_ = lean_ctor_get(v_target_3815_, 1);
lean_inc(v_query_3838_);
lean_dec_ref_known(v_target_3815_, 2);
v_segments_3843_ = lean_ctor_get(v_path_3837_, 0);
lean_inc_ref(v_segments_3843_);
v_absolute_3844_ = lean_ctor_get_uint8(v_path_3837_, sizeof(void*)*1);
lean_dec_ref(v_path_3837_);
v___x_3845_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3846_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3847_ = lean_array_size(v_segments_3843_);
v___x_3848_ = ((size_t)0ULL);
v___x_3849_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3846_, v___f_3812_, v_sz_3847_, v___x_3848_, v_segments_3843_);
v___x_3850_ = lean_array_to_list(v___x_3849_);
v_result_3851_ = l_String_intercalate(v___x_3845_, v___x_3850_);
if (v_absolute_3844_ == 0)
{
v___y_3840_ = v_result_3851_;
goto v___jp_3839_;
}
else
{
lean_object* v___x_3852_; 
v___x_3852_ = lean_string_append(v___x_3845_, v_result_3851_);
lean_dec_ref(v_result_3851_);
v___y_3840_ = v___x_3852_;
goto v___jp_3839_;
}
v___jp_3839_:
{
lean_object* v_queryStr_3841_; lean_object* v___x_3842_; 
v_queryStr_3841_ = l_Std_Http_URI_Query_formatOption(v_query_3838_);
v___x_3842_ = lean_string_append(v___y_3840_, v_queryStr_3841_);
lean_dec_ref(v_queryStr_3841_);
v___y_3817_ = v___x_3842_;
goto v___jp_3816_;
}
}
case 1:
{
lean_object* v_uri_3853_; lean_object* v_scheme_3854_; lean_object* v_authority_3855_; lean_object* v_path_3856_; lean_object* v_query_3857_; lean_object* v_fragment_3858_; lean_object* v___y_3860_; lean_object* v___y_3861_; lean_object* v___y_3862_; lean_object* v___y_3863_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3881_; 
lean_dec_ref(v___f_3812_);
v_uri_3853_ = lean_ctor_get(v_target_3815_, 0);
lean_inc_ref(v_uri_3853_);
lean_dec_ref_known(v_target_3815_, 1);
v_scheme_3854_ = lean_ctor_get(v_uri_3853_, 0);
lean_inc_ref(v_scheme_3854_);
v_authority_3855_ = lean_ctor_get(v_uri_3853_, 1);
lean_inc(v_authority_3855_);
v_path_3856_ = lean_ctor_get(v_uri_3853_, 2);
lean_inc_ref(v_path_3856_);
v_query_3857_ = lean_ctor_get(v_uri_3853_, 3);
lean_inc(v_query_3857_);
v_fragment_3858_ = lean_ctor_get(v_uri_3853_, 4);
lean_inc(v_fragment_3858_);
lean_dec_ref(v_uri_3853_);
if (lean_obj_tag(v_authority_3855_) == 0)
{
lean_object* v___x_3892_; 
v___x_3892_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3881_ = v___x_3892_;
goto v___jp_3880_;
}
else
{
lean_object* v_val_3893_; lean_object* v_userInfo_3894_; lean_object* v_host_3895_; lean_object* v_port_3896_; lean_object* v___x_3897_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v___y_3901_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3916_; 
v_val_3893_ = lean_ctor_get(v_authority_3855_, 0);
lean_inc(v_val_3893_);
lean_dec_ref_known(v_authority_3855_, 1);
v_userInfo_3894_ = lean_ctor_get(v_val_3893_, 0);
lean_inc(v_userInfo_3894_);
v_host_3895_ = lean_ctor_get(v_val_3893_, 1);
lean_inc_ref(v_host_3895_);
v_port_3896_ = lean_ctor_get(v_val_3893_, 2);
lean_inc(v_port_3896_);
lean_dec(v_val_3893_);
v___x_3897_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3894_) == 0)
{
lean_object* v___x_3926_; 
v___x_3926_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3916_ = v___x_3926_;
goto v___jp_3915_;
}
else
{
lean_object* v_val_3927_; lean_object* v_password_3928_; 
v_val_3927_ = lean_ctor_get(v_userInfo_3894_, 0);
lean_inc(v_val_3927_);
lean_dec_ref_known(v_userInfo_3894_, 1);
v_password_3928_ = lean_ctor_get(v_val_3927_, 1);
if (lean_obj_tag(v_password_3928_) == 0)
{
lean_object* v_username_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v_username_3929_ = lean_ctor_get(v_val_3927_, 0);
lean_inc_ref(v_username_3929_);
lean_dec(v_val_3927_);
v___x_3930_ = lean_string_from_utf8_unchecked(v_username_3929_);
v___x_3931_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3932_ = lean_string_append(v___x_3930_, v___x_3931_);
v___y_3916_ = v___x_3932_;
goto v___jp_3915_;
}
else
{
lean_object* v_username_3933_; lean_object* v_val_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
lean_inc_ref(v_password_3928_);
v_username_3933_ = lean_ctor_get(v_val_3927_, 0);
lean_inc_ref(v_username_3933_);
lean_dec(v_val_3927_);
v_val_3934_ = lean_ctor_get(v_password_3928_, 0);
lean_inc(v_val_3934_);
lean_dec_ref_known(v_password_3928_, 1);
v___x_3935_ = lean_string_from_utf8_unchecked(v_username_3933_);
v___x_3936_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3937_ = lean_string_append(v___x_3935_, v___x_3936_);
v___x_3938_ = lean_string_from_utf8_unchecked(v_val_3934_);
v___x_3939_ = lean_string_append(v___x_3937_, v___x_3938_);
lean_dec_ref(v___x_3938_);
v___x_3940_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3941_ = lean_string_append(v___x_3939_, v___x_3940_);
v___y_3916_ = v___x_3941_;
goto v___jp_3915_;
}
}
v___jp_3898_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3902_ = lean_string_append(v___y_3900_, v___y_3899_);
lean_dec_ref(v___y_3899_);
v___x_3903_ = lean_string_append(v___x_3902_, v___y_3901_);
lean_dec_ref(v___y_3901_);
v___x_3904_ = lean_string_append(v___x_3897_, v___x_3903_);
lean_dec_ref(v___x_3903_);
v___y_3881_ = v___x_3904_;
goto v___jp_3880_;
}
v___jp_3905_:
{
switch(lean_obj_tag(v_port_3896_))
{
case 0:
{
lean_object* v___x_3908_; 
v___x_3908_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3899_ = v___y_3907_;
v___y_3900_ = v___y_3906_;
v___y_3901_ = v___x_3908_;
goto v___jp_3898_;
}
case 1:
{
lean_object* v___x_3909_; 
v___x_3909_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3899_ = v___y_3907_;
v___y_3900_ = v___y_3906_;
v___y_3901_ = v___x_3909_;
goto v___jp_3898_;
}
default: 
{
uint16_t v_port_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v_port_3910_ = lean_ctor_get_uint16(v_port_3896_, 0);
lean_dec_ref_known(v_port_3896_, 0);
v___x_3911_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3912_ = lean_uint16_to_nat(v_port_3910_);
v___x_3913_ = l_Nat_reprFast(v___x_3912_);
v___x_3914_ = lean_string_append(v___x_3911_, v___x_3913_);
lean_dec_ref(v___x_3913_);
v___y_3899_ = v___y_3907_;
v___y_3900_ = v___y_3906_;
v___y_3901_ = v___x_3914_;
goto v___jp_3898_;
}
}
}
v___jp_3915_:
{
switch(lean_obj_tag(v_host_3895_))
{
case 0:
{
lean_object* v_name_3917_; 
v_name_3917_ = lean_ctor_get(v_host_3895_, 0);
lean_inc_ref(v_name_3917_);
lean_dec_ref_known(v_host_3895_, 1);
v___y_3906_ = v___y_3916_;
v___y_3907_ = v_name_3917_;
goto v___jp_3905_;
}
case 1:
{
lean_object* v_ipv4_3918_; lean_object* v___x_3919_; 
v_ipv4_3918_ = lean_ctor_get(v_host_3895_, 0);
lean_inc_ref(v_ipv4_3918_);
lean_dec_ref_known(v_host_3895_, 1);
v___x_3919_ = lean_uv_ntop_v4(v_ipv4_3918_);
lean_dec_ref(v_ipv4_3918_);
v___y_3906_ = v___y_3916_;
v___y_3907_ = v___x_3919_;
goto v___jp_3905_;
}
default: 
{
lean_object* v_ipv6_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v_ipv6_3920_ = lean_ctor_get(v_host_3895_, 0);
lean_inc_ref(v_ipv6_3920_);
lean_dec_ref_known(v_host_3895_, 1);
v___x_3921_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3922_ = lean_uv_ntop_v6(v_ipv6_3920_);
lean_dec_ref(v_ipv6_3920_);
v___x_3923_ = lean_string_append(v___x_3921_, v___x_3922_);
lean_dec_ref(v___x_3922_);
v___x_3924_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3925_ = lean_string_append(v___x_3923_, v___x_3924_);
v___y_3906_ = v___y_3916_;
v___y_3907_ = v___x_3925_;
goto v___jp_3905_;
}
}
}
}
v___jp_3859_:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3864_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3865_ = lean_string_append(v_scheme_3854_, v___x_3864_);
v___x_3866_ = lean_string_append(v___x_3865_, v___y_3860_);
lean_dec_ref(v___y_3860_);
v___x_3867_ = lean_string_append(v___x_3866_, v___y_3862_);
lean_dec_ref(v___y_3862_);
v___x_3868_ = lean_string_append(v___x_3867_, v___y_3861_);
lean_dec_ref(v___y_3861_);
v___x_3869_ = lean_string_append(v___x_3868_, v___y_3863_);
lean_dec_ref(v___y_3863_);
v___y_3817_ = v___x_3869_;
goto v___jp_3816_;
}
v___jp_3870_:
{
lean_object* v_queryPart_3873_; 
v_queryPart_3873_ = l_Std_Http_URI_Query_formatOption(v_query_3857_);
if (lean_obj_tag(v_fragment_3858_) == 0)
{
lean_object* v___x_3874_; 
v___x_3874_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3860_ = v___y_3871_;
v___y_3861_ = v_queryPart_3873_;
v___y_3862_ = v___y_3872_;
v___y_3863_ = v___x_3874_;
goto v___jp_3859_;
}
else
{
lean_object* v_val_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v_val_3875_ = lean_ctor_get(v_fragment_3858_, 0);
lean_inc(v_val_3875_);
lean_dec_ref_known(v_fragment_3858_, 1);
v___x_3876_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3877_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3875_);
v___x_3878_ = lean_string_from_utf8_unchecked(v___x_3877_);
v___x_3879_ = lean_string_append(v___x_3876_, v___x_3878_);
lean_dec_ref(v___x_3878_);
v___y_3860_ = v___y_3871_;
v___y_3861_ = v_queryPart_3873_;
v___y_3862_ = v___y_3872_;
v___y_3863_ = v___x_3879_;
goto v___jp_3859_;
}
}
v___jp_3880_:
{
lean_object* v_segments_3882_; uint8_t v_absolute_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; size_t v_sz_3886_; size_t v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v_result_3890_; 
v_segments_3882_ = lean_ctor_get(v_path_3856_, 0);
lean_inc_ref(v_segments_3882_);
v_absolute_3883_ = lean_ctor_get_uint8(v_path_3856_, sizeof(void*)*1);
lean_dec_ref(v_path_3856_);
v___x_3884_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3885_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3886_ = lean_array_size(v_segments_3882_);
v___x_3887_ = ((size_t)0ULL);
v___x_3888_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3885_, v___f_3813_, v_sz_3886_, v___x_3887_, v_segments_3882_);
v___x_3889_ = lean_array_to_list(v___x_3888_);
v_result_3890_ = l_String_intercalate(v___x_3884_, v___x_3889_);
if (v_absolute_3883_ == 0)
{
v___y_3871_ = v___y_3881_;
v___y_3872_ = v_result_3890_;
goto v___jp_3870_;
}
else
{
lean_object* v___x_3891_; 
v___x_3891_ = lean_string_append(v___x_3884_, v_result_3890_);
lean_dec_ref(v_result_3890_);
v___y_3871_ = v___y_3881_;
v___y_3872_ = v___x_3891_;
goto v___jp_3870_;
}
}
}
case 2:
{
lean_object* v_authority_3942_; lean_object* v_userInfo_3943_; lean_object* v_host_3944_; lean_object* v_port_3945_; lean_object* v___y_3947_; lean_object* v___y_3948_; lean_object* v___y_3957_; 
lean_dec_ref(v___f_3813_);
lean_dec_ref(v___f_3812_);
v_authority_3942_ = lean_ctor_get(v_target_3815_, 0);
lean_inc_ref(v_authority_3942_);
lean_dec_ref_known(v_target_3815_, 1);
v_userInfo_3943_ = lean_ctor_get(v_authority_3942_, 0);
lean_inc(v_userInfo_3943_);
v_host_3944_ = lean_ctor_get(v_authority_3942_, 1);
lean_inc_ref(v_host_3944_);
v_port_3945_ = lean_ctor_get(v_authority_3942_, 2);
lean_inc(v_port_3945_);
lean_dec_ref(v_authority_3942_);
if (lean_obj_tag(v_userInfo_3943_) == 0)
{
lean_object* v___x_3967_; 
v___x_3967_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3957_ = v___x_3967_;
goto v___jp_3956_;
}
else
{
lean_object* v_val_3968_; lean_object* v_password_3969_; 
v_val_3968_ = lean_ctor_get(v_userInfo_3943_, 0);
lean_inc(v_val_3968_);
lean_dec_ref_known(v_userInfo_3943_, 1);
v_password_3969_ = lean_ctor_get(v_val_3968_, 1);
if (lean_obj_tag(v_password_3969_) == 0)
{
lean_object* v_username_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v_username_3970_ = lean_ctor_get(v_val_3968_, 0);
lean_inc_ref(v_username_3970_);
lean_dec(v_val_3968_);
v___x_3971_ = lean_string_from_utf8_unchecked(v_username_3970_);
v___x_3972_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3973_ = lean_string_append(v___x_3971_, v___x_3972_);
v___y_3957_ = v___x_3973_;
goto v___jp_3956_;
}
else
{
lean_object* v_username_3974_; lean_object* v_val_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; 
lean_inc_ref(v_password_3969_);
v_username_3974_ = lean_ctor_get(v_val_3968_, 0);
lean_inc_ref(v_username_3974_);
lean_dec(v_val_3968_);
v_val_3975_ = lean_ctor_get(v_password_3969_, 0);
lean_inc(v_val_3975_);
lean_dec_ref_known(v_password_3969_, 1);
v___x_3976_ = lean_string_from_utf8_unchecked(v_username_3974_);
v___x_3977_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3978_ = lean_string_append(v___x_3976_, v___x_3977_);
v___x_3979_ = lean_string_from_utf8_unchecked(v_val_3975_);
v___x_3980_ = lean_string_append(v___x_3978_, v___x_3979_);
lean_dec_ref(v___x_3979_);
v___x_3981_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3982_ = lean_string_append(v___x_3980_, v___x_3981_);
v___y_3957_ = v___x_3982_;
goto v___jp_3956_;
}
}
v___jp_3946_:
{
switch(lean_obj_tag(v_port_3945_))
{
case 0:
{
lean_object* v___x_3949_; 
v___x_3949_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3832_ = v___y_3948_;
v___y_3833_ = v___y_3947_;
v___y_3834_ = v___x_3949_;
goto v___jp_3831_;
}
case 1:
{
lean_object* v___x_3950_; 
v___x_3950_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3832_ = v___y_3948_;
v___y_3833_ = v___y_3947_;
v___y_3834_ = v___x_3950_;
goto v___jp_3831_;
}
default: 
{
uint16_t v_port_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; 
v_port_3951_ = lean_ctor_get_uint16(v_port_3945_, 0);
lean_dec_ref_known(v_port_3945_, 0);
v___x_3952_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3953_ = lean_uint16_to_nat(v_port_3951_);
v___x_3954_ = l_Nat_reprFast(v___x_3953_);
v___x_3955_ = lean_string_append(v___x_3952_, v___x_3954_);
lean_dec_ref(v___x_3954_);
v___y_3832_ = v___y_3948_;
v___y_3833_ = v___y_3947_;
v___y_3834_ = v___x_3955_;
goto v___jp_3831_;
}
}
}
v___jp_3956_:
{
switch(lean_obj_tag(v_host_3944_))
{
case 0:
{
lean_object* v_name_3958_; 
v_name_3958_ = lean_ctor_get(v_host_3944_, 0);
lean_inc_ref(v_name_3958_);
lean_dec_ref_known(v_host_3944_, 1);
v___y_3947_ = v___y_3957_;
v___y_3948_ = v_name_3958_;
goto v___jp_3946_;
}
case 1:
{
lean_object* v_ipv4_3959_; lean_object* v___x_3960_; 
v_ipv4_3959_ = lean_ctor_get(v_host_3944_, 0);
lean_inc_ref(v_ipv4_3959_);
lean_dec_ref_known(v_host_3944_, 1);
v___x_3960_ = lean_uv_ntop_v4(v_ipv4_3959_);
lean_dec_ref(v_ipv4_3959_);
v___y_3947_ = v___y_3957_;
v___y_3948_ = v___x_3960_;
goto v___jp_3946_;
}
default: 
{
lean_object* v_ipv6_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_ipv6_3961_ = lean_ctor_get(v_host_3944_, 0);
lean_inc_ref(v_ipv6_3961_);
lean_dec_ref_known(v_host_3944_, 1);
v___x_3962_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3963_ = lean_uv_ntop_v6(v_ipv6_3961_);
lean_dec_ref(v_ipv6_3961_);
v___x_3964_ = lean_string_append(v___x_3962_, v___x_3963_);
lean_dec_ref(v___x_3963_);
v___x_3965_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3966_ = lean_string_append(v___x_3964_, v___x_3965_);
v___y_3947_ = v___y_3957_;
v___y_3948_ = v___x_3966_;
goto v___jp_3946_;
}
}
}
}
default: 
{
lean_object* v___x_3983_; 
lean_dec_ref(v___f_3813_);
lean_dec_ref(v___f_3812_);
v___x_3983_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
v___y_3817_ = v___x_3983_;
goto v___jp_3816_;
}
}
v___jp_3816_:
{
lean_object* v_data_3818_; lean_object* v_size_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3830_; 
v_data_3818_ = lean_ctor_get(v_buffer_3814_, 0);
v_size_3819_ = lean_ctor_get(v_buffer_3814_, 1);
v_isSharedCheck_3830_ = !lean_is_exclusive(v_buffer_3814_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3821_ = v_buffer_3814_;
v_isShared_3822_ = v_isSharedCheck_3830_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_size_3819_);
lean_inc(v_data_3818_);
lean_dec(v_buffer_3814_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3830_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3828_; 
v___x_3823_ = lean_string_to_utf8(v___y_3817_);
lean_inc_ref(v___x_3823_);
v___x_3824_ = lean_array_push(v_data_3818_, v___x_3823_);
v___x_3825_ = lean_byte_array_size(v___x_3823_);
lean_dec_ref(v___x_3823_);
v___x_3826_ = lean_nat_add(v_size_3819_, v___x_3825_);
lean_dec(v_size_3819_);
if (v_isShared_3822_ == 0)
{
lean_ctor_set(v___x_3821_, 1, v___x_3826_);
lean_ctor_set(v___x_3821_, 0, v___x_3824_);
v___x_3828_ = v___x_3821_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v___x_3824_);
lean_ctor_set(v_reuseFailAlloc_3829_, 1, v___x_3826_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
v___jp_3831_:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3835_ = lean_string_append(v___y_3833_, v___y_3832_);
lean_dec_ref(v___y_3832_);
v___x_3836_ = lean_string_append(v___x_3835_, v___y_3834_);
lean_dec_ref(v___y_3834_);
v___y_3817_ = v___x_3836_;
goto v___jp_3816_;
}
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Std_Net(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_URI_instInhabitedUserInfo_default = _init_l_Std_Http_URI_instInhabitedUserInfo_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo_default);
l_Std_Http_URI_instInhabitedUserInfo = _init_l_Std_Http_URI_instInhabitedUserInfo();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo);
l_Std_Http_URI_instInhabitedHost_default = _init_l_Std_Http_URI_instInhabitedHost_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost_default);
l_Std_Http_URI_instInhabitedHost = _init_l_Std_Http_URI_instInhabitedHost();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost);
l_Std_Http_URI_instInhabitedPort_default = _init_l_Std_Http_URI_instInhabitedPort_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort_default);
l_Std_Http_URI_instInhabitedPort = _init_l_Std_Http_URI_instInhabitedPort();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort);
l_Std_Http_URI_instInhabitedAuthority_default = _init_l_Std_Http_URI_instInhabitedAuthority_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority_default);
l_Std_Http_URI_instInhabitedAuthority = _init_l_Std_Http_URI_instInhabitedAuthority();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Std_Net(uint8_t builtin);
lean_object* initialize_Std_Http_Internal(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
