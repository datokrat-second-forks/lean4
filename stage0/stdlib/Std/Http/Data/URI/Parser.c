// Lean compiler output
// Module: Std.Http.Data.URI.Parser
// Imports: import Init.While public import Init.Data.String.Basic public import Std.Internal.Parsec public import Std.Internal.Parsec.ByteArray public import Std.Http.Data.URI.Basic public import Std.Http.Data.URI.Config import Init.Data.String.Search
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object*);
lean_object* l_ByteSlice_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_uv_pton_v4(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_uv_pton_v6(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object*);
extern lean_object* l_Std_Http_URI_Query_empty;
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object*);
lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object*);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object*, lean_object*);
static const lean_string_object l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid scheme"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "scheme length limit is 0 (no scheme allowed)"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "port number too large: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid port number: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "invalid percent encoding in user info"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv6 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '91'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '93'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv4 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid domain name: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invalid host"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid port number"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '58'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '64'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "too many path segments (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "path too long (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " bytes)"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid percent encoding in path segment"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "require '/' in path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "need a path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__3_value;
static const lean_array_object l_Std_Http_URI_Parser_parsePath___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__4 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__5 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid query string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "too many query parameters (limit: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid percent encoding in fragment"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '35'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid fragment parse encoding"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__3_value;
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '63'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__4 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__4_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__5 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '42'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not origin"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "not http absolute uri with path"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "not http absolute uri"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "invalid fragment encoding"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid host header"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid host header port"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object* v_p_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_a_2_);
v___x_3_ = lean_apply_1(v_p_1_, v_a_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v_pos_4_; lean_object* v_res_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_13_; 
lean_dec_ref(v_a_2_);
v_pos_4_ = lean_ctor_get(v___x_3_, 0);
v_res_5_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_13_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_13_ == 0)
{
v___x_7_ = v___x_3_;
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_res_5_);
lean_inc(v_pos_4_);
lean_dec(v___x_3_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_res_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v_pos_4_);
lean_ctor_set(v_reuseFailAlloc_12_, 1, v___x_9_);
v___x_11_ = v_reuseFailAlloc_12_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
return v___x_11_;
}
}
}
else
{
lean_object* v_err_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_27_; 
v_err_14_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_3_, 0);
lean_dec(v_unused_28_);
v___x_16_ = v___x_3_;
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_err_14_);
lean_dec(v___x_3_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_idx_18_; uint8_t v___x_19_; 
v_idx_18_ = lean_ctor_get(v_a_2_, 1);
v___x_19_ = lean_nat_dec_eq(v_idx_18_, v_idx_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_21_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_err_14_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
else
{
lean_object* v___x_23_; lean_object* v___x_25_; 
lean_dec(v_err_14_);
v___x_23_ = lean_box(0);
if (v_isShared_17_ == 0)
{
lean_ctor_set_tag(v___x_16_, 0);
lean_ctor_set(v___x_16_, 1, v___x_23_);
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_25_ = v___x_16_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object* v_00_u03b1_29_, lean_object* v_p_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_32_; 
lean_inc_ref(v_a_31_);
v___x_32_ = lean_apply_1(v_p_30_, v_a_31_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_pos_33_; lean_object* v_res_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
lean_dec_ref(v_a_31_);
v_pos_33_ = lean_ctor_get(v___x_32_, 0);
v_res_34_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_32_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_res_34_);
lean_inc(v_pos_33_);
lean_dec(v___x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v_res_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_pos_33_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
else
{
lean_object* v_err_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_56_; 
v_err_43_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_56_ == 0)
{
lean_object* v_unused_57_; 
v_unused_57_ = lean_ctor_get(v___x_32_, 0);
lean_dec(v_unused_57_);
v___x_45_ = v___x_32_;
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_err_43_);
lean_dec(v___x_32_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v_idx_47_; uint8_t v___x_48_; 
v_idx_47_ = lean_ctor_get(v_a_31_, 1);
v___x_48_ = lean_nat_dec_eq(v_idx_47_, v_idx_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_50_; 
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_err_43_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_54_; 
lean_dec(v_err_43_);
v___x_52_ = lean_box(0);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 0);
lean_ctor_set(v___x_45_, 1, v___x_52_);
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_54_ = v___x_45_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object* v_p_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_pos_61_; lean_object* v_array_65_; lean_object* v_idx_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_array_65_ = lean_ctor_get(v_a_59_, 0);
v_idx_66_ = lean_ctor_get(v_a_59_, 1);
v___x_67_ = lean_byte_array_size(v_array_65_);
v___x_68_ = lean_nat_dec_lt(v_idx_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec_ref(v_p_58_);
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_69_ = lean_byte_array_fget(v_array_65_, v_idx_66_);
v___x_70_ = lean_box(v___x_69_);
v___x_71_ = lean_apply_1(v_p_58_, v___x_70_);
v___x_72_ = lean_unbox(v___x_71_);
if (v___x_72_ == 0)
{
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v_a_59_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
v___jp_60_:
{
uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = 0;
v___x_63_ = lean_box(v___x_62_);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v_pos_61_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object* v_msg_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0));
v___x_77_ = lean_panic_fn_borrowed(v___x_76_, v_msg_75_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t v_c_78_){
_start:
{
uint8_t v___x_96_; uint8_t v___x_97_; 
v___x_96_ = 48;
v___x_97_ = lean_uint8_dec_le(v___x_96_, v_c_78_);
if (v___x_97_ == 0)
{
goto v___jp_91_;
}
else
{
uint8_t v___x_98_; uint8_t v___x_99_; 
v___x_98_ = 57;
v___x_99_ = lean_uint8_dec_le(v_c_78_, v___x_98_);
if (v___x_99_ == 0)
{
goto v___jp_91_;
}
else
{
return v___x_99_;
}
}
v___jp_79_:
{
uint8_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 43;
v___x_81_ = lean_uint8_dec_eq(v_c_78_, v___x_80_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 45;
v___x_83_ = lean_uint8_dec_eq(v_c_78_, v___x_82_);
if (v___x_83_ == 0)
{
uint8_t v___x_84_; uint8_t v___x_85_; 
v___x_84_ = 46;
v___x_85_ = lean_uint8_dec_eq(v_c_78_, v___x_84_);
return v___x_85_;
}
else
{
return v___x_83_;
}
}
else
{
return v___x_81_;
}
}
v___jp_86_:
{
uint8_t v___x_87_; uint8_t v___x_88_; 
v___x_87_ = 65;
v___x_88_ = lean_uint8_dec_le(v___x_87_, v_c_78_);
if (v___x_88_ == 0)
{
goto v___jp_79_;
}
else
{
uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_89_ = 90;
v___x_90_ = lean_uint8_dec_le(v_c_78_, v___x_89_);
if (v___x_90_ == 0)
{
goto v___jp_79_;
}
else
{
return v___x_90_;
}
}
}
v___jp_91_:
{
uint8_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 97;
v___x_93_ = lean_uint8_dec_le(v___x_92_, v_c_78_);
if (v___x_93_ == 0)
{
goto v___jp_86_;
}
else
{
uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_94_ = 122;
v___x_95_ = lean_uint8_dec_le(v_c_78_, v___x_94_);
if (v___x_95_ == 0)
{
goto v___jp_86_;
}
else
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object* v_c_100_){
_start:
{
uint8_t v_c_boxed_101_; uint8_t v_res_102_; lean_object* v_r_103_; 
v_c_boxed_101_ = lean_unbox(v_c_100_);
v_res_102_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(v_c_boxed_101_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
uint8_t v___x_105_; 
v___x_105_ = 1;
return v___x_105_;
}
else
{
lean_object* v_head_106_; lean_object* v_tail_107_; uint32_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_head_106_ = lean_ctor_get(v_x_104_, 0);
v_tail_107_ = lean_ctor_get(v_x_104_, 1);
v___x_137_ = lean_unbox_uint32(v_head_106_);
v___x_138_ = lean_uint32_to_nat(v___x_137_);
v___x_139_ = lean_unsigned_to_nat(128u);
v___x_140_ = lean_nat_dec_lt(v___x_138_, v___x_139_);
lean_dec(v___x_138_);
if (v___x_140_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_141_; uint32_t v___x_142_; uint8_t v___x_143_; 
v___x_141_ = 48;
v___x_142_ = lean_unbox_uint32(v_head_106_);
v___x_143_ = lean_uint32_dec_le(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
goto v___jp_129_;
}
else
{
uint32_t v___x_144_; uint32_t v___x_145_; uint8_t v___x_146_; 
v___x_144_ = 57;
v___x_145_ = lean_unbox_uint32(v_head_106_);
v___x_146_ = lean_uint32_dec_le(v___x_145_, v___x_144_);
if (v___x_146_ == 0)
{
goto v___jp_129_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_108_:
{
uint32_t v___x_109_; uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_109_ = 43;
v___x_110_ = lean_unbox_uint32(v_head_106_);
v___x_111_ = lean_uint32_dec_eq(v___x_110_, v___x_109_);
if (v___x_111_ == 0)
{
uint32_t v___x_112_; uint32_t v___x_113_; uint8_t v___x_114_; 
v___x_112_ = 45;
v___x_113_ = lean_unbox_uint32(v_head_106_);
v___x_114_ = lean_uint32_dec_eq(v___x_113_, v___x_112_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; uint32_t v___x_116_; uint8_t v___x_117_; 
v___x_115_ = 46;
v___x_116_ = lean_unbox_uint32(v_head_106_);
v___x_117_ = lean_uint32_dec_eq(v___x_116_, v___x_115_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
v___jp_121_:
{
uint32_t v___x_122_; uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_122_ = 97;
v___x_123_ = lean_unbox_uint32(v_head_106_);
v___x_124_ = lean_uint32_dec_le(v___x_122_, v___x_123_);
if (v___x_124_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_125_; uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_125_ = 122;
v___x_126_ = lean_unbox_uint32(v_head_106_);
v___x_127_ = lean_uint32_dec_le(v___x_126_, v___x_125_);
if (v___x_127_ == 0)
{
goto v___jp_108_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_129_:
{
uint32_t v___x_130_; uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_130_ = 65;
v___x_131_ = lean_unbox_uint32(v_head_106_);
v___x_132_ = lean_uint32_dec_le(v___x_130_, v___x_131_);
if (v___x_132_ == 0)
{
goto v___jp_121_;
}
else
{
uint32_t v___x_133_; uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_133_ = 90;
v___x_134_ = lean_unbox_uint32(v_head_106_);
v___x_135_ = lean_uint32_dec_le(v___x_134_, v___x_133_);
if (v___x_135_ == 0)
{
goto v___jp_121_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v_x_148_);
lean_dec(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object* v_s_151_, lean_object* v_p_152_){
_start:
{
lean_object* v___y_154_; lean_object* v___y_155_; uint32_t v___y_159_; lean_object* v___x_171_; uint8_t v_decide_172_; 
v___x_171_ = lean_string_utf8_byte_size(v_s_151_);
v_decide_172_ = lean_nat_dec_eq(v_p_152_, v___x_171_);
if (v_decide_172_ == 0)
{
uint32_t v___x_173_; uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_173_ = lean_string_utf8_get_fast(v_s_151_, v_p_152_);
v___x_174_ = 65;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v___x_173_);
if (v___x_175_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 90;
v___x_177_ = lean_uint32_dec_le(v___x_173_, v___x_176_);
if (v___x_177_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_178_; uint32_t v___x_179_; 
v___x_178_ = 32;
v___x_179_ = lean_uint32_add(v___x_173_, v___x_178_);
v___y_159_ = v___x_179_;
goto v___jp_158_;
}
}
}
else
{
lean_dec(v_p_152_);
return v_s_151_;
}
v___jp_153_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_nat_add(v_p_152_, v___y_155_);
lean_dec(v_p_152_);
v_s_151_ = v___y_154_;
v_p_152_ = v___x_156_;
goto _start;
}
v___jp_158_:
{
lean_object* v___x_160_; uint32_t v___x_161_; uint8_t v___x_162_; 
lean_inc(v_p_152_);
v___x_160_ = lean_string_utf8_set(v_s_151_, v_p_152_, v___y_159_);
v___x_161_ = 127;
v___x_162_ = lean_uint32_dec_le(v___y_159_, v___x_161_);
if (v___x_162_ == 0)
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 2047;
v___x_164_ = lean_uint32_dec_le(v___y_159_, v___x_163_);
if (v___x_164_ == 0)
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 65535;
v___x_166_ = lean_uint32_dec_le(v___y_159_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_unsigned_to_nat(4u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_167_;
goto v___jp_153_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_unsigned_to_nat(3u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_168_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_unsigned_to_nat(2u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_169_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_170_;
goto v___jp_153_;
}
}
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_189_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6));
v___x_190_ = lean_unsigned_to_nat(46u);
v___x_191_ = lean_unsigned_to_nat(193u);
v___x_192_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5));
v___x_193_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4));
v___x_194_ = l_mkPanicMessageWithDecl(v___x_193_, v___x_192_, v___x_191_, v___x_190_, v___x_189_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object* v_config_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___y_205_; lean_object* v___y_209_; uint32_t v___y_210_; lean_object* v___y_211_; lean_object* v_maxSchemeLength_217_; lean_object* v___x_218_; lean_object* v___y_220_; lean_object* v___y_221_; uint8_t v___x_237_; lean_object* v___y_239_; lean_object* v___y_240_; uint8_t v___y_241_; lean_object* v_lower_242_; lean_object* v_upper_243_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; uint8_t v___y_260_; lean_object* v___y_261_; 
v_maxSchemeLength_217_ = lean_ctor_get(v_config_199_, 0);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_nat_dec_eq(v_maxSchemeLength_217_, v___x_218_);
if (v___x_237_ == 0)
{
lean_object* v_array_263_; lean_object* v_idx_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_array_263_ = lean_ctor_get(v_a_200_, 0);
v_idx_264_ = lean_ctor_get(v_a_200_, 1);
v___x_265_ = lean_byte_array_size(v_array_263_);
v___x_266_ = lean_nat_dec_lt(v_idx_264_, v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_a_200_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
else
{
lean_object* v___f_269_; lean_object* v_pos_271_; uint8_t v_res_272_; uint8_t v_c_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_it_x27_287_; uint8_t v___x_293_; uint8_t v___x_294_; 
v___f_269_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8));
v_c_284_ = lean_byte_array_fget(v_array_263_, v_idx_264_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_idx_264_, v___x_285_);
lean_inc_ref(v_array_263_);
v_it_x27_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_287_, 0, v_array_263_);
lean_ctor_set(v_it_x27_287_, 1, v___x_286_);
v___x_293_ = 65;
v___x_294_ = lean_uint8_dec_le(v___x_293_, v_c_284_);
if (v___x_294_ == 0)
{
goto v___jp_288_;
}
else
{
uint8_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 90;
v___x_296_ = lean_uint8_dec_le(v_c_284_, v___x_295_);
if (v___x_296_ == 0)
{
goto v___jp_288_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
v___jp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_snd_276_; lean_object* v_fst_277_; lean_object* v_fst_278_; lean_object* v_array_279_; lean_object* v_idx_280_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_273_ = lean_unsigned_to_nat(1u);
v___x_274_ = lean_nat_sub(v_maxSchemeLength_217_, v___x_273_);
lean_inc_ref(v_pos_271_);
v___x_275_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_269_, v___x_274_, v___x_218_, v_pos_271_);
lean_dec(v___x_274_);
v_snd_276_ = lean_ctor_get(v___x_275_, 1);
lean_inc(v_snd_276_);
v_fst_277_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_fst_277_);
lean_dec_ref(v___x_275_);
v_fst_278_ = lean_ctor_get(v_snd_276_, 0);
lean_inc(v_fst_278_);
lean_dec(v_snd_276_);
v_array_279_ = lean_ctor_get(v_pos_271_, 0);
lean_inc_ref(v_array_279_);
v_idx_280_ = lean_ctor_get(v_pos_271_, 1);
lean_inc(v_idx_280_);
lean_dec_ref(v_pos_271_);
v___x_281_ = lean_nat_add(v_idx_280_, v_fst_277_);
lean_dec(v_fst_277_);
v___x_282_ = lean_byte_array_size(v_array_279_);
v___x_283_ = lean_nat_dec_le(v_idx_280_, v___x_218_);
if (v___x_283_ == 0)
{
v___y_256_ = v_array_279_;
v___y_257_ = v_fst_278_;
v___y_258_ = v___x_282_;
v___y_259_ = v___x_281_;
v___y_260_ = v_res_272_;
v___y_261_ = v_idx_280_;
goto v___jp_255_;
}
else
{
lean_dec(v_idx_280_);
v___y_256_ = v_array_279_;
v___y_257_ = v_fst_278_;
v___y_258_ = v___x_282_;
v___y_259_ = v___x_281_;
v___y_260_ = v_res_272_;
v___y_261_ = v___x_218_;
goto v___jp_255_;
}
}
v___jp_288_:
{
uint8_t v___x_289_; uint8_t v___x_290_; 
v___x_289_ = 97;
v___x_290_ = lean_uint8_dec_le(v___x_289_, v_c_284_);
if (v___x_290_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
uint8_t v___x_291_; uint8_t v___x_292_; 
v___x_291_ = 122;
v___x_292_ = lean_uint8_dec_le(v_c_284_, v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10));
v___x_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_298_, 0, v_a_200_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
return v___x_298_;
}
v___jp_201_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1));
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_200_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3));
v___x_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_207_, 0, v___y_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
return v___x_207_;
}
v___jp_208_:
{
uint32_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 97;
v___x_213_ = lean_uint32_dec_le(v___x_212_, v___y_210_);
if (v___x_213_ == 0)
{
lean_dec_ref(v___y_211_);
v___y_205_ = v___y_209_;
goto v___jp_204_;
}
else
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 122;
v___x_215_ = lean_uint32_dec_le(v___y_210_, v___x_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v___y_211_);
v___y_205_ = v___y_209_;
goto v___jp_204_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___y_209_);
lean_ctor_set(v___x_216_, 1, v___y_211_);
return v___x_216_;
}
}
}
v___jp_219_:
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___y_221_, v___x_218_);
lean_inc_ref(v___x_222_);
v___x_223_ = l_Std_Http_Internal_instDecidableIsLowerCase(v___x_222_);
if (v___x_223_ == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_224_; uint8_t v___x_225_; 
lean_inc_ref(v___x_222_);
v___x_224_ = l_String_toListImpl(v___x_222_);
v___x_225_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v___x_224_);
if (v___x_225_ == 0)
{
lean_dec(v___x_224_);
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = l_List_head_x3f___redArg(v___x_224_);
lean_dec(v___x_224_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v_val_227_; uint32_t v___x_228_; uint32_t v___x_229_; uint8_t v___x_230_; 
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = 65;
v___x_229_ = lean_unbox_uint32(v_val_227_);
v___x_230_ = lean_uint32_dec_le(v___x_228_, v___x_229_);
if (v___x_230_ == 0)
{
uint32_t v___x_231_; 
v___x_231_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___y_220_;
v___y_210_ = v___x_231_;
v___y_211_ = v___x_222_;
goto v___jp_208_;
}
else
{
uint32_t v___x_232_; uint32_t v___x_233_; uint8_t v___x_234_; 
v___x_232_ = 90;
v___x_233_ = lean_unbox_uint32(v_val_227_);
v___x_234_ = lean_uint32_dec_le(v___x_233_, v___x_232_);
if (v___x_234_ == 0)
{
uint32_t v___x_235_; 
v___x_235_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___y_220_;
v___y_210_ = v___x_235_;
v___y_211_ = v___x_222_;
goto v___jp_208_;
}
else
{
lean_object* v___x_236_; 
lean_dec(v_val_227_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_220_);
lean_ctor_set(v___x_236_, 1, v___x_222_);
return v___x_236_;
}
}
}
}
}
}
v___jp_238_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_244_ = l_ByteArray_toByteSlice(v___y_239_, v_lower_242_, v_upper_243_);
v___x_245_ = l_ByteArray_empty;
v___x_246_ = lean_byte_array_push(v___x_245_, v___y_241_);
v___x_247_ = l_ByteSlice_toByteArray(v___x_244_);
v___x_248_ = lean_byte_array_size(v___x_246_);
v___x_249_ = lean_byte_array_size(v___x_247_);
v___x_250_ = lean_byte_array_copy_slice(v___x_247_, v___x_218_, v___x_246_, v___x_248_, v___x_249_, v___x_237_);
lean_dec_ref(v___x_247_);
v___x_251_ = lean_string_validate_utf8(v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v___x_250_);
v___x_252_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_253_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_252_);
v___y_220_ = v___y_240_;
v___y_221_ = v___x_253_;
goto v___jp_219_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_string_from_utf8_unchecked(v___x_250_);
v___y_220_ = v___y_240_;
v___y_221_ = v___x_254_;
goto v___jp_219_;
}
}
v___jp_255_:
{
uint8_t v___x_262_; 
v___x_262_ = lean_nat_dec_le(v___y_259_, v___y_258_);
if (v___x_262_ == 0)
{
lean_dec(v___y_259_);
v___y_239_ = v___y_256_;
v___y_240_ = v___y_257_;
v___y_241_ = v___y_260_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_258_;
goto v___jp_238_;
}
else
{
lean_dec(v___y_258_);
v___y_239_ = v___y_256_;
v___y_240_ = v___y_257_;
v___y_241_ = v___y_260_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_259_;
goto v___jp_238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object* v_config_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_299_, v_a_300_);
lean_dec_ref(v_config_299_);
return v_res_301_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t v___y_302_){
_start:
{
uint8_t v___x_303_; uint8_t v___x_304_; 
v___x_303_ = 48;
v___x_304_ = lean_uint8_dec_le(v___x_303_, v___y_302_);
if (v___x_304_ == 0)
{
return v___x_304_;
}
else
{
uint8_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 57;
v___x_306_ = lean_uint8_dec_le(v___y_302_, v___x_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object* v___y_307_){
_start:
{
uint8_t v___y_560__boxed_308_; uint8_t v_res_309_; lean_object* v_r_310_; 
v___y_560__boxed_308_ = lean_unbox(v___y_307_);
v_res_309_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(v___y_560__boxed_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object* v_a_314_){
_start:
{
lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_snd_319_; lean_object* v_fst_320_; lean_object* v_fst_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_374_; 
v___f_315_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0));
v___x_316_ = lean_unsigned_to_nat(5u);
v___x_317_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_314_);
v___x_318_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_315_, v___x_316_, v___x_317_, v_a_314_);
v_snd_319_ = lean_ctor_get(v___x_318_, 1);
lean_inc(v_snd_319_);
v_fst_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_fst_320_);
lean_dec_ref(v___x_318_);
v_fst_321_ = lean_ctor_get(v_snd_319_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_snd_319_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_snd_319_, 1);
lean_dec(v_unused_375_);
v___x_323_ = v_snd_319_;
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_fst_321_);
lean_dec(v_snd_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___y_326_; lean_object* v_array_357_; lean_object* v_idx_358_; lean_object* v_lower_360_; lean_object* v_upper_361_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___y_371_; uint8_t v___x_373_; 
v_array_357_ = lean_ctor_get(v_a_314_, 0);
lean_inc_ref(v_array_357_);
v_idx_358_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_idx_358_);
lean_dec_ref(v_a_314_);
v___x_368_ = lean_nat_add(v_idx_358_, v_fst_320_);
lean_dec(v_fst_320_);
v___x_369_ = lean_byte_array_size(v_array_357_);
v___x_373_ = lean_nat_dec_le(v_idx_358_, v___x_317_);
if (v___x_373_ == 0)
{
v___y_371_ = v_idx_358_;
goto v___jp_370_;
}
else
{
lean_dec(v_idx_358_);
v___y_371_ = v___x_317_;
goto v___jp_370_;
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_string_utf8_byte_size(v___y_326_);
lean_inc_ref(v___y_326_);
v___x_328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_328_, 0, v___y_326_);
lean_ctor_set(v___x_328_, 1, v___x_317_);
lean_ctor_set(v___x_328_, 2, v___x_327_);
v___x_329_ = l_String_Slice_toNat_x3f(v___x_328_);
lean_dec_ref_known(v___x_328_, 3);
if (lean_obj_tag(v___x_329_) == 1)
{
lean_object* v_val_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v___y_326_);
v_val_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_350_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_val_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(65535u);
v___x_335_ = lean_nat_dec_lt(v___x_334_, v_val_330_);
if (v___x_335_ == 0)
{
uint16_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
lean_del_object(v___x_332_);
v___x_336_ = lean_uint16_of_nat(v_val_330_);
lean_dec(v_val_330_);
v___x_337_ = lean_box(v___x_336_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_337_);
v___x_339_ = v___x_323_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_341_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1));
v___x_342_ = l_Nat_reprFast(v_val_330_);
v___x_343_ = lean_string_append(v___x_341_, v___x_342_);
lean_dec_ref(v___x_342_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_343_);
v___x_345_ = v___x_332_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_349_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_347_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_345_);
v___x_347_ = v___x_323_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec(v___x_329_);
v___x_351_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2));
v___x_352_ = lean_string_append(v___x_351_, v___y_326_);
lean_dec_ref(v___y_326_);
v___x_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_353_);
v___x_355_ = v___x_323_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
v___jp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = l_ByteArray_toByteSlice(v_array_357_, v_lower_360_, v_upper_361_);
v___x_363_ = l_ByteSlice_toByteArray(v___x_362_);
v___x_364_ = lean_string_validate_utf8(v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___x_363_);
v___x_365_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_366_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_365_);
v___y_326_ = v___x_366_;
goto v___jp_325_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_string_from_utf8_unchecked(v___x_363_);
v___y_326_ = v___x_367_;
goto v___jp_325_;
}
}
v___jp_370_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_le(v___x_368_, v___x_369_);
if (v___x_372_ == 0)
{
lean_dec(v___x_368_);
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_369_;
goto v___jp_359_;
}
else
{
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_368_;
goto v___jp_359_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t v_x_376_){
_start:
{
uint8_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 58;
v___x_423_ = lean_uint8_dec_eq(v_x_376_, v___x_422_);
if (v___x_423_ == 0)
{
uint8_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 48;
v___x_425_ = lean_uint8_dec_le(v___x_424_, v_x_376_);
if (v___x_425_ == 0)
{
goto v___jp_417_;
}
else
{
uint8_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 57;
v___x_427_ = lean_uint8_dec_le(v_x_376_, v___x_426_);
if (v___x_427_ == 0)
{
goto v___jp_417_;
}
else
{
return v___x_427_;
}
}
}
else
{
uint8_t v___x_428_; 
v___x_428_ = 0;
return v___x_428_;
}
v___jp_377_:
{
uint8_t v___x_378_; uint8_t v___x_379_; 
v___x_378_ = 45;
v___x_379_ = lean_uint8_dec_eq(v_x_376_, v___x_378_);
if (v___x_379_ == 0)
{
uint8_t v___x_380_; uint8_t v___x_381_; 
v___x_380_ = 46;
v___x_381_ = lean_uint8_dec_eq(v_x_376_, v___x_380_);
if (v___x_381_ == 0)
{
uint8_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 95;
v___x_383_ = lean_uint8_dec_eq(v_x_376_, v___x_382_);
if (v___x_383_ == 0)
{
uint8_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 126;
v___x_385_ = lean_uint8_dec_eq(v_x_376_, v___x_384_);
if (v___x_385_ == 0)
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 33;
v___x_387_ = lean_uint8_dec_eq(v_x_376_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 36;
v___x_389_ = lean_uint8_dec_eq(v_x_376_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 38;
v___x_391_ = lean_uint8_dec_eq(v_x_376_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 39;
v___x_393_ = lean_uint8_dec_eq(v_x_376_, v___x_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 40;
v___x_395_ = lean_uint8_dec_eq(v_x_376_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 41;
v___x_397_ = lean_uint8_dec_eq(v_x_376_, v___x_396_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 42;
v___x_399_ = lean_uint8_dec_eq(v_x_376_, v___x_398_);
if (v___x_399_ == 0)
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 43;
v___x_401_ = lean_uint8_dec_eq(v_x_376_, v___x_400_);
if (v___x_401_ == 0)
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 44;
v___x_403_ = lean_uint8_dec_eq(v_x_376_, v___x_402_);
if (v___x_403_ == 0)
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = 59;
v___x_405_ = lean_uint8_dec_eq(v_x_376_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 61;
v___x_407_ = lean_uint8_dec_eq(v_x_376_, v___x_406_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; uint8_t v___x_409_; 
v___x_408_ = 58;
v___x_409_ = lean_uint8_dec_eq(v_x_376_, v___x_408_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 37;
v___x_411_ = lean_uint8_dec_eq(v_x_376_, v___x_410_);
return v___x_411_;
}
else
{
return v___x_409_;
}
}
else
{
return v___x_407_;
}
}
else
{
return v___x_405_;
}
}
else
{
return v___x_403_;
}
}
else
{
return v___x_401_;
}
}
else
{
return v___x_399_;
}
}
else
{
return v___x_397_;
}
}
else
{
return v___x_395_;
}
}
else
{
return v___x_393_;
}
}
else
{
return v___x_391_;
}
}
else
{
return v___x_389_;
}
}
else
{
return v___x_387_;
}
}
else
{
return v___x_385_;
}
}
else
{
return v___x_383_;
}
}
else
{
return v___x_381_;
}
}
else
{
return v___x_379_;
}
}
v___jp_412_:
{
uint8_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 65;
v___x_414_ = lean_uint8_dec_le(v___x_413_, v_x_376_);
if (v___x_414_ == 0)
{
goto v___jp_377_;
}
else
{
uint8_t v___x_415_; uint8_t v___x_416_; 
v___x_415_ = 90;
v___x_416_ = lean_uint8_dec_le(v_x_376_, v___x_415_);
if (v___x_416_ == 0)
{
goto v___jp_377_;
}
else
{
return v___x_416_;
}
}
}
v___jp_417_:
{
uint8_t v___x_418_; uint8_t v___x_419_; 
v___x_418_ = 97;
v___x_419_ = lean_uint8_dec_le(v___x_418_, v_x_376_);
if (v___x_419_ == 0)
{
goto v___jp_412_;
}
else
{
uint8_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 122;
v___x_421_ = lean_uint8_dec_le(v_x_376_, v___x_420_);
if (v___x_421_ == 0)
{
goto v___jp_412_;
}
else
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_x_boxed_430_; uint8_t v_res_431_; lean_object* v_r_432_; 
v_x_boxed_430_ = lean_unbox(v_x_429_);
v_res_431_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(v_x_boxed_430_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t v___x_433_, uint8_t v___x_434_, uint8_t v_x_435_){
_start:
{
uint8_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 48;
v___x_481_ = lean_uint8_dec_le(v___x_480_, v_x_435_);
if (v___x_481_ == 0)
{
goto v___jp_475_;
}
else
{
uint8_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 57;
v___x_483_ = lean_uint8_dec_le(v_x_435_, v___x_482_);
if (v___x_483_ == 0)
{
goto v___jp_475_;
}
else
{
return v___x_434_;
}
}
v___jp_436_:
{
uint8_t v___x_437_; uint8_t v___x_438_; 
v___x_437_ = 45;
v___x_438_ = lean_uint8_dec_eq(v_x_435_, v___x_437_);
if (v___x_438_ == 0)
{
uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = 46;
v___x_440_ = lean_uint8_dec_eq(v_x_435_, v___x_439_);
if (v___x_440_ == 0)
{
uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_441_ = 95;
v___x_442_ = lean_uint8_dec_eq(v_x_435_, v___x_441_);
if (v___x_442_ == 0)
{
uint8_t v___x_443_; uint8_t v___x_444_; 
v___x_443_ = 126;
v___x_444_ = lean_uint8_dec_eq(v_x_435_, v___x_443_);
if (v___x_444_ == 0)
{
uint8_t v___x_445_; uint8_t v___x_446_; 
v___x_445_ = 33;
v___x_446_ = lean_uint8_dec_eq(v_x_435_, v___x_445_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = 36;
v___x_448_ = lean_uint8_dec_eq(v_x_435_, v___x_447_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; uint8_t v___x_450_; 
v___x_449_ = 38;
v___x_450_ = lean_uint8_dec_eq(v_x_435_, v___x_449_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; uint8_t v___x_452_; 
v___x_451_ = 39;
v___x_452_ = lean_uint8_dec_eq(v_x_435_, v___x_451_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = 40;
v___x_454_ = lean_uint8_dec_eq(v_x_435_, v___x_453_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = 41;
v___x_456_ = lean_uint8_dec_eq(v_x_435_, v___x_455_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; uint8_t v___x_458_; 
v___x_457_ = 42;
v___x_458_ = lean_uint8_dec_eq(v_x_435_, v___x_457_);
if (v___x_458_ == 0)
{
uint8_t v___x_459_; uint8_t v___x_460_; 
v___x_459_ = 43;
v___x_460_ = lean_uint8_dec_eq(v_x_435_, v___x_459_);
if (v___x_460_ == 0)
{
uint8_t v___x_461_; uint8_t v___x_462_; 
v___x_461_ = 44;
v___x_462_ = lean_uint8_dec_eq(v_x_435_, v___x_461_);
if (v___x_462_ == 0)
{
uint8_t v___x_463_; uint8_t v___x_464_; 
v___x_463_ = 59;
v___x_464_ = lean_uint8_dec_eq(v_x_435_, v___x_463_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = 61;
v___x_466_ = lean_uint8_dec_eq(v_x_435_, v___x_465_);
if (v___x_466_ == 0)
{
uint8_t v___x_467_; 
v___x_467_ = lean_uint8_dec_eq(v_x_435_, v___x_433_);
if (v___x_467_ == 0)
{
uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 37;
v___x_469_ = lean_uint8_dec_eq(v_x_435_, v___x_468_);
return v___x_469_;
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
v___jp_470_:
{
uint8_t v___x_471_; uint8_t v___x_472_; 
v___x_471_ = 65;
v___x_472_ = lean_uint8_dec_le(v___x_471_, v_x_435_);
if (v___x_472_ == 0)
{
goto v___jp_436_;
}
else
{
uint8_t v___x_473_; uint8_t v___x_474_; 
v___x_473_ = 90;
v___x_474_ = lean_uint8_dec_le(v_x_435_, v___x_473_);
if (v___x_474_ == 0)
{
goto v___jp_436_;
}
else
{
return v___x_434_;
}
}
}
v___jp_475_:
{
uint8_t v___x_476_; uint8_t v___x_477_; 
v___x_476_ = 97;
v___x_477_ = lean_uint8_dec_le(v___x_476_, v_x_435_);
if (v___x_477_ == 0)
{
goto v___jp_470_;
}
else
{
uint8_t v___x_478_; uint8_t v___x_479_; 
v___x_478_ = 122;
v___x_479_ = lean_uint8_dec_le(v_x_435_, v___x_478_);
if (v___x_479_ == 0)
{
goto v___jp_470_;
}
else
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object* v___x_484_, lean_object* v___x_485_, lean_object* v_x_486_){
_start:
{
uint8_t v___x_4602__boxed_487_; uint8_t v___x_4603__boxed_488_; uint8_t v_x_boxed_489_; uint8_t v_res_490_; lean_object* v_r_491_; 
v___x_4602__boxed_487_ = lean_unbox(v___x_484_);
v___x_4603__boxed_488_ = lean_unbox(v___x_485_);
v_x_boxed_489_ = lean_unbox(v_x_486_);
v_res_490_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(v___x_4602__boxed_487_, v___x_4603__boxed_488_, v_x_boxed_489_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object* v_config_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___y_499_; lean_object* v_userPassEncoded_500_; lean_object* v___y_501_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v_lower_508_; lean_object* v_upper_509_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_524_; lean_object* v_pos_525_; lean_object* v_maxUserInfoLength_527_; lean_object* v___f_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v_snd_531_; lean_object* v_fst_532_; lean_object* v_fst_533_; lean_object* v_array_534_; lean_object* v_idx_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_583_; 
v_maxUserInfoLength_527_ = lean_ctor_get(v_config_496_, 2);
v___f_528_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2));
v___x_529_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_497_);
v___x_530_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_528_, v_maxUserInfoLength_527_, v___x_529_, v_a_497_);
v_snd_531_ = lean_ctor_get(v___x_530_, 1);
lean_inc(v_snd_531_);
v_fst_532_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_fst_532_);
lean_dec_ref(v___x_530_);
v_fst_533_ = lean_ctor_get(v_snd_531_, 0);
lean_inc(v_fst_533_);
lean_dec(v_snd_531_);
v_array_534_ = lean_ctor_get(v_a_497_, 0);
v_idx_535_ = lean_ctor_get(v_a_497_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_497_);
if (v_isSharedCheck_583_ == 0)
{
v___x_537_ = v_a_497_;
v_isShared_538_ = v_isSharedCheck_583_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_idx_535_);
lean_inc(v_array_534_);
lean_dec(v_a_497_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_583_;
goto v_resetjp_536_;
}
v___jp_498_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___y_499_);
lean_ctor_set(v___x_502_, 1, v_userPassEncoded_500_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___y_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
return v___x_503_;
}
v___jp_504_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = l_ByteArray_toByteSlice(v___y_506_, v_lower_508_, v_upper_509_);
v___x_511_ = l_ByteSlice_toByteArray(v___x_510_);
v___x_512_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_511_);
if (lean_obj_tag(v___x_512_) == 1)
{
v___y_499_ = v___y_505_;
v_userPassEncoded_500_ = v___x_512_;
v___y_501_ = v___y_507_;
goto v___jp_498_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v___x_512_);
lean_dec_ref(v___y_505_);
v___x_513_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_507_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
}
v___jp_515_:
{
uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_le(v___y_516_, v___y_520_);
if (v___x_522_ == 0)
{
lean_dec(v___y_516_);
v___y_505_ = v___y_517_;
v___y_506_ = v___y_518_;
v___y_507_ = v___y_519_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_520_;
goto v___jp_504_;
}
else
{
lean_dec(v___y_520_);
v___y_505_ = v___y_517_;
v___y_506_ = v___y_518_;
v___y_507_ = v___y_519_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_516_;
goto v___jp_504_;
}
}
v___jp_523_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_box(0);
v___y_499_ = v___y_524_;
v_userPassEncoded_500_ = v___x_526_;
v___y_501_ = v_pos_525_;
goto v___jp_498_;
}
v_resetjp_536_:
{
lean_object* v_lower_540_; lean_object* v_upper_541_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___y_580_; uint8_t v___x_582_; 
v___x_577_ = lean_nat_add(v_idx_535_, v_fst_532_);
lean_dec(v_fst_532_);
v___x_578_ = lean_byte_array_size(v_array_534_);
v___x_582_ = lean_nat_dec_le(v_idx_535_, v___x_529_);
if (v___x_582_ == 0)
{
v___y_580_ = v_idx_535_;
goto v___jp_579_;
}
else
{
lean_dec(v_idx_535_);
v___y_580_ = v___x_529_;
goto v___jp_579_;
}
v___jp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = l_ByteArray_toByteSlice(v_array_534_, v_lower_540_, v_upper_541_);
v___x_543_ = l_ByteSlice_toByteArray(v___x_542_);
v___x_544_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_543_);
if (lean_obj_tag(v___x_544_) == 1)
{
lean_object* v_val_545_; lean_object* v_array_546_; lean_object* v_idx_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
lean_del_object(v___x_537_);
v_val_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v___x_544_, 1);
v_array_546_ = lean_ctor_get(v_fst_533_, 0);
v_idx_547_ = lean_ctor_get(v_fst_533_, 1);
v___x_548_ = lean_byte_array_size(v_array_546_);
v___x_549_ = lean_nat_dec_lt(v_idx_547_, v___x_548_);
if (v___x_549_ == 0)
{
v___y_524_ = v_val_545_;
v_pos_525_ = v_fst_533_;
goto v___jp_523_;
}
else
{
uint8_t v___x_550_; uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_550_ = lean_byte_array_fget(v_array_546_, v_idx_547_);
v___x_551_ = 58;
v___x_552_ = lean_uint8_dec_eq(v___x_550_, v___x_551_);
if (v___x_552_ == 0)
{
v___y_524_ = v_val_545_;
v_pos_525_ = v_fst_533_;
goto v___jp_523_;
}
else
{
lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_570_; 
lean_inc(v_idx_547_);
lean_inc_ref(v_array_546_);
v_isSharedCheck_570_ = !lean_is_exclusive(v_fst_533_);
if (v_isSharedCheck_570_ == 0)
{
lean_object* v_unused_571_; lean_object* v_unused_572_; 
v_unused_571_ = lean_ctor_get(v_fst_533_, 1);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_fst_533_, 0);
lean_dec(v_unused_572_);
v___x_554_ = v_fst_533_;
v_isShared_555_ = v_isSharedCheck_570_;
goto v_resetjp_553_;
}
else
{
lean_dec(v_fst_533_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_570_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___f_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_556_ = lean_box(v___x_551_);
v___x_557_ = lean_box(v___x_549_);
v___f_558_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed), 3, 2);
lean_closure_set(v___f_558_, 0, v___x_556_);
lean_closure_set(v___f_558_, 1, v___x_557_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_idx_547_, v___x_559_);
lean_dec(v_idx_547_);
lean_inc(v___x_560_);
lean_inc_ref(v_array_546_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_560_);
v___x_562_ = v___x_554_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_array_546_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v___x_560_);
v___x_562_ = v_reuseFailAlloc_569_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_563_; lean_object* v_snd_564_; lean_object* v_fst_565_; lean_object* v_fst_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_563_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_558_, v_maxUserInfoLength_527_, v___x_529_, v___x_562_);
v_snd_564_ = lean_ctor_get(v___x_563_, 1);
lean_inc(v_snd_564_);
v_fst_565_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_fst_565_);
lean_dec_ref(v___x_563_);
v_fst_566_ = lean_ctor_get(v_snd_564_, 0);
lean_inc(v_fst_566_);
lean_dec(v_snd_564_);
v___x_567_ = lean_nat_add(v___x_560_, v_fst_565_);
lean_dec(v_fst_565_);
v___x_568_ = lean_nat_dec_le(v___x_560_, v___x_529_);
if (v___x_568_ == 0)
{
v___y_516_ = v___x_567_;
v___y_517_ = v_val_545_;
v___y_518_ = v_array_546_;
v___y_519_ = v_fst_566_;
v___y_520_ = v___x_548_;
v___y_521_ = v___x_560_;
goto v___jp_515_;
}
else
{
lean_dec(v___x_560_);
v___y_516_ = v___x_567_;
v___y_517_ = v_val_545_;
v___y_518_ = v_array_546_;
v___y_519_ = v_fst_566_;
v___y_520_ = v___x_548_;
v___y_521_ = v___x_529_;
goto v___jp_515_;
}
}
}
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec(v___x_544_);
v___x_573_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
if (v_isShared_538_ == 0)
{
lean_ctor_set_tag(v___x_537_, 1);
lean_ctor_set(v___x_537_, 1, v___x_573_);
lean_ctor_set(v___x_537_, 0, v_fst_533_);
v___x_575_ = v___x_537_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_fst_533_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
v___jp_579_:
{
uint8_t v___x_581_; 
v___x_581_ = lean_nat_dec_le(v___x_577_, v___x_578_);
if (v___x_581_ == 0)
{
lean_dec(v___x_577_);
v_lower_540_ = v___y_580_;
v_upper_541_ = v___x_578_;
goto v___jp_539_;
}
else
{
v_lower_540_ = v___y_580_;
v_upper_541_ = v___x_577_;
goto v___jp_539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object* v_config_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_584_, v_a_585_);
lean_dec_ref(v_config_584_);
return v_res_586_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t v_x_587_){
_start:
{
uint8_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = 58;
v___x_599_ = lean_uint8_dec_eq(v_x_587_, v___x_598_);
if (v___x_599_ == 0)
{
uint8_t v___x_600_; uint8_t v___x_601_; 
v___x_600_ = 46;
v___x_601_ = lean_uint8_dec_eq(v_x_587_, v___x_600_);
if (v___x_601_ == 0)
{
uint8_t v___x_602_; uint8_t v___x_603_; 
v___x_602_ = 48;
v___x_603_ = lean_uint8_dec_le(v___x_602_, v_x_587_);
if (v___x_603_ == 0)
{
goto v___jp_593_;
}
else
{
uint8_t v___x_604_; uint8_t v___x_605_; 
v___x_604_ = 57;
v___x_605_ = lean_uint8_dec_le(v_x_587_, v___x_604_);
if (v___x_605_ == 0)
{
goto v___jp_593_;
}
else
{
return v___x_605_;
}
}
}
else
{
return v___x_601_;
}
}
else
{
return v___x_599_;
}
v___jp_588_:
{
uint8_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 65;
v___x_590_ = lean_uint8_dec_le(v___x_589_, v_x_587_);
if (v___x_590_ == 0)
{
return v___x_590_;
}
else
{
uint8_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 70;
v___x_592_ = lean_uint8_dec_le(v_x_587_, v___x_591_);
return v___x_592_;
}
}
v___jp_593_:
{
uint8_t v___x_594_; uint8_t v___x_595_; 
v___x_594_ = 97;
v___x_595_ = lean_uint8_dec_le(v___x_594_, v_x_587_);
if (v___x_595_ == 0)
{
goto v___jp_588_;
}
else
{
uint8_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 102;
v___x_597_ = lean_uint8_dec_le(v_x_587_, v___x_596_);
if (v___x_597_ == 0)
{
goto v___jp_588_;
}
else
{
return v___x_597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object* v_x_606_){
_start:
{
uint8_t v_x_boxed_607_; uint8_t v_res_608_; lean_object* v_r_609_; 
v_x_boxed_607_ = lean_unbox(v_x_606_);
v_res_608_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(v_x_boxed_607_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object* v_a_621_){
_start:
{
lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v_array_632_; lean_object* v_idx_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_array_632_ = lean_ctor_get(v_a_621_, 0);
v_idx_633_ = lean_ctor_get(v_a_621_, 1);
v___x_634_ = lean_byte_array_size(v_array_632_);
v___x_635_ = lean_nat_dec_lt(v_idx_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_box(0);
v___x_637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_637_, 0, v_a_621_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
return v___x_637_;
}
else
{
uint8_t v___x_638_; uint8_t v_got_639_; uint8_t v___x_640_; 
v___x_638_ = 91;
v_got_639_ = lean_byte_array_fget(v_array_632_, v_idx_633_);
v___x_640_ = lean_uint8_dec_eq(v_got_639_, v___x_638_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2));
v___x_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_642_, 0, v_a_621_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_718_; 
lean_inc(v_idx_633_);
lean_inc_ref(v_array_632_);
v_isSharedCheck_718_ = !lean_is_exclusive(v_a_621_);
if (v_isSharedCheck_718_ == 0)
{
lean_object* v_unused_719_; lean_object* v_unused_720_; 
v_unused_719_ = lean_ctor_get(v_a_621_, 1);
lean_dec(v_unused_719_);
v_unused_720_ = lean_ctor_get(v_a_621_, 0);
lean_dec(v_unused_720_);
v___x_644_ = v_a_621_;
v_isShared_645_ = v_isSharedCheck_718_;
goto v_resetjp_643_;
}
else
{
lean_dec(v_a_621_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_718_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___f_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___f_646_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3));
v___x_647_ = lean_unsigned_to_nat(1u);
v___x_648_ = lean_nat_add(v_idx_633_, v___x_647_);
lean_dec(v_idx_633_);
lean_inc(v___x_648_);
lean_inc_ref(v_array_632_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v___x_648_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_array_632_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_717_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v_snd_654_; lean_object* v_fst_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_716_; 
v___x_651_ = lean_unsigned_to_nat(256u);
v___x_652_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_650_);
v___x_653_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_646_, v___x_651_, v___x_652_, v___x_650_);
v_snd_654_ = lean_ctor_get(v___x_653_, 1);
v_fst_655_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_716_ == 0)
{
v___x_657_ = v___x_653_;
v_isShared_658_ = v_isSharedCheck_716_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snd_654_);
lean_inc(v_fst_655_);
lean_dec(v___x_653_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_716_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_fst_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_714_; 
v_fst_659_ = lean_ctor_get(v_snd_654_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v_snd_654_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; 
v_unused_715_ = lean_ctor_get(v_snd_654_, 1);
lean_dec(v_unused_715_);
v___x_661_ = v_snd_654_;
v_isShared_662_ = v_isSharedCheck_714_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_fst_659_);
lean_dec(v_snd_654_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_714_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___y_664_; uint8_t v___x_698_; 
v___x_698_ = lean_nat_dec_eq(v_fst_655_, v___x_652_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___y_701_; uint8_t v___x_709_; 
lean_dec_ref(v___x_650_);
v___x_699_ = lean_nat_add(v___x_648_, v_fst_655_);
lean_dec(v_fst_655_);
v___x_709_ = lean_nat_dec_le(v___x_648_, v___x_652_);
if (v___x_709_ == 0)
{
v___y_701_ = v___x_648_;
goto v___jp_700_;
}
else
{
lean_dec(v___x_648_);
v___y_701_ = v___x_652_;
goto v___jp_700_;
}
v___jp_700_:
{
uint8_t v___x_702_; 
v___x_702_ = lean_nat_dec_le(v___x_699_, v___x_634_);
if (v___x_702_ == 0)
{
lean_object* v___x_704_; 
lean_dec(v___x_699_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_634_);
lean_ctor_set(v___x_657_, 0, v___y_701_);
v___x_704_ = v___x_657_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___y_701_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_634_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v___y_664_ = v___x_704_;
goto v___jp_663_;
}
}
else
{
lean_object* v___x_707_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_699_);
lean_ctor_set(v___x_657_, 0, v___y_701_);
v___x_707_ = v___x_657_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___y_701_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v___x_699_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v___y_664_ = v___x_707_;
goto v___jp_663_;
}
}
}
}
else
{
lean_object* v___x_710_; lean_object* v___x_712_; 
lean_del_object(v___x_661_);
lean_dec(v_fst_659_);
lean_dec(v_fst_655_);
lean_dec(v___x_648_);
lean_dec_ref(v_array_632_);
v___x_710_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 1);
lean_ctor_set(v___x_657_, 1, v___x_710_);
lean_ctor_set(v___x_657_, 0, v___x_650_);
v___x_712_ = v___x_657_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
v___jp_663_:
{
lean_object* v_array_665_; lean_object* v_idx_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_array_665_ = lean_ctor_get(v_fst_659_, 0);
v_idx_666_ = lean_ctor_get(v_fst_659_, 1);
v___x_667_ = lean_byte_array_size(v_array_665_);
v___x_668_ = lean_nat_dec_lt(v_idx_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_671_; 
lean_dec_ref(v___y_664_);
lean_dec_ref(v_array_632_);
v___x_669_ = lean_box(0);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 1, v___x_669_);
v___x_671_ = v___x_661_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_fst_659_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
else
{
uint8_t v___x_673_; uint8_t v_got_674_; uint8_t v___x_675_; 
v___x_673_ = 93;
v_got_674_ = lean_byte_array_fget(v_array_665_, v_idx_666_);
v___x_675_ = lean_uint8_dec_eq(v_got_674_, v___x_673_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_678_; 
lean_dec_ref(v___y_664_);
lean_dec_ref(v_array_632_);
v___x_676_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5));
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 1, v___x_676_);
v___x_678_ = v___x_661_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_fst_659_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
else
{
lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_695_; 
lean_inc(v_idx_666_);
lean_inc_ref(v_array_665_);
lean_del_object(v___x_661_);
v_isSharedCheck_695_ = !lean_is_exclusive(v_fst_659_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; lean_object* v_unused_697_; 
v_unused_696_ = lean_ctor_get(v_fst_659_, 1);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v_fst_659_, 0);
lean_dec(v_unused_697_);
v___x_681_ = v_fst_659_;
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
else
{
lean_dec(v_fst_659_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_lower_683_; lean_object* v_upper_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v_lower_683_ = lean_ctor_get(v___y_664_, 0);
lean_inc(v_lower_683_);
v_upper_684_ = lean_ctor_get(v___y_664_, 1);
lean_inc(v_upper_684_);
lean_dec_ref(v___y_664_);
v___x_685_ = l_ByteArray_toByteSlice(v_array_632_, v_lower_683_, v_upper_684_);
v___x_686_ = lean_nat_add(v_idx_666_, v___x_647_);
lean_dec(v_idx_666_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_686_);
v___x_688_ = v___x_681_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_array_665_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_694_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = l_ByteSlice_toByteArray(v___x_685_);
v___x_690_ = lean_string_validate_utf8(v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec_ref(v___x_689_);
v___x_691_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_692_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_691_);
v___y_623_ = v___x_688_;
v___y_624_ = v___x_692_;
goto v___jp_622_;
}
else
{
lean_object* v___x_693_; 
v___x_693_ = lean_string_from_utf8_unchecked(v___x_689_);
v___y_623_ = v___x_688_;
v___y_624_ = v___x_693_;
goto v___jp_622_;
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
v___jp_622_:
{
lean_object* v___x_625_; 
v___x_625_ = lean_uv_pton_v6(v___y_624_);
if (lean_obj_tag(v___x_625_) == 1)
{
lean_object* v_val_626_; lean_object* v___x_627_; 
lean_dec_ref(v___y_624_);
v_val_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_val_626_);
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___y_623_);
lean_ctor_set(v___x_627_, 1, v_val_626_);
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v___x_625_);
v___x_628_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0));
v___x_629_ = lean_string_append(v___x_628_, v___y_624_);
lean_dec_ref(v___y_624_);
v___x_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_631_, 0, v___y_623_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
return v___x_631_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(uint8_t v_x_721_){
_start:
{
uint8_t v___x_722_; uint8_t v___x_723_; 
v___x_722_ = 46;
v___x_723_ = lean_uint8_dec_eq(v_x_721_, v___x_722_);
if (v___x_723_ == 0)
{
uint8_t v___x_724_; uint8_t v___x_725_; 
v___x_724_ = 48;
v___x_725_ = lean_uint8_dec_le(v___x_724_, v_x_721_);
if (v___x_725_ == 0)
{
return v___x_725_;
}
else
{
uint8_t v___x_726_; uint8_t v___x_727_; 
v___x_726_ = 57;
v___x_727_ = lean_uint8_dec_le(v_x_721_, v___x_726_);
return v___x_727_;
}
}
else
{
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed(lean_object* v_x_728_){
_start:
{
uint8_t v_x_boxed_729_; uint8_t v_res_730_; lean_object* v_r_731_; 
v_x_boxed_729_ = lean_unbox(v_x_728_);
v_res_730_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(v_x_boxed_729_);
v_r_731_ = lean_box(v_res_730_);
return v_r_731_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(lean_object* v_a_734_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v_snd_739_; lean_object* v_fst_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_785_; 
v___f_735_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0));
v___x_736_ = lean_unsigned_to_nat(256u);
v___x_737_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_734_);
v___x_738_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_735_, v___x_736_, v___x_737_, v_a_734_);
v_snd_739_ = lean_ctor_get(v___x_738_, 1);
v_fst_740_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_785_ == 0)
{
v___x_742_ = v___x_738_;
v_isShared_743_ = v_isSharedCheck_785_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_snd_739_);
lean_inc(v_fst_740_);
lean_dec(v___x_738_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_785_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v_fst_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_783_; 
v_fst_744_ = lean_ctor_get(v_snd_739_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_snd_739_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_snd_739_, 1);
lean_dec(v_unused_784_);
v___x_746_ = v_snd_739_;
v_isShared_747_ = v_isSharedCheck_783_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_fst_744_);
lean_dec(v_snd_739_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_783_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___y_749_; uint8_t v___x_761_; 
v___x_761_ = lean_nat_dec_eq(v_fst_740_, v___x_737_);
if (v___x_761_ == 0)
{
lean_object* v_array_762_; lean_object* v_idx_763_; lean_object* v_lower_765_; lean_object* v_upper_766_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___y_776_; uint8_t v___x_778_; 
lean_del_object(v___x_742_);
v_array_762_ = lean_ctor_get(v_a_734_, 0);
lean_inc_ref(v_array_762_);
v_idx_763_ = lean_ctor_get(v_a_734_, 1);
lean_inc(v_idx_763_);
lean_dec_ref(v_a_734_);
v___x_773_ = lean_nat_add(v_idx_763_, v_fst_740_);
lean_dec(v_fst_740_);
v___x_774_ = lean_byte_array_size(v_array_762_);
v___x_778_ = lean_nat_dec_le(v_idx_763_, v___x_737_);
if (v___x_778_ == 0)
{
v___y_776_ = v_idx_763_;
goto v___jp_775_;
}
else
{
lean_dec(v_idx_763_);
v___y_776_ = v___x_737_;
goto v___jp_775_;
}
v___jp_764_:
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_767_ = l_ByteArray_toByteSlice(v_array_762_, v_lower_765_, v_upper_766_);
v___x_768_ = l_ByteSlice_toByteArray(v___x_767_);
v___x_769_ = lean_string_validate_utf8(v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; 
lean_dec_ref(v___x_768_);
v___x_770_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_771_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_770_);
v___y_749_ = v___x_771_;
goto v___jp_748_;
}
else
{
lean_object* v___x_772_; 
v___x_772_ = lean_string_from_utf8_unchecked(v___x_768_);
v___y_749_ = v___x_772_;
goto v___jp_748_;
}
}
v___jp_775_:
{
uint8_t v___x_777_; 
v___x_777_ = lean_nat_dec_le(v___x_773_, v___x_774_);
if (v___x_777_ == 0)
{
lean_dec(v___x_773_);
v_lower_765_ = v___y_776_;
v_upper_766_ = v___x_774_;
goto v___jp_764_;
}
else
{
v_lower_765_ = v___y_776_;
v_upper_766_ = v___x_773_;
goto v___jp_764_;
}
}
}
else
{
lean_object* v___x_779_; lean_object* v___x_781_; 
lean_del_object(v___x_746_);
lean_dec(v_fst_744_);
lean_dec(v_fst_740_);
v___x_779_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 1);
lean_ctor_set(v___x_742_, 1, v___x_779_);
lean_ctor_set(v___x_742_, 0, v_a_734_);
v___x_781_ = v___x_742_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_734_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
v___jp_748_:
{
lean_object* v___x_750_; 
v___x_750_ = lean_uv_pton_v4(v___y_749_);
if (lean_obj_tag(v___x_750_) == 1)
{
lean_object* v_val_751_; lean_object* v___x_753_; 
lean_dec_ref(v___y_749_);
v_val_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v___x_750_, 1);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v_val_751_);
v___x_753_ = v___x_746_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_fst_744_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_val_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
lean_dec(v___x_750_);
v___x_755_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1));
v___x_756_ = lean_string_append(v___x_755_, v___y_749_);
lean_dec_ref(v___y_749_);
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
if (v_isShared_747_ == 0)
{
lean_ctor_set_tag(v___x_746_, 1);
lean_ctor_set(v___x_746_, 1, v___x_757_);
v___x_759_ = v___x_746_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_fst_744_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg(){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object* v___dummy_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v_res_791_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0(void){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object* v_s_793_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object* v_s_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(v_s_795_);
lean_dec_ref(v_s_795_);
return v_res_796_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t v___x_797_, uint8_t v_x_798_){
_start:
{
uint8_t v___x_814_; uint8_t v___x_815_; 
v___x_814_ = 48;
v___x_815_ = lean_uint8_dec_le(v___x_814_, v_x_798_);
if (v___x_815_ == 0)
{
goto v___jp_809_;
}
else
{
uint8_t v___x_816_; uint8_t v___x_817_; 
v___x_816_ = 57;
v___x_817_ = lean_uint8_dec_le(v_x_798_, v___x_816_);
if (v___x_817_ == 0)
{
goto v___jp_809_;
}
else
{
return v___x_797_;
}
}
v___jp_799_:
{
uint8_t v___x_800_; uint8_t v___x_801_; 
v___x_800_ = 45;
v___x_801_ = lean_uint8_dec_eq(v_x_798_, v___x_800_);
if (v___x_801_ == 0)
{
uint8_t v___x_802_; uint8_t v___x_803_; 
v___x_802_ = 46;
v___x_803_ = lean_uint8_dec_eq(v_x_798_, v___x_802_);
return v___x_803_;
}
else
{
return v___x_797_;
}
}
v___jp_804_:
{
uint8_t v___x_805_; uint8_t v___x_806_; 
v___x_805_ = 65;
v___x_806_ = lean_uint8_dec_le(v___x_805_, v_x_798_);
if (v___x_806_ == 0)
{
goto v___jp_799_;
}
else
{
uint8_t v___x_807_; uint8_t v___x_808_; 
v___x_807_ = 90;
v___x_808_ = lean_uint8_dec_le(v_x_798_, v___x_807_);
if (v___x_808_ == 0)
{
goto v___jp_799_;
}
else
{
return v___x_797_;
}
}
}
v___jp_809_:
{
uint8_t v___x_810_; uint8_t v___x_811_; 
v___x_810_ = 97;
v___x_811_ = lean_uint8_dec_le(v___x_810_, v_x_798_);
if (v___x_811_ == 0)
{
goto v___jp_804_;
}
else
{
uint8_t v___x_812_; uint8_t v___x_813_; 
v___x_812_ = 122;
v___x_813_ = lean_uint8_dec_le(v_x_798_, v___x_812_);
if (v___x_813_ == 0)
{
goto v___jp_804_;
}
else
{
return v___x_797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object* v___x_818_, lean_object* v_x_819_){
_start:
{
uint8_t v___x_12904__boxed_820_; uint8_t v_x_boxed_821_; uint8_t v_res_822_; lean_object* v_r_823_; 
v___x_12904__boxed_820_ = lean_unbox(v___x_818_);
v_x_boxed_821_ = lean_unbox(v_x_819_);
v_res_822_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(v___x_12904__boxed_820_, v_x_boxed_821_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object* v___x_824_, lean_object* v___x_825_, lean_object* v_a_826_, uint8_t v_b_827_){
_start:
{
if (lean_obj_tag(v_a_826_) == 0)
{
lean_object* v_currPos_828_; lean_object* v_searcher_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_843_; 
v_currPos_828_ = lean_ctor_get(v_a_826_, 0);
v_searcher_829_ = lean_ctor_get(v_a_826_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_a_826_);
if (v_isSharedCheck_843_ == 0)
{
v___x_831_ = v_a_826_;
v_isShared_832_ = v_isSharedCheck_843_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_searcher_829_);
lean_inc(v_currPos_828_);
lean_dec(v_a_826_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_843_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v___x_833_; uint8_t v_decide_834_; 
v___x_833_ = 0;
v_decide_834_ = lean_nat_dec_eq(v_searcher_829_, v___x_825_);
if (v_decide_834_ == 0)
{
uint32_t v___x_835_; uint32_t v___x_836_; uint8_t v___x_837_; 
v___x_835_ = 46;
v___x_836_ = lean_string_utf8_get_fast(v___x_824_, v_searcher_829_);
v___x_837_ = lean_uint32_dec_eq(v___x_836_, v___x_835_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_838_ = lean_string_utf8_next_fast(v___x_824_, v_searcher_829_);
lean_dec(v_searcher_829_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v___x_838_);
v___x_840_ = v___x_831_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_currPos_828_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v___x_838_);
v___x_840_ = v_reuseFailAlloc_842_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
v_a_826_ = v___x_840_;
goto _start;
}
}
else
{
lean_del_object(v___x_831_);
lean_dec(v_searcher_829_);
lean_dec(v_currPos_828_);
return v___x_833_;
}
}
else
{
lean_del_object(v___x_831_);
lean_dec(v_searcher_829_);
lean_dec(v_currPos_828_);
return v___x_833_;
}
}
}
else
{
return v_b_827_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object* v___x_844_, lean_object* v___x_845_, lean_object* v_a_846_, lean_object* v_b_847_){
_start:
{
uint8_t v_b_boxed_848_; uint8_t v_res_849_; lean_object* v_r_850_; 
v_b_boxed_848_ = lean_unbox(v_b_847_);
v_res_849_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_844_, v___x_845_, v_a_846_, v_b_boxed_848_);
lean_dec(v___x_845_);
lean_dec_ref(v___x_844_);
v_r_850_ = lean_box(v_res_849_);
return v_r_850_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t v___x_851_, lean_object* v___x_852_, lean_object* v___x_853_, lean_object* v___x_854_, lean_object* v_a_855_, uint8_t v_b_856_){
_start:
{
uint8_t v___y_858_; lean_object* v_it_859_; lean_object* v_startInclusive_860_; lean_object* v_endExclusive_861_; uint8_t v___y_866_; 
if (v___x_851_ == 0)
{
uint8_t v___x_892_; 
v___x_892_ = 1;
v___y_866_ = v___x_892_;
goto v___jp_865_;
}
else
{
uint8_t v___x_893_; 
v___x_893_ = 0;
v___y_866_ = v___x_893_;
goto v___jp_865_;
}
v___jp_857_:
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_string_utf8_extract_fast(v___x_852_, v_startInclusive_860_, v_endExclusive_861_);
lean_dec(v_endExclusive_861_);
lean_dec(v_startInclusive_860_);
v___x_863_ = l_Std_Http_URI_isValidDomainLabel(v___x_862_);
if (v___x_863_ == 0)
{
lean_dec(v_it_859_);
lean_dec(v___x_854_);
return v___x_863_;
}
else
{
v_a_855_ = v_it_859_;
v_b_856_ = v___y_858_;
goto _start;
}
}
v___jp_865_:
{
if (lean_obj_tag(v_a_855_) == 0)
{
lean_object* v_currPos_867_; lean_object* v_searcher_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_891_; 
v_currPos_867_ = lean_ctor_get(v_a_855_, 0);
v_searcher_868_ = lean_ctor_get(v_a_855_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v_a_855_);
if (v_isSharedCheck_891_ == 0)
{
v___x_870_ = v_a_855_;
v_isShared_871_ = v_isSharedCheck_891_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_searcher_868_);
lean_inc(v_currPos_867_);
lean_dec(v_a_855_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_891_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
uint8_t v_decide_872_; 
v_decide_872_ = lean_nat_dec_eq(v_searcher_868_, v___x_854_);
if (v_decide_872_ == 0)
{
uint32_t v___x_873_; uint32_t v___x_874_; uint8_t v___x_875_; 
v___x_873_ = 46;
v___x_874_ = lean_string_utf8_get_fast(v___x_852_, v_searcher_868_);
v___x_875_ = lean_uint32_dec_eq(v___x_874_, v___x_873_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = lean_string_utf8_next_fast(v___x_852_, v_searcher_868_);
lean_dec(v_searcher_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v___x_876_);
v___x_878_ = v___x_870_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_currPos_867_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_876_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
v_a_855_ = v___x_878_;
goto _start;
}
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v_slice_884_; lean_object* v_nextIt_886_; 
v___x_881_ = lean_string_utf8_next_fast(v___x_852_, v_searcher_868_);
v___x_882_ = lean_nat_sub(v___x_881_, v_searcher_868_);
v___x_883_ = lean_nat_add(v_searcher_868_, v___x_882_);
lean_dec(v___x_882_);
v_slice_884_ = l_String_Slice_subslice_x21(v___x_853_, v_currPos_867_, v_searcher_868_);
lean_inc(v___x_883_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v___x_883_);
lean_ctor_set(v___x_870_, 0, v___x_883_);
v_nextIt_886_ = v___x_870_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v___x_883_);
v_nextIt_886_ = v_reuseFailAlloc_889_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v_startInclusive_887_; lean_object* v_endExclusive_888_; 
v_startInclusive_887_ = lean_ctor_get(v_slice_884_, 0);
lean_inc(v_startInclusive_887_);
v_endExclusive_888_ = lean_ctor_get(v_slice_884_, 1);
lean_inc(v_endExclusive_888_);
lean_dec_ref(v_slice_884_);
v___y_858_ = v___y_866_;
v_it_859_ = v_nextIt_886_;
v_startInclusive_860_ = v_startInclusive_887_;
v_endExclusive_861_ = v_endExclusive_888_;
goto v___jp_857_;
}
}
}
else
{
lean_object* v___x_890_; 
lean_del_object(v___x_870_);
lean_dec(v_searcher_868_);
v___x_890_ = lean_box(1);
lean_inc(v___x_854_);
v___y_858_ = v___y_866_;
v_it_859_ = v___x_890_;
v_startInclusive_860_ = v_currPos_867_;
v_endExclusive_861_ = v___x_854_;
goto v___jp_857_;
}
}
}
else
{
lean_dec(v___x_854_);
return v_b_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object* v___x_894_, lean_object* v___x_895_, lean_object* v___x_896_, lean_object* v___x_897_, lean_object* v_a_898_, lean_object* v_b_899_){
_start:
{
uint8_t v___x_12983__boxed_900_; uint8_t v_b_boxed_901_; uint8_t v_res_902_; lean_object* v_r_903_; 
v___x_12983__boxed_900_ = lean_unbox(v___x_894_);
v_b_boxed_901_ = lean_unbox(v_b_899_);
v_res_902_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_12983__boxed_900_, v___x_895_, v___x_896_, v___x_897_, v_a_898_, v_b_boxed_901_);
lean_dec_ref(v___x_896_);
lean_dec_ref(v___x_895_);
v_r_903_ = lean_box(v_res_902_);
return v_r_903_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object* v_config_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v_lower_924_; lean_object* v_upper_925_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_977_; lean_object* v_pos_978_; lean_object* v___y_1002_; lean_object* v_pos_1003_; lean_object* v_res_1004_; lean_object* v_array_1005_; lean_object* v_idx_1006_; lean_object* v_pos_1008_; lean_object* v_res_1009_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v_array_1005_ = lean_ctor_get(v_a_912_, 0);
v_idx_1006_ = lean_ctor_get(v_a_912_, 1);
v___x_1018_ = lean_byte_array_size(v_array_1005_);
v___x_1019_ = lean_nat_dec_lt(v_idx_1006_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; 
lean_inc(v_idx_1006_);
lean_inc_ref(v_array_1005_);
v___x_1020_ = lean_box(0);
v_pos_1008_ = v_a_912_;
v_res_1009_ = v___x_1020_;
goto v___jp_1007_;
}
else
{
uint8_t v___x_1021_; uint8_t v___x_1022_; uint8_t v___x_1023_; 
v___x_1021_ = lean_byte_array_fget(v_array_1005_, v_idx_1006_);
v___x_1022_ = 91;
v___x_1023_ = lean_uint8_dec_eq(v___x_1021_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; 
lean_inc(v_idx_1006_);
lean_inc_ref(v_array_1005_);
v___x_1024_ = lean_box(0);
v_pos_1008_ = v_a_912_;
v_res_1009_ = v___x_1024_;
goto v___jp_1007_;
}
else
{
lean_object* v___x_1025_; 
v___x_1025_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(v_a_912_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_pos_1026_; lean_object* v_res_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1035_; 
v_pos_1026_ = lean_ctor_get(v___x_1025_, 0);
v_res_1027_ = lean_ctor_get(v___x_1025_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1029_ = v___x_1025_;
v_isShared_1030_ = v_isSharedCheck_1035_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_res_1027_);
lean_inc(v_pos_1026_);
lean_dec(v___x_1025_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1035_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; lean_object* v___x_1033_; 
v___x_1031_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1031_, 0, v_res_1027_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1031_);
v___x_1033_ = v___x_1029_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_pos_1026_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
else
{
lean_object* v_pos_1036_; lean_object* v_err_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_pos_1036_ = lean_ctor_get(v___x_1025_, 0);
v_err_1037_ = lean_ctor_get(v___x_1025_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1025_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_err_1037_);
lean_inc(v_pos_1036_);
lean_dec(v___x_1025_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_pos_1036_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_err_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
v___jp_913_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_916_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0));
v___x_917_ = lean_string_append(v___x_916_, v___y_915_);
lean_dec_ref(v___y_915_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
v___x_919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_919_, 0, v___y_914_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
return v___x_919_;
}
v___jp_920_:
{
lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_926_ = l_ByteArray_toByteSlice(v___y_923_, v_lower_924_, v_upper_925_);
v___x_927_ = l_ByteSlice_toByteArray(v___x_926_);
v___x_928_ = lean_string_validate_utf8(v___x_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_dec_ref(v___x_927_);
lean_dec(v___y_921_);
v___x_929_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2));
v___x_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_930_, 0, v___y_922_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
return v___x_930_;
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_931_ = lean_string_from_utf8_unchecked(v___x_927_);
lean_inc_n(v___y_921_, 2);
lean_inc_ref(v___x_931_);
v___x_932_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___x_931_, v___y_921_);
v___x_933_ = lean_string_utf8_byte_size(v___x_932_);
lean_inc_ref(v___x_932_);
v___x_934_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_934_, 0, v___x_932_);
lean_ctor_set(v___x_934_, 1, v___y_921_);
lean_ctor_set(v___x_934_, 2, v___x_933_);
v___x_935_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
v___x_936_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_932_, v___x_933_, v___x_935_, v___x_928_);
if (v___x_936_ == 0)
{
uint8_t v___x_937_; 
v___x_937_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_936_, v___x_932_, v___x_934_, v___x_933_, v___x_935_, v___x_928_);
lean_dec_ref_known(v___x_934_, 3);
if (v___x_937_ == 0)
{
lean_dec_ref(v___x_932_);
lean_dec(v___y_921_);
v___y_914_ = v___y_922_;
v___y_915_ = v___x_931_;
goto v___jp_913_;
}
else
{
lean_object* v___x_938_; lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_938_ = lean_string_length(v___x_932_);
v___x_939_ = lean_unsigned_to_nat(255u);
v___x_940_ = lean_nat_dec_le(v___x_938_, v___x_939_);
if (v___x_940_ == 0)
{
lean_dec_ref(v___x_932_);
lean_dec(v___y_921_);
v___y_914_ = v___y_922_;
v___y_915_ = v___x_931_;
goto v___jp_913_;
}
else
{
uint8_t v___x_941_; 
v___x_941_ = lean_nat_dec_eq(v___x_933_, v___y_921_);
lean_dec(v___y_921_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec_ref(v___x_931_);
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_932_);
v___x_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_943_, 0, v___y_922_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
return v___x_943_;
}
else
{
lean_dec_ref(v___x_932_);
v___y_914_ = v___y_922_;
v___y_915_ = v___x_931_;
goto v___jp_913_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_934_, 3);
lean_dec_ref(v___x_932_);
lean_dec(v___y_921_);
v___y_914_ = v___y_922_;
v___y_915_ = v___x_931_;
goto v___jp_913_;
}
}
}
v___jp_944_:
{
uint8_t v___x_951_; 
v___x_951_ = lean_nat_dec_le(v___y_949_, v___y_946_);
if (v___x_951_ == 0)
{
lean_dec(v___y_949_);
v___y_921_ = v___y_945_;
v___y_922_ = v___y_947_;
v___y_923_ = v___y_948_;
v_lower_924_ = v___y_950_;
v_upper_925_ = v___y_946_;
goto v___jp_920_;
}
else
{
lean_dec(v___y_946_);
v___y_921_ = v___y_945_;
v___y_922_ = v___y_947_;
v___y_923_ = v___y_948_;
v_lower_924_ = v___y_950_;
v_upper_925_ = v___y_949_;
goto v___jp_920_;
}
}
v___jp_952_:
{
lean_object* v_maxHostLength_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_snd_958_; lean_object* v_fst_959_; lean_object* v_fst_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_974_; 
v_maxHostLength_955_ = lean_ctor_get(v_config_911_, 1);
v___x_956_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_954_);
lean_inc_ref(v___y_953_);
v___x_957_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___y_953_, v_maxHostLength_955_, v___x_956_, v___y_954_);
v_snd_958_ = lean_ctor_get(v___x_957_, 1);
lean_inc(v_snd_958_);
v_fst_959_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_fst_959_);
lean_dec_ref(v___x_957_);
v_fst_960_ = lean_ctor_get(v_snd_958_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v_snd_958_);
if (v_isSharedCheck_974_ == 0)
{
lean_object* v_unused_975_; 
v_unused_975_ = lean_ctor_get(v_snd_958_, 1);
lean_dec(v_unused_975_);
v___x_962_ = v_snd_958_;
v_isShared_963_ = v_isSharedCheck_974_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_fst_960_);
lean_dec(v_snd_958_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_974_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = lean_nat_dec_eq(v_fst_959_, v___x_956_);
if (v___x_964_ == 0)
{
lean_object* v_array_965_; lean_object* v_idx_966_; lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
lean_del_object(v___x_962_);
v_array_965_ = lean_ctor_get(v___y_954_, 0);
lean_inc_ref(v_array_965_);
v_idx_966_ = lean_ctor_get(v___y_954_, 1);
lean_inc(v_idx_966_);
lean_dec_ref(v___y_954_);
v___x_967_ = lean_nat_add(v_idx_966_, v_fst_959_);
lean_dec(v_fst_959_);
v___x_968_ = lean_byte_array_size(v_array_965_);
v___x_969_ = lean_nat_dec_le(v_idx_966_, v___x_956_);
if (v___x_969_ == 0)
{
v___y_945_ = v___x_956_;
v___y_946_ = v___x_968_;
v___y_947_ = v_fst_960_;
v___y_948_ = v_array_965_;
v___y_949_ = v___x_967_;
v___y_950_ = v_idx_966_;
goto v___jp_944_;
}
else
{
lean_dec(v_idx_966_);
v___y_945_ = v___x_956_;
v___y_946_ = v___x_968_;
v___y_947_ = v_fst_960_;
v___y_948_ = v_array_965_;
v___y_949_ = v___x_967_;
v___y_950_ = v___x_956_;
goto v___jp_944_;
}
}
else
{
lean_object* v___x_970_; lean_object* v___x_972_; 
lean_dec(v_fst_960_);
lean_dec(v_fst_959_);
v___x_970_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_963_ == 0)
{
lean_ctor_set_tag(v___x_962_, 1);
lean_ctor_set(v___x_962_, 1, v___x_970_);
lean_ctor_set(v___x_962_, 0, v___y_954_);
v___x_972_ = v___x_962_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___y_954_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
v___jp_976_:
{
lean_object* v___x_979_; 
lean_inc_ref(v_pos_978_);
v___x_979_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(v_pos_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_pos_980_; lean_object* v_res_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
lean_dec_ref(v_pos_978_);
v_pos_980_ = lean_ctor_get(v___x_979_, 0);
v_res_981_ = lean_ctor_get(v___x_979_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_989_ == 0)
{
v___x_983_ = v___x_979_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_res_981_);
lean_inc(v_pos_980_);
lean_dec(v___x_979_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_985_, 0, v_res_981_);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 1, v___x_985_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_pos_980_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
else
{
lean_object* v_err_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_999_; 
v_err_990_ = lean_ctor_get(v___x_979_, 1);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_999_ == 0)
{
lean_object* v_unused_1000_; 
v_unused_1000_ = lean_ctor_get(v___x_979_, 0);
lean_dec(v_unused_1000_);
v___x_992_ = v___x_979_;
v_isShared_993_ = v_isSharedCheck_999_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_err_990_);
lean_dec(v___x_979_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_999_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v_idx_994_; uint8_t v___x_995_; 
v_idx_994_ = lean_ctor_get(v_pos_978_, 1);
v___x_995_ = lean_nat_dec_eq(v_idx_994_, v_idx_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_997_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v_pos_978_);
v___x_997_ = v___x_992_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_pos_978_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_err_990_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
else
{
lean_del_object(v___x_992_);
lean_dec(v_err_990_);
v___y_953_ = v___y_977_;
v___y_954_ = v_pos_978_;
goto v___jp_952_;
}
}
}
}
v___jp_1001_:
{
v___y_953_ = v___y_1002_;
v___y_954_ = v_pos_1003_;
goto v___jp_952_;
}
v___jp_1007_:
{
lean_object* v___f_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___f_1010_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3));
v___x_1011_ = lean_byte_array_size(v_array_1005_);
v___x_1012_ = lean_nat_dec_lt(v_idx_1006_, v___x_1011_);
if (v___x_1012_ == 0)
{
lean_dec(v_idx_1006_);
lean_dec_ref(v_array_1005_);
v___y_1002_ = v___f_1010_;
v_pos_1003_ = v_pos_1008_;
v_res_1004_ = v_res_1009_;
goto v___jp_1001_;
}
else
{
uint8_t v___x_1013_; uint8_t v___x_1014_; uint8_t v___x_1015_; 
v___x_1013_ = lean_byte_array_fget(v_array_1005_, v_idx_1006_);
lean_dec(v_idx_1006_);
lean_dec_ref(v_array_1005_);
v___x_1014_ = 48;
v___x_1015_ = lean_uint8_dec_le(v___x_1014_, v___x_1013_);
if (v___x_1015_ == 0)
{
v___y_1002_ = v___f_1010_;
v_pos_1003_ = v_pos_1008_;
v_res_1004_ = v_res_1009_;
goto v___jp_1001_;
}
else
{
uint8_t v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = 57;
v___x_1017_ = lean_uint8_dec_le(v___x_1013_, v___x_1016_);
if (v___x_1017_ == 0)
{
v___y_1002_ = v___f_1010_;
v_pos_1003_ = v_pos_1008_;
v_res_1004_ = v_res_1009_;
goto v___jp_1001_;
}
else
{
v___y_977_ = v___f_1010_;
v_pos_978_ = v_pos_1008_;
goto v___jp_976_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object* v_config_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1045_, v_a_1046_);
lean_dec_ref(v_config_1045_);
return v_res_1047_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object* v___x_1048_, lean_object* v___x_1049_, lean_object* v___x_1050_, lean_object* v_inst_1051_, lean_object* v_R_1052_, lean_object* v_a_1053_, uint8_t v_b_1054_, lean_object* v_c_1055_){
_start:
{
uint8_t v___x_1056_; 
v___x_1056_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_1048_, v___x_1050_, v_a_1053_, v_b_1054_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v___x_1059_, lean_object* v_inst_1060_, lean_object* v_R_1061_, lean_object* v_a_1062_, lean_object* v_b_1063_, lean_object* v_c_1064_){
_start:
{
uint8_t v_b_boxed_1065_; uint8_t v_res_1066_; lean_object* v_r_1067_; 
v_b_boxed_1065_ = lean_unbox(v_b_1063_);
v_res_1066_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(v___x_1057_, v___x_1058_, v___x_1059_, v_inst_1060_, v_R_1061_, v_a_1062_, v_b_boxed_1065_, v_c_1064_);
lean_dec(v___x_1059_);
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1057_);
v_r_1067_ = lean_box(v_res_1066_);
return v_r_1067_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t v___x_1068_, lean_object* v___x_1069_, lean_object* v___x_1070_, lean_object* v___x_1071_, lean_object* v_inst_1072_, lean_object* v_R_1073_, lean_object* v_a_1074_, uint8_t v_b_1075_, lean_object* v_c_1076_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_1068_, v___x_1069_, v___x_1070_, v___x_1071_, v_a_1074_, v_b_1075_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object* v___x_1078_, lean_object* v___x_1079_, lean_object* v___x_1080_, lean_object* v___x_1081_, lean_object* v_inst_1082_, lean_object* v_R_1083_, lean_object* v_a_1084_, lean_object* v_b_1085_, lean_object* v_c_1086_){
_start:
{
uint8_t v___x_13352__boxed_1087_; uint8_t v_b_boxed_1088_; uint8_t v_res_1089_; lean_object* v_r_1090_; 
v___x_13352__boxed_1087_ = lean_unbox(v___x_1078_);
v_b_boxed_1088_ = lean_unbox(v_b_1085_);
v_res_1089_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(v___x_13352__boxed_1087_, v___x_1079_, v___x_1080_, v___x_1081_, v_inst_1082_, v_R_1083_, v_a_1084_, v_b_boxed_1088_, v_c_1086_);
lean_dec_ref(v___x_1080_);
lean_dec_ref(v___x_1079_);
v_r_1090_ = lean_box(v_res_1089_);
return v_r_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object* v_config_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v_port_1105_; lean_object* v___y_1106_; lean_object* v___y_1110_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; uint8_t v_val_1122_; uint8_t v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v_pos_1133_; lean_object* v_array_1134_; lean_object* v_idx_1135_; lean_object* v_res_1136_; uint8_t v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v_pos_1151_; lean_object* v_pos_1154_; lean_object* v_res_1155_; lean_object* v_err_1221_; lean_object* v___x_1226_; 
lean_inc_ref(v_a_1101_);
v___x_1226_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_pos_1227_; lean_object* v_res_1228_; lean_object* v_array_1229_; lean_object* v_idx_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1247_; 
v_pos_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_pos_1227_);
v_res_1228_ = lean_ctor_get(v___x_1226_, 1);
lean_inc(v_res_1228_);
lean_dec_ref_known(v___x_1226_, 2);
v_array_1229_ = lean_ctor_get(v_pos_1227_, 0);
v_idx_1230_ = lean_ctor_get(v_pos_1227_, 1);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_pos_1227_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1232_ = v_pos_1227_;
v_isShared_1233_ = v_isSharedCheck_1247_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_idx_1230_);
lean_inc(v_array_1229_);
lean_dec(v_pos_1227_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1247_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = lean_byte_array_size(v_array_1229_);
v___x_1235_ = lean_nat_dec_lt(v_idx_1230_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; 
lean_del_object(v___x_1232_);
lean_dec(v_idx_1230_);
lean_dec_ref(v_array_1229_);
lean_dec(v_res_1228_);
v___x_1236_ = lean_box(0);
v_err_1221_ = v___x_1236_;
goto v___jp_1220_;
}
else
{
uint8_t v___x_1237_; uint8_t v_got_1238_; uint8_t v___x_1239_; 
v___x_1237_ = 64;
v_got_1238_ = lean_byte_array_fget(v_array_1229_, v_idx_1230_);
v___x_1239_ = lean_uint8_dec_eq(v_got_1238_, v___x_1237_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; 
lean_del_object(v___x_1232_);
lean_dec(v_idx_1230_);
lean_dec_ref(v_array_1229_);
lean_dec(v_res_1228_);
v___x_1240_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5));
v_err_1221_ = v___x_1240_;
goto v___jp_1220_;
}
else
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
lean_dec_ref(v_a_1101_);
v___x_1241_ = lean_unsigned_to_nat(1u);
v___x_1242_ = lean_nat_add(v_idx_1230_, v___x_1241_);
lean_dec(v_idx_1230_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 1, v___x_1242_);
v___x_1244_ = v___x_1232_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_array_1229_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_res_1228_);
v_pos_1154_ = v___x_1244_;
v_res_1155_ = v___x_1245_;
goto v___jp_1153_;
}
}
}
}
}
else
{
lean_object* v_err_1248_; 
v_err_1248_ = lean_ctor_get(v___x_1226_, 1);
lean_inc(v_err_1248_);
lean_dec_ref_known(v___x_1226_, 2);
v_err_1221_ = v_err_1248_;
goto v___jp_1220_;
}
v___jp_1102_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1107_, 0, v___y_1104_);
lean_ctor_set(v___x_1107_, 1, v___y_1103_);
lean_ctor_set(v___x_1107_, 2, v_port_1105_);
v___x_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1106_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
return v___x_1108_;
}
v___jp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1));
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___y_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
return v___x_1112_;
}
v___jp_1113_:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_box(1);
v___y_1103_ = v___y_1114_;
v___y_1104_ = v___y_1116_;
v_port_1105_ = v___x_1117_;
v___y_1106_ = v___y_1115_;
goto v___jp_1102_;
}
v___jp_1118_:
{
uint8_t v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = 47;
v___x_1124_ = lean_uint8_dec_eq(v_val_1122_, v___x_1123_);
if (v___x_1124_ == 0)
{
uint8_t v___x_1125_; uint8_t v___x_1126_; 
v___x_1125_ = 63;
v___x_1126_ = lean_uint8_dec_eq(v_val_1122_, v___x_1125_);
if (v___x_1126_ == 0)
{
uint8_t v___x_1127_; uint8_t v___x_1128_; 
v___x_1127_ = 35;
v___x_1128_ = lean_uint8_dec_eq(v_val_1122_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1119_);
v___y_1110_ = v___y_1120_;
goto v___jp_1109_;
}
else
{
v___y_1114_ = v___y_1119_;
v___y_1115_ = v___y_1120_;
v___y_1116_ = v___y_1121_;
goto v___jp_1113_;
}
}
else
{
v___y_1114_ = v___y_1119_;
v___y_1115_ = v___y_1120_;
v___y_1116_ = v___y_1121_;
goto v___jp_1113_;
}
}
else
{
v___y_1114_ = v___y_1119_;
v___y_1115_ = v___y_1120_;
v___y_1116_ = v___y_1121_;
goto v___jp_1113_;
}
}
v___jp_1129_:
{
lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1137_ = lean_byte_array_size(v_array_1134_);
v___x_1138_ = lean_nat_dec_lt(v_idx_1135_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_dec(v_idx_1135_);
lean_dec_ref(v_array_1134_);
if (v___y_1130_ == 0)
{
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
v___y_1110_ = v_pos_1133_;
goto v___jp_1109_;
}
else
{
v___y_1114_ = v___y_1131_;
v___y_1115_ = v_pos_1133_;
v___y_1116_ = v___y_1132_;
goto v___jp_1113_;
}
}
else
{
uint8_t v___x_1139_; 
v___x_1139_ = lean_byte_array_fget(v_array_1134_, v_idx_1135_);
lean_dec(v_idx_1135_);
lean_dec_ref(v_array_1134_);
v___y_1119_ = v___y_1131_;
v___y_1120_ = v_pos_1133_;
v___y_1121_ = v___y_1132_;
v_val_1122_ = v___x_1139_;
goto v___jp_1118_;
}
}
v___jp_1140_:
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_box(0);
v___y_1130_ = v___y_1141_;
v___y_1131_ = v___y_1143_;
v___y_1132_ = v___y_1144_;
v_pos_1133_ = v___y_1142_;
v_array_1134_ = v___y_1146_;
v_idx_1135_ = v___y_1145_;
v_res_1136_ = v___x_1147_;
goto v___jp_1129_;
}
v___jp_1148_:
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_box(0);
v___y_1103_ = v___y_1149_;
v___y_1104_ = v___y_1150_;
v_port_1105_ = v___x_1152_;
v___y_1106_ = v_pos_1151_;
goto v___jp_1102_;
}
v___jp_1153_:
{
lean_object* v___x_1156_; 
v___x_1156_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1100_, v_pos_1154_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_pos_1157_; lean_object* v_res_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1210_; 
v_pos_1157_ = lean_ctor_get(v___x_1156_, 0);
v_res_1158_ = lean_ctor_get(v___x_1156_, 1);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1160_ = v___x_1156_;
v_isShared_1161_ = v_isSharedCheck_1210_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_res_1158_);
lean_inc(v_pos_1157_);
lean_dec(v___x_1156_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1210_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_array_1162_; lean_object* v_idx_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v_array_1162_ = lean_ctor_get(v_pos_1157_, 0);
v_idx_1163_ = lean_ctor_get(v_pos_1157_, 1);
v___x_1164_ = lean_byte_array_size(v_array_1162_);
v___x_1165_ = lean_nat_dec_lt(v_idx_1163_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_del_object(v___x_1160_);
v___y_1149_ = v_res_1158_;
v___y_1150_ = v_res_1155_;
v_pos_1151_ = v_pos_1157_;
goto v___jp_1148_;
}
else
{
uint8_t v___x_1166_; uint8_t v___x_1167_; uint8_t v___x_1168_; 
v___x_1166_ = lean_byte_array_fget(v_array_1162_, v_idx_1163_);
v___x_1167_ = 58;
v___x_1168_ = lean_uint8_dec_eq(v___x_1166_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_del_object(v___x_1160_);
v___y_1149_ = v_res_1158_;
v___y_1150_ = v_res_1155_;
v_pos_1151_ = v_pos_1157_;
goto v___jp_1148_;
}
else
{
if (v___x_1165_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
lean_dec(v_res_1158_);
lean_dec(v_res_1155_);
v___x_1169_ = lean_box(0);
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 1);
lean_ctor_set(v___x_1160_, 1, v___x_1169_);
v___x_1171_ = v___x_1160_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_pos_1157_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v___x_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
else
{
uint8_t v___x_1173_; 
v___x_1173_ = lean_uint8_dec_eq(v___x_1166_, v___x_1167_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1176_; 
lean_dec(v_res_1158_);
lean_dec(v_res_1155_);
v___x_1174_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 1);
lean_ctor_set(v___x_1160_, 1, v___x_1174_);
v___x_1176_ = v___x_1160_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_pos_1157_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
else
{
lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1207_; 
lean_inc(v_idx_1163_);
lean_inc_ref(v_array_1162_);
lean_del_object(v___x_1160_);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_pos_1157_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; lean_object* v_unused_1209_; 
v_unused_1208_ = lean_ctor_get(v_pos_1157_, 1);
lean_dec(v_unused_1208_);
v_unused_1209_ = lean_ctor_get(v_pos_1157_, 0);
lean_dec(v_unused_1209_);
v___x_1179_ = v_pos_1157_;
v_isShared_1180_ = v_isSharedCheck_1207_;
goto v_resetjp_1178_;
}
else
{
lean_dec(v_pos_1157_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1207_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1181_ = lean_unsigned_to_nat(1u);
v___x_1182_ = lean_nat_add(v_idx_1163_, v___x_1181_);
lean_dec(v_idx_1163_);
lean_inc(v___x_1182_);
lean_inc_ref(v_array_1162_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v___x_1182_);
v___x_1184_ = v___x_1179_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_array_1162_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
uint8_t v___x_1185_; 
v___x_1185_ = lean_nat_dec_lt(v___x_1182_, v___x_1164_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_box(0);
v___y_1130_ = v___x_1168_;
v___y_1131_ = v_res_1158_;
v___y_1132_ = v_res_1155_;
v_pos_1133_ = v___x_1184_;
v_array_1134_ = v_array_1162_;
v_idx_1135_ = v___x_1182_;
v_res_1136_ = v___x_1186_;
goto v___jp_1129_;
}
else
{
uint8_t v___x_1187_; uint8_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1187_ = lean_byte_array_fget(v_array_1162_, v___x_1182_);
v___x_1188_ = 48;
v___x_1189_ = lean_uint8_dec_le(v___x_1188_, v___x_1187_);
if (v___x_1189_ == 0)
{
v___y_1141_ = v___x_1168_;
v___y_1142_ = v___x_1184_;
v___y_1143_ = v_res_1158_;
v___y_1144_ = v_res_1155_;
v___y_1145_ = v___x_1182_;
v___y_1146_ = v_array_1162_;
goto v___jp_1140_;
}
else
{
uint8_t v___x_1190_; uint8_t v___x_1191_; 
v___x_1190_ = 57;
v___x_1191_ = lean_uint8_dec_le(v___x_1187_, v___x_1190_);
if (v___x_1191_ == 0)
{
v___y_1141_ = v___x_1168_;
v___y_1142_ = v___x_1184_;
v___y_1143_ = v_res_1158_;
v___y_1144_ = v_res_1155_;
v___y_1145_ = v___x_1182_;
v___y_1146_ = v_array_1162_;
goto v___jp_1140_;
}
else
{
lean_object* v___x_1192_; 
lean_dec(v___x_1182_);
lean_dec_ref(v_array_1162_);
v___x_1192_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_1184_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_pos_1193_; lean_object* v_res_1194_; lean_object* v___x_1195_; uint16_t v___x_1196_; 
v_pos_1193_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_pos_1193_);
v_res_1194_ = lean_ctor_get(v___x_1192_, 1);
lean_inc(v_res_1194_);
lean_dec_ref_known(v___x_1192_, 2);
v___x_1195_ = lean_alloc_ctor(2, 0, 2);
v___x_1196_ = lean_unbox(v_res_1194_);
lean_dec(v_res_1194_);
lean_ctor_set_uint16(v___x_1195_, 0, v___x_1196_);
v___y_1103_ = v_res_1158_;
v___y_1104_ = v_res_1155_;
v_port_1105_ = v___x_1195_;
v___y_1106_ = v_pos_1193_;
goto v___jp_1102_;
}
else
{
lean_object* v_pos_1197_; lean_object* v_err_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_res_1158_);
lean_dec(v_res_1155_);
v_pos_1197_ = lean_ctor_get(v___x_1192_, 0);
v_err_1198_ = lean_ctor_get(v___x_1192_, 1);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1192_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_err_1198_);
lean_inc(v_pos_1197_);
lean_dec(v___x_1192_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_pos_1197_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_err_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
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
}
}
else
{
lean_object* v_pos_1211_; lean_object* v_err_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_res_1155_);
v_pos_1211_ = lean_ctor_get(v___x_1156_, 0);
v_err_1212_ = lean_ctor_get(v___x_1156_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1156_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_err_1212_);
lean_inc(v_pos_1211_);
lean_dec(v___x_1156_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_pos_1211_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_err_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
v___jp_1220_:
{
lean_object* v_idx_1222_; uint8_t v___x_1223_; 
v_idx_1222_ = lean_ctor_get(v_a_1101_, 1);
v___x_1223_ = lean_nat_dec_eq(v_idx_1222_, v_idx_1222_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1224_, 0, v_a_1101_);
lean_ctor_set(v___x_1224_, 1, v_err_1221_);
return v___x_1224_;
}
else
{
lean_object* v___x_1225_; 
lean_dec(v_err_1221_);
v___x_1225_ = lean_box(0);
v_pos_1154_ = v_a_1101_;
v_res_1155_ = v___x_1225_;
goto v___jp_1153_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object* v_config_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_1249_, v_a_1250_);
lean_dec_ref(v_config_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t v_c_1252_){
_start:
{
uint8_t v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = 48;
v___x_1301_ = lean_uint8_dec_le(v___x_1300_, v_c_1252_);
if (v___x_1301_ == 0)
{
goto v___jp_1295_;
}
else
{
uint8_t v___x_1302_; uint8_t v___x_1303_; 
v___x_1302_ = 57;
v___x_1303_ = lean_uint8_dec_le(v_c_1252_, v___x_1302_);
if (v___x_1303_ == 0)
{
goto v___jp_1295_;
}
else
{
return v___x_1303_;
}
}
v___jp_1253_:
{
uint8_t v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = 45;
v___x_1255_ = lean_uint8_dec_eq(v_c_1252_, v___x_1254_);
if (v___x_1255_ == 0)
{
uint8_t v___x_1256_; uint8_t v___x_1257_; 
v___x_1256_ = 46;
v___x_1257_ = lean_uint8_dec_eq(v_c_1252_, v___x_1256_);
if (v___x_1257_ == 0)
{
uint8_t v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = 95;
v___x_1259_ = lean_uint8_dec_eq(v_c_1252_, v___x_1258_);
if (v___x_1259_ == 0)
{
uint8_t v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = 126;
v___x_1261_ = lean_uint8_dec_eq(v_c_1252_, v___x_1260_);
if (v___x_1261_ == 0)
{
uint8_t v___x_1262_; uint8_t v___x_1263_; 
v___x_1262_ = 33;
v___x_1263_ = lean_uint8_dec_eq(v_c_1252_, v___x_1262_);
if (v___x_1263_ == 0)
{
uint8_t v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = 36;
v___x_1265_ = lean_uint8_dec_eq(v_c_1252_, v___x_1264_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = 38;
v___x_1267_ = lean_uint8_dec_eq(v_c_1252_, v___x_1266_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = 39;
v___x_1269_ = lean_uint8_dec_eq(v_c_1252_, v___x_1268_);
if (v___x_1269_ == 0)
{
uint8_t v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = 40;
v___x_1271_ = lean_uint8_dec_eq(v_c_1252_, v___x_1270_);
if (v___x_1271_ == 0)
{
uint8_t v___x_1272_; uint8_t v___x_1273_; 
v___x_1272_ = 41;
v___x_1273_ = lean_uint8_dec_eq(v_c_1252_, v___x_1272_);
if (v___x_1273_ == 0)
{
uint8_t v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = 42;
v___x_1275_ = lean_uint8_dec_eq(v_c_1252_, v___x_1274_);
if (v___x_1275_ == 0)
{
uint8_t v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = 43;
v___x_1277_ = lean_uint8_dec_eq(v_c_1252_, v___x_1276_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = 44;
v___x_1279_ = lean_uint8_dec_eq(v_c_1252_, v___x_1278_);
if (v___x_1279_ == 0)
{
uint8_t v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = 59;
v___x_1281_ = lean_uint8_dec_eq(v_c_1252_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = 61;
v___x_1283_ = lean_uint8_dec_eq(v_c_1252_, v___x_1282_);
if (v___x_1283_ == 0)
{
uint8_t v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = 58;
v___x_1285_ = lean_uint8_dec_eq(v_c_1252_, v___x_1284_);
if (v___x_1285_ == 0)
{
uint8_t v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = 64;
v___x_1287_ = lean_uint8_dec_eq(v_c_1252_, v___x_1286_);
if (v___x_1287_ == 0)
{
uint8_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 37;
v___x_1289_ = lean_uint8_dec_eq(v_c_1252_, v___x_1288_);
return v___x_1289_;
}
else
{
return v___x_1287_;
}
}
else
{
return v___x_1285_;
}
}
else
{
return v___x_1283_;
}
}
else
{
return v___x_1281_;
}
}
else
{
return v___x_1279_;
}
}
else
{
return v___x_1277_;
}
}
else
{
return v___x_1275_;
}
}
else
{
return v___x_1273_;
}
}
else
{
return v___x_1271_;
}
}
else
{
return v___x_1269_;
}
}
else
{
return v___x_1267_;
}
}
else
{
return v___x_1265_;
}
}
else
{
return v___x_1263_;
}
}
else
{
return v___x_1261_;
}
}
else
{
return v___x_1259_;
}
}
else
{
return v___x_1257_;
}
}
else
{
return v___x_1255_;
}
}
v___jp_1290_:
{
uint8_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = 65;
v___x_1292_ = lean_uint8_dec_le(v___x_1291_, v_c_1252_);
if (v___x_1292_ == 0)
{
goto v___jp_1253_;
}
else
{
uint8_t v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = 90;
v___x_1294_ = lean_uint8_dec_le(v_c_1252_, v___x_1293_);
if (v___x_1294_ == 0)
{
goto v___jp_1253_;
}
else
{
return v___x_1294_;
}
}
}
v___jp_1295_:
{
uint8_t v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = 97;
v___x_1297_ = lean_uint8_dec_le(v___x_1296_, v_c_1252_);
if (v___x_1297_ == 0)
{
goto v___jp_1290_;
}
else
{
uint8_t v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = 122;
v___x_1299_ = lean_uint8_dec_le(v_c_1252_, v___x_1298_);
if (v___x_1299_ == 0)
{
goto v___jp_1290_;
}
else
{
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object* v_c_1304_){
_start:
{
uint8_t v_c_boxed_1305_; uint8_t v_res_1306_; lean_object* v_r_1307_; 
v_c_boxed_1305_ = lean_unbox(v_c_1304_);
v_res_1306_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(v_c_boxed_1305_);
v_r_1307_ = lean_box(v_res_1306_);
return v_r_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object* v_config_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v_maxSegmentLength_1311_; lean_object* v___f_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v_snd_1315_; lean_object* v_fst_1316_; lean_object* v_fst_1317_; lean_object* v_array_1318_; lean_object* v_idx_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1336_; 
v_maxSegmentLength_1311_ = lean_ctor_get(v_config_1309_, 3);
v___f_1312_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0));
v___x_1313_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1310_);
v___x_1314_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1312_, v_maxSegmentLength_1311_, v___x_1313_, v_a_1310_);
v_snd_1315_ = lean_ctor_get(v___x_1314_, 1);
lean_inc(v_snd_1315_);
v_fst_1316_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_fst_1316_);
lean_dec_ref(v___x_1314_);
v_fst_1317_ = lean_ctor_get(v_snd_1315_, 0);
lean_inc(v_fst_1317_);
lean_dec(v_snd_1315_);
v_array_1318_ = lean_ctor_get(v_a_1310_, 0);
v_idx_1319_ = lean_ctor_get(v_a_1310_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_a_1310_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1321_ = v_a_1310_;
v_isShared_1322_ = v_isSharedCheck_1336_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_idx_1319_);
lean_inc(v_array_1318_);
lean_dec(v_a_1310_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1336_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v_lower_1324_; lean_object* v_upper_1325_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___y_1333_; uint8_t v___x_1335_; 
v___x_1330_ = lean_nat_add(v_idx_1319_, v_fst_1316_);
lean_dec(v_fst_1316_);
v___x_1331_ = lean_byte_array_size(v_array_1318_);
v___x_1335_ = lean_nat_dec_le(v_idx_1319_, v___x_1313_);
if (v___x_1335_ == 0)
{
v___y_1333_ = v_idx_1319_;
goto v___jp_1332_;
}
else
{
lean_dec(v_idx_1319_);
v___y_1333_ = v___x_1313_;
goto v___jp_1332_;
}
v___jp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1326_ = l_ByteArray_toByteSlice(v_array_1318_, v_lower_1324_, v_upper_1325_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 1, v___x_1326_);
lean_ctor_set(v___x_1321_, 0, v_fst_1317_);
v___x_1328_ = v___x_1321_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_fst_1317_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
v___jp_1332_:
{
uint8_t v___x_1334_; 
v___x_1334_ = lean_nat_dec_le(v___x_1330_, v___x_1331_);
if (v___x_1334_ == 0)
{
lean_dec(v___x_1330_);
v_lower_1324_ = v___y_1333_;
v_upper_1325_ = v___x_1331_;
goto v___jp_1323_;
}
else
{
v_lower_1324_ = v___y_1333_;
v_upper_1325_ = v___x_1330_;
goto v___jp_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object* v_config_1337_, lean_object* v_a_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1337_, v_a_1338_);
lean_dec_ref(v_config_1337_);
return v_res_1339_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t v_c_1340_){
_start:
{
uint8_t v___x_1341_; uint8_t v___x_1342_; 
v___x_1341_ = 63;
v___x_1342_ = lean_uint8_dec_eq(v_c_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
uint8_t v___x_1343_; uint8_t v___x_1344_; 
v___x_1343_ = 35;
v___x_1344_ = lean_uint8_dec_eq(v_c_1340_, v___x_1343_);
return v___x_1344_;
}
else
{
return v___x_1342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object* v_c_1345_){
_start:
{
uint8_t v_c_boxed_1346_; uint8_t v_res_1347_; lean_object* v_r_1348_; 
v_c_boxed_1346_ = lean_unbox(v_c_1345_);
v_res_1347_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v_c_boxed_1346_);
v_r_1348_ = lean_box(v_res_1347_);
return v_r_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object* v_config_1356_, lean_object* v_a_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v_array_1383_; lean_object* v_idx_1384_; lean_object* v_fst_1385_; lean_object* v_snd_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1551_; 
v_array_1383_ = lean_ctor_get(v___y_1358_, 0);
v_idx_1384_ = lean_ctor_get(v___y_1358_, 1);
v_fst_1385_ = lean_ctor_get(v_a_1357_, 0);
v_snd_1386_ = lean_ctor_get(v_a_1357_, 1);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_a_1357_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1388_ = v_a_1357_;
v_isShared_1389_ = v_isSharedCheck_1551_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_snd_1386_);
lean_inc(v_fst_1385_);
lean_dec(v_a_1357_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1551_;
goto v_resetjp_1387_;
}
v___jp_1359_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___y_1362_);
lean_ctor_set(v___x_1363_, 1, v___y_1360_);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___y_1361_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
return v___x_1364_;
}
v___jp_1365_:
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = lean_array_get_size(v___y_1369_);
v___x_1371_ = lean_nat_dec_le(v___y_1366_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec(v___y_1366_);
v___x_1372_ = l_ByteArray_empty;
v___x_1373_ = lean_array_push(v___y_1369_, v___x_1372_);
v___x_1374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___y_1368_);
v_a_1357_ = v___x_1374_;
v___y_1358_ = v___y_1367_;
goto _start;
}
else
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v_config_1356_);
v___x_1376_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1377_ = l_Nat_reprFast(v___y_1366_);
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
lean_dec_ref(v___x_1377_);
v___x_1379_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1380_ = lean_string_append(v___x_1378_, v___x_1379_);
v___x_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
v___x_1382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___y_1367_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
return v___x_1382_;
}
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1390_ = lean_byte_array_size(v_array_1383_);
v___x_1391_ = lean_nat_dec_lt(v_idx_1384_, v___x_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1393_; 
lean_dec_ref(v_config_1356_);
if (v_isShared_1389_ == 0)
{
v___x_1393_ = v___x_1388_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_snd_1386_);
v___x_1393_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___y_1358_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
return v___x_1394_;
}
}
else
{
uint8_t v___x_1492_; uint8_t v___x_1542_; 
v___x_1492_ = lean_byte_array_fget(v_array_1383_, v_idx_1384_);
v___x_1542_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1492_);
if (v___x_1542_ == 0)
{
uint8_t v___x_1543_; uint8_t v___x_1544_; 
v___x_1543_ = 47;
v___x_1544_ = lean_uint8_dec_eq(v___x_1492_, v___x_1543_);
if (v___x_1544_ == 0)
{
uint8_t v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = 48;
v___x_1546_ = lean_uint8_dec_le(v___x_1545_, v___x_1492_);
if (v___x_1546_ == 0)
{
goto v___jp_1537_;
}
else
{
uint8_t v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = 57;
v___x_1548_ = lean_uint8_dec_le(v___x_1492_, v___x_1547_);
if (v___x_1548_ == 0)
{
goto v___jp_1537_;
}
else
{
goto v___jp_1396_;
}
}
}
else
{
goto v___jp_1396_;
}
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v_fst_1385_);
lean_ctor_set(v___x_1549_, 1, v_snd_1386_);
v___x_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___y_1358_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
return v___x_1550_;
}
v___jp_1396_:
{
lean_object* v_maxPathSegments_1397_; lean_object* v_maxTotalPathLength_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; 
v_maxPathSegments_1397_ = lean_ctor_get(v_config_1356_, 6);
v_maxTotalPathLength_1398_ = lean_ctor_get(v_config_1356_, 7);
v___x_1399_ = lean_array_get_size(v_fst_1385_);
v___x_1400_ = lean_nat_dec_le(v_maxPathSegments_1397_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; 
v___x_1401_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1356_, v___y_1358_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_pos_1402_; lean_object* v_res_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1475_; 
v_pos_1402_ = lean_ctor_get(v___x_1401_, 0);
v_res_1403_ = lean_ctor_get(v___x_1401_, 1);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1405_ = v___x_1401_;
v_isShared_1406_ = v_isSharedCheck_1475_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_res_1403_);
lean_inc(v_pos_1402_);
lean_dec(v___x_1401_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1475_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
lean_inc(v_res_1403_);
v___x_1407_ = l_ByteSlice_toByteArray(v_res_1403_);
v___x_1408_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1407_);
if (lean_obj_tag(v___x_1408_) == 1)
{
lean_object* v_val_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1470_; 
v_val_1409_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1411_ = v___x_1408_;
v_isShared_1412_ = v_isSharedCheck_1470_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_val_1409_);
lean_dec(v___x_1408_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1470_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1413_ = l_ByteSlice_size(v_res_1403_);
lean_dec(v_res_1403_);
v___x_1414_ = lean_nat_add(v_snd_1386_, v___x_1413_);
lean_dec(v___x_1413_);
lean_dec(v_snd_1386_);
v___x_1415_ = lean_nat_dec_lt(v_maxTotalPathLength_1398_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v_array_1416_; lean_object* v_idx_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
v_array_1416_ = lean_ctor_get(v_pos_1402_, 0);
v_idx_1417_ = lean_ctor_get(v_pos_1402_, 1);
v___x_1418_ = lean_array_push(v_fst_1385_, v_val_1409_);
v___x_1419_ = lean_byte_array_size(v_array_1416_);
v___x_1420_ = lean_nat_dec_lt(v_idx_1417_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_del_object(v___x_1411_);
lean_del_object(v___x_1405_);
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___y_1360_ = v___x_1414_;
v___y_1361_ = v_pos_1402_;
v___y_1362_ = v___x_1418_;
goto v___jp_1359_;
}
else
{
uint8_t v___x_1421_; uint8_t v___x_1422_; uint8_t v___x_1423_; 
v___x_1421_ = lean_byte_array_fget(v_array_1416_, v_idx_1417_);
v___x_1422_ = 47;
v___x_1423_ = lean_uint8_dec_eq(v___x_1421_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_del_object(v___x_1411_);
lean_del_object(v___x_1405_);
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___y_1360_ = v___x_1414_;
v___y_1361_ = v_pos_1402_;
v___y_1362_ = v___x_1418_;
goto v___jp_1359_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1424_ = lean_unsigned_to_nat(1u);
v___x_1425_ = lean_nat_add(v___x_1414_, v___x_1424_);
lean_dec(v___x_1414_);
v___x_1426_ = lean_nat_dec_lt(v_maxTotalPathLength_1398_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_del_object(v___x_1411_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1427_; lean_object* v___x_1429_; 
lean_dec(v___x_1425_);
lean_dec_ref(v___x_1418_);
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___x_1427_ = lean_box(0);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 1);
lean_ctor_set(v___x_1405_, 1, v___x_1427_);
v___x_1429_ = v___x_1405_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_pos_1402_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
else
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1445_; 
lean_inc(v_idx_1417_);
lean_inc_ref(v_array_1416_);
lean_del_object(v___x_1405_);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_pos_1402_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; lean_object* v_unused_1447_; 
v_unused_1446_ = lean_ctor_get(v_pos_1402_, 1);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_pos_1402_, 0);
lean_dec(v_unused_1447_);
v___x_1432_ = v_pos_1402_;
v_isShared_1433_ = v_isSharedCheck_1445_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v_pos_1402_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1445_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1434_ = lean_nat_add(v_idx_1417_, v___x_1424_);
lean_dec(v_idx_1417_);
lean_inc(v___x_1434_);
lean_inc_ref(v_array_1416_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 1, v___x_1434_);
v___x_1436_ = v___x_1432_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_array_1416_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
uint8_t v___x_1437_; 
v___x_1437_ = lean_nat_dec_lt(v___x_1434_, v___x_1419_);
if (v___x_1437_ == 0)
{
lean_dec(v___x_1434_);
lean_dec_ref(v_array_1416_);
lean_del_object(v___x_1388_);
lean_inc(v_maxPathSegments_1397_);
v___y_1366_ = v_maxPathSegments_1397_;
v___y_1367_ = v___x_1436_;
v___y_1368_ = v___x_1425_;
v___y_1369_ = v___x_1418_;
goto v___jp_1365_;
}
else
{
uint8_t v___x_1438_; uint8_t v___x_1439_; 
v___x_1438_ = lean_byte_array_fget(v_array_1416_, v___x_1434_);
lean_dec(v___x_1434_);
lean_dec_ref(v_array_1416_);
v___x_1439_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1441_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v___x_1425_);
lean_ctor_set(v___x_1388_, 0, v___x_1418_);
v___x_1441_ = v___x_1388_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1418_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v___x_1425_);
v___x_1441_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
v_a_1357_ = v___x_1441_;
v___y_1358_ = v___x_1436_;
goto _start;
}
}
else
{
lean_del_object(v___x_1388_);
lean_inc(v_maxPathSegments_1397_);
v___y_1366_ = v_maxPathSegments_1397_;
v___y_1367_ = v___x_1436_;
v___y_1368_ = v___x_1425_;
v___y_1369_ = v___x_1418_;
goto v___jp_1365_;
}
}
}
}
}
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_inc(v_maxTotalPathLength_1398_);
lean_dec(v___x_1425_);
lean_dec_ref(v___x_1418_);
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___x_1448_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1449_ = l_Nat_reprFast(v_maxTotalPathLength_1398_);
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1452_ = lean_string_append(v___x_1450_, v___x_1451_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v___x_1452_);
v___x_1454_ = v___x_1411_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1456_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 1);
lean_ctor_set(v___x_1405_, 1, v___x_1454_);
v___x_1456_ = v___x_1405_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_pos_1402_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
lean_inc(v_maxTotalPathLength_1398_);
lean_dec(v___x_1414_);
lean_dec(v_val_1409_);
lean_del_object(v___x_1388_);
lean_dec(v_fst_1385_);
lean_dec_ref(v_config_1356_);
v___x_1459_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1460_ = l_Nat_reprFast(v_maxTotalPathLength_1398_);
v___x_1461_ = lean_string_append(v___x_1459_, v___x_1460_);
lean_dec_ref(v___x_1460_);
v___x_1462_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1463_ = lean_string_append(v___x_1461_, v___x_1462_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v___x_1463_);
v___x_1465_ = v___x_1411_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1467_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 1);
lean_ctor_set(v___x_1405_, 1, v___x_1465_);
v___x_1467_ = v___x_1405_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_pos_1402_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1473_; 
lean_dec(v___x_1408_);
lean_dec(v_res_1403_);
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_dec_ref(v_config_1356_);
v___x_1471_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 1);
lean_ctor_set(v___x_1405_, 1, v___x_1471_);
v___x_1473_ = v___x_1405_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_pos_1402_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v___x_1471_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
else
{
lean_object* v_pos_1476_; lean_object* v_err_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_dec_ref(v_config_1356_);
v_pos_1476_ = lean_ctor_get(v___x_1401_, 0);
v_err_1477_ = lean_ctor_get(v___x_1401_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1479_ = v___x_1401_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_err_1477_);
lean_inc(v_pos_1476_);
lean_dec(v___x_1401_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_pos_1476_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_err_1477_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
else
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_inc(v_maxPathSegments_1397_);
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_dec_ref(v_config_1356_);
v___x_1485_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1486_ = l_Nat_reprFast(v_maxPathSegments_1397_);
v___x_1487_ = lean_string_append(v___x_1485_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
v___x_1491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___y_1358_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
return v___x_1491_;
}
}
v___jp_1493_:
{
uint8_t v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = 45;
v___x_1495_ = lean_uint8_dec_eq(v___x_1492_, v___x_1494_);
if (v___x_1495_ == 0)
{
uint8_t v___x_1496_; uint8_t v___x_1497_; 
v___x_1496_ = 46;
v___x_1497_ = lean_uint8_dec_eq(v___x_1492_, v___x_1496_);
if (v___x_1497_ == 0)
{
uint8_t v___x_1498_; uint8_t v___x_1499_; 
v___x_1498_ = 95;
v___x_1499_ = lean_uint8_dec_eq(v___x_1492_, v___x_1498_);
if (v___x_1499_ == 0)
{
uint8_t v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = 126;
v___x_1501_ = lean_uint8_dec_eq(v___x_1492_, v___x_1500_);
if (v___x_1501_ == 0)
{
uint8_t v___x_1502_; uint8_t v___x_1503_; 
v___x_1502_ = 33;
v___x_1503_ = lean_uint8_dec_eq(v___x_1492_, v___x_1502_);
if (v___x_1503_ == 0)
{
uint8_t v___x_1504_; uint8_t v___x_1505_; 
v___x_1504_ = 36;
v___x_1505_ = lean_uint8_dec_eq(v___x_1492_, v___x_1504_);
if (v___x_1505_ == 0)
{
uint8_t v___x_1506_; uint8_t v___x_1507_; 
v___x_1506_ = 38;
v___x_1507_ = lean_uint8_dec_eq(v___x_1492_, v___x_1506_);
if (v___x_1507_ == 0)
{
uint8_t v___x_1508_; uint8_t v___x_1509_; 
v___x_1508_ = 39;
v___x_1509_ = lean_uint8_dec_eq(v___x_1492_, v___x_1508_);
if (v___x_1509_ == 0)
{
uint8_t v___x_1510_; uint8_t v___x_1511_; 
v___x_1510_ = 40;
v___x_1511_ = lean_uint8_dec_eq(v___x_1492_, v___x_1510_);
if (v___x_1511_ == 0)
{
uint8_t v___x_1512_; uint8_t v___x_1513_; 
v___x_1512_ = 41;
v___x_1513_ = lean_uint8_dec_eq(v___x_1492_, v___x_1512_);
if (v___x_1513_ == 0)
{
uint8_t v___x_1514_; uint8_t v___x_1515_; 
v___x_1514_ = 42;
v___x_1515_ = lean_uint8_dec_eq(v___x_1492_, v___x_1514_);
if (v___x_1515_ == 0)
{
uint8_t v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = 43;
v___x_1517_ = lean_uint8_dec_eq(v___x_1492_, v___x_1516_);
if (v___x_1517_ == 0)
{
uint8_t v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = 44;
v___x_1519_ = lean_uint8_dec_eq(v___x_1492_, v___x_1518_);
if (v___x_1519_ == 0)
{
uint8_t v___x_1520_; uint8_t v___x_1521_; 
v___x_1520_ = 59;
v___x_1521_ = lean_uint8_dec_eq(v___x_1492_, v___x_1520_);
if (v___x_1521_ == 0)
{
uint8_t v___x_1522_; uint8_t v___x_1523_; 
v___x_1522_ = 61;
v___x_1523_ = lean_uint8_dec_eq(v___x_1492_, v___x_1522_);
if (v___x_1523_ == 0)
{
uint8_t v___x_1524_; uint8_t v___x_1525_; 
v___x_1524_ = 58;
v___x_1525_ = lean_uint8_dec_eq(v___x_1492_, v___x_1524_);
if (v___x_1525_ == 0)
{
uint8_t v___x_1526_; uint8_t v___x_1527_; 
v___x_1526_ = 64;
v___x_1527_ = lean_uint8_dec_eq(v___x_1492_, v___x_1526_);
if (v___x_1527_ == 0)
{
uint8_t v___x_1528_; uint8_t v___x_1529_; 
v___x_1528_ = 37;
v___x_1529_ = lean_uint8_dec_eq(v___x_1492_, v___x_1528_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
lean_del_object(v___x_1388_);
lean_dec_ref(v_config_1356_);
v___x_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1530_, 0, v_fst_1385_);
lean_ctor_set(v___x_1530_, 1, v_snd_1386_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___y_1358_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
return v___x_1531_;
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
else
{
goto v___jp_1396_;
}
}
v___jp_1532_:
{
uint8_t v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = 65;
v___x_1534_ = lean_uint8_dec_le(v___x_1533_, v___x_1492_);
if (v___x_1534_ == 0)
{
goto v___jp_1493_;
}
else
{
uint8_t v___x_1535_; uint8_t v___x_1536_; 
v___x_1535_ = 90;
v___x_1536_ = lean_uint8_dec_le(v___x_1492_, v___x_1535_);
if (v___x_1536_ == 0)
{
goto v___jp_1493_;
}
else
{
goto v___jp_1396_;
}
}
}
v___jp_1537_:
{
uint8_t v___x_1538_; uint8_t v___x_1539_; 
v___x_1538_ = 97;
v___x_1539_ = lean_uint8_dec_le(v___x_1538_, v___x_1492_);
if (v___x_1539_ == 0)
{
goto v___jp_1532_;
}
else
{
uint8_t v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = 122;
v___x_1541_ = lean_uint8_dec_le(v___x_1492_, v___x_1540_);
if (v___x_1541_ == 0)
{
goto v___jp_1532_;
}
else
{
goto v___jp_1396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object* v_config_1552_, lean_object* v_a_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v_array_1579_; lean_object* v_idx_1580_; lean_object* v_fst_1581_; lean_object* v_snd_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1747_; 
v_array_1579_ = lean_ctor_get(v___y_1554_, 0);
v_idx_1580_ = lean_ctor_get(v___y_1554_, 1);
v_fst_1581_ = lean_ctor_get(v_a_1553_, 0);
v_snd_1582_ = lean_ctor_get(v_a_1553_, 1);
v_isSharedCheck_1747_ = !lean_is_exclusive(v_a_1553_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1584_ = v_a_1553_;
v_isShared_1585_ = v_isSharedCheck_1747_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_snd_1582_);
lean_inc(v_fst_1581_);
lean_dec(v_a_1553_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1747_;
goto v_resetjp_1583_;
}
v___jp_1555_:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___y_1556_);
lean_ctor_set(v___x_1559_, 1, v___y_1558_);
v___x_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___y_1557_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
return v___x_1560_;
}
v___jp_1561_:
{
lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = lean_array_get_size(v___y_1562_);
v___x_1567_ = lean_nat_dec_le(v___y_1563_, v___x_1566_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec(v___y_1563_);
v___x_1568_ = l_ByteArray_empty;
v___x_1569_ = lean_array_push(v___y_1562_, v___x_1568_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
lean_ctor_set(v___x_1570_, 1, v___y_1565_);
v___x_1571_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1552_, v___x_1570_, v___y_1564_);
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v_config_1552_);
v___x_1572_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1573_ = l_Nat_reprFast(v___y_1563_);
v___x_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
lean_dec_ref(v___x_1573_);
v___x_1575_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1576_ = lean_string_append(v___x_1574_, v___x_1575_);
v___x_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
v___x_1578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___y_1564_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
return v___x_1578_;
}
}
v_resetjp_1583_:
{
lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = lean_byte_array_size(v_array_1579_);
v___x_1587_ = lean_nat_dec_lt(v_idx_1580_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1589_; 
lean_dec_ref(v_config_1552_);
if (v_isShared_1585_ == 0)
{
v___x_1589_ = v___x_1584_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_fst_1581_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_snd_1582_);
v___x_1589_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___y_1554_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
return v___x_1590_;
}
}
else
{
uint8_t v___x_1688_; uint8_t v___x_1738_; 
v___x_1688_ = lean_byte_array_fget(v_array_1579_, v_idx_1580_);
v___x_1738_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1688_);
if (v___x_1738_ == 0)
{
uint8_t v___x_1739_; uint8_t v___x_1740_; 
v___x_1739_ = 47;
v___x_1740_ = lean_uint8_dec_eq(v___x_1688_, v___x_1739_);
if (v___x_1740_ == 0)
{
uint8_t v___x_1741_; uint8_t v___x_1742_; 
v___x_1741_ = 48;
v___x_1742_ = lean_uint8_dec_le(v___x_1741_, v___x_1688_);
if (v___x_1742_ == 0)
{
goto v___jp_1733_;
}
else
{
uint8_t v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = 57;
v___x_1744_ = lean_uint8_dec_le(v___x_1688_, v___x_1743_);
if (v___x_1744_ == 0)
{
goto v___jp_1733_;
}
else
{
goto v___jp_1592_;
}
}
}
else
{
goto v___jp_1592_;
}
}
else
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___x_1745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1745_, 0, v_fst_1581_);
lean_ctor_set(v___x_1745_, 1, v_snd_1582_);
v___x_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___y_1554_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
return v___x_1746_;
}
v___jp_1592_:
{
lean_object* v_maxPathSegments_1593_; lean_object* v_maxTotalPathLength_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v_maxPathSegments_1593_ = lean_ctor_get(v_config_1552_, 6);
v_maxTotalPathLength_1594_ = lean_ctor_get(v_config_1552_, 7);
v___x_1595_ = lean_array_get_size(v_fst_1581_);
v___x_1596_ = lean_nat_dec_le(v_maxPathSegments_1593_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; 
v___x_1597_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1552_, v___y_1554_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_pos_1598_; lean_object* v_res_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1671_; 
v_pos_1598_ = lean_ctor_get(v___x_1597_, 0);
v_res_1599_ = lean_ctor_get(v___x_1597_, 1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1601_ = v___x_1597_;
v_isShared_1602_ = v_isSharedCheck_1671_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_res_1599_);
lean_inc(v_pos_1598_);
lean_dec(v___x_1597_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1671_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
lean_inc(v_res_1599_);
v___x_1603_ = l_ByteSlice_toByteArray(v_res_1599_);
v___x_1604_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1603_);
if (lean_obj_tag(v___x_1604_) == 1)
{
lean_object* v_val_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1666_; 
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1607_ = v___x_1604_;
v_isShared_1608_ = v_isSharedCheck_1666_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_val_1605_);
lean_dec(v___x_1604_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1666_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1609_ = l_ByteSlice_size(v_res_1599_);
lean_dec(v_res_1599_);
v___x_1610_ = lean_nat_add(v_snd_1582_, v___x_1609_);
lean_dec(v___x_1609_);
lean_dec(v_snd_1582_);
v___x_1611_ = lean_nat_dec_lt(v_maxTotalPathLength_1594_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_object* v_array_1612_; lean_object* v_idx_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; uint8_t v___x_1616_; 
v_array_1612_ = lean_ctor_get(v_pos_1598_, 0);
v_idx_1613_ = lean_ctor_get(v_pos_1598_, 1);
v___x_1614_ = lean_array_push(v_fst_1581_, v_val_1605_);
v___x_1615_ = lean_byte_array_size(v_array_1612_);
v___x_1616_ = lean_nat_dec_lt(v_idx_1613_, v___x_1615_);
if (v___x_1616_ == 0)
{
lean_del_object(v___x_1607_);
lean_del_object(v___x_1601_);
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___y_1556_ = v___x_1614_;
v___y_1557_ = v_pos_1598_;
v___y_1558_ = v___x_1610_;
goto v___jp_1555_;
}
else
{
uint8_t v___x_1617_; uint8_t v___x_1618_; uint8_t v___x_1619_; 
v___x_1617_ = lean_byte_array_fget(v_array_1612_, v_idx_1613_);
v___x_1618_ = 47;
v___x_1619_ = lean_uint8_dec_eq(v___x_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_del_object(v___x_1607_);
lean_del_object(v___x_1601_);
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___y_1556_ = v___x_1614_;
v___y_1557_ = v_pos_1598_;
v___y_1558_ = v___x_1610_;
goto v___jp_1555_;
}
else
{
lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_nat_add(v___x_1610_, v___x_1620_);
lean_dec(v___x_1610_);
v___x_1622_ = lean_nat_dec_lt(v_maxTotalPathLength_1594_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_del_object(v___x_1607_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
lean_dec(v___x_1621_);
lean_dec_ref(v___x_1614_);
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___x_1623_ = lean_box(0);
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 1);
lean_ctor_set(v___x_1601_, 1, v___x_1623_);
v___x_1625_ = v___x_1601_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_pos_1598_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
else
{
lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1641_; 
lean_inc(v_idx_1613_);
lean_inc_ref(v_array_1612_);
lean_del_object(v___x_1601_);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_pos_1598_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; lean_object* v_unused_1643_; 
v_unused_1642_ = lean_ctor_get(v_pos_1598_, 1);
lean_dec(v_unused_1642_);
v_unused_1643_ = lean_ctor_get(v_pos_1598_, 0);
lean_dec(v_unused_1643_);
v___x_1628_ = v_pos_1598_;
v_isShared_1629_ = v_isSharedCheck_1641_;
goto v_resetjp_1627_;
}
else
{
lean_dec(v_pos_1598_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1641_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1630_ = lean_nat_add(v_idx_1613_, v___x_1620_);
lean_dec(v_idx_1613_);
lean_inc(v___x_1630_);
lean_inc_ref(v_array_1612_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 1, v___x_1630_);
v___x_1632_ = v___x_1628_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_array_1612_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
uint8_t v___x_1633_; 
v___x_1633_ = lean_nat_dec_lt(v___x_1630_, v___x_1615_);
if (v___x_1633_ == 0)
{
lean_dec(v___x_1630_);
lean_dec_ref(v_array_1612_);
lean_del_object(v___x_1584_);
lean_inc(v_maxPathSegments_1593_);
v___y_1562_ = v___x_1614_;
v___y_1563_ = v_maxPathSegments_1593_;
v___y_1564_ = v___x_1632_;
v___y_1565_ = v___x_1621_;
goto v___jp_1561_;
}
else
{
uint8_t v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = lean_byte_array_fget(v_array_1612_, v___x_1630_);
lean_dec(v___x_1630_);
lean_dec_ref(v_array_1612_);
v___x_1635_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1637_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 1, v___x_1621_);
lean_ctor_set(v___x_1584_, 0, v___x_1614_);
v___x_1637_ = v___x_1584_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v___x_1621_);
v___x_1637_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
lean_object* v___x_1638_; 
v___x_1638_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1552_, v___x_1637_, v___x_1632_);
return v___x_1638_;
}
}
else
{
lean_del_object(v___x_1584_);
lean_inc(v_maxPathSegments_1593_);
v___y_1562_ = v___x_1614_;
v___y_1563_ = v_maxPathSegments_1593_;
v___y_1564_ = v___x_1632_;
v___y_1565_ = v___x_1621_;
goto v___jp_1561_;
}
}
}
}
}
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1650_; 
lean_inc(v_maxTotalPathLength_1594_);
lean_dec(v___x_1621_);
lean_dec_ref(v___x_1614_);
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___x_1644_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1645_ = l_Nat_reprFast(v_maxTotalPathLength_1594_);
v___x_1646_ = lean_string_append(v___x_1644_, v___x_1645_);
lean_dec_ref(v___x_1645_);
v___x_1647_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1648_ = lean_string_append(v___x_1646_, v___x_1647_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1648_);
v___x_1650_ = v___x_1607_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
lean_object* v___x_1652_; 
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 1);
lean_ctor_set(v___x_1601_, 1, v___x_1650_);
v___x_1652_ = v___x_1601_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_pos_1598_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
}
else
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1661_; 
lean_inc(v_maxTotalPathLength_1594_);
lean_dec(v___x_1610_);
lean_dec(v_val_1605_);
lean_del_object(v___x_1584_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_config_1552_);
v___x_1655_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1656_ = l_Nat_reprFast(v_maxTotalPathLength_1594_);
v___x_1657_ = lean_string_append(v___x_1655_, v___x_1656_);
lean_dec_ref(v___x_1656_);
v___x_1658_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1659_ = lean_string_append(v___x_1657_, v___x_1658_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1659_);
v___x_1661_ = v___x_1607_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1659_);
v___x_1661_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 1);
lean_ctor_set(v___x_1601_, 1, v___x_1661_);
v___x_1663_ = v___x_1601_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_pos_1598_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
else
{
lean_object* v___x_1667_; lean_object* v___x_1669_; 
lean_dec(v___x_1604_);
lean_dec(v_res_1599_);
lean_del_object(v___x_1584_);
lean_dec(v_snd_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_config_1552_);
v___x_1667_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 1);
lean_ctor_set(v___x_1601_, 1, v___x_1667_);
v___x_1669_ = v___x_1601_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_pos_1598_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v___x_1667_);
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
else
{
lean_object* v_pos_1672_; lean_object* v_err_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_del_object(v___x_1584_);
lean_dec(v_snd_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_config_1552_);
v_pos_1672_ = lean_ctor_get(v___x_1597_, 0);
v_err_1673_ = lean_ctor_get(v___x_1597_, 1);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1597_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_err_1673_);
lean_inc(v_pos_1672_);
lean_dec(v___x_1597_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_pos_1672_);
lean_ctor_set(v_reuseFailAlloc_1679_, 1, v_err_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
lean_inc(v_maxPathSegments_1593_);
lean_del_object(v___x_1584_);
lean_dec(v_snd_1582_);
lean_dec(v_fst_1581_);
lean_dec_ref(v_config_1552_);
v___x_1681_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1682_ = l_Nat_reprFast(v_maxPathSegments_1593_);
v___x_1683_ = lean_string_append(v___x_1681_, v___x_1682_);
lean_dec_ref(v___x_1682_);
v___x_1684_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1685_ = lean_string_append(v___x_1683_, v___x_1684_);
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___y_1554_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
return v___x_1687_;
}
}
v___jp_1689_:
{
uint8_t v___x_1690_; uint8_t v___x_1691_; 
v___x_1690_ = 45;
v___x_1691_ = lean_uint8_dec_eq(v___x_1688_, v___x_1690_);
if (v___x_1691_ == 0)
{
uint8_t v___x_1692_; uint8_t v___x_1693_; 
v___x_1692_ = 46;
v___x_1693_ = lean_uint8_dec_eq(v___x_1688_, v___x_1692_);
if (v___x_1693_ == 0)
{
uint8_t v___x_1694_; uint8_t v___x_1695_; 
v___x_1694_ = 95;
v___x_1695_ = lean_uint8_dec_eq(v___x_1688_, v___x_1694_);
if (v___x_1695_ == 0)
{
uint8_t v___x_1696_; uint8_t v___x_1697_; 
v___x_1696_ = 126;
v___x_1697_ = lean_uint8_dec_eq(v___x_1688_, v___x_1696_);
if (v___x_1697_ == 0)
{
uint8_t v___x_1698_; uint8_t v___x_1699_; 
v___x_1698_ = 33;
v___x_1699_ = lean_uint8_dec_eq(v___x_1688_, v___x_1698_);
if (v___x_1699_ == 0)
{
uint8_t v___x_1700_; uint8_t v___x_1701_; 
v___x_1700_ = 36;
v___x_1701_ = lean_uint8_dec_eq(v___x_1688_, v___x_1700_);
if (v___x_1701_ == 0)
{
uint8_t v___x_1702_; uint8_t v___x_1703_; 
v___x_1702_ = 38;
v___x_1703_ = lean_uint8_dec_eq(v___x_1688_, v___x_1702_);
if (v___x_1703_ == 0)
{
uint8_t v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = 39;
v___x_1705_ = lean_uint8_dec_eq(v___x_1688_, v___x_1704_);
if (v___x_1705_ == 0)
{
uint8_t v___x_1706_; uint8_t v___x_1707_; 
v___x_1706_ = 40;
v___x_1707_ = lean_uint8_dec_eq(v___x_1688_, v___x_1706_);
if (v___x_1707_ == 0)
{
uint8_t v___x_1708_; uint8_t v___x_1709_; 
v___x_1708_ = 41;
v___x_1709_ = lean_uint8_dec_eq(v___x_1688_, v___x_1708_);
if (v___x_1709_ == 0)
{
uint8_t v___x_1710_; uint8_t v___x_1711_; 
v___x_1710_ = 42;
v___x_1711_ = lean_uint8_dec_eq(v___x_1688_, v___x_1710_);
if (v___x_1711_ == 0)
{
uint8_t v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = 43;
v___x_1713_ = lean_uint8_dec_eq(v___x_1688_, v___x_1712_);
if (v___x_1713_ == 0)
{
uint8_t v___x_1714_; uint8_t v___x_1715_; 
v___x_1714_ = 44;
v___x_1715_ = lean_uint8_dec_eq(v___x_1688_, v___x_1714_);
if (v___x_1715_ == 0)
{
uint8_t v___x_1716_; uint8_t v___x_1717_; 
v___x_1716_ = 59;
v___x_1717_ = lean_uint8_dec_eq(v___x_1688_, v___x_1716_);
if (v___x_1717_ == 0)
{
uint8_t v___x_1718_; uint8_t v___x_1719_; 
v___x_1718_ = 61;
v___x_1719_ = lean_uint8_dec_eq(v___x_1688_, v___x_1718_);
if (v___x_1719_ == 0)
{
uint8_t v___x_1720_; uint8_t v___x_1721_; 
v___x_1720_ = 58;
v___x_1721_ = lean_uint8_dec_eq(v___x_1688_, v___x_1720_);
if (v___x_1721_ == 0)
{
uint8_t v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = 64;
v___x_1723_ = lean_uint8_dec_eq(v___x_1688_, v___x_1722_);
if (v___x_1723_ == 0)
{
uint8_t v___x_1724_; uint8_t v___x_1725_; 
v___x_1724_ = 37;
v___x_1725_ = lean_uint8_dec_eq(v___x_1688_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_del_object(v___x_1584_);
lean_dec_ref(v_config_1552_);
v___x_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1726_, 0, v_fst_1581_);
lean_ctor_set(v___x_1726_, 1, v_snd_1582_);
v___x_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___y_1554_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
return v___x_1727_;
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
else
{
goto v___jp_1592_;
}
}
v___jp_1728_:
{
uint8_t v___x_1729_; uint8_t v___x_1730_; 
v___x_1729_ = 65;
v___x_1730_ = lean_uint8_dec_le(v___x_1729_, v___x_1688_);
if (v___x_1730_ == 0)
{
goto v___jp_1689_;
}
else
{
uint8_t v___x_1731_; uint8_t v___x_1732_; 
v___x_1731_ = 90;
v___x_1732_ = lean_uint8_dec_le(v___x_1688_, v___x_1731_);
if (v___x_1732_ == 0)
{
goto v___jp_1689_;
}
else
{
goto v___jp_1592_;
}
}
}
v___jp_1733_:
{
uint8_t v___x_1734_; uint8_t v___x_1735_; 
v___x_1734_ = 97;
v___x_1735_ = lean_uint8_dec_le(v___x_1734_, v___x_1688_);
if (v___x_1735_ == 0)
{
goto v___jp_1728_;
}
else
{
uint8_t v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = 122;
v___x_1737_ = lean_uint8_dec_le(v___x_1688_, v___x_1736_);
if (v___x_1737_ == 0)
{
goto v___jp_1728_;
}
else
{
goto v___jp_1592_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object* v_config_1759_, uint8_t v_forceAbsolute_1760_, uint8_t v_allowEmpty_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v___y_1764_; lean_object* v___y_1768_; lean_object* v_array_1771_; lean_object* v_idx_1772_; uint8_t v_isAbsolute_1773_; lean_object* v___x_1774_; lean_object* v_segments_1775_; uint8_t v_isAbsolute_1777_; lean_object* v_totalLength_1778_; lean_object* v___y_1779_; lean_object* v_pos_1803_; lean_object* v_array_1804_; lean_object* v_idx_1805_; lean_object* v___y_1814_; uint8_t v___y_1818_; lean_object* v_pos_1819_; uint8_t v_res_1820_; uint8_t v___y_1822_; lean_object* v_pos_1823_; uint8_t v_res_1824_; uint8_t v___y_1832_; lean_object* v___y_1833_; uint8_t v___y_1834_; uint8_t v___y_1843_; lean_object* v_pos_1844_; uint8_t v_res_1845_; lean_object* v_pos_1847_; lean_object* v_array_1848_; lean_object* v_idx_1849_; uint8_t v_res_1850_; lean_object* v___x_1854_; uint8_t v___x_1855_; 
v_array_1771_ = lean_ctor_get(v_a_1762_, 0);
lean_inc_ref(v_array_1771_);
v_idx_1772_ = lean_ctor_get(v_a_1762_, 1);
lean_inc(v_idx_1772_);
v_isAbsolute_1773_ = 0;
v___x_1774_ = lean_unsigned_to_nat(0u);
v_segments_1775_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__4));
v___x_1854_ = lean_byte_array_size(v_array_1771_);
v___x_1855_ = lean_nat_dec_lt(v_idx_1772_, v___x_1854_);
if (v___x_1855_ == 0)
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v_isAbsolute_1773_;
goto v___jp_1846_;
}
else
{
uint8_t v___x_1856_; uint8_t v___x_1906_; uint8_t v___x_1907_; 
v___x_1856_ = lean_byte_array_fget(v_array_1771_, v_idx_1772_);
v___x_1906_ = 48;
v___x_1907_ = lean_uint8_dec_le(v___x_1906_, v___x_1856_);
if (v___x_1907_ == 0)
{
goto v___jp_1901_;
}
else
{
uint8_t v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = 57;
v___x_1909_ = lean_uint8_dec_le(v___x_1856_, v___x_1908_);
if (v___x_1909_ == 0)
{
goto v___jp_1901_;
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1909_;
goto v___jp_1846_;
}
}
v___jp_1857_:
{
uint8_t v___x_1858_; uint8_t v___x_1859_; 
v___x_1858_ = 45;
v___x_1859_ = lean_uint8_dec_eq(v___x_1856_, v___x_1858_);
if (v___x_1859_ == 0)
{
uint8_t v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = 46;
v___x_1861_ = lean_uint8_dec_eq(v___x_1856_, v___x_1860_);
if (v___x_1861_ == 0)
{
uint8_t v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = 95;
v___x_1863_ = lean_uint8_dec_eq(v___x_1856_, v___x_1862_);
if (v___x_1863_ == 0)
{
uint8_t v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = 126;
v___x_1865_ = lean_uint8_dec_eq(v___x_1856_, v___x_1864_);
if (v___x_1865_ == 0)
{
uint8_t v___x_1866_; uint8_t v___x_1867_; 
v___x_1866_ = 33;
v___x_1867_ = lean_uint8_dec_eq(v___x_1856_, v___x_1866_);
if (v___x_1867_ == 0)
{
uint8_t v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = 36;
v___x_1869_ = lean_uint8_dec_eq(v___x_1856_, v___x_1868_);
if (v___x_1869_ == 0)
{
uint8_t v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = 38;
v___x_1871_ = lean_uint8_dec_eq(v___x_1856_, v___x_1870_);
if (v___x_1871_ == 0)
{
uint8_t v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = 39;
v___x_1873_ = lean_uint8_dec_eq(v___x_1856_, v___x_1872_);
if (v___x_1873_ == 0)
{
uint8_t v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = 40;
v___x_1875_ = lean_uint8_dec_eq(v___x_1856_, v___x_1874_);
if (v___x_1875_ == 0)
{
uint8_t v___x_1876_; uint8_t v___x_1877_; 
v___x_1876_ = 41;
v___x_1877_ = lean_uint8_dec_eq(v___x_1856_, v___x_1876_);
if (v___x_1877_ == 0)
{
uint8_t v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = 42;
v___x_1879_ = lean_uint8_dec_eq(v___x_1856_, v___x_1878_);
if (v___x_1879_ == 0)
{
uint8_t v___x_1880_; uint8_t v___x_1881_; 
v___x_1880_ = 43;
v___x_1881_ = lean_uint8_dec_eq(v___x_1856_, v___x_1880_);
if (v___x_1881_ == 0)
{
uint8_t v___x_1882_; uint8_t v___x_1883_; 
v___x_1882_ = 44;
v___x_1883_ = lean_uint8_dec_eq(v___x_1856_, v___x_1882_);
if (v___x_1883_ == 0)
{
uint8_t v___x_1884_; uint8_t v___x_1885_; 
v___x_1884_ = 59;
v___x_1885_ = lean_uint8_dec_eq(v___x_1856_, v___x_1884_);
if (v___x_1885_ == 0)
{
uint8_t v___x_1886_; uint8_t v___x_1887_; 
v___x_1886_ = 61;
v___x_1887_ = lean_uint8_dec_eq(v___x_1856_, v___x_1886_);
if (v___x_1887_ == 0)
{
uint8_t v___x_1888_; uint8_t v___x_1889_; 
v___x_1888_ = 58;
v___x_1889_ = lean_uint8_dec_eq(v___x_1856_, v___x_1888_);
if (v___x_1889_ == 0)
{
uint8_t v___x_1890_; uint8_t v___x_1891_; 
v___x_1890_ = 64;
v___x_1891_ = lean_uint8_dec_eq(v___x_1856_, v___x_1890_);
if (v___x_1891_ == 0)
{
uint8_t v___x_1892_; uint8_t v___x_1893_; 
v___x_1892_ = 37;
v___x_1893_ = lean_uint8_dec_eq(v___x_1856_, v___x_1892_);
if (v___x_1893_ == 0)
{
uint8_t v___x_1894_; uint8_t v___x_1895_; 
v___x_1894_ = 47;
v___x_1895_ = lean_uint8_dec_eq(v___x_1856_, v___x_1894_);
if (v___x_1895_ == 0)
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v_isAbsolute_1773_;
goto v___jp_1846_;
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1895_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1893_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1891_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1889_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1887_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1885_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1883_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1881_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1879_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1877_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1875_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1873_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1871_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1869_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1867_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1865_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1863_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1861_;
goto v___jp_1846_;
}
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1859_;
goto v___jp_1846_;
}
}
v___jp_1896_:
{
uint8_t v___x_1897_; uint8_t v___x_1898_; 
v___x_1897_ = 65;
v___x_1898_ = lean_uint8_dec_le(v___x_1897_, v___x_1856_);
if (v___x_1898_ == 0)
{
goto v___jp_1857_;
}
else
{
uint8_t v___x_1899_; uint8_t v___x_1900_; 
v___x_1899_ = 90;
v___x_1900_ = lean_uint8_dec_le(v___x_1856_, v___x_1899_);
if (v___x_1900_ == 0)
{
goto v___jp_1857_;
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1900_;
goto v___jp_1846_;
}
}
}
v___jp_1901_:
{
uint8_t v___x_1902_; uint8_t v___x_1903_; 
v___x_1902_ = 97;
v___x_1903_ = lean_uint8_dec_le(v___x_1902_, v___x_1856_);
if (v___x_1903_ == 0)
{
goto v___jp_1896_;
}
else
{
uint8_t v___x_1904_; uint8_t v___x_1905_; 
v___x_1904_ = 122;
v___x_1905_ = lean_uint8_dec_le(v___x_1856_, v___x_1904_);
if (v___x_1905_ == 0)
{
goto v___jp_1896_;
}
else
{
v_pos_1847_ = v_a_1762_;
v_array_1848_ = v_array_1771_;
v_idx_1849_ = v_idx_1772_;
v_res_1850_ = v___x_1905_;
goto v___jp_1846_;
}
}
}
}
v___jp_1763_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__1));
v___x_1766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___y_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
return v___x_1766_;
}
v___jp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__3));
v___x_1770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___y_1768_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
return v___x_1770_;
}
v___jp_1776_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v_segments_1775_);
lean_ctor_set(v___x_1780_, 1, v_totalLength_1778_);
v___x_1781_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1759_, v___x_1780_, v___y_1779_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_res_1782_; lean_object* v_pos_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1792_; 
v_res_1782_ = lean_ctor_get(v___x_1781_, 1);
v_pos_1783_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1785_ = v___x_1781_;
v_isShared_1786_ = v_isSharedCheck_1792_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_res_1782_);
lean_inc(v_pos_1783_);
lean_dec(v___x_1781_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1792_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v_fst_1787_; lean_object* v___x_1788_; lean_object* v___x_1790_; 
v_fst_1787_ = lean_ctor_get(v_res_1782_, 0);
lean_inc(v_fst_1787_);
lean_dec(v_res_1782_);
v___x_1788_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1788_, 0, v_fst_1787_);
lean_ctor_set_uint8(v___x_1788_, sizeof(void*)*1, v_isAbsolute_1777_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 1, v___x_1788_);
v___x_1790_ = v___x_1785_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_pos_1783_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
else
{
lean_object* v_pos_1793_; lean_object* v_err_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
v_pos_1793_ = lean_ctor_get(v___x_1781_, 0);
v_err_1794_ = lean_ctor_get(v___x_1781_, 1);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1781_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_err_1794_);
lean_inc(v_pos_1793_);
lean_dec(v___x_1781_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_pos_1793_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v_err_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
v___jp_1802_:
{
lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = lean_byte_array_size(v_array_1804_);
v___x_1807_ = lean_nat_dec_lt(v_idx_1805_, v___x_1806_);
if (v___x_1807_ == 0)
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec(v_idx_1805_);
lean_dec_ref(v_array_1804_);
lean_dec_ref(v_config_1759_);
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1809_, 0, v_pos_1803_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
return v___x_1809_;
}
else
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
lean_dec_ref(v_pos_1803_);
v___x_1810_ = lean_unsigned_to_nat(1u);
v___x_1811_ = lean_nat_add(v_idx_1805_, v___x_1810_);
lean_dec(v_idx_1805_);
v___x_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1812_, 0, v_array_1804_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v_isAbsolute_1777_ = v___x_1807_;
v_totalLength_1778_ = v___x_1810_;
v___y_1779_ = v___x_1812_;
goto v___jp_1776_;
}
}
v___jp_1813_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__5));
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___y_1814_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
return v___x_1816_;
}
v___jp_1817_:
{
if (v_allowEmpty_1761_ == 0)
{
v___y_1764_ = v_pos_1819_;
goto v___jp_1763_;
}
else
{
if (v_res_1820_ == 0)
{
if (v___y_1818_ == 0)
{
v___y_1814_ = v_pos_1819_;
goto v___jp_1813_;
}
else
{
v___y_1764_ = v_pos_1819_;
goto v___jp_1763_;
}
}
else
{
v___y_1814_ = v_pos_1819_;
goto v___jp_1813_;
}
}
}
v___jp_1821_:
{
if (v_res_1824_ == 0)
{
if (v_forceAbsolute_1760_ == 0)
{
v_isAbsolute_1777_ = v_isAbsolute_1773_;
v_totalLength_1778_ = v___x_1774_;
v___y_1779_ = v_pos_1823_;
goto v___jp_1776_;
}
else
{
lean_object* v_array_1825_; lean_object* v_idx_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; 
lean_dec_ref(v_config_1759_);
v_array_1825_ = lean_ctor_get(v_pos_1823_, 0);
v_idx_1826_ = lean_ctor_get(v_pos_1823_, 1);
v___x_1827_ = lean_byte_array_size(v_array_1825_);
v___x_1828_ = lean_nat_dec_lt(v_idx_1826_, v___x_1827_);
if (v___x_1828_ == 0)
{
v___y_1818_ = v___y_1822_;
v_pos_1819_ = v_pos_1823_;
v_res_1820_ = v_forceAbsolute_1760_;
goto v___jp_1817_;
}
else
{
v___y_1818_ = v___y_1822_;
v_pos_1819_ = v_pos_1823_;
v_res_1820_ = v_res_1824_;
goto v___jp_1817_;
}
}
}
else
{
lean_object* v_array_1829_; lean_object* v_idx_1830_; 
v_array_1829_ = lean_ctor_get(v_pos_1823_, 0);
lean_inc_ref(v_array_1829_);
v_idx_1830_ = lean_ctor_get(v_pos_1823_, 1);
lean_inc(v_idx_1830_);
v_pos_1803_ = v_pos_1823_;
v_array_1804_ = v_array_1829_;
v_idx_1805_ = v_idx_1830_;
goto v___jp_1802_;
}
}
v___jp_1831_:
{
lean_object* v_array_1835_; lean_object* v_idx_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v_array_1835_ = lean_ctor_get(v___y_1833_, 0);
v_idx_1836_ = lean_ctor_get(v___y_1833_, 1);
v___x_1837_ = lean_byte_array_size(v_array_1835_);
v___x_1838_ = lean_nat_dec_lt(v_idx_1836_, v___x_1837_);
if (v___x_1838_ == 0)
{
v___y_1822_ = v___y_1832_;
v_pos_1823_ = v___y_1833_;
v_res_1824_ = v___y_1834_;
goto v___jp_1821_;
}
else
{
uint8_t v___x_1839_; uint8_t v___x_1840_; uint8_t v___x_1841_; 
v___x_1839_ = lean_byte_array_fget(v_array_1835_, v_idx_1836_);
v___x_1840_ = 47;
v___x_1841_ = lean_uint8_dec_eq(v___x_1839_, v___x_1840_);
if (v___x_1841_ == 0)
{
v___y_1822_ = v___y_1832_;
v_pos_1823_ = v___y_1833_;
v_res_1824_ = v___y_1834_;
goto v___jp_1821_;
}
else
{
lean_inc(v_idx_1836_);
lean_inc_ref(v_array_1835_);
v_pos_1803_ = v___y_1833_;
v_array_1804_ = v_array_1835_;
v_idx_1805_ = v_idx_1836_;
goto v___jp_1802_;
}
}
}
v___jp_1842_:
{
if (v_allowEmpty_1761_ == 0)
{
if (v_res_1845_ == 0)
{
if (v___y_1843_ == 0)
{
lean_dec_ref(v_config_1759_);
v___y_1768_ = v_pos_1844_;
goto v___jp_1767_;
}
else
{
v___y_1832_ = v___y_1843_;
v___y_1833_ = v_pos_1844_;
v___y_1834_ = v_res_1845_;
goto v___jp_1831_;
}
}
else
{
lean_dec_ref(v_config_1759_);
v___y_1768_ = v_pos_1844_;
goto v___jp_1767_;
}
}
else
{
v___y_1832_ = v___y_1843_;
v___y_1833_ = v_pos_1844_;
v___y_1834_ = v_isAbsolute_1773_;
goto v___jp_1831_;
}
}
v___jp_1846_:
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = lean_byte_array_size(v_array_1848_);
lean_dec_ref(v_array_1848_);
v___x_1852_ = lean_nat_dec_lt(v_idx_1849_, v___x_1851_);
lean_dec(v_idx_1849_);
if (v___x_1852_ == 0)
{
uint8_t v___x_1853_; 
v___x_1853_ = 1;
v___y_1843_ = v_res_1850_;
v_pos_1844_ = v_pos_1847_;
v_res_1845_ = v___x_1853_;
goto v___jp_1842_;
}
else
{
v___y_1843_ = v_res_1850_;
v_pos_1844_ = v_pos_1847_;
v_res_1845_ = v_isAbsolute_1773_;
goto v___jp_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object* v_config_1910_, lean_object* v_forceAbsolute_1911_, lean_object* v_allowEmpty_1912_, lean_object* v_a_1913_){
_start:
{
uint8_t v_forceAbsolute_boxed_1914_; uint8_t v_allowEmpty_boxed_1915_; lean_object* v_res_1916_; 
v_forceAbsolute_boxed_1914_ = lean_unbox(v_forceAbsolute_1911_);
v_allowEmpty_boxed_1915_ = lean_unbox(v_allowEmpty_1912_);
v_res_1916_ = l_Std_Http_URI_Parser_parsePath(v_config_1910_, v_forceAbsolute_boxed_1914_, v_allowEmpty_boxed_1915_, v_a_1913_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object* v_config_1917_, lean_object* v_inst_1918_, lean_object* v_a_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1917_, v_a_1919_, v___y_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object* v_config_1922_, lean_object* v_inst_1923_, lean_object* v_a_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1922_, v_a_1924_, v___y_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg(){
_start:
{
lean_object* v___x_1928_; 
v___x_1928_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object* v___dummy_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v_res_1930_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object* v_s_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object* v_s_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(v_s_1934_);
lean_dec_ref(v_s_1934_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg(){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object* v___dummy_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v_res_1939_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object* v_s_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object* v_s_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(v_s_1943_);
lean_dec_ref(v_s_1943_);
return v_res_1944_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t v_c_1945_){
_start:
{
uint8_t v___x_1997_; uint8_t v___x_1998_; 
v___x_1997_ = 48;
v___x_1998_ = lean_uint8_dec_le(v___x_1997_, v_c_1945_);
if (v___x_1998_ == 0)
{
goto v___jp_1992_;
}
else
{
uint8_t v___x_1999_; uint8_t v___x_2000_; 
v___x_1999_ = 57;
v___x_2000_ = lean_uint8_dec_le(v_c_1945_, v___x_1999_);
if (v___x_2000_ == 0)
{
goto v___jp_1992_;
}
else
{
return v___x_2000_;
}
}
v___jp_1946_:
{
uint8_t v___x_1947_; uint8_t v___x_1948_; 
v___x_1947_ = 45;
v___x_1948_ = lean_uint8_dec_eq(v_c_1945_, v___x_1947_);
if (v___x_1948_ == 0)
{
uint8_t v___x_1949_; uint8_t v___x_1950_; 
v___x_1949_ = 46;
v___x_1950_ = lean_uint8_dec_eq(v_c_1945_, v___x_1949_);
if (v___x_1950_ == 0)
{
uint8_t v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = 95;
v___x_1952_ = lean_uint8_dec_eq(v_c_1945_, v___x_1951_);
if (v___x_1952_ == 0)
{
uint8_t v___x_1953_; uint8_t v___x_1954_; 
v___x_1953_ = 126;
v___x_1954_ = lean_uint8_dec_eq(v_c_1945_, v___x_1953_);
if (v___x_1954_ == 0)
{
uint8_t v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = 33;
v___x_1956_ = lean_uint8_dec_eq(v_c_1945_, v___x_1955_);
if (v___x_1956_ == 0)
{
uint8_t v___x_1957_; uint8_t v___x_1958_; 
v___x_1957_ = 36;
v___x_1958_ = lean_uint8_dec_eq(v_c_1945_, v___x_1957_);
if (v___x_1958_ == 0)
{
uint8_t v___x_1959_; uint8_t v___x_1960_; 
v___x_1959_ = 38;
v___x_1960_ = lean_uint8_dec_eq(v_c_1945_, v___x_1959_);
if (v___x_1960_ == 0)
{
uint8_t v___x_1961_; uint8_t v___x_1962_; 
v___x_1961_ = 39;
v___x_1962_ = lean_uint8_dec_eq(v_c_1945_, v___x_1961_);
if (v___x_1962_ == 0)
{
uint8_t v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = 40;
v___x_1964_ = lean_uint8_dec_eq(v_c_1945_, v___x_1963_);
if (v___x_1964_ == 0)
{
uint8_t v___x_1965_; uint8_t v___x_1966_; 
v___x_1965_ = 41;
v___x_1966_ = lean_uint8_dec_eq(v_c_1945_, v___x_1965_);
if (v___x_1966_ == 0)
{
uint8_t v___x_1967_; uint8_t v___x_1968_; 
v___x_1967_ = 42;
v___x_1968_ = lean_uint8_dec_eq(v_c_1945_, v___x_1967_);
if (v___x_1968_ == 0)
{
uint8_t v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = 43;
v___x_1970_ = lean_uint8_dec_eq(v_c_1945_, v___x_1969_);
if (v___x_1970_ == 0)
{
uint8_t v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = 44;
v___x_1972_ = lean_uint8_dec_eq(v_c_1945_, v___x_1971_);
if (v___x_1972_ == 0)
{
uint8_t v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = 59;
v___x_1974_ = lean_uint8_dec_eq(v_c_1945_, v___x_1973_);
if (v___x_1974_ == 0)
{
uint8_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = 61;
v___x_1976_ = lean_uint8_dec_eq(v_c_1945_, v___x_1975_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = 58;
v___x_1978_ = lean_uint8_dec_eq(v_c_1945_, v___x_1977_);
if (v___x_1978_ == 0)
{
uint8_t v___x_1979_; uint8_t v___x_1980_; 
v___x_1979_ = 64;
v___x_1980_ = lean_uint8_dec_eq(v_c_1945_, v___x_1979_);
if (v___x_1980_ == 0)
{
uint8_t v___x_1981_; uint8_t v___x_1982_; 
v___x_1981_ = 47;
v___x_1982_ = lean_uint8_dec_eq(v_c_1945_, v___x_1981_);
if (v___x_1982_ == 0)
{
uint8_t v___x_1983_; uint8_t v___x_1984_; 
v___x_1983_ = 63;
v___x_1984_ = lean_uint8_dec_eq(v_c_1945_, v___x_1983_);
if (v___x_1984_ == 0)
{
uint8_t v___x_1985_; uint8_t v___x_1986_; 
v___x_1985_ = 37;
v___x_1986_ = lean_uint8_dec_eq(v_c_1945_, v___x_1985_);
return v___x_1986_;
}
else
{
return v___x_1984_;
}
}
else
{
return v___x_1982_;
}
}
else
{
return v___x_1980_;
}
}
else
{
return v___x_1978_;
}
}
else
{
return v___x_1976_;
}
}
else
{
return v___x_1974_;
}
}
else
{
return v___x_1972_;
}
}
else
{
return v___x_1970_;
}
}
else
{
return v___x_1968_;
}
}
else
{
return v___x_1966_;
}
}
else
{
return v___x_1964_;
}
}
else
{
return v___x_1962_;
}
}
else
{
return v___x_1960_;
}
}
else
{
return v___x_1958_;
}
}
else
{
return v___x_1956_;
}
}
else
{
return v___x_1954_;
}
}
else
{
return v___x_1952_;
}
}
else
{
return v___x_1950_;
}
}
else
{
return v___x_1948_;
}
}
v___jp_1987_:
{
uint8_t v___x_1988_; uint8_t v___x_1989_; 
v___x_1988_ = 65;
v___x_1989_ = lean_uint8_dec_le(v___x_1988_, v_c_1945_);
if (v___x_1989_ == 0)
{
goto v___jp_1946_;
}
else
{
uint8_t v___x_1990_; uint8_t v___x_1991_; 
v___x_1990_ = 90;
v___x_1991_ = lean_uint8_dec_le(v_c_1945_, v___x_1990_);
if (v___x_1991_ == 0)
{
goto v___jp_1946_;
}
else
{
return v___x_1991_;
}
}
}
v___jp_1992_:
{
uint8_t v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = 97;
v___x_1994_ = lean_uint8_dec_le(v___x_1993_, v_c_1945_);
if (v___x_1994_ == 0)
{
goto v___jp_1987_;
}
else
{
uint8_t v___x_1995_; uint8_t v___x_1996_; 
v___x_1995_ = 122;
v___x_1996_ = lean_uint8_dec_le(v_c_1945_, v___x_1995_);
if (v___x_1996_ == 0)
{
goto v___jp_1987_;
}
else
{
return v___x_1996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object* v_c_2001_){
_start:
{
uint8_t v_c_boxed_2002_; uint8_t v_res_2003_; lean_object* v_r_2004_; 
v_c_boxed_2002_ = lean_unbox(v_c_2001_);
v_res_2003_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(v_c_boxed_2002_);
v_r_2004_ = lean_box(v_res_2003_);
return v_r_2004_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object* v___x_2005_, lean_object* v___x_2006_, lean_object* v_a_2007_, lean_object* v_b_2008_){
_start:
{
lean_object* v_it_2010_; 
if (lean_obj_tag(v_a_2007_) == 0)
{
lean_object* v_currPos_2014_; lean_object* v_searcher_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2041_; 
v_currPos_2014_ = lean_ctor_get(v_a_2007_, 0);
v_searcher_2015_ = lean_ctor_get(v_a_2007_, 1);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_a_2007_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2017_ = v_a_2007_;
v_isShared_2018_ = v_isSharedCheck_2041_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_searcher_2015_);
lean_inc(v_currPos_2014_);
lean_dec(v_a_2007_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2041_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v_str_2019_; lean_object* v_startInclusive_2020_; lean_object* v_endExclusive_2021_; lean_object* v___x_2022_; uint8_t v_decide_2023_; 
v_str_2019_ = lean_ctor_get(v___x_2005_, 0);
v_startInclusive_2020_ = lean_ctor_get(v___x_2005_, 1);
v_endExclusive_2021_ = lean_ctor_get(v___x_2005_, 2);
v___x_2022_ = lean_nat_sub(v_endExclusive_2021_, v_startInclusive_2020_);
v_decide_2023_ = lean_nat_dec_eq(v_searcher_2015_, v___x_2022_);
lean_dec(v___x_2022_);
if (v_decide_2023_ == 0)
{
uint32_t v___x_2024_; lean_object* v___x_2025_; uint32_t v___x_2026_; uint8_t v___x_2027_; 
v___x_2024_ = 38;
v___x_2025_ = lean_nat_add(v_startInclusive_2020_, v_searcher_2015_);
v___x_2026_ = lean_string_utf8_get_fast(v_str_2019_, v___x_2025_);
v___x_2027_ = lean_uint32_dec_eq(v___x_2026_, v___x_2024_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2031_; 
lean_dec(v_searcher_2015_);
v___x_2028_ = lean_string_utf8_next_fast(v_str_2019_, v___x_2025_);
lean_dec(v___x_2025_);
v___x_2029_ = lean_nat_sub(v___x_2028_, v_startInclusive_2020_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 1, v___x_2029_);
v___x_2031_ = v___x_2017_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_currPos_2014_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v___x_2029_);
v___x_2031_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
v_a_2007_ = v___x_2031_;
goto _start;
}
}
else
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v_nextIt_2038_; 
lean_dec(v_currPos_2014_);
v___x_2034_ = lean_string_utf8_next_fast(v_str_2019_, v___x_2025_);
v___x_2035_ = lean_nat_sub(v___x_2034_, v___x_2025_);
lean_dec(v___x_2025_);
v___x_2036_ = lean_nat_add(v_searcher_2015_, v___x_2035_);
lean_dec(v___x_2035_);
lean_dec(v_searcher_2015_);
lean_inc(v___x_2036_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 1, v___x_2036_);
lean_ctor_set(v___x_2017_, 0, v___x_2036_);
v_nextIt_2038_ = v___x_2017_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2036_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v___x_2036_);
v_nextIt_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
v_it_2010_ = v_nextIt_2038_;
goto v___jp_2009_;
}
}
}
else
{
lean_object* v___x_2040_; 
lean_del_object(v___x_2017_);
lean_dec(v_searcher_2015_);
lean_dec(v_currPos_2014_);
v___x_2040_ = lean_box(1);
v_it_2010_ = v___x_2040_;
goto v___jp_2009_;
}
}
}
else
{
return v_b_2008_;
}
v___jp_2009_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = lean_nat_add(v_b_2008_, v___x_2011_);
lean_dec(v_b_2008_);
v_a_2007_ = v_it_2010_;
v_b_2008_ = v___x_2012_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object* v___x_2042_, lean_object* v___x_2043_, lean_object* v_a_2044_, lean_object* v_b_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2042_, v___x_2043_, v_a_2044_, v_b_2045_);
lean_dec(v___x_2043_);
lean_dec_ref(v___x_2042_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object* v___x_2047_, lean_object* v___x_2048_, lean_object* v___x_2049_, lean_object* v_a_2050_, lean_object* v_b_2051_){
_start:
{
lean_object* v_it_2053_; 
if (lean_obj_tag(v_a_2050_) == 0)
{
lean_object* v_currPos_2057_; lean_object* v_searcher_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2084_; 
v_currPos_2057_ = lean_ctor_get(v_a_2050_, 0);
v_searcher_2058_ = lean_ctor_get(v_a_2050_, 1);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_a_2050_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2060_ = v_a_2050_;
v_isShared_2061_ = v_isSharedCheck_2084_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_searcher_2058_);
lean_inc(v_currPos_2057_);
lean_dec(v_a_2050_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2084_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v_str_2062_; lean_object* v_startInclusive_2063_; lean_object* v_endExclusive_2064_; lean_object* v___x_2065_; uint8_t v_decide_2066_; 
v_str_2062_ = lean_ctor_get(v___x_2048_, 0);
v_startInclusive_2063_ = lean_ctor_get(v___x_2048_, 1);
v_endExclusive_2064_ = lean_ctor_get(v___x_2048_, 2);
v___x_2065_ = lean_nat_sub(v_endExclusive_2064_, v_startInclusive_2063_);
v_decide_2066_ = lean_nat_dec_eq(v_searcher_2058_, v___x_2065_);
lean_dec(v___x_2065_);
if (v_decide_2066_ == 0)
{
lean_object* v___x_2067_; uint32_t v___x_2068_; uint32_t v___x_2069_; uint8_t v___x_2070_; 
v___x_2067_ = lean_nat_add(v_startInclusive_2063_, v_searcher_2058_);
v___x_2068_ = lean_string_utf8_get_fast(v_str_2062_, v___x_2067_);
v___x_2069_ = 38;
v___x_2070_ = lean_uint32_dec_eq(v___x_2068_, v___x_2069_);
if (v___x_2070_ == 0)
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2074_; 
lean_dec(v_searcher_2058_);
v___x_2071_ = lean_string_utf8_next_fast(v_str_2062_, v___x_2067_);
lean_dec(v___x_2067_);
v___x_2072_ = lean_nat_sub(v___x_2071_, v_startInclusive_2063_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 1, v___x_2072_);
v___x_2074_ = v___x_2060_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_currPos_2057_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2075_; 
v___x_2075_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2048_, v___x_2049_, v___x_2074_, v_b_2051_);
return v___x_2075_;
}
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v_nextIt_2081_; 
lean_dec(v_currPos_2057_);
v___x_2077_ = lean_string_utf8_next_fast(v_str_2062_, v___x_2067_);
v___x_2078_ = lean_nat_sub(v___x_2077_, v___x_2067_);
lean_dec(v___x_2067_);
v___x_2079_ = lean_nat_add(v_searcher_2058_, v___x_2078_);
lean_dec(v___x_2078_);
lean_dec(v_searcher_2058_);
lean_inc(v___x_2079_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 1, v___x_2079_);
lean_ctor_set(v___x_2060_, 0, v___x_2079_);
v_nextIt_2081_ = v___x_2060_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2079_);
v_nextIt_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
v_it_2053_ = v_nextIt_2081_;
goto v___jp_2052_;
}
}
}
else
{
lean_object* v___x_2083_; 
lean_del_object(v___x_2060_);
lean_dec(v_searcher_2058_);
lean_dec(v_currPos_2057_);
v___x_2083_ = lean_box(1);
v_it_2053_ = v___x_2083_;
goto v___jp_2052_;
}
}
}
else
{
return v_b_2051_;
}
v___jp_2052_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2054_ = lean_unsigned_to_nat(1u);
v___x_2055_ = lean_nat_add(v_b_2051_, v___x_2054_);
lean_dec(v_b_2051_);
v___x_2056_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2048_, v___x_2049_, v_it_2053_, v___x_2055_);
return v___x_2056_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object* v___x_2085_, lean_object* v___x_2086_, lean_object* v___x_2087_, lean_object* v_a_2088_, lean_object* v_b_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2085_, v___x_2086_, v___x_2087_, v_a_2088_, v_b_2089_);
lean_dec(v___x_2087_);
lean_dec_ref(v___x_2086_);
lean_dec_ref(v___x_2085_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object* v_out_2091_, lean_object* v_a_2092_, lean_object* v_b_2093_){
_start:
{
if (lean_obj_tag(v_a_2092_) == 0)
{
lean_object* v_currPos_2094_; lean_object* v_searcher_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2134_; 
v_currPos_2094_ = lean_ctor_get(v_a_2092_, 0);
v_searcher_2095_ = lean_ctor_get(v_a_2092_, 1);
v_isSharedCheck_2134_ = !lean_is_exclusive(v_a_2092_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2097_ = v_a_2092_;
v_isShared_2098_ = v_isSharedCheck_2134_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_searcher_2095_);
lean_inc(v_currPos_2094_);
lean_dec(v_a_2092_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2134_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v_str_2099_; lean_object* v_startInclusive_2100_; lean_object* v_endExclusive_2101_; lean_object* v_it_2103_; lean_object* v_startInclusive_2104_; lean_object* v_endExclusive_2105_; lean_object* v___x_2112_; uint8_t v_decide_2113_; 
v_str_2099_ = lean_ctor_get(v_out_2091_, 0);
v_startInclusive_2100_ = lean_ctor_get(v_out_2091_, 1);
v_endExclusive_2101_ = lean_ctor_get(v_out_2091_, 2);
v___x_2112_ = lean_nat_sub(v_endExclusive_2101_, v_startInclusive_2100_);
v_decide_2113_ = lean_nat_dec_eq(v_searcher_2095_, v___x_2112_);
if (v_decide_2113_ == 0)
{
uint32_t v___x_2114_; lean_object* v___x_2115_; uint32_t v___x_2116_; uint8_t v___x_2117_; 
lean_dec(v___x_2112_);
v___x_2114_ = 61;
v___x_2115_ = lean_nat_add(v_startInclusive_2100_, v_searcher_2095_);
v___x_2116_ = lean_string_utf8_get_fast(v_str_2099_, v___x_2115_);
v___x_2117_ = lean_uint32_dec_eq(v___x_2116_, v___x_2114_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
lean_dec(v_searcher_2095_);
v___x_2118_ = lean_string_utf8_next_fast(v_str_2099_, v___x_2115_);
lean_dec(v___x_2115_);
v___x_2119_ = lean_nat_sub(v___x_2118_, v_startInclusive_2100_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 1, v___x_2119_);
v___x_2121_ = v___x_2097_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_currPos_2094_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
v_a_2092_ = v___x_2121_;
goto _start;
}
}
else
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v_slice_2127_; lean_object* v_nextIt_2129_; 
v___x_2124_ = lean_string_utf8_next_fast(v_str_2099_, v___x_2115_);
v___x_2125_ = lean_nat_sub(v___x_2124_, v___x_2115_);
lean_dec(v___x_2115_);
v___x_2126_ = lean_nat_add(v_searcher_2095_, v___x_2125_);
lean_dec(v___x_2125_);
v_slice_2127_ = l_String_Slice_subslice_x21(v_out_2091_, v_currPos_2094_, v_searcher_2095_);
lean_inc(v___x_2126_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 1, v___x_2126_);
lean_ctor_set(v___x_2097_, 0, v___x_2126_);
v_nextIt_2129_ = v___x_2097_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v___x_2126_);
v_nextIt_2129_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
lean_object* v_startInclusive_2130_; lean_object* v_endExclusive_2131_; 
v_startInclusive_2130_ = lean_ctor_get(v_slice_2127_, 0);
lean_inc(v_startInclusive_2130_);
v_endExclusive_2131_ = lean_ctor_get(v_slice_2127_, 1);
lean_inc(v_endExclusive_2131_);
lean_dec_ref(v_slice_2127_);
v_it_2103_ = v_nextIt_2129_;
v_startInclusive_2104_ = v_startInclusive_2130_;
v_endExclusive_2105_ = v_endExclusive_2131_;
goto v___jp_2102_;
}
}
}
else
{
lean_object* v___x_2133_; 
lean_del_object(v___x_2097_);
lean_dec(v_searcher_2095_);
v___x_2133_ = lean_box(1);
v_it_2103_ = v___x_2133_;
v_startInclusive_2104_ = v_currPos_2094_;
v_endExclusive_2105_ = v___x_2112_;
goto v___jp_2102_;
}
v___jp_2102_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2106_ = lean_nat_add(v_startInclusive_2100_, v_startInclusive_2104_);
lean_dec(v_startInclusive_2104_);
v___x_2107_ = lean_nat_add(v_startInclusive_2100_, v_endExclusive_2105_);
lean_dec(v_endExclusive_2105_);
lean_inc_ref(v_str_2099_);
v___x_2108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2108_, 0, v_str_2099_);
lean_ctor_set(v___x_2108_, 1, v___x_2106_);
lean_ctor_set(v___x_2108_, 2, v___x_2107_);
v___x_2109_ = l_String_Slice_toString(v___x_2108_);
lean_dec_ref_known(v___x_2108_, 3);
v___x_2110_ = lean_array_push(v_b_2093_, v___x_2109_);
v_a_2092_ = v_it_2103_;
v_b_2093_ = v___x_2110_;
goto _start;
}
}
}
else
{
return v_b_2093_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object* v_out_2135_, lean_object* v_a_2136_, lean_object* v_b_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2135_, v_a_2136_, v_b_2137_);
lean_dec_ref(v_out_2135_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object* v___x_2142_, lean_object* v___x_2143_, lean_object* v___x_2144_, lean_object* v_a_2145_, lean_object* v_b_2146_){
_start:
{
lean_object* v_it_2148_; lean_object* v_startInclusive_2149_; lean_object* v_endExclusive_2150_; 
if (lean_obj_tag(v_a_2145_) == 0)
{
lean_object* v_currPos_2175_; lean_object* v_searcher_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2205_; 
v_currPos_2175_ = lean_ctor_get(v_a_2145_, 0);
v_searcher_2176_ = lean_ctor_get(v_a_2145_, 1);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_a_2145_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2178_ = v_a_2145_;
v_isShared_2179_ = v_isSharedCheck_2205_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_searcher_2176_);
lean_inc(v_currPos_2175_);
lean_dec(v_a_2145_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2205_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v_str_2180_; lean_object* v_startInclusive_2181_; lean_object* v_endExclusive_2182_; lean_object* v___x_2183_; uint8_t v_decide_2184_; 
v_str_2180_ = lean_ctor_get(v___x_2143_, 0);
v_startInclusive_2181_ = lean_ctor_get(v___x_2143_, 1);
v_endExclusive_2182_ = lean_ctor_get(v___x_2143_, 2);
v___x_2183_ = lean_nat_sub(v_endExclusive_2182_, v_startInclusive_2181_);
v_decide_2184_ = lean_nat_dec_eq(v_searcher_2176_, v___x_2183_);
lean_dec(v___x_2183_);
if (v_decide_2184_ == 0)
{
uint32_t v___x_2185_; lean_object* v___x_2186_; uint32_t v___x_2187_; uint8_t v___x_2188_; 
v___x_2185_ = 38;
v___x_2186_ = lean_nat_add(v_startInclusive_2181_, v_searcher_2176_);
v___x_2187_ = lean_string_utf8_get_fast(v_str_2180_, v___x_2186_);
v___x_2188_ = lean_uint32_dec_eq(v___x_2187_, v___x_2185_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
lean_dec(v_searcher_2176_);
v___x_2189_ = lean_string_utf8_next_fast(v_str_2180_, v___x_2186_);
lean_dec(v___x_2186_);
v___x_2190_ = lean_nat_sub(v___x_2189_, v_startInclusive_2181_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 1, v___x_2190_);
v___x_2192_ = v___x_2178_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_currPos_2175_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
v_a_2145_ = v___x_2192_;
goto _start;
}
}
else
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v_slice_2198_; lean_object* v_nextIt_2200_; 
v___x_2195_ = lean_string_utf8_next_fast(v_str_2180_, v___x_2186_);
v___x_2196_ = lean_nat_sub(v___x_2195_, v___x_2186_);
lean_dec(v___x_2186_);
v___x_2197_ = lean_nat_add(v_searcher_2176_, v___x_2196_);
lean_dec(v___x_2196_);
v_slice_2198_ = l_String_Slice_subslice_x21(v___x_2143_, v_currPos_2175_, v_searcher_2176_);
lean_inc(v___x_2197_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 1, v___x_2197_);
lean_ctor_set(v___x_2178_, 0, v___x_2197_);
v_nextIt_2200_ = v___x_2178_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2197_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v___x_2197_);
v_nextIt_2200_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v_startInclusive_2201_; lean_object* v_endExclusive_2202_; 
v_startInclusive_2201_ = lean_ctor_get(v_slice_2198_, 0);
lean_inc(v_startInclusive_2201_);
v_endExclusive_2202_ = lean_ctor_get(v_slice_2198_, 1);
lean_inc(v_endExclusive_2202_);
lean_dec_ref(v_slice_2198_);
v_it_2148_ = v_nextIt_2200_;
v_startInclusive_2149_ = v_startInclusive_2201_;
v_endExclusive_2150_ = v_endExclusive_2202_;
goto v___jp_2147_;
}
}
}
else
{
lean_object* v___x_2204_; 
lean_del_object(v___x_2178_);
lean_dec(v_searcher_2176_);
v___x_2204_ = lean_box(1);
lean_inc(v___x_2144_);
v_it_2148_ = v___x_2204_;
v_startInclusive_2149_ = v_currPos_2175_;
v_endExclusive_2150_ = v___x_2144_;
goto v___jp_2147_;
}
}
}
else
{
lean_object* v___x_2206_; 
lean_dec(v___x_2144_);
lean_dec_ref(v___x_2142_);
v___x_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2206_, 0, v_b_2146_);
return v___x_2206_;
}
v___jp_2147_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
lean_inc_ref(v___x_2142_);
v___x_2151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2142_);
lean_ctor_set(v___x_2151_, 1, v_startInclusive_2149_);
lean_ctor_set(v___x_2151_, 2, v_endExclusive_2150_);
v___x_2152_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2153_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2154_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2151_, v___x_2152_, v___x_2153_);
lean_dec_ref_known(v___x_2151_, 3);
v___x_2155_ = lean_array_to_list(v___x_2154_);
if (lean_obj_tag(v___x_2155_) == 0)
{
v_a_2145_ = v_it_2148_;
goto _start;
}
else
{
lean_object* v_tail_2157_; 
v_tail_2157_ = lean_ctor_get(v___x_2155_, 1);
if (lean_obj_tag(v_tail_2157_) == 0)
{
lean_object* v_head_2158_; lean_object* v___x_2159_; 
v_head_2158_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_head_2158_);
lean_dec_ref_known(v___x_2155_, 2);
v___x_2159_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2158_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v___x_2160_; 
lean_dec(v_it_2148_);
lean_dec_ref(v_b_2146_);
lean_dec(v___x_2144_);
lean_dec_ref(v___x_2142_);
v___x_2160_ = lean_box(0);
return v___x_2160_;
}
else
{
lean_object* v_val_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v_val_2161_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_val_2161_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2162_ = lean_box(0);
v___x_2163_ = l_Std_Http_URI_Query_insertEncoded(v_b_2146_, v_val_2161_, v___x_2162_);
v_a_2145_ = v_it_2148_;
v_b_2146_ = v___x_2163_;
goto _start;
}
}
else
{
lean_object* v_head_2165_; lean_object* v___x_2166_; 
lean_inc(v_tail_2157_);
v_head_2165_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_head_2165_);
lean_dec_ref_known(v___x_2155_, 2);
v___x_2166_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2165_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v___x_2167_; 
lean_dec(v_tail_2157_);
lean_dec(v_it_2148_);
lean_dec_ref(v_b_2146_);
lean_dec(v___x_2144_);
lean_dec_ref(v___x_2142_);
v___x_2167_ = lean_box(0);
return v___x_2167_;
}
else
{
lean_object* v_val_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v_val_2168_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_val_2168_);
lean_dec_ref_known(v___x_2166_, 1);
v___x_2169_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2170_ = l_String_intercalate(v___x_2169_, v_tail_2157_);
v___x_2171_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2170_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v___x_2172_; 
lean_dec(v_val_2168_);
lean_dec(v_it_2148_);
lean_dec_ref(v_b_2146_);
lean_dec(v___x_2144_);
lean_dec_ref(v___x_2142_);
v___x_2172_ = lean_box(0);
return v___x_2172_;
}
else
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Std_Http_URI_Query_insertEncoded(v_b_2146_, v_val_2168_, v___x_2171_);
v_a_2145_ = v_it_2148_;
v_b_2146_ = v___x_2173_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object* v___x_2207_, lean_object* v___x_2208_, lean_object* v___x_2209_, lean_object* v_a_2210_, lean_object* v_b_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2207_, v___x_2208_, v___x_2209_, v_a_2210_, v_b_2211_);
lean_dec_ref(v___x_2208_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object* v___x_2213_, lean_object* v___x_2214_, lean_object* v___x_2215_, lean_object* v_a_2216_, lean_object* v_b_2217_){
_start:
{
lean_object* v_it_2219_; lean_object* v_startInclusive_2220_; lean_object* v_endExclusive_2221_; 
if (lean_obj_tag(v_a_2216_) == 0)
{
lean_object* v_currPos_2246_; lean_object* v_searcher_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2276_; 
v_currPos_2246_ = lean_ctor_get(v_a_2216_, 0);
v_searcher_2247_ = lean_ctor_get(v_a_2216_, 1);
v_isSharedCheck_2276_ = !lean_is_exclusive(v_a_2216_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2249_ = v_a_2216_;
v_isShared_2250_ = v_isSharedCheck_2276_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_searcher_2247_);
lean_inc(v_currPos_2246_);
lean_dec(v_a_2216_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2276_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v_str_2251_; lean_object* v_startInclusive_2252_; lean_object* v_endExclusive_2253_; lean_object* v___x_2254_; uint8_t v_decide_2255_; 
v_str_2251_ = lean_ctor_get(v___x_2214_, 0);
v_startInclusive_2252_ = lean_ctor_get(v___x_2214_, 1);
v_endExclusive_2253_ = lean_ctor_get(v___x_2214_, 2);
v___x_2254_ = lean_nat_sub(v_endExclusive_2253_, v_startInclusive_2252_);
v_decide_2255_ = lean_nat_dec_eq(v_searcher_2247_, v___x_2254_);
lean_dec(v___x_2254_);
if (v_decide_2255_ == 0)
{
lean_object* v___x_2256_; uint32_t v___x_2257_; uint32_t v___x_2258_; uint8_t v___x_2259_; 
v___x_2256_ = lean_nat_add(v_startInclusive_2252_, v_searcher_2247_);
v___x_2257_ = lean_string_utf8_get_fast(v_str_2251_, v___x_2256_);
v___x_2258_ = 38;
v___x_2259_ = lean_uint32_dec_eq(v___x_2257_, v___x_2258_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2263_; 
lean_dec(v_searcher_2247_);
v___x_2260_ = lean_string_utf8_next_fast(v_str_2251_, v___x_2256_);
lean_dec(v___x_2256_);
v___x_2261_ = lean_nat_sub(v___x_2260_, v_startInclusive_2252_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2261_);
v___x_2263_ = v___x_2249_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_currPos_2246_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v___x_2261_);
v___x_2263_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2213_, v___x_2214_, v___x_2215_, v___x_2263_, v_b_2217_);
return v___x_2264_;
}
}
else
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v_slice_2269_; lean_object* v_nextIt_2271_; 
v___x_2266_ = lean_string_utf8_next_fast(v_str_2251_, v___x_2256_);
v___x_2267_ = lean_nat_sub(v___x_2266_, v___x_2256_);
lean_dec(v___x_2256_);
v___x_2268_ = lean_nat_add(v_searcher_2247_, v___x_2267_);
lean_dec(v___x_2267_);
v_slice_2269_ = l_String_Slice_subslice_x21(v___x_2214_, v_currPos_2246_, v_searcher_2247_);
lean_inc(v___x_2268_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2268_);
lean_ctor_set(v___x_2249_, 0, v___x_2268_);
v_nextIt_2271_ = v___x_2249_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v___x_2268_);
v_nextIt_2271_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v_startInclusive_2272_; lean_object* v_endExclusive_2273_; 
v_startInclusive_2272_ = lean_ctor_get(v_slice_2269_, 0);
lean_inc(v_startInclusive_2272_);
v_endExclusive_2273_ = lean_ctor_get(v_slice_2269_, 1);
lean_inc(v_endExclusive_2273_);
lean_dec_ref(v_slice_2269_);
v_it_2219_ = v_nextIt_2271_;
v_startInclusive_2220_ = v_startInclusive_2272_;
v_endExclusive_2221_ = v_endExclusive_2273_;
goto v___jp_2218_;
}
}
}
else
{
lean_object* v___x_2275_; 
lean_del_object(v___x_2249_);
lean_dec(v_searcher_2247_);
v___x_2275_ = lean_box(1);
lean_inc(v___x_2215_);
v_it_2219_ = v___x_2275_;
v_startInclusive_2220_ = v_currPos_2246_;
v_endExclusive_2221_ = v___x_2215_;
goto v___jp_2218_;
}
}
}
else
{
lean_object* v___x_2277_; 
lean_dec(v___x_2215_);
lean_dec_ref(v___x_2213_);
v___x_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_b_2217_);
return v___x_2277_;
}
v___jp_2218_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
lean_inc_ref(v___x_2213_);
v___x_2222_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2213_);
lean_ctor_set(v___x_2222_, 1, v_startInclusive_2220_);
lean_ctor_set(v___x_2222_, 2, v_endExclusive_2221_);
v___x_2223_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2224_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2225_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2222_, v___x_2223_, v___x_2224_);
lean_dec_ref_known(v___x_2222_, 3);
v___x_2226_ = lean_array_to_list(v___x_2225_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v___x_2227_; 
v___x_2227_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2213_, v___x_2214_, v___x_2215_, v_it_2219_, v_b_2217_);
return v___x_2227_;
}
else
{
lean_object* v_tail_2228_; 
v_tail_2228_ = lean_ctor_get(v___x_2226_, 1);
if (lean_obj_tag(v_tail_2228_) == 0)
{
lean_object* v_head_2229_; lean_object* v___x_2230_; 
v_head_2229_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_head_2229_);
lean_dec_ref_known(v___x_2226_, 2);
v___x_2230_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2229_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v___x_2231_; 
lean_dec(v_it_2219_);
lean_dec_ref(v_b_2217_);
lean_dec(v___x_2215_);
lean_dec_ref(v___x_2213_);
v___x_2231_ = lean_box(0);
return v___x_2231_;
}
else
{
lean_object* v_val_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v_val_2232_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_val_2232_);
lean_dec_ref_known(v___x_2230_, 1);
v___x_2233_ = lean_box(0);
v___x_2234_ = l_Std_Http_URI_Query_insertEncoded(v_b_2217_, v_val_2232_, v___x_2233_);
v___x_2235_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2213_, v___x_2214_, v___x_2215_, v_it_2219_, v___x_2234_);
return v___x_2235_;
}
}
else
{
lean_object* v_head_2236_; lean_object* v___x_2237_; 
lean_inc(v_tail_2228_);
v_head_2236_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_head_2236_);
lean_dec_ref_known(v___x_2226_, 2);
v___x_2237_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2236_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v___x_2238_; 
lean_dec(v_tail_2228_);
lean_dec(v_it_2219_);
lean_dec_ref(v_b_2217_);
lean_dec(v___x_2215_);
lean_dec_ref(v___x_2213_);
v___x_2238_ = lean_box(0);
return v___x_2238_;
}
else
{
lean_object* v_val_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_val_2239_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_val_2239_);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2240_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2241_ = l_String_intercalate(v___x_2240_, v_tail_2228_);
v___x_2242_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2241_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v___x_2243_; 
lean_dec(v_val_2239_);
lean_dec(v_it_2219_);
lean_dec_ref(v_b_2217_);
lean_dec(v___x_2215_);
lean_dec_ref(v___x_2213_);
v___x_2243_ = lean_box(0);
return v___x_2243_;
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = l_Std_Http_URI_Query_insertEncoded(v_b_2217_, v_val_2239_, v___x_2242_);
v___x_2245_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2213_, v___x_2214_, v___x_2215_, v_it_2219_, v___x_2244_);
return v___x_2245_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object* v___x_2278_, lean_object* v___x_2279_, lean_object* v___x_2280_, lean_object* v_a_2281_, lean_object* v_b_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2278_, v___x_2279_, v___x_2280_, v_a_2281_, v_b_2282_);
lean_dec_ref(v___x_2279_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object* v_config_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v_maxQueryLength_2291_; lean_object* v_maxQueryParams_2292_; lean_object* v___f_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v_snd_2296_; lean_object* v_fst_2297_; lean_object* v_fst_2298_; lean_object* v_array_2299_; lean_object* v_idx_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2350_; 
v_maxQueryLength_2291_ = lean_ctor_get(v_config_2289_, 4);
lean_inc(v_maxQueryLength_2291_);
v_maxQueryParams_2292_ = lean_ctor_get(v_config_2289_, 8);
lean_inc(v_maxQueryParams_2292_);
lean_dec_ref(v_config_2289_);
v___f_2293_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2294_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2290_);
v___x_2295_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2293_, v_maxQueryLength_2291_, v___x_2294_, v_a_2290_);
lean_dec(v_maxQueryLength_2291_);
v_snd_2296_ = lean_ctor_get(v___x_2295_, 1);
lean_inc(v_snd_2296_);
v_fst_2297_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_fst_2297_);
lean_dec_ref(v___x_2295_);
v_fst_2298_ = lean_ctor_get(v_snd_2296_, 0);
lean_inc(v_fst_2298_);
lean_dec(v_snd_2296_);
v_array_2299_ = lean_ctor_get(v_a_2290_, 0);
v_idx_2300_ = lean_ctor_get(v_a_2290_, 1);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_a_2290_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2302_ = v_a_2290_;
v_isShared_2303_ = v_isSharedCheck_2350_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_idx_2300_);
lean_inc(v_array_2299_);
lean_dec(v_a_2290_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2350_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v_lower_2305_; lean_object* v_upper_2306_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___y_2347_; uint8_t v___x_2349_; 
v___x_2344_ = lean_nat_add(v_idx_2300_, v_fst_2297_);
lean_dec(v_fst_2297_);
v___x_2345_ = lean_byte_array_size(v_array_2299_);
v___x_2349_ = lean_nat_dec_le(v_idx_2300_, v___x_2294_);
if (v___x_2349_ == 0)
{
v___y_2347_ = v_idx_2300_;
goto v___jp_2346_;
}
else
{
lean_dec(v_idx_2300_);
v___y_2347_ = v___x_2294_;
goto v___jp_2346_;
}
v___jp_2304_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; 
v___x_2307_ = l_ByteArray_toByteSlice(v_array_2299_, v_lower_2305_, v_upper_2306_);
v___x_2308_ = l_ByteSlice_toByteArray(v___x_2307_);
v___x_2309_ = lean_string_validate_utf8(v___x_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
lean_dec_ref(v___x_2308_);
lean_dec(v_maxQueryParams_2292_);
v___x_2310_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2303_ == 0)
{
lean_ctor_set_tag(v___x_2302_, 1);
lean_ctor_set(v___x_2302_, 1, v___x_2310_);
lean_ctor_set(v___x_2302_, 0, v_fst_2298_);
v___x_2312_ = v___x_2302_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
else
{
lean_object* v___x_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2314_ = lean_string_from_utf8_unchecked(v___x_2308_);
v___x_2315_ = lean_string_utf8_byte_size(v___x_2314_);
v___x_2316_ = lean_nat_dec_eq(v___x_2315_, v___x_2294_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
lean_inc_ref(v___x_2314_);
v___x_2317_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2314_);
lean_ctor_set(v___x_2317_, 1, v___x_2294_);
lean_ctor_set(v___x_2317_, 2, v___x_2315_);
v___x_2318_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
v___x_2319_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2314_, v___x_2317_, v___x_2315_, v___x_2318_, v___x_2294_);
v___x_2320_ = lean_nat_dec_lt(v_maxQueryParams_2292_, v___x_2319_);
lean_dec(v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec(v_maxQueryParams_2292_);
v___x_2321_ = l_Std_Http_URI_Query_empty;
v___x_2322_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2314_, v___x_2317_, v___x_2315_, v___x_2318_, v___x_2321_);
lean_dec_ref_known(v___x_2317_, 3);
if (lean_obj_tag(v___x_2322_) == 1)
{
lean_object* v_val_2323_; lean_object* v___x_2325_; 
v_val_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_val_2323_);
lean_dec_ref_known(v___x_2322_, 1);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 1, v_val_2323_);
lean_ctor_set(v___x_2302_, 0, v_fst_2298_);
v___x_2325_ = v___x_2302_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_val_2323_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
else
{
lean_object* v___x_2327_; lean_object* v___x_2329_; 
lean_dec(v___x_2322_);
v___x_2327_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2303_ == 0)
{
lean_ctor_set_tag(v___x_2302_, 1);
lean_ctor_set(v___x_2302_, 1, v___x_2327_);
lean_ctor_set(v___x_2302_, 0, v_fst_2298_);
v___x_2329_ = v___x_2302_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
else
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2338_; 
lean_dec_ref_known(v___x_2317_, 3);
lean_dec_ref(v___x_2314_);
v___x_2331_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3));
v___x_2332_ = l_Nat_reprFast(v_maxQueryParams_2292_);
v___x_2333_ = lean_string_append(v___x_2331_, v___x_2332_);
lean_dec_ref(v___x_2332_);
v___x_2334_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_2335_ = lean_string_append(v___x_2333_, v___x_2334_);
v___x_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set_tag(v___x_2302_, 1);
lean_ctor_set(v___x_2302_, 1, v___x_2336_);
lean_ctor_set(v___x_2302_, 0, v_fst_2298_);
v___x_2338_ = v___x_2302_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
else
{
lean_object* v___x_2340_; lean_object* v___x_2342_; 
lean_dec_ref(v___x_2314_);
lean_dec(v_maxQueryParams_2292_);
v___x_2340_ = l_Std_Http_URI_Query_empty;
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 1, v___x_2340_);
lean_ctor_set(v___x_2302_, 0, v_fst_2298_);
v___x_2342_ = v___x_2302_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v___x_2340_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
v___jp_2346_:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_nat_dec_le(v___x_2344_, v___x_2345_);
if (v___x_2348_ == 0)
{
lean_dec(v___x_2344_);
v_lower_2305_ = v___y_2347_;
v_upper_2306_ = v___x_2345_;
goto v___jp_2304_;
}
else
{
v_lower_2305_ = v___y_2347_;
v_upper_2306_ = v___x_2344_;
goto v___jp_2304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object* v___x_2351_, lean_object* v___x_2352_, lean_object* v___x_2353_, lean_object* v_inst_2354_, lean_object* v_R_2355_, lean_object* v_a_2356_, lean_object* v_b_2357_, lean_object* v_c_2358_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2351_, v___x_2352_, v___x_2353_, v_a_2356_, v_b_2357_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object* v___x_2360_, lean_object* v___x_2361_, lean_object* v___x_2362_, lean_object* v_inst_2363_, lean_object* v_R_2364_, lean_object* v_a_2365_, lean_object* v_b_2366_, lean_object* v_c_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(v___x_2360_, v___x_2361_, v___x_2362_, v_inst_2363_, v_R_2364_, v_a_2365_, v_b_2366_, v_c_2367_);
lean_dec(v___x_2362_);
lean_dec_ref(v___x_2361_);
lean_dec_ref(v___x_2360_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object* v_out_2369_, lean_object* v_inst_2370_, lean_object* v_R_2371_, lean_object* v_a_2372_, lean_object* v_b_2373_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2369_, v_a_2372_, v_b_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object* v_out_2375_, lean_object* v_inst_2376_, lean_object* v_R_2377_, lean_object* v_a_2378_, lean_object* v_b_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(v_out_2375_, v_inst_2376_, v_R_2377_, v_a_2378_, v_b_2379_);
lean_dec_ref(v_out_2375_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object* v___x_2381_, lean_object* v___x_2382_, lean_object* v___x_2383_, lean_object* v_inst_2384_, lean_object* v_R_2385_, lean_object* v_a_2386_, lean_object* v_b_2387_, lean_object* v_c_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2381_, v___x_2382_, v___x_2383_, v_a_2386_, v_b_2387_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object* v___x_2390_, lean_object* v___x_2391_, lean_object* v___x_2392_, lean_object* v_inst_2393_, lean_object* v_R_2394_, lean_object* v_a_2395_, lean_object* v_b_2396_, lean_object* v_c_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(v___x_2390_, v___x_2391_, v___x_2392_, v_inst_2393_, v_R_2394_, v_a_2395_, v_b_2396_, v_c_2397_);
lean_dec_ref(v___x_2391_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object* v___x_2399_, lean_object* v___x_2400_, lean_object* v___x_2401_, lean_object* v_inst_2402_, lean_object* v_R_2403_, lean_object* v_a_2404_, lean_object* v_b_2405_, lean_object* v_c_2406_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2400_, v___x_2401_, v_a_2404_, v_b_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object* v___x_2408_, lean_object* v___x_2409_, lean_object* v___x_2410_, lean_object* v_inst_2411_, lean_object* v_R_2412_, lean_object* v_a_2413_, lean_object* v_b_2414_, lean_object* v_c_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(v___x_2408_, v___x_2409_, v___x_2410_, v_inst_2411_, v_R_2412_, v_a_2413_, v_b_2414_, v_c_2415_);
lean_dec(v___x_2410_);
lean_dec_ref(v___x_2409_);
lean_dec_ref(v___x_2408_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object* v___x_2417_, lean_object* v___x_2418_, lean_object* v___x_2419_, lean_object* v_inst_2420_, lean_object* v_R_2421_, lean_object* v_a_2422_, lean_object* v_b_2423_, lean_object* v_c_2424_){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2417_, v___x_2418_, v___x_2419_, v_a_2422_, v_b_2423_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object* v___x_2426_, lean_object* v___x_2427_, lean_object* v___x_2428_, lean_object* v_inst_2429_, lean_object* v_R_2430_, lean_object* v_a_2431_, lean_object* v_b_2432_, lean_object* v_c_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(v___x_2426_, v___x_2427_, v___x_2428_, v_inst_2429_, v_R_2430_, v_a_2431_, v_b_2432_, v_c_2433_);
lean_dec_ref(v___x_2427_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object* v_config_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v_maxFragmentLength_2440_; lean_object* v___f_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v_snd_2444_; lean_object* v_fst_2445_; lean_object* v_fst_2446_; lean_object* v_array_2447_; lean_object* v_idx_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2472_; 
v_maxFragmentLength_2440_ = lean_ctor_get(v_config_2438_, 5);
v___f_2441_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2442_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2439_);
v___x_2443_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2441_, v_maxFragmentLength_2440_, v___x_2442_, v_a_2439_);
v_snd_2444_ = lean_ctor_get(v___x_2443_, 1);
lean_inc(v_snd_2444_);
v_fst_2445_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_fst_2445_);
lean_dec_ref(v___x_2443_);
v_fst_2446_ = lean_ctor_get(v_snd_2444_, 0);
lean_inc(v_fst_2446_);
lean_dec(v_snd_2444_);
v_array_2447_ = lean_ctor_get(v_a_2439_, 0);
v_idx_2448_ = lean_ctor_get(v_a_2439_, 1);
v_isSharedCheck_2472_ = !lean_is_exclusive(v_a_2439_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2450_ = v_a_2439_;
v_isShared_2451_ = v_isSharedCheck_2472_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_idx_2448_);
lean_inc(v_array_2447_);
lean_dec(v_a_2439_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2472_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v_lower_2453_; lean_object* v_upper_2454_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___y_2469_; uint8_t v___x_2471_; 
v___x_2466_ = lean_nat_add(v_idx_2448_, v_fst_2445_);
lean_dec(v_fst_2445_);
v___x_2467_ = lean_byte_array_size(v_array_2447_);
v___x_2471_ = lean_nat_dec_le(v_idx_2448_, v___x_2442_);
if (v___x_2471_ == 0)
{
v___y_2469_ = v_idx_2448_;
goto v___jp_2468_;
}
else
{
lean_dec(v_idx_2448_);
v___y_2469_ = v___x_2442_;
goto v___jp_2468_;
}
v___jp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2455_ = l_ByteArray_toByteSlice(v_array_2447_, v_lower_2453_, v_upper_2454_);
v___x_2456_ = l_ByteSlice_toByteArray(v___x_2455_);
v___x_2457_ = l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(v___x_2456_);
if (lean_obj_tag(v___x_2457_) == 1)
{
lean_object* v_val_2458_; lean_object* v___x_2460_; 
v_val_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_val_2458_);
lean_dec_ref_known(v___x_2457_, 1);
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 1, v_val_2458_);
lean_ctor_set(v___x_2450_, 0, v_fst_2446_);
v___x_2460_ = v___x_2450_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_fst_2446_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v_val_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
else
{
lean_object* v___x_2462_; lean_object* v___x_2464_; 
lean_dec(v___x_2457_);
v___x_2462_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1));
if (v_isShared_2451_ == 0)
{
lean_ctor_set_tag(v___x_2450_, 1);
lean_ctor_set(v___x_2450_, 1, v___x_2462_);
lean_ctor_set(v___x_2450_, 0, v_fst_2446_);
v___x_2464_ = v___x_2450_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_fst_2446_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
v___jp_2468_:
{
uint8_t v___x_2470_; 
v___x_2470_ = lean_nat_dec_le(v___x_2466_, v___x_2467_);
if (v___x_2470_ == 0)
{
lean_dec(v___x_2466_);
v_lower_2453_ = v___y_2469_;
v_upper_2454_ = v___x_2467_;
goto v___jp_2452_;
}
else
{
v_lower_2453_ = v___y_2469_;
v_upper_2454_ = v___x_2466_;
goto v___jp_2452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object* v_config_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2473_, v_a_2474_);
lean_dec_ref(v_config_2473_);
return v_res_2475_;
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1(void){
_start:
{
lean_object* v___x_2477_; lean_object* v_utf8_2478_; 
v___x_2477_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0));
v_utf8_2478_ = lean_string_to_utf8(v___x_2477_);
return v_utf8_2478_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object* v_config_2479_, lean_object* v_a_2480_){
_start:
{
lean_object* v_utf8_2481_; lean_object* v___x_2482_; 
v_utf8_2481_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_2480_);
v___x_2482_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_2481_, v_a_2480_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_pos_2483_; uint8_t v___x_2484_; lean_object* v_pos_2486_; lean_object* v_res_2487_; lean_object* v___x_2508_; 
lean_dec_ref(v_a_2480_);
v_pos_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc_n(v_pos_2483_, 2);
lean_dec_ref_known(v___x_2482_, 2);
v___x_2484_ = 1;
v___x_2508_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_2479_, v_pos_2483_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_pos_2509_; lean_object* v_res_2510_; lean_object* v___x_2511_; 
lean_dec(v_pos_2483_);
v_pos_2509_ = lean_ctor_get(v___x_2508_, 0);
lean_inc(v_pos_2509_);
v_res_2510_ = lean_ctor_get(v___x_2508_, 1);
lean_inc(v_res_2510_);
lean_dec_ref_known(v___x_2508_, 2);
v___x_2511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2511_, 0, v_res_2510_);
v_pos_2486_ = v_pos_2509_;
v_res_2487_ = v___x_2511_;
goto v___jp_2485_;
}
else
{
lean_object* v_err_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2522_; 
v_err_2512_ = lean_ctor_get(v___x_2508_, 1);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2522_ == 0)
{
lean_object* v_unused_2523_; 
v_unused_2523_ = lean_ctor_get(v___x_2508_, 0);
lean_dec(v_unused_2523_);
v___x_2514_ = v___x_2508_;
v_isShared_2515_ = v_isSharedCheck_2522_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_err_2512_);
lean_dec(v___x_2508_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2522_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v_idx_2516_; uint8_t v___x_2517_; 
v_idx_2516_ = lean_ctor_get(v_pos_2483_, 1);
v___x_2517_ = lean_nat_dec_eq(v_idx_2516_, v_idx_2516_);
if (v___x_2517_ == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref(v_config_2479_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v_pos_2483_);
v___x_2519_ = v___x_2514_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_pos_2483_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v_err_2512_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
else
{
lean_object* v___x_2521_; 
lean_del_object(v___x_2514_);
lean_dec(v_err_2512_);
v___x_2521_ = lean_box(0);
v_pos_2486_ = v_pos_2483_;
v_res_2487_ = v___x_2521_;
goto v___jp_2485_;
}
}
}
v___jp_2485_:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Std_Http_URI_Parser_parsePath(v_config_2479_, v___x_2484_, v___x_2484_, v_pos_2486_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_pos_2489_; lean_object* v_res_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2498_; 
v_pos_2489_ = lean_ctor_get(v___x_2488_, 0);
v_res_2490_ = lean_ctor_get(v___x_2488_, 1);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2492_ = v___x_2488_;
v_isShared_2493_ = v_isSharedCheck_2498_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_res_2490_);
lean_inc(v_pos_2489_);
lean_dec(v___x_2488_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2498_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v_res_2487_);
lean_ctor_set(v___x_2494_, 1, v_res_2490_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 1, v___x_2494_);
v___x_2496_ = v___x_2492_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_pos_2489_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v_pos_2499_; lean_object* v_err_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec(v_res_2487_);
v_pos_2499_ = lean_ctor_get(v___x_2488_, 0);
v_err_2500_ = lean_ctor_get(v___x_2488_, 1);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2488_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_err_2500_);
lean_inc(v_pos_2499_);
lean_dec(v___x_2488_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_pos_2499_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_err_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
else
{
lean_object* v_err_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2555_; 
v_err_2524_ = lean_ctor_get(v___x_2482_, 1);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2555_ == 0)
{
lean_object* v_unused_2556_; 
v_unused_2556_ = lean_ctor_get(v___x_2482_, 0);
lean_dec(v_unused_2556_);
v___x_2526_ = v___x_2482_;
v_isShared_2527_ = v_isSharedCheck_2555_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_err_2524_);
lean_dec(v___x_2482_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2555_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v_idx_2528_; uint8_t v___x_2529_; 
v_idx_2528_ = lean_ctor_get(v_a_2480_, 1);
v___x_2529_ = lean_nat_dec_eq(v_idx_2528_, v_idx_2528_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2531_; 
lean_dec_ref(v_config_2479_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v_a_2480_);
v___x_2531_ = v___x_2526_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2480_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_err_2524_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
else
{
uint8_t v___x_2533_; lean_object* v___x_2534_; 
lean_del_object(v___x_2526_);
lean_dec(v_err_2524_);
v___x_2533_ = 0;
v___x_2534_ = l_Std_Http_URI_Parser_parsePath(v_config_2479_, v___x_2533_, v___x_2529_, v_a_2480_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_pos_2535_; lean_object* v_res_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2545_; 
v_pos_2535_ = lean_ctor_get(v___x_2534_, 0);
v_res_2536_ = lean_ctor_get(v___x_2534_, 1);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2538_ = v___x_2534_;
v_isShared_2539_ = v_isSharedCheck_2545_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_res_2536_);
lean_inc(v_pos_2535_);
lean_dec(v___x_2534_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2545_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2543_; 
v___x_2540_ = lean_box(0);
v___x_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
lean_ctor_set(v___x_2541_, 1, v_res_2536_);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 1, v___x_2541_);
v___x_2543_ = v___x_2538_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_pos_2535_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v___x_2541_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
else
{
lean_object* v_pos_2546_; lean_object* v_err_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_pos_2546_ = lean_ctor_get(v___x_2534_, 0);
v_err_2547_ = lean_ctor_get(v___x_2534_, 1);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2534_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_err_2547_);
lean_inc(v_pos_2546_);
lean_dec(v___x_2534_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_pos_2546_);
lean_ctor_set(v_reuseFailAlloc_2553_, 1, v_err_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object* v_config_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v___x_2568_; 
v___x_2568_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2566_, v_a_2567_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_pos_2569_; lean_object* v_res_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2701_; 
v_pos_2569_ = lean_ctor_get(v___x_2568_, 0);
v_res_2570_ = lean_ctor_get(v___x_2568_, 1);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2572_ = v___x_2568_;
v_isShared_2573_ = v_isSharedCheck_2701_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_res_2570_);
lean_inc(v_pos_2569_);
lean_dec(v___x_2568_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2701_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v_array_2574_; lean_object* v_idx_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; 
v_array_2574_ = lean_ctor_get(v_pos_2569_, 0);
v_idx_2575_ = lean_ctor_get(v_pos_2569_, 1);
v___x_2576_ = lean_byte_array_size(v_array_2574_);
v___x_2577_ = lean_nat_dec_lt(v_idx_2575_, v___x_2576_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2580_; 
lean_dec(v_res_2570_);
lean_dec_ref(v_config_2566_);
v___x_2578_ = lean_box(0);
if (v_isShared_2573_ == 0)
{
lean_ctor_set_tag(v___x_2572_, 1);
lean_ctor_set(v___x_2572_, 1, v___x_2578_);
v___x_2580_ = v___x_2572_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_pos_2569_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v___x_2578_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
else
{
uint8_t v___x_2582_; uint8_t v_got_2583_; uint8_t v___x_2584_; 
v___x_2582_ = 58;
v_got_2583_ = lean_byte_array_fget(v_array_2574_, v_idx_2575_);
v___x_2584_ = lean_uint8_dec_eq(v_got_2583_, v___x_2582_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; lean_object* v___x_2587_; 
lean_dec(v_res_2570_);
lean_dec_ref(v_config_2566_);
v___x_2585_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_2573_ == 0)
{
lean_ctor_set_tag(v___x_2572_, 1);
lean_ctor_set(v___x_2572_, 1, v___x_2585_);
v___x_2587_ = v___x_2572_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_pos_2569_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
else
{
lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2698_; 
lean_inc(v_idx_2575_);
lean_inc_ref(v_array_2574_);
v_isSharedCheck_2698_ = !lean_is_exclusive(v_pos_2569_);
if (v_isSharedCheck_2698_ == 0)
{
lean_object* v_unused_2699_; lean_object* v_unused_2700_; 
v_unused_2699_ = lean_ctor_get(v_pos_2569_, 1);
lean_dec(v_unused_2699_);
v_unused_2700_ = lean_ctor_get(v_pos_2569_, 0);
lean_dec(v_unused_2700_);
v___x_2590_ = v_pos_2569_;
v_isShared_2591_ = v_isSharedCheck_2698_;
goto v_resetjp_2589_;
}
else
{
lean_dec(v_pos_2569_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2698_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2592_ = lean_unsigned_to_nat(1u);
v___x_2593_ = lean_nat_add(v_idx_2575_, v___x_2592_);
lean_dec(v_idx_2575_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set(v___x_2590_, 1, v___x_2593_);
v___x_2595_ = v___x_2590_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_array_2574_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; 
lean_inc_ref(v_config_2566_);
v___x_2596_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2566_, v___x_2595_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_res_2597_; lean_object* v_pos_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2687_; 
v_res_2597_ = lean_ctor_get(v___x_2596_, 1);
v_pos_2598_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2600_ = v___x_2596_;
v_isShared_2601_ = v_isSharedCheck_2687_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_res_2597_);
lean_inc(v_pos_2598_);
lean_dec(v___x_2596_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2687_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v_fst_2602_; lean_object* v_snd_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2686_; 
v_fst_2602_ = lean_ctor_get(v_res_2597_, 0);
v_snd_2603_ = lean_ctor_get(v_res_2597_, 1);
v_isSharedCheck_2686_ = !lean_is_exclusive(v_res_2597_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2605_ = v_res_2597_;
v_isShared_2606_ = v_isSharedCheck_2686_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_snd_2603_);
lean_inc(v_fst_2602_);
lean_dec(v_res_2597_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2686_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___y_2608_; lean_object* v_pos_2609_; lean_object* v_res_2610_; lean_object* v_idx_2616_; lean_object* v___y_2617_; lean_object* v_pos_2618_; lean_object* v_err_2619_; lean_object* v_pos_2627_; lean_object* v_array_2628_; lean_object* v_idx_2629_; lean_object* v_res_2630_; lean_object* v_array_2649_; lean_object* v_idx_2650_; lean_object* v_pos_2652_; lean_object* v_array_2653_; lean_object* v_idx_2654_; lean_object* v_err_2655_; lean_object* v___x_2659_; uint8_t v___x_2660_; 
v_array_2649_ = lean_ctor_get(v_pos_2598_, 0);
lean_inc_ref(v_array_2649_);
v_idx_2650_ = lean_ctor_get(v_pos_2598_, 1);
lean_inc(v_idx_2650_);
v___x_2659_ = lean_byte_array_size(v_array_2649_);
v___x_2660_ = lean_nat_dec_lt(v_idx_2650_, v___x_2659_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_box(0);
lean_inc(v_idx_2650_);
v_pos_2652_ = v_pos_2598_;
v_array_2653_ = v_array_2649_;
v_idx_2654_ = v_idx_2650_;
v_err_2655_ = v___x_2661_;
goto v___jp_2651_;
}
else
{
uint8_t v___x_2662_; uint8_t v_got_2663_; uint8_t v___x_2664_; 
v___x_2662_ = 63;
v_got_2663_ = lean_byte_array_fget(v_array_2649_, v_idx_2650_);
v___x_2664_ = lean_uint8_dec_eq(v_got_2663_, v___x_2662_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; 
v___x_2665_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2650_);
v_pos_2652_ = v_pos_2598_;
v_array_2653_ = v_array_2649_;
v_idx_2654_ = v_idx_2650_;
v_err_2655_ = v___x_2665_;
goto v___jp_2651_;
}
else
{
lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2683_; 
v_isSharedCheck_2683_ = !lean_is_exclusive(v_pos_2598_);
if (v_isSharedCheck_2683_ == 0)
{
lean_object* v_unused_2684_; lean_object* v_unused_2685_; 
v_unused_2684_ = lean_ctor_get(v_pos_2598_, 1);
lean_dec(v_unused_2684_);
v_unused_2685_ = lean_ctor_get(v_pos_2598_, 0);
lean_dec(v_unused_2685_);
v___x_2667_ = v_pos_2598_;
v_isShared_2668_ = v_isSharedCheck_2683_;
goto v_resetjp_2666_;
}
else
{
lean_dec(v_pos_2598_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2683_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = lean_nat_add(v_idx_2650_, v___x_2592_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 1, v___x_2669_);
v___x_2671_ = v___x_2667_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v_array_2649_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; 
lean_inc_ref(v_config_2566_);
v___x_2672_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2566_, v___x_2671_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_pos_2673_; lean_object* v_res_2674_; lean_object* v_array_2675_; lean_object* v_idx_2676_; lean_object* v___x_2677_; 
lean_dec(v_idx_2650_);
v_pos_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_pos_2673_);
v_res_2674_ = lean_ctor_get(v___x_2672_, 1);
lean_inc(v_res_2674_);
lean_dec_ref_known(v___x_2672_, 2);
v_array_2675_ = lean_ctor_get(v_pos_2673_, 0);
lean_inc_ref(v_array_2675_);
v_idx_2676_ = lean_ctor_get(v_pos_2673_, 1);
lean_inc(v_idx_2676_);
v___x_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_res_2674_);
v_pos_2627_ = v_pos_2673_;
v_array_2628_ = v_array_2675_;
v_idx_2629_ = v_idx_2676_;
v_res_2630_ = v___x_2677_;
goto v___jp_2626_;
}
else
{
lean_object* v_pos_2678_; lean_object* v_err_2679_; lean_object* v_array_2680_; lean_object* v_idx_2681_; 
v_pos_2678_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_pos_2678_);
v_err_2679_ = lean_ctor_get(v___x_2672_, 1);
lean_inc(v_err_2679_);
lean_dec_ref_known(v___x_2672_, 2);
v_array_2680_ = lean_ctor_get(v_pos_2678_, 0);
lean_inc_ref(v_array_2680_);
v_idx_2681_ = lean_ctor_get(v_pos_2678_, 1);
lean_inc(v_idx_2681_);
v_pos_2652_ = v_pos_2678_;
v_array_2653_ = v_array_2680_;
v_idx_2654_ = v_idx_2681_;
v_err_2655_ = v_err_2679_;
goto v___jp_2651_;
}
}
}
}
}
v___jp_2607_:
{
lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2611_, 0, v_res_2570_);
lean_ctor_set(v___x_2611_, 1, v_fst_2602_);
lean_ctor_set(v___x_2611_, 2, v_snd_2603_);
lean_ctor_set(v___x_2611_, 3, v___y_2608_);
lean_ctor_set(v___x_2611_, 4, v_res_2610_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 1, v___x_2611_);
lean_ctor_set(v___x_2600_, 0, v_pos_2609_);
v___x_2613_ = v___x_2600_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_pos_2609_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v___x_2611_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
v___jp_2615_:
{
lean_object* v_idx_2620_; uint8_t v___x_2621_; 
v_idx_2620_ = lean_ctor_get(v_pos_2618_, 1);
v___x_2621_ = lean_nat_dec_eq(v_idx_2616_, v_idx_2620_);
lean_dec(v_idx_2616_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2623_; 
lean_dec(v___y_2617_);
lean_dec(v_snd_2603_);
lean_dec(v_fst_2602_);
lean_del_object(v___x_2600_);
lean_dec(v_res_2570_);
if (v_isShared_2573_ == 0)
{
lean_ctor_set_tag(v___x_2572_, 1);
lean_ctor_set(v___x_2572_, 1, v_err_2619_);
lean_ctor_set(v___x_2572_, 0, v_pos_2618_);
v___x_2623_ = v___x_2572_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_pos_2618_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v_err_2619_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
else
{
lean_object* v___x_2625_; 
lean_dec(v_err_2619_);
lean_del_object(v___x_2572_);
v___x_2625_ = lean_box(0);
v___y_2608_ = v___y_2617_;
v_pos_2609_ = v_pos_2618_;
v_res_2610_ = v___x_2625_;
goto v___jp_2607_;
}
}
v___jp_2626_:
{
lean_object* v___x_2631_; uint8_t v___x_2632_; 
v___x_2631_ = lean_byte_array_size(v_array_2628_);
v___x_2632_ = lean_nat_dec_lt(v_idx_2629_, v___x_2631_);
if (v___x_2632_ == 0)
{
lean_object* v___x_2633_; 
lean_dec_ref(v_array_2628_);
lean_del_object(v___x_2605_);
lean_dec_ref(v_config_2566_);
v___x_2633_ = lean_box(0);
v_idx_2616_ = v_idx_2629_;
v___y_2617_ = v_res_2630_;
v_pos_2618_ = v_pos_2627_;
v_err_2619_ = v___x_2633_;
goto v___jp_2615_;
}
else
{
uint8_t v___x_2634_; uint8_t v_got_2635_; uint8_t v___x_2636_; 
v___x_2634_ = 35;
v_got_2635_ = lean_byte_array_fget(v_array_2628_, v_idx_2629_);
v___x_2636_ = lean_uint8_dec_eq(v_got_2635_, v___x_2634_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; 
lean_dec_ref(v_array_2628_);
lean_del_object(v___x_2605_);
lean_dec_ref(v_config_2566_);
v___x_2637_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_2616_ = v_idx_2629_;
v___y_2617_ = v_res_2630_;
v_pos_2618_ = v_pos_2627_;
v_err_2619_ = v___x_2637_;
goto v___jp_2615_;
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2640_; 
lean_dec_ref(v_pos_2627_);
v___x_2638_ = lean_nat_add(v_idx_2629_, v___x_2592_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 1, v___x_2638_);
lean_ctor_set(v___x_2605_, 0, v_array_2628_);
v___x_2640_ = v___x_2605_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_array_2628_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v___x_2638_);
v___x_2640_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
lean_object* v___x_2641_; 
v___x_2641_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2566_, v___x_2640_);
lean_dec_ref(v_config_2566_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_pos_2642_; lean_object* v_res_2643_; lean_object* v___x_2644_; 
v_pos_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_pos_2642_);
v_res_2643_ = lean_ctor_get(v___x_2641_, 1);
lean_inc(v_res_2643_);
lean_dec_ref_known(v___x_2641_, 2);
v___x_2644_ = l_Std_Http_URI_EncodedFragment_decode(v_res_2643_);
lean_dec(v_res_2643_);
if (lean_obj_tag(v___x_2644_) == 1)
{
lean_dec(v_idx_2629_);
lean_del_object(v___x_2572_);
v___y_2608_ = v_res_2630_;
v_pos_2609_ = v_pos_2642_;
v_res_2610_ = v___x_2644_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2645_; 
lean_dec(v___x_2644_);
v___x_2645_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
v_idx_2616_ = v_idx_2629_;
v___y_2617_ = v_res_2630_;
v_pos_2618_ = v_pos_2642_;
v_err_2619_ = v___x_2645_;
goto v___jp_2615_;
}
}
else
{
lean_object* v_pos_2646_; lean_object* v_err_2647_; 
v_pos_2646_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_pos_2646_);
v_err_2647_ = lean_ctor_get(v___x_2641_, 1);
lean_inc(v_err_2647_);
lean_dec_ref_known(v___x_2641_, 2);
v_idx_2616_ = v_idx_2629_;
v___y_2617_ = v_res_2630_;
v_pos_2618_ = v_pos_2646_;
v_err_2619_ = v_err_2647_;
goto v___jp_2615_;
}
}
}
}
}
v___jp_2651_:
{
uint8_t v___x_2656_; 
v___x_2656_ = lean_nat_dec_eq(v_idx_2650_, v_idx_2654_);
lean_dec(v_idx_2650_);
if (v___x_2656_ == 0)
{
lean_object* v___x_2657_; 
lean_dec(v_idx_2654_);
lean_dec_ref(v_array_2653_);
lean_del_object(v___x_2605_);
lean_dec(v_snd_2603_);
lean_dec(v_fst_2602_);
lean_del_object(v___x_2600_);
lean_del_object(v___x_2572_);
lean_dec(v_res_2570_);
lean_dec_ref(v_config_2566_);
v___x_2657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2657_, 0, v_pos_2652_);
lean_ctor_set(v___x_2657_, 1, v_err_2655_);
return v___x_2657_;
}
else
{
lean_object* v___x_2658_; 
lean_dec(v_err_2655_);
v___x_2658_ = lean_box(0);
v_pos_2627_ = v_pos_2652_;
v_array_2628_ = v_array_2653_;
v_idx_2629_ = v_idx_2654_;
v_res_2630_ = v___x_2658_;
goto v___jp_2626_;
}
}
}
}
}
else
{
lean_object* v_pos_2688_; lean_object* v_err_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_del_object(v___x_2572_);
lean_dec(v_res_2570_);
lean_dec_ref(v_config_2566_);
v_pos_2688_ = lean_ctor_get(v___x_2596_, 0);
v_err_2689_ = lean_ctor_get(v___x_2596_, 1);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2596_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_err_2689_);
lean_inc(v_pos_2688_);
lean_dec(v___x_2596_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_pos_2688_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_err_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
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
lean_object* v_pos_2702_; lean_object* v_err_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_dec_ref(v_config_2566_);
v_pos_2702_ = lean_ctor_get(v___x_2568_, 0);
v_err_2703_ = lean_ctor_get(v___x_2568_, 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2568_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_err_2703_);
lean_inc(v_pos_2702_);
lean_dec(v___x_2568_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_pos_2702_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v_err_2703_);
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
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object* v_a_2714_){
_start:
{
lean_object* v_array_2715_; lean_object* v_idx_2716_; lean_object* v___x_2717_; uint8_t v___x_2718_; 
v_array_2715_ = lean_ctor_get(v_a_2714_, 0);
v_idx_2716_ = lean_ctor_get(v_a_2714_, 1);
v___x_2717_ = lean_byte_array_size(v_array_2715_);
v___x_2718_ = lean_nat_dec_lt(v_idx_2716_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_a_2714_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
return v___x_2720_;
}
else
{
uint8_t v___x_2721_; uint8_t v_got_2722_; uint8_t v___x_2723_; 
v___x_2721_ = 42;
v_got_2722_ = lean_byte_array_fget(v_array_2715_, v_idx_2716_);
v___x_2723_ = lean_uint8_dec_eq(v_got_2722_, v___x_2721_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1));
v___x_2725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2725_, 0, v_a_2714_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
return v___x_2725_;
}
else
{
lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2736_; 
lean_inc(v_idx_2716_);
lean_inc_ref(v_array_2715_);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_a_2714_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; lean_object* v_unused_2738_; 
v_unused_2737_ = lean_ctor_get(v_a_2714_, 1);
lean_dec(v_unused_2737_);
v_unused_2738_ = lean_ctor_get(v_a_2714_, 0);
lean_dec(v_unused_2738_);
v___x_2727_ = v_a_2714_;
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
else
{
lean_dec(v_a_2714_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2736_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2729_ = lean_unsigned_to_nat(1u);
v___x_2730_ = lean_nat_add(v_idx_2716_, v___x_2729_);
lean_dec(v_idx_2716_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 1, v___x_2730_);
v___x_2732_ = v___x_2727_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_array_2715_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_box(3);
v___x_2734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
return v___x_2734_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object* v_config_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_array_2747_; lean_object* v_idx_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; 
v_array_2747_ = lean_ctor_get(v_a_2743_, 0);
v_idx_2748_ = lean_ctor_get(v_a_2743_, 1);
v___x_2749_ = lean_byte_array_size(v_array_2747_);
v___x_2750_ = lean_nat_dec_lt(v_idx_2748_, v___x_2749_);
if (v___x_2750_ == 0)
{
lean_dec_ref(v_config_2742_);
goto v___jp_2744_;
}
else
{
uint8_t v___x_2751_; uint8_t v___x_2752_; uint8_t v___x_2753_; 
v___x_2751_ = lean_byte_array_fget(v_array_2747_, v_idx_2748_);
v___x_2752_ = 47;
v___x_2753_ = lean_uint8_dec_eq(v___x_2751_, v___x_2752_);
if (v___x_2753_ == 0)
{
lean_dec_ref(v_config_2742_);
goto v___jp_2744_;
}
else
{
lean_object* v___x_2754_; 
lean_inc_ref(v_a_2743_);
lean_inc_ref(v_config_2742_);
v___x_2754_ = l_Std_Http_URI_Parser_parsePath(v_config_2742_, v___x_2753_, v___x_2753_, v_a_2743_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_pos_2755_; lean_object* v_res_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2801_; 
v_pos_2755_ = lean_ctor_get(v___x_2754_, 0);
v_res_2756_ = lean_ctor_get(v___x_2754_, 1);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2758_ = v___x_2754_;
v_isShared_2759_ = v_isSharedCheck_2801_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_res_2756_);
lean_inc(v_pos_2755_);
lean_dec(v___x_2754_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2801_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v_pos_2761_; lean_object* v_res_2762_; lean_object* v_array_2767_; lean_object* v_idx_2768_; lean_object* v_pos_2770_; lean_object* v_idx_2771_; lean_object* v_err_2772_; lean_object* v___x_2776_; uint8_t v___x_2777_; 
v_array_2767_ = lean_ctor_get(v_pos_2755_, 0);
v_idx_2768_ = lean_ctor_get(v_pos_2755_, 1);
lean_inc(v_idx_2768_);
v___x_2776_ = lean_byte_array_size(v_array_2767_);
v___x_2777_ = lean_nat_dec_lt(v_idx_2768_, v___x_2776_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2778_; 
lean_dec_ref(v_config_2742_);
v___x_2778_ = lean_box(0);
lean_inc(v_idx_2768_);
v_pos_2770_ = v_pos_2755_;
v_idx_2771_ = v_idx_2768_;
v_err_2772_ = v___x_2778_;
goto v___jp_2769_;
}
else
{
uint8_t v___x_2779_; uint8_t v_got_2780_; uint8_t v___x_2781_; 
v___x_2779_ = 63;
v_got_2780_ = lean_byte_array_fget(v_array_2767_, v_idx_2768_);
v___x_2781_ = lean_uint8_dec_eq(v_got_2780_, v___x_2779_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; 
lean_dec_ref(v_config_2742_);
v___x_2782_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2768_);
v_pos_2770_ = v_pos_2755_;
v_idx_2771_ = v_idx_2768_;
v_err_2772_ = v___x_2782_;
goto v___jp_2769_;
}
else
{
lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2798_; 
lean_inc_ref(v_array_2767_);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_pos_2755_);
if (v_isSharedCheck_2798_ == 0)
{
lean_object* v_unused_2799_; lean_object* v_unused_2800_; 
v_unused_2799_ = lean_ctor_get(v_pos_2755_, 1);
lean_dec(v_unused_2799_);
v_unused_2800_ = lean_ctor_get(v_pos_2755_, 0);
lean_dec(v_unused_2800_);
v___x_2784_ = v_pos_2755_;
v_isShared_2785_ = v_isSharedCheck_2798_;
goto v_resetjp_2783_;
}
else
{
lean_dec(v_pos_2755_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2798_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2789_; 
v___x_2786_ = lean_unsigned_to_nat(1u);
v___x_2787_ = lean_nat_add(v_idx_2768_, v___x_2786_);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 1, v___x_2787_);
v___x_2789_ = v___x_2784_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_array_2767_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v___x_2787_);
v___x_2789_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
lean_object* v___x_2790_; 
v___x_2790_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2742_, v___x_2789_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_pos_2791_; lean_object* v_res_2792_; lean_object* v___x_2793_; 
lean_dec(v_idx_2768_);
lean_dec_ref(v_a_2743_);
v_pos_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_pos_2791_);
v_res_2792_ = lean_ctor_get(v___x_2790_, 1);
lean_inc(v_res_2792_);
lean_dec_ref_known(v___x_2790_, 2);
v___x_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_res_2792_);
v_pos_2761_ = v_pos_2791_;
v_res_2762_ = v___x_2793_;
goto v___jp_2760_;
}
else
{
lean_object* v_pos_2794_; lean_object* v_err_2795_; lean_object* v_idx_2796_; 
v_pos_2794_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_pos_2794_);
v_err_2795_ = lean_ctor_get(v___x_2790_, 1);
lean_inc(v_err_2795_);
lean_dec_ref_known(v___x_2790_, 2);
v_idx_2796_ = lean_ctor_get(v_pos_2794_, 1);
lean_inc(v_idx_2796_);
v_pos_2770_ = v_pos_2794_;
v_idx_2771_ = v_idx_2796_;
v_err_2772_ = v_err_2795_;
goto v___jp_2769_;
}
}
}
}
}
v___jp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2765_; 
v___x_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2763_, 0, v_res_2756_);
lean_ctor_set(v___x_2763_, 1, v_res_2762_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 1, v___x_2763_);
lean_ctor_set(v___x_2758_, 0, v_pos_2761_);
v___x_2765_ = v___x_2758_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_pos_2761_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
v___jp_2769_:
{
uint8_t v___x_2773_; 
v___x_2773_ = lean_nat_dec_eq(v_idx_2768_, v_idx_2771_);
lean_dec(v_idx_2771_);
lean_dec(v_idx_2768_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; 
lean_dec_ref(v_pos_2770_);
lean_del_object(v___x_2758_);
lean_dec(v_res_2756_);
v___x_2774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2774_, 0, v_a_2743_);
lean_ctor_set(v___x_2774_, 1, v_err_2772_);
return v___x_2774_;
}
else
{
lean_object* v___x_2775_; 
lean_dec(v_err_2772_);
lean_dec_ref(v_a_2743_);
v___x_2775_ = lean_box(0);
v_pos_2761_ = v_pos_2770_;
v_res_2762_ = v___x_2775_;
goto v___jp_2760_;
}
}
}
}
else
{
lean_object* v_err_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
lean_dec_ref(v_config_2742_);
v_err_2802_ = lean_ctor_get(v___x_2754_, 1);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2809_ == 0)
{
lean_object* v_unused_2810_; 
v_unused_2810_ = lean_ctor_get(v___x_2754_, 0);
lean_dec(v_unused_2810_);
v___x_2804_ = v___x_2754_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_err_2802_);
lean_dec(v___x_2754_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 0, v_a_2743_);
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2743_);
lean_ctor_set(v_reuseFailAlloc_2808_, 1, v_err_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
}
v___jp_2744_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2745_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1));
v___x_2746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2746_, 0, v_a_2743_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object* v_config_2811_, lean_object* v_scheme_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v_array_2814_; lean_object* v_idx_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; 
v_array_2814_ = lean_ctor_get(v_a_2813_, 0);
v_idx_2815_ = lean_ctor_get(v_a_2813_, 1);
v___x_2816_ = lean_byte_array_size(v_array_2814_);
v___x_2817_ = lean_nat_dec_lt(v_idx_2815_, v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; lean_object* v___x_2819_; 
lean_dec_ref(v_scheme_2812_);
lean_dec_ref(v_config_2811_);
v___x_2818_ = lean_box(0);
v___x_2819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2819_, 0, v_a_2813_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
return v___x_2819_;
}
else
{
uint8_t v___x_2820_; uint8_t v_got_2821_; uint8_t v___x_2822_; 
v___x_2820_ = 58;
v_got_2821_ = lean_byte_array_fget(v_array_2814_, v_idx_2815_);
v___x_2822_ = lean_uint8_dec_eq(v_got_2821_, v___x_2820_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
lean_dec_ref(v_scheme_2812_);
lean_dec_ref(v_config_2811_);
v___x_2823_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2824_, 0, v_a_2813_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
return v___x_2824_;
}
else
{
lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2899_; 
lean_inc(v_idx_2815_);
lean_inc_ref(v_array_2814_);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_a_2813_);
if (v_isSharedCheck_2899_ == 0)
{
lean_object* v_unused_2900_; lean_object* v_unused_2901_; 
v_unused_2900_ = lean_ctor_get(v_a_2813_, 1);
lean_dec(v_unused_2900_);
v_unused_2901_ = lean_ctor_get(v_a_2813_, 0);
lean_dec(v_unused_2901_);
v___x_2826_ = v_a_2813_;
v_isShared_2827_ = v_isSharedCheck_2899_;
goto v_resetjp_2825_;
}
else
{
lean_dec(v_a_2813_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2899_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2831_; 
v___x_2828_ = lean_unsigned_to_nat(1u);
v___x_2829_ = lean_nat_add(v_idx_2815_, v___x_2828_);
lean_dec(v_idx_2815_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 1, v___x_2829_);
v___x_2831_ = v___x_2826_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_array_2814_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v___x_2829_);
v___x_2831_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2832_; 
lean_inc_ref(v_config_2811_);
v___x_2832_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2811_, v___x_2831_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_res_2833_; lean_object* v_pos_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2888_; 
v_res_2833_ = lean_ctor_get(v___x_2832_, 1);
v_pos_2834_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2836_ = v___x_2832_;
v_isShared_2837_ = v_isSharedCheck_2888_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_res_2833_);
lean_inc(v_pos_2834_);
lean_dec(v___x_2832_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2888_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v_fst_2838_; lean_object* v_snd_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2887_; 
v_fst_2838_ = lean_ctor_get(v_res_2833_, 0);
v_snd_2839_ = lean_ctor_get(v_res_2833_, 1);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_res_2833_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2841_ = v_res_2833_;
v_isShared_2842_ = v_isSharedCheck_2887_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_snd_2839_);
lean_inc(v_fst_2838_);
lean_dec(v_res_2833_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2887_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v_pos_2844_; lean_object* v_res_2845_; lean_object* v_array_2852_; lean_object* v_idx_2853_; lean_object* v_pos_2855_; lean_object* v_idx_2856_; lean_object* v_err_2857_; lean_object* v___x_2863_; uint8_t v___x_2864_; 
v_array_2852_ = lean_ctor_get(v_pos_2834_, 0);
v_idx_2853_ = lean_ctor_get(v_pos_2834_, 1);
lean_inc(v_idx_2853_);
v___x_2863_ = lean_byte_array_size(v_array_2852_);
v___x_2864_ = lean_nat_dec_lt(v_idx_2853_, v___x_2863_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; 
lean_dec_ref(v_config_2811_);
v___x_2865_ = lean_box(0);
lean_inc(v_idx_2853_);
v_pos_2855_ = v_pos_2834_;
v_idx_2856_ = v_idx_2853_;
v_err_2857_ = v___x_2865_;
goto v___jp_2854_;
}
else
{
uint8_t v___x_2866_; uint8_t v_got_2867_; uint8_t v___x_2868_; 
v___x_2866_ = 63;
v_got_2867_ = lean_byte_array_fget(v_array_2852_, v_idx_2853_);
v___x_2868_ = lean_uint8_dec_eq(v_got_2867_, v___x_2866_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; 
lean_dec_ref(v_config_2811_);
v___x_2869_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2853_);
v_pos_2855_ = v_pos_2834_;
v_idx_2856_ = v_idx_2853_;
v_err_2857_ = v___x_2869_;
goto v___jp_2854_;
}
else
{
lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2884_; 
lean_inc_ref(v_array_2852_);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_pos_2834_);
if (v_isSharedCheck_2884_ == 0)
{
lean_object* v_unused_2885_; lean_object* v_unused_2886_; 
v_unused_2885_ = lean_ctor_get(v_pos_2834_, 1);
lean_dec(v_unused_2885_);
v_unused_2886_ = lean_ctor_get(v_pos_2834_, 0);
lean_dec(v_unused_2886_);
v___x_2871_ = v_pos_2834_;
v_isShared_2872_ = v_isSharedCheck_2884_;
goto v_resetjp_2870_;
}
else
{
lean_dec(v_pos_2834_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2884_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2875_; 
v___x_2873_ = lean_nat_add(v_idx_2853_, v___x_2828_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 1, v___x_2873_);
v___x_2875_ = v___x_2871_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_array_2852_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v___x_2873_);
v___x_2875_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
lean_object* v___x_2876_; 
v___x_2876_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2811_, v___x_2875_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_pos_2877_; lean_object* v_res_2878_; lean_object* v___x_2879_; 
lean_dec(v_idx_2853_);
lean_del_object(v___x_2841_);
v_pos_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_pos_2877_);
v_res_2878_ = lean_ctor_get(v___x_2876_, 1);
lean_inc(v_res_2878_);
lean_dec_ref_known(v___x_2876_, 2);
v___x_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2879_, 0, v_res_2878_);
v_pos_2844_ = v_pos_2877_;
v_res_2845_ = v___x_2879_;
goto v___jp_2843_;
}
else
{
lean_object* v_pos_2880_; lean_object* v_err_2881_; lean_object* v_idx_2882_; 
v_pos_2880_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_pos_2880_);
v_err_2881_ = lean_ctor_get(v___x_2876_, 1);
lean_inc(v_err_2881_);
lean_dec_ref_known(v___x_2876_, 2);
v_idx_2882_ = lean_ctor_get(v_pos_2880_, 1);
lean_inc(v_idx_2882_);
v_pos_2855_ = v_pos_2880_;
v_idx_2856_ = v_idx_2882_;
v_err_2857_ = v_err_2881_;
goto v___jp_2854_;
}
}
}
}
}
v___jp_2843_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2846_ = lean_box(0);
v___x_2847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2847_, 0, v_scheme_2812_);
lean_ctor_set(v___x_2847_, 1, v_fst_2838_);
lean_ctor_set(v___x_2847_, 2, v_snd_2839_);
lean_ctor_set(v___x_2847_, 3, v_res_2845_);
lean_ctor_set(v___x_2847_, 4, v___x_2846_);
v___x_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 1, v___x_2848_);
lean_ctor_set(v___x_2836_, 0, v_pos_2844_);
v___x_2850_ = v___x_2836_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_pos_2844_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
v___jp_2854_:
{
uint8_t v___x_2858_; 
v___x_2858_ = lean_nat_dec_eq(v_idx_2853_, v_idx_2856_);
lean_dec(v_idx_2856_);
lean_dec(v_idx_2853_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2860_; 
lean_dec(v_snd_2839_);
lean_dec(v_fst_2838_);
lean_del_object(v___x_2836_);
lean_dec_ref(v_scheme_2812_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set_tag(v___x_2841_, 1);
lean_ctor_set(v___x_2841_, 1, v_err_2857_);
lean_ctor_set(v___x_2841_, 0, v_pos_2855_);
v___x_2860_ = v___x_2841_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_pos_2855_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_err_2857_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
else
{
lean_object* v___x_2862_; 
lean_dec(v_err_2857_);
lean_del_object(v___x_2841_);
v___x_2862_ = lean_box(0);
v_pos_2844_ = v_pos_2855_;
v_res_2845_ = v___x_2862_;
goto v___jp_2843_;
}
}
}
}
}
else
{
lean_object* v_pos_2889_; lean_object* v_err_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec_ref(v_scheme_2812_);
lean_dec_ref(v_config_2811_);
v_pos_2889_ = lean_ctor_get(v___x_2832_, 0);
v_err_2890_ = lean_ctor_get(v___x_2832_, 1);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2832_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_err_2890_);
lean_inc(v_pos_2889_);
lean_dec(v___x_2832_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_pos_2889_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_err_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object* v_config_2910_, lean_object* v_a_2911_){
_start:
{
lean_object* v___x_2915_; 
lean_inc_ref(v_a_2911_);
v___x_2915_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2910_, v_a_2911_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_pos_2916_; lean_object* v_res_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_3013_; 
v_pos_2916_ = lean_ctor_get(v___x_2915_, 0);
v_res_2917_ = lean_ctor_get(v___x_2915_, 1);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_2919_ = v___x_2915_;
v_isShared_2920_ = v_isSharedCheck_3013_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_res_2917_);
lean_inc(v_pos_2916_);
lean_dec(v___x_2915_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_3013_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v_pos_2924_; lean_object* v_res_2925_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v_idx_2935_; lean_object* v_pos_2936_; lean_object* v_idx_2937_; lean_object* v_err_2938_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3007_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2));
v___x_3008_ = lean_string_dec_eq(v_res_2917_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; uint8_t v___x_3010_; 
v___x_3009_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3));
v___x_3010_ = lean_string_dec_eq(v_res_2917_, v___x_3009_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec(v_pos_2916_);
lean_dec_ref(v_config_2910_);
v___x_3011_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5));
v___x_3012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3012_, 0, v_a_2911_);
lean_ctor_set(v___x_3012_, 1, v___x_3011_);
return v___x_3012_;
}
else
{
goto v___jp_2942_;
}
}
else
{
goto v___jp_2942_;
}
v___jp_2921_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v___x_2926_ = lean_box(0);
v___x_2927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2927_, 0, v_res_2917_);
lean_ctor_set(v___x_2927_, 1, v___y_2923_);
lean_ctor_set(v___x_2927_, 2, v___y_2922_);
lean_ctor_set(v___x_2927_, 3, v_res_2925_);
lean_ctor_set(v___x_2927_, 4, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_2928_);
lean_ctor_set(v___x_2919_, 0, v_pos_2924_);
v___x_2930_ = v___x_2919_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_pos_2924_);
lean_ctor_set(v_reuseFailAlloc_2931_, 1, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
v___jp_2932_:
{
uint8_t v___x_2939_; 
v___x_2939_ = lean_nat_dec_eq(v_idx_2935_, v_idx_2937_);
lean_dec(v_idx_2937_);
lean_dec(v_idx_2935_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; 
lean_dec_ref(v_pos_2936_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
v___x_2940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2940_, 0, v_a_2911_);
lean_ctor_set(v___x_2940_, 1, v_err_2938_);
return v___x_2940_;
}
else
{
lean_object* v___x_2941_; 
lean_dec(v_err_2938_);
lean_dec_ref(v_a_2911_);
v___x_2941_ = lean_box(0);
v___y_2922_ = v___y_2933_;
v___y_2923_ = v___y_2934_;
v_pos_2924_ = v_pos_2936_;
v_res_2925_ = v___x_2941_;
goto v___jp_2921_;
}
}
v___jp_2942_:
{
lean_object* v_array_2943_; lean_object* v_idx_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_3006_; 
v_array_2943_ = lean_ctor_get(v_pos_2916_, 0);
v_idx_2944_ = lean_ctor_get(v_pos_2916_, 1);
v_isSharedCheck_3006_ = !lean_is_exclusive(v_pos_2916_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_2946_ = v_pos_2916_;
v_isShared_2947_ = v_isSharedCheck_3006_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_idx_2944_);
lean_inc(v_array_2943_);
lean_dec(v_pos_2916_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_3006_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2948_; uint8_t v___x_2949_; 
v___x_2948_ = lean_byte_array_size(v_array_2943_);
v___x_2949_ = lean_nat_dec_lt(v_idx_2944_, v___x_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_del_object(v___x_2946_);
lean_dec(v_idx_2944_);
lean_dec_ref(v_array_2943_);
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec_ref(v_config_2910_);
v___x_2950_ = lean_box(0);
v___x_2951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2951_, 0, v_a_2911_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
return v___x_2951_;
}
else
{
uint8_t v___x_2952_; uint8_t v_got_2953_; uint8_t v___x_2954_; 
v___x_2952_ = 58;
v_got_2953_ = lean_byte_array_fget(v_array_2943_, v_idx_2944_);
v___x_2954_ = lean_uint8_dec_eq(v_got_2953_, v___x_2952_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; lean_object* v___x_2956_; 
lean_del_object(v___x_2946_);
lean_dec(v_idx_2944_);
lean_dec_ref(v_array_2943_);
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec_ref(v_config_2910_);
v___x_2955_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2956_, 0, v_a_2911_);
lean_ctor_set(v___x_2956_, 1, v___x_2955_);
return v___x_2956_;
}
else
{
lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v___x_2957_ = lean_unsigned_to_nat(1u);
v___x_2958_ = lean_nat_add(v_idx_2944_, v___x_2957_);
lean_dec(v_idx_2944_);
v___x_2959_ = lean_nat_dec_lt(v___x_2958_, v___x_2948_);
if (v___x_2959_ == 0)
{
lean_dec(v___x_2958_);
lean_del_object(v___x_2946_);
lean_dec_ref(v_array_2943_);
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec_ref(v_config_2910_);
goto v___jp_2912_;
}
else
{
uint8_t v___x_2960_; uint8_t v___x_2961_; uint8_t v___x_2962_; 
v___x_2960_ = lean_byte_array_fget(v_array_2943_, v___x_2958_);
v___x_2961_ = 47;
v___x_2962_ = lean_uint8_dec_eq(v___x_2960_, v___x_2961_);
if (v___x_2962_ == 0)
{
lean_dec(v___x_2958_);
lean_del_object(v___x_2946_);
lean_dec_ref(v_array_2943_);
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec_ref(v_config_2910_);
goto v___jp_2912_;
}
else
{
lean_object* v___x_2964_; 
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 1, v___x_2958_);
v___x_2964_ = v___x_2946_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_array_2943_);
lean_ctor_set(v_reuseFailAlloc_3005_, 1, v___x_2958_);
v___x_2964_ = v_reuseFailAlloc_3005_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
lean_inc_ref(v_config_2910_);
v___x_2965_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2910_, v___x_2964_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_res_2966_; lean_object* v_pos_2967_; lean_object* v_fst_2968_; lean_object* v_snd_2969_; lean_object* v_array_2970_; lean_object* v_idx_2971_; lean_object* v___x_2972_; uint8_t v___x_2973_; 
v_res_2966_ = lean_ctor_get(v___x_2965_, 1);
lean_inc(v_res_2966_);
v_pos_2967_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_pos_2967_);
lean_dec_ref_known(v___x_2965_, 2);
v_fst_2968_ = lean_ctor_get(v_res_2966_, 0);
lean_inc(v_fst_2968_);
v_snd_2969_ = lean_ctor_get(v_res_2966_, 1);
lean_inc(v_snd_2969_);
lean_dec(v_res_2966_);
v_array_2970_ = lean_ctor_get(v_pos_2967_, 0);
v_idx_2971_ = lean_ctor_get(v_pos_2967_, 1);
lean_inc(v_idx_2971_);
v___x_2972_ = lean_byte_array_size(v_array_2970_);
v___x_2973_ = lean_nat_dec_lt(v_idx_2971_, v___x_2972_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; 
lean_dec_ref(v_config_2910_);
v___x_2974_ = lean_box(0);
lean_inc(v_idx_2971_);
v___y_2933_ = v_snd_2969_;
v___y_2934_ = v_fst_2968_;
v_idx_2935_ = v_idx_2971_;
v_pos_2936_ = v_pos_2967_;
v_idx_2937_ = v_idx_2971_;
v_err_2938_ = v___x_2974_;
goto v___jp_2932_;
}
else
{
uint8_t v___x_2975_; uint8_t v_got_2976_; uint8_t v___x_2977_; 
v___x_2975_ = 63;
v_got_2976_ = lean_byte_array_fget(v_array_2970_, v_idx_2971_);
v___x_2977_ = lean_uint8_dec_eq(v_got_2976_, v___x_2975_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2978_; 
lean_dec_ref(v_config_2910_);
v___x_2978_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2971_);
v___y_2933_ = v_snd_2969_;
v___y_2934_ = v_fst_2968_;
v_idx_2935_ = v_idx_2971_;
v_pos_2936_ = v_pos_2967_;
v_idx_2937_ = v_idx_2971_;
v_err_2938_ = v___x_2978_;
goto v___jp_2932_;
}
else
{
lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2993_; 
lean_inc_ref(v_array_2970_);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_pos_2967_);
if (v_isSharedCheck_2993_ == 0)
{
lean_object* v_unused_2994_; lean_object* v_unused_2995_; 
v_unused_2994_ = lean_ctor_get(v_pos_2967_, 1);
lean_dec(v_unused_2994_);
v_unused_2995_ = lean_ctor_get(v_pos_2967_, 0);
lean_dec(v_unused_2995_);
v___x_2980_ = v_pos_2967_;
v_isShared_2981_ = v_isSharedCheck_2993_;
goto v_resetjp_2979_;
}
else
{
lean_dec(v_pos_2967_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2993_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2982_ = lean_nat_add(v_idx_2971_, v___x_2957_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 1, v___x_2982_);
v___x_2984_ = v___x_2980_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_array_2970_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2982_);
v___x_2984_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2985_; 
v___x_2985_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2910_, v___x_2984_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_pos_2986_; lean_object* v_res_2987_; lean_object* v___x_2988_; 
lean_dec(v_idx_2971_);
lean_dec_ref(v_a_2911_);
v_pos_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_pos_2986_);
v_res_2987_ = lean_ctor_get(v___x_2985_, 1);
lean_inc(v_res_2987_);
lean_dec_ref_known(v___x_2985_, 2);
v___x_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_res_2987_);
v___y_2922_ = v_snd_2969_;
v___y_2923_ = v_fst_2968_;
v_pos_2924_ = v_pos_2986_;
v_res_2925_ = v___x_2988_;
goto v___jp_2921_;
}
else
{
lean_object* v_pos_2989_; lean_object* v_err_2990_; lean_object* v_idx_2991_; 
v_pos_2989_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_pos_2989_);
v_err_2990_ = lean_ctor_get(v___x_2985_, 1);
lean_inc(v_err_2990_);
lean_dec_ref_known(v___x_2985_, 2);
v_idx_2991_ = lean_ctor_get(v_pos_2989_, 1);
lean_inc(v_idx_2991_);
v___y_2933_ = v_snd_2969_;
v___y_2934_ = v_fst_2968_;
v_idx_2935_ = v_idx_2971_;
v_pos_2936_ = v_pos_2989_;
v_idx_2937_ = v_idx_2991_;
v_err_2938_ = v_err_2990_;
goto v___jp_2932_;
}
}
}
}
}
}
else
{
lean_object* v_err_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_del_object(v___x_2919_);
lean_dec(v_res_2917_);
lean_dec_ref(v_config_2910_);
v_err_2996_ = lean_ctor_get(v___x_2965_, 1);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_3003_ == 0)
{
lean_object* v_unused_3004_; 
v_unused_3004_ = lean_ctor_get(v___x_2965_, 0);
lean_dec(v_unused_3004_);
v___x_2998_ = v___x_2965_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_err_2996_);
lean_dec(v___x_2965_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 0, v_a_2911_);
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2911_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v_err_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
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
else
{
lean_object* v_err_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec_ref(v_config_2910_);
v_err_3014_ = lean_ctor_get(v___x_2915_, 1);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3021_ == 0)
{
lean_object* v_unused_3022_; 
v_unused_3022_ = lean_ctor_get(v___x_2915_, 0);
lean_dec(v_unused_3022_);
v___x_3016_ = v___x_2915_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_err_3014_);
lean_dec(v___x_2915_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v_a_2911_);
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_2911_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v_err_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
v___jp_2912_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1));
v___x_2914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2914_, 0, v_a_2911_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
return v___x_2914_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object* v_config_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v___x_3025_; 
lean_inc_ref(v_a_3024_);
v___x_3025_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3023_, v_a_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_pos_3026_; lean_object* v_res_3027_; lean_object* v___x_3028_; 
v_pos_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_pos_3026_);
v_res_3027_ = lean_ctor_get(v___x_3025_, 1);
lean_inc(v_res_3027_);
lean_dec_ref_known(v___x_3025_, 2);
v___x_3028_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(v_config_3023_, v_res_3027_, v_pos_3026_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_dec_ref(v_a_3024_);
return v___x_3028_;
}
else
{
lean_object* v_err_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3036_; 
v_err_3029_ = lean_ctor_get(v___x_3028_, 1);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3036_ == 0)
{
lean_object* v_unused_3037_; 
v_unused_3037_ = lean_ctor_get(v___x_3028_, 0);
lean_dec(v_unused_3037_);
v___x_3031_ = v___x_3028_;
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_err_3029_);
lean_dec(v___x_3028_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3034_; 
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v_a_3024_);
v___x_3034_ = v___x_3031_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v_a_3024_);
lean_ctor_set(v_reuseFailAlloc_3035_, 1, v_err_3029_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
}
else
{
lean_object* v_err_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v_config_3023_);
v_err_3038_ = lean_ctor_get(v___x_3025_, 1);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3045_ == 0)
{
lean_object* v_unused_3046_; 
v_unused_3046_ = lean_ctor_get(v___x_3025_, 0);
lean_dec(v_unused_3046_);
v___x_3040_ = v___x_3025_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_err_3038_);
lean_dec(v___x_3025_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 0, v_a_3024_);
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3024_);
lean_ctor_set(v_reuseFailAlloc_3044_, 1, v_err_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object* v_config_3047_, lean_object* v_a_3048_){
_start:
{
lean_object* v___x_3049_; 
lean_inc_ref(v_a_3048_);
v___x_3049_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3047_, v_a_3048_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_pos_3050_; lean_object* v_res_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3103_; 
v_pos_3050_ = lean_ctor_get(v___x_3049_, 0);
v_res_3051_ = lean_ctor_get(v___x_3049_, 1);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3053_ = v___x_3049_;
v_isShared_3054_ = v_isSharedCheck_3103_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_res_3051_);
lean_inc(v_pos_3050_);
lean_dec(v___x_3049_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3103_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v_array_3055_; lean_object* v_idx_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3102_; 
v_array_3055_ = lean_ctor_get(v_pos_3050_, 0);
v_idx_3056_ = lean_ctor_get(v_pos_3050_, 1);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_pos_3050_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3058_ = v_pos_3050_;
v_isShared_3059_ = v_isSharedCheck_3102_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_idx_3056_);
lean_inc(v_array_3055_);
lean_dec(v_pos_3050_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3102_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3060_; uint8_t v___x_3061_; 
v___x_3060_ = lean_byte_array_size(v_array_3055_);
v___x_3061_ = lean_nat_dec_lt(v_idx_3056_, v___x_3060_);
if (v___x_3061_ == 0)
{
lean_object* v___x_3062_; lean_object* v___x_3064_; 
lean_del_object(v___x_3058_);
lean_dec(v_idx_3056_);
lean_dec_ref(v_array_3055_);
lean_dec(v_res_3051_);
v___x_3062_ = lean_box(0);
if (v_isShared_3054_ == 0)
{
lean_ctor_set_tag(v___x_3053_, 1);
lean_ctor_set(v___x_3053_, 1, v___x_3062_);
lean_ctor_set(v___x_3053_, 0, v_a_3048_);
v___x_3064_ = v___x_3053_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
else
{
uint8_t v___x_3066_; uint8_t v_got_3067_; uint8_t v___x_3068_; 
v___x_3066_ = 58;
v_got_3067_ = lean_byte_array_fget(v_array_3055_, v_idx_3056_);
v___x_3068_ = lean_uint8_dec_eq(v_got_3067_, v___x_3066_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
lean_del_object(v___x_3058_);
lean_dec(v_idx_3056_);
lean_dec_ref(v_array_3055_);
lean_dec(v_res_3051_);
v___x_3069_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3054_ == 0)
{
lean_ctor_set_tag(v___x_3053_, 1);
lean_ctor_set(v___x_3053_, 1, v___x_3069_);
lean_ctor_set(v___x_3053_, 0, v_a_3048_);
v___x_3071_ = v___x_3053_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3072_, 1, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
else
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3076_; 
lean_del_object(v___x_3053_);
v___x_3073_ = lean_unsigned_to_nat(1u);
v___x_3074_ = lean_nat_add(v_idx_3056_, v___x_3073_);
lean_dec(v_idx_3056_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 1, v___x_3074_);
v___x_3076_ = v___x_3058_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_array_3055_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3074_);
v___x_3076_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
lean_object* v___x_3077_; 
v___x_3077_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3076_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_pos_3078_; lean_object* v_res_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref(v_a_3048_);
v_pos_3078_ = lean_ctor_get(v___x_3077_, 0);
v_res_3079_ = lean_ctor_get(v___x_3077_, 1);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3081_ = v___x_3077_;
v_isShared_3082_ = v_isSharedCheck_3091_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_res_3079_);
lean_inc(v_pos_3078_);
lean_dec(v___x_3077_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3091_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; uint16_t v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3089_; 
v___x_3083_ = lean_box(0);
v___x_3084_ = lean_alloc_ctor(2, 0, 2);
v___x_3085_ = lean_unbox(v_res_3079_);
lean_dec(v_res_3079_);
lean_ctor_set_uint16(v___x_3084_, 0, v___x_3085_);
v___x_3086_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3083_);
lean_ctor_set(v___x_3086_, 1, v_res_3051_);
lean_ctor_set(v___x_3086_, 2, v___x_3084_);
v___x_3087_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3086_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 1, v___x_3087_);
v___x_3089_ = v___x_3081_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_pos_3078_);
lean_ctor_set(v_reuseFailAlloc_3090_, 1, v___x_3087_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
else
{
lean_object* v_err_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v_res_3051_);
v_err_3092_ = lean_ctor_get(v___x_3077_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v___x_3077_, 0);
lean_dec(v_unused_3100_);
v___x_3094_ = v___x_3077_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_err_3092_);
lean_dec(v___x_3077_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
lean_ctor_set(v___x_3094_, 0, v_a_3048_);
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_err_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
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
lean_object* v_err_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
v_err_3104_ = lean_ctor_get(v___x_3049_, 1);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3111_ == 0)
{
lean_object* v_unused_3112_; 
v_unused_3112_ = lean_ctor_get(v___x_3049_, 0);
lean_dec(v_unused_3112_);
v___x_3106_ = v___x_3049_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_err_3104_);
lean_dec(v___x_3049_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 0, v_a_3048_);
v___x_3109_ = v___x_3106_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_err_3104_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object* v_config_3113_, lean_object* v_a_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3113_, v_a_3114_);
lean_dec_ref(v_config_3113_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object* v_config_3116_, lean_object* v_a_3117_){
_start:
{
lean_object* v___x_3118_; 
lean_inc_ref(v_a_3117_);
v___x_3118_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(v_a_3117_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_dec_ref(v_a_3117_);
lean_dec_ref(v_config_3116_);
return v___x_3118_;
}
else
{
lean_object* v_pos_3119_; lean_object* v_idx_3120_; lean_object* v_idx_3121_; uint8_t v___x_3122_; 
v_pos_3119_ = lean_ctor_get(v___x_3118_, 0);
v_idx_3120_ = lean_ctor_get(v_a_3117_, 1);
lean_inc(v_idx_3120_);
lean_dec_ref(v_a_3117_);
v_idx_3121_ = lean_ctor_get(v_pos_3119_, 1);
v___x_3122_ = lean_nat_dec_eq(v_idx_3120_, v_idx_3121_);
lean_dec(v_idx_3120_);
if (v___x_3122_ == 0)
{
lean_dec_ref(v_config_3116_);
return v___x_3118_;
}
else
{
lean_object* v___x_3123_; 
lean_inc(v_idx_3121_);
lean_inc(v_pos_3119_);
lean_dec_ref_known(v___x_3118_, 2);
lean_inc_ref(v_config_3116_);
v___x_3123_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(v_config_3116_, v_pos_3119_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_dec(v_idx_3121_);
lean_dec_ref(v_config_3116_);
return v___x_3123_;
}
else
{
lean_object* v_pos_3124_; lean_object* v_idx_3125_; uint8_t v___x_3126_; 
v_pos_3124_ = lean_ctor_get(v___x_3123_, 0);
v_idx_3125_ = lean_ctor_get(v_pos_3124_, 1);
v___x_3126_ = lean_nat_dec_eq(v_idx_3121_, v_idx_3125_);
lean_dec(v_idx_3121_);
if (v___x_3126_ == 0)
{
lean_dec_ref(v_config_3116_);
return v___x_3123_;
}
else
{
lean_object* v___x_3127_; 
lean_inc(v_idx_3125_);
lean_inc(v_pos_3124_);
lean_dec_ref_known(v___x_3123_, 2);
lean_inc_ref(v_config_3116_);
v___x_3127_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(v_config_3116_, v_pos_3124_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_dec(v_idx_3125_);
lean_dec_ref(v_config_3116_);
return v___x_3127_;
}
else
{
lean_object* v_pos_3128_; lean_object* v_idx_3129_; uint8_t v___x_3130_; 
v_pos_3128_ = lean_ctor_get(v___x_3127_, 0);
v_idx_3129_ = lean_ctor_get(v_pos_3128_, 1);
v___x_3130_ = lean_nat_dec_eq(v_idx_3125_, v_idx_3129_);
lean_dec(v_idx_3125_);
if (v___x_3130_ == 0)
{
lean_dec_ref(v_config_3116_);
return v___x_3127_;
}
else
{
lean_object* v___x_3131_; 
lean_inc(v_idx_3129_);
lean_inc(v_pos_3128_);
lean_dec_ref_known(v___x_3127_, 2);
v___x_3131_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3116_, v_pos_3128_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_dec(v_idx_3129_);
lean_dec_ref(v_config_3116_);
return v___x_3131_;
}
else
{
lean_object* v_pos_3132_; lean_object* v_idx_3133_; uint8_t v___x_3134_; 
v_pos_3132_ = lean_ctor_get(v___x_3131_, 0);
v_idx_3133_ = lean_ctor_get(v_pos_3132_, 1);
v___x_3134_ = lean_nat_dec_eq(v_idx_3129_, v_idx_3133_);
lean_dec(v_idx_3129_);
if (v___x_3134_ == 0)
{
lean_dec_ref(v_config_3116_);
return v___x_3131_;
}
else
{
lean_object* v___x_3135_; 
lean_inc(v_pos_3132_);
lean_dec_ref_known(v___x_3131_, 2);
v___x_3135_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(v_config_3116_, v_pos_3132_);
return v___x_3135_;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object* v_config_3139_, lean_object* v_a_3140_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_3139_, v_a_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_pos_3142_; lean_object* v_res_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3156_; 
v_pos_3142_ = lean_ctor_get(v___x_3141_, 0);
v_res_3143_ = lean_ctor_get(v___x_3141_, 1);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3145_ = v___x_3141_;
v_isShared_3146_ = v_isSharedCheck_3156_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_res_3143_);
lean_inc(v_pos_3142_);
lean_dec(v___x_3141_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3156_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; 
v___x_3147_ = l_Std_Http_URI_EncodedFragment_decode(v_res_3143_);
lean_dec(v_res_3143_);
if (lean_obj_tag(v___x_3147_) == 1)
{
lean_object* v_val_3148_; lean_object* v___x_3150_; 
v_val_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_val_3148_);
lean_dec_ref_known(v___x_3147_, 1);
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 1, v_val_3148_);
v___x_3150_ = v___x_3145_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_pos_3142_);
lean_ctor_set(v_reuseFailAlloc_3151_, 1, v_val_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
lean_dec(v___x_3147_);
v___x_3152_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1));
if (v_isShared_3146_ == 0)
{
lean_ctor_set_tag(v___x_3145_, 1);
lean_ctor_set(v___x_3145_, 1, v___x_3152_);
v___x_3154_ = v___x_3145_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_pos_3142_);
lean_ctor_set(v_reuseFailAlloc_3155_, 1, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_pos_3157_; lean_object* v_err_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
v_pos_3157_ = lean_ctor_get(v___x_3141_, 0);
v_err_3158_ = lean_ctor_get(v___x_3141_, 1);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3141_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_err_3158_);
lean_inc(v_pos_3157_);
lean_dec(v___x_3141_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_pos_3157_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v_err_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object* v_config_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3166_, v_a_3167_);
lean_dec_ref(v_config_3166_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object* v_config_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v___x_3171_; 
lean_inc_ref(v_a_3170_);
v___x_3171_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_pos_3172_; lean_object* v_res_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3302_; 
v_pos_3172_ = lean_ctor_get(v___x_3171_, 0);
v_res_3173_ = lean_ctor_get(v___x_3171_, 1);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3175_ = v___x_3171_;
v_isShared_3176_ = v_isSharedCheck_3302_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_res_3173_);
lean_inc(v_pos_3172_);
lean_dec(v___x_3171_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3302_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v_array_3177_; lean_object* v_idx_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3301_; 
v_array_3177_ = lean_ctor_get(v_pos_3172_, 0);
v_idx_3178_ = lean_ctor_get(v_pos_3172_, 1);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_pos_3172_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3180_ = v_pos_3172_;
v_isShared_3181_ = v_isSharedCheck_3301_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_idx_3178_);
lean_inc(v_array_3177_);
lean_dec(v_pos_3172_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3301_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = lean_byte_array_size(v_array_3177_);
v___x_3183_ = lean_nat_dec_lt(v_idx_3178_, v___x_3182_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; lean_object* v___x_3186_; 
lean_del_object(v___x_3180_);
lean_dec(v_idx_3178_);
lean_dec_ref(v_array_3177_);
lean_dec(v_res_3173_);
lean_dec_ref(v_config_3169_);
v___x_3184_ = lean_box(0);
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 1);
lean_ctor_set(v___x_3175_, 1, v___x_3184_);
lean_ctor_set(v___x_3175_, 0, v_a_3170_);
v___x_3186_ = v___x_3175_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3187_, 1, v___x_3184_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
else
{
uint8_t v___x_3188_; uint8_t v_got_3189_; uint8_t v___x_3190_; 
v___x_3188_ = 58;
v_got_3189_ = lean_byte_array_fget(v_array_3177_, v_idx_3178_);
v___x_3190_ = lean_uint8_dec_eq(v_got_3189_, v___x_3188_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; lean_object* v___x_3193_; 
lean_del_object(v___x_3180_);
lean_dec(v_idx_3178_);
lean_dec_ref(v_array_3177_);
lean_dec(v_res_3173_);
lean_dec_ref(v_config_3169_);
v___x_3191_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 1);
lean_ctor_set(v___x_3175_, 1, v___x_3191_);
lean_ctor_set(v___x_3175_, 0, v_a_3170_);
v___x_3193_ = v___x_3175_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v___x_3191_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
else
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3195_ = lean_unsigned_to_nat(1u);
v___x_3196_ = lean_nat_add(v_idx_3178_, v___x_3195_);
lean_dec(v_idx_3178_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 1, v___x_3196_);
v___x_3198_ = v___x_3180_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_array_3177_);
lean_ctor_set(v_reuseFailAlloc_3300_, 1, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
lean_object* v___x_3199_; 
lean_inc_ref(v_config_3169_);
v___x_3199_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_3169_, v___x_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_res_3200_; lean_object* v_pos_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3290_; 
v_res_3200_ = lean_ctor_get(v___x_3199_, 1);
v_pos_3201_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3203_ = v___x_3199_;
v_isShared_3204_ = v_isSharedCheck_3290_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_res_3200_);
lean_inc(v_pos_3201_);
lean_dec(v___x_3199_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3290_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v_fst_3205_; lean_object* v_snd_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3289_; 
v_fst_3205_ = lean_ctor_get(v_res_3200_, 0);
v_snd_3206_ = lean_ctor_get(v_res_3200_, 1);
v_isSharedCheck_3289_ = !lean_is_exclusive(v_res_3200_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3208_ = v_res_3200_;
v_isShared_3209_ = v_isSharedCheck_3289_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_snd_3206_);
lean_inc(v_fst_3205_);
lean_dec(v_res_3200_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3289_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___y_3211_; lean_object* v_pos_3212_; lean_object* v_res_3213_; lean_object* v___y_3220_; lean_object* v_idx_3221_; lean_object* v_pos_3222_; lean_object* v_err_3223_; lean_object* v_pos_3231_; lean_object* v_array_3232_; lean_object* v_idx_3233_; lean_object* v_res_3234_; lean_object* v_array_3252_; lean_object* v_idx_3253_; lean_object* v_pos_3255_; lean_object* v_array_3256_; lean_object* v_idx_3257_; lean_object* v_err_3258_; lean_object* v___x_3262_; uint8_t v___x_3263_; 
v_array_3252_ = lean_ctor_get(v_pos_3201_, 0);
lean_inc_ref(v_array_3252_);
v_idx_3253_ = lean_ctor_get(v_pos_3201_, 1);
lean_inc(v_idx_3253_);
v___x_3262_ = lean_byte_array_size(v_array_3252_);
v___x_3263_ = lean_nat_dec_lt(v_idx_3253_, v___x_3262_);
if (v___x_3263_ == 0)
{
lean_object* v___x_3264_; 
v___x_3264_ = lean_box(0);
lean_inc(v_idx_3253_);
v_pos_3255_ = v_pos_3201_;
v_array_3256_ = v_array_3252_;
v_idx_3257_ = v_idx_3253_;
v_err_3258_ = v___x_3264_;
goto v___jp_3254_;
}
else
{
uint8_t v___x_3265_; uint8_t v_got_3266_; uint8_t v___x_3267_; 
v___x_3265_ = 63;
v_got_3266_ = lean_byte_array_fget(v_array_3252_, v_idx_3253_);
v___x_3267_ = lean_uint8_dec_eq(v_got_3266_, v___x_3265_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3268_; 
v___x_3268_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3253_);
v_pos_3255_ = v_pos_3201_;
v_array_3256_ = v_array_3252_;
v_idx_3257_ = v_idx_3253_;
v_err_3258_ = v___x_3268_;
goto v___jp_3254_;
}
else
{
lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3286_; 
v_isSharedCheck_3286_ = !lean_is_exclusive(v_pos_3201_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; lean_object* v_unused_3288_; 
v_unused_3287_ = lean_ctor_get(v_pos_3201_, 1);
lean_dec(v_unused_3287_);
v_unused_3288_ = lean_ctor_get(v_pos_3201_, 0);
lean_dec(v_unused_3288_);
v___x_3270_ = v_pos_3201_;
v_isShared_3271_ = v_isSharedCheck_3286_;
goto v_resetjp_3269_;
}
else
{
lean_dec(v_pos_3201_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3286_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3272_ = lean_nat_add(v_idx_3253_, v___x_3195_);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 1, v___x_3272_);
v___x_3274_ = v___x_3270_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_array_3252_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3275_; 
lean_inc_ref(v_config_3169_);
v___x_3275_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3169_, v___x_3274_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_pos_3276_; lean_object* v_res_3277_; lean_object* v_array_3278_; lean_object* v_idx_3279_; lean_object* v___x_3280_; 
lean_dec(v_idx_3253_);
v_pos_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_pos_3276_);
v_res_3277_ = lean_ctor_get(v___x_3275_, 1);
lean_inc(v_res_3277_);
lean_dec_ref_known(v___x_3275_, 2);
v_array_3278_ = lean_ctor_get(v_pos_3276_, 0);
lean_inc_ref(v_array_3278_);
v_idx_3279_ = lean_ctor_get(v_pos_3276_, 1);
lean_inc(v_idx_3279_);
v___x_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3280_, 0, v_res_3277_);
v_pos_3231_ = v_pos_3276_;
v_array_3232_ = v_array_3278_;
v_idx_3233_ = v_idx_3279_;
v_res_3234_ = v___x_3280_;
goto v___jp_3230_;
}
else
{
lean_object* v_pos_3281_; lean_object* v_err_3282_; lean_object* v_array_3283_; lean_object* v_idx_3284_; 
v_pos_3281_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_pos_3281_);
v_err_3282_ = lean_ctor_get(v___x_3275_, 1);
lean_inc(v_err_3282_);
lean_dec_ref_known(v___x_3275_, 2);
v_array_3283_ = lean_ctor_get(v_pos_3281_, 0);
lean_inc_ref(v_array_3283_);
v_idx_3284_ = lean_ctor_get(v_pos_3281_, 1);
lean_inc(v_idx_3284_);
v_pos_3255_ = v_pos_3281_;
v_array_3256_ = v_array_3283_;
v_idx_3257_ = v_idx_3284_;
v_err_3258_ = v_err_3282_;
goto v___jp_3254_;
}
}
}
}
}
v___jp_3210_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3217_; 
v___x_3214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3214_, 0, v_res_3173_);
lean_ctor_set(v___x_3214_, 1, v_fst_3205_);
lean_ctor_set(v___x_3214_, 2, v_snd_3206_);
lean_ctor_set(v___x_3214_, 3, v___y_3211_);
lean_ctor_set(v___x_3214_, 4, v_res_3213_);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 1, v___x_3215_);
lean_ctor_set(v___x_3203_, 0, v_pos_3212_);
v___x_3217_ = v___x_3203_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_pos_3212_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v___x_3215_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
v___jp_3219_:
{
lean_object* v_idx_3224_; uint8_t v___x_3225_; 
v_idx_3224_ = lean_ctor_get(v_pos_3222_, 1);
v___x_3225_ = lean_nat_dec_eq(v_idx_3221_, v_idx_3224_);
lean_dec(v_idx_3221_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3227_; 
lean_dec_ref(v_pos_3222_);
lean_dec(v___y_3220_);
lean_dec(v_snd_3206_);
lean_dec(v_fst_3205_);
lean_del_object(v___x_3203_);
lean_dec(v_res_3173_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set_tag(v___x_3175_, 1);
lean_ctor_set(v___x_3175_, 1, v_err_3223_);
lean_ctor_set(v___x_3175_, 0, v_a_3170_);
v___x_3227_ = v___x_3175_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3228_, 1, v_err_3223_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
else
{
lean_object* v___x_3229_; 
lean_dec(v_err_3223_);
lean_del_object(v___x_3175_);
lean_dec_ref(v_a_3170_);
v___x_3229_ = lean_box(0);
v___y_3211_ = v___y_3220_;
v_pos_3212_ = v_pos_3222_;
v_res_3213_ = v___x_3229_;
goto v___jp_3210_;
}
}
v___jp_3230_:
{
lean_object* v___x_3235_; uint8_t v___x_3236_; 
v___x_3235_ = lean_byte_array_size(v_array_3232_);
v___x_3236_ = lean_nat_dec_lt(v_idx_3233_, v___x_3235_);
if (v___x_3236_ == 0)
{
lean_object* v___x_3237_; 
lean_dec_ref(v_array_3232_);
lean_del_object(v___x_3208_);
lean_dec_ref(v_config_3169_);
v___x_3237_ = lean_box(0);
v___y_3220_ = v_res_3234_;
v_idx_3221_ = v_idx_3233_;
v_pos_3222_ = v_pos_3231_;
v_err_3223_ = v___x_3237_;
goto v___jp_3219_;
}
else
{
uint8_t v___x_3238_; uint8_t v_got_3239_; uint8_t v___x_3240_; 
v___x_3238_ = 35;
v_got_3239_ = lean_byte_array_fget(v_array_3232_, v_idx_3233_);
v___x_3240_ = lean_uint8_dec_eq(v_got_3239_, v___x_3238_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; 
lean_dec_ref(v_array_3232_);
lean_del_object(v___x_3208_);
lean_dec_ref(v_config_3169_);
v___x_3241_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3220_ = v_res_3234_;
v_idx_3221_ = v_idx_3233_;
v_pos_3222_ = v_pos_3231_;
v_err_3223_ = v___x_3241_;
goto v___jp_3219_;
}
else
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
lean_dec_ref(v_pos_3231_);
v___x_3242_ = lean_nat_add(v_idx_3233_, v___x_3195_);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 1, v___x_3242_);
lean_ctor_set(v___x_3208_, 0, v_array_3232_);
v___x_3244_ = v___x_3208_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_array_3232_);
lean_ctor_set(v_reuseFailAlloc_3251_, 1, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
lean_object* v___x_3245_; 
v___x_3245_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3169_, v___x_3244_);
lean_dec_ref(v_config_3169_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_pos_3246_; lean_object* v_res_3247_; lean_object* v___x_3248_; 
lean_dec(v_idx_3233_);
lean_del_object(v___x_3175_);
lean_dec_ref(v_a_3170_);
v_pos_3246_ = lean_ctor_get(v___x_3245_, 0);
lean_inc(v_pos_3246_);
v_res_3247_ = lean_ctor_get(v___x_3245_, 1);
lean_inc(v_res_3247_);
lean_dec_ref_known(v___x_3245_, 2);
v___x_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3248_, 0, v_res_3247_);
v___y_3211_ = v_res_3234_;
v_pos_3212_ = v_pos_3246_;
v_res_3213_ = v___x_3248_;
goto v___jp_3210_;
}
else
{
lean_object* v_pos_3249_; lean_object* v_err_3250_; 
v_pos_3249_ = lean_ctor_get(v___x_3245_, 0);
lean_inc(v_pos_3249_);
v_err_3250_ = lean_ctor_get(v___x_3245_, 1);
lean_inc(v_err_3250_);
lean_dec_ref_known(v___x_3245_, 2);
v___y_3220_ = v_res_3234_;
v_idx_3221_ = v_idx_3233_;
v_pos_3222_ = v_pos_3249_;
v_err_3223_ = v_err_3250_;
goto v___jp_3219_;
}
}
}
}
}
v___jp_3254_:
{
uint8_t v___x_3259_; 
v___x_3259_ = lean_nat_dec_eq(v_idx_3253_, v_idx_3257_);
lean_dec(v_idx_3253_);
if (v___x_3259_ == 0)
{
lean_object* v___x_3260_; 
lean_dec(v_idx_3257_);
lean_dec_ref(v_array_3256_);
lean_dec_ref(v_pos_3255_);
lean_del_object(v___x_3208_);
lean_dec(v_snd_3206_);
lean_dec(v_fst_3205_);
lean_del_object(v___x_3203_);
lean_del_object(v___x_3175_);
lean_dec(v_res_3173_);
lean_dec_ref(v_config_3169_);
v___x_3260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3260_, 0, v_a_3170_);
lean_ctor_set(v___x_3260_, 1, v_err_3258_);
return v___x_3260_;
}
else
{
lean_object* v___x_3261_; 
lean_dec(v_err_3258_);
v___x_3261_ = lean_box(0);
v_pos_3231_ = v_pos_3255_;
v_array_3232_ = v_array_3256_;
v_idx_3233_ = v_idx_3257_;
v_res_3234_ = v___x_3261_;
goto v___jp_3230_;
}
}
}
}
}
else
{
lean_object* v_err_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
lean_del_object(v___x_3175_);
lean_dec(v_res_3173_);
lean_dec_ref(v_config_3169_);
v_err_3291_ = lean_ctor_get(v___x_3199_, 1);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; 
v_unused_3299_ = lean_ctor_get(v___x_3199_, 0);
lean_dec(v_unused_3299_);
v___x_3293_ = v___x_3199_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_err_3291_);
lean_dec(v___x_3199_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v_a_3170_);
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v_err_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
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
lean_object* v_err_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
lean_dec_ref(v_config_3169_);
v_err_3303_ = lean_ctor_get(v___x_3171_, 1);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3310_ == 0)
{
lean_object* v_unused_3311_; 
v_unused_3311_ = lean_ctor_get(v___x_3171_, 0);
lean_dec(v_unused_3311_);
v___x_3305_ = v___x_3171_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_err_3303_);
lean_dec(v___x_3171_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 0, v_a_3170_);
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v_err_3303_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object* v_config_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_utf8_3314_; lean_object* v___x_3315_; 
v_utf8_3314_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_3313_);
v___x_3315_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_3314_, v_a_3313_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_pos_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3434_; 
v_pos_3316_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3434_ == 0)
{
lean_object* v_unused_3435_; 
v_unused_3435_ = lean_ctor_get(v___x_3315_, 1);
lean_dec(v_unused_3435_);
v___x_3318_ = v___x_3315_;
v_isShared_3319_ = v_isSharedCheck_3434_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_pos_3316_);
lean_dec(v___x_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3434_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; 
v___x_3320_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_3312_, v_pos_3316_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_pos_3321_; lean_object* v_res_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3424_; 
v_pos_3321_ = lean_ctor_get(v___x_3320_, 0);
v_res_3322_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3324_ = v___x_3320_;
v_isShared_3325_ = v_isSharedCheck_3424_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_res_3322_);
lean_inc(v_pos_3321_);
lean_dec(v___x_3320_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3424_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
uint8_t v___x_3326_; lean_object* v___x_3327_; 
v___x_3326_ = 1;
lean_inc_ref(v_config_3312_);
v___x_3327_ = l_Std_Http_URI_Parser_parsePath(v_config_3312_, v___x_3326_, v___x_3326_, v_pos_3321_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_pos_3328_; lean_object* v_res_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3414_; 
v_pos_3328_ = lean_ctor_get(v___x_3327_, 0);
v_res_3329_ = lean_ctor_get(v___x_3327_, 1);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3331_ = v___x_3327_;
v_isShared_3332_ = v_isSharedCheck_3414_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_res_3329_);
lean_inc(v_pos_3328_);
lean_dec(v___x_3327_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3414_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___y_3334_; lean_object* v_pos_3335_; lean_object* v_res_3336_; lean_object* v___y_3343_; lean_object* v_idx_3344_; lean_object* v_pos_3345_; lean_object* v_err_3346_; lean_object* v_pos_3354_; lean_object* v_array_3355_; lean_object* v_idx_3356_; lean_object* v_res_3357_; lean_object* v_array_3374_; lean_object* v_idx_3375_; lean_object* v_pos_3377_; lean_object* v_array_3378_; lean_object* v_idx_3379_; lean_object* v_err_3380_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v_array_3374_ = lean_ctor_get(v_pos_3328_, 0);
lean_inc_ref(v_array_3374_);
v_idx_3375_ = lean_ctor_get(v_pos_3328_, 1);
lean_inc(v_idx_3375_);
v___x_3386_ = lean_byte_array_size(v_array_3374_);
v___x_3387_ = lean_nat_dec_lt(v_idx_3375_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_box(0);
lean_inc(v_idx_3375_);
v_pos_3377_ = v_pos_3328_;
v_array_3378_ = v_array_3374_;
v_idx_3379_ = v_idx_3375_;
v_err_3380_ = v___x_3388_;
goto v___jp_3376_;
}
else
{
uint8_t v___x_3389_; uint8_t v_got_3390_; uint8_t v___x_3391_; 
v___x_3389_ = 63;
v_got_3390_ = lean_byte_array_fget(v_array_3374_, v_idx_3375_);
v___x_3391_ = lean_uint8_dec_eq(v_got_3390_, v___x_3389_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; 
v___x_3392_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3375_);
v_pos_3377_ = v_pos_3328_;
v_array_3378_ = v_array_3374_;
v_idx_3379_ = v_idx_3375_;
v_err_3380_ = v___x_3392_;
goto v___jp_3376_;
}
else
{
lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3411_; 
v_isSharedCheck_3411_ = !lean_is_exclusive(v_pos_3328_);
if (v_isSharedCheck_3411_ == 0)
{
lean_object* v_unused_3412_; lean_object* v_unused_3413_; 
v_unused_3412_ = lean_ctor_get(v_pos_3328_, 1);
lean_dec(v_unused_3412_);
v_unused_3413_ = lean_ctor_get(v_pos_3328_, 0);
lean_dec(v_unused_3413_);
v___x_3394_ = v_pos_3328_;
v_isShared_3395_ = v_isSharedCheck_3411_;
goto v_resetjp_3393_;
}
else
{
lean_dec(v_pos_3328_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3411_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3399_; 
v___x_3396_ = lean_unsigned_to_nat(1u);
v___x_3397_ = lean_nat_add(v_idx_3375_, v___x_3396_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 1, v___x_3397_);
v___x_3399_ = v___x_3394_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_array_3374_);
lean_ctor_set(v_reuseFailAlloc_3410_, 1, v___x_3397_);
v___x_3399_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
lean_object* v___x_3400_; 
lean_inc_ref(v_config_3312_);
v___x_3400_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3312_, v___x_3399_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_pos_3401_; lean_object* v_res_3402_; lean_object* v_array_3403_; lean_object* v_idx_3404_; lean_object* v___x_3405_; 
lean_dec(v_idx_3375_);
lean_del_object(v___x_3318_);
v_pos_3401_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_pos_3401_);
v_res_3402_ = lean_ctor_get(v___x_3400_, 1);
lean_inc(v_res_3402_);
lean_dec_ref_known(v___x_3400_, 2);
v_array_3403_ = lean_ctor_get(v_pos_3401_, 0);
lean_inc_ref(v_array_3403_);
v_idx_3404_ = lean_ctor_get(v_pos_3401_, 1);
lean_inc(v_idx_3404_);
v___x_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3405_, 0, v_res_3402_);
v_pos_3354_ = v_pos_3401_;
v_array_3355_ = v_array_3403_;
v_idx_3356_ = v_idx_3404_;
v_res_3357_ = v___x_3405_;
goto v___jp_3353_;
}
else
{
lean_object* v_pos_3406_; lean_object* v_err_3407_; lean_object* v_array_3408_; lean_object* v_idx_3409_; 
v_pos_3406_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_pos_3406_);
v_err_3407_ = lean_ctor_get(v___x_3400_, 1);
lean_inc(v_err_3407_);
lean_dec_ref_known(v___x_3400_, 2);
v_array_3408_ = lean_ctor_get(v_pos_3406_, 0);
lean_inc_ref(v_array_3408_);
v_idx_3409_ = lean_ctor_get(v_pos_3406_, 1);
lean_inc(v_idx_3409_);
v_pos_3377_ = v_pos_3406_;
v_array_3378_ = v_array_3408_;
v_idx_3379_ = v_idx_3409_;
v_err_3380_ = v_err_3407_;
goto v___jp_3376_;
}
}
}
}
}
v___jp_3333_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3340_; 
v___x_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3337_, 0, v_res_3322_);
v___x_3338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
lean_ctor_set(v___x_3338_, 1, v_res_3329_);
lean_ctor_set(v___x_3338_, 2, v___y_3334_);
lean_ctor_set(v___x_3338_, 3, v_res_3336_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 1, v___x_3338_);
lean_ctor_set(v___x_3331_, 0, v_pos_3335_);
v___x_3340_ = v___x_3331_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_pos_3335_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v___x_3338_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
v___jp_3342_:
{
lean_object* v_idx_3347_; uint8_t v___x_3348_; 
v_idx_3347_ = lean_ctor_get(v_pos_3345_, 1);
v___x_3348_ = lean_nat_dec_eq(v_idx_3344_, v_idx_3347_);
lean_dec(v_idx_3344_);
if (v___x_3348_ == 0)
{
lean_object* v___x_3350_; 
lean_dec_ref(v_pos_3345_);
lean_dec(v___y_3343_);
lean_del_object(v___x_3331_);
lean_dec(v_res_3329_);
lean_dec(v_res_3322_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 1);
lean_ctor_set(v___x_3324_, 1, v_err_3346_);
lean_ctor_set(v___x_3324_, 0, v_a_3313_);
v___x_3350_ = v___x_3324_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v_err_3346_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
else
{
lean_object* v___x_3352_; 
lean_dec(v_err_3346_);
lean_del_object(v___x_3324_);
lean_dec_ref(v_a_3313_);
v___x_3352_ = lean_box(0);
v___y_3334_ = v___y_3343_;
v_pos_3335_ = v_pos_3345_;
v_res_3336_ = v___x_3352_;
goto v___jp_3333_;
}
}
v___jp_3353_:
{
lean_object* v___x_3358_; uint8_t v___x_3359_; 
v___x_3358_ = lean_byte_array_size(v_array_3355_);
v___x_3359_ = lean_nat_dec_lt(v_idx_3356_, v___x_3358_);
if (v___x_3359_ == 0)
{
lean_object* v___x_3360_; 
lean_dec_ref(v_array_3355_);
lean_dec_ref(v_config_3312_);
v___x_3360_ = lean_box(0);
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3354_;
v_err_3346_ = v___x_3360_;
goto v___jp_3342_;
}
else
{
uint8_t v___x_3361_; uint8_t v_got_3362_; uint8_t v___x_3363_; 
v___x_3361_ = 35;
v_got_3362_ = lean_byte_array_fget(v_array_3355_, v_idx_3356_);
v___x_3363_ = lean_uint8_dec_eq(v_got_3362_, v___x_3361_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_dec_ref(v_array_3355_);
lean_dec_ref(v_config_3312_);
v___x_3364_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3354_;
v_err_3346_ = v___x_3364_;
goto v___jp_3342_;
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec_ref(v_pos_3354_);
v___x_3365_ = lean_unsigned_to_nat(1u);
v___x_3366_ = lean_nat_add(v_idx_3356_, v___x_3365_);
v___x_3367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3367_, 0, v_array_3355_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
v___x_3368_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3312_, v___x_3367_);
lean_dec_ref(v_config_3312_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_pos_3369_; lean_object* v_res_3370_; lean_object* v___x_3371_; 
lean_dec(v_idx_3356_);
lean_del_object(v___x_3324_);
lean_dec_ref(v_a_3313_);
v_pos_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_pos_3369_);
v_res_3370_ = lean_ctor_get(v___x_3368_, 1);
lean_inc(v_res_3370_);
lean_dec_ref_known(v___x_3368_, 2);
v___x_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_res_3370_);
v___y_3334_ = v_res_3357_;
v_pos_3335_ = v_pos_3369_;
v_res_3336_ = v___x_3371_;
goto v___jp_3333_;
}
else
{
lean_object* v_pos_3372_; lean_object* v_err_3373_; 
v_pos_3372_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_pos_3372_);
v_err_3373_ = lean_ctor_get(v___x_3368_, 1);
lean_inc(v_err_3373_);
lean_dec_ref_known(v___x_3368_, 2);
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3372_;
v_err_3346_ = v_err_3373_;
goto v___jp_3342_;
}
}
}
}
v___jp_3376_:
{
uint8_t v___x_3381_; 
v___x_3381_ = lean_nat_dec_eq(v_idx_3375_, v_idx_3379_);
lean_dec(v_idx_3375_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3383_; 
lean_dec(v_idx_3379_);
lean_dec_ref(v_array_3378_);
lean_dec_ref(v_pos_3377_);
lean_del_object(v___x_3331_);
lean_dec(v_res_3329_);
lean_del_object(v___x_3324_);
lean_dec(v_res_3322_);
lean_dec_ref(v_config_3312_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 1);
lean_ctor_set(v___x_3318_, 1, v_err_3380_);
lean_ctor_set(v___x_3318_, 0, v_a_3313_);
v___x_3383_ = v___x_3318_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_err_3380_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
else
{
lean_object* v___x_3385_; 
lean_dec(v_err_3380_);
lean_del_object(v___x_3318_);
v___x_3385_ = lean_box(0);
v_pos_3354_ = v_pos_3377_;
v_array_3355_ = v_array_3378_;
v_idx_3356_ = v_idx_3379_;
v_res_3357_ = v___x_3385_;
goto v___jp_3353_;
}
}
}
}
else
{
lean_object* v_err_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_del_object(v___x_3324_);
lean_dec(v_res_3322_);
lean_del_object(v___x_3318_);
lean_dec_ref(v_config_3312_);
v_err_3415_ = lean_ctor_get(v___x_3327_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3422_ == 0)
{
lean_object* v_unused_3423_; 
v_unused_3423_ = lean_ctor_get(v___x_3327_, 0);
lean_dec(v_unused_3423_);
v___x_3417_ = v___x_3327_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_err_3415_);
lean_dec(v___x_3327_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 0, v_a_3313_);
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3421_, 1, v_err_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
else
{
lean_object* v_err_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_del_object(v___x_3318_);
lean_dec_ref(v_config_3312_);
v_err_3425_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3432_ == 0)
{
lean_object* v_unused_3433_; 
v_unused_3433_ = lean_ctor_get(v___x_3320_, 0);
lean_dec(v_unused_3433_);
v___x_3427_ = v___x_3320_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_err_3425_);
lean_dec(v___x_3320_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 0, v_a_3313_);
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v_err_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
else
{
lean_object* v_err_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
lean_dec_ref(v_config_3312_);
v_err_3436_ = lean_ctor_get(v___x_3315_, 1);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3443_ == 0)
{
lean_object* v_unused_3444_; 
v_unused_3444_ = lean_ctor_get(v___x_3315_, 0);
lean_dec(v_unused_3444_);
v___x_3438_ = v___x_3315_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_err_3436_);
lean_dec(v___x_3315_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 0, v_a_3313_);
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3442_, 1, v_err_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object* v_config_3445_, lean_object* v_a_3446_){
_start:
{
uint8_t v___x_3447_; uint8_t v___x_3448_; lean_object* v___x_3449_; 
v___x_3447_ = 0;
v___x_3448_ = 1;
lean_inc_ref(v_config_3445_);
v___x_3449_ = l_Std_Http_URI_Parser_parsePath(v_config_3445_, v___x_3447_, v___x_3448_, v_a_3446_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_pos_3450_; lean_object* v_res_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3532_; 
v_pos_3450_ = lean_ctor_get(v___x_3449_, 0);
v_res_3451_ = lean_ctor_get(v___x_3449_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3453_ = v___x_3449_;
v_isShared_3454_ = v_isSharedCheck_3532_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_res_3451_);
lean_inc(v_pos_3450_);
lean_dec(v___x_3449_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3532_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___y_3456_; lean_object* v_pos_3457_; lean_object* v_res_3458_; lean_object* v_idx_3465_; lean_object* v___y_3466_; lean_object* v_pos_3467_; lean_object* v_err_3468_; lean_object* v_pos_3474_; lean_object* v_array_3475_; lean_object* v_idx_3476_; lean_object* v_res_3477_; lean_object* v_array_3494_; lean_object* v_idx_3495_; lean_object* v_pos_3497_; lean_object* v_array_3498_; lean_object* v_idx_3499_; lean_object* v_err_3500_; lean_object* v___x_3504_; uint8_t v___x_3505_; 
v_array_3494_ = lean_ctor_get(v_pos_3450_, 0);
lean_inc_ref(v_array_3494_);
v_idx_3495_ = lean_ctor_get(v_pos_3450_, 1);
lean_inc(v_idx_3495_);
v___x_3504_ = lean_byte_array_size(v_array_3494_);
v___x_3505_ = lean_nat_dec_lt(v_idx_3495_, v___x_3504_);
if (v___x_3505_ == 0)
{
lean_object* v___x_3506_; 
v___x_3506_ = lean_box(0);
lean_inc(v_idx_3495_);
v_pos_3497_ = v_pos_3450_;
v_array_3498_ = v_array_3494_;
v_idx_3499_ = v_idx_3495_;
v_err_3500_ = v___x_3506_;
goto v___jp_3496_;
}
else
{
uint8_t v___x_3507_; uint8_t v_got_3508_; uint8_t v___x_3509_; 
v___x_3507_ = 63;
v_got_3508_ = lean_byte_array_fget(v_array_3494_, v_idx_3495_);
v___x_3509_ = lean_uint8_dec_eq(v_got_3508_, v___x_3507_);
if (v___x_3509_ == 0)
{
lean_object* v___x_3510_; 
v___x_3510_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3495_);
v_pos_3497_ = v_pos_3450_;
v_array_3498_ = v_array_3494_;
v_idx_3499_ = v_idx_3495_;
v_err_3500_ = v___x_3510_;
goto v___jp_3496_;
}
else
{
lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3529_; 
v_isSharedCheck_3529_ = !lean_is_exclusive(v_pos_3450_);
if (v_isSharedCheck_3529_ == 0)
{
lean_object* v_unused_3530_; lean_object* v_unused_3531_; 
v_unused_3530_ = lean_ctor_get(v_pos_3450_, 1);
lean_dec(v_unused_3530_);
v_unused_3531_ = lean_ctor_get(v_pos_3450_, 0);
lean_dec(v_unused_3531_);
v___x_3512_ = v_pos_3450_;
v_isShared_3513_ = v_isSharedCheck_3529_;
goto v_resetjp_3511_;
}
else
{
lean_dec(v_pos_3450_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3529_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3514_ = lean_unsigned_to_nat(1u);
v___x_3515_ = lean_nat_add(v_idx_3495_, v___x_3514_);
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 1, v___x_3515_);
v___x_3517_ = v___x_3512_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_array_3494_);
lean_ctor_set(v_reuseFailAlloc_3528_, 1, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
lean_object* v___x_3518_; 
lean_inc_ref(v_config_3445_);
v___x_3518_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3445_, v___x_3517_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_pos_3519_; lean_object* v_res_3520_; lean_object* v_array_3521_; lean_object* v_idx_3522_; lean_object* v___x_3523_; 
lean_dec(v_idx_3495_);
v_pos_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_pos_3519_);
v_res_3520_ = lean_ctor_get(v___x_3518_, 1);
lean_inc(v_res_3520_);
lean_dec_ref_known(v___x_3518_, 2);
v_array_3521_ = lean_ctor_get(v_pos_3519_, 0);
lean_inc_ref(v_array_3521_);
v_idx_3522_ = lean_ctor_get(v_pos_3519_, 1);
lean_inc(v_idx_3522_);
v___x_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3523_, 0, v_res_3520_);
v_pos_3474_ = v_pos_3519_;
v_array_3475_ = v_array_3521_;
v_idx_3476_ = v_idx_3522_;
v_res_3477_ = v___x_3523_;
goto v___jp_3473_;
}
else
{
lean_object* v_pos_3524_; lean_object* v_err_3525_; lean_object* v_array_3526_; lean_object* v_idx_3527_; 
v_pos_3524_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_pos_3524_);
v_err_3525_ = lean_ctor_get(v___x_3518_, 1);
lean_inc(v_err_3525_);
lean_dec_ref_known(v___x_3518_, 2);
v_array_3526_ = lean_ctor_get(v_pos_3524_, 0);
lean_inc_ref(v_array_3526_);
v_idx_3527_ = lean_ctor_get(v_pos_3524_, 1);
lean_inc(v_idx_3527_);
v_pos_3497_ = v_pos_3524_;
v_array_3498_ = v_array_3526_;
v_idx_3499_ = v_idx_3527_;
v_err_3500_ = v_err_3525_;
goto v___jp_3496_;
}
}
}
}
}
v___jp_3455_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3459_ = lean_box(0);
v___x_3460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
lean_ctor_set(v___x_3460_, 1, v_res_3451_);
lean_ctor_set(v___x_3460_, 2, v___y_3456_);
lean_ctor_set(v___x_3460_, 3, v_res_3458_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 1, v___x_3460_);
lean_ctor_set(v___x_3453_, 0, v_pos_3457_);
v___x_3462_ = v___x_3453_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_pos_3457_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
v___jp_3464_:
{
lean_object* v_idx_3469_; uint8_t v___x_3470_; 
v_idx_3469_ = lean_ctor_get(v_pos_3467_, 1);
v___x_3470_ = lean_nat_dec_eq(v_idx_3465_, v_idx_3469_);
lean_dec(v_idx_3465_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3471_; 
lean_dec(v___y_3466_);
lean_del_object(v___x_3453_);
lean_dec(v_res_3451_);
v___x_3471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3471_, 0, v_pos_3467_);
lean_ctor_set(v___x_3471_, 1, v_err_3468_);
return v___x_3471_;
}
else
{
lean_object* v___x_3472_; 
lean_dec(v_err_3468_);
v___x_3472_ = lean_box(0);
v___y_3456_ = v___y_3466_;
v_pos_3457_ = v_pos_3467_;
v_res_3458_ = v___x_3472_;
goto v___jp_3455_;
}
}
v___jp_3473_:
{
lean_object* v___x_3478_; uint8_t v___x_3479_; 
v___x_3478_ = lean_byte_array_size(v_array_3475_);
v___x_3479_ = lean_nat_dec_lt(v_idx_3476_, v___x_3478_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; 
lean_dec_ref(v_array_3475_);
lean_dec_ref(v_config_3445_);
v___x_3480_ = lean_box(0);
v_idx_3465_ = v_idx_3476_;
v___y_3466_ = v_res_3477_;
v_pos_3467_ = v_pos_3474_;
v_err_3468_ = v___x_3480_;
goto v___jp_3464_;
}
else
{
uint8_t v___x_3481_; uint8_t v_got_3482_; uint8_t v___x_3483_; 
v___x_3481_ = 35;
v_got_3482_ = lean_byte_array_fget(v_array_3475_, v_idx_3476_);
v___x_3483_ = lean_uint8_dec_eq(v_got_3482_, v___x_3481_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3484_; 
lean_dec_ref(v_array_3475_);
lean_dec_ref(v_config_3445_);
v___x_3484_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_3465_ = v_idx_3476_;
v___y_3466_ = v_res_3477_;
v_pos_3467_ = v_pos_3474_;
v_err_3468_ = v___x_3484_;
goto v___jp_3464_;
}
else
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
lean_dec_ref(v_pos_3474_);
v___x_3485_ = lean_unsigned_to_nat(1u);
v___x_3486_ = lean_nat_add(v_idx_3476_, v___x_3485_);
v___x_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3487_, 0, v_array_3475_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3445_, v___x_3487_);
lean_dec_ref(v_config_3445_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_pos_3489_; lean_object* v_res_3490_; lean_object* v___x_3491_; 
lean_dec(v_idx_3476_);
v_pos_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_pos_3489_);
v_res_3490_ = lean_ctor_get(v___x_3488_, 1);
lean_inc(v_res_3490_);
lean_dec_ref_known(v___x_3488_, 2);
v___x_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3491_, 0, v_res_3490_);
v___y_3456_ = v_res_3477_;
v_pos_3457_ = v_pos_3489_;
v_res_3458_ = v___x_3491_;
goto v___jp_3455_;
}
else
{
lean_object* v_pos_3492_; lean_object* v_err_3493_; 
v_pos_3492_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_pos_3492_);
v_err_3493_ = lean_ctor_get(v___x_3488_, 1);
lean_inc(v_err_3493_);
lean_dec_ref_known(v___x_3488_, 2);
v_idx_3465_ = v_idx_3476_;
v___y_3466_ = v_res_3477_;
v_pos_3467_ = v_pos_3492_;
v_err_3468_ = v_err_3493_;
goto v___jp_3464_;
}
}
}
}
v___jp_3496_:
{
uint8_t v___x_3501_; 
v___x_3501_ = lean_nat_dec_eq(v_idx_3495_, v_idx_3499_);
lean_dec(v_idx_3495_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; 
lean_dec(v_idx_3499_);
lean_dec_ref(v_array_3498_);
lean_del_object(v___x_3453_);
lean_dec(v_res_3451_);
lean_dec_ref(v_config_3445_);
v___x_3502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3502_, 0, v_pos_3497_);
lean_ctor_set(v___x_3502_, 1, v_err_3500_);
return v___x_3502_;
}
else
{
lean_object* v___x_3503_; 
lean_dec(v_err_3500_);
v___x_3503_ = lean_box(0);
v_pos_3474_ = v_pos_3497_;
v_array_3475_ = v_array_3498_;
v_idx_3476_ = v_idx_3499_;
v_res_3477_ = v___x_3503_;
goto v___jp_3473_;
}
}
}
}
else
{
lean_object* v_pos_3533_; lean_object* v_err_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
lean_dec_ref(v_config_3445_);
v_pos_3533_ = lean_ctor_get(v___x_3449_, 0);
v_err_3534_ = lean_ctor_get(v___x_3449_, 1);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3449_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_err_3534_);
lean_inc(v_pos_3533_);
lean_dec(v___x_3449_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_pos_3533_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v_err_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(lean_object* v_config_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_pos_3545_; lean_object* v_res_3546_; lean_object* v___x_3549_; 
lean_inc_ref(v_a_3543_);
lean_inc_ref(v_config_3542_);
v___x_3549_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(v_config_3542_, v_a_3543_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_pos_3550_; lean_object* v_res_3551_; 
lean_dec_ref(v_a_3543_);
lean_dec_ref(v_config_3542_);
v_pos_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_pos_3550_);
v_res_3551_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_res_3551_);
lean_dec_ref_known(v___x_3549_, 2);
v_pos_3545_ = v_pos_3550_;
v_res_3546_ = v_res_3551_;
goto v___jp_3544_;
}
else
{
lean_object* v_pos_3552_; lean_object* v_err_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3575_; 
v_pos_3552_ = lean_ctor_get(v___x_3549_, 0);
v_err_3553_ = lean_ctor_get(v___x_3549_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3555_ = v___x_3549_;
v_isShared_3556_ = v_isSharedCheck_3575_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_err_3553_);
lean_inc(v_pos_3552_);
lean_dec(v___x_3549_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3575_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v_idx_3557_; lean_object* v_idx_3558_; uint8_t v___x_3559_; 
v_idx_3557_ = lean_ctor_get(v_a_3543_, 1);
lean_inc(v_idx_3557_);
lean_dec_ref(v_a_3543_);
v_idx_3558_ = lean_ctor_get(v_pos_3552_, 1);
v___x_3559_ = lean_nat_dec_eq(v_idx_3557_, v_idx_3558_);
lean_dec(v_idx_3557_);
if (v___x_3559_ == 0)
{
lean_object* v___x_3561_; 
lean_dec_ref(v_config_3542_);
if (v_isShared_3556_ == 0)
{
v___x_3561_ = v___x_3555_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_pos_3552_);
lean_ctor_set(v_reuseFailAlloc_3562_, 1, v_err_3553_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
else
{
lean_object* v___x_3563_; 
lean_del_object(v___x_3555_);
lean_dec(v_err_3553_);
v___x_3563_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(v_config_3542_, v_pos_3552_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_pos_3564_; lean_object* v_res_3565_; 
v_pos_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_pos_3564_);
v_res_3565_ = lean_ctor_get(v___x_3563_, 1);
lean_inc(v_res_3565_);
lean_dec_ref_known(v___x_3563_, 2);
v_pos_3545_ = v_pos_3564_;
v_res_3546_ = v_res_3565_;
goto v___jp_3544_;
}
else
{
lean_object* v_pos_3566_; lean_object* v_err_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_pos_3566_ = lean_ctor_get(v___x_3563_, 0);
v_err_3567_ = lean_ctor_get(v___x_3563_, 1);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3563_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_err_3567_);
lean_inc(v_pos_3566_);
lean_dec(v___x_3563_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_pos_3566_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v_err_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
}
}
v___jp_3544_:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3547_, 0, v_res_3546_);
v___x_3548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3548_, 0, v_pos_3545_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
return v___x_3548_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object* v_config_3576_, lean_object* v_a_3577_){
_start:
{
lean_object* v___x_3578_; 
lean_inc_ref(v_a_3577_);
lean_inc_ref(v_config_3576_);
v___x_3578_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(v_config_3576_, v_a_3577_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_dec_ref(v_a_3577_);
lean_dec_ref(v_config_3576_);
return v___x_3578_;
}
else
{
lean_object* v_err_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3589_; 
v_err_3579_ = lean_ctor_get(v___x_3578_, 1);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; 
v_unused_3590_ = lean_ctor_get(v___x_3578_, 0);
lean_dec(v_unused_3590_);
v___x_3581_ = v___x_3578_;
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_err_3579_);
lean_dec(v___x_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v_idx_3583_; uint8_t v___x_3584_; 
v_idx_3583_ = lean_ctor_get(v_a_3577_, 1);
v___x_3584_ = lean_nat_dec_eq(v_idx_3583_, v_idx_3583_);
if (v___x_3584_ == 0)
{
lean_object* v___x_3586_; 
lean_dec_ref(v_config_3576_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v_a_3577_);
v___x_3586_ = v___x_3581_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3577_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v_err_3579_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
else
{
lean_object* v___x_3588_; 
lean_del_object(v___x_3581_);
lean_dec(v_err_3579_);
v___x_3588_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(v_config_3576_, v_a_3577_);
return v___x_3588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object* v_config_3597_, lean_object* v_a_3598_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3597_, v_a_3598_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_pos_3600_; lean_object* v_res_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3673_; 
v_pos_3600_ = lean_ctor_get(v___x_3599_, 0);
v_res_3601_ = lean_ctor_get(v___x_3599_, 1);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3603_ = v___x_3599_;
v_isShared_3604_ = v_isSharedCheck_3673_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_res_3601_);
lean_inc(v_pos_3600_);
lean_dec(v___x_3599_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3673_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v_port_3606_; lean_object* v___y_3607_; lean_object* v_pos_3621_; lean_object* v_pos_3624_; lean_object* v_array_3625_; lean_object* v_idx_3626_; lean_object* v_array_3632_; lean_object* v_idx_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v_array_3632_ = lean_ctor_get(v_pos_3600_, 0);
v_idx_3633_ = lean_ctor_get(v_pos_3600_, 1);
v___x_3634_ = lean_byte_array_size(v_array_3632_);
v___x_3635_ = lean_nat_dec_lt(v_idx_3633_, v___x_3634_);
if (v___x_3635_ == 0)
{
v_pos_3621_ = v_pos_3600_;
goto v___jp_3620_;
}
else
{
uint8_t v___x_3636_; uint8_t v___x_3637_; uint8_t v___x_3638_; 
v___x_3636_ = lean_byte_array_fget(v_array_3632_, v_idx_3633_);
v___x_3637_ = 58;
v___x_3638_ = lean_uint8_dec_eq(v___x_3636_, v___x_3637_);
if (v___x_3638_ == 0)
{
v_pos_3621_ = v_pos_3600_;
goto v___jp_3620_;
}
else
{
uint8_t v___x_3639_; 
v___x_3639_ = lean_uint8_dec_eq(v___x_3636_, v___x_3637_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
lean_del_object(v___x_3603_);
lean_dec(v_res_3601_);
v___x_3640_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_3641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3641_, 0, v_pos_3600_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
return v___x_3641_;
}
else
{
lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3670_; 
lean_inc(v_idx_3633_);
lean_inc_ref(v_array_3632_);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_pos_3600_);
if (v_isSharedCheck_3670_ == 0)
{
lean_object* v_unused_3671_; lean_object* v_unused_3672_; 
v_unused_3671_ = lean_ctor_get(v_pos_3600_, 1);
lean_dec(v_unused_3671_);
v_unused_3672_ = lean_ctor_get(v_pos_3600_, 0);
lean_dec(v_unused_3672_);
v___x_3643_ = v_pos_3600_;
v_isShared_3644_ = v_isSharedCheck_3670_;
goto v_resetjp_3642_;
}
else
{
lean_dec(v_pos_3600_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3670_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3648_; 
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = lean_nat_add(v_idx_3633_, v___x_3645_);
lean_dec(v_idx_3633_);
lean_inc(v___x_3646_);
lean_inc_ref(v_array_3632_);
if (v_isShared_3644_ == 0)
{
lean_ctor_set(v___x_3643_, 1, v___x_3646_);
v___x_3648_ = v___x_3643_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_array_3632_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v___x_3646_);
v___x_3648_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
uint8_t v___x_3649_; 
v___x_3649_ = lean_nat_dec_lt(v___x_3646_, v___x_3634_);
if (v___x_3649_ == 0)
{
v_pos_3624_ = v___x_3648_;
v_array_3625_ = v_array_3632_;
v_idx_3626_ = v___x_3646_;
goto v___jp_3623_;
}
else
{
uint8_t v___x_3650_; uint8_t v___x_3651_; uint8_t v___x_3652_; 
v___x_3650_ = lean_byte_array_fget(v_array_3632_, v___x_3646_);
v___x_3651_ = 48;
v___x_3652_ = lean_uint8_dec_le(v___x_3651_, v___x_3650_);
if (v___x_3652_ == 0)
{
v_pos_3624_ = v___x_3648_;
v_array_3625_ = v_array_3632_;
v_idx_3626_ = v___x_3646_;
goto v___jp_3623_;
}
else
{
uint8_t v___x_3653_; uint8_t v___x_3654_; 
v___x_3653_ = 57;
v___x_3654_ = lean_uint8_dec_le(v___x_3650_, v___x_3653_);
if (v___x_3654_ == 0)
{
v_pos_3624_ = v___x_3648_;
v_array_3625_ = v_array_3632_;
v_idx_3626_ = v___x_3646_;
goto v___jp_3623_;
}
else
{
lean_object* v___x_3655_; 
lean_dec(v___x_3646_);
lean_dec_ref(v_array_3632_);
v___x_3655_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3648_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_pos_3656_; lean_object* v_res_3657_; lean_object* v___x_3658_; uint16_t v___x_3659_; 
v_pos_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_pos_3656_);
v_res_3657_ = lean_ctor_get(v___x_3655_, 1);
lean_inc(v_res_3657_);
lean_dec_ref_known(v___x_3655_, 2);
v___x_3658_ = lean_alloc_ctor(2, 0, 2);
v___x_3659_ = lean_unbox(v_res_3657_);
lean_dec(v_res_3657_);
lean_ctor_set_uint16(v___x_3658_, 0, v___x_3659_);
v_port_3606_ = v___x_3658_;
v___y_3607_ = v_pos_3656_;
goto v___jp_3605_;
}
else
{
lean_object* v_pos_3660_; lean_object* v_err_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
lean_del_object(v___x_3603_);
lean_dec(v_res_3601_);
v_pos_3660_ = lean_ctor_get(v___x_3655_, 0);
v_err_3661_ = lean_ctor_get(v___x_3655_, 1);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3655_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_err_3661_);
lean_inc(v_pos_3660_);
lean_dec(v___x_3655_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_pos_3660_);
lean_ctor_set(v_reuseFailAlloc_3667_, 1, v_err_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
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
v___jp_3605_:
{
lean_object* v_array_3608_; lean_object* v_idx_3609_; lean_object* v___x_3610_; uint8_t v___x_3611_; 
v_array_3608_ = lean_ctor_get(v___y_3607_, 0);
v_idx_3609_ = lean_ctor_get(v___y_3607_, 1);
v___x_3610_ = lean_byte_array_size(v_array_3608_);
v___x_3611_ = lean_nat_dec_lt(v_idx_3609_, v___x_3610_);
if (v___x_3611_ == 0)
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3612_, 0, v_res_3601_);
lean_ctor_set(v___x_3612_, 1, v_port_3606_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 1, v___x_3612_);
lean_ctor_set(v___x_3603_, 0, v___y_3607_);
v___x_3614_ = v___x_3603_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___y_3607_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
else
{
lean_object* v___x_3616_; lean_object* v___x_3618_; 
lean_dec(v_port_3606_);
lean_dec(v_res_3601_);
v___x_3616_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__1));
if (v_isShared_3604_ == 0)
{
lean_ctor_set_tag(v___x_3603_, 1);
lean_ctor_set(v___x_3603_, 1, v___x_3616_);
lean_ctor_set(v___x_3603_, 0, v___y_3607_);
v___x_3618_ = v___x_3603_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___y_3607_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
v___jp_3620_:
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_box(0);
v_port_3606_ = v___x_3622_;
v___y_3607_ = v_pos_3621_;
goto v___jp_3605_;
}
v___jp_3623_:
{
lean_object* v___x_3627_; uint8_t v___x_3628_; 
v___x_3627_ = lean_byte_array_size(v_array_3625_);
lean_dec_ref(v_array_3625_);
v___x_3628_ = lean_nat_dec_lt(v_idx_3626_, v___x_3627_);
lean_dec(v_idx_3626_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; 
v___x_3629_ = lean_box(1);
v_port_3606_ = v___x_3629_;
v___y_3607_ = v_pos_3624_;
goto v___jp_3605_;
}
else
{
lean_object* v___x_3630_; lean_object* v___x_3631_; 
lean_del_object(v___x_3603_);
lean_dec(v_res_3601_);
v___x_3630_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__3));
v___x_3631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3631_, 0, v_pos_3624_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
return v___x_3631_;
}
}
}
}
else
{
lean_object* v_pos_3674_; lean_object* v_err_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
v_pos_3674_ = lean_ctor_get(v___x_3599_, 0);
v_err_3675_ = lean_ctor_get(v___x_3599_, 1);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3599_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_err_3675_);
lean_inc(v_pos_3674_);
lean_dec(v___x_3599_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_pos_3674_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v_err_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object* v_config_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Std_Http_URI_Parser_parseHostHeader(v_config_3683_, v_a_3684_);
lean_dec_ref(v_config_3683_);
return v_res_3685_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
