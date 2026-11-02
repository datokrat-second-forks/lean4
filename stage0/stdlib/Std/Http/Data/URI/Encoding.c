// Lean compiler output
// Module: Std.Http.Data.URI.Encoding
// Imports: import Init.Grind import Init.While import Init.Data.SInt.Lemmas import Init.Data.UInt.Lemmas import Init.Data.UInt.Bitwise import Init.Data.Array.Lemmas public import Init.Data.String.Basic public import Std.Http.Internal.Char
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
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_string_validate_utf8(lean_object*);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_data(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ByteArray_hash___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedChar(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedQueryChar(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedQueryChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidPercentEncoding(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidPercentEncoding___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_hexDigit(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Http.Data.URI.Encoding"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Std.Http.URI.EncodedString.ofByteArray!"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1_value;
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid encoded string"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2_value;
static lean_once_cell_t l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instToString___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instToString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_EncodedString_decode___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_EncodedString_decode___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Std.Http.URI.EncodedQueryString.ofByteArray!"};
static const lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid encoded query string"};
static const lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1_value;
static lean_once_cell_t l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___boxed(lean_object*);
static const lean_sarray_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {0}};
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1;
static const lean_sarray_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {1}};
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3;
LEAN_EXPORT uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedSegment_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedSegment_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedSegment_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedSegment_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedFragment_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedFragment_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedFragment_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedFragment_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedUserInfo_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedUserInfo_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedUserInfo_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedUserInfo_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedQueryParam_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedQueryParam_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedQueryParam_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedChar(lean_object* v_rule_1_, uint8_t v_c_2_){
_start:
{
uint8_t v___y_4_; uint8_t v___y_5_; uint8_t v___y_6_; uint8_t v___y_8_; uint8_t v___y_9_; uint8_t v___x_12_; uint8_t v___x_13_; uint8_t v___x_14_; uint8_t v___y_16_; uint8_t v___y_17_; uint8_t v___y_23_; uint8_t v___y_24_; uint8_t v___y_30_; uint8_t v___y_31_; uint8_t v___y_37_; 
v___x_12_ = 128;
v___x_13_ = lean_uint8_dec_lt(v_c_2_, v___x_12_);
v___x_14_ = 1;
if (v___x_13_ == 0)
{
v___y_37_ = v___x_13_;
goto v___jp_36_;
}
else
{
v___y_37_ = v___x_14_;
goto v___jp_36_;
}
v___jp_3_:
{
if (v___y_4_ == 0)
{
if (v___y_5_ == 0)
{
return v___y_5_;
}
else
{
return v___y_6_;
}
}
else
{
if (v___y_5_ == 0)
{
return v___y_5_;
}
else
{
return v___y_4_;
}
}
}
v___jp_7_:
{
uint8_t v___x_10_; uint8_t v___x_11_; 
v___x_10_ = 37;
v___x_11_ = lean_uint8_dec_eq(v_c_2_, v___x_10_);
v___y_4_ = v___y_8_;
v___y_5_ = v___y_9_;
v___y_6_ = v___x_11_;
goto v___jp_3_;
}
v___jp_15_:
{
uint8_t v___x_18_; uint8_t v___x_19_; 
v___x_18_ = 65;
v___x_19_ = lean_uint8_dec_le(v___x_18_, v_c_2_);
if (v___x_19_ == 0)
{
v___y_8_ = v___y_16_;
v___y_9_ = v___y_17_;
goto v___jp_7_;
}
else
{
uint8_t v___x_20_; uint8_t v___x_21_; 
v___x_20_ = 70;
v___x_21_ = lean_uint8_dec_le(v_c_2_, v___x_20_);
if (v___x_21_ == 0)
{
v___y_8_ = v___y_16_;
v___y_9_ = v___y_17_;
goto v___jp_7_;
}
else
{
v___y_4_ = v___y_16_;
v___y_5_ = v___y_17_;
v___y_6_ = v___x_14_;
goto v___jp_3_;
}
}
}
v___jp_22_:
{
uint8_t v___x_25_; uint8_t v___x_26_; 
v___x_25_ = 97;
v___x_26_ = lean_uint8_dec_le(v___x_25_, v_c_2_);
if (v___x_26_ == 0)
{
v___y_16_ = v___y_23_;
v___y_17_ = v___y_24_;
goto v___jp_15_;
}
else
{
uint8_t v___x_27_; uint8_t v___x_28_; 
v___x_27_ = 102;
v___x_28_ = lean_uint8_dec_le(v_c_2_, v___x_27_);
if (v___x_28_ == 0)
{
v___y_16_ = v___y_23_;
v___y_17_ = v___y_24_;
goto v___jp_15_;
}
else
{
v___y_4_ = v___y_23_;
v___y_5_ = v___y_24_;
v___y_6_ = v___x_14_;
goto v___jp_3_;
}
}
}
v___jp_29_:
{
uint8_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 48;
v___x_33_ = lean_uint8_dec_le(v___x_32_, v_c_2_);
if (v___x_33_ == 0)
{
v___y_23_ = v___y_31_;
v___y_24_ = v___y_30_;
goto v___jp_22_;
}
else
{
uint8_t v___x_34_; uint8_t v___x_35_; 
v___x_34_ = 57;
v___x_35_ = lean_uint8_dec_le(v_c_2_, v___x_34_);
if (v___x_35_ == 0)
{
v___y_23_ = v___y_31_;
v___y_24_ = v___y_30_;
goto v___jp_22_;
}
else
{
v___y_4_ = v___y_31_;
v___y_5_ = v___y_30_;
v___y_6_ = v___x_14_;
goto v___jp_3_;
}
}
}
v___jp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_box(v_c_2_);
v___x_39_ = lean_apply_1(v_rule_1_, v___x_38_);
v___x_40_ = lean_unbox(v___x_39_);
if (v___x_40_ == 0)
{
uint8_t v___x_41_; 
v___x_41_ = lean_unbox(v___x_39_);
v___y_30_ = v___y_37_;
v___y_31_ = v___x_41_;
goto v___jp_29_;
}
else
{
v___y_30_ = v___y_37_;
v___y_31_ = v___x_14_;
goto v___jp_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedChar___boxed(lean_object* v_rule_42_, lean_object* v_c_43_){
_start:
{
uint8_t v_c_boxed_44_; uint8_t v_res_45_; lean_object* v_r_46_; 
v_c_boxed_44_ = lean_unbox(v_c_43_);
v_res_45_ = l_Std_Http_URI_isEncodedChar(v_rule_42_, v_c_boxed_44_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedQueryChar(lean_object* v_rule_47_, uint8_t v_c_48_){
_start:
{
uint8_t v___x_49_; 
v___x_49_ = l_Std_Http_URI_isEncodedChar(v_rule_47_, v_c_48_);
if (v___x_49_ == 0)
{
uint8_t v___x_50_; uint8_t v___x_51_; 
v___x_50_ = 43;
v___x_51_ = lean_uint8_dec_eq(v_c_48_, v___x_50_);
return v___x_51_;
}
else
{
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedQueryChar___boxed(lean_object* v_rule_52_, lean_object* v_c_53_){
_start:
{
uint8_t v_c_boxed_54_; uint8_t v_res_55_; lean_object* v_r_56_; 
v_c_boxed_54_ = lean_unbox(v_c_53_);
v_res_55_ = l_Std_Http_URI_isEncodedQueryChar(v_rule_52_, v_c_boxed_54_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(lean_object* v_r_57_, uint8_t v___x_58_, uint8_t v_v_59_){
_start:
{
uint8_t v___x_60_; 
v___x_60_ = l_Std_Http_URI_isEncodedChar(v_r_57_, v_v_59_);
if (v___x_60_ == 0)
{
return v___x_58_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed(lean_object* v_r_62_, lean_object* v___x_63_, lean_object* v_v_64_){
_start:
{
uint8_t v___x_61__boxed_65_; uint8_t v_v_boxed_66_; uint8_t v_res_67_; lean_object* v_r_68_; 
v___x_61__boxed_65_ = lean_unbox(v___x_63_);
v_v_boxed_66_ = lean_unbox(v_v_64_);
v_res_67_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(v_r_62_, v___x_61__boxed_65_, v_v_boxed_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars(lean_object* v_r_88_, lean_object* v_s_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_90_ = lean_byte_array_data(v_s_89_);
v___x_91_ = lean_unsigned_to_nat(0u);
v___x_92_ = lean_array_get_size(v___x_90_);
v___x_93_ = ((lean_object*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9));
v___x_94_ = lean_nat_dec_lt(v___x_91_, v___x_92_);
if (v___x_94_ == 0)
{
uint8_t v___x_95_; 
lean_dec_ref(v___x_90_);
lean_dec_ref(v_r_88_);
v___x_95_ = 1;
return v___x_95_;
}
else
{
if (v___x_94_ == 0)
{
lean_dec_ref(v___x_90_);
lean_dec_ref(v_r_88_);
return v___x_94_;
}
else
{
lean_object* v___x_96_; lean_object* v___f_97_; size_t v___x_98_; size_t v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_96_ = lean_box(v___x_94_);
v___f_97_ = lean_alloc_closure((void*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed), 3, 2);
lean_closure_set(v___f_97_, 0, v_r_88_);
lean_closure_set(v___f_97_, 1, v___x_96_);
v___x_98_ = ((size_t)0ULL);
v___x_99_ = lean_usize_of_nat(v___x_92_);
v___x_100_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_93_, v___f_97_, v___x_90_, v___x_98_, v___x_99_);
v___x_101_ = lean_unbox(v___x_100_);
lean_dec(v___x_100_);
if (v___x_101_ == 0)
{
return v___x_94_;
}
else
{
uint8_t v___x_102_; 
v___x_102_ = 0;
return v___x_102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___boxed(lean_object* v_r_103_, lean_object* v_s_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars(v_r_103_, v_s_104_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(lean_object* v_r_107_, uint8_t v___x_108_, uint8_t v_v_109_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = l_Std_Http_URI_isEncodedQueryChar(v_r_107_, v_v_109_);
if (v___x_110_ == 0)
{
return v___x_108_;
}
else
{
uint8_t v___x_111_; 
v___x_111_ = 0;
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed(lean_object* v_r_112_, lean_object* v___x_113_, lean_object* v_v_114_){
_start:
{
uint8_t v___x_61__boxed_115_; uint8_t v_v_boxed_116_; uint8_t v_res_117_; lean_object* v_r_118_; 
v___x_61__boxed_115_ = lean_unbox(v___x_113_);
v_v_boxed_116_ = lean_unbox(v_v_114_);
v_res_117_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(v_r_112_, v___x_61__boxed_115_, v_v_boxed_116_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(lean_object* v_r_119_, lean_object* v_s_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_121_ = lean_byte_array_data(v_s_120_);
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_array_get_size(v___x_121_);
v___x_124_ = ((lean_object*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9));
v___x_125_ = lean_nat_dec_lt(v___x_122_, v___x_123_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
lean_dec_ref(v___x_121_);
lean_dec_ref(v_r_119_);
v___x_126_ = 1;
return v___x_126_;
}
else
{
if (v___x_125_ == 0)
{
lean_dec_ref(v___x_121_);
lean_dec_ref(v_r_119_);
return v___x_125_;
}
else
{
lean_object* v___x_127_; lean_object* v___f_128_; size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_127_ = lean_box(v___x_125_);
v___f_128_ = lean_alloc_closure((void*)(l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed), 3, 2);
lean_closure_set(v___f_128_, 0, v_r_119_);
lean_closure_set(v___f_128_, 1, v___x_127_);
v___x_129_ = ((size_t)0ULL);
v___x_130_ = lean_usize_of_nat(v___x_123_);
v___x_131_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_124_, v___f_128_, v___x_121_, v___x_129_, v___x_130_);
v___x_132_ = lean_unbox(v___x_131_);
lean_dec(v___x_131_);
if (v___x_132_ == 0)
{
return v___x_125_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = 0;
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___boxed(lean_object* v_r_134_, lean_object* v_s_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(v_r_134_, v_s_135_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(lean_object* v_ba_138_, lean_object* v_i_139_){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_byte_array_size(v_ba_138_);
v___x_145_ = lean_nat_dec_lt(v_i_139_, v___x_144_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
lean_dec(v_i_139_);
v___x_146_ = 1;
return v___x_146_;
}
else
{
uint8_t v_c_147_; uint8_t v___x_148_; uint8_t v___x_149_; 
v_c_147_ = lean_byte_array_fget(v_ba_138_, v_i_139_);
v___x_148_ = 37;
v___x_149_ = lean_uint8_dec_eq(v_c_147_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(1u);
v___x_151_ = lean_nat_add(v_i_139_, v___x_150_);
lean_dec(v_i_139_);
v_i_139_ = v___x_151_;
goto _start;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = lean_unsigned_to_nat(2u);
v___x_154_ = lean_nat_add(v_i_139_, v___x_153_);
v___x_155_ = lean_nat_dec_lt(v___x_154_, v___x_144_);
if (v___x_155_ == 0)
{
lean_dec(v___x_154_);
lean_dec(v_i_139_);
return v___x_155_;
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v_d1_158_; uint8_t v_d2_159_; uint8_t v___x_185_; uint8_t v___x_186_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_i_139_, v___x_156_);
v_d1_158_ = lean_byte_array_fget(v_ba_138_, v___x_157_);
lean_dec(v___x_157_);
v_d2_159_ = lean_byte_array_fget(v_ba_138_, v___x_154_);
lean_dec(v___x_154_);
v___x_185_ = 48;
v___x_186_ = lean_uint8_dec_le(v___x_185_, v_d1_158_);
if (v___x_186_ == 0)
{
goto v___jp_180_;
}
else
{
uint8_t v___x_187_; uint8_t v___x_188_; 
v___x_187_ = 57;
v___x_188_ = lean_uint8_dec_le(v_d1_158_, v___x_187_);
if (v___x_188_ == 0)
{
goto v___jp_180_;
}
else
{
goto v___jp_170_;
}
}
v___jp_160_:
{
uint8_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = 65;
v___x_162_ = lean_uint8_dec_le(v___x_161_, v_d2_159_);
if (v___x_162_ == 0)
{
lean_dec(v_i_139_);
return v___x_162_;
}
else
{
uint8_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 70;
v___x_164_ = lean_uint8_dec_le(v_d2_159_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec(v_i_139_);
return v___x_164_;
}
else
{
goto v___jp_140_;
}
}
}
v___jp_165_:
{
uint8_t v___x_166_; uint8_t v___x_167_; 
v___x_166_ = 97;
v___x_167_ = lean_uint8_dec_le(v___x_166_, v_d2_159_);
if (v___x_167_ == 0)
{
goto v___jp_160_;
}
else
{
uint8_t v___x_168_; uint8_t v___x_169_; 
v___x_168_ = 102;
v___x_169_ = lean_uint8_dec_le(v_d2_159_, v___x_168_);
if (v___x_169_ == 0)
{
goto v___jp_160_;
}
else
{
goto v___jp_140_;
}
}
}
v___jp_170_:
{
uint8_t v___x_171_; uint8_t v___x_172_; 
v___x_171_ = 48;
v___x_172_ = lean_uint8_dec_le(v___x_171_, v_d2_159_);
if (v___x_172_ == 0)
{
goto v___jp_165_;
}
else
{
uint8_t v___x_173_; uint8_t v___x_174_; 
v___x_173_ = 57;
v___x_174_ = lean_uint8_dec_le(v_d2_159_, v___x_173_);
if (v___x_174_ == 0)
{
goto v___jp_165_;
}
else
{
goto v___jp_140_;
}
}
}
v___jp_175_:
{
uint8_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 65;
v___x_177_ = lean_uint8_dec_le(v___x_176_, v_d1_158_);
if (v___x_177_ == 0)
{
lean_dec(v_i_139_);
return v___x_177_;
}
else
{
uint8_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 70;
v___x_179_ = lean_uint8_dec_le(v_d1_158_, v___x_178_);
if (v___x_179_ == 0)
{
lean_dec(v_i_139_);
return v___x_179_;
}
else
{
goto v___jp_170_;
}
}
}
v___jp_180_:
{
uint8_t v___x_181_; uint8_t v___x_182_; 
v___x_181_ = 97;
v___x_182_ = lean_uint8_dec_le(v___x_181_, v_d1_158_);
if (v___x_182_ == 0)
{
goto v___jp_175_;
}
else
{
uint8_t v___x_183_; uint8_t v___x_184_; 
v___x_183_ = 102;
v___x_184_ = lean_uint8_dec_le(v_d1_158_, v___x_183_);
if (v___x_184_ == 0)
{
goto v___jp_175_;
}
else
{
goto v___jp_170_;
}
}
}
}
}
}
v___jp_140_:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(3u);
v___x_142_ = lean_nat_add(v_i_139_, v___x_141_);
lean_dec(v_i_139_);
v_i_139_ = v___x_142_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop___boxed(lean_object* v_ba_189_, lean_object* v_i_190_){
_start:
{
uint8_t v_res_191_; lean_object* v_r_192_; 
v_res_191_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(v_ba_189_, v_i_190_);
lean_dec_ref(v_ba_189_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidPercentEncoding(lean_object* v_ba_193_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(v_ba_193_, v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidPercentEncoding___boxed(lean_object* v_ba_196_){
_start:
{
uint8_t v_res_197_; lean_object* v_r_198_; 
v_res_197_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_196_);
lean_dec_ref(v_ba_196_);
v_r_198_ = lean_box(v_res_197_);
return v_r_198_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_hexDigit(uint8_t v_n_199_){
_start:
{
uint8_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 10;
v___x_201_ = lean_uint8_dec_lt(v_n_199_, v___x_200_);
if (v___x_201_ == 0)
{
uint8_t v___x_202_; uint8_t v___x_203_; uint8_t v___x_204_; 
v___x_202_ = lean_uint8_sub(v_n_199_, v___x_200_);
v___x_203_ = 65;
v___x_204_ = lean_uint8_add(v___x_202_, v___x_203_);
return v___x_204_;
}
else
{
uint8_t v___x_205_; uint8_t v___x_206_; 
v___x_205_ = 48;
v___x_206_ = lean_uint8_add(v_n_199_, v___x_205_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigit___boxed(lean_object* v_n_207_){
_start:
{
uint8_t v_n_boxed_208_; uint8_t v_res_209_; lean_object* v_r_210_; 
v_n_boxed_208_ = lean_unbox(v_n_207_);
v_res_209_ = l_Std_Http_URI_hexDigit(v_n_boxed_208_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f(uint8_t v_c_211_){
_start:
{
uint8_t v___x_234_; uint8_t v___x_235_; 
v___x_234_ = 48;
v___x_235_ = lean_uint8_dec_le(v___x_234_, v_c_211_);
if (v___x_235_ == 0)
{
goto v___jp_224_;
}
else
{
uint8_t v___x_236_; uint8_t v___x_237_; 
v___x_236_ = 57;
v___x_237_ = lean_uint8_dec_le(v_c_211_, v___x_236_);
if (v___x_237_ == 0)
{
goto v___jp_224_;
}
else
{
uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_uint8_sub(v_c_211_, v___x_234_);
v___x_239_ = lean_box(v___x_238_);
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
v___jp_212_:
{
uint8_t v___x_213_; uint8_t v___x_214_; 
v___x_213_ = 65;
v___x_214_ = lean_uint8_dec_le(v___x_213_, v_c_211_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; 
v___x_215_ = lean_box(0);
return v___x_215_;
}
else
{
uint8_t v___x_216_; uint8_t v___x_217_; 
v___x_216_ = 70;
v___x_217_ = lean_uint8_dec_le(v_c_211_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_box(0);
return v___x_218_;
}
else
{
uint8_t v___x_219_; uint8_t v___x_220_; uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_219_ = lean_uint8_sub(v_c_211_, v___x_213_);
v___x_220_ = 10;
v___x_221_ = lean_uint8_add(v___x_219_, v___x_220_);
v___x_222_ = lean_box(v___x_221_);
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
}
v___jp_224_:
{
uint8_t v___x_225_; uint8_t v___x_226_; 
v___x_225_ = 97;
v___x_226_ = lean_uint8_dec_le(v___x_225_, v_c_211_);
if (v___x_226_ == 0)
{
goto v___jp_212_;
}
else
{
uint8_t v___x_227_; uint8_t v___x_228_; 
v___x_227_ = 102;
v___x_228_ = lean_uint8_dec_le(v_c_211_, v___x_227_);
if (v___x_228_ == 0)
{
goto v___jp_212_;
}
else
{
uint8_t v___x_229_; uint8_t v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_229_ = lean_uint8_sub(v_c_211_, v___x_225_);
v___x_230_ = 10;
v___x_231_ = lean_uint8_add(v___x_229_, v___x_230_);
v___x_232_ = lean_box(v___x_231_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f___boxed(lean_object* v_c_241_){
_start:
{
uint8_t v_c_boxed_242_; lean_object* v_res_243_; 
v_c_boxed_242_ = lean_unbox(v_c_241_);
v_res_243_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v_c_boxed_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg(){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_ByteArray_empty;
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg___boxed(lean_object* v___dummy_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Std_Http_URI_EncodedString_empty___redArg();
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty(lean_object* v_r_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_ByteArray_empty;
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___boxed(lean_object* v_r_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Std_Http_URI_EncodedString_empty(v_r_250_);
lean_dec_ref(v_r_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg(){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_ByteArray_empty;
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg___boxed(lean_object* v___dummy_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Http_URI_EncodedString_instInhabited___redArg();
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited(lean_object* v_r_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_ByteArray_empty;
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___boxed(lean_object* v_r_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Std_Http_URI_EncodedString_instInhabited(v_r_258_);
lean_dec_ref(v_r_258_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(lean_object* v_s_260_, uint8_t v_c_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_byte_array_push(v_s_260_, v_c_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg___boxed(lean_object* v_s_263_, lean_object* v_c_264_){
_start:
{
uint8_t v_c_boxed_265_; lean_object* v_res_266_; 
v_c_boxed_265_ = lean_unbox(v_c_264_);
v_res_266_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(v_s_263_, v_c_boxed_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(lean_object* v_r_267_, lean_object* v_s_268_, uint8_t v_c_269_, lean_object* v_h_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_byte_array_push(v_s_268_, v_c_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___boxed(lean_object* v_r_272_, lean_object* v_s_273_, lean_object* v_c_274_, lean_object* v_h_275_){
_start:
{
uint8_t v_c_boxed_276_; lean_object* v_res_277_; 
v_c_boxed_276_ = lean_unbox(v_c_274_);
v_res_277_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(v_r_272_, v_s_273_, v_c_boxed_276_, v_h_275_);
lean_dec_ref(v_r_272_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(uint8_t v_b_278_, lean_object* v_s_279_){
_start:
{
uint8_t v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; uint8_t v___x_283_; uint8_t v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; uint8_t v___x_287_; uint8_t v___x_288_; lean_object* v_ba_289_; 
v___x_280_ = 37;
v___x_281_ = lean_byte_array_push(v_s_279_, v___x_280_);
v___x_282_ = 4;
v___x_283_ = lean_uint8_shift_right(v_b_278_, v___x_282_);
v___x_284_ = l_Std_Http_URI_hexDigit(v___x_283_);
v___x_285_ = lean_byte_array_push(v___x_281_, v___x_284_);
v___x_286_ = 15;
v___x_287_ = lean_uint8_land(v_b_278_, v___x_286_);
v___x_288_ = l_Std_Http_URI_hexDigit(v___x_287_);
v_ba_289_ = lean_byte_array_push(v___x_285_, v___x_288_);
return v_ba_289_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg___boxed(lean_object* v_b_290_, lean_object* v_s_291_){
_start:
{
uint8_t v_b_boxed_292_; lean_object* v_res_293_; 
v_b_boxed_292_ = lean_unbox(v_b_290_);
v_res_293_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v_b_boxed_292_, v_s_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(lean_object* v_r_294_, uint8_t v_b_295_, lean_object* v_s_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v_b_295_, v_s_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___boxed(lean_object* v_r_298_, lean_object* v_b_299_, lean_object* v_s_300_){
_start:
{
uint8_t v_b_boxed_301_; lean_object* v_res_302_; 
v_b_boxed_301_ = lean_unbox(v_b_299_);
v_res_302_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(v_r_298_, v_b_boxed_301_, v_s_300_);
lean_dec_ref(v_r_298_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(lean_object* v_r_303_, lean_object* v_as_304_, size_t v_i_305_, size_t v_stop_306_, lean_object* v_b_307_){
_start:
{
lean_object* v___y_309_; uint8_t v___x_313_; 
v___x_313_ = lean_usize_dec_eq(v_i_305_, v_stop_306_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; uint8_t v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_byte_array_uget(v_as_304_, v_i_305_);
v___x_315_ = 128;
v___x_316_ = lean_uint8_dec_lt(v___x_314_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
v___x_317_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v___x_314_, v_b_307_);
v___y_309_ = v___x_317_;
goto v___jp_308_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = lean_box(v___x_314_);
lean_inc_ref(v_r_303_);
v___x_319_ = lean_apply_1(v_r_303_, v___x_318_);
v___x_320_ = lean_unbox(v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
v___x_321_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v___x_314_, v_b_307_);
v___y_309_ = v___x_321_;
goto v___jp_308_;
}
else
{
lean_object* v___x_322_; 
v___x_322_ = lean_byte_array_push(v_b_307_, v___x_314_);
v___y_309_ = v___x_322_;
goto v___jp_308_;
}
}
}
else
{
lean_dec_ref(v_r_303_);
return v_b_307_;
}
v___jp_308_:
{
size_t v___x_310_; size_t v___x_311_; 
v___x_310_ = ((size_t)1ULL);
v___x_311_ = lean_usize_add(v_i_305_, v___x_310_);
v_i_305_ = v___x_311_;
v_b_307_ = v___y_309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0___boxed(lean_object* v_r_323_, lean_object* v_as_324_, lean_object* v_i_325_, lean_object* v_stop_326_, lean_object* v_b_327_){
_start:
{
size_t v_i_boxed_328_; size_t v_stop_boxed_329_; lean_object* v_res_330_; 
v_i_boxed_328_ = lean_unbox_usize(v_i_325_);
lean_dec(v_i_325_);
v_stop_boxed_329_ = lean_unbox_usize(v_stop_326_);
lean_dec(v_stop_326_);
v_res_330_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(v_r_323_, v_as_324_, v_i_boxed_328_, v_stop_boxed_329_, v_b_327_);
lean_dec_ref(v_as_324_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_encode(lean_object* v_r_331_, lean_object* v_s_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_333_ = l_ByteArray_empty;
v___x_334_ = lean_string_to_utf8(v_s_332_);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_byte_array_size(v___x_334_);
v___x_337_ = lean_nat_dec_lt(v___x_335_, v___x_336_);
if (v___x_337_ == 0)
{
lean_dec_ref(v___x_334_);
lean_dec_ref(v_r_331_);
return v___x_333_;
}
else
{
size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; 
v___x_338_ = ((size_t)0ULL);
v___x_339_ = lean_usize_of_nat(v___x_336_);
v___x_340_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(v_r_331_, v___x_334_, v___x_338_, v___x_339_, v___x_333_);
lean_dec_ref(v___x_334_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x3f(lean_object* v_r_341_, lean_object* v_ba_342_){
_start:
{
uint8_t v___x_343_; 
lean_inc_ref(v_ba_342_);
v___x_343_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars(v_r_341_, v_ba_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
lean_dec_ref(v_ba_342_);
v___x_344_ = lean_box(0);
return v___x_344_;
}
else
{
uint8_t v___x_345_; 
v___x_345_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_342_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
lean_dec_ref(v_ba_342_);
v___x_346_ = lean_box(0);
return v___x_346_;
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_347_, 0, v_ba_342_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(lean_object* v_msg_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = l_ByteArray_empty;
v___x_350_ = lean_panic_fn_borrowed(v___x_349_, v_msg_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(lean_object* v_r_351_, lean_object* v_msg_352_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(v_msg_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___boxed(lean_object* v_r_354_, lean_object* v_msg_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(v_r_354_, v_msg_355_);
lean_dec_ref(v_r_354_);
return v_res_356_;
}
}
static lean_object* _init_l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_360_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2));
v___x_361_ = lean_unsigned_to_nat(12u);
v___x_362_ = lean_unsigned_to_nat(319u);
v___x_363_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1));
v___x_364_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0));
v___x_365_ = l_mkPanicMessageWithDecl(v___x_364_, v___x_363_, v___x_362_, v___x_361_, v___x_360_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21(lean_object* v_r_366_, lean_object* v_ba_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v_r_366_, v_ba_367_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3, &l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3_once, _init_l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3);
v___x_370_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(v___x_369_);
return v___x_370_;
}
else
{
lean_object* v_val_371_; 
v_val_371_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_val_371_);
lean_dec_ref_known(v___x_368_, 1);
return v_val_371_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x3f(lean_object* v_r_372_, lean_object* v_s_373_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_string_to_utf8(v_s_373_);
v___x_375_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v_r_372_, v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x21(lean_object* v_r_376_, lean_object* v_s_377_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_string_to_utf8(v_s_377_);
v___x_379_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v_r_376_, v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg(lean_object* v_ba_380_){
_start:
{
lean_inc_ref(v_ba_380_);
return v_ba_380_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg___boxed(lean_object* v_ba_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Std_Http_URI_EncodedString_new___redArg(v_ba_381_);
lean_dec_ref(v_ba_381_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new(lean_object* v_r_383_, lean_object* v_ba_384_, lean_object* v_valid_385_, lean_object* v___validEncoding_386_){
_start:
{
lean_inc_ref(v_ba_384_);
return v_ba_384_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___boxed(lean_object* v_r_387_, lean_object* v_ba_388_, lean_object* v_valid_389_, lean_object* v___validEncoding_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Std_Http_URI_EncodedString_new(v_r_387_, v_ba_388_, v_valid_389_, v___validEncoding_390_);
lean_dec_ref(v_ba_388_);
lean_dec_ref(v_r_387_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___lam__0(lean_object* v_es_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_string_from_utf8_unchecked(v_es_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg(){
_start:
{
lean_object* v___f_396_; 
v___f_396_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instToString___redArg___closed__0));
return v___f_396_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___boxed(lean_object* v___dummy_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Std_Http_URI_EncodedString_instToString___redArg();
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString(lean_object* v_r_399_){
_start:
{
lean_object* v___f_400_; 
v___f_400_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instToString___redArg___closed__0));
return v___f_400_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___boxed(lean_object* v_r_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Std_Http_URI_EncodedString_instToString(v_r_401_);
lean_dec_ref(v_r_401_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg(lean_object* v_len_403_, lean_object* v_rawBytes_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_465_; 
v_fst_406_ = lean_ctor_get(v_a_405_, 0);
v_snd_407_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_465_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_465_ == 0)
{
v___x_409_ = v_a_405_;
v_isShared_410_ = v_isSharedCheck_465_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_a_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_465_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
uint8_t v___x_411_; 
v___x_411_ = lean_nat_dec_lt(v_snd_407_, v_len_403_);
if (v___x_411_ == 0)
{
lean_object* v___x_413_; 
if (v_isShared_410_ == 0)
{
v___x_413_ = v___x_409_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_fst_406_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v_snd_407_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
else
{
uint8_t v_percent_415_; uint8_t v___x_416_; uint8_t v___x_425_; 
v_percent_415_ = 37;
v___x_416_ = lean_byte_array_fget(v_rawBytes_404_, v_snd_407_);
v___x_425_ = lean_uint8_dec_eq(v___x_416_, v_percent_415_);
if (v___x_425_ == 0)
{
goto v___jp_417_;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_426_ = lean_unsigned_to_nat(1u);
v___x_427_ = lean_nat_add(v_snd_407_, v___x_426_);
v___x_428_ = lean_nat_dec_lt(v___x_427_, v_len_403_);
if (v___x_428_ == 0)
{
lean_dec(v___x_427_);
goto v___jp_417_;
}
else
{
uint8_t v___x_429_; lean_object* v___x_430_; 
lean_del_object(v___x_409_);
v___x_429_ = lean_byte_array_fget(v_rawBytes_404_, v___x_427_);
lean_dec(v___x_427_);
v___x_430_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_429_);
if (lean_obj_tag(v___x_430_) == 1)
{
lean_object* v_val_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_val_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_val_431_);
lean_dec_ref_known(v___x_430_, 1);
v___x_432_ = lean_unsigned_to_nat(2u);
v___x_433_ = lean_nat_add(v_snd_407_, v___x_432_);
v___x_434_ = lean_nat_dec_lt(v___x_433_, v_len_403_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec(v_val_431_);
lean_dec(v_snd_407_);
v___x_435_ = lean_byte_array_push(v_fst_406_, v___x_416_);
v___x_436_ = lean_byte_array_push(v___x_435_, v___x_429_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_433_);
v_a_405_ = v___x_437_;
goto _start;
}
else
{
uint8_t v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_byte_array_fget(v_rawBytes_404_, v___x_433_);
lean_dec(v___x_433_);
v___x_440_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_439_);
if (lean_obj_tag(v___x_440_) == 1)
{
lean_object* v_val_441_; uint8_t v___x_442_; uint8_t v___x_443_; uint8_t v___x_444_; uint8_t v___x_445_; uint8_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_val_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_val_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = 4;
v___x_443_ = lean_unbox(v_val_431_);
lean_dec(v_val_431_);
v___x_444_ = lean_uint8_shift_left(v___x_443_, v___x_442_);
v___x_445_ = lean_unbox(v_val_441_);
lean_dec(v_val_441_);
v___x_446_ = lean_uint8_add(v___x_444_, v___x_445_);
v___x_447_ = lean_byte_array_push(v_fst_406_, v___x_446_);
v___x_448_ = lean_unsigned_to_nat(3u);
v___x_449_ = lean_nat_add(v_snd_407_, v___x_448_);
lean_dec(v_snd_407_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_447_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v_a_405_ = v___x_450_;
goto _start;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v___x_440_);
lean_dec(v_val_431_);
v___x_452_ = lean_byte_array_push(v_fst_406_, v___x_416_);
v___x_453_ = lean_byte_array_push(v___x_452_, v___x_429_);
v___x_454_ = lean_byte_array_push(v___x_453_, v___x_439_);
v___x_455_ = lean_unsigned_to_nat(3u);
v___x_456_ = lean_nat_add(v_snd_407_, v___x_455_);
lean_dec(v_snd_407_);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_454_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v_a_405_ = v___x_457_;
goto _start;
}
}
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v___x_430_);
v___x_459_ = lean_byte_array_push(v_fst_406_, v___x_416_);
v___x_460_ = lean_byte_array_push(v___x_459_, v___x_429_);
v___x_461_ = lean_unsigned_to_nat(2u);
v___x_462_ = lean_nat_add(v_snd_407_, v___x_461_);
lean_dec(v_snd_407_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_460_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v_a_405_ = v___x_463_;
goto _start;
}
}
}
v___jp_417_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_418_ = lean_byte_array_push(v_fst_406_, v___x_416_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_snd_407_, v___x_419_);
lean_dec(v_snd_407_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_420_);
lean_ctor_set(v___x_409_, 0, v___x_418_);
v___x_422_ = v___x_409_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v___x_420_);
v___x_422_ = v_reuseFailAlloc_424_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
v_a_405_ = v___x_422_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg___boxed(lean_object* v_len_466_, lean_object* v_rawBytes_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg(v_len_466_, v_rawBytes_467_, v_a_468_);
lean_dec_ref(v_rawBytes_467_);
lean_dec(v_len_466_);
return v_res_469_;
}
}
static lean_object* _init_l_Std_Http_URI_EncodedString_decode___redArg___closed__0(void){
_start:
{
lean_object* v_i_470_; lean_object* v_decoded_471_; lean_object* v___x_472_; 
v_i_470_ = lean_unsigned_to_nat(0u);
v_decoded_471_ = l_ByteArray_empty;
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v_decoded_471_);
lean_ctor_set(v___x_472_, 1, v_i_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg(lean_object* v_es_473_){
_start:
{
lean_object* v_len_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v_fst_477_; uint8_t v___x_478_; 
v_len_474_ = lean_byte_array_size(v_es_473_);
v___x_475_ = lean_obj_once(&l_Std_Http_URI_EncodedString_decode___redArg___closed__0, &l_Std_Http_URI_EncodedString_decode___redArg___closed__0_once, _init_l_Std_Http_URI_EncodedString_decode___redArg___closed__0);
v___x_476_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg(v_len_474_, v_es_473_, v___x_475_);
v_fst_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_fst_477_);
lean_dec_ref(v___x_476_);
v___x_478_ = lean_string_validate_utf8(v_fst_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
lean_dec(v_fst_477_);
v___x_479_ = lean_box(0);
return v___x_479_;
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_string_from_utf8_unchecked(v_fst_477_);
v___x_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg___boxed(lean_object* v_es_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Std_Http_URI_EncodedString_decode___redArg(v_es_482_);
lean_dec_ref(v_es_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode(lean_object* v_r_484_, lean_object* v_es_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Std_Http_URI_EncodedString_decode___redArg(v_es_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___boxed(lean_object* v_r_487_, lean_object* v_es_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Std_Http_URI_EncodedString_decode(v_r_487_, v_es_488_);
lean_dec_ref(v_es_488_);
lean_dec_ref(v_r_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0(lean_object* v_len_490_, lean_object* v_rawBytes_491_, lean_object* v_inst_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___redArg(v_len_490_, v_rawBytes_491_, v_a_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0___boxed(lean_object* v_len_495_, lean_object* v_rawBytes_496_, lean_object* v_inst_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedString_decode_spec__0(v_len_495_, v_rawBytes_496_, v_inst_497_, v_a_498_);
lean_dec_ref(v_rawBytes_496_);
lean_dec(v_len_495_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(lean_object* v_es_500_, lean_object* v_n_501_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_string_from_utf8_unchecked(v_es_500_);
v___x_503_ = l_String_quote(v___x_502_);
v___x_504_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object* v_es_505_, lean_object* v_n_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(v_es_505_, v_n_506_);
lean_dec(v_n_506_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg(){
_start:
{
lean_object* v___f_510_; 
v___f_510_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_510_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___boxed(lean_object* v___dummy_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Std_Http_URI_EncodedString_instRepr___redArg();
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr(lean_object* v_r_513_){
_start:
{
lean_object* v___f_514_; 
v___f_514_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___boxed(lean_object* v_r_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_Http_URI_EncodedString_instRepr(v_r_515_);
lean_dec_ref(v_r_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg(){
_start:
{
lean_object* v___f_519_; 
v___f_519_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_519_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___boxed(lean_object* v___dummy_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Std_Http_URI_EncodedString_instBEq___redArg();
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq(lean_object* v_r_522_){
_start:
{
lean_object* v___f_523_; 
v___f_523_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_523_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___boxed(lean_object* v_r_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Std_Http_URI_EncodedString_instBEq(v_r_524_);
lean_dec_ref(v_r_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg(){
_start:
{
lean_object* v___f_528_; 
v___f_528_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_528_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___boxed(lean_object* v___dummy_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Std_Http_URI_EncodedString_instHashable___redArg();
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable(lean_object* v_r_531_){
_start:
{
lean_object* v___f_532_; 
v___f_532_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_532_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___boxed(lean_object* v_r_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_Http_URI_EncodedString_instHashable(v_r_533_);
lean_dec_ref(v_r_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg(){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_ByteArray_empty;
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg___boxed(lean_object* v___dummy_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Std_Http_URI_EncodedQueryString_empty___redArg();
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty(lean_object* v_r_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_ByteArray_empty;
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___boxed(lean_object* v_r_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_Http_URI_EncodedQueryString_empty(v_r_541_);
lean_dec_ref(v_r_541_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg(){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_ByteArray_empty;
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg___boxed(lean_object* v___dummy_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Std_Http_URI_EncodedQueryString_instInhabited___redArg();
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited(lean_object* v_r_547_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_ByteArray_empty;
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___boxed(lean_object* v_r_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Std_Http_URI_EncodedQueryString_instInhabited(v_r_549_);
lean_dec_ref(v_r_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(lean_object* v_s_551_, uint8_t v_c_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_byte_array_push(v_s_551_, v_c_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg___boxed(lean_object* v_s_554_, lean_object* v_c_555_){
_start:
{
uint8_t v_c_boxed_556_; lean_object* v_res_557_; 
v_c_boxed_556_ = lean_unbox(v_c_555_);
v_res_557_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(v_s_554_, v_c_boxed_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(lean_object* v_r_558_, lean_object* v_s_559_, uint8_t v_c_560_, lean_object* v_h_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_byte_array_push(v_s_559_, v_c_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___boxed(lean_object* v_r_563_, lean_object* v_s_564_, lean_object* v_c_565_, lean_object* v_h_566_){
_start:
{
uint8_t v_c_boxed_567_; lean_object* v_res_568_; 
v_c_boxed_567_ = lean_unbox(v_c_565_);
v_res_568_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(v_r_563_, v_s_564_, v_c_boxed_567_, v_h_566_);
lean_dec_ref(v_r_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(lean_object* v_ba_569_, lean_object* v_r_570_){
_start:
{
uint8_t v___x_571_; 
lean_inc_ref(v_ba_569_);
v___x_571_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(v_r_570_, v_ba_569_);
if (v___x_571_ == 0)
{
lean_object* v___x_572_; 
lean_dec_ref(v_ba_569_);
v___x_572_ = lean_box(0);
return v___x_572_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_569_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
lean_dec_ref(v_ba_569_);
v___x_574_ = lean_box(0);
return v___x_574_;
}
else
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v_ba_569_);
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(lean_object* v_msg_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = l_ByteArray_empty;
v___x_578_ = lean_panic_fn_borrowed(v___x_577_, v_msg_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(lean_object* v_r_579_, lean_object* v_msg_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(v_msg_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___boxed(lean_object* v_r_582_, lean_object* v_msg_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(v_r_582_, v_msg_583_);
lean_dec_ref(v_r_582_);
return v_res_584_;
}
}
static lean_object* _init_l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_587_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1));
v___x_588_ = lean_unsigned_to_nat(12u);
v___x_589_ = lean_unsigned_to_nat(437u);
v___x_590_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0));
v___x_591_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0));
v___x_592_ = l_mkPanicMessageWithDecl(v___x_591_, v___x_590_, v___x_589_, v___x_588_, v___x_587_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(lean_object* v_ba_593_, lean_object* v_r_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v_ba_593_, v_r_594_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = lean_obj_once(&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2, &l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2_once, _init_l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2);
v___x_597_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(v___x_596_);
return v___x_597_;
}
else
{
lean_object* v_val_598_; 
v_val_598_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_val_598_);
lean_dec_ref_known(v___x_595_, 1);
return v_val_598_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x3f(lean_object* v_s_599_, lean_object* v_r_600_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_string_to_utf8(v_s_599_);
v___x_602_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v___x_601_, v_r_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x21(lean_object* v_s_603_, lean_object* v_r_604_){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_string_to_utf8(v_s_603_);
v___x_606_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(v___x_605_, v_r_604_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg(lean_object* v_ba_607_){
_start:
{
lean_inc_ref(v_ba_607_);
return v_ba_607_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg___boxed(lean_object* v_ba_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Http_URI_EncodedQueryString_new___redArg(v_ba_608_);
lean_dec_ref(v_ba_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new(lean_object* v_r_610_, lean_object* v_ba_611_, lean_object* v_valid_612_, lean_object* v___validEncoding_613_){
_start:
{
lean_inc_ref(v_ba_611_);
return v_ba_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___boxed(lean_object* v_r_614_, lean_object* v_ba_615_, lean_object* v_valid_616_, lean_object* v___validEncoding_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Std_Http_URI_EncodedQueryString_new(v_r_614_, v_ba_615_, v_valid_616_, v___validEncoding_617_);
lean_dec_ref(v_ba_615_);
lean_dec_ref(v_r_614_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(uint8_t v_b_619_, lean_object* v_s_620_){
_start:
{
uint8_t v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; uint8_t v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; uint8_t v___x_628_; uint8_t v___x_629_; lean_object* v_ba_630_; 
v___x_621_ = 37;
v___x_622_ = lean_byte_array_push(v_s_620_, v___x_621_);
v___x_623_ = 4;
v___x_624_ = lean_uint8_shift_right(v_b_619_, v___x_623_);
v___x_625_ = l_Std_Http_URI_hexDigit(v___x_624_);
v___x_626_ = lean_byte_array_push(v___x_622_, v___x_625_);
v___x_627_ = 15;
v___x_628_ = lean_uint8_land(v_b_619_, v___x_627_);
v___x_629_ = l_Std_Http_URI_hexDigit(v___x_628_);
v_ba_630_ = lean_byte_array_push(v___x_626_, v___x_629_);
return v_ba_630_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg___boxed(lean_object* v_b_631_, lean_object* v_s_632_){
_start:
{
uint8_t v_b_boxed_633_; lean_object* v_res_634_; 
v_b_boxed_633_ = lean_unbox(v_b_631_);
v_res_634_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v_b_boxed_633_, v_s_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(lean_object* v_r_635_, uint8_t v_b_636_, lean_object* v_s_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v_b_636_, v_s_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___boxed(lean_object* v_r_639_, lean_object* v_b_640_, lean_object* v_s_641_){
_start:
{
uint8_t v_b_boxed_642_; lean_object* v_res_643_; 
v_b_boxed_642_ = lean_unbox(v_b_640_);
v_res_643_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(v_r_639_, v_b_boxed_642_, v_s_641_);
lean_dec_ref(v_r_639_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(lean_object* v_r_644_, lean_object* v_as_645_, size_t v_i_646_, size_t v_stop_647_, lean_object* v_b_648_){
_start:
{
lean_object* v___y_650_; uint8_t v___x_654_; 
v___x_654_ = lean_usize_dec_eq(v_i_646_, v_stop_647_);
if (v___x_654_ == 0)
{
uint8_t v___x_655_; uint8_t v___x_662_; uint8_t v___x_663_; 
v___x_655_ = lean_byte_array_uget(v_as_645_, v_i_646_);
v___x_662_ = 128;
v___x_663_ = lean_uint8_dec_lt(v___x_655_, v___x_662_);
if (v___x_663_ == 0)
{
goto v___jp_656_;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_664_ = lean_box(v___x_655_);
lean_inc_ref(v_r_644_);
v___x_665_ = lean_apply_1(v_r_644_, v___x_664_);
v___x_666_ = lean_unbox(v___x_665_);
if (v___x_666_ == 0)
{
goto v___jp_656_;
}
else
{
lean_object* v___x_667_; 
v___x_667_ = lean_byte_array_push(v_b_648_, v___x_655_);
v___y_650_ = v___x_667_;
goto v___jp_649_;
}
}
v___jp_656_:
{
uint8_t v___x_657_; uint8_t v___x_658_; 
v___x_657_ = 32;
v___x_658_ = lean_uint8_dec_eq(v___x_655_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; 
v___x_659_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v___x_655_, v_b_648_);
v___y_650_ = v___x_659_;
goto v___jp_649_;
}
else
{
uint8_t v___x_660_; lean_object* v___x_661_; 
v___x_660_ = 43;
v___x_661_ = lean_byte_array_push(v_b_648_, v___x_660_);
v___y_650_ = v___x_661_;
goto v___jp_649_;
}
}
}
else
{
lean_dec_ref(v_r_644_);
return v_b_648_;
}
v___jp_649_:
{
size_t v___x_651_; size_t v___x_652_; 
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_646_, v___x_651_);
v_i_646_ = v___x_652_;
v_b_648_ = v___y_650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0___boxed(lean_object* v_r_668_, lean_object* v_as_669_, lean_object* v_i_670_, lean_object* v_stop_671_, lean_object* v_b_672_){
_start:
{
size_t v_i_boxed_673_; size_t v_stop_boxed_674_; lean_object* v_res_675_; 
v_i_boxed_673_ = lean_unbox_usize(v_i_670_);
lean_dec(v_i_670_);
v_stop_boxed_674_ = lean_unbox_usize(v_stop_671_);
lean_dec(v_stop_671_);
v_res_675_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(v_r_668_, v_as_669_, v_i_boxed_673_, v_stop_boxed_674_, v_b_672_);
lean_dec_ref(v_as_669_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_encode(lean_object* v_s_676_, lean_object* v_r_677_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_678_ = l_ByteArray_empty;
v___x_679_ = lean_string_to_utf8(v_s_676_);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_byte_array_size(v___x_679_);
v___x_682_ = lean_nat_dec_lt(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
lean_dec_ref(v___x_679_);
lean_dec_ref(v_r_677_);
return v___x_678_;
}
else
{
size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((size_t)0ULL);
v___x_684_ = lean_usize_of_nat(v___x_681_);
v___x_685_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(v_r_677_, v___x_679_, v___x_683_, v___x_684_, v___x_678_);
lean_dec_ref(v___x_679_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___redArg(lean_object* v_es_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_string_from_utf8_unchecked(v_es_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString(lean_object* v_r_688_, lean_object* v_es_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lean_string_from_utf8_unchecked(v_es_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___boxed(lean_object* v_r_691_, lean_object* v_es_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Std_Http_URI_EncodedQueryString_toString(v_r_691_, v_es_692_);
lean_dec_ref(v_r_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(lean_object* v_len_694_, lean_object* v_rawBytes_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_fst_697_; lean_object* v_snd_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_764_; 
v_fst_697_ = lean_ctor_get(v_a_696_, 0);
v_snd_698_ = lean_ctor_get(v_a_696_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v_a_696_);
if (v_isSharedCheck_764_ == 0)
{
v___x_700_ = v_a_696_;
v_isShared_701_ = v_isSharedCheck_764_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_snd_698_);
lean_inc(v_fst_697_);
lean_dec(v_a_696_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_764_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
uint8_t v___x_702_; 
v___x_702_ = lean_nat_dec_lt(v_snd_698_, v_len_694_);
if (v___x_702_ == 0)
{
lean_object* v___x_704_; 
if (v_isShared_701_ == 0)
{
v___x_704_ = v___x_700_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_fst_697_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v_snd_698_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
else
{
uint8_t v_plus_706_; uint8_t v___x_707_; uint8_t v___x_716_; 
v_plus_706_ = 43;
v___x_707_ = lean_byte_array_fget(v_rawBytes_695_, v_snd_698_);
v___x_716_ = lean_uint8_dec_eq(v___x_707_, v_plus_706_);
if (v___x_716_ == 0)
{
uint8_t v_percent_717_; uint8_t v___x_718_; 
v_percent_717_ = 37;
v___x_718_ = lean_uint8_dec_eq(v___x_707_, v_percent_717_);
if (v___x_718_ == 0)
{
goto v___jp_708_;
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_719_ = lean_unsigned_to_nat(1u);
v___x_720_ = lean_nat_add(v_snd_698_, v___x_719_);
v___x_721_ = lean_nat_dec_lt(v___x_720_, v_len_694_);
if (v___x_721_ == 0)
{
lean_dec(v___x_720_);
goto v___jp_708_;
}
else
{
uint8_t v___x_722_; lean_object* v___x_723_; 
lean_del_object(v___x_700_);
v___x_722_ = lean_byte_array_fget(v_rawBytes_695_, v___x_720_);
lean_dec(v___x_720_);
v___x_723_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_722_);
if (lean_obj_tag(v___x_723_) == 1)
{
lean_object* v_val_724_; lean_object* v___x_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v_val_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_val_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lean_unsigned_to_nat(2u);
v___x_726_ = lean_nat_add(v_snd_698_, v___x_725_);
v___x_727_ = lean_nat_dec_lt(v___x_726_, v_len_694_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec(v_val_724_);
lean_dec(v_snd_698_);
v___x_728_ = lean_byte_array_push(v_fst_697_, v___x_707_);
v___x_729_ = lean_byte_array_push(v___x_728_, v___x_722_);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v___x_726_);
v_a_696_ = v___x_730_;
goto _start;
}
else
{
uint8_t v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_byte_array_fget(v_rawBytes_695_, v___x_726_);
lean_dec(v___x_726_);
v___x_733_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_732_);
if (lean_obj_tag(v___x_733_) == 1)
{
lean_object* v_val_734_; uint8_t v___x_735_; uint8_t v___x_736_; uint8_t v___x_737_; uint8_t v___x_738_; uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_val_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_val_734_);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = 4;
v___x_736_ = lean_unbox(v_val_724_);
lean_dec(v_val_724_);
v___x_737_ = lean_uint8_shift_left(v___x_736_, v___x_735_);
v___x_738_ = lean_unbox(v_val_734_);
lean_dec(v_val_734_);
v___x_739_ = lean_uint8_add(v___x_737_, v___x_738_);
v___x_740_ = lean_byte_array_push(v_fst_697_, v___x_739_);
v___x_741_ = lean_unsigned_to_nat(3u);
v___x_742_ = lean_nat_add(v_snd_698_, v___x_741_);
lean_dec(v_snd_698_);
v___x_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_740_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v_a_696_ = v___x_743_;
goto _start;
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec(v___x_733_);
lean_dec(v_val_724_);
v___x_745_ = lean_byte_array_push(v_fst_697_, v___x_707_);
v___x_746_ = lean_byte_array_push(v___x_745_, v___x_722_);
v___x_747_ = lean_byte_array_push(v___x_746_, v___x_732_);
v___x_748_ = lean_unsigned_to_nat(3u);
v___x_749_ = lean_nat_add(v_snd_698_, v___x_748_);
lean_dec(v_snd_698_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_747_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v_a_696_ = v___x_750_;
goto _start;
}
}
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
lean_dec(v___x_723_);
v___x_752_ = lean_byte_array_push(v_fst_697_, v___x_707_);
v___x_753_ = lean_byte_array_push(v___x_752_, v___x_722_);
v___x_754_ = lean_unsigned_to_nat(2u);
v___x_755_ = lean_nat_add(v_snd_698_, v___x_754_);
lean_dec(v_snd_698_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_753_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v_a_696_ = v___x_756_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
lean_del_object(v___x_700_);
v___x_758_ = 32;
v___x_759_ = lean_byte_array_push(v_fst_697_, v___x_758_);
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_nat_add(v_snd_698_, v___x_760_);
lean_dec(v_snd_698_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_759_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v_a_696_ = v___x_762_;
goto _start;
}
v___jp_708_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_709_ = lean_byte_array_push(v_fst_697_, v___x_707_);
v___x_710_ = lean_unsigned_to_nat(1u);
v___x_711_ = lean_nat_add(v_snd_698_, v___x_710_);
lean_dec(v_snd_698_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 1, v___x_711_);
lean_ctor_set(v___x_700_, 0, v___x_709_);
v___x_713_ = v___x_700_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_711_);
v___x_713_ = v_reuseFailAlloc_715_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
v_a_696_ = v___x_713_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg___boxed(lean_object* v_len_765_, lean_object* v_rawBytes_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_765_, v_rawBytes_766_, v_a_767_);
lean_dec_ref(v_rawBytes_766_);
lean_dec(v_len_765_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg(lean_object* v_es_769_){
_start:
{
lean_object* v_len_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_fst_773_; uint8_t v___x_774_; 
v_len_770_ = lean_byte_array_size(v_es_769_);
v___x_771_ = lean_obj_once(&l_Std_Http_URI_EncodedString_decode___redArg___closed__0, &l_Std_Http_URI_EncodedString_decode___redArg___closed__0_once, _init_l_Std_Http_URI_EncodedString_decode___redArg___closed__0);
v___x_772_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_770_, v_es_769_, v___x_771_);
v_fst_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_fst_773_);
lean_dec_ref(v___x_772_);
v___x_774_ = lean_string_validate_utf8(v_fst_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; 
lean_dec(v_fst_773_);
v___x_775_ = lean_box(0);
return v___x_775_;
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_string_from_utf8_unchecked(v_fst_773_);
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg___boxed(lean_object* v_es_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_es_778_);
lean_dec_ref(v_es_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode(lean_object* v_r_780_, lean_object* v_es_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_es_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___boxed(lean_object* v_r_783_, lean_object* v_es_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Std_Http_URI_EncodedQueryString_decode(v_r_783_, v_es_784_);
lean_dec_ref(v_es_784_);
lean_dec_ref(v_r_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(lean_object* v_len_786_, lean_object* v_rawBytes_787_, lean_object* v_inst_788_, lean_object* v_a_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_786_, v_rawBytes_787_, v_a_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___boxed(lean_object* v_len_791_, lean_object* v_rawBytes_792_, lean_object* v_inst_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(v_len_791_, v_rawBytes_792_, v_inst_793_, v_a_794_);
lean_dec_ref(v_rawBytes_792_);
lean_dec(v_len_791_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringEncodedQueryString(lean_object* v_r_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lean_alloc_closure((void*)(l_Std_Http_URI_EncodedQueryString_toString___boxed), 2, 1);
lean_closure_set(v___x_797_, 0, v_r_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_799_; 
v___f_799_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_799_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg___boxed(lean_object* v___dummy_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Std_Http_URI_instReprEncodedQueryString___redArg();
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString(lean_object* v_r_802_){
_start:
{
lean_object* v___f_803_; 
v___f_803_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_803_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___boxed(lean_object* v_r_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Std_Http_URI_instReprEncodedQueryString(v_r_804_);
lean_dec_ref(v_r_804_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_807_; 
v___f_807_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_807_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg___boxed(lean_object* v___dummy_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Std_Http_URI_instBEqEncodedQueryString___redArg();
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString(lean_object* v_r_810_){
_start:
{
lean_object* v___f_811_; 
v___f_811_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_811_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___boxed(lean_object* v_r_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Std_Http_URI_instBEqEncodedQueryString(v_r_812_);
lean_dec_ref(v_r_812_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_815_; 
v___f_815_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_815_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg___boxed(lean_object* v___dummy_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Std_Http_URI_instHashableEncodedQueryString___redArg();
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString(lean_object* v_r_818_){
_start:
{
lean_object* v___f_819_; 
v___f_819_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_819_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___boxed(lean_object* v_r_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Std_Http_URI_instHashableEncodedQueryString(v_r_820_);
lean_dec_ref(v_r_820_);
return v_res_821_;
}
}
static uint64_t _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_828_; uint64_t v___x_829_; 
v___x_828_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0));
v___x_829_ = lean_byte_array_hash(v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2));
v___x_837_ = lean_byte_array_size(v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
uint64_t v___x_839_; 
v___x_839_ = lean_uint64_once(&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1, &l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1_once, _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1);
return v___x_839_;
}
else
{
lean_object* v_val_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; uint8_t v___x_845_; lean_object* v___x_846_; uint64_t v___x_847_; 
v_val_840_ = lean_ctor_get(v_x_838_, 0);
v___x_841_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2));
v___x_842_ = lean_unsigned_to_nat(0u);
v___x_843_ = lean_obj_once(&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3, &l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3_once, _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3);
v___x_844_ = lean_byte_array_size(v_val_840_);
v___x_845_ = 0;
v___x_846_ = lean_byte_array_copy_slice(v_val_840_, v___x_842_, v___x_841_, v___x_843_, v___x_844_, v___x_845_);
v___x_847_ = lean_byte_array_hash(v___x_846_);
lean_dec_ref(v___x_846_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed(lean_object* v_x_848_){
_start:
{
uint64_t v_res_849_; lean_object* v_r_850_; 
v_res_849_ = l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(v_x_848_);
lean_dec(v_x_848_);
v_r_850_ = lean_box_uint64(v_res_849_);
return v_r_850_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_853_; 
v___f_853_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0));
return v___f_853_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___boxed(lean_object* v___dummy_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg();
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString(lean_object* v_r_856_){
_start:
{
lean_object* v___f_857_; 
v___f_857_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0));
return v___f_857_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___boxed(lean_object* v_r_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Std_Http_URI_instHashableOptionEncodedQueryString(v_r_858_);
lean_dec_ref(v_r_858_);
return v_res_859_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedSegment_encode___lam__0(uint8_t v___y_860_){
_start:
{
uint8_t v___x_906_; uint8_t v___x_907_; 
v___x_906_ = 48;
v___x_907_ = lean_uint8_dec_le(v___x_906_, v___y_860_);
if (v___x_907_ == 0)
{
goto v___jp_901_;
}
else
{
uint8_t v___x_908_; uint8_t v___x_909_; 
v___x_908_ = 57;
v___x_909_ = lean_uint8_dec_le(v___y_860_, v___x_908_);
if (v___x_909_ == 0)
{
goto v___jp_901_;
}
else
{
return v___x_909_;
}
}
v___jp_861_:
{
uint8_t v___x_862_; uint8_t v___x_863_; 
v___x_862_ = 45;
v___x_863_ = lean_uint8_dec_eq(v___y_860_, v___x_862_);
if (v___x_863_ == 0)
{
uint8_t v___x_864_; uint8_t v___x_865_; 
v___x_864_ = 46;
v___x_865_ = lean_uint8_dec_eq(v___y_860_, v___x_864_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; uint8_t v___x_867_; 
v___x_866_ = 95;
v___x_867_ = lean_uint8_dec_eq(v___y_860_, v___x_866_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; uint8_t v___x_869_; 
v___x_868_ = 126;
v___x_869_ = lean_uint8_dec_eq(v___y_860_, v___x_868_);
if (v___x_869_ == 0)
{
uint8_t v___x_870_; uint8_t v___x_871_; 
v___x_870_ = 33;
v___x_871_ = lean_uint8_dec_eq(v___y_860_, v___x_870_);
if (v___x_871_ == 0)
{
uint8_t v___x_872_; uint8_t v___x_873_; 
v___x_872_ = 36;
v___x_873_ = lean_uint8_dec_eq(v___y_860_, v___x_872_);
if (v___x_873_ == 0)
{
uint8_t v___x_874_; uint8_t v___x_875_; 
v___x_874_ = 38;
v___x_875_ = lean_uint8_dec_eq(v___y_860_, v___x_874_);
if (v___x_875_ == 0)
{
uint8_t v___x_876_; uint8_t v___x_877_; 
v___x_876_ = 39;
v___x_877_ = lean_uint8_dec_eq(v___y_860_, v___x_876_);
if (v___x_877_ == 0)
{
uint8_t v___x_878_; uint8_t v___x_879_; 
v___x_878_ = 40;
v___x_879_ = lean_uint8_dec_eq(v___y_860_, v___x_878_);
if (v___x_879_ == 0)
{
uint8_t v___x_880_; uint8_t v___x_881_; 
v___x_880_ = 41;
v___x_881_ = lean_uint8_dec_eq(v___y_860_, v___x_880_);
if (v___x_881_ == 0)
{
uint8_t v___x_882_; uint8_t v___x_883_; 
v___x_882_ = 42;
v___x_883_ = lean_uint8_dec_eq(v___y_860_, v___x_882_);
if (v___x_883_ == 0)
{
uint8_t v___x_884_; uint8_t v___x_885_; 
v___x_884_ = 43;
v___x_885_ = lean_uint8_dec_eq(v___y_860_, v___x_884_);
if (v___x_885_ == 0)
{
uint8_t v___x_886_; uint8_t v___x_887_; 
v___x_886_ = 44;
v___x_887_ = lean_uint8_dec_eq(v___y_860_, v___x_886_);
if (v___x_887_ == 0)
{
uint8_t v___x_888_; uint8_t v___x_889_; 
v___x_888_ = 59;
v___x_889_ = lean_uint8_dec_eq(v___y_860_, v___x_888_);
if (v___x_889_ == 0)
{
uint8_t v___x_890_; uint8_t v___x_891_; 
v___x_890_ = 61;
v___x_891_ = lean_uint8_dec_eq(v___y_860_, v___x_890_);
if (v___x_891_ == 0)
{
uint8_t v___x_892_; uint8_t v___x_893_; 
v___x_892_ = 58;
v___x_893_ = lean_uint8_dec_eq(v___y_860_, v___x_892_);
if (v___x_893_ == 0)
{
uint8_t v___x_894_; uint8_t v___x_895_; 
v___x_894_ = 64;
v___x_895_ = lean_uint8_dec_eq(v___y_860_, v___x_894_);
return v___x_895_;
}
else
{
return v___x_893_;
}
}
else
{
return v___x_891_;
}
}
else
{
return v___x_889_;
}
}
else
{
return v___x_887_;
}
}
else
{
return v___x_885_;
}
}
else
{
return v___x_883_;
}
}
else
{
return v___x_881_;
}
}
else
{
return v___x_879_;
}
}
else
{
return v___x_877_;
}
}
else
{
return v___x_875_;
}
}
else
{
return v___x_873_;
}
}
else
{
return v___x_871_;
}
}
else
{
return v___x_869_;
}
}
else
{
return v___x_867_;
}
}
else
{
return v___x_865_;
}
}
else
{
return v___x_863_;
}
}
v___jp_896_:
{
uint8_t v___x_897_; uint8_t v___x_898_; 
v___x_897_ = 65;
v___x_898_ = lean_uint8_dec_le(v___x_897_, v___y_860_);
if (v___x_898_ == 0)
{
goto v___jp_861_;
}
else
{
uint8_t v___x_899_; uint8_t v___x_900_; 
v___x_899_ = 90;
v___x_900_ = lean_uint8_dec_le(v___y_860_, v___x_899_);
if (v___x_900_ == 0)
{
goto v___jp_861_;
}
else
{
return v___x_900_;
}
}
}
v___jp_901_:
{
uint8_t v___x_902_; uint8_t v___x_903_; 
v___x_902_ = 97;
v___x_903_ = lean_uint8_dec_le(v___x_902_, v___y_860_);
if (v___x_903_ == 0)
{
goto v___jp_896_;
}
else
{
uint8_t v___x_904_; uint8_t v___x_905_; 
v___x_904_ = 122;
v___x_905_ = lean_uint8_dec_le(v___y_860_, v___x_904_);
if (v___x_905_ == 0)
{
goto v___jp_896_;
}
else
{
return v___x_905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed(lean_object* v___y_910_){
_start:
{
uint8_t v___y_174__boxed_911_; uint8_t v_res_912_; lean_object* v_r_913_; 
v___y_174__boxed_911_ = lean_unbox(v___y_910_);
v_res_912_ = l_Std_Http_URI_EncodedSegment_encode___lam__0(v___y_174__boxed_911_);
v_r_913_ = lean_box(v_res_912_);
return v_r_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object* v_s_915_){
_start:
{
lean_object* v___f_916_; lean_object* v___x_917_; 
v___f_916_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_917_ = l_Std_Http_URI_EncodedString_encode(v___f_916_, v_s_915_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object* v_ba_918_){
_start:
{
lean_object* v___f_919_; lean_object* v___x_920_; 
v___f_919_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_920_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_919_, v_ba_918_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x21(lean_object* v_ba_921_){
_start:
{
lean_object* v___f_922_; lean_object* v___x_923_; 
v___f_922_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_923_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_922_, v_ba_921_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object* v_segment_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Std_Http_URI_EncodedString_decode___redArg(v_segment_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode___boxed(lean_object* v_segment_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Std_Http_URI_EncodedSegment_decode(v_segment_926_);
lean_dec_ref(v_segment_926_);
return v_res_927_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedFragment_encode___lam__0(uint8_t v___y_928_){
_start:
{
uint8_t v___x_978_; uint8_t v___x_979_; 
v___x_978_ = 48;
v___x_979_ = lean_uint8_dec_le(v___x_978_, v___y_928_);
if (v___x_979_ == 0)
{
goto v___jp_973_;
}
else
{
uint8_t v___x_980_; uint8_t v___x_981_; 
v___x_980_ = 57;
v___x_981_ = lean_uint8_dec_le(v___y_928_, v___x_980_);
if (v___x_981_ == 0)
{
goto v___jp_973_;
}
else
{
return v___x_981_;
}
}
v___jp_929_:
{
uint8_t v___x_930_; uint8_t v___x_931_; 
v___x_930_ = 45;
v___x_931_ = lean_uint8_dec_eq(v___y_928_, v___x_930_);
if (v___x_931_ == 0)
{
uint8_t v___x_932_; uint8_t v___x_933_; 
v___x_932_ = 46;
v___x_933_ = lean_uint8_dec_eq(v___y_928_, v___x_932_);
if (v___x_933_ == 0)
{
uint8_t v___x_934_; uint8_t v___x_935_; 
v___x_934_ = 95;
v___x_935_ = lean_uint8_dec_eq(v___y_928_, v___x_934_);
if (v___x_935_ == 0)
{
uint8_t v___x_936_; uint8_t v___x_937_; 
v___x_936_ = 126;
v___x_937_ = lean_uint8_dec_eq(v___y_928_, v___x_936_);
if (v___x_937_ == 0)
{
uint8_t v___x_938_; uint8_t v___x_939_; 
v___x_938_ = 33;
v___x_939_ = lean_uint8_dec_eq(v___y_928_, v___x_938_);
if (v___x_939_ == 0)
{
uint8_t v___x_940_; uint8_t v___x_941_; 
v___x_940_ = 36;
v___x_941_ = lean_uint8_dec_eq(v___y_928_, v___x_940_);
if (v___x_941_ == 0)
{
uint8_t v___x_942_; uint8_t v___x_943_; 
v___x_942_ = 38;
v___x_943_ = lean_uint8_dec_eq(v___y_928_, v___x_942_);
if (v___x_943_ == 0)
{
uint8_t v___x_944_; uint8_t v___x_945_; 
v___x_944_ = 39;
v___x_945_ = lean_uint8_dec_eq(v___y_928_, v___x_944_);
if (v___x_945_ == 0)
{
uint8_t v___x_946_; uint8_t v___x_947_; 
v___x_946_ = 40;
v___x_947_ = lean_uint8_dec_eq(v___y_928_, v___x_946_);
if (v___x_947_ == 0)
{
uint8_t v___x_948_; uint8_t v___x_949_; 
v___x_948_ = 41;
v___x_949_ = lean_uint8_dec_eq(v___y_928_, v___x_948_);
if (v___x_949_ == 0)
{
uint8_t v___x_950_; uint8_t v___x_951_; 
v___x_950_ = 42;
v___x_951_ = lean_uint8_dec_eq(v___y_928_, v___x_950_);
if (v___x_951_ == 0)
{
uint8_t v___x_952_; uint8_t v___x_953_; 
v___x_952_ = 43;
v___x_953_ = lean_uint8_dec_eq(v___y_928_, v___x_952_);
if (v___x_953_ == 0)
{
uint8_t v___x_954_; uint8_t v___x_955_; 
v___x_954_ = 44;
v___x_955_ = lean_uint8_dec_eq(v___y_928_, v___x_954_);
if (v___x_955_ == 0)
{
uint8_t v___x_956_; uint8_t v___x_957_; 
v___x_956_ = 59;
v___x_957_ = lean_uint8_dec_eq(v___y_928_, v___x_956_);
if (v___x_957_ == 0)
{
uint8_t v___x_958_; uint8_t v___x_959_; 
v___x_958_ = 61;
v___x_959_ = lean_uint8_dec_eq(v___y_928_, v___x_958_);
if (v___x_959_ == 0)
{
uint8_t v___x_960_; uint8_t v___x_961_; 
v___x_960_ = 58;
v___x_961_ = lean_uint8_dec_eq(v___y_928_, v___x_960_);
if (v___x_961_ == 0)
{
uint8_t v___x_962_; uint8_t v___x_963_; 
v___x_962_ = 64;
v___x_963_ = lean_uint8_dec_eq(v___y_928_, v___x_962_);
if (v___x_963_ == 0)
{
uint8_t v___x_964_; uint8_t v___x_965_; 
v___x_964_ = 47;
v___x_965_ = lean_uint8_dec_eq(v___y_928_, v___x_964_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; uint8_t v___x_967_; 
v___x_966_ = 63;
v___x_967_ = lean_uint8_dec_eq(v___y_928_, v___x_966_);
return v___x_967_;
}
else
{
return v___x_965_;
}
}
else
{
return v___x_963_;
}
}
else
{
return v___x_961_;
}
}
else
{
return v___x_959_;
}
}
else
{
return v___x_957_;
}
}
else
{
return v___x_955_;
}
}
else
{
return v___x_953_;
}
}
else
{
return v___x_951_;
}
}
else
{
return v___x_949_;
}
}
else
{
return v___x_947_;
}
}
else
{
return v___x_945_;
}
}
else
{
return v___x_943_;
}
}
else
{
return v___x_941_;
}
}
else
{
return v___x_939_;
}
}
else
{
return v___x_937_;
}
}
else
{
return v___x_935_;
}
}
else
{
return v___x_933_;
}
}
else
{
return v___x_931_;
}
}
v___jp_968_:
{
uint8_t v___x_969_; uint8_t v___x_970_; 
v___x_969_ = 65;
v___x_970_ = lean_uint8_dec_le(v___x_969_, v___y_928_);
if (v___x_970_ == 0)
{
goto v___jp_929_;
}
else
{
uint8_t v___x_971_; uint8_t v___x_972_; 
v___x_971_ = 90;
v___x_972_ = lean_uint8_dec_le(v___y_928_, v___x_971_);
if (v___x_972_ == 0)
{
goto v___jp_929_;
}
else
{
return v___x_972_;
}
}
}
v___jp_973_:
{
uint8_t v___x_974_; uint8_t v___x_975_; 
v___x_974_ = 97;
v___x_975_ = lean_uint8_dec_le(v___x_974_, v___y_928_);
if (v___x_975_ == 0)
{
goto v___jp_968_;
}
else
{
uint8_t v___x_976_; uint8_t v___x_977_; 
v___x_976_ = 122;
v___x_977_ = lean_uint8_dec_le(v___y_928_, v___x_976_);
if (v___x_977_ == 0)
{
goto v___jp_968_;
}
else
{
return v___x_977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed(lean_object* v___y_982_){
_start:
{
uint8_t v___y_188__boxed_983_; uint8_t v_res_984_; lean_object* v_r_985_; 
v___y_188__boxed_983_ = lean_unbox(v___y_982_);
v_res_984_ = l_Std_Http_URI_EncodedFragment_encode___lam__0(v___y_188__boxed_983_);
v_r_985_ = lean_box(v_res_984_);
return v_r_985_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object* v_s_987_){
_start:
{
lean_object* v___f_988_; lean_object* v___x_989_; 
v___f_988_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_989_ = l_Std_Http_URI_EncodedString_encode(v___f_988_, v_s_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object* v_ba_990_){
_start:
{
lean_object* v___f_991_; lean_object* v___x_992_; 
v___f_991_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_992_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_991_, v_ba_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x21(lean_object* v_ba_993_){
_start:
{
lean_object* v___f_994_; lean_object* v___x_995_; 
v___f_994_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_995_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_994_, v_ba_993_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object* v_fragment_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Std_Http_URI_EncodedString_decode___redArg(v_fragment_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode___boxed(lean_object* v_fragment_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Std_Http_URI_EncodedFragment_decode(v_fragment_998_);
lean_dec_ref(v_fragment_998_);
return v_res_999_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedUserInfo_encode___lam__0(uint8_t v___y_1000_){
_start:
{
uint8_t v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = 48;
v___x_1045_ = lean_uint8_dec_le(v___x_1044_, v___y_1000_);
if (v___x_1045_ == 0)
{
goto v___jp_1039_;
}
else
{
uint8_t v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = 57;
v___x_1047_ = lean_uint8_dec_le(v___y_1000_, v___x_1046_);
if (v___x_1047_ == 0)
{
goto v___jp_1039_;
}
else
{
return v___x_1047_;
}
}
v___jp_1001_:
{
uint8_t v___x_1002_; uint8_t v___x_1003_; 
v___x_1002_ = 45;
v___x_1003_ = lean_uint8_dec_eq(v___y_1000_, v___x_1002_);
if (v___x_1003_ == 0)
{
uint8_t v___x_1004_; uint8_t v___x_1005_; 
v___x_1004_ = 46;
v___x_1005_ = lean_uint8_dec_eq(v___y_1000_, v___x_1004_);
if (v___x_1005_ == 0)
{
uint8_t v___x_1006_; uint8_t v___x_1007_; 
v___x_1006_ = 95;
v___x_1007_ = lean_uint8_dec_eq(v___y_1000_, v___x_1006_);
if (v___x_1007_ == 0)
{
uint8_t v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = 126;
v___x_1009_ = lean_uint8_dec_eq(v___y_1000_, v___x_1008_);
if (v___x_1009_ == 0)
{
uint8_t v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = 33;
v___x_1011_ = lean_uint8_dec_eq(v___y_1000_, v___x_1010_);
if (v___x_1011_ == 0)
{
uint8_t v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = 36;
v___x_1013_ = lean_uint8_dec_eq(v___y_1000_, v___x_1012_);
if (v___x_1013_ == 0)
{
uint8_t v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = 38;
v___x_1015_ = lean_uint8_dec_eq(v___y_1000_, v___x_1014_);
if (v___x_1015_ == 0)
{
uint8_t v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = 39;
v___x_1017_ = lean_uint8_dec_eq(v___y_1000_, v___x_1016_);
if (v___x_1017_ == 0)
{
uint8_t v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = 40;
v___x_1019_ = lean_uint8_dec_eq(v___y_1000_, v___x_1018_);
if (v___x_1019_ == 0)
{
uint8_t v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = 41;
v___x_1021_ = lean_uint8_dec_eq(v___y_1000_, v___x_1020_);
if (v___x_1021_ == 0)
{
uint8_t v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = 42;
v___x_1023_ = lean_uint8_dec_eq(v___y_1000_, v___x_1022_);
if (v___x_1023_ == 0)
{
uint8_t v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = 43;
v___x_1025_ = lean_uint8_dec_eq(v___y_1000_, v___x_1024_);
if (v___x_1025_ == 0)
{
uint8_t v___x_1026_; uint8_t v___x_1027_; 
v___x_1026_ = 44;
v___x_1027_ = lean_uint8_dec_eq(v___y_1000_, v___x_1026_);
if (v___x_1027_ == 0)
{
uint8_t v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = 59;
v___x_1029_ = lean_uint8_dec_eq(v___y_1000_, v___x_1028_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = 61;
v___x_1031_ = lean_uint8_dec_eq(v___y_1000_, v___x_1030_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = 58;
v___x_1033_ = lean_uint8_dec_eq(v___y_1000_, v___x_1032_);
return v___x_1033_;
}
else
{
return v___x_1031_;
}
}
else
{
return v___x_1029_;
}
}
else
{
return v___x_1027_;
}
}
else
{
return v___x_1025_;
}
}
else
{
return v___x_1023_;
}
}
else
{
return v___x_1021_;
}
}
else
{
return v___x_1019_;
}
}
else
{
return v___x_1017_;
}
}
else
{
return v___x_1015_;
}
}
else
{
return v___x_1013_;
}
}
else
{
return v___x_1011_;
}
}
else
{
return v___x_1009_;
}
}
else
{
return v___x_1007_;
}
}
else
{
return v___x_1005_;
}
}
else
{
return v___x_1003_;
}
}
v___jp_1034_:
{
uint8_t v___x_1035_; uint8_t v___x_1036_; 
v___x_1035_ = 65;
v___x_1036_ = lean_uint8_dec_le(v___x_1035_, v___y_1000_);
if (v___x_1036_ == 0)
{
goto v___jp_1001_;
}
else
{
uint8_t v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = 90;
v___x_1038_ = lean_uint8_dec_le(v___y_1000_, v___x_1037_);
if (v___x_1038_ == 0)
{
goto v___jp_1001_;
}
else
{
return v___x_1038_;
}
}
}
v___jp_1039_:
{
uint8_t v___x_1040_; uint8_t v___x_1041_; 
v___x_1040_ = 97;
v___x_1041_ = lean_uint8_dec_le(v___x_1040_, v___y_1000_);
if (v___x_1041_ == 0)
{
goto v___jp_1034_;
}
else
{
uint8_t v___x_1042_; uint8_t v___x_1043_; 
v___x_1042_ = 122;
v___x_1043_ = lean_uint8_dec_le(v___y_1000_, v___x_1042_);
if (v___x_1043_ == 0)
{
goto v___jp_1034_;
}
else
{
return v___x_1043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed(lean_object* v___y_1048_){
_start:
{
uint8_t v___y_167__boxed_1049_; uint8_t v_res_1050_; lean_object* v_r_1051_; 
v___y_167__boxed_1049_ = lean_unbox(v___y_1048_);
v_res_1050_ = l_Std_Http_URI_EncodedUserInfo_encode___lam__0(v___y_167__boxed_1049_);
v_r_1051_ = lean_box(v_res_1050_);
return v_r_1051_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object* v_s_1053_){
_start:
{
lean_object* v___f_1054_; lean_object* v___x_1055_; 
v___f_1054_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1055_ = l_Std_Http_URI_EncodedString_encode(v___f_1054_, v_s_1053_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object* v_ba_1056_){
_start:
{
lean_object* v___f_1057_; lean_object* v___x_1058_; 
v___f_1057_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1058_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_1057_, v_ba_1056_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x21(lean_object* v_ba_1059_){
_start:
{
lean_object* v___f_1060_; lean_object* v___x_1061_; 
v___f_1060_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1061_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_1060_, v_ba_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object* v_userInfo_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Std_Http_URI_EncodedString_decode___redArg(v_userInfo_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode___boxed(lean_object* v_userInfo_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Std_Http_URI_EncodedUserInfo_decode(v_userInfo_1064_);
lean_dec_ref(v_userInfo_1064_);
return v_res_1065_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_encode___lam__0(uint8_t v___y_1066_){
_start:
{
uint8_t v___y_1068_; uint8_t v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = 48;
v___x_1124_ = lean_uint8_dec_le(v___x_1123_, v___y_1066_);
if (v___x_1124_ == 0)
{
goto v___jp_1118_;
}
else
{
uint8_t v___x_1125_; uint8_t v___x_1126_; 
v___x_1125_ = 57;
v___x_1126_ = lean_uint8_dec_le(v___y_1066_, v___x_1125_);
if (v___x_1126_ == 0)
{
goto v___jp_1118_;
}
else
{
v___y_1068_ = v___x_1126_;
goto v___jp_1067_;
}
}
v___jp_1067_:
{
uint8_t v___x_1069_; uint8_t v___x_1070_; 
v___x_1069_ = 38;
v___x_1070_ = lean_uint8_dec_eq(v___y_1066_, v___x_1069_);
if (v___x_1070_ == 0)
{
if (v___y_1068_ == 0)
{
return v___y_1068_;
}
else
{
uint8_t v___x_1071_; uint8_t v___x_1072_; 
v___x_1071_ = 61;
v___x_1072_ = lean_uint8_dec_eq(v___y_1066_, v___x_1071_);
if (v___x_1072_ == 0)
{
return v___y_1068_;
}
else
{
return v___x_1070_;
}
}
}
else
{
uint8_t v___x_1073_; 
v___x_1073_ = 0;
return v___x_1073_;
}
}
v___jp_1074_:
{
uint8_t v___x_1075_; uint8_t v___x_1076_; 
v___x_1075_ = 45;
v___x_1076_ = lean_uint8_dec_eq(v___y_1066_, v___x_1075_);
if (v___x_1076_ == 0)
{
uint8_t v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = 46;
v___x_1078_ = lean_uint8_dec_eq(v___y_1066_, v___x_1077_);
if (v___x_1078_ == 0)
{
uint8_t v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = 95;
v___x_1080_ = lean_uint8_dec_eq(v___y_1066_, v___x_1079_);
if (v___x_1080_ == 0)
{
uint8_t v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = 126;
v___x_1082_ = lean_uint8_dec_eq(v___y_1066_, v___x_1081_);
if (v___x_1082_ == 0)
{
uint8_t v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = 33;
v___x_1084_ = lean_uint8_dec_eq(v___y_1066_, v___x_1083_);
if (v___x_1084_ == 0)
{
uint8_t v___x_1085_; uint8_t v___x_1086_; 
v___x_1085_ = 36;
v___x_1086_ = lean_uint8_dec_eq(v___y_1066_, v___x_1085_);
if (v___x_1086_ == 0)
{
uint8_t v___x_1087_; uint8_t v___x_1088_; 
v___x_1087_ = 38;
v___x_1088_ = lean_uint8_dec_eq(v___y_1066_, v___x_1087_);
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; uint8_t v___x_1090_; 
v___x_1089_ = 39;
v___x_1090_ = lean_uint8_dec_eq(v___y_1066_, v___x_1089_);
if (v___x_1090_ == 0)
{
uint8_t v___x_1091_; uint8_t v___x_1092_; 
v___x_1091_ = 40;
v___x_1092_ = lean_uint8_dec_eq(v___y_1066_, v___x_1091_);
if (v___x_1092_ == 0)
{
uint8_t v___x_1093_; uint8_t v___x_1094_; 
v___x_1093_ = 41;
v___x_1094_ = lean_uint8_dec_eq(v___y_1066_, v___x_1093_);
if (v___x_1094_ == 0)
{
uint8_t v___x_1095_; uint8_t v___x_1096_; 
v___x_1095_ = 42;
v___x_1096_ = lean_uint8_dec_eq(v___y_1066_, v___x_1095_);
if (v___x_1096_ == 0)
{
uint8_t v___x_1097_; uint8_t v___x_1098_; 
v___x_1097_ = 43;
v___x_1098_ = lean_uint8_dec_eq(v___y_1066_, v___x_1097_);
if (v___x_1098_ == 0)
{
uint8_t v___x_1099_; uint8_t v___x_1100_; 
v___x_1099_ = 44;
v___x_1100_ = lean_uint8_dec_eq(v___y_1066_, v___x_1099_);
if (v___x_1100_ == 0)
{
uint8_t v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = 59;
v___x_1102_ = lean_uint8_dec_eq(v___y_1066_, v___x_1101_);
if (v___x_1102_ == 0)
{
uint8_t v___x_1103_; uint8_t v___x_1104_; 
v___x_1103_ = 61;
v___x_1104_ = lean_uint8_dec_eq(v___y_1066_, v___x_1103_);
if (v___x_1104_ == 0)
{
uint8_t v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = 58;
v___x_1106_ = lean_uint8_dec_eq(v___y_1066_, v___x_1105_);
if (v___x_1106_ == 0)
{
uint8_t v___x_1107_; uint8_t v___x_1108_; 
v___x_1107_ = 64;
v___x_1108_ = lean_uint8_dec_eq(v___y_1066_, v___x_1107_);
if (v___x_1108_ == 0)
{
uint8_t v___x_1109_; uint8_t v___x_1110_; 
v___x_1109_ = 47;
v___x_1110_ = lean_uint8_dec_eq(v___y_1066_, v___x_1109_);
if (v___x_1110_ == 0)
{
uint8_t v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = 63;
v___x_1112_ = lean_uint8_dec_eq(v___y_1066_, v___x_1111_);
if (v___x_1112_ == 0)
{
return v___x_1112_;
}
else
{
v___y_1068_ = v___x_1112_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1110_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1108_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1106_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1104_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1102_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1100_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1098_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1096_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1094_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1092_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1090_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1088_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1086_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1084_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1082_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1080_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1078_;
goto v___jp_1067_;
}
}
else
{
v___y_1068_ = v___x_1076_;
goto v___jp_1067_;
}
}
v___jp_1113_:
{
uint8_t v___x_1114_; uint8_t v___x_1115_; 
v___x_1114_ = 65;
v___x_1115_ = lean_uint8_dec_le(v___x_1114_, v___y_1066_);
if (v___x_1115_ == 0)
{
goto v___jp_1074_;
}
else
{
uint8_t v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = 90;
v___x_1117_ = lean_uint8_dec_le(v___y_1066_, v___x_1116_);
if (v___x_1117_ == 0)
{
goto v___jp_1074_;
}
else
{
v___y_1068_ = v___x_1117_;
goto v___jp_1067_;
}
}
}
v___jp_1118_:
{
uint8_t v___x_1119_; uint8_t v___x_1120_; 
v___x_1119_ = 97;
v___x_1120_ = lean_uint8_dec_le(v___x_1119_, v___y_1066_);
if (v___x_1120_ == 0)
{
goto v___jp_1113_;
}
else
{
uint8_t v___x_1121_; uint8_t v___x_1122_; 
v___x_1121_ = 122;
v___x_1122_ = lean_uint8_dec_le(v___y_1066_, v___x_1121_);
if (v___x_1122_ == 0)
{
goto v___jp_1113_;
}
else
{
v___y_1068_ = v___x_1122_;
goto v___jp_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed(lean_object* v___y_1127_){
_start:
{
uint8_t v___y_208__boxed_1128_; uint8_t v_res_1129_; lean_object* v_r_1130_; 
v___y_208__boxed_1128_ = lean_unbox(v___y_1127_);
v_res_1129_ = l_Std_Http_URI_EncodedQueryParam_encode___lam__0(v___y_208__boxed_1128_);
v_r_1130_ = lean_box(v_res_1129_);
return v_r_1130_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object* v_s_1132_){
_start:
{
lean_object* v___f_1133_; lean_object* v___x_1134_; 
v___f_1133_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_encode___closed__0));
v___x_1134_ = l_Std_Http_URI_EncodedQueryString_encode(v_s_1132_, v___f_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f(lean_object* v_ba_1135_){
_start:
{
lean_object* v___f_1136_; lean_object* v___x_1137_; 
v___f_1136_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_encode___closed__0));
v___x_1137_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v_ba_1135_, v___f_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x21(lean_object* v_ba_1138_){
_start:
{
lean_object* v___f_1139_; lean_object* v___x_1140_; 
v___f_1139_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_encode___closed__0));
v___x_1140_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(v_ba_1138_, v___f_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object* v_s_1141_){
_start:
{
lean_object* v___f_1142_; lean_object* v___x_1143_; 
v___f_1142_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_encode___closed__0));
v___x_1143_ = l_Std_Http_URI_EncodedQueryString_ofString_x3f(v_s_1141_, v___f_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object* v_param_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_param_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode___boxed(lean_object* v_param_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Std_Http_URI_EncodedQueryParam_decode(v_param_1146_);
lean_dec_ref(v_param_1146_);
return v_res_1147_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal_Char(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Internal_Char(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Encoding(builtin);
}
#ifdef __cplusplus
}
#endif
