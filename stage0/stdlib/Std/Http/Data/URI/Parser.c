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
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t l_Nat_blt(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv6 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '91'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '93'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value;
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
uint8_t v___y_80_; uint8_t v___y_81_; uint8_t v___y_82_; uint8_t v___y_84_; uint8_t v___x_101_; uint8_t v___x_102_; 
v___x_101_ = 48;
v___x_102_ = lean_uint8_dec_le(v___x_101_, v_c_78_);
if (v___x_102_ == 0)
{
goto v___jp_96_;
}
else
{
uint8_t v___x_103_; uint8_t v___x_104_; 
v___x_103_ = 57;
v___x_104_ = lean_uint8_dec_le(v_c_78_, v___x_103_);
if (v___x_104_ == 0)
{
goto v___jp_96_;
}
else
{
v___y_84_ = v___x_104_;
goto v___jp_83_;
}
}
v___jp_79_:
{
if (v___y_81_ == 0)
{
if (v___y_80_ == 0)
{
return v___y_82_;
}
else
{
return v___y_80_;
}
}
else
{
if (v___y_80_ == 0)
{
return v___y_81_;
}
else
{
return v___y_80_;
}
}
}
v___jp_83_:
{
uint8_t v___x_85_; uint8_t v___x_86_; uint8_t v___x_87_; uint8_t v___x_88_; 
v___x_85_ = 43;
v___x_86_ = lean_uint8_dec_eq(v_c_78_, v___x_85_);
v___x_87_ = 45;
v___x_88_ = lean_uint8_dec_eq(v_c_78_, v___x_87_);
if (v___x_88_ == 0)
{
uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_89_ = 46;
v___x_90_ = lean_uint8_dec_eq(v_c_78_, v___x_89_);
v___y_80_ = v___y_84_;
v___y_81_ = v___x_86_;
v___y_82_ = v___x_90_;
goto v___jp_79_;
}
else
{
v___y_80_ = v___y_84_;
v___y_81_ = v___x_86_;
v___y_82_ = v___x_88_;
goto v___jp_79_;
}
}
v___jp_91_:
{
uint8_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 65;
v___x_93_ = lean_uint8_dec_le(v___x_92_, v_c_78_);
if (v___x_93_ == 0)
{
v___y_84_ = v___x_93_;
goto v___jp_83_;
}
else
{
uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_94_ = 90;
v___x_95_ = lean_uint8_dec_le(v_c_78_, v___x_94_);
v___y_84_ = v___x_95_;
goto v___jp_83_;
}
}
v___jp_96_:
{
uint8_t v___x_97_; uint8_t v___x_98_; 
v___x_97_ = 97;
v___x_98_ = lean_uint8_dec_le(v___x_97_, v_c_78_);
if (v___x_98_ == 0)
{
goto v___jp_91_;
}
else
{
uint8_t v___x_99_; uint8_t v___x_100_; 
v___x_99_ = 122;
v___x_100_ = lean_uint8_dec_le(v_c_78_, v___x_99_);
if (v___x_100_ == 0)
{
goto v___jp_91_;
}
else
{
v___y_84_ = v___x_100_;
goto v___jp_83_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object* v_c_105_){
_start:
{
uint8_t v_c_boxed_106_; uint8_t v_res_107_; lean_object* v_r_108_; 
v_c_boxed_106_ = lean_unbox(v_c_105_);
v_res_107_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(v_c_boxed_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object* v_x_109_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
uint8_t v___x_110_; 
v___x_110_ = 1;
return v___x_110_;
}
else
{
lean_object* v_head_111_; lean_object* v_tail_112_; uint32_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_head_111_ = lean_ctor_get(v_x_109_, 0);
v_tail_112_ = lean_ctor_get(v_x_109_, 1);
v___x_142_ = lean_unbox_uint32(v_head_111_);
v___x_143_ = lean_uint32_to_nat(v___x_142_);
v___x_144_ = lean_unsigned_to_nat(128u);
v___x_145_ = l_Nat_blt(v___x_143_, v___x_144_);
lean_dec(v___x_143_);
if (v___x_145_ == 0)
{
goto v___jp_113_;
}
else
{
uint32_t v___x_146_; uint32_t v___x_147_; uint8_t v___x_148_; 
v___x_146_ = 48;
v___x_147_ = lean_unbox_uint32(v_head_111_);
v___x_148_ = lean_uint32_dec_le(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
goto v___jp_134_;
}
else
{
uint32_t v___x_149_; uint32_t v___x_150_; uint8_t v___x_151_; 
v___x_149_ = 57;
v___x_150_ = lean_unbox_uint32(v_head_111_);
v___x_151_ = lean_uint32_dec_le(v___x_150_, v___x_149_);
if (v___x_151_ == 0)
{
goto v___jp_134_;
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
}
v___jp_113_:
{
uint32_t v___x_114_; uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_114_ = 43;
v___x_115_ = lean_unbox_uint32(v_head_111_);
v___x_116_ = lean_uint32_dec_eq(v___x_115_, v___x_114_);
if (v___x_116_ == 0)
{
uint32_t v___x_117_; uint32_t v___x_118_; uint8_t v___x_119_; 
v___x_117_ = 45;
v___x_118_ = lean_unbox_uint32(v_head_111_);
v___x_119_ = lean_uint32_dec_eq(v___x_118_, v___x_117_);
if (v___x_119_ == 0)
{
uint32_t v___x_120_; uint32_t v___x_121_; uint8_t v___x_122_; 
v___x_120_ = 46;
v___x_121_ = lean_unbox_uint32(v_head_111_);
v___x_122_ = lean_uint32_dec_eq(v___x_121_, v___x_120_);
if (v___x_122_ == 0)
{
return v___x_122_;
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
v___jp_126_:
{
uint32_t v___x_127_; uint32_t v___x_128_; uint8_t v___x_129_; 
v___x_127_ = 97;
v___x_128_ = lean_unbox_uint32(v_head_111_);
v___x_129_ = lean_uint32_dec_le(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
goto v___jp_113_;
}
else
{
uint32_t v___x_130_; uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_130_ = 122;
v___x_131_ = lean_unbox_uint32(v_head_111_);
v___x_132_ = lean_uint32_dec_le(v___x_131_, v___x_130_);
if (v___x_132_ == 0)
{
goto v___jp_113_;
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
}
v___jp_134_:
{
uint32_t v___x_135_; uint32_t v___x_136_; uint8_t v___x_137_; 
v___x_135_ = 65;
v___x_136_ = lean_unbox_uint32(v_head_111_);
v___x_137_ = lean_uint32_dec_le(v___x_135_, v___x_136_);
if (v___x_137_ == 0)
{
goto v___jp_126_;
}
else
{
uint32_t v___x_138_; uint32_t v___x_139_; uint8_t v___x_140_; 
v___x_138_ = 90;
v___x_139_ = lean_unbox_uint32(v_head_111_);
v___x_140_ = lean_uint32_dec_le(v___x_139_, v___x_138_);
if (v___x_140_ == 0)
{
goto v___jp_126_;
}
else
{
v_x_109_ = v_tail_112_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object* v_x_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v_x_153_);
lean_dec(v_x_153_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object* v_s_156_, lean_object* v_p_157_){
_start:
{
lean_object* v___y_159_; lean_object* v___y_160_; uint32_t v___y_164_; lean_object* v___x_176_; uint8_t v_decide_177_; 
v___x_176_ = lean_string_utf8_byte_size(v_s_156_);
v_decide_177_ = lean_nat_dec_eq(v_p_157_, v___x_176_);
if (v_decide_177_ == 0)
{
uint32_t v___x_178_; uint32_t v___x_179_; uint8_t v___x_180_; 
v___x_178_ = lean_string_utf8_get_fast(v_s_156_, v_p_157_);
v___x_179_ = 65;
v___x_180_ = lean_uint32_dec_le(v___x_179_, v___x_178_);
if (v___x_180_ == 0)
{
v___y_164_ = v___x_178_;
goto v___jp_163_;
}
else
{
uint32_t v___x_181_; uint8_t v___x_182_; 
v___x_181_ = 90;
v___x_182_ = lean_uint32_dec_le(v___x_178_, v___x_181_);
if (v___x_182_ == 0)
{
v___y_164_ = v___x_178_;
goto v___jp_163_;
}
else
{
uint32_t v___x_183_; uint32_t v___x_184_; 
v___x_183_ = 32;
v___x_184_ = lean_uint32_add(v___x_178_, v___x_183_);
v___y_164_ = v___x_184_;
goto v___jp_163_;
}
}
}
else
{
lean_dec(v_p_157_);
return v_s_156_;
}
v___jp_158_:
{
lean_object* v___x_161_; 
v___x_161_ = lean_nat_add(v_p_157_, v___y_160_);
lean_dec(v_p_157_);
v_s_156_ = v___y_159_;
v_p_157_ = v___x_161_;
goto _start;
}
v___jp_163_:
{
lean_object* v___x_165_; uint32_t v___x_166_; uint8_t v___x_167_; 
lean_inc(v_p_157_);
v___x_165_ = lean_string_utf8_set(v_s_156_, v_p_157_, v___y_164_);
v___x_166_ = 127;
v___x_167_ = lean_uint32_dec_le(v___y_164_, v___x_166_);
if (v___x_167_ == 0)
{
uint32_t v___x_168_; uint8_t v___x_169_; 
v___x_168_ = 2047;
v___x_169_ = lean_uint32_dec_le(v___y_164_, v___x_168_);
if (v___x_169_ == 0)
{
uint32_t v___x_170_; uint8_t v___x_171_; 
v___x_170_ = 65535;
v___x_171_ = lean_uint32_dec_le(v___y_164_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_unsigned_to_nat(4u);
v___y_159_ = v___x_165_;
v___y_160_ = v___x_172_;
goto v___jp_158_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_unsigned_to_nat(3u);
v___y_159_ = v___x_165_;
v___y_160_ = v___x_173_;
goto v___jp_158_;
}
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_unsigned_to_nat(2u);
v___y_159_ = v___x_165_;
v___y_160_ = v___x_174_;
goto v___jp_158_;
}
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___y_159_ = v___x_165_;
v___y_160_ = v___x_175_;
goto v___jp_158_;
}
}
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_194_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6));
v___x_195_ = lean_unsigned_to_nat(46u);
v___x_196_ = lean_unsigned_to_nat(193u);
v___x_197_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5));
v___x_198_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4));
v___x_199_ = l_mkPanicMessageWithDecl(v___x_198_, v___x_197_, v___x_196_, v___x_195_, v___x_194_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object* v_config_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___y_210_; lean_object* v___y_214_; uint32_t v___y_215_; lean_object* v___y_216_; lean_object* v_maxSchemeLength_222_; lean_object* v___x_223_; lean_object* v___y_225_; lean_object* v___y_226_; uint8_t v___x_242_; lean_object* v___y_244_; uint8_t v___y_245_; lean_object* v___y_246_; lean_object* v_lower_247_; lean_object* v_upper_248_; lean_object* v___y_261_; lean_object* v___y_262_; uint8_t v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; 
v_maxSchemeLength_222_ = lean_ctor_get(v_config_204_, 0);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_nat_dec_eq(v_maxSchemeLength_222_, v___x_223_);
if (v___x_242_ == 0)
{
lean_object* v_array_268_; lean_object* v_idx_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_array_268_ = lean_ctor_get(v_a_205_, 0);
v_idx_269_ = lean_ctor_get(v_a_205_, 1);
v___x_270_ = lean_byte_array_size(v_array_268_);
v___x_271_ = lean_nat_dec_lt(v_idx_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_box(0);
v___x_273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_273_, 0, v_a_205_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
return v___x_273_;
}
else
{
lean_object* v___f_274_; lean_object* v_pos_276_; uint8_t v_res_277_; uint8_t v_c_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v_it_x27_292_; uint8_t v___x_298_; uint8_t v___x_299_; 
v___f_274_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8));
v_c_289_ = lean_byte_array_fget(v_array_268_, v_idx_269_);
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_idx_269_, v___x_290_);
lean_inc_ref(v_array_268_);
v_it_x27_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_292_, 0, v_array_268_);
lean_ctor_set(v_it_x27_292_, 1, v___x_291_);
v___x_298_ = 65;
v___x_299_ = lean_uint8_dec_le(v___x_298_, v_c_289_);
if (v___x_299_ == 0)
{
goto v___jp_293_;
}
else
{
uint8_t v___x_300_; uint8_t v___x_301_; 
v___x_300_ = 90;
v___x_301_ = lean_uint8_dec_le(v_c_289_, v___x_300_);
if (v___x_301_ == 0)
{
goto v___jp_293_;
}
else
{
lean_dec_ref(v_a_205_);
v_pos_276_ = v_it_x27_292_;
v_res_277_ = v_c_289_;
goto v___jp_275_;
}
}
v___jp_275_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_snd_281_; lean_object* v_fst_282_; lean_object* v_fst_283_; lean_object* v_array_284_; lean_object* v_idx_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_nat_sub(v_maxSchemeLength_222_, v___x_278_);
lean_inc_ref(v_pos_276_);
v___x_280_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_274_, v___x_279_, v___x_223_, v_pos_276_);
lean_dec(v___x_279_);
v_snd_281_ = lean_ctor_get(v___x_280_, 1);
lean_inc(v_snd_281_);
v_fst_282_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_fst_282_);
lean_dec_ref(v___x_280_);
v_fst_283_ = lean_ctor_get(v_snd_281_, 0);
lean_inc(v_fst_283_);
lean_dec(v_snd_281_);
v_array_284_ = lean_ctor_get(v_pos_276_, 0);
lean_inc_ref(v_array_284_);
v_idx_285_ = lean_ctor_get(v_pos_276_, 1);
lean_inc(v_idx_285_);
lean_dec_ref(v_pos_276_);
v___x_286_ = lean_nat_add(v_idx_285_, v_fst_282_);
lean_dec(v_fst_282_);
v___x_287_ = lean_byte_array_size(v_array_284_);
v___x_288_ = lean_nat_dec_le(v_idx_285_, v___x_223_);
if (v___x_288_ == 0)
{
v___y_261_ = v_fst_283_;
v___y_262_ = v___x_287_;
v___y_263_ = v_res_277_;
v___y_264_ = v___x_286_;
v___y_265_ = v_array_284_;
v___y_266_ = v_idx_285_;
goto v___jp_260_;
}
else
{
lean_dec(v_idx_285_);
v___y_261_ = v_fst_283_;
v___y_262_ = v___x_287_;
v___y_263_ = v_res_277_;
v___y_264_ = v___x_286_;
v___y_265_ = v_array_284_;
v___y_266_ = v___x_223_;
goto v___jp_260_;
}
}
v___jp_293_:
{
uint8_t v___x_294_; uint8_t v___x_295_; 
v___x_294_ = 97;
v___x_295_ = lean_uint8_dec_le(v___x_294_, v_c_289_);
if (v___x_295_ == 0)
{
lean_dec_ref_known(v_it_x27_292_, 2);
goto v___jp_206_;
}
else
{
uint8_t v___x_296_; uint8_t v___x_297_; 
v___x_296_ = 122;
v___x_297_ = lean_uint8_dec_le(v_c_289_, v___x_296_);
if (v___x_297_ == 0)
{
lean_dec_ref_known(v_it_x27_292_, 2);
goto v___jp_206_;
}
else
{
lean_dec_ref(v_a_205_);
v_pos_276_ = v_it_x27_292_;
v_res_277_ = v_c_289_;
goto v___jp_275_;
}
}
}
}
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10));
v___x_303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_303_, 0, v_a_205_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
return v___x_303_;
}
v___jp_206_:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1));
v___x_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_208_, 0, v_a_205_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
return v___x_208_;
}
v___jp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3));
v___x_212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_212_, 0, v___y_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
return v___x_212_;
}
v___jp_213_:
{
uint32_t v___x_217_; uint8_t v___x_218_; 
v___x_217_ = 97;
v___x_218_ = lean_uint32_dec_le(v___x_217_, v___y_215_);
if (v___x_218_ == 0)
{
lean_dec_ref(v___y_216_);
v___y_210_ = v___y_214_;
goto v___jp_209_;
}
else
{
uint32_t v___x_219_; uint8_t v___x_220_; 
v___x_219_ = 122;
v___x_220_ = lean_uint32_dec_le(v___y_215_, v___x_219_);
if (v___x_220_ == 0)
{
lean_dec_ref(v___y_216_);
v___y_210_ = v___y_214_;
goto v___jp_209_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___y_214_);
lean_ctor_set(v___x_221_, 1, v___y_216_);
return v___x_221_;
}
}
}
v___jp_224_:
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___y_226_, v___x_223_);
lean_inc_ref(v___x_227_);
v___x_228_ = l_Std_Http_Internal_instDecidableIsLowerCase(v___x_227_);
if (v___x_228_ == 0)
{
lean_dec_ref(v___x_227_);
v___y_210_ = v___y_225_;
goto v___jp_209_;
}
else
{
lean_object* v___x_229_; uint8_t v___x_230_; 
lean_inc_ref(v___x_227_);
v___x_229_ = l_String_toListImpl(v___x_227_);
v___x_230_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v___x_229_);
if (v___x_230_ == 0)
{
lean_dec(v___x_229_);
lean_dec_ref(v___x_227_);
v___y_210_ = v___y_225_;
goto v___jp_209_;
}
else
{
lean_object* v___x_231_; 
v___x_231_ = l_List_head_x3f___redArg(v___x_229_);
lean_dec(v___x_229_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_dec_ref(v___x_227_);
v___y_210_ = v___y_225_;
goto v___jp_209_;
}
else
{
lean_object* v_val_232_; uint32_t v___x_233_; uint32_t v___x_234_; uint8_t v___x_235_; 
v_val_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_val_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = 65;
v___x_234_ = lean_unbox_uint32(v_val_232_);
v___x_235_ = lean_uint32_dec_le(v___x_233_, v___x_234_);
if (v___x_235_ == 0)
{
uint32_t v___x_236_; 
v___x_236_ = lean_unbox_uint32(v_val_232_);
lean_dec(v_val_232_);
v___y_214_ = v___y_225_;
v___y_215_ = v___x_236_;
v___y_216_ = v___x_227_;
goto v___jp_213_;
}
else
{
uint32_t v___x_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v___x_237_ = 90;
v___x_238_ = lean_unbox_uint32(v_val_232_);
v___x_239_ = lean_uint32_dec_le(v___x_238_, v___x_237_);
if (v___x_239_ == 0)
{
uint32_t v___x_240_; 
v___x_240_ = lean_unbox_uint32(v_val_232_);
lean_dec(v_val_232_);
v___y_214_ = v___y_225_;
v___y_215_ = v___x_240_;
v___y_216_ = v___x_227_;
goto v___jp_213_;
}
else
{
lean_object* v___x_241_; 
lean_dec(v_val_232_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___y_225_);
lean_ctor_set(v___x_241_, 1, v___x_227_);
return v___x_241_;
}
}
}
}
}
}
v___jp_243_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_249_ = l_ByteArray_toByteSlice(v___y_246_, v_lower_247_, v_upper_248_);
v___x_250_ = l_ByteArray_empty;
v___x_251_ = lean_byte_array_push(v___x_250_, v___y_245_);
v___x_252_ = l_ByteSlice_toByteArray(v___x_249_);
v___x_253_ = lean_byte_array_size(v___x_251_);
v___x_254_ = lean_byte_array_size(v___x_252_);
v___x_255_ = lean_byte_array_copy_slice(v___x_252_, v___x_223_, v___x_251_, v___x_253_, v___x_254_, v___x_242_);
lean_dec_ref(v___x_252_);
v___x_256_ = lean_string_validate_utf8(v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec_ref(v___x_255_);
v___x_257_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_258_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_257_);
v___y_225_ = v___y_244_;
v___y_226_ = v___x_258_;
goto v___jp_224_;
}
else
{
lean_object* v___x_259_; 
v___x_259_ = lean_string_from_utf8_unchecked(v___x_255_);
v___y_225_ = v___y_244_;
v___y_226_ = v___x_259_;
goto v___jp_224_;
}
}
v___jp_260_:
{
uint8_t v___x_267_; 
v___x_267_ = lean_nat_dec_le(v___y_264_, v___y_262_);
if (v___x_267_ == 0)
{
lean_dec(v___y_264_);
v___y_244_ = v___y_261_;
v___y_245_ = v___y_263_;
v___y_246_ = v___y_265_;
v_lower_247_ = v___y_266_;
v_upper_248_ = v___y_262_;
goto v___jp_243_;
}
else
{
lean_dec(v___y_262_);
v___y_244_ = v___y_261_;
v___y_245_ = v___y_263_;
v___y_246_ = v___y_265_;
v_lower_247_ = v___y_266_;
v_upper_248_ = v___y_264_;
goto v___jp_243_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object* v_config_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_304_, v_a_305_);
lean_dec_ref(v_config_304_);
return v_res_306_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t v___y_307_){
_start:
{
uint8_t v___x_308_; uint8_t v___x_309_; 
v___x_308_ = 48;
v___x_309_ = lean_uint8_dec_le(v___x_308_, v___y_307_);
if (v___x_309_ == 0)
{
return v___x_309_;
}
else
{
uint8_t v___x_310_; uint8_t v___x_311_; 
v___x_310_ = 57;
v___x_311_ = lean_uint8_dec_le(v___y_307_, v___x_310_);
return v___x_311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object* v___y_312_){
_start:
{
uint8_t v___y_558__boxed_313_; uint8_t v_res_314_; lean_object* v_r_315_; 
v___y_558__boxed_313_ = lean_unbox(v___y_312_);
v_res_314_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(v___y_558__boxed_313_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object* v_a_319_){
_start:
{
lean_object* v___f_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v_snd_324_; lean_object* v_fst_325_; lean_object* v_fst_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_379_; 
v___f_320_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0));
v___x_321_ = lean_unsigned_to_nat(5u);
v___x_322_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_319_);
v___x_323_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_320_, v___x_321_, v___x_322_, v_a_319_);
v_snd_324_ = lean_ctor_get(v___x_323_, 1);
lean_inc(v_snd_324_);
v_fst_325_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_fst_325_);
lean_dec_ref(v___x_323_);
v_fst_326_ = lean_ctor_get(v_snd_324_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_snd_324_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v_snd_324_, 1);
lean_dec(v_unused_380_);
v___x_328_ = v_snd_324_;
v_isShared_329_ = v_isSharedCheck_379_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_fst_326_);
lean_dec(v_snd_324_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_379_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___y_331_; lean_object* v_array_362_; lean_object* v_idx_363_; lean_object* v_lower_365_; lean_object* v_upper_366_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___y_376_; uint8_t v___x_378_; 
v_array_362_ = lean_ctor_get(v_a_319_, 0);
lean_inc_ref(v_array_362_);
v_idx_363_ = lean_ctor_get(v_a_319_, 1);
lean_inc(v_idx_363_);
lean_dec_ref(v_a_319_);
v___x_373_ = lean_nat_add(v_idx_363_, v_fst_325_);
lean_dec(v_fst_325_);
v___x_374_ = lean_byte_array_size(v_array_362_);
v___x_378_ = lean_nat_dec_le(v_idx_363_, v___x_322_);
if (v___x_378_ == 0)
{
v___y_376_ = v_idx_363_;
goto v___jp_375_;
}
else
{
lean_dec(v_idx_363_);
v___y_376_ = v___x_322_;
goto v___jp_375_;
}
v___jp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = lean_string_utf8_byte_size(v___y_331_);
lean_inc_ref(v___y_331_);
v___x_333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_333_, 0, v___y_331_);
lean_ctor_set(v___x_333_, 1, v___x_322_);
lean_ctor_set(v___x_333_, 2, v___x_332_);
v___x_334_ = l_String_Slice_toNat_x3f(v___x_333_);
lean_dec_ref_known(v___x_333_, 3);
if (lean_obj_tag(v___x_334_) == 1)
{
lean_object* v_val_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref(v___y_331_);
v_val_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_355_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_355_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_val_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_355_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(65535u);
v___x_340_ = lean_nat_dec_lt(v___x_339_, v_val_335_);
if (v___x_340_ == 0)
{
uint16_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
lean_del_object(v___x_337_);
v___x_341_ = lean_uint16_of_nat(v_val_335_);
lean_dec(v_val_335_);
v___x_342_ = lean_box(v___x_341_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v___x_342_);
v___x_344_ = v___x_328_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_fst_326_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_346_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1));
v___x_347_ = l_Nat_reprFast(v_val_335_);
v___x_348_ = lean_string_append(v___x_346_, v___x_347_);
lean_dec_ref(v___x_347_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_348_);
v___x_350_ = v___x_337_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_354_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_352_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 1);
lean_ctor_set(v___x_328_, 1, v___x_350_);
v___x_352_ = v___x_328_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_fst_326_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v___x_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
lean_dec(v___x_334_);
v___x_356_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2));
v___x_357_ = lean_string_append(v___x_356_, v___y_331_);
lean_dec_ref(v___y_331_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 1);
lean_ctor_set(v___x_328_, 1, v___x_358_);
v___x_360_ = v___x_328_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_fst_326_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
v___jp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = l_ByteArray_toByteSlice(v_array_362_, v_lower_365_, v_upper_366_);
v___x_368_ = l_ByteSlice_toByteArray(v___x_367_);
v___x_369_ = lean_string_validate_utf8(v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec_ref(v___x_368_);
v___x_370_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_371_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_370_);
v___y_331_ = v___x_371_;
goto v___jp_330_;
}
else
{
lean_object* v___x_372_; 
v___x_372_ = lean_string_from_utf8_unchecked(v___x_368_);
v___y_331_ = v___x_372_;
goto v___jp_330_;
}
}
v___jp_375_:
{
uint8_t v___x_377_; 
v___x_377_ = lean_nat_dec_le(v___x_373_, v___x_374_);
if (v___x_377_ == 0)
{
lean_dec(v___x_373_);
v_lower_365_ = v___y_376_;
v_upper_366_ = v___x_374_;
goto v___jp_364_;
}
else
{
v_lower_365_ = v___y_376_;
v_upper_366_ = v___x_373_;
goto v___jp_364_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t v_x_381_){
_start:
{
uint8_t v___y_383_; uint8_t v___y_419_; uint8_t v___y_425_; uint8_t v___y_431_; uint8_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 58;
v___x_437_ = lean_uint8_dec_eq(v_x_381_, v___x_436_);
if (v___x_437_ == 0)
{
uint8_t v___x_438_; 
v___x_438_ = 1;
v___y_431_ = v___x_438_;
goto v___jp_430_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = 0;
v___y_431_ = v___x_439_;
goto v___jp_430_;
}
v___jp_382_:
{
uint8_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 45;
v___x_385_ = lean_uint8_dec_eq(v_x_381_, v___x_384_);
if (v___x_385_ == 0)
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 46;
v___x_387_ = lean_uint8_dec_eq(v_x_381_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 95;
v___x_389_ = lean_uint8_dec_eq(v_x_381_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 126;
v___x_391_ = lean_uint8_dec_eq(v_x_381_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 33;
v___x_393_ = lean_uint8_dec_eq(v_x_381_, v___x_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 36;
v___x_395_ = lean_uint8_dec_eq(v_x_381_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 38;
v___x_397_ = lean_uint8_dec_eq(v_x_381_, v___x_396_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 39;
v___x_399_ = lean_uint8_dec_eq(v_x_381_, v___x_398_);
if (v___x_399_ == 0)
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 40;
v___x_401_ = lean_uint8_dec_eq(v_x_381_, v___x_400_);
if (v___x_401_ == 0)
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 41;
v___x_403_ = lean_uint8_dec_eq(v_x_381_, v___x_402_);
if (v___x_403_ == 0)
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = 42;
v___x_405_ = lean_uint8_dec_eq(v_x_381_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 43;
v___x_407_ = lean_uint8_dec_eq(v_x_381_, v___x_406_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; uint8_t v___x_409_; 
v___x_408_ = 44;
v___x_409_ = lean_uint8_dec_eq(v_x_381_, v___x_408_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 59;
v___x_411_ = lean_uint8_dec_eq(v_x_381_, v___x_410_);
if (v___x_411_ == 0)
{
uint8_t v___x_412_; uint8_t v___x_413_; 
v___x_412_ = 61;
v___x_413_ = lean_uint8_dec_eq(v_x_381_, v___x_412_);
if (v___x_413_ == 0)
{
uint8_t v___x_414_; uint8_t v___x_415_; 
v___x_414_ = 58;
v___x_415_ = lean_uint8_dec_eq(v_x_381_, v___x_414_);
if (v___x_415_ == 0)
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
uint8_t v___x_416_; uint8_t v___x_417_; 
v___x_416_ = 37;
v___x_417_ = lean_uint8_dec_eq(v_x_381_, v___x_416_);
return v___x_417_;
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_415_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_413_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_411_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_409_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_407_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_405_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_403_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_401_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_399_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_397_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_395_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_393_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_391_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_389_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_387_;
}
}
}
else
{
if (v___y_383_ == 0)
{
return v___y_383_;
}
else
{
return v___x_385_;
}
}
}
v___jp_418_:
{
uint8_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 65;
v___x_421_ = lean_uint8_dec_le(v___x_420_, v_x_381_);
if (v___x_421_ == 0)
{
v___y_383_ = v___y_419_;
goto v___jp_382_;
}
else
{
uint8_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 90;
v___x_423_ = lean_uint8_dec_le(v_x_381_, v___x_422_);
if (v___x_423_ == 0)
{
v___y_383_ = v___y_419_;
goto v___jp_382_;
}
else
{
if (v___y_419_ == 0)
{
return v___y_419_;
}
else
{
return v___x_423_;
}
}
}
}
v___jp_424_:
{
uint8_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 97;
v___x_427_ = lean_uint8_dec_le(v___x_426_, v_x_381_);
if (v___x_427_ == 0)
{
v___y_419_ = v___y_425_;
goto v___jp_418_;
}
else
{
uint8_t v___x_428_; uint8_t v___x_429_; 
v___x_428_ = 122;
v___x_429_ = lean_uint8_dec_le(v_x_381_, v___x_428_);
if (v___x_429_ == 0)
{
v___y_419_ = v___y_425_;
goto v___jp_418_;
}
else
{
if (v___y_425_ == 0)
{
return v___y_425_;
}
else
{
return v___x_429_;
}
}
}
}
v___jp_430_:
{
uint8_t v___x_432_; uint8_t v___x_433_; 
v___x_432_ = 48;
v___x_433_ = lean_uint8_dec_le(v___x_432_, v_x_381_);
if (v___x_433_ == 0)
{
v___y_425_ = v___y_431_;
goto v___jp_424_;
}
else
{
uint8_t v___x_434_; uint8_t v___x_435_; 
v___x_434_ = 57;
v___x_435_ = lean_uint8_dec_le(v_x_381_, v___x_434_);
if (v___x_435_ == 0)
{
v___y_425_ = v___y_431_;
goto v___jp_424_;
}
else
{
if (v___y_431_ == 0)
{
return v___y_431_;
}
else
{
return v___x_435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object* v_x_440_){
_start:
{
uint8_t v_x_boxed_441_; uint8_t v_res_442_; lean_object* v_r_443_; 
v_x_boxed_441_ = lean_unbox(v_x_440_);
v_res_442_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(v_x_boxed_441_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t v___x_444_, uint8_t v___x_445_, uint8_t v_x_446_){
_start:
{
uint8_t v___x_491_; uint8_t v___x_492_; 
v___x_491_ = 48;
v___x_492_ = lean_uint8_dec_le(v___x_491_, v_x_446_);
if (v___x_492_ == 0)
{
goto v___jp_486_;
}
else
{
uint8_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = 57;
v___x_494_ = lean_uint8_dec_le(v_x_446_, v___x_493_);
if (v___x_494_ == 0)
{
goto v___jp_486_;
}
else
{
return v___x_445_;
}
}
v___jp_447_:
{
uint8_t v___x_448_; uint8_t v___x_449_; 
v___x_448_ = 45;
v___x_449_ = lean_uint8_dec_eq(v_x_446_, v___x_448_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; uint8_t v___x_451_; 
v___x_450_ = 46;
v___x_451_ = lean_uint8_dec_eq(v_x_446_, v___x_450_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; uint8_t v___x_453_; 
v___x_452_ = 95;
v___x_453_ = lean_uint8_dec_eq(v_x_446_, v___x_452_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; uint8_t v___x_455_; 
v___x_454_ = 126;
v___x_455_ = lean_uint8_dec_eq(v_x_446_, v___x_454_);
if (v___x_455_ == 0)
{
uint8_t v___x_456_; uint8_t v___x_457_; 
v___x_456_ = 33;
v___x_457_ = lean_uint8_dec_eq(v_x_446_, v___x_456_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; uint8_t v___x_459_; 
v___x_458_ = 36;
v___x_459_ = lean_uint8_dec_eq(v_x_446_, v___x_458_);
if (v___x_459_ == 0)
{
uint8_t v___x_460_; uint8_t v___x_461_; 
v___x_460_ = 38;
v___x_461_ = lean_uint8_dec_eq(v_x_446_, v___x_460_);
if (v___x_461_ == 0)
{
uint8_t v___x_462_; uint8_t v___x_463_; 
v___x_462_ = 39;
v___x_463_ = lean_uint8_dec_eq(v_x_446_, v___x_462_);
if (v___x_463_ == 0)
{
uint8_t v___x_464_; uint8_t v___x_465_; 
v___x_464_ = 40;
v___x_465_ = lean_uint8_dec_eq(v_x_446_, v___x_464_);
if (v___x_465_ == 0)
{
uint8_t v___x_466_; uint8_t v___x_467_; 
v___x_466_ = 41;
v___x_467_ = lean_uint8_dec_eq(v_x_446_, v___x_466_);
if (v___x_467_ == 0)
{
uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 42;
v___x_469_ = lean_uint8_dec_eq(v_x_446_, v___x_468_);
if (v___x_469_ == 0)
{
uint8_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 43;
v___x_471_ = lean_uint8_dec_eq(v_x_446_, v___x_470_);
if (v___x_471_ == 0)
{
uint8_t v___x_472_; uint8_t v___x_473_; 
v___x_472_ = 44;
v___x_473_ = lean_uint8_dec_eq(v_x_446_, v___x_472_);
if (v___x_473_ == 0)
{
uint8_t v___x_474_; uint8_t v___x_475_; 
v___x_474_ = 59;
v___x_475_ = lean_uint8_dec_eq(v_x_446_, v___x_474_);
if (v___x_475_ == 0)
{
uint8_t v___x_476_; uint8_t v___x_477_; 
v___x_476_ = 61;
v___x_477_ = lean_uint8_dec_eq(v_x_446_, v___x_476_);
if (v___x_477_ == 0)
{
uint8_t v___x_478_; 
v___x_478_ = lean_uint8_dec_eq(v_x_446_, v___x_444_);
if (v___x_478_ == 0)
{
uint8_t v___x_479_; uint8_t v___x_480_; 
v___x_479_ = 37;
v___x_480_ = lean_uint8_dec_eq(v_x_446_, v___x_479_);
return v___x_480_;
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
else
{
return v___x_445_;
}
}
v___jp_481_:
{
uint8_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 65;
v___x_483_ = lean_uint8_dec_le(v___x_482_, v_x_446_);
if (v___x_483_ == 0)
{
goto v___jp_447_;
}
else
{
uint8_t v___x_484_; uint8_t v___x_485_; 
v___x_484_ = 90;
v___x_485_ = lean_uint8_dec_le(v_x_446_, v___x_484_);
if (v___x_485_ == 0)
{
goto v___jp_447_;
}
else
{
return v___x_445_;
}
}
}
v___jp_486_:
{
uint8_t v___x_487_; uint8_t v___x_488_; 
v___x_487_ = 97;
v___x_488_ = lean_uint8_dec_le(v___x_487_, v_x_446_);
if (v___x_488_ == 0)
{
goto v___jp_481_;
}
else
{
uint8_t v___x_489_; uint8_t v___x_490_; 
v___x_489_ = 122;
v___x_490_ = lean_uint8_dec_le(v_x_446_, v___x_489_);
if (v___x_490_ == 0)
{
goto v___jp_481_;
}
else
{
return v___x_445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object* v___x_495_, lean_object* v___x_496_, lean_object* v_x_497_){
_start:
{
uint8_t v___x_3643__boxed_498_; uint8_t v___x_3644__boxed_499_; uint8_t v_x_boxed_500_; uint8_t v_res_501_; lean_object* v_r_502_; 
v___x_3643__boxed_498_ = lean_unbox(v___x_495_);
v___x_3644__boxed_499_ = lean_unbox(v___x_496_);
v_x_boxed_500_ = lean_unbox(v_x_497_);
v_res_501_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(v___x_3643__boxed_498_, v___x_3644__boxed_499_, v_x_boxed_500_);
v_r_502_ = lean_box(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object* v_config_507_, lean_object* v_a_508_){
_start:
{
lean_object* v___y_510_; lean_object* v_userPassEncoded_511_; lean_object* v___y_512_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v_lower_519_; lean_object* v_upper_520_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_535_; lean_object* v_pos_536_; lean_object* v_maxUserInfoLength_538_; lean_object* v___f_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v_snd_542_; lean_object* v_fst_543_; lean_object* v_fst_544_; lean_object* v_array_545_; lean_object* v_idx_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_594_; 
v_maxUserInfoLength_538_ = lean_ctor_get(v_config_507_, 2);
v___f_539_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2));
v___x_540_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_508_);
v___x_541_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_539_, v_maxUserInfoLength_538_, v___x_540_, v_a_508_);
v_snd_542_ = lean_ctor_get(v___x_541_, 1);
lean_inc(v_snd_542_);
v_fst_543_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_fst_543_);
lean_dec_ref(v___x_541_);
v_fst_544_ = lean_ctor_get(v_snd_542_, 0);
lean_inc(v_fst_544_);
lean_dec(v_snd_542_);
v_array_545_ = lean_ctor_get(v_a_508_, 0);
v_idx_546_ = lean_ctor_get(v_a_508_, 1);
v_isSharedCheck_594_ = !lean_is_exclusive(v_a_508_);
if (v_isSharedCheck_594_ == 0)
{
v___x_548_ = v_a_508_;
v_isShared_549_ = v_isSharedCheck_594_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_idx_546_);
lean_inc(v_array_545_);
lean_dec(v_a_508_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_594_;
goto v_resetjp_547_;
}
v___jp_509_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___y_510_);
lean_ctor_set(v___x_513_, 1, v_userPassEncoded_511_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
v___jp_515_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_521_ = l_ByteArray_toByteSlice(v___y_517_, v_lower_519_, v_upper_520_);
v___x_522_ = l_ByteSlice_toByteArray(v___x_521_);
v___x_523_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_522_);
if (lean_obj_tag(v___x_523_) == 1)
{
v___y_510_ = v___y_516_;
v_userPassEncoded_511_ = v___x_523_;
v___y_512_ = v___y_518_;
goto v___jp_509_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v___x_523_);
lean_dec_ref(v___y_516_);
v___x_524_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
v___x_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_525_, 0, v___y_518_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
return v___x_525_;
}
}
v___jp_526_:
{
uint8_t v___x_533_; 
v___x_533_ = lean_nat_dec_le(v___y_531_, v___y_530_);
if (v___x_533_ == 0)
{
lean_dec(v___y_531_);
v___y_516_ = v___y_527_;
v___y_517_ = v___y_528_;
v___y_518_ = v___y_529_;
v_lower_519_ = v___y_532_;
v_upper_520_ = v___y_530_;
goto v___jp_515_;
}
else
{
lean_dec(v___y_530_);
v___y_516_ = v___y_527_;
v___y_517_ = v___y_528_;
v___y_518_ = v___y_529_;
v_lower_519_ = v___y_532_;
v_upper_520_ = v___y_531_;
goto v___jp_515_;
}
}
v___jp_534_:
{
lean_object* v___x_537_; 
v___x_537_ = lean_box(0);
v___y_510_ = v___y_535_;
v_userPassEncoded_511_ = v___x_537_;
v___y_512_ = v_pos_536_;
goto v___jp_509_;
}
v_resetjp_547_:
{
lean_object* v_lower_551_; lean_object* v_upper_552_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___y_591_; uint8_t v___x_593_; 
v___x_588_ = lean_nat_add(v_idx_546_, v_fst_543_);
lean_dec(v_fst_543_);
v___x_589_ = lean_byte_array_size(v_array_545_);
v___x_593_ = lean_nat_dec_le(v_idx_546_, v___x_540_);
if (v___x_593_ == 0)
{
v___y_591_ = v_idx_546_;
goto v___jp_590_;
}
else
{
lean_dec(v_idx_546_);
v___y_591_ = v___x_540_;
goto v___jp_590_;
}
v___jp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_553_ = l_ByteArray_toByteSlice(v_array_545_, v_lower_551_, v_upper_552_);
v___x_554_ = l_ByteSlice_toByteArray(v___x_553_);
v___x_555_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_554_);
if (lean_obj_tag(v___x_555_) == 1)
{
lean_object* v_val_556_; lean_object* v_array_557_; lean_object* v_idx_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
lean_del_object(v___x_548_);
v_val_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_val_556_);
lean_dec_ref_known(v___x_555_, 1);
v_array_557_ = lean_ctor_get(v_fst_544_, 0);
v_idx_558_ = lean_ctor_get(v_fst_544_, 1);
v___x_559_ = lean_byte_array_size(v_array_557_);
v___x_560_ = lean_nat_dec_lt(v_idx_558_, v___x_559_);
if (v___x_560_ == 0)
{
v___y_535_ = v_val_556_;
v_pos_536_ = v_fst_544_;
goto v___jp_534_;
}
else
{
uint8_t v___x_561_; uint8_t v___x_562_; uint8_t v___x_563_; 
v___x_561_ = lean_byte_array_fget(v_array_557_, v_idx_558_);
v___x_562_ = 58;
v___x_563_ = lean_uint8_dec_eq(v___x_561_, v___x_562_);
if (v___x_563_ == 0)
{
v___y_535_ = v_val_556_;
v_pos_536_ = v_fst_544_;
goto v___jp_534_;
}
else
{
lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_581_; 
lean_inc(v_idx_558_);
lean_inc_ref(v_array_557_);
v_isSharedCheck_581_ = !lean_is_exclusive(v_fst_544_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; lean_object* v_unused_583_; 
v_unused_582_ = lean_ctor_get(v_fst_544_, 1);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_fst_544_, 0);
lean_dec(v_unused_583_);
v___x_565_ = v_fst_544_;
v_isShared_566_ = v_isSharedCheck_581_;
goto v_resetjp_564_;
}
else
{
lean_dec(v_fst_544_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_581_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___f_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_567_ = lean_box(v___x_562_);
v___x_568_ = lean_box(v___x_560_);
v___f_569_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed), 3, 2);
lean_closure_set(v___f_569_, 0, v___x_567_);
lean_closure_set(v___f_569_, 1, v___x_568_);
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_idx_558_, v___x_570_);
lean_dec(v_idx_558_);
lean_inc(v___x_571_);
lean_inc_ref(v_array_557_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 1, v___x_571_);
v___x_573_ = v___x_565_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_array_557_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___x_571_);
v___x_573_ = v_reuseFailAlloc_580_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; lean_object* v_snd_575_; lean_object* v_fst_576_; lean_object* v_fst_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_574_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_569_, v_maxUserInfoLength_538_, v___x_540_, v___x_573_);
v_snd_575_ = lean_ctor_get(v___x_574_, 1);
lean_inc(v_snd_575_);
v_fst_576_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_fst_576_);
lean_dec_ref(v___x_574_);
v_fst_577_ = lean_ctor_get(v_snd_575_, 0);
lean_inc(v_fst_577_);
lean_dec(v_snd_575_);
v___x_578_ = lean_nat_add(v___x_571_, v_fst_576_);
lean_dec(v_fst_576_);
v___x_579_ = lean_nat_dec_le(v___x_571_, v___x_540_);
if (v___x_579_ == 0)
{
v___y_527_ = v_val_556_;
v___y_528_ = v_array_557_;
v___y_529_ = v_fst_577_;
v___y_530_ = v___x_559_;
v___y_531_ = v___x_578_;
v___y_532_ = v___x_571_;
goto v___jp_526_;
}
else
{
lean_dec(v___x_571_);
v___y_527_ = v_val_556_;
v___y_528_ = v_array_557_;
v___y_529_ = v_fst_577_;
v___y_530_ = v___x_559_;
v___y_531_ = v___x_578_;
v___y_532_ = v___x_540_;
goto v___jp_526_;
}
}
}
}
}
}
else
{
lean_object* v___x_584_; lean_object* v___x_586_; 
lean_dec(v___x_555_);
v___x_584_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
if (v_isShared_549_ == 0)
{
lean_ctor_set_tag(v___x_548_, 1);
lean_ctor_set(v___x_548_, 1, v___x_584_);
lean_ctor_set(v___x_548_, 0, v_fst_544_);
v___x_586_ = v___x_548_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_fst_544_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
v___jp_590_:
{
uint8_t v___x_592_; 
v___x_592_ = lean_nat_dec_le(v___x_588_, v___x_589_);
if (v___x_592_ == 0)
{
lean_dec(v___x_588_);
v_lower_551_ = v___y_591_;
v_upper_552_ = v___x_589_;
goto v___jp_550_;
}
else
{
v_lower_551_ = v___y_591_;
v_upper_552_ = v___x_588_;
goto v___jp_550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object* v_config_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_595_, v_a_596_);
lean_dec_ref(v_config_595_);
return v_res_597_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t v___x_598_, uint8_t v_x_599_){
_start:
{
uint8_t v___x_600_; uint8_t v___x_601_; uint8_t v___x_602_; uint8_t v___x_603_; uint8_t v___y_605_; uint8_t v___x_616_; uint8_t v___x_617_; 
v___x_600_ = 58;
v___x_601_ = lean_uint8_dec_eq(v_x_599_, v___x_600_);
v___x_602_ = 46;
v___x_603_ = lean_uint8_dec_eq(v_x_599_, v___x_602_);
v___x_616_ = 48;
v___x_617_ = lean_uint8_dec_le(v___x_616_, v_x_599_);
if (v___x_617_ == 0)
{
goto v___jp_611_;
}
else
{
uint8_t v___x_618_; uint8_t v___x_619_; 
v___x_618_ = 57;
v___x_619_ = lean_uint8_dec_le(v_x_599_, v___x_618_);
if (v___x_619_ == 0)
{
goto v___jp_611_;
}
else
{
v___y_605_ = v___x_598_;
goto v___jp_604_;
}
}
v___jp_604_:
{
if (v___x_603_ == 0)
{
if (v___x_601_ == 0)
{
return v___y_605_;
}
else
{
return v___x_601_;
}
}
else
{
if (v___x_601_ == 0)
{
return v___x_603_;
}
else
{
return v___x_601_;
}
}
}
v___jp_606_:
{
uint8_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 65;
v___x_608_ = lean_uint8_dec_le(v___x_607_, v_x_599_);
if (v___x_608_ == 0)
{
v___y_605_ = v___x_608_;
goto v___jp_604_;
}
else
{
uint8_t v___x_609_; uint8_t v___x_610_; 
v___x_609_ = 70;
v___x_610_ = lean_uint8_dec_le(v_x_599_, v___x_609_);
if (v___x_610_ == 0)
{
v___y_605_ = v___x_610_;
goto v___jp_604_;
}
else
{
v___y_605_ = v___x_598_;
goto v___jp_604_;
}
}
}
v___jp_611_:
{
uint8_t v___x_612_; uint8_t v___x_613_; 
v___x_612_ = 97;
v___x_613_ = lean_uint8_dec_le(v___x_612_, v_x_599_);
if (v___x_613_ == 0)
{
goto v___jp_606_;
}
else
{
uint8_t v___x_614_; uint8_t v___x_615_; 
v___x_614_ = 102;
v___x_615_ = lean_uint8_dec_le(v_x_599_, v___x_614_);
if (v___x_615_ == 0)
{
goto v___jp_606_;
}
else
{
v___y_605_ = v___x_598_;
goto v___jp_604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object* v___x_620_, lean_object* v_x_621_){
_start:
{
uint8_t v___x_1213__boxed_622_; uint8_t v_x_boxed_623_; uint8_t v_res_624_; lean_object* v_r_625_; 
v___x_1213__boxed_622_ = lean_unbox(v___x_620_);
v_x_boxed_623_ = lean_unbox(v_x_621_);
v_res_624_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(v___x_1213__boxed_622_, v_x_boxed_623_);
v_r_625_ = lean_box(v_res_624_);
return v_r_625_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object* v_a_636_){
_start:
{
lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v_array_647_; lean_object* v_idx_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_array_647_ = lean_ctor_get(v_a_636_, 0);
v_idx_648_ = lean_ctor_get(v_a_636_, 1);
v___x_649_ = lean_byte_array_size(v_array_647_);
v___x_650_ = lean_nat_dec_lt(v_idx_648_, v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_box(0);
v___x_652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_652_, 0, v_a_636_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
return v___x_652_;
}
else
{
uint8_t v___x_653_; uint8_t v_got_654_; uint8_t v___x_655_; 
v___x_653_ = 91;
v_got_654_ = lean_byte_array_fget(v_array_647_, v_idx_648_);
v___x_655_ = lean_uint8_dec_eq(v_got_654_, v___x_653_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2));
v___x_657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_657_, 0, v_a_636_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
return v___x_657_;
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_734_; 
lean_inc(v_idx_648_);
lean_inc_ref(v_array_647_);
v_isSharedCheck_734_ = !lean_is_exclusive(v_a_636_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; lean_object* v_unused_736_; 
v_unused_735_ = lean_ctor_get(v_a_636_, 1);
lean_dec(v_unused_735_);
v_unused_736_ = lean_ctor_get(v_a_636_, 0);
lean_dec(v_unused_736_);
v___x_659_ = v_a_636_;
v_isShared_660_ = v_isSharedCheck_734_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_a_636_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_734_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___f_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_661_ = lean_box(v___x_655_);
v___f_662_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed), 2, 1);
lean_closure_set(v___f_662_, 0, v___x_661_);
v___x_663_ = lean_unsigned_to_nat(1u);
v___x_664_ = lean_nat_add(v_idx_648_, v___x_663_);
lean_dec(v_idx_648_);
lean_inc(v___x_664_);
lean_inc_ref(v_array_647_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v___x_664_);
v___x_666_ = v___x_659_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_array_647_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v___x_664_);
v___x_666_ = v_reuseFailAlloc_733_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_snd_670_; lean_object* v_fst_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_732_; 
v___x_667_ = lean_unsigned_to_nat(256u);
v___x_668_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_666_);
v___x_669_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_662_, v___x_667_, v___x_668_, v___x_666_);
v_snd_670_ = lean_ctor_get(v___x_669_, 1);
v_fst_671_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_732_ == 0)
{
v___x_673_ = v___x_669_;
v_isShared_674_ = v_isSharedCheck_732_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_snd_670_);
lean_inc(v_fst_671_);
lean_dec(v___x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_732_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v_fst_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_730_; 
v_fst_675_ = lean_ctor_get(v_snd_670_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_snd_670_);
if (v_isSharedCheck_730_ == 0)
{
lean_object* v_unused_731_; 
v_unused_731_ = lean_ctor_get(v_snd_670_, 1);
lean_dec(v_unused_731_);
v___x_677_ = v_snd_670_;
v_isShared_678_ = v_isSharedCheck_730_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_fst_675_);
lean_dec(v_snd_670_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_730_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___y_680_; uint8_t v___x_714_; 
v___x_714_ = lean_nat_dec_eq(v_fst_671_, v___x_668_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___y_717_; uint8_t v___x_725_; 
lean_dec_ref(v___x_666_);
v___x_715_ = lean_nat_add(v___x_664_, v_fst_671_);
lean_dec(v_fst_671_);
v___x_725_ = lean_nat_dec_le(v___x_664_, v___x_668_);
if (v___x_725_ == 0)
{
v___y_717_ = v___x_664_;
goto v___jp_716_;
}
else
{
lean_dec(v___x_664_);
v___y_717_ = v___x_668_;
goto v___jp_716_;
}
v___jp_716_:
{
uint8_t v___x_718_; 
v___x_718_ = lean_nat_dec_le(v___x_715_, v___x_649_);
if (v___x_718_ == 0)
{
lean_object* v___x_720_; 
lean_dec(v___x_715_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v___x_649_);
lean_ctor_set(v___x_673_, 0, v___y_717_);
v___x_720_ = v___x_673_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___y_717_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v___x_649_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
v___y_680_ = v___x_720_;
goto v___jp_679_;
}
}
else
{
lean_object* v___x_723_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v___x_715_);
lean_ctor_set(v___x_673_, 0, v___y_717_);
v___x_723_ = v___x_673_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___y_717_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_715_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
v___y_680_ = v___x_723_;
goto v___jp_679_;
}
}
}
}
else
{
lean_object* v___x_726_; lean_object* v___x_728_; 
lean_del_object(v___x_677_);
lean_dec(v_fst_675_);
lean_dec(v_fst_671_);
lean_dec(v___x_664_);
lean_dec_ref(v_array_647_);
v___x_726_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6));
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 1);
lean_ctor_set(v___x_673_, 1, v___x_726_);
lean_ctor_set(v___x_673_, 0, v___x_666_);
v___x_728_ = v___x_673_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
v___jp_679_:
{
lean_object* v_array_681_; lean_object* v_idx_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v_array_681_ = lean_ctor_get(v_fst_675_, 0);
v_idx_682_ = lean_ctor_get(v_fst_675_, 1);
v___x_683_ = lean_byte_array_size(v_array_681_);
v___x_684_ = lean_nat_dec_lt(v_idx_682_, v___x_683_);
if (v___x_684_ == 0)
{
lean_object* v___x_685_; lean_object* v___x_687_; 
lean_dec_ref(v___y_680_);
lean_dec_ref(v_array_647_);
v___x_685_ = lean_box(0);
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 1);
lean_ctor_set(v___x_677_, 1, v___x_685_);
v___x_687_ = v___x_677_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_fst_675_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
else
{
uint8_t v___x_689_; uint8_t v_got_690_; uint8_t v___x_691_; 
v___x_689_ = 93;
v_got_690_ = lean_byte_array_fget(v_array_681_, v_idx_682_);
v___x_691_ = lean_uint8_dec_eq(v_got_690_, v___x_689_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_694_; 
lean_dec_ref(v___y_680_);
lean_dec_ref(v_array_647_);
v___x_692_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4));
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 1);
lean_ctor_set(v___x_677_, 1, v___x_692_);
v___x_694_ = v___x_677_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_fst_675_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
else
{
lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_711_; 
lean_inc(v_idx_682_);
lean_inc_ref(v_array_681_);
lean_del_object(v___x_677_);
v_isSharedCheck_711_ = !lean_is_exclusive(v_fst_675_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; lean_object* v_unused_713_; 
v_unused_712_ = lean_ctor_get(v_fst_675_, 1);
lean_dec(v_unused_712_);
v_unused_713_ = lean_ctor_get(v_fst_675_, 0);
lean_dec(v_unused_713_);
v___x_697_ = v_fst_675_;
v_isShared_698_ = v_isSharedCheck_711_;
goto v_resetjp_696_;
}
else
{
lean_dec(v_fst_675_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_711_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_lower_699_; lean_object* v_upper_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v_lower_699_ = lean_ctor_get(v___y_680_, 0);
lean_inc(v_lower_699_);
v_upper_700_ = lean_ctor_get(v___y_680_, 1);
lean_inc(v_upper_700_);
lean_dec_ref(v___y_680_);
v___x_701_ = l_ByteArray_toByteSlice(v_array_647_, v_lower_699_, v_upper_700_);
v___x_702_ = lean_nat_add(v_idx_682_, v___x_663_);
lean_dec(v_idx_682_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 1, v___x_702_);
v___x_704_ = v___x_697_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_array_681_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v___x_702_);
v___x_704_ = v_reuseFailAlloc_710_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = l_ByteSlice_toByteArray(v___x_701_);
v___x_706_ = lean_string_validate_utf8(v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec_ref(v___x_705_);
v___x_707_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_708_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_707_);
v___y_638_ = v___x_704_;
v___y_639_ = v___x_708_;
goto v___jp_637_;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = lean_string_from_utf8_unchecked(v___x_705_);
v___y_638_ = v___x_704_;
v___y_639_ = v___x_709_;
goto v___jp_637_;
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
v___jp_637_:
{
lean_object* v___x_640_; 
v___x_640_ = lean_uv_pton_v6(v___y_639_);
if (lean_obj_tag(v___x_640_) == 1)
{
lean_object* v_val_641_; lean_object* v___x_642_; 
lean_dec_ref(v___y_639_);
v_val_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___y_638_);
lean_ctor_set(v___x_642_, 1, v_val_641_);
return v___x_642_;
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec(v___x_640_);
v___x_643_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0));
v___x_644_ = lean_string_append(v___x_643_, v___y_639_);
lean_dec_ref(v___y_639_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
v___x_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_646_, 0, v___y_638_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(uint8_t v_x_737_){
_start:
{
uint8_t v___x_738_; uint8_t v___x_739_; uint8_t v___x_740_; uint8_t v___x_741_; 
v___x_738_ = 46;
v___x_739_ = lean_uint8_dec_eq(v_x_737_, v___x_738_);
v___x_740_ = 48;
v___x_741_ = lean_uint8_dec_le(v___x_740_, v_x_737_);
if (v___x_741_ == 0)
{
if (v___x_739_ == 0)
{
return v___x_741_;
}
else
{
return v___x_739_;
}
}
else
{
if (v___x_739_ == 0)
{
uint8_t v___x_742_; uint8_t v___x_743_; 
v___x_742_ = 57;
v___x_743_ = lean_uint8_dec_le(v_x_737_, v___x_742_);
return v___x_743_;
}
else
{
return v___x_739_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0___boxed(lean_object* v_x_744_){
_start:
{
uint8_t v_x_boxed_745_; uint8_t v_res_746_; lean_object* v_r_747_; 
v_x_boxed_745_ = lean_unbox(v_x_744_);
v_res_746_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___lam__0(v_x_boxed_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(lean_object* v_a_750_){
_start:
{
lean_object* v___f_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v_snd_755_; lean_object* v_fst_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_801_; 
v___f_751_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__0));
v___x_752_ = lean_unsigned_to_nat(256u);
v___x_753_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_750_);
v___x_754_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_751_, v___x_752_, v___x_753_, v_a_750_);
v_snd_755_ = lean_ctor_get(v___x_754_, 1);
v_fst_756_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_801_ == 0)
{
v___x_758_ = v___x_754_;
v_isShared_759_ = v_isSharedCheck_801_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_snd_755_);
lean_inc(v_fst_756_);
lean_dec(v___x_754_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_801_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v_fst_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_799_; 
v_fst_760_ = lean_ctor_get(v_snd_755_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v_snd_755_);
if (v_isSharedCheck_799_ == 0)
{
lean_object* v_unused_800_; 
v_unused_800_ = lean_ctor_get(v_snd_755_, 1);
lean_dec(v_unused_800_);
v___x_762_ = v_snd_755_;
v_isShared_763_ = v_isSharedCheck_799_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_fst_760_);
lean_dec(v_snd_755_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_799_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___y_765_; uint8_t v___x_777_; 
v___x_777_ = lean_nat_dec_eq(v_fst_756_, v___x_753_);
if (v___x_777_ == 0)
{
lean_object* v_array_778_; lean_object* v_idx_779_; lean_object* v_lower_781_; lean_object* v_upper_782_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___y_792_; uint8_t v___x_794_; 
lean_del_object(v___x_758_);
v_array_778_ = lean_ctor_get(v_a_750_, 0);
lean_inc_ref(v_array_778_);
v_idx_779_ = lean_ctor_get(v_a_750_, 1);
lean_inc(v_idx_779_);
lean_dec_ref(v_a_750_);
v___x_789_ = lean_nat_add(v_idx_779_, v_fst_756_);
lean_dec(v_fst_756_);
v___x_790_ = lean_byte_array_size(v_array_778_);
v___x_794_ = lean_nat_dec_le(v_idx_779_, v___x_753_);
if (v___x_794_ == 0)
{
v___y_792_ = v_idx_779_;
goto v___jp_791_;
}
else
{
lean_dec(v_idx_779_);
v___y_792_ = v___x_753_;
goto v___jp_791_;
}
v___jp_780_:
{
lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_783_ = l_ByteArray_toByteSlice(v_array_778_, v_lower_781_, v_upper_782_);
v___x_784_ = l_ByteSlice_toByteArray(v___x_783_);
v___x_785_ = lean_string_validate_utf8(v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; 
lean_dec_ref(v___x_784_);
v___x_786_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_787_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_786_);
v___y_765_ = v___x_787_;
goto v___jp_764_;
}
else
{
lean_object* v___x_788_; 
v___x_788_ = lean_string_from_utf8_unchecked(v___x_784_);
v___y_765_ = v___x_788_;
goto v___jp_764_;
}
}
v___jp_791_:
{
uint8_t v___x_793_; 
v___x_793_ = lean_nat_dec_le(v___x_789_, v___x_790_);
if (v___x_793_ == 0)
{
lean_dec(v___x_789_);
v_lower_781_ = v___y_792_;
v_upper_782_ = v___x_790_;
goto v___jp_780_;
}
else
{
v_lower_781_ = v___y_792_;
v_upper_782_ = v___x_789_;
goto v___jp_780_;
}
}
}
else
{
lean_object* v___x_795_; lean_object* v___x_797_; 
lean_del_object(v___x_762_);
lean_dec(v_fst_760_);
lean_dec(v_fst_756_);
v___x_795_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6));
if (v_isShared_759_ == 0)
{
lean_ctor_set_tag(v___x_758_, 1);
lean_ctor_set(v___x_758_, 1, v___x_795_);
lean_ctor_set(v___x_758_, 0, v_a_750_);
v___x_797_ = v___x_758_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_750_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v___x_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
v___jp_764_:
{
lean_object* v___x_766_; 
v___x_766_ = lean_uv_pton_v4(v___y_765_);
if (lean_obj_tag(v___x_766_) == 1)
{
lean_object* v_val_767_; lean_object* v___x_769_; 
lean_dec_ref(v___y_765_);
v_val_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_val_767_);
lean_dec_ref_known(v___x_766_, 1);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 1, v_val_767_);
v___x_769_ = v___x_762_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_fst_760_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_val_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_775_; 
lean_dec(v___x_766_);
v___x_771_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4___closed__1));
v___x_772_ = lean_string_append(v___x_771_, v___y_765_);
lean_dec_ref(v___y_765_);
v___x_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
if (v_isShared_763_ == 0)
{
lean_ctor_set_tag(v___x_762_, 1);
lean_ctor_set(v___x_762_, 1, v___x_773_);
v___x_775_ = v___x_762_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_fst_760_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
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
lean_object* v___x_805_; 
v___x_805_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object* v___dummy_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v_res_807_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0(void){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object* v_s_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object* v_s_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(v_s_811_);
lean_dec_ref(v_s_811_);
return v_res_812_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t v___x_813_, uint8_t v_x_814_){
_start:
{
uint8_t v___y_816_; uint8_t v___x_831_; uint8_t v___x_832_; 
v___x_831_ = 48;
v___x_832_ = lean_uint8_dec_le(v___x_831_, v_x_814_);
if (v___x_832_ == 0)
{
goto v___jp_826_;
}
else
{
uint8_t v___x_833_; uint8_t v___x_834_; 
v___x_833_ = 57;
v___x_834_ = lean_uint8_dec_le(v_x_814_, v___x_833_);
if (v___x_834_ == 0)
{
goto v___jp_826_;
}
else
{
v___y_816_ = v___x_813_;
goto v___jp_815_;
}
}
v___jp_815_:
{
uint8_t v___x_817_; uint8_t v___x_818_; 
v___x_817_ = 45;
v___x_818_ = lean_uint8_dec_eq(v_x_814_, v___x_817_);
if (v___x_818_ == 0)
{
if (v___y_816_ == 0)
{
uint8_t v___x_819_; uint8_t v___x_820_; 
v___x_819_ = 46;
v___x_820_ = lean_uint8_dec_eq(v_x_814_, v___x_819_);
return v___x_820_;
}
else
{
return v___y_816_;
}
}
else
{
if (v___y_816_ == 0)
{
return v___x_818_;
}
else
{
return v___y_816_;
}
}
}
v___jp_821_:
{
uint8_t v___x_822_; uint8_t v___x_823_; 
v___x_822_ = 65;
v___x_823_ = lean_uint8_dec_le(v___x_822_, v_x_814_);
if (v___x_823_ == 0)
{
v___y_816_ = v___x_823_;
goto v___jp_815_;
}
else
{
uint8_t v___x_824_; uint8_t v___x_825_; 
v___x_824_ = 90;
v___x_825_ = lean_uint8_dec_le(v_x_814_, v___x_824_);
if (v___x_825_ == 0)
{
v___y_816_ = v___x_825_;
goto v___jp_815_;
}
else
{
v___y_816_ = v___x_813_;
goto v___jp_815_;
}
}
}
v___jp_826_:
{
uint8_t v___x_827_; uint8_t v___x_828_; 
v___x_827_ = 97;
v___x_828_ = lean_uint8_dec_le(v___x_827_, v_x_814_);
if (v___x_828_ == 0)
{
goto v___jp_821_;
}
else
{
uint8_t v___x_829_; uint8_t v___x_830_; 
v___x_829_ = 122;
v___x_830_ = lean_uint8_dec_le(v_x_814_, v___x_829_);
if (v___x_830_ == 0)
{
goto v___jp_821_;
}
else
{
v___y_816_ = v___x_813_;
goto v___jp_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object* v___x_835_, lean_object* v_x_836_){
_start:
{
uint8_t v___x_12749__boxed_837_; uint8_t v_x_boxed_838_; uint8_t v_res_839_; lean_object* v_r_840_; 
v___x_12749__boxed_837_ = lean_unbox(v___x_835_);
v_x_boxed_838_ = lean_unbox(v_x_836_);
v_res_839_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(v___x_12749__boxed_837_, v_x_boxed_838_);
v_r_840_ = lean_box(v_res_839_);
return v_r_840_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object* v___x_841_, lean_object* v___x_842_, lean_object* v_a_843_, uint8_t v_b_844_){
_start:
{
if (lean_obj_tag(v_a_843_) == 0)
{
lean_object* v_currPos_845_; lean_object* v_searcher_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_860_; 
v_currPos_845_ = lean_ctor_get(v_a_843_, 0);
v_searcher_846_ = lean_ctor_get(v_a_843_, 1);
v_isSharedCheck_860_ = !lean_is_exclusive(v_a_843_);
if (v_isSharedCheck_860_ == 0)
{
v___x_848_ = v_a_843_;
v_isShared_849_ = v_isSharedCheck_860_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_searcher_846_);
lean_inc(v_currPos_845_);
lean_dec(v_a_843_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_860_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
uint8_t v___x_850_; uint8_t v_decide_851_; 
v___x_850_ = 0;
v_decide_851_ = lean_nat_dec_eq(v_searcher_846_, v___x_842_);
if (v_decide_851_ == 0)
{
uint32_t v___x_852_; uint32_t v___x_853_; uint8_t v___x_854_; 
v___x_852_ = 46;
v___x_853_ = lean_string_utf8_get_fast(v___x_841_, v_searcher_846_);
v___x_854_ = lean_uint32_dec_eq(v___x_853_, v___x_852_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_855_ = lean_string_utf8_next_fast(v___x_841_, v_searcher_846_);
lean_dec(v_searcher_846_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_855_);
v___x_857_ = v___x_848_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_currPos_845_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_859_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
v_a_843_ = v___x_857_;
goto _start;
}
}
else
{
lean_del_object(v___x_848_);
lean_dec(v_searcher_846_);
lean_dec(v_currPos_845_);
return v___x_850_;
}
}
else
{
lean_del_object(v___x_848_);
lean_dec(v_searcher_846_);
lean_dec(v_currPos_845_);
return v___x_850_;
}
}
}
else
{
return v_b_844_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object* v___x_861_, lean_object* v___x_862_, lean_object* v_a_863_, lean_object* v_b_864_){
_start:
{
uint8_t v_b_boxed_865_; uint8_t v_res_866_; lean_object* v_r_867_; 
v_b_boxed_865_ = lean_unbox(v_b_864_);
v_res_866_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_861_, v___x_862_, v_a_863_, v_b_boxed_865_);
lean_dec(v___x_862_);
lean_dec_ref(v___x_861_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t v___x_868_, lean_object* v___x_869_, lean_object* v___x_870_, lean_object* v___x_871_, lean_object* v_a_872_, uint8_t v_b_873_){
_start:
{
uint8_t v___y_875_; lean_object* v_it_876_; lean_object* v_startInclusive_877_; lean_object* v_endExclusive_878_; uint8_t v___y_883_; 
if (v___x_868_ == 0)
{
uint8_t v___x_909_; 
v___x_909_ = 1;
v___y_883_ = v___x_909_;
goto v___jp_882_;
}
else
{
uint8_t v___x_910_; 
v___x_910_ = 0;
v___y_883_ = v___x_910_;
goto v___jp_882_;
}
v___jp_874_:
{
lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_879_ = lean_string_utf8_extract_fast(v___x_869_, v_startInclusive_877_, v_endExclusive_878_);
lean_dec(v_endExclusive_878_);
lean_dec(v_startInclusive_877_);
v___x_880_ = l_Std_Http_URI_isValidDomainLabel(v___x_879_);
if (v___x_880_ == 0)
{
lean_dec(v_it_876_);
lean_dec(v___x_871_);
return v___x_880_;
}
else
{
v_a_872_ = v_it_876_;
v_b_873_ = v___y_875_;
goto _start;
}
}
v___jp_882_:
{
if (lean_obj_tag(v_a_872_) == 0)
{
lean_object* v_currPos_884_; lean_object* v_searcher_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_908_; 
v_currPos_884_ = lean_ctor_get(v_a_872_, 0);
v_searcher_885_ = lean_ctor_get(v_a_872_, 1);
v_isSharedCheck_908_ = !lean_is_exclusive(v_a_872_);
if (v_isSharedCheck_908_ == 0)
{
v___x_887_ = v_a_872_;
v_isShared_888_ = v_isSharedCheck_908_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_searcher_885_);
lean_inc(v_currPos_884_);
lean_dec(v_a_872_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_908_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
uint8_t v_decide_889_; 
v_decide_889_ = lean_nat_dec_eq(v_searcher_885_, v___x_871_);
if (v_decide_889_ == 0)
{
uint32_t v___x_890_; uint32_t v___x_891_; uint8_t v___x_892_; 
v___x_890_ = 46;
v___x_891_ = lean_string_utf8_get_fast(v___x_869_, v_searcher_885_);
v___x_892_ = lean_uint32_dec_eq(v___x_891_, v___x_890_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = lean_string_utf8_next_fast(v___x_869_, v_searcher_885_);
lean_dec(v_searcher_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 1, v___x_893_);
v___x_895_ = v___x_887_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_currPos_884_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v___x_893_);
v___x_895_ = v_reuseFailAlloc_897_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
v_a_872_ = v___x_895_;
goto _start;
}
}
else
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_slice_901_; lean_object* v_nextIt_903_; 
v___x_898_ = lean_string_utf8_next_fast(v___x_869_, v_searcher_885_);
v___x_899_ = lean_nat_sub(v___x_898_, v_searcher_885_);
v___x_900_ = lean_nat_add(v_searcher_885_, v___x_899_);
lean_dec(v___x_899_);
v_slice_901_ = l_String_Slice_subslice_x21(v___x_870_, v_currPos_884_, v_searcher_885_);
lean_inc(v___x_900_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 1, v___x_900_);
lean_ctor_set(v___x_887_, 0, v___x_900_);
v_nextIt_903_ = v___x_887_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_900_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v___x_900_);
v_nextIt_903_ = v_reuseFailAlloc_906_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v_startInclusive_904_; lean_object* v_endExclusive_905_; 
v_startInclusive_904_ = lean_ctor_get(v_slice_901_, 0);
lean_inc(v_startInclusive_904_);
v_endExclusive_905_ = lean_ctor_get(v_slice_901_, 1);
lean_inc(v_endExclusive_905_);
lean_dec_ref(v_slice_901_);
v___y_875_ = v___y_883_;
v_it_876_ = v_nextIt_903_;
v_startInclusive_877_ = v_startInclusive_904_;
v_endExclusive_878_ = v_endExclusive_905_;
goto v___jp_874_;
}
}
}
else
{
lean_object* v___x_907_; 
lean_del_object(v___x_887_);
lean_dec(v_searcher_885_);
v___x_907_ = lean_box(1);
lean_inc(v___x_871_);
v___y_875_ = v___y_883_;
v_it_876_ = v___x_907_;
v_startInclusive_877_ = v_currPos_884_;
v_endExclusive_878_ = v___x_871_;
goto v___jp_874_;
}
}
}
else
{
lean_dec(v___x_871_);
return v_b_873_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object* v___x_911_, lean_object* v___x_912_, lean_object* v___x_913_, lean_object* v___x_914_, lean_object* v_a_915_, lean_object* v_b_916_){
_start:
{
uint8_t v___x_12830__boxed_917_; uint8_t v_b_boxed_918_; uint8_t v_res_919_; lean_object* v_r_920_; 
v___x_12830__boxed_917_ = lean_unbox(v___x_911_);
v_b_boxed_918_ = lean_unbox(v_b_916_);
v_res_919_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_12830__boxed_917_, v___x_912_, v___x_913_, v___x_914_, v_a_915_, v_b_boxed_918_);
lean_dec_ref(v___x_913_);
lean_dec_ref(v___x_912_);
v_r_920_ = lean_box(v_res_919_);
return v_r_920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object* v_config_928_, lean_object* v_a_929_){
_start:
{
lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v_lower_941_; lean_object* v_upper_942_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_994_; lean_object* v_pos_995_; lean_object* v___y_1019_; lean_object* v_pos_1020_; lean_object* v_res_1021_; lean_object* v_array_1022_; lean_object* v_idx_1023_; lean_object* v_pos_1025_; lean_object* v_res_1026_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_array_1022_ = lean_ctor_get(v_a_929_, 0);
v_idx_1023_ = lean_ctor_get(v_a_929_, 1);
v___x_1035_ = lean_byte_array_size(v_array_1022_);
v___x_1036_ = lean_nat_dec_lt(v_idx_1023_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; 
lean_inc(v_idx_1023_);
lean_inc_ref(v_array_1022_);
v___x_1037_ = lean_box(0);
v_pos_1025_ = v_a_929_;
v_res_1026_ = v___x_1037_;
goto v___jp_1024_;
}
else
{
uint8_t v___x_1038_; uint8_t v___x_1039_; uint8_t v___x_1040_; 
v___x_1038_ = lean_byte_array_fget(v_array_1022_, v_idx_1023_);
v___x_1039_ = 91;
v___x_1040_ = lean_uint8_dec_eq(v___x_1038_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; 
lean_inc(v_idx_1023_);
lean_inc_ref(v_array_1022_);
v___x_1041_ = lean_box(0);
v_pos_1025_ = v_a_929_;
v_res_1026_ = v___x_1041_;
goto v___jp_1024_;
}
else
{
lean_object* v___x_1042_; 
v___x_1042_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(v_a_929_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_pos_1043_; lean_object* v_res_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1052_; 
v_pos_1043_ = lean_ctor_get(v___x_1042_, 0);
v_res_1044_ = lean_ctor_get(v___x_1042_, 1);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1046_ = v___x_1042_;
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_res_1044_);
lean_inc(v_pos_1043_);
lean_dec(v___x_1042_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1048_, 0, v_res_1044_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 1, v___x_1048_);
v___x_1050_ = v___x_1046_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_pos_1043_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_pos_1053_; lean_object* v_err_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_pos_1053_ = lean_ctor_get(v___x_1042_, 0);
v_err_1054_ = lean_ctor_get(v___x_1042_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1042_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_err_1054_);
lean_inc(v_pos_1053_);
lean_dec(v___x_1042_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_pos_1053_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_err_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
v___jp_930_:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_933_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0));
v___x_934_ = lean_string_append(v___x_933_, v___y_932_);
lean_dec_ref(v___y_932_);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
v___x_936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_936_, 0, v___y_931_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
return v___x_936_;
}
v___jp_937_:
{
lean_object* v___x_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_943_ = l_ByteArray_toByteSlice(v___y_939_, v_lower_941_, v_upper_942_);
v___x_944_ = l_ByteSlice_toByteArray(v___x_943_);
v___x_945_ = lean_string_validate_utf8(v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; 
lean_dec_ref(v___x_944_);
lean_dec(v___y_940_);
v___x_946_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2));
v___x_947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_947_, 0, v___y_938_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_948_ = lean_string_from_utf8_unchecked(v___x_944_);
lean_inc_n(v___y_940_, 2);
lean_inc_ref(v___x_948_);
v___x_949_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___x_948_, v___y_940_);
v___x_950_ = lean_string_utf8_byte_size(v___x_949_);
lean_inc_ref(v___x_949_);
v___x_951_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___y_940_);
lean_ctor_set(v___x_951_, 2, v___x_950_);
v___x_952_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
v___x_953_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_949_, v___x_950_, v___x_952_, v___x_945_);
if (v___x_953_ == 0)
{
uint8_t v___x_954_; 
v___x_954_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_953_, v___x_949_, v___x_951_, v___x_950_, v___x_952_, v___x_945_);
lean_dec_ref_known(v___x_951_, 3);
if (v___x_954_ == 0)
{
lean_dec_ref(v___x_949_);
lean_dec(v___y_940_);
v___y_931_ = v___y_938_;
v___y_932_ = v___x_948_;
goto v___jp_930_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_955_ = lean_string_length(v___x_949_);
v___x_956_ = lean_unsigned_to_nat(255u);
v___x_957_ = lean_nat_dec_le(v___x_955_, v___x_956_);
if (v___x_957_ == 0)
{
lean_dec_ref(v___x_949_);
lean_dec(v___y_940_);
v___y_931_ = v___y_938_;
v___y_932_ = v___x_948_;
goto v___jp_930_;
}
else
{
uint8_t v___x_958_; 
v___x_958_ = lean_nat_dec_eq(v___x_950_, v___y_940_);
lean_dec(v___y_940_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec_ref(v___x_948_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_949_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v___y_938_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
return v___x_960_;
}
else
{
lean_dec_ref(v___x_949_);
v___y_931_ = v___y_938_;
v___y_932_ = v___x_948_;
goto v___jp_930_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_951_, 3);
lean_dec_ref(v___x_949_);
lean_dec(v___y_940_);
v___y_931_ = v___y_938_;
v___y_932_ = v___x_948_;
goto v___jp_930_;
}
}
}
v___jp_961_:
{
uint8_t v___x_968_; 
v___x_968_ = lean_nat_dec_le(v___y_966_, v___y_964_);
if (v___x_968_ == 0)
{
lean_dec(v___y_966_);
v___y_938_ = v___y_962_;
v___y_939_ = v___y_963_;
v___y_940_ = v___y_965_;
v_lower_941_ = v___y_967_;
v_upper_942_ = v___y_964_;
goto v___jp_937_;
}
else
{
lean_dec(v___y_964_);
v___y_938_ = v___y_962_;
v___y_939_ = v___y_963_;
v___y_940_ = v___y_965_;
v_lower_941_ = v___y_967_;
v_upper_942_ = v___y_966_;
goto v___jp_937_;
}
}
v___jp_969_:
{
lean_object* v_maxHostLength_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v_snd_975_; lean_object* v_fst_976_; lean_object* v_fst_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_991_; 
v_maxHostLength_972_ = lean_ctor_get(v_config_928_, 1);
v___x_973_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_971_);
lean_inc_ref(v___y_970_);
v___x_974_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___y_970_, v_maxHostLength_972_, v___x_973_, v___y_971_);
v_snd_975_ = lean_ctor_get(v___x_974_, 1);
lean_inc(v_snd_975_);
v_fst_976_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_fst_976_);
lean_dec_ref(v___x_974_);
v_fst_977_ = lean_ctor_get(v_snd_975_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v_snd_975_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; 
v_unused_992_ = lean_ctor_get(v_snd_975_, 1);
lean_dec(v_unused_992_);
v___x_979_ = v_snd_975_;
v_isShared_980_ = v_isSharedCheck_991_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_fst_977_);
lean_dec(v_snd_975_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_991_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
uint8_t v___x_981_; 
v___x_981_ = lean_nat_dec_eq(v_fst_976_, v___x_973_);
if (v___x_981_ == 0)
{
lean_object* v_array_982_; lean_object* v_idx_983_; lean_object* v___x_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
lean_del_object(v___x_979_);
v_array_982_ = lean_ctor_get(v___y_971_, 0);
lean_inc_ref(v_array_982_);
v_idx_983_ = lean_ctor_get(v___y_971_, 1);
lean_inc(v_idx_983_);
lean_dec_ref(v___y_971_);
v___x_984_ = lean_nat_add(v_idx_983_, v_fst_976_);
lean_dec(v_fst_976_);
v___x_985_ = lean_byte_array_size(v_array_982_);
v___x_986_ = lean_nat_dec_le(v_idx_983_, v___x_973_);
if (v___x_986_ == 0)
{
v___y_962_ = v_fst_977_;
v___y_963_ = v_array_982_;
v___y_964_ = v___x_985_;
v___y_965_ = v___x_973_;
v___y_966_ = v___x_984_;
v___y_967_ = v_idx_983_;
goto v___jp_961_;
}
else
{
lean_dec(v_idx_983_);
v___y_962_ = v_fst_977_;
v___y_963_ = v_array_982_;
v___y_964_ = v___x_985_;
v___y_965_ = v___x_973_;
v___y_966_ = v___x_984_;
v___y_967_ = v___x_973_;
goto v___jp_961_;
}
}
else
{
lean_object* v___x_987_; lean_object* v___x_989_; 
lean_dec(v_fst_977_);
lean_dec(v_fst_976_);
v___x_987_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6));
if (v_isShared_980_ == 0)
{
lean_ctor_set_tag(v___x_979_, 1);
lean_ctor_set(v___x_979_, 1, v___x_987_);
lean_ctor_set(v___x_979_, 0, v___y_971_);
v___x_989_ = v___x_979_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___y_971_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
v___jp_993_:
{
lean_object* v___x_996_; 
lean_inc_ref(v_pos_995_);
v___x_996_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv4(v_pos_995_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_pos_997_; lean_object* v_res_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1006_; 
lean_dec_ref(v_pos_995_);
v_pos_997_ = lean_ctor_get(v___x_996_, 0);
v_res_998_ = lean_ctor_get(v___x_996_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1000_ = v___x_996_;
v_isShared_1001_ = v_isSharedCheck_1006_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_res_998_);
lean_inc(v_pos_997_);
lean_dec(v___x_996_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1006_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1004_; 
v___x_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1002_, 0, v_res_998_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 1, v___x_1002_);
v___x_1004_ = v___x_1000_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_pos_997_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
lean_object* v_err_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1016_; 
v_err_1007_ = lean_ctor_get(v___x_996_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1016_ == 0)
{
lean_object* v_unused_1017_; 
v_unused_1017_ = lean_ctor_get(v___x_996_, 0);
lean_dec(v_unused_1017_);
v___x_1009_ = v___x_996_;
v_isShared_1010_ = v_isSharedCheck_1016_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_err_1007_);
lean_dec(v___x_996_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1016_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_idx_1011_; uint8_t v___x_1012_; 
v_idx_1011_ = lean_ctor_get(v_pos_995_, 1);
v___x_1012_ = lean_nat_dec_eq(v_idx_1011_, v_idx_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1014_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v_pos_995_);
v___x_1014_ = v___x_1009_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_pos_995_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v_err_1007_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
else
{
lean_del_object(v___x_1009_);
lean_dec(v_err_1007_);
v___y_970_ = v___y_994_;
v___y_971_ = v_pos_995_;
goto v___jp_969_;
}
}
}
}
v___jp_1018_:
{
v___y_970_ = v___y_1019_;
v___y_971_ = v_pos_1020_;
goto v___jp_969_;
}
v___jp_1024_:
{
lean_object* v___f_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___f_1027_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3));
v___x_1028_ = lean_byte_array_size(v_array_1022_);
v___x_1029_ = lean_nat_dec_lt(v_idx_1023_, v___x_1028_);
if (v___x_1029_ == 0)
{
lean_dec(v_idx_1023_);
lean_dec_ref(v_array_1022_);
v___y_1019_ = v___f_1027_;
v_pos_1020_ = v_pos_1025_;
v_res_1021_ = v_res_1026_;
goto v___jp_1018_;
}
else
{
uint8_t v___x_1030_; uint8_t v___x_1031_; uint8_t v___x_1032_; 
v___x_1030_ = lean_byte_array_fget(v_array_1022_, v_idx_1023_);
lean_dec(v_idx_1023_);
lean_dec_ref(v_array_1022_);
v___x_1031_ = 48;
v___x_1032_ = lean_uint8_dec_le(v___x_1031_, v___x_1030_);
if (v___x_1032_ == 0)
{
v___y_1019_ = v___f_1027_;
v_pos_1020_ = v_pos_1025_;
v_res_1021_ = v_res_1026_;
goto v___jp_1018_;
}
else
{
uint8_t v___x_1033_; uint8_t v___x_1034_; 
v___x_1033_ = 57;
v___x_1034_ = lean_uint8_dec_le(v___x_1030_, v___x_1033_);
if (v___x_1034_ == 0)
{
v___y_1019_ = v___f_1027_;
v_pos_1020_ = v_pos_1025_;
v_res_1021_ = v_res_1026_;
goto v___jp_1018_;
}
else
{
v___y_994_ = v___f_1027_;
v_pos_995_ = v_pos_1025_;
goto v___jp_993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object* v_config_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1062_, v_a_1063_);
lean_dec_ref(v_config_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object* v___x_1065_, lean_object* v___x_1066_, lean_object* v___x_1067_, lean_object* v_inst_1068_, lean_object* v_R_1069_, lean_object* v_a_1070_, uint8_t v_b_1071_, lean_object* v_c_1072_){
_start:
{
uint8_t v___x_1073_; 
v___x_1073_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___x_1065_, v___x_1067_, v_a_1070_, v_b_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object* v___x_1074_, lean_object* v___x_1075_, lean_object* v___x_1076_, lean_object* v_inst_1077_, lean_object* v_R_1078_, lean_object* v_a_1079_, lean_object* v_b_1080_, lean_object* v_c_1081_){
_start:
{
uint8_t v_b_boxed_1082_; uint8_t v_res_1083_; lean_object* v_r_1084_; 
v_b_boxed_1082_ = lean_unbox(v_b_1080_);
v_res_1083_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(v___x_1074_, v___x_1075_, v___x_1076_, v_inst_1077_, v_R_1078_, v_a_1079_, v_b_boxed_1082_, v_c_1081_);
lean_dec(v___x_1076_);
lean_dec_ref(v___x_1075_);
lean_dec_ref(v___x_1074_);
v_r_1084_ = lean_box(v_res_1083_);
return v_r_1084_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t v___x_1085_, lean_object* v___x_1086_, lean_object* v___x_1087_, lean_object* v___x_1088_, lean_object* v_inst_1089_, lean_object* v_R_1090_, lean_object* v_a_1091_, uint8_t v_b_1092_, lean_object* v_c_1093_){
_start:
{
uint8_t v___x_1094_; 
v___x_1094_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_1085_, v___x_1086_, v___x_1087_, v___x_1088_, v_a_1091_, v_b_1092_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object* v___x_1095_, lean_object* v___x_1096_, lean_object* v___x_1097_, lean_object* v___x_1098_, lean_object* v_inst_1099_, lean_object* v_R_1100_, lean_object* v_a_1101_, lean_object* v_b_1102_, lean_object* v_c_1103_){
_start:
{
uint8_t v___x_13199__boxed_1104_; uint8_t v_b_boxed_1105_; uint8_t v_res_1106_; lean_object* v_r_1107_; 
v___x_13199__boxed_1104_ = lean_unbox(v___x_1095_);
v_b_boxed_1105_ = lean_unbox(v_b_1102_);
v_res_1106_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(v___x_13199__boxed_1104_, v___x_1096_, v___x_1097_, v___x_1098_, v_inst_1099_, v_R_1100_, v_a_1101_, v_b_boxed_1105_, v_c_1103_);
lean_dec_ref(v___x_1097_);
lean_dec_ref(v___x_1096_);
v_r_1107_ = lean_box(v_res_1106_);
return v_r_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object* v_config_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v_port_1122_; lean_object* v___y_1123_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1132_; uint8_t v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; uint8_t v___y_1140_; lean_object* v___y_1142_; uint8_t v_val_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1153_; lean_object* v___y_1154_; uint8_t v___y_1155_; lean_object* v_pos_1156_; lean_object* v_array_1157_; lean_object* v_idx_1158_; lean_object* v_res_1159_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; uint8_t v___y_1169_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v_pos_1174_; lean_object* v_pos_1177_; lean_object* v_res_1178_; lean_object* v_err_1244_; lean_object* v___x_1249_; 
lean_inc_ref(v_a_1118_);
v___x_1249_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_1117_, v_a_1118_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_pos_1250_; lean_object* v_res_1251_; lean_object* v_array_1252_; lean_object* v_idx_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1270_; 
v_pos_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_pos_1250_);
v_res_1251_ = lean_ctor_get(v___x_1249_, 1);
lean_inc(v_res_1251_);
lean_dec_ref_known(v___x_1249_, 2);
v_array_1252_ = lean_ctor_get(v_pos_1250_, 0);
v_idx_1253_ = lean_ctor_get(v_pos_1250_, 1);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_pos_1250_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1255_ = v_pos_1250_;
v_isShared_1256_ = v_isSharedCheck_1270_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_idx_1253_);
lean_inc(v_array_1252_);
lean_dec(v_pos_1250_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1270_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; uint8_t v___x_1258_; 
v___x_1257_ = lean_byte_array_size(v_array_1252_);
v___x_1258_ = lean_nat_dec_lt(v_idx_1253_, v___x_1257_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; 
lean_del_object(v___x_1255_);
lean_dec(v_idx_1253_);
lean_dec_ref(v_array_1252_);
lean_dec(v_res_1251_);
v___x_1259_ = lean_box(0);
v_err_1244_ = v___x_1259_;
goto v___jp_1243_;
}
else
{
uint8_t v___x_1260_; uint8_t v_got_1261_; uint8_t v___x_1262_; 
v___x_1260_ = 64;
v_got_1261_ = lean_byte_array_fget(v_array_1252_, v_idx_1253_);
v___x_1262_ = lean_uint8_dec_eq(v_got_1261_, v___x_1260_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
lean_del_object(v___x_1255_);
lean_dec(v_idx_1253_);
lean_dec_ref(v_array_1252_);
lean_dec(v_res_1251_);
v___x_1263_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5));
v_err_1244_ = v___x_1263_;
goto v___jp_1243_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
lean_dec_ref(v_a_1118_);
v___x_1264_ = lean_unsigned_to_nat(1u);
v___x_1265_ = lean_nat_add(v_idx_1253_, v___x_1264_);
lean_dec(v_idx_1253_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v___x_1265_);
v___x_1267_ = v___x_1255_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_array_1252_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_res_1251_);
v_pos_1177_ = v___x_1267_;
v_res_1178_ = v___x_1268_;
goto v___jp_1176_;
}
}
}
}
}
else
{
lean_object* v_err_1271_; 
v_err_1271_ = lean_ctor_get(v___x_1249_, 1);
lean_inc(v_err_1271_);
lean_dec_ref_known(v___x_1249_, 2);
v_err_1244_ = v_err_1271_;
goto v___jp_1243_;
}
v___jp_1119_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1124_, 0, v___y_1120_);
lean_ctor_set(v___x_1124_, 1, v___y_1121_);
lean_ctor_set(v___x_1124_, 2, v_port_1122_);
v___x_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___y_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
return v___x_1125_;
}
v___jp_1126_:
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_box(1);
v___y_1120_ = v___y_1127_;
v___y_1121_ = v___y_1128_;
v_port_1122_ = v___x_1130_;
v___y_1123_ = v___y_1129_;
goto v___jp_1119_;
}
v___jp_1131_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1));
v___x_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___y_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
return v___x_1134_;
}
v___jp_1135_:
{
if (v___y_1136_ == 0)
{
if (v___y_1140_ == 0)
{
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
v___y_1132_ = v___y_1139_;
goto v___jp_1131_;
}
else
{
v___y_1127_ = v___y_1137_;
v___y_1128_ = v___y_1138_;
v___y_1129_ = v___y_1139_;
goto v___jp_1126_;
}
}
else
{
v___y_1127_ = v___y_1137_;
v___y_1128_ = v___y_1138_;
v___y_1129_ = v___y_1139_;
goto v___jp_1126_;
}
}
v___jp_1141_:
{
uint8_t v___x_1146_; uint8_t v___x_1147_; uint8_t v___x_1148_; uint8_t v___x_1149_; 
v___x_1146_ = 47;
v___x_1147_ = lean_uint8_dec_eq(v_val_1143_, v___x_1146_);
v___x_1148_ = 63;
v___x_1149_ = lean_uint8_dec_eq(v_val_1143_, v___x_1148_);
if (v___x_1149_ == 0)
{
uint8_t v___x_1150_; uint8_t v___x_1151_; 
v___x_1150_ = 35;
v___x_1151_ = lean_uint8_dec_eq(v_val_1143_, v___x_1150_);
v___y_1136_ = v___x_1147_;
v___y_1137_ = v___y_1142_;
v___y_1138_ = v___y_1144_;
v___y_1139_ = v___y_1145_;
v___y_1140_ = v___x_1151_;
goto v___jp_1135_;
}
else
{
v___y_1136_ = v___x_1147_;
v___y_1137_ = v___y_1142_;
v___y_1138_ = v___y_1144_;
v___y_1139_ = v___y_1145_;
v___y_1140_ = v___x_1149_;
goto v___jp_1135_;
}
}
v___jp_1152_:
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = lean_byte_array_size(v_array_1157_);
v___x_1161_ = lean_nat_dec_lt(v_idx_1158_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_dec(v_idx_1158_);
lean_dec_ref(v_array_1157_);
if (v___y_1155_ == 0)
{
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
v___y_1132_ = v_pos_1156_;
goto v___jp_1131_;
}
else
{
v___y_1127_ = v___y_1153_;
v___y_1128_ = v___y_1154_;
v___y_1129_ = v_pos_1156_;
goto v___jp_1126_;
}
}
else
{
uint8_t v___x_1162_; 
v___x_1162_ = lean_byte_array_fget(v_array_1157_, v_idx_1158_);
lean_dec(v_idx_1158_);
lean_dec_ref(v_array_1157_);
v___y_1142_ = v___y_1153_;
v_val_1143_ = v___x_1162_;
v___y_1144_ = v___y_1154_;
v___y_1145_ = v_pos_1156_;
goto v___jp_1141_;
}
}
v___jp_1163_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_box(0);
v___y_1153_ = v___y_1166_;
v___y_1154_ = v___y_1168_;
v___y_1155_ = v___y_1169_;
v_pos_1156_ = v___y_1165_;
v_array_1157_ = v___y_1164_;
v_idx_1158_ = v___y_1167_;
v_res_1159_ = v___x_1170_;
goto v___jp_1152_;
}
v___jp_1171_:
{
lean_object* v___x_1175_; 
v___x_1175_ = lean_box(0);
v___y_1120_ = v___y_1172_;
v___y_1121_ = v___y_1173_;
v_port_1122_ = v___x_1175_;
v___y_1123_ = v_pos_1174_;
goto v___jp_1119_;
}
v___jp_1176_:
{
lean_object* v___x_1179_; 
v___x_1179_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1117_, v_pos_1177_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_pos_1180_; lean_object* v_res_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1233_; 
v_pos_1180_ = lean_ctor_get(v___x_1179_, 0);
v_res_1181_ = lean_ctor_get(v___x_1179_, 1);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1183_ = v___x_1179_;
v_isShared_1184_ = v_isSharedCheck_1233_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_res_1181_);
lean_inc(v_pos_1180_);
lean_dec(v___x_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1233_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_array_1185_; lean_object* v_idx_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v_array_1185_ = lean_ctor_get(v_pos_1180_, 0);
v_idx_1186_ = lean_ctor_get(v_pos_1180_, 1);
v___x_1187_ = lean_byte_array_size(v_array_1185_);
v___x_1188_ = lean_nat_dec_lt(v_idx_1186_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_del_object(v___x_1183_);
v___y_1172_ = v_res_1178_;
v___y_1173_ = v_res_1181_;
v_pos_1174_ = v_pos_1180_;
goto v___jp_1171_;
}
else
{
uint8_t v___x_1189_; uint8_t v___x_1190_; uint8_t v___x_1191_; 
v___x_1189_ = lean_byte_array_fget(v_array_1185_, v_idx_1186_);
v___x_1190_ = 58;
v___x_1191_ = lean_uint8_dec_eq(v___x_1189_, v___x_1190_);
if (v___x_1191_ == 0)
{
lean_del_object(v___x_1183_);
v___y_1172_ = v_res_1178_;
v___y_1173_ = v_res_1181_;
v_pos_1174_ = v_pos_1180_;
goto v___jp_1171_;
}
else
{
if (v___x_1188_ == 0)
{
lean_object* v___x_1192_; lean_object* v___x_1194_; 
lean_dec(v_res_1181_);
lean_dec(v_res_1178_);
v___x_1192_ = lean_box(0);
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 1);
lean_ctor_set(v___x_1183_, 1, v___x_1192_);
v___x_1194_ = v___x_1183_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_pos_1180_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v___x_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
else
{
uint8_t v___x_1196_; 
v___x_1196_ = lean_uint8_dec_eq(v___x_1189_, v___x_1190_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; lean_object* v___x_1199_; 
lean_dec(v_res_1181_);
lean_dec(v_res_1178_);
v___x_1197_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 1);
lean_ctor_set(v___x_1183_, 1, v___x_1197_);
v___x_1199_ = v___x_1183_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_pos_1180_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
else
{
lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1230_; 
lean_inc(v_idx_1186_);
lean_inc_ref(v_array_1185_);
lean_del_object(v___x_1183_);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_pos_1180_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; lean_object* v_unused_1232_; 
v_unused_1231_ = lean_ctor_get(v_pos_1180_, 1);
lean_dec(v_unused_1231_);
v_unused_1232_ = lean_ctor_get(v_pos_1180_, 0);
lean_dec(v_unused_1232_);
v___x_1202_ = v_pos_1180_;
v_isShared_1203_ = v_isSharedCheck_1230_;
goto v_resetjp_1201_;
}
else
{
lean_dec(v_pos_1180_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1230_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_add(v_idx_1186_, v___x_1204_);
lean_dec(v_idx_1186_);
lean_inc(v___x_1205_);
lean_inc_ref(v_array_1185_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 1, v___x_1205_);
v___x_1207_ = v___x_1202_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_array_1185_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_nat_dec_lt(v___x_1205_, v___x_1187_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_box(0);
v___y_1153_ = v_res_1178_;
v___y_1154_ = v_res_1181_;
v___y_1155_ = v___x_1191_;
v_pos_1156_ = v___x_1207_;
v_array_1157_ = v_array_1185_;
v_idx_1158_ = v___x_1205_;
v_res_1159_ = v___x_1209_;
goto v___jp_1152_;
}
else
{
uint8_t v___x_1210_; uint8_t v___x_1211_; uint8_t v___x_1212_; 
v___x_1210_ = lean_byte_array_fget(v_array_1185_, v___x_1205_);
v___x_1211_ = 48;
v___x_1212_ = lean_uint8_dec_le(v___x_1211_, v___x_1210_);
if (v___x_1212_ == 0)
{
v___y_1164_ = v_array_1185_;
v___y_1165_ = v___x_1207_;
v___y_1166_ = v_res_1178_;
v___y_1167_ = v___x_1205_;
v___y_1168_ = v_res_1181_;
v___y_1169_ = v___x_1191_;
goto v___jp_1163_;
}
else
{
uint8_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = 57;
v___x_1214_ = lean_uint8_dec_le(v___x_1210_, v___x_1213_);
if (v___x_1214_ == 0)
{
v___y_1164_ = v_array_1185_;
v___y_1165_ = v___x_1207_;
v___y_1166_ = v_res_1178_;
v___y_1167_ = v___x_1205_;
v___y_1168_ = v_res_1181_;
v___y_1169_ = v___x_1191_;
goto v___jp_1163_;
}
else
{
lean_object* v___x_1215_; 
lean_dec(v___x_1205_);
lean_dec_ref(v_array_1185_);
v___x_1215_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_1207_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_pos_1216_; lean_object* v_res_1217_; lean_object* v___x_1218_; uint16_t v___x_1219_; 
v_pos_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_pos_1216_);
v_res_1217_ = lean_ctor_get(v___x_1215_, 1);
lean_inc(v_res_1217_);
lean_dec_ref_known(v___x_1215_, 2);
v___x_1218_ = lean_alloc_ctor(2, 0, 2);
v___x_1219_ = lean_unbox(v_res_1217_);
lean_dec(v_res_1217_);
lean_ctor_set_uint16(v___x_1218_, 0, v___x_1219_);
v___y_1120_ = v_res_1178_;
v___y_1121_ = v_res_1181_;
v_port_1122_ = v___x_1218_;
v___y_1123_ = v_pos_1216_;
goto v___jp_1119_;
}
else
{
lean_object* v_pos_1220_; lean_object* v_err_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
lean_dec(v_res_1181_);
lean_dec(v_res_1178_);
v_pos_1220_ = lean_ctor_get(v___x_1215_, 0);
v_err_1221_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1215_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_err_1221_);
lean_inc(v_pos_1220_);
lean_dec(v___x_1215_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_pos_1220_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_err_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
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
lean_object* v_pos_1234_; lean_object* v_err_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec(v_res_1178_);
v_pos_1234_ = lean_ctor_get(v___x_1179_, 0);
v_err_1235_ = lean_ctor_get(v___x_1179_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1179_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_err_1235_);
lean_inc(v_pos_1234_);
lean_dec(v___x_1179_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_pos_1234_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_err_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
v___jp_1243_:
{
lean_object* v_idx_1245_; uint8_t v___x_1246_; 
v_idx_1245_ = lean_ctor_get(v_a_1118_, 1);
v___x_1246_ = lean_nat_dec_eq(v_idx_1245_, v_idx_1245_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1247_, 0, v_a_1118_);
lean_ctor_set(v___x_1247_, 1, v_err_1244_);
return v___x_1247_;
}
else
{
lean_object* v___x_1248_; 
lean_dec(v_err_1244_);
v___x_1248_ = lean_box(0);
v_pos_1177_ = v_a_1118_;
v_res_1178_ = v___x_1248_;
goto v___jp_1176_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object* v_config_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_1272_, v_a_1273_);
lean_dec_ref(v_config_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t v_c_1275_){
_start:
{
uint8_t v___x_1323_; uint8_t v___x_1324_; 
v___x_1323_ = 48;
v___x_1324_ = lean_uint8_dec_le(v___x_1323_, v_c_1275_);
if (v___x_1324_ == 0)
{
goto v___jp_1318_;
}
else
{
uint8_t v___x_1325_; uint8_t v___x_1326_; 
v___x_1325_ = 57;
v___x_1326_ = lean_uint8_dec_le(v_c_1275_, v___x_1325_);
if (v___x_1326_ == 0)
{
goto v___jp_1318_;
}
else
{
return v___x_1326_;
}
}
v___jp_1276_:
{
uint8_t v___x_1277_; uint8_t v___x_1278_; 
v___x_1277_ = 45;
v___x_1278_ = lean_uint8_dec_eq(v_c_1275_, v___x_1277_);
if (v___x_1278_ == 0)
{
uint8_t v___x_1279_; uint8_t v___x_1280_; 
v___x_1279_ = 46;
v___x_1280_ = lean_uint8_dec_eq(v_c_1275_, v___x_1279_);
if (v___x_1280_ == 0)
{
uint8_t v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = 95;
v___x_1282_ = lean_uint8_dec_eq(v_c_1275_, v___x_1281_);
if (v___x_1282_ == 0)
{
uint8_t v___x_1283_; uint8_t v___x_1284_; 
v___x_1283_ = 126;
v___x_1284_ = lean_uint8_dec_eq(v_c_1275_, v___x_1283_);
if (v___x_1284_ == 0)
{
uint8_t v___x_1285_; uint8_t v___x_1286_; 
v___x_1285_ = 33;
v___x_1286_ = lean_uint8_dec_eq(v_c_1275_, v___x_1285_);
if (v___x_1286_ == 0)
{
uint8_t v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = 36;
v___x_1288_ = lean_uint8_dec_eq(v_c_1275_, v___x_1287_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = 38;
v___x_1290_ = lean_uint8_dec_eq(v_c_1275_, v___x_1289_);
if (v___x_1290_ == 0)
{
uint8_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = 39;
v___x_1292_ = lean_uint8_dec_eq(v_c_1275_, v___x_1291_);
if (v___x_1292_ == 0)
{
uint8_t v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = 40;
v___x_1294_ = lean_uint8_dec_eq(v_c_1275_, v___x_1293_);
if (v___x_1294_ == 0)
{
uint8_t v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = 41;
v___x_1296_ = lean_uint8_dec_eq(v_c_1275_, v___x_1295_);
if (v___x_1296_ == 0)
{
uint8_t v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = 42;
v___x_1298_ = lean_uint8_dec_eq(v_c_1275_, v___x_1297_);
if (v___x_1298_ == 0)
{
uint8_t v___x_1299_; uint8_t v___x_1300_; 
v___x_1299_ = 43;
v___x_1300_ = lean_uint8_dec_eq(v_c_1275_, v___x_1299_);
if (v___x_1300_ == 0)
{
uint8_t v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = 44;
v___x_1302_ = lean_uint8_dec_eq(v_c_1275_, v___x_1301_);
if (v___x_1302_ == 0)
{
uint8_t v___x_1303_; uint8_t v___x_1304_; 
v___x_1303_ = 59;
v___x_1304_ = lean_uint8_dec_eq(v_c_1275_, v___x_1303_);
if (v___x_1304_ == 0)
{
uint8_t v___x_1305_; uint8_t v___x_1306_; 
v___x_1305_ = 61;
v___x_1306_ = lean_uint8_dec_eq(v_c_1275_, v___x_1305_);
if (v___x_1306_ == 0)
{
uint8_t v___x_1307_; uint8_t v___x_1308_; 
v___x_1307_ = 58;
v___x_1308_ = lean_uint8_dec_eq(v_c_1275_, v___x_1307_);
if (v___x_1308_ == 0)
{
uint8_t v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = 64;
v___x_1310_ = lean_uint8_dec_eq(v_c_1275_, v___x_1309_);
if (v___x_1310_ == 0)
{
uint8_t v___x_1311_; uint8_t v___x_1312_; 
v___x_1311_ = 37;
v___x_1312_ = lean_uint8_dec_eq(v_c_1275_, v___x_1311_);
return v___x_1312_;
}
else
{
return v___x_1310_;
}
}
else
{
return v___x_1308_;
}
}
else
{
return v___x_1306_;
}
}
else
{
return v___x_1304_;
}
}
else
{
return v___x_1302_;
}
}
else
{
return v___x_1300_;
}
}
else
{
return v___x_1298_;
}
}
else
{
return v___x_1296_;
}
}
else
{
return v___x_1294_;
}
}
else
{
return v___x_1292_;
}
}
else
{
return v___x_1290_;
}
}
else
{
return v___x_1288_;
}
}
else
{
return v___x_1286_;
}
}
else
{
return v___x_1284_;
}
}
else
{
return v___x_1282_;
}
}
else
{
return v___x_1280_;
}
}
else
{
return v___x_1278_;
}
}
v___jp_1313_:
{
uint8_t v___x_1314_; uint8_t v___x_1315_; 
v___x_1314_ = 65;
v___x_1315_ = lean_uint8_dec_le(v___x_1314_, v_c_1275_);
if (v___x_1315_ == 0)
{
goto v___jp_1276_;
}
else
{
uint8_t v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = 90;
v___x_1317_ = lean_uint8_dec_le(v_c_1275_, v___x_1316_);
if (v___x_1317_ == 0)
{
goto v___jp_1276_;
}
else
{
return v___x_1317_;
}
}
}
v___jp_1318_:
{
uint8_t v___x_1319_; uint8_t v___x_1320_; 
v___x_1319_ = 97;
v___x_1320_ = lean_uint8_dec_le(v___x_1319_, v_c_1275_);
if (v___x_1320_ == 0)
{
goto v___jp_1313_;
}
else
{
uint8_t v___x_1321_; uint8_t v___x_1322_; 
v___x_1321_ = 122;
v___x_1322_ = lean_uint8_dec_le(v_c_1275_, v___x_1321_);
if (v___x_1322_ == 0)
{
goto v___jp_1313_;
}
else
{
return v___x_1322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object* v_c_1327_){
_start:
{
uint8_t v_c_boxed_1328_; uint8_t v_res_1329_; lean_object* v_r_1330_; 
v_c_boxed_1328_ = lean_unbox(v_c_1327_);
v_res_1329_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(v_c_boxed_1328_);
v_r_1330_ = lean_box(v_res_1329_);
return v_r_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object* v_config_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v_maxSegmentLength_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v_snd_1338_; lean_object* v_fst_1339_; lean_object* v_fst_1340_; lean_object* v_array_1341_; lean_object* v_idx_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1359_; 
v_maxSegmentLength_1334_ = lean_ctor_get(v_config_1332_, 3);
v___f_1335_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0));
v___x_1336_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1333_);
v___x_1337_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1335_, v_maxSegmentLength_1334_, v___x_1336_, v_a_1333_);
v_snd_1338_ = lean_ctor_get(v___x_1337_, 1);
lean_inc(v_snd_1338_);
v_fst_1339_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_fst_1339_);
lean_dec_ref(v___x_1337_);
v_fst_1340_ = lean_ctor_get(v_snd_1338_, 0);
lean_inc(v_fst_1340_);
lean_dec(v_snd_1338_);
v_array_1341_ = lean_ctor_get(v_a_1333_, 0);
v_idx_1342_ = lean_ctor_get(v_a_1333_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_a_1333_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1344_ = v_a_1333_;
v_isShared_1345_ = v_isSharedCheck_1359_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_idx_1342_);
lean_inc(v_array_1341_);
lean_dec(v_a_1333_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1359_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v_lower_1347_; lean_object* v_upper_1348_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___y_1356_; uint8_t v___x_1358_; 
v___x_1353_ = lean_nat_add(v_idx_1342_, v_fst_1339_);
lean_dec(v_fst_1339_);
v___x_1354_ = lean_byte_array_size(v_array_1341_);
v___x_1358_ = lean_nat_dec_le(v_idx_1342_, v___x_1336_);
if (v___x_1358_ == 0)
{
v___y_1356_ = v_idx_1342_;
goto v___jp_1355_;
}
else
{
lean_dec(v_idx_1342_);
v___y_1356_ = v___x_1336_;
goto v___jp_1355_;
}
v___jp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1351_; 
v___x_1349_ = l_ByteArray_toByteSlice(v_array_1341_, v_lower_1347_, v_upper_1348_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v___x_1349_);
lean_ctor_set(v___x_1344_, 0, v_fst_1340_);
v___x_1351_ = v___x_1344_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_fst_1340_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
v___jp_1355_:
{
uint8_t v___x_1357_; 
v___x_1357_ = lean_nat_dec_le(v___x_1353_, v___x_1354_);
if (v___x_1357_ == 0)
{
lean_dec(v___x_1353_);
v_lower_1347_ = v___y_1356_;
v_upper_1348_ = v___x_1354_;
goto v___jp_1346_;
}
else
{
v_lower_1347_ = v___y_1356_;
v_upper_1348_ = v___x_1353_;
goto v___jp_1346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object* v_config_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1360_, v_a_1361_);
lean_dec_ref(v_config_1360_);
return v_res_1362_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t v_c_1363_){
_start:
{
uint8_t v___x_1364_; uint8_t v___x_1365_; 
v___x_1364_ = 63;
v___x_1365_ = lean_uint8_dec_eq(v_c_1363_, v___x_1364_);
if (v___x_1365_ == 0)
{
uint8_t v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = 35;
v___x_1367_ = lean_uint8_dec_eq(v_c_1363_, v___x_1366_);
return v___x_1367_;
}
else
{
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object* v_c_1368_){
_start:
{
uint8_t v_c_boxed_1369_; uint8_t v_res_1370_; lean_object* v_r_1371_; 
v_c_boxed_1369_ = lean_unbox(v_c_1368_);
v_res_1370_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v_c_boxed_1369_);
v_r_1371_ = lean_box(v_res_1370_);
return v_r_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object* v_config_1379_, lean_object* v_a_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v_array_1406_; lean_object* v_idx_1407_; lean_object* v_fst_1408_; lean_object* v_snd_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1574_; 
v_array_1406_ = lean_ctor_get(v___y_1381_, 0);
v_idx_1407_ = lean_ctor_get(v___y_1381_, 1);
v_fst_1408_ = lean_ctor_get(v_a_1380_, 0);
v_snd_1409_ = lean_ctor_get(v_a_1380_, 1);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_a_1380_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1411_ = v_a_1380_;
v_isShared_1412_ = v_isSharedCheck_1574_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_snd_1409_);
lean_inc(v_fst_1408_);
lean_dec(v_a_1380_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1574_;
goto v_resetjp_1410_;
}
v___jp_1382_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___y_1384_);
lean_ctor_set(v___x_1386_, 1, v___y_1385_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___y_1383_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
return v___x_1387_;
}
v___jp_1388_:
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = lean_array_get_size(v___y_1391_);
v___x_1394_ = lean_nat_dec_le(v___y_1389_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_dec(v___y_1389_);
v___x_1395_ = l_ByteArray_empty;
v___x_1396_ = lean_array_push(v___y_1391_, v___x_1395_);
v___x_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
lean_ctor_set(v___x_1397_, 1, v___y_1390_);
v_a_1380_ = v___x_1397_;
v___y_1381_ = v___y_1392_;
goto _start;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v_config_1379_);
v___x_1399_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1400_ = l_Nat_reprFast(v___y_1389_);
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
lean_dec_ref(v___x_1400_);
v___x_1402_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
v___x_1405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___y_1392_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
return v___x_1405_;
}
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = lean_byte_array_size(v_array_1406_);
v___x_1414_ = lean_nat_dec_lt(v_idx_1407_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1416_; 
lean_dec_ref(v_config_1379_);
if (v_isShared_1412_ == 0)
{
v___x_1416_ = v___x_1411_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_fst_1408_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v_snd_1409_);
v___x_1416_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___y_1381_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
return v___x_1417_;
}
}
else
{
uint8_t v___x_1515_; uint8_t v___x_1565_; 
v___x_1515_ = lean_byte_array_fget(v_array_1406_, v_idx_1407_);
v___x_1565_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1515_);
if (v___x_1565_ == 0)
{
uint8_t v___x_1566_; uint8_t v___x_1567_; 
v___x_1566_ = 47;
v___x_1567_ = lean_uint8_dec_eq(v___x_1515_, v___x_1566_);
if (v___x_1567_ == 0)
{
uint8_t v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = 48;
v___x_1569_ = lean_uint8_dec_le(v___x_1568_, v___x_1515_);
if (v___x_1569_ == 0)
{
goto v___jp_1560_;
}
else
{
uint8_t v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = 57;
v___x_1571_ = lean_uint8_dec_le(v___x_1515_, v___x_1570_);
if (v___x_1571_ == 0)
{
goto v___jp_1560_;
}
else
{
goto v___jp_1419_;
}
}
}
else
{
goto v___jp_1419_;
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_fst_1408_);
lean_ctor_set(v___x_1572_, 1, v_snd_1409_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___y_1381_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
return v___x_1573_;
}
v___jp_1419_:
{
lean_object* v_maxPathSegments_1420_; lean_object* v_maxTotalPathLength_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v_maxPathSegments_1420_ = lean_ctor_get(v_config_1379_, 6);
v_maxTotalPathLength_1421_ = lean_ctor_get(v_config_1379_, 7);
v___x_1422_ = lean_array_get_size(v_fst_1408_);
v___x_1423_ = lean_nat_dec_le(v_maxPathSegments_1420_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; 
v___x_1424_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1379_, v___y_1381_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_pos_1425_; lean_object* v_res_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1498_; 
v_pos_1425_ = lean_ctor_get(v___x_1424_, 0);
v_res_1426_ = lean_ctor_get(v___x_1424_, 1);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1428_ = v___x_1424_;
v_isShared_1429_ = v_isSharedCheck_1498_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_res_1426_);
lean_inc(v_pos_1425_);
lean_dec(v___x_1424_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1498_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
lean_inc(v_res_1426_);
v___x_1430_ = l_ByteSlice_toByteArray(v_res_1426_);
v___x_1431_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1430_);
if (lean_obj_tag(v___x_1431_) == 1)
{
lean_object* v_val_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1493_; 
v_val_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1493_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_val_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1493_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; 
v___x_1436_ = l_ByteSlice_size(v_res_1426_);
lean_dec(v_res_1426_);
v___x_1437_ = lean_nat_add(v_snd_1409_, v___x_1436_);
lean_dec(v___x_1436_);
lean_dec(v_snd_1409_);
v___x_1438_ = lean_nat_dec_lt(v_maxTotalPathLength_1421_, v___x_1437_);
if (v___x_1438_ == 0)
{
lean_object* v_array_1439_; lean_object* v_idx_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
v_array_1439_ = lean_ctor_get(v_pos_1425_, 0);
v_idx_1440_ = lean_ctor_get(v_pos_1425_, 1);
v___x_1441_ = lean_array_push(v_fst_1408_, v_val_1432_);
v___x_1442_ = lean_byte_array_size(v_array_1439_);
v___x_1443_ = lean_nat_dec_lt(v_idx_1440_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_del_object(v___x_1434_);
lean_del_object(v___x_1428_);
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___y_1383_ = v_pos_1425_;
v___y_1384_ = v___x_1441_;
v___y_1385_ = v___x_1437_;
goto v___jp_1382_;
}
else
{
uint8_t v___x_1444_; uint8_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1444_ = lean_byte_array_fget(v_array_1439_, v_idx_1440_);
v___x_1445_ = 47;
v___x_1446_ = lean_uint8_dec_eq(v___x_1444_, v___x_1445_);
if (v___x_1446_ == 0)
{
lean_del_object(v___x_1434_);
lean_del_object(v___x_1428_);
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___y_1383_ = v_pos_1425_;
v___y_1384_ = v___x_1441_;
v___y_1385_ = v___x_1437_;
goto v___jp_1382_;
}
else
{
lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = lean_nat_add(v___x_1437_, v___x_1447_);
lean_dec(v___x_1437_);
v___x_1449_ = lean_nat_dec_lt(v_maxTotalPathLength_1421_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_del_object(v___x_1434_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
lean_dec(v___x_1448_);
lean_dec_ref(v___x_1441_);
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___x_1450_ = lean_box(0);
if (v_isShared_1429_ == 0)
{
lean_ctor_set_tag(v___x_1428_, 1);
lean_ctor_set(v___x_1428_, 1, v___x_1450_);
v___x_1452_ = v___x_1428_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_pos_1425_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
else
{
lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1468_; 
lean_inc(v_idx_1440_);
lean_inc_ref(v_array_1439_);
lean_del_object(v___x_1428_);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_pos_1425_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; lean_object* v_unused_1470_; 
v_unused_1469_ = lean_ctor_get(v_pos_1425_, 1);
lean_dec(v_unused_1469_);
v_unused_1470_ = lean_ctor_get(v_pos_1425_, 0);
lean_dec(v_unused_1470_);
v___x_1455_ = v_pos_1425_;
v_isShared_1456_ = v_isSharedCheck_1468_;
goto v_resetjp_1454_;
}
else
{
lean_dec(v_pos_1425_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1468_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1457_ = lean_nat_add(v_idx_1440_, v___x_1447_);
lean_dec(v_idx_1440_);
lean_inc(v___x_1457_);
lean_inc_ref(v_array_1439_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 1, v___x_1457_);
v___x_1459_ = v___x_1455_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_array_1439_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
uint8_t v___x_1460_; 
v___x_1460_ = lean_nat_dec_lt(v___x_1457_, v___x_1442_);
if (v___x_1460_ == 0)
{
lean_dec(v___x_1457_);
lean_dec_ref(v_array_1439_);
lean_del_object(v___x_1411_);
lean_inc(v_maxPathSegments_1420_);
v___y_1389_ = v_maxPathSegments_1420_;
v___y_1390_ = v___x_1448_;
v___y_1391_ = v___x_1441_;
v___y_1392_ = v___x_1459_;
goto v___jp_1388_;
}
else
{
uint8_t v___x_1461_; uint8_t v___x_1462_; 
v___x_1461_ = lean_byte_array_fget(v_array_1439_, v___x_1457_);
lean_dec(v___x_1457_);
lean_dec_ref(v_array_1439_);
v___x_1462_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1464_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 1, v___x_1448_);
lean_ctor_set(v___x_1411_, 0, v___x_1441_);
v___x_1464_ = v___x_1411_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1466_, 1, v___x_1448_);
v___x_1464_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
v_a_1380_ = v___x_1464_;
v___y_1381_ = v___x_1459_;
goto _start;
}
}
else
{
lean_del_object(v___x_1411_);
lean_inc(v_maxPathSegments_1420_);
v___y_1389_ = v_maxPathSegments_1420_;
v___y_1390_ = v___x_1448_;
v___y_1391_ = v___x_1441_;
v___y_1392_ = v___x_1459_;
goto v___jp_1388_;
}
}
}
}
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
lean_inc(v_maxTotalPathLength_1421_);
lean_dec(v___x_1448_);
lean_dec_ref(v___x_1441_);
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___x_1471_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1472_ = l_Nat_reprFast(v_maxTotalPathLength_1421_);
v___x_1473_ = lean_string_append(v___x_1471_, v___x_1472_);
lean_dec_ref(v___x_1472_);
v___x_1474_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1475_ = lean_string_append(v___x_1473_, v___x_1474_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1475_);
v___x_1477_ = v___x_1434_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1479_; 
if (v_isShared_1429_ == 0)
{
lean_ctor_set_tag(v___x_1428_, 1);
lean_ctor_set(v___x_1428_, 1, v___x_1477_);
v___x_1479_ = v___x_1428_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_pos_1425_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
lean_inc(v_maxTotalPathLength_1421_);
lean_dec(v___x_1437_);
lean_dec(v_val_1432_);
lean_del_object(v___x_1411_);
lean_dec(v_fst_1408_);
lean_dec_ref(v_config_1379_);
v___x_1482_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1483_ = l_Nat_reprFast(v_maxTotalPathLength_1421_);
v___x_1484_ = lean_string_append(v___x_1482_, v___x_1483_);
lean_dec_ref(v___x_1483_);
v___x_1485_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1486_ = lean_string_append(v___x_1484_, v___x_1485_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1486_);
v___x_1488_ = v___x_1434_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1490_; 
if (v_isShared_1429_ == 0)
{
lean_ctor_set_tag(v___x_1428_, 1);
lean_ctor_set(v___x_1428_, 1, v___x_1488_);
v___x_1490_ = v___x_1428_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_pos_1425_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
lean_dec(v___x_1431_);
lean_dec(v_res_1426_);
lean_del_object(v___x_1411_);
lean_dec(v_snd_1409_);
lean_dec(v_fst_1408_);
lean_dec_ref(v_config_1379_);
v___x_1494_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1429_ == 0)
{
lean_ctor_set_tag(v___x_1428_, 1);
lean_ctor_set(v___x_1428_, 1, v___x_1494_);
v___x_1496_ = v___x_1428_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_pos_1425_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v___x_1494_);
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
else
{
lean_object* v_pos_1499_; lean_object* v_err_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_del_object(v___x_1411_);
lean_dec(v_snd_1409_);
lean_dec(v_fst_1408_);
lean_dec_ref(v_config_1379_);
v_pos_1499_ = lean_ctor_get(v___x_1424_, 0);
v_err_1500_ = lean_ctor_get(v___x_1424_, 1);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1424_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_err_1500_);
lean_inc(v_pos_1499_);
lean_dec(v___x_1424_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_pos_1499_);
lean_ctor_set(v_reuseFailAlloc_1506_, 1, v_err_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
lean_inc(v_maxPathSegments_1420_);
lean_del_object(v___x_1411_);
lean_dec(v_snd_1409_);
lean_dec(v_fst_1408_);
lean_dec_ref(v_config_1379_);
v___x_1508_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1509_ = l_Nat_reprFast(v_maxPathSegments_1420_);
v___x_1510_ = lean_string_append(v___x_1508_, v___x_1509_);
lean_dec_ref(v___x_1509_);
v___x_1511_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1512_ = lean_string_append(v___x_1510_, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
v___x_1514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___y_1381_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
return v___x_1514_;
}
}
v___jp_1516_:
{
uint8_t v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = 45;
v___x_1518_ = lean_uint8_dec_eq(v___x_1515_, v___x_1517_);
if (v___x_1518_ == 0)
{
uint8_t v___x_1519_; uint8_t v___x_1520_; 
v___x_1519_ = 46;
v___x_1520_ = lean_uint8_dec_eq(v___x_1515_, v___x_1519_);
if (v___x_1520_ == 0)
{
uint8_t v___x_1521_; uint8_t v___x_1522_; 
v___x_1521_ = 95;
v___x_1522_ = lean_uint8_dec_eq(v___x_1515_, v___x_1521_);
if (v___x_1522_ == 0)
{
uint8_t v___x_1523_; uint8_t v___x_1524_; 
v___x_1523_ = 126;
v___x_1524_ = lean_uint8_dec_eq(v___x_1515_, v___x_1523_);
if (v___x_1524_ == 0)
{
uint8_t v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = 33;
v___x_1526_ = lean_uint8_dec_eq(v___x_1515_, v___x_1525_);
if (v___x_1526_ == 0)
{
uint8_t v___x_1527_; uint8_t v___x_1528_; 
v___x_1527_ = 36;
v___x_1528_ = lean_uint8_dec_eq(v___x_1515_, v___x_1527_);
if (v___x_1528_ == 0)
{
uint8_t v___x_1529_; uint8_t v___x_1530_; 
v___x_1529_ = 38;
v___x_1530_ = lean_uint8_dec_eq(v___x_1515_, v___x_1529_);
if (v___x_1530_ == 0)
{
uint8_t v___x_1531_; uint8_t v___x_1532_; 
v___x_1531_ = 39;
v___x_1532_ = lean_uint8_dec_eq(v___x_1515_, v___x_1531_);
if (v___x_1532_ == 0)
{
uint8_t v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = 40;
v___x_1534_ = lean_uint8_dec_eq(v___x_1515_, v___x_1533_);
if (v___x_1534_ == 0)
{
uint8_t v___x_1535_; uint8_t v___x_1536_; 
v___x_1535_ = 41;
v___x_1536_ = lean_uint8_dec_eq(v___x_1515_, v___x_1535_);
if (v___x_1536_ == 0)
{
uint8_t v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = 42;
v___x_1538_ = lean_uint8_dec_eq(v___x_1515_, v___x_1537_);
if (v___x_1538_ == 0)
{
uint8_t v___x_1539_; uint8_t v___x_1540_; 
v___x_1539_ = 43;
v___x_1540_ = lean_uint8_dec_eq(v___x_1515_, v___x_1539_);
if (v___x_1540_ == 0)
{
uint8_t v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = 44;
v___x_1542_ = lean_uint8_dec_eq(v___x_1515_, v___x_1541_);
if (v___x_1542_ == 0)
{
uint8_t v___x_1543_; uint8_t v___x_1544_; 
v___x_1543_ = 59;
v___x_1544_ = lean_uint8_dec_eq(v___x_1515_, v___x_1543_);
if (v___x_1544_ == 0)
{
uint8_t v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = 61;
v___x_1546_ = lean_uint8_dec_eq(v___x_1515_, v___x_1545_);
if (v___x_1546_ == 0)
{
uint8_t v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = 58;
v___x_1548_ = lean_uint8_dec_eq(v___x_1515_, v___x_1547_);
if (v___x_1548_ == 0)
{
uint8_t v___x_1549_; uint8_t v___x_1550_; 
v___x_1549_ = 64;
v___x_1550_ = lean_uint8_dec_eq(v___x_1515_, v___x_1549_);
if (v___x_1550_ == 0)
{
uint8_t v___x_1551_; uint8_t v___x_1552_; 
v___x_1551_ = 37;
v___x_1552_ = lean_uint8_dec_eq(v___x_1515_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
lean_del_object(v___x_1411_);
lean_dec_ref(v_config_1379_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v_fst_1408_);
lean_ctor_set(v___x_1553_, 1, v_snd_1409_);
v___x_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___y_1381_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
return v___x_1554_;
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
}
v___jp_1555_:
{
uint8_t v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = 65;
v___x_1557_ = lean_uint8_dec_le(v___x_1556_, v___x_1515_);
if (v___x_1557_ == 0)
{
goto v___jp_1516_;
}
else
{
uint8_t v___x_1558_; uint8_t v___x_1559_; 
v___x_1558_ = 90;
v___x_1559_ = lean_uint8_dec_le(v___x_1515_, v___x_1558_);
if (v___x_1559_ == 0)
{
goto v___jp_1516_;
}
else
{
goto v___jp_1419_;
}
}
}
v___jp_1560_:
{
uint8_t v___x_1561_; uint8_t v___x_1562_; 
v___x_1561_ = 97;
v___x_1562_ = lean_uint8_dec_le(v___x_1561_, v___x_1515_);
if (v___x_1562_ == 0)
{
goto v___jp_1555_;
}
else
{
uint8_t v___x_1563_; uint8_t v___x_1564_; 
v___x_1563_ = 122;
v___x_1564_ = lean_uint8_dec_le(v___x_1515_, v___x_1563_);
if (v___x_1564_ == 0)
{
goto v___jp_1555_;
}
else
{
goto v___jp_1419_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object* v_config_1575_, lean_object* v_a_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v_array_1602_; lean_object* v_idx_1603_; lean_object* v_fst_1604_; lean_object* v_snd_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1770_; 
v_array_1602_ = lean_ctor_get(v___y_1577_, 0);
v_idx_1603_ = lean_ctor_get(v___y_1577_, 1);
v_fst_1604_ = lean_ctor_get(v_a_1576_, 0);
v_snd_1605_ = lean_ctor_get(v_a_1576_, 1);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_a_1576_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1607_ = v_a_1576_;
v_isShared_1608_ = v_isSharedCheck_1770_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_snd_1605_);
lean_inc(v_fst_1604_);
lean_dec(v_a_1576_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1770_;
goto v_resetjp_1606_;
}
v___jp_1578_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___y_1579_);
lean_ctor_set(v___x_1582_, 1, v___y_1580_);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___y_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
return v___x_1583_;
}
v___jp_1584_:
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = lean_array_get_size(v___y_1586_);
v___x_1590_ = lean_nat_dec_le(v___y_1588_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
lean_dec(v___y_1588_);
v___x_1591_ = l_ByteArray_empty;
v___x_1592_ = lean_array_push(v___y_1586_, v___x_1591_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
lean_ctor_set(v___x_1593_, 1, v___y_1587_);
v___x_1594_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1575_, v___x_1593_, v___y_1585_);
return v___x_1594_;
}
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec_ref(v_config_1575_);
v___x_1595_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1596_ = l_Nat_reprFast(v___y_1588_);
v___x_1597_ = lean_string_append(v___x_1595_, v___x_1596_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1599_ = lean_string_append(v___x_1597_, v___x_1598_);
v___x_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
v___x_1601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___y_1585_);
lean_ctor_set(v___x_1601_, 1, v___x_1600_);
return v___x_1601_;
}
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = lean_byte_array_size(v_array_1602_);
v___x_1610_ = lean_nat_dec_lt(v_idx_1603_, v___x_1609_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1612_; 
lean_dec_ref(v_config_1575_);
if (v_isShared_1608_ == 0)
{
v___x_1612_ = v___x_1607_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_fst_1604_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_snd_1605_);
v___x_1612_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___y_1577_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
return v___x_1613_;
}
}
else
{
uint8_t v___x_1711_; uint8_t v___x_1761_; 
v___x_1711_ = lean_byte_array_fget(v_array_1602_, v_idx_1603_);
v___x_1761_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1711_);
if (v___x_1761_ == 0)
{
uint8_t v___x_1762_; uint8_t v___x_1763_; 
v___x_1762_ = 47;
v___x_1763_ = lean_uint8_dec_eq(v___x_1711_, v___x_1762_);
if (v___x_1763_ == 0)
{
uint8_t v___x_1764_; uint8_t v___x_1765_; 
v___x_1764_ = 48;
v___x_1765_ = lean_uint8_dec_le(v___x_1764_, v___x_1711_);
if (v___x_1765_ == 0)
{
goto v___jp_1756_;
}
else
{
uint8_t v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = 57;
v___x_1767_ = lean_uint8_dec_le(v___x_1711_, v___x_1766_);
if (v___x_1767_ == 0)
{
goto v___jp_1756_;
}
else
{
goto v___jp_1615_;
}
}
}
else
{
goto v___jp_1615_;
}
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v_fst_1604_);
lean_ctor_set(v___x_1768_, 1, v_snd_1605_);
v___x_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___y_1577_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
return v___x_1769_;
}
v___jp_1615_:
{
lean_object* v_maxPathSegments_1616_; lean_object* v_maxTotalPathLength_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v_maxPathSegments_1616_ = lean_ctor_get(v_config_1575_, 6);
v_maxTotalPathLength_1617_ = lean_ctor_get(v_config_1575_, 7);
v___x_1618_ = lean_array_get_size(v_fst_1604_);
v___x_1619_ = lean_nat_dec_le(v_maxPathSegments_1616_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1575_, v___y_1577_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_pos_1621_; lean_object* v_res_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1694_; 
v_pos_1621_ = lean_ctor_get(v___x_1620_, 0);
v_res_1622_ = lean_ctor_get(v___x_1620_, 1);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1624_ = v___x_1620_;
v_isShared_1625_ = v_isSharedCheck_1694_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_res_1622_);
lean_inc(v_pos_1621_);
lean_dec(v___x_1620_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1694_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
lean_inc(v_res_1622_);
v___x_1626_ = l_ByteSlice_toByteArray(v_res_1622_);
v___x_1627_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1626_);
if (lean_obj_tag(v___x_1627_) == 1)
{
lean_object* v_val_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1689_; 
v_val_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1689_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_val_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1689_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; uint8_t v___x_1634_; 
v___x_1632_ = l_ByteSlice_size(v_res_1622_);
lean_dec(v_res_1622_);
v___x_1633_ = lean_nat_add(v_snd_1605_, v___x_1632_);
lean_dec(v___x_1632_);
lean_dec(v_snd_1605_);
v___x_1634_ = lean_nat_dec_lt(v_maxTotalPathLength_1617_, v___x_1633_);
if (v___x_1634_ == 0)
{
lean_object* v_array_1635_; lean_object* v_idx_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v_array_1635_ = lean_ctor_get(v_pos_1621_, 0);
v_idx_1636_ = lean_ctor_get(v_pos_1621_, 1);
v___x_1637_ = lean_array_push(v_fst_1604_, v_val_1628_);
v___x_1638_ = lean_byte_array_size(v_array_1635_);
v___x_1639_ = lean_nat_dec_lt(v_idx_1636_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_del_object(v___x_1630_);
lean_del_object(v___x_1624_);
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___y_1579_ = v___x_1637_;
v___y_1580_ = v___x_1633_;
v___y_1581_ = v_pos_1621_;
goto v___jp_1578_;
}
else
{
uint8_t v___x_1640_; uint8_t v___x_1641_; uint8_t v___x_1642_; 
v___x_1640_ = lean_byte_array_fget(v_array_1635_, v_idx_1636_);
v___x_1641_ = 47;
v___x_1642_ = lean_uint8_dec_eq(v___x_1640_, v___x_1641_);
if (v___x_1642_ == 0)
{
lean_del_object(v___x_1630_);
lean_del_object(v___x_1624_);
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___y_1579_ = v___x_1637_;
v___y_1580_ = v___x_1633_;
v___y_1581_ = v_pos_1621_;
goto v___jp_1578_;
}
else
{
lean_object* v___x_1643_; lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_nat_add(v___x_1633_, v___x_1643_);
lean_dec(v___x_1633_);
v___x_1645_ = lean_nat_dec_lt(v_maxTotalPathLength_1617_, v___x_1644_);
if (v___x_1645_ == 0)
{
lean_del_object(v___x_1630_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1646_; lean_object* v___x_1648_; 
lean_dec(v___x_1644_);
lean_dec_ref(v___x_1637_);
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___x_1646_ = lean_box(0);
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 1);
lean_ctor_set(v___x_1624_, 1, v___x_1646_);
v___x_1648_ = v___x_1624_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_pos_1621_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
else
{
lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1664_; 
lean_inc(v_idx_1636_);
lean_inc_ref(v_array_1635_);
lean_del_object(v___x_1624_);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_pos_1621_);
if (v_isSharedCheck_1664_ == 0)
{
lean_object* v_unused_1665_; lean_object* v_unused_1666_; 
v_unused_1665_ = lean_ctor_get(v_pos_1621_, 1);
lean_dec(v_unused_1665_);
v_unused_1666_ = lean_ctor_get(v_pos_1621_, 0);
lean_dec(v_unused_1666_);
v___x_1651_ = v_pos_1621_;
v_isShared_1652_ = v_isSharedCheck_1664_;
goto v_resetjp_1650_;
}
else
{
lean_dec(v_pos_1621_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1664_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1653_; lean_object* v___x_1655_; 
v___x_1653_ = lean_nat_add(v_idx_1636_, v___x_1643_);
lean_dec(v_idx_1636_);
lean_inc(v___x_1653_);
lean_inc_ref(v_array_1635_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 1, v___x_1653_);
v___x_1655_ = v___x_1651_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_array_1635_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
uint8_t v___x_1656_; 
v___x_1656_ = lean_nat_dec_lt(v___x_1653_, v___x_1638_);
if (v___x_1656_ == 0)
{
lean_dec(v___x_1653_);
lean_dec_ref(v_array_1635_);
lean_del_object(v___x_1607_);
lean_inc(v_maxPathSegments_1616_);
v___y_1585_ = v___x_1655_;
v___y_1586_ = v___x_1637_;
v___y_1587_ = v___x_1644_;
v___y_1588_ = v_maxPathSegments_1616_;
goto v___jp_1584_;
}
else
{
uint8_t v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = lean_byte_array_fget(v_array_1635_, v___x_1653_);
lean_dec(v___x_1653_);
lean_dec_ref(v_array_1635_);
v___x_1658_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1660_; 
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 1, v___x_1644_);
lean_ctor_set(v___x_1607_, 0, v___x_1637_);
v___x_1660_ = v___x_1607_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v___x_1644_);
v___x_1660_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1661_; 
v___x_1661_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1575_, v___x_1660_, v___x_1655_);
return v___x_1661_;
}
}
else
{
lean_del_object(v___x_1607_);
lean_inc(v_maxPathSegments_1616_);
v___y_1585_ = v___x_1655_;
v___y_1586_ = v___x_1637_;
v___y_1587_ = v___x_1644_;
v___y_1588_ = v_maxPathSegments_1616_;
goto v___jp_1584_;
}
}
}
}
}
}
else
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1673_; 
lean_inc(v_maxTotalPathLength_1617_);
lean_dec(v___x_1644_);
lean_dec_ref(v___x_1637_);
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___x_1667_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1668_ = l_Nat_reprFast(v_maxTotalPathLength_1617_);
v___x_1669_ = lean_string_append(v___x_1667_, v___x_1668_);
lean_dec_ref(v___x_1668_);
v___x_1670_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1671_ = lean_string_append(v___x_1669_, v___x_1670_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v___x_1671_);
v___x_1673_ = v___x_1630_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
lean_object* v___x_1675_; 
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 1);
lean_ctor_set(v___x_1624_, 1, v___x_1673_);
v___x_1675_ = v___x_1624_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_pos_1621_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v___x_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
}
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
lean_inc(v_maxTotalPathLength_1617_);
lean_dec(v___x_1633_);
lean_dec(v_val_1628_);
lean_del_object(v___x_1607_);
lean_dec(v_fst_1604_);
lean_dec_ref(v_config_1575_);
v___x_1678_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1679_ = l_Nat_reprFast(v_maxTotalPathLength_1617_);
v___x_1680_ = lean_string_append(v___x_1678_, v___x_1679_);
lean_dec_ref(v___x_1679_);
v___x_1681_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1682_ = lean_string_append(v___x_1680_, v___x_1681_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v___x_1682_);
v___x_1684_ = v___x_1630_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1686_; 
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 1);
lean_ctor_set(v___x_1624_, 1, v___x_1684_);
v___x_1686_ = v___x_1624_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_pos_1621_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v___x_1684_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
lean_dec(v___x_1627_);
lean_dec(v_res_1622_);
lean_del_object(v___x_1607_);
lean_dec(v_snd_1605_);
lean_dec(v_fst_1604_);
lean_dec_ref(v_config_1575_);
v___x_1690_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 1);
lean_ctor_set(v___x_1624_, 1, v___x_1690_);
v___x_1692_ = v___x_1624_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_pos_1621_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
}
else
{
lean_object* v_pos_1695_; lean_object* v_err_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_del_object(v___x_1607_);
lean_dec(v_snd_1605_);
lean_dec(v_fst_1604_);
lean_dec_ref(v_config_1575_);
v_pos_1695_ = lean_ctor_get(v___x_1620_, 0);
v_err_1696_ = lean_ctor_get(v___x_1620_, 1);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1620_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_err_1696_);
lean_inc(v_pos_1695_);
lean_dec(v___x_1620_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_pos_1695_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_err_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
else
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
lean_inc(v_maxPathSegments_1616_);
lean_del_object(v___x_1607_);
lean_dec(v_snd_1605_);
lean_dec(v_fst_1604_);
lean_dec_ref(v_config_1575_);
v___x_1704_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1705_ = l_Nat_reprFast(v_maxPathSegments_1616_);
v___x_1706_ = lean_string_append(v___x_1704_, v___x_1705_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1708_ = lean_string_append(v___x_1706_, v___x_1707_);
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
v___x_1710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___y_1577_);
lean_ctor_set(v___x_1710_, 1, v___x_1709_);
return v___x_1710_;
}
}
v___jp_1712_:
{
uint8_t v___x_1713_; uint8_t v___x_1714_; 
v___x_1713_ = 45;
v___x_1714_ = lean_uint8_dec_eq(v___x_1711_, v___x_1713_);
if (v___x_1714_ == 0)
{
uint8_t v___x_1715_; uint8_t v___x_1716_; 
v___x_1715_ = 46;
v___x_1716_ = lean_uint8_dec_eq(v___x_1711_, v___x_1715_);
if (v___x_1716_ == 0)
{
uint8_t v___x_1717_; uint8_t v___x_1718_; 
v___x_1717_ = 95;
v___x_1718_ = lean_uint8_dec_eq(v___x_1711_, v___x_1717_);
if (v___x_1718_ == 0)
{
uint8_t v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = 126;
v___x_1720_ = lean_uint8_dec_eq(v___x_1711_, v___x_1719_);
if (v___x_1720_ == 0)
{
uint8_t v___x_1721_; uint8_t v___x_1722_; 
v___x_1721_ = 33;
v___x_1722_ = lean_uint8_dec_eq(v___x_1711_, v___x_1721_);
if (v___x_1722_ == 0)
{
uint8_t v___x_1723_; uint8_t v___x_1724_; 
v___x_1723_ = 36;
v___x_1724_ = lean_uint8_dec_eq(v___x_1711_, v___x_1723_);
if (v___x_1724_ == 0)
{
uint8_t v___x_1725_; uint8_t v___x_1726_; 
v___x_1725_ = 38;
v___x_1726_ = lean_uint8_dec_eq(v___x_1711_, v___x_1725_);
if (v___x_1726_ == 0)
{
uint8_t v___x_1727_; uint8_t v___x_1728_; 
v___x_1727_ = 39;
v___x_1728_ = lean_uint8_dec_eq(v___x_1711_, v___x_1727_);
if (v___x_1728_ == 0)
{
uint8_t v___x_1729_; uint8_t v___x_1730_; 
v___x_1729_ = 40;
v___x_1730_ = lean_uint8_dec_eq(v___x_1711_, v___x_1729_);
if (v___x_1730_ == 0)
{
uint8_t v___x_1731_; uint8_t v___x_1732_; 
v___x_1731_ = 41;
v___x_1732_ = lean_uint8_dec_eq(v___x_1711_, v___x_1731_);
if (v___x_1732_ == 0)
{
uint8_t v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = 42;
v___x_1734_ = lean_uint8_dec_eq(v___x_1711_, v___x_1733_);
if (v___x_1734_ == 0)
{
uint8_t v___x_1735_; uint8_t v___x_1736_; 
v___x_1735_ = 43;
v___x_1736_ = lean_uint8_dec_eq(v___x_1711_, v___x_1735_);
if (v___x_1736_ == 0)
{
uint8_t v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = 44;
v___x_1738_ = lean_uint8_dec_eq(v___x_1711_, v___x_1737_);
if (v___x_1738_ == 0)
{
uint8_t v___x_1739_; uint8_t v___x_1740_; 
v___x_1739_ = 59;
v___x_1740_ = lean_uint8_dec_eq(v___x_1711_, v___x_1739_);
if (v___x_1740_ == 0)
{
uint8_t v___x_1741_; uint8_t v___x_1742_; 
v___x_1741_ = 61;
v___x_1742_ = lean_uint8_dec_eq(v___x_1711_, v___x_1741_);
if (v___x_1742_ == 0)
{
uint8_t v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = 58;
v___x_1744_ = lean_uint8_dec_eq(v___x_1711_, v___x_1743_);
if (v___x_1744_ == 0)
{
uint8_t v___x_1745_; uint8_t v___x_1746_; 
v___x_1745_ = 64;
v___x_1746_ = lean_uint8_dec_eq(v___x_1711_, v___x_1745_);
if (v___x_1746_ == 0)
{
uint8_t v___x_1747_; uint8_t v___x_1748_; 
v___x_1747_ = 37;
v___x_1748_ = lean_uint8_dec_eq(v___x_1711_, v___x_1747_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_del_object(v___x_1607_);
lean_dec_ref(v_config_1575_);
v___x_1749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1749_, 0, v_fst_1604_);
lean_ctor_set(v___x_1749_, 1, v_snd_1605_);
v___x_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___y_1577_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
return v___x_1750_;
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
else
{
goto v___jp_1615_;
}
}
v___jp_1751_:
{
uint8_t v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = 65;
v___x_1753_ = lean_uint8_dec_le(v___x_1752_, v___x_1711_);
if (v___x_1753_ == 0)
{
goto v___jp_1712_;
}
else
{
uint8_t v___x_1754_; uint8_t v___x_1755_; 
v___x_1754_ = 90;
v___x_1755_ = lean_uint8_dec_le(v___x_1711_, v___x_1754_);
if (v___x_1755_ == 0)
{
goto v___jp_1712_;
}
else
{
goto v___jp_1615_;
}
}
}
v___jp_1756_:
{
uint8_t v___x_1757_; uint8_t v___x_1758_; 
v___x_1757_ = 97;
v___x_1758_ = lean_uint8_dec_le(v___x_1757_, v___x_1711_);
if (v___x_1758_ == 0)
{
goto v___jp_1751_;
}
else
{
uint8_t v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = 122;
v___x_1760_ = lean_uint8_dec_le(v___x_1711_, v___x_1759_);
if (v___x_1760_ == 0)
{
goto v___jp_1751_;
}
else
{
goto v___jp_1615_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object* v_config_1782_, uint8_t v_forceAbsolute_1783_, uint8_t v_allowEmpty_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v___y_1787_; lean_object* v___y_1791_; lean_object* v_array_1794_; lean_object* v_idx_1795_; uint8_t v_isAbsolute_1796_; lean_object* v___x_1797_; lean_object* v_segments_1798_; uint8_t v_isAbsolute_1800_; lean_object* v_totalLength_1801_; lean_object* v___y_1802_; lean_object* v_pos_1826_; lean_object* v_array_1827_; lean_object* v_idx_1828_; lean_object* v___y_1837_; uint8_t v___y_1841_; lean_object* v_pos_1842_; uint8_t v_res_1843_; uint8_t v___y_1845_; lean_object* v_pos_1846_; uint8_t v_res_1847_; uint8_t v___y_1855_; lean_object* v___y_1856_; uint8_t v___y_1857_; uint8_t v___y_1866_; lean_object* v_pos_1867_; uint8_t v_res_1868_; lean_object* v_pos_1870_; lean_object* v_array_1871_; lean_object* v_idx_1872_; uint8_t v_res_1873_; uint8_t v___y_1878_; uint8_t v___y_1879_; lean_object* v___x_1880_; uint8_t v___x_1881_; 
v_array_1794_ = lean_ctor_get(v_a_1785_, 0);
lean_inc_ref(v_array_1794_);
v_idx_1795_ = lean_ctor_get(v_a_1785_, 1);
lean_inc(v_idx_1795_);
v_isAbsolute_1796_ = 0;
v___x_1797_ = lean_unsigned_to_nat(0u);
v_segments_1798_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__4));
v___x_1880_ = lean_byte_array_size(v_array_1794_);
v___x_1881_ = lean_nat_dec_lt(v_idx_1795_, v___x_1880_);
if (v___x_1881_ == 0)
{
v_pos_1870_ = v_a_1785_;
v_array_1871_ = v_array_1794_;
v_idx_1872_ = v_idx_1795_;
v_res_1873_ = v_isAbsolute_1796_;
goto v___jp_1869_;
}
else
{
uint8_t v___x_1882_; uint8_t v___y_1884_; uint8_t v___x_1934_; uint8_t v___x_1935_; 
v___x_1882_ = lean_byte_array_fget(v_array_1794_, v_idx_1795_);
v___x_1934_ = 48;
v___x_1935_ = lean_uint8_dec_le(v___x_1934_, v___x_1882_);
if (v___x_1935_ == 0)
{
goto v___jp_1929_;
}
else
{
uint8_t v___x_1936_; uint8_t v___x_1937_; 
v___x_1936_ = 57;
v___x_1937_ = lean_uint8_dec_le(v___x_1882_, v___x_1936_);
if (v___x_1937_ == 0)
{
goto v___jp_1929_;
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
v___jp_1883_:
{
uint8_t v___x_1885_; uint8_t v___x_1886_; 
v___x_1885_ = 37;
v___x_1886_ = lean_uint8_dec_eq(v___x_1882_, v___x_1885_);
if (v___x_1886_ == 0)
{
uint8_t v___x_1887_; uint8_t v___x_1888_; 
v___x_1887_ = 47;
v___x_1888_ = lean_uint8_dec_eq(v___x_1882_, v___x_1887_);
v___y_1878_ = v___y_1884_;
v___y_1879_ = v___x_1888_;
goto v___jp_1877_;
}
else
{
v___y_1878_ = v___y_1884_;
v___y_1879_ = v___x_1886_;
goto v___jp_1877_;
}
}
v___jp_1889_:
{
uint8_t v___x_1890_; uint8_t v___x_1891_; 
v___x_1890_ = 45;
v___x_1891_ = lean_uint8_dec_eq(v___x_1882_, v___x_1890_);
if (v___x_1891_ == 0)
{
uint8_t v___x_1892_; uint8_t v___x_1893_; 
v___x_1892_ = 46;
v___x_1893_ = lean_uint8_dec_eq(v___x_1882_, v___x_1892_);
if (v___x_1893_ == 0)
{
uint8_t v___x_1894_; uint8_t v___x_1895_; 
v___x_1894_ = 95;
v___x_1895_ = lean_uint8_dec_eq(v___x_1882_, v___x_1894_);
if (v___x_1895_ == 0)
{
uint8_t v___x_1896_; uint8_t v___x_1897_; 
v___x_1896_ = 126;
v___x_1897_ = lean_uint8_dec_eq(v___x_1882_, v___x_1896_);
if (v___x_1897_ == 0)
{
uint8_t v___x_1898_; uint8_t v___x_1899_; 
v___x_1898_ = 33;
v___x_1899_ = lean_uint8_dec_eq(v___x_1882_, v___x_1898_);
if (v___x_1899_ == 0)
{
uint8_t v___x_1900_; uint8_t v___x_1901_; 
v___x_1900_ = 36;
v___x_1901_ = lean_uint8_dec_eq(v___x_1882_, v___x_1900_);
if (v___x_1901_ == 0)
{
uint8_t v___x_1902_; uint8_t v___x_1903_; 
v___x_1902_ = 38;
v___x_1903_ = lean_uint8_dec_eq(v___x_1882_, v___x_1902_);
if (v___x_1903_ == 0)
{
uint8_t v___x_1904_; uint8_t v___x_1905_; 
v___x_1904_ = 39;
v___x_1905_ = lean_uint8_dec_eq(v___x_1882_, v___x_1904_);
if (v___x_1905_ == 0)
{
uint8_t v___x_1906_; uint8_t v___x_1907_; 
v___x_1906_ = 40;
v___x_1907_ = lean_uint8_dec_eq(v___x_1882_, v___x_1906_);
if (v___x_1907_ == 0)
{
uint8_t v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = 41;
v___x_1909_ = lean_uint8_dec_eq(v___x_1882_, v___x_1908_);
if (v___x_1909_ == 0)
{
uint8_t v___x_1910_; uint8_t v___x_1911_; 
v___x_1910_ = 42;
v___x_1911_ = lean_uint8_dec_eq(v___x_1882_, v___x_1910_);
if (v___x_1911_ == 0)
{
uint8_t v___x_1912_; uint8_t v___x_1913_; 
v___x_1912_ = 43;
v___x_1913_ = lean_uint8_dec_eq(v___x_1882_, v___x_1912_);
if (v___x_1913_ == 0)
{
uint8_t v___x_1914_; uint8_t v___x_1915_; 
v___x_1914_ = 44;
v___x_1915_ = lean_uint8_dec_eq(v___x_1882_, v___x_1914_);
if (v___x_1915_ == 0)
{
uint8_t v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = 59;
v___x_1917_ = lean_uint8_dec_eq(v___x_1882_, v___x_1916_);
if (v___x_1917_ == 0)
{
uint8_t v___x_1918_; uint8_t v___x_1919_; 
v___x_1918_ = 61;
v___x_1919_ = lean_uint8_dec_eq(v___x_1882_, v___x_1918_);
if (v___x_1919_ == 0)
{
uint8_t v___x_1920_; uint8_t v___x_1921_; 
v___x_1920_ = 58;
v___x_1921_ = lean_uint8_dec_eq(v___x_1882_, v___x_1920_);
if (v___x_1921_ == 0)
{
uint8_t v___x_1922_; uint8_t v___x_1923_; 
v___x_1922_ = 64;
v___x_1923_ = lean_uint8_dec_eq(v___x_1882_, v___x_1922_);
if (v___x_1923_ == 0)
{
v___y_1884_ = v___x_1923_;
goto v___jp_1883_;
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
v___jp_1924_:
{
uint8_t v___x_1925_; uint8_t v___x_1926_; 
v___x_1925_ = 65;
v___x_1926_ = lean_uint8_dec_le(v___x_1925_, v___x_1882_);
if (v___x_1926_ == 0)
{
goto v___jp_1889_;
}
else
{
uint8_t v___x_1927_; uint8_t v___x_1928_; 
v___x_1927_ = 90;
v___x_1928_ = lean_uint8_dec_le(v___x_1882_, v___x_1927_);
if (v___x_1928_ == 0)
{
goto v___jp_1889_;
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
}
v___jp_1929_:
{
uint8_t v___x_1930_; uint8_t v___x_1931_; 
v___x_1930_ = 97;
v___x_1931_ = lean_uint8_dec_le(v___x_1930_, v___x_1882_);
if (v___x_1931_ == 0)
{
goto v___jp_1924_;
}
else
{
uint8_t v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = 122;
v___x_1933_ = lean_uint8_dec_le(v___x_1882_, v___x_1932_);
if (v___x_1933_ == 0)
{
goto v___jp_1924_;
}
else
{
v___y_1884_ = v___x_1881_;
goto v___jp_1883_;
}
}
}
}
v___jp_1786_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__1));
v___x_1789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___y_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
return v___x_1789_;
}
v___jp_1790_:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__3));
v___x_1793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___y_1791_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
return v___x_1793_;
}
v___jp_1799_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1803_, 0, v_segments_1798_);
lean_ctor_set(v___x_1803_, 1, v_totalLength_1801_);
v___x_1804_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1782_, v___x_1803_, v___y_1802_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_res_1805_; lean_object* v_pos_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1815_; 
v_res_1805_ = lean_ctor_get(v___x_1804_, 1);
v_pos_1806_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1808_ = v___x_1804_;
v_isShared_1809_ = v_isSharedCheck_1815_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_res_1805_);
lean_inc(v_pos_1806_);
lean_dec(v___x_1804_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1815_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v_fst_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v_fst_1810_ = lean_ctor_get(v_res_1805_, 0);
lean_inc(v_fst_1810_);
lean_dec(v_res_1805_);
v___x_1811_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1811_, 0, v_fst_1810_);
lean_ctor_set_uint8(v___x_1811_, sizeof(void*)*1, v_isAbsolute_1800_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 1, v___x_1811_);
v___x_1813_ = v___x_1808_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_pos_1806_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v___x_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
else
{
lean_object* v_pos_1816_; lean_object* v_err_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
v_pos_1816_ = lean_ctor_get(v___x_1804_, 0);
v_err_1817_ = lean_ctor_get(v___x_1804_, 1);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1819_ = v___x_1804_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_err_1817_);
lean_inc(v_pos_1816_);
lean_dec(v___x_1804_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_pos_1816_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v_err_1817_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
v___jp_1825_:
{
lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1829_ = lean_byte_array_size(v_array_1827_);
v___x_1830_ = lean_nat_dec_lt(v_idx_1828_, v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_dec(v_idx_1828_);
lean_dec_ref(v_array_1827_);
lean_dec_ref(v_config_1782_);
v___x_1831_ = lean_box(0);
v___x_1832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1832_, 0, v_pos_1826_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
return v___x_1832_;
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_dec_ref(v_pos_1826_);
v___x_1833_ = lean_unsigned_to_nat(1u);
v___x_1834_ = lean_nat_add(v_idx_1828_, v___x_1833_);
lean_dec(v_idx_1828_);
v___x_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1835_, 0, v_array_1827_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
v_isAbsolute_1800_ = v___x_1830_;
v_totalLength_1801_ = v___x_1833_;
v___y_1802_ = v___x_1835_;
goto v___jp_1799_;
}
}
v___jp_1836_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__5));
v___x_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___y_1837_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
return v___x_1839_;
}
v___jp_1840_:
{
if (v_allowEmpty_1784_ == 0)
{
v___y_1787_ = v_pos_1842_;
goto v___jp_1786_;
}
else
{
if (v_res_1843_ == 0)
{
if (v___y_1841_ == 0)
{
v___y_1837_ = v_pos_1842_;
goto v___jp_1836_;
}
else
{
v___y_1787_ = v_pos_1842_;
goto v___jp_1786_;
}
}
else
{
v___y_1837_ = v_pos_1842_;
goto v___jp_1836_;
}
}
}
v___jp_1844_:
{
if (v_res_1847_ == 0)
{
if (v_forceAbsolute_1783_ == 0)
{
v_isAbsolute_1800_ = v_isAbsolute_1796_;
v_totalLength_1801_ = v___x_1797_;
v___y_1802_ = v_pos_1846_;
goto v___jp_1799_;
}
else
{
lean_object* v_array_1848_; lean_object* v_idx_1849_; lean_object* v___x_1850_; uint8_t v___x_1851_; 
lean_dec_ref(v_config_1782_);
v_array_1848_ = lean_ctor_get(v_pos_1846_, 0);
v_idx_1849_ = lean_ctor_get(v_pos_1846_, 1);
v___x_1850_ = lean_byte_array_size(v_array_1848_);
v___x_1851_ = lean_nat_dec_lt(v_idx_1849_, v___x_1850_);
if (v___x_1851_ == 0)
{
v___y_1841_ = v___y_1845_;
v_pos_1842_ = v_pos_1846_;
v_res_1843_ = v_forceAbsolute_1783_;
goto v___jp_1840_;
}
else
{
v___y_1841_ = v___y_1845_;
v_pos_1842_ = v_pos_1846_;
v_res_1843_ = v_res_1847_;
goto v___jp_1840_;
}
}
}
else
{
lean_object* v_array_1852_; lean_object* v_idx_1853_; 
v_array_1852_ = lean_ctor_get(v_pos_1846_, 0);
lean_inc_ref(v_array_1852_);
v_idx_1853_ = lean_ctor_get(v_pos_1846_, 1);
lean_inc(v_idx_1853_);
v_pos_1826_ = v_pos_1846_;
v_array_1827_ = v_array_1852_;
v_idx_1828_ = v_idx_1853_;
goto v___jp_1825_;
}
}
v___jp_1854_:
{
lean_object* v_array_1858_; lean_object* v_idx_1859_; lean_object* v___x_1860_; uint8_t v___x_1861_; 
v_array_1858_ = lean_ctor_get(v___y_1856_, 0);
v_idx_1859_ = lean_ctor_get(v___y_1856_, 1);
v___x_1860_ = lean_byte_array_size(v_array_1858_);
v___x_1861_ = lean_nat_dec_lt(v_idx_1859_, v___x_1860_);
if (v___x_1861_ == 0)
{
v___y_1845_ = v___y_1855_;
v_pos_1846_ = v___y_1856_;
v_res_1847_ = v___y_1857_;
goto v___jp_1844_;
}
else
{
uint8_t v___x_1862_; uint8_t v___x_1863_; uint8_t v___x_1864_; 
v___x_1862_ = lean_byte_array_fget(v_array_1858_, v_idx_1859_);
v___x_1863_ = 47;
v___x_1864_ = lean_uint8_dec_eq(v___x_1862_, v___x_1863_);
if (v___x_1864_ == 0)
{
v___y_1845_ = v___y_1855_;
v_pos_1846_ = v___y_1856_;
v_res_1847_ = v___y_1857_;
goto v___jp_1844_;
}
else
{
lean_inc(v_idx_1859_);
lean_inc_ref(v_array_1858_);
v_pos_1826_ = v___y_1856_;
v_array_1827_ = v_array_1858_;
v_idx_1828_ = v_idx_1859_;
goto v___jp_1825_;
}
}
}
v___jp_1865_:
{
if (v_allowEmpty_1784_ == 0)
{
if (v_res_1868_ == 0)
{
if (v___y_1866_ == 0)
{
lean_dec_ref(v_config_1782_);
v___y_1791_ = v_pos_1867_;
goto v___jp_1790_;
}
else
{
v___y_1855_ = v___y_1866_;
v___y_1856_ = v_pos_1867_;
v___y_1857_ = v_res_1868_;
goto v___jp_1854_;
}
}
else
{
lean_dec_ref(v_config_1782_);
v___y_1791_ = v_pos_1867_;
goto v___jp_1790_;
}
}
else
{
v___y_1855_ = v___y_1866_;
v___y_1856_ = v_pos_1867_;
v___y_1857_ = v_isAbsolute_1796_;
goto v___jp_1854_;
}
}
v___jp_1869_:
{
lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = lean_byte_array_size(v_array_1871_);
lean_dec_ref(v_array_1871_);
v___x_1875_ = lean_nat_dec_lt(v_idx_1872_, v___x_1874_);
lean_dec(v_idx_1872_);
if (v___x_1875_ == 0)
{
uint8_t v___x_1876_; 
v___x_1876_ = 1;
v___y_1866_ = v_res_1873_;
v_pos_1867_ = v_pos_1870_;
v_res_1868_ = v___x_1876_;
goto v___jp_1865_;
}
else
{
v___y_1866_ = v_res_1873_;
v_pos_1867_ = v_pos_1870_;
v_res_1868_ = v_isAbsolute_1796_;
goto v___jp_1865_;
}
}
v___jp_1877_:
{
if (v___y_1878_ == 0)
{
if (v___y_1879_ == 0)
{
v_pos_1870_ = v_a_1785_;
v_array_1871_ = v_array_1794_;
v_idx_1872_ = v_idx_1795_;
v_res_1873_ = v_isAbsolute_1796_;
goto v___jp_1869_;
}
else
{
v_pos_1870_ = v_a_1785_;
v_array_1871_ = v_array_1794_;
v_idx_1872_ = v_idx_1795_;
v_res_1873_ = v___y_1879_;
goto v___jp_1869_;
}
}
else
{
v_pos_1870_ = v_a_1785_;
v_array_1871_ = v_array_1794_;
v_idx_1872_ = v_idx_1795_;
v_res_1873_ = v___y_1878_;
goto v___jp_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object* v_config_1938_, lean_object* v_forceAbsolute_1939_, lean_object* v_allowEmpty_1940_, lean_object* v_a_1941_){
_start:
{
uint8_t v_forceAbsolute_boxed_1942_; uint8_t v_allowEmpty_boxed_1943_; lean_object* v_res_1944_; 
v_forceAbsolute_boxed_1942_ = lean_unbox(v_forceAbsolute_1939_);
v_allowEmpty_boxed_1943_ = lean_unbox(v_allowEmpty_1940_);
v_res_1944_ = l_Std_Http_URI_Parser_parsePath(v_config_1938_, v_forceAbsolute_boxed_1942_, v_allowEmpty_boxed_1943_, v_a_1941_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object* v_config_1945_, lean_object* v_inst_1946_, lean_object* v_a_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1945_, v_a_1947_, v___y_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object* v_config_1950_, lean_object* v_inst_1951_, lean_object* v_a_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1950_, v_a_1952_, v___y_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg(){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object* v___dummy_1957_){
_start:
{
lean_object* v_res_1958_; 
v_res_1958_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v_res_1958_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object* v_s_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object* v_s_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(v_s_1962_);
lean_dec_ref(v_s_1962_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg(){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object* v___dummy_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v_res_1967_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object* v_s_1969_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object* v_s_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(v_s_1971_);
lean_dec_ref(v_s_1971_);
return v_res_1972_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t v_c_1973_){
_start:
{
uint8_t v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = 48;
v___x_2026_ = lean_uint8_dec_le(v___x_2025_, v_c_1973_);
if (v___x_2026_ == 0)
{
goto v___jp_2020_;
}
else
{
uint8_t v___x_2027_; uint8_t v___x_2028_; 
v___x_2027_ = 57;
v___x_2028_ = lean_uint8_dec_le(v_c_1973_, v___x_2027_);
if (v___x_2028_ == 0)
{
goto v___jp_2020_;
}
else
{
return v___x_2028_;
}
}
v___jp_1974_:
{
uint8_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = 45;
v___x_1976_ = lean_uint8_dec_eq(v_c_1973_, v___x_1975_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = 46;
v___x_1978_ = lean_uint8_dec_eq(v_c_1973_, v___x_1977_);
if (v___x_1978_ == 0)
{
uint8_t v___x_1979_; uint8_t v___x_1980_; 
v___x_1979_ = 95;
v___x_1980_ = lean_uint8_dec_eq(v_c_1973_, v___x_1979_);
if (v___x_1980_ == 0)
{
uint8_t v___x_1981_; uint8_t v___x_1982_; 
v___x_1981_ = 126;
v___x_1982_ = lean_uint8_dec_eq(v_c_1973_, v___x_1981_);
if (v___x_1982_ == 0)
{
uint8_t v___x_1983_; uint8_t v___x_1984_; 
v___x_1983_ = 33;
v___x_1984_ = lean_uint8_dec_eq(v_c_1973_, v___x_1983_);
if (v___x_1984_ == 0)
{
uint8_t v___x_1985_; uint8_t v___x_1986_; 
v___x_1985_ = 36;
v___x_1986_ = lean_uint8_dec_eq(v_c_1973_, v___x_1985_);
if (v___x_1986_ == 0)
{
uint8_t v___x_1987_; uint8_t v___x_1988_; 
v___x_1987_ = 38;
v___x_1988_ = lean_uint8_dec_eq(v_c_1973_, v___x_1987_);
if (v___x_1988_ == 0)
{
uint8_t v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = 39;
v___x_1990_ = lean_uint8_dec_eq(v_c_1973_, v___x_1989_);
if (v___x_1990_ == 0)
{
uint8_t v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = 40;
v___x_1992_ = lean_uint8_dec_eq(v_c_1973_, v___x_1991_);
if (v___x_1992_ == 0)
{
uint8_t v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = 41;
v___x_1994_ = lean_uint8_dec_eq(v_c_1973_, v___x_1993_);
if (v___x_1994_ == 0)
{
uint8_t v___x_1995_; uint8_t v___x_1996_; 
v___x_1995_ = 42;
v___x_1996_ = lean_uint8_dec_eq(v_c_1973_, v___x_1995_);
if (v___x_1996_ == 0)
{
uint8_t v___x_1997_; uint8_t v___x_1998_; 
v___x_1997_ = 43;
v___x_1998_ = lean_uint8_dec_eq(v_c_1973_, v___x_1997_);
if (v___x_1998_ == 0)
{
uint8_t v___x_1999_; uint8_t v___x_2000_; 
v___x_1999_ = 44;
v___x_2000_ = lean_uint8_dec_eq(v_c_1973_, v___x_1999_);
if (v___x_2000_ == 0)
{
uint8_t v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = 59;
v___x_2002_ = lean_uint8_dec_eq(v_c_1973_, v___x_2001_);
if (v___x_2002_ == 0)
{
uint8_t v___x_2003_; uint8_t v___x_2004_; 
v___x_2003_ = 61;
v___x_2004_ = lean_uint8_dec_eq(v_c_1973_, v___x_2003_);
if (v___x_2004_ == 0)
{
uint8_t v___x_2005_; uint8_t v___x_2006_; 
v___x_2005_ = 58;
v___x_2006_ = lean_uint8_dec_eq(v_c_1973_, v___x_2005_);
if (v___x_2006_ == 0)
{
uint8_t v___x_2007_; uint8_t v___x_2008_; 
v___x_2007_ = 64;
v___x_2008_ = lean_uint8_dec_eq(v_c_1973_, v___x_2007_);
if (v___x_2008_ == 0)
{
uint8_t v___x_2009_; uint8_t v___x_2010_; 
v___x_2009_ = 47;
v___x_2010_ = lean_uint8_dec_eq(v_c_1973_, v___x_2009_);
if (v___x_2010_ == 0)
{
uint8_t v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = 63;
v___x_2012_ = lean_uint8_dec_eq(v_c_1973_, v___x_2011_);
if (v___x_2012_ == 0)
{
uint8_t v___x_2013_; uint8_t v___x_2014_; 
v___x_2013_ = 37;
v___x_2014_ = lean_uint8_dec_eq(v_c_1973_, v___x_2013_);
return v___x_2014_;
}
else
{
return v___x_2012_;
}
}
else
{
return v___x_2010_;
}
}
else
{
return v___x_2008_;
}
}
else
{
return v___x_2006_;
}
}
else
{
return v___x_2004_;
}
}
else
{
return v___x_2002_;
}
}
else
{
return v___x_2000_;
}
}
else
{
return v___x_1998_;
}
}
else
{
return v___x_1996_;
}
}
else
{
return v___x_1994_;
}
}
else
{
return v___x_1992_;
}
}
else
{
return v___x_1990_;
}
}
else
{
return v___x_1988_;
}
}
else
{
return v___x_1986_;
}
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
v___jp_2015_:
{
uint8_t v___x_2016_; uint8_t v___x_2017_; 
v___x_2016_ = 65;
v___x_2017_ = lean_uint8_dec_le(v___x_2016_, v_c_1973_);
if (v___x_2017_ == 0)
{
goto v___jp_1974_;
}
else
{
uint8_t v___x_2018_; uint8_t v___x_2019_; 
v___x_2018_ = 90;
v___x_2019_ = lean_uint8_dec_le(v_c_1973_, v___x_2018_);
if (v___x_2019_ == 0)
{
goto v___jp_1974_;
}
else
{
return v___x_2019_;
}
}
}
v___jp_2020_:
{
uint8_t v___x_2021_; uint8_t v___x_2022_; 
v___x_2021_ = 97;
v___x_2022_ = lean_uint8_dec_le(v___x_2021_, v_c_1973_);
if (v___x_2022_ == 0)
{
goto v___jp_2015_;
}
else
{
uint8_t v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = 122;
v___x_2024_ = lean_uint8_dec_le(v_c_1973_, v___x_2023_);
if (v___x_2024_ == 0)
{
goto v___jp_2015_;
}
else
{
return v___x_2024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object* v_c_2029_){
_start:
{
uint8_t v_c_boxed_2030_; uint8_t v_res_2031_; lean_object* v_r_2032_; 
v_c_boxed_2030_ = lean_unbox(v_c_2029_);
v_res_2031_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(v_c_boxed_2030_);
v_r_2032_ = lean_box(v_res_2031_);
return v_r_2032_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object* v___x_2033_, lean_object* v___x_2034_, lean_object* v_a_2035_, lean_object* v_b_2036_){
_start:
{
lean_object* v_it_2038_; 
if (lean_obj_tag(v_a_2035_) == 0)
{
lean_object* v_currPos_2042_; lean_object* v_searcher_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2069_; 
v_currPos_2042_ = lean_ctor_get(v_a_2035_, 0);
v_searcher_2043_ = lean_ctor_get(v_a_2035_, 1);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_a_2035_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2045_ = v_a_2035_;
v_isShared_2046_ = v_isSharedCheck_2069_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_searcher_2043_);
lean_inc(v_currPos_2042_);
lean_dec(v_a_2035_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2069_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_str_2047_; lean_object* v_startInclusive_2048_; lean_object* v_endExclusive_2049_; lean_object* v___x_2050_; uint8_t v_decide_2051_; 
v_str_2047_ = lean_ctor_get(v___x_2033_, 0);
v_startInclusive_2048_ = lean_ctor_get(v___x_2033_, 1);
v_endExclusive_2049_ = lean_ctor_get(v___x_2033_, 2);
v___x_2050_ = lean_nat_sub(v_endExclusive_2049_, v_startInclusive_2048_);
v_decide_2051_ = lean_nat_dec_eq(v_searcher_2043_, v___x_2050_);
lean_dec(v___x_2050_);
if (v_decide_2051_ == 0)
{
uint32_t v___x_2052_; lean_object* v___x_2053_; uint32_t v___x_2054_; uint8_t v___x_2055_; 
v___x_2052_ = 38;
v___x_2053_ = lean_nat_add(v_startInclusive_2048_, v_searcher_2043_);
v___x_2054_ = lean_string_utf8_get_fast(v_str_2047_, v___x_2053_);
v___x_2055_ = lean_uint32_dec_eq(v___x_2054_, v___x_2052_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
lean_dec(v_searcher_2043_);
v___x_2056_ = lean_string_utf8_next_fast(v_str_2047_, v___x_2053_);
lean_dec(v___x_2053_);
v___x_2057_ = lean_nat_sub(v___x_2056_, v_startInclusive_2048_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2057_);
v___x_2059_ = v___x_2045_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_currPos_2042_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
v_a_2035_ = v___x_2059_;
goto _start;
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v_nextIt_2066_; 
lean_dec(v_currPos_2042_);
v___x_2062_ = lean_string_utf8_next_fast(v_str_2047_, v___x_2053_);
v___x_2063_ = lean_nat_sub(v___x_2062_, v___x_2053_);
lean_dec(v___x_2053_);
v___x_2064_ = lean_nat_add(v_searcher_2043_, v___x_2063_);
lean_dec(v___x_2063_);
lean_dec(v_searcher_2043_);
lean_inc(v___x_2064_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2064_);
lean_ctor_set(v___x_2045_, 0, v___x_2064_);
v_nextIt_2066_ = v___x_2045_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v___x_2064_);
v_nextIt_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v_it_2038_ = v_nextIt_2066_;
goto v___jp_2037_;
}
}
}
else
{
lean_object* v___x_2068_; 
lean_del_object(v___x_2045_);
lean_dec(v_searcher_2043_);
lean_dec(v_currPos_2042_);
v___x_2068_ = lean_box(1);
v_it_2038_ = v___x_2068_;
goto v___jp_2037_;
}
}
}
else
{
return v_b_2036_;
}
v___jp_2037_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_unsigned_to_nat(1u);
v___x_2040_ = lean_nat_add(v_b_2036_, v___x_2039_);
lean_dec(v_b_2036_);
v_a_2035_ = v_it_2038_;
v_b_2036_ = v___x_2040_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object* v___x_2070_, lean_object* v___x_2071_, lean_object* v_a_2072_, lean_object* v_b_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2070_, v___x_2071_, v_a_2072_, v_b_2073_);
lean_dec(v___x_2071_);
lean_dec_ref(v___x_2070_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object* v___x_2075_, lean_object* v___x_2076_, lean_object* v___x_2077_, lean_object* v_a_2078_, lean_object* v_b_2079_){
_start:
{
lean_object* v_it_2081_; 
if (lean_obj_tag(v_a_2078_) == 0)
{
lean_object* v_currPos_2085_; lean_object* v_searcher_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2112_; 
v_currPos_2085_ = lean_ctor_get(v_a_2078_, 0);
v_searcher_2086_ = lean_ctor_get(v_a_2078_, 1);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_a_2078_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2088_ = v_a_2078_;
v_isShared_2089_ = v_isSharedCheck_2112_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_searcher_2086_);
lean_inc(v_currPos_2085_);
lean_dec(v_a_2078_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2112_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v_str_2090_; lean_object* v_startInclusive_2091_; lean_object* v_endExclusive_2092_; lean_object* v___x_2093_; uint8_t v_decide_2094_; 
v_str_2090_ = lean_ctor_get(v___x_2076_, 0);
v_startInclusive_2091_ = lean_ctor_get(v___x_2076_, 1);
v_endExclusive_2092_ = lean_ctor_get(v___x_2076_, 2);
v___x_2093_ = lean_nat_sub(v_endExclusive_2092_, v_startInclusive_2091_);
v_decide_2094_ = lean_nat_dec_eq(v_searcher_2086_, v___x_2093_);
lean_dec(v___x_2093_);
if (v_decide_2094_ == 0)
{
lean_object* v___x_2095_; uint32_t v___x_2096_; uint32_t v___x_2097_; uint8_t v___x_2098_; 
v___x_2095_ = lean_nat_add(v_startInclusive_2091_, v_searcher_2086_);
v___x_2096_ = lean_string_utf8_get_fast(v_str_2090_, v___x_2095_);
v___x_2097_ = 38;
v___x_2098_ = lean_uint32_dec_eq(v___x_2096_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2102_; 
lean_dec(v_searcher_2086_);
v___x_2099_ = lean_string_utf8_next_fast(v_str_2090_, v___x_2095_);
lean_dec(v___x_2095_);
v___x_2100_ = lean_nat_sub(v___x_2099_, v_startInclusive_2091_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 1, v___x_2100_);
v___x_2102_ = v___x_2088_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_currPos_2085_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; 
v___x_2103_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2076_, v___x_2077_, v___x_2102_, v_b_2079_);
return v___x_2103_;
}
}
else
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v_nextIt_2109_; 
lean_dec(v_currPos_2085_);
v___x_2105_ = lean_string_utf8_next_fast(v_str_2090_, v___x_2095_);
v___x_2106_ = lean_nat_sub(v___x_2105_, v___x_2095_);
lean_dec(v___x_2095_);
v___x_2107_ = lean_nat_add(v_searcher_2086_, v___x_2106_);
lean_dec(v___x_2106_);
lean_dec(v_searcher_2086_);
lean_inc(v___x_2107_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 1, v___x_2107_);
lean_ctor_set(v___x_2088_, 0, v___x_2107_);
v_nextIt_2109_ = v___x_2088_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v___x_2107_);
v_nextIt_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
v_it_2081_ = v_nextIt_2109_;
goto v___jp_2080_;
}
}
}
else
{
lean_object* v___x_2111_; 
lean_del_object(v___x_2088_);
lean_dec(v_searcher_2086_);
lean_dec(v_currPos_2085_);
v___x_2111_ = lean_box(1);
v_it_2081_ = v___x_2111_;
goto v___jp_2080_;
}
}
}
else
{
return v_b_2079_;
}
v___jp_2080_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = lean_nat_add(v_b_2079_, v___x_2082_);
lean_dec(v_b_2079_);
v___x_2084_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2076_, v___x_2077_, v_it_2081_, v___x_2083_);
return v___x_2084_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object* v___x_2113_, lean_object* v___x_2114_, lean_object* v___x_2115_, lean_object* v_a_2116_, lean_object* v_b_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2113_, v___x_2114_, v___x_2115_, v_a_2116_, v_b_2117_);
lean_dec(v___x_2115_);
lean_dec_ref(v___x_2114_);
lean_dec_ref(v___x_2113_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object* v_out_2119_, lean_object* v_a_2120_, lean_object* v_b_2121_){
_start:
{
if (lean_obj_tag(v_a_2120_) == 0)
{
lean_object* v_currPos_2122_; lean_object* v_searcher_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2162_; 
v_currPos_2122_ = lean_ctor_get(v_a_2120_, 0);
v_searcher_2123_ = lean_ctor_get(v_a_2120_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_a_2120_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2125_ = v_a_2120_;
v_isShared_2126_ = v_isSharedCheck_2162_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_searcher_2123_);
lean_inc(v_currPos_2122_);
lean_dec(v_a_2120_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2162_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_str_2127_; lean_object* v_startInclusive_2128_; lean_object* v_endExclusive_2129_; lean_object* v_it_2131_; lean_object* v_startInclusive_2132_; lean_object* v_endExclusive_2133_; lean_object* v___x_2140_; uint8_t v_decide_2141_; 
v_str_2127_ = lean_ctor_get(v_out_2119_, 0);
v_startInclusive_2128_ = lean_ctor_get(v_out_2119_, 1);
v_endExclusive_2129_ = lean_ctor_get(v_out_2119_, 2);
v___x_2140_ = lean_nat_sub(v_endExclusive_2129_, v_startInclusive_2128_);
v_decide_2141_ = lean_nat_dec_eq(v_searcher_2123_, v___x_2140_);
if (v_decide_2141_ == 0)
{
uint32_t v___x_2142_; lean_object* v___x_2143_; uint32_t v___x_2144_; uint8_t v___x_2145_; 
lean_dec(v___x_2140_);
v___x_2142_ = 61;
v___x_2143_ = lean_nat_add(v_startInclusive_2128_, v_searcher_2123_);
v___x_2144_ = lean_string_utf8_get_fast(v_str_2127_, v___x_2143_);
v___x_2145_ = lean_uint32_dec_eq(v___x_2144_, v___x_2142_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2149_; 
lean_dec(v_searcher_2123_);
v___x_2146_ = lean_string_utf8_next_fast(v_str_2127_, v___x_2143_);
lean_dec(v___x_2143_);
v___x_2147_ = lean_nat_sub(v___x_2146_, v_startInclusive_2128_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2147_);
v___x_2149_ = v___x_2125_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_currPos_2122_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
v_a_2120_ = v___x_2149_;
goto _start;
}
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v_slice_2155_; lean_object* v_nextIt_2157_; 
v___x_2152_ = lean_string_utf8_next_fast(v_str_2127_, v___x_2143_);
v___x_2153_ = lean_nat_sub(v___x_2152_, v___x_2143_);
lean_dec(v___x_2143_);
v___x_2154_ = lean_nat_add(v_searcher_2123_, v___x_2153_);
lean_dec(v___x_2153_);
v_slice_2155_ = l_String_Slice_subslice_x21(v_out_2119_, v_currPos_2122_, v_searcher_2123_);
lean_inc(v___x_2154_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2154_);
lean_ctor_set(v___x_2125_, 0, v___x_2154_);
v_nextIt_2157_ = v___x_2125_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v___x_2154_);
v_nextIt_2157_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v_startInclusive_2158_; lean_object* v_endExclusive_2159_; 
v_startInclusive_2158_ = lean_ctor_get(v_slice_2155_, 0);
lean_inc(v_startInclusive_2158_);
v_endExclusive_2159_ = lean_ctor_get(v_slice_2155_, 1);
lean_inc(v_endExclusive_2159_);
lean_dec_ref(v_slice_2155_);
v_it_2131_ = v_nextIt_2157_;
v_startInclusive_2132_ = v_startInclusive_2158_;
v_endExclusive_2133_ = v_endExclusive_2159_;
goto v___jp_2130_;
}
}
}
else
{
lean_object* v___x_2161_; 
lean_del_object(v___x_2125_);
lean_dec(v_searcher_2123_);
v___x_2161_ = lean_box(1);
v_it_2131_ = v___x_2161_;
v_startInclusive_2132_ = v_currPos_2122_;
v_endExclusive_2133_ = v___x_2140_;
goto v___jp_2130_;
}
v___jp_2130_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2134_ = lean_nat_add(v_startInclusive_2128_, v_startInclusive_2132_);
lean_dec(v_startInclusive_2132_);
v___x_2135_ = lean_nat_add(v_startInclusive_2128_, v_endExclusive_2133_);
lean_dec(v_endExclusive_2133_);
lean_inc_ref(v_str_2127_);
v___x_2136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2136_, 0, v_str_2127_);
lean_ctor_set(v___x_2136_, 1, v___x_2134_);
lean_ctor_set(v___x_2136_, 2, v___x_2135_);
v___x_2137_ = l_String_Slice_toString(v___x_2136_);
lean_dec_ref_known(v___x_2136_, 3);
v___x_2138_ = lean_array_push(v_b_2121_, v___x_2137_);
v_a_2120_ = v_it_2131_;
v_b_2121_ = v___x_2138_;
goto _start;
}
}
}
else
{
return v_b_2121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object* v_out_2163_, lean_object* v_a_2164_, lean_object* v_b_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2163_, v_a_2164_, v_b_2165_);
lean_dec_ref(v_out_2163_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object* v___x_2170_, lean_object* v___x_2171_, lean_object* v___x_2172_, lean_object* v_a_2173_, lean_object* v_b_2174_){
_start:
{
lean_object* v_it_2176_; lean_object* v_startInclusive_2177_; lean_object* v_endExclusive_2178_; 
if (lean_obj_tag(v_a_2173_) == 0)
{
lean_object* v_currPos_2203_; lean_object* v_searcher_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2233_; 
v_currPos_2203_ = lean_ctor_get(v_a_2173_, 0);
v_searcher_2204_ = lean_ctor_get(v_a_2173_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_a_2173_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2206_ = v_a_2173_;
v_isShared_2207_ = v_isSharedCheck_2233_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_searcher_2204_);
lean_inc(v_currPos_2203_);
lean_dec(v_a_2173_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2233_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v_str_2208_; lean_object* v_startInclusive_2209_; lean_object* v_endExclusive_2210_; lean_object* v___x_2211_; uint8_t v_decide_2212_; 
v_str_2208_ = lean_ctor_get(v___x_2171_, 0);
v_startInclusive_2209_ = lean_ctor_get(v___x_2171_, 1);
v_endExclusive_2210_ = lean_ctor_get(v___x_2171_, 2);
v___x_2211_ = lean_nat_sub(v_endExclusive_2210_, v_startInclusive_2209_);
v_decide_2212_ = lean_nat_dec_eq(v_searcher_2204_, v___x_2211_);
lean_dec(v___x_2211_);
if (v_decide_2212_ == 0)
{
uint32_t v___x_2213_; lean_object* v___x_2214_; uint32_t v___x_2215_; uint8_t v___x_2216_; 
v___x_2213_ = 38;
v___x_2214_ = lean_nat_add(v_startInclusive_2209_, v_searcher_2204_);
v___x_2215_ = lean_string_utf8_get_fast(v_str_2208_, v___x_2214_);
v___x_2216_ = lean_uint32_dec_eq(v___x_2215_, v___x_2213_);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
lean_dec(v_searcher_2204_);
v___x_2217_ = lean_string_utf8_next_fast(v_str_2208_, v___x_2214_);
lean_dec(v___x_2214_);
v___x_2218_ = lean_nat_sub(v___x_2217_, v_startInclusive_2209_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 1, v___x_2218_);
v___x_2220_ = v___x_2206_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_currPos_2203_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
v_a_2173_ = v___x_2220_;
goto _start;
}
}
else
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v_slice_2226_; lean_object* v_nextIt_2228_; 
v___x_2223_ = lean_string_utf8_next_fast(v_str_2208_, v___x_2214_);
v___x_2224_ = lean_nat_sub(v___x_2223_, v___x_2214_);
lean_dec(v___x_2214_);
v___x_2225_ = lean_nat_add(v_searcher_2204_, v___x_2224_);
lean_dec(v___x_2224_);
v_slice_2226_ = l_String_Slice_subslice_x21(v___x_2171_, v_currPos_2203_, v_searcher_2204_);
lean_inc(v___x_2225_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 1, v___x_2225_);
lean_ctor_set(v___x_2206_, 0, v___x_2225_);
v_nextIt_2228_ = v___x_2206_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___x_2225_);
v_nextIt_2228_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v_startInclusive_2229_; lean_object* v_endExclusive_2230_; 
v_startInclusive_2229_ = lean_ctor_get(v_slice_2226_, 0);
lean_inc(v_startInclusive_2229_);
v_endExclusive_2230_ = lean_ctor_get(v_slice_2226_, 1);
lean_inc(v_endExclusive_2230_);
lean_dec_ref(v_slice_2226_);
v_it_2176_ = v_nextIt_2228_;
v_startInclusive_2177_ = v_startInclusive_2229_;
v_endExclusive_2178_ = v_endExclusive_2230_;
goto v___jp_2175_;
}
}
}
else
{
lean_object* v___x_2232_; 
lean_del_object(v___x_2206_);
lean_dec(v_searcher_2204_);
v___x_2232_ = lean_box(1);
lean_inc(v___x_2172_);
v_it_2176_ = v___x_2232_;
v_startInclusive_2177_ = v_currPos_2203_;
v_endExclusive_2178_ = v___x_2172_;
goto v___jp_2175_;
}
}
}
else
{
lean_object* v___x_2234_; 
lean_dec(v___x_2172_);
lean_dec_ref(v___x_2170_);
v___x_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_b_2174_);
return v___x_2234_;
}
v___jp_2175_:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
lean_inc_ref(v___x_2170_);
v___x_2179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2170_);
lean_ctor_set(v___x_2179_, 1, v_startInclusive_2177_);
lean_ctor_set(v___x_2179_, 2, v_endExclusive_2178_);
v___x_2180_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2181_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2182_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2179_, v___x_2180_, v___x_2181_);
lean_dec_ref_known(v___x_2179_, 3);
v___x_2183_ = lean_array_to_list(v___x_2182_);
if (lean_obj_tag(v___x_2183_) == 0)
{
v_a_2173_ = v_it_2176_;
goto _start;
}
else
{
lean_object* v_tail_2185_; 
v_tail_2185_ = lean_ctor_get(v___x_2183_, 1);
if (lean_obj_tag(v_tail_2185_) == 0)
{
lean_object* v_head_2186_; lean_object* v___x_2187_; 
v_head_2186_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_head_2186_);
lean_dec_ref_known(v___x_2183_, 2);
v___x_2187_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2186_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v___x_2188_; 
lean_dec(v_it_2176_);
lean_dec_ref(v_b_2174_);
lean_dec(v___x_2172_);
lean_dec_ref(v___x_2170_);
v___x_2188_ = lean_box(0);
return v___x_2188_;
}
else
{
lean_object* v_val_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v_val_2189_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_val_2189_);
lean_dec_ref_known(v___x_2187_, 1);
v___x_2190_ = lean_box(0);
v___x_2191_ = l_Std_Http_URI_Query_insertEncoded(v_b_2174_, v_val_2189_, v___x_2190_);
v_a_2173_ = v_it_2176_;
v_b_2174_ = v___x_2191_;
goto _start;
}
}
else
{
lean_object* v_head_2193_; lean_object* v___x_2194_; 
lean_inc(v_tail_2185_);
v_head_2193_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_head_2193_);
lean_dec_ref_known(v___x_2183_, 2);
v___x_2194_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2193_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v___x_2195_; 
lean_dec(v_tail_2185_);
lean_dec(v_it_2176_);
lean_dec_ref(v_b_2174_);
lean_dec(v___x_2172_);
lean_dec_ref(v___x_2170_);
v___x_2195_ = lean_box(0);
return v___x_2195_;
}
else
{
lean_object* v_val_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_val_2196_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_val_2196_);
lean_dec_ref_known(v___x_2194_, 1);
v___x_2197_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2198_ = l_String_intercalate(v___x_2197_, v_tail_2185_);
v___x_2199_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2198_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v___x_2200_; 
lean_dec(v_val_2196_);
lean_dec(v_it_2176_);
lean_dec_ref(v_b_2174_);
lean_dec(v___x_2172_);
lean_dec_ref(v___x_2170_);
v___x_2200_ = lean_box(0);
return v___x_2200_;
}
else
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Std_Http_URI_Query_insertEncoded(v_b_2174_, v_val_2196_, v___x_2199_);
v_a_2173_ = v_it_2176_;
v_b_2174_ = v___x_2201_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object* v___x_2235_, lean_object* v___x_2236_, lean_object* v___x_2237_, lean_object* v_a_2238_, lean_object* v_b_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2235_, v___x_2236_, v___x_2237_, v_a_2238_, v_b_2239_);
lean_dec_ref(v___x_2236_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object* v___x_2241_, lean_object* v___x_2242_, lean_object* v___x_2243_, lean_object* v_a_2244_, lean_object* v_b_2245_){
_start:
{
lean_object* v_it_2247_; lean_object* v_startInclusive_2248_; lean_object* v_endExclusive_2249_; 
if (lean_obj_tag(v_a_2244_) == 0)
{
lean_object* v_currPos_2274_; lean_object* v_searcher_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2304_; 
v_currPos_2274_ = lean_ctor_get(v_a_2244_, 0);
v_searcher_2275_ = lean_ctor_get(v_a_2244_, 1);
v_isSharedCheck_2304_ = !lean_is_exclusive(v_a_2244_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2277_ = v_a_2244_;
v_isShared_2278_ = v_isSharedCheck_2304_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_searcher_2275_);
lean_inc(v_currPos_2274_);
lean_dec(v_a_2244_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2304_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v_str_2279_; lean_object* v_startInclusive_2280_; lean_object* v_endExclusive_2281_; lean_object* v___x_2282_; uint8_t v_decide_2283_; 
v_str_2279_ = lean_ctor_get(v___x_2242_, 0);
v_startInclusive_2280_ = lean_ctor_get(v___x_2242_, 1);
v_endExclusive_2281_ = lean_ctor_get(v___x_2242_, 2);
v___x_2282_ = lean_nat_sub(v_endExclusive_2281_, v_startInclusive_2280_);
v_decide_2283_ = lean_nat_dec_eq(v_searcher_2275_, v___x_2282_);
lean_dec(v___x_2282_);
if (v_decide_2283_ == 0)
{
lean_object* v___x_2284_; uint32_t v___x_2285_; uint32_t v___x_2286_; uint8_t v___x_2287_; 
v___x_2284_ = lean_nat_add(v_startInclusive_2280_, v_searcher_2275_);
v___x_2285_ = lean_string_utf8_get_fast(v_str_2279_, v___x_2284_);
v___x_2286_ = 38;
v___x_2287_ = lean_uint32_dec_eq(v___x_2285_, v___x_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2291_; 
lean_dec(v_searcher_2275_);
v___x_2288_ = lean_string_utf8_next_fast(v_str_2279_, v___x_2284_);
lean_dec(v___x_2284_);
v___x_2289_ = lean_nat_sub(v___x_2288_, v_startInclusive_2280_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 1, v___x_2289_);
v___x_2291_ = v___x_2277_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_currPos_2274_);
lean_ctor_set(v_reuseFailAlloc_2293_, 1, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2241_, v___x_2242_, v___x_2243_, v___x_2291_, v_b_2245_);
return v___x_2292_;
}
}
else
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v_slice_2297_; lean_object* v_nextIt_2299_; 
v___x_2294_ = lean_string_utf8_next_fast(v_str_2279_, v___x_2284_);
v___x_2295_ = lean_nat_sub(v___x_2294_, v___x_2284_);
lean_dec(v___x_2284_);
v___x_2296_ = lean_nat_add(v_searcher_2275_, v___x_2295_);
lean_dec(v___x_2295_);
v_slice_2297_ = l_String_Slice_subslice_x21(v___x_2242_, v_currPos_2274_, v_searcher_2275_);
lean_inc(v___x_2296_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 1, v___x_2296_);
lean_ctor_set(v___x_2277_, 0, v___x_2296_);
v_nextIt_2299_ = v___x_2277_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v___x_2296_);
v_nextIt_2299_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
lean_object* v_startInclusive_2300_; lean_object* v_endExclusive_2301_; 
v_startInclusive_2300_ = lean_ctor_get(v_slice_2297_, 0);
lean_inc(v_startInclusive_2300_);
v_endExclusive_2301_ = lean_ctor_get(v_slice_2297_, 1);
lean_inc(v_endExclusive_2301_);
lean_dec_ref(v_slice_2297_);
v_it_2247_ = v_nextIt_2299_;
v_startInclusive_2248_ = v_startInclusive_2300_;
v_endExclusive_2249_ = v_endExclusive_2301_;
goto v___jp_2246_;
}
}
}
else
{
lean_object* v___x_2303_; 
lean_del_object(v___x_2277_);
lean_dec(v_searcher_2275_);
v___x_2303_ = lean_box(1);
lean_inc(v___x_2243_);
v_it_2247_ = v___x_2303_;
v_startInclusive_2248_ = v_currPos_2274_;
v_endExclusive_2249_ = v___x_2243_;
goto v___jp_2246_;
}
}
}
else
{
lean_object* v___x_2305_; 
lean_dec(v___x_2243_);
lean_dec_ref(v___x_2241_);
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_b_2245_);
return v___x_2305_;
}
v___jp_2246_:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
lean_inc_ref(v___x_2241_);
v___x_2250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2241_);
lean_ctor_set(v___x_2250_, 1, v_startInclusive_2248_);
lean_ctor_set(v___x_2250_, 2, v_endExclusive_2249_);
v___x_2251_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2252_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2253_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2250_, v___x_2251_, v___x_2252_);
lean_dec_ref_known(v___x_2250_, 3);
v___x_2254_ = lean_array_to_list(v___x_2253_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v___x_2255_; 
v___x_2255_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2241_, v___x_2242_, v___x_2243_, v_it_2247_, v_b_2245_);
return v___x_2255_;
}
else
{
lean_object* v_tail_2256_; 
v_tail_2256_ = lean_ctor_get(v___x_2254_, 1);
if (lean_obj_tag(v_tail_2256_) == 0)
{
lean_object* v_head_2257_; lean_object* v___x_2258_; 
v_head_2257_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_head_2257_);
lean_dec_ref_known(v___x_2254_, 2);
v___x_2258_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2257_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v___x_2259_; 
lean_dec(v_it_2247_);
lean_dec_ref(v_b_2245_);
lean_dec(v___x_2243_);
lean_dec_ref(v___x_2241_);
v___x_2259_ = lean_box(0);
return v___x_2259_;
}
else
{
lean_object* v_val_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v_val_2260_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_val_2260_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2261_ = lean_box(0);
v___x_2262_ = l_Std_Http_URI_Query_insertEncoded(v_b_2245_, v_val_2260_, v___x_2261_);
v___x_2263_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2241_, v___x_2242_, v___x_2243_, v_it_2247_, v___x_2262_);
return v___x_2263_;
}
}
else
{
lean_object* v_head_2264_; lean_object* v___x_2265_; 
lean_inc(v_tail_2256_);
v_head_2264_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_head_2264_);
lean_dec_ref_known(v___x_2254_, 2);
v___x_2265_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2264_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v___x_2266_; 
lean_dec(v_tail_2256_);
lean_dec(v_it_2247_);
lean_dec_ref(v_b_2245_);
lean_dec(v___x_2243_);
lean_dec_ref(v___x_2241_);
v___x_2266_ = lean_box(0);
return v___x_2266_;
}
else
{
lean_object* v_val_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v_val_2267_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_val_2267_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2268_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2269_ = l_String_intercalate(v___x_2268_, v_tail_2256_);
v___x_2270_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2269_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v___x_2271_; 
lean_dec(v_val_2267_);
lean_dec(v_it_2247_);
lean_dec_ref(v_b_2245_);
lean_dec(v___x_2243_);
lean_dec_ref(v___x_2241_);
v___x_2271_ = lean_box(0);
return v___x_2271_;
}
else
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = l_Std_Http_URI_Query_insertEncoded(v_b_2245_, v_val_2267_, v___x_2270_);
v___x_2273_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2241_, v___x_2242_, v___x_2243_, v_it_2247_, v___x_2272_);
return v___x_2273_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object* v___x_2306_, lean_object* v___x_2307_, lean_object* v___x_2308_, lean_object* v_a_2309_, lean_object* v_b_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2306_, v___x_2307_, v___x_2308_, v_a_2309_, v_b_2310_);
lean_dec_ref(v___x_2307_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object* v_config_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v_maxQueryLength_2319_; lean_object* v_maxQueryParams_2320_; lean_object* v___f_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v_snd_2324_; lean_object* v_fst_2325_; lean_object* v_fst_2326_; lean_object* v_array_2327_; lean_object* v_idx_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2378_; 
v_maxQueryLength_2319_ = lean_ctor_get(v_config_2317_, 4);
lean_inc(v_maxQueryLength_2319_);
v_maxQueryParams_2320_ = lean_ctor_get(v_config_2317_, 8);
lean_inc(v_maxQueryParams_2320_);
lean_dec_ref(v_config_2317_);
v___f_2321_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2322_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2318_);
v___x_2323_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2321_, v_maxQueryLength_2319_, v___x_2322_, v_a_2318_);
lean_dec(v_maxQueryLength_2319_);
v_snd_2324_ = lean_ctor_get(v___x_2323_, 1);
lean_inc(v_snd_2324_);
v_fst_2325_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_fst_2325_);
lean_dec_ref(v___x_2323_);
v_fst_2326_ = lean_ctor_get(v_snd_2324_, 0);
lean_inc(v_fst_2326_);
lean_dec(v_snd_2324_);
v_array_2327_ = lean_ctor_get(v_a_2318_, 0);
v_idx_2328_ = lean_ctor_get(v_a_2318_, 1);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_a_2318_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2330_ = v_a_2318_;
v_isShared_2331_ = v_isSharedCheck_2378_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_idx_2328_);
lean_inc(v_array_2327_);
lean_dec(v_a_2318_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2378_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v_lower_2333_; lean_object* v_upper_2334_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___y_2375_; uint8_t v___x_2377_; 
v___x_2372_ = lean_nat_add(v_idx_2328_, v_fst_2325_);
lean_dec(v_fst_2325_);
v___x_2373_ = lean_byte_array_size(v_array_2327_);
v___x_2377_ = lean_nat_dec_le(v_idx_2328_, v___x_2322_);
if (v___x_2377_ == 0)
{
v___y_2375_ = v_idx_2328_;
goto v___jp_2374_;
}
else
{
lean_dec(v_idx_2328_);
v___y_2375_ = v___x_2322_;
goto v___jp_2374_;
}
v___jp_2332_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v___x_2335_ = l_ByteArray_toByteSlice(v_array_2327_, v_lower_2333_, v_upper_2334_);
v___x_2336_ = l_ByteSlice_toByteArray(v___x_2335_);
v___x_2337_ = lean_string_validate_utf8(v___x_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2340_; 
lean_dec_ref(v___x_2336_);
lean_dec(v_maxQueryParams_2320_);
v___x_2338_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 1);
lean_ctor_set(v___x_2330_, 1, v___x_2338_);
lean_ctor_set(v___x_2330_, 0, v_fst_2326_);
v___x_2340_ = v___x_2330_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_fst_2326_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
else
{
lean_object* v___x_2342_; lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2342_ = lean_string_from_utf8_unchecked(v___x_2336_);
v___x_2343_ = lean_string_utf8_byte_size(v___x_2342_);
v___x_2344_ = lean_nat_dec_eq(v___x_2343_, v___x_2322_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; 
lean_inc_ref(v___x_2342_);
v___x_2345_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2342_);
lean_ctor_set(v___x_2345_, 1, v___x_2322_);
lean_ctor_set(v___x_2345_, 2, v___x_2343_);
v___x_2346_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
v___x_2347_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2342_, v___x_2345_, v___x_2343_, v___x_2346_, v___x_2322_);
v___x_2348_ = lean_nat_dec_lt(v_maxQueryParams_2320_, v___x_2347_);
lean_dec(v___x_2347_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
lean_dec(v_maxQueryParams_2320_);
v___x_2349_ = l_Std_Http_URI_Query_empty;
v___x_2350_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2342_, v___x_2345_, v___x_2343_, v___x_2346_, v___x_2349_);
lean_dec_ref_known(v___x_2345_, 3);
if (lean_obj_tag(v___x_2350_) == 1)
{
lean_object* v_val_2351_; lean_object* v___x_2353_; 
v_val_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_val_2351_);
lean_dec_ref_known(v___x_2350_, 1);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v_val_2351_);
lean_ctor_set(v___x_2330_, 0, v_fst_2326_);
v___x_2353_ = v___x_2330_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_fst_2326_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_val_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
else
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
lean_dec(v___x_2350_);
v___x_2355_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 1);
lean_ctor_set(v___x_2330_, 1, v___x_2355_);
lean_ctor_set(v___x_2330_, 0, v_fst_2326_);
v___x_2357_ = v___x_2330_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_fst_2326_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2366_; 
lean_dec_ref_known(v___x_2345_, 3);
lean_dec_ref(v___x_2342_);
v___x_2359_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3));
v___x_2360_ = l_Nat_reprFast(v_maxQueryParams_2320_);
v___x_2361_ = lean_string_append(v___x_2359_, v___x_2360_);
lean_dec_ref(v___x_2360_);
v___x_2362_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_2363_ = lean_string_append(v___x_2361_, v___x_2362_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 1);
lean_ctor_set(v___x_2330_, 1, v___x_2364_);
lean_ctor_set(v___x_2330_, 0, v_fst_2326_);
v___x_2366_ = v___x_2330_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_fst_2326_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
else
{
lean_object* v___x_2368_; lean_object* v___x_2370_; 
lean_dec_ref(v___x_2342_);
lean_dec(v_maxQueryParams_2320_);
v___x_2368_ = l_Std_Http_URI_Query_empty;
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v___x_2368_);
lean_ctor_set(v___x_2330_, 0, v_fst_2326_);
v___x_2370_ = v___x_2330_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_fst_2326_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
v___jp_2374_:
{
uint8_t v___x_2376_; 
v___x_2376_ = lean_nat_dec_le(v___x_2372_, v___x_2373_);
if (v___x_2376_ == 0)
{
lean_dec(v___x_2372_);
v_lower_2333_ = v___y_2375_;
v_upper_2334_ = v___x_2373_;
goto v___jp_2332_;
}
else
{
v_lower_2333_ = v___y_2375_;
v_upper_2334_ = v___x_2372_;
goto v___jp_2332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object* v___x_2379_, lean_object* v___x_2380_, lean_object* v___x_2381_, lean_object* v_inst_2382_, lean_object* v_R_2383_, lean_object* v_a_2384_, lean_object* v_b_2385_, lean_object* v_c_2386_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2379_, v___x_2380_, v___x_2381_, v_a_2384_, v_b_2385_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v___x_2390_, lean_object* v_inst_2391_, lean_object* v_R_2392_, lean_object* v_a_2393_, lean_object* v_b_2394_, lean_object* v_c_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(v___x_2388_, v___x_2389_, v___x_2390_, v_inst_2391_, v_R_2392_, v_a_2393_, v_b_2394_, v_c_2395_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object* v_out_2397_, lean_object* v_inst_2398_, lean_object* v_R_2399_, lean_object* v_a_2400_, lean_object* v_b_2401_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2397_, v_a_2400_, v_b_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object* v_out_2403_, lean_object* v_inst_2404_, lean_object* v_R_2405_, lean_object* v_a_2406_, lean_object* v_b_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(v_out_2403_, v_inst_2404_, v_R_2405_, v_a_2406_, v_b_2407_);
lean_dec_ref(v_out_2403_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object* v___x_2409_, lean_object* v___x_2410_, lean_object* v___x_2411_, lean_object* v_inst_2412_, lean_object* v_R_2413_, lean_object* v_a_2414_, lean_object* v_b_2415_, lean_object* v_c_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2409_, v___x_2410_, v___x_2411_, v_a_2414_, v_b_2415_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object* v___x_2418_, lean_object* v___x_2419_, lean_object* v___x_2420_, lean_object* v_inst_2421_, lean_object* v_R_2422_, lean_object* v_a_2423_, lean_object* v_b_2424_, lean_object* v_c_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(v___x_2418_, v___x_2419_, v___x_2420_, v_inst_2421_, v_R_2422_, v_a_2423_, v_b_2424_, v_c_2425_);
lean_dec_ref(v___x_2419_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object* v___x_2427_, lean_object* v___x_2428_, lean_object* v___x_2429_, lean_object* v_inst_2430_, lean_object* v_R_2431_, lean_object* v_a_2432_, lean_object* v_b_2433_, lean_object* v_c_2434_){
_start:
{
lean_object* v___x_2435_; 
v___x_2435_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2428_, v___x_2429_, v_a_2432_, v_b_2433_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object* v___x_2436_, lean_object* v___x_2437_, lean_object* v___x_2438_, lean_object* v_inst_2439_, lean_object* v_R_2440_, lean_object* v_a_2441_, lean_object* v_b_2442_, lean_object* v_c_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(v___x_2436_, v___x_2437_, v___x_2438_, v_inst_2439_, v_R_2440_, v_a_2441_, v_b_2442_, v_c_2443_);
lean_dec(v___x_2438_);
lean_dec_ref(v___x_2437_);
lean_dec_ref(v___x_2436_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object* v___x_2445_, lean_object* v___x_2446_, lean_object* v___x_2447_, lean_object* v_inst_2448_, lean_object* v_R_2449_, lean_object* v_a_2450_, lean_object* v_b_2451_, lean_object* v_c_2452_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2445_, v___x_2446_, v___x_2447_, v_a_2450_, v_b_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object* v___x_2454_, lean_object* v___x_2455_, lean_object* v___x_2456_, lean_object* v_inst_2457_, lean_object* v_R_2458_, lean_object* v_a_2459_, lean_object* v_b_2460_, lean_object* v_c_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(v___x_2454_, v___x_2455_, v___x_2456_, v_inst_2457_, v_R_2458_, v_a_2459_, v_b_2460_, v_c_2461_);
lean_dec_ref(v___x_2455_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object* v_config_2466_, lean_object* v_a_2467_){
_start:
{
lean_object* v_maxFragmentLength_2468_; lean_object* v___f_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v_snd_2472_; lean_object* v_fst_2473_; lean_object* v_fst_2474_; lean_object* v_array_2475_; lean_object* v_idx_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2500_; 
v_maxFragmentLength_2468_ = lean_ctor_get(v_config_2466_, 5);
v___f_2469_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2470_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2467_);
v___x_2471_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2469_, v_maxFragmentLength_2468_, v___x_2470_, v_a_2467_);
v_snd_2472_ = lean_ctor_get(v___x_2471_, 1);
lean_inc(v_snd_2472_);
v_fst_2473_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_fst_2473_);
lean_dec_ref(v___x_2471_);
v_fst_2474_ = lean_ctor_get(v_snd_2472_, 0);
lean_inc(v_fst_2474_);
lean_dec(v_snd_2472_);
v_array_2475_ = lean_ctor_get(v_a_2467_, 0);
v_idx_2476_ = lean_ctor_get(v_a_2467_, 1);
v_isSharedCheck_2500_ = !lean_is_exclusive(v_a_2467_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2478_ = v_a_2467_;
v_isShared_2479_ = v_isSharedCheck_2500_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_idx_2476_);
lean_inc(v_array_2475_);
lean_dec(v_a_2467_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2500_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v_lower_2481_; lean_object* v_upper_2482_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___y_2497_; uint8_t v___x_2499_; 
v___x_2494_ = lean_nat_add(v_idx_2476_, v_fst_2473_);
lean_dec(v_fst_2473_);
v___x_2495_ = lean_byte_array_size(v_array_2475_);
v___x_2499_ = lean_nat_dec_le(v_idx_2476_, v___x_2470_);
if (v___x_2499_ == 0)
{
v___y_2497_ = v_idx_2476_;
goto v___jp_2496_;
}
else
{
lean_dec(v_idx_2476_);
v___y_2497_ = v___x_2470_;
goto v___jp_2496_;
}
v___jp_2480_:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = l_ByteArray_toByteSlice(v_array_2475_, v_lower_2481_, v_upper_2482_);
v___x_2484_ = l_ByteSlice_toByteArray(v___x_2483_);
v___x_2485_ = l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(v___x_2484_);
if (lean_obj_tag(v___x_2485_) == 1)
{
lean_object* v_val_2486_; lean_object* v___x_2488_; 
v_val_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc(v_val_2486_);
lean_dec_ref_known(v___x_2485_, 1);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 1, v_val_2486_);
lean_ctor_set(v___x_2478_, 0, v_fst_2474_);
v___x_2488_ = v___x_2478_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_fst_2474_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v_val_2486_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
lean_dec(v___x_2485_);
v___x_2490_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1));
if (v_isShared_2479_ == 0)
{
lean_ctor_set_tag(v___x_2478_, 1);
lean_ctor_set(v___x_2478_, 1, v___x_2490_);
lean_ctor_set(v___x_2478_, 0, v_fst_2474_);
v___x_2492_ = v___x_2478_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_fst_2474_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v___x_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
v___jp_2496_:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_nat_dec_le(v___x_2494_, v___x_2495_);
if (v___x_2498_ == 0)
{
lean_dec(v___x_2494_);
v_lower_2481_ = v___y_2497_;
v_upper_2482_ = v___x_2495_;
goto v___jp_2480_;
}
else
{
v_lower_2481_ = v___y_2497_;
v_upper_2482_ = v___x_2494_;
goto v___jp_2480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object* v_config_2501_, lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2501_, v_a_2502_);
lean_dec_ref(v_config_2501_);
return v_res_2503_;
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1(void){
_start:
{
lean_object* v___x_2505_; lean_object* v_utf8_2506_; 
v___x_2505_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0));
v_utf8_2506_ = lean_string_to_utf8(v___x_2505_);
return v_utf8_2506_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object* v_config_2507_, lean_object* v_a_2508_){
_start:
{
lean_object* v_utf8_2509_; lean_object* v___x_2510_; 
v_utf8_2509_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_2508_);
v___x_2510_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_2509_, v_a_2508_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_pos_2511_; uint8_t v___x_2512_; lean_object* v_pos_2514_; lean_object* v_res_2515_; lean_object* v___x_2536_; 
lean_dec_ref(v_a_2508_);
v_pos_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_n(v_pos_2511_, 2);
lean_dec_ref_known(v___x_2510_, 2);
v___x_2512_ = 1;
v___x_2536_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_2507_, v_pos_2511_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_pos_2537_; lean_object* v_res_2538_; lean_object* v___x_2539_; 
lean_dec(v_pos_2511_);
v_pos_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_pos_2537_);
v_res_2538_ = lean_ctor_get(v___x_2536_, 1);
lean_inc(v_res_2538_);
lean_dec_ref_known(v___x_2536_, 2);
v___x_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2539_, 0, v_res_2538_);
v_pos_2514_ = v_pos_2537_;
v_res_2515_ = v___x_2539_;
goto v___jp_2513_;
}
else
{
lean_object* v_err_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2550_; 
v_err_2540_ = lean_ctor_get(v___x_2536_, 1);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2550_ == 0)
{
lean_object* v_unused_2551_; 
v_unused_2551_ = lean_ctor_get(v___x_2536_, 0);
lean_dec(v_unused_2551_);
v___x_2542_ = v___x_2536_;
v_isShared_2543_ = v_isSharedCheck_2550_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_err_2540_);
lean_dec(v___x_2536_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2550_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v_idx_2544_; uint8_t v___x_2545_; 
v_idx_2544_ = lean_ctor_get(v_pos_2511_, 1);
v___x_2545_ = lean_nat_dec_eq(v_idx_2544_, v_idx_2544_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2547_; 
lean_dec_ref(v_config_2507_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 0, v_pos_2511_);
v___x_2547_ = v___x_2542_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_pos_2511_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v_err_2540_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
else
{
lean_object* v___x_2549_; 
lean_del_object(v___x_2542_);
lean_dec(v_err_2540_);
v___x_2549_ = lean_box(0);
v_pos_2514_ = v_pos_2511_;
v_res_2515_ = v___x_2549_;
goto v___jp_2513_;
}
}
}
v___jp_2513_:
{
lean_object* v___x_2516_; 
v___x_2516_ = l_Std_Http_URI_Parser_parsePath(v_config_2507_, v___x_2512_, v___x_2512_, v_pos_2514_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v_pos_2517_; lean_object* v_res_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2526_; 
v_pos_2517_ = lean_ctor_get(v___x_2516_, 0);
v_res_2518_ = lean_ctor_get(v___x_2516_, 1);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2520_ = v___x_2516_;
v_isShared_2521_ = v_isSharedCheck_2526_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_res_2518_);
lean_inc(v_pos_2517_);
lean_dec(v___x_2516_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2526_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2522_; lean_object* v___x_2524_; 
v___x_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2522_, 0, v_res_2515_);
lean_ctor_set(v___x_2522_, 1, v_res_2518_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 1, v___x_2522_);
v___x_2524_ = v___x_2520_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_pos_2517_);
lean_ctor_set(v_reuseFailAlloc_2525_, 1, v___x_2522_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
else
{
lean_object* v_pos_2527_; lean_object* v_err_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec(v_res_2515_);
v_pos_2527_ = lean_ctor_get(v___x_2516_, 0);
v_err_2528_ = lean_ctor_get(v___x_2516_, 1);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2516_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_err_2528_);
lean_inc(v_pos_2527_);
lean_dec(v___x_2516_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_pos_2527_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v_err_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
}
else
{
lean_object* v_err_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2583_; 
v_err_2552_ = lean_ctor_get(v___x_2510_, 1);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2583_ == 0)
{
lean_object* v_unused_2584_; 
v_unused_2584_ = lean_ctor_get(v___x_2510_, 0);
lean_dec(v_unused_2584_);
v___x_2554_ = v___x_2510_;
v_isShared_2555_ = v_isSharedCheck_2583_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_err_2552_);
lean_dec(v___x_2510_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2583_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v_idx_2556_; uint8_t v___x_2557_; 
v_idx_2556_ = lean_ctor_get(v_a_2508_, 1);
v___x_2557_ = lean_nat_dec_eq(v_idx_2556_, v_idx_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2559_; 
lean_dec_ref(v_config_2507_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v_a_2508_);
v___x_2559_ = v___x_2554_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2508_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_err_2552_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
else
{
uint8_t v___x_2561_; lean_object* v___x_2562_; 
lean_del_object(v___x_2554_);
lean_dec(v_err_2552_);
v___x_2561_ = 0;
v___x_2562_ = l_Std_Http_URI_Parser_parsePath(v_config_2507_, v___x_2561_, v___x_2557_, v_a_2508_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_pos_2563_; lean_object* v_res_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2573_; 
v_pos_2563_ = lean_ctor_get(v___x_2562_, 0);
v_res_2564_ = lean_ctor_get(v___x_2562_, 1);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2566_ = v___x_2562_;
v_isShared_2567_ = v_isSharedCheck_2573_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_res_2564_);
lean_inc(v_pos_2563_);
lean_dec(v___x_2562_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2573_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2568_ = lean_box(0);
v___x_2569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v_res_2564_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 1, v___x_2569_);
v___x_2571_ = v___x_2566_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_pos_2563_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
else
{
lean_object* v_pos_2574_; lean_object* v_err_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
v_pos_2574_ = lean_ctor_get(v___x_2562_, 0);
v_err_2575_ = lean_ctor_get(v___x_2562_, 1);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2562_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_err_2575_);
lean_inc(v_pos_2574_);
lean_dec(v___x_2562_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_pos_2574_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v_err_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object* v_config_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2594_, v_a_2595_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_pos_2597_; lean_object* v_res_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2729_; 
v_pos_2597_ = lean_ctor_get(v___x_2596_, 0);
v_res_2598_ = lean_ctor_get(v___x_2596_, 1);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2600_ = v___x_2596_;
v_isShared_2601_ = v_isSharedCheck_2729_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_res_2598_);
lean_inc(v_pos_2597_);
lean_dec(v___x_2596_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2729_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v_array_2602_; lean_object* v_idx_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; 
v_array_2602_ = lean_ctor_get(v_pos_2597_, 0);
v_idx_2603_ = lean_ctor_get(v_pos_2597_, 1);
v___x_2604_ = lean_byte_array_size(v_array_2602_);
v___x_2605_ = lean_nat_dec_lt(v_idx_2603_, v___x_2604_);
if (v___x_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v___x_2608_; 
lean_dec(v_res_2598_);
lean_dec_ref(v_config_2594_);
v___x_2606_ = lean_box(0);
if (v_isShared_2601_ == 0)
{
lean_ctor_set_tag(v___x_2600_, 1);
lean_ctor_set(v___x_2600_, 1, v___x_2606_);
v___x_2608_ = v___x_2600_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_pos_2597_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v___x_2606_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
else
{
uint8_t v___x_2610_; uint8_t v_got_2611_; uint8_t v___x_2612_; 
v___x_2610_ = 58;
v_got_2611_ = lean_byte_array_fget(v_array_2602_, v_idx_2603_);
v___x_2612_ = lean_uint8_dec_eq(v_got_2611_, v___x_2610_);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
lean_dec(v_res_2598_);
lean_dec_ref(v_config_2594_);
v___x_2613_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_2601_ == 0)
{
lean_ctor_set_tag(v___x_2600_, 1);
lean_ctor_set(v___x_2600_, 1, v___x_2613_);
v___x_2615_ = v___x_2600_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_pos_2597_);
lean_ctor_set(v_reuseFailAlloc_2616_, 1, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
else
{
lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2726_; 
lean_inc(v_idx_2603_);
lean_inc_ref(v_array_2602_);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_pos_2597_);
if (v_isSharedCheck_2726_ == 0)
{
lean_object* v_unused_2727_; lean_object* v_unused_2728_; 
v_unused_2727_ = lean_ctor_get(v_pos_2597_, 1);
lean_dec(v_unused_2727_);
v_unused_2728_ = lean_ctor_get(v_pos_2597_, 0);
lean_dec(v_unused_2728_);
v___x_2618_ = v_pos_2597_;
v_isShared_2619_ = v_isSharedCheck_2726_;
goto v_resetjp_2617_;
}
else
{
lean_dec(v_pos_2597_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2726_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2623_; 
v___x_2620_ = lean_unsigned_to_nat(1u);
v___x_2621_ = lean_nat_add(v_idx_2603_, v___x_2620_);
lean_dec(v_idx_2603_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 1, v___x_2621_);
v___x_2623_ = v___x_2618_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_array_2602_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
lean_object* v___x_2624_; 
lean_inc_ref(v_config_2594_);
v___x_2624_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2594_, v___x_2623_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_res_2625_; lean_object* v_pos_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2715_; 
v_res_2625_ = lean_ctor_get(v___x_2624_, 1);
v_pos_2626_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2628_ = v___x_2624_;
v_isShared_2629_ = v_isSharedCheck_2715_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_res_2625_);
lean_inc(v_pos_2626_);
lean_dec(v___x_2624_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2715_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v_fst_2630_; lean_object* v_snd_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2714_; 
v_fst_2630_ = lean_ctor_get(v_res_2625_, 0);
v_snd_2631_ = lean_ctor_get(v_res_2625_, 1);
v_isSharedCheck_2714_ = !lean_is_exclusive(v_res_2625_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2633_ = v_res_2625_;
v_isShared_2634_ = v_isSharedCheck_2714_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_snd_2631_);
lean_inc(v_fst_2630_);
lean_dec(v_res_2625_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2714_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___y_2636_; lean_object* v_pos_2637_; lean_object* v_res_2638_; lean_object* v___y_2644_; lean_object* v_idx_2645_; lean_object* v_pos_2646_; lean_object* v_err_2647_; lean_object* v_pos_2655_; lean_object* v_array_2656_; lean_object* v_idx_2657_; lean_object* v_res_2658_; lean_object* v_array_2677_; lean_object* v_idx_2678_; lean_object* v_pos_2680_; lean_object* v_array_2681_; lean_object* v_idx_2682_; lean_object* v_err_2683_; lean_object* v___x_2687_; uint8_t v___x_2688_; 
v_array_2677_ = lean_ctor_get(v_pos_2626_, 0);
lean_inc_ref(v_array_2677_);
v_idx_2678_ = lean_ctor_get(v_pos_2626_, 1);
lean_inc(v_idx_2678_);
v___x_2687_ = lean_byte_array_size(v_array_2677_);
v___x_2688_ = lean_nat_dec_lt(v_idx_2678_, v___x_2687_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; 
v___x_2689_ = lean_box(0);
lean_inc(v_idx_2678_);
v_pos_2680_ = v_pos_2626_;
v_array_2681_ = v_array_2677_;
v_idx_2682_ = v_idx_2678_;
v_err_2683_ = v___x_2689_;
goto v___jp_2679_;
}
else
{
uint8_t v___x_2690_; uint8_t v_got_2691_; uint8_t v___x_2692_; 
v___x_2690_ = 63;
v_got_2691_ = lean_byte_array_fget(v_array_2677_, v_idx_2678_);
v___x_2692_ = lean_uint8_dec_eq(v_got_2691_, v___x_2690_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; 
v___x_2693_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2678_);
v_pos_2680_ = v_pos_2626_;
v_array_2681_ = v_array_2677_;
v_idx_2682_ = v_idx_2678_;
v_err_2683_ = v___x_2693_;
goto v___jp_2679_;
}
else
{
lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2711_; 
v_isSharedCheck_2711_ = !lean_is_exclusive(v_pos_2626_);
if (v_isSharedCheck_2711_ == 0)
{
lean_object* v_unused_2712_; lean_object* v_unused_2713_; 
v_unused_2712_ = lean_ctor_get(v_pos_2626_, 1);
lean_dec(v_unused_2712_);
v_unused_2713_ = lean_ctor_get(v_pos_2626_, 0);
lean_dec(v_unused_2713_);
v___x_2695_ = v_pos_2626_;
v_isShared_2696_ = v_isSharedCheck_2711_;
goto v_resetjp_2694_;
}
else
{
lean_dec(v_pos_2626_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2711_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2697_ = lean_nat_add(v_idx_2678_, v___x_2620_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 1, v___x_2697_);
v___x_2699_ = v___x_2695_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_array_2677_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2700_; 
lean_inc_ref(v_config_2594_);
v___x_2700_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2594_, v___x_2699_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_pos_2701_; lean_object* v_res_2702_; lean_object* v_array_2703_; lean_object* v_idx_2704_; lean_object* v___x_2705_; 
lean_dec(v_idx_2678_);
v_pos_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_pos_2701_);
v_res_2702_ = lean_ctor_get(v___x_2700_, 1);
lean_inc(v_res_2702_);
lean_dec_ref_known(v___x_2700_, 2);
v_array_2703_ = lean_ctor_get(v_pos_2701_, 0);
lean_inc_ref(v_array_2703_);
v_idx_2704_ = lean_ctor_get(v_pos_2701_, 1);
lean_inc(v_idx_2704_);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_res_2702_);
v_pos_2655_ = v_pos_2701_;
v_array_2656_ = v_array_2703_;
v_idx_2657_ = v_idx_2704_;
v_res_2658_ = v___x_2705_;
goto v___jp_2654_;
}
else
{
lean_object* v_pos_2706_; lean_object* v_err_2707_; lean_object* v_array_2708_; lean_object* v_idx_2709_; 
v_pos_2706_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_pos_2706_);
v_err_2707_ = lean_ctor_get(v___x_2700_, 1);
lean_inc(v_err_2707_);
lean_dec_ref_known(v___x_2700_, 2);
v_array_2708_ = lean_ctor_get(v_pos_2706_, 0);
lean_inc_ref(v_array_2708_);
v_idx_2709_ = lean_ctor_get(v_pos_2706_, 1);
lean_inc(v_idx_2709_);
v_pos_2680_ = v_pos_2706_;
v_array_2681_ = v_array_2708_;
v_idx_2682_ = v_idx_2709_;
v_err_2683_ = v_err_2707_;
goto v___jp_2679_;
}
}
}
}
}
v___jp_2635_:
{
lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2639_, 0, v_res_2598_);
lean_ctor_set(v___x_2639_, 1, v_fst_2630_);
lean_ctor_set(v___x_2639_, 2, v_snd_2631_);
lean_ctor_set(v___x_2639_, 3, v___y_2636_);
lean_ctor_set(v___x_2639_, 4, v_res_2638_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 1, v___x_2639_);
lean_ctor_set(v___x_2628_, 0, v_pos_2637_);
v___x_2641_ = v___x_2628_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_pos_2637_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v___x_2639_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
v___jp_2643_:
{
lean_object* v_idx_2648_; uint8_t v___x_2649_; 
v_idx_2648_ = lean_ctor_get(v_pos_2646_, 1);
v___x_2649_ = lean_nat_dec_eq(v_idx_2645_, v_idx_2648_);
lean_dec(v_idx_2645_);
if (v___x_2649_ == 0)
{
lean_object* v___x_2651_; 
lean_dec(v___y_2644_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
lean_del_object(v___x_2628_);
lean_dec(v_res_2598_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set_tag(v___x_2600_, 1);
lean_ctor_set(v___x_2600_, 1, v_err_2647_);
lean_ctor_set(v___x_2600_, 0, v_pos_2646_);
v___x_2651_ = v___x_2600_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_pos_2646_);
lean_ctor_set(v_reuseFailAlloc_2652_, 1, v_err_2647_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
else
{
lean_object* v___x_2653_; 
lean_dec(v_err_2647_);
lean_del_object(v___x_2600_);
v___x_2653_ = lean_box(0);
v___y_2636_ = v___y_2644_;
v_pos_2637_ = v_pos_2646_;
v_res_2638_ = v___x_2653_;
goto v___jp_2635_;
}
}
v___jp_2654_:
{
lean_object* v___x_2659_; uint8_t v___x_2660_; 
v___x_2659_ = lean_byte_array_size(v_array_2656_);
v___x_2660_ = lean_nat_dec_lt(v_idx_2657_, v___x_2659_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; 
lean_dec_ref(v_array_2656_);
lean_del_object(v___x_2633_);
lean_dec_ref(v_config_2594_);
v___x_2661_ = lean_box(0);
v___y_2644_ = v_res_2658_;
v_idx_2645_ = v_idx_2657_;
v_pos_2646_ = v_pos_2655_;
v_err_2647_ = v___x_2661_;
goto v___jp_2643_;
}
else
{
uint8_t v___x_2662_; uint8_t v_got_2663_; uint8_t v___x_2664_; 
v___x_2662_ = 35;
v_got_2663_ = lean_byte_array_fget(v_array_2656_, v_idx_2657_);
v___x_2664_ = lean_uint8_dec_eq(v_got_2663_, v___x_2662_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; 
lean_dec_ref(v_array_2656_);
lean_del_object(v___x_2633_);
lean_dec_ref(v_config_2594_);
v___x_2665_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_2644_ = v_res_2658_;
v_idx_2645_ = v_idx_2657_;
v_pos_2646_ = v_pos_2655_;
v_err_2647_ = v___x_2665_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2666_; lean_object* v___x_2668_; 
lean_dec_ref(v_pos_2655_);
v___x_2666_ = lean_nat_add(v_idx_2657_, v___x_2620_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v___x_2666_);
lean_ctor_set(v___x_2633_, 0, v_array_2656_);
v___x_2668_ = v___x_2633_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_array_2656_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
lean_object* v___x_2669_; 
v___x_2669_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2594_, v___x_2668_);
lean_dec_ref(v_config_2594_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_pos_2670_; lean_object* v_res_2671_; lean_object* v___x_2672_; 
v_pos_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_pos_2670_);
v_res_2671_ = lean_ctor_get(v___x_2669_, 1);
lean_inc(v_res_2671_);
lean_dec_ref_known(v___x_2669_, 2);
v___x_2672_ = l_Std_Http_URI_EncodedFragment_decode(v_res_2671_);
lean_dec(v_res_2671_);
if (lean_obj_tag(v___x_2672_) == 1)
{
lean_dec(v_idx_2657_);
lean_del_object(v___x_2600_);
v___y_2636_ = v_res_2658_;
v_pos_2637_ = v_pos_2670_;
v_res_2638_ = v___x_2672_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2673_; 
lean_dec(v___x_2672_);
v___x_2673_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
v___y_2644_ = v_res_2658_;
v_idx_2645_ = v_idx_2657_;
v_pos_2646_ = v_pos_2670_;
v_err_2647_ = v___x_2673_;
goto v___jp_2643_;
}
}
else
{
lean_object* v_pos_2674_; lean_object* v_err_2675_; 
v_pos_2674_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_pos_2674_);
v_err_2675_ = lean_ctor_get(v___x_2669_, 1);
lean_inc(v_err_2675_);
lean_dec_ref_known(v___x_2669_, 2);
v___y_2644_ = v_res_2658_;
v_idx_2645_ = v_idx_2657_;
v_pos_2646_ = v_pos_2674_;
v_err_2647_ = v_err_2675_;
goto v___jp_2643_;
}
}
}
}
}
v___jp_2679_:
{
uint8_t v___x_2684_; 
v___x_2684_ = lean_nat_dec_eq(v_idx_2678_, v_idx_2682_);
lean_dec(v_idx_2678_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; 
lean_dec(v_idx_2682_);
lean_dec_ref(v_array_2681_);
lean_del_object(v___x_2633_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
lean_del_object(v___x_2628_);
lean_del_object(v___x_2600_);
lean_dec(v_res_2598_);
lean_dec_ref(v_config_2594_);
v___x_2685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2685_, 0, v_pos_2680_);
lean_ctor_set(v___x_2685_, 1, v_err_2683_);
return v___x_2685_;
}
else
{
lean_object* v___x_2686_; 
lean_dec(v_err_2683_);
v___x_2686_ = lean_box(0);
v_pos_2655_ = v_pos_2680_;
v_array_2656_ = v_array_2681_;
v_idx_2657_ = v_idx_2682_;
v_res_2658_ = v___x_2686_;
goto v___jp_2654_;
}
}
}
}
}
else
{
lean_object* v_pos_2716_; lean_object* v_err_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_del_object(v___x_2600_);
lean_dec(v_res_2598_);
lean_dec_ref(v_config_2594_);
v_pos_2716_ = lean_ctor_get(v___x_2624_, 0);
v_err_2717_ = lean_ctor_get(v___x_2624_, 1);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2624_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_err_2717_);
lean_inc(v_pos_2716_);
lean_dec(v___x_2624_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_pos_2716_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v_err_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
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
lean_object* v_pos_2730_; lean_object* v_err_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec_ref(v_config_2594_);
v_pos_2730_ = lean_ctor_get(v___x_2596_, 0);
v_err_2731_ = lean_ctor_get(v___x_2596_, 1);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2596_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_err_2731_);
lean_inc(v_pos_2730_);
lean_dec(v___x_2596_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_pos_2730_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_err_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object* v_a_2742_){
_start:
{
lean_object* v_array_2743_; lean_object* v_idx_2744_; lean_object* v___x_2745_; uint8_t v___x_2746_; 
v_array_2743_ = lean_ctor_get(v_a_2742_, 0);
v_idx_2744_ = lean_ctor_get(v_a_2742_, 1);
v___x_2745_ = lean_byte_array_size(v_array_2743_);
v___x_2746_ = lean_nat_dec_lt(v_idx_2744_, v___x_2745_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = lean_box(0);
v___x_2748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2748_, 0, v_a_2742_);
lean_ctor_set(v___x_2748_, 1, v___x_2747_);
return v___x_2748_;
}
else
{
uint8_t v___x_2749_; uint8_t v_got_2750_; uint8_t v___x_2751_; 
v___x_2749_ = 42;
v_got_2750_ = lean_byte_array_fget(v_array_2743_, v_idx_2744_);
v___x_2751_ = lean_uint8_dec_eq(v_got_2750_, v___x_2749_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1));
v___x_2753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2753_, 0, v_a_2742_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
return v___x_2753_;
}
else
{
lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2764_; 
lean_inc(v_idx_2744_);
lean_inc_ref(v_array_2743_);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_a_2742_);
if (v_isSharedCheck_2764_ == 0)
{
lean_object* v_unused_2765_; lean_object* v_unused_2766_; 
v_unused_2765_ = lean_ctor_get(v_a_2742_, 1);
lean_dec(v_unused_2765_);
v_unused_2766_ = lean_ctor_get(v_a_2742_, 0);
lean_dec(v_unused_2766_);
v___x_2755_ = v_a_2742_;
v_isShared_2756_ = v_isSharedCheck_2764_;
goto v_resetjp_2754_;
}
else
{
lean_dec(v_a_2742_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2764_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2760_; 
v___x_2757_ = lean_unsigned_to_nat(1u);
v___x_2758_ = lean_nat_add(v_idx_2744_, v___x_2757_);
lean_dec(v_idx_2744_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 1, v___x_2758_);
v___x_2760_ = v___x_2755_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_array_2743_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2761_ = lean_box(3);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
return v___x_2762_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object* v_config_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_array_2775_; lean_object* v_idx_2776_; lean_object* v___x_2777_; uint8_t v___x_2778_; 
v_array_2775_ = lean_ctor_get(v_a_2771_, 0);
v_idx_2776_ = lean_ctor_get(v_a_2771_, 1);
v___x_2777_ = lean_byte_array_size(v_array_2775_);
v___x_2778_ = lean_nat_dec_lt(v_idx_2776_, v___x_2777_);
if (v___x_2778_ == 0)
{
lean_dec_ref(v_config_2770_);
goto v___jp_2772_;
}
else
{
uint8_t v___x_2779_; uint8_t v___x_2780_; uint8_t v___x_2781_; 
v___x_2779_ = lean_byte_array_fget(v_array_2775_, v_idx_2776_);
v___x_2780_ = 47;
v___x_2781_ = lean_uint8_dec_eq(v___x_2779_, v___x_2780_);
if (v___x_2781_ == 0)
{
lean_dec_ref(v_config_2770_);
goto v___jp_2772_;
}
else
{
lean_object* v___x_2782_; 
lean_inc_ref(v_a_2771_);
lean_inc_ref(v_config_2770_);
v___x_2782_ = l_Std_Http_URI_Parser_parsePath(v_config_2770_, v___x_2781_, v___x_2781_, v_a_2771_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_pos_2783_; lean_object* v_res_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2829_; 
v_pos_2783_ = lean_ctor_get(v___x_2782_, 0);
v_res_2784_ = lean_ctor_get(v___x_2782_, 1);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2786_ = v___x_2782_;
v_isShared_2787_ = v_isSharedCheck_2829_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_res_2784_);
lean_inc(v_pos_2783_);
lean_dec(v___x_2782_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2829_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_pos_2789_; lean_object* v_res_2790_; lean_object* v_array_2795_; lean_object* v_idx_2796_; lean_object* v_pos_2798_; lean_object* v_idx_2799_; lean_object* v_err_2800_; lean_object* v___x_2804_; uint8_t v___x_2805_; 
v_array_2795_ = lean_ctor_get(v_pos_2783_, 0);
v_idx_2796_ = lean_ctor_get(v_pos_2783_, 1);
lean_inc(v_idx_2796_);
v___x_2804_ = lean_byte_array_size(v_array_2795_);
v___x_2805_ = lean_nat_dec_lt(v_idx_2796_, v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; 
lean_dec_ref(v_config_2770_);
v___x_2806_ = lean_box(0);
lean_inc(v_idx_2796_);
v_pos_2798_ = v_pos_2783_;
v_idx_2799_ = v_idx_2796_;
v_err_2800_ = v___x_2806_;
goto v___jp_2797_;
}
else
{
uint8_t v___x_2807_; uint8_t v_got_2808_; uint8_t v___x_2809_; 
v___x_2807_ = 63;
v_got_2808_ = lean_byte_array_fget(v_array_2795_, v_idx_2796_);
v___x_2809_ = lean_uint8_dec_eq(v_got_2808_, v___x_2807_);
if (v___x_2809_ == 0)
{
lean_object* v___x_2810_; 
lean_dec_ref(v_config_2770_);
v___x_2810_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2796_);
v_pos_2798_ = v_pos_2783_;
v_idx_2799_ = v_idx_2796_;
v_err_2800_ = v___x_2810_;
goto v___jp_2797_;
}
else
{
lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2826_; 
lean_inc_ref(v_array_2795_);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_pos_2783_);
if (v_isSharedCheck_2826_ == 0)
{
lean_object* v_unused_2827_; lean_object* v_unused_2828_; 
v_unused_2827_ = lean_ctor_get(v_pos_2783_, 1);
lean_dec(v_unused_2827_);
v_unused_2828_ = lean_ctor_get(v_pos_2783_, 0);
lean_dec(v_unused_2828_);
v___x_2812_ = v_pos_2783_;
v_isShared_2813_ = v_isSharedCheck_2826_;
goto v_resetjp_2811_;
}
else
{
lean_dec(v_pos_2783_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2826_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2817_; 
v___x_2814_ = lean_unsigned_to_nat(1u);
v___x_2815_ = lean_nat_add(v_idx_2796_, v___x_2814_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v___x_2815_);
v___x_2817_ = v___x_2812_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_array_2795_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2815_);
v___x_2817_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2818_; 
v___x_2818_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2770_, v___x_2817_);
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_pos_2819_; lean_object* v_res_2820_; lean_object* v___x_2821_; 
lean_dec(v_idx_2796_);
lean_dec_ref(v_a_2771_);
v_pos_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_pos_2819_);
v_res_2820_ = lean_ctor_get(v___x_2818_, 1);
lean_inc(v_res_2820_);
lean_dec_ref_known(v___x_2818_, 2);
v___x_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2821_, 0, v_res_2820_);
v_pos_2789_ = v_pos_2819_;
v_res_2790_ = v___x_2821_;
goto v___jp_2788_;
}
else
{
lean_object* v_pos_2822_; lean_object* v_err_2823_; lean_object* v_idx_2824_; 
v_pos_2822_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_pos_2822_);
v_err_2823_ = lean_ctor_get(v___x_2818_, 1);
lean_inc(v_err_2823_);
lean_dec_ref_known(v___x_2818_, 2);
v_idx_2824_ = lean_ctor_get(v_pos_2822_, 1);
lean_inc(v_idx_2824_);
v_pos_2798_ = v_pos_2822_;
v_idx_2799_ = v_idx_2824_;
v_err_2800_ = v_err_2823_;
goto v___jp_2797_;
}
}
}
}
}
v___jp_2788_:
{
lean_object* v___x_2791_; lean_object* v___x_2793_; 
v___x_2791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2791_, 0, v_res_2784_);
lean_ctor_set(v___x_2791_, 1, v_res_2790_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 1, v___x_2791_);
lean_ctor_set(v___x_2786_, 0, v_pos_2789_);
v___x_2793_ = v___x_2786_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_pos_2789_);
lean_ctor_set(v_reuseFailAlloc_2794_, 1, v___x_2791_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
v___jp_2797_:
{
uint8_t v___x_2801_; 
v___x_2801_ = lean_nat_dec_eq(v_idx_2796_, v_idx_2799_);
lean_dec(v_idx_2799_);
lean_dec(v_idx_2796_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; 
lean_dec_ref(v_pos_2798_);
lean_del_object(v___x_2786_);
lean_dec(v_res_2784_);
v___x_2802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2802_, 0, v_a_2771_);
lean_ctor_set(v___x_2802_, 1, v_err_2800_);
return v___x_2802_;
}
else
{
lean_object* v___x_2803_; 
lean_dec(v_err_2800_);
lean_dec_ref(v_a_2771_);
v___x_2803_ = lean_box(0);
v_pos_2789_ = v_pos_2798_;
v_res_2790_ = v___x_2803_;
goto v___jp_2788_;
}
}
}
}
else
{
lean_object* v_err_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
lean_dec_ref(v_config_2770_);
v_err_2830_ = lean_ctor_get(v___x_2782_, 1);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; 
v_unused_2838_ = lean_ctor_get(v___x_2782_, 0);
lean_dec(v_unused_2838_);
v___x_2832_ = v___x_2782_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_err_2830_);
lean_dec(v___x_2782_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v_a_2771_);
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2771_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v_err_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
v___jp_2772_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1));
v___x_2774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2774_, 0, v_a_2771_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
return v___x_2774_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object* v_config_2839_, lean_object* v_scheme_2840_, lean_object* v_a_2841_){
_start:
{
lean_object* v_array_2842_; lean_object* v_idx_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v_array_2842_ = lean_ctor_get(v_a_2841_, 0);
v_idx_2843_ = lean_ctor_get(v_a_2841_, 1);
v___x_2844_ = lean_byte_array_size(v_array_2842_);
v___x_2845_ = lean_nat_dec_lt(v_idx_2843_, v___x_2844_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
lean_dec_ref(v_scheme_2840_);
lean_dec_ref(v_config_2839_);
v___x_2846_ = lean_box(0);
v___x_2847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2847_, 0, v_a_2841_);
lean_ctor_set(v___x_2847_, 1, v___x_2846_);
return v___x_2847_;
}
else
{
uint8_t v___x_2848_; uint8_t v_got_2849_; uint8_t v___x_2850_; 
v___x_2848_ = 58;
v_got_2849_ = lean_byte_array_fget(v_array_2842_, v_idx_2843_);
v___x_2850_ = lean_uint8_dec_eq(v_got_2849_, v___x_2848_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
lean_dec_ref(v_scheme_2840_);
lean_dec_ref(v_config_2839_);
v___x_2851_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_a_2841_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
return v___x_2852_;
}
else
{
lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2927_; 
lean_inc(v_idx_2843_);
lean_inc_ref(v_array_2842_);
v_isSharedCheck_2927_ = !lean_is_exclusive(v_a_2841_);
if (v_isSharedCheck_2927_ == 0)
{
lean_object* v_unused_2928_; lean_object* v_unused_2929_; 
v_unused_2928_ = lean_ctor_get(v_a_2841_, 1);
lean_dec(v_unused_2928_);
v_unused_2929_ = lean_ctor_get(v_a_2841_, 0);
lean_dec(v_unused_2929_);
v___x_2854_ = v_a_2841_;
v_isShared_2855_ = v_isSharedCheck_2927_;
goto v_resetjp_2853_;
}
else
{
lean_dec(v_a_2841_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2927_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2859_; 
v___x_2856_ = lean_unsigned_to_nat(1u);
v___x_2857_ = lean_nat_add(v_idx_2843_, v___x_2856_);
lean_dec(v_idx_2843_);
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 1, v___x_2857_);
v___x_2859_ = v___x_2854_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_array_2842_);
lean_ctor_set(v_reuseFailAlloc_2926_, 1, v___x_2857_);
v___x_2859_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2860_; 
lean_inc_ref(v_config_2839_);
v___x_2860_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2839_, v___x_2859_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_res_2861_; lean_object* v_pos_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2916_; 
v_res_2861_ = lean_ctor_get(v___x_2860_, 1);
v_pos_2862_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2864_ = v___x_2860_;
v_isShared_2865_ = v_isSharedCheck_2916_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_res_2861_);
lean_inc(v_pos_2862_);
lean_dec(v___x_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2916_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v_fst_2866_; lean_object* v_snd_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2915_; 
v_fst_2866_ = lean_ctor_get(v_res_2861_, 0);
v_snd_2867_ = lean_ctor_get(v_res_2861_, 1);
v_isSharedCheck_2915_ = !lean_is_exclusive(v_res_2861_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2869_ = v_res_2861_;
v_isShared_2870_ = v_isSharedCheck_2915_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_snd_2867_);
lean_inc(v_fst_2866_);
lean_dec(v_res_2861_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2915_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v_pos_2872_; lean_object* v_res_2873_; lean_object* v_array_2880_; lean_object* v_idx_2881_; lean_object* v_pos_2883_; lean_object* v_idx_2884_; lean_object* v_err_2885_; lean_object* v___x_2891_; uint8_t v___x_2892_; 
v_array_2880_ = lean_ctor_get(v_pos_2862_, 0);
v_idx_2881_ = lean_ctor_get(v_pos_2862_, 1);
lean_inc(v_idx_2881_);
v___x_2891_ = lean_byte_array_size(v_array_2880_);
v___x_2892_ = lean_nat_dec_lt(v_idx_2881_, v___x_2891_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; 
lean_dec_ref(v_config_2839_);
v___x_2893_ = lean_box(0);
lean_inc(v_idx_2881_);
v_pos_2883_ = v_pos_2862_;
v_idx_2884_ = v_idx_2881_;
v_err_2885_ = v___x_2893_;
goto v___jp_2882_;
}
else
{
uint8_t v___x_2894_; uint8_t v_got_2895_; uint8_t v___x_2896_; 
v___x_2894_ = 63;
v_got_2895_ = lean_byte_array_fget(v_array_2880_, v_idx_2881_);
v___x_2896_ = lean_uint8_dec_eq(v_got_2895_, v___x_2894_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2897_; 
lean_dec_ref(v_config_2839_);
v___x_2897_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2881_);
v_pos_2883_ = v_pos_2862_;
v_idx_2884_ = v_idx_2881_;
v_err_2885_ = v___x_2897_;
goto v___jp_2882_;
}
else
{
lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2912_; 
lean_inc_ref(v_array_2880_);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_pos_2862_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; lean_object* v_unused_2914_; 
v_unused_2913_ = lean_ctor_get(v_pos_2862_, 1);
lean_dec(v_unused_2913_);
v_unused_2914_ = lean_ctor_get(v_pos_2862_, 0);
lean_dec(v_unused_2914_);
v___x_2899_ = v_pos_2862_;
v_isShared_2900_ = v_isSharedCheck_2912_;
goto v_resetjp_2898_;
}
else
{
lean_dec(v_pos_2862_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2912_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2901_; lean_object* v___x_2903_; 
v___x_2901_ = lean_nat_add(v_idx_2881_, v___x_2856_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 1, v___x_2901_);
v___x_2903_ = v___x_2899_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_array_2880_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v___x_2901_);
v___x_2903_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
lean_object* v___x_2904_; 
v___x_2904_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2839_, v___x_2903_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_pos_2905_; lean_object* v_res_2906_; lean_object* v___x_2907_; 
lean_dec(v_idx_2881_);
lean_del_object(v___x_2869_);
v_pos_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_pos_2905_);
v_res_2906_ = lean_ctor_get(v___x_2904_, 1);
lean_inc(v_res_2906_);
lean_dec_ref_known(v___x_2904_, 2);
v___x_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_res_2906_);
v_pos_2872_ = v_pos_2905_;
v_res_2873_ = v___x_2907_;
goto v___jp_2871_;
}
else
{
lean_object* v_pos_2908_; lean_object* v_err_2909_; lean_object* v_idx_2910_; 
v_pos_2908_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_pos_2908_);
v_err_2909_ = lean_ctor_get(v___x_2904_, 1);
lean_inc(v_err_2909_);
lean_dec_ref_known(v___x_2904_, 2);
v_idx_2910_ = lean_ctor_get(v_pos_2908_, 1);
lean_inc(v_idx_2910_);
v_pos_2883_ = v_pos_2908_;
v_idx_2884_ = v_idx_2910_;
v_err_2885_ = v_err_2909_;
goto v___jp_2882_;
}
}
}
}
}
v___jp_2871_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2878_; 
v___x_2874_ = lean_box(0);
v___x_2875_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2875_, 0, v_scheme_2840_);
lean_ctor_set(v___x_2875_, 1, v_fst_2866_);
lean_ctor_set(v___x_2875_, 2, v_snd_2867_);
lean_ctor_set(v___x_2875_, 3, v_res_2873_);
lean_ctor_set(v___x_2875_, 4, v___x_2874_);
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 1, v___x_2876_);
lean_ctor_set(v___x_2864_, 0, v_pos_2872_);
v___x_2878_ = v___x_2864_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_pos_2872_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v___x_2876_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
v___jp_2882_:
{
uint8_t v___x_2886_; 
v___x_2886_ = lean_nat_dec_eq(v_idx_2881_, v_idx_2884_);
lean_dec(v_idx_2884_);
lean_dec(v_idx_2881_);
if (v___x_2886_ == 0)
{
lean_object* v___x_2888_; 
lean_dec(v_snd_2867_);
lean_dec(v_fst_2866_);
lean_del_object(v___x_2864_);
lean_dec_ref(v_scheme_2840_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set_tag(v___x_2869_, 1);
lean_ctor_set(v___x_2869_, 1, v_err_2885_);
lean_ctor_set(v___x_2869_, 0, v_pos_2883_);
v___x_2888_ = v___x_2869_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_pos_2883_);
lean_ctor_set(v_reuseFailAlloc_2889_, 1, v_err_2885_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
else
{
lean_object* v___x_2890_; 
lean_dec(v_err_2885_);
lean_del_object(v___x_2869_);
v___x_2890_ = lean_box(0);
v_pos_2872_ = v_pos_2883_;
v_res_2873_ = v___x_2890_;
goto v___jp_2871_;
}
}
}
}
}
else
{
lean_object* v_pos_2917_; lean_object* v_err_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_dec_ref(v_scheme_2840_);
lean_dec_ref(v_config_2839_);
v_pos_2917_ = lean_ctor_get(v___x_2860_, 0);
v_err_2918_ = lean_ctor_get(v___x_2860_, 1);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2860_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_err_2918_);
lean_inc(v_pos_2917_);
lean_dec(v___x_2860_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_pos_2917_);
lean_ctor_set(v_reuseFailAlloc_2924_, 1, v_err_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object* v_config_2938_, lean_object* v_a_2939_){
_start:
{
lean_object* v___x_2943_; 
lean_inc_ref(v_a_2939_);
v___x_2943_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2938_, v_a_2939_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_pos_2944_; lean_object* v_res_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_3041_; 
v_pos_2944_ = lean_ctor_get(v___x_2943_, 0);
v_res_2945_ = lean_ctor_get(v___x_2943_, 1);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_2947_ = v___x_2943_;
v_isShared_2948_ = v_isSharedCheck_3041_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_res_2945_);
lean_inc(v_pos_2944_);
lean_dec(v___x_2943_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_3041_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v_pos_2952_; lean_object* v_res_2953_; lean_object* v___y_2961_; lean_object* v_idx_2962_; lean_object* v___y_2963_; lean_object* v_pos_2964_; lean_object* v_idx_2965_; lean_object* v_err_2966_; lean_object* v___x_3035_; uint8_t v___x_3036_; 
v___x_3035_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2));
v___x_3036_ = lean_string_dec_eq(v_res_2945_, v___x_3035_);
if (v___x_3036_ == 0)
{
lean_object* v___x_3037_; uint8_t v___x_3038_; 
v___x_3037_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3));
v___x_3038_ = lean_string_dec_eq(v_res_2945_, v___x_3037_);
if (v___x_3038_ == 0)
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec(v_pos_2944_);
lean_dec_ref(v_config_2938_);
v___x_3039_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__5));
v___x_3040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3040_, 0, v_a_2939_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
return v___x_3040_;
}
else
{
goto v___jp_2970_;
}
}
else
{
goto v___jp_2970_;
}
v___jp_2949_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2954_ = lean_box(0);
v___x_2955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2955_, 0, v_res_2945_);
lean_ctor_set(v___x_2955_, 1, v___y_2950_);
lean_ctor_set(v___x_2955_, 2, v___y_2951_);
lean_ctor_set(v___x_2955_, 3, v_res_2953_);
lean_ctor_set(v___x_2955_, 4, v___x_2954_);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2955_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 1, v___x_2956_);
lean_ctor_set(v___x_2947_, 0, v_pos_2952_);
v___x_2958_ = v___x_2947_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_pos_2952_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
v___jp_2960_:
{
uint8_t v___x_2967_; 
v___x_2967_ = lean_nat_dec_eq(v_idx_2962_, v_idx_2965_);
lean_dec(v_idx_2965_);
lean_dec(v_idx_2962_);
if (v___x_2967_ == 0)
{
lean_object* v___x_2968_; 
lean_dec_ref(v_pos_2964_);
lean_dec_ref(v___y_2963_);
lean_dec(v___y_2961_);
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
v___x_2968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2968_, 0, v_a_2939_);
lean_ctor_set(v___x_2968_, 1, v_err_2966_);
return v___x_2968_;
}
else
{
lean_object* v___x_2969_; 
lean_dec(v_err_2966_);
lean_dec_ref(v_a_2939_);
v___x_2969_ = lean_box(0);
v___y_2950_ = v___y_2961_;
v___y_2951_ = v___y_2963_;
v_pos_2952_ = v_pos_2964_;
v_res_2953_ = v___x_2969_;
goto v___jp_2949_;
}
}
v___jp_2970_:
{
lean_object* v_array_2971_; lean_object* v_idx_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3034_; 
v_array_2971_ = lean_ctor_get(v_pos_2944_, 0);
v_idx_2972_ = lean_ctor_get(v_pos_2944_, 1);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_pos_2944_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_2974_ = v_pos_2944_;
v_isShared_2975_ = v_isSharedCheck_3034_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_idx_2972_);
lean_inc(v_array_2971_);
lean_dec(v_pos_2944_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3034_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; uint8_t v___x_2977_; 
v___x_2976_ = lean_byte_array_size(v_array_2971_);
v___x_2977_ = lean_nat_dec_lt(v_idx_2972_, v___x_2976_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
lean_del_object(v___x_2974_);
lean_dec(v_idx_2972_);
lean_dec_ref(v_array_2971_);
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec_ref(v_config_2938_);
v___x_2978_ = lean_box(0);
v___x_2979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2979_, 0, v_a_2939_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
return v___x_2979_;
}
else
{
uint8_t v___x_2980_; uint8_t v_got_2981_; uint8_t v___x_2982_; 
v___x_2980_ = 58;
v_got_2981_ = lean_byte_array_fget(v_array_2971_, v_idx_2972_);
v___x_2982_ = lean_uint8_dec_eq(v_got_2981_, v___x_2980_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_del_object(v___x_2974_);
lean_dec(v_idx_2972_);
lean_dec_ref(v_array_2971_);
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec_ref(v_config_2938_);
v___x_2983_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2984_, 0, v_a_2939_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
return v___x_2984_;
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v___x_2985_ = lean_unsigned_to_nat(1u);
v___x_2986_ = lean_nat_add(v_idx_2972_, v___x_2985_);
lean_dec(v_idx_2972_);
v___x_2987_ = lean_nat_dec_lt(v___x_2986_, v___x_2976_);
if (v___x_2987_ == 0)
{
lean_dec(v___x_2986_);
lean_del_object(v___x_2974_);
lean_dec_ref(v_array_2971_);
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec_ref(v_config_2938_);
goto v___jp_2940_;
}
else
{
uint8_t v___x_2988_; uint8_t v___x_2989_; uint8_t v___x_2990_; 
v___x_2988_ = lean_byte_array_fget(v_array_2971_, v___x_2986_);
v___x_2989_ = 47;
v___x_2990_ = lean_uint8_dec_eq(v___x_2988_, v___x_2989_);
if (v___x_2990_ == 0)
{
lean_dec(v___x_2986_);
lean_del_object(v___x_2974_);
lean_dec_ref(v_array_2971_);
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec_ref(v_config_2938_);
goto v___jp_2940_;
}
else
{
lean_object* v___x_2992_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 1, v___x_2986_);
v___x_2992_ = v___x_2974_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_array_2971_);
lean_ctor_set(v_reuseFailAlloc_3033_, 1, v___x_2986_);
v___x_2992_ = v_reuseFailAlloc_3033_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
lean_object* v___x_2993_; 
lean_inc_ref(v_config_2938_);
v___x_2993_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2938_, v___x_2992_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_res_2994_; lean_object* v_pos_2995_; lean_object* v_fst_2996_; lean_object* v_snd_2997_; lean_object* v_array_2998_; lean_object* v_idx_2999_; lean_object* v___x_3000_; uint8_t v___x_3001_; 
v_res_2994_ = lean_ctor_get(v___x_2993_, 1);
lean_inc(v_res_2994_);
v_pos_2995_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_pos_2995_);
lean_dec_ref_known(v___x_2993_, 2);
v_fst_2996_ = lean_ctor_get(v_res_2994_, 0);
lean_inc(v_fst_2996_);
v_snd_2997_ = lean_ctor_get(v_res_2994_, 1);
lean_inc(v_snd_2997_);
lean_dec(v_res_2994_);
v_array_2998_ = lean_ctor_get(v_pos_2995_, 0);
v_idx_2999_ = lean_ctor_get(v_pos_2995_, 1);
lean_inc(v_idx_2999_);
v___x_3000_ = lean_byte_array_size(v_array_2998_);
v___x_3001_ = lean_nat_dec_lt(v_idx_2999_, v___x_3000_);
if (v___x_3001_ == 0)
{
lean_object* v___x_3002_; 
lean_dec_ref(v_config_2938_);
v___x_3002_ = lean_box(0);
lean_inc(v_idx_2999_);
v___y_2961_ = v_fst_2996_;
v_idx_2962_ = v_idx_2999_;
v___y_2963_ = v_snd_2997_;
v_pos_2964_ = v_pos_2995_;
v_idx_2965_ = v_idx_2999_;
v_err_2966_ = v___x_3002_;
goto v___jp_2960_;
}
else
{
uint8_t v___x_3003_; uint8_t v_got_3004_; uint8_t v___x_3005_; 
v___x_3003_ = 63;
v_got_3004_ = lean_byte_array_fget(v_array_2998_, v_idx_2999_);
v___x_3005_ = lean_uint8_dec_eq(v_got_3004_, v___x_3003_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3006_; 
lean_dec_ref(v_config_2938_);
v___x_3006_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_2999_);
v___y_2961_ = v_fst_2996_;
v_idx_2962_ = v_idx_2999_;
v___y_2963_ = v_snd_2997_;
v_pos_2964_ = v_pos_2995_;
v_idx_2965_ = v_idx_2999_;
v_err_2966_ = v___x_3006_;
goto v___jp_2960_;
}
else
{
lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3021_; 
lean_inc_ref(v_array_2998_);
v_isSharedCheck_3021_ = !lean_is_exclusive(v_pos_2995_);
if (v_isSharedCheck_3021_ == 0)
{
lean_object* v_unused_3022_; lean_object* v_unused_3023_; 
v_unused_3022_ = lean_ctor_get(v_pos_2995_, 1);
lean_dec(v_unused_3022_);
v_unused_3023_ = lean_ctor_get(v_pos_2995_, 0);
lean_dec(v_unused_3023_);
v___x_3008_ = v_pos_2995_;
v_isShared_3009_ = v_isSharedCheck_3021_;
goto v_resetjp_3007_;
}
else
{
lean_dec(v_pos_2995_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3021_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3010_ = lean_nat_add(v_idx_2999_, v___x_2985_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 1, v___x_3010_);
v___x_3012_ = v___x_3008_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_array_2998_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3013_; 
v___x_3013_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2938_, v___x_3012_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_pos_3014_; lean_object* v_res_3015_; lean_object* v___x_3016_; 
lean_dec(v_idx_2999_);
lean_dec_ref(v_a_2939_);
v_pos_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_pos_3014_);
v_res_3015_ = lean_ctor_get(v___x_3013_, 1);
lean_inc(v_res_3015_);
lean_dec_ref_known(v___x_3013_, 2);
v___x_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3016_, 0, v_res_3015_);
v___y_2950_ = v_fst_2996_;
v___y_2951_ = v_snd_2997_;
v_pos_2952_ = v_pos_3014_;
v_res_2953_ = v___x_3016_;
goto v___jp_2949_;
}
else
{
lean_object* v_pos_3017_; lean_object* v_err_3018_; lean_object* v_idx_3019_; 
v_pos_3017_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_pos_3017_);
v_err_3018_ = lean_ctor_get(v___x_3013_, 1);
lean_inc(v_err_3018_);
lean_dec_ref_known(v___x_3013_, 2);
v_idx_3019_ = lean_ctor_get(v_pos_3017_, 1);
lean_inc(v_idx_3019_);
v___y_2961_ = v_fst_2996_;
v_idx_2962_ = v_idx_2999_;
v___y_2963_ = v_snd_2997_;
v_pos_2964_ = v_pos_3017_;
v_idx_2965_ = v_idx_3019_;
v_err_2966_ = v_err_3018_;
goto v___jp_2960_;
}
}
}
}
}
}
else
{
lean_object* v_err_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_del_object(v___x_2947_);
lean_dec(v_res_2945_);
lean_dec_ref(v_config_2938_);
v_err_3024_ = lean_ctor_get(v___x_2993_, 1);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; 
v_unused_3032_ = lean_ctor_get(v___x_2993_, 0);
lean_dec(v_unused_3032_);
v___x_3026_ = v___x_2993_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_err_3024_);
lean_dec(v___x_2993_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 0, v_a_2939_);
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_2939_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v_err_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
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
lean_object* v_err_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref(v_config_2938_);
v_err_3042_ = lean_ctor_get(v___x_2943_, 1);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_3049_ == 0)
{
lean_object* v_unused_3050_; 
v_unused_3050_ = lean_ctor_get(v___x_2943_, 0);
lean_dec(v_unused_3050_);
v___x_3044_ = v___x_2943_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_err_3042_);
lean_dec(v___x_2943_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 0, v_a_2939_);
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_2939_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v_err_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
v___jp_2940_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1));
v___x_2942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2942_, 0, v_a_2939_);
lean_ctor_set(v___x_2942_, 1, v___x_2941_);
return v___x_2942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object* v_config_3051_, lean_object* v_a_3052_){
_start:
{
lean_object* v___x_3053_; 
lean_inc_ref(v_a_3052_);
v___x_3053_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3051_, v_a_3052_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_pos_3054_; lean_object* v_res_3055_; lean_object* v___x_3056_; 
v_pos_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_pos_3054_);
v_res_3055_ = lean_ctor_get(v___x_3053_, 1);
lean_inc(v_res_3055_);
lean_dec_ref_known(v___x_3053_, 2);
v___x_3056_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(v_config_3051_, v_res_3055_, v_pos_3054_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_dec_ref(v_a_3052_);
return v___x_3056_;
}
else
{
lean_object* v_err_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
v_err_3057_ = lean_ctor_get(v___x_3056_, 1);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3064_ == 0)
{
lean_object* v_unused_3065_; 
v_unused_3065_ = lean_ctor_get(v___x_3056_, 0);
lean_dec(v_unused_3065_);
v___x_3059_ = v___x_3056_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_err_3057_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 0, v_a_3052_);
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3052_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v_err_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_err_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec_ref(v_config_3051_);
v_err_3066_ = lean_ctor_get(v___x_3053_, 1);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v___x_3053_, 0);
lean_dec(v_unused_3074_);
v___x_3068_ = v___x_3053_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_err_3066_);
lean_dec(v___x_3053_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v_a_3052_);
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3052_);
lean_ctor_set(v_reuseFailAlloc_3072_, 1, v_err_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object* v_config_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v___x_3077_; 
lean_inc_ref(v_a_3076_);
v___x_3077_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3075_, v_a_3076_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_pos_3078_; lean_object* v_res_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3131_; 
v_pos_3078_ = lean_ctor_get(v___x_3077_, 0);
v_res_3079_ = lean_ctor_get(v___x_3077_, 1);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3081_ = v___x_3077_;
v_isShared_3082_ = v_isSharedCheck_3131_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_res_3079_);
lean_inc(v_pos_3078_);
lean_dec(v___x_3077_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3131_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v_array_3083_; lean_object* v_idx_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3130_; 
v_array_3083_ = lean_ctor_get(v_pos_3078_, 0);
v_idx_3084_ = lean_ctor_get(v_pos_3078_, 1);
v_isSharedCheck_3130_ = !lean_is_exclusive(v_pos_3078_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3086_ = v_pos_3078_;
v_isShared_3087_ = v_isSharedCheck_3130_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_idx_3084_);
lean_inc(v_array_3083_);
lean_dec(v_pos_3078_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3130_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3088_; uint8_t v___x_3089_; 
v___x_3088_ = lean_byte_array_size(v_array_3083_);
v___x_3089_ = lean_nat_dec_lt(v_idx_3084_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; lean_object* v___x_3092_; 
lean_del_object(v___x_3086_);
lean_dec(v_idx_3084_);
lean_dec_ref(v_array_3083_);
lean_dec(v_res_3079_);
v___x_3090_ = lean_box(0);
if (v_isShared_3082_ == 0)
{
lean_ctor_set_tag(v___x_3081_, 1);
lean_ctor_set(v___x_3081_, 1, v___x_3090_);
lean_ctor_set(v___x_3081_, 0, v_a_3076_);
v___x_3092_ = v___x_3081_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3076_);
lean_ctor_set(v_reuseFailAlloc_3093_, 1, v___x_3090_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
else
{
uint8_t v___x_3094_; uint8_t v_got_3095_; uint8_t v___x_3096_; 
v___x_3094_ = 58;
v_got_3095_ = lean_byte_array_fget(v_array_3083_, v_idx_3084_);
v___x_3096_ = lean_uint8_dec_eq(v_got_3095_, v___x_3094_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; lean_object* v___x_3099_; 
lean_del_object(v___x_3086_);
lean_dec(v_idx_3084_);
lean_dec_ref(v_array_3083_);
lean_dec(v_res_3079_);
v___x_3097_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3082_ == 0)
{
lean_ctor_set_tag(v___x_3081_, 1);
lean_ctor_set(v___x_3081_, 1, v___x_3097_);
lean_ctor_set(v___x_3081_, 0, v_a_3076_);
v___x_3099_ = v___x_3081_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3076_);
lean_ctor_set(v_reuseFailAlloc_3100_, 1, v___x_3097_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
lean_del_object(v___x_3081_);
v___x_3101_ = lean_unsigned_to_nat(1u);
v___x_3102_ = lean_nat_add(v_idx_3084_, v___x_3101_);
lean_dec(v_idx_3084_);
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 1, v___x_3102_);
v___x_3104_ = v___x_3086_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_array_3083_);
lean_ctor_set(v_reuseFailAlloc_3129_, 1, v___x_3102_);
v___x_3104_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3105_; 
v___x_3105_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3104_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_pos_3106_; lean_object* v_res_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3119_; 
lean_dec_ref(v_a_3076_);
v_pos_3106_ = lean_ctor_get(v___x_3105_, 0);
v_res_3107_ = lean_ctor_get(v___x_3105_, 1);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3109_ = v___x_3105_;
v_isShared_3110_ = v_isSharedCheck_3119_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_res_3107_);
lean_inc(v_pos_3106_);
lean_dec(v___x_3105_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3119_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; uint16_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3117_; 
v___x_3111_ = lean_box(0);
v___x_3112_ = lean_alloc_ctor(2, 0, 2);
v___x_3113_ = lean_unbox(v_res_3107_);
lean_dec(v_res_3107_);
lean_ctor_set_uint16(v___x_3112_, 0, v___x_3113_);
v___x_3114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3111_);
lean_ctor_set(v___x_3114_, 1, v_res_3079_);
lean_ctor_set(v___x_3114_, 2, v___x_3112_);
v___x_3115_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 1, v___x_3115_);
v___x_3117_ = v___x_3109_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_pos_3106_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v___x_3115_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
else
{
lean_object* v_err_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec(v_res_3079_);
v_err_3120_ = lean_ctor_get(v___x_3105_, 1);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v___x_3105_, 0);
lean_dec(v_unused_3128_);
v___x_3122_ = v___x_3105_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_err_3120_);
lean_dec(v___x_3105_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v_a_3076_);
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3076_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_err_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
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
lean_object* v_err_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
v_err_3132_ = lean_ctor_get(v___x_3077_, 1);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3139_ == 0)
{
lean_object* v_unused_3140_; 
v_unused_3140_ = lean_ctor_get(v___x_3077_, 0);
lean_dec(v_unused_3140_);
v___x_3134_ = v___x_3077_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_err_3132_);
lean_dec(v___x_3077_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v_a_3076_);
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3076_);
lean_ctor_set(v_reuseFailAlloc_3138_, 1, v_err_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object* v_config_3141_, lean_object* v_a_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3141_, v_a_3142_);
lean_dec_ref(v_config_3141_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object* v_config_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v___x_3146_; 
lean_inc_ref(v_a_3145_);
v___x_3146_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(v_a_3145_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_dec_ref(v_a_3145_);
lean_dec_ref(v_config_3144_);
return v___x_3146_;
}
else
{
lean_object* v_pos_3147_; lean_object* v_idx_3148_; lean_object* v_idx_3149_; uint8_t v___x_3150_; 
v_pos_3147_ = lean_ctor_get(v___x_3146_, 0);
v_idx_3148_ = lean_ctor_get(v_a_3145_, 1);
lean_inc(v_idx_3148_);
lean_dec_ref(v_a_3145_);
v_idx_3149_ = lean_ctor_get(v_pos_3147_, 1);
v___x_3150_ = lean_nat_dec_eq(v_idx_3148_, v_idx_3149_);
lean_dec(v_idx_3148_);
if (v___x_3150_ == 0)
{
lean_dec_ref(v_config_3144_);
return v___x_3146_;
}
else
{
lean_object* v___x_3151_; 
lean_inc(v_idx_3149_);
lean_inc(v_pos_3147_);
lean_dec_ref_known(v___x_3146_, 2);
lean_inc_ref(v_config_3144_);
v___x_3151_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(v_config_3144_, v_pos_3147_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_dec(v_idx_3149_);
lean_dec_ref(v_config_3144_);
return v___x_3151_;
}
else
{
lean_object* v_pos_3152_; lean_object* v_idx_3153_; uint8_t v___x_3154_; 
v_pos_3152_ = lean_ctor_get(v___x_3151_, 0);
v_idx_3153_ = lean_ctor_get(v_pos_3152_, 1);
v___x_3154_ = lean_nat_dec_eq(v_idx_3149_, v_idx_3153_);
lean_dec(v_idx_3149_);
if (v___x_3154_ == 0)
{
lean_dec_ref(v_config_3144_);
return v___x_3151_;
}
else
{
lean_object* v___x_3155_; 
lean_inc(v_idx_3153_);
lean_inc(v_pos_3152_);
lean_dec_ref_known(v___x_3151_, 2);
lean_inc_ref(v_config_3144_);
v___x_3155_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(v_config_3144_, v_pos_3152_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_dec(v_idx_3153_);
lean_dec_ref(v_config_3144_);
return v___x_3155_;
}
else
{
lean_object* v_pos_3156_; lean_object* v_idx_3157_; uint8_t v___x_3158_; 
v_pos_3156_ = lean_ctor_get(v___x_3155_, 0);
v_idx_3157_ = lean_ctor_get(v_pos_3156_, 1);
v___x_3158_ = lean_nat_dec_eq(v_idx_3153_, v_idx_3157_);
lean_dec(v_idx_3153_);
if (v___x_3158_ == 0)
{
lean_dec_ref(v_config_3144_);
return v___x_3155_;
}
else
{
lean_object* v___x_3159_; 
lean_inc(v_idx_3157_);
lean_inc(v_pos_3156_);
lean_dec_ref_known(v___x_3155_, 2);
v___x_3159_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3144_, v_pos_3156_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_dec(v_idx_3157_);
lean_dec_ref(v_config_3144_);
return v___x_3159_;
}
else
{
lean_object* v_pos_3160_; lean_object* v_idx_3161_; uint8_t v___x_3162_; 
v_pos_3160_ = lean_ctor_get(v___x_3159_, 0);
v_idx_3161_ = lean_ctor_get(v_pos_3160_, 1);
v___x_3162_ = lean_nat_dec_eq(v_idx_3157_, v_idx_3161_);
lean_dec(v_idx_3157_);
if (v___x_3162_ == 0)
{
lean_dec_ref(v_config_3144_);
return v___x_3159_;
}
else
{
lean_object* v___x_3163_; 
lean_inc(v_pos_3160_);
lean_dec_ref_known(v___x_3159_, 2);
v___x_3163_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(v_config_3144_, v_pos_3160_);
return v___x_3163_;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object* v_config_3167_, lean_object* v_a_3168_){
_start:
{
lean_object* v___x_3169_; 
v___x_3169_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_3167_, v_a_3168_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v_pos_3170_; lean_object* v_res_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3184_; 
v_pos_3170_ = lean_ctor_get(v___x_3169_, 0);
v_res_3171_ = lean_ctor_get(v___x_3169_, 1);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3173_ = v___x_3169_;
v_isShared_3174_ = v_isSharedCheck_3184_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_res_3171_);
lean_inc(v_pos_3170_);
lean_dec(v___x_3169_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3184_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3175_; 
v___x_3175_ = l_Std_Http_URI_EncodedFragment_decode(v_res_3171_);
lean_dec(v_res_3171_);
if (lean_obj_tag(v___x_3175_) == 1)
{
lean_object* v_val_3176_; lean_object* v___x_3178_; 
v_val_3176_ = lean_ctor_get(v___x_3175_, 0);
lean_inc(v_val_3176_);
lean_dec_ref_known(v___x_3175_, 1);
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 1, v_val_3176_);
v___x_3178_ = v___x_3173_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_pos_3170_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_val_3176_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
else
{
lean_object* v___x_3180_; lean_object* v___x_3182_; 
lean_dec(v___x_3175_);
v___x_3180_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___closed__1));
if (v_isShared_3174_ == 0)
{
lean_ctor_set_tag(v___x_3173_, 1);
lean_ctor_set(v___x_3173_, 1, v___x_3180_);
v___x_3182_ = v___x_3173_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_pos_3170_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v___x_3180_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
else
{
lean_object* v_pos_3185_; lean_object* v_err_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
v_pos_3185_ = lean_ctor_get(v___x_3169_, 0);
v_err_3186_ = lean_ctor_get(v___x_3169_, 1);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3188_ = v___x_3169_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_err_3186_);
lean_inc(v_pos_3185_);
lean_dec(v___x_3169_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_pos_3185_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v_err_3186_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object* v_config_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3194_, v_a_3195_);
lean_dec_ref(v_config_3194_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object* v_config_3197_, lean_object* v_a_3198_){
_start:
{
lean_object* v___x_3199_; 
lean_inc_ref(v_a_3198_);
v___x_3199_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3197_, v_a_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_pos_3200_; lean_object* v_res_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3330_; 
v_pos_3200_ = lean_ctor_get(v___x_3199_, 0);
v_res_3201_ = lean_ctor_get(v___x_3199_, 1);
v_isSharedCheck_3330_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3330_ == 0)
{
v___x_3203_ = v___x_3199_;
v_isShared_3204_ = v_isSharedCheck_3330_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_res_3201_);
lean_inc(v_pos_3200_);
lean_dec(v___x_3199_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3330_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v_array_3205_; lean_object* v_idx_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3329_; 
v_array_3205_ = lean_ctor_get(v_pos_3200_, 0);
v_idx_3206_ = lean_ctor_get(v_pos_3200_, 1);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_pos_3200_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3208_ = v_pos_3200_;
v_isShared_3209_ = v_isSharedCheck_3329_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_idx_3206_);
lean_inc(v_array_3205_);
lean_dec(v_pos_3200_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3329_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3210_; uint8_t v___x_3211_; 
v___x_3210_ = lean_byte_array_size(v_array_3205_);
v___x_3211_ = lean_nat_dec_lt(v_idx_3206_, v___x_3210_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; lean_object* v___x_3214_; 
lean_del_object(v___x_3208_);
lean_dec(v_idx_3206_);
lean_dec_ref(v_array_3205_);
lean_dec(v_res_3201_);
lean_dec_ref(v_config_3197_);
v___x_3212_ = lean_box(0);
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 1);
lean_ctor_set(v___x_3203_, 1, v___x_3212_);
lean_ctor_set(v___x_3203_, 0, v_a_3198_);
v___x_3214_ = v___x_3203_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3198_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
else
{
uint8_t v___x_3216_; uint8_t v_got_3217_; uint8_t v___x_3218_; 
v___x_3216_ = 58;
v_got_3217_ = lean_byte_array_fget(v_array_3205_, v_idx_3206_);
v___x_3218_ = lean_uint8_dec_eq(v_got_3217_, v___x_3216_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; lean_object* v___x_3221_; 
lean_del_object(v___x_3208_);
lean_dec(v_idx_3206_);
lean_dec_ref(v_array_3205_);
lean_dec(v_res_3201_);
lean_dec_ref(v_config_3197_);
v___x_3219_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 1);
lean_ctor_set(v___x_3203_, 1, v___x_3219_);
lean_ctor_set(v___x_3203_, 0, v_a_3198_);
v___x_3221_ = v___x_3203_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3198_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v___x_3219_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
else
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
v___x_3223_ = lean_unsigned_to_nat(1u);
v___x_3224_ = lean_nat_add(v_idx_3206_, v___x_3223_);
lean_dec(v_idx_3206_);
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 1, v___x_3224_);
v___x_3226_ = v___x_3208_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_array_3205_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v___x_3224_);
v___x_3226_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
lean_object* v___x_3227_; 
lean_inc_ref(v_config_3197_);
v___x_3227_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_3197_, v___x_3226_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_res_3228_; lean_object* v_pos_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3318_; 
v_res_3228_ = lean_ctor_get(v___x_3227_, 1);
v_pos_3229_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3231_ = v___x_3227_;
v_isShared_3232_ = v_isSharedCheck_3318_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_res_3228_);
lean_inc(v_pos_3229_);
lean_dec(v___x_3227_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3318_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v_fst_3233_; lean_object* v_snd_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3317_; 
v_fst_3233_ = lean_ctor_get(v_res_3228_, 0);
v_snd_3234_ = lean_ctor_get(v_res_3228_, 1);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_res_3228_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3236_ = v_res_3228_;
v_isShared_3237_ = v_isSharedCheck_3317_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_snd_3234_);
lean_inc(v_fst_3233_);
lean_dec(v_res_3228_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3317_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___y_3239_; lean_object* v_pos_3240_; lean_object* v_res_3241_; lean_object* v_idx_3248_; lean_object* v___y_3249_; lean_object* v_pos_3250_; lean_object* v_err_3251_; lean_object* v_pos_3259_; lean_object* v_array_3260_; lean_object* v_idx_3261_; lean_object* v_res_3262_; lean_object* v_array_3280_; lean_object* v_idx_3281_; lean_object* v_pos_3283_; lean_object* v_array_3284_; lean_object* v_idx_3285_; lean_object* v_err_3286_; lean_object* v___x_3290_; uint8_t v___x_3291_; 
v_array_3280_ = lean_ctor_get(v_pos_3229_, 0);
lean_inc_ref(v_array_3280_);
v_idx_3281_ = lean_ctor_get(v_pos_3229_, 1);
lean_inc(v_idx_3281_);
v___x_3290_ = lean_byte_array_size(v_array_3280_);
v___x_3291_ = lean_nat_dec_lt(v_idx_3281_, v___x_3290_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_box(0);
lean_inc(v_idx_3281_);
v_pos_3283_ = v_pos_3229_;
v_array_3284_ = v_array_3280_;
v_idx_3285_ = v_idx_3281_;
v_err_3286_ = v___x_3292_;
goto v___jp_3282_;
}
else
{
uint8_t v___x_3293_; uint8_t v_got_3294_; uint8_t v___x_3295_; 
v___x_3293_ = 63;
v_got_3294_ = lean_byte_array_fget(v_array_3280_, v_idx_3281_);
v___x_3295_ = lean_uint8_dec_eq(v_got_3294_, v___x_3293_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; 
v___x_3296_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3281_);
v_pos_3283_ = v_pos_3229_;
v_array_3284_ = v_array_3280_;
v_idx_3285_ = v_idx_3281_;
v_err_3286_ = v___x_3296_;
goto v___jp_3282_;
}
else
{
lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3314_; 
v_isSharedCheck_3314_ = !lean_is_exclusive(v_pos_3229_);
if (v_isSharedCheck_3314_ == 0)
{
lean_object* v_unused_3315_; lean_object* v_unused_3316_; 
v_unused_3315_ = lean_ctor_get(v_pos_3229_, 1);
lean_dec(v_unused_3315_);
v_unused_3316_ = lean_ctor_get(v_pos_3229_, 0);
lean_dec(v_unused_3316_);
v___x_3298_ = v_pos_3229_;
v_isShared_3299_ = v_isSharedCheck_3314_;
goto v_resetjp_3297_;
}
else
{
lean_dec(v_pos_3229_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3314_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3300_; lean_object* v___x_3302_; 
v___x_3300_ = lean_nat_add(v_idx_3281_, v___x_3223_);
if (v_isShared_3299_ == 0)
{
lean_ctor_set(v___x_3298_, 1, v___x_3300_);
v___x_3302_ = v___x_3298_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_array_3280_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v___x_3300_);
v___x_3302_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
lean_object* v___x_3303_; 
lean_inc_ref(v_config_3197_);
v___x_3303_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3197_, v___x_3302_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_pos_3304_; lean_object* v_res_3305_; lean_object* v_array_3306_; lean_object* v_idx_3307_; lean_object* v___x_3308_; 
lean_dec(v_idx_3281_);
v_pos_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_pos_3304_);
v_res_3305_ = lean_ctor_get(v___x_3303_, 1);
lean_inc(v_res_3305_);
lean_dec_ref_known(v___x_3303_, 2);
v_array_3306_ = lean_ctor_get(v_pos_3304_, 0);
lean_inc_ref(v_array_3306_);
v_idx_3307_ = lean_ctor_get(v_pos_3304_, 1);
lean_inc(v_idx_3307_);
v___x_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_res_3305_);
v_pos_3259_ = v_pos_3304_;
v_array_3260_ = v_array_3306_;
v_idx_3261_ = v_idx_3307_;
v_res_3262_ = v___x_3308_;
goto v___jp_3258_;
}
else
{
lean_object* v_pos_3309_; lean_object* v_err_3310_; lean_object* v_array_3311_; lean_object* v_idx_3312_; 
v_pos_3309_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_pos_3309_);
v_err_3310_ = lean_ctor_get(v___x_3303_, 1);
lean_inc(v_err_3310_);
lean_dec_ref_known(v___x_3303_, 2);
v_array_3311_ = lean_ctor_get(v_pos_3309_, 0);
lean_inc_ref(v_array_3311_);
v_idx_3312_ = lean_ctor_get(v_pos_3309_, 1);
lean_inc(v_idx_3312_);
v_pos_3283_ = v_pos_3309_;
v_array_3284_ = v_array_3311_;
v_idx_3285_ = v_idx_3312_;
v_err_3286_ = v_err_3310_;
goto v___jp_3282_;
}
}
}
}
}
v___jp_3238_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3245_; 
v___x_3242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3242_, 0, v_res_3201_);
lean_ctor_set(v___x_3242_, 1, v_fst_3233_);
lean_ctor_set(v___x_3242_, 2, v_snd_3234_);
lean_ctor_set(v___x_3242_, 3, v___y_3239_);
lean_ctor_set(v___x_3242_, 4, v_res_3241_);
v___x_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 1, v___x_3243_);
lean_ctor_set(v___x_3231_, 0, v_pos_3240_);
v___x_3245_ = v___x_3231_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_pos_3240_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
v___jp_3247_:
{
lean_object* v_idx_3252_; uint8_t v___x_3253_; 
v_idx_3252_ = lean_ctor_get(v_pos_3250_, 1);
v___x_3253_ = lean_nat_dec_eq(v_idx_3248_, v_idx_3252_);
lean_dec(v_idx_3248_);
if (v___x_3253_ == 0)
{
lean_object* v___x_3255_; 
lean_dec_ref(v_pos_3250_);
lean_dec(v___y_3249_);
lean_dec(v_snd_3234_);
lean_dec(v_fst_3233_);
lean_del_object(v___x_3231_);
lean_dec(v_res_3201_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set_tag(v___x_3203_, 1);
lean_ctor_set(v___x_3203_, 1, v_err_3251_);
lean_ctor_set(v___x_3203_, 0, v_a_3198_);
v___x_3255_ = v___x_3203_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3198_);
lean_ctor_set(v_reuseFailAlloc_3256_, 1, v_err_3251_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
else
{
lean_object* v___x_3257_; 
lean_dec(v_err_3251_);
lean_del_object(v___x_3203_);
lean_dec_ref(v_a_3198_);
v___x_3257_ = lean_box(0);
v___y_3239_ = v___y_3249_;
v_pos_3240_ = v_pos_3250_;
v_res_3241_ = v___x_3257_;
goto v___jp_3238_;
}
}
v___jp_3258_:
{
lean_object* v___x_3263_; uint8_t v___x_3264_; 
v___x_3263_ = lean_byte_array_size(v_array_3260_);
v___x_3264_ = lean_nat_dec_lt(v_idx_3261_, v___x_3263_);
if (v___x_3264_ == 0)
{
lean_object* v___x_3265_; 
lean_dec_ref(v_array_3260_);
lean_del_object(v___x_3236_);
lean_dec_ref(v_config_3197_);
v___x_3265_ = lean_box(0);
v_idx_3248_ = v_idx_3261_;
v___y_3249_ = v_res_3262_;
v_pos_3250_ = v_pos_3259_;
v_err_3251_ = v___x_3265_;
goto v___jp_3247_;
}
else
{
uint8_t v___x_3266_; uint8_t v_got_3267_; uint8_t v___x_3268_; 
v___x_3266_ = 35;
v_got_3267_ = lean_byte_array_fget(v_array_3260_, v_idx_3261_);
v___x_3268_ = lean_uint8_dec_eq(v_got_3267_, v___x_3266_);
if (v___x_3268_ == 0)
{
lean_object* v___x_3269_; 
lean_dec_ref(v_array_3260_);
lean_del_object(v___x_3236_);
lean_dec_ref(v_config_3197_);
v___x_3269_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_3248_ = v_idx_3261_;
v___y_3249_ = v_res_3262_;
v_pos_3250_ = v_pos_3259_;
v_err_3251_ = v___x_3269_;
goto v___jp_3247_;
}
else
{
lean_object* v___x_3270_; lean_object* v___x_3272_; 
lean_dec_ref(v_pos_3259_);
v___x_3270_ = lean_nat_add(v_idx_3261_, v___x_3223_);
if (v_isShared_3237_ == 0)
{
lean_ctor_set(v___x_3236_, 1, v___x_3270_);
lean_ctor_set(v___x_3236_, 0, v_array_3260_);
v___x_3272_ = v___x_3236_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_array_3260_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v___x_3270_);
v___x_3272_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
lean_object* v___x_3273_; 
v___x_3273_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3197_, v___x_3272_);
lean_dec_ref(v_config_3197_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_pos_3274_; lean_object* v_res_3275_; lean_object* v___x_3276_; 
lean_dec(v_idx_3261_);
lean_del_object(v___x_3203_);
lean_dec_ref(v_a_3198_);
v_pos_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_pos_3274_);
v_res_3275_ = lean_ctor_get(v___x_3273_, 1);
lean_inc(v_res_3275_);
lean_dec_ref_known(v___x_3273_, 2);
v___x_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3276_, 0, v_res_3275_);
v___y_3239_ = v_res_3262_;
v_pos_3240_ = v_pos_3274_;
v_res_3241_ = v___x_3276_;
goto v___jp_3238_;
}
else
{
lean_object* v_pos_3277_; lean_object* v_err_3278_; 
v_pos_3277_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_pos_3277_);
v_err_3278_ = lean_ctor_get(v___x_3273_, 1);
lean_inc(v_err_3278_);
lean_dec_ref_known(v___x_3273_, 2);
v_idx_3248_ = v_idx_3261_;
v___y_3249_ = v_res_3262_;
v_pos_3250_ = v_pos_3277_;
v_err_3251_ = v_err_3278_;
goto v___jp_3247_;
}
}
}
}
}
v___jp_3282_:
{
uint8_t v___x_3287_; 
v___x_3287_ = lean_nat_dec_eq(v_idx_3281_, v_idx_3285_);
lean_dec(v_idx_3281_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; 
lean_dec(v_idx_3285_);
lean_dec_ref(v_array_3284_);
lean_dec_ref(v_pos_3283_);
lean_del_object(v___x_3236_);
lean_dec(v_snd_3234_);
lean_dec(v_fst_3233_);
lean_del_object(v___x_3231_);
lean_del_object(v___x_3203_);
lean_dec(v_res_3201_);
lean_dec_ref(v_config_3197_);
v___x_3288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3288_, 0, v_a_3198_);
lean_ctor_set(v___x_3288_, 1, v_err_3286_);
return v___x_3288_;
}
else
{
lean_object* v___x_3289_; 
lean_dec(v_err_3286_);
v___x_3289_ = lean_box(0);
v_pos_3259_ = v_pos_3283_;
v_array_3260_ = v_array_3284_;
v_idx_3261_ = v_idx_3285_;
v_res_3262_ = v___x_3289_;
goto v___jp_3258_;
}
}
}
}
}
else
{
lean_object* v_err_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_del_object(v___x_3203_);
lean_dec(v_res_3201_);
lean_dec_ref(v_config_3197_);
v_err_3319_ = lean_ctor_get(v___x_3227_, 1);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3326_ == 0)
{
lean_object* v_unused_3327_; 
v_unused_3327_ = lean_ctor_get(v___x_3227_, 0);
lean_dec(v_unused_3327_);
v___x_3321_ = v___x_3227_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_err_3319_);
lean_dec(v___x_3227_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v_a_3198_);
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3198_);
lean_ctor_set(v_reuseFailAlloc_3325_, 1, v_err_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
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
lean_object* v_err_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
lean_dec_ref(v_config_3197_);
v_err_3331_ = lean_ctor_get(v___x_3199_, 1);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3338_ == 0)
{
lean_object* v_unused_3339_; 
v_unused_3339_ = lean_ctor_get(v___x_3199_, 0);
lean_dec(v_unused_3339_);
v___x_3333_ = v___x_3199_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_err_3331_);
lean_dec(v___x_3199_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 0, v_a_3198_);
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3198_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v_err_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object* v_config_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v_utf8_3342_; lean_object* v___x_3343_; 
v_utf8_3342_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_3341_);
v___x_3343_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_3342_, v_a_3341_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_pos_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3462_; 
v_pos_3344_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3462_ == 0)
{
lean_object* v_unused_3463_; 
v_unused_3463_ = lean_ctor_get(v___x_3343_, 1);
lean_dec(v_unused_3463_);
v___x_3346_ = v___x_3343_;
v_isShared_3347_ = v_isSharedCheck_3462_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_pos_3344_);
lean_dec(v___x_3343_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3462_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3348_; 
v___x_3348_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_3340_, v_pos_3344_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_pos_3349_; lean_object* v_res_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3452_; 
v_pos_3349_ = lean_ctor_get(v___x_3348_, 0);
v_res_3350_ = lean_ctor_get(v___x_3348_, 1);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3352_ = v___x_3348_;
v_isShared_3353_ = v_isSharedCheck_3452_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_res_3350_);
lean_inc(v_pos_3349_);
lean_dec(v___x_3348_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3452_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
uint8_t v___x_3354_; lean_object* v___x_3355_; 
v___x_3354_ = 1;
lean_inc_ref(v_config_3340_);
v___x_3355_ = l_Std_Http_URI_Parser_parsePath(v_config_3340_, v___x_3354_, v___x_3354_, v_pos_3349_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v_pos_3356_; lean_object* v_res_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3442_; 
v_pos_3356_ = lean_ctor_get(v___x_3355_, 0);
v_res_3357_ = lean_ctor_get(v___x_3355_, 1);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3359_ = v___x_3355_;
v_isShared_3360_ = v_isSharedCheck_3442_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_res_3357_);
lean_inc(v_pos_3356_);
lean_dec(v___x_3355_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3442_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___y_3362_; lean_object* v_pos_3363_; lean_object* v_res_3364_; lean_object* v_idx_3371_; lean_object* v___y_3372_; lean_object* v_pos_3373_; lean_object* v_err_3374_; lean_object* v_pos_3382_; lean_object* v_array_3383_; lean_object* v_idx_3384_; lean_object* v_res_3385_; lean_object* v_array_3402_; lean_object* v_idx_3403_; lean_object* v_pos_3405_; lean_object* v_array_3406_; lean_object* v_idx_3407_; lean_object* v_err_3408_; lean_object* v___x_3414_; uint8_t v___x_3415_; 
v_array_3402_ = lean_ctor_get(v_pos_3356_, 0);
lean_inc_ref(v_array_3402_);
v_idx_3403_ = lean_ctor_get(v_pos_3356_, 1);
lean_inc(v_idx_3403_);
v___x_3414_ = lean_byte_array_size(v_array_3402_);
v___x_3415_ = lean_nat_dec_lt(v_idx_3403_, v___x_3414_);
if (v___x_3415_ == 0)
{
lean_object* v___x_3416_; 
v___x_3416_ = lean_box(0);
lean_inc(v_idx_3403_);
v_pos_3405_ = v_pos_3356_;
v_array_3406_ = v_array_3402_;
v_idx_3407_ = v_idx_3403_;
v_err_3408_ = v___x_3416_;
goto v___jp_3404_;
}
else
{
uint8_t v___x_3417_; uint8_t v_got_3418_; uint8_t v___x_3419_; 
v___x_3417_ = 63;
v_got_3418_ = lean_byte_array_fget(v_array_3402_, v_idx_3403_);
v___x_3419_ = lean_uint8_dec_eq(v_got_3418_, v___x_3417_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; 
v___x_3420_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3403_);
v_pos_3405_ = v_pos_3356_;
v_array_3406_ = v_array_3402_;
v_idx_3407_ = v_idx_3403_;
v_err_3408_ = v___x_3420_;
goto v___jp_3404_;
}
else
{
lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3439_; 
v_isSharedCheck_3439_ = !lean_is_exclusive(v_pos_3356_);
if (v_isSharedCheck_3439_ == 0)
{
lean_object* v_unused_3440_; lean_object* v_unused_3441_; 
v_unused_3440_ = lean_ctor_get(v_pos_3356_, 1);
lean_dec(v_unused_3440_);
v_unused_3441_ = lean_ctor_get(v_pos_3356_, 0);
lean_dec(v_unused_3441_);
v___x_3422_ = v_pos_3356_;
v_isShared_3423_ = v_isSharedCheck_3439_;
goto v_resetjp_3421_;
}
else
{
lean_dec(v_pos_3356_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3439_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3427_; 
v___x_3424_ = lean_unsigned_to_nat(1u);
v___x_3425_ = lean_nat_add(v_idx_3403_, v___x_3424_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 1, v___x_3425_);
v___x_3427_ = v___x_3422_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_array_3402_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v___x_3425_);
v___x_3427_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; 
lean_inc_ref(v_config_3340_);
v___x_3428_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3340_, v___x_3427_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_pos_3429_; lean_object* v_res_3430_; lean_object* v_array_3431_; lean_object* v_idx_3432_; lean_object* v___x_3433_; 
lean_dec(v_idx_3403_);
lean_del_object(v___x_3346_);
v_pos_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_pos_3429_);
v_res_3430_ = lean_ctor_get(v___x_3428_, 1);
lean_inc(v_res_3430_);
lean_dec_ref_known(v___x_3428_, 2);
v_array_3431_ = lean_ctor_get(v_pos_3429_, 0);
lean_inc_ref(v_array_3431_);
v_idx_3432_ = lean_ctor_get(v_pos_3429_, 1);
lean_inc(v_idx_3432_);
v___x_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3433_, 0, v_res_3430_);
v_pos_3382_ = v_pos_3429_;
v_array_3383_ = v_array_3431_;
v_idx_3384_ = v_idx_3432_;
v_res_3385_ = v___x_3433_;
goto v___jp_3381_;
}
else
{
lean_object* v_pos_3434_; lean_object* v_err_3435_; lean_object* v_array_3436_; lean_object* v_idx_3437_; 
v_pos_3434_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_pos_3434_);
v_err_3435_ = lean_ctor_get(v___x_3428_, 1);
lean_inc(v_err_3435_);
lean_dec_ref_known(v___x_3428_, 2);
v_array_3436_ = lean_ctor_get(v_pos_3434_, 0);
lean_inc_ref(v_array_3436_);
v_idx_3437_ = lean_ctor_get(v_pos_3434_, 1);
lean_inc(v_idx_3437_);
v_pos_3405_ = v_pos_3434_;
v_array_3406_ = v_array_3436_;
v_idx_3407_ = v_idx_3437_;
v_err_3408_ = v_err_3435_;
goto v___jp_3404_;
}
}
}
}
}
v___jp_3361_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3368_; 
v___x_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3365_, 0, v_res_3350_);
v___x_3366_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
lean_ctor_set(v___x_3366_, 1, v_res_3357_);
lean_ctor_set(v___x_3366_, 2, v___y_3362_);
lean_ctor_set(v___x_3366_, 3, v_res_3364_);
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 1, v___x_3366_);
lean_ctor_set(v___x_3359_, 0, v_pos_3363_);
v___x_3368_ = v___x_3359_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_pos_3363_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v___x_3366_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
v___jp_3370_:
{
lean_object* v_idx_3375_; uint8_t v___x_3376_; 
v_idx_3375_ = lean_ctor_get(v_pos_3373_, 1);
v___x_3376_ = lean_nat_dec_eq(v_idx_3371_, v_idx_3375_);
lean_dec(v_idx_3371_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v_pos_3373_);
lean_dec(v___y_3372_);
lean_del_object(v___x_3359_);
lean_dec(v_res_3357_);
lean_dec(v_res_3350_);
if (v_isShared_3353_ == 0)
{
lean_ctor_set_tag(v___x_3352_, 1);
lean_ctor_set(v___x_3352_, 1, v_err_3374_);
lean_ctor_set(v___x_3352_, 0, v_a_3341_);
v___x_3378_ = v___x_3352_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3341_);
lean_ctor_set(v_reuseFailAlloc_3379_, 1, v_err_3374_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
else
{
lean_object* v___x_3380_; 
lean_dec(v_err_3374_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_a_3341_);
v___x_3380_ = lean_box(0);
v___y_3362_ = v___y_3372_;
v_pos_3363_ = v_pos_3373_;
v_res_3364_ = v___x_3380_;
goto v___jp_3361_;
}
}
v___jp_3381_:
{
lean_object* v___x_3386_; uint8_t v___x_3387_; 
v___x_3386_ = lean_byte_array_size(v_array_3383_);
v___x_3387_ = lean_nat_dec_lt(v_idx_3384_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
lean_dec_ref(v_array_3383_);
lean_dec_ref(v_config_3340_);
v___x_3388_ = lean_box(0);
v_idx_3371_ = v_idx_3384_;
v___y_3372_ = v_res_3385_;
v_pos_3373_ = v_pos_3382_;
v_err_3374_ = v___x_3388_;
goto v___jp_3370_;
}
else
{
uint8_t v___x_3389_; uint8_t v_got_3390_; uint8_t v___x_3391_; 
v___x_3389_ = 35;
v_got_3390_ = lean_byte_array_fget(v_array_3383_, v_idx_3384_);
v___x_3391_ = lean_uint8_dec_eq(v_got_3390_, v___x_3389_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; 
lean_dec_ref(v_array_3383_);
lean_dec_ref(v_config_3340_);
v___x_3392_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_3371_ = v_idx_3384_;
v___y_3372_ = v_res_3385_;
v_pos_3373_ = v_pos_3382_;
v_err_3374_ = v___x_3392_;
goto v___jp_3370_;
}
else
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
lean_dec_ref(v_pos_3382_);
v___x_3393_ = lean_unsigned_to_nat(1u);
v___x_3394_ = lean_nat_add(v_idx_3384_, v___x_3393_);
v___x_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3395_, 0, v_array_3383_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
v___x_3396_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3340_, v___x_3395_);
lean_dec_ref(v_config_3340_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_pos_3397_; lean_object* v_res_3398_; lean_object* v___x_3399_; 
lean_dec(v_idx_3384_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_a_3341_);
v_pos_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_pos_3397_);
v_res_3398_ = lean_ctor_get(v___x_3396_, 1);
lean_inc(v_res_3398_);
lean_dec_ref_known(v___x_3396_, 2);
v___x_3399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3399_, 0, v_res_3398_);
v___y_3362_ = v_res_3385_;
v_pos_3363_ = v_pos_3397_;
v_res_3364_ = v___x_3399_;
goto v___jp_3361_;
}
else
{
lean_object* v_pos_3400_; lean_object* v_err_3401_; 
v_pos_3400_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_pos_3400_);
v_err_3401_ = lean_ctor_get(v___x_3396_, 1);
lean_inc(v_err_3401_);
lean_dec_ref_known(v___x_3396_, 2);
v_idx_3371_ = v_idx_3384_;
v___y_3372_ = v_res_3385_;
v_pos_3373_ = v_pos_3400_;
v_err_3374_ = v_err_3401_;
goto v___jp_3370_;
}
}
}
}
v___jp_3404_:
{
uint8_t v___x_3409_; 
v___x_3409_ = lean_nat_dec_eq(v_idx_3403_, v_idx_3407_);
lean_dec(v_idx_3403_);
if (v___x_3409_ == 0)
{
lean_object* v___x_3411_; 
lean_dec(v_idx_3407_);
lean_dec_ref(v_array_3406_);
lean_dec_ref(v_pos_3405_);
lean_del_object(v___x_3359_);
lean_dec(v_res_3357_);
lean_del_object(v___x_3352_);
lean_dec(v_res_3350_);
lean_dec_ref(v_config_3340_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set_tag(v___x_3346_, 1);
lean_ctor_set(v___x_3346_, 1, v_err_3408_);
lean_ctor_set(v___x_3346_, 0, v_a_3341_);
v___x_3411_ = v___x_3346_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3341_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_err_3408_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
else
{
lean_object* v___x_3413_; 
lean_dec(v_err_3408_);
lean_del_object(v___x_3346_);
v___x_3413_ = lean_box(0);
v_pos_3382_ = v_pos_3405_;
v_array_3383_ = v_array_3406_;
v_idx_3384_ = v_idx_3407_;
v_res_3385_ = v___x_3413_;
goto v___jp_3381_;
}
}
}
}
else
{
lean_object* v_err_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
lean_del_object(v___x_3352_);
lean_dec(v_res_3350_);
lean_del_object(v___x_3346_);
lean_dec_ref(v_config_3340_);
v_err_3443_ = lean_ctor_get(v___x_3355_, 1);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3450_ == 0)
{
lean_object* v_unused_3451_; 
v_unused_3451_ = lean_ctor_get(v___x_3355_, 0);
lean_dec(v_unused_3451_);
v___x_3445_ = v___x_3355_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_err_3443_);
lean_dec(v___x_3355_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 0, v_a_3341_);
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3341_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v_err_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
else
{
lean_object* v_err_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_del_object(v___x_3346_);
lean_dec_ref(v_config_3340_);
v_err_3453_ = lean_ctor_get(v___x_3348_, 1);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3460_ == 0)
{
lean_object* v_unused_3461_; 
v_unused_3461_ = lean_ctor_get(v___x_3348_, 0);
lean_dec(v_unused_3461_);
v___x_3455_ = v___x_3348_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_err_3453_);
lean_dec(v___x_3348_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v_a_3341_);
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3341_);
lean_ctor_set(v_reuseFailAlloc_3459_, 1, v_err_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
}
else
{
lean_object* v_err_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_dec_ref(v_config_3340_);
v_err_3464_ = lean_ctor_get(v___x_3343_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; 
v_unused_3472_ = lean_ctor_get(v___x_3343_, 0);
lean_dec(v_unused_3472_);
v___x_3466_ = v___x_3343_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_err_3464_);
lean_dec(v___x_3343_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v_a_3341_);
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3341_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_err_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object* v_config_3473_, lean_object* v_a_3474_){
_start:
{
uint8_t v___x_3475_; uint8_t v___x_3476_; lean_object* v___x_3477_; 
v___x_3475_ = 0;
v___x_3476_ = 1;
lean_inc_ref(v_config_3473_);
v___x_3477_ = l_Std_Http_URI_Parser_parsePath(v_config_3473_, v___x_3475_, v___x_3476_, v_a_3474_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_pos_3478_; lean_object* v_res_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3560_; 
v_pos_3478_ = lean_ctor_get(v___x_3477_, 0);
v_res_3479_ = lean_ctor_get(v___x_3477_, 1);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3481_ = v___x_3477_;
v_isShared_3482_ = v_isSharedCheck_3560_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_res_3479_);
lean_inc(v_pos_3478_);
lean_dec(v___x_3477_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3560_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___y_3484_; lean_object* v_pos_3485_; lean_object* v_res_3486_; lean_object* v_idx_3493_; lean_object* v___y_3494_; lean_object* v_pos_3495_; lean_object* v_err_3496_; lean_object* v_pos_3502_; lean_object* v_array_3503_; lean_object* v_idx_3504_; lean_object* v_res_3505_; lean_object* v_array_3522_; lean_object* v_idx_3523_; lean_object* v_pos_3525_; lean_object* v_array_3526_; lean_object* v_idx_3527_; lean_object* v_err_3528_; lean_object* v___x_3532_; uint8_t v___x_3533_; 
v_array_3522_ = lean_ctor_get(v_pos_3478_, 0);
lean_inc_ref(v_array_3522_);
v_idx_3523_ = lean_ctor_get(v_pos_3478_, 1);
lean_inc(v_idx_3523_);
v___x_3532_ = lean_byte_array_size(v_array_3522_);
v___x_3533_ = lean_nat_dec_lt(v_idx_3523_, v___x_3532_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_box(0);
lean_inc(v_idx_3523_);
v_pos_3525_ = v_pos_3478_;
v_array_3526_ = v_array_3522_;
v_idx_3527_ = v_idx_3523_;
v_err_3528_ = v___x_3534_;
goto v___jp_3524_;
}
else
{
uint8_t v___x_3535_; uint8_t v_got_3536_; uint8_t v___x_3537_; 
v___x_3535_ = 63;
v_got_3536_ = lean_byte_array_fget(v_array_3522_, v_idx_3523_);
v___x_3537_ = lean_uint8_dec_eq(v_got_3536_, v___x_3535_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3538_; 
v___x_3538_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__5));
lean_inc(v_idx_3523_);
v_pos_3525_ = v_pos_3478_;
v_array_3526_ = v_array_3522_;
v_idx_3527_ = v_idx_3523_;
v_err_3528_ = v___x_3538_;
goto v___jp_3524_;
}
else
{
lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3557_; 
v_isSharedCheck_3557_ = !lean_is_exclusive(v_pos_3478_);
if (v_isSharedCheck_3557_ == 0)
{
lean_object* v_unused_3558_; lean_object* v_unused_3559_; 
v_unused_3558_ = lean_ctor_get(v_pos_3478_, 1);
lean_dec(v_unused_3558_);
v_unused_3559_ = lean_ctor_get(v_pos_3478_, 0);
lean_dec(v_unused_3559_);
v___x_3540_ = v_pos_3478_;
v_isShared_3541_ = v_isSharedCheck_3557_;
goto v_resetjp_3539_;
}
else
{
lean_dec(v_pos_3478_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3557_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3545_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_nat_add(v_idx_3523_, v___x_3542_);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 1, v___x_3543_);
v___x_3545_ = v___x_3540_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_array_3522_);
lean_ctor_set(v_reuseFailAlloc_3556_, 1, v___x_3543_);
v___x_3545_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
lean_object* v___x_3546_; 
lean_inc_ref(v_config_3473_);
v___x_3546_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3473_, v___x_3545_);
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_object* v_pos_3547_; lean_object* v_res_3548_; lean_object* v_array_3549_; lean_object* v_idx_3550_; lean_object* v___x_3551_; 
lean_dec(v_idx_3523_);
v_pos_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_pos_3547_);
v_res_3548_ = lean_ctor_get(v___x_3546_, 1);
lean_inc(v_res_3548_);
lean_dec_ref_known(v___x_3546_, 2);
v_array_3549_ = lean_ctor_get(v_pos_3547_, 0);
lean_inc_ref(v_array_3549_);
v_idx_3550_ = lean_ctor_get(v_pos_3547_, 1);
lean_inc(v_idx_3550_);
v___x_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3551_, 0, v_res_3548_);
v_pos_3502_ = v_pos_3547_;
v_array_3503_ = v_array_3549_;
v_idx_3504_ = v_idx_3550_;
v_res_3505_ = v___x_3551_;
goto v___jp_3501_;
}
else
{
lean_object* v_pos_3552_; lean_object* v_err_3553_; lean_object* v_array_3554_; lean_object* v_idx_3555_; 
v_pos_3552_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_pos_3552_);
v_err_3553_ = lean_ctor_get(v___x_3546_, 1);
lean_inc(v_err_3553_);
lean_dec_ref_known(v___x_3546_, 2);
v_array_3554_ = lean_ctor_get(v_pos_3552_, 0);
lean_inc_ref(v_array_3554_);
v_idx_3555_ = lean_ctor_get(v_pos_3552_, 1);
lean_inc(v_idx_3555_);
v_pos_3525_ = v_pos_3552_;
v_array_3526_ = v_array_3554_;
v_idx_3527_ = v_idx_3555_;
v_err_3528_ = v_err_3553_;
goto v___jp_3524_;
}
}
}
}
}
v___jp_3483_:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3490_; 
v___x_3487_ = lean_box(0);
v___x_3488_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3487_);
lean_ctor_set(v___x_3488_, 1, v_res_3479_);
lean_ctor_set(v___x_3488_, 2, v___y_3484_);
lean_ctor_set(v___x_3488_, 3, v_res_3486_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 1, v___x_3488_);
lean_ctor_set(v___x_3481_, 0, v_pos_3485_);
v___x_3490_ = v___x_3481_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_pos_3485_);
lean_ctor_set(v_reuseFailAlloc_3491_, 1, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
v___jp_3492_:
{
lean_object* v_idx_3497_; uint8_t v___x_3498_; 
v_idx_3497_ = lean_ctor_get(v_pos_3495_, 1);
v___x_3498_ = lean_nat_dec_eq(v_idx_3493_, v_idx_3497_);
lean_dec(v_idx_3493_);
if (v___x_3498_ == 0)
{
lean_object* v___x_3499_; 
lean_dec(v___y_3494_);
lean_del_object(v___x_3481_);
lean_dec(v_res_3479_);
v___x_3499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3499_, 0, v_pos_3495_);
lean_ctor_set(v___x_3499_, 1, v_err_3496_);
return v___x_3499_;
}
else
{
lean_object* v___x_3500_; 
lean_dec(v_err_3496_);
v___x_3500_ = lean_box(0);
v___y_3484_ = v___y_3494_;
v_pos_3485_ = v_pos_3495_;
v_res_3486_ = v___x_3500_;
goto v___jp_3483_;
}
}
v___jp_3501_:
{
lean_object* v___x_3506_; uint8_t v___x_3507_; 
v___x_3506_ = lean_byte_array_size(v_array_3503_);
v___x_3507_ = lean_nat_dec_lt(v_idx_3504_, v___x_3506_);
if (v___x_3507_ == 0)
{
lean_object* v___x_3508_; 
lean_dec_ref(v_array_3503_);
lean_dec_ref(v_config_3473_);
v___x_3508_ = lean_box(0);
v_idx_3493_ = v_idx_3504_;
v___y_3494_ = v_res_3505_;
v_pos_3495_ = v_pos_3502_;
v_err_3496_ = v___x_3508_;
goto v___jp_3492_;
}
else
{
uint8_t v___x_3509_; uint8_t v_got_3510_; uint8_t v___x_3511_; 
v___x_3509_ = 35;
v_got_3510_ = lean_byte_array_fget(v_array_3503_, v_idx_3504_);
v___x_3511_ = lean_uint8_dec_eq(v_got_3510_, v___x_3509_);
if (v___x_3511_ == 0)
{
lean_object* v___x_3512_; 
lean_dec_ref(v_array_3503_);
lean_dec_ref(v_config_3473_);
v___x_3512_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v_idx_3493_ = v_idx_3504_;
v___y_3494_ = v_res_3505_;
v_pos_3495_ = v_pos_3502_;
v_err_3496_ = v___x_3512_;
goto v___jp_3492_;
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
lean_dec_ref(v_pos_3502_);
v___x_3513_ = lean_unsigned_to_nat(1u);
v___x_3514_ = lean_nat_add(v_idx_3504_, v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3515_, 0, v_array_3503_);
lean_ctor_set(v___x_3515_, 1, v___x_3514_);
v___x_3516_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3473_, v___x_3515_);
lean_dec_ref(v_config_3473_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_pos_3517_; lean_object* v_res_3518_; lean_object* v___x_3519_; 
lean_dec(v_idx_3504_);
v_pos_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_pos_3517_);
v_res_3518_ = lean_ctor_get(v___x_3516_, 1);
lean_inc(v_res_3518_);
lean_dec_ref_known(v___x_3516_, 2);
v___x_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3519_, 0, v_res_3518_);
v___y_3484_ = v_res_3505_;
v_pos_3485_ = v_pos_3517_;
v_res_3486_ = v___x_3519_;
goto v___jp_3483_;
}
else
{
lean_object* v_pos_3520_; lean_object* v_err_3521_; 
v_pos_3520_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_pos_3520_);
v_err_3521_ = lean_ctor_get(v___x_3516_, 1);
lean_inc(v_err_3521_);
lean_dec_ref_known(v___x_3516_, 2);
v_idx_3493_ = v_idx_3504_;
v___y_3494_ = v_res_3505_;
v_pos_3495_ = v_pos_3520_;
v_err_3496_ = v_err_3521_;
goto v___jp_3492_;
}
}
}
}
v___jp_3524_:
{
uint8_t v___x_3529_; 
v___x_3529_ = lean_nat_dec_eq(v_idx_3523_, v_idx_3527_);
lean_dec(v_idx_3523_);
if (v___x_3529_ == 0)
{
lean_object* v___x_3530_; 
lean_dec(v_idx_3527_);
lean_dec_ref(v_array_3526_);
lean_del_object(v___x_3481_);
lean_dec(v_res_3479_);
lean_dec_ref(v_config_3473_);
v___x_3530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3530_, 0, v_pos_3525_);
lean_ctor_set(v___x_3530_, 1, v_err_3528_);
return v___x_3530_;
}
else
{
lean_object* v___x_3531_; 
lean_dec(v_err_3528_);
v___x_3531_ = lean_box(0);
v_pos_3502_ = v_pos_3525_;
v_array_3503_ = v_array_3526_;
v_idx_3504_ = v_idx_3527_;
v_res_3505_ = v___x_3531_;
goto v___jp_3501_;
}
}
}
}
else
{
lean_object* v_pos_3561_; lean_object* v_err_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
lean_dec_ref(v_config_3473_);
v_pos_3561_ = lean_ctor_get(v___x_3477_, 0);
v_err_3562_ = lean_ctor_get(v___x_3477_, 1);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3477_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_err_3562_);
lean_inc(v_pos_3561_);
lean_dec(v___x_3477_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_pos_3561_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_err_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(lean_object* v_config_3570_, lean_object* v_a_3571_){
_start:
{
lean_object* v_pos_3573_; lean_object* v_res_3574_; lean_object* v___x_3577_; 
lean_inc_ref(v_a_3571_);
lean_inc_ref(v_config_3570_);
v___x_3577_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(v_config_3570_, v_a_3571_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_pos_3578_; lean_object* v_res_3579_; 
lean_dec_ref(v_a_3571_);
lean_dec_ref(v_config_3570_);
v_pos_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_pos_3578_);
v_res_3579_ = lean_ctor_get(v___x_3577_, 1);
lean_inc(v_res_3579_);
lean_dec_ref_known(v___x_3577_, 2);
v_pos_3573_ = v_pos_3578_;
v_res_3574_ = v_res_3579_;
goto v___jp_3572_;
}
else
{
lean_object* v_pos_3580_; lean_object* v_err_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3603_; 
v_pos_3580_ = lean_ctor_get(v___x_3577_, 0);
v_err_3581_ = lean_ctor_get(v___x_3577_, 1);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3583_ = v___x_3577_;
v_isShared_3584_ = v_isSharedCheck_3603_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_err_3581_);
lean_inc(v_pos_3580_);
lean_dec(v___x_3577_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3603_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v_idx_3585_; lean_object* v_idx_3586_; uint8_t v___x_3587_; 
v_idx_3585_ = lean_ctor_get(v_a_3571_, 1);
lean_inc(v_idx_3585_);
lean_dec_ref(v_a_3571_);
v_idx_3586_ = lean_ctor_get(v_pos_3580_, 1);
v___x_3587_ = lean_nat_dec_eq(v_idx_3585_, v_idx_3586_);
lean_dec(v_idx_3585_);
if (v___x_3587_ == 0)
{
lean_object* v___x_3589_; 
lean_dec_ref(v_config_3570_);
if (v_isShared_3584_ == 0)
{
v___x_3589_ = v___x_3583_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_pos_3580_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_err_3581_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
else
{
lean_object* v___x_3591_; 
lean_del_object(v___x_3583_);
lean_dec(v_err_3581_);
v___x_3591_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(v_config_3570_, v_pos_3580_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_pos_3592_; lean_object* v_res_3593_; 
v_pos_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_pos_3592_);
v_res_3593_ = lean_ctor_get(v___x_3591_, 1);
lean_inc(v_res_3593_);
lean_dec_ref_known(v___x_3591_, 2);
v_pos_3573_ = v_pos_3592_;
v_res_3574_ = v_res_3593_;
goto v___jp_3572_;
}
else
{
lean_object* v_pos_3594_; lean_object* v_err_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
v_pos_3594_ = lean_ctor_get(v___x_3591_, 0);
v_err_3595_ = lean_ctor_get(v___x_3591_, 1);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3591_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_err_3595_);
lean_inc(v_pos_3594_);
lean_dec(v___x_3591_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_pos_3594_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v_err_3595_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
}
v___jp_3572_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3575_, 0, v_res_3574_);
v___x_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3576_, 0, v_pos_3573_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
return v___x_3576_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object* v_config_3604_, lean_object* v_a_3605_){
_start:
{
lean_object* v___x_3606_; 
lean_inc_ref(v_a_3605_);
lean_inc_ref(v_config_3604_);
v___x_3606_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(v_config_3604_, v_a_3605_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_dec_ref(v_a_3605_);
lean_dec_ref(v_config_3604_);
return v___x_3606_;
}
else
{
lean_object* v_err_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3617_; 
v_err_3607_ = lean_ctor_get(v___x_3606_, 1);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3617_ == 0)
{
lean_object* v_unused_3618_; 
v_unused_3618_ = lean_ctor_get(v___x_3606_, 0);
lean_dec(v_unused_3618_);
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3617_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_err_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3617_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v_idx_3611_; uint8_t v___x_3612_; 
v_idx_3611_ = lean_ctor_get(v_a_3605_, 1);
v___x_3612_ = lean_nat_dec_eq(v_idx_3611_, v_idx_3611_);
if (v___x_3612_ == 0)
{
lean_object* v___x_3614_; 
lean_dec_ref(v_config_3604_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v_a_3605_);
v___x_3614_ = v___x_3609_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_a_3605_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v_err_3607_);
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
lean_object* v___x_3616_; 
lean_del_object(v___x_3609_);
lean_dec(v_err_3607_);
v___x_3616_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_relative(v_config_3604_, v_a_3605_);
return v___x_3616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object* v_config_3625_, lean_object* v_a_3626_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3625_, v_a_3626_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_pos_3628_; lean_object* v_res_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3701_; 
v_pos_3628_ = lean_ctor_get(v___x_3627_, 0);
v_res_3629_ = lean_ctor_get(v___x_3627_, 1);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3631_ = v___x_3627_;
v_isShared_3632_ = v_isSharedCheck_3701_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_res_3629_);
lean_inc(v_pos_3628_);
lean_dec(v___x_3627_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3701_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v_port_3634_; lean_object* v___y_3635_; lean_object* v_pos_3649_; lean_object* v_pos_3652_; lean_object* v_array_3653_; lean_object* v_idx_3654_; lean_object* v_array_3660_; lean_object* v_idx_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v_array_3660_ = lean_ctor_get(v_pos_3628_, 0);
v_idx_3661_ = lean_ctor_get(v_pos_3628_, 1);
v___x_3662_ = lean_byte_array_size(v_array_3660_);
v___x_3663_ = lean_nat_dec_lt(v_idx_3661_, v___x_3662_);
if (v___x_3663_ == 0)
{
v_pos_3649_ = v_pos_3628_;
goto v___jp_3648_;
}
else
{
uint8_t v___x_3664_; uint8_t v___x_3665_; uint8_t v___x_3666_; 
v___x_3664_ = lean_byte_array_fget(v_array_3660_, v_idx_3661_);
v___x_3665_ = 58;
v___x_3666_ = lean_uint8_dec_eq(v___x_3664_, v___x_3665_);
if (v___x_3666_ == 0)
{
v_pos_3649_ = v_pos_3628_;
goto v___jp_3648_;
}
else
{
uint8_t v___x_3667_; 
v___x_3667_ = lean_uint8_dec_eq(v___x_3664_, v___x_3665_);
if (v___x_3667_ == 0)
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
lean_del_object(v___x_3631_);
lean_dec(v_res_3629_);
v___x_3668_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_3669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3669_, 0, v_pos_3628_);
lean_ctor_set(v___x_3669_, 1, v___x_3668_);
return v___x_3669_;
}
else
{
lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3698_; 
lean_inc(v_idx_3661_);
lean_inc_ref(v_array_3660_);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_pos_3628_);
if (v_isSharedCheck_3698_ == 0)
{
lean_object* v_unused_3699_; lean_object* v_unused_3700_; 
v_unused_3699_ = lean_ctor_get(v_pos_3628_, 1);
lean_dec(v_unused_3699_);
v_unused_3700_ = lean_ctor_get(v_pos_3628_, 0);
lean_dec(v_unused_3700_);
v___x_3671_ = v_pos_3628_;
v_isShared_3672_ = v_isSharedCheck_3698_;
goto v_resetjp_3670_;
}
else
{
lean_dec(v_pos_3628_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3698_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3676_; 
v___x_3673_ = lean_unsigned_to_nat(1u);
v___x_3674_ = lean_nat_add(v_idx_3661_, v___x_3673_);
lean_dec(v_idx_3661_);
lean_inc(v___x_3674_);
lean_inc_ref(v_array_3660_);
if (v_isShared_3672_ == 0)
{
lean_ctor_set(v___x_3671_, 1, v___x_3674_);
v___x_3676_ = v___x_3671_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_array_3660_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
uint8_t v___x_3677_; 
v___x_3677_ = lean_nat_dec_lt(v___x_3674_, v___x_3662_);
if (v___x_3677_ == 0)
{
v_pos_3652_ = v___x_3676_;
v_array_3653_ = v_array_3660_;
v_idx_3654_ = v___x_3674_;
goto v___jp_3651_;
}
else
{
uint8_t v___x_3678_; uint8_t v___x_3679_; uint8_t v___x_3680_; 
v___x_3678_ = lean_byte_array_fget(v_array_3660_, v___x_3674_);
v___x_3679_ = 48;
v___x_3680_ = lean_uint8_dec_le(v___x_3679_, v___x_3678_);
if (v___x_3680_ == 0)
{
v_pos_3652_ = v___x_3676_;
v_array_3653_ = v_array_3660_;
v_idx_3654_ = v___x_3674_;
goto v___jp_3651_;
}
else
{
uint8_t v___x_3681_; uint8_t v___x_3682_; 
v___x_3681_ = 57;
v___x_3682_ = lean_uint8_dec_le(v___x_3678_, v___x_3681_);
if (v___x_3682_ == 0)
{
v_pos_3652_ = v___x_3676_;
v_array_3653_ = v_array_3660_;
v_idx_3654_ = v___x_3674_;
goto v___jp_3651_;
}
else
{
lean_object* v___x_3683_; 
lean_dec(v___x_3674_);
lean_dec_ref(v_array_3660_);
v___x_3683_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3676_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_pos_3684_; lean_object* v_res_3685_; lean_object* v___x_3686_; uint16_t v___x_3687_; 
v_pos_3684_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_pos_3684_);
v_res_3685_ = lean_ctor_get(v___x_3683_, 1);
lean_inc(v_res_3685_);
lean_dec_ref_known(v___x_3683_, 2);
v___x_3686_ = lean_alloc_ctor(2, 0, 2);
v___x_3687_ = lean_unbox(v_res_3685_);
lean_dec(v_res_3685_);
lean_ctor_set_uint16(v___x_3686_, 0, v___x_3687_);
v_port_3634_ = v___x_3686_;
v___y_3635_ = v_pos_3684_;
goto v___jp_3633_;
}
else
{
lean_object* v_pos_3688_; lean_object* v_err_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_del_object(v___x_3631_);
lean_dec(v_res_3629_);
v_pos_3688_ = lean_ctor_get(v___x_3683_, 0);
v_err_3689_ = lean_ctor_get(v___x_3683_, 1);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3683_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_err_3689_);
lean_inc(v_pos_3688_);
lean_dec(v___x_3683_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_pos_3688_);
lean_ctor_set(v_reuseFailAlloc_3695_, 1, v_err_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
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
v___jp_3633_:
{
lean_object* v_array_3636_; lean_object* v_idx_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
v_array_3636_ = lean_ctor_get(v___y_3635_, 0);
v_idx_3637_ = lean_ctor_get(v___y_3635_, 1);
v___x_3638_ = lean_byte_array_size(v_array_3636_);
v___x_3639_ = lean_nat_dec_lt(v_idx_3637_, v___x_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; lean_object* v___x_3642_; 
v___x_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3640_, 0, v_res_3629_);
lean_ctor_set(v___x_3640_, 1, v_port_3634_);
if (v_isShared_3632_ == 0)
{
lean_ctor_set(v___x_3631_, 1, v___x_3640_);
lean_ctor_set(v___x_3631_, 0, v___y_3635_);
v___x_3642_ = v___x_3631_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v___y_3635_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v___x_3640_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
else
{
lean_object* v___x_3644_; lean_object* v___x_3646_; 
lean_dec(v_port_3634_);
lean_dec(v_res_3629_);
v___x_3644_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__1));
if (v_isShared_3632_ == 0)
{
lean_ctor_set_tag(v___x_3631_, 1);
lean_ctor_set(v___x_3631_, 1, v___x_3644_);
lean_ctor_set(v___x_3631_, 0, v___y_3635_);
v___x_3646_ = v___x_3631_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___y_3635_);
lean_ctor_set(v_reuseFailAlloc_3647_, 1, v___x_3644_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
v___jp_3648_:
{
lean_object* v___x_3650_; 
v___x_3650_ = lean_box(0);
v_port_3634_ = v___x_3650_;
v___y_3635_ = v_pos_3649_;
goto v___jp_3633_;
}
v___jp_3651_:
{
lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3655_ = lean_byte_array_size(v_array_3653_);
lean_dec_ref(v_array_3653_);
v___x_3656_ = lean_nat_dec_lt(v_idx_3654_, v___x_3655_);
lean_dec(v_idx_3654_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_box(1);
v_port_3634_ = v___x_3657_;
v___y_3635_ = v_pos_3652_;
goto v___jp_3633_;
}
else
{
lean_object* v___x_3658_; lean_object* v___x_3659_; 
lean_del_object(v___x_3631_);
lean_dec(v_res_3629_);
v___x_3658_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__3));
v___x_3659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3659_, 0, v_pos_3652_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
return v___x_3659_;
}
}
}
}
else
{
lean_object* v_pos_3702_; lean_object* v_err_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
v_pos_3702_ = lean_ctor_get(v___x_3627_, 0);
v_err_3703_ = lean_ctor_get(v___x_3627_, 1);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3627_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_err_3703_);
lean_inc(v_pos_3702_);
lean_dec(v___x_3627_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_pos_3702_);
lean_ctor_set(v_reuseFailAlloc_3709_, 1, v_err_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object* v_config_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Std_Http_URI_Parser_parseHostHeader(v_config_3711_, v_a_3712_);
lean_dec_ref(v_config_3711_);
return v_res_3713_;
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
