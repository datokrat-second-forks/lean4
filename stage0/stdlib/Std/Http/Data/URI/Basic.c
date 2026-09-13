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
lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Option_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* lean_string_data(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
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
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
extern lean_object* l_Std_Net_instInhabitedIPv4Addr_default;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqUserInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqUserInfo = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object*);
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
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append___boxed(lean_object*, lean_object*);
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
static const lean_array_object l_Std_Http_URI_instInhabitedQuery_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedQuery_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery_default = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery_default___closed__0_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqQuery = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_repr___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__1_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Prod_repr___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__2_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___lam__0___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprQuery___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprQuery = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
static const lean_closure_object l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1___closed__0 = (const lean_object*)&l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_Query_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Query_empty___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_empty = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_size___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instSingletonProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instSingletonProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instSingletonProdString = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instInsertProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURI_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURI___closed__0 = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURI = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURI_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedURI_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI_default = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___boxed(lean_object*);
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
uint32_t v___y_6_; lean_object* v___x_11_; uint8_t v_decide_12_; 
v___x_11_ = lean_string_utf8_byte_size(v_s_3_);
v_decide_12_ = lean_nat_dec_eq(v_p_4_, v___x_11_);
if (v_decide_12_ == 0)
{
uint32_t v___x_13_; uint8_t v___y_15_; uint32_t v___x_18_; uint8_t v___x_19_; 
v___x_13_ = lean_string_utf8_get_fast(v_s_3_, v_p_4_);
v___x_18_ = 65;
v___x_19_ = lean_uint32_dec_le(v___x_18_, v___x_13_);
if (v___x_19_ == 0)
{
v___y_15_ = v___x_19_;
goto v___jp_14_;
}
else
{
uint32_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 90;
v___x_21_ = lean_uint32_dec_le(v___x_13_, v___x_20_);
v___y_15_ = v___x_21_;
goto v___jp_14_;
}
v___jp_14_:
{
if (v___y_15_ == 0)
{
v___y_6_ = v___x_13_;
goto v___jp_5_;
}
else
{
uint32_t v___x_16_; uint32_t v___x_17_; 
v___x_16_ = 32;
v___x_17_ = lean_uint32_add(v___x_13_, v___x_16_);
v___y_6_ = v___x_17_;
goto v___jp_5_;
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
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
lean_inc(v_p_4_);
v___x_7_ = lean_string_utf8_set(v_s_3_, v_p_4_, v___y_6_);
v___x_8_ = l_Char_utf8Size(v___y_6_);
v___x_9_ = lean_nat_add(v_p_4_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v_p_4_);
v_s_3_ = v___x_7_;
v_p_4_ = v___x_9_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object* v_x_22_){
_start:
{
if (lean_obj_tag(v_x_22_) == 0)
{
uint8_t v___x_23_; 
v___x_23_ = 1;
return v___x_23_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; uint8_t v___y_40_; uint32_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; 
v_head_24_ = lean_ctor_get(v_x_22_, 0);
v_tail_25_ = lean_ctor_get(v_x_22_, 1);
v___x_56_ = lean_unbox_uint32(v_head_24_);
v___x_57_ = lean_uint32_to_nat(v___x_56_);
v___x_58_ = lean_unsigned_to_nat(128u);
v___x_59_ = lean_nat_dec_lt(v___x_57_, v___x_58_);
lean_dec(v___x_57_);
if (v___x_59_ == 0)
{
goto v___jp_26_;
}
else
{
uint32_t v___x_60_; uint32_t v___x_61_; uint8_t v___x_62_; 
v___x_60_ = 48;
v___x_61_ = lean_unbox_uint32(v_head_24_);
v___x_62_ = lean_uint32_dec_le(v___x_60_, v___x_61_);
if (v___x_62_ == 0)
{
goto v___jp_49_;
}
else
{
uint32_t v___x_63_; uint32_t v___x_64_; uint8_t v___x_65_; 
v___x_63_ = 57;
v___x_64_ = lean_unbox_uint32(v_head_24_);
v___x_65_ = lean_uint32_dec_le(v___x_64_, v___x_63_);
if (v___x_65_ == 0)
{
goto v___jp_49_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
}
v___jp_26_:
{
uint32_t v___x_27_; uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_27_ = 43;
v___x_28_ = lean_unbox_uint32(v_head_24_);
v___x_29_ = lean_uint32_dec_eq(v___x_28_, v___x_27_);
if (v___x_29_ == 0)
{
uint32_t v___x_30_; uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_30_ = 45;
v___x_31_ = lean_unbox_uint32(v_head_24_);
v___x_32_ = lean_uint32_dec_eq(v___x_31_, v___x_30_);
if (v___x_32_ == 0)
{
uint32_t v___x_33_; uint32_t v___x_34_; uint8_t v___x_35_; 
v___x_33_ = 46;
v___x_34_ = lean_unbox_uint32(v_head_24_);
v___x_35_ = lean_uint32_dec_eq(v___x_34_, v___x_33_);
if (v___x_35_ == 0)
{
return v___x_35_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
v___jp_39_:
{
if (v___y_40_ == 0)
{
uint32_t v___x_41_; uint32_t v___x_42_; uint8_t v___x_43_; 
v___x_41_ = 97;
v___x_42_ = lean_unbox_uint32(v_head_24_);
v___x_43_ = lean_uint32_dec_le(v___x_41_, v___x_42_);
if (v___x_43_ == 0)
{
goto v___jp_26_;
}
else
{
uint32_t v___x_44_; uint32_t v___x_45_; uint8_t v___x_46_; 
v___x_44_ = 122;
v___x_45_ = lean_unbox_uint32(v_head_24_);
v___x_46_ = lean_uint32_dec_le(v___x_45_, v___x_44_);
if (v___x_46_ == 0)
{
goto v___jp_26_;
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
}
else
{
v_x_22_ = v_tail_25_;
goto _start;
}
}
v___jp_49_:
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = 65;
v___x_51_ = lean_unbox_uint32(v_head_24_);
v___x_52_ = lean_uint32_dec_le(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
v___y_40_ = v___x_52_;
goto v___jp_39_;
}
else
{
uint32_t v___x_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = 90;
v___x_54_ = lean_unbox_uint32(v_head_24_);
v___x_55_ = lean_uint32_dec_le(v___x_54_, v___x_53_);
v___y_40_ = v___x_55_;
goto v___jp_39_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v_x_67_);
lean_dec(v_x_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object* v_s_70_){
_start:
{
lean_object* v___x_71_; lean_object* v_lower_72_; uint8_t v___y_74_; uint8_t v___x_77_; uint8_t v___y_79_; lean_object* v___x_80_; uint8_t v___x_81_; uint8_t v___y_83_; lean_object* v___x_84_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v_lower_72_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_70_, v___x_71_);
lean_inc_ref_n(v_lower_72_, 2);
v___x_77_ = l_Std_Http_Internal_instDecidableIsLowerCase(v_lower_72_);
v___x_80_ = lean_string_data(v_lower_72_);
v___x_81_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v___x_80_);
v___x_84_ = l_List_head_x3f___redArg(v___x_80_);
lean_dec(v___x_80_);
if (lean_obj_tag(v___x_84_) == 0)
{
uint8_t v___x_85_; 
v___x_85_ = 0;
v___y_83_ = v___x_85_;
goto v___jp_82_;
}
else
{
lean_object* v_val_86_; uint8_t v___y_88_; uint32_t v___x_95_; uint32_t v___x_96_; uint8_t v___x_97_; 
v_val_86_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_val_86_);
lean_dec_ref_known(v___x_84_, 1);
v___x_95_ = 65;
v___x_96_ = lean_unbox_uint32(v_val_86_);
v___x_97_ = lean_uint32_dec_le(v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
v___y_88_ = v___x_97_;
goto v___jp_87_;
}
else
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = 90;
v___x_99_ = lean_unbox_uint32(v_val_86_);
v___x_100_ = lean_uint32_dec_le(v___x_99_, v___x_98_);
v___y_88_ = v___x_100_;
goto v___jp_87_;
}
v___jp_87_:
{
if (v___y_88_ == 0)
{
uint32_t v___x_89_; uint32_t v___x_90_; uint8_t v___x_91_; 
v___x_89_ = 97;
v___x_90_ = lean_unbox_uint32(v_val_86_);
v___x_91_ = lean_uint32_dec_le(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_dec(v_val_86_);
v___y_83_ = v___x_91_;
goto v___jp_82_;
}
else
{
uint32_t v___x_92_; uint32_t v___x_93_; uint8_t v___x_94_; 
v___x_92_ = 122;
v___x_93_ = lean_unbox_uint32(v_val_86_);
lean_dec(v_val_86_);
v___x_94_ = lean_uint32_dec_le(v___x_93_, v___x_92_);
v___y_83_ = v___x_94_;
goto v___jp_82_;
}
}
else
{
lean_dec(v_val_86_);
v___y_83_ = v___y_88_;
goto v___jp_82_;
}
}
}
v___jp_73_:
{
if (v___y_74_ == 0)
{
lean_object* v___x_75_; 
lean_dec_ref(v_lower_72_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_lower_72_);
return v___x_76_;
}
}
v___jp_78_:
{
if (v___x_77_ == 0)
{
v___y_74_ = v___x_77_;
goto v___jp_73_;
}
else
{
v___y_74_ = v___y_79_;
goto v___jp_73_;
}
}
v___jp_82_:
{
if (v___x_81_ == 0)
{
v___y_79_ = v___x_81_;
goto v___jp_78_;
}
else
{
v___y_79_ = v___y_83_;
goto v___jp_78_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object* v_msg_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
v___x_103_ = lean_panic_fn_borrowed(v___x_102_, v_msg_101_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object* v_s_107_){
_start:
{
lean_object* v___x_108_; 
lean_inc_ref(v_s_107_);
v___x_108_ = l_Std_Http_URI_Scheme_ofString_x3f(v_s_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_109_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_110_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__1));
v___x_111_ = lean_unsigned_to_nat(84u);
v___x_112_ = lean_unsigned_to_nat(12u);
v___x_113_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_114_ = l_String_quote(v_s_107_);
v___x_115_ = lean_string_append(v___x_113_, v___x_114_);
lean_dec_ref(v___x_114_);
v___x_116_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_110_, v___x_111_, v___x_112_, v___x_115_);
lean_dec_ref(v___x_115_);
v___x_117_ = l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(v___x_116_);
return v___x_117_;
}
else
{
lean_object* v_val_118_; 
lean_dec_ref(v_s_107_);
v_val_118_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_108_, 1);
return v_val_118_;
}
}
}
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object* v_scheme_120_){
_start:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___x_122_ = lean_string_dec_eq(v_scheme_120_, v___x_121_);
if (v___x_122_ == 0)
{
uint16_t v___x_123_; 
v___x_123_ = 80;
return v___x_123_;
}
else
{
uint16_t v___x_124_; 
v___x_124_ = 443;
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object* v_scheme_125_){
_start:
{
uint16_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_125_);
lean_dec_ref(v_scheme_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t v_port_128_){
_start:
{
uint16_t v___x_129_; uint8_t v___x_130_; 
v___x_129_ = 443;
v___x_130_ = lean_uint16_dec_eq(v_port_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object* v_port_133_){
_start:
{
uint16_t v_port_boxed_134_; lean_object* v_res_135_; 
v_port_boxed_134_ = lean_unbox(v_port_133_);
v_res_135_ = l_Std_Http_URI_Scheme_ofPort(v_port_boxed_134_);
return v_res_135_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
v___x_137_ = l_ByteArray_empty;
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_obj_once(&l_Std_Http_URI_instInhabitedUserInfo_default___closed__0, &l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Std_Http_URI_instInhabitedUserInfo_default;
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_149_;
}
else
{
lean_object* v_val_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_162_; 
v_val_150_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_162_ == 0)
{
v___x_152_ = v_x_147_;
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_val_150_);
lean_dec(v_x_147_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_155_ = lean_string_from_utf8_unchecked(v_val_150_);
v___x_156_ = l_String_quote(v___x_155_);
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 3);
lean_ctor_set(v___x_152_, 0, v___x_156_);
v___x_158_ = v___x_152_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_161_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_154_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = l_Repr_addAppParen(v___x_159_, v_x_148_);
return v___x_160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_x_163_, v_x_164_);
lean_dec(v_x_164_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object* v_a_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_nat_to_int(v_a_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(12u);
v___x_182_ = lean_nat_to_int(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0));
v___x_191_ = lean_string_length(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13);
v___x_193_ = lean_nat_to_int(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object* v_x_198_){
_start:
{
lean_object* v_username_199_; lean_object* v_password_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_235_; 
v_username_199_ = lean_ctor_get(v_x_198_, 0);
v_password_200_ = lean_ctor_get(v_x_198_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_235_ == 0)
{
v___x_202_ = v_x_198_;
v_isShared_203_ = v_isSharedCheck_235_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_password_200_);
lean_inc(v_username_199_);
lean_dec(v_x_198_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_235_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_204_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_205_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6));
v___x_206_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_207_ = lean_string_from_utf8_unchecked(v_username_199_);
v___x_208_ = l_String_quote(v___x_207_);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
if (v_isShared_203_ == 0)
{
lean_ctor_set_tag(v___x_202_, 4);
lean_ctor_set(v___x_202_, 1, v___x_209_);
lean_ctor_set(v___x_202_, 0, v___x_206_);
v___x_211_ = v___x_202_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_209_);
v___x_211_ = v_reuseFailAlloc_234_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_212_ = 0;
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_212_);
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_205_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_box(1);
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11));
v___x_220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_204_);
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_password_200_, v___x_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_206_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_212_);
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_221_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_228_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_226_);
v___x_230_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_227_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_212_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object* v_x_236_, lean_object* v_prec_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_x_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object* v_x_239_, lean_object* v_prec_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Std_Http_URI_instReprUserInfo_repr(v_x_239_, v_prec_240_);
lean_dec(v_prec_240_);
return v_res_241_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 1;
return v___x_246_;
}
else
{
uint8_t v___x_247_; 
v___x_247_ = 0;
return v___x_247_;
}
}
else
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
lean_object* v_val_249_; lean_object* v_val_250_; uint8_t v___x_251_; 
v_val_249_ = lean_ctor_get(v_x_244_, 0);
v_val_250_ = lean_ctor_get(v_x_245_, 0);
v___x_251_ = lean_sarray_dec_eq(v_val_249_, v_val_250_);
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_x_252_, v_x_253_);
lean_dec(v_x_253_);
lean_dec(v_x_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object* v_x_256_, lean_object* v_x_257_){
_start:
{
lean_object* v_username_258_; lean_object* v_password_259_; lean_object* v_username_260_; lean_object* v_password_261_; uint8_t v___x_262_; 
v_username_258_ = lean_ctor_get(v_x_256_, 0);
v_password_259_ = lean_ctor_get(v_x_256_, 1);
v_username_260_ = lean_ctor_get(v_x_257_, 0);
v_password_261_ = lean_ctor_get(v_x_257_, 1);
v___x_262_ = lean_sarray_dec_eq(v_username_258_, v_username_260_);
if (v___x_262_ == 0)
{
return v___x_262_;
}
else
{
uint8_t v___x_263_; 
v___x_263_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_password_259_, v_password_261_);
return v___x_263_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_Std_Http_URI_instBEqUserInfo_beq(v_x_264_, v_x_265_);
lean_dec_ref(v_x_265_);
lean_dec_ref(v_x_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object* v_username_270_, lean_object* v_password_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_270_);
if (lean_obj_tag(v_password_271_) == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_box(0);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v_val_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_284_; 
v_val_275_ = lean_ctor_get(v_password_271_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v_password_271_);
if (v_isSharedCheck_284_ == 0)
{
v___x_277_ = v_password_271_;
v_isShared_278_ = v_isSharedCheck_284_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_val_275_);
lean_dec(v_password_271_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_284_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_275_);
lean_dec(v_val_275_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_283_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; 
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_272_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings___boxed(lean_object* v_username_285_, lean_object* v_password_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_Http_URI_UserInfo_ofStrings(v_username_285_, v_password_286_);
lean_dec_ref(v_username_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object* v_ui_288_){
_start:
{
lean_object* v_username_289_; lean_object* v___x_290_; 
v_username_289_ = lean_ctor_get(v_ui_288_, 0);
v___x_290_ = l_Std_Http_URI_EncodedUserInfo_decode(v_username_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object* v_ui_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Std_Http_URI_UserInfo_username_x3f(v_ui_291_);
lean_dec_ref(v_ui_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object* v_ui_293_){
_start:
{
lean_object* v_password_294_; 
v_password_294_ = lean_ctor_get(v_ui_293_, 1);
if (lean_obj_tag(v_password_294_) == 0)
{
lean_object* v___x_295_; 
v___x_295_ = lean_box(0);
return v___x_295_;
}
else
{
lean_object* v_val_296_; lean_object* v___x_297_; 
v_val_296_ = lean_ctor_get(v_password_294_, 0);
v___x_297_ = l_Std_Http_URI_EncodedUserInfo_decode(v_val_296_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object* v_ui_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Std_Http_URI_UserInfo_password_x3f(v_ui_298_);
lean_dec_ref(v_ui_298_);
return v_res_299_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
uint8_t v___x_301_; 
v___x_301_ = 1;
return v___x_301_;
}
else
{
lean_object* v_head_302_; lean_object* v_tail_303_; uint8_t v___y_305_; uint8_t v___y_312_; uint32_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_head_302_ = lean_ctor_get(v_x_300_, 0);
v_tail_303_ = lean_ctor_get(v_x_300_, 1);
v___x_327_ = lean_unbox_uint32(v_head_302_);
v___x_328_ = lean_uint32_to_nat(v___x_327_);
v___x_329_ = lean_unsigned_to_nat(128u);
v___x_330_ = lean_nat_dec_lt(v___x_328_, v___x_329_);
lean_dec(v___x_328_);
if (v___x_330_ == 0)
{
v___y_305_ = v___x_330_;
goto v___jp_304_;
}
else
{
uint32_t v___x_331_; uint32_t v___x_332_; uint8_t v___x_333_; 
v___x_331_ = 48;
v___x_332_ = lean_unbox_uint32(v_head_302_);
v___x_333_ = lean_uint32_dec_le(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
goto v___jp_320_;
}
else
{
uint32_t v___x_334_; uint32_t v___x_335_; uint8_t v___x_336_; 
v___x_334_ = 57;
v___x_335_ = lean_unbox_uint32(v_head_302_);
v___x_336_ = lean_uint32_dec_le(v___x_335_, v___x_334_);
if (v___x_336_ == 0)
{
goto v___jp_320_;
}
else
{
v___y_305_ = v___x_336_;
goto v___jp_304_;
}
}
}
v___jp_304_:
{
if (v___y_305_ == 0)
{
uint32_t v___x_306_; uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_306_ = 45;
v___x_307_ = lean_unbox_uint32(v_head_302_);
v___x_308_ = lean_uint32_dec_eq(v___x_307_, v___x_306_);
if (v___x_308_ == 0)
{
return v___x_308_;
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
v___jp_311_:
{
if (v___y_312_ == 0)
{
uint32_t v___x_313_; uint32_t v___x_314_; uint8_t v___x_315_; 
v___x_313_ = 97;
v___x_314_ = lean_unbox_uint32(v_head_302_);
v___x_315_ = lean_uint32_dec_le(v___x_313_, v___x_314_);
if (v___x_315_ == 0)
{
v___y_305_ = v___x_315_;
goto v___jp_304_;
}
else
{
uint32_t v___x_316_; uint32_t v___x_317_; uint8_t v___x_318_; 
v___x_316_ = 122;
v___x_317_ = lean_unbox_uint32(v_head_302_);
v___x_318_ = lean_uint32_dec_le(v___x_317_, v___x_316_);
v___y_305_ = v___x_318_;
goto v___jp_304_;
}
}
else
{
v_x_300_ = v_tail_303_;
goto _start;
}
}
v___jp_320_:
{
uint32_t v___x_321_; uint32_t v___x_322_; uint8_t v___x_323_; 
v___x_321_ = 65;
v___x_322_ = lean_unbox_uint32(v_head_302_);
v___x_323_ = lean_uint32_dec_le(v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
v___y_312_ = v___x_323_;
goto v___jp_311_;
}
else
{
uint32_t v___x_324_; uint32_t v___x_325_; uint8_t v___x_326_; 
v___x_324_ = 90;
v___x_325_ = lean_unbox_uint32(v_head_302_);
v___x_326_ = lean_uint32_dec_le(v___x_325_, v___x_324_);
v___y_312_ = v___x_326_;
goto v___jp_311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object* v_x_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_x_337_);
lean_dec(v_x_337_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object* v_s_340_){
_start:
{
uint32_t v___y_342_; uint8_t v___y_343_; uint32_t v___y_349_; lean_object* v_chars_354_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_chars_354_ = lean_string_data(v_s_340_);
v___x_371_ = l_List_lengthTR___redArg(v_chars_354_);
v___x_372_ = lean_unsigned_to_nat(63u);
v___x_373_ = lean_nat_dec_le(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
lean_dec(v_chars_354_);
return v___x_373_;
}
else
{
uint8_t v___x_374_; 
v___x_374_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_chars_354_);
if (v___x_374_ == 0)
{
lean_dec(v_chars_354_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; 
v___x_375_ = l_List_head_x3f___redArg(v_chars_354_);
if (lean_obj_tag(v___x_375_) == 0)
{
uint8_t v___x_376_; 
lean_dec(v_chars_354_);
v___x_376_ = 0;
return v___x_376_;
}
else
{
lean_object* v_val_377_; uint8_t v___y_379_; uint32_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v_val_377_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___x_375_, 1);
v___x_393_ = lean_unbox_uint32(v_val_377_);
v___x_394_ = lean_uint32_to_nat(v___x_393_);
v___x_395_ = lean_unsigned_to_nat(128u);
v___x_396_ = lean_nat_dec_lt(v___x_394_, v___x_395_);
lean_dec(v___x_394_);
if (v___x_396_ == 0)
{
lean_dec(v_val_377_);
lean_dec(v_chars_354_);
return v___x_396_;
}
else
{
uint32_t v___x_397_; uint32_t v___x_398_; uint8_t v___x_399_; 
v___x_397_ = 48;
v___x_398_ = lean_unbox_uint32(v_val_377_);
v___x_399_ = lean_uint32_dec_le(v___x_397_, v___x_398_);
if (v___x_399_ == 0)
{
goto v___jp_386_;
}
else
{
uint32_t v___x_400_; uint32_t v___x_401_; uint8_t v___x_402_; 
v___x_400_ = 57;
v___x_401_ = lean_unbox_uint32(v_val_377_);
v___x_402_ = lean_uint32_dec_le(v___x_401_, v___x_400_);
if (v___x_402_ == 0)
{
goto v___jp_386_;
}
else
{
lean_dec(v_val_377_);
goto v___jp_355_;
}
}
}
v___jp_378_:
{
if (v___y_379_ == 0)
{
uint32_t v___x_380_; uint32_t v___x_381_; uint8_t v___x_382_; 
v___x_380_ = 97;
v___x_381_ = lean_unbox_uint32(v_val_377_);
v___x_382_ = lean_uint32_dec_le(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_dec(v_val_377_);
lean_dec(v_chars_354_);
return v___x_382_;
}
else
{
uint32_t v___x_383_; uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_383_ = 122;
v___x_384_ = lean_unbox_uint32(v_val_377_);
lean_dec(v_val_377_);
v___x_385_ = lean_uint32_dec_le(v___x_384_, v___x_383_);
if (v___x_385_ == 0)
{
lean_dec(v_chars_354_);
return v___x_385_;
}
else
{
goto v___jp_355_;
}
}
}
else
{
lean_dec(v_val_377_);
goto v___jp_355_;
}
}
v___jp_386_:
{
uint32_t v___x_387_; uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_387_ = 65;
v___x_388_ = lean_unbox_uint32(v_val_377_);
v___x_389_ = lean_uint32_dec_le(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_379_ = v___x_389_;
goto v___jp_378_;
}
else
{
uint32_t v___x_390_; uint32_t v___x_391_; uint8_t v___x_392_; 
v___x_390_ = 90;
v___x_391_ = lean_unbox_uint32(v_val_377_);
v___x_392_ = lean_uint32_dec_le(v___x_391_, v___x_390_);
v___y_379_ = v___x_392_;
goto v___jp_378_;
}
}
}
}
}
v___jp_341_:
{
if (v___y_343_ == 0)
{
uint32_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 97;
v___x_345_ = lean_uint32_dec_le(v___x_344_, v___y_342_);
if (v___x_345_ == 0)
{
return v___x_345_;
}
else
{
uint32_t v___x_346_; uint8_t v___x_347_; 
v___x_346_ = 122;
v___x_347_ = lean_uint32_dec_le(v___y_342_, v___x_346_);
return v___x_347_;
}
}
else
{
return v___y_343_;
}
}
v___jp_348_:
{
uint32_t v___x_350_; uint8_t v___x_351_; 
v___x_350_ = 65;
v___x_351_ = lean_uint32_dec_le(v___x_350_, v___y_349_);
if (v___x_351_ == 0)
{
v___y_342_ = v___y_349_;
v___y_343_ = v___x_351_;
goto v___jp_341_;
}
else
{
uint32_t v___x_352_; uint8_t v___x_353_; 
v___x_352_ = 90;
v___x_353_ = lean_uint32_dec_le(v___y_349_, v___x_352_);
v___y_342_ = v___y_349_;
v___y_343_ = v___x_353_;
goto v___jp_341_;
}
}
v___jp_355_:
{
lean_object* v___x_356_; 
v___x_356_ = l_List_getLast_x3f___redArg(v_chars_354_);
lean_dec(v_chars_354_);
if (lean_obj_tag(v___x_356_) == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 0;
return v___x_357_;
}
else
{
lean_object* v_val_358_; uint32_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_val_358_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_val_358_);
lean_dec_ref_known(v___x_356_, 1);
v___x_359_ = lean_unbox_uint32(v_val_358_);
v___x_360_ = lean_uint32_to_nat(v___x_359_);
v___x_361_ = lean_unsigned_to_nat(128u);
v___x_362_ = lean_nat_dec_lt(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
if (v___x_362_ == 0)
{
lean_dec(v_val_358_);
return v___x_362_;
}
else
{
uint32_t v___x_363_; uint32_t v___x_364_; uint8_t v___x_365_; 
v___x_363_ = 48;
v___x_364_ = lean_unbox_uint32(v_val_358_);
v___x_365_ = lean_uint32_dec_le(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
uint32_t v___x_366_; 
v___x_366_ = lean_unbox_uint32(v_val_358_);
lean_dec(v_val_358_);
v___y_349_ = v___x_366_;
goto v___jp_348_;
}
else
{
uint32_t v___x_367_; uint32_t v___x_368_; uint8_t v___x_369_; 
v___x_367_ = 57;
v___x_368_ = lean_unbox_uint32(v_val_358_);
v___x_369_ = lean_uint32_dec_le(v___x_368_, v___x_367_);
if (v___x_369_ == 0)
{
uint32_t v___x_370_; 
v___x_370_ = lean_unbox_uint32(v_val_358_);
lean_dec(v_val_358_);
v___y_349_ = v___x_370_;
goto v___jp_348_;
}
else
{
lean_dec(v_val_358_);
return v___x_369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object* v_s_403_){
_start:
{
uint8_t v_res_404_; lean_object* v_r_405_; 
v_res_404_ = l_Std_Http_URI_isValidDomainLabel(v_s_403_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg(){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0));
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object* v___dummy_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v_res_411_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object* v_s_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object* v_s_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(v_s_415_);
lean_dec_ref(v_s_415_);
return v_res_416_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(lean_object* v_lower_417_, lean_object* v___x_418_, lean_object* v___x_419_, lean_object* v_a_420_, uint8_t v_b_421_){
_start:
{
if (lean_obj_tag(v_a_420_) == 0)
{
lean_object* v_currPos_422_; lean_object* v_searcher_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_460_; 
v_currPos_422_ = lean_ctor_get(v_a_420_, 0);
v_searcher_423_ = lean_ctor_get(v_a_420_, 1);
v_isSharedCheck_460_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_460_ == 0)
{
v___x_425_ = v_a_420_;
v_isShared_426_ = v_isSharedCheck_460_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_searcher_423_);
lean_inc(v_currPos_422_);
lean_dec(v_a_420_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_460_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v_str_427_; lean_object* v_startInclusive_428_; lean_object* v_endExclusive_429_; uint8_t v___x_430_; lean_object* v_it_432_; lean_object* v_startInclusive_433_; lean_object* v_endExclusive_434_; lean_object* v___x_438_; uint8_t v_decide_439_; 
v_str_427_ = lean_ctor_get(v___x_418_, 0);
v_startInclusive_428_ = lean_ctor_get(v___x_418_, 1);
v_endExclusive_429_ = lean_ctor_get(v___x_418_, 2);
v___x_430_ = 1;
v___x_438_ = lean_nat_sub(v_endExclusive_429_, v_startInclusive_428_);
v_decide_439_ = lean_nat_dec_eq(v_searcher_423_, v___x_438_);
lean_dec(v___x_438_);
if (v_decide_439_ == 0)
{
uint32_t v___x_440_; lean_object* v___x_441_; uint32_t v___x_442_; uint8_t v___x_443_; 
v___x_440_ = 46;
v___x_441_ = lean_nat_add(v_startInclusive_428_, v_searcher_423_);
v___x_442_ = lean_string_utf8_get_fast(v_str_427_, v___x_441_);
v___x_443_ = lean_uint32_dec_eq(v___x_442_, v___x_440_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
lean_dec(v_searcher_423_);
v___x_444_ = lean_string_utf8_next_fast(v_str_427_, v___x_441_);
lean_dec(v___x_441_);
v___x_445_ = lean_nat_sub(v___x_444_, v_startInclusive_428_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v___x_445_);
v___x_447_ = v___x_425_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_currPos_422_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_449_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
v_a_420_ = v___x_447_;
goto _start;
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_slice_453_; lean_object* v_nextIt_455_; 
v___x_450_ = lean_string_utf8_next_fast(v_str_427_, v___x_441_);
v___x_451_ = lean_nat_sub(v___x_450_, v___x_441_);
lean_dec(v___x_441_);
v___x_452_ = lean_nat_add(v_searcher_423_, v___x_451_);
lean_dec(v___x_451_);
v_slice_453_ = l_String_Slice_subslice_x21(v___x_418_, v_currPos_422_, v_searcher_423_);
lean_inc(v___x_452_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 1, v___x_452_);
lean_ctor_set(v___x_425_, 0, v___x_452_);
v_nextIt_455_ = v___x_425_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v___x_452_);
v_nextIt_455_ = v_reuseFailAlloc_458_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v_startInclusive_456_; lean_object* v_endExclusive_457_; 
v_startInclusive_456_ = lean_ctor_get(v_slice_453_, 0);
lean_inc(v_startInclusive_456_);
v_endExclusive_457_ = lean_ctor_get(v_slice_453_, 1);
lean_inc(v_endExclusive_457_);
lean_dec_ref(v_slice_453_);
v_it_432_ = v_nextIt_455_;
v_startInclusive_433_ = v_startInclusive_456_;
v_endExclusive_434_ = v_endExclusive_457_;
goto v___jp_431_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_del_object(v___x_425_);
lean_dec(v_searcher_423_);
v___x_459_ = lean_box(1);
lean_inc(v___x_419_);
v_it_432_ = v___x_459_;
v_startInclusive_433_ = v_currPos_422_;
v_endExclusive_434_ = v___x_419_;
goto v___jp_431_;
}
v___jp_431_:
{
lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_435_ = lean_string_utf8_extract_fast(v_lower_417_, v_startInclusive_433_, v_endExclusive_434_);
lean_dec(v_endExclusive_434_);
lean_dec(v_startInclusive_433_);
v___x_436_ = l_Std_Http_URI_isValidDomainLabel(v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v_it_432_);
lean_dec(v___x_419_);
return v___x_436_;
}
else
{
v_a_420_ = v_it_432_;
v_b_421_ = v___x_430_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_419_);
return v_b_421_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg___boxed(lean_object* v_lower_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v_a_464_, lean_object* v_b_465_){
_start:
{
uint8_t v_b_boxed_466_; uint8_t v_res_467_; lean_object* v_r_468_; 
v_b_boxed_466_ = lean_unbox(v_b_465_);
v_res_467_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_461_, v___x_462_, v___x_463_, v_a_464_, v_b_boxed_466_);
lean_dec_ref(v___x_462_);
lean_dec_ref(v_lower_461_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(lean_object* v_lower_469_, lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v_a_472_, uint8_t v_b_473_){
_start:
{
if (lean_obj_tag(v_a_472_) == 0)
{
lean_object* v_currPos_474_; lean_object* v_searcher_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_512_; 
v_currPos_474_ = lean_ctor_get(v_a_472_, 0);
v_searcher_475_ = lean_ctor_get(v_a_472_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_a_472_);
if (v_isSharedCheck_512_ == 0)
{
v___x_477_ = v_a_472_;
v_isShared_478_ = v_isSharedCheck_512_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_searcher_475_);
lean_inc(v_currPos_474_);
lean_dec(v_a_472_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_512_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v_str_479_; lean_object* v_startInclusive_480_; lean_object* v_endExclusive_481_; uint8_t v___x_482_; lean_object* v_it_484_; lean_object* v_startInclusive_485_; lean_object* v_endExclusive_486_; lean_object* v___x_490_; uint8_t v_decide_491_; 
v_str_479_ = lean_ctor_get(v___x_470_, 0);
v_startInclusive_480_ = lean_ctor_get(v___x_470_, 1);
v_endExclusive_481_ = lean_ctor_get(v___x_470_, 2);
v___x_482_ = 1;
v___x_490_ = lean_nat_sub(v_endExclusive_481_, v_startInclusive_480_);
v_decide_491_ = lean_nat_dec_eq(v_searcher_475_, v___x_490_);
lean_dec(v___x_490_);
if (v_decide_491_ == 0)
{
lean_object* v___x_492_; uint32_t v___x_493_; uint32_t v___x_494_; uint8_t v___x_495_; 
v___x_492_ = lean_nat_add(v_startInclusive_480_, v_searcher_475_);
v___x_493_ = lean_string_utf8_get_fast(v_str_479_, v___x_492_);
v___x_494_ = 46;
v___x_495_ = lean_uint32_dec_eq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
lean_dec(v_searcher_475_);
v___x_496_ = lean_string_utf8_next_fast(v_str_479_, v___x_492_);
lean_dec(v___x_492_);
v___x_497_ = lean_nat_sub(v___x_496_, v_startInclusive_480_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_497_);
v___x_499_ = v___x_477_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_currPos_474_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v___x_497_);
v___x_499_ = v_reuseFailAlloc_501_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
uint8_t v___x_500_; 
v___x_500_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_469_, v___x_470_, v___x_471_, v___x_499_, v_b_473_);
return v___x_500_;
}
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_slice_505_; lean_object* v_nextIt_507_; 
v___x_502_ = lean_string_utf8_next_fast(v_str_479_, v___x_492_);
v___x_503_ = lean_nat_sub(v___x_502_, v___x_492_);
lean_dec(v___x_492_);
v___x_504_ = lean_nat_add(v_searcher_475_, v___x_503_);
lean_dec(v___x_503_);
v_slice_505_ = l_String_Slice_subslice_x21(v___x_470_, v_currPos_474_, v_searcher_475_);
lean_inc(v___x_504_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v___x_504_);
lean_ctor_set(v___x_477_, 0, v___x_504_);
v_nextIt_507_ = v___x_477_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_504_);
v_nextIt_507_ = v_reuseFailAlloc_510_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v_startInclusive_508_; lean_object* v_endExclusive_509_; 
v_startInclusive_508_ = lean_ctor_get(v_slice_505_, 0);
lean_inc(v_startInclusive_508_);
v_endExclusive_509_ = lean_ctor_get(v_slice_505_, 1);
lean_inc(v_endExclusive_509_);
lean_dec_ref(v_slice_505_);
v_it_484_ = v_nextIt_507_;
v_startInclusive_485_ = v_startInclusive_508_;
v_endExclusive_486_ = v_endExclusive_509_;
goto v___jp_483_;
}
}
}
else
{
lean_object* v___x_511_; 
lean_del_object(v___x_477_);
lean_dec(v_searcher_475_);
v___x_511_ = lean_box(1);
lean_inc(v___x_471_);
v_it_484_ = v___x_511_;
v_startInclusive_485_ = v_currPos_474_;
v_endExclusive_486_ = v___x_471_;
goto v___jp_483_;
}
v___jp_483_:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_string_utf8_extract_fast(v_lower_469_, v_startInclusive_485_, v_endExclusive_486_);
lean_dec(v_endExclusive_486_);
lean_dec(v_startInclusive_485_);
v___x_488_ = l_Std_Http_URI_isValidDomainLabel(v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v_it_484_);
lean_dec(v___x_471_);
return v___x_488_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_469_, v___x_470_, v___x_471_, v_it_484_, v___x_482_);
return v___x_489_;
}
}
}
}
else
{
lean_dec(v___x_471_);
return v_b_473_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object* v_lower_513_, lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v_a_516_, lean_object* v_b_517_){
_start:
{
uint8_t v_b_boxed_518_; uint8_t v_res_519_; lean_object* v_r_520_; 
v_b_boxed_518_ = lean_unbox(v_b_517_);
v_res_519_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_513_, v___x_514_, v___x_515_, v_a_516_, v_b_boxed_518_);
lean_dec_ref(v___x_514_);
lean_dec_ref(v_lower_513_);
v_r_520_ = lean_box(v_res_519_);
return v_r_520_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(lean_object* v___x_521_, lean_object* v___x_522_, lean_object* v_a_523_, uint8_t v_b_524_){
_start:
{
if (lean_obj_tag(v_a_523_) == 0)
{
lean_object* v_currPos_525_; lean_object* v_searcher_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_547_; 
v_currPos_525_ = lean_ctor_get(v_a_523_, 0);
v_searcher_526_ = lean_ctor_get(v_a_523_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_a_523_);
if (v_isSharedCheck_547_ == 0)
{
v___x_528_ = v_a_523_;
v_isShared_529_ = v_isSharedCheck_547_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_searcher_526_);
lean_inc(v_currPos_525_);
lean_dec(v_a_523_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_547_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v_str_530_; lean_object* v_startInclusive_531_; lean_object* v_endExclusive_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; uint8_t v_decide_536_; 
v_str_530_ = lean_ctor_get(v___x_522_, 0);
v_startInclusive_531_ = lean_ctor_get(v___x_522_, 1);
v_endExclusive_532_ = lean_ctor_get(v___x_522_, 2);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_nat_dec_eq(v___x_521_, v___x_533_);
v___x_535_ = lean_nat_sub(v_endExclusive_532_, v_startInclusive_531_);
v_decide_536_ = lean_nat_dec_eq(v_searcher_526_, v___x_535_);
lean_dec(v___x_535_);
if (v_decide_536_ == 0)
{
uint32_t v___x_537_; lean_object* v___x_538_; uint32_t v___x_539_; uint8_t v___x_540_; 
v___x_537_ = 46;
v___x_538_ = lean_nat_add(v_startInclusive_531_, v_searcher_526_);
lean_dec(v_searcher_526_);
v___x_539_ = lean_string_utf8_get_fast(v_str_530_, v___x_538_);
v___x_540_ = lean_uint32_dec_eq(v___x_539_, v___x_537_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_541_ = lean_string_utf8_next_fast(v_str_530_, v___x_538_);
lean_dec(v___x_538_);
v___x_542_ = lean_nat_sub(v___x_541_, v_startInclusive_531_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 1, v___x_542_);
v___x_544_ = v___x_528_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_currPos_525_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_546_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
v_a_523_ = v___x_544_;
goto _start;
}
}
else
{
lean_dec(v___x_538_);
lean_del_object(v___x_528_);
lean_dec(v_currPos_525_);
return v___x_534_;
}
}
else
{
lean_del_object(v___x_528_);
lean_dec(v_searcher_526_);
lean_dec(v_currPos_525_);
return v___x_534_;
}
}
}
else
{
return v_b_524_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg___boxed(lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v_a_550_, lean_object* v_b_551_){
_start:
{
uint8_t v_b_boxed_552_; uint8_t v_res_553_; lean_object* v_r_554_; 
v_b_boxed_552_ = lean_unbox(v_b_551_);
v_res_553_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_548_, v___x_549_, v_a_550_, v_b_boxed_552_);
lean_dec_ref(v___x_549_);
lean_dec(v___x_548_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object* v___x_555_, lean_object* v_lower_556_, lean_object* v___x_557_, lean_object* v___x_558_, lean_object* v_a_559_, uint8_t v_b_560_){
_start:
{
if (lean_obj_tag(v_a_559_) == 0)
{
lean_object* v_currPos_561_; lean_object* v_searcher_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_583_; 
v_currPos_561_ = lean_ctor_get(v_a_559_, 0);
v_searcher_562_ = lean_ctor_get(v_a_559_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_559_);
if (v_isSharedCheck_583_ == 0)
{
v___x_564_ = v_a_559_;
v_isShared_565_ = v_isSharedCheck_583_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_searcher_562_);
lean_inc(v_currPos_561_);
lean_dec(v_a_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_583_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v_str_566_; lean_object* v_startInclusive_567_; lean_object* v_endExclusive_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; uint8_t v_decide_572_; 
v_str_566_ = lean_ctor_get(v___x_557_, 0);
v_startInclusive_567_ = lean_ctor_get(v___x_557_, 1);
v_endExclusive_568_ = lean_ctor_get(v___x_557_, 2);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_nat_dec_eq(v___x_555_, v___x_569_);
v___x_571_ = lean_nat_sub(v_endExclusive_568_, v_startInclusive_567_);
v_decide_572_ = lean_nat_dec_eq(v_searcher_562_, v___x_571_);
lean_dec(v___x_571_);
if (v_decide_572_ == 0)
{
lean_object* v___x_573_; uint32_t v___x_574_; uint32_t v___x_575_; uint8_t v___x_576_; 
v___x_573_ = lean_nat_add(v_startInclusive_567_, v_searcher_562_);
lean_dec(v_searcher_562_);
v___x_574_ = lean_string_utf8_get_fast(v_str_566_, v___x_573_);
v___x_575_ = 46;
v___x_576_ = lean_uint32_dec_eq(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_577_ = lean_string_utf8_next_fast(v_str_566_, v___x_573_);
lean_dec(v___x_573_);
v___x_578_ = lean_nat_sub(v___x_577_, v_startInclusive_567_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_578_);
v___x_580_ = v___x_564_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_currPos_561_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_578_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
uint8_t v___x_581_; 
v___x_581_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_555_, v___x_557_, v___x_580_, v_b_560_);
return v___x_581_;
}
}
else
{
lean_dec(v___x_573_);
lean_del_object(v___x_564_);
lean_dec(v_currPos_561_);
return v___x_570_;
}
}
else
{
lean_del_object(v___x_564_);
lean_dec(v_searcher_562_);
lean_dec(v_currPos_561_);
return v___x_570_;
}
}
}
else
{
return v_b_560_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object* v___x_584_, lean_object* v_lower_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_a_588_, lean_object* v_b_589_){
_start:
{
uint8_t v_b_boxed_590_; uint8_t v_res_591_; lean_object* v_r_592_; 
v_b_boxed_590_ = lean_unbox(v_b_589_);
v_res_591_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_584_, v_lower_585_, v___x_586_, v___x_587_, v_a_588_, v_b_boxed_590_);
lean_dec(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v_lower_585_);
lean_dec(v___x_584_);
v_r_592_ = lean_box(v_res_591_);
return v_r_592_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object* v_s_593_){
_start:
{
lean_object* v___x_594_; lean_object* v_lower_595_; uint8_t v___y_597_; uint8_t v___y_598_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v_lower_595_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_593_, v___x_594_);
v___x_602_ = lean_string_utf8_byte_size(v_lower_595_);
v___x_603_ = lean_nat_dec_eq(v___x_602_, v___x_594_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; uint8_t v___y_608_; uint8_t v___x_613_; 
lean_inc_ref(v_lower_595_);
v___x_604_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_604_, 0, v_lower_595_);
lean_ctor_set(v___x_604_, 1, v___x_594_);
lean_ctor_set(v___x_604_, 2, v___x_602_);
v___x_605_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
v___x_606_ = 1;
v___x_613_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_602_, v_lower_595_, v___x_604_, v___x_602_, v___x_605_, v___x_606_);
if (v___x_613_ == 0)
{
v___y_608_ = v___x_606_;
goto v___jp_607_;
}
else
{
v___y_608_ = v___x_603_;
goto v___jp_607_;
}
v___jp_607_:
{
uint8_t v___x_609_; 
v___x_609_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_595_, v___x_604_, v___x_602_, v___x_605_, v___x_606_);
lean_dec_ref_known(v___x_604_, 3);
if (v___x_609_ == 0)
{
v___y_597_ = v___y_608_;
v___y_598_ = v___x_609_;
goto v___jp_596_;
}
else
{
lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_610_ = lean_string_length(v_lower_595_);
v___x_611_ = lean_unsigned_to_nat(255u);
v___x_612_ = lean_nat_dec_le(v___x_610_, v___x_611_);
v___y_597_ = v___y_608_;
v___y_598_ = v___x_612_;
goto v___jp_596_;
}
}
}
else
{
lean_object* v___x_614_; 
lean_dec_ref(v_lower_595_);
v___x_614_ = lean_box(0);
return v___x_614_;
}
v___jp_596_:
{
if (v___y_597_ == 0)
{
lean_object* v___x_599_; 
lean_dec_ref(v_lower_595_);
v___x_599_ = lean_box(0);
return v___x_599_;
}
else
{
if (v___y_598_ == 0)
{
lean_object* v___x_600_; 
lean_dec_ref(v_lower_595_);
v___x_600_ = lean_box(0);
return v___x_600_;
}
else
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_lower_595_);
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object* v___x_615_, lean_object* v_lower_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v_inst_619_, lean_object* v_R_620_, lean_object* v_a_621_, uint8_t v_b_622_, lean_object* v_c_623_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_615_, v_lower_616_, v___x_617_, v___x_618_, v_a_621_, v_b_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object* v___x_625_, lean_object* v_lower_626_, lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v_inst_629_, lean_object* v_R_630_, lean_object* v_a_631_, lean_object* v_b_632_, lean_object* v_c_633_){
_start:
{
uint8_t v_b_boxed_634_; uint8_t v_res_635_; lean_object* v_r_636_; 
v_b_boxed_634_ = lean_unbox(v_b_632_);
v_res_635_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(v___x_625_, v_lower_626_, v___x_627_, v___x_628_, v_inst_629_, v_R_630_, v_a_631_, v_b_boxed_634_, v_c_633_);
lean_dec(v___x_628_);
lean_dec_ref(v___x_627_);
lean_dec_ref(v_lower_626_);
lean_dec(v___x_625_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(lean_object* v_lower_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v_inst_640_, lean_object* v_R_641_, lean_object* v_a_642_, uint8_t v_b_643_, lean_object* v_c_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v_lower_637_, v___x_638_, v___x_639_, v_a_642_, v_b_643_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object* v_lower_646_, lean_object* v___x_647_, lean_object* v___x_648_, lean_object* v_inst_649_, lean_object* v_R_650_, lean_object* v_a_651_, lean_object* v_b_652_, lean_object* v_c_653_){
_start:
{
uint8_t v_b_boxed_654_; uint8_t v_res_655_; lean_object* v_r_656_; 
v_b_boxed_654_ = lean_unbox(v_b_652_);
v_res_655_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(v_lower_646_, v___x_647_, v___x_648_, v_inst_649_, v_R_650_, v_a_651_, v_b_boxed_654_, v_c_653_);
lean_dec_ref(v___x_647_);
lean_dec_ref(v_lower_646_);
v_r_656_ = lean_box(v_res_655_);
return v_r_656_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(lean_object* v___x_657_, lean_object* v_lower_658_, lean_object* v___x_659_, lean_object* v___x_660_, lean_object* v_inst_661_, lean_object* v_R_662_, lean_object* v_a_663_, uint8_t v_b_664_, lean_object* v_c_665_){
_start:
{
uint8_t v___x_666_; 
v___x_666_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___redArg(v___x_657_, v___x_659_, v_a_663_, v_b_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1___boxed(lean_object* v___x_667_, lean_object* v_lower_668_, lean_object* v___x_669_, lean_object* v___x_670_, lean_object* v_inst_671_, lean_object* v_R_672_, lean_object* v_a_673_, lean_object* v_b_674_, lean_object* v_c_675_){
_start:
{
uint8_t v_b_boxed_676_; uint8_t v_res_677_; lean_object* v_r_678_; 
v_b_boxed_676_ = lean_unbox(v_b_674_);
v_res_677_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1_spec__1(v___x_667_, v_lower_668_, v___x_669_, v___x_670_, v_inst_671_, v_R_672_, v_a_673_, v_b_boxed_676_, v_c_675_);
lean_dec(v___x_670_);
lean_dec_ref(v___x_669_);
lean_dec_ref(v_lower_668_);
lean_dec(v___x_667_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(lean_object* v_lower_679_, lean_object* v___x_680_, lean_object* v___x_681_, lean_object* v_inst_682_, lean_object* v_R_683_, lean_object* v_a_684_, uint8_t v_b_685_, lean_object* v_c_686_){
_start:
{
uint8_t v___x_687_; 
v___x_687_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___redArg(v_lower_679_, v___x_680_, v___x_681_, v_a_684_, v_b_685_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3___boxed(lean_object* v_lower_688_, lean_object* v___x_689_, lean_object* v___x_690_, lean_object* v_inst_691_, lean_object* v_R_692_, lean_object* v_a_693_, lean_object* v_b_694_, lean_object* v_c_695_){
_start:
{
uint8_t v_b_boxed_696_; uint8_t v_res_697_; lean_object* v_r_698_; 
v_b_boxed_696_ = lean_unbox(v_b_694_);
v_res_697_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2_spec__3(v_lower_688_, v___x_689_, v___x_690_, v_inst_691_, v_R_692_, v_a_693_, v_b_boxed_696_, v_c_695_);
lean_dec_ref(v___x_689_);
lean_dec_ref(v_lower_688_);
v_r_698_ = lean_box(v_res_697_);
return v_r_698_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx(lean_object* v_x_699_){
_start:
{
switch(lean_obj_tag(v_x_699_))
{
case 0:
{
lean_object* v___x_700_; 
v___x_700_ = lean_unsigned_to_nat(0u);
return v___x_700_;
}
case 1:
{
lean_object* v___x_701_; 
v___x_701_ = lean_unsigned_to_nat(1u);
return v___x_701_;
}
default: 
{
lean_object* v___x_702_; 
v___x_702_ = lean_unsigned_to_nat(2u);
return v___x_702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___boxed(lean_object* v_x_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Std_Http_URI_Host_ctorIdx(v_x_703_);
lean_dec_ref(v_x_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object* v_t_705_, lean_object* v_k_706_){
_start:
{
lean_object* v_name_707_; lean_object* v___x_708_; 
v_name_707_ = lean_ctor_get(v_t_705_, 0);
lean_inc_ref(v_name_707_);
lean_dec_ref(v_t_705_);
v___x_708_ = lean_apply_1(v_k_706_, v_name_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object* v_motive_709_, lean_object* v_ctorIdx_710_, lean_object* v_t_711_, lean_object* v_h_712_, lean_object* v_k_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_711_, v_k_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object* v_motive_715_, lean_object* v_ctorIdx_716_, lean_object* v_t_717_, lean_object* v_h_718_, lean_object* v_k_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Std_Http_URI_Host_ctorElim(v_motive_715_, v_ctorIdx_716_, v_t_717_, v_h_718_, v_k_719_);
lean_dec(v_ctorIdx_716_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object* v_t_721_, lean_object* v_name_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_721_, v_name_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object* v_motive_724_, lean_object* v_t_725_, lean_object* v_h_726_, lean_object* v_name_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_725_, v_name_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object* v_t_729_, lean_object* v_ipv4_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_729_, v_ipv4_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object* v_motive_732_, lean_object* v_t_733_, lean_object* v_h_734_, lean_object* v_ipv4_735_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_733_, v_ipv4_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object* v_t_737_, lean_object* v_ipv6_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_737_, v_ipv6_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object* v_motive_740_, lean_object* v_t_741_, lean_object* v_h_742_, lean_object* v_ipv6_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_741_, v_ipv6_743_);
return v___x_744_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default___closed__0(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = l_Std_Net_instInhabitedIPv4Addr_default;
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_obj_once(&l_Std_Http_URI_instInhabitedHost_default___closed__0, &l_Std_Http_URI_instInhabitedHost_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedHost_default___closed__0);
return v___x_747_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Std_Http_URI_instInhabitedHost_default;
return v___x_748_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
switch(lean_obj_tag(v_x_749_))
{
case 0:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_name_751_; lean_object* v_name_752_; uint8_t v___x_753_; 
v_name_751_ = lean_ctor_get(v_x_749_, 0);
v_name_752_ = lean_ctor_get(v_x_750_, 0);
v___x_753_ = lean_string_dec_eq(v_name_751_, v_name_752_);
return v___x_753_;
}
else
{
uint8_t v___x_754_; 
v___x_754_ = 0;
return v___x_754_;
}
}
case 1:
{
if (lean_obj_tag(v_x_750_) == 1)
{
lean_object* v_ipv4_755_; lean_object* v_ipv4_756_; uint8_t v___x_757_; 
v_ipv4_755_ = lean_ctor_get(v_x_749_, 0);
v_ipv4_756_ = lean_ctor_get(v_x_750_, 0);
v___x_757_ = l_Std_Net_instDecidableEqIPv4Addr_decEq(v_ipv4_755_, v_ipv4_756_);
return v___x_757_;
}
else
{
uint8_t v___x_758_; 
v___x_758_ = 0;
return v___x_758_;
}
}
default: 
{
if (lean_obj_tag(v_x_750_) == 2)
{
lean_object* v_ipv6_759_; lean_object* v_ipv6_760_; uint8_t v___x_761_; 
v_ipv6_759_ = lean_ctor_get(v_x_749_, 0);
v_ipv6_760_ = lean_ctor_get(v_x_750_, 0);
v___x_761_ = l_Std_Net_instDecidableEqIPv6Addr_decEq(v_ipv6_759_, v_ipv6_760_);
return v___x_761_;
}
else
{
uint8_t v___x_762_; 
v___x_762_ = 0;
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
uint8_t v_res_765_; lean_object* v_r_766_; 
v_res_765_ = l_Std_Http_URI_instBEqHost_beq(v_x_763_, v_x_764_);
lean_dec_ref(v_x_764_);
lean_dec_ref(v_x_763_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__4(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_unsigned_to_nat(2u);
v___x_774_ = lean_nat_to_int(v___x_773_);
return v___x_774_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__5(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_unsigned_to_nat(1u);
v___x_776_ = lean_nat_to_int(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object* v_x_777_, lean_object* v_prec_778_){
_start:
{
lean_object* v___y_780_; lean_object* v_ctr_781_; lean_object* v_a_782_; lean_object* v___y_794_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(1024u);
v___x_826_ = lean_nat_dec_le(v___x_825_, v_prec_778_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_794_ = v___x_827_;
goto v___jp_793_;
}
else
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_794_ = v___x_828_;
goto v___jp_793_;
}
v___jp_779_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_783_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_784_ = lean_string_append(v___x_783_, v_ctr_781_);
v___x_785_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
v___x_786_ = lean_box(1);
v___x_787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
lean_ctor_set(v___x_788_, 1, v_a_782_);
lean_inc(v___y_780_);
v___x_789_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_789_, 0, v___y_780_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = 0;
v___x_791_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set_uint8(v___x_791_, sizeof(void*)*1, v___x_790_);
v___x_792_ = l_Repr_addAppParen(v___x_791_, v_prec_778_);
return v___x_792_;
}
v___jp_793_:
{
switch(lean_obj_tag(v_x_777_))
{
case 0:
{
lean_object* v_name_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_804_; 
v_name_795_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_804_ == 0)
{
v___x_797_ = v_x_777_;
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_name_795_);
lean_dec(v_x_777_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_804_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_799_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_800_ = l_String_quote(v_name_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set_tag(v___x_797_, 3);
lean_ctor_set(v___x_797_, 0, v___x_800_);
v___x_802_ = v___x_797_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_799_;
v_a_782_ = v___x_802_;
goto v___jp_779_;
}
}
}
case 1:
{
lean_object* v_ipv4_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_814_; 
v_ipv4_805_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_814_ == 0)
{
v___x_807_ = v_x_777_;
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_ipv4_805_);
lean_dec(v_x_777_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_809_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_810_ = lean_uv_ntop_v4(v_ipv4_805_);
lean_dec_ref(v_ipv4_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set_tag(v___x_807_, 3);
lean_ctor_set(v___x_807_, 0, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_809_;
v_a_782_ = v___x_812_;
goto v___jp_779_;
}
}
}
default: 
{
lean_object* v_ipv6_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_824_; 
v_ipv6_815_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_824_ == 0)
{
v___x_817_ = v_x_777_;
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_ipv6_815_);
lean_dec(v_x_777_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_819_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_820_ = lean_uv_ntop_v6(v_ipv6_815_);
lean_dec_ref(v_ipv6_815_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 3);
lean_ctor_set(v___x_817_, 0, v___x_820_);
v___x_822_ = v___x_817_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v___y_780_ = v___y_794_;
v_ctr_781_ = v___x_819_;
v_a_782_ = v___x_822_;
goto v___jp_779_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object* v_x_829_, lean_object* v_prec_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Std_Http_URI_instReprHost___lam__0(v_x_829_, v_prec_830_);
lean_dec(v_prec_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object* v_x_836_){
_start:
{
switch(lean_obj_tag(v_x_836_))
{
case 0:
{
lean_object* v_name_837_; 
v_name_837_ = lean_ctor_get(v_x_836_, 0);
lean_inc_ref(v_name_837_);
return v_name_837_;
}
case 1:
{
lean_object* v_ipv4_838_; lean_object* v___x_839_; 
v_ipv4_838_ = lean_ctor_get(v_x_836_, 0);
v___x_839_ = lean_uv_ntop_v4(v_ipv4_838_);
return v___x_839_;
}
default: 
{
lean_object* v_ipv6_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_ipv6_840_ = lean_ctor_get(v_x_836_, 0);
v___x_841_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_842_ = lean_uv_ntop_v6(v_ipv6_840_);
v___x_843_ = lean_string_append(v___x_841_, v___x_842_);
lean_dec_ref(v___x_842_);
v___x_844_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object* v_x_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Std_Http_URI_instToStringHost___lam__0(v_x_846_);
lean_dec_ref(v_x_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx(lean_object* v_x_850_){
_start:
{
switch(lean_obj_tag(v_x_850_))
{
case 0:
{
lean_object* v___x_851_; 
v___x_851_ = lean_unsigned_to_nat(0u);
return v___x_851_;
}
case 1:
{
lean_object* v___x_852_; 
v___x_852_ = lean_unsigned_to_nat(1u);
return v___x_852_;
}
default: 
{
lean_object* v___x_853_; 
v___x_853_ = lean_unsigned_to_nat(2u);
return v___x_853_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___boxed(lean_object* v_x_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Std_Http_URI_Port_ctorIdx(v_x_854_);
lean_dec(v_x_854_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object* v_t_856_, lean_object* v_k_857_){
_start:
{
if (lean_obj_tag(v_t_856_) == 2)
{
uint16_t v_port_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_port_858_ = lean_ctor_get_uint16(v_t_856_, 0);
v___x_859_ = lean_box(v_port_858_);
v___x_860_ = lean_apply_1(v_k_857_, v___x_859_);
return v___x_860_;
}
else
{
return v_k_857_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object* v_t_861_, lean_object* v_k_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_861_, v_k_862_);
lean_dec(v_t_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object* v_motive_864_, lean_object* v_ctorIdx_865_, lean_object* v_t_866_, lean_object* v_h_867_, lean_object* v_k_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_866_, v_k_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object* v_motive_870_, lean_object* v_ctorIdx_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_k_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Std_Http_URI_Port_ctorElim(v_motive_870_, v_ctorIdx_871_, v_t_872_, v_h_873_, v_k_874_);
lean_dec(v_t_872_);
lean_dec(v_ctorIdx_871_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object* v_t_876_, lean_object* v_omitted_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_876_, v_omitted_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object* v_t_879_, lean_object* v_omitted_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Std_Http_URI_Port_omitted_elim___redArg(v_t_879_, v_omitted_880_);
lean_dec(v_t_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object* v_motive_882_, lean_object* v_t_883_, lean_object* v_h_884_, lean_object* v_omitted_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_883_, v_omitted_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object* v_motive_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_omitted_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Std_Http_URI_Port_omitted_elim(v_motive_887_, v_t_888_, v_h_889_, v_omitted_890_);
lean_dec(v_t_888_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object* v_t_892_, lean_object* v_empty_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_892_, v_empty_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object* v_t_895_, lean_object* v_empty_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Std_Http_URI_Port_empty_elim___redArg(v_t_895_, v_empty_896_);
lean_dec(v_t_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object* v_motive_898_, lean_object* v_t_899_, lean_object* v_h_900_, lean_object* v_empty_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_899_, v_empty_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object* v_motive_903_, lean_object* v_t_904_, lean_object* v_h_905_, lean_object* v_empty_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_Http_URI_Port_empty_elim(v_motive_903_, v_t_904_, v_h_905_, v_empty_906_);
lean_dec(v_t_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object* v_t_908_, lean_object* v_value_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_908_, v_value_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object* v_t_911_, lean_object* v_value_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Std_Http_URI_Port_value_elim___redArg(v_t_911_, v_value_912_);
lean_dec(v_t_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object* v_motive_914_, lean_object* v_t_915_, lean_object* v_h_916_, lean_object* v_value_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_915_, v_value_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object* v_motive_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_value_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Std_Http_URI_Port_value_elim(v_motive_919_, v_t_920_, v_h_921_, v_value_922_);
lean_dec(v_t_920_);
return v_res_923_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort_default(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = lean_box(0);
return v___x_924_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort(void){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = lean_box(0);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object* v_x_938_, lean_object* v_prec_939_){
_start:
{
lean_object* v___y_941_; lean_object* v___y_948_; 
switch(lean_obj_tag(v_x_938_))
{
case 0:
{
lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(1024u);
v___x_955_ = lean_nat_dec_le(v___x_954_, v_prec_939_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_948_ = v___x_956_;
goto v___jp_947_;
}
else
{
lean_object* v___x_957_; 
v___x_957_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_948_ = v___x_957_;
goto v___jp_947_;
}
}
case 1:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_unsigned_to_nat(1024u);
v___x_959_ = lean_nat_dec_le(v___x_958_, v_prec_939_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
v___x_960_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_941_ = v___x_960_;
goto v___jp_940_;
}
else
{
lean_object* v___x_961_; 
v___x_961_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_941_ = v___x_961_;
goto v___jp_940_;
}
}
default: 
{
uint16_t v_port_962_; lean_object* v___y_964_; lean_object* v___x_974_; uint8_t v___x_975_; 
v_port_962_ = lean_ctor_get_uint16(v_x_938_, 0);
v___x_974_ = lean_unsigned_to_nat(1024u);
v___x_975_ = lean_nat_dec_le(v___x_974_, v_prec_939_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; 
v___x_976_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_964_ = v___x_976_;
goto v___jp_963_;
}
else
{
lean_object* v___x_977_; 
v___x_977_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_964_ = v___x_977_;
goto v___jp_963_;
}
v___jp_963_:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_965_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__6));
v___x_966_ = lean_uint16_to_nat(v_port_962_);
v___x_967_ = l_Nat_reprFast(v___x_966_);
v___x_968_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
v___x_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_965_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
lean_inc(v___y_964_);
v___x_970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_970_, 0, v___y_964_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = 0;
v___x_972_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = l_Repr_addAppParen(v___x_972_, v_prec_939_);
return v___x_973_;
}
}
}
v___jp_940_:
{
lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_942_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__1));
lean_inc(v___y_941_);
v___x_943_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_943_, 0, v___y_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = 0;
v___x_945_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set_uint8(v___x_945_, sizeof(void*)*1, v___x_944_);
v___x_946_ = l_Repr_addAppParen(v___x_945_, v_prec_939_);
return v___x_946_;
}
v___jp_947_:
{
lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_949_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__3));
lean_inc(v___y_948_);
v___x_950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_950_, 0, v___y_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = 0;
v___x_952_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*1, v___x_951_);
v___x_953_ = l_Repr_addAppParen(v___x_952_, v_prec_939_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object* v_x_978_, lean_object* v_prec_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Std_Http_URI_instReprPort_repr(v_x_978_, v_prec_979_);
lean_dec(v_prec_979_);
lean_dec(v_x_978_);
return v_res_980_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object* v_x_983_, lean_object* v_x_984_){
_start:
{
switch(lean_obj_tag(v_x_983_))
{
case 0:
{
if (lean_obj_tag(v_x_984_) == 0)
{
uint8_t v___x_985_; 
v___x_985_ = 1;
return v___x_985_;
}
else
{
uint8_t v___x_986_; 
v___x_986_ = 0;
return v___x_986_;
}
}
case 1:
{
if (lean_obj_tag(v_x_984_) == 1)
{
uint8_t v___x_987_; 
v___x_987_ = 1;
return v___x_987_;
}
else
{
uint8_t v___x_988_; 
v___x_988_ = 0;
return v___x_988_;
}
}
default: 
{
if (lean_obj_tag(v_x_984_) == 2)
{
uint16_t v_port_989_; uint16_t v_port_990_; uint8_t v___x_991_; 
v_port_989_ = lean_ctor_get_uint16(v_x_983_, 0);
v_port_990_ = lean_ctor_get_uint16(v_x_984_, 0);
v___x_991_ = lean_uint16_dec_eq(v_port_989_, v_port_990_);
return v___x_991_;
}
else
{
uint8_t v___x_992_; 
v___x_992_ = 0;
return v___x_992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object* v_x_993_, lean_object* v_x_994_){
_start:
{
uint8_t v_res_995_; lean_object* v_r_996_; 
v_res_995_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_993_, v_x_994_);
lean_dec(v_x_994_);
lean_dec(v_x_993_);
v_r_996_ = lean_box(v_res_995_);
return v_r_996_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object* v_x_997_, lean_object* v_x_998_){
_start:
{
uint8_t v___x_999_; 
v___x_999_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_997_, v_x_998_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object* v_x_1000_, lean_object* v_x_1001_){
_start:
{
uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_res_1002_ = l_Std_Http_URI_instDecidableEqPort(v_x_1000_, v_x_1001_);
lean_dec(v_x_1001_);
lean_dec(v_x_1000_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1004_ = lean_box(0);
v___x_1005_ = l_Std_Http_URI_instInhabitedHost_default;
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_1005_);
lean_ctor_set(v___x_1007_, 2, v___x_1004_);
return v___x_1007_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_obj_once(&l_Std_Http_URI_instInhabitedAuthority_default___closed__0, &l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0);
return v___x_1008_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Std_Http_URI_instInhabitedAuthority_default;
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object* v_x_1010_, lean_object* v_x_1011_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_1012_;
}
else
{
lean_object* v_val_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v_val_1013_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_val_1013_);
lean_dec_ref_known(v_x_1010_, 1);
v___x_1014_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_1015_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_val_1013_);
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Repr_addAppParen(v___x_1016_, v_x_1011_);
return v___x_1017_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_x_1018_, v_x_1019_);
lean_dec(v_x_1019_);
return v_res_1020_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(8u);
v___x_1034_ = lean_nat_to_int(v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object* v_x_1038_){
_start:
{
lean_object* v_userInfo_1039_; lean_object* v_host_1040_; lean_object* v_port_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_ctr_1061_; lean_object* v_a_1062_; 
v_userInfo_1039_ = lean_ctor_get(v_x_1038_, 0);
lean_inc(v_userInfo_1039_);
v_host_1040_ = lean_ctor_get(v_x_1038_, 1);
lean_inc_ref(v_host_1040_);
v_port_1041_ = lean_ctor_get(v_x_1038_, 2);
lean_inc(v_port_1041_);
lean_dec_ref(v_x_1038_);
v___x_1042_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1043_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3));
v___x_1044_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1045_ = lean_unsigned_to_nat(0u);
v___x_1046_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_userInfo_1039_, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1044_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = 0;
v___x_1049_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set_uint8(v___x_1049_, sizeof(void*)*1, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1043_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_box(1);
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1042_);
v___x_1058_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_1059_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_1040_))
{
case 0:
{
lean_object* v_name_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1099_; 
v_name_1090_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1092_ = v_host_1040_;
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_name_1090_);
lean_dec(v_host_1040_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1099_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1094_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_1095_ = l_String_quote(v_name_1090_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 3);
lean_ctor_set(v___x_1092_, 0, v___x_1095_);
v___x_1097_ = v___x_1092_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
v_ctr_1061_ = v___x_1094_;
v_a_1062_ = v___x_1097_;
goto v___jp_1060_;
}
}
}
case 1:
{
lean_object* v_ipv4_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1109_; 
v_ipv4_1100_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1102_ = v_host_1040_;
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_ipv4_1100_);
lean_dec(v_host_1040_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1109_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_1105_ = lean_uv_ntop_v4(v_ipv4_1100_);
lean_dec_ref(v_ipv4_1100_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 3);
lean_ctor_set(v___x_1102_, 0, v___x_1105_);
v___x_1107_ = v___x_1102_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
v_ctr_1061_ = v___x_1104_;
v_a_1062_ = v___x_1107_;
goto v___jp_1060_;
}
}
}
default: 
{
lean_object* v_ipv6_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1119_; 
v_ipv6_1110_ = lean_ctor_get(v_host_1040_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_host_1040_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1112_ = v_host_1040_;
v_isShared_1113_ = v_isSharedCheck_1119_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_ipv6_1110_);
lean_dec(v_host_1040_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1119_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1114_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_1115_ = lean_uv_ntop_v6(v_ipv6_1110_);
lean_dec_ref(v_ipv6_1110_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 3);
lean_ctor_set(v___x_1112_, 0, v___x_1115_);
v___x_1117_ = v___x_1112_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
v_ctr_1061_ = v___x_1114_;
v_a_1062_ = v___x_1117_;
goto v___jp_1060_;
}
}
}
}
v___jp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1063_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_1064_ = lean_string_append(v___x_1063_, v_ctr_1061_);
v___x_1065_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v___x_1053_);
v___x_1067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v_a_1062_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1059_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_1048_);
v___x_1070_ = l_Repr_addAppParen(v___x_1069_, v___x_1045_);
v___x_1071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1058_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set_uint8(v___x_1072_, sizeof(void*)*1, v___x_1048_);
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1057_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___x_1051_);
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v___x_1053_);
v___x_1076_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1042_);
v___x_1079_ = l_Std_Http_URI_instReprPort_repr(v_port_1041_, v___x_1045_);
lean_dec(v_port_1041_);
v___x_1080_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1058_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set_uint8(v___x_1081_, sizeof(void*)*1, v___x_1048_);
v___x_1082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1078_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1084_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v___x_1082_);
v___x_1086_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1083_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set_uint8(v___x_1089_, sizeof(void*)*1, v___x_1048_);
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object* v_x_1120_, lean_object* v_prec_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_x_1120_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object* v_x_1123_, lean_object* v_prec_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Std_Http_URI_instReprAuthority_repr(v_x_1123_, v_prec_1124_);
lean_dec(v_prec_1124_);
return v_res_1125_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object* v_x_1128_, lean_object* v_x_1129_){
_start:
{
if (lean_obj_tag(v_x_1128_) == 0)
{
if (lean_obj_tag(v_x_1129_) == 0)
{
uint8_t v___x_1130_; 
v___x_1130_ = 1;
return v___x_1130_;
}
else
{
uint8_t v___x_1131_; 
v___x_1131_ = 0;
return v___x_1131_;
}
}
else
{
if (lean_obj_tag(v_x_1129_) == 0)
{
uint8_t v___x_1132_; 
v___x_1132_ = 0;
return v___x_1132_;
}
else
{
lean_object* v_val_1133_; lean_object* v_val_1134_; uint8_t v___x_1135_; 
v_val_1133_ = lean_ctor_get(v_x_1128_, 0);
v_val_1134_ = lean_ctor_get(v_x_1129_, 0);
v___x_1135_ = l_Std_Http_URI_instBEqUserInfo_beq(v_val_1133_, v_val_1134_);
return v___x_1135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_x_1136_, v_x_1137_);
lean_dec(v_x_1137_);
lean_dec(v_x_1136_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
lean_object* v_userInfo_1142_; lean_object* v_host_1143_; lean_object* v_port_1144_; lean_object* v_userInfo_1145_; lean_object* v_host_1146_; lean_object* v_port_1147_; uint8_t v___x_1148_; 
v_userInfo_1142_ = lean_ctor_get(v_x_1140_, 0);
v_host_1143_ = lean_ctor_get(v_x_1140_, 1);
v_port_1144_ = lean_ctor_get(v_x_1140_, 2);
v_userInfo_1145_ = lean_ctor_get(v_x_1141_, 0);
v_host_1146_ = lean_ctor_get(v_x_1141_, 1);
v_port_1147_ = lean_ctor_get(v_x_1141_, 2);
v___x_1148_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_userInfo_1142_, v_userInfo_1145_);
if (v___x_1148_ == 0)
{
return v___x_1148_;
}
else
{
uint8_t v___x_1149_; 
v___x_1149_ = l_Std_Http_URI_instBEqHost_beq(v_host_1143_, v_host_1146_);
if (v___x_1149_ == 0)
{
return v___x_1149_;
}
else
{
uint8_t v___x_1150_; 
v___x_1150_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1144_, v_port_1147_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object* v_x_1151_, lean_object* v_x_1152_){
_start:
{
uint8_t v_res_1153_; lean_object* v_r_1154_; 
v_res_1153_ = l_Std_Http_URI_instBEqAuthority_beq(v_x_1151_, v_x_1152_);
lean_dec_ref(v_x_1152_);
lean_dec_ref(v_x_1151_);
v_r_1154_ = lean_box(v_res_1153_);
return v_r_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object* v_auth_1160_){
_start:
{
lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v_userInfo_1167_; lean_object* v_host_1168_; lean_object* v_port_1169_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1181_; 
v_userInfo_1167_ = lean_ctor_get(v_auth_1160_, 0);
lean_inc(v_userInfo_1167_);
v_host_1168_ = lean_ctor_get(v_auth_1160_, 1);
lean_inc_ref(v_host_1168_);
v_port_1169_ = lean_ctor_get(v_auth_1160_, 2);
lean_inc(v_port_1169_);
lean_dec_ref(v_auth_1160_);
if (lean_obj_tag(v_userInfo_1167_) == 0)
{
lean_object* v___x_1191_; 
v___x_1191_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1181_ = v___x_1191_;
goto v___jp_1180_;
}
else
{
lean_object* v_val_1192_; lean_object* v_password_1193_; 
v_val_1192_ = lean_ctor_get(v_userInfo_1167_, 0);
lean_inc(v_val_1192_);
lean_dec_ref_known(v_userInfo_1167_, 1);
v_password_1193_ = lean_ctor_get(v_val_1192_, 1);
if (lean_obj_tag(v_password_1193_) == 0)
{
lean_object* v_username_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_username_1194_ = lean_ctor_get(v_val_1192_, 0);
lean_inc_ref(v_username_1194_);
lean_dec(v_val_1192_);
v___x_1195_ = lean_string_from_utf8_unchecked(v_username_1194_);
v___x_1196_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1197_ = lean_string_append(v___x_1195_, v___x_1196_);
v___y_1181_ = v___x_1197_;
goto v___jp_1180_;
}
else
{
lean_object* v_username_1198_; lean_object* v_val_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_inc_ref(v_password_1193_);
v_username_1198_ = lean_ctor_get(v_val_1192_, 0);
lean_inc_ref(v_username_1198_);
lean_dec(v_val_1192_);
v_val_1199_ = lean_ctor_get(v_password_1193_, 0);
lean_inc(v_val_1199_);
lean_dec_ref_known(v_password_1193_, 1);
v___x_1200_ = lean_string_from_utf8_unchecked(v_username_1198_);
v___x_1201_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1202_ = lean_string_append(v___x_1200_, v___x_1201_);
v___x_1203_ = lean_string_from_utf8_unchecked(v_val_1199_);
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
lean_dec_ref(v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
v___y_1181_ = v___x_1206_;
goto v___jp_1180_;
}
}
v___jp_1161_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_string_append(v___y_1162_, v___y_1163_);
lean_dec_ref(v___y_1163_);
v___x_1166_ = lean_string_append(v___x_1165_, v___y_1164_);
lean_dec_ref(v___y_1164_);
return v___x_1166_;
}
v___jp_1170_:
{
switch(lean_obj_tag(v_port_1169_))
{
case 0:
{
lean_object* v___x_1173_; 
v___x_1173_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1173_;
goto v___jp_1161_;
}
case 1:
{
lean_object* v___x_1174_; 
v___x_1174_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1174_;
goto v___jp_1161_;
}
default: 
{
uint16_t v_port_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v_port_1175_ = lean_ctor_get_uint16(v_port_1169_, 0);
lean_dec_ref_known(v_port_1169_, 0);
v___x_1176_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1177_ = lean_uint16_to_nat(v_port_1175_);
v___x_1178_ = l_Nat_reprFast(v___x_1177_);
v___x_1179_ = lean_string_append(v___x_1176_, v___x_1178_);
lean_dec_ref(v___x_1178_);
v___y_1162_ = v___y_1171_;
v___y_1163_ = v___y_1172_;
v___y_1164_ = v___x_1179_;
goto v___jp_1161_;
}
}
}
v___jp_1180_:
{
switch(lean_obj_tag(v_host_1168_))
{
case 0:
{
lean_object* v_name_1182_; 
v_name_1182_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_name_1182_);
lean_dec_ref_known(v_host_1168_, 1);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v_name_1182_;
goto v___jp_1170_;
}
case 1:
{
lean_object* v_ipv4_1183_; lean_object* v___x_1184_; 
v_ipv4_1183_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_ipv4_1183_);
lean_dec_ref_known(v_host_1168_, 1);
v___x_1184_ = lean_uv_ntop_v4(v_ipv4_1183_);
lean_dec_ref(v_ipv4_1183_);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v___x_1184_;
goto v___jp_1170_;
}
default: 
{
lean_object* v_ipv6_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v_ipv6_1185_ = lean_ctor_get(v_host_1168_, 0);
lean_inc_ref(v_ipv6_1185_);
lean_dec_ref_known(v_host_1168_, 1);
v___x_1186_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_1187_ = lean_uv_ntop_v6(v_ipv6_1185_);
lean_dec_ref(v_ipv6_1185_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___y_1171_ = v___y_1181_;
v___y_1172_ = v___x_1190_;
goto v___jp_1170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1216_, lean_object* v_x_1217_, lean_object* v_x_1218_){
_start:
{
if (lean_obj_tag(v_x_1218_) == 0)
{
lean_dec(v_x_1216_);
return v_x_1217_;
}
else
{
lean_object* v_head_1219_; lean_object* v_tail_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1232_; 
v_head_1219_ = lean_ctor_get(v_x_1218_, 0);
v_tail_1220_ = lean_ctor_get(v_x_1218_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_x_1218_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1222_ = v_x_1218_;
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_tail_1220_);
lean_inc(v_head_1219_);
lean_dec(v_x_1218_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
lean_inc(v_x_1216_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set_tag(v___x_1222_, 5);
lean_ctor_set(v___x_1222_, 1, v_x_1216_);
lean_ctor_set(v___x_1222_, 0, v_x_1217_);
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_x_1217_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_x_1216_);
v___x_1225_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1226_ = lean_string_from_utf8_unchecked(v_head_1219_);
v___x_1227_ = l_String_quote(v___x_1226_);
v___x_1228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
v___x_1229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1225_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v_x_1217_ = v___x_1229_;
v_x_1218_ = v_tail_1220_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object* v_x_1233_, lean_object* v_x_1234_, lean_object* v_x_1235_){
_start:
{
if (lean_obj_tag(v_x_1235_) == 0)
{
lean_dec(v_x_1233_);
return v_x_1234_;
}
else
{
lean_object* v_head_1236_; lean_object* v_tail_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1249_; 
v_head_1236_ = lean_ctor_get(v_x_1235_, 0);
v_tail_1237_ = lean_ctor_get(v_x_1235_, 1);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_x_1235_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1239_ = v_x_1235_;
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_tail_1237_);
lean_inc(v_head_1236_);
lean_dec(v_x_1235_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
lean_inc(v_x_1233_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set_tag(v___x_1239_, 5);
lean_ctor_set(v___x_1239_, 1, v_x_1233_);
lean_ctor_set(v___x_1239_, 0, v_x_1234_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_x_1234_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_x_1233_);
v___x_1242_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1243_ = lean_string_from_utf8_unchecked(v_head_1236_);
v___x_1244_ = l_String_quote(v___x_1243_);
v___x_1245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1242_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(v_x_1233_, v___x_1246_, v_tail_1237_);
return v___x_1247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = lean_string_from_utf8_unchecked(v___y_1250_);
v___x_1252_ = l_String_quote(v___x_1251_);
v___x_1253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object* v_x_1254_, lean_object* v_x_1255_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
lean_object* v___x_1256_; 
lean_dec(v_x_1255_);
v___x_1256_ = lean_box(0);
return v___x_1256_;
}
else
{
lean_object* v_tail_1257_; 
v_tail_1257_ = lean_ctor_get(v_x_1254_, 1);
if (lean_obj_tag(v_tail_1257_) == 0)
{
lean_object* v_head_1258_; lean_object* v___x_1259_; 
lean_dec(v_x_1255_);
v_head_1258_ = lean_ctor_get(v_x_1254_, 0);
lean_inc(v_head_1258_);
lean_dec_ref_known(v_x_1254_, 2);
v___x_1259_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1258_);
return v___x_1259_;
}
else
{
lean_object* v_head_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_inc(v_tail_1257_);
v_head_1260_ = lean_ctor_get(v_x_1254_, 0);
lean_inc(v_head_1260_);
lean_dec_ref_known(v_x_1254_, 2);
v___x_1261_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1260_);
v___x_1262_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(v_x_1255_, v___x_1261_, v_tail_1257_);
return v___x_1262_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0));
v___x_1268_ = lean_string_length(v___x_1267_);
return v___x_1268_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2);
v___x_1270_ = lean_nat_to_int(v___x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object* v_xs_1278_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1279_ = lean_array_get_size(v_xs_1278_);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = lean_nat_dec_eq(v___x_1279_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1282_ = lean_array_to_list(v_xs_1278_);
v___x_1283_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1284_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(v___x_1282_, v___x_1283_);
v___x_1285_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1286_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
lean_ctor_set(v___x_1287_, 1, v___x_1284_);
v___x_1288_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1285_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = l_Std_Format_fill(v___x_1290_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; 
lean_dec_ref(v_xs_1278_);
v___x_1292_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object* v_x_1305_){
_start:
{
lean_object* v_segments_1306_; uint8_t v_absolute_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1339_; 
v_segments_1306_ = lean_ctor_get(v_x_1305_, 0);
v_absolute_1307_ = lean_ctor_get_uint8(v_x_1305_, sizeof(void*)*1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1309_ = v_x_1305_;
v_isShared_1310_ = v_isSharedCheck_1339_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_segments_1306_);
lean_dec(v_x_1305_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1339_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1318_; 
v___x_1311_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1312_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__3));
v___x_1313_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1314_ = l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(v_segments_1306_);
v___x_1315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = 0;
if (v_isShared_1310_ == 0)
{
lean_ctor_set_tag(v___x_1309_, 6);
lean_ctor_set(v___x_1309_, 0, v___x_1315_);
v___x_1318_ = v___x_1309_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1315_);
v___x_1318_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*1, v___x_1316_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1312_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_box(1);
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__5));
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1311_);
v___x_1327_ = l_Bool_repr___redArg(v_absolute_1307_);
v___x_1328_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1313_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set_uint8(v___x_1329_, sizeof(void*)*1, v___x_1316_);
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1326_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1332_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
lean_ctor_set(v___x_1333_, 1, v___x_1330_);
v___x_1334_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1331_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set_uint8(v___x_1337_, sizeof(void*)*1, v___x_1316_);
return v___x_1337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object* v_x_1340_, lean_object* v_prec_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Std_Http_URI_instReprPath_repr___redArg(v_x_1340_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object* v_x_1343_, lean_object* v_prec_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Std_Http_URI_instReprPath_repr(v_x_1343_, v_prec_1344_);
lean_dec(v_prec_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object* v_xs_1348_, lean_object* v_ys_1349_, lean_object* v_x_1350_){
_start:
{
lean_object* v_zero_1351_; uint8_t v_isZero_1352_; 
v_zero_1351_ = lean_unsigned_to_nat(0u);
v_isZero_1352_ = lean_nat_dec_eq(v_x_1350_, v_zero_1351_);
if (v_isZero_1352_ == 1)
{
lean_dec(v_x_1350_);
return v_isZero_1352_;
}
else
{
lean_object* v_one_1353_; lean_object* v_n_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v_one_1353_ = lean_unsigned_to_nat(1u);
v_n_1354_ = lean_nat_sub(v_x_1350_, v_one_1353_);
lean_dec(v_x_1350_);
v___x_1355_ = lean_array_fget_borrowed(v_xs_1348_, v_n_1354_);
v___x_1356_ = lean_array_fget_borrowed(v_ys_1349_, v_n_1354_);
v___x_1357_ = lean_sarray_dec_eq(v___x_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_dec(v_n_1354_);
return v___x_1357_;
}
else
{
v_x_1350_ = v_n_1354_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object* v_xs_1359_, lean_object* v_ys_1360_, lean_object* v_x_1361_){
_start:
{
uint8_t v_res_1362_; lean_object* v_r_1363_; 
v_res_1362_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1359_, v_ys_1360_, v_x_1361_);
lean_dec_ref(v_ys_1360_);
lean_dec_ref(v_xs_1359_);
v_r_1363_ = lean_box(v_res_1362_);
return v_r_1363_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object* v_x_1364_, lean_object* v_x_1365_){
_start:
{
lean_object* v_segments_1366_; uint8_t v_absolute_1367_; lean_object* v_segments_1368_; uint8_t v_absolute_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v_segments_1366_ = lean_ctor_get(v_x_1364_, 0);
v_absolute_1367_ = lean_ctor_get_uint8(v_x_1364_, sizeof(void*)*1);
v_segments_1368_ = lean_ctor_get(v_x_1365_, 0);
v_absolute_1369_ = lean_ctor_get_uint8(v_x_1365_, sizeof(void*)*1);
v___x_1370_ = lean_array_get_size(v_segments_1366_);
v___x_1371_ = lean_array_get_size(v_segments_1368_);
v___x_1372_ = lean_nat_dec_eq(v___x_1370_, v___x_1371_);
if (v___x_1372_ == 0)
{
return v___x_1372_;
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_segments_1366_, v_segments_1368_, v___x_1370_);
if (v___x_1373_ == 0)
{
return v___x_1373_;
}
else
{
if (v_absolute_1369_ == 0)
{
if (v_absolute_1367_ == 0)
{
return v___x_1373_;
}
else
{
return v_absolute_1369_;
}
}
else
{
return v_absolute_1367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object* v_x_1374_, lean_object* v_x_1375_){
_start:
{
uint8_t v_res_1376_; lean_object* v_r_1377_; 
v_res_1376_ = l_Std_Http_URI_instBEqPath_beq(v_x_1374_, v_x_1375_);
lean_dec_ref(v_x_1375_);
lean_dec_ref(v_x_1374_);
v_r_1377_ = lean_box(v_res_1376_);
return v_r_1377_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object* v_xs_1378_, lean_object* v_ys_1379_, lean_object* v_hsz_1380_, lean_object* v_x_1381_, lean_object* v_x_1382_){
_start:
{
uint8_t v___x_1383_; 
v___x_1383_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1378_, v_ys_1379_, v_x_1381_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object* v_xs_1384_, lean_object* v_ys_1385_, lean_object* v_hsz_1386_, lean_object* v_x_1387_, lean_object* v_x_1388_){
_start:
{
uint8_t v_res_1389_; lean_object* v_r_1390_; 
v_res_1389_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(v_xs_1384_, v_ys_1385_, v_hsz_1386_, v_x_1387_, v_x_1388_);
lean_dec_ref(v_ys_1385_);
lean_dec_ref(v_xs_1384_);
v_r_1390_ = lean_box(v_res_1389_);
return v_r_1390_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object* v_x_1393_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_string_from_utf8_unchecked(v_x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object* v___f_1415_, lean_object* v_path_1416_){
_start:
{
lean_object* v_segments_1417_; uint8_t v_absolute_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; size_t v_sz_1421_; size_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v_result_1425_; 
v_segments_1417_ = lean_ctor_get(v_path_1416_, 0);
lean_inc_ref(v_segments_1417_);
v_absolute_1418_ = lean_ctor_get_uint8(v_path_1416_, sizeof(void*)*1);
lean_dec_ref(v_path_1416_);
v___x_1419_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_1420_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_1421_ = lean_array_size(v_segments_1417_);
v___x_1422_ = ((size_t)0ULL);
v___x_1423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1420_, v___f_1415_, v_sz_1421_, v___x_1422_, v_segments_1417_);
v___x_1424_ = lean_array_to_list(v___x_1423_);
v_result_1425_ = l_String_intercalate(v___x_1419_, v___x_1424_);
if (v_absolute_1418_ == 0)
{
return v_result_1425_;
}
else
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_string_append(v___x_1419_, v_result_1425_);
lean_dec_ref(v_result_1425_);
return v___x_1426_;
}
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object* v_p_1431_){
_start:
{
lean_object* v_segments_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v_segments_1432_ = lean_ctor_get(v_p_1431_, 0);
v___x_1433_ = lean_array_get_size(v_segments_1432_);
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = lean_nat_dec_eq(v___x_1433_, v___x_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object* v_p_1436_){
_start:
{
uint8_t v_res_1437_; lean_object* v_r_1438_; 
v_res_1437_ = l_Std_Http_URI_Path_isEmpty(v_p_1436_);
lean_dec_ref(v_p_1436_);
v_r_1438_ = lean_box(v_res_1437_);
return v_r_1438_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object* v_p_1439_){
_start:
{
lean_object* v_segments_1440_; uint8_t v_absolute_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v_segments_1440_ = lean_ctor_get(v_p_1439_, 0);
v_absolute_1441_ = lean_ctor_get_uint8(v_p_1439_, sizeof(void*)*1);
v___x_1442_ = lean_array_get_size(v_segments_1440_);
v___x_1443_ = lean_unsigned_to_nat(0u);
v___x_1444_ = lean_nat_dec_eq(v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1452_; 
lean_inc_ref(v_segments_1440_);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_p_1439_);
if (v_isSharedCheck_1452_ == 0)
{
lean_object* v_unused_1453_; 
v_unused_1453_ = lean_ctor_get(v_p_1439_, 0);
lean_dec(v_unused_1453_);
v___x_1446_ = v_p_1439_;
v_isShared_1447_ = v_isSharedCheck_1452_;
goto v_resetjp_1445_;
}
else
{
lean_dec(v_p_1439_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1452_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1448_ = lean_array_pop(v_segments_1440_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___x_1448_);
v___x_1450_ = v___x_1446_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
lean_ctor_set_uint8(v_reuseFailAlloc_1451_, sizeof(void*)*1, v_absolute_1441_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
else
{
return v_p_1439_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object* v_p1_1454_, lean_object* v_p2_1455_){
_start:
{
uint8_t v_absolute_1456_; 
v_absolute_1456_ = lean_ctor_get_uint8(v_p2_1455_, sizeof(void*)*1);
if (v_absolute_1456_ == 0)
{
lean_object* v_segments_1457_; lean_object* v_segments_1458_; uint8_t v_absolute_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1467_; 
v_segments_1457_ = lean_ctor_get(v_p2_1455_, 0);
v_segments_1458_ = lean_ctor_get(v_p1_1454_, 0);
v_absolute_1459_ = lean_ctor_get_uint8(v_p1_1454_, sizeof(void*)*1);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_p1_1454_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1461_ = v_p1_1454_;
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_segments_1458_);
lean_dec(v_p1_1454_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1463_ = l_Array_append___redArg(v_segments_1458_, v_segments_1457_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1463_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1466_, sizeof(void*)*1, v_absolute_1459_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
else
{
lean_dec_ref(v_p1_1454_);
lean_inc_ref(v_p2_1455_);
return v_p2_1455_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object* v_p1_1468_, lean_object* v_p2_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Std_Http_URI_Path_join(v_p1_1468_, v_p2_1469_);
lean_dec_ref(v_p2_1469_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object* v_p_1471_, lean_object* v_segment_1472_){
_start:
{
lean_object* v_segments_1473_; uint8_t v_absolute_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1483_; 
v_segments_1473_ = lean_ctor_get(v_p_1471_, 0);
v_absolute_1474_ = lean_ctor_get_uint8(v_p_1471_, sizeof(void*)*1);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_p_1471_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1476_ = v_p_1471_;
v_isShared_1477_ = v_isSharedCheck_1483_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_segments_1473_);
lean_dec(v_p_1471_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1483_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = l_Std_Http_URI_EncodedSegment_encode(v_segment_1472_);
v___x_1479_ = lean_array_push(v_segments_1473_, v___x_1478_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1479_);
v___x_1481_ = v___x_1476_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
lean_ctor_set_uint8(v_reuseFailAlloc_1482_, sizeof(void*)*1, v_absolute_1474_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append___boxed(lean_object* v_p_1484_, lean_object* v_segment_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Std_Http_URI_Path_append(v_p_1484_, v_segment_1485_);
lean_dec_ref(v_segment_1485_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object* v_p_1487_, lean_object* v_segment_1488_){
_start:
{
lean_object* v_segments_1489_; uint8_t v_absolute_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1498_; 
v_segments_1489_ = lean_ctor_get(v_p_1487_, 0);
v_absolute_1490_ = lean_ctor_get_uint8(v_p_1487_, sizeof(void*)*1);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_p_1487_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1492_ = v_p_1487_;
v_isShared_1493_ = v_isSharedCheck_1498_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_segments_1489_);
lean_dec(v_p_1487_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1498_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1494_ = lean_array_push(v_segments_1489_, v_segment_1488_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1494_);
v___x_1496_ = v___x_1492_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*1, v_absolute_1490_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object* v_input_1501_, lean_object* v_output_1502_){
_start:
{
if (lean_obj_tag(v_input_1501_) == 0)
{
lean_object* v___x_1503_; 
v___x_1503_ = l_List_reverse___redArg(v_output_1502_);
return v___x_1503_;
}
else
{
lean_object* v_head_1504_; lean_object* v_tail_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1522_; 
v_head_1504_ = lean_ctor_get(v_input_1501_, 0);
v_tail_1505_ = lean_ctor_get(v_input_1501_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_input_1501_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1507_ = v_input_1501_;
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_tail_1505_);
lean_inc(v_head_1504_);
lean_dec(v_input_1501_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
lean_inc(v_head_1504_);
v___x_1509_ = lean_string_from_utf8_unchecked(v_head_1504_);
v___x_1510_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0));
v___x_1511_ = lean_string_dec_eq(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; uint8_t v___x_1513_; 
v___x_1512_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__1));
v___x_1513_ = lean_string_dec_eq(v___x_1509_, v___x_1512_);
lean_dec_ref(v___x_1509_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1515_; 
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 1, v_output_1502_);
v___x_1515_ = v___x_1507_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_head_1504_);
lean_ctor_set(v_reuseFailAlloc_1517_, 1, v_output_1502_);
v___x_1515_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
v_input_1501_ = v_tail_1505_;
v_output_1502_ = v___x_1515_;
goto _start;
}
}
else
{
lean_del_object(v___x_1507_);
lean_dec(v_head_1504_);
if (lean_obj_tag(v_output_1502_) == 0)
{
v_input_1501_ = v_tail_1505_;
goto _start;
}
else
{
lean_object* v_tail_1519_; 
v_tail_1519_ = lean_ctor_get(v_output_1502_, 1);
lean_inc(v_tail_1519_);
lean_dec_ref_known(v_output_1502_, 2);
v_input_1501_ = v_tail_1505_;
v_output_1502_ = v_tail_1519_;
goto _start;
}
}
}
else
{
lean_dec_ref(v___x_1509_);
lean_del_object(v___x_1507_);
lean_dec(v_head_1504_);
v_input_1501_ = v_tail_1505_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object* v_p_1523_){
_start:
{
lean_object* v_segments_1524_; uint8_t v_absolute_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1536_; 
v_segments_1524_ = lean_ctor_get(v_p_1523_, 0);
v_absolute_1525_ = lean_ctor_get_uint8(v_p_1523_, sizeof(void*)*1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v_p_1523_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1527_ = v_p_1523_;
v_isShared_1528_ = v_isSharedCheck_1536_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_segments_1524_);
lean_dec(v_p_1523_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1536_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1529_ = lean_array_to_list(v_segments_1524_);
v___x_1530_ = lean_box(0);
v___x_1531_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(v___x_1529_, v___x_1530_);
v___x_1532_ = lean_array_mk(v___x_1531_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1532_);
v___x_1534_ = v___x_1527_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1535_, sizeof(void*)*1, v_absolute_1525_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t v_sz_1537_, size_t v_i_1538_, lean_object* v_bs_1539_){
_start:
{
uint8_t v___x_1540_; 
v___x_1540_ = lean_usize_dec_lt(v_i_1538_, v_sz_1537_);
if (v___x_1540_ == 0)
{
return v_bs_1539_;
}
else
{
lean_object* v_v_1541_; lean_object* v___x_1542_; lean_object* v_bs_x27_1543_; lean_object* v___y_1545_; lean_object* v___x_1550_; 
v_v_1541_ = lean_array_uget(v_bs_1539_, v_i_1538_);
v___x_1542_ = lean_unsigned_to_nat(0u);
v_bs_x27_1543_ = lean_array_uset(v_bs_1539_, v_i_1538_, v___x_1542_);
v___x_1550_ = l_Std_Http_URI_EncodedSegment_decode(v_v_1541_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_string_from_utf8_unchecked(v_v_1541_);
v___y_1545_ = v___x_1551_;
goto v___jp_1544_;
}
else
{
lean_object* v_val_1552_; 
lean_dec(v_v_1541_);
v_val_1552_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_val_1552_);
lean_dec_ref_known(v___x_1550_, 1);
v___y_1545_ = v_val_1552_;
goto v___jp_1544_;
}
v___jp_1544_:
{
size_t v___x_1546_; size_t v___x_1547_; lean_object* v___x_1548_; 
v___x_1546_ = ((size_t)1ULL);
v___x_1547_ = lean_usize_add(v_i_1538_, v___x_1546_);
v___x_1548_ = lean_array_uset(v_bs_x27_1543_, v_i_1538_, v___y_1545_);
v_i_1538_ = v___x_1547_;
v_bs_1539_ = v___x_1548_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object* v_sz_1553_, lean_object* v_i_1554_, lean_object* v_bs_1555_){
_start:
{
size_t v_sz_boxed_1556_; size_t v_i_boxed_1557_; lean_object* v_res_1558_; 
v_sz_boxed_1556_ = lean_unbox_usize(v_sz_1553_);
lean_dec(v_sz_1553_);
v_i_boxed_1557_ = lean_unbox_usize(v_i_1554_);
lean_dec(v_i_1554_);
v_res_1558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_boxed_1556_, v_i_boxed_1557_, v_bs_1555_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object* v_p_1559_){
_start:
{
lean_object* v_segments_1560_; size_t v_sz_1561_; size_t v___x_1562_; lean_object* v___x_1563_; 
v_segments_1560_ = lean_ctor_get(v_p_1559_, 0);
lean_inc_ref(v_segments_1560_);
lean_dec_ref(v_p_1559_);
v_sz_1561_ = lean_array_size(v_segments_1560_);
v___x_1562_ = ((size_t)0ULL);
v___x_1563_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_1561_, v___x_1562_, v_segments_1560_);
return v___x_1563_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0(lean_object* v_x_1568_, lean_object* v_x_1569_){
_start:
{
if (lean_obj_tag(v_x_1568_) == 0)
{
if (lean_obj_tag(v_x_1569_) == 0)
{
uint8_t v___x_1570_; 
v___x_1570_ = 1;
return v___x_1570_;
}
else
{
uint8_t v___x_1571_; 
v___x_1571_ = 0;
return v___x_1571_;
}
}
else
{
if (lean_obj_tag(v_x_1569_) == 0)
{
uint8_t v___x_1572_; 
v___x_1572_ = 0;
return v___x_1572_;
}
else
{
lean_object* v_val_1573_; lean_object* v_val_1574_; uint8_t v___x_1575_; 
v_val_1573_ = lean_ctor_get(v_x_1568_, 0);
v_val_1574_ = lean_ctor_get(v_x_1569_, 0);
v___x_1575_ = lean_sarray_dec_eq(v_val_1573_, v_val_1574_);
return v___x_1575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0___boxed(lean_object* v_x_1576_, lean_object* v_x_1577_){
_start:
{
uint8_t v_res_1578_; lean_object* v_r_1579_; 
v_res_1578_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0(v_x_1576_, v_x_1577_);
lean_dec(v_x_1577_);
lean_dec(v_x_1576_);
v_r_1579_ = lean_box(v_res_1578_);
return v_r_1579_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg(lean_object* v_xs_1580_, lean_object* v_ys_1581_, lean_object* v_x_1582_){
_start:
{
lean_object* v_zero_1583_; uint8_t v_isZero_1584_; 
v_zero_1583_ = lean_unsigned_to_nat(0u);
v_isZero_1584_ = lean_nat_dec_eq(v_x_1582_, v_zero_1583_);
if (v_isZero_1584_ == 1)
{
lean_dec(v_x_1582_);
return v_isZero_1584_;
}
else
{
lean_object* v_one_1585_; lean_object* v_n_1586_; lean_object* v___x_1587_; lean_object* v_fst_1588_; lean_object* v_snd_1589_; lean_object* v___x_1590_; lean_object* v_fst_1591_; lean_object* v_snd_1592_; uint8_t v___x_1593_; 
v_one_1585_ = lean_unsigned_to_nat(1u);
v_n_1586_ = lean_nat_sub(v_x_1582_, v_one_1585_);
lean_dec(v_x_1582_);
v___x_1587_ = lean_array_fget_borrowed(v_xs_1580_, v_n_1586_);
v_fst_1588_ = lean_ctor_get(v___x_1587_, 0);
v_snd_1589_ = lean_ctor_get(v___x_1587_, 1);
v___x_1590_ = lean_array_fget_borrowed(v_ys_1581_, v_n_1586_);
v_fst_1591_ = lean_ctor_get(v___x_1590_, 0);
v_snd_1592_ = lean_ctor_get(v___x_1590_, 1);
v___x_1593_ = lean_sarray_dec_eq(v_fst_1588_, v_fst_1591_);
if (v___x_1593_ == 0)
{
lean_dec(v_n_1586_);
return v___x_1593_;
}
else
{
uint8_t v___x_1594_; 
v___x_1594_ = l_Option_instBEq_beq___at___00Std_Http_URI_instBEqQuery_beq_spec__0(v_snd_1589_, v_snd_1592_);
if (v___x_1594_ == 0)
{
lean_dec(v_n_1586_);
return v___x_1594_;
}
else
{
v_x_1582_ = v_n_1586_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg___boxed(lean_object* v_xs_1596_, lean_object* v_ys_1597_, lean_object* v_x_1598_){
_start:
{
uint8_t v_res_1599_; lean_object* v_r_1600_; 
v_res_1599_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg(v_xs_1596_, v_ys_1597_, v_x_1598_);
lean_dec_ref(v_ys_1597_);
lean_dec_ref(v_xs_1596_);
v_r_1600_ = lean_box(v_res_1599_);
return v_r_1600_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery_beq(lean_object* v_x_1601_, lean_object* v_x_1602_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1603_ = lean_array_get_size(v_x_1601_);
v___x_1604_ = lean_array_get_size(v_x_1602_);
v___x_1605_ = lean_nat_dec_eq(v___x_1603_, v___x_1604_);
if (v___x_1605_ == 0)
{
return v___x_1605_;
}
else
{
uint8_t v___x_1606_; 
v___x_1606_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg(v_x_1601_, v_x_1602_, v___x_1603_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery_beq___boxed(lean_object* v_x_1607_, lean_object* v_x_1608_){
_start:
{
uint8_t v_res_1609_; lean_object* v_r_1610_; 
v_res_1609_ = l_Std_Http_URI_instBEqQuery_beq(v_x_1607_, v_x_1608_);
lean_dec_ref(v_x_1608_);
lean_dec_ref(v_x_1607_);
v_r_1610_ = lean_box(v_res_1609_);
return v_r_1610_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1(lean_object* v_xs_1611_, lean_object* v_ys_1612_, lean_object* v_hsz_1613_, lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
uint8_t v___x_1616_; 
v___x_1616_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___redArg(v_xs_1611_, v_ys_1612_, v_x_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1___boxed(lean_object* v_xs_1617_, lean_object* v_ys_1618_, lean_object* v_hsz_1619_, lean_object* v_x_1620_, lean_object* v_x_1621_){
_start:
{
uint8_t v_res_1622_; lean_object* v_r_1623_; 
v_res_1622_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_beq_spec__1(v_xs_1617_, v_ys_1618_, v_hsz_1619_, v_x_1620_, v_x_1621_);
lean_dec_ref(v_ys_1618_);
lean_dec_ref(v_xs_1617_);
v_r_1623_ = lean_box(v_res_1622_);
return v_r_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object* v_x_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___lam__0___closed__3));
v___x_1637_ = l_Array_repr___redArg(v___x_1636_, v_x_1634_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object* v_x_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Std_Http_URI_instReprQuery___lam__0(v_x_1638_, v___y_1639_);
lean_dec(v___y_1639_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object* v_as_1644_){
_start:
{
lean_object* v___f_1645_; lean_object* v___x_1646_; 
v___f_1645_ = ((lean_object*)(l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1___closed__0));
v___x_1646_ = l_List_eraseDupsBy___redArg(v___f_1645_, v_as_1644_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t v_sz_1647_, size_t v_i_1648_, lean_object* v_bs_1649_){
_start:
{
uint8_t v___x_1650_; 
v___x_1650_ = lean_usize_dec_lt(v_i_1648_, v_sz_1647_);
if (v___x_1650_ == 0)
{
return v_bs_1649_;
}
else
{
lean_object* v_v_1651_; lean_object* v_fst_1652_; lean_object* v___x_1653_; lean_object* v_bs_x27_1654_; size_t v___x_1655_; size_t v___x_1656_; lean_object* v___x_1657_; 
v_v_1651_ = lean_array_uget_borrowed(v_bs_1649_, v_i_1648_);
v_fst_1652_ = lean_ctor_get(v_v_1651_, 0);
lean_inc(v_fst_1652_);
v___x_1653_ = lean_unsigned_to_nat(0u);
v_bs_x27_1654_ = lean_array_uset(v_bs_1649_, v_i_1648_, v___x_1653_);
v___x_1655_ = ((size_t)1ULL);
v___x_1656_ = lean_usize_add(v_i_1648_, v___x_1655_);
v___x_1657_ = lean_array_uset(v_bs_x27_1654_, v_i_1648_, v_fst_1652_);
v_i_1648_ = v___x_1656_;
v_bs_1649_ = v___x_1657_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object* v_sz_1659_, lean_object* v_i_1660_, lean_object* v_bs_1661_){
_start:
{
size_t v_sz_boxed_1662_; size_t v_i_boxed_1663_; lean_object* v_res_1664_; 
v_sz_boxed_1662_ = lean_unbox_usize(v_sz_1659_);
lean_dec(v_sz_1659_);
v_i_boxed_1663_ = lean_unbox_usize(v_i_1660_);
lean_dec(v_i_1660_);
v_res_1664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_boxed_1662_, v_i_boxed_1663_, v_bs_1661_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object* v_query_1665_){
_start:
{
size_t v_sz_1666_; size_t v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v_sz_1666_ = lean_array_size(v_query_1665_);
v___x_1667_ = ((size_t)0ULL);
v___x_1668_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_1666_, v___x_1667_, v_query_1665_);
v___x_1669_ = lean_array_to_list(v___x_1668_);
v___x_1670_ = l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(v___x_1669_);
v___x_1671_ = lean_array_mk(v___x_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t v_sz_1672_, size_t v_i_1673_, lean_object* v_bs_1674_){
_start:
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_usize_dec_lt(v_i_1673_, v_sz_1672_);
if (v___x_1675_ == 0)
{
return v_bs_1674_;
}
else
{
lean_object* v_v_1676_; lean_object* v_snd_1677_; lean_object* v___x_1678_; lean_object* v_bs_x27_1679_; size_t v___x_1680_; size_t v___x_1681_; lean_object* v___x_1682_; 
v_v_1676_ = lean_array_uget_borrowed(v_bs_1674_, v_i_1673_);
v_snd_1677_ = lean_ctor_get(v_v_1676_, 1);
lean_inc(v_snd_1677_);
v___x_1678_ = lean_unsigned_to_nat(0u);
v_bs_x27_1679_ = lean_array_uset(v_bs_1674_, v_i_1673_, v___x_1678_);
v___x_1680_ = ((size_t)1ULL);
v___x_1681_ = lean_usize_add(v_i_1673_, v___x_1680_);
v___x_1682_ = lean_array_uset(v_bs_x27_1679_, v_i_1673_, v_snd_1677_);
v_i_1673_ = v___x_1681_;
v_bs_1674_ = v___x_1682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object* v_sz_1684_, lean_object* v_i_1685_, lean_object* v_bs_1686_){
_start:
{
size_t v_sz_boxed_1687_; size_t v_i_boxed_1688_; lean_object* v_res_1689_; 
v_sz_boxed_1687_ = lean_unbox_usize(v_sz_1684_);
lean_dec(v_sz_1684_);
v_i_boxed_1688_ = lean_unbox_usize(v_i_1685_);
lean_dec(v_i_1685_);
v_res_1689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_boxed_1687_, v_i_boxed_1688_, v_bs_1686_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object* v_query_1690_){
_start:
{
size_t v_sz_1691_; size_t v___x_1692_; lean_object* v___x_1693_; 
v_sz_1691_ = lean_array_size(v_query_1690_);
v___x_1692_ = ((size_t)0ULL);
v___x_1693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_1691_, v___x_1692_, v_query_1690_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object* v_key_1695_, lean_object* v_value_1696_){
_start:
{
if (lean_obj_tag(v_value_1696_) == 0)
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_string_from_utf8_unchecked(v_key_1695_);
return v___x_1697_;
}
else
{
lean_object* v_val_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_val_1698_ = lean_ctor_get(v_value_1696_, 0);
lean_inc(v_val_1698_);
lean_dec_ref_known(v_value_1696_, 1);
v___x_1699_ = lean_string_from_utf8_unchecked(v_key_1695_);
v___x_1700_ = ((lean_object*)(l_Std_Http_URI_Query_formatQueryParam___closed__0));
v___x_1701_ = lean_string_append(v___x_1699_, v___x_1700_);
v___x_1702_ = lean_string_from_utf8_unchecked(v_val_1698_);
v___x_1703_ = lean_string_append(v___x_1701_, v___x_1702_);
lean_dec_ref(v___x_1702_);
return v___x_1703_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object* v_key_1707_, lean_object* v_as_1708_, size_t v_sz_1709_, size_t v_i_1710_, lean_object* v_b_1711_){
_start:
{
uint8_t v___x_1712_; 
v___x_1712_ = lean_usize_dec_lt(v_i_1710_, v_sz_1709_);
if (v___x_1712_ == 0)
{
lean_inc_ref(v_b_1711_);
return v_b_1711_;
}
else
{
lean_object* v_a_1713_; lean_object* v_fst_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
v_a_1713_ = lean_array_uget_borrowed(v_as_1708_, v_i_1710_);
v_fst_1714_ = lean_ctor_get(v_a_1713_, 0);
v___x_1715_ = lean_box(0);
v___x_1716_ = lean_sarray_dec_eq(v_fst_1714_, v_key_1707_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; size_t v___x_1718_; size_t v___x_1719_; 
v___x_1717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v___x_1718_ = ((size_t)1ULL);
v___x_1719_ = lean_usize_add(v_i_1710_, v___x_1718_);
v_i_1710_ = v___x_1719_;
v_b_1711_ = v___x_1717_;
goto _start;
}
else
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_inc(v_a_1713_);
v___x_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_a_1713_);
v___x_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
lean_ctor_set(v___x_1723_, 1, v___x_1715_);
return v___x_1723_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object* v_key_1724_, lean_object* v_as_1725_, lean_object* v_sz_1726_, lean_object* v_i_1727_, lean_object* v_b_1728_){
_start:
{
size_t v_sz_boxed_1729_; size_t v_i_boxed_1730_; lean_object* v_res_1731_; 
v_sz_boxed_1729_ = lean_unbox_usize(v_sz_1726_);
lean_dec(v_sz_1726_);
v_i_boxed_1730_ = lean_unbox_usize(v_i_1727_);
lean_dec(v_i_1727_);
v_res_1731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1724_, v_as_1725_, v_sz_boxed_1729_, v_i_boxed_1730_, v_b_1728_);
lean_dec_ref(v_b_1728_);
lean_dec_ref(v_as_1725_);
lean_dec_ref(v_key_1724_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object* v_query_1732_, lean_object* v_key_1733_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; size_t v_sz_1736_; size_t v___x_1737_; lean_object* v___x_1738_; lean_object* v_fst_1739_; 
v___x_1734_ = lean_box(0);
v___x_1735_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v_sz_1736_ = lean_array_size(v_query_1732_);
v___x_1737_ = ((size_t)0ULL);
v___x_1738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_1733_, v_query_1732_, v_sz_1736_, v___x_1737_, v___x_1735_);
v_fst_1739_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_fst_1739_);
lean_dec_ref(v___x_1738_);
if (lean_obj_tag(v_fst_1739_) == 0)
{
return v___x_1734_;
}
else
{
lean_object* v_val_1740_; 
v_val_1740_ = lean_ctor_get(v_fst_1739_, 0);
lean_inc(v_val_1740_);
lean_dec_ref_known(v_fst_1739_, 1);
if (lean_obj_tag(v_val_1740_) == 0)
{
return v___x_1734_;
}
else
{
lean_object* v_val_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1749_; 
v_val_1741_ = lean_ctor_get(v_val_1740_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_val_1740_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1743_ = v_val_1740_;
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_val_1741_);
lean_dec(v_val_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v_snd_1745_; lean_object* v___x_1747_; 
v_snd_1745_ = lean_ctor_get(v_val_1741_, 1);
lean_inc(v_snd_1745_);
lean_dec(v_val_1741_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v_snd_1745_);
v___x_1747_ = v___x_1743_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_snd_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object* v_query_1750_, lean_object* v_key_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1750_, v_key_1751_);
lean_dec_ref(v_key_1751_);
lean_dec_ref(v_query_1750_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object* v_query_1753_, lean_object* v_key_1754_){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1754_);
v___x_1756_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_1753_, v___x_1755_);
lean_dec_ref(v___x_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object* v_query_1757_, lean_object* v_key_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Std_Http_URI_Query_find_x3f(v_query_1757_, v_key_1758_);
lean_dec_ref(v_key_1758_);
lean_dec_ref(v_query_1757_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object* v_key_1760_, lean_object* v_as_1761_, size_t v_i_1762_, size_t v_stop_1763_, lean_object* v_b_1764_){
_start:
{
lean_object* v___y_1766_; uint8_t v___x_1770_; 
v___x_1770_ = lean_usize_dec_eq(v_i_1762_, v_stop_1763_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v_fst_1772_; lean_object* v_snd_1773_; uint8_t v___x_1774_; 
v___x_1771_ = lean_array_uget_borrowed(v_as_1761_, v_i_1762_);
v_fst_1772_ = lean_ctor_get(v___x_1771_, 0);
v_snd_1773_ = lean_ctor_get(v___x_1771_, 1);
v___x_1774_ = lean_sarray_dec_eq(v_fst_1772_, v_key_1760_);
if (v___x_1774_ == 0)
{
v___y_1766_ = v_b_1764_;
goto v___jp_1765_;
}
else
{
lean_object* v___x_1775_; 
lean_inc(v_snd_1773_);
v___x_1775_ = lean_array_push(v_b_1764_, v_snd_1773_);
v___y_1766_ = v___x_1775_;
goto v___jp_1765_;
}
}
else
{
return v_b_1764_;
}
v___jp_1765_:
{
size_t v___x_1767_; size_t v___x_1768_; 
v___x_1767_ = ((size_t)1ULL);
v___x_1768_ = lean_usize_add(v_i_1762_, v___x_1767_);
v_i_1762_ = v___x_1768_;
v_b_1764_ = v___y_1766_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object* v_key_1776_, lean_object* v_as_1777_, lean_object* v_i_1778_, lean_object* v_stop_1779_, lean_object* v_b_1780_){
_start:
{
size_t v_i_boxed_1781_; size_t v_stop_boxed_1782_; lean_object* v_res_1783_; 
v_i_boxed_1781_ = lean_unbox_usize(v_i_1778_);
lean_dec(v_i_1778_);
v_stop_boxed_1782_ = lean_unbox_usize(v_stop_1779_);
lean_dec(v_stop_1779_);
v_res_1783_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1776_, v_as_1777_, v_i_boxed_1781_, v_stop_boxed_1782_, v_b_1780_);
lean_dec_ref(v_as_1777_);
lean_dec_ref(v_key_1776_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object* v_key_1786_, lean_object* v_as_1787_, lean_object* v_start_1788_, lean_object* v_stop_1789_){
_start:
{
lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0));
v___x_1791_ = lean_nat_dec_lt(v_start_1788_, v_stop_1789_);
if (v___x_1791_ == 0)
{
return v___x_1790_;
}
else
{
lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = lean_array_get_size(v_as_1787_);
v___x_1793_ = lean_nat_dec_le(v_stop_1789_, v___x_1792_);
if (v___x_1793_ == 0)
{
uint8_t v___x_1794_; 
v___x_1794_ = lean_nat_dec_lt(v_start_1788_, v___x_1792_);
if (v___x_1794_ == 0)
{
return v___x_1790_;
}
else
{
size_t v___x_1795_; size_t v___x_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_usize_of_nat(v_start_1788_);
v___x_1796_ = lean_usize_of_nat(v___x_1792_);
v___x_1797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1786_, v_as_1787_, v___x_1795_, v___x_1796_, v___x_1790_);
return v___x_1797_;
}
}
else
{
size_t v___x_1798_; size_t v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = lean_usize_of_nat(v_start_1788_);
v___x_1799_ = lean_usize_of_nat(v_stop_1789_);
v___x_1800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_1786_, v_as_1787_, v___x_1798_, v___x_1799_, v___x_1790_);
return v___x_1800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object* v_key_1801_, lean_object* v_as_1802_, lean_object* v_start_1803_, lean_object* v_stop_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_1801_, v_as_1802_, v_start_1803_, v_stop_1804_);
lean_dec(v_stop_1804_);
lean_dec(v_start_1803_);
lean_dec_ref(v_as_1802_);
lean_dec_ref(v_key_1801_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object* v_query_1806_, lean_object* v_key_1807_){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1809_ = lean_array_get_size(v_query_1806_);
v___x_1810_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_1807_, v_query_1806_, v___x_1808_, v___x_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object* v_query_1811_, lean_object* v_key_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Std_Http_URI_Query_findAllEncoded(v_query_1811_, v_key_1812_);
lean_dec_ref(v_key_1812_);
lean_dec_ref(v_query_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object* v_query_1814_, lean_object* v_key_1815_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1815_);
v___x_1817_ = l_Std_Http_URI_Query_findAllEncoded(v_query_1814_, v___x_1816_);
lean_dec_ref(v___x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object* v_query_1818_, lean_object* v_key_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Std_Http_URI_Query_findAll(v_query_1818_, v_key_1819_);
lean_dec_ref(v_key_1819_);
lean_dec_ref(v_query_1818_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object* v_query_1821_, lean_object* v_key_1822_, lean_object* v_value_1823_){
_start:
{
lean_object* v_encodedKey_1824_; lean_object* v_encodedValue_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_encodedKey_1824_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1822_);
v_encodedValue_1825_ = l_Std_Http_URI_EncodedQueryParam_encode(v_value_1823_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_encodedValue_1825_);
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v_encodedKey_1824_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
v___x_1828_ = lean_array_push(v_query_1821_, v___x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert___boxed(lean_object* v_query_1829_, lean_object* v_key_1830_, lean_object* v_value_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Std_Http_URI_Query_insert(v_query_1829_, v_key_1830_, v_value_1831_);
lean_dec_ref(v_value_1831_);
lean_dec_ref(v_key_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object* v_query_1833_, lean_object* v_key_1834_, lean_object* v_value_1835_){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v_key_1834_);
lean_ctor_set(v___x_1836_, 1, v_value_1835_);
v___x_1837_ = lean_array_push(v_query_1833_, v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object* v_pairs_1841_){
_start:
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_array_mk(v_pairs_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_isEmpty(lean_object* v_query_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; uint8_t v___x_1846_; 
v___x_1844_ = lean_array_get_size(v_query_1843_);
v___x_1845_ = lean_unsigned_to_nat(0u);
v___x_1846_ = lean_nat_dec_eq(v___x_1844_, v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_isEmpty___boxed(lean_object* v_query_1847_){
_start:
{
uint8_t v_res_1848_; lean_object* v_r_1849_; 
v_res_1848_ = l_Std_Http_URI_Query_isEmpty(v_query_1847_);
lean_dec_ref(v_query_1847_);
v_r_1849_ = lean_box(v_res_1848_);
return v_r_1849_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_size(lean_object* v_query_1850_){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = lean_array_get_size(v_query_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_size___boxed(lean_object* v_query_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Std_Http_URI_Query_size(v_query_1852_);
lean_dec_ref(v_query_1852_);
return v_res_1853_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object* v_key_1854_, lean_object* v_as_1855_, size_t v_i_1856_, size_t v_stop_1857_){
_start:
{
uint8_t v___x_1858_; 
v___x_1858_ = lean_usize_dec_eq(v_i_1856_, v_stop_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; lean_object* v_fst_1860_; uint8_t v___x_1861_; 
v___x_1859_ = lean_array_uget_borrowed(v_as_1855_, v_i_1856_);
v_fst_1860_ = lean_ctor_get(v___x_1859_, 0);
v___x_1861_ = lean_sarray_dec_eq(v_fst_1860_, v_key_1854_);
if (v___x_1861_ == 0)
{
size_t v___x_1862_; size_t v___x_1863_; 
v___x_1862_ = ((size_t)1ULL);
v___x_1863_ = lean_usize_add(v_i_1856_, v___x_1862_);
v_i_1856_ = v___x_1863_;
goto _start;
}
else
{
return v___x_1861_;
}
}
else
{
uint8_t v___x_1865_; 
v___x_1865_ = 0;
return v___x_1865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object* v_key_1866_, lean_object* v_as_1867_, lean_object* v_i_1868_, lean_object* v_stop_1869_){
_start:
{
size_t v_i_boxed_1870_; size_t v_stop_boxed_1871_; uint8_t v_res_1872_; lean_object* v_r_1873_; 
v_i_boxed_1870_ = lean_unbox_usize(v_i_1868_);
lean_dec(v_i_1868_);
v_stop_boxed_1871_ = lean_unbox_usize(v_stop_1869_);
lean_dec(v_stop_1869_);
v_res_1872_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_1866_, v_as_1867_, v_i_boxed_1870_, v_stop_boxed_1871_);
lean_dec_ref(v_as_1867_);
lean_dec_ref(v_key_1866_);
v_r_1873_ = lean_box(v_res_1872_);
return v_r_1873_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object* v_query_1874_, lean_object* v_key_1875_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v___x_1876_ = lean_unsigned_to_nat(0u);
v___x_1877_ = lean_array_get_size(v_query_1874_);
v___x_1878_ = lean_nat_dec_lt(v___x_1876_, v___x_1877_);
if (v___x_1878_ == 0)
{
return v___x_1878_;
}
else
{
if (v___x_1878_ == 0)
{
return v___x_1878_;
}
else
{
size_t v___x_1879_; size_t v___x_1880_; uint8_t v___x_1881_; 
v___x_1879_ = ((size_t)0ULL);
v___x_1880_ = lean_usize_of_nat(v___x_1877_);
v___x_1881_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_1875_, v_query_1874_, v___x_1879_, v___x_1880_);
return v___x_1881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object* v_query_1882_, lean_object* v_key_1883_){
_start:
{
uint8_t v_res_1884_; lean_object* v_r_1885_; 
v_res_1884_ = l_Std_Http_URI_Query_containsEncoded(v_query_1882_, v_key_1883_);
lean_dec_ref(v_key_1883_);
lean_dec_ref(v_query_1882_);
v_r_1885_ = lean_box(v_res_1884_);
return v_r_1885_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object* v_query_1886_, lean_object* v_key_1887_){
_start:
{
lean_object* v___x_1888_; uint8_t v___x_1889_; 
v___x_1888_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1887_);
v___x_1889_ = l_Std_Http_URI_Query_containsEncoded(v_query_1886_, v___x_1888_);
lean_dec_ref(v___x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object* v_query_1890_, lean_object* v_key_1891_){
_start:
{
uint8_t v_res_1892_; lean_object* v_r_1893_; 
v_res_1892_ = l_Std_Http_URI_Query_contains(v_query_1890_, v_key_1891_);
lean_dec_ref(v_key_1891_);
lean_dec_ref(v_query_1890_);
v_r_1893_ = lean_box(v_res_1892_);
return v_r_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object* v_key_1894_, lean_object* v_as_1895_, size_t v_i_1896_, size_t v_stop_1897_, lean_object* v_b_1898_){
_start:
{
lean_object* v___y_1900_; uint8_t v___x_1904_; 
v___x_1904_ = lean_usize_dec_eq(v_i_1896_, v_stop_1897_);
if (v___x_1904_ == 0)
{
lean_object* v___x_1905_; lean_object* v_fst_1908_; uint8_t v___x_1909_; 
v___x_1905_ = lean_array_uget_borrowed(v_as_1895_, v_i_1896_);
v_fst_1908_ = lean_ctor_get(v___x_1905_, 0);
v___x_1909_ = lean_sarray_dec_eq(v_fst_1908_, v_key_1894_);
if (v___x_1909_ == 0)
{
goto v___jp_1906_;
}
else
{
if (v___x_1904_ == 0)
{
v___y_1900_ = v_b_1898_;
goto v___jp_1899_;
}
else
{
goto v___jp_1906_;
}
}
v___jp_1906_:
{
lean_object* v___x_1907_; 
lean_inc(v___x_1905_);
v___x_1907_ = lean_array_push(v_b_1898_, v___x_1905_);
v___y_1900_ = v___x_1907_;
goto v___jp_1899_;
}
}
else
{
return v_b_1898_;
}
v___jp_1899_:
{
size_t v___x_1901_; size_t v___x_1902_; 
v___x_1901_ = ((size_t)1ULL);
v___x_1902_ = lean_usize_add(v_i_1896_, v___x_1901_);
v_i_1896_ = v___x_1902_;
v_b_1898_ = v___y_1900_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object* v_key_1910_, lean_object* v_as_1911_, lean_object* v_i_1912_, lean_object* v_stop_1913_, lean_object* v_b_1914_){
_start:
{
size_t v_i_boxed_1915_; size_t v_stop_boxed_1916_; lean_object* v_res_1917_; 
v_i_boxed_1915_ = lean_unbox_usize(v_i_1912_);
lean_dec(v_i_1912_);
v_stop_boxed_1916_ = lean_unbox_usize(v_stop_1913_);
lean_dec(v_stop_1913_);
v_res_1917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_1910_, v_as_1911_, v_i_boxed_1915_, v_stop_boxed_1916_, v_b_1914_);
lean_dec_ref(v_as_1911_);
lean_dec_ref(v_key_1910_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object* v_query_1918_, lean_object* v_key_1919_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; uint8_t v___x_1923_; 
v___x_1920_ = lean_unsigned_to_nat(0u);
v___x_1921_ = lean_array_get_size(v_query_1918_);
v___x_1922_ = ((lean_object*)(l_Std_Http_URI_Query_empty___closed__0));
v___x_1923_ = lean_nat_dec_lt(v___x_1920_, v___x_1921_);
if (v___x_1923_ == 0)
{
return v___x_1922_;
}
else
{
uint8_t v___x_1924_; 
v___x_1924_ = lean_nat_dec_le(v___x_1921_, v___x_1921_);
if (v___x_1924_ == 0)
{
if (v___x_1923_ == 0)
{
return v___x_1922_;
}
else
{
size_t v___x_1925_; size_t v___x_1926_; lean_object* v___x_1927_; 
v___x_1925_ = ((size_t)0ULL);
v___x_1926_ = lean_usize_of_nat(v___x_1921_);
v___x_1927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_1919_, v_query_1918_, v___x_1925_, v___x_1926_, v___x_1922_);
return v___x_1927_;
}
}
else
{
size_t v___x_1928_; size_t v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = ((size_t)0ULL);
v___x_1929_ = lean_usize_of_nat(v___x_1921_);
v___x_1930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_1919_, v_query_1918_, v___x_1928_, v___x_1929_, v___x_1922_);
return v___x_1930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object* v_query_1931_, lean_object* v_key_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Std_Http_URI_Query_eraseEncoded(v_query_1931_, v_key_1932_);
lean_dec_ref(v_key_1932_);
lean_dec_ref(v_query_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object* v_query_1934_, lean_object* v_key_1935_){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_1935_);
v___x_1937_ = l_Std_Http_URI_Query_eraseEncoded(v_query_1934_, v___x_1936_);
lean_dec_ref(v___x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object* v_query_1938_, lean_object* v_key_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Std_Http_URI_Query_erase(v_query_1938_, v_key_1939_);
lean_dec_ref(v_key_1939_);
lean_dec_ref(v_query_1938_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object* v_query_1943_, lean_object* v_key_1944_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Std_Http_URI_Query_find_x3f(v_query_1943_, v_key_1944_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_box(0);
return v___x_1946_;
}
else
{
lean_object* v_val_1947_; 
v_val_1947_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_val_1947_);
lean_dec_ref_known(v___x_1945_, 1);
if (lean_obj_tag(v_val_1947_) == 0)
{
lean_object* v___x_1948_; 
v___x_1948_ = ((lean_object*)(l_Std_Http_URI_Query_get___closed__0));
return v___x_1948_;
}
else
{
lean_object* v_val_1949_; lean_object* v___x_1950_; 
v_val_1949_ = lean_ctor_get(v_val_1947_, 0);
lean_inc(v_val_1949_);
lean_dec_ref_known(v_val_1947_, 1);
v___x_1950_ = l_Std_Http_URI_EncodedQueryParam_decode(v_val_1949_);
lean_dec(v_val_1949_);
return v___x_1950_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object* v_query_1951_, lean_object* v_key_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Std_Http_URI_Query_get(v_query_1951_, v_key_1952_);
lean_dec_ref(v_key_1952_);
lean_dec_ref(v_query_1951_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object* v_query_1954_, lean_object* v_key_1955_, lean_object* v_default_1956_){
_start:
{
lean_object* v___x_1957_; 
v___x_1957_ = l_Std_Http_URI_Query_get(v_query_1954_, v_key_1955_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_inc_ref(v_default_1956_);
return v_default_1956_;
}
else
{
lean_object* v_val_1958_; 
v_val_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_val_1958_);
lean_dec_ref_known(v___x_1957_, 1);
return v_val_1958_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object* v_query_1959_, lean_object* v_key_1960_, lean_object* v_default_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Std_Http_URI_Query_getD(v_query_1959_, v_key_1960_, v_default_1961_);
lean_dec_ref(v_default_1961_);
lean_dec_ref(v_key_1960_);
lean_dec_ref(v_query_1959_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object* v_query_1963_, lean_object* v_key_1964_, lean_object* v_value_1965_){
_start:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1966_ = l_Std_Http_URI_Query_erase(v_query_1963_, v_key_1964_);
v___x_1967_ = l_Std_Http_URI_Query_insert(v___x_1966_, v_key_1964_, v_value_1965_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object* v_query_1968_, lean_object* v_key_1969_, lean_object* v_value_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Std_Http_URI_Query_set(v_query_1968_, v_key_1969_, v_value_1970_);
lean_dec_ref(v_value_1970_);
lean_dec_ref(v_key_1969_);
lean_dec_ref(v_query_1968_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t v_sz_1972_, size_t v_i_1973_, lean_object* v_bs_1974_){
_start:
{
uint8_t v___x_1975_; 
v___x_1975_ = lean_usize_dec_lt(v_i_1973_, v_sz_1972_);
if (v___x_1975_ == 0)
{
return v_bs_1974_;
}
else
{
lean_object* v_v_1976_; lean_object* v_fst_1977_; lean_object* v_snd_1978_; lean_object* v___x_1979_; lean_object* v_bs_x27_1980_; lean_object* v___x_1981_; size_t v___x_1982_; size_t v___x_1983_; lean_object* v___x_1984_; 
v_v_1976_ = lean_array_uget_borrowed(v_bs_1974_, v_i_1973_);
v_fst_1977_ = lean_ctor_get(v_v_1976_, 0);
lean_inc(v_fst_1977_);
v_snd_1978_ = lean_ctor_get(v_v_1976_, 1);
lean_inc(v_snd_1978_);
v___x_1979_ = lean_unsigned_to_nat(0u);
v_bs_x27_1980_ = lean_array_uset(v_bs_1974_, v_i_1973_, v___x_1979_);
v___x_1981_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_1977_, v_snd_1978_);
v___x_1982_ = ((size_t)1ULL);
v___x_1983_ = lean_usize_add(v_i_1973_, v___x_1982_);
v___x_1984_ = lean_array_uset(v_bs_x27_1980_, v_i_1973_, v___x_1981_);
v_i_1973_ = v___x_1983_;
v_bs_1974_ = v___x_1984_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object* v_sz_1986_, lean_object* v_i_1987_, lean_object* v_bs_1988_){
_start:
{
size_t v_sz_boxed_1989_; size_t v_i_boxed_1990_; lean_object* v_res_1991_; 
v_sz_boxed_1989_ = lean_unbox_usize(v_sz_1986_);
lean_dec(v_sz_1986_);
v_i_boxed_1990_ = lean_unbox_usize(v_i_1987_);
lean_dec(v_i_1987_);
v_res_1991_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_boxed_1989_, v_i_boxed_1990_, v_bs_1988_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object* v_query_1993_){
_start:
{
size_t v_sz_1994_; size_t v___x_1995_; lean_object* v_params_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v_sz_1994_ = lean_array_size(v_query_1993_);
v___x_1995_ = ((size_t)0ULL);
v_params_1996_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_1994_, v___x_1995_, v_query_1993_);
v___x_1997_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_1998_ = lean_array_to_list(v_params_1996_);
v___x_1999_ = l_String_intercalate(v___x_1997_, v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object* v_x_2001_){
_start:
{
lean_object* v_fst_2002_; lean_object* v_snd_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_fst_2002_ = lean_ctor_get(v_x_2001_, 0);
v_snd_2003_ = lean_ctor_get(v_x_2001_, 1);
v___x_2004_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
v___x_2005_ = l_Std_Http_URI_Query_insert(v___x_2004_, v_fst_2002_, v_snd_2003_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0___boxed(lean_object* v_x_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l_Std_Http_URI_Query_instSingletonProdString___lam__0(v_x_2006_);
lean_dec_ref(v_x_2006_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object* v_x_2010_, lean_object* v_q_2011_){
_start:
{
lean_object* v_fst_2012_; lean_object* v_snd_2013_; lean_object* v___x_2014_; 
v_fst_2012_ = lean_ctor_get(v_x_2010_, 0);
v_snd_2013_ = lean_ctor_get(v_x_2010_, 1);
v___x_2014_ = l_Std_Http_URI_Query_insert(v_q_2011_, v_fst_2012_, v_snd_2013_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0___boxed(lean_object* v_x_2015_, lean_object* v_q_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Std_Http_URI_Query_instInsertProdString___lam__0(v_x_2015_, v_q_2016_);
lean_dec_ref(v_x_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object* v_x_2020_){
_start:
{
lean_object* v_fst_2021_; lean_object* v_snd_2022_; lean_object* v___x_2023_; 
v_fst_2021_ = lean_ctor_get(v_x_2020_, 0);
lean_inc(v_fst_2021_);
v_snd_2022_ = lean_ctor_get(v_x_2020_, 1);
lean_inc(v_snd_2022_);
lean_dec_ref(v_x_2020_);
v___x_2023_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2021_, v_snd_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object* v___f_2025_, lean_object* v_q_2026_){
_start:
{
uint8_t v___x_2027_; 
v___x_2027_ = l_Std_Http_URI_Query_isEmpty(v_q_2026_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_encodedParams_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2028_ = lean_array_to_list(v_q_2026_);
v___x_2029_ = lean_box(0);
v_encodedParams_2030_ = l_List_mapTR_loop___redArg(v___f_2025_, v___x_2028_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2032_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2033_ = l_String_intercalate(v___x_2032_, v_encodedParams_2030_);
v___x_2034_ = lean_string_append(v___x_2031_, v___x_2033_);
lean_dec_ref(v___x_2033_);
return v___x_2034_;
}
else
{
lean_object* v___x_2035_; 
lean_dec_ref(v_q_2026_);
lean_dec_ref(v___f_2025_);
v___x_2035_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object* v_a_2040_, lean_object* v_a_2041_){
_start:
{
if (lean_obj_tag(v_a_2040_) == 0)
{
lean_object* v___x_2042_; 
v___x_2042_ = l_List_reverse___redArg(v_a_2041_);
return v___x_2042_;
}
else
{
lean_object* v_head_2043_; lean_object* v_tail_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2055_; 
v_head_2043_ = lean_ctor_get(v_a_2040_, 0);
v_tail_2044_ = lean_ctor_get(v_a_2040_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_a_2040_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2046_ = v_a_2040_;
v_isShared_2047_ = v_isSharedCheck_2055_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_tail_2044_);
lean_inc(v_head_2043_);
lean_dec(v_a_2040_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2055_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v_fst_2048_; lean_object* v_snd_2049_; lean_object* v___x_2050_; lean_object* v___x_2052_; 
v_fst_2048_ = lean_ctor_get(v_head_2043_, 0);
lean_inc(v_fst_2048_);
v_snd_2049_ = lean_ctor_get(v_head_2043_, 1);
lean_inc(v_snd_2049_);
lean_dec(v_head_2043_);
v___x_2050_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2048_, v_snd_2049_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 1, v_a_2041_);
lean_ctor_set(v___x_2046_, 0, v___x_2050_);
v___x_2052_ = v___x_2046_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2050_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v_a_2041_);
v___x_2052_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
v_a_2040_ = v_tail_2044_;
v_a_2041_ = v___x_2052_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object* v_x_2056_){
_start:
{
if (lean_obj_tag(v_x_2056_) == 0)
{
lean_object* v___x_2057_; 
v___x_2057_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2057_;
}
else
{
lean_object* v_val_2058_; uint8_t v___x_2059_; 
v_val_2058_ = lean_ctor_get(v_x_2056_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v_x_2056_, 1);
v___x_2059_ = l_Std_Http_URI_Query_isEmpty(v_val_2058_);
if (v___x_2059_ == 0)
{
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v_encodedParams_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2060_ = lean_array_to_list(v_val_2058_);
v___x_2061_ = lean_box(0);
v_encodedParams_2062_ = l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(v___x_2060_, v___x_2061_);
v___x_2063_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2064_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2065_ = l_String_intercalate(v___x_2064_, v_encodedParams_2062_);
v___x_2066_ = lean_string_append(v___x_2063_, v___x_2065_);
lean_dec_ref(v___x_2065_);
return v___x_2066_;
}
else
{
lean_object* v___x_2067_; 
lean_dec(v_val_2058_);
v___x_2067_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2067_;
}
}
else
{
lean_object* v___x_2068_; 
lean_dec(v_val_2058_);
v___x_2068_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
return v___x_2068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object* v_x_2069_, lean_object* v_x_2070_){
_start:
{
if (lean_obj_tag(v_x_2069_) == 0)
{
lean_object* v___x_2071_; 
v___x_2071_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2071_;
}
else
{
lean_object* v_val_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v_val_2072_ = lean_ctor_get(v_x_2069_, 0);
lean_inc(v_val_2072_);
lean_dec_ref_known(v_x_2069_, 1);
v___x_2073_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2074_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_val_2072_);
v___x_2075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
v___x_2076_ = l_Repr_addAppParen(v___x_2075_, v_x_2070_);
return v___x_2076_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object* v_x_2077_, lean_object* v_x_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_x_2077_, v_x_2078_);
lean_dec(v_x_2078_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object* v_x_2080_, lean_object* v_x_2081_){
_start:
{
if (lean_obj_tag(v_x_2080_) == 0)
{
lean_object* v___x_2082_; 
v___x_2082_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2082_;
}
else
{
lean_object* v_val_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2094_; 
v_val_2083_ = lean_ctor_get(v_x_2080_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2085_ = v_x_2080_;
v_isShared_2086_ = v_isSharedCheck_2094_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_val_2083_);
lean_dec(v_x_2080_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2094_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2087_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2088_ = l_String_quote(v_val_2083_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set_tag(v___x_2085_, 3);
lean_ctor_set(v___x_2085_, 0, v___x_2088_);
v___x_2090_ = v___x_2085_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2087_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = l_Repr_addAppParen(v___x_2091_, v_x_2081_);
return v___x_2092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object* v_x_2095_, lean_object* v_x_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_x_2095_, v_x_2096_);
lean_dec(v_x_2096_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4(lean_object* v_x_2098_, lean_object* v_x_2099_){
_start:
{
if (lean_obj_tag(v_x_2098_) == 0)
{
lean_object* v___x_2100_; 
v___x_2100_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2100_;
}
else
{
lean_object* v_val_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2113_; 
v_val_2101_ = lean_ctor_get(v_x_2098_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_x_2098_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2103_ = v_x_2098_;
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_val_2101_);
lean_dec(v_x_2098_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2105_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2106_ = lean_string_from_utf8_unchecked(v_val_2101_);
v___x_2107_ = l_String_quote(v___x_2106_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set_tag(v___x_2103_, 3);
lean_ctor_set(v___x_2103_, 0, v___x_2107_);
v___x_2109_ = v___x_2103_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2105_);
lean_ctor_set(v___x_2110_, 1, v___x_2109_);
v___x_2111_ = l_Repr_addAppParen(v___x_2110_, v_x_2099_);
return v___x_2111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_x_2114_, lean_object* v_x_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4(v_x_2114_, v_x_2115_);
lean_dec(v_x_2115_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5_spec__6(lean_object* v_x_2117_, lean_object* v_x_2118_, lean_object* v_x_2119_){
_start:
{
if (lean_obj_tag(v_x_2119_) == 0)
{
lean_dec(v_x_2117_);
return v_x_2118_;
}
else
{
lean_object* v_head_2120_; lean_object* v_tail_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2130_; 
v_head_2120_ = lean_ctor_get(v_x_2119_, 0);
v_tail_2121_ = lean_ctor_get(v_x_2119_, 1);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_x_2119_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2123_ = v_x_2119_;
v_isShared_2124_ = v_isSharedCheck_2130_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_tail_2121_);
lean_inc(v_head_2120_);
lean_dec(v_x_2119_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2130_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
lean_inc(v_x_2117_);
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 5);
lean_ctor_set(v___x_2123_, 1, v_x_2117_);
lean_ctor_set(v___x_2123_, 0, v_x_2118_);
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_x_2118_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_x_2117_);
v___x_2126_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
lean_ctor_set(v___x_2127_, 1, v_head_2120_);
v_x_2118_ = v___x_2127_;
v_x_2119_ = v_tail_2121_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5(lean_object* v_x_2131_, lean_object* v_x_2132_){
_start:
{
if (lean_obj_tag(v_x_2131_) == 0)
{
lean_object* v___x_2133_; 
lean_dec(v_x_2132_);
v___x_2133_ = lean_box(0);
return v___x_2133_;
}
else
{
lean_object* v_tail_2134_; 
v_tail_2134_ = lean_ctor_get(v_x_2131_, 1);
if (lean_obj_tag(v_tail_2134_) == 0)
{
lean_object* v_head_2135_; 
lean_dec(v_x_2132_);
v_head_2135_ = lean_ctor_get(v_x_2131_, 0);
lean_inc(v_head_2135_);
lean_dec_ref_known(v_x_2131_, 2);
return v_head_2135_;
}
else
{
lean_object* v_head_2136_; lean_object* v___x_2137_; 
lean_inc(v_tail_2134_);
v_head_2136_ = lean_ctor_get(v_x_2131_, 0);
lean_inc(v_head_2136_);
lean_dec_ref_known(v_x_2131_, 2);
v___x_2137_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5_spec__6(v_x_2132_, v_head_2136_, v_tail_2134_);
return v___x_2137_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__0));
v___x_2141_ = lean_string_length(v___x_2140_);
return v___x_2141_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_2143_ = lean_nat_to_int(v___x_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(lean_object* v_x_2148_){
_start:
{
lean_object* v_fst_2149_; lean_object* v_snd_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2175_; 
v_fst_2149_ = lean_ctor_get(v_x_2148_, 0);
v_snd_2150_ = lean_ctor_get(v_x_2148_, 1);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_x_2148_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2152_ = v_x_2148_;
v_isShared_2153_ = v_isSharedCheck_2175_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_snd_2150_);
lean_inc(v_fst_2149_);
lean_dec(v_x_2148_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2175_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2159_; 
v___x_2154_ = lean_string_from_utf8_unchecked(v_fst_2149_);
v___x_2155_ = l_String_quote(v___x_2154_);
v___x_2156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2155_);
v___x_2157_ = lean_box(0);
if (v_isShared_2153_ == 0)
{
lean_ctor_set_tag(v___x_2152_, 1);
lean_ctor_set(v___x_2152_, 1, v___x_2157_);
lean_ctor_set(v___x_2152_, 0, v___x_2156_);
v___x_2159_ = v___x_2152_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v___x_2157_);
v___x_2159_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; lean_object* v___x_2173_; 
v___x_2160_ = lean_unsigned_to_nat(0u);
v___x_2161_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__4(v_snd_2150_, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2161_);
lean_ctor_set(v___x_2162_, 1, v___x_2159_);
v___x_2163_ = l_List_reverse___redArg(v___x_2162_);
v___x_2164_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_2165_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3_spec__5(v___x_2163_, v___x_2164_);
v___x_2166_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__3);
v___x_2167_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__4));
v___x_2168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
lean_ctor_set(v___x_2168_, 1, v___x_2165_);
v___x_2169_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg___closed__5));
v___x_2170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2166_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = 0;
v___x_2173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set_uint8(v___x_2173_, sizeof(void*)*1, v___x_2172_);
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7_spec__9(lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_){
_start:
{
if (lean_obj_tag(v_x_2178_) == 0)
{
lean_dec(v_x_2176_);
return v_x_2177_;
}
else
{
lean_object* v_head_2179_; lean_object* v_tail_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2190_; 
v_head_2179_ = lean_ctor_get(v_x_2178_, 0);
v_tail_2180_ = lean_ctor_get(v_x_2178_, 1);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_x_2178_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2182_ = v_x_2178_;
v_isShared_2183_ = v_isSharedCheck_2190_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_tail_2180_);
lean_inc(v_head_2179_);
lean_dec(v_x_2178_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2190_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
lean_inc(v_x_2176_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 5);
lean_ctor_set(v___x_2182_, 1, v_x_2176_);
lean_ctor_set(v___x_2182_, 0, v_x_2177_);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_x_2177_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v_x_2176_);
v___x_2185_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(v_head_2179_);
v___x_2187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2185_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v_x_2177_ = v___x_2187_;
v_x_2178_ = v_tail_2180_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7(lean_object* v_x_2191_, lean_object* v_x_2192_, lean_object* v_x_2193_){
_start:
{
if (lean_obj_tag(v_x_2193_) == 0)
{
lean_dec(v_x_2191_);
return v_x_2192_;
}
else
{
lean_object* v_head_2194_; lean_object* v_tail_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2205_; 
v_head_2194_ = lean_ctor_get(v_x_2193_, 0);
v_tail_2195_ = lean_ctor_get(v_x_2193_, 1);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_x_2193_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2197_ = v_x_2193_;
v_isShared_2198_ = v_isSharedCheck_2205_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_tail_2195_);
lean_inc(v_head_2194_);
lean_dec(v_x_2193_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2205_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
lean_inc(v_x_2191_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 5);
lean_ctor_set(v___x_2197_, 1, v_x_2191_);
lean_ctor_set(v___x_2197_, 0, v_x_2192_);
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_x_2192_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_x_2191_);
v___x_2200_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2201_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(v_head_2194_);
v___x_2202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___x_2203_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7_spec__9(v_x_2191_, v___x_2202_, v_tail_2195_);
return v___x_2203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4(lean_object* v_x_2206_, lean_object* v_x_2207_){
_start:
{
if (lean_obj_tag(v_x_2206_) == 0)
{
lean_object* v___x_2208_; 
lean_dec(v_x_2207_);
v___x_2208_ = lean_box(0);
return v___x_2208_;
}
else
{
lean_object* v_tail_2209_; 
v_tail_2209_ = lean_ctor_get(v_x_2206_, 1);
if (lean_obj_tag(v_tail_2209_) == 0)
{
lean_object* v_head_2210_; lean_object* v___x_2211_; 
lean_dec(v_x_2207_);
v_head_2210_ = lean_ctor_get(v_x_2206_, 0);
lean_inc(v_head_2210_);
lean_dec_ref_known(v_x_2206_, 2);
v___x_2211_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(v_head_2210_);
return v___x_2211_;
}
else
{
lean_object* v_head_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
lean_inc(v_tail_2209_);
v_head_2212_ = lean_ctor_get(v_x_2206_, 0);
lean_inc(v_head_2212_);
lean_dec_ref_known(v_x_2206_, 2);
v___x_2213_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(v_head_2212_);
v___x_2214_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4_spec__7(v_x_2207_, v___x_2213_, v_tail_2209_);
return v___x_2214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1(lean_object* v_xs_2215_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2216_ = lean_array_get_size(v_xs_2215_);
v___x_2217_ = lean_unsigned_to_nat(0u);
v___x_2218_ = lean_nat_dec_eq(v___x_2216_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2219_ = lean_array_to_list(v_xs_2215_);
v___x_2220_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_2221_ = l_Std_Format_joinSep___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__4(v___x_2219_, v___x_2220_);
v___x_2222_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_2223_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_2224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
lean_ctor_set(v___x_2224_, 1, v___x_2221_);
v___x_2225_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_2226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2224_);
lean_ctor_set(v___x_2226_, 1, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2222_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = l_Std_Format_fill(v___x_2227_);
return v___x_2228_;
}
else
{
lean_object* v___x_2229_; 
lean_dec_ref(v_xs_2215_);
v___x_2229_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_2229_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object* v_x_2230_, lean_object* v_x_2231_){
_start:
{
if (lean_obj_tag(v_x_2230_) == 0)
{
lean_object* v___x_2232_; 
v___x_2232_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2232_;
}
else
{
lean_object* v_val_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_val_2233_ = lean_ctor_get(v_x_2230_, 0);
lean_inc(v_val_2233_);
lean_dec_ref_known(v_x_2230_, 1);
v___x_2234_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2235_ = l_Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1(v_val_2233_);
v___x_2236_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2234_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = l_Repr_addAppParen(v___x_2236_, v_x_2231_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object* v_x_2238_, lean_object* v_x_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_x_2238_, v_x_2239_);
lean_dec(v_x_2239_);
return v_res_2240_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_unsigned_to_nat(10u);
v___x_2251_ = lean_nat_to_int(v___x_2250_);
return v___x_2251_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_unsigned_to_nat(13u);
v___x_2256_ = lean_nat_to_int(v___x_2255_);
return v___x_2256_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = lean_unsigned_to_nat(9u);
v___x_2264_ = lean_nat_to_int(v___x_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object* v_x_2268_){
_start:
{
lean_object* v_scheme_2269_; lean_object* v_authority_2270_; lean_object* v_path_2271_; lean_object* v_query_2272_; lean_object* v_fragment_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_scheme_2269_ = lean_ctor_get(v_x_2268_, 0);
lean_inc_ref(v_scheme_2269_);
v_authority_2270_ = lean_ctor_get(v_x_2268_, 1);
lean_inc(v_authority_2270_);
v_path_2271_ = lean_ctor_get(v_x_2268_, 2);
lean_inc_ref(v_path_2271_);
v_query_2272_ = lean_ctor_get(v_x_2268_, 3);
lean_inc(v_query_2272_);
v_fragment_2273_ = lean_ctor_get(v_x_2268_, 4);
lean_inc(v_fragment_2273_);
lean_dec_ref(v_x_2268_);
v___x_2274_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2275_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2276_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2277_ = l_String_quote(v_scheme_2269_);
v___x_2278_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
v___x_2279_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2276_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = 0;
v___x_2281_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2281_, 0, v___x_2279_);
lean_ctor_set_uint8(v___x_2281_, sizeof(void*)*1, v___x_2280_);
v___x_2282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2275_);
lean_ctor_set(v___x_2282_, 1, v___x_2281_);
v___x_2283_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_2284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2282_);
lean_ctor_set(v___x_2284_, 1, v___x_2283_);
v___x_2285_ = lean_box(1);
v___x_2286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__6));
v___x_2288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
lean_ctor_set(v___x_2289_, 1, v___x_2274_);
v___x_2290_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_2270_, v___x_2291_);
v___x_2293_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2290_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
v___x_2294_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
lean_ctor_set_uint8(v___x_2294_, sizeof(void*)*1, v___x_2280_);
v___x_2295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2289_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_ctor_set(v___x_2296_, 1, v___x_2283_);
v___x_2297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v___x_2285_);
v___x_2298_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_2299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2297_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
lean_ctor_set(v___x_2300_, 1, v___x_2274_);
v___x_2301_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_2302_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_2271_);
v___x_2303_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set_uint8(v___x_2304_, sizeof(void*)*1, v___x_2280_);
v___x_2305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2300_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
lean_ctor_set(v___x_2306_, 1, v___x_2283_);
v___x_2307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
lean_ctor_set(v___x_2307_, 1, v___x_2285_);
v___x_2308_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_2309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
lean_ctor_set(v___x_2310_, 1, v___x_2274_);
v___x_2311_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_2312_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_2272_, v___x_2291_);
v___x_2313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2311_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
lean_ctor_set_uint8(v___x_2314_, sizeof(void*)*1, v___x_2280_);
v___x_2315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2310_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set(v___x_2316_, 1, v___x_2283_);
v___x_2317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
lean_ctor_set(v___x_2317_, 1, v___x_2285_);
v___x_2318_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_2319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___x_2274_);
v___x_2321_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_2322_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_2273_, v___x_2291_);
v___x_2323_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
lean_ctor_set_uint8(v___x_2324_, sizeof(void*)*1, v___x_2280_);
v___x_2325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2320_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_2327_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_2328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
lean_ctor_set(v___x_2328_, 1, v___x_2325_);
v___x_2329_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_2330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2326_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2332_, 0, v___x_2331_);
lean_ctor_set_uint8(v___x_2332_, sizeof(void*)*1, v___x_2280_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object* v_x_2333_, lean_object* v_prec_2334_){
_start:
{
lean_object* v___x_2335_; 
v___x_2335_ = l_Std_Http_instReprURI_repr___redArg(v_x_2333_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object* v_x_2336_, lean_object* v_prec_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Std_Http_instReprURI_repr(v_x_2336_, v_prec_2337_);
lean_dec(v_prec_2337_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3(lean_object* v_x_2339_, lean_object* v_x_2340_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___redArg(v_x_2339_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3___boxed(lean_object* v_x_2342_, lean_object* v_x_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Prod_repr___at___00Array_repr___at___00Option_repr___at___00Std_Http_instReprURI_repr_spec__1_spec__1_spec__3(v_x_2342_, v_x_2343_);
lean_dec(v_x_2343_);
return v_res_2344_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object* v_x_2353_, lean_object* v_x_2354_){
_start:
{
if (lean_obj_tag(v_x_2353_) == 0)
{
if (lean_obj_tag(v_x_2354_) == 0)
{
uint8_t v___x_2355_; 
v___x_2355_ = 1;
return v___x_2355_;
}
else
{
uint8_t v___x_2356_; 
v___x_2356_ = 0;
return v___x_2356_;
}
}
else
{
if (lean_obj_tag(v_x_2354_) == 0)
{
uint8_t v___x_2357_; 
v___x_2357_ = 0;
return v___x_2357_;
}
else
{
lean_object* v_val_2358_; lean_object* v_val_2359_; uint8_t v___x_2360_; 
v_val_2358_ = lean_ctor_get(v_x_2353_, 0);
v_val_2359_ = lean_ctor_get(v_x_2354_, 0);
v___x_2360_ = l_Std_Http_URI_instBEqAuthority_beq(v_val_2358_, v_val_2359_);
return v___x_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object* v_x_2361_, lean_object* v_x_2362_){
_start:
{
uint8_t v_res_2363_; lean_object* v_r_2364_; 
v_res_2363_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_x_2361_, v_x_2362_);
lean_dec(v_x_2362_);
lean_dec(v_x_2361_);
v_r_2364_ = lean_box(v_res_2363_);
return v_r_2364_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object* v_x_2365_, lean_object* v_x_2366_){
_start:
{
if (lean_obj_tag(v_x_2365_) == 0)
{
if (lean_obj_tag(v_x_2366_) == 0)
{
uint8_t v___x_2367_; 
v___x_2367_ = 1;
return v___x_2367_;
}
else
{
uint8_t v___x_2368_; 
v___x_2368_ = 0;
return v___x_2368_;
}
}
else
{
if (lean_obj_tag(v_x_2366_) == 0)
{
uint8_t v___x_2369_; 
v___x_2369_ = 0;
return v___x_2369_;
}
else
{
lean_object* v_val_2370_; lean_object* v_val_2371_; uint8_t v___x_2372_; 
v_val_2370_ = lean_ctor_get(v_x_2365_, 0);
v_val_2371_ = lean_ctor_get(v_x_2366_, 0);
v___x_2372_ = l_Std_Http_URI_instBEqQuery_beq(v_val_2370_, v_val_2371_);
return v___x_2372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object* v_x_2373_, lean_object* v_x_2374_){
_start:
{
uint8_t v_res_2375_; lean_object* v_r_2376_; 
v_res_2375_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_x_2373_, v_x_2374_);
lean_dec(v_x_2374_);
lean_dec(v_x_2373_);
v_r_2376_ = lean_box(v_res_2375_);
return v_r_2376_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(lean_object* v_x_2377_, lean_object* v_x_2378_){
_start:
{
if (lean_obj_tag(v_x_2377_) == 0)
{
if (lean_obj_tag(v_x_2378_) == 0)
{
uint8_t v___x_2379_; 
v___x_2379_ = 1;
return v___x_2379_;
}
else
{
uint8_t v___x_2380_; 
v___x_2380_ = 0;
return v___x_2380_;
}
}
else
{
if (lean_obj_tag(v_x_2378_) == 0)
{
uint8_t v___x_2381_; 
v___x_2381_ = 0;
return v___x_2381_;
}
else
{
lean_object* v_val_2382_; lean_object* v_val_2383_; uint8_t v___x_2384_; 
v_val_2382_ = lean_ctor_get(v_x_2377_, 0);
v_val_2383_ = lean_ctor_get(v_x_2378_, 0);
v___x_2384_ = lean_string_dec_eq(v_val_2382_, v_val_2383_);
return v___x_2384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2___boxed(lean_object* v_x_2385_, lean_object* v_x_2386_){
_start:
{
uint8_t v_res_2387_; lean_object* v_r_2388_; 
v_res_2387_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_x_2385_, v_x_2386_);
lean_dec(v_x_2386_);
lean_dec(v_x_2385_);
v_r_2388_ = lean_box(v_res_2387_);
return v_r_2388_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object* v_x_2389_, lean_object* v_x_2390_){
_start:
{
lean_object* v_scheme_2391_; lean_object* v_authority_2392_; lean_object* v_path_2393_; lean_object* v_query_2394_; lean_object* v_fragment_2395_; lean_object* v_scheme_2396_; lean_object* v_authority_2397_; lean_object* v_path_2398_; lean_object* v_query_2399_; lean_object* v_fragment_2400_; uint8_t v___x_2401_; 
v_scheme_2391_ = lean_ctor_get(v_x_2389_, 0);
v_authority_2392_ = lean_ctor_get(v_x_2389_, 1);
v_path_2393_ = lean_ctor_get(v_x_2389_, 2);
v_query_2394_ = lean_ctor_get(v_x_2389_, 3);
v_fragment_2395_ = lean_ctor_get(v_x_2389_, 4);
v_scheme_2396_ = lean_ctor_get(v_x_2390_, 0);
v_authority_2397_ = lean_ctor_get(v_x_2390_, 1);
v_path_2398_ = lean_ctor_get(v_x_2390_, 2);
v_query_2399_ = lean_ctor_get(v_x_2390_, 3);
v_fragment_2400_ = lean_ctor_get(v_x_2390_, 4);
v___x_2401_ = lean_string_dec_eq(v_scheme_2391_, v_scheme_2396_);
if (v___x_2401_ == 0)
{
return v___x_2401_;
}
else
{
uint8_t v___x_2402_; 
v___x_2402_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_2392_, v_authority_2397_);
if (v___x_2402_ == 0)
{
return v___x_2402_;
}
else
{
uint8_t v___x_2403_; 
v___x_2403_ = l_Std_Http_URI_instBEqPath_beq(v_path_2393_, v_path_2398_);
if (v___x_2403_ == 0)
{
return v___x_2403_;
}
else
{
uint8_t v___x_2404_; 
v___x_2404_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_2394_, v_query_2399_);
if (v___x_2404_ == 0)
{
return v___x_2404_;
}
else
{
uint8_t v___x_2405_; 
v___x_2405_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_2395_, v_fragment_2400_);
return v___x_2405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object* v_x_2406_, lean_object* v_x_2407_){
_start:
{
uint8_t v_res_2408_; lean_object* v_r_2409_; 
v_res_2408_ = l_Std_Http_instBEqURI_beq(v_x_2406_, v_x_2407_);
lean_dec_ref(v_x_2407_);
lean_dec_ref(v_x_2406_);
v_r_2409_ = lean_box(v_res_2408_);
return v_r_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__1(lean_object* v___f_2414_, lean_object* v_uri_2415_){
_start:
{
lean_object* v_scheme_2416_; lean_object* v_authority_2417_; lean_object* v_path_2418_; lean_object* v_query_2419_; lean_object* v_fragment_2420_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2443_; 
v_scheme_2416_ = lean_ctor_get(v_uri_2415_, 0);
lean_inc_ref(v_scheme_2416_);
v_authority_2417_ = lean_ctor_get(v_uri_2415_, 1);
lean_inc(v_authority_2417_);
v_path_2418_ = lean_ctor_get(v_uri_2415_, 2);
lean_inc_ref(v_path_2418_);
v_query_2419_ = lean_ctor_get(v_uri_2415_, 3);
lean_inc(v_query_2419_);
v_fragment_2420_ = lean_ctor_get(v_uri_2415_, 4);
lean_inc(v_fragment_2420_);
lean_dec_ref(v_uri_2415_);
if (lean_obj_tag(v_authority_2417_) == 0)
{
lean_object* v___x_2454_; 
v___x_2454_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2443_ = v___x_2454_;
goto v___jp_2442_;
}
else
{
lean_object* v_val_2455_; lean_object* v_userInfo_2456_; lean_object* v_host_2457_; lean_object* v_port_2458_; lean_object* v___x_2459_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2478_; 
v_val_2455_ = lean_ctor_get(v_authority_2417_, 0);
lean_inc(v_val_2455_);
lean_dec_ref_known(v_authority_2417_, 1);
v_userInfo_2456_ = lean_ctor_get(v_val_2455_, 0);
lean_inc(v_userInfo_2456_);
v_host_2457_ = lean_ctor_get(v_val_2455_, 1);
lean_inc_ref(v_host_2457_);
v_port_2458_ = lean_ctor_get(v_val_2455_, 2);
lean_inc(v_port_2458_);
lean_dec(v_val_2455_);
v___x_2459_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_2456_) == 0)
{
lean_object* v___x_2488_; 
v___x_2488_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2478_ = v___x_2488_;
goto v___jp_2477_;
}
else
{
lean_object* v_val_2489_; lean_object* v_password_2490_; 
v_val_2489_ = lean_ctor_get(v_userInfo_2456_, 0);
lean_inc(v_val_2489_);
lean_dec_ref_known(v_userInfo_2456_, 1);
v_password_2490_ = lean_ctor_get(v_val_2489_, 1);
if (lean_obj_tag(v_password_2490_) == 0)
{
lean_object* v_username_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v_username_2491_ = lean_ctor_get(v_val_2489_, 0);
lean_inc_ref(v_username_2491_);
lean_dec(v_val_2489_);
v___x_2492_ = lean_string_from_utf8_unchecked(v_username_2491_);
v___x_2493_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2494_ = lean_string_append(v___x_2492_, v___x_2493_);
v___y_2478_ = v___x_2494_;
goto v___jp_2477_;
}
else
{
lean_object* v_username_2495_; lean_object* v_val_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
lean_inc_ref(v_password_2490_);
v_username_2495_ = lean_ctor_get(v_val_2489_, 0);
lean_inc_ref(v_username_2495_);
lean_dec(v_val_2489_);
v_val_2496_ = lean_ctor_get(v_password_2490_, 0);
lean_inc(v_val_2496_);
lean_dec_ref_known(v_password_2490_, 1);
v___x_2497_ = lean_string_from_utf8_unchecked(v_username_2495_);
v___x_2498_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2499_ = lean_string_append(v___x_2497_, v___x_2498_);
v___x_2500_ = lean_string_from_utf8_unchecked(v_val_2496_);
v___x_2501_ = lean_string_append(v___x_2499_, v___x_2500_);
lean_dec_ref(v___x_2500_);
v___x_2502_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2503_ = lean_string_append(v___x_2501_, v___x_2502_);
v___y_2478_ = v___x_2503_;
goto v___jp_2477_;
}
}
v___jp_2460_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2464_ = lean_string_append(v___y_2462_, v___y_2461_);
lean_dec_ref(v___y_2461_);
v___x_2465_ = lean_string_append(v___x_2464_, v___y_2463_);
lean_dec_ref(v___y_2463_);
v___x_2466_ = lean_string_append(v___x_2459_, v___x_2465_);
lean_dec_ref(v___x_2465_);
v___y_2443_ = v___x_2466_;
goto v___jp_2442_;
}
v___jp_2467_:
{
switch(lean_obj_tag(v_port_2458_))
{
case 0:
{
lean_object* v___x_2470_; 
v___x_2470_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2461_ = v___y_2469_;
v___y_2462_ = v___y_2468_;
v___y_2463_ = v___x_2470_;
goto v___jp_2460_;
}
case 1:
{
lean_object* v___x_2471_; 
v___x_2471_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_2461_ = v___y_2469_;
v___y_2462_ = v___y_2468_;
v___y_2463_ = v___x_2471_;
goto v___jp_2460_;
}
default: 
{
uint16_t v_port_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_port_2472_ = lean_ctor_get_uint16(v_port_2458_, 0);
lean_dec_ref_known(v_port_2458_, 0);
v___x_2473_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2474_ = lean_uint16_to_nat(v_port_2472_);
v___x_2475_ = l_Nat_reprFast(v___x_2474_);
v___x_2476_ = lean_string_append(v___x_2473_, v___x_2475_);
lean_dec_ref(v___x_2475_);
v___y_2461_ = v___y_2469_;
v___y_2462_ = v___y_2468_;
v___y_2463_ = v___x_2476_;
goto v___jp_2460_;
}
}
}
v___jp_2477_:
{
switch(lean_obj_tag(v_host_2457_))
{
case 0:
{
lean_object* v_name_2479_; 
v_name_2479_ = lean_ctor_get(v_host_2457_, 0);
lean_inc_ref(v_name_2479_);
lean_dec_ref_known(v_host_2457_, 1);
v___y_2468_ = v___y_2478_;
v___y_2469_ = v_name_2479_;
goto v___jp_2467_;
}
case 1:
{
lean_object* v_ipv4_2480_; lean_object* v___x_2481_; 
v_ipv4_2480_ = lean_ctor_get(v_host_2457_, 0);
lean_inc_ref(v_ipv4_2480_);
lean_dec_ref_known(v_host_2457_, 1);
v___x_2481_ = lean_uv_ntop_v4(v_ipv4_2480_);
lean_dec_ref(v_ipv4_2480_);
v___y_2468_ = v___y_2478_;
v___y_2469_ = v___x_2481_;
goto v___jp_2467_;
}
default: 
{
lean_object* v_ipv6_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v_ipv6_2482_ = lean_ctor_get(v_host_2457_, 0);
lean_inc_ref(v_ipv6_2482_);
lean_dec_ref_known(v_host_2457_, 1);
v___x_2483_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_2484_ = lean_uv_ntop_v6(v_ipv6_2482_);
lean_dec_ref(v_ipv6_2482_);
v___x_2485_ = lean_string_append(v___x_2483_, v___x_2484_);
lean_dec_ref(v___x_2484_);
v___x_2486_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
v___y_2468_ = v___y_2478_;
v___y_2469_ = v___x_2487_;
goto v___jp_2467_;
}
}
}
}
v___jp_2421_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2426_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2427_ = lean_string_append(v_scheme_2416_, v___x_2426_);
v___x_2428_ = lean_string_append(v___x_2427_, v___y_2424_);
lean_dec_ref(v___y_2424_);
v___x_2429_ = lean_string_append(v___x_2428_, v___y_2423_);
lean_dec_ref(v___y_2423_);
v___x_2430_ = lean_string_append(v___x_2429_, v___y_2422_);
lean_dec_ref(v___y_2422_);
v___x_2431_ = lean_string_append(v___x_2430_, v___y_2425_);
lean_dec_ref(v___y_2425_);
return v___x_2431_;
}
v___jp_2432_:
{
lean_object* v_queryPart_2435_; 
v_queryPart_2435_ = l_Std_Http_URI_Query_formatOption(v_query_2419_);
if (lean_obj_tag(v_fragment_2420_) == 0)
{
lean_object* v___x_2436_; 
v___x_2436_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2422_ = v_queryPart_2435_;
v___y_2423_ = v___y_2434_;
v___y_2424_ = v___y_2433_;
v___y_2425_ = v___x_2436_;
goto v___jp_2421_;
}
else
{
lean_object* v_val_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v_val_2437_ = lean_ctor_get(v_fragment_2420_, 0);
lean_inc(v_val_2437_);
lean_dec_ref_known(v_fragment_2420_, 1);
v___x_2438_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_2439_ = l_Std_Http_URI_EncodedFragment_encode(v_val_2437_);
lean_dec(v_val_2437_);
v___x_2440_ = lean_string_from_utf8_unchecked(v___x_2439_);
v___x_2441_ = lean_string_append(v___x_2438_, v___x_2440_);
lean_dec_ref(v___x_2440_);
v___y_2422_ = v_queryPart_2435_;
v___y_2423_ = v___y_2434_;
v___y_2424_ = v___y_2433_;
v___y_2425_ = v___x_2441_;
goto v___jp_2421_;
}
}
v___jp_2442_:
{
lean_object* v_segments_2444_; uint8_t v_absolute_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; size_t v_sz_2448_; size_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v_result_2452_; 
v_segments_2444_ = lean_ctor_get(v_path_2418_, 0);
lean_inc_ref(v_segments_2444_);
v_absolute_2445_ = lean_ctor_get_uint8(v_path_2418_, sizeof(void*)*1);
lean_dec_ref(v_path_2418_);
v___x_2446_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_2447_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_2448_ = lean_array_size(v_segments_2444_);
v___x_2449_ = ((size_t)0ULL);
v___x_2450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2447_, v___f_2414_, v_sz_2448_, v___x_2449_, v_segments_2444_);
v___x_2451_ = lean_array_to_list(v___x_2450_);
v_result_2452_ = l_String_intercalate(v___x_2446_, v___x_2451_);
if (v_absolute_2445_ == 0)
{
v___y_2433_ = v___y_2443_;
v___y_2434_ = v_result_2452_;
goto v___jp_2432_;
}
else
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_string_append(v___x_2446_, v_result_2452_);
lean_dec_ref(v_result_2452_);
v___y_2433_ = v___y_2443_;
v___y_2434_ = v___x_2453_;
goto v___jp_2432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object* v_b_2516_, lean_object* v_scheme_2517_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l_Std_Http_URI_Scheme_ofString_x3f(v_scheme_2517_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref(v_b_2516_);
v___x_2519_ = lean_box(0);
return v___x_2519_;
}
else
{
lean_object* v_userInfo_2520_; lean_object* v_host_2521_; lean_object* v_port_2522_; lean_object* v_pathSegments_2523_; lean_object* v_query_2524_; lean_object* v_fragment_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2540_; 
v_userInfo_2520_ = lean_ctor_get(v_b_2516_, 1);
v_host_2521_ = lean_ctor_get(v_b_2516_, 2);
v_port_2522_ = lean_ctor_get(v_b_2516_, 3);
v_pathSegments_2523_ = lean_ctor_get(v_b_2516_, 4);
v_query_2524_ = lean_ctor_get(v_b_2516_, 5);
v_fragment_2525_ = lean_ctor_get(v_b_2516_, 6);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_b_2516_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v_b_2516_, 0);
lean_dec(v_unused_2541_);
v___x_2527_ = v_b_2516_;
v_isShared_2528_ = v_isSharedCheck_2540_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_fragment_2525_);
lean_inc(v_query_2524_);
lean_inc(v_pathSegments_2523_);
lean_inc(v_port_2522_);
lean_inc(v_host_2521_);
lean_inc(v_userInfo_2520_);
lean_dec(v_b_2516_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2540_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
lean_inc_ref(v___x_2518_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v___x_2518_);
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2518_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_userInfo_2520_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_host_2521_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v_port_2522_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v_pathSegments_2523_);
lean_ctor_set(v_reuseFailAlloc_2539_, 5, v_query_2524_);
lean_ctor_set(v_reuseFailAlloc_2539_, 6, v_fragment_2525_);
v___x_2530_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; 
v_unused_2538_ = lean_ctor_get(v___x_2518_, 0);
lean_dec(v_unused_2538_);
v___x_2532_ = v___x_2518_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_dec(v___x_2518_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v___x_2530_);
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2530_);
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
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object* v_msg_2542_){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = ((lean_object*)(l_Std_Http_URI_instInhabitedBuilder_default));
v___x_2544_ = lean_panic_fn_borrowed(v___x_2543_, v_msg_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object* v_b_2546_, lean_object* v_scheme_2547_){
_start:
{
lean_object* v___x_2548_; 
lean_inc_ref(v_scheme_2547_);
v___x_2548_ = l_Std_Http_URI_Builder_setScheme_x3f(v_b_2546_, v_scheme_2547_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2549_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2550_ = ((lean_object*)(l_Std_Http_URI_Builder_setScheme_x21___closed__0));
v___x_2551_ = lean_unsigned_to_nat(696u);
v___x_2552_ = lean_unsigned_to_nat(14u);
v___x_2553_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_2554_ = l_String_quote(v_scheme_2547_);
v___x_2555_ = lean_string_append(v___x_2553_, v___x_2554_);
lean_dec_ref(v___x_2554_);
v___x_2556_ = l_mkPanicMessageWithDecl(v___x_2549_, v___x_2550_, v___x_2551_, v___x_2552_, v___x_2555_);
lean_dec_ref(v___x_2555_);
v___x_2557_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2556_);
return v___x_2557_;
}
else
{
lean_object* v_val_2558_; 
lean_dec_ref(v_scheme_2547_);
v_val_2558_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_val_2558_);
lean_dec_ref_known(v___x_2548_, 1);
return v_val_2558_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object* v_b_2559_, lean_object* v_username_2560_, lean_object* v_password_2561_){
_start:
{
lean_object* v_scheme_2562_; lean_object* v_host_2563_; lean_object* v_port_2564_; lean_object* v_pathSegments_2565_; lean_object* v_query_2566_; lean_object* v_fragment_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2590_; 
v_scheme_2562_ = lean_ctor_get(v_b_2559_, 0);
v_host_2563_ = lean_ctor_get(v_b_2559_, 2);
v_port_2564_ = lean_ctor_get(v_b_2559_, 3);
v_pathSegments_2565_ = lean_ctor_get(v_b_2559_, 4);
v_query_2566_ = lean_ctor_get(v_b_2559_, 5);
v_fragment_2567_ = lean_ctor_get(v_b_2559_, 6);
v_isSharedCheck_2590_ = !lean_is_exclusive(v_b_2559_);
if (v_isSharedCheck_2590_ == 0)
{
lean_object* v_unused_2591_; 
v_unused_2591_ = lean_ctor_get(v_b_2559_, 1);
lean_dec(v_unused_2591_);
v___x_2569_ = v_b_2559_;
v_isShared_2570_ = v_isSharedCheck_2590_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_fragment_2567_);
lean_inc(v_query_2566_);
lean_inc(v_pathSegments_2565_);
lean_inc(v_port_2564_);
lean_inc(v_host_2563_);
lean_inc(v_scheme_2562_);
lean_dec(v_b_2559_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2590_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___y_2572_; lean_object* v___x_2577_; 
v___x_2577_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_2560_);
if (lean_obj_tag(v_password_2561_) == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_box(0);
v___x_2579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2577_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___y_2572_ = v___x_2579_;
goto v___jp_2571_;
}
else
{
lean_object* v_val_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2589_; 
v_val_2580_ = lean_ctor_get(v_password_2561_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v_password_2561_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2582_ = v_password_2561_;
v_isShared_2583_ = v_isSharedCheck_2589_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_val_2580_);
lean_dec(v_password_2561_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2589_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2584_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_2580_);
lean_dec(v_val_2580_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2584_);
v___x_2586_ = v___x_2582_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
lean_object* v___x_2587_; 
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2577_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___y_2572_ = v___x_2587_;
goto v___jp_2571_;
}
}
}
v___jp_2571_:
{
lean_object* v___x_2573_; lean_object* v___x_2575_; 
v___x_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2573_, 0, v___y_2572_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 1, v___x_2573_);
v___x_2575_ = v___x_2569_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_scheme_2562_);
lean_ctor_set(v_reuseFailAlloc_2576_, 1, v___x_2573_);
lean_ctor_set(v_reuseFailAlloc_2576_, 2, v_host_2563_);
lean_ctor_set(v_reuseFailAlloc_2576_, 3, v_port_2564_);
lean_ctor_set(v_reuseFailAlloc_2576_, 4, v_pathSegments_2565_);
lean_ctor_set(v_reuseFailAlloc_2576_, 5, v_query_2566_);
lean_ctor_set(v_reuseFailAlloc_2576_, 6, v_fragment_2567_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo___boxed(lean_object* v_b_2592_, lean_object* v_username_2593_, lean_object* v_password_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Std_Http_URI_Builder_setUserInfo(v_b_2592_, v_username_2593_, v_password_2594_);
lean_dec_ref(v_username_2593_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object* v_b_2596_, lean_object* v_name_2597_){
_start:
{
lean_object* v___x_2598_; 
v___x_2598_ = l_Std_Http_URI_DomainName_ofString_x3f(v_name_2597_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v___x_2599_; 
lean_dec_ref(v_b_2596_);
v___x_2599_ = lean_box(0);
return v___x_2599_;
}
else
{
lean_object* v_val_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2623_; 
v_val_2600_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2602_ = v___x_2598_;
v_isShared_2603_ = v_isSharedCheck_2623_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_val_2600_);
lean_dec(v___x_2598_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2623_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v_scheme_2604_; lean_object* v_userInfo_2605_; lean_object* v_port_2606_; lean_object* v_pathSegments_2607_; lean_object* v_query_2608_; lean_object* v_fragment_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2621_; 
v_scheme_2604_ = lean_ctor_get(v_b_2596_, 0);
v_userInfo_2605_ = lean_ctor_get(v_b_2596_, 1);
v_port_2606_ = lean_ctor_get(v_b_2596_, 3);
v_pathSegments_2607_ = lean_ctor_get(v_b_2596_, 4);
v_query_2608_ = lean_ctor_get(v_b_2596_, 5);
v_fragment_2609_ = lean_ctor_get(v_b_2596_, 6);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_b_2596_);
if (v_isSharedCheck_2621_ == 0)
{
lean_object* v_unused_2622_; 
v_unused_2622_ = lean_ctor_get(v_b_2596_, 2);
lean_dec(v_unused_2622_);
v___x_2611_ = v_b_2596_;
v_isShared_2612_ = v_isSharedCheck_2621_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_fragment_2609_);
lean_inc(v_query_2608_);
lean_inc(v_pathSegments_2607_);
lean_inc(v_port_2606_);
lean_inc(v_userInfo_2605_);
lean_inc(v_scheme_2604_);
lean_dec(v_b_2596_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2621_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v_val_2600_);
if (v_isShared_2603_ == 0)
{
lean_ctor_set(v___x_2602_, 0, v___x_2613_);
v___x_2615_ = v___x_2602_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_object* v___x_2617_; 
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 2, v___x_2615_);
v___x_2617_ = v___x_2611_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_scheme_2604_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_userInfo_2605_);
lean_ctor_set(v_reuseFailAlloc_2619_, 2, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2619_, 3, v_port_2606_);
lean_ctor_set(v_reuseFailAlloc_2619_, 4, v_pathSegments_2607_);
lean_ctor_set(v_reuseFailAlloc_2619_, 5, v_query_2608_);
lean_ctor_set(v_reuseFailAlloc_2619_, 6, v_fragment_2609_);
v___x_2617_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
return v___x_2618_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object* v_b_2626_, lean_object* v_name_2627_){
_start:
{
lean_object* v___x_2628_; 
lean_inc_ref(v_name_2627_);
v___x_2628_ = l_Std_Http_URI_Builder_setHost_x3f(v_b_2626_, v_name_2627_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2629_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2630_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__0));
v___x_2631_ = lean_unsigned_to_nat(725u);
v___x_2632_ = lean_unsigned_to_nat(14u);
v___x_2633_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__1));
v___x_2634_ = l_String_quote(v_name_2627_);
v___x_2635_ = lean_string_append(v___x_2633_, v___x_2634_);
lean_dec_ref(v___x_2634_);
v___x_2636_ = l_mkPanicMessageWithDecl(v___x_2629_, v___x_2630_, v___x_2631_, v___x_2632_, v___x_2635_);
lean_dec_ref(v___x_2635_);
v___x_2637_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2636_);
return v___x_2637_;
}
else
{
lean_object* v_val_2638_; 
lean_dec_ref(v_name_2627_);
v_val_2638_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_val_2638_);
lean_dec_ref_known(v___x_2628_, 1);
return v_val_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object* v_b_2639_, lean_object* v_addr_2640_){
_start:
{
lean_object* v_scheme_2641_; lean_object* v_userInfo_2642_; lean_object* v_port_2643_; lean_object* v_pathSegments_2644_; lean_object* v_query_2645_; lean_object* v_fragment_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2655_; 
v_scheme_2641_ = lean_ctor_get(v_b_2639_, 0);
v_userInfo_2642_ = lean_ctor_get(v_b_2639_, 1);
v_port_2643_ = lean_ctor_get(v_b_2639_, 3);
v_pathSegments_2644_ = lean_ctor_get(v_b_2639_, 4);
v_query_2645_ = lean_ctor_get(v_b_2639_, 5);
v_fragment_2646_ = lean_ctor_get(v_b_2639_, 6);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_b_2639_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; 
v_unused_2656_ = lean_ctor_get(v_b_2639_, 2);
lean_dec(v_unused_2656_);
v___x_2648_ = v_b_2639_;
v_isShared_2649_ = v_isSharedCheck_2655_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_fragment_2646_);
lean_inc(v_query_2645_);
lean_inc(v_pathSegments_2644_);
lean_inc(v_port_2643_);
lean_inc(v_userInfo_2642_);
lean_inc(v_scheme_2641_);
lean_dec(v_b_2639_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2655_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2650_, 0, v_addr_2640_);
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 2, v___x_2651_);
v___x_2653_ = v___x_2648_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_scheme_2641_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_userInfo_2642_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v___x_2651_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v_port_2643_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v_pathSegments_2644_);
lean_ctor_set(v_reuseFailAlloc_2654_, 5, v_query_2645_);
lean_ctor_set(v_reuseFailAlloc_2654_, 6, v_fragment_2646_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object* v_b_2657_, lean_object* v_addr_2658_){
_start:
{
lean_object* v_scheme_2659_; lean_object* v_userInfo_2660_; lean_object* v_port_2661_; lean_object* v_pathSegments_2662_; lean_object* v_query_2663_; lean_object* v_fragment_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2673_; 
v_scheme_2659_ = lean_ctor_get(v_b_2657_, 0);
v_userInfo_2660_ = lean_ctor_get(v_b_2657_, 1);
v_port_2661_ = lean_ctor_get(v_b_2657_, 3);
v_pathSegments_2662_ = lean_ctor_get(v_b_2657_, 4);
v_query_2663_ = lean_ctor_get(v_b_2657_, 5);
v_fragment_2664_ = lean_ctor_get(v_b_2657_, 6);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_b_2657_);
if (v_isSharedCheck_2673_ == 0)
{
lean_object* v_unused_2674_; 
v_unused_2674_ = lean_ctor_get(v_b_2657_, 2);
lean_dec(v_unused_2674_);
v___x_2666_ = v_b_2657_;
v_isShared_2667_ = v_isSharedCheck_2673_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_fragment_2664_);
lean_inc(v_query_2663_);
lean_inc(v_pathSegments_2662_);
lean_inc(v_port_2661_);
lean_inc(v_userInfo_2660_);
lean_inc(v_scheme_2659_);
lean_dec(v_b_2657_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2673_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2668_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2668_, 0, v_addr_2658_);
v___x_2669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 2, v___x_2669_);
v___x_2671_ = v___x_2666_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_scheme_2659_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_userInfo_2660_);
lean_ctor_set(v_reuseFailAlloc_2672_, 2, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2672_, 3, v_port_2661_);
lean_ctor_set(v_reuseFailAlloc_2672_, 4, v_pathSegments_2662_);
lean_ctor_set(v_reuseFailAlloc_2672_, 5, v_query_2663_);
lean_ctor_set(v_reuseFailAlloc_2672_, 6, v_fragment_2664_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object* v_b_2675_, uint16_t v_port_2676_){
_start:
{
lean_object* v_scheme_2677_; lean_object* v_userInfo_2678_; lean_object* v_host_2679_; lean_object* v_pathSegments_2680_; lean_object* v_query_2681_; lean_object* v_fragment_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2690_; 
v_scheme_2677_ = lean_ctor_get(v_b_2675_, 0);
v_userInfo_2678_ = lean_ctor_get(v_b_2675_, 1);
v_host_2679_ = lean_ctor_get(v_b_2675_, 2);
v_pathSegments_2680_ = lean_ctor_get(v_b_2675_, 4);
v_query_2681_ = lean_ctor_get(v_b_2675_, 5);
v_fragment_2682_ = lean_ctor_get(v_b_2675_, 6);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_b_2675_);
if (v_isSharedCheck_2690_ == 0)
{
lean_object* v_unused_2691_; 
v_unused_2691_ = lean_ctor_get(v_b_2675_, 3);
lean_dec(v_unused_2691_);
v___x_2684_ = v_b_2675_;
v_isShared_2685_ = v_isSharedCheck_2690_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_fragment_2682_);
lean_inc(v_query_2681_);
lean_inc(v_pathSegments_2680_);
lean_inc(v_host_2679_);
lean_inc(v_userInfo_2678_);
lean_inc(v_scheme_2677_);
lean_dec(v_b_2675_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2690_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2686_; lean_object* v___x_2688_; 
v___x_2686_ = lean_alloc_ctor(2, 0, 2);
lean_ctor_set_uint16(v___x_2686_, 0, v_port_2676_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 3, v___x_2686_);
v___x_2688_ = v___x_2684_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_scheme_2677_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_userInfo_2678_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_host_2679_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v___x_2686_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v_pathSegments_2680_);
lean_ctor_set(v_reuseFailAlloc_2689_, 5, v_query_2681_);
lean_ctor_set(v_reuseFailAlloc_2689_, 6, v_fragment_2682_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object* v_b_2692_, lean_object* v_port_2693_){
_start:
{
uint16_t v_port_boxed_2694_; lean_object* v_res_2695_; 
v_port_boxed_2694_ = lean_unbox(v_port_2693_);
v_res_2695_ = l_Std_Http_URI_Builder_setPort(v_b_2692_, v_port_boxed_2694_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object* v_b_2696_, lean_object* v_segments_2697_){
_start:
{
lean_object* v_scheme_2698_; lean_object* v_userInfo_2699_; lean_object* v_host_2700_; lean_object* v_port_2701_; lean_object* v_query_2702_; lean_object* v_fragment_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
v_scheme_2698_ = lean_ctor_get(v_b_2696_, 0);
v_userInfo_2699_ = lean_ctor_get(v_b_2696_, 1);
v_host_2700_ = lean_ctor_get(v_b_2696_, 2);
v_port_2701_ = lean_ctor_get(v_b_2696_, 3);
v_query_2702_ = lean_ctor_get(v_b_2696_, 5);
v_fragment_2703_ = lean_ctor_get(v_b_2696_, 6);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_b_2696_);
if (v_isSharedCheck_2710_ == 0)
{
lean_object* v_unused_2711_; 
v_unused_2711_ = lean_ctor_get(v_b_2696_, 4);
lean_dec(v_unused_2711_);
v___x_2705_ = v_b_2696_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_fragment_2703_);
lean_inc(v_query_2702_);
lean_inc(v_port_2701_);
lean_inc(v_host_2700_);
lean_inc(v_userInfo_2699_);
lean_inc(v_scheme_2698_);
lean_dec(v_b_2696_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 4, v_segments_2697_);
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_scheme_2698_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v_userInfo_2699_);
lean_ctor_set(v_reuseFailAlloc_2709_, 2, v_host_2700_);
lean_ctor_set(v_reuseFailAlloc_2709_, 3, v_port_2701_);
lean_ctor_set(v_reuseFailAlloc_2709_, 4, v_segments_2697_);
lean_ctor_set(v_reuseFailAlloc_2709_, 5, v_query_2702_);
lean_ctor_set(v_reuseFailAlloc_2709_, 6, v_fragment_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object* v_b_2712_, lean_object* v_segment_2713_){
_start:
{
lean_object* v_scheme_2714_; lean_object* v_userInfo_2715_; lean_object* v_host_2716_; lean_object* v_port_2717_; lean_object* v_pathSegments_2718_; lean_object* v_query_2719_; lean_object* v_fragment_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2728_; 
v_scheme_2714_ = lean_ctor_get(v_b_2712_, 0);
v_userInfo_2715_ = lean_ctor_get(v_b_2712_, 1);
v_host_2716_ = lean_ctor_get(v_b_2712_, 2);
v_port_2717_ = lean_ctor_get(v_b_2712_, 3);
v_pathSegments_2718_ = lean_ctor_get(v_b_2712_, 4);
v_query_2719_ = lean_ctor_get(v_b_2712_, 5);
v_fragment_2720_ = lean_ctor_get(v_b_2712_, 6);
v_isSharedCheck_2728_ = !lean_is_exclusive(v_b_2712_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2722_ = v_b_2712_;
v_isShared_2723_ = v_isSharedCheck_2728_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_fragment_2720_);
lean_inc(v_query_2719_);
lean_inc(v_pathSegments_2718_);
lean_inc(v_port_2717_);
lean_inc(v_host_2716_);
lean_inc(v_userInfo_2715_);
lean_inc(v_scheme_2714_);
lean_dec(v_b_2712_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2728_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2724_; lean_object* v___x_2726_; 
v___x_2724_ = lean_array_push(v_pathSegments_2718_, v_segment_2713_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 4, v___x_2724_);
v___x_2726_ = v___x_2722_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_scheme_2714_);
lean_ctor_set(v_reuseFailAlloc_2727_, 1, v_userInfo_2715_);
lean_ctor_set(v_reuseFailAlloc_2727_, 2, v_host_2716_);
lean_ctor_set(v_reuseFailAlloc_2727_, 3, v_port_2717_);
lean_ctor_set(v_reuseFailAlloc_2727_, 4, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2727_, 5, v_query_2719_);
lean_ctor_set(v_reuseFailAlloc_2727_, 6, v_fragment_2720_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object* v_b_2729_, lean_object* v_key_2730_, lean_object* v_value_2731_){
_start:
{
lean_object* v_scheme_2732_; lean_object* v_userInfo_2733_; lean_object* v_host_2734_; lean_object* v_port_2735_; lean_object* v_pathSegments_2736_; lean_object* v_query_2737_; lean_object* v_fragment_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2748_; 
v_scheme_2732_ = lean_ctor_get(v_b_2729_, 0);
v_userInfo_2733_ = lean_ctor_get(v_b_2729_, 1);
v_host_2734_ = lean_ctor_get(v_b_2729_, 2);
v_port_2735_ = lean_ctor_get(v_b_2729_, 3);
v_pathSegments_2736_ = lean_ctor_get(v_b_2729_, 4);
v_query_2737_ = lean_ctor_get(v_b_2729_, 5);
v_fragment_2738_ = lean_ctor_get(v_b_2729_, 6);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_b_2729_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2740_ = v_b_2729_;
v_isShared_2741_ = v_isSharedCheck_2748_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_fragment_2738_);
lean_inc(v_query_2737_);
lean_inc(v_pathSegments_2736_);
lean_inc(v_port_2735_);
lean_inc(v_host_2734_);
lean_inc(v_userInfo_2733_);
lean_inc(v_scheme_2732_);
lean_dec(v_b_2729_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2748_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2746_; 
v___x_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_value_2731_);
v___x_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2743_, 0, v_key_2730_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = lean_array_push(v_query_2737_, v___x_2743_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 5, v___x_2744_);
v___x_2746_ = v___x_2740_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_scheme_2732_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v_userInfo_2733_);
lean_ctor_set(v_reuseFailAlloc_2747_, 2, v_host_2734_);
lean_ctor_set(v_reuseFailAlloc_2747_, 3, v_port_2735_);
lean_ctor_set(v_reuseFailAlloc_2747_, 4, v_pathSegments_2736_);
lean_ctor_set(v_reuseFailAlloc_2747_, 5, v___x_2744_);
lean_ctor_set(v_reuseFailAlloc_2747_, 6, v_fragment_2738_);
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
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object* v_b_2749_, lean_object* v_key_2750_){
_start:
{
lean_object* v_scheme_2751_; lean_object* v_userInfo_2752_; lean_object* v_host_2753_; lean_object* v_port_2754_; lean_object* v_pathSegments_2755_; lean_object* v_query_2756_; lean_object* v_fragment_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2767_; 
v_scheme_2751_ = lean_ctor_get(v_b_2749_, 0);
v_userInfo_2752_ = lean_ctor_get(v_b_2749_, 1);
v_host_2753_ = lean_ctor_get(v_b_2749_, 2);
v_port_2754_ = lean_ctor_get(v_b_2749_, 3);
v_pathSegments_2755_ = lean_ctor_get(v_b_2749_, 4);
v_query_2756_ = lean_ctor_get(v_b_2749_, 5);
v_fragment_2757_ = lean_ctor_get(v_b_2749_, 6);
v_isSharedCheck_2767_ = !lean_is_exclusive(v_b_2749_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2759_ = v_b_2749_;
v_isShared_2760_ = v_isSharedCheck_2767_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_fragment_2757_);
lean_inc(v_query_2756_);
lean_inc(v_pathSegments_2755_);
lean_inc(v_port_2754_);
lean_inc(v_host_2753_);
lean_inc(v_userInfo_2752_);
lean_inc(v_scheme_2751_);
lean_dec(v_b_2749_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2767_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
v___x_2761_ = lean_box(0);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v_key_2750_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = lean_array_push(v_query_2756_, v___x_2762_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 5, v___x_2763_);
v___x_2765_ = v___x_2759_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_scheme_2751_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v_userInfo_2752_);
lean_ctor_set(v_reuseFailAlloc_2766_, 2, v_host_2753_);
lean_ctor_set(v_reuseFailAlloc_2766_, 3, v_port_2754_);
lean_ctor_set(v_reuseFailAlloc_2766_, 4, v_pathSegments_2755_);
lean_ctor_set(v_reuseFailAlloc_2766_, 5, v___x_2763_);
lean_ctor_set(v_reuseFailAlloc_2766_, 6, v_fragment_2757_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object* v_b_2768_, lean_object* v_query_2769_){
_start:
{
lean_object* v_scheme_2770_; lean_object* v_userInfo_2771_; lean_object* v_host_2772_; lean_object* v_port_2773_; lean_object* v_pathSegments_2774_; lean_object* v_fragment_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
v_scheme_2770_ = lean_ctor_get(v_b_2768_, 0);
v_userInfo_2771_ = lean_ctor_get(v_b_2768_, 1);
v_host_2772_ = lean_ctor_get(v_b_2768_, 2);
v_port_2773_ = lean_ctor_get(v_b_2768_, 3);
v_pathSegments_2774_ = lean_ctor_get(v_b_2768_, 4);
v_fragment_2775_ = lean_ctor_get(v_b_2768_, 6);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_b_2768_);
if (v_isSharedCheck_2782_ == 0)
{
lean_object* v_unused_2783_; 
v_unused_2783_ = lean_ctor_get(v_b_2768_, 5);
lean_dec(v_unused_2783_);
v___x_2777_ = v_b_2768_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_fragment_2775_);
lean_inc(v_pathSegments_2774_);
lean_inc(v_port_2773_);
lean_inc(v_host_2772_);
lean_inc(v_userInfo_2771_);
lean_inc(v_scheme_2770_);
lean_dec(v_b_2768_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 5, v_query_2769_);
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_scheme_2770_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_userInfo_2771_);
lean_ctor_set(v_reuseFailAlloc_2781_, 2, v_host_2772_);
lean_ctor_set(v_reuseFailAlloc_2781_, 3, v_port_2773_);
lean_ctor_set(v_reuseFailAlloc_2781_, 4, v_pathSegments_2774_);
lean_ctor_set(v_reuseFailAlloc_2781_, 5, v_query_2769_);
lean_ctor_set(v_reuseFailAlloc_2781_, 6, v_fragment_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object* v_b_2784_, lean_object* v_fragment_2785_){
_start:
{
lean_object* v_scheme_2786_; lean_object* v_userInfo_2787_; lean_object* v_host_2788_; lean_object* v_port_2789_; lean_object* v_pathSegments_2790_; lean_object* v_query_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2799_; 
v_scheme_2786_ = lean_ctor_get(v_b_2784_, 0);
v_userInfo_2787_ = lean_ctor_get(v_b_2784_, 1);
v_host_2788_ = lean_ctor_get(v_b_2784_, 2);
v_port_2789_ = lean_ctor_get(v_b_2784_, 3);
v_pathSegments_2790_ = lean_ctor_get(v_b_2784_, 4);
v_query_2791_ = lean_ctor_get(v_b_2784_, 5);
v_isSharedCheck_2799_ = !lean_is_exclusive(v_b_2784_);
if (v_isSharedCheck_2799_ == 0)
{
lean_object* v_unused_2800_; 
v_unused_2800_ = lean_ctor_get(v_b_2784_, 6);
lean_dec(v_unused_2800_);
v___x_2793_ = v_b_2784_;
v_isShared_2794_ = v_isSharedCheck_2799_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_query_2791_);
lean_inc(v_pathSegments_2790_);
lean_inc(v_port_2789_);
lean_inc(v_host_2788_);
lean_inc(v_userInfo_2787_);
lean_inc(v_scheme_2786_);
lean_dec(v_b_2784_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2799_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2795_; lean_object* v___x_2797_; 
v___x_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2795_, 0, v_fragment_2785_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 6, v___x_2795_);
v___x_2797_ = v___x_2793_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_scheme_2786_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_userInfo_2787_);
lean_ctor_set(v_reuseFailAlloc_2798_, 2, v_host_2788_);
lean_ctor_set(v_reuseFailAlloc_2798_, 3, v_port_2789_);
lean_ctor_set(v_reuseFailAlloc_2798_, 4, v_pathSegments_2790_);
lean_ctor_set(v_reuseFailAlloc_2798_, 5, v_query_2791_);
lean_ctor_set(v_reuseFailAlloc_2798_, 6, v___x_2795_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t v_sz_2801_, size_t v_i_2802_, lean_object* v_bs_2803_){
_start:
{
uint8_t v___x_2804_; 
v___x_2804_ = lean_usize_dec_lt(v_i_2802_, v_sz_2801_);
if (v___x_2804_ == 0)
{
return v_bs_2803_;
}
else
{
lean_object* v_v_2805_; lean_object* v___x_2806_; lean_object* v_bs_x27_2807_; lean_object* v___x_2808_; size_t v___x_2809_; size_t v___x_2810_; lean_object* v___x_2811_; 
v_v_2805_ = lean_array_uget(v_bs_2803_, v_i_2802_);
v___x_2806_ = lean_unsigned_to_nat(0u);
v_bs_x27_2807_ = lean_array_uset(v_bs_2803_, v_i_2802_, v___x_2806_);
v___x_2808_ = l_Std_Http_URI_EncodedSegment_encode(v_v_2805_);
lean_dec(v_v_2805_);
v___x_2809_ = ((size_t)1ULL);
v___x_2810_ = lean_usize_add(v_i_2802_, v___x_2809_);
v___x_2811_ = lean_array_uset(v_bs_x27_2807_, v_i_2802_, v___x_2808_);
v_i_2802_ = v___x_2810_;
v_bs_2803_ = v___x_2811_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object* v_sz_2813_, lean_object* v_i_2814_, lean_object* v_bs_2815_){
_start:
{
size_t v_sz_boxed_2816_; size_t v_i_boxed_2817_; lean_object* v_res_2818_; 
v_sz_boxed_2816_ = lean_unbox_usize(v_sz_2813_);
lean_dec(v_sz_2813_);
v_i_boxed_2817_ = lean_unbox_usize(v_i_2814_);
lean_dec(v_i_2814_);
v_res_2818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_boxed_2816_, v_i_boxed_2817_, v_bs_2815_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t v_sz_2819_, size_t v_i_2820_, lean_object* v_bs_2821_){
_start:
{
uint8_t v___x_2822_; 
v___x_2822_ = lean_usize_dec_lt(v_i_2820_, v_sz_2819_);
if (v___x_2822_ == 0)
{
return v_bs_2821_;
}
else
{
lean_object* v_v_2823_; lean_object* v_fst_2824_; lean_object* v_snd_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2854_; 
v_v_2823_ = lean_array_uget(v_bs_2821_, v_i_2820_);
v_fst_2824_ = lean_ctor_get(v_v_2823_, 0);
v_snd_2825_ = lean_ctor_get(v_v_2823_, 1);
v_isSharedCheck_2854_ = !lean_is_exclusive(v_v_2823_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2827_ = v_v_2823_;
v_isShared_2828_ = v_isSharedCheck_2854_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_snd_2825_);
lean_inc(v_fst_2824_);
lean_dec(v_v_2823_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2854_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2829_; lean_object* v_bs_x27_2830_; lean_object* v___y_2832_; lean_object* v___x_2837_; 
v___x_2829_ = lean_unsigned_to_nat(0u);
v_bs_x27_2830_ = lean_array_uset(v_bs_2821_, v_i_2820_, v___x_2829_);
v___x_2837_ = l_Std_Http_URI_EncodedQueryParam_encode(v_fst_2824_);
lean_dec(v_fst_2824_);
if (lean_obj_tag(v_snd_2825_) == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2840_; 
v___x_2838_ = lean_box(0);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 1, v___x_2838_);
lean_ctor_set(v___x_2827_, 0, v___x_2837_);
v___x_2840_ = v___x_2827_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2837_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v___x_2838_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
v___y_2832_ = v___x_2840_;
goto v___jp_2831_;
}
}
else
{
lean_object* v_val_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2853_; 
v_val_2842_ = lean_ctor_get(v_snd_2825_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_snd_2825_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2844_ = v_snd_2825_;
v_isShared_2845_ = v_isSharedCheck_2853_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_val_2842_);
lean_dec(v_snd_2825_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2853_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2846_; lean_object* v___x_2848_; 
v___x_2846_ = l_Std_Http_URI_EncodedQueryParam_encode(v_val_2842_);
lean_dec(v_val_2842_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v___x_2846_);
v___x_2848_ = v___x_2844_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2846_);
v___x_2848_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2850_; 
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 1, v___x_2848_);
lean_ctor_set(v___x_2827_, 0, v___x_2837_);
v___x_2850_ = v___x_2827_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2837_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
v___y_2832_ = v___x_2850_;
goto v___jp_2831_;
}
}
}
}
v___jp_2831_:
{
size_t v___x_2833_; size_t v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = ((size_t)1ULL);
v___x_2834_ = lean_usize_add(v_i_2820_, v___x_2833_);
v___x_2835_ = lean_array_uset(v_bs_x27_2830_, v_i_2820_, v___y_2832_);
v_i_2820_ = v___x_2834_;
v_bs_2821_ = v___x_2835_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object* v_sz_2855_, lean_object* v_i_2856_, lean_object* v_bs_2857_){
_start:
{
size_t v_sz_boxed_2858_; size_t v_i_boxed_2859_; lean_object* v_res_2860_; 
v_sz_boxed_2858_ = lean_unbox_usize(v_sz_2855_);
lean_dec(v_sz_2855_);
v_i_boxed_2859_ = lean_unbox_usize(v_i_2856_);
lean_dec(v_i_2856_);
v_res_2860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_boxed_2858_, v_i_boxed_2859_, v_bs_2857_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object* v_b_2861_){
_start:
{
uint8_t v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v_scheme_2882_; lean_object* v_userInfo_2883_; lean_object* v_host_2884_; lean_object* v_port_2885_; lean_object* v_pathSegments_2886_; lean_object* v_query_2887_; lean_object* v_fragment_2888_; lean_object* v___y_2890_; 
v_scheme_2882_ = lean_ctor_get(v_b_2861_, 0);
lean_inc(v_scheme_2882_);
v_userInfo_2883_ = lean_ctor_get(v_b_2861_, 1);
lean_inc(v_userInfo_2883_);
v_host_2884_ = lean_ctor_get(v_b_2861_, 2);
lean_inc(v_host_2884_);
v_port_2885_ = lean_ctor_get(v_b_2861_, 3);
lean_inc(v_port_2885_);
v_pathSegments_2886_ = lean_ctor_get(v_b_2861_, 4);
lean_inc_ref(v_pathSegments_2886_);
v_query_2887_ = lean_ctor_get(v_b_2861_, 5);
lean_inc_ref(v_query_2887_);
v_fragment_2888_ = lean_ctor_get(v_b_2861_, 6);
lean_inc(v_fragment_2888_);
lean_dec_ref(v_b_2861_);
if (lean_obj_tag(v_scheme_2882_) == 0)
{
lean_object* v___x_2903_; 
v___x_2903_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___y_2890_ = v___x_2903_;
goto v___jp_2889_;
}
else
{
lean_object* v_val_2904_; 
v_val_2904_ = lean_ctor_get(v_scheme_2882_, 0);
lean_inc(v_val_2904_);
lean_dec_ref_known(v_scheme_2882_, 1);
v___y_2890_ = v_val_2904_;
goto v___jp_2889_;
}
v___jp_2862_:
{
size_t v_sz_2869_; size_t v___x_2870_; lean_object* v___x_2871_; lean_object* v_path_2872_; size_t v_sz_2873_; lean_object* v_query_2874_; lean_object* v___x_2875_; lean_object* v_query_2876_; uint8_t v___x_2877_; 
v_sz_2869_ = lean_array_size(v___y_2867_);
v___x_2870_ = ((size_t)0ULL);
v___x_2871_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_2869_, v___x_2870_, v___y_2867_);
v_path_2872_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_path_2872_, 0, v___x_2871_);
lean_ctor_set_uint8(v_path_2872_, sizeof(void*)*1, v___y_2863_);
v_sz_2873_ = lean_array_size(v___y_2865_);
v_query_2874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_2873_, v___x_2870_, v___y_2865_);
v___x_2875_ = lean_array_to_list(v_query_2874_);
v_query_2876_ = lean_array_mk(v___x_2875_);
v___x_2877_ = l_Std_Http_URI_Query_isEmpty(v_query_2876_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2878_, 0, v_query_2876_);
v___x_2879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2879_, 0, v___y_2866_);
lean_ctor_set(v___x_2879_, 1, v___y_2868_);
lean_ctor_set(v___x_2879_, 2, v_path_2872_);
lean_ctor_set(v___x_2879_, 3, v___x_2878_);
lean_ctor_set(v___x_2879_, 4, v___y_2864_);
return v___x_2879_;
}
else
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_dec_ref(v_query_2876_);
v___x_2880_ = lean_box(0);
v___x_2881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2881_, 0, v___y_2866_);
lean_ctor_set(v___x_2881_, 1, v___y_2868_);
lean_ctor_set(v___x_2881_, 2, v_path_2872_);
lean_ctor_set(v___x_2881_, 3, v___x_2880_);
lean_ctor_set(v___x_2881_, 4, v___y_2864_);
return v___x_2881_;
}
}
v___jp_2889_:
{
if (lean_obj_tag(v_host_2884_) == 0)
{
uint8_t v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v_port_2885_);
lean_dec(v_userInfo_2883_);
v___x_2891_ = 1;
v___x_2892_ = lean_box(0);
v___y_2863_ = v___x_2891_;
v___y_2864_ = v_fragment_2888_;
v___y_2865_ = v_query_2887_;
v___y_2866_ = v___y_2890_;
v___y_2867_ = v_pathSegments_2886_;
v___y_2868_ = v___x_2892_;
goto v___jp_2862_;
}
else
{
lean_object* v_val_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2902_; 
v_val_2893_ = lean_ctor_get(v_host_2884_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_host_2884_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2895_ = v_host_2884_;
v_isShared_2896_ = v_isSharedCheck_2902_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_val_2893_);
lean_dec(v_host_2884_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2902_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
uint8_t v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2900_; 
v___x_2897_ = 1;
v___x_2898_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2898_, 0, v_userInfo_2883_);
lean_ctor_set(v___x_2898_, 1, v_val_2893_);
lean_ctor_set(v___x_2898_, 2, v_port_2885_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 0, v___x_2898_);
v___x_2900_ = v___x_2895_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2898_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
v___y_2863_ = v___x_2897_;
v___y_2864_ = v_fragment_2888_;
v___y_2865_ = v_query_2887_;
v___y_2866_ = v___y_2890_;
v___y_2867_ = v_pathSegments_2886_;
v___y_2868_ = v___x_2900_;
goto v___jp_2862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object* v_uri_2905_, lean_object* v_scheme_2906_){
_start:
{
lean_object* v_authority_2907_; lean_object* v_path_2908_; lean_object* v_query_2909_; lean_object* v_fragment_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2918_; 
v_authority_2907_ = lean_ctor_get(v_uri_2905_, 1);
v_path_2908_ = lean_ctor_get(v_uri_2905_, 2);
v_query_2909_ = lean_ctor_get(v_uri_2905_, 3);
v_fragment_2910_ = lean_ctor_get(v_uri_2905_, 4);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_uri_2905_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; 
v_unused_2919_ = lean_ctor_get(v_uri_2905_, 0);
lean_dec(v_unused_2919_);
v___x_2912_ = v_uri_2905_;
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_fragment_2910_);
lean_inc(v_query_2909_);
lean_inc(v_path_2908_);
lean_inc(v_authority_2907_);
lean_dec(v_uri_2905_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2918_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2914_ = l_Std_Http_URI_Scheme_ofString_x21(v_scheme_2906_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 0, v___x_2914_);
v___x_2916_ = v___x_2912_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_authority_2907_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_path_2908_);
lean_ctor_set(v_reuseFailAlloc_2917_, 3, v_query_2909_);
lean_ctor_set(v_reuseFailAlloc_2917_, 4, v_fragment_2910_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object* v_uri_2920_, lean_object* v_authority_2921_){
_start:
{
lean_object* v_scheme_2922_; lean_object* v_path_2923_; lean_object* v_query_2924_; lean_object* v_fragment_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
v_scheme_2922_ = lean_ctor_get(v_uri_2920_, 0);
v_path_2923_ = lean_ctor_get(v_uri_2920_, 2);
v_query_2924_ = lean_ctor_get(v_uri_2920_, 3);
v_fragment_2925_ = lean_ctor_get(v_uri_2920_, 4);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_uri_2920_);
if (v_isSharedCheck_2932_ == 0)
{
lean_object* v_unused_2933_; 
v_unused_2933_ = lean_ctor_get(v_uri_2920_, 1);
lean_dec(v_unused_2933_);
v___x_2927_ = v_uri_2920_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_fragment_2925_);
lean_inc(v_query_2924_);
lean_inc(v_path_2923_);
lean_inc(v_scheme_2922_);
lean_dec(v_uri_2920_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v_authority_2921_);
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_scheme_2922_);
lean_ctor_set(v_reuseFailAlloc_2931_, 1, v_authority_2921_);
lean_ctor_set(v_reuseFailAlloc_2931_, 2, v_path_2923_);
lean_ctor_set(v_reuseFailAlloc_2931_, 3, v_query_2924_);
lean_ctor_set(v_reuseFailAlloc_2931_, 4, v_fragment_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object* v_uri_2934_, lean_object* v_path_2935_){
_start:
{
lean_object* v_scheme_2936_; lean_object* v_authority_2937_; lean_object* v_query_2938_; lean_object* v_fragment_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
v_scheme_2936_ = lean_ctor_get(v_uri_2934_, 0);
v_authority_2937_ = lean_ctor_get(v_uri_2934_, 1);
v_query_2938_ = lean_ctor_get(v_uri_2934_, 3);
v_fragment_2939_ = lean_ctor_get(v_uri_2934_, 4);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_uri_2934_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; 
v_unused_2947_ = lean_ctor_get(v_uri_2934_, 2);
lean_dec(v_unused_2947_);
v___x_2941_ = v_uri_2934_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_fragment_2939_);
lean_inc(v_query_2938_);
lean_inc(v_authority_2937_);
lean_inc(v_scheme_2936_);
lean_dec(v_uri_2934_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 2, v_path_2935_);
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_scheme_2936_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v_authority_2937_);
lean_ctor_set(v_reuseFailAlloc_2945_, 2, v_path_2935_);
lean_ctor_set(v_reuseFailAlloc_2945_, 3, v_query_2938_);
lean_ctor_set(v_reuseFailAlloc_2945_, 4, v_fragment_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object* v_uri_2948_, lean_object* v_query_2949_){
_start:
{
lean_object* v_scheme_2950_; lean_object* v_authority_2951_; lean_object* v_path_2952_; lean_object* v_fragment_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2961_; 
v_scheme_2950_ = lean_ctor_get(v_uri_2948_, 0);
v_authority_2951_ = lean_ctor_get(v_uri_2948_, 1);
v_path_2952_ = lean_ctor_get(v_uri_2948_, 2);
v_fragment_2953_ = lean_ctor_get(v_uri_2948_, 4);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_uri_2948_);
if (v_isSharedCheck_2961_ == 0)
{
lean_object* v_unused_2962_; 
v_unused_2962_ = lean_ctor_get(v_uri_2948_, 3);
lean_dec(v_unused_2962_);
v___x_2955_ = v_uri_2948_;
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_fragment_2953_);
lean_inc(v_path_2952_);
lean_inc(v_authority_2951_);
lean_inc(v_scheme_2950_);
lean_dec(v_uri_2948_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2957_; lean_object* v___x_2959_; 
v___x_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2957_, 0, v_query_2949_);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 3, v___x_2957_);
v___x_2959_ = v___x_2955_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_scheme_2950_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_authority_2951_);
lean_ctor_set(v_reuseFailAlloc_2960_, 2, v_path_2952_);
lean_ctor_set(v_reuseFailAlloc_2960_, 3, v___x_2957_);
lean_ctor_set(v_reuseFailAlloc_2960_, 4, v_fragment_2953_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object* v_uri_2963_, lean_object* v_fragment_2964_){
_start:
{
lean_object* v_scheme_2965_; lean_object* v_authority_2966_; lean_object* v_path_2967_; lean_object* v_query_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
v_scheme_2965_ = lean_ctor_get(v_uri_2963_, 0);
v_authority_2966_ = lean_ctor_get(v_uri_2963_, 1);
v_path_2967_ = lean_ctor_get(v_uri_2963_, 2);
v_query_2968_ = lean_ctor_get(v_uri_2963_, 3);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_uri_2963_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; 
v_unused_2976_ = lean_ctor_get(v_uri_2963_, 4);
lean_dec(v_unused_2976_);
v___x_2970_ = v_uri_2963_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_query_2968_);
lean_inc(v_path_2967_);
lean_inc(v_authority_2966_);
lean_inc(v_scheme_2965_);
lean_dec(v_uri_2963_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 4, v_fragment_2964_);
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_scheme_2965_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v_authority_2966_);
lean_ctor_set(v_reuseFailAlloc_2974_, 2, v_path_2967_);
lean_ctor_set(v_reuseFailAlloc_2974_, 3, v_query_2968_);
lean_ctor_set(v_reuseFailAlloc_2974_, 4, v_fragment_2964_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object* v_uri_2977_){
_start:
{
lean_object* v_scheme_2978_; lean_object* v_authority_2979_; lean_object* v_path_2980_; lean_object* v_query_2981_; lean_object* v_fragment_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2990_; 
v_scheme_2978_ = lean_ctor_get(v_uri_2977_, 0);
v_authority_2979_ = lean_ctor_get(v_uri_2977_, 1);
v_path_2980_ = lean_ctor_get(v_uri_2977_, 2);
v_query_2981_ = lean_ctor_get(v_uri_2977_, 3);
v_fragment_2982_ = lean_ctor_get(v_uri_2977_, 4);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_uri_2977_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2984_ = v_uri_2977_;
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_fragment_2982_);
lean_inc(v_query_2981_);
lean_inc(v_path_2980_);
lean_inc(v_authority_2979_);
lean_inc(v_scheme_2978_);
lean_dec(v_uri_2977_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2990_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2986_; lean_object* v___x_2988_; 
v___x_2986_ = l_Std_Http_URI_Path_normalize(v_path_2980_);
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 2, v___x_2986_);
v___x_2988_ = v___x_2984_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_scheme_2978_);
lean_ctor_set(v_reuseFailAlloc_2989_, 1, v_authority_2979_);
lean_ctor_set(v_reuseFailAlloc_2989_, 2, v___x_2986_);
lean_ctor_set(v_reuseFailAlloc_2989_, 3, v_query_2981_);
lean_ctor_set(v_reuseFailAlloc_2989_, 4, v_fragment_2982_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object* v_x_2991_){
_start:
{
lean_object* v_scheme_2992_; lean_object* v_host_2993_; uint16_t v_port_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; uint8_t v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v_ctr_3015_; lean_object* v_a_3016_; 
v_scheme_2992_ = lean_ctor_get(v_x_2991_, 0);
lean_inc_ref(v_scheme_2992_);
v_host_2993_ = lean_ctor_get(v_x_2991_, 1);
lean_inc_ref(v_host_2993_);
v_port_2994_ = lean_ctor_get_uint16(v_x_2991_, sizeof(void*)*2);
lean_dec_ref(v_x_2991_);
v___x_2995_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2996_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2997_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2998_ = l_String_quote(v_scheme_2992_);
v___x_2999_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2998_);
v___x_3000_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2997_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = 0;
v___x_3002_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3002_, 0, v___x_3000_);
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*1, v___x_3001_);
v___x_3003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_2996_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3003_);
lean_ctor_set(v___x_3005_, 1, v___x_3004_);
v___x_3006_ = lean_box(1);
v___x_3007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3005_);
lean_ctor_set(v___x_3007_, 1, v___x_3006_);
v___x_3008_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_3009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3007_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v___x_3010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
lean_ctor_set(v___x_3010_, 1, v___x_2995_);
v___x_3011_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3012_ = lean_unsigned_to_nat(0u);
v___x_3013_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_2993_))
{
case 0:
{
lean_object* v_name_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3055_; 
v_name_3046_ = lean_ctor_get(v_host_2993_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v_host_2993_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3048_ = v_host_2993_;
v_isShared_3049_ = v_isSharedCheck_3055_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_name_3046_);
lean_dec(v_host_2993_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3055_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3050_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_3051_ = l_String_quote(v_name_3046_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set_tag(v___x_3048_, 3);
lean_ctor_set(v___x_3048_, 0, v___x_3051_);
v___x_3053_ = v___x_3048_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
v_ctr_3015_ = v___x_3050_;
v_a_3016_ = v___x_3053_;
goto v___jp_3014_;
}
}
}
case 1:
{
lean_object* v_ipv4_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3065_; 
v_ipv4_3056_ = lean_ctor_get(v_host_2993_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_host_2993_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3058_ = v_host_2993_;
v_isShared_3059_ = v_isSharedCheck_3065_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_ipv4_3056_);
lean_dec(v_host_2993_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3065_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3063_; 
v___x_3060_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_3061_ = lean_uv_ntop_v4(v_ipv4_3056_);
lean_dec_ref(v_ipv4_3056_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set_tag(v___x_3058_, 3);
lean_ctor_set(v___x_3058_, 0, v___x_3061_);
v___x_3063_ = v___x_3058_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3061_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
v_ctr_3015_ = v___x_3060_;
v_a_3016_ = v___x_3063_;
goto v___jp_3014_;
}
}
}
default: 
{
lean_object* v_ipv6_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3075_; 
v_ipv6_3066_ = lean_ctor_get(v_host_2993_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_host_2993_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3068_ = v_host_2993_;
v_isShared_3069_ = v_isSharedCheck_3075_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_ipv6_3066_);
lean_dec(v_host_2993_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3075_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3070_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_3071_ = lean_uv_ntop_v6(v_ipv6_3066_);
lean_dec_ref(v_ipv6_3066_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 3);
lean_ctor_set(v___x_3068_, 0, v___x_3071_);
v___x_3073_ = v___x_3068_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
v_ctr_3015_ = v___x_3070_;
v_a_3016_ = v___x_3073_;
goto v___jp_3014_;
}
}
}
}
v___jp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3017_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_3018_ = lean_string_append(v___x_3017_, v_ctr_3015_);
v___x_3019_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
v___x_3020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
lean_ctor_set(v___x_3020_, 1, v___x_3006_);
v___x_3021_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
lean_ctor_set(v___x_3021_, 1, v_a_3016_);
v___x_3022_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3013_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v___x_3023_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
lean_ctor_set_uint8(v___x_3023_, sizeof(void*)*1, v___x_3001_);
v___x_3024_ = l_Repr_addAppParen(v___x_3023_, v___x_3012_);
v___x_3025_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3011_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
v___x_3026_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
lean_ctor_set_uint8(v___x_3026_, sizeof(void*)*1, v___x_3001_);
v___x_3027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3010_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
v___x_3028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
lean_ctor_set(v___x_3028_, 1, v___x_3004_);
v___x_3029_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
lean_ctor_set(v___x_3029_, 1, v___x_3006_);
v___x_3030_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_3031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3029_);
lean_ctor_set(v___x_3031_, 1, v___x_3030_);
v___x_3032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
lean_ctor_set(v___x_3032_, 1, v___x_2995_);
v___x_3033_ = lean_uint16_to_nat(v_port_2994_);
v___x_3034_ = l_Nat_reprFast(v___x_3033_);
v___x_3035_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
v___x_3036_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3011_);
lean_ctor_set(v___x_3036_, 1, v___x_3035_);
v___x_3037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
lean_ctor_set_uint8(v___x_3037_, sizeof(void*)*1, v___x_3001_);
v___x_3038_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3032_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3040_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3040_);
lean_ctor_set(v___x_3041_, 1, v___x_3038_);
v___x_3042_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3041_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3039_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
lean_ctor_set_uint8(v___x_3045_, sizeof(void*)*1, v___x_3001_);
return v___x_3045_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object* v_x_3076_, lean_object* v_prec_3077_){
_start:
{
lean_object* v___x_3078_; 
v___x_3078_ = l_Std_Http_URI_instReprOrigin_repr___redArg(v_x_3076_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object* v_x_3079_, lean_object* v_prec_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Std_Http_URI_instReprOrigin_repr(v_x_3079_, v_prec_3080_);
lean_dec(v_prec_3080_);
return v_res_3081_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object* v_x_3084_, lean_object* v_x_3085_){
_start:
{
lean_object* v_scheme_3086_; lean_object* v_host_3087_; uint16_t v_port_3088_; lean_object* v_scheme_3089_; lean_object* v_host_3090_; uint16_t v_port_3091_; uint8_t v___x_3092_; 
v_scheme_3086_ = lean_ctor_get(v_x_3084_, 0);
v_host_3087_ = lean_ctor_get(v_x_3084_, 1);
v_port_3088_ = lean_ctor_get_uint16(v_x_3084_, sizeof(void*)*2);
v_scheme_3089_ = lean_ctor_get(v_x_3085_, 0);
v_host_3090_ = lean_ctor_get(v_x_3085_, 1);
v_port_3091_ = lean_ctor_get_uint16(v_x_3085_, sizeof(void*)*2);
v___x_3092_ = lean_string_dec_eq(v_scheme_3086_, v_scheme_3089_);
if (v___x_3092_ == 0)
{
return v___x_3092_;
}
else
{
uint8_t v___x_3093_; 
v___x_3093_ = l_Std_Http_URI_instBEqHost_beq(v_host_3087_, v_host_3090_);
if (v___x_3093_ == 0)
{
return v___x_3093_;
}
else
{
uint8_t v___x_3094_; 
v___x_3094_ = lean_uint16_dec_eq(v_port_3088_, v_port_3091_);
return v___x_3094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object* v_x_3095_, lean_object* v_x_3096_){
_start:
{
uint8_t v_res_3097_; lean_object* v_r_3098_; 
v_res_3097_ = l_Std_Http_URI_instBEqOrigin_beq(v_x_3095_, v_x_3096_);
lean_dec_ref(v_x_3096_);
lean_dec_ref(v_x_3095_);
v_r_3098_ = lean_box(v_res_3097_);
return v_r_3098_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object* v_o_3101_){
_start:
{
lean_object* v_scheme_3102_; lean_object* v_host_3103_; uint16_t v_port_3104_; lean_object* v___y_3106_; uint16_t v_defaultPort_3112_; uint8_t v___x_3113_; 
v_scheme_3102_ = lean_ctor_get(v_o_3101_, 0);
lean_inc_ref(v_scheme_3102_);
v_host_3103_ = lean_ctor_get(v_o_3101_, 1);
lean_inc_ref(v_host_3103_);
v_port_3104_ = lean_ctor_get_uint16(v_o_3101_, sizeof(void*)*2);
lean_dec_ref(v_o_3101_);
v_defaultPort_3112_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_3102_);
lean_dec_ref(v_scheme_3102_);
v___x_3113_ = lean_uint16_dec_eq(v_port_3104_, v_defaultPort_3112_);
if (v___x_3113_ == 0)
{
switch(lean_obj_tag(v_host_3103_))
{
case 0:
{
lean_object* v_name_3114_; 
v_name_3114_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_name_3114_);
lean_dec_ref_known(v_host_3103_, 1);
v___y_3106_ = v_name_3114_;
goto v___jp_3105_;
}
case 1:
{
lean_object* v_ipv4_3115_; lean_object* v___x_3116_; 
v_ipv4_3115_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_ipv4_3115_);
lean_dec_ref_known(v_host_3103_, 1);
v___x_3116_ = lean_uv_ntop_v4(v_ipv4_3115_);
lean_dec_ref(v_ipv4_3115_);
v___y_3106_ = v___x_3116_;
goto v___jp_3105_;
}
default: 
{
lean_object* v_ipv6_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_ipv6_3117_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_ipv6_3117_);
lean_dec_ref_known(v_host_3103_, 1);
v___x_3118_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3119_ = lean_uv_ntop_v6(v_ipv6_3117_);
lean_dec_ref(v_ipv6_3117_);
v___x_3120_ = lean_string_append(v___x_3118_, v___x_3119_);
lean_dec_ref(v___x_3119_);
v___x_3121_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3122_ = lean_string_append(v___x_3120_, v___x_3121_);
v___y_3106_ = v___x_3122_;
goto v___jp_3105_;
}
}
}
else
{
switch(lean_obj_tag(v_host_3103_))
{
case 0:
{
lean_object* v_name_3123_; 
v_name_3123_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_name_3123_);
lean_dec_ref_known(v_host_3103_, 1);
return v_name_3123_;
}
case 1:
{
lean_object* v_ipv4_3124_; lean_object* v___x_3125_; 
v_ipv4_3124_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_ipv4_3124_);
lean_dec_ref_known(v_host_3103_, 1);
v___x_3125_ = lean_uv_ntop_v4(v_ipv4_3124_);
lean_dec_ref(v_ipv4_3124_);
return v___x_3125_;
}
default: 
{
lean_object* v_ipv6_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_ipv6_3126_ = lean_ctor_get(v_host_3103_, 0);
lean_inc_ref(v_ipv6_3126_);
lean_dec_ref_known(v_host_3103_, 1);
v___x_3127_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3128_ = lean_uv_ntop_v6(v_ipv6_3126_);
lean_dec_ref(v_ipv6_3126_);
v___x_3129_ = lean_string_append(v___x_3127_, v___x_3128_);
lean_dec_ref(v___x_3128_);
v___x_3130_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3131_ = lean_string_append(v___x_3129_, v___x_3130_);
return v___x_3131_;
}
}
}
v___jp_3105_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3107_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3108_ = lean_string_append(v___y_3106_, v___x_3107_);
v___x_3109_ = lean_uint16_to_nat(v_port_3104_);
v___x_3110_ = l_Nat_reprFast(v___x_3109_);
v___x_3111_ = lean_string_append(v___x_3108_, v___x_3110_);
lean_dec_ref(v___x_3110_);
return v___x_3111_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object* v_x_3138_){
_start:
{
lean_object* v_authority_3139_; lean_object* v_path_3140_; lean_object* v_query_3141_; lean_object* v_fragment_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; uint8_t v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v_authority_3139_ = lean_ctor_get(v_x_3138_, 0);
lean_inc(v_authority_3139_);
v_path_3140_ = lean_ctor_get(v_x_3138_, 1);
lean_inc_ref(v_path_3140_);
v_query_3141_ = lean_ctor_get(v_x_3138_, 2);
lean_inc(v_query_3141_);
v_fragment_3142_ = lean_ctor_get(v_x_3138_, 3);
lean_inc(v_fragment_3142_);
lean_dec_ref(v_x_3138_);
v___x_3143_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3144_ = ((lean_object*)(l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1));
v___x_3145_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_3146_ = lean_unsigned_to_nat(0u);
v___x_3147_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_3139_, v___x_3146_);
v___x_3148_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3145_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = 0;
v___x_3150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3150_, 0, v___x_3148_);
lean_ctor_set_uint8(v___x_3150_, sizeof(void*)*1, v___x_3149_);
v___x_3151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3144_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3151_);
lean_ctor_set(v___x_3153_, 1, v___x_3152_);
v___x_3154_ = lean_box(1);
v___x_3155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3153_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_3157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3155_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
v___x_3158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
lean_ctor_set(v___x_3158_, 1, v___x_3143_);
v___x_3159_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3160_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3140_);
v___x_3161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3159_);
lean_ctor_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*1, v___x_3149_);
v___x_3163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3158_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
lean_ctor_set(v___x_3164_, 1, v___x_3152_);
v___x_3165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3164_);
lean_ctor_set(v___x_3165_, 1, v___x_3154_);
v___x_3166_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_3167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
lean_ctor_set(v___x_3168_, 1, v___x_3143_);
v___x_3169_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_3170_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3141_, v___x_3146_);
v___x_3171_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3169_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
lean_ctor_set_uint8(v___x_3172_, sizeof(void*)*1, v___x_3149_);
v___x_3173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3168_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
v___x_3174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
lean_ctor_set(v___x_3174_, 1, v___x_3152_);
v___x_3175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3154_);
v___x_3176_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_3177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3175_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
v___x_3178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3143_);
v___x_3179_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_3180_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_3142_, v___x_3146_);
v___x_3181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3179_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3182_, 0, v___x_3181_);
lean_ctor_set_uint8(v___x_3182_, sizeof(void*)*1, v___x_3149_);
v___x_3183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3178_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3185_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
lean_ctor_set(v___x_3186_, 1, v___x_3183_);
v___x_3187_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3186_);
lean_ctor_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3184_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
lean_ctor_set_uint8(v___x_3190_, sizeof(void*)*1, v___x_3149_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object* v_x_3191_, lean_object* v_prec_3192_){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_x_3191_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object* v_x_3194_, lean_object* v_prec_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Std_Http_URI_instReprRelativeRef_repr(v_x_3194_, v_prec_3195_);
lean_dec(v_prec_3195_);
return v_res_3196_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object* v_x_3204_, lean_object* v_x_3205_){
_start:
{
lean_object* v_authority_3206_; lean_object* v_path_3207_; lean_object* v_query_3208_; lean_object* v_fragment_3209_; lean_object* v_authority_3210_; lean_object* v_path_3211_; lean_object* v_query_3212_; lean_object* v_fragment_3213_; uint8_t v___x_3214_; 
v_authority_3206_ = lean_ctor_get(v_x_3204_, 0);
v_path_3207_ = lean_ctor_get(v_x_3204_, 1);
v_query_3208_ = lean_ctor_get(v_x_3204_, 2);
v_fragment_3209_ = lean_ctor_get(v_x_3204_, 3);
v_authority_3210_ = lean_ctor_get(v_x_3205_, 0);
v_path_3211_ = lean_ctor_get(v_x_3205_, 1);
v_query_3212_ = lean_ctor_get(v_x_3205_, 2);
v_fragment_3213_ = lean_ctor_get(v_x_3205_, 3);
v___x_3214_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_3206_, v_authority_3210_);
if (v___x_3214_ == 0)
{
return v___x_3214_;
}
else
{
uint8_t v___x_3215_; 
v___x_3215_ = l_Std_Http_URI_instBEqPath_beq(v_path_3207_, v_path_3211_);
if (v___x_3215_ == 0)
{
return v___x_3215_;
}
else
{
uint8_t v___x_3216_; 
v___x_3216_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_3208_, v_query_3212_);
if (v___x_3216_ == 0)
{
return v___x_3216_;
}
else
{
uint8_t v___x_3217_; 
v___x_3217_ = l_Option_instBEq_beq___at___00Std_Http_instBEqURI_beq_spec__2(v_fragment_3209_, v_fragment_3213_);
return v___x_3217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object* v_x_3218_, lean_object* v_x_3219_){
_start:
{
uint8_t v_res_3220_; lean_object* v_r_3221_; 
v_res_3220_ = l_Std_Http_URI_instBEqRelativeRef_beq(v_x_3218_, v_x_3219_);
lean_dec_ref(v_x_3219_);
lean_dec_ref(v_x_3218_);
v_r_3221_ = lean_box(v_res_3220_);
return v_r_3221_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__1(lean_object* v___f_3224_, lean_object* v_ref_3225_){
_start:
{
lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v_authority_3234_; lean_object* v_path_3235_; lean_object* v_query_3236_; lean_object* v_fragment_3237_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3249_; 
v_authority_3234_ = lean_ctor_get(v_ref_3225_, 0);
lean_inc(v_authority_3234_);
v_path_3235_ = lean_ctor_get(v_ref_3225_, 1);
lean_inc_ref(v_path_3235_);
v_query_3236_ = lean_ctor_get(v_ref_3225_, 2);
lean_inc(v_query_3236_);
v_fragment_3237_ = lean_ctor_get(v_ref_3225_, 3);
lean_inc(v_fragment_3237_);
lean_dec_ref(v_ref_3225_);
if (lean_obj_tag(v_authority_3234_) == 0)
{
lean_object* v___x_3260_; 
v___x_3260_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3249_ = v___x_3260_;
goto v___jp_3248_;
}
else
{
lean_object* v_val_3261_; lean_object* v_userInfo_3262_; lean_object* v_host_3263_; lean_object* v_port_3264_; lean_object* v___x_3265_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3284_; 
v_val_3261_ = lean_ctor_get(v_authority_3234_, 0);
lean_inc(v_val_3261_);
lean_dec_ref_known(v_authority_3234_, 1);
v_userInfo_3262_ = lean_ctor_get(v_val_3261_, 0);
lean_inc(v_userInfo_3262_);
v_host_3263_ = lean_ctor_get(v_val_3261_, 1);
lean_inc_ref(v_host_3263_);
v_port_3264_ = lean_ctor_get(v_val_3261_, 2);
lean_inc(v_port_3264_);
lean_dec(v_val_3261_);
v___x_3265_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3262_) == 0)
{
lean_object* v___x_3294_; 
v___x_3294_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3284_ = v___x_3294_;
goto v___jp_3283_;
}
else
{
lean_object* v_val_3295_; lean_object* v_password_3296_; 
v_val_3295_ = lean_ctor_get(v_userInfo_3262_, 0);
lean_inc(v_val_3295_);
lean_dec_ref_known(v_userInfo_3262_, 1);
v_password_3296_ = lean_ctor_get(v_val_3295_, 1);
if (lean_obj_tag(v_password_3296_) == 0)
{
lean_object* v_username_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_username_3297_ = lean_ctor_get(v_val_3295_, 0);
lean_inc_ref(v_username_3297_);
lean_dec(v_val_3295_);
v___x_3298_ = lean_string_from_utf8_unchecked(v_username_3297_);
v___x_3299_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3300_ = lean_string_append(v___x_3298_, v___x_3299_);
v___y_3284_ = v___x_3300_;
goto v___jp_3283_;
}
else
{
lean_object* v_username_3301_; lean_object* v_val_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
lean_inc_ref(v_password_3296_);
v_username_3301_ = lean_ctor_get(v_val_3295_, 0);
lean_inc_ref(v_username_3301_);
lean_dec(v_val_3295_);
v_val_3302_ = lean_ctor_get(v_password_3296_, 0);
lean_inc(v_val_3302_);
lean_dec_ref_known(v_password_3296_, 1);
v___x_3303_ = lean_string_from_utf8_unchecked(v_username_3301_);
v___x_3304_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3305_ = lean_string_append(v___x_3303_, v___x_3304_);
v___x_3306_ = lean_string_from_utf8_unchecked(v_val_3302_);
v___x_3307_ = lean_string_append(v___x_3305_, v___x_3306_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3309_ = lean_string_append(v___x_3307_, v___x_3308_);
v___y_3284_ = v___x_3309_;
goto v___jp_3283_;
}
}
v___jp_3266_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = lean_string_append(v___y_3267_, v___y_3268_);
lean_dec_ref(v___y_3268_);
v___x_3271_ = lean_string_append(v___x_3270_, v___y_3269_);
lean_dec_ref(v___y_3269_);
v___x_3272_ = lean_string_append(v___x_3265_, v___x_3271_);
lean_dec_ref(v___x_3271_);
v___y_3249_ = v___x_3272_;
goto v___jp_3248_;
}
v___jp_3273_:
{
switch(lean_obj_tag(v_port_3264_))
{
case 0:
{
lean_object* v___x_3276_; 
v___x_3276_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3267_ = v___y_3274_;
v___y_3268_ = v___y_3275_;
v___y_3269_ = v___x_3276_;
goto v___jp_3266_;
}
case 1:
{
lean_object* v___x_3277_; 
v___x_3277_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3267_ = v___y_3274_;
v___y_3268_ = v___y_3275_;
v___y_3269_ = v___x_3277_;
goto v___jp_3266_;
}
default: 
{
uint16_t v_port_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_port_3278_ = lean_ctor_get_uint16(v_port_3264_, 0);
lean_dec_ref_known(v_port_3264_, 0);
v___x_3279_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3280_ = lean_uint16_to_nat(v_port_3278_);
v___x_3281_ = l_Nat_reprFast(v___x_3280_);
v___x_3282_ = lean_string_append(v___x_3279_, v___x_3281_);
lean_dec_ref(v___x_3281_);
v___y_3267_ = v___y_3274_;
v___y_3268_ = v___y_3275_;
v___y_3269_ = v___x_3282_;
goto v___jp_3266_;
}
}
}
v___jp_3283_:
{
switch(lean_obj_tag(v_host_3263_))
{
case 0:
{
lean_object* v_name_3285_; 
v_name_3285_ = lean_ctor_get(v_host_3263_, 0);
lean_inc_ref(v_name_3285_);
lean_dec_ref_known(v_host_3263_, 1);
v___y_3274_ = v___y_3284_;
v___y_3275_ = v_name_3285_;
goto v___jp_3273_;
}
case 1:
{
lean_object* v_ipv4_3286_; lean_object* v___x_3287_; 
v_ipv4_3286_ = lean_ctor_get(v_host_3263_, 0);
lean_inc_ref(v_ipv4_3286_);
lean_dec_ref_known(v_host_3263_, 1);
v___x_3287_ = lean_uv_ntop_v4(v_ipv4_3286_);
lean_dec_ref(v_ipv4_3286_);
v___y_3274_ = v___y_3284_;
v___y_3275_ = v___x_3287_;
goto v___jp_3273_;
}
default: 
{
lean_object* v_ipv6_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v_ipv6_3288_ = lean_ctor_get(v_host_3263_, 0);
lean_inc_ref(v_ipv6_3288_);
lean_dec_ref_known(v_host_3263_, 1);
v___x_3289_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3290_ = lean_uv_ntop_v6(v_ipv6_3288_);
lean_dec_ref(v_ipv6_3288_);
v___x_3291_ = lean_string_append(v___x_3289_, v___x_3290_);
lean_dec_ref(v___x_3290_);
v___x_3292_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3293_ = lean_string_append(v___x_3291_, v___x_3292_);
v___y_3274_ = v___y_3284_;
v___y_3275_ = v___x_3293_;
goto v___jp_3273_;
}
}
}
}
v___jp_3226_:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = lean_string_append(v___y_3227_, v___y_3229_);
lean_dec_ref(v___y_3229_);
v___x_3232_ = lean_string_append(v___x_3231_, v___y_3228_);
lean_dec_ref(v___y_3228_);
v___x_3233_ = lean_string_append(v___x_3232_, v___y_3230_);
lean_dec_ref(v___y_3230_);
return v___x_3233_;
}
v___jp_3238_:
{
lean_object* v_queryPart_3241_; 
v_queryPart_3241_ = l_Std_Http_URI_Query_formatOption(v_query_3236_);
if (lean_obj_tag(v_fragment_3237_) == 0)
{
lean_object* v___x_3242_; 
v___x_3242_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3227_ = v___y_3239_;
v___y_3228_ = v_queryPart_3241_;
v___y_3229_ = v___y_3240_;
v___y_3230_ = v___x_3242_;
goto v___jp_3226_;
}
else
{
lean_object* v_val_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v_val_3243_ = lean_ctor_get(v_fragment_3237_, 0);
lean_inc(v_val_3243_);
lean_dec_ref_known(v_fragment_3237_, 1);
v___x_3244_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3245_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3243_);
lean_dec(v_val_3243_);
v___x_3246_ = lean_string_from_utf8_unchecked(v___x_3245_);
v___x_3247_ = lean_string_append(v___x_3244_, v___x_3246_);
lean_dec_ref(v___x_3246_);
v___y_3227_ = v___y_3239_;
v___y_3228_ = v_queryPart_3241_;
v___y_3229_ = v___y_3240_;
v___y_3230_ = v___x_3247_;
goto v___jp_3226_;
}
}
v___jp_3248_:
{
lean_object* v_segments_3250_; uint8_t v_absolute_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; size_t v_sz_3254_; size_t v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v_result_3258_; 
v_segments_3250_ = lean_ctor_get(v_path_3235_, 0);
lean_inc_ref(v_segments_3250_);
v_absolute_3251_ = lean_ctor_get_uint8(v_path_3235_, sizeof(void*)*1);
lean_dec_ref(v_path_3235_);
v___x_3252_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3253_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3254_ = lean_array_size(v_segments_3250_);
v___x_3255_ = ((size_t)0ULL);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3253_, v___f_3224_, v_sz_3254_, v___x_3255_, v_segments_3250_);
v___x_3257_ = lean_array_to_list(v___x_3256_);
v_result_3258_ = l_String_intercalate(v___x_3252_, v___x_3257_);
if (v_absolute_3251_ == 0)
{
v___y_3239_ = v___y_3249_;
v___y_3240_ = v_result_3258_;
goto v___jp_3238_;
}
else
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_string_append(v___x_3252_, v_result_3258_);
lean_dec_ref(v_result_3258_);
v___y_3239_ = v___y_3249_;
v___y_3240_ = v___x_3259_;
goto v___jp_3238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx(lean_object* v_x_3313_){
_start:
{
if (lean_obj_tag(v_x_3313_) == 0)
{
lean_object* v___x_3314_; 
v___x_3314_ = lean_unsigned_to_nat(0u);
return v___x_3314_;
}
else
{
lean_object* v___x_3315_; 
v___x_3315_ = lean_unsigned_to_nat(1u);
return v___x_3315_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___boxed(lean_object* v_x_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Std_Http_URIReference_ctorIdx(v_x_3316_);
lean_dec_ref(v_x_3316_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object* v_t_3318_, lean_object* v_k_3319_){
_start:
{
lean_object* v_uri_3320_; lean_object* v___x_3321_; 
v_uri_3320_ = lean_ctor_get(v_t_3318_, 0);
lean_inc_ref(v_uri_3320_);
lean_dec_ref(v_t_3318_);
v___x_3321_ = lean_apply_1(v_k_3319_, v_uri_3320_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object* v_motive_3322_, lean_object* v_ctorIdx_3323_, lean_object* v_t_3324_, lean_object* v_h_3325_, lean_object* v_k_3326_){
_start:
{
lean_object* v___x_3327_; 
v___x_3327_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3324_, v_k_3326_);
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object* v_motive_3328_, lean_object* v_ctorIdx_3329_, lean_object* v_t_3330_, lean_object* v_h_3331_, lean_object* v_k_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Std_Http_URIReference_ctorElim(v_motive_3328_, v_ctorIdx_3329_, v_t_3330_, v_h_3331_, v_k_3332_);
lean_dec(v_ctorIdx_3329_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object* v_t_3334_, lean_object* v_absolute_3335_){
_start:
{
lean_object* v___x_3336_; 
v___x_3336_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3334_, v_absolute_3335_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object* v_motive_3337_, lean_object* v_t_3338_, lean_object* v_h_3339_, lean_object* v_absolute_3340_){
_start:
{
lean_object* v___x_3341_; 
v___x_3341_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3338_, v_absolute_3340_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object* v_t_3342_, lean_object* v_relative_3343_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3342_, v_relative_3343_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object* v_motive_3345_, lean_object* v_t_3346_, lean_object* v_h_3347_, lean_object* v_relative_3348_){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3346_, v_relative_3348_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object* v_x_3362_, lean_object* v_prec_3363_){
_start:
{
if (lean_obj_tag(v_x_3362_) == 0)
{
lean_object* v_uri_3364_; lean_object* v___y_3366_; lean_object* v___x_3374_; uint8_t v___x_3375_; 
v_uri_3364_ = lean_ctor_get(v_x_3362_, 0);
lean_inc_ref(v_uri_3364_);
lean_dec_ref_known(v_x_3362_, 1);
v___x_3374_ = lean_unsigned_to_nat(1024u);
v___x_3375_ = lean_nat_dec_le(v___x_3374_, v_prec_3363_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; 
v___x_3376_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3366_ = v___x_3376_;
goto v___jp_3365_;
}
else
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3366_ = v___x_3377_;
goto v___jp_3365_;
}
v___jp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3367_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__2));
v___x_3368_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3364_);
v___x_3369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3367_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
lean_inc(v___y_3366_);
v___x_3370_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___y_3366_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
v___x_3371_ = 0;
v___x_3372_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3372_, 0, v___x_3370_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*1, v___x_3371_);
v___x_3373_ = l_Repr_addAppParen(v___x_3372_, v_prec_3363_);
return v___x_3373_;
}
}
else
{
lean_object* v_ref_3378_; lean_object* v___y_3380_; lean_object* v___x_3388_; uint8_t v___x_3389_; 
v_ref_3378_ = lean_ctor_get(v_x_3362_, 0);
lean_inc_ref(v_ref_3378_);
lean_dec_ref_known(v_x_3362_, 1);
v___x_3388_ = lean_unsigned_to_nat(1024u);
v___x_3389_ = lean_nat_dec_le(v___x_3388_, v_prec_3363_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3380_ = v___x_3390_;
goto v___jp_3379_;
}
else
{
lean_object* v___x_3391_; 
v___x_3391_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3380_ = v___x_3391_;
goto v___jp_3379_;
}
v___jp_3379_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; uint8_t v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3381_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__5));
v___x_3382_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_ref_3378_);
v___x_3383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3381_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
lean_inc(v___y_3380_);
v___x_3384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___y_3380_);
lean_ctor_set(v___x_3384_, 1, v___x_3383_);
v___x_3385_ = 0;
v___x_3386_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3386_, 0, v___x_3384_);
lean_ctor_set_uint8(v___x_3386_, sizeof(void*)*1, v___x_3385_);
v___x_3387_ = l_Repr_addAppParen(v___x_3386_, v_prec_3363_);
return v___x_3387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object* v_x_3392_, lean_object* v_prec_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Std_Http_instReprURIReference_repr(v_x_3392_, v_prec_3393_);
lean_dec(v_prec_3393_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__2(lean_object* v___f_3401_, lean_object* v___f_3402_, lean_object* v_x_3403_){
_start:
{
lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; 
if (lean_obj_tag(v_x_3403_) == 0)
{
lean_object* v_uri_3412_; lean_object* v_scheme_3413_; lean_object* v_authority_3414_; lean_object* v_path_3415_; lean_object* v_query_3416_; lean_object* v_fragment_3417_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3440_; 
lean_dec_ref(v___f_3402_);
v_uri_3412_ = lean_ctor_get(v_x_3403_, 0);
lean_inc_ref(v_uri_3412_);
lean_dec_ref_known(v_x_3403_, 1);
v_scheme_3413_ = lean_ctor_get(v_uri_3412_, 0);
lean_inc_ref(v_scheme_3413_);
v_authority_3414_ = lean_ctor_get(v_uri_3412_, 1);
lean_inc(v_authority_3414_);
v_path_3415_ = lean_ctor_get(v_uri_3412_, 2);
lean_inc_ref(v_path_3415_);
v_query_3416_ = lean_ctor_get(v_uri_3412_, 3);
lean_inc(v_query_3416_);
v_fragment_3417_ = lean_ctor_get(v_uri_3412_, 4);
lean_inc(v_fragment_3417_);
lean_dec_ref(v_uri_3412_);
if (lean_obj_tag(v_authority_3414_) == 0)
{
lean_object* v___x_3451_; 
v___x_3451_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3440_ = v___x_3451_;
goto v___jp_3439_;
}
else
{
lean_object* v_val_3452_; lean_object* v_userInfo_3453_; lean_object* v_host_3454_; lean_object* v_port_3455_; lean_object* v___x_3456_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v___y_3460_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3475_; 
v_val_3452_ = lean_ctor_get(v_authority_3414_, 0);
lean_inc(v_val_3452_);
lean_dec_ref_known(v_authority_3414_, 1);
v_userInfo_3453_ = lean_ctor_get(v_val_3452_, 0);
lean_inc(v_userInfo_3453_);
v_host_3454_ = lean_ctor_get(v_val_3452_, 1);
lean_inc_ref(v_host_3454_);
v_port_3455_ = lean_ctor_get(v_val_3452_, 2);
lean_inc(v_port_3455_);
lean_dec(v_val_3452_);
v___x_3456_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3453_) == 0)
{
lean_object* v___x_3485_; 
v___x_3485_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3475_ = v___x_3485_;
goto v___jp_3474_;
}
else
{
lean_object* v_val_3486_; lean_object* v_password_3487_; 
v_val_3486_ = lean_ctor_get(v_userInfo_3453_, 0);
lean_inc(v_val_3486_);
lean_dec_ref_known(v_userInfo_3453_, 1);
v_password_3487_ = lean_ctor_get(v_val_3486_, 1);
if (lean_obj_tag(v_password_3487_) == 0)
{
lean_object* v_username_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_username_3488_ = lean_ctor_get(v_val_3486_, 0);
lean_inc_ref(v_username_3488_);
lean_dec(v_val_3486_);
v___x_3489_ = lean_string_from_utf8_unchecked(v_username_3488_);
v___x_3490_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3491_ = lean_string_append(v___x_3489_, v___x_3490_);
v___y_3475_ = v___x_3491_;
goto v___jp_3474_;
}
else
{
lean_object* v_username_3492_; lean_object* v_val_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; 
lean_inc_ref(v_password_3487_);
v_username_3492_ = lean_ctor_get(v_val_3486_, 0);
lean_inc_ref(v_username_3492_);
lean_dec(v_val_3486_);
v_val_3493_ = lean_ctor_get(v_password_3487_, 0);
lean_inc(v_val_3493_);
lean_dec_ref_known(v_password_3487_, 1);
v___x_3494_ = lean_string_from_utf8_unchecked(v_username_3492_);
v___x_3495_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
v___x_3497_ = lean_string_from_utf8_unchecked(v_val_3493_);
v___x_3498_ = lean_string_append(v___x_3496_, v___x_3497_);
lean_dec_ref(v___x_3497_);
v___x_3499_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3500_ = lean_string_append(v___x_3498_, v___x_3499_);
v___y_3475_ = v___x_3500_;
goto v___jp_3474_;
}
}
v___jp_3457_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3461_ = lean_string_append(v___y_3459_, v___y_3458_);
lean_dec_ref(v___y_3458_);
v___x_3462_ = lean_string_append(v___x_3461_, v___y_3460_);
lean_dec_ref(v___y_3460_);
v___x_3463_ = lean_string_append(v___x_3456_, v___x_3462_);
lean_dec_ref(v___x_3462_);
v___y_3440_ = v___x_3463_;
goto v___jp_3439_;
}
v___jp_3464_:
{
switch(lean_obj_tag(v_port_3455_))
{
case 0:
{
lean_object* v___x_3467_; 
v___x_3467_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3458_ = v___y_3466_;
v___y_3459_ = v___y_3465_;
v___y_3460_ = v___x_3467_;
goto v___jp_3457_;
}
case 1:
{
lean_object* v___x_3468_; 
v___x_3468_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3458_ = v___y_3466_;
v___y_3459_ = v___y_3465_;
v___y_3460_ = v___x_3468_;
goto v___jp_3457_;
}
default: 
{
uint16_t v_port_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
v_port_3469_ = lean_ctor_get_uint16(v_port_3455_, 0);
lean_dec_ref_known(v_port_3455_, 0);
v___x_3470_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3471_ = lean_uint16_to_nat(v_port_3469_);
v___x_3472_ = l_Nat_reprFast(v___x_3471_);
v___x_3473_ = lean_string_append(v___x_3470_, v___x_3472_);
lean_dec_ref(v___x_3472_);
v___y_3458_ = v___y_3466_;
v___y_3459_ = v___y_3465_;
v___y_3460_ = v___x_3473_;
goto v___jp_3457_;
}
}
}
v___jp_3474_:
{
switch(lean_obj_tag(v_host_3454_))
{
case 0:
{
lean_object* v_name_3476_; 
v_name_3476_ = lean_ctor_get(v_host_3454_, 0);
lean_inc_ref(v_name_3476_);
lean_dec_ref_known(v_host_3454_, 1);
v___y_3465_ = v___y_3475_;
v___y_3466_ = v_name_3476_;
goto v___jp_3464_;
}
case 1:
{
lean_object* v_ipv4_3477_; lean_object* v___x_3478_; 
v_ipv4_3477_ = lean_ctor_get(v_host_3454_, 0);
lean_inc_ref(v_ipv4_3477_);
lean_dec_ref_known(v_host_3454_, 1);
v___x_3478_ = lean_uv_ntop_v4(v_ipv4_3477_);
lean_dec_ref(v_ipv4_3477_);
v___y_3465_ = v___y_3475_;
v___y_3466_ = v___x_3478_;
goto v___jp_3464_;
}
default: 
{
lean_object* v_ipv6_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v_ipv6_3479_ = lean_ctor_get(v_host_3454_, 0);
lean_inc_ref(v_ipv6_3479_);
lean_dec_ref_known(v_host_3454_, 1);
v___x_3480_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3481_ = lean_uv_ntop_v6(v_ipv6_3479_);
lean_dec_ref(v_ipv6_3479_);
v___x_3482_ = lean_string_append(v___x_3480_, v___x_3481_);
lean_dec_ref(v___x_3481_);
v___x_3483_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3484_ = lean_string_append(v___x_3482_, v___x_3483_);
v___y_3465_ = v___y_3475_;
v___y_3466_ = v___x_3484_;
goto v___jp_3464_;
}
}
}
}
v___jp_3418_:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3423_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3424_ = lean_string_append(v_scheme_3413_, v___x_3423_);
v___x_3425_ = lean_string_append(v___x_3424_, v___y_3421_);
lean_dec_ref(v___y_3421_);
v___x_3426_ = lean_string_append(v___x_3425_, v___y_3419_);
lean_dec_ref(v___y_3419_);
v___x_3427_ = lean_string_append(v___x_3426_, v___y_3420_);
lean_dec_ref(v___y_3420_);
v___x_3428_ = lean_string_append(v___x_3427_, v___y_3422_);
lean_dec_ref(v___y_3422_);
return v___x_3428_;
}
v___jp_3429_:
{
lean_object* v_queryPart_3432_; 
v_queryPart_3432_ = l_Std_Http_URI_Query_formatOption(v_query_3416_);
if (lean_obj_tag(v_fragment_3417_) == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3419_ = v___y_3431_;
v___y_3420_ = v_queryPart_3432_;
v___y_3421_ = v___y_3430_;
v___y_3422_ = v___x_3433_;
goto v___jp_3418_;
}
else
{
lean_object* v_val_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v_val_3434_ = lean_ctor_get(v_fragment_3417_, 0);
lean_inc(v_val_3434_);
lean_dec_ref_known(v_fragment_3417_, 1);
v___x_3435_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3436_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3434_);
lean_dec(v_val_3434_);
v___x_3437_ = lean_string_from_utf8_unchecked(v___x_3436_);
v___x_3438_ = lean_string_append(v___x_3435_, v___x_3437_);
lean_dec_ref(v___x_3437_);
v___y_3419_ = v___y_3431_;
v___y_3420_ = v_queryPart_3432_;
v___y_3421_ = v___y_3430_;
v___y_3422_ = v___x_3438_;
goto v___jp_3418_;
}
}
v___jp_3439_:
{
lean_object* v_segments_3441_; uint8_t v_absolute_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; size_t v_sz_3445_; size_t v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v_result_3449_; 
v_segments_3441_ = lean_ctor_get(v_path_3415_, 0);
lean_inc_ref(v_segments_3441_);
v_absolute_3442_ = lean_ctor_get_uint8(v_path_3415_, sizeof(void*)*1);
lean_dec_ref(v_path_3415_);
v___x_3443_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3444_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3445_ = lean_array_size(v_segments_3441_);
v___x_3446_ = ((size_t)0ULL);
v___x_3447_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3444_, v___f_3401_, v_sz_3445_, v___x_3446_, v_segments_3441_);
v___x_3448_ = lean_array_to_list(v___x_3447_);
v_result_3449_ = l_String_intercalate(v___x_3443_, v___x_3448_);
if (v_absolute_3442_ == 0)
{
v___y_3430_ = v___y_3440_;
v___y_3431_ = v_result_3449_;
goto v___jp_3429_;
}
else
{
lean_object* v___x_3450_; 
v___x_3450_ = lean_string_append(v___x_3443_, v_result_3449_);
lean_dec_ref(v_result_3449_);
v___y_3430_ = v___y_3440_;
v___y_3431_ = v___x_3450_;
goto v___jp_3429_;
}
}
}
else
{
lean_object* v_ref_3501_; lean_object* v_authority_3502_; lean_object* v_path_3503_; lean_object* v_query_3504_; lean_object* v_fragment_3505_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3517_; 
lean_dec_ref(v___f_3401_);
v_ref_3501_ = lean_ctor_get(v_x_3403_, 0);
lean_inc_ref(v_ref_3501_);
lean_dec_ref_known(v_x_3403_, 1);
v_authority_3502_ = lean_ctor_get(v_ref_3501_, 0);
lean_inc(v_authority_3502_);
v_path_3503_ = lean_ctor_get(v_ref_3501_, 1);
lean_inc_ref(v_path_3503_);
v_query_3504_ = lean_ctor_get(v_ref_3501_, 2);
lean_inc(v_query_3504_);
v_fragment_3505_ = lean_ctor_get(v_ref_3501_, 3);
lean_inc(v_fragment_3505_);
lean_dec_ref(v_ref_3501_);
if (lean_obj_tag(v_authority_3502_) == 0)
{
lean_object* v___x_3528_; 
v___x_3528_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3517_ = v___x_3528_;
goto v___jp_3516_;
}
else
{
lean_object* v_val_3529_; lean_object* v_userInfo_3530_; lean_object* v_host_3531_; lean_object* v_port_3532_; lean_object* v___x_3533_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3552_; 
v_val_3529_ = lean_ctor_get(v_authority_3502_, 0);
lean_inc(v_val_3529_);
lean_dec_ref_known(v_authority_3502_, 1);
v_userInfo_3530_ = lean_ctor_get(v_val_3529_, 0);
lean_inc(v_userInfo_3530_);
v_host_3531_ = lean_ctor_get(v_val_3529_, 1);
lean_inc_ref(v_host_3531_);
v_port_3532_ = lean_ctor_get(v_val_3529_, 2);
lean_inc(v_port_3532_);
lean_dec(v_val_3529_);
v___x_3533_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3530_) == 0)
{
lean_object* v___x_3562_; 
v___x_3562_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3552_ = v___x_3562_;
goto v___jp_3551_;
}
else
{
lean_object* v_val_3563_; lean_object* v_password_3564_; 
v_val_3563_ = lean_ctor_get(v_userInfo_3530_, 0);
lean_inc(v_val_3563_);
lean_dec_ref_known(v_userInfo_3530_, 1);
v_password_3564_ = lean_ctor_get(v_val_3563_, 1);
if (lean_obj_tag(v_password_3564_) == 0)
{
lean_object* v_username_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v_username_3565_ = lean_ctor_get(v_val_3563_, 0);
lean_inc_ref(v_username_3565_);
lean_dec(v_val_3563_);
v___x_3566_ = lean_string_from_utf8_unchecked(v_username_3565_);
v___x_3567_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3568_ = lean_string_append(v___x_3566_, v___x_3567_);
v___y_3552_ = v___x_3568_;
goto v___jp_3551_;
}
else
{
lean_object* v_username_3569_; lean_object* v_val_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
lean_inc_ref(v_password_3564_);
v_username_3569_ = lean_ctor_get(v_val_3563_, 0);
lean_inc_ref(v_username_3569_);
lean_dec(v_val_3563_);
v_val_3570_ = lean_ctor_get(v_password_3564_, 0);
lean_inc(v_val_3570_);
lean_dec_ref_known(v_password_3564_, 1);
v___x_3571_ = lean_string_from_utf8_unchecked(v_username_3569_);
v___x_3572_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3573_ = lean_string_append(v___x_3571_, v___x_3572_);
v___x_3574_ = lean_string_from_utf8_unchecked(v_val_3570_);
v___x_3575_ = lean_string_append(v___x_3573_, v___x_3574_);
lean_dec_ref(v___x_3574_);
v___x_3576_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3577_ = lean_string_append(v___x_3575_, v___x_3576_);
v___y_3552_ = v___x_3577_;
goto v___jp_3551_;
}
}
v___jp_3534_:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = lean_string_append(v___y_3536_, v___y_3535_);
lean_dec_ref(v___y_3535_);
v___x_3539_ = lean_string_append(v___x_3538_, v___y_3537_);
lean_dec_ref(v___y_3537_);
v___x_3540_ = lean_string_append(v___x_3533_, v___x_3539_);
lean_dec_ref(v___x_3539_);
v___y_3517_ = v___x_3540_;
goto v___jp_3516_;
}
v___jp_3541_:
{
switch(lean_obj_tag(v_port_3532_))
{
case 0:
{
lean_object* v___x_3544_; 
v___x_3544_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3535_ = v___y_3543_;
v___y_3536_ = v___y_3542_;
v___y_3537_ = v___x_3544_;
goto v___jp_3534_;
}
case 1:
{
lean_object* v___x_3545_; 
v___x_3545_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3535_ = v___y_3543_;
v___y_3536_ = v___y_3542_;
v___y_3537_ = v___x_3545_;
goto v___jp_3534_;
}
default: 
{
uint16_t v_port_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v_port_3546_ = lean_ctor_get_uint16(v_port_3532_, 0);
lean_dec_ref_known(v_port_3532_, 0);
v___x_3547_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3548_ = lean_uint16_to_nat(v_port_3546_);
v___x_3549_ = l_Nat_reprFast(v___x_3548_);
v___x_3550_ = lean_string_append(v___x_3547_, v___x_3549_);
lean_dec_ref(v___x_3549_);
v___y_3535_ = v___y_3543_;
v___y_3536_ = v___y_3542_;
v___y_3537_ = v___x_3550_;
goto v___jp_3534_;
}
}
}
v___jp_3551_:
{
switch(lean_obj_tag(v_host_3531_))
{
case 0:
{
lean_object* v_name_3553_; 
v_name_3553_ = lean_ctor_get(v_host_3531_, 0);
lean_inc_ref(v_name_3553_);
lean_dec_ref_known(v_host_3531_, 1);
v___y_3542_ = v___y_3552_;
v___y_3543_ = v_name_3553_;
goto v___jp_3541_;
}
case 1:
{
lean_object* v_ipv4_3554_; lean_object* v___x_3555_; 
v_ipv4_3554_ = lean_ctor_get(v_host_3531_, 0);
lean_inc_ref(v_ipv4_3554_);
lean_dec_ref_known(v_host_3531_, 1);
v___x_3555_ = lean_uv_ntop_v4(v_ipv4_3554_);
lean_dec_ref(v_ipv4_3554_);
v___y_3542_ = v___y_3552_;
v___y_3543_ = v___x_3555_;
goto v___jp_3541_;
}
default: 
{
lean_object* v_ipv6_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v_ipv6_3556_ = lean_ctor_get(v_host_3531_, 0);
lean_inc_ref(v_ipv6_3556_);
lean_dec_ref_known(v_host_3531_, 1);
v___x_3557_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3558_ = lean_uv_ntop_v6(v_ipv6_3556_);
lean_dec_ref(v_ipv6_3556_);
v___x_3559_ = lean_string_append(v___x_3557_, v___x_3558_);
lean_dec_ref(v___x_3558_);
v___x_3560_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3561_ = lean_string_append(v___x_3559_, v___x_3560_);
v___y_3542_ = v___y_3552_;
v___y_3543_ = v___x_3561_;
goto v___jp_3541_;
}
}
}
}
v___jp_3506_:
{
lean_object* v_queryPart_3509_; 
v_queryPart_3509_ = l_Std_Http_URI_Query_formatOption(v_query_3504_);
if (lean_obj_tag(v_fragment_3505_) == 0)
{
lean_object* v___x_3510_; 
v___x_3510_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3405_ = v___y_3508_;
v___y_3406_ = v___y_3507_;
v___y_3407_ = v_queryPart_3509_;
v___y_3408_ = v___x_3510_;
goto v___jp_3404_;
}
else
{
lean_object* v_val_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v_val_3511_ = lean_ctor_get(v_fragment_3505_, 0);
lean_inc(v_val_3511_);
lean_dec_ref_known(v_fragment_3505_, 1);
v___x_3512_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3513_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3511_);
lean_dec(v_val_3511_);
v___x_3514_ = lean_string_from_utf8_unchecked(v___x_3513_);
v___x_3515_ = lean_string_append(v___x_3512_, v___x_3514_);
lean_dec_ref(v___x_3514_);
v___y_3405_ = v___y_3508_;
v___y_3406_ = v___y_3507_;
v___y_3407_ = v_queryPart_3509_;
v___y_3408_ = v___x_3515_;
goto v___jp_3404_;
}
}
v___jp_3516_:
{
lean_object* v_segments_3518_; uint8_t v_absolute_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; size_t v_sz_3522_; size_t v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v_result_3526_; 
v_segments_3518_ = lean_ctor_get(v_path_3503_, 0);
lean_inc_ref(v_segments_3518_);
v_absolute_3519_ = lean_ctor_get_uint8(v_path_3503_, sizeof(void*)*1);
lean_dec_ref(v_path_3503_);
v___x_3520_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3521_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3522_ = lean_array_size(v_segments_3518_);
v___x_3523_ = ((size_t)0ULL);
v___x_3524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3521_, v___f_3402_, v_sz_3522_, v___x_3523_, v_segments_3518_);
v___x_3525_ = lean_array_to_list(v___x_3524_);
v_result_3526_ = l_String_intercalate(v___x_3520_, v___x_3525_);
if (v_absolute_3519_ == 0)
{
v___y_3507_ = v___y_3517_;
v___y_3508_ = v_result_3526_;
goto v___jp_3506_;
}
else
{
lean_object* v___x_3527_; 
v___x_3527_ = lean_string_append(v___x_3520_, v_result_3526_);
lean_dec_ref(v_result_3526_);
v___y_3507_ = v___y_3517_;
v___y_3508_ = v___x_3527_;
goto v___jp_3506_;
}
}
}
v___jp_3404_:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = lean_string_append(v___y_3406_, v___y_3405_);
lean_dec_ref(v___y_3405_);
v___x_3410_ = lean_string_append(v___x_3409_, v___y_3407_);
lean_dec_ref(v___y_3407_);
v___x_3411_ = lean_string_append(v___x_3410_, v___y_3408_);
lean_dec_ref(v___y_3408_);
return v___x_3411_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx(lean_object* v_x_3581_){
_start:
{
switch(lean_obj_tag(v_x_3581_))
{
case 0:
{
lean_object* v___x_3582_; 
v___x_3582_ = lean_unsigned_to_nat(0u);
return v___x_3582_;
}
case 1:
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_unsigned_to_nat(1u);
return v___x_3583_;
}
case 2:
{
lean_object* v___x_3584_; 
v___x_3584_ = lean_unsigned_to_nat(2u);
return v___x_3584_;
}
default: 
{
lean_object* v___x_3585_; 
v___x_3585_ = lean_unsigned_to_nat(3u);
return v___x_3585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___boxed(lean_object* v_x_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l_Std_Http_RequestTarget_ctorIdx(v_x_3586_);
lean_dec(v_x_3586_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object* v_t_3588_, lean_object* v_k_3589_){
_start:
{
switch(lean_obj_tag(v_t_3588_))
{
case 0:
{
lean_object* v_path_3590_; lean_object* v_query_3591_; lean_object* v___x_3592_; 
v_path_3590_ = lean_ctor_get(v_t_3588_, 0);
lean_inc_ref(v_path_3590_);
v_query_3591_ = lean_ctor_get(v_t_3588_, 1);
lean_inc(v_query_3591_);
lean_dec_ref_known(v_t_3588_, 2);
v___x_3592_ = lean_apply_2(v_k_3589_, v_path_3590_, v_query_3591_);
return v___x_3592_;
}
case 3:
{
return v_k_3589_;
}
default: 
{
lean_object* v_uri_3593_; lean_object* v___x_3594_; 
v_uri_3593_ = lean_ctor_get(v_t_3588_, 0);
lean_inc_ref(v_uri_3593_);
lean_dec(v_t_3588_);
v___x_3594_ = lean_apply_1(v_k_3589_, v_uri_3593_);
return v___x_3594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object* v_motive_3595_, lean_object* v_ctorIdx_3596_, lean_object* v_t_3597_, lean_object* v_h_3598_, lean_object* v_k_3599_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3597_, v_k_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object* v_motive_3601_, lean_object* v_ctorIdx_3602_, lean_object* v_t_3603_, lean_object* v_h_3604_, lean_object* v_k_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = l_Std_Http_RequestTarget_ctorElim(v_motive_3601_, v_ctorIdx_3602_, v_t_3603_, v_h_3604_, v_k_3605_);
lean_dec(v_ctorIdx_3602_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object* v_t_3607_, lean_object* v_originForm_3608_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3607_, v_originForm_3608_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object* v_motive_3610_, lean_object* v_t_3611_, lean_object* v_h_3612_, lean_object* v_originForm_3613_){
_start:
{
lean_object* v___x_3614_; 
v___x_3614_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3611_, v_originForm_3613_);
return v___x_3614_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object* v_t_3615_, lean_object* v_absoluteForm_3616_){
_start:
{
lean_object* v___x_3617_; 
v___x_3617_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3615_, v_absoluteForm_3616_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object* v_motive_3618_, lean_object* v_t_3619_, lean_object* v_h_3620_, lean_object* v_absoluteForm_3621_){
_start:
{
lean_object* v___x_3622_; 
v___x_3622_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3619_, v_absoluteForm_3621_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object* v_t_3623_, lean_object* v_authorityForm_3624_){
_start:
{
lean_object* v___x_3625_; 
v___x_3625_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3623_, v_authorityForm_3624_);
return v___x_3625_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object* v_motive_3626_, lean_object* v_t_3627_, lean_object* v_h_3628_, lean_object* v_authorityForm_3629_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3627_, v_authorityForm_3629_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object* v_t_3631_, lean_object* v_asteriskForm_3632_){
_start:
{
lean_object* v___x_3633_; 
v___x_3633_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3631_, v_asteriskForm_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object* v_motive_3634_, lean_object* v_t_3635_, lean_object* v_h_3636_, lean_object* v_asteriskForm_3637_){
_start:
{
lean_object* v___x_3638_; 
v___x_3638_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3635_, v_asteriskForm_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object* v_x_3665_, lean_object* v_prec_3666_){
_start:
{
lean_object* v___y_3668_; 
switch(lean_obj_tag(v_x_3665_))
{
case 0:
{
lean_object* v_path_3674_; lean_object* v_query_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3699_; 
v_path_3674_ = lean_ctor_get(v_x_3665_, 0);
v_query_3675_ = lean_ctor_get(v_x_3665_, 1);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_x_3665_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3677_ = v_x_3665_;
v_isShared_3678_ = v_isSharedCheck_3699_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_query_3675_);
lean_inc(v_path_3674_);
lean_dec(v_x_3665_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3699_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___y_3680_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3695_ = lean_unsigned_to_nat(1024u);
v___x_3696_ = lean_nat_dec_le(v___x_3695_, v_prec_3666_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; 
v___x_3697_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3680_ = v___x_3697_;
goto v___jp_3679_;
}
else
{
lean_object* v___x_3698_; 
v___x_3698_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3680_ = v___x_3698_;
goto v___jp_3679_;
}
v___jp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3681_ = lean_box(1);
v___x_3682_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__4));
v___x_3683_ = lean_unsigned_to_nat(1024u);
v___x_3684_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3674_);
if (v_isShared_3678_ == 0)
{
lean_ctor_set_tag(v___x_3677_, 5);
lean_ctor_set(v___x_3677_, 1, v___x_3684_);
lean_ctor_set(v___x_3677_, 0, v___x_3682_);
v___x_3686_ = v___x_3677_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3694_, 1, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; uint8_t v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
lean_ctor_set(v___x_3687_, 1, v___x_3681_);
v___x_3688_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3675_, v___x_3683_);
v___x_3689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3687_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
lean_inc(v___y_3680_);
v___x_3690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___y_3680_);
lean_ctor_set(v___x_3690_, 1, v___x_3689_);
v___x_3691_ = 0;
v___x_3692_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3692_, 0, v___x_3690_);
lean_ctor_set_uint8(v___x_3692_, sizeof(void*)*1, v___x_3691_);
v___x_3693_ = l_Repr_addAppParen(v___x_3692_, v_prec_3666_);
return v___x_3693_;
}
}
}
}
case 1:
{
lean_object* v_uri_3700_; lean_object* v___y_3702_; lean_object* v___x_3710_; uint8_t v___x_3711_; 
v_uri_3700_ = lean_ctor_get(v_x_3665_, 0);
lean_inc_ref(v_uri_3700_);
lean_dec_ref_known(v_x_3665_, 1);
v___x_3710_ = lean_unsigned_to_nat(1024u);
v___x_3711_ = lean_nat_dec_le(v___x_3710_, v_prec_3666_);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; 
v___x_3712_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3702_ = v___x_3712_;
goto v___jp_3701_;
}
else
{
lean_object* v___x_3713_; 
v___x_3713_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3702_ = v___x_3713_;
goto v___jp_3701_;
}
v___jp_3701_:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3703_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__7));
v___x_3704_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3700_);
v___x_3705_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3703_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
lean_inc(v___y_3702_);
v___x_3706_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___y_3702_);
lean_ctor_set(v___x_3706_, 1, v___x_3705_);
v___x_3707_ = 0;
v___x_3708_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3708_, 0, v___x_3706_);
lean_ctor_set_uint8(v___x_3708_, sizeof(void*)*1, v___x_3707_);
v___x_3709_ = l_Repr_addAppParen(v___x_3708_, v_prec_3666_);
return v___x_3709_;
}
}
case 2:
{
lean_object* v_authority_3714_; lean_object* v___y_3716_; lean_object* v___x_3724_; uint8_t v___x_3725_; 
v_authority_3714_ = lean_ctor_get(v_x_3665_, 0);
lean_inc_ref(v_authority_3714_);
lean_dec_ref_known(v_x_3665_, 1);
v___x_3724_ = lean_unsigned_to_nat(1024u);
v___x_3725_ = lean_nat_dec_le(v___x_3724_, v_prec_3666_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; 
v___x_3726_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3716_ = v___x_3726_;
goto v___jp_3715_;
}
else
{
lean_object* v___x_3727_; 
v___x_3727_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3716_ = v___x_3727_;
goto v___jp_3715_;
}
v___jp_3715_:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; uint8_t v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3717_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__10));
v___x_3718_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_authority_3714_);
v___x_3719_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3717_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
lean_inc(v___y_3716_);
v___x_3720_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___y_3716_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = 0;
v___x_3722_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set_uint8(v___x_3722_, sizeof(void*)*1, v___x_3721_);
v___x_3723_ = l_Repr_addAppParen(v___x_3722_, v_prec_3666_);
return v___x_3723_;
}
}
default: 
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = lean_unsigned_to_nat(1024u);
v___x_3729_ = lean_nat_dec_le(v___x_3728_, v_prec_3666_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; 
v___x_3730_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3668_ = v___x_3730_;
goto v___jp_3667_;
}
else
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3668_ = v___x_3731_;
goto v___jp_3667_;
}
}
}
v___jp_3667_:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3669_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__1));
lean_inc(v___y_3668_);
v___x_3670_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3670_, 0, v___y_3668_);
lean_ctor_set(v___x_3670_, 1, v___x_3669_);
v___x_3671_ = 0;
v___x_3672_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3672_, 0, v___x_3670_);
lean_ctor_set_uint8(v___x_3672_, sizeof(void*)*1, v___x_3671_);
v___x_3673_ = l_Repr_addAppParen(v___x_3672_, v_prec_3666_);
return v___x_3673_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object* v_x_3732_, lean_object* v_prec_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Std_Http_instReprRequestTarget_repr(v_x_3732_, v_prec_3733_);
lean_dec(v_prec_3733_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object* v_x_3742_){
_start:
{
switch(lean_obj_tag(v_x_3742_))
{
case 0:
{
lean_object* v_path_3743_; 
v_path_3743_ = lean_ctor_get(v_x_3742_, 0);
lean_inc_ref(v_path_3743_);
return v_path_3743_;
}
case 1:
{
lean_object* v_uri_3744_; lean_object* v_path_3745_; 
v_uri_3744_ = lean_ctor_get(v_x_3742_, 0);
v_path_3745_ = lean_ctor_get(v_uri_3744_, 2);
lean_inc_ref(v_path_3745_);
return v_path_3745_;
}
default: 
{
lean_object* v___x_3746_; 
v___x_3746_ = ((lean_object*)(l_Std_Http_RequestTarget_path___closed__1));
return v___x_3746_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object* v_x_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l_Std_Http_RequestTarget_path(v_x_3747_);
lean_dec(v_x_3747_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object* v_x_3749_){
_start:
{
switch(lean_obj_tag(v_x_3749_))
{
case 0:
{
lean_object* v_query_3750_; 
v_query_3750_ = lean_ctor_get(v_x_3749_, 1);
if (lean_obj_tag(v_query_3750_) == 0)
{
lean_object* v___x_3751_; 
v___x_3751_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3751_;
}
else
{
lean_object* v_val_3752_; 
v_val_3752_ = lean_ctor_get(v_query_3750_, 0);
lean_inc(v_val_3752_);
return v_val_3752_;
}
}
case 1:
{
lean_object* v_uri_3753_; lean_object* v_query_3754_; 
v_uri_3753_ = lean_ctor_get(v_x_3749_, 0);
v_query_3754_ = lean_ctor_get(v_uri_3753_, 3);
if (lean_obj_tag(v_query_3754_) == 0)
{
lean_object* v___x_3755_; 
v___x_3755_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3755_;
}
else
{
lean_object* v_val_3756_; 
v_val_3756_ = lean_ctor_get(v_query_3754_, 0);
lean_inc(v_val_3756_);
return v_val_3756_;
}
}
default: 
{
lean_object* v___x_3757_; 
v___x_3757_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_3757_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object* v_x_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l_Std_Http_RequestTarget_query(v_x_3758_);
lean_dec(v_x_3758_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object* v_x_3760_){
_start:
{
switch(lean_obj_tag(v_x_3760_))
{
case 2:
{
lean_object* v_authority_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
v_authority_3761_ = lean_ctor_get(v_x_3760_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_x_3760_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v_x_3760_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_authority_3761_);
lean_dec(v_x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
lean_ctor_set_tag(v___x_3763_, 1);
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_authority_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
case 1:
{
lean_object* v_uri_3769_; lean_object* v_authority_3770_; 
v_uri_3769_ = lean_ctor_get(v_x_3760_, 0);
lean_inc_ref(v_uri_3769_);
lean_dec_ref_known(v_x_3760_, 1);
v_authority_3770_ = lean_ctor_get(v_uri_3769_, 1);
lean_inc(v_authority_3770_);
lean_dec_ref(v_uri_3769_);
return v_authority_3770_;
}
default: 
{
lean_object* v___x_3771_; 
lean_dec(v_x_3760_);
v___x_3771_ = lean_box(0);
return v___x_3771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__2(lean_object* v___f_3773_, lean_object* v___f_3774_, lean_object* v_x_3775_){
_start:
{
lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; 
switch(lean_obj_tag(v_x_3775_))
{
case 0:
{
lean_object* v_path_3782_; lean_object* v_query_3783_; lean_object* v___y_3785_; lean_object* v_segments_3788_; uint8_t v_absolute_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; size_t v_sz_3792_; size_t v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v_result_3796_; 
lean_dec_ref(v___f_3774_);
v_path_3782_ = lean_ctor_get(v_x_3775_, 0);
lean_inc_ref(v_path_3782_);
v_query_3783_ = lean_ctor_get(v_x_3775_, 1);
lean_inc(v_query_3783_);
lean_dec_ref_known(v_x_3775_, 2);
v_segments_3788_ = lean_ctor_get(v_path_3782_, 0);
lean_inc_ref(v_segments_3788_);
v_absolute_3789_ = lean_ctor_get_uint8(v_path_3782_, sizeof(void*)*1);
lean_dec_ref(v_path_3782_);
v___x_3790_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3791_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3792_ = lean_array_size(v_segments_3788_);
v___x_3793_ = ((size_t)0ULL);
v___x_3794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3791_, v___f_3773_, v_sz_3792_, v___x_3793_, v_segments_3788_);
v___x_3795_ = lean_array_to_list(v___x_3794_);
v_result_3796_ = l_String_intercalate(v___x_3790_, v___x_3795_);
if (v_absolute_3789_ == 0)
{
v___y_3785_ = v_result_3796_;
goto v___jp_3784_;
}
else
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_string_append(v___x_3790_, v_result_3796_);
lean_dec_ref(v_result_3796_);
v___y_3785_ = v___x_3797_;
goto v___jp_3784_;
}
v___jp_3784_:
{
lean_object* v_queryStr_3786_; lean_object* v___x_3787_; 
v_queryStr_3786_ = l_Std_Http_URI_Query_formatOption(v_query_3783_);
v___x_3787_ = lean_string_append(v___y_3785_, v_queryStr_3786_);
lean_dec_ref(v_queryStr_3786_);
return v___x_3787_;
}
}
case 1:
{
lean_object* v_uri_3798_; lean_object* v_scheme_3799_; lean_object* v_authority_3800_; lean_object* v_path_3801_; lean_object* v_query_3802_; lean_object* v_fragment_3803_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3826_; 
lean_dec_ref(v___f_3773_);
v_uri_3798_ = lean_ctor_get(v_x_3775_, 0);
lean_inc_ref(v_uri_3798_);
lean_dec_ref_known(v_x_3775_, 1);
v_scheme_3799_ = lean_ctor_get(v_uri_3798_, 0);
lean_inc_ref(v_scheme_3799_);
v_authority_3800_ = lean_ctor_get(v_uri_3798_, 1);
lean_inc(v_authority_3800_);
v_path_3801_ = lean_ctor_get(v_uri_3798_, 2);
lean_inc_ref(v_path_3801_);
v_query_3802_ = lean_ctor_get(v_uri_3798_, 3);
lean_inc(v_query_3802_);
v_fragment_3803_ = lean_ctor_get(v_uri_3798_, 4);
lean_inc(v_fragment_3803_);
lean_dec_ref(v_uri_3798_);
if (lean_obj_tag(v_authority_3800_) == 0)
{
lean_object* v___x_3837_; 
v___x_3837_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3826_ = v___x_3837_;
goto v___jp_3825_;
}
else
{
lean_object* v_val_3838_; lean_object* v_userInfo_3839_; lean_object* v_host_3840_; lean_object* v_port_3841_; lean_object* v___x_3842_; lean_object* v___y_3844_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v___y_3861_; 
v_val_3838_ = lean_ctor_get(v_authority_3800_, 0);
lean_inc(v_val_3838_);
lean_dec_ref_known(v_authority_3800_, 1);
v_userInfo_3839_ = lean_ctor_get(v_val_3838_, 0);
lean_inc(v_userInfo_3839_);
v_host_3840_ = lean_ctor_get(v_val_3838_, 1);
lean_inc_ref(v_host_3840_);
v_port_3841_ = lean_ctor_get(v_val_3838_, 2);
lean_inc(v_port_3841_);
lean_dec(v_val_3838_);
v___x_3842_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_3839_) == 0)
{
lean_object* v___x_3871_; 
v___x_3871_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3861_ = v___x_3871_;
goto v___jp_3860_;
}
else
{
lean_object* v_val_3872_; lean_object* v_password_3873_; 
v_val_3872_ = lean_ctor_get(v_userInfo_3839_, 0);
lean_inc(v_val_3872_);
lean_dec_ref_known(v_userInfo_3839_, 1);
v_password_3873_ = lean_ctor_get(v_val_3872_, 1);
if (lean_obj_tag(v_password_3873_) == 0)
{
lean_object* v_username_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v_username_3874_ = lean_ctor_get(v_val_3872_, 0);
lean_inc_ref(v_username_3874_);
lean_dec(v_val_3872_);
v___x_3875_ = lean_string_from_utf8_unchecked(v_username_3874_);
v___x_3876_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3877_ = lean_string_append(v___x_3875_, v___x_3876_);
v___y_3861_ = v___x_3877_;
goto v___jp_3860_;
}
else
{
lean_object* v_username_3878_; lean_object* v_val_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
lean_inc_ref(v_password_3873_);
v_username_3878_ = lean_ctor_get(v_val_3872_, 0);
lean_inc_ref(v_username_3878_);
lean_dec(v_val_3872_);
v_val_3879_ = lean_ctor_get(v_password_3873_, 0);
lean_inc(v_val_3879_);
lean_dec_ref_known(v_password_3873_, 1);
v___x_3880_ = lean_string_from_utf8_unchecked(v_username_3878_);
v___x_3881_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3882_ = lean_string_append(v___x_3880_, v___x_3881_);
v___x_3883_ = lean_string_from_utf8_unchecked(v_val_3879_);
v___x_3884_ = lean_string_append(v___x_3882_, v___x_3883_);
lean_dec_ref(v___x_3883_);
v___x_3885_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3886_ = lean_string_append(v___x_3884_, v___x_3885_);
v___y_3861_ = v___x_3886_;
goto v___jp_3860_;
}
}
v___jp_3843_:
{
lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3847_ = lean_string_append(v___y_3844_, v___y_3845_);
lean_dec_ref(v___y_3845_);
v___x_3848_ = lean_string_append(v___x_3847_, v___y_3846_);
lean_dec_ref(v___y_3846_);
v___x_3849_ = lean_string_append(v___x_3842_, v___x_3848_);
lean_dec_ref(v___x_3848_);
v___y_3826_ = v___x_3849_;
goto v___jp_3825_;
}
v___jp_3850_:
{
switch(lean_obj_tag(v_port_3841_))
{
case 0:
{
lean_object* v___x_3853_; 
v___x_3853_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3844_ = v___y_3851_;
v___y_3845_ = v___y_3852_;
v___y_3846_ = v___x_3853_;
goto v___jp_3843_;
}
case 1:
{
lean_object* v___x_3854_; 
v___x_3854_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3844_ = v___y_3851_;
v___y_3845_ = v___y_3852_;
v___y_3846_ = v___x_3854_;
goto v___jp_3843_;
}
default: 
{
uint16_t v_port_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v_port_3855_ = lean_ctor_get_uint16(v_port_3841_, 0);
lean_dec_ref_known(v_port_3841_, 0);
v___x_3856_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3857_ = lean_uint16_to_nat(v_port_3855_);
v___x_3858_ = l_Nat_reprFast(v___x_3857_);
v___x_3859_ = lean_string_append(v___x_3856_, v___x_3858_);
lean_dec_ref(v___x_3858_);
v___y_3844_ = v___y_3851_;
v___y_3845_ = v___y_3852_;
v___y_3846_ = v___x_3859_;
goto v___jp_3843_;
}
}
}
v___jp_3860_:
{
switch(lean_obj_tag(v_host_3840_))
{
case 0:
{
lean_object* v_name_3862_; 
v_name_3862_ = lean_ctor_get(v_host_3840_, 0);
lean_inc_ref(v_name_3862_);
lean_dec_ref_known(v_host_3840_, 1);
v___y_3851_ = v___y_3861_;
v___y_3852_ = v_name_3862_;
goto v___jp_3850_;
}
case 1:
{
lean_object* v_ipv4_3863_; lean_object* v___x_3864_; 
v_ipv4_3863_ = lean_ctor_get(v_host_3840_, 0);
lean_inc_ref(v_ipv4_3863_);
lean_dec_ref_known(v_host_3840_, 1);
v___x_3864_ = lean_uv_ntop_v4(v_ipv4_3863_);
lean_dec_ref(v_ipv4_3863_);
v___y_3851_ = v___y_3861_;
v___y_3852_ = v___x_3864_;
goto v___jp_3850_;
}
default: 
{
lean_object* v_ipv6_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v_ipv6_3865_ = lean_ctor_get(v_host_3840_, 0);
lean_inc_ref(v_ipv6_3865_);
lean_dec_ref_known(v_host_3840_, 1);
v___x_3866_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3867_ = lean_uv_ntop_v6(v_ipv6_3865_);
lean_dec_ref(v_ipv6_3865_);
v___x_3868_ = lean_string_append(v___x_3866_, v___x_3867_);
lean_dec_ref(v___x_3867_);
v___x_3869_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3870_ = lean_string_append(v___x_3868_, v___x_3869_);
v___y_3851_ = v___y_3861_;
v___y_3852_ = v___x_3870_;
goto v___jp_3850_;
}
}
}
}
v___jp_3804_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3809_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3810_ = lean_string_append(v_scheme_3799_, v___x_3809_);
v___x_3811_ = lean_string_append(v___x_3810_, v___y_3807_);
lean_dec_ref(v___y_3807_);
v___x_3812_ = lean_string_append(v___x_3811_, v___y_3806_);
lean_dec_ref(v___y_3806_);
v___x_3813_ = lean_string_append(v___x_3812_, v___y_3805_);
lean_dec_ref(v___y_3805_);
v___x_3814_ = lean_string_append(v___x_3813_, v___y_3808_);
lean_dec_ref(v___y_3808_);
return v___x_3814_;
}
v___jp_3815_:
{
lean_object* v_queryPart_3818_; 
v_queryPart_3818_ = l_Std_Http_URI_Query_formatOption(v_query_3802_);
if (lean_obj_tag(v_fragment_3803_) == 0)
{
lean_object* v___x_3819_; 
v___x_3819_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3805_ = v_queryPart_3818_;
v___y_3806_ = v___y_3817_;
v___y_3807_ = v___y_3816_;
v___y_3808_ = v___x_3819_;
goto v___jp_3804_;
}
else
{
lean_object* v_val_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v_val_3820_ = lean_ctor_get(v_fragment_3803_, 0);
lean_inc(v_val_3820_);
lean_dec_ref_known(v_fragment_3803_, 1);
v___x_3821_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3822_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3820_);
lean_dec(v_val_3820_);
v___x_3823_ = lean_string_from_utf8_unchecked(v___x_3822_);
v___x_3824_ = lean_string_append(v___x_3821_, v___x_3823_);
lean_dec_ref(v___x_3823_);
v___y_3805_ = v_queryPart_3818_;
v___y_3806_ = v___y_3817_;
v___y_3807_ = v___y_3816_;
v___y_3808_ = v___x_3824_;
goto v___jp_3804_;
}
}
v___jp_3825_:
{
lean_object* v_segments_3827_; uint8_t v_absolute_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; size_t v_sz_3831_; size_t v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v_result_3835_; 
v_segments_3827_ = lean_ctor_get(v_path_3801_, 0);
lean_inc_ref(v_segments_3827_);
v_absolute_3828_ = lean_ctor_get_uint8(v_path_3801_, sizeof(void*)*1);
lean_dec_ref(v_path_3801_);
v___x_3829_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3830_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3831_ = lean_array_size(v_segments_3827_);
v___x_3832_ = ((size_t)0ULL);
v___x_3833_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3830_, v___f_3774_, v_sz_3831_, v___x_3832_, v_segments_3827_);
v___x_3834_ = lean_array_to_list(v___x_3833_);
v_result_3835_ = l_String_intercalate(v___x_3829_, v___x_3834_);
if (v_absolute_3828_ == 0)
{
v___y_3816_ = v___y_3826_;
v___y_3817_ = v_result_3835_;
goto v___jp_3815_;
}
else
{
lean_object* v___x_3836_; 
v___x_3836_ = lean_string_append(v___x_3829_, v_result_3835_);
lean_dec_ref(v_result_3835_);
v___y_3816_ = v___y_3826_;
v___y_3817_ = v___x_3836_;
goto v___jp_3815_;
}
}
}
case 2:
{
lean_object* v_authority_3887_; lean_object* v_userInfo_3888_; lean_object* v_host_3889_; lean_object* v_port_3890_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3902_; 
lean_dec_ref(v___f_3774_);
lean_dec_ref(v___f_3773_);
v_authority_3887_ = lean_ctor_get(v_x_3775_, 0);
lean_inc_ref(v_authority_3887_);
lean_dec_ref_known(v_x_3775_, 1);
v_userInfo_3888_ = lean_ctor_get(v_authority_3887_, 0);
lean_inc(v_userInfo_3888_);
v_host_3889_ = lean_ctor_get(v_authority_3887_, 1);
lean_inc_ref(v_host_3889_);
v_port_3890_ = lean_ctor_get(v_authority_3887_, 2);
lean_inc(v_port_3890_);
lean_dec_ref(v_authority_3887_);
if (lean_obj_tag(v_userInfo_3888_) == 0)
{
lean_object* v___x_3912_; 
v___x_3912_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3902_ = v___x_3912_;
goto v___jp_3901_;
}
else
{
lean_object* v_val_3913_; lean_object* v_password_3914_; 
v_val_3913_ = lean_ctor_get(v_userInfo_3888_, 0);
lean_inc(v_val_3913_);
lean_dec_ref_known(v_userInfo_3888_, 1);
v_password_3914_ = lean_ctor_get(v_val_3913_, 1);
if (lean_obj_tag(v_password_3914_) == 0)
{
lean_object* v_username_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v_username_3915_ = lean_ctor_get(v_val_3913_, 0);
lean_inc_ref(v_username_3915_);
lean_dec(v_val_3913_);
v___x_3916_ = lean_string_from_utf8_unchecked(v_username_3915_);
v___x_3917_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3918_ = lean_string_append(v___x_3916_, v___x_3917_);
v___y_3902_ = v___x_3918_;
goto v___jp_3901_;
}
else
{
lean_object* v_username_3919_; lean_object* v_val_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
lean_inc_ref(v_password_3914_);
v_username_3919_ = lean_ctor_get(v_val_3913_, 0);
lean_inc_ref(v_username_3919_);
lean_dec(v_val_3913_);
v_val_3920_ = lean_ctor_get(v_password_3914_, 0);
lean_inc(v_val_3920_);
lean_dec_ref_known(v_password_3914_, 1);
v___x_3921_ = lean_string_from_utf8_unchecked(v_username_3919_);
v___x_3922_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3923_ = lean_string_append(v___x_3921_, v___x_3922_);
v___x_3924_ = lean_string_from_utf8_unchecked(v_val_3920_);
v___x_3925_ = lean_string_append(v___x_3923_, v___x_3924_);
lean_dec_ref(v___x_3924_);
v___x_3926_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3927_ = lean_string_append(v___x_3925_, v___x_3926_);
v___y_3902_ = v___x_3927_;
goto v___jp_3901_;
}
}
v___jp_3891_:
{
switch(lean_obj_tag(v_port_3890_))
{
case 0:
{
lean_object* v___x_3894_; 
v___x_3894_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3777_ = v___y_3892_;
v___y_3778_ = v___y_3893_;
v___y_3779_ = v___x_3894_;
goto v___jp_3776_;
}
case 1:
{
lean_object* v___x_3895_; 
v___x_3895_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3777_ = v___y_3892_;
v___y_3778_ = v___y_3893_;
v___y_3779_ = v___x_3895_;
goto v___jp_3776_;
}
default: 
{
uint16_t v_port_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v_port_3896_ = lean_ctor_get_uint16(v_port_3890_, 0);
lean_dec_ref_known(v_port_3890_, 0);
v___x_3897_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3898_ = lean_uint16_to_nat(v_port_3896_);
v___x_3899_ = l_Nat_reprFast(v___x_3898_);
v___x_3900_ = lean_string_append(v___x_3897_, v___x_3899_);
lean_dec_ref(v___x_3899_);
v___y_3777_ = v___y_3892_;
v___y_3778_ = v___y_3893_;
v___y_3779_ = v___x_3900_;
goto v___jp_3776_;
}
}
}
v___jp_3901_:
{
switch(lean_obj_tag(v_host_3889_))
{
case 0:
{
lean_object* v_name_3903_; 
v_name_3903_ = lean_ctor_get(v_host_3889_, 0);
lean_inc_ref(v_name_3903_);
lean_dec_ref_known(v_host_3889_, 1);
v___y_3892_ = v___y_3902_;
v___y_3893_ = v_name_3903_;
goto v___jp_3891_;
}
case 1:
{
lean_object* v_ipv4_3904_; lean_object* v___x_3905_; 
v_ipv4_3904_ = lean_ctor_get(v_host_3889_, 0);
lean_inc_ref(v_ipv4_3904_);
lean_dec_ref_known(v_host_3889_, 1);
v___x_3905_ = lean_uv_ntop_v4(v_ipv4_3904_);
lean_dec_ref(v_ipv4_3904_);
v___y_3892_ = v___y_3902_;
v___y_3893_ = v___x_3905_;
goto v___jp_3891_;
}
default: 
{
lean_object* v_ipv6_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
v_ipv6_3906_ = lean_ctor_get(v_host_3889_, 0);
lean_inc_ref(v_ipv6_3906_);
lean_dec_ref_known(v_host_3889_, 1);
v___x_3907_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3908_ = lean_uv_ntop_v6(v_ipv6_3906_);
lean_dec_ref(v_ipv6_3906_);
v___x_3909_ = lean_string_append(v___x_3907_, v___x_3908_);
lean_dec_ref(v___x_3908_);
v___x_3910_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3911_ = lean_string_append(v___x_3909_, v___x_3910_);
v___y_3892_ = v___y_3902_;
v___y_3893_ = v___x_3911_;
goto v___jp_3891_;
}
}
}
}
default: 
{
lean_object* v___x_3928_; 
lean_dec_ref(v___f_3774_);
lean_dec_ref(v___f_3773_);
v___x_3928_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
return v___x_3928_;
}
}
v___jp_3776_:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3780_ = lean_string_append(v___y_3777_, v___y_3778_);
lean_dec_ref(v___y_3778_);
v___x_3781_ = lean_string_append(v___x_3780_, v___y_3779_);
lean_dec_ref(v___y_3779_);
return v___x_3781_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__2(lean_object* v___f_3932_, lean_object* v___f_3933_, lean_object* v_buffer_3934_, lean_object* v_target_3935_){
_start:
{
lean_object* v___y_3937_; lean_object* v___y_3952_; lean_object* v___y_3953_; lean_object* v___y_3954_; 
switch(lean_obj_tag(v_target_3935_))
{
case 0:
{
lean_object* v_path_3957_; lean_object* v_query_3958_; lean_object* v___y_3960_; lean_object* v_segments_3963_; uint8_t v_absolute_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; size_t v_sz_3967_; size_t v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v_result_3971_; 
lean_dec_ref(v___f_3933_);
v_path_3957_ = lean_ctor_get(v_target_3935_, 0);
lean_inc_ref(v_path_3957_);
v_query_3958_ = lean_ctor_get(v_target_3935_, 1);
lean_inc(v_query_3958_);
lean_dec_ref_known(v_target_3935_, 2);
v_segments_3963_ = lean_ctor_get(v_path_3957_, 0);
lean_inc_ref(v_segments_3963_);
v_absolute_3964_ = lean_ctor_get_uint8(v_path_3957_, sizeof(void*)*1);
lean_dec_ref(v_path_3957_);
v___x_3965_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_3966_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_3967_ = lean_array_size(v_segments_3963_);
v___x_3968_ = ((size_t)0ULL);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3966_, v___f_3932_, v_sz_3967_, v___x_3968_, v_segments_3963_);
v___x_3970_ = lean_array_to_list(v___x_3969_);
v_result_3971_ = l_String_intercalate(v___x_3965_, v___x_3970_);
if (v_absolute_3964_ == 0)
{
v___y_3960_ = v_result_3971_;
goto v___jp_3959_;
}
else
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_string_append(v___x_3965_, v_result_3971_);
lean_dec_ref(v_result_3971_);
v___y_3960_ = v___x_3972_;
goto v___jp_3959_;
}
v___jp_3959_:
{
lean_object* v_queryStr_3961_; lean_object* v___x_3962_; 
v_queryStr_3961_ = l_Std_Http_URI_Query_formatOption(v_query_3958_);
v___x_3962_ = lean_string_append(v___y_3960_, v_queryStr_3961_);
lean_dec_ref(v_queryStr_3961_);
v___y_3937_ = v___x_3962_;
goto v___jp_3936_;
}
}
case 1:
{
lean_object* v_uri_3973_; lean_object* v_scheme_3974_; lean_object* v_authority_3975_; lean_object* v_path_3976_; lean_object* v_query_3977_; lean_object* v_fragment_3978_; lean_object* v___y_3980_; lean_object* v___y_3981_; lean_object* v___y_3982_; lean_object* v___y_3983_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_4001_; 
lean_dec_ref(v___f_3932_);
v_uri_3973_ = lean_ctor_get(v_target_3935_, 0);
lean_inc_ref(v_uri_3973_);
lean_dec_ref_known(v_target_3935_, 1);
v_scheme_3974_ = lean_ctor_get(v_uri_3973_, 0);
lean_inc_ref(v_scheme_3974_);
v_authority_3975_ = lean_ctor_get(v_uri_3973_, 1);
lean_inc(v_authority_3975_);
v_path_3976_ = lean_ctor_get(v_uri_3973_, 2);
lean_inc_ref(v_path_3976_);
v_query_3977_ = lean_ctor_get(v_uri_3973_, 3);
lean_inc(v_query_3977_);
v_fragment_3978_ = lean_ctor_get(v_uri_3973_, 4);
lean_inc(v_fragment_3978_);
lean_dec_ref(v_uri_3973_);
if (lean_obj_tag(v_authority_3975_) == 0)
{
lean_object* v___x_4012_; 
v___x_4012_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4001_ = v___x_4012_;
goto v___jp_4000_;
}
else
{
lean_object* v_val_4013_; lean_object* v_userInfo_4014_; lean_object* v_host_4015_; lean_object* v_port_4016_; lean_object* v___x_4017_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4036_; 
v_val_4013_ = lean_ctor_get(v_authority_3975_, 0);
lean_inc(v_val_4013_);
lean_dec_ref_known(v_authority_3975_, 1);
v_userInfo_4014_ = lean_ctor_get(v_val_4013_, 0);
lean_inc(v_userInfo_4014_);
v_host_4015_ = lean_ctor_get(v_val_4013_, 1);
lean_inc_ref(v_host_4015_);
v_port_4016_ = lean_ctor_get(v_val_4013_, 2);
lean_inc(v_port_4016_);
lean_dec(v_val_4013_);
v___x_4017_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__1));
if (lean_obj_tag(v_userInfo_4014_) == 0)
{
lean_object* v___x_4046_; 
v___x_4046_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4036_ = v___x_4046_;
goto v___jp_4035_;
}
else
{
lean_object* v_val_4047_; lean_object* v_password_4048_; 
v_val_4047_ = lean_ctor_get(v_userInfo_4014_, 0);
lean_inc(v_val_4047_);
lean_dec_ref_known(v_userInfo_4014_, 1);
v_password_4048_ = lean_ctor_get(v_val_4047_, 1);
if (lean_obj_tag(v_password_4048_) == 0)
{
lean_object* v_username_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v_username_4049_ = lean_ctor_get(v_val_4047_, 0);
lean_inc_ref(v_username_4049_);
lean_dec(v_val_4047_);
v___x_4050_ = lean_string_from_utf8_unchecked(v_username_4049_);
v___x_4051_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4052_ = lean_string_append(v___x_4050_, v___x_4051_);
v___y_4036_ = v___x_4052_;
goto v___jp_4035_;
}
else
{
lean_object* v_username_4053_; lean_object* v_val_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
lean_inc_ref(v_password_4048_);
v_username_4053_ = lean_ctor_get(v_val_4047_, 0);
lean_inc_ref(v_username_4053_);
lean_dec(v_val_4047_);
v_val_4054_ = lean_ctor_get(v_password_4048_, 0);
lean_inc(v_val_4054_);
lean_dec_ref_known(v_password_4048_, 1);
v___x_4055_ = lean_string_from_utf8_unchecked(v_username_4053_);
v___x_4056_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4057_ = lean_string_append(v___x_4055_, v___x_4056_);
v___x_4058_ = lean_string_from_utf8_unchecked(v_val_4054_);
v___x_4059_ = lean_string_append(v___x_4057_, v___x_4058_);
lean_dec_ref(v___x_4058_);
v___x_4060_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4061_ = lean_string_append(v___x_4059_, v___x_4060_);
v___y_4036_ = v___x_4061_;
goto v___jp_4035_;
}
}
v___jp_4018_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4022_ = lean_string_append(v___y_4020_, v___y_4019_);
lean_dec_ref(v___y_4019_);
v___x_4023_ = lean_string_append(v___x_4022_, v___y_4021_);
lean_dec_ref(v___y_4021_);
v___x_4024_ = lean_string_append(v___x_4017_, v___x_4023_);
lean_dec_ref(v___x_4023_);
v___y_4001_ = v___x_4024_;
goto v___jp_4000_;
}
v___jp_4025_:
{
switch(lean_obj_tag(v_port_4016_))
{
case 0:
{
lean_object* v___x_4028_; 
v___x_4028_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4019_ = v___y_4027_;
v___y_4020_ = v___y_4026_;
v___y_4021_ = v___x_4028_;
goto v___jp_4018_;
}
case 1:
{
lean_object* v___x_4029_; 
v___x_4029_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4019_ = v___y_4027_;
v___y_4020_ = v___y_4026_;
v___y_4021_ = v___x_4029_;
goto v___jp_4018_;
}
default: 
{
uint16_t v_port_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v_port_4030_ = lean_ctor_get_uint16(v_port_4016_, 0);
lean_dec_ref_known(v_port_4016_, 0);
v___x_4031_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4032_ = lean_uint16_to_nat(v_port_4030_);
v___x_4033_ = l_Nat_reprFast(v___x_4032_);
v___x_4034_ = lean_string_append(v___x_4031_, v___x_4033_);
lean_dec_ref(v___x_4033_);
v___y_4019_ = v___y_4027_;
v___y_4020_ = v___y_4026_;
v___y_4021_ = v___x_4034_;
goto v___jp_4018_;
}
}
}
v___jp_4035_:
{
switch(lean_obj_tag(v_host_4015_))
{
case 0:
{
lean_object* v_name_4037_; 
v_name_4037_ = lean_ctor_get(v_host_4015_, 0);
lean_inc_ref(v_name_4037_);
lean_dec_ref_known(v_host_4015_, 1);
v___y_4026_ = v___y_4036_;
v___y_4027_ = v_name_4037_;
goto v___jp_4025_;
}
case 1:
{
lean_object* v_ipv4_4038_; lean_object* v___x_4039_; 
v_ipv4_4038_ = lean_ctor_get(v_host_4015_, 0);
lean_inc_ref(v_ipv4_4038_);
lean_dec_ref_known(v_host_4015_, 1);
v___x_4039_ = lean_uv_ntop_v4(v_ipv4_4038_);
lean_dec_ref(v_ipv4_4038_);
v___y_4026_ = v___y_4036_;
v___y_4027_ = v___x_4039_;
goto v___jp_4025_;
}
default: 
{
lean_object* v_ipv6_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v_ipv6_4040_ = lean_ctor_get(v_host_4015_, 0);
lean_inc_ref(v_ipv6_4040_);
lean_dec_ref_known(v_host_4015_, 1);
v___x_4041_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4042_ = lean_uv_ntop_v6(v_ipv6_4040_);
lean_dec_ref(v_ipv6_4040_);
v___x_4043_ = lean_string_append(v___x_4041_, v___x_4042_);
lean_dec_ref(v___x_4042_);
v___x_4044_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4045_ = lean_string_append(v___x_4043_, v___x_4044_);
v___y_4026_ = v___y_4036_;
v___y_4027_ = v___x_4045_;
goto v___jp_4025_;
}
}
}
}
v___jp_3979_:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3984_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3985_ = lean_string_append(v_scheme_3974_, v___x_3984_);
v___x_3986_ = lean_string_append(v___x_3985_, v___y_3980_);
lean_dec_ref(v___y_3980_);
v___x_3987_ = lean_string_append(v___x_3986_, v___y_3981_);
lean_dec_ref(v___y_3981_);
v___x_3988_ = lean_string_append(v___x_3987_, v___y_3982_);
lean_dec_ref(v___y_3982_);
v___x_3989_ = lean_string_append(v___x_3988_, v___y_3983_);
lean_dec_ref(v___y_3983_);
v___y_3937_ = v___x_3989_;
goto v___jp_3936_;
}
v___jp_3990_:
{
lean_object* v_queryPart_3993_; 
v_queryPart_3993_ = l_Std_Http_URI_Query_formatOption(v_query_3977_);
if (lean_obj_tag(v_fragment_3978_) == 0)
{
lean_object* v___x_3994_; 
v___x_3994_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3980_ = v___y_3991_;
v___y_3981_ = v___y_3992_;
v___y_3982_ = v_queryPart_3993_;
v___y_3983_ = v___x_3994_;
goto v___jp_3979_;
}
else
{
lean_object* v_val_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v_val_3995_ = lean_ctor_get(v_fragment_3978_, 0);
lean_inc(v_val_3995_);
lean_dec_ref_known(v_fragment_3978_, 1);
v___x_3996_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__1___closed__0));
v___x_3997_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3995_);
lean_dec(v_val_3995_);
v___x_3998_ = lean_string_from_utf8_unchecked(v___x_3997_);
v___x_3999_ = lean_string_append(v___x_3996_, v___x_3998_);
lean_dec_ref(v___x_3998_);
v___y_3980_ = v___y_3991_;
v___y_3981_ = v___y_3992_;
v___y_3982_ = v_queryPart_3993_;
v___y_3983_ = v___x_3999_;
goto v___jp_3979_;
}
}
v___jp_4000_:
{
lean_object* v_segments_4002_; uint8_t v_absolute_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; size_t v_sz_4006_; size_t v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v_result_4010_; 
v_segments_4002_ = lean_ctor_get(v_path_3976_, 0);
lean_inc_ref(v_segments_4002_);
v_absolute_4003_ = lean_ctor_get_uint8(v_path_3976_, sizeof(void*)*1);
lean_dec_ref(v_path_3976_);
v___x_4004_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_4005_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_4006_ = lean_array_size(v_segments_4002_);
v___x_4007_ = ((size_t)0ULL);
v___x_4008_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4005_, v___f_3933_, v_sz_4006_, v___x_4007_, v_segments_4002_);
v___x_4009_ = lean_array_to_list(v___x_4008_);
v_result_4010_ = l_String_intercalate(v___x_4004_, v___x_4009_);
if (v_absolute_4003_ == 0)
{
v___y_3991_ = v___y_4001_;
v___y_3992_ = v_result_4010_;
goto v___jp_3990_;
}
else
{
lean_object* v___x_4011_; 
v___x_4011_ = lean_string_append(v___x_4004_, v_result_4010_);
lean_dec_ref(v_result_4010_);
v___y_3991_ = v___y_4001_;
v___y_3992_ = v___x_4011_;
goto v___jp_3990_;
}
}
}
case 2:
{
lean_object* v_authority_4062_; lean_object* v_userInfo_4063_; lean_object* v_host_4064_; lean_object* v_port_4065_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4077_; 
lean_dec_ref(v___f_3933_);
lean_dec_ref(v___f_3932_);
v_authority_4062_ = lean_ctor_get(v_target_3935_, 0);
lean_inc_ref(v_authority_4062_);
lean_dec_ref_known(v_target_3935_, 1);
v_userInfo_4063_ = lean_ctor_get(v_authority_4062_, 0);
lean_inc(v_userInfo_4063_);
v_host_4064_ = lean_ctor_get(v_authority_4062_, 1);
lean_inc_ref(v_host_4064_);
v_port_4065_ = lean_ctor_get(v_authority_4062_, 2);
lean_inc(v_port_4065_);
lean_dec_ref(v_authority_4062_);
if (lean_obj_tag(v_userInfo_4063_) == 0)
{
lean_object* v___x_4087_; 
v___x_4087_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4077_ = v___x_4087_;
goto v___jp_4076_;
}
else
{
lean_object* v_val_4088_; lean_object* v_password_4089_; 
v_val_4088_ = lean_ctor_get(v_userInfo_4063_, 0);
lean_inc(v_val_4088_);
lean_dec_ref_known(v_userInfo_4063_, 1);
v_password_4089_ = lean_ctor_get(v_val_4088_, 1);
if (lean_obj_tag(v_password_4089_) == 0)
{
lean_object* v_username_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
v_username_4090_ = lean_ctor_get(v_val_4088_, 0);
lean_inc_ref(v_username_4090_);
lean_dec(v_val_4088_);
v___x_4091_ = lean_string_from_utf8_unchecked(v_username_4090_);
v___x_4092_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4093_ = lean_string_append(v___x_4091_, v___x_4092_);
v___y_4077_ = v___x_4093_;
goto v___jp_4076_;
}
else
{
lean_object* v_username_4094_; lean_object* v_val_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
lean_inc_ref(v_password_4089_);
v_username_4094_ = lean_ctor_get(v_val_4088_, 0);
lean_inc_ref(v_username_4094_);
lean_dec(v_val_4088_);
v_val_4095_ = lean_ctor_get(v_password_4089_, 0);
lean_inc(v_val_4095_);
lean_dec_ref_known(v_password_4089_, 1);
v___x_4096_ = lean_string_from_utf8_unchecked(v_username_4094_);
v___x_4097_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4098_ = lean_string_append(v___x_4096_, v___x_4097_);
v___x_4099_ = lean_string_from_utf8_unchecked(v_val_4095_);
v___x_4100_ = lean_string_append(v___x_4098_, v___x_4099_);
lean_dec_ref(v___x_4099_);
v___x_4101_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4102_ = lean_string_append(v___x_4100_, v___x_4101_);
v___y_4077_ = v___x_4102_;
goto v___jp_4076_;
}
}
v___jp_4066_:
{
switch(lean_obj_tag(v_port_4065_))
{
case 0:
{
lean_object* v___x_4069_; 
v___x_4069_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3952_ = v___y_4067_;
v___y_3953_ = v___y_4068_;
v___y_3954_ = v___x_4069_;
goto v___jp_3951_;
}
case 1:
{
lean_object* v___x_4070_; 
v___x_4070_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3952_ = v___y_4067_;
v___y_3953_ = v___y_4068_;
v___y_3954_ = v___x_4070_;
goto v___jp_3951_;
}
default: 
{
uint16_t v_port_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v_port_4071_ = lean_ctor_get_uint16(v_port_4065_, 0);
lean_dec_ref_known(v_port_4065_, 0);
v___x_4072_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4073_ = lean_uint16_to_nat(v_port_4071_);
v___x_4074_ = l_Nat_reprFast(v___x_4073_);
v___x_4075_ = lean_string_append(v___x_4072_, v___x_4074_);
lean_dec_ref(v___x_4074_);
v___y_3952_ = v___y_4067_;
v___y_3953_ = v___y_4068_;
v___y_3954_ = v___x_4075_;
goto v___jp_3951_;
}
}
}
v___jp_4076_:
{
switch(lean_obj_tag(v_host_4064_))
{
case 0:
{
lean_object* v_name_4078_; 
v_name_4078_ = lean_ctor_get(v_host_4064_, 0);
lean_inc_ref(v_name_4078_);
lean_dec_ref_known(v_host_4064_, 1);
v___y_4067_ = v___y_4077_;
v___y_4068_ = v_name_4078_;
goto v___jp_4066_;
}
case 1:
{
lean_object* v_ipv4_4079_; lean_object* v___x_4080_; 
v_ipv4_4079_ = lean_ctor_get(v_host_4064_, 0);
lean_inc_ref(v_ipv4_4079_);
lean_dec_ref_known(v_host_4064_, 1);
v___x_4080_ = lean_uv_ntop_v4(v_ipv4_4079_);
lean_dec_ref(v_ipv4_4079_);
v___y_4067_ = v___y_4077_;
v___y_4068_ = v___x_4080_;
goto v___jp_4066_;
}
default: 
{
lean_object* v_ipv6_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v_ipv6_4081_ = lean_ctor_get(v_host_4064_, 0);
lean_inc_ref(v_ipv6_4081_);
lean_dec_ref_known(v_host_4064_, 1);
v___x_4082_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4083_ = lean_uv_ntop_v6(v_ipv6_4081_);
lean_dec_ref(v_ipv6_4081_);
v___x_4084_ = lean_string_append(v___x_4082_, v___x_4083_);
lean_dec_ref(v___x_4083_);
v___x_4085_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4086_ = lean_string_append(v___x_4084_, v___x_4085_);
v___y_4067_ = v___y_4077_;
v___y_4068_ = v___x_4086_;
goto v___jp_4066_;
}
}
}
}
default: 
{
lean_object* v___x_4103_; 
lean_dec_ref(v___f_3933_);
lean_dec_ref(v___f_3932_);
v___x_4103_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__2___closed__0));
v___y_3937_ = v___x_4103_;
goto v___jp_3936_;
}
}
v___jp_3936_:
{
lean_object* v_data_3938_; lean_object* v_size_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3950_; 
v_data_3938_ = lean_ctor_get(v_buffer_3934_, 0);
v_size_3939_ = lean_ctor_get(v_buffer_3934_, 1);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_buffer_3934_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3941_ = v_buffer_3934_;
v_isShared_3942_ = v_isSharedCheck_3950_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_size_3939_);
lean_inc(v_data_3938_);
lean_dec(v_buffer_3934_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3950_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3948_; 
v___x_3943_ = lean_string_to_utf8(v___y_3937_);
lean_dec_ref(v___y_3937_);
lean_inc_ref(v___x_3943_);
v___x_3944_ = lean_array_push(v_data_3938_, v___x_3943_);
v___x_3945_ = lean_byte_array_size(v___x_3943_);
lean_dec_ref(v___x_3943_);
v___x_3946_ = lean_nat_add(v_size_3939_, v___x_3945_);
lean_dec(v_size_3939_);
if (v_isShared_3942_ == 0)
{
lean_ctor_set(v___x_3941_, 1, v___x_3946_);
lean_ctor_set(v___x_3941_, 0, v___x_3944_);
v___x_3948_ = v___x_3941_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v___x_3944_);
lean_ctor_set(v_reuseFailAlloc_3949_, 1, v___x_3946_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
v___jp_3951_:
{
lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3955_ = lean_string_append(v___y_3952_, v___y_3953_);
lean_dec_ref(v___y_3953_);
v___x_3956_ = lean_string_append(v___x_3955_, v___y_3954_);
lean_dec_ref(v___y_3954_);
v___y_3937_ = v___x_3956_;
goto v___jp_3936_;
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
