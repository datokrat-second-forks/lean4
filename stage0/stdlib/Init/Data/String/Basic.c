// Lean compiler output
// Module: Init.Data.String.Basic
// Imports: public import Init.Data.String.Decode public import Init.Data.String.Defs import Init.Data.ByteArray.Lemmas import Init.Data.Char.Lemmas public import Init.Data.Char.Basic import Init.ByCases import Init.Data.Array.Bootstrap import Init.Data.Array.Lemmas import Init.Data.List.Nat.TakeDrop import Init.Data.List.Sublist import Init.Data.List.TakeDrop import Init.Data.Option.Lemmas import Init.Omega
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t l_UInt8_isUTF8FirstByte(uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_ByteArray_utf8Decode_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_ByteArray_utf8Decode_x3f___closed__0 = (const lean_object*)&l_ByteArray_utf8Decode_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIsValidUTF8(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableIsValidUTF8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_fromUTF8_x3f(lean_object*);
static const lean_string_object l_String_fromUTF8_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_fromUTF8_x21___closed__0 = (const lean_object*)&l_String_fromUTF8_x21___closed__0_value;
static const lean_string_object l_String_fromUTF8_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_String_fromUTF8_x21___closed__1 = (const lean_object*)&l_String_fromUTF8_x21___closed__1_value;
static const lean_string_object l_String_fromUTF8_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_String_fromUTF8_x21___closed__2 = (const lean_object*)&l_String_fromUTF8_x21___closed__2_value;
static const lean_string_object l_String_fromUTF8_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_String_fromUTF8_x21___closed__3 = (const lean_object*)&l_String_fromUTF8_x21___closed__3_value;
static lean_once_cell_t l_String_fromUTF8_x21___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_fromUTF8_x21___closed__4;
LEAN_EXPORT lean_object* l_String_fromUTF8_x21(lean_object*);
LEAN_EXPORT lean_object* l_String_Internal_toArray(lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValid___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsValid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsValid___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_copy(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_copy___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_Raw_isValidForSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValidForSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsValidForSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsValidForSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_str___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStart___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceTo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_slice_x21_spec__0(lean_object*);
static const lean_string_object l_String_Slice_slice_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "String.Slice.slice!"};
static const lean_object* l_String_Slice_slice_x21___closed__0 = (const lean_object*)&l_String_Slice_slice_x21___closed__0_value;
static const lean_string_object l_String_Slice_slice_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Starting position must be less than or equal to end position."};
static const lean_object* l_String_Slice_slice_x21___closed__1 = (const lean_object*)&l_String_Slice_slice_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_slice_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_slice_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decodeChar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_Pos_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_Pos_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1;
LEAN_EXPORT uint32_t l_panic___at___00String_Slice_Pos_get_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed(lean_object*);
static const lean_string_object l_String_Slice_Pos_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "String.Slice.Pos.get!"};
static const lean_object* l_String_Slice_Pos_get_x21___closed__0 = (const lean_object*)&l_String_Slice_Pos_get_x21___closed__0_value;
static const lean_string_object l_String_Slice_Pos_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Cannot retrieve character at end position"};
static const lean_object* l_String_Slice_Pos_get_x21___closed__1 = (const lean_object*)&l_String_Slice_Pos_get_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_get_x21___closed__2;
LEAN_EXPORT uint32_t l_String_Slice_Pos_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_byte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_byte___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_byte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_byte___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_next_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "String.Slice.Pos.next!"};
static const lean_object* l_String_Slice_Pos_next_x21___closed__0 = (const lean_object*)&l_String_Slice_Pos_next_x21___closed__0_value;
static const lean_string_object l_String_Slice_Pos_next_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Cannot advance the end position"};
static const lean_object* l_String_Slice_Pos_next_x21___closed__1 = (const lean_object*)&l_String_Slice_Pos_next_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_next_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_next_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_pos_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "String.Slice.pos!"};
static const lean_object* l_String_Slice_pos_x21___closed__0 = (const lean_object*)&l_String_Slice_pos_x21___closed__0_value;
static const lean_string_object l_String_Slice_pos_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Offset is not at a valid UTF-8 character boundary"};
static const lean_object* l_String_Slice_pos_x21___closed__1 = (const lean_object*)&l_String_Slice_pos_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_pos_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_pos_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x21___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_pos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_Raw_utf8GetAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_utf8GetAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_get_opt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_get_opt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x3f___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_bang(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x21___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_bang(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8SetAux(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8SetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_sliceTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_sliceFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_sliceOrPanic___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "String.Slice.Pos.sliceOrPanic"};
static const lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_sliceOrPanic___redArg___closed__0_value;
static const lean_string_object l_String_Slice_Pos_sliceOrPanic___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Position is outside of the bounds of the slice."};
static const lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__1 = (const lean_object*)&l_String_Slice_Pos_sliceOrPanic___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_ofSlice_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "String.Slice.Pos.ofSlice!"};
static const lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_ofSlice_x21___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_slice_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "String.Slice.Pos.slice!"};
static const lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_slice_x21___redArg___closed__0_value;
static const lean_string_object l_String_Slice_Pos_slice_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "Starting position must be less than or equal to end position and position must be between starting position and end position."};
static const lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__1 = (const lean_object*)&l_String_Slice_Pos_slice_x21___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_slice_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_next___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8PrevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8PrevAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_prev___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_prev___boxed(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_atEnd___boxed(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_atEnd___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x27___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x27___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_next_x27___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_next_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_offsetOfPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_offsetOfPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_string_offsetofpos(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_Raw_substrEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_substrEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_substrEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_substrEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg(lean_object* v_b_1_, lean_object* v_i_2_, lean_object* v_acc_3_){
_start:
{
uint32_t v___y_5_; lean_object* v___y_6_; uint32_t v_val_12_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lean_byte_array_size(v_b_1_);
v___x_24_ = lean_nat_dec_lt(v_i_2_, v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; 
lean_dec(v_i_2_);
v___x_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_25_, 0, v_acc_3_);
return v___x_25_;
}
else
{
uint8_t v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; uint8_t v___x_29_; uint8_t v___x_30_; 
v___x_26_ = lean_byte_array_fget(v_b_1_, v_i_2_);
v___x_27_ = 128;
v___x_28_ = lean_uint8_land(v___x_26_, v___x_27_);
v___x_29_ = 0;
v___x_30_ = lean_uint8_dec_eq(v___x_28_, v___x_29_);
if (v___x_30_ == 0)
{
uint8_t v___x_31_; uint8_t v___x_32_; uint8_t v___x_33_; uint8_t v___x_34_; 
v___x_31_ = 224;
v___x_32_ = lean_uint8_land(v___x_26_, v___x_31_);
v___x_33_ = 192;
v___x_34_ = lean_uint8_dec_eq(v___x_32_, v___x_33_);
if (v___x_34_ == 0)
{
uint8_t v___x_35_; uint8_t v___x_36_; uint8_t v___x_37_; 
v___x_35_ = 240;
v___x_36_ = lean_uint8_land(v___x_26_, v___x_35_);
v___x_37_ = lean_uint8_dec_eq(v___x_36_, v___x_31_);
if (v___x_37_ == 0)
{
uint8_t v___x_38_; uint8_t v___x_39_; uint8_t v___x_40_; 
v___x_38_ = 248;
v___x_39_ = lean_uint8_land(v___x_26_, v___x_38_);
v___x_40_ = lean_uint8_dec_eq(v___x_39_, v___x_35_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_41_ = lean_box(0);
return v___x_41_;
}
else
{
lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_42_ = lean_unsigned_to_nat(3u);
v___x_43_ = lean_nat_add(v_i_2_, v___x_42_);
v___x_44_ = lean_nat_dec_lt(v___x_43_, v___x_23_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; 
lean_dec(v___x_43_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; uint8_t v___x_49_; uint8_t v___x_50_; 
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = lean_nat_add(v_i_2_, v___x_46_);
v___x_48_ = lean_byte_array_fget(v_b_1_, v___x_47_);
lean_dec(v___x_47_);
v___x_49_ = lean_uint8_land(v___x_48_, v___x_33_);
v___x_50_ = lean_uint8_dec_eq(v___x_49_, v___x_27_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; 
lean_dec(v___x_43_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_51_ = lean_box(0);
return v___x_51_;
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; uint8_t v___x_55_; uint8_t v___x_56_; 
v___x_52_ = lean_unsigned_to_nat(2u);
v___x_53_ = lean_nat_add(v_i_2_, v___x_52_);
v___x_54_ = lean_byte_array_fget(v_b_1_, v___x_53_);
lean_dec(v___x_53_);
v___x_55_ = lean_uint8_land(v___x_54_, v___x_33_);
v___x_56_ = lean_uint8_dec_eq(v___x_55_, v___x_27_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; 
lean_dec(v___x_43_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_57_ = lean_box(0);
return v___x_57_;
}
else
{
uint8_t v___x_58_; uint8_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = lean_byte_array_fget(v_b_1_, v___x_43_);
lean_dec(v___x_43_);
v___x_59_ = lean_uint8_land(v___x_58_, v___x_33_);
v___x_60_ = lean_uint8_dec_eq(v___x_59_, v___x_27_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_61_ = lean_box(0);
return v___x_61_;
}
else
{
uint8_t v___x_62_; uint8_t v_b_u2080_63_; uint8_t v___x_64_; uint8_t v_b_u2081_65_; uint8_t v_b_u2082_66_; uint8_t v_b_u2083_67_; uint32_t v___x_68_; uint32_t v___x_69_; uint32_t v___x_70_; uint32_t v___x_71_; uint32_t v___x_72_; uint32_t v___x_73_; uint32_t v___x_74_; uint32_t v___x_75_; uint32_t v___x_76_; uint32_t v___x_77_; uint32_t v___x_78_; uint32_t v___x_79_; uint32_t v_r_80_; uint32_t v___x_81_; uint8_t v___x_82_; 
v___x_62_ = 7;
v_b_u2080_63_ = lean_uint8_land(v___x_26_, v___x_62_);
v___x_64_ = 63;
v_b_u2081_65_ = lean_uint8_land(v___x_48_, v___x_64_);
v_b_u2082_66_ = lean_uint8_land(v___x_54_, v___x_64_);
v_b_u2083_67_ = lean_uint8_land(v___x_58_, v___x_64_);
v___x_68_ = lean_uint8_to_uint32(v_b_u2080_63_);
v___x_69_ = 18;
v___x_70_ = lean_uint32_shift_left(v___x_68_, v___x_69_);
v___x_71_ = lean_uint8_to_uint32(v_b_u2081_65_);
v___x_72_ = 12;
v___x_73_ = lean_uint32_shift_left(v___x_71_, v___x_72_);
v___x_74_ = lean_uint32_lor(v___x_70_, v___x_73_);
v___x_75_ = lean_uint8_to_uint32(v_b_u2082_66_);
v___x_76_ = 6;
v___x_77_ = lean_uint32_shift_left(v___x_75_, v___x_76_);
v___x_78_ = lean_uint32_lor(v___x_74_, v___x_77_);
v___x_79_ = lean_uint8_to_uint32(v_b_u2083_67_);
v_r_80_ = lean_uint32_lor(v___x_78_, v___x_79_);
v___x_81_ = 65536;
v___x_82_ = lean_uint32_dec_lt(v_r_80_, v___x_81_);
if (v___x_82_ == 0)
{
uint32_t v___x_83_; uint8_t v___x_84_; 
v___x_83_ = 1114111;
v___x_84_ = lean_uint32_dec_lt(v___x_83_, v_r_80_);
if (v___x_84_ == 0)
{
v_val_12_ = v_r_80_;
goto v___jp_11_;
}
else
{
lean_object* v___x_85_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_85_ = lean_box(0);
return v___x_85_;
}
}
else
{
lean_object* v___x_86_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_87_ = lean_unsigned_to_nat(2u);
v___x_88_ = lean_nat_add(v_i_2_, v___x_87_);
v___x_89_ = lean_nat_dec_lt(v___x_88_, v___x_23_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; 
lean_dec(v___x_88_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_90_ = lean_box(0);
return v___x_90_;
}
else
{
lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_add(v_i_2_, v___x_91_);
v___x_93_ = lean_byte_array_fget(v_b_1_, v___x_92_);
lean_dec(v___x_92_);
v___x_94_ = lean_uint8_land(v___x_93_, v___x_33_);
v___x_95_ = lean_uint8_dec_eq(v___x_94_, v___x_27_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
lean_dec(v___x_88_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
else
{
uint8_t v___x_97_; uint8_t v___x_98_; uint8_t v___x_99_; 
v___x_97_ = lean_byte_array_fget(v_b_1_, v___x_88_);
lean_dec(v___x_88_);
v___x_98_ = lean_uint8_land(v___x_97_, v___x_33_);
v___x_99_ = lean_uint8_dec_eq(v___x_98_, v___x_27_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
else
{
uint8_t v___x_101_; uint8_t v_b_u2080_102_; uint8_t v___x_103_; uint8_t v_b_u2081_104_; uint8_t v_b_u2082_105_; uint32_t v___x_106_; uint32_t v___x_107_; uint32_t v___x_108_; uint32_t v___x_109_; uint32_t v___x_110_; uint32_t v___x_111_; uint32_t v___x_112_; uint32_t v___x_113_; uint32_t v_r_114_; uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_101_ = 15;
v_b_u2080_102_ = lean_uint8_land(v___x_26_, v___x_101_);
v___x_103_ = 63;
v_b_u2081_104_ = lean_uint8_land(v___x_93_, v___x_103_);
v_b_u2082_105_ = lean_uint8_land(v___x_97_, v___x_103_);
v___x_106_ = lean_uint8_to_uint32(v_b_u2080_102_);
v___x_107_ = 12;
v___x_108_ = lean_uint32_shift_left(v___x_106_, v___x_107_);
v___x_109_ = lean_uint8_to_uint32(v_b_u2081_104_);
v___x_110_ = 6;
v___x_111_ = lean_uint32_shift_left(v___x_109_, v___x_110_);
v___x_112_ = lean_uint32_lor(v___x_108_, v___x_111_);
v___x_113_ = lean_uint8_to_uint32(v_b_u2082_105_);
v_r_114_ = lean_uint32_lor(v___x_112_, v___x_113_);
v___x_115_ = 2048;
v___x_116_ = lean_uint32_dec_lt(v_r_114_, v___x_115_);
if (v___x_116_ == 0)
{
uint32_t v___x_117_; uint8_t v___x_118_; 
v___x_117_ = 55296;
v___x_118_ = lean_uint32_dec_le(v___x_117_, v_r_114_);
if (v___x_118_ == 0)
{
v_val_12_ = v_r_114_;
goto v___jp_11_;
}
else
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 57343;
v___x_120_ = lean_uint32_dec_le(v_r_114_, v___x_119_);
if (v___x_120_ == 0)
{
v_val_12_ = v_r_114_;
goto v___jp_11_;
}
else
{
lean_object* v___x_121_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_121_ = lean_box(0);
return v___x_121_;
}
}
}
else
{
lean_object* v___x_122_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
}
}
}
}
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_nat_add(v_i_2_, v___x_123_);
v___x_125_ = lean_nat_dec_lt(v___x_124_, v___x_23_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; 
lean_dec(v___x_124_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_126_ = lean_box(0);
return v___x_126_;
}
else
{
uint8_t v___x_127_; uint8_t v___x_128_; uint8_t v___x_129_; 
v___x_127_ = lean_byte_array_fget(v_b_1_, v___x_124_);
lean_dec(v___x_124_);
v___x_128_ = lean_uint8_land(v___x_127_, v___x_33_);
v___x_129_ = lean_uint8_dec_eq(v___x_128_, v___x_27_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_130_ = lean_box(0);
return v___x_130_;
}
else
{
uint8_t v___x_131_; uint8_t v_b_u2080_132_; uint8_t v___x_133_; uint8_t v_b_u2081_134_; uint32_t v___x_135_; uint32_t v___x_136_; uint32_t v___x_137_; uint32_t v___x_138_; uint32_t v_r_139_; uint32_t v___x_140_; uint8_t v___x_141_; 
v___x_131_ = 31;
v_b_u2080_132_ = lean_uint8_land(v___x_26_, v___x_131_);
v___x_133_ = 63;
v_b_u2081_134_ = lean_uint8_land(v___x_127_, v___x_133_);
v___x_135_ = lean_uint8_to_uint32(v_b_u2080_132_);
v___x_136_ = 6;
v___x_137_ = lean_uint32_shift_left(v___x_135_, v___x_136_);
v___x_138_ = lean_uint8_to_uint32(v_b_u2081_134_);
v_r_139_ = lean_uint32_lor(v___x_137_, v___x_138_);
v___x_140_ = 128;
v___x_141_ = lean_uint32_dec_lt(v_r_139_, v___x_140_);
if (v___x_141_ == 0)
{
v_val_12_ = v_r_139_;
goto v___jp_11_;
}
else
{
lean_object* v___x_142_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_142_ = lean_box(0);
return v___x_142_;
}
}
}
}
}
else
{
uint32_t v___x_143_; 
v___x_143_ = lean_uint8_to_uint32(v___x_26_);
v_val_12_ = v___x_143_;
goto v___jp_11_;
}
}
v___jp_4_:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_nat_add(v_i_2_, v___y_6_);
lean_dec(v_i_2_);
v___x_8_ = lean_box_uint32(v___y_5_);
v___x_9_ = lean_array_push(v_acc_3_, v___x_8_);
v_i_2_ = v___x_7_;
v_acc_3_ = v___x_9_;
goto _start;
}
v___jp_11_:
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 127;
v___x_14_ = lean_uint32_dec_le(v_val_12_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 2047;
v___x_16_ = lean_uint32_dec_le(v_val_12_, v___x_15_);
if (v___x_16_ == 0)
{
uint32_t v___x_17_; uint8_t v___x_18_; 
v___x_17_ = 65535;
v___x_18_ = lean_uint32_dec_le(v_val_12_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(4u);
v___y_5_ = v_val_12_;
v___y_6_ = v___x_19_;
goto v___jp_4_;
}
else
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(3u);
v___y_5_ = v_val_12_;
v___y_6_ = v___x_20_;
goto v___jp_4_;
}
}
else
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(2u);
v___y_5_ = v_val_12_;
v___y_6_ = v___x_21_;
goto v___jp_4_;
}
}
else
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(1u);
v___y_5_ = v_val_12_;
v___y_6_ = v___x_22_;
goto v___jp_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg___boxed(lean_object* v_b_144_, lean_object* v_i_145_, lean_object* v_acc_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_144_, v_i_145_, v_acc_146_);
lean_dec_ref(v_b_144_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go(lean_object* v_b_148_, lean_object* v_i_149_, lean_object* v_acc_150_, lean_object* v_hi_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_148_, v_i_149_, v_acc_150_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___boxed(lean_object* v_b_153_, lean_object* v_i_154_, lean_object* v_acc_155_, lean_object* v_hi_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_ByteArray_utf8Decode_x3f_go(v_b_153_, v_i_154_, v_acc_155_, v_hi_156_);
lean_dec_ref(v_b_153_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter___redArg(lean_object* v_x_158_, lean_object* v_h__1_159_, lean_object* v_h__2_160_){
_start:
{
if (lean_obj_tag(v_x_158_) == 0)
{
lean_object* v___x_161_; 
lean_dec(v_h__2_160_);
v___x_161_ = lean_apply_1(v_h__1_159_, lean_box(0));
return v___x_161_;
}
else
{
lean_object* v_val_162_; lean_object* v___x_163_; 
lean_dec(v_h__1_159_);
v_val_162_ = lean_ctor_get(v_x_158_, 0);
lean_inc(v_val_162_);
lean_dec_ref_known(v_x_158_, 1);
v___x_163_ = lean_apply_2(v_h__2_160_, v_val_162_, lean_box(0));
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter(lean_object* v_motive_164_, lean_object* v_x_165_, lean_object* v_h__1_166_, lean_object* v_h__2_167_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
lean_object* v___x_168_; 
lean_dec(v_h__2_167_);
v___x_168_ = lean_apply_1(v_h__1_166_, lean_box(0));
return v___x_168_;
}
else
{
lean_object* v_val_169_; lean_object* v___x_170_; 
lean_dec(v_h__1_166_);
v_val_169_ = lean_ctor_get(v_x_165_, 0);
lean_inc(v_val_169_);
lean_dec_ref_known(v_x_165_, 1);
v___x_170_ = lean_apply_2(v_h__2_167_, v_val_169_, lean_box(0));
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f(lean_object* v_b_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = ((lean_object*)(l_ByteArray_utf8Decode_x3f___closed__0));
v___x_176_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_173_, v___x_174_, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f___boxed(lean_object* v_b_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_ByteArray_utf8Decode_x3f(v_b_177_);
lean_dec_ref(v_b_177_);
return v_res_178_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go___redArg(lean_object* v_b_179_, lean_object* v_i_180_){
_start:
{
lean_object* v___y_182_; uint8_t v___y_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = lean_byte_array_size(v_b_179_);
v___x_205_ = lean_nat_dec_lt(v_i_180_, v___x_204_);
if (v___x_205_ == 0)
{
uint8_t v___x_206_; 
lean_dec(v_i_180_);
v___x_206_ = 1;
return v___x_206_;
}
else
{
uint8_t v___x_207_; uint8_t v___x_208_; uint8_t v___x_209_; uint8_t v___x_210_; uint8_t v___x_211_; 
v___x_207_ = lean_byte_array_fget(v_b_179_, v_i_180_);
v___x_208_ = 128;
v___x_209_ = lean_uint8_land(v___x_207_, v___x_208_);
v___x_210_ = 0;
v___x_211_ = lean_uint8_dec_eq(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
uint8_t v___x_212_; uint8_t v___x_213_; uint8_t v___x_214_; uint8_t v___x_215_; 
v___x_212_ = 224;
v___x_213_ = lean_uint8_land(v___x_207_, v___x_212_);
v___x_214_ = 192;
v___x_215_ = lean_uint8_dec_eq(v___x_213_, v___x_214_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; uint8_t v___x_217_; uint8_t v___x_218_; 
v___x_216_ = 240;
v___x_217_ = lean_uint8_land(v___x_207_, v___x_216_);
v___x_218_ = lean_uint8_dec_eq(v___x_217_, v___x_212_);
if (v___x_218_ == 0)
{
uint8_t v___x_219_; uint8_t v___x_220_; uint8_t v___x_221_; 
v___x_219_ = 248;
v___x_220_ = lean_uint8_land(v___x_207_, v___x_219_);
v___x_221_ = lean_uint8_dec_eq(v___x_220_, v___x_216_);
if (v___x_221_ == 0)
{
lean_dec(v_i_180_);
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_222_ = lean_unsigned_to_nat(3u);
v___x_223_ = lean_nat_add(v_i_180_, v___x_222_);
v___x_224_ = lean_nat_dec_lt(v___x_223_, v___x_204_);
if (v___x_224_ == 0)
{
lean_dec(v___x_223_);
lean_dec(v_i_180_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; uint8_t v___x_228_; uint8_t v___x_229_; 
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_add(v_i_180_, v___x_225_);
v___x_227_ = lean_byte_array_fget(v_b_179_, v___x_226_);
lean_dec(v___x_226_);
v___x_228_ = lean_uint8_land(v___x_227_, v___x_214_);
v___x_229_ = lean_uint8_dec_eq(v___x_228_, v___x_208_);
if (v___x_229_ == 0)
{
lean_dec(v___x_223_);
lean_dec(v_i_180_);
return v___x_229_;
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; uint8_t v___x_233_; uint8_t v___x_234_; 
v___x_230_ = lean_unsigned_to_nat(2u);
v___x_231_ = lean_nat_add(v_i_180_, v___x_230_);
v___x_232_ = lean_byte_array_fget(v_b_179_, v___x_231_);
lean_dec(v___x_231_);
v___x_233_ = lean_uint8_land(v___x_232_, v___x_214_);
v___x_234_ = lean_uint8_dec_eq(v___x_233_, v___x_208_);
if (v___x_234_ == 0)
{
lean_dec(v___x_223_);
lean_dec(v_i_180_);
return v___x_218_;
}
else
{
uint8_t v___x_235_; uint8_t v___x_236_; uint8_t v___x_237_; 
v___x_235_ = lean_byte_array_fget(v_b_179_, v___x_223_);
lean_dec(v___x_223_);
v___x_236_ = lean_uint8_land(v___x_235_, v___x_214_);
v___x_237_ = lean_uint8_dec_eq(v___x_236_, v___x_208_);
if (v___x_237_ == 0)
{
lean_dec(v_i_180_);
return v___x_218_;
}
else
{
uint8_t v___x_238_; uint8_t v_b_u2080_239_; uint8_t v___x_240_; uint8_t v_b_u2081_241_; uint8_t v_b_u2082_242_; uint8_t v_b_u2083_243_; uint32_t v___x_244_; uint32_t v___x_245_; uint32_t v___x_246_; uint32_t v___x_247_; uint32_t v___x_248_; uint32_t v___x_249_; uint32_t v___x_250_; uint32_t v___x_251_; uint32_t v___x_252_; uint32_t v___x_253_; uint32_t v___x_254_; uint32_t v___x_255_; uint32_t v_r_256_; uint32_t v___x_257_; uint8_t v___x_258_; 
v___x_238_ = 7;
v_b_u2080_239_ = lean_uint8_land(v___x_207_, v___x_238_);
v___x_240_ = 63;
v_b_u2081_241_ = lean_uint8_land(v___x_227_, v___x_240_);
v_b_u2082_242_ = lean_uint8_land(v___x_232_, v___x_240_);
v_b_u2083_243_ = lean_uint8_land(v___x_235_, v___x_240_);
v___x_244_ = lean_uint8_to_uint32(v_b_u2080_239_);
v___x_245_ = 18;
v___x_246_ = lean_uint32_shift_left(v___x_244_, v___x_245_);
v___x_247_ = lean_uint8_to_uint32(v_b_u2081_241_);
v___x_248_ = 12;
v___x_249_ = lean_uint32_shift_left(v___x_247_, v___x_248_);
v___x_250_ = lean_uint32_lor(v___x_246_, v___x_249_);
v___x_251_ = lean_uint8_to_uint32(v_b_u2082_242_);
v___x_252_ = 6;
v___x_253_ = lean_uint32_shift_left(v___x_251_, v___x_252_);
v___x_254_ = lean_uint32_lor(v___x_250_, v___x_253_);
v___x_255_ = lean_uint8_to_uint32(v_b_u2083_243_);
v_r_256_ = lean_uint32_lor(v___x_254_, v___x_255_);
v___x_257_ = 65536;
v___x_258_ = lean_uint32_dec_le(v___x_257_, v_r_256_);
if (v___x_258_ == 0)
{
lean_dec(v_i_180_);
return v___x_258_;
}
else
{
uint32_t v___x_259_; uint8_t v___x_260_; 
v___x_259_ = 1114111;
v___x_260_ = lean_uint32_dec_le(v_r_256_, v___x_259_);
v___y_203_ = v___x_260_;
goto v___jp_202_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_261_ = lean_unsigned_to_nat(2u);
v___x_262_ = lean_nat_add(v_i_180_, v___x_261_);
v___x_263_ = lean_nat_dec_lt(v___x_262_, v___x_204_);
if (v___x_263_ == 0)
{
lean_dec(v___x_262_);
lean_dec(v_i_180_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; uint8_t v___x_267_; uint8_t v___x_268_; 
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_nat_add(v_i_180_, v___x_264_);
v___x_266_ = lean_byte_array_fget(v_b_179_, v___x_265_);
lean_dec(v___x_265_);
v___x_267_ = lean_uint8_land(v___x_266_, v___x_214_);
v___x_268_ = lean_uint8_dec_eq(v___x_267_, v___x_208_);
if (v___x_268_ == 0)
{
lean_dec(v___x_262_);
lean_dec(v_i_180_);
return v___x_268_;
}
else
{
uint8_t v___x_269_; uint8_t v___x_270_; uint8_t v___x_271_; 
v___x_269_ = lean_byte_array_fget(v_b_179_, v___x_262_);
lean_dec(v___x_262_);
v___x_270_ = lean_uint8_land(v___x_269_, v___x_214_);
v___x_271_ = lean_uint8_dec_eq(v___x_270_, v___x_208_);
if (v___x_271_ == 0)
{
lean_dec(v_i_180_);
return v___x_271_;
}
else
{
uint8_t v___x_272_; uint8_t v_b_u2080_273_; uint8_t v___x_274_; uint8_t v_b_u2081_275_; uint8_t v_b_u2082_276_; uint32_t v___x_277_; uint32_t v___x_278_; uint32_t v___x_279_; uint32_t v___x_280_; uint32_t v___x_281_; uint32_t v___x_282_; uint32_t v___x_283_; uint32_t v___x_284_; uint32_t v_r_285_; uint32_t v___x_286_; uint8_t v___x_287_; uint32_t v___x_288_; uint8_t v___x_289_; 
v___x_272_ = 15;
v_b_u2080_273_ = lean_uint8_land(v___x_207_, v___x_272_);
v___x_274_ = 63;
v_b_u2081_275_ = lean_uint8_land(v___x_266_, v___x_274_);
v_b_u2082_276_ = lean_uint8_land(v___x_269_, v___x_274_);
v___x_277_ = lean_uint8_to_uint32(v_b_u2080_273_);
v___x_278_ = 12;
v___x_279_ = lean_uint32_shift_left(v___x_277_, v___x_278_);
v___x_280_ = lean_uint8_to_uint32(v_b_u2081_275_);
v___x_281_ = 6;
v___x_282_ = lean_uint32_shift_left(v___x_280_, v___x_281_);
v___x_283_ = lean_uint32_lor(v___x_279_, v___x_282_);
v___x_284_ = lean_uint8_to_uint32(v_b_u2082_276_);
v_r_285_ = lean_uint32_lor(v___x_283_, v___x_284_);
v___x_286_ = 2048;
v___x_287_ = lean_uint32_dec_le(v___x_286_, v_r_285_);
v___x_288_ = 55296;
v___x_289_ = lean_uint32_dec_lt(v_r_285_, v___x_288_);
if (v___x_289_ == 0)
{
if (v___x_287_ == 0)
{
lean_dec(v_i_180_);
return v___x_287_;
}
else
{
uint32_t v___x_290_; uint8_t v___x_291_; 
v___x_290_ = 57343;
v___x_291_ = lean_uint32_dec_lt(v___x_290_, v_r_285_);
v___y_203_ = v___x_291_;
goto v___jp_202_;
}
}
else
{
if (v___x_287_ == 0)
{
lean_dec(v_i_180_);
return v___x_287_;
}
else
{
goto v___jp_185_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = lean_nat_add(v_i_180_, v___x_292_);
v___x_294_ = lean_nat_dec_lt(v___x_293_, v___x_204_);
if (v___x_294_ == 0)
{
lean_dec(v___x_293_);
lean_dec(v_i_180_);
return v___x_294_;
}
else
{
uint8_t v___x_295_; uint8_t v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_byte_array_fget(v_b_179_, v___x_293_);
lean_dec(v___x_293_);
v___x_296_ = lean_uint8_land(v___x_295_, v___x_214_);
v___x_297_ = lean_uint8_dec_eq(v___x_296_, v___x_208_);
if (v___x_297_ == 0)
{
lean_dec(v_i_180_);
return v___x_297_;
}
else
{
uint8_t v___x_298_; uint8_t v_b_u2080_299_; uint8_t v___x_300_; uint8_t v_b_u2081_301_; uint32_t v___x_302_; uint32_t v___x_303_; uint32_t v___x_304_; uint32_t v___x_305_; uint32_t v_r_306_; uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_298_ = 31;
v_b_u2080_299_ = lean_uint8_land(v___x_207_, v___x_298_);
v___x_300_ = 63;
v_b_u2081_301_ = lean_uint8_land(v___x_295_, v___x_300_);
v___x_302_ = lean_uint8_to_uint32(v_b_u2080_299_);
v___x_303_ = 6;
v___x_304_ = lean_uint32_shift_left(v___x_302_, v___x_303_);
v___x_305_ = lean_uint8_to_uint32(v_b_u2081_301_);
v_r_306_ = lean_uint32_lor(v___x_304_, v___x_305_);
v___x_307_ = 128;
v___x_308_ = lean_uint32_dec_le(v___x_307_, v_r_306_);
v___y_203_ = v___x_308_;
goto v___jp_202_;
}
}
}
}
else
{
goto v___jp_185_;
}
}
v___jp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_nat_add(v_i_180_, v___y_182_);
lean_dec(v_i_180_);
v_i_180_ = v___x_183_;
goto _start;
}
v___jp_185_:
{
uint8_t v___x_186_; uint8_t v___x_187_; uint8_t v___x_188_; uint8_t v___x_189_; uint8_t v___x_190_; 
v___x_186_ = lean_byte_array_fget(v_b_179_, v_i_180_);
v___x_187_ = 128;
v___x_188_ = lean_uint8_land(v___x_186_, v___x_187_);
v___x_189_ = 0;
v___x_190_ = lean_uint8_dec_eq(v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
uint8_t v___x_191_; uint8_t v___x_192_; uint8_t v___x_193_; uint8_t v___x_194_; 
v___x_191_ = 224;
v___x_192_ = lean_uint8_land(v___x_186_, v___x_191_);
v___x_193_ = 192;
v___x_194_ = lean_uint8_dec_eq(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; uint8_t v___x_196_; uint8_t v___x_197_; 
v___x_195_ = 240;
v___x_196_ = lean_uint8_land(v___x_186_, v___x_195_);
v___x_197_ = lean_uint8_dec_eq(v___x_196_, v___x_191_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; 
v___x_198_ = lean_unsigned_to_nat(4u);
v___y_182_ = v___x_198_;
goto v___jp_181_;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = lean_unsigned_to_nat(3u);
v___y_182_ = v___x_199_;
goto v___jp_181_;
}
}
else
{
lean_object* v___x_200_; 
v___x_200_ = lean_unsigned_to_nat(2u);
v___y_182_ = v___x_200_;
goto v___jp_181_;
}
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_unsigned_to_nat(1u);
v___y_182_ = v___x_201_;
goto v___jp_181_;
}
}
v___jp_202_:
{
if (v___y_203_ == 0)
{
lean_dec(v_i_180_);
return v___y_203_;
}
else
{
goto v___jp_185_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___redArg___boxed(lean_object* v_b_309_, lean_object* v_i_310_){
_start:
{
uint8_t v_res_311_; lean_object* v_r_312_; 
v_res_311_ = l_ByteArray_validateUTF8_go___redArg(v_b_309_, v_i_310_);
lean_dec_ref(v_b_309_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go(lean_object* v_b_313_, lean_object* v_i_314_, lean_object* v_hi_315_){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = l_ByteArray_validateUTF8_go___redArg(v_b_313_, v_i_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___boxed(lean_object* v_b_317_, lean_object* v_i_318_, lean_object* v_hi_319_){
_start:
{
uint8_t v_res_320_; lean_object* v_r_321_; 
v_res_320_ = l_ByteArray_validateUTF8_go(v_b_317_, v_i_318_, v_hi_319_);
lean_dec_ref(v_b_317_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(uint8_t v_x_322_, lean_object* v_h__1_323_, lean_object* v_h__2_324_){
_start:
{
if (v_x_322_ == 0)
{
lean_object* v___x_325_; 
lean_dec(v_h__2_324_);
v___x_325_ = lean_apply_1(v_h__1_323_, lean_box(0));
return v___x_325_;
}
else
{
lean_object* v___x_326_; 
lean_dec(v_h__1_323_);
v___x_326_ = lean_apply_1(v_h__2_324_, lean_box(0));
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg___boxed(lean_object* v_x_327_, lean_object* v_h__1_328_, lean_object* v_h__2_329_){
_start:
{
uint8_t v_x_26__boxed_330_; lean_object* v_res_331_; 
v_x_26__boxed_330_ = lean_unbox(v_x_327_);
v_res_331_ = l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(v_x_26__boxed_330_, v_h__1_328_, v_h__2_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(lean_object* v_motive_332_, uint8_t v_x_333_, lean_object* v_h__1_334_, lean_object* v_h__2_335_){
_start:
{
if (v_x_333_ == 0)
{
lean_object* v___x_336_; 
lean_dec(v_h__2_335_);
v___x_336_ = lean_apply_1(v_h__1_334_, lean_box(0));
return v___x_336_;
}
else
{
lean_object* v___x_337_; 
lean_dec(v_h__1_334_);
v___x_337_ = lean_apply_1(v_h__2_335_, lean_box(0));
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___boxed(lean_object* v_motive_338_, lean_object* v_x_339_, lean_object* v_h__1_340_, lean_object* v_h__2_341_){
_start:
{
uint8_t v_x_33__boxed_342_; lean_object* v_res_343_; 
v_x_33__boxed_342_ = lean_unbox(v_x_339_);
v_res_343_ = l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(v_motive_338_, v_x_33__boxed_342_, v_h__1_340_, v_h__2_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8___boxed(lean_object* v_b_345_){
_start:
{
uint8_t v_res_346_; lean_object* v_r_347_; 
v_res_346_ = lean_string_validate_utf8(v_b_345_);
lean_dec_ref(v_b_345_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint8_t l_instDecidableIsValidUTF8(lean_object* v_b_348_){
_start:
{
uint8_t v___x_349_; 
v___x_349_ = lean_string_validate_utf8(v_b_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_instDecidableIsValidUTF8___boxed(lean_object* v_b_350_){
_start:
{
uint8_t v_res_351_; lean_object* v_r_352_; 
v_res_351_ = l_instDecidableIsValidUTF8(v_b_350_);
lean_dec_ref(v_b_350_);
v_r_352_ = lean_box(v_res_351_);
return v_r_352_;
}
}
LEAN_EXPORT lean_object* l_String_fromUTF8_x3f(lean_object* v_a_353_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = lean_string_validate_utf8(v_a_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
lean_dec_ref(v_a_353_);
v___x_355_ = lean_box(0);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_string_from_utf8_unchecked(v_a_353_);
v___x_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
}
static lean_object* _init_l_String_fromUTF8_x21___closed__4(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_362_ = ((lean_object*)(l_String_fromUTF8_x21___closed__3));
v___x_363_ = lean_unsigned_to_nat(46u);
v___x_364_ = lean_unsigned_to_nat(193u);
v___x_365_ = ((lean_object*)(l_String_fromUTF8_x21___closed__2));
v___x_366_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_367_ = l_mkPanicMessageWithDecl(v___x_366_, v___x_365_, v___x_364_, v___x_363_, v___x_362_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_String_fromUTF8_x21(lean_object* v_a_368_){
_start:
{
uint8_t v___x_369_; 
v___x_369_ = lean_string_validate_utf8(v_a_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec_ref(v_a_368_);
v___x_370_ = ((lean_object*)(l_String_fromUTF8_x21___closed__0));
v___x_371_ = lean_obj_once(&l_String_fromUTF8_x21___closed__4, &l_String_fromUTF8_x21___closed__4_once, _init_l_String_fromUTF8_x21___closed__4);
v___x_372_ = l_panic___redArg(v___x_370_, v___x_371_);
return v___x_372_;
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_string_from_utf8_unchecked(v_a_368_);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_String_Internal_toArray(lean_object* v_b_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v_val_379_; 
v___x_375_ = lean_string_to_utf8(v_b_374_);
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = ((lean_object*)(l_ByteArray_utf8Decode_x3f___closed__0));
v___x_378_ = l_ByteArray_utf8Decode_x3f_go___redArg(v___x_375_, v___x_376_, v___x_377_);
lean_dec_ref(v___x_375_);
v_val_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_val_379_);
lean_dec(v___x_378_);
return v_val_379_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValid___boxed(lean_object* v_s_382_, lean_object* v_p_383_){
_start:
{
uint8_t v_res_384_; lean_object* v_r_385_; 
v_res_384_ = lean_string_is_valid_pos(v_s_382_, v_p_383_);
lean_dec(v_p_383_);
lean_dec_ref(v_s_382_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsValid(lean_object* v_s_386_, lean_object* v_p_387_){
_start:
{
uint8_t v___x_388_; 
v___x_388_ = lean_string_is_valid_pos(v_s_386_, v_p_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsValid___boxed(lean_object* v_s_389_, lean_object* v_p_390_){
_start:
{
uint8_t v_res_391_; lean_object* v_r_392_; 
v_res_391_ = l_String_instDecidableIsValid(v_s_389_, v_p_390_);
lean_dec(v_p_390_);
lean_dec_ref(v_s_389_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
LEAN_EXPORT lean_object* l_String_extract___boxed(lean_object* v_s_396_, lean_object* v_b_397_, lean_object* v_e_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = lean_string_utf8_extract_fast(v_s_396_, v_b_397_, v_e_398_);
lean_dec(v_e_398_);
lean_dec(v_b_397_);
lean_dec_ref(v_s_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_extract(lean_object* v_s_400_, lean_object* v_b_401_, lean_object* v_e_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_string_utf8_extract_fast(v_s_400_, v_b_401_, v_e_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_extract___boxed(lean_object* v_s_404_, lean_object* v_b_405_, lean_object* v_e_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_String_Pos_extract(v_s_404_, v_b_405_, v_e_406_);
lean_dec(v_e_406_);
lean_dec(v_b_405_);
lean_dec_ref(v_s_404_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_copy(lean_object* v_s_408_){
_start:
{
lean_object* v_str_409_; lean_object* v_startInclusive_410_; lean_object* v_endExclusive_411_; lean_object* v___x_412_; 
v_str_409_ = lean_ctor_get(v_s_408_, 0);
v_startInclusive_410_ = lean_ctor_get(v_s_408_, 1);
v_endExclusive_411_ = lean_ctor_get(v_s_408_, 2);
v___x_412_ = lean_string_utf8_extract_fast(v_str_409_, v_startInclusive_410_, v_endExclusive_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_copy___boxed(lean_object* v_s_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_String_Slice_copy(v_s_413_);
lean_dec_ref(v_s_413_);
return v_res_414_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_Raw_isValidForSlice(lean_object* v_s_415_, lean_object* v_p_416_){
_start:
{
lean_object* v_str_417_; lean_object* v_startInclusive_418_; lean_object* v_endExclusive_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v_str_417_ = lean_ctor_get(v_s_415_, 0);
v_startInclusive_418_ = lean_ctor_get(v_s_415_, 1);
v_endExclusive_419_ = lean_ctor_get(v_s_415_, 2);
v___x_420_ = lean_nat_sub(v_endExclusive_419_, v_startInclusive_418_);
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_add(v_p_416_, v___x_421_);
v___x_423_ = lean_nat_dec_le(v___x_422_, v___x_420_);
lean_dec(v___x_422_);
if (v___x_423_ == 0)
{
uint8_t v___x_424_; 
v___x_424_ = lean_nat_dec_eq(v_p_416_, v___x_420_);
lean_dec(v___x_420_);
return v___x_424_;
}
else
{
lean_object* v___x_425_; uint8_t v___x_426_; uint8_t v___x_427_; 
lean_dec(v___x_420_);
v___x_425_ = lean_nat_add(v_startInclusive_418_, v_p_416_);
v___x_426_ = lean_string_get_byte_fast(v_str_417_, v___x_425_);
v___x_427_ = l_UInt8_isUTF8FirstByte(v___x_426_);
return v___x_427_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValidForSlice___boxed(lean_object* v_s_428_, lean_object* v_p_429_){
_start:
{
uint8_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = l_String_Pos_Raw_isValidForSlice(v_s_428_, v_p_429_);
lean_dec(v_p_429_);
lean_dec_ref(v_s_428_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsValidForSlice(lean_object* v_s_432_, lean_object* v_p_433_){
_start:
{
uint8_t v___x_434_; 
v___x_434_ = l_String_Pos_Raw_isValidForSlice(v_s_432_, v_p_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsValidForSlice___boxed(lean_object* v_s_435_, lean_object* v_p_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_String_instDecidableIsValidForSlice(v_s_435_, v_p_436_);
lean_dec(v_p_436_);
lean_dec_ref(v_s_435_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_str(lean_object* v_s_439_, lean_object* v_pos_440_){
_start:
{
lean_object* v_startInclusive_441_; lean_object* v___x_442_; 
v_startInclusive_441_ = lean_ctor_get(v_s_439_, 1);
v___x_442_ = lean_nat_add(v_startInclusive_441_, v_pos_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_str___boxed(lean_object* v_s_443_, lean_object* v_pos_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_String_Slice_Pos_str(v_s_443_, v_pos_444_);
lean_dec(v_pos_444_);
lean_dec_ref(v_s_443_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg(lean_object* v_s_446_, lean_object* v_pos_447_){
_start:
{
lean_object* v_startInclusive_448_; lean_object* v___x_449_; 
v_startInclusive_448_ = lean_ctor_get(v_s_446_, 1);
v___x_449_ = lean_nat_sub(v_pos_447_, v_startInclusive_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg___boxed(lean_object* v_s_450_, lean_object* v_pos_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_String_Slice_Pos_ofStr___redArg(v_s_450_, v_pos_451_);
lean_dec(v_pos_451_);
lean_dec_ref(v_s_450_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr(lean_object* v_s_453_, lean_object* v_pos_454_, lean_object* v_h_u2081_455_, lean_object* v_h_u2082_456_){
_start:
{
lean_object* v_startInclusive_457_; lean_object* v___x_458_; 
v_startInclusive_457_ = lean_ctor_get(v_s_453_, 1);
v___x_458_ = lean_nat_sub(v_pos_454_, v_startInclusive_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___boxed(lean_object* v_s_459_, lean_object* v_pos_460_, lean_object* v_h_u2081_461_, lean_object* v_h_u2082_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_String_Slice_Pos_ofStr(v_s_459_, v_pos_460_, v_h_u2081_461_, v_h_u2082_462_);
lean_dec(v_pos_460_);
lean_dec_ref(v_s_459_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom(lean_object* v_s_464_, lean_object* v_pos_465_){
_start:
{
lean_object* v_str_466_; lean_object* v_startInclusive_467_; lean_object* v_endExclusive_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_476_; 
v_str_466_ = lean_ctor_get(v_s_464_, 0);
v_startInclusive_467_ = lean_ctor_get(v_s_464_, 1);
v_endExclusive_468_ = lean_ctor_get(v_s_464_, 2);
v_isSharedCheck_476_ = !lean_is_exclusive(v_s_464_);
if (v_isSharedCheck_476_ == 0)
{
v___x_470_ = v_s_464_;
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_endExclusive_468_);
lean_inc(v_startInclusive_467_);
lean_inc(v_str_466_);
lean_dec(v_s_464_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_472_ = lean_nat_add(v_startInclusive_467_, v_pos_465_);
lean_dec(v_startInclusive_467_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 1, v___x_472_);
v___x_474_ = v___x_470_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_str_466_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_475_, 2, v_endExclusive_468_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom___boxed(lean_object* v_s_477_, lean_object* v_pos_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_String_Slice_sliceFrom(v_s_477_, v_pos_478_);
lean_dec(v_pos_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStart(lean_object* v_s_480_, lean_object* v_pos_481_){
_start:
{
lean_object* v_str_482_; lean_object* v_startInclusive_483_; lean_object* v_endExclusive_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_492_; 
v_str_482_ = lean_ctor_get(v_s_480_, 0);
v_startInclusive_483_ = lean_ctor_get(v_s_480_, 1);
v_endExclusive_484_ = lean_ctor_get(v_s_480_, 2);
v_isSharedCheck_492_ = !lean_is_exclusive(v_s_480_);
if (v_isSharedCheck_492_ == 0)
{
v___x_486_ = v_s_480_;
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_endExclusive_484_);
lean_inc(v_startInclusive_483_);
lean_inc(v_str_482_);
lean_dec(v_s_480_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_488_ = lean_nat_add(v_startInclusive_483_, v_pos_481_);
lean_dec(v_startInclusive_483_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 1, v___x_488_);
v___x_490_ = v___x_486_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_str_482_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v_endExclusive_484_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStart___boxed(lean_object* v_s_493_, lean_object* v_pos_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_String_Slice_replaceStart(v_s_493_, v_pos_494_);
lean_dec(v_pos_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceTo(lean_object* v_s_496_, lean_object* v_pos_497_){
_start:
{
lean_object* v_str_498_; lean_object* v_startInclusive_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
v_str_498_ = lean_ctor_get(v_s_496_, 0);
v_startInclusive_499_ = lean_ctor_get(v_s_496_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v_s_496_);
if (v_isSharedCheck_507_ == 0)
{
lean_object* v_unused_508_; 
v_unused_508_ = lean_ctor_get(v_s_496_, 2);
lean_dec(v_unused_508_);
v___x_501_ = v_s_496_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_startInclusive_499_);
lean_inc(v_str_498_);
lean_dec(v_s_496_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_503_ = lean_nat_add(v_startInclusive_499_, v_pos_497_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 2, v___x_503_);
v___x_505_ = v___x_501_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_str_498_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_startInclusive_499_);
lean_ctor_set(v_reuseFailAlloc_506_, 2, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceTo___boxed(lean_object* v_s_509_, lean_object* v_pos_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_String_Slice_sliceTo(v_s_509_, v_pos_510_);
lean_dec(v_pos_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd(lean_object* v_s_512_, lean_object* v_pos_513_){
_start:
{
lean_object* v_str_514_; lean_object* v_startInclusive_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_str_514_ = lean_ctor_get(v_s_512_, 0);
v_startInclusive_515_ = lean_ctor_get(v_s_512_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_s_512_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_s_512_, 2);
lean_dec(v_unused_524_);
v___x_517_ = v_s_512_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_startInclusive_515_);
lean_inc(v_str_514_);
lean_dec(v_s_512_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_nat_add(v_startInclusive_515_, v_pos_513_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 2, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_str_514_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_startInclusive_515_);
lean_ctor_set(v_reuseFailAlloc_522_, 2, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd___boxed(lean_object* v_s_525_, lean_object* v_pos_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_String_Slice_replaceEnd(v_s_525_, v_pos_526_);
lean_dec(v_pos_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg(lean_object* v_s_528_, lean_object* v_newStart_529_, lean_object* v_newEnd_530_){
_start:
{
lean_object* v_str_531_; lean_object* v_startInclusive_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_541_; 
v_str_531_ = lean_ctor_get(v_s_528_, 0);
v_startInclusive_532_ = lean_ctor_get(v_s_528_, 1);
v_isSharedCheck_541_ = !lean_is_exclusive(v_s_528_);
if (v_isSharedCheck_541_ == 0)
{
lean_object* v_unused_542_; 
v_unused_542_ = lean_ctor_get(v_s_528_, 2);
lean_dec(v_unused_542_);
v___x_534_ = v_s_528_;
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_startInclusive_532_);
lean_inc(v_str_531_);
lean_dec(v_s_528_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_536_ = lean_nat_add(v_startInclusive_532_, v_newStart_529_);
v___x_537_ = lean_nat_add(v_startInclusive_532_, v_newEnd_530_);
lean_dec(v_startInclusive_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 2, v___x_537_);
lean_ctor_set(v___x_534_, 1, v___x_536_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_str_531_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_540_, 2, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg___boxed(lean_object* v_s_543_, lean_object* v_newStart_544_, lean_object* v_newEnd_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_String_Slice_slice___redArg(v_s_543_, v_newStart_544_, v_newEnd_545_);
lean_dec(v_newEnd_545_);
lean_dec(v_newStart_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice(lean_object* v_s_547_, lean_object* v_newStart_548_, lean_object* v_newEnd_549_, lean_object* v_h_550_){
_start:
{
lean_object* v_str_551_; lean_object* v_startInclusive_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_561_; 
v_str_551_ = lean_ctor_get(v_s_547_, 0);
v_startInclusive_552_ = lean_ctor_get(v_s_547_, 1);
v_isSharedCheck_561_ = !lean_is_exclusive(v_s_547_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; 
v_unused_562_ = lean_ctor_get(v_s_547_, 2);
lean_dec(v_unused_562_);
v___x_554_ = v_s_547_;
v_isShared_555_ = v_isSharedCheck_561_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_startInclusive_552_);
lean_inc(v_str_551_);
lean_dec(v_s_547_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_561_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_556_ = lean_nat_add(v_startInclusive_552_, v_newStart_548_);
v___x_557_ = lean_nat_add(v_startInclusive_552_, v_newEnd_549_);
lean_dec(v_startInclusive_552_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 2, v___x_557_);
lean_ctor_set(v___x_554_, 1, v___x_556_);
v___x_559_ = v___x_554_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_str_551_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v___x_556_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___boxed(lean_object* v_s_563_, lean_object* v_newStart_564_, lean_object* v_newEnd_565_, lean_object* v_h_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_String_Slice_slice(v_s_563_, v_newStart_564_, v_newEnd_565_, v_h_566_);
lean_dec(v_newEnd_565_);
lean_dec(v_newStart_564_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg(lean_object* v_s_568_, lean_object* v_newStart_569_, lean_object* v_newEnd_570_){
_start:
{
lean_object* v_str_571_; lean_object* v_startInclusive_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_581_; 
v_str_571_ = lean_ctor_get(v_s_568_, 0);
v_startInclusive_572_ = lean_ctor_get(v_s_568_, 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_s_568_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v_s_568_, 2);
lean_dec(v_unused_582_);
v___x_574_ = v_s_568_;
v_isShared_575_ = v_isSharedCheck_581_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_startInclusive_572_);
lean_inc(v_str_571_);
lean_dec(v_s_568_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_581_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_576_ = lean_nat_add(v_startInclusive_572_, v_newStart_569_);
v___x_577_ = lean_nat_add(v_startInclusive_572_, v_newEnd_570_);
lean_dec(v_startInclusive_572_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 2, v___x_577_);
lean_ctor_set(v___x_574_, 1, v___x_576_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_str_571_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg___boxed(lean_object* v_s_583_, lean_object* v_newStart_584_, lean_object* v_newEnd_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_String_Slice_replaceStartEnd___redArg(v_s_583_, v_newStart_584_, v_newEnd_585_);
lean_dec(v_newEnd_585_);
lean_dec(v_newStart_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd(lean_object* v_s_587_, lean_object* v_newStart_588_, lean_object* v_newEnd_589_, lean_object* v_h_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_String_Slice_replaceStartEnd___redArg(v_s_587_, v_newStart_588_, v_newEnd_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___boxed(lean_object* v_s_592_, lean_object* v_newStart_593_, lean_object* v_newEnd_594_, lean_object* v_h_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_String_Slice_replaceStartEnd(v_s_592_, v_newStart_593_, v_newEnd_594_, v_h_595_);
lean_dec(v_newEnd_594_);
lean_dec(v_newStart_593_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f(lean_object* v_s_597_, lean_object* v_newStart_598_, lean_object* v_newEnd_599_){
_start:
{
uint8_t v___x_600_; 
v___x_600_ = lean_nat_dec_le(v_newStart_598_, v_newEnd_599_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; 
lean_dec_ref(v_s_597_);
v___x_601_ = lean_box(0);
return v___x_601_;
}
else
{
lean_object* v_str_602_; lean_object* v_startInclusive_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_613_; 
v_str_602_ = lean_ctor_get(v_s_597_, 0);
v_startInclusive_603_ = lean_ctor_get(v_s_597_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v_s_597_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v_s_597_, 2);
lean_dec(v_unused_614_);
v___x_605_ = v_s_597_;
v_isShared_606_ = v_isSharedCheck_613_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_startInclusive_603_);
lean_inc(v_str_602_);
lean_dec(v_s_597_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_613_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_607_ = lean_nat_add(v_startInclusive_603_, v_newStart_598_);
v___x_608_ = lean_nat_add(v_startInclusive_603_, v_newEnd_599_);
lean_dec(v_startInclusive_603_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 2, v___x_608_);
lean_ctor_set(v___x_605_, 1, v___x_607_);
v___x_610_ = v___x_605_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_str_602_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v___x_608_);
v___x_610_ = v_reuseFailAlloc_612_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; 
v___x_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f___boxed(lean_object* v_s_615_, lean_object* v_newStart_616_, lean_object* v_newEnd_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_String_Slice_slice_x3f(v_s_615_, v_newStart_616_, v_newEnd_617_);
lean_dec(v_newEnd_617_);
lean_dec(v_newStart_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_slice_x21_spec__0(lean_object* v_msg_619_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = l_String_instInhabitedSlice;
v___x_621_ = lean_panic_fn_borrowed(v___x_620_, v_msg_619_);
return v___x_621_;
}
}
static lean_object* _init_l_String_Slice_slice_x21___closed__2(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_624_ = ((lean_object*)(l_String_Slice_slice_x21___closed__1));
v___x_625_ = lean_unsigned_to_nat(4u);
v___x_626_ = lean_unsigned_to_nat(1026u);
v___x_627_ = ((lean_object*)(l_String_Slice_slice_x21___closed__0));
v___x_628_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_629_ = l_mkPanicMessageWithDecl(v___x_628_, v___x_627_, v___x_626_, v___x_625_, v___x_624_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x21(lean_object* v_s_630_, lean_object* v_newStart_631_, lean_object* v_newEnd_632_){
_start:
{
uint8_t v___x_633_; 
v___x_633_ = lean_nat_dec_le(v_newStart_631_, v_newEnd_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec_ref(v_s_630_);
v___x_634_ = lean_obj_once(&l_String_Slice_slice_x21___closed__2, &l_String_Slice_slice_x21___closed__2_once, _init_l_String_Slice_slice_x21___closed__2);
v___x_635_ = l_panic___at___00String_Slice_slice_x21_spec__0(v___x_634_);
return v___x_635_;
}
else
{
lean_object* v_str_636_; lean_object* v_startInclusive_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_646_; 
v_str_636_ = lean_ctor_get(v_s_630_, 0);
v_startInclusive_637_ = lean_ctor_get(v_s_630_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v_s_630_);
if (v_isSharedCheck_646_ == 0)
{
lean_object* v_unused_647_; 
v_unused_647_ = lean_ctor_get(v_s_630_, 2);
lean_dec(v_unused_647_);
v___x_639_ = v_s_630_;
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_startInclusive_637_);
lean_inc(v_str_636_);
lean_dec(v_s_630_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_646_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_641_ = lean_nat_add(v_startInclusive_637_, v_newStart_631_);
v___x_642_ = lean_nat_add(v_startInclusive_637_, v_newEnd_632_);
lean_dec(v_startInclusive_637_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 2, v___x_642_);
lean_ctor_set(v___x_639_, 1, v___x_641_);
v___x_644_ = v___x_639_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_str_636_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_645_, 2, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x21___boxed(lean_object* v_s_648_, lean_object* v_newStart_649_, lean_object* v_newEnd_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_String_Slice_slice_x21(v_s_648_, v_newStart_649_, v_newEnd_650_);
lean_dec(v_newEnd_650_);
lean_dec(v_newStart_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21(lean_object* v_s_652_, lean_object* v_newStart_653_, lean_object* v_newEnd_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_String_Slice_slice_x21(v_s_652_, v_newStart_653_, v_newEnd_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21___boxed(lean_object* v_s_656_, lean_object* v_newStart_657_, lean_object* v_newEnd_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_String_Slice_replaceStartEnd_x21(v_s_656_, v_newStart_657_, v_newEnd_658_);
lean_dec(v_newEnd_658_);
lean_dec(v_newStart_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_String_decodeChar___boxed(lean_object* v_s_663_, lean_object* v_byteIdx_664_, lean_object* v_h_665_){
_start:
{
uint32_t v_res_666_; lean_object* v_r_667_; 
v_res_666_ = lean_string_utf8_get_fast(v_s_663_, v_byteIdx_664_);
lean_dec(v_byteIdx_664_);
lean_dec_ref(v_s_663_);
v_r_667_ = lean_box_uint32(v_res_666_);
return v_r_667_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get___redArg(lean_object* v_s_668_, lean_object* v_pos_669_){
_start:
{
lean_object* v_str_670_; lean_object* v_startInclusive_671_; lean_object* v___x_672_; uint32_t v___x_673_; 
v_str_670_ = lean_ctor_get(v_s_668_, 0);
v_startInclusive_671_ = lean_ctor_get(v_s_668_, 1);
v___x_672_ = lean_nat_add(v_startInclusive_671_, v_pos_669_);
v___x_673_ = lean_string_utf8_get_fast(v_str_670_, v___x_672_);
lean_dec(v___x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___redArg___boxed(lean_object* v_s_674_, lean_object* v_pos_675_){
_start:
{
uint32_t v_res_676_; lean_object* v_r_677_; 
v_res_676_ = l_String_Slice_Pos_get___redArg(v_s_674_, v_pos_675_);
lean_dec(v_pos_675_);
lean_dec_ref(v_s_674_);
v_r_677_ = lean_box_uint32(v_res_676_);
return v_r_677_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get(lean_object* v_s_678_, lean_object* v_pos_679_, lean_object* v_h_680_){
_start:
{
lean_object* v_str_681_; lean_object* v_startInclusive_682_; lean_object* v___x_683_; uint32_t v___x_684_; 
v_str_681_ = lean_ctor_get(v_s_678_, 0);
v_startInclusive_682_ = lean_ctor_get(v_s_678_, 1);
v___x_683_ = lean_nat_add(v_startInclusive_682_, v_pos_679_);
v___x_684_ = lean_string_utf8_get_fast(v_str_681_, v___x_683_);
lean_dec(v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___boxed(lean_object* v_s_685_, lean_object* v_pos_686_, lean_object* v_h_687_){
_start:
{
uint32_t v_res_688_; lean_object* v_r_689_; 
v_res_688_ = l_String_Slice_Pos_get(v_s_685_, v_pos_686_, v_h_687_);
lean_dec(v_pos_686_);
lean_dec_ref(v_s_685_);
v_r_689_ = lean_box_uint32(v_res_688_);
return v_r_689_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f(lean_object* v_s_690_, lean_object* v_pos_691_){
_start:
{
lean_object* v_str_692_; lean_object* v_startInclusive_693_; lean_object* v_endExclusive_694_; lean_object* v___x_695_; uint8_t v_decide_696_; 
v_str_692_ = lean_ctor_get(v_s_690_, 0);
v_startInclusive_693_ = lean_ctor_get(v_s_690_, 1);
v_endExclusive_694_ = lean_ctor_get(v_s_690_, 2);
v___x_695_ = lean_nat_sub(v_endExclusive_694_, v_startInclusive_693_);
v_decide_696_ = lean_nat_dec_eq(v_pos_691_, v___x_695_);
lean_dec(v___x_695_);
if (v_decide_696_ == 0)
{
lean_object* v___x_697_; uint32_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_697_ = lean_nat_add(v_startInclusive_693_, v_pos_691_);
v___x_698_ = lean_string_utf8_get_fast(v_str_692_, v___x_697_);
lean_dec(v___x_697_);
v___x_699_ = lean_box_uint32(v___x_698_);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
else
{
lean_object* v___x_701_; 
v___x_701_ = lean_box(0);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f___boxed(lean_object* v_s_702_, lean_object* v_pos_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_String_Slice_Pos_get_x3f(v_s_702_, v_pos_703_);
lean_dec(v_pos_703_);
lean_dec_ref(v_s_702_);
return v_res_704_;
}
}
static lean_object* _init_l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1(void){
_start:
{
uint32_t v___x_705_; lean_object* v___x_706_; 
v___x_705_ = 65;
v___x_706_ = lean_box_uint32(v___x_705_);
return v___x_706_;
}
}
LEAN_EXPORT uint32_t l_panic___at___00String_Slice_Pos_get_x21_spec__0(lean_object* v_msg_707_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; uint32_t v___x_710_; 
v___x_708_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1;
v___x_709_ = lean_panic_fn_borrowed(v___x_708_, v_msg_707_);
v___x_710_ = lean_unbox_uint32(v___x_709_);
lean_dec(v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed(lean_object* v_msg_711_){
_start:
{
uint32_t v_res_712_; lean_object* v_r_713_; 
v_res_712_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0(v_msg_711_);
v_r_713_ = lean_box_uint32(v_res_712_);
return v_r_713_;
}
}
static lean_object* _init_l_String_Slice_Pos_get_x21___closed__2(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_716_ = ((lean_object*)(l_String_Slice_Pos_get_x21___closed__1));
v___x_717_ = lean_unsigned_to_nat(29u);
v___x_718_ = lean_unsigned_to_nat(1111u);
v___x_719_ = ((lean_object*)(l_String_Slice_Pos_get_x21___closed__0));
v___x_720_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_721_ = l_mkPanicMessageWithDecl(v___x_720_, v___x_719_, v___x_718_, v___x_717_, v___x_716_);
return v___x_721_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get_x21(lean_object* v_s_722_, lean_object* v_pos_723_){
_start:
{
lean_object* v_str_724_; lean_object* v_startInclusive_725_; lean_object* v_endExclusive_726_; lean_object* v___x_727_; uint8_t v_decide_728_; 
v_str_724_ = lean_ctor_get(v_s_722_, 0);
v_startInclusive_725_ = lean_ctor_get(v_s_722_, 1);
v_endExclusive_726_ = lean_ctor_get(v_s_722_, 2);
v___x_727_ = lean_nat_sub(v_endExclusive_726_, v_startInclusive_725_);
v_decide_728_ = lean_nat_dec_eq(v_pos_723_, v___x_727_);
lean_dec(v___x_727_);
if (v_decide_728_ == 0)
{
lean_object* v___x_729_; uint32_t v___x_730_; 
v___x_729_ = lean_nat_add(v_startInclusive_725_, v_pos_723_);
v___x_730_ = lean_string_utf8_get_fast(v_str_724_, v___x_729_);
lean_dec(v___x_729_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; uint32_t v___x_732_; 
v___x_731_ = lean_obj_once(&l_String_Slice_Pos_get_x21___closed__2, &l_String_Slice_Pos_get_x21___closed__2_once, _init_l_String_Slice_Pos_get_x21___closed__2);
v___x_732_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0(v___x_731_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x21___boxed(lean_object* v_s_733_, lean_object* v_pos_734_){
_start:
{
uint32_t v_res_735_; lean_object* v_r_736_; 
v_res_735_ = l_String_Slice_Pos_get_x21(v_s_733_, v_pos_734_);
lean_dec(v_pos_734_);
lean_dec_ref(v_s_733_);
v_r_736_ = lean_box_uint32(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg(lean_object* v_pos_737_){
_start:
{
lean_inc(v_pos_737_);
return v_pos_737_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg___boxed(lean_object* v_pos_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_String_Pos_toSlice___redArg(v_pos_738_);
lean_dec(v_pos_738_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice(lean_object* v_s_740_, lean_object* v_pos_741_){
_start:
{
lean_inc(v_pos_741_);
return v_pos_741_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___boxed(lean_object* v_s_742_, lean_object* v_pos_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_String_Pos_toSlice(v_s_742_, v_pos_743_);
lean_dec(v_pos_743_);
lean_dec_ref(v_s_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg(lean_object* v_pos_745_){
_start:
{
lean_inc(v_pos_745_);
return v_pos_745_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg___boxed(lean_object* v_pos_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_String_Pos_ofToSlice___redArg(v_pos_746_);
lean_dec(v_pos_746_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice(lean_object* v_s_748_, lean_object* v_pos_749_){
_start:
{
lean_inc(v_pos_749_);
return v_pos_749_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___boxed(lean_object* v_s_750_, lean_object* v_pos_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_String_Pos_ofToSlice(v_s_750_, v_pos_751_);
lean_dec(v_pos_751_);
lean_dec_ref(v_s_750_);
return v_res_752_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get___redArg(lean_object* v_s_753_, lean_object* v_pos_754_){
_start:
{
uint32_t v___x_755_; 
v___x_755_ = lean_string_utf8_get_fast(v_s_753_, v_pos_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get___redArg___boxed(lean_object* v_s_756_, lean_object* v_pos_757_){
_start:
{
uint32_t v_res_758_; lean_object* v_r_759_; 
v_res_758_ = l_String_Pos_get___redArg(v_s_756_, v_pos_757_);
lean_dec(v_pos_757_);
lean_dec_ref(v_s_756_);
v_r_759_ = lean_box_uint32(v_res_758_);
return v_r_759_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get(lean_object* v_s_760_, lean_object* v_pos_761_, lean_object* v_h_762_){
_start:
{
uint32_t v___x_763_; 
v___x_763_ = lean_string_utf8_get_fast(v_s_760_, v_pos_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get___boxed(lean_object* v_s_764_, lean_object* v_pos_765_, lean_object* v_h_766_){
_start:
{
uint32_t v_res_767_; lean_object* v_r_768_; 
v_res_767_ = l_String_Pos_get(v_s_764_, v_pos_765_, v_h_766_);
lean_dec(v_pos_765_);
lean_dec_ref(v_s_764_);
v_r_768_ = lean_box_uint32(v_res_767_);
return v_r_768_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x3f(lean_object* v_s_769_, lean_object* v_pos_770_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = lean_string_utf8_byte_size(v_s_769_);
v___x_773_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_773_, 0, v_s_769_);
lean_ctor_set(v___x_773_, 1, v___x_771_);
lean_ctor_set(v___x_773_, 2, v___x_772_);
v___x_774_ = l_String_Slice_Pos_get_x3f(v___x_773_, v_pos_770_);
lean_dec_ref_known(v___x_773_, 3);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x3f___boxed(lean_object* v_s_775_, lean_object* v_pos_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_String_Pos_get_x3f(v_s_775_, v_pos_776_);
lean_dec(v_pos_776_);
return v_res_777_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get_x21(lean_object* v_s_778_, lean_object* v_pos_779_){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint32_t v___x_783_; 
v___x_780_ = lean_unsigned_to_nat(0u);
v___x_781_ = lean_string_utf8_byte_size(v_s_778_);
v___x_782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_782_, 0, v_s_778_);
lean_ctor_set(v___x_782_, 1, v___x_780_);
lean_ctor_set(v___x_782_, 2, v___x_781_);
v___x_783_ = l_String_Slice_Pos_get_x21(v___x_782_, v_pos_779_);
lean_dec_ref_known(v___x_782_, 3);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x21___boxed(lean_object* v_s_784_, lean_object* v_pos_785_){
_start:
{
uint32_t v_res_786_; lean_object* v_r_787_; 
v_res_786_ = l_String_Pos_get_x21(v_s_784_, v_pos_785_);
lean_dec(v_pos_785_);
v_r_787_ = lean_box_uint32(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_byte___redArg(lean_object* v_s_788_, lean_object* v_pos_789_){
_start:
{
uint8_t v___x_790_; 
v___x_790_ = lean_string_get_byte_fast(v_s_788_, v_pos_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_byte___redArg___boxed(lean_object* v_s_791_, lean_object* v_pos_792_){
_start:
{
uint8_t v_res_793_; lean_object* v_r_794_; 
v_res_793_ = l_String_Pos_byte___redArg(v_s_791_, v_pos_792_);
lean_dec_ref(v_s_791_);
v_r_794_ = lean_box(v_res_793_);
return v_r_794_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_byte(lean_object* v_s_795_, lean_object* v_pos_796_, lean_object* v_h_797_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = lean_string_get_byte_fast(v_s_795_, v_pos_796_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_byte___boxed(lean_object* v_s_799_, lean_object* v_pos_800_, lean_object* v_h_801_){
_start:
{
uint8_t v_res_802_; lean_object* v_r_803_; 
v_res_802_ = l_String_Pos_byte(v_s_799_, v_pos_800_, v_h_801_);
lean_dec_ref(v_s_799_);
v_r_803_ = lean_box(v_res_802_);
return v_r_803_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg(lean_object* v_pos_804_){
_start:
{
lean_inc(v_pos_804_);
return v_pos_804_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg___boxed(lean_object* v_pos_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_String_Pos_ofCopy___redArg(v_pos_805_);
lean_dec(v_pos_805_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy(lean_object* v_s_807_, lean_object* v_pos_808_){
_start:
{
lean_inc(v_pos_808_);
return v_pos_808_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___boxed(lean_object* v_s_809_, lean_object* v_pos_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_String_Pos_ofCopy(v_s_809_, v_pos_810_);
lean_dec(v_pos_810_);
lean_dec_ref(v_s_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg(lean_object* v_pos_812_){
_start:
{
lean_inc(v_pos_812_);
return v_pos_812_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg___boxed(lean_object* v_pos_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_String_Slice_Pos_copy___redArg(v_pos_813_);
lean_dec(v_pos_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy(lean_object* v_s_815_, lean_object* v_pos_816_){
_start:
{
lean_inc(v_pos_816_);
return v_pos_816_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___boxed(lean_object* v_s_817_, lean_object* v_pos_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_String_Slice_Pos_copy(v_s_817_, v_pos_818_);
lean_dec(v_pos_818_);
lean_dec_ref(v_s_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg(lean_object* v_pos_820_){
_start:
{
lean_inc(v_pos_820_);
return v_pos_820_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg___boxed(lean_object* v_pos_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_String_Slice_Pos_toCopy___redArg(v_pos_821_);
lean_dec(v_pos_821_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy(lean_object* v_s_823_, lean_object* v_pos_824_){
_start:
{
lean_inc(v_pos_824_);
return v_pos_824_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___boxed(lean_object* v_s_825_, lean_object* v_pos_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_String_Slice_Pos_toCopy(v_s_825_, v_pos_826_);
lean_dec(v_pos_826_);
lean_dec_ref(v_s_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg(lean_object* v_p_u2080_828_, lean_object* v_pos_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = lean_nat_add(v_p_u2080_828_, v_pos_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg___boxed(lean_object* v_p_u2080_831_, lean_object* v_pos_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_String_Slice_Pos_ofSliceFrom___redArg(v_p_u2080_831_, v_pos_832_);
lean_dec(v_pos_832_);
lean_dec(v_p_u2080_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom(lean_object* v_s_834_, lean_object* v_p_u2080_835_, lean_object* v_pos_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_nat_add(v_p_u2080_835_, v_pos_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___boxed(lean_object* v_s_838_, lean_object* v_p_u2080_839_, lean_object* v_pos_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_String_Slice_Pos_ofSliceFrom(v_s_838_, v_p_u2080_839_, v_pos_840_);
lean_dec(v_pos_840_);
lean_dec(v_p_u2080_839_);
lean_dec_ref(v_s_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg(lean_object* v_p_u2080_842_, lean_object* v_pos_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = lean_nat_add(v_p_u2080_842_, v_pos_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg___boxed(lean_object* v_p_u2080_845_, lean_object* v_pos_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_String_Slice_Pos_ofReplaceStart___redArg(v_p_u2080_845_, v_pos_846_);
lean_dec(v_pos_846_);
lean_dec(v_p_u2080_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart(lean_object* v_s_848_, lean_object* v_p_u2080_849_, lean_object* v_pos_850_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_nat_add(v_p_u2080_849_, v_pos_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___boxed(lean_object* v_s_852_, lean_object* v_p_u2080_853_, lean_object* v_pos_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_String_Slice_Pos_ofReplaceStart(v_s_852_, v_p_u2080_853_, v_pos_854_);
lean_dec(v_pos_854_);
lean_dec(v_p_u2080_853_);
lean_dec_ref(v_s_852_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg(lean_object* v_p_u2080_856_, lean_object* v_pos_857_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_nat_sub(v_pos_857_, v_p_u2080_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg___boxed(lean_object* v_p_u2080_859_, lean_object* v_pos_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_String_Slice_Pos_sliceFrom___redArg(v_p_u2080_859_, v_pos_860_);
lean_dec(v_pos_860_);
lean_dec(v_p_u2080_859_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom(lean_object* v_s_862_, lean_object* v_p_u2080_863_, lean_object* v_pos_864_, lean_object* v_h_865_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = lean_nat_sub(v_pos_864_, v_p_u2080_863_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___boxed(lean_object* v_s_867_, lean_object* v_p_u2080_868_, lean_object* v_pos_869_, lean_object* v_h_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_String_Slice_Pos_sliceFrom(v_s_867_, v_p_u2080_868_, v_pos_869_, v_h_870_);
lean_dec(v_pos_869_);
lean_dec(v_p_u2080_868_);
lean_dec_ref(v_s_867_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg(lean_object* v_p_u2080_872_, lean_object* v_pos_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = lean_nat_sub(v_pos_873_, v_p_u2080_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg___boxed(lean_object* v_p_u2080_875_, lean_object* v_pos_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_String_Slice_Pos_toReplaceStart___redArg(v_p_u2080_875_, v_pos_876_);
lean_dec(v_pos_876_);
lean_dec(v_p_u2080_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart(lean_object* v_s_878_, lean_object* v_p_u2080_879_, lean_object* v_pos_880_, lean_object* v_h_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lean_nat_sub(v_pos_880_, v_p_u2080_879_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___boxed(lean_object* v_s_883_, lean_object* v_p_u2080_884_, lean_object* v_pos_885_, lean_object* v_h_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_String_Slice_Pos_toReplaceStart(v_s_883_, v_p_u2080_884_, v_pos_885_, v_h_886_);
lean_dec(v_pos_885_);
lean_dec(v_p_u2080_884_);
lean_dec_ref(v_s_883_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg(lean_object* v_pos_888_){
_start:
{
lean_inc(v_pos_888_);
return v_pos_888_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg___boxed(lean_object* v_pos_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_String_Slice_Pos_ofSliceTo___redArg(v_pos_889_);
lean_dec(v_pos_889_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo(lean_object* v_s_891_, lean_object* v_p_u2080_892_, lean_object* v_pos_893_){
_start:
{
lean_inc(v_pos_893_);
return v_pos_893_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___boxed(lean_object* v_s_894_, lean_object* v_p_u2080_895_, lean_object* v_pos_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_String_Slice_Pos_ofSliceTo(v_s_894_, v_p_u2080_895_, v_pos_896_);
lean_dec(v_pos_896_);
lean_dec(v_p_u2080_895_);
lean_dec_ref(v_s_894_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg(lean_object* v_pos_898_){
_start:
{
lean_inc(v_pos_898_);
return v_pos_898_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg___boxed(lean_object* v_pos_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_String_Slice_Pos_ofReplaceEnd___redArg(v_pos_899_);
lean_dec(v_pos_899_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd(lean_object* v_s_901_, lean_object* v_p_u2080_902_, lean_object* v_pos_903_){
_start:
{
lean_inc(v_pos_903_);
return v_pos_903_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___boxed(lean_object* v_s_904_, lean_object* v_p_u2080_905_, lean_object* v_pos_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_String_Slice_Pos_ofReplaceEnd(v_s_904_, v_p_u2080_905_, v_pos_906_);
lean_dec(v_pos_906_);
lean_dec(v_p_u2080_905_);
lean_dec_ref(v_s_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg(lean_object* v_pos_908_){
_start:
{
lean_inc(v_pos_908_);
return v_pos_908_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg___boxed(lean_object* v_pos_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_String_Slice_Pos_sliceTo___redArg(v_pos_909_);
lean_dec(v_pos_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo(lean_object* v_s_911_, lean_object* v_p_u2080_912_, lean_object* v_pos_913_, lean_object* v_h_914_){
_start:
{
lean_inc(v_pos_913_);
return v_pos_913_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___boxed(lean_object* v_s_915_, lean_object* v_p_u2080_916_, lean_object* v_pos_917_, lean_object* v_h_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_String_Slice_Pos_sliceTo(v_s_915_, v_p_u2080_916_, v_pos_917_, v_h_918_);
lean_dec(v_pos_917_);
lean_dec(v_p_u2080_916_);
lean_dec_ref(v_s_915_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg(lean_object* v_pos_920_){
_start:
{
lean_inc(v_pos_920_);
return v_pos_920_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg___boxed(lean_object* v_pos_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_String_Slice_Pos_toReplaceEnd___redArg(v_pos_921_);
lean_dec(v_pos_921_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd(lean_object* v_s_923_, lean_object* v_p_u2080_924_, lean_object* v_pos_925_, lean_object* v_h_926_){
_start:
{
lean_inc(v_pos_925_);
return v_pos_925_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___boxed(lean_object* v_s_927_, lean_object* v_p_u2080_928_, lean_object* v_pos_929_, lean_object* v_h_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_String_Slice_Pos_toReplaceEnd(v_s_927_, v_p_u2080_928_, v_pos_929_, v_h_930_);
lean_dec(v_pos_929_);
lean_dec(v_p_u2080_928_);
lean_dec_ref(v_s_927_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg(lean_object* v_s_932_, lean_object* v_pos_933_){
_start:
{
lean_object* v_str_934_; lean_object* v_startInclusive_935_; lean_object* v___x_936_; uint8_t v___x_937_; uint8_t v___x_938_; uint8_t v___x_939_; uint8_t v___x_940_; uint8_t v___x_941_; 
v_str_934_ = lean_ctor_get(v_s_932_, 0);
v_startInclusive_935_ = lean_ctor_get(v_s_932_, 1);
v___x_936_ = lean_nat_add(v_startInclusive_935_, v_pos_933_);
v___x_937_ = lean_string_get_byte_fast(v_str_934_, v___x_936_);
v___x_938_ = 128;
v___x_939_ = lean_uint8_land(v___x_937_, v___x_938_);
v___x_940_ = 0;
v___x_941_ = lean_uint8_dec_eq(v___x_939_, v___x_940_);
if (v___x_941_ == 0)
{
uint8_t v___x_942_; uint8_t v___x_943_; uint8_t v___x_944_; uint8_t v___x_945_; 
v___x_942_ = 224;
v___x_943_ = lean_uint8_land(v___x_937_, v___x_942_);
v___x_944_ = 192;
v___x_945_ = lean_uint8_dec_eq(v___x_943_, v___x_944_);
if (v___x_945_ == 0)
{
uint8_t v___x_946_; uint8_t v___x_947_; uint8_t v___x_948_; 
v___x_946_ = 240;
v___x_947_ = lean_uint8_land(v___x_937_, v___x_946_);
v___x_948_ = lean_uint8_dec_eq(v___x_947_, v___x_942_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_unsigned_to_nat(4u);
v___x_950_ = lean_nat_add(v_pos_933_, v___x_949_);
return v___x_950_;
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_unsigned_to_nat(3u);
v___x_952_ = lean_nat_add(v_pos_933_, v___x_951_);
return v___x_952_;
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(2u);
v___x_954_ = lean_nat_add(v_pos_933_, v___x_953_);
return v___x_954_;
}
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_unsigned_to_nat(1u);
v___x_956_ = lean_nat_add(v_pos_933_, v___x_955_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg___boxed(lean_object* v_s_957_, lean_object* v_pos_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_String_Slice_Pos_next___redArg(v_s_957_, v_pos_958_);
lean_dec(v_pos_958_);
lean_dec_ref(v_s_957_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next(lean_object* v_s_960_, lean_object* v_pos_961_, lean_object* v_h_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_String_Slice_Pos_next___redArg(v_s_960_, v_pos_961_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___boxed(lean_object* v_s_964_, lean_object* v_pos_965_, lean_object* v_h_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_String_Slice_Pos_next(v_s_964_, v_pos_965_, v_h_966_);
lean_dec(v_pos_965_);
lean_dec_ref(v_s_964_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f(lean_object* v_s_968_, lean_object* v_pos_969_){
_start:
{
lean_object* v_startInclusive_970_; lean_object* v_endExclusive_971_; lean_object* v___x_972_; uint8_t v_decide_973_; 
v_startInclusive_970_ = lean_ctor_get(v_s_968_, 1);
v_endExclusive_971_ = lean_ctor_get(v_s_968_, 2);
v___x_972_ = lean_nat_sub(v_endExclusive_971_, v_startInclusive_970_);
v_decide_973_ = lean_nat_dec_eq(v_pos_969_, v___x_972_);
lean_dec(v___x_972_);
if (v_decide_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = l_String_Slice_Pos_next___redArg(v_s_968_, v_pos_969_);
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = lean_box(0);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f___boxed(lean_object* v_s_977_, lean_object* v_pos_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_String_Slice_Pos_next_x3f(v_s_977_, v_pos_978_);
lean_dec(v_pos_978_);
lean_dec_ref(v_s_977_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(lean_object* v_msg_980_){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_panic_fn_borrowed(v___x_981_, v_msg_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0(lean_object* v_s_983_, lean_object* v_msg_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v_msg_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___boxed(lean_object* v_s_986_, lean_object* v_msg_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0(v_s_986_, v_msg_987_);
lean_dec_ref(v_s_986_);
return v_res_988_;
}
}
static lean_object* _init_l_String_Slice_Pos_next_x21___closed__2(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_991_ = ((lean_object*)(l_String_Slice_Pos_next_x21___closed__1));
v___x_992_ = lean_unsigned_to_nat(29u);
v___x_993_ = lean_unsigned_to_nat(1498u);
v___x_994_ = ((lean_object*)(l_String_Slice_Pos_next_x21___closed__0));
v___x_995_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_996_ = l_mkPanicMessageWithDecl(v___x_995_, v___x_994_, v___x_993_, v___x_992_, v___x_991_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21(lean_object* v_s_997_, lean_object* v_pos_998_){
_start:
{
lean_object* v_startInclusive_999_; lean_object* v_endExclusive_1000_; lean_object* v___x_1001_; uint8_t v_decide_1002_; 
v_startInclusive_999_ = lean_ctor_get(v_s_997_, 1);
v_endExclusive_1000_ = lean_ctor_get(v_s_997_, 2);
v___x_1001_ = lean_nat_sub(v_endExclusive_1000_, v_startInclusive_999_);
v_decide_1002_ = lean_nat_dec_eq(v_pos_998_, v___x_1001_);
lean_dec(v___x_1001_);
if (v_decide_1002_ == 0)
{
lean_object* v___x_1003_; 
v___x_1003_ = l_String_Slice_Pos_next___redArg(v_s_997_, v_pos_998_);
return v___x_1003_;
}
else
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_obj_once(&l_String_Slice_Pos_next_x21___closed__2, &l_String_Slice_Pos_next_x21___closed__2_once, _init_l_String_Slice_Pos_next_x21___closed__2);
v___x_1005_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v___x_1004_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21___boxed(lean_object* v_s_1006_, lean_object* v_pos_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_String_Slice_Pos_next_x21(v_s_1006_, v_pos_1007_);
lean_dec(v_pos_1007_);
lean_dec_ref(v_s_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg(lean_object* v_s_1009_, lean_object* v_off_1010_){
_start:
{
lean_object* v_str_1011_; lean_object* v_startInclusive_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; uint8_t v___x_1015_; uint8_t v___x_1016_; uint8_t v___x_1017_; uint8_t v___x_1018_; 
v_str_1011_ = lean_ctor_get(v_s_1009_, 0);
v_startInclusive_1012_ = lean_ctor_get(v_s_1009_, 1);
v___x_1013_ = lean_nat_add(v_startInclusive_1012_, v_off_1010_);
v___x_1014_ = lean_string_get_byte_fast(v_str_1011_, v___x_1013_);
v___x_1015_ = 128;
v___x_1016_ = lean_uint8_land(v___x_1014_, v___x_1015_);
v___x_1017_ = 0;
v___x_1018_ = lean_uint8_dec_eq(v___x_1016_, v___x_1017_);
if (v___x_1018_ == 0)
{
uint8_t v___x_1019_; uint8_t v___x_1020_; uint8_t v___x_1021_; uint8_t v___x_1022_; 
v___x_1019_ = 224;
v___x_1020_ = lean_uint8_land(v___x_1014_, v___x_1019_);
v___x_1021_ = 192;
v___x_1022_ = lean_uint8_dec_eq(v___x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
uint8_t v___x_1023_; uint8_t v___x_1024_; uint8_t v___x_1025_; 
v___x_1023_ = 240;
v___x_1024_ = lean_uint8_land(v___x_1014_, v___x_1023_);
v___x_1025_ = lean_uint8_dec_eq(v___x_1024_, v___x_1019_);
if (v___x_1025_ == 0)
{
uint8_t v___x_1026_; uint8_t v___x_1027_; uint8_t v___x_1028_; 
v___x_1026_ = 248;
v___x_1027_ = lean_uint8_land(v___x_1014_, v___x_1026_);
v___x_1028_ = lean_uint8_dec_eq(v___x_1027_, v___x_1023_);
if (v___x_1028_ == 0)
{
lean_object* v_zero_1029_; uint8_t v_isZero_1030_; lean_object* v_one_1031_; lean_object* v_n_1032_; 
v_zero_1029_ = lean_unsigned_to_nat(0u);
v_isZero_1030_ = lean_nat_dec_eq(v_off_1010_, v_zero_1029_);
v_one_1031_ = lean_unsigned_to_nat(1u);
v_n_1032_ = lean_nat_sub(v_off_1010_, v_one_1031_);
lean_dec(v_off_1010_);
v_off_1010_ = v_n_1032_;
goto _start;
}
else
{
return v_off_1010_;
}
}
else
{
return v_off_1010_;
}
}
else
{
return v_off_1010_;
}
}
else
{
return v_off_1010_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg___boxed(lean_object* v_s_1034_, lean_object* v_off_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1034_, v_off_1035_);
lean_dec_ref(v_s_1034_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go(lean_object* v_s_1037_, lean_object* v_off_1038_, lean_object* v_h_u2081_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1037_, v_off_1038_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___boxed(lean_object* v_s_1041_, lean_object* v_off_1042_, lean_object* v_h_u2081_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_String_Slice_Pos_prevAux_go(v_s_1041_, v_off_1042_, v_h_u2081_1043_);
lean_dec_ref(v_s_1041_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg(lean_object* v_s_1045_, lean_object* v_pos_1046_){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1047_ = lean_unsigned_to_nat(1u);
v___x_1048_ = lean_nat_sub(v_pos_1046_, v___x_1047_);
v___x_1049_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1045_, v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg___boxed(lean_object* v_s_1050_, lean_object* v_pos_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_String_Slice_Pos_prevAux___redArg(v_s_1050_, v_pos_1051_);
lean_dec(v_pos_1051_);
lean_dec_ref(v_s_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux(lean_object* v_s_1053_, lean_object* v_pos_1054_, lean_object* v_h_1055_){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = lean_nat_sub(v_pos_1054_, v___x_1056_);
v___x_1058_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1053_, v___x_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___boxed(lean_object* v_s_1059_, lean_object* v_pos_1060_, lean_object* v_h_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_String_Slice_Pos_prevAux(v_s_1059_, v_pos_1060_, v_h_1061_);
lean_dec(v_pos_1060_);
lean_dec_ref(v_s_1059_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(lean_object* v_off_1063_, lean_object* v_h__1_1064_, lean_object* v_h__2_1065_){
_start:
{
lean_object* v_zero_1066_; uint8_t v_isZero_1067_; 
v_zero_1066_ = lean_unsigned_to_nat(0u);
v_isZero_1067_ = lean_nat_dec_eq(v_off_1063_, v_zero_1066_);
if (v_isZero_1067_ == 1)
{
lean_object* v___x_1068_; 
lean_dec(v_h__2_1065_);
v___x_1068_ = lean_apply_3(v_h__1_1064_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1068_;
}
else
{
lean_object* v_one_1069_; lean_object* v_n_1070_; lean_object* v___x_1071_; 
lean_dec(v_h__1_1064_);
v_one_1069_ = lean_unsigned_to_nat(1u);
v_n_1070_ = lean_nat_sub(v_off_1063_, v_one_1069_);
v___x_1071_ = lean_apply_4(v_h__2_1065_, v_n_1070_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg___boxed(lean_object* v_off_1072_, lean_object* v_h__1_1073_, lean_object* v_h__2_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(v_off_1072_, v_h__1_1073_, v_h__2_1074_);
lean_dec(v_off_1072_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(lean_object* v_s_1076_, lean_object* v_motive_1077_, lean_object* v_off_1078_, lean_object* v_h_u2081_1079_, lean_object* v_hbyte_1080_, lean_object* v_this_1081_, lean_object* v_h__1_1082_, lean_object* v_h__2_1083_){
_start:
{
lean_object* v_zero_1084_; uint8_t v_isZero_1085_; 
v_zero_1084_ = lean_unsigned_to_nat(0u);
v_isZero_1085_ = lean_nat_dec_eq(v_off_1078_, v_zero_1084_);
if (v_isZero_1085_ == 1)
{
lean_object* v___x_1086_; 
lean_dec(v_h__2_1083_);
v___x_1086_ = lean_apply_3(v_h__1_1082_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1086_;
}
else
{
lean_object* v_one_1087_; lean_object* v_n_1088_; lean_object* v___x_1089_; 
lean_dec(v_h__1_1082_);
v_one_1087_ = lean_unsigned_to_nat(1u);
v_n_1088_ = lean_nat_sub(v_off_1078_, v_one_1087_);
v___x_1089_ = lean_apply_4(v_h__2_1083_, v_n_1088_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___boxed(lean_object* v_s_1090_, lean_object* v_motive_1091_, lean_object* v_off_1092_, lean_object* v_h_u2081_1093_, lean_object* v_hbyte_1094_, lean_object* v_this_1095_, lean_object* v_h__1_1096_, lean_object* v_h__2_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(v_s_1090_, v_motive_1091_, v_off_1092_, v_h_u2081_1093_, v_hbyte_1094_, v_this_1095_, v_h__1_1096_, v_h__2_1097_);
lean_dec(v_off_1092_);
lean_dec_ref(v_s_1090_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg(lean_object* v_off_1099_){
_start:
{
lean_inc(v_off_1099_);
return v_off_1099_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg___boxed(lean_object* v_off_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_String_Slice_pos___redArg(v_off_1100_);
lean_dec(v_off_1100_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos(lean_object* v_s_1102_, lean_object* v_off_1103_, lean_object* v_h_1104_){
_start:
{
lean_inc(v_off_1103_);
return v_off_1103_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___boxed(lean_object* v_s_1105_, lean_object* v_off_1106_, lean_object* v_h_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_String_Slice_pos(v_s_1105_, v_off_1106_, v_h_1107_);
lean_dec(v_off_1106_);
lean_dec_ref(v_s_1105_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f(lean_object* v_s_1109_, lean_object* v_off_1110_){
_start:
{
uint8_t v___x_1111_; 
v___x_1111_ = l_String_Pos_Raw_isValidForSlice(v_s_1109_, v_off_1110_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; 
lean_dec(v_off_1110_);
v___x_1112_ = lean_box(0);
return v___x_1112_;
}
else
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_off_1110_);
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f___boxed(lean_object* v_s_1114_, lean_object* v_off_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_String_Slice_pos_x3f(v_s_1114_, v_off_1115_);
lean_dec_ref(v_s_1114_);
return v_res_1116_;
}
}
static lean_object* _init_l_String_Slice_pos_x21___closed__2(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1119_ = ((lean_object*)(l_String_Slice_pos_x21___closed__1));
v___x_1120_ = lean_unsigned_to_nat(4u);
v___x_1121_ = lean_unsigned_to_nat(1586u);
v___x_1122_ = ((lean_object*)(l_String_Slice_pos_x21___closed__0));
v___x_1123_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1124_ = l_mkPanicMessageWithDecl(v___x_1123_, v___x_1122_, v___x_1121_, v___x_1120_, v___x_1119_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x21(lean_object* v_s_1125_, lean_object* v_off_1126_){
_start:
{
uint8_t v___x_1127_; 
v___x_1127_ = l_String_Pos_Raw_isValidForSlice(v_s_1125_, v_off_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_obj_once(&l_String_Slice_pos_x21___closed__2, &l_String_Slice_pos_x21___closed__2_once, _init_l_String_Slice_pos_x21___closed__2);
v___x_1129_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v___x_1128_);
return v___x_1129_;
}
else
{
lean_inc(v_off_1126_);
return v_off_1126_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x21___boxed(lean_object* v_s_1130_, lean_object* v_off_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_String_Slice_pos_x21(v_s_1130_, v_off_1131_);
lean_dec(v_off_1131_);
lean_dec_ref(v_s_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next___boxed(lean_object* v_s_1136_, lean_object* v_pos_1137_, lean_object* v_h_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = lean_string_utf8_next_fast(v_s_1136_, v_pos_1137_);
lean_dec(v_pos_1137_);
lean_dec_ref(v_s_1136_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x3f(lean_object* v_s_1140_, lean_object* v_pos_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1142_ = lean_unsigned_to_nat(0u);
v___x_1143_ = lean_string_utf8_byte_size(v_s_1140_);
v___x_1144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1144_, 0, v_s_1140_);
lean_ctor_set(v___x_1144_, 1, v___x_1142_);
lean_ctor_set(v___x_1144_, 2, v___x_1143_);
v___x_1145_ = l_String_Slice_Pos_next_x3f(v___x_1144_, v_pos_1141_);
lean_dec_ref_known(v___x_1144_, 3);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_box(0);
return v___x_1146_;
}
else
{
lean_object* v_val_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_val_1147_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1145_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_val_1147_);
lean_dec(v___x_1145_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_val_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x3f___boxed(lean_object* v_s_1155_, lean_object* v_pos_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_String_Pos_next_x3f(v_s_1155_, v_pos_1156_);
lean_dec(v_pos_1156_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x21(lean_object* v_s_1158_, lean_object* v_pos_1159_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1160_ = lean_unsigned_to_nat(0u);
v___x_1161_ = lean_string_utf8_byte_size(v_s_1158_);
v___x_1162_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1162_, 0, v_s_1158_);
lean_ctor_set(v___x_1162_, 1, v___x_1160_);
lean_ctor_set(v___x_1162_, 2, v___x_1161_);
v___x_1163_ = l_String_Slice_Pos_next_x21(v___x_1162_, v_pos_1159_);
lean_dec_ref_known(v___x_1162_, 3);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x21___boxed(lean_object* v_s_1164_, lean_object* v_pos_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_String_Pos_next_x21(v_s_1164_, v_pos_1165_);
lean_dec(v_pos_1165_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_String_pos___redArg(lean_object* v_off_1167_){
_start:
{
lean_inc(v_off_1167_);
return v_off_1167_;
}
}
LEAN_EXPORT lean_object* l_String_pos___redArg___boxed(lean_object* v_off_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_String_pos___redArg(v_off_1168_);
lean_dec(v_off_1168_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_String_pos(lean_object* v_s_1170_, lean_object* v_off_1171_, lean_object* v_h_1172_){
_start:
{
lean_inc(v_off_1171_);
return v_off_1171_;
}
}
LEAN_EXPORT lean_object* l_String_pos___boxed(lean_object* v_s_1173_, lean_object* v_off_1174_, lean_object* v_h_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_String_pos(v_s_1173_, v_off_1174_, v_h_1175_);
lean_dec(v_off_1174_);
lean_dec_ref(v_s_1173_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_String_pos_x3f(lean_object* v_s_1177_, lean_object* v_off_1178_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_string_utf8_byte_size(v_s_1177_);
v___x_1181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1181_, 0, v_s_1177_);
lean_ctor_set(v___x_1181_, 1, v___x_1179_);
lean_ctor_set(v___x_1181_, 2, v___x_1180_);
v___x_1182_ = l_String_Slice_pos_x3f(v___x_1181_, v_off_1178_);
lean_dec_ref_known(v___x_1181_, 3);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_box(0);
return v___x_1183_;
}
else
{
lean_object* v_val_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
v_val_1184_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1182_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_val_1184_);
lean_dec(v___x_1182_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_val_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_pos_x21(lean_object* v_s_1192_, lean_object* v_off_1193_){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = lean_string_utf8_byte_size(v_s_1192_);
v___x_1196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1196_, 0, v_s_1192_);
lean_ctor_set(v___x_1196_, 1, v___x_1194_);
lean_ctor_set(v___x_1196_, 2, v___x_1195_);
v___x_1197_ = l_String_Slice_pos_x21(v___x_1196_, v_off_1193_);
lean_dec_ref_known(v___x_1196_, 3);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_String_pos_x21___boxed(lean_object* v_s_1198_, lean_object* v_off_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_String_pos_x21(v_s_1198_, v_off_1199_);
lean_dec(v_off_1199_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg(lean_object* v_pos_1201_){
_start:
{
lean_inc(v_pos_1201_);
return v_pos_1201_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg___boxed(lean_object* v_pos_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_String_Slice_Pos_cast___redArg(v_pos_1202_);
lean_dec(v_pos_1202_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast(lean_object* v_s_1204_, lean_object* v_t_1205_, lean_object* v_pos_1206_, lean_object* v_h_1207_){
_start:
{
lean_inc(v_pos_1206_);
return v_pos_1206_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___boxed(lean_object* v_s_1208_, lean_object* v_t_1209_, lean_object* v_pos_1210_, lean_object* v_h_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_String_Slice_Pos_cast(v_s_1208_, v_t_1209_, v_pos_1210_, v_h_1211_);
lean_dec(v_pos_1210_);
lean_dec_ref(v_t_1209_);
lean_dec_ref(v_s_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg(lean_object* v_pos_1213_){
_start:
{
lean_inc(v_pos_1213_);
return v_pos_1213_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg___boxed(lean_object* v_pos_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_String_Pos_cast___redArg(v_pos_1214_);
lean_dec(v_pos_1214_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast(lean_object* v_s_1216_, lean_object* v_t_1217_, lean_object* v_pos_1218_, lean_object* v_h_1219_){
_start:
{
lean_inc(v_pos_1218_);
return v_pos_1218_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___boxed(lean_object* v_s_1220_, lean_object* v_t_1221_, lean_object* v_pos_1222_, lean_object* v_h_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_String_Pos_cast(v_s_1220_, v_t_1221_, v_pos_1222_, v_h_1223_);
lean_dec(v_pos_1222_);
lean_dec_ref(v_t_1221_);
lean_dec_ref(v_s_1220_);
return v_res_1224_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_Raw_utf8GetAux(lean_object* v_x_1225_, lean_object* v_x_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1225_) == 0)
{
uint32_t v___x_1228_; 
lean_dec(v_x_1226_);
v___x_1228_ = 65;
return v___x_1228_;
}
else
{
lean_object* v_head_1229_; lean_object* v_tail_1230_; lean_object* v___y_1232_; uint8_t v_decide_1235_; 
v_head_1229_ = lean_ctor_get(v_x_1225_, 0);
v_tail_1230_ = lean_ctor_get(v_x_1225_, 1);
v_decide_1235_ = lean_nat_dec_eq(v_x_1226_, v_x_1227_);
if (v_decide_1235_ == 0)
{
uint32_t v___x_1236_; uint32_t v___x_1237_; uint8_t v___x_1238_; 
v___x_1236_ = 127;
v___x_1237_ = lean_unbox_uint32(v_head_1229_);
v___x_1238_ = lean_uint32_dec_le(v___x_1237_, v___x_1236_);
if (v___x_1238_ == 0)
{
uint32_t v___x_1239_; uint32_t v___x_1240_; uint8_t v___x_1241_; 
v___x_1239_ = 2047;
v___x_1240_ = lean_unbox_uint32(v_head_1229_);
v___x_1241_ = lean_uint32_dec_le(v___x_1240_, v___x_1239_);
if (v___x_1241_ == 0)
{
uint32_t v___x_1242_; uint32_t v___x_1243_; uint8_t v___x_1244_; 
v___x_1242_ = 65535;
v___x_1243_ = lean_unbox_uint32(v_head_1229_);
v___x_1244_ = lean_uint32_dec_le(v___x_1243_, v___x_1242_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_unsigned_to_nat(4u);
v___y_1232_ = v___x_1245_;
goto v___jp_1231_;
}
else
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_unsigned_to_nat(3u);
v___y_1232_ = v___x_1246_;
goto v___jp_1231_;
}
}
else
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_unsigned_to_nat(2u);
v___y_1232_ = v___x_1247_;
goto v___jp_1231_;
}
}
else
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_unsigned_to_nat(1u);
v___y_1232_ = v___x_1248_;
goto v___jp_1231_;
}
}
else
{
uint32_t v___x_1249_; 
lean_dec(v_x_1226_);
v___x_1249_ = lean_unbox_uint32(v_head_1229_);
return v___x_1249_;
}
v___jp_1231_:
{
lean_object* v___x_1233_; 
v___x_1233_ = lean_nat_add(v_x_1226_, v___y_1232_);
lean_dec(v_x_1226_);
v_x_1225_ = v_tail_1230_;
v_x_1226_ = v___x_1233_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux___boxed(lean_object* v_x_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_){
_start:
{
uint32_t v_res_1253_; lean_object* v_r_1254_; 
v_res_1253_ = l_String_Pos_Raw_utf8GetAux(v_x_1250_, v_x_1251_, v_x_1252_);
lean_dec(v_x_1252_);
lean_dec(v_x_1250_);
v_r_1254_ = lean_box_uint32(v_res_1253_);
return v_r_1254_;
}
}
LEAN_EXPORT uint32_t l_String_utf8GetAux(lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
uint32_t v___x_1258_; 
v___x_1258_ = l_String_Pos_Raw_utf8GetAux(v_a_1255_, v_a_1256_, v_a_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux___boxed(lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
uint32_t v_res_1262_; lean_object* v_r_1263_; 
v_res_1262_ = l_String_utf8GetAux(v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec(v_a_1259_);
v_r_1263_ = lean_box_uint32(v_res_1262_);
return v_r_1263_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get___boxed(lean_object* v_s_1266_, lean_object* v_p_1267_){
_start:
{
uint32_t v_res_1268_; lean_object* v_r_1269_; 
v_res_1268_ = lean_string_utf8_get(v_s_1266_, v_p_1267_);
lean_dec(v_p_1267_);
lean_dec_ref(v_s_1266_);
v_r_1269_ = lean_box_uint32(v_res_1268_);
return v_r_1269_;
}
}
LEAN_EXPORT lean_object* l_String_get___boxed(lean_object* v_s_1272_, lean_object* v_p_1273_){
_start:
{
uint32_t v_res_1274_; lean_object* v_r_1275_; 
v_res_1274_ = lean_string_utf8_get(v_s_1272_, v_p_1273_);
lean_dec(v_p_1273_);
lean_dec_ref(v_s_1272_);
v_r_1275_ = lean_box_uint32(v_res_1274_);
return v_r_1275_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f(lean_object* v_x_1276_, lean_object* v_x_1277_, lean_object* v_x_1278_){
_start:
{
if (lean_obj_tag(v_x_1276_) == 0)
{
lean_object* v___x_1279_; 
lean_dec(v_x_1277_);
v___x_1279_ = lean_box(0);
return v___x_1279_;
}
else
{
lean_object* v_head_1280_; lean_object* v_tail_1281_; lean_object* v___y_1283_; uint8_t v_decide_1286_; 
v_head_1280_ = lean_ctor_get(v_x_1276_, 0);
v_tail_1281_ = lean_ctor_get(v_x_1276_, 1);
v_decide_1286_ = lean_nat_dec_eq(v_x_1277_, v_x_1278_);
if (v_decide_1286_ == 0)
{
uint32_t v___x_1287_; uint32_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = 127;
v___x_1288_ = lean_unbox_uint32(v_head_1280_);
v___x_1289_ = lean_uint32_dec_le(v___x_1288_, v___x_1287_);
if (v___x_1289_ == 0)
{
uint32_t v___x_1290_; uint32_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1290_ = 2047;
v___x_1291_ = lean_unbox_uint32(v_head_1280_);
v___x_1292_ = lean_uint32_dec_le(v___x_1291_, v___x_1290_);
if (v___x_1292_ == 0)
{
uint32_t v___x_1293_; uint32_t v___x_1294_; uint8_t v___x_1295_; 
v___x_1293_ = 65535;
v___x_1294_ = lean_unbox_uint32(v_head_1280_);
v___x_1295_ = lean_uint32_dec_le(v___x_1294_, v___x_1293_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_unsigned_to_nat(4u);
v___y_1283_ = v___x_1296_;
goto v___jp_1282_;
}
else
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_unsigned_to_nat(3u);
v___y_1283_ = v___x_1297_;
goto v___jp_1282_;
}
}
else
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_unsigned_to_nat(2u);
v___y_1283_ = v___x_1298_;
goto v___jp_1282_;
}
}
else
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_unsigned_to_nat(1u);
v___y_1283_ = v___x_1299_;
goto v___jp_1282_;
}
}
else
{
lean_object* v___x_1300_; 
lean_dec(v_x_1277_);
lean_inc(v_head_1280_);
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v_head_1280_);
return v___x_1300_;
}
v___jp_1282_:
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_nat_add(v_x_1277_, v___y_1283_);
lean_dec(v_x_1277_);
v_x_1276_ = v_tail_1281_;
v_x_1277_ = v___x_1284_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f___boxed(lean_object* v_x_1301_, lean_object* v_x_1302_, lean_object* v_x_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_String_Pos_Raw_utf8GetAux_x3f(v_x_1301_, v_x_1302_, v_x_1303_);
lean_dec(v_x_1303_);
lean_dec(v_x_1301_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f(lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_String_Pos_Raw_utf8GetAux_x3f(v_a_1305_, v_a_1306_, v_a_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f___boxed(lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_String_utf8GetAux_x3f(v_a_1309_, v_a_1310_, v_a_1311_);
lean_dec(v_a_1311_);
lean_dec(v_a_1309_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x3f___boxed(lean_object* v_a_00___x40___internal___hyg_1315_, lean_object* v_a_00___x40___internal___hyg_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = lean_string_utf8_get_opt(v_a_00___x40___internal___hyg_1315_, v_a_00___x40___internal___hyg_1316_);
lean_dec(v_a_00___x40___internal___hyg_1316_);
lean_dec_ref(v_a_00___x40___internal___hyg_1315_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_String_get_x3f___boxed(lean_object* v_a_00___x40___internal___hyg_1320_, lean_object* v_a_00___x40___internal___hyg_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = lean_string_utf8_get_opt(v_a_00___x40___internal___hyg_1320_, v_a_00___x40___internal___hyg_1321_);
lean_dec(v_a_00___x40___internal___hyg_1321_);
lean_dec_ref(v_a_00___x40___internal___hyg_1320_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x21___boxed(lean_object* v_s_1325_, lean_object* v_p_1326_){
_start:
{
uint32_t v_res_1327_; lean_object* v_r_1328_; 
v_res_1327_ = lean_string_utf8_get_bang(v_s_1325_, v_p_1326_);
lean_dec(v_p_1326_);
lean_dec_ref(v_s_1325_);
v_r_1328_ = lean_box_uint32(v_res_1327_);
return v_r_1328_;
}
}
LEAN_EXPORT lean_object* l_String_get_x21___boxed(lean_object* v_s_1331_, lean_object* v_p_1332_){
_start:
{
uint32_t v_res_1333_; lean_object* v_r_1334_; 
v_res_1333_ = lean_string_utf8_get_bang(v_s_1331_, v_p_1332_);
lean_dec(v_p_1332_);
lean_dec_ref(v_s_1331_);
v_r_1334_ = lean_box_uint32(v_res_1333_);
return v_r_1334_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux(uint32_t v_c_x27_1335_, lean_object* v_x_1336_, lean_object* v_x_1337_, lean_object* v_x_1338_){
_start:
{
if (lean_obj_tag(v_x_1336_) == 0)
{
return v_x_1336_;
}
else
{
lean_object* v_head_1339_; lean_object* v_tail_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1367_; 
v_head_1339_ = lean_ctor_get(v_x_1336_, 0);
v_tail_1340_ = lean_ctor_get(v_x_1336_, 1);
v_isSharedCheck_1367_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1342_ = v_x_1336_;
v_isShared_1343_ = v_isSharedCheck_1367_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_tail_1340_);
lean_inc(v_head_1339_);
lean_dec(v_x_1336_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1367_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___y_1345_; uint8_t v_decide_1351_; 
v_decide_1351_ = lean_nat_dec_eq(v_x_1337_, v_x_1338_);
if (v_decide_1351_ == 0)
{
uint32_t v___x_1352_; uint32_t v___x_1353_; uint8_t v___x_1354_; 
v___x_1352_ = 127;
v___x_1353_ = lean_unbox_uint32(v_head_1339_);
v___x_1354_ = lean_uint32_dec_le(v___x_1353_, v___x_1352_);
if (v___x_1354_ == 0)
{
uint32_t v___x_1355_; uint32_t v___x_1356_; uint8_t v___x_1357_; 
v___x_1355_ = 2047;
v___x_1356_ = lean_unbox_uint32(v_head_1339_);
v___x_1357_ = lean_uint32_dec_le(v___x_1356_, v___x_1355_);
if (v___x_1357_ == 0)
{
uint32_t v___x_1358_; uint32_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1358_ = 65535;
v___x_1359_ = lean_unbox_uint32(v_head_1339_);
v___x_1360_ = lean_uint32_dec_le(v___x_1359_, v___x_1358_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_unsigned_to_nat(4u);
v___y_1345_ = v___x_1361_;
goto v___jp_1344_;
}
else
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_unsigned_to_nat(3u);
v___y_1345_ = v___x_1362_;
goto v___jp_1344_;
}
}
else
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_unsigned_to_nat(2u);
v___y_1345_ = v___x_1363_;
goto v___jp_1344_;
}
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_unsigned_to_nat(1u);
v___y_1345_ = v___x_1364_;
goto v___jp_1344_;
}
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_del_object(v___x_1342_);
lean_dec(v_head_1339_);
v___x_1365_ = lean_box_uint32(v_c_x27_1335_);
v___x_1366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set(v___x_1366_, 1, v_tail_1340_);
return v___x_1366_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1346_ = lean_nat_add(v_x_1337_, v___y_1345_);
v___x_1347_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_1335_, v_tail_1340_, v___x_1346_, v_x_1338_);
lean_dec(v___x_1346_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 1, v___x_1347_);
v___x_1349_ = v___x_1342_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_head_1339_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux___boxed(lean_object* v_c_x27_1368_, lean_object* v_x_1369_, lean_object* v_x_1370_, lean_object* v_x_1371_){
_start:
{
uint32_t v_c_x27_boxed_1372_; lean_object* v_res_1373_; 
v_c_x27_boxed_1372_ = lean_unbox_uint32(v_c_x27_1368_);
lean_dec(v_c_x27_1368_);
v_res_1373_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_boxed_1372_, v_x_1369_, v_x_1370_, v_x_1371_);
lean_dec(v_x_1371_);
lean_dec(v_x_1370_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_String_utf8SetAux(uint32_t v_c_x27_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v___x_1378_; 
v___x_1378_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_String_utf8SetAux___boxed(lean_object* v_c_x27_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
uint32_t v_c_x27_boxed_1383_; lean_object* v_res_1384_; 
v_c_x27_boxed_1383_ = lean_unbox_uint32(v_c_x27_1379_);
lean_dec(v_c_x27_1379_);
v_res_1384_ = l_String_utf8SetAux(v_c_x27_boxed_1383_, v_a_1380_, v_a_1381_, v_a_1382_);
lean_dec(v_a_1382_);
lean_dec(v_a_1381_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg(lean_object* v_s_1385_, lean_object* v_pos_1386_){
_start:
{
lean_object* v_str_1387_; lean_object* v_startInclusive_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_str_1387_ = lean_ctor_get(v_s_1385_, 0);
v_startInclusive_1388_ = lean_ctor_get(v_s_1385_, 1);
v___x_1389_ = lean_nat_add(v_startInclusive_1388_, v_pos_1386_);
v___x_1390_ = lean_string_utf8_next_fast(v_str_1387_, v___x_1389_);
lean_dec(v___x_1389_);
v___x_1391_ = lean_nat_sub(v___x_1390_, v_startInclusive_1388_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg___boxed(lean_object* v_s_1392_, lean_object* v_pos_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_String_Slice_Pos_nextFast___redArg(v_s_1392_, v_pos_1393_);
lean_dec(v_pos_1393_);
lean_dec_ref(v_s_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast(lean_object* v_s_1395_, lean_object* v_pos_1396_, lean_object* v_h_1397_){
_start:
{
lean_object* v_str_1398_; lean_object* v_startInclusive_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_str_1398_ = lean_ctor_get(v_s_1395_, 0);
v_startInclusive_1399_ = lean_ctor_get(v_s_1395_, 1);
v___x_1400_ = lean_nat_add(v_startInclusive_1399_, v_pos_1396_);
v___x_1401_ = lean_string_utf8_next_fast(v_str_1398_, v___x_1400_);
lean_dec(v___x_1400_);
v___x_1402_ = lean_nat_sub(v___x_1401_, v_startInclusive_1399_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___boxed(lean_object* v_s_1403_, lean_object* v_pos_1404_, lean_object* v_h_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_String_Slice_Pos_nextFast(v_s_1403_, v_pos_1404_, v_h_1405_);
lean_dec(v_pos_1404_);
lean_dec_ref(v_s_1403_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_String_sliceTo(lean_object* v_s_1407_, lean_object* v_p_1408_){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1410_, 0, v_s_1407_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
lean_ctor_set(v___x_1410_, 2, v_p_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_String_replaceEnd(lean_object* v_s_1411_, lean_object* v_p_1412_){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_unsigned_to_nat(0u);
v___x_1414_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1414_, 0, v_s_1411_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
lean_ctor_set(v___x_1414_, 2, v_p_1412_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_String_sliceFrom(lean_object* v_s_1415_, lean_object* v_p_1416_){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = lean_string_utf8_byte_size(v_s_1415_);
v___x_1418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1418_, 0, v_s_1415_);
lean_ctor_set(v___x_1418_, 1, v_p_1416_);
lean_ctor_set(v___x_1418_, 2, v___x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStart(lean_object* v_s_1419_, lean_object* v_p_1420_){
_start:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_string_utf8_byte_size(v_s_1419_);
v___x_1422_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1422_, 0, v_s_1419_);
lean_ctor_set(v___x_1422_, 1, v_p_1420_);
lean_ctor_set(v___x_1422_, 2, v___x_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_String_slice___redArg(lean_object* v_s_1423_, lean_object* v_startInclusive_1424_, lean_object* v_endExclusive_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1426_, 0, v_s_1423_);
lean_ctor_set(v___x_1426_, 1, v_startInclusive_1424_);
lean_ctor_set(v___x_1426_, 2, v_endExclusive_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_String_slice(lean_object* v_s_1427_, lean_object* v_startInclusive_1428_, lean_object* v_endExclusive_1429_, lean_object* v_h_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1431_, 0, v_s_1427_);
lean_ctor_set(v___x_1431_, 1, v_startInclusive_1428_);
lean_ctor_set(v___x_1431_, 2, v_endExclusive_1429_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_String_slice_x3f(lean_object* v_s_1432_, lean_object* v_startInclusive_1433_, lean_object* v_endExclusive_1434_){
_start:
{
uint8_t v___x_1435_; 
v___x_1435_ = lean_nat_dec_le(v_startInclusive_1433_, v_endExclusive_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; 
lean_dec(v_endExclusive_1434_);
lean_dec(v_startInclusive_1433_);
lean_dec_ref(v_s_1432_);
v___x_1436_ = lean_box(0);
return v___x_1436_;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1437_, 0, v_s_1432_);
lean_ctor_set(v___x_1437_, 1, v_startInclusive_1433_);
lean_ctor_set(v___x_1437_, 2, v_endExclusive_1434_);
v___x_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* l_String_slice_x21(lean_object* v_s_1439_, lean_object* v_p_u2081_1440_, lean_object* v_p_u2082_1441_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = lean_unsigned_to_nat(0u);
v___x_1443_ = lean_string_utf8_byte_size(v_s_1439_);
v___x_1444_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1444_, 0, v_s_1439_);
lean_ctor_set(v___x_1444_, 1, v___x_1442_);
lean_ctor_set(v___x_1444_, 2, v___x_1443_);
v___x_1445_ = l_String_Slice_slice_x21(v___x_1444_, v_p_u2081_1440_, v_p_u2082_1441_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_String_slice_x21___boxed(lean_object* v_s_1446_, lean_object* v_p_u2081_1447_, lean_object* v_p_u2082_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_String_slice_x21(v_s_1446_, v_p_u2081_1447_, v_p_u2082_1448_);
lean_dec(v_p_u2082_1448_);
lean_dec(v_p_u2081_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21(lean_object* v_s_1450_, lean_object* v_p_u2081_1451_, lean_object* v_p_u2082_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_String_slice_x21(v_s_1450_, v_p_u2081_1451_, v_p_u2082_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21___boxed(lean_object* v_s_1454_, lean_object* v_p_u2081_1455_, lean_object* v_p_u2082_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_String_replaceStartEnd_x21(v_s_1454_, v_p_u2081_1455_, v_p_u2082_1456_);
lean_dec(v_p_u2082_1456_);
lean_dec(v_p_u2081_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg(lean_object* v_p_u2080_1458_, lean_object* v_pos_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_nat_add(v_p_u2080_1458_, v_pos_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg___boxed(lean_object* v_p_u2080_1461_, lean_object* v_pos_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_String_Pos_ofSliceFrom___redArg(v_p_u2080_1461_, v_pos_1462_);
lean_dec(v_pos_1462_);
lean_dec(v_p_u2080_1461_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom(lean_object* v_s_1464_, lean_object* v_p_u2080_1465_, lean_object* v_pos_1466_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_nat_add(v_p_u2080_1465_, v_pos_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___boxed(lean_object* v_s_1468_, lean_object* v_p_u2080_1469_, lean_object* v_pos_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_String_Pos_ofSliceFrom(v_s_1468_, v_p_u2080_1469_, v_pos_1470_);
lean_dec(v_pos_1470_);
lean_dec(v_p_u2080_1469_);
lean_dec_ref(v_s_1468_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg(lean_object* v_p_u2080_1472_, lean_object* v_pos_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = lean_nat_add(v_p_u2080_1472_, v_pos_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg___boxed(lean_object* v_p_u2080_1475_, lean_object* v_pos_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_String_Pos_ofReplaceStart___redArg(v_p_u2080_1475_, v_pos_1476_);
lean_dec(v_pos_1476_);
lean_dec(v_p_u2080_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart(lean_object* v_s_1478_, lean_object* v_p_u2080_1479_, lean_object* v_pos_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_nat_add(v_p_u2080_1479_, v_pos_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___boxed(lean_object* v_s_1482_, lean_object* v_p_u2080_1483_, lean_object* v_pos_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_String_Pos_ofReplaceStart(v_s_1482_, v_p_u2080_1483_, v_pos_1484_);
lean_dec(v_pos_1484_);
lean_dec(v_p_u2080_1483_);
lean_dec_ref(v_s_1482_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg(lean_object* v_p_u2080_1486_, lean_object* v_pos_1487_){
_start:
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_nat_sub(v_pos_1487_, v_p_u2080_1486_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg___boxed(lean_object* v_p_u2080_1489_, lean_object* v_pos_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_String_Pos_sliceFrom___redArg(v_p_u2080_1489_, v_pos_1490_);
lean_dec(v_pos_1490_);
lean_dec(v_p_u2080_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom(lean_object* v_s_1492_, lean_object* v_p_u2080_1493_, lean_object* v_pos_1494_, lean_object* v_h_1495_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = lean_nat_sub(v_pos_1494_, v_p_u2080_1493_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___boxed(lean_object* v_s_1497_, lean_object* v_p_u2080_1498_, lean_object* v_pos_1499_, lean_object* v_h_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_String_Pos_sliceFrom(v_s_1497_, v_p_u2080_1498_, v_pos_1499_, v_h_1500_);
lean_dec(v_pos_1499_);
lean_dec(v_p_u2080_1498_);
lean_dec_ref(v_s_1497_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg(lean_object* v_p_u2080_1502_, lean_object* v_pos_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_nat_sub(v_pos_1503_, v_p_u2080_1502_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg___boxed(lean_object* v_p_u2080_1505_, lean_object* v_pos_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_String_Pos_toReplaceStart___redArg(v_p_u2080_1505_, v_pos_1506_);
lean_dec(v_pos_1506_);
lean_dec(v_p_u2080_1505_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart(lean_object* v_s_1508_, lean_object* v_p_u2080_1509_, lean_object* v_pos_1510_, lean_object* v_h_1511_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_nat_sub(v_pos_1510_, v_p_u2080_1509_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___boxed(lean_object* v_s_1513_, lean_object* v_p_u2080_1514_, lean_object* v_pos_1515_, lean_object* v_h_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_String_Pos_toReplaceStart(v_s_1513_, v_p_u2080_1514_, v_pos_1515_, v_h_1516_);
lean_dec(v_pos_1515_);
lean_dec(v_p_u2080_1514_);
lean_dec_ref(v_s_1513_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg(lean_object* v_pos_1518_){
_start:
{
lean_inc(v_pos_1518_);
return v_pos_1518_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg___boxed(lean_object* v_pos_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_String_Pos_ofSliceTo___redArg(v_pos_1519_);
lean_dec(v_pos_1519_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo(lean_object* v_s_1521_, lean_object* v_p_u2080_1522_, lean_object* v_pos_1523_){
_start:
{
lean_inc(v_pos_1523_);
return v_pos_1523_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___boxed(lean_object* v_s_1524_, lean_object* v_p_u2080_1525_, lean_object* v_pos_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_String_Pos_ofSliceTo(v_s_1524_, v_p_u2080_1525_, v_pos_1526_);
lean_dec(v_pos_1526_);
lean_dec(v_p_u2080_1525_);
lean_dec_ref(v_s_1524_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg(lean_object* v_pos_1528_){
_start:
{
lean_inc(v_pos_1528_);
return v_pos_1528_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg___boxed(lean_object* v_pos_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_String_Pos_ofReplaceEnd___redArg(v_pos_1529_);
lean_dec(v_pos_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd(lean_object* v_s_1531_, lean_object* v_p_u2080_1532_, lean_object* v_pos_1533_){
_start:
{
lean_inc(v_pos_1533_);
return v_pos_1533_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___boxed(lean_object* v_s_1534_, lean_object* v_p_u2080_1535_, lean_object* v_pos_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_String_Pos_ofReplaceEnd(v_s_1534_, v_p_u2080_1535_, v_pos_1536_);
lean_dec(v_pos_1536_);
lean_dec(v_p_u2080_1535_);
lean_dec_ref(v_s_1534_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg(lean_object* v_pos_1538_){
_start:
{
lean_inc(v_pos_1538_);
return v_pos_1538_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg___boxed(lean_object* v_pos_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_String_Pos_sliceTo___redArg(v_pos_1539_);
lean_dec(v_pos_1539_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo(lean_object* v_s_1541_, lean_object* v_p_u2080_1542_, lean_object* v_pos_1543_, lean_object* v_h_1544_){
_start:
{
lean_inc(v_pos_1543_);
return v_pos_1543_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___boxed(lean_object* v_s_1545_, lean_object* v_p_u2080_1546_, lean_object* v_pos_1547_, lean_object* v_h_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_String_Pos_sliceTo(v_s_1545_, v_p_u2080_1546_, v_pos_1547_, v_h_1548_);
lean_dec(v_pos_1547_);
lean_dec(v_p_u2080_1546_);
lean_dec_ref(v_s_1545_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg(lean_object* v_pos_1550_){
_start:
{
lean_inc(v_pos_1550_);
return v_pos_1550_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg___boxed(lean_object* v_pos_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_String_Pos_toReplaceEnd___redArg(v_pos_1551_);
lean_dec(v_pos_1551_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd(lean_object* v_s_1553_, lean_object* v_p_u2080_1554_, lean_object* v_pos_1555_, lean_object* v_h_1556_){
_start:
{
lean_inc(v_pos_1555_);
return v_pos_1555_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___boxed(lean_object* v_s_1557_, lean_object* v_p_u2080_1558_, lean_object* v_pos_1559_, lean_object* v_h_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_String_Pos_toReplaceEnd(v_s_1557_, v_p_u2080_1558_, v_pos_1559_, v_h_1560_);
lean_dec(v_pos_1559_);
lean_dec(v_p_u2080_1558_);
lean_dec_ref(v_s_1557_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg(lean_object* v_p_u2080_1562_, lean_object* v_pos_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_nat_add(v_p_u2080_1562_, v_pos_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg___boxed(lean_object* v_p_u2080_1565_, lean_object* v_pos_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_String_Slice_Pos_ofSlice___redArg(v_p_u2080_1565_, v_pos_1566_);
lean_dec(v_pos_1566_);
lean_dec(v_p_u2080_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice(lean_object* v_s_1568_, lean_object* v_p_u2080_1569_, lean_object* v_p_u2081_1570_, lean_object* v_h_1571_, lean_object* v_pos_1572_){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_nat_add(v_p_u2080_1569_, v_pos_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___boxed(lean_object* v_s_1574_, lean_object* v_p_u2080_1575_, lean_object* v_p_u2081_1576_, lean_object* v_h_1577_, lean_object* v_pos_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_String_Slice_Pos_ofSlice(v_s_1574_, v_p_u2080_1575_, v_p_u2081_1576_, v_h_1577_, v_pos_1578_);
lean_dec(v_pos_1578_);
lean_dec(v_p_u2081_1576_);
lean_dec(v_p_u2080_1575_);
lean_dec_ref(v_s_1574_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg(lean_object* v_p_u2080_1580_, lean_object* v_pos_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_nat_add(v_p_u2080_1580_, v_pos_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg___boxed(lean_object* v_p_u2080_1583_, lean_object* v_pos_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_String_Pos_ofSlice___redArg(v_p_u2080_1583_, v_pos_1584_);
lean_dec(v_pos_1584_);
lean_dec(v_p_u2080_1583_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice(lean_object* v_s_1586_, lean_object* v_p_u2080_1587_, lean_object* v_p_u2081_1588_, lean_object* v_h_1589_, lean_object* v_pos_1590_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_nat_add(v_p_u2080_1587_, v_pos_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___boxed(lean_object* v_s_1592_, lean_object* v_p_u2080_1593_, lean_object* v_p_u2081_1594_, lean_object* v_h_1595_, lean_object* v_pos_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_String_Pos_ofSlice(v_s_1592_, v_p_u2080_1593_, v_p_u2081_1594_, v_h_1595_, v_pos_1596_);
lean_dec(v_pos_1596_);
lean_dec(v_p_u2081_1594_);
lean_dec(v_p_u2080_1593_);
lean_dec_ref(v_s_1592_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg(lean_object* v_pos_1598_, lean_object* v_p_u2080_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_nat_sub(v_pos_1598_, v_p_u2080_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg___boxed(lean_object* v_pos_1601_, lean_object* v_p_u2080_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_String_Slice_Pos_slice___redArg(v_pos_1601_, v_p_u2080_1602_);
lean_dec(v_p_u2080_1602_);
lean_dec(v_pos_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice(lean_object* v_s_1604_, lean_object* v_pos_1605_, lean_object* v_p_u2080_1606_, lean_object* v_p_u2081_1607_, lean_object* v_h_u2081_1608_, lean_object* v_h_u2082_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_nat_sub(v_pos_1605_, v_p_u2080_1606_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___boxed(lean_object* v_s_1611_, lean_object* v_pos_1612_, lean_object* v_p_u2080_1613_, lean_object* v_p_u2081_1614_, lean_object* v_h_u2081_1615_, lean_object* v_h_u2082_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_String_Slice_Pos_slice(v_s_1611_, v_pos_1612_, v_p_u2080_1613_, v_p_u2081_1614_, v_h_u2081_1615_, v_h_u2082_1616_);
lean_dec(v_p_u2081_1614_);
lean_dec(v_p_u2080_1613_);
lean_dec(v_pos_1612_);
lean_dec_ref(v_s_1611_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg(lean_object* v_pos_1618_, lean_object* v_p_u2080_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_nat_sub(v_pos_1618_, v_p_u2080_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg___boxed(lean_object* v_pos_1621_, lean_object* v_p_u2080_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_String_Pos_slice___redArg(v_pos_1621_, v_p_u2080_1622_);
lean_dec(v_p_u2080_1622_);
lean_dec(v_pos_1621_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice(lean_object* v_s_1624_, lean_object* v_pos_1625_, lean_object* v_p_u2080_1626_, lean_object* v_p_u2081_1627_, lean_object* v_h_u2081_1628_, lean_object* v_h_u2082_1629_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_nat_sub(v_pos_1625_, v_p_u2080_1626_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___boxed(lean_object* v_s_1631_, lean_object* v_pos_1632_, lean_object* v_p_u2080_1633_, lean_object* v_p_u2081_1634_, lean_object* v_h_u2081_1635_, lean_object* v_h_u2082_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_String_Pos_slice(v_s_1631_, v_pos_1632_, v_p_u2080_1633_, v_p_u2081_1634_, v_h_u2081_1635_, v_h_u2082_1636_);
lean_dec(v_p_u2081_1634_);
lean_dec(v_p_u2080_1633_);
lean_dec(v_pos_1632_);
lean_dec_ref(v_s_1631_);
return v_res_1637_;
}
}
static lean_object* _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2(void){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1640_ = ((lean_object*)(l_String_Slice_Pos_sliceOrPanic___redArg___closed__1));
v___x_1641_ = lean_unsigned_to_nat(4u);
v___x_1642_ = lean_unsigned_to_nat(2601u);
v___x_1643_ = ((lean_object*)(l_String_Slice_Pos_sliceOrPanic___redArg___closed__0));
v___x_1644_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1645_ = l_mkPanicMessageWithDecl(v___x_1644_, v___x_1643_, v___x_1642_, v___x_1641_, v___x_1640_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg(lean_object* v_pos_1646_, lean_object* v_p_u2080_1647_, lean_object* v_p_u2081_1648_){
_start:
{
uint8_t v___x_1653_; 
v___x_1653_ = lean_nat_dec_le(v_p_u2080_1647_, v_pos_1646_);
if (v___x_1653_ == 0)
{
goto v___jp_1649_;
}
else
{
uint8_t v___x_1654_; 
v___x_1654_ = lean_nat_dec_le(v_pos_1646_, v_p_u2081_1648_);
if (v___x_1654_ == 0)
{
goto v___jp_1649_;
}
else
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_nat_sub(v_pos_1646_, v_p_u2080_1647_);
return v___x_1655_;
}
}
v___jp_1649_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = lean_unsigned_to_nat(0u);
v___x_1651_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1652_ = l_panic___redArg(v___x_1650_, v___x_1651_);
return v___x_1652_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___boxed(lean_object* v_pos_1656_, lean_object* v_p_u2080_1657_, lean_object* v_p_u2081_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_String_Slice_Pos_sliceOrPanic___redArg(v_pos_1656_, v_p_u2080_1657_, v_p_u2081_1658_);
lean_dec(v_p_u2081_1658_);
lean_dec(v_p_u2080_1657_);
lean_dec(v_pos_1656_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic(lean_object* v_s_1660_, lean_object* v_pos_1661_, lean_object* v_p_u2080_1662_, lean_object* v_p_u2081_1663_, lean_object* v_h_1664_){
_start:
{
uint8_t v___x_1669_; 
v___x_1669_ = lean_nat_dec_le(v_p_u2080_1662_, v_pos_1661_);
if (v___x_1669_ == 0)
{
goto v___jp_1665_;
}
else
{
uint8_t v___x_1670_; 
v___x_1670_ = lean_nat_dec_le(v_pos_1661_, v_p_u2081_1663_);
if (v___x_1670_ == 0)
{
goto v___jp_1665_;
}
else
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_nat_sub(v_pos_1661_, v_p_u2080_1662_);
return v___x_1671_;
}
}
v___jp_1665_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1668_ = l_panic___redArg(v___x_1666_, v___x_1667_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___boxed(lean_object* v_s_1672_, lean_object* v_pos_1673_, lean_object* v_p_u2080_1674_, lean_object* v_p_u2081_1675_, lean_object* v_h_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_String_Slice_Pos_sliceOrPanic(v_s_1672_, v_pos_1673_, v_p_u2080_1674_, v_p_u2081_1675_, v_h_1676_);
lean_dec(v_p_u2081_1675_);
lean_dec(v_p_u2080_1674_);
lean_dec(v_pos_1673_);
lean_dec_ref(v_s_1672_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg(lean_object* v_pos_1678_, lean_object* v_p_u2080_1679_, lean_object* v_p_u2081_1680_){
_start:
{
uint8_t v___x_1685_; 
v___x_1685_ = lean_nat_dec_le(v_p_u2080_1679_, v_pos_1678_);
if (v___x_1685_ == 0)
{
goto v___jp_1681_;
}
else
{
uint8_t v___x_1686_; 
v___x_1686_ = lean_nat_dec_le(v_pos_1678_, v_p_u2081_1680_);
if (v___x_1686_ == 0)
{
goto v___jp_1681_;
}
else
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_nat_sub(v_pos_1678_, v_p_u2080_1679_);
return v___x_1687_;
}
}
v___jp_1681_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1682_ = lean_unsigned_to_nat(0u);
v___x_1683_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1684_ = l_panic___redArg(v___x_1682_, v___x_1683_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg___boxed(lean_object* v_pos_1688_, lean_object* v_p_u2080_1689_, lean_object* v_p_u2081_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_String_Pos_sliceOrPanic___redArg(v_pos_1688_, v_p_u2080_1689_, v_p_u2081_1690_);
lean_dec(v_p_u2081_1690_);
lean_dec(v_p_u2080_1689_);
lean_dec(v_pos_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic(lean_object* v_s_1692_, lean_object* v_pos_1693_, lean_object* v_p_u2080_1694_, lean_object* v_p_u2081_1695_, lean_object* v_h_1696_){
_start:
{
uint8_t v___x_1701_; 
v___x_1701_ = lean_nat_dec_le(v_p_u2080_1694_, v_pos_1693_);
if (v___x_1701_ == 0)
{
goto v___jp_1697_;
}
else
{
uint8_t v___x_1702_; 
v___x_1702_ = lean_nat_dec_le(v_pos_1693_, v_p_u2081_1695_);
if (v___x_1702_ == 0)
{
goto v___jp_1697_;
}
else
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_nat_sub(v_pos_1693_, v_p_u2080_1694_);
return v___x_1703_;
}
}
v___jp_1697_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = lean_unsigned_to_nat(0u);
v___x_1699_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1700_ = l_panic___redArg(v___x_1698_, v___x_1699_);
return v___x_1700_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___boxed(lean_object* v_s_1704_, lean_object* v_pos_1705_, lean_object* v_p_u2080_1706_, lean_object* v_p_u2081_1707_, lean_object* v_h_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_String_Pos_sliceOrPanic(v_s_1704_, v_pos_1705_, v_p_u2080_1706_, v_p_u2081_1707_, v_h_1708_);
lean_dec(v_p_u2081_1707_);
lean_dec(v_p_u2080_1706_);
lean_dec(v_pos_1705_);
lean_dec_ref(v_s_1704_);
return v_res_1709_;
}
}
static lean_object* _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1711_ = ((lean_object*)(l_String_Slice_slice_x21___closed__1));
v___x_1712_ = lean_unsigned_to_nat(4u);
v___x_1713_ = lean_unsigned_to_nat(2625u);
v___x_1714_ = ((lean_object*)(l_String_Slice_Pos_ofSlice_x21___redArg___closed__0));
v___x_1715_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1716_ = l_mkPanicMessageWithDecl(v___x_1715_, v___x_1714_, v___x_1713_, v___x_1712_, v___x_1711_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg(lean_object* v_p_u2080_1717_, lean_object* v_p_u2081_1718_, lean_object* v_pos_1719_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_nat_dec_le(v_p_u2080_1717_, v_p_u2081_1718_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = lean_unsigned_to_nat(0u);
v___x_1722_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1723_ = l_panic___redArg(v___x_1721_, v___x_1722_);
return v___x_1723_;
}
else
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_nat_add(v_p_u2080_1717_, v_pos_1719_);
return v___x_1724_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___boxed(lean_object* v_p_u2080_1725_, lean_object* v_p_u2081_1726_, lean_object* v_pos_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_String_Slice_Pos_ofSlice_x21___redArg(v_p_u2080_1725_, v_p_u2081_1726_, v_pos_1727_);
lean_dec(v_pos_1727_);
lean_dec(v_p_u2081_1726_);
lean_dec(v_p_u2080_1725_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21(lean_object* v_s_1729_, lean_object* v_p_u2080_1730_, lean_object* v_p_u2081_1731_, lean_object* v_pos_1732_){
_start:
{
uint8_t v___x_1733_; 
v___x_1733_ = lean_nat_dec_le(v_p_u2080_1730_, v_p_u2081_1731_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1736_ = l_panic___redArg(v___x_1734_, v___x_1735_);
return v___x_1736_;
}
else
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_nat_add(v_p_u2080_1730_, v_pos_1732_);
return v___x_1737_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___boxed(lean_object* v_s_1738_, lean_object* v_p_u2080_1739_, lean_object* v_p_u2081_1740_, lean_object* v_pos_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_String_Slice_Pos_ofSlice_x21(v_s_1738_, v_p_u2080_1739_, v_p_u2081_1740_, v_pos_1741_);
lean_dec(v_pos_1741_);
lean_dec(v_p_u2081_1740_);
lean_dec(v_p_u2080_1739_);
lean_dec_ref(v_s_1738_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg(lean_object* v_p_u2080_1743_, lean_object* v_p_u2081_1744_, lean_object* v_pos_1745_){
_start:
{
uint8_t v___x_1746_; 
v___x_1746_ = lean_nat_dec_le(v_p_u2080_1743_, v_p_u2081_1744_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1747_ = lean_unsigned_to_nat(0u);
v___x_1748_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1749_ = l_panic___redArg(v___x_1747_, v___x_1748_);
return v___x_1749_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_nat_add(v_p_u2080_1743_, v_pos_1745_);
return v___x_1750_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg___boxed(lean_object* v_p_u2080_1751_, lean_object* v_p_u2081_1752_, lean_object* v_pos_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_String_Pos_ofSlice_x21___redArg(v_p_u2080_1751_, v_p_u2081_1752_, v_pos_1753_);
lean_dec(v_pos_1753_);
lean_dec(v_p_u2081_1752_);
lean_dec(v_p_u2080_1751_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21(lean_object* v_s_1755_, lean_object* v_p_u2080_1756_, lean_object* v_p_u2081_1757_, lean_object* v_pos_1758_){
_start:
{
uint8_t v___x_1759_; 
v___x_1759_ = lean_nat_dec_le(v_p_u2080_1756_, v_p_u2081_1757_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1762_ = l_panic___redArg(v___x_1760_, v___x_1761_);
return v___x_1762_;
}
else
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_nat_add(v_p_u2080_1756_, v_pos_1758_);
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___boxed(lean_object* v_s_1764_, lean_object* v_p_u2080_1765_, lean_object* v_p_u2081_1766_, lean_object* v_pos_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_String_Pos_ofSlice_x21(v_s_1764_, v_p_u2080_1765_, v_p_u2081_1766_, v_pos_1767_);
lean_dec(v_pos_1767_);
lean_dec(v_p_u2081_1766_);
lean_dec(v_p_u2080_1765_);
lean_dec_ref(v_s_1764_);
return v_res_1768_;
}
}
static lean_object* _init_l_String_Slice_Pos_slice_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1771_ = ((lean_object*)(l_String_Slice_Pos_slice_x21___redArg___closed__1));
v___x_1772_ = lean_unsigned_to_nat(4u);
v___x_1773_ = lean_unsigned_to_nat(2643u);
v___x_1774_ = ((lean_object*)(l_String_Slice_Pos_slice_x21___redArg___closed__0));
v___x_1775_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1776_ = l_mkPanicMessageWithDecl(v___x_1775_, v___x_1774_, v___x_1773_, v___x_1772_, v___x_1771_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg(lean_object* v_pos_1777_, lean_object* v_p_u2080_1778_, lean_object* v_p_u2081_1779_){
_start:
{
uint8_t v___x_1784_; 
v___x_1784_ = lean_nat_dec_le(v_p_u2080_1778_, v_pos_1777_);
if (v___x_1784_ == 0)
{
goto v___jp_1780_;
}
else
{
uint8_t v___x_1785_; 
v___x_1785_ = lean_nat_dec_le(v_pos_1777_, v_p_u2081_1779_);
if (v___x_1785_ == 0)
{
goto v___jp_1780_;
}
else
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_nat_sub(v_pos_1777_, v_p_u2080_1778_);
return v___x_1786_;
}
}
v___jp_1780_:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = lean_unsigned_to_nat(0u);
v___x_1782_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1783_ = l_panic___redArg(v___x_1781_, v___x_1782_);
return v___x_1783_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg___boxed(lean_object* v_pos_1787_, lean_object* v_p_u2080_1788_, lean_object* v_p_u2081_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_String_Slice_Pos_slice_x21___redArg(v_pos_1787_, v_p_u2080_1788_, v_p_u2081_1789_);
lean_dec(v_p_u2081_1789_);
lean_dec(v_p_u2080_1788_);
lean_dec(v_pos_1787_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21(lean_object* v_s_1791_, lean_object* v_pos_1792_, lean_object* v_p_u2080_1793_, lean_object* v_p_u2081_1794_){
_start:
{
uint8_t v___x_1799_; 
v___x_1799_ = lean_nat_dec_le(v_p_u2080_1793_, v_pos_1792_);
if (v___x_1799_ == 0)
{
goto v___jp_1795_;
}
else
{
uint8_t v___x_1800_; 
v___x_1800_ = lean_nat_dec_le(v_pos_1792_, v_p_u2081_1794_);
if (v___x_1800_ == 0)
{
goto v___jp_1795_;
}
else
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_nat_sub(v_pos_1792_, v_p_u2080_1793_);
return v___x_1801_;
}
}
v___jp_1795_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_unsigned_to_nat(0u);
v___x_1797_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1798_ = l_panic___redArg(v___x_1796_, v___x_1797_);
return v___x_1798_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___boxed(lean_object* v_s_1802_, lean_object* v_pos_1803_, lean_object* v_p_u2080_1804_, lean_object* v_p_u2081_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_String_Slice_Pos_slice_x21(v_s_1802_, v_pos_1803_, v_p_u2080_1804_, v_p_u2081_1805_);
lean_dec(v_p_u2081_1805_);
lean_dec(v_p_u2080_1804_);
lean_dec(v_pos_1803_);
lean_dec_ref(v_s_1802_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg(lean_object* v_pos_1807_, lean_object* v_p_u2080_1808_, lean_object* v_p_u2081_1809_){
_start:
{
uint8_t v___x_1814_; 
v___x_1814_ = lean_nat_dec_le(v_p_u2080_1808_, v_pos_1807_);
if (v___x_1814_ == 0)
{
goto v___jp_1810_;
}
else
{
uint8_t v___x_1815_; 
v___x_1815_ = lean_nat_dec_le(v_pos_1807_, v_p_u2081_1809_);
if (v___x_1815_ == 0)
{
goto v___jp_1810_;
}
else
{
lean_object* v___x_1816_; 
v___x_1816_ = lean_nat_sub(v_pos_1807_, v_p_u2080_1808_);
return v___x_1816_;
}
}
v___jp_1810_:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = lean_unsigned_to_nat(0u);
v___x_1812_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1813_ = l_panic___redArg(v___x_1811_, v___x_1812_);
return v___x_1813_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg___boxed(lean_object* v_pos_1817_, lean_object* v_p_u2080_1818_, lean_object* v_p_u2081_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_String_Pos_slice_x21___redArg(v_pos_1817_, v_p_u2080_1818_, v_p_u2081_1819_);
lean_dec(v_p_u2081_1819_);
lean_dec(v_p_u2080_1818_);
lean_dec(v_pos_1817_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21(lean_object* v_s_1821_, lean_object* v_pos_1822_, lean_object* v_p_u2080_1823_, lean_object* v_p_u2081_1824_){
_start:
{
uint8_t v___x_1829_; 
v___x_1829_ = lean_nat_dec_le(v_p_u2080_1823_, v_pos_1822_);
if (v___x_1829_ == 0)
{
goto v___jp_1825_;
}
else
{
uint8_t v___x_1830_; 
v___x_1830_ = lean_nat_dec_le(v_pos_1822_, v_p_u2081_1824_);
if (v___x_1830_ == 0)
{
goto v___jp_1825_;
}
else
{
lean_object* v___x_1831_; 
v___x_1831_ = lean_nat_sub(v_pos_1822_, v_p_u2080_1823_);
return v___x_1831_;
}
}
v___jp_1825_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = lean_unsigned_to_nat(0u);
v___x_1827_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1828_ = l_panic___redArg(v___x_1826_, v___x_1827_);
return v___x_1828_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___boxed(lean_object* v_s_1832_, lean_object* v_pos_1833_, lean_object* v_p_u2080_1834_, lean_object* v_p_u2081_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_String_Pos_slice_x21(v_s_1832_, v_pos_1833_, v_p_u2080_1834_, v_p_u2081_1835_);
lean_dec(v_p_u2081_1835_);
lean_dec(v_p_u2080_1834_);
lean_dec(v_pos_1833_);
lean_dec_ref(v_s_1832_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_extract(lean_object* v_s_1837_, lean_object* v_p_u2080_1838_, lean_object* v_p_u2081_1839_){
_start:
{
lean_object* v_str_1840_; lean_object* v_startInclusive_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_str_1840_ = lean_ctor_get(v_s_1837_, 0);
v_startInclusive_1841_ = lean_ctor_get(v_s_1837_, 1);
v___x_1842_ = lean_nat_add(v_startInclusive_1841_, v_p_u2080_1838_);
v___x_1843_ = lean_nat_add(v_startInclusive_1841_, v_p_u2081_1839_);
v___x_1844_ = lean_string_utf8_extract_fast(v_str_1840_, v___x_1842_, v___x_1843_);
lean_dec(v___x_1843_);
lean_dec(v___x_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_extract___boxed(lean_object* v_s_1845_, lean_object* v_p_u2080_1846_, lean_object* v_p_u2081_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_String_Slice_extract(v_s_1845_, v_p_u2080_1846_, v_p_u2081_1847_);
lean_dec(v_p_u2081_1847_);
lean_dec(v_p_u2080_1846_);
lean_dec_ref(v_s_1845_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn(lean_object* v_s_1849_, lean_object* v_p_1850_, lean_object* v_n_1851_){
_start:
{
lean_object* v_zero_1852_; uint8_t v_isZero_1853_; 
v_zero_1852_ = lean_unsigned_to_nat(0u);
v_isZero_1853_ = lean_nat_dec_eq(v_n_1851_, v_zero_1852_);
if (v_isZero_1853_ == 1)
{
lean_dec(v_n_1851_);
return v_p_1850_;
}
else
{
lean_object* v_str_1854_; lean_object* v_startInclusive_1855_; lean_object* v_endExclusive_1856_; lean_object* v___x_1857_; uint8_t v_decide_1858_; 
v_str_1854_ = lean_ctor_get(v_s_1849_, 0);
v_startInclusive_1855_ = lean_ctor_get(v_s_1849_, 1);
v_endExclusive_1856_ = lean_ctor_get(v_s_1849_, 2);
v___x_1857_ = lean_nat_sub(v_endExclusive_1856_, v_startInclusive_1855_);
v_decide_1858_ = lean_nat_dec_eq(v_p_1850_, v___x_1857_);
lean_dec(v___x_1857_);
if (v_decide_1858_ == 0)
{
lean_object* v_one_1859_; lean_object* v_n_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v_one_1859_ = lean_unsigned_to_nat(1u);
v_n_1860_ = lean_nat_sub(v_n_1851_, v_one_1859_);
lean_dec(v_n_1851_);
v___x_1861_ = lean_nat_add(v_startInclusive_1855_, v_p_1850_);
lean_dec(v_p_1850_);
v___x_1862_ = lean_string_utf8_next_fast(v_str_1854_, v___x_1861_);
lean_dec(v___x_1861_);
v___x_1863_ = lean_nat_sub(v___x_1862_, v_startInclusive_1855_);
v_p_1850_ = v___x_1863_;
v_n_1851_ = v_n_1860_;
goto _start;
}
else
{
lean_dec(v_n_1851_);
return v_p_1850_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn___boxed(lean_object* v_s_1865_, lean_object* v_p_1866_, lean_object* v_n_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_String_Slice_Pos_nextn(v_s_1865_, v_p_1866_, v_n_1867_);
lean_dec_ref(v_s_1865_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_nextn(lean_object* v_s_1869_, lean_object* v_p_1870_, lean_object* v_n_1871_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1872_ = lean_unsigned_to_nat(0u);
v___x_1873_ = lean_string_utf8_byte_size(v_s_1869_);
v___x_1874_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1874_, 0, v_s_1869_);
lean_ctor_set(v___x_1874_, 1, v___x_1872_);
lean_ctor_set(v___x_1874_, 2, v___x_1873_);
v___x_1875_ = l_String_Slice_Pos_nextn(v___x_1874_, v_p_1870_, v_n_1871_);
lean_dec_ref_known(v___x_1874_, 3);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(lean_object* v_n_1876_, lean_object* v_h__1_1877_, lean_object* v_h__2_1878_){
_start:
{
lean_object* v_zero_1879_; uint8_t v_isZero_1880_; 
v_zero_1879_ = lean_unsigned_to_nat(0u);
v_isZero_1880_ = lean_nat_dec_eq(v_n_1876_, v_zero_1879_);
if (v_isZero_1880_ == 1)
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
lean_dec(v_h__2_1878_);
v___x_1881_ = lean_box(0);
v___x_1882_ = lean_apply_1(v_h__1_1877_, v___x_1881_);
return v___x_1882_;
}
else
{
lean_object* v_one_1883_; lean_object* v_n_1884_; lean_object* v___x_1885_; 
lean_dec(v_h__1_1877_);
v_one_1883_ = lean_unsigned_to_nat(1u);
v_n_1884_ = lean_nat_sub(v_n_1876_, v_one_1883_);
v___x_1885_ = lean_apply_1(v_h__2_1878_, v_n_1884_);
return v___x_1885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg___boxed(lean_object* v_n_1886_, lean_object* v_h__1_1887_, lean_object* v_h__2_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(v_n_1886_, v_h__1_1887_, v_h__2_1888_);
lean_dec(v_n_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(lean_object* v_motive_1890_, lean_object* v_n_1891_, lean_object* v_h__1_1892_, lean_object* v_h__2_1893_){
_start:
{
lean_object* v_zero_1894_; uint8_t v_isZero_1895_; 
v_zero_1894_ = lean_unsigned_to_nat(0u);
v_isZero_1895_ = lean_nat_dec_eq(v_n_1891_, v_zero_1894_);
if (v_isZero_1895_ == 1)
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec(v_h__2_1893_);
v___x_1896_ = lean_box(0);
v___x_1897_ = lean_apply_1(v_h__1_1892_, v___x_1896_);
return v___x_1897_;
}
else
{
lean_object* v_one_1898_; lean_object* v_n_1899_; lean_object* v___x_1900_; 
lean_dec(v_h__1_1892_);
v_one_1898_ = lean_unsigned_to_nat(1u);
v_n_1899_ = lean_nat_sub(v_n_1891_, v_one_1898_);
v___x_1900_ = lean_apply_1(v_h__2_1893_, v_n_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___boxed(lean_object* v_motive_1901_, lean_object* v_n_1902_, lean_object* v_h__1_1903_, lean_object* v_h__2_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(v_motive_1901_, v_n_1902_, v_h__1_1903_, v_h__2_1904_);
lean_dec(v_n_1902_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_next___boxed(lean_object* v_s_1908_, lean_object* v_p_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = lean_string_utf8_next(v_s_1908_, v_p_1909_);
lean_dec(v_p_1909_);
lean_dec_ref(v_s_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_String_next___boxed(lean_object* v_s_1913_, lean_object* v_p_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = lean_string_utf8_next(v_s_1913_, v_p_1914_);
lean_dec(v_p_1914_);
lean_dec_ref(v_s_1913_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux(lean_object* v_x_1916_, lean_object* v_x_1917_, lean_object* v_x_1918_){
_start:
{
if (lean_obj_tag(v_x_1916_) == 0)
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_dec(v_x_1917_);
v___x_1919_ = lean_unsigned_to_nat(1u);
v___x_1920_ = lean_nat_sub(v_x_1918_, v___x_1919_);
return v___x_1920_;
}
else
{
lean_object* v_head_1921_; lean_object* v_tail_1922_; lean_object* v___y_1924_; uint32_t v___x_1928_; uint32_t v___x_1929_; uint8_t v___x_1930_; 
v_head_1921_ = lean_ctor_get(v_x_1916_, 0);
v_tail_1922_ = lean_ctor_get(v_x_1916_, 1);
v___x_1928_ = 127;
v___x_1929_ = lean_unbox_uint32(v_head_1921_);
v___x_1930_ = lean_uint32_dec_le(v___x_1929_, v___x_1928_);
if (v___x_1930_ == 0)
{
uint32_t v___x_1931_; uint32_t v___x_1932_; uint8_t v___x_1933_; 
v___x_1931_ = 2047;
v___x_1932_ = lean_unbox_uint32(v_head_1921_);
v___x_1933_ = lean_uint32_dec_le(v___x_1932_, v___x_1931_);
if (v___x_1933_ == 0)
{
uint32_t v___x_1934_; uint32_t v___x_1935_; uint8_t v___x_1936_; 
v___x_1934_ = 65535;
v___x_1935_ = lean_unbox_uint32(v_head_1921_);
v___x_1936_ = lean_uint32_dec_le(v___x_1935_, v___x_1934_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_unsigned_to_nat(4u);
v___y_1924_ = v___x_1937_;
goto v___jp_1923_;
}
else
{
lean_object* v___x_1938_; 
v___x_1938_ = lean_unsigned_to_nat(3u);
v___y_1924_ = v___x_1938_;
goto v___jp_1923_;
}
}
else
{
lean_object* v___x_1939_; 
v___x_1939_ = lean_unsigned_to_nat(2u);
v___y_1924_ = v___x_1939_;
goto v___jp_1923_;
}
}
else
{
lean_object* v___x_1940_; 
v___x_1940_ = lean_unsigned_to_nat(1u);
v___y_1924_ = v___x_1940_;
goto v___jp_1923_;
}
v___jp_1923_:
{
lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1925_ = lean_nat_add(v_x_1917_, v___y_1924_);
v___x_1926_ = lean_nat_dec_le(v_x_1918_, v___x_1925_);
if (v___x_1926_ == 0)
{
lean_dec(v_x_1917_);
v_x_1916_ = v_tail_1922_;
v_x_1917_ = v___x_1925_;
goto _start;
}
else
{
lean_dec(v___x_1925_);
return v_x_1917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux___boxed(lean_object* v_x_1941_, lean_object* v_x_1942_, lean_object* v_x_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_String_Pos_Raw_utf8PrevAux(v_x_1941_, v_x_1942_, v_x_1943_);
lean_dec(v_x_1943_);
lean_dec(v_x_1941_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_String_utf8PrevAux(lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_String_Pos_Raw_utf8PrevAux(v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_String_utf8PrevAux___boxed(lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_String_utf8PrevAux(v_a_1949_, v_a_1950_, v_a_1951_);
lean_dec(v_a_1951_);
lean_dec(v_a_1949_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_prev___boxed(lean_object* v_a_00___x40___internal___hyg_1955_, lean_object* v_a_00___x40___internal___hyg_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = lean_string_utf8_prev(v_a_00___x40___internal___hyg_1955_, v_a_00___x40___internal___hyg_1956_);
lean_dec(v_a_00___x40___internal___hyg_1956_);
lean_dec_ref(v_a_00___x40___internal___hyg_1955_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_String_prev___boxed(lean_object* v_a_00___x40___internal___hyg_1960_, lean_object* v_a_00___x40___internal___hyg_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = lean_string_utf8_prev(v_a_00___x40___internal___hyg_1960_, v_a_00___x40___internal___hyg_1961_);
lean_dec(v_a_00___x40___internal___hyg_1961_);
lean_dec_ref(v_a_00___x40___internal___hyg_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_atEnd___boxed(lean_object* v_a_00___x40___internal___hyg_1965_, lean_object* v_a_00___x40___internal___hyg_1966_){
_start:
{
uint8_t v_res_1967_; lean_object* v_r_1968_; 
v_res_1967_ = lean_string_utf8_at_end(v_a_00___x40___internal___hyg_1965_, v_a_00___x40___internal___hyg_1966_);
lean_dec(v_a_00___x40___internal___hyg_1966_);
lean_dec_ref(v_a_00___x40___internal___hyg_1965_);
v_r_1968_ = lean_box(v_res_1967_);
return v_r_1968_;
}
}
LEAN_EXPORT lean_object* l_String_atEnd___boxed(lean_object* v_a_00___x40___internal___hyg_1971_, lean_object* v_a_00___x40___internal___hyg_1972_){
_start:
{
uint8_t v_res_1973_; lean_object* v_r_1974_; 
v_res_1973_ = lean_string_utf8_at_end(v_a_00___x40___internal___hyg_1971_, v_a_00___x40___internal___hyg_1972_);
lean_dec(v_a_00___x40___internal___hyg_1972_);
lean_dec_ref(v_a_00___x40___internal___hyg_1971_);
v_r_1974_ = lean_box(v_res_1973_);
return v_r_1974_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x27___boxed(lean_object* v_s_1978_, lean_object* v_p_1979_, lean_object* v_h_1980_){
_start:
{
uint32_t v_res_1981_; lean_object* v_r_1982_; 
v_res_1981_ = lean_string_utf8_get_fast(v_s_1978_, v_p_1979_);
lean_dec(v_p_1979_);
lean_dec_ref(v_s_1978_);
v_r_1982_ = lean_box_uint32(v_res_1981_);
return v_r_1982_;
}
}
LEAN_EXPORT lean_object* l_String_get_x27___boxed(lean_object* v_s_1986_, lean_object* v_p_1987_, lean_object* v_h_1988_){
_start:
{
uint32_t v_res_1989_; lean_object* v_r_1990_; 
v_res_1989_ = lean_string_utf8_get_fast(v_s_1986_, v_p_1987_);
lean_dec(v_p_1987_);
lean_dec_ref(v_s_1986_);
v_r_1990_ = lean_box_uint32(v_res_1989_);
return v_r_1990_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_next_x27___boxed(lean_object* v_s_1994_, lean_object* v_p_1995_, lean_object* v_h_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = lean_string_utf8_next_fast(v_s_1994_, v_p_1995_);
lean_dec(v_p_1995_);
lean_dec_ref(v_s_1994_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_String_next_x27___boxed(lean_object* v_s_2001_, lean_object* v_p_2002_, lean_object* v_h_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = lean_string_utf8_next_fast(v_s_2001_, v_p_2002_);
lean_dec(v_p_2002_);
lean_dec_ref(v_s_2001_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop(lean_object* v_a_2005_, lean_object* v_b_2006_, lean_object* v_stopPos_2007_, lean_object* v_i_2008_){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; uint8_t v___x_2011_; 
v___x_2009_ = lean_unsigned_to_nat(1u);
v___x_2010_ = lean_nat_add(v_i_2008_, v___x_2009_);
v___x_2011_ = lean_nat_dec_le(v___x_2010_, v_stopPos_2007_);
lean_dec(v___x_2010_);
if (v___x_2011_ == 0)
{
return v_i_2008_;
}
else
{
uint32_t v___x_2012_; uint32_t v___x_2013_; uint8_t v___x_2014_; 
v___x_2012_ = lean_string_utf8_get(v_a_2005_, v_i_2008_);
v___x_2013_ = lean_string_utf8_get(v_b_2006_, v_i_2008_);
v___x_2014_ = lean_uint32_dec_eq(v___x_2012_, v___x_2013_);
if (v___x_2014_ == 0)
{
return v_i_2008_;
}
else
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_string_utf8_next(v_a_2005_, v_i_2008_);
lean_dec(v_i_2008_);
v_i_2008_ = v___x_2015_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop___boxed(lean_object* v_a_2017_, lean_object* v_b_2018_, lean_object* v_stopPos_2019_, lean_object* v_i_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_String_firstDiffPos_loop(v_a_2017_, v_b_2018_, v_stopPos_2019_, v_i_2020_);
lean_dec(v_stopPos_2019_);
lean_dec_ref(v_b_2018_);
lean_dec_ref(v_a_2017_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos(lean_object* v_a_2022_, lean_object* v_b_2023_){
_start:
{
lean_object* v___y_2025_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; 
v___x_2028_ = lean_string_utf8_byte_size(v_a_2022_);
v___x_2029_ = lean_string_utf8_byte_size(v_b_2023_);
v___x_2030_ = lean_nat_dec_le(v___x_2028_, v___x_2029_);
if (v___x_2030_ == 0)
{
v___y_2025_ = v___x_2029_;
goto v___jp_2024_;
}
else
{
v___y_2025_ = v___x_2028_;
goto v___jp_2024_;
}
v___jp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_unsigned_to_nat(0u);
v___x_2027_ = l_String_firstDiffPos_loop(v_a_2022_, v_b_2023_, v___y_2025_, v___x_2026_);
lean_dec(v___y_2025_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos___boxed(lean_object* v_a_2031_, lean_object* v_b_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_String_firstDiffPos(v_a_2031_, v_b_2032_);
lean_dec_ref(v_b_2032_);
lean_dec_ref(v_a_2031_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082(lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
if (lean_obj_tag(v_a_2034_) == 0)
{
return v_a_2034_;
}
else
{
lean_object* v_head_2037_; lean_object* v_tail_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2064_; 
v_head_2037_ = lean_ctor_get(v_a_2034_, 0);
v_tail_2038_ = lean_ctor_get(v_a_2034_, 1);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_a_2034_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2040_ = v_a_2034_;
v_isShared_2041_ = v_isSharedCheck_2064_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_tail_2038_);
lean_inc(v_head_2037_);
lean_dec(v_a_2034_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2064_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___y_2043_; uint8_t v_decide_2049_; 
v_decide_2049_ = lean_nat_dec_eq(v_a_2035_, v_a_2036_);
if (v_decide_2049_ == 0)
{
uint32_t v___x_2050_; uint32_t v___x_2051_; uint8_t v___x_2052_; 
v___x_2050_ = 127;
v___x_2051_ = lean_unbox_uint32(v_head_2037_);
v___x_2052_ = lean_uint32_dec_le(v___x_2051_, v___x_2050_);
if (v___x_2052_ == 0)
{
uint32_t v___x_2053_; uint32_t v___x_2054_; uint8_t v___x_2055_; 
v___x_2053_ = 2047;
v___x_2054_ = lean_unbox_uint32(v_head_2037_);
v___x_2055_ = lean_uint32_dec_le(v___x_2054_, v___x_2053_);
if (v___x_2055_ == 0)
{
uint32_t v___x_2056_; uint32_t v___x_2057_; uint8_t v___x_2058_; 
v___x_2056_ = 65535;
v___x_2057_ = lean_unbox_uint32(v_head_2037_);
v___x_2058_ = lean_uint32_dec_le(v___x_2057_, v___x_2056_);
if (v___x_2058_ == 0)
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_unsigned_to_nat(4u);
v___y_2043_ = v___x_2059_;
goto v___jp_2042_;
}
else
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_unsigned_to_nat(3u);
v___y_2043_ = v___x_2060_;
goto v___jp_2042_;
}
}
else
{
lean_object* v___x_2061_; 
v___x_2061_ = lean_unsigned_to_nat(2u);
v___y_2043_ = v___x_2061_;
goto v___jp_2042_;
}
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_unsigned_to_nat(1u);
v___y_2043_ = v___x_2062_;
goto v___jp_2042_;
}
}
else
{
lean_object* v___x_2063_; 
lean_del_object(v___x_2040_);
lean_dec(v_tail_2038_);
lean_dec(v_head_2037_);
v___x_2063_ = lean_box(0);
return v___x_2063_;
}
v___jp_2042_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2044_ = lean_nat_add(v_a_2035_, v___y_2043_);
v___x_2045_ = l_String_Pos_Raw_extract_go_u2082(v_tail_2038_, v___x_2044_, v_a_2036_);
lean_dec(v___x_2044_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 1, v___x_2045_);
v___x_2047_ = v___x_2040_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_head_2037_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082___boxed(lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_String_Pos_Raw_extract_go_u2082(v_a_2065_, v_a_2066_, v_a_2067_);
lean_dec(v_a_2067_);
lean_dec(v_a_2066_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081(lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
if (lean_obj_tag(v_a_2069_) == 0)
{
lean_dec(v_a_2070_);
return v_a_2069_;
}
else
{
lean_object* v_head_2073_; lean_object* v_tail_2074_; lean_object* v___y_2076_; uint8_t v_decide_2079_; 
v_head_2073_ = lean_ctor_get(v_a_2069_, 0);
v_tail_2074_ = lean_ctor_get(v_a_2069_, 1);
v_decide_2079_ = lean_nat_dec_eq(v_a_2070_, v_a_2071_);
if (v_decide_2079_ == 0)
{
uint32_t v___x_2080_; uint32_t v___x_2081_; uint8_t v___x_2082_; 
lean_inc(v_tail_2074_);
lean_inc(v_head_2073_);
lean_dec_ref_known(v_a_2069_, 2);
v___x_2080_ = 127;
v___x_2081_ = lean_unbox_uint32(v_head_2073_);
v___x_2082_ = lean_uint32_dec_le(v___x_2081_, v___x_2080_);
if (v___x_2082_ == 0)
{
uint32_t v___x_2083_; uint32_t v___x_2084_; uint8_t v___x_2085_; 
v___x_2083_ = 2047;
v___x_2084_ = lean_unbox_uint32(v_head_2073_);
v___x_2085_ = lean_uint32_dec_le(v___x_2084_, v___x_2083_);
if (v___x_2085_ == 0)
{
uint32_t v___x_2086_; uint32_t v___x_2087_; uint8_t v___x_2088_; 
v___x_2086_ = 65535;
v___x_2087_ = lean_unbox_uint32(v_head_2073_);
lean_dec(v_head_2073_);
v___x_2088_ = lean_uint32_dec_le(v___x_2087_, v___x_2086_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; 
v___x_2089_ = lean_unsigned_to_nat(4u);
v___y_2076_ = v___x_2089_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2090_; 
v___x_2090_ = lean_unsigned_to_nat(3u);
v___y_2076_ = v___x_2090_;
goto v___jp_2075_;
}
}
else
{
lean_object* v___x_2091_; 
lean_dec(v_head_2073_);
v___x_2091_ = lean_unsigned_to_nat(2u);
v___y_2076_ = v___x_2091_;
goto v___jp_2075_;
}
}
else
{
lean_object* v___x_2092_; 
lean_dec(v_head_2073_);
v___x_2092_ = lean_unsigned_to_nat(1u);
v___y_2076_ = v___x_2092_;
goto v___jp_2075_;
}
}
else
{
lean_object* v___x_2093_; 
v___x_2093_ = l_String_Pos_Raw_extract_go_u2082(v_a_2069_, v_a_2070_, v_a_2072_);
lean_dec(v_a_2070_);
return v___x_2093_;
}
v___jp_2075_:
{
lean_object* v___x_2077_; 
v___x_2077_ = lean_nat_add(v_a_2070_, v___y_2076_);
lean_dec(v_a_2070_);
v_a_2069_ = v_tail_2074_;
v_a_2070_ = v___x_2077_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081___boxed(lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_String_Pos_Raw_extract_go_u2081(v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_);
lean_dec(v_a_2097_);
lean_dec(v_a_2096_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract___boxed(lean_object* v_a_00___x40___internal___hyg_2102_, lean_object* v_a_00___x40___internal___hyg_2103_, lean_object* v_a_00___x40___internal___hyg_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = lean_string_utf8_extract(v_a_00___x40___internal___hyg_2102_, v_a_00___x40___internal___hyg_2103_, v_a_00___x40___internal___hyg_2104_);
lean_dec(v_a_00___x40___internal___hyg_2104_);
lean_dec(v_a_00___x40___internal___hyg_2103_);
lean_dec_ref(v_a_00___x40___internal___hyg_2102_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux(lean_object* v_s_2106_, lean_object* v_pos_2107_, lean_object* v_i_2108_, lean_object* v_offset_2109_){
_start:
{
uint8_t v___x_2110_; 
v___x_2110_ = lean_nat_dec_le(v_pos_2107_, v_i_2108_);
if (v___x_2110_ == 0)
{
uint8_t v___x_2111_; 
v___x_2111_ = lean_string_utf8_at_end(v_s_2106_, v_i_2108_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2112_ = lean_string_utf8_next(v_s_2106_, v_i_2108_);
lean_dec(v_i_2108_);
v___x_2113_ = lean_unsigned_to_nat(1u);
v___x_2114_ = lean_nat_add(v_offset_2109_, v___x_2113_);
lean_dec(v_offset_2109_);
v_i_2108_ = v___x_2112_;
v_offset_2109_ = v___x_2114_;
goto _start;
}
else
{
lean_dec(v_i_2108_);
return v_offset_2109_;
}
}
else
{
lean_dec(v_i_2108_);
return v_offset_2109_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux___boxed(lean_object* v_s_2116_, lean_object* v_pos_2117_, lean_object* v_i_2118_, lean_object* v_offset_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2116_, v_pos_2117_, v_i_2118_, v_offset_2119_);
lean_dec(v_pos_2117_);
lean_dec_ref(v_s_2116_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos(lean_object* v_s_2121_, lean_object* v_pos_2122_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_unsigned_to_nat(0u);
v___x_2124_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2121_, v_pos_2122_, v___x_2123_, v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos___boxed(lean_object* v_s_2125_, lean_object* v_pos_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_String_Pos_Raw_offsetOfPos(v_s_2125_, v_pos_2126_);
lean_dec(v_pos_2126_);
lean_dec_ref(v_s_2125_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_String_offsetOfPos(lean_object* v_s_2128_, lean_object* v_pos_2129_){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = lean_unsigned_to_nat(0u);
v___x_2131_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2128_, v_pos_2129_, v___x_2130_, v___x_2130_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_String_offsetOfPos___boxed(lean_object* v_s_2132_, lean_object* v_pos_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_String_offsetOfPos(v_s_2132_, v_pos_2133_);
lean_dec(v_pos_2133_);
lean_dec_ref(v_s_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* lean_string_offsetofpos(lean_object* v_s_2135_, lean_object* v_pos_2136_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_unsigned_to_nat(0u);
v___x_2138_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2135_, v_pos_2136_, v___x_2137_, v___x_2137_);
lean_dec(v_pos_2136_);
lean_dec_ref(v_s_2135_);
return v___x_2138_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(lean_object* v_s1_2139_, lean_object* v_s2_2140_, lean_object* v_off1_2141_, lean_object* v_off2_2142_, lean_object* v_stop1_2143_){
_start:
{
lean_object* v___y_2145_; lean_object* v___y_2146_; uint8_t v___x_2149_; 
v___x_2149_ = lean_nat_dec_lt(v_off1_2141_, v_stop1_2143_);
if (v___x_2149_ == 0)
{
uint8_t v___x_2150_; 
lean_dec(v_off2_2142_);
lean_dec(v_off1_2141_);
v___x_2150_ = 1;
return v___x_2150_;
}
else
{
uint32_t v_c_u2081_2151_; uint32_t v_c_u2082_2152_; lean_object* v___y_2154_; uint8_t v___x_2166_; 
v_c_u2081_2151_ = lean_string_utf8_get(v_s1_2139_, v_off1_2141_);
v_c_u2082_2152_ = lean_string_utf8_get(v_s2_2140_, v_off2_2142_);
v___x_2166_ = lean_uint32_dec_eq(v_c_u2081_2151_, v_c_u2082_2152_);
if (v___x_2166_ == 0)
{
lean_dec(v_off2_2142_);
lean_dec(v_off1_2141_);
return v___x_2166_;
}
else
{
uint32_t v___x_2167_; uint8_t v___x_2168_; 
v___x_2167_ = 127;
v___x_2168_ = lean_uint32_dec_le(v_c_u2081_2151_, v___x_2167_);
if (v___x_2168_ == 0)
{
uint32_t v___x_2169_; uint8_t v___x_2170_; 
v___x_2169_ = 2047;
v___x_2170_ = lean_uint32_dec_le(v_c_u2081_2151_, v___x_2169_);
if (v___x_2170_ == 0)
{
uint32_t v___x_2171_; uint8_t v___x_2172_; 
v___x_2171_ = 65535;
v___x_2172_ = lean_uint32_dec_le(v_c_u2081_2151_, v___x_2171_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; 
v___x_2173_ = lean_unsigned_to_nat(4u);
v___y_2154_ = v___x_2173_;
goto v___jp_2153_;
}
else
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_unsigned_to_nat(3u);
v___y_2154_ = v___x_2174_;
goto v___jp_2153_;
}
}
else
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_unsigned_to_nat(2u);
v___y_2154_ = v___x_2175_;
goto v___jp_2153_;
}
}
else
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_unsigned_to_nat(1u);
v___y_2154_ = v___x_2176_;
goto v___jp_2153_;
}
}
v___jp_2153_:
{
lean_object* v___x_2155_; uint32_t v___x_2156_; uint8_t v___x_2157_; 
v___x_2155_ = lean_nat_add(v_off1_2141_, v___y_2154_);
lean_dec(v_off1_2141_);
v___x_2156_ = 127;
v___x_2157_ = lean_uint32_dec_le(v_c_u2082_2152_, v___x_2156_);
if (v___x_2157_ == 0)
{
uint32_t v___x_2158_; uint8_t v___x_2159_; 
v___x_2158_ = 2047;
v___x_2159_ = lean_uint32_dec_le(v_c_u2082_2152_, v___x_2158_);
if (v___x_2159_ == 0)
{
uint32_t v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = 65535;
v___x_2161_ = lean_uint32_dec_le(v_c_u2082_2152_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; 
v___x_2162_ = lean_unsigned_to_nat(4u);
v___y_2145_ = v___x_2155_;
v___y_2146_ = v___x_2162_;
goto v___jp_2144_;
}
else
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_unsigned_to_nat(3u);
v___y_2145_ = v___x_2155_;
v___y_2146_ = v___x_2163_;
goto v___jp_2144_;
}
}
else
{
lean_object* v___x_2164_; 
v___x_2164_ = lean_unsigned_to_nat(2u);
v___y_2145_ = v___x_2155_;
v___y_2146_ = v___x_2164_;
goto v___jp_2144_;
}
}
else
{
lean_object* v___x_2165_; 
v___x_2165_ = lean_unsigned_to_nat(1u);
v___y_2145_ = v___x_2155_;
v___y_2146_ = v___x_2165_;
goto v___jp_2144_;
}
}
}
v___jp_2144_:
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_nat_add(v_off2_2142_, v___y_2146_);
lean_dec(v_off2_2142_);
v_off1_2141_ = v___y_2145_;
v_off2_2142_ = v___x_2147_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop___boxed(lean_object* v_s1_2177_, lean_object* v_s2_2178_, lean_object* v_off1_2179_, lean_object* v_off2_2180_, lean_object* v_stop1_2181_){
_start:
{
uint8_t v_res_2182_; lean_object* v_r_2183_; 
v_res_2182_ = l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(v_s1_2177_, v_s2_2178_, v_off1_2179_, v_off2_2180_, v_stop1_2181_);
lean_dec(v_stop1_2181_);
lean_dec_ref(v_s2_2178_);
lean_dec_ref(v_s1_2177_);
v_r_2183_ = lean_box(v_res_2182_);
return v_r_2183_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_Raw_substrEq(lean_object* v_s1_2184_, lean_object* v_pos1_2185_, lean_object* v_s2_2186_, lean_object* v_pos2_2187_, lean_object* v_sz_2188_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2189_ = lean_nat_add(v_pos1_2185_, v_sz_2188_);
v___x_2190_ = lean_string_utf8_byte_size(v_s1_2184_);
v___x_2191_ = lean_nat_dec_le(v___x_2189_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_dec(v___x_2189_);
lean_dec(v_pos2_2187_);
lean_dec(v_pos1_2185_);
return v___x_2191_;
}
else
{
lean_object* v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2192_ = lean_nat_add(v_pos2_2187_, v_sz_2188_);
v___x_2193_ = lean_string_utf8_byte_size(v_s2_2186_);
v___x_2194_ = lean_nat_dec_le(v___x_2192_, v___x_2193_);
lean_dec(v___x_2192_);
if (v___x_2194_ == 0)
{
lean_dec(v___x_2189_);
lean_dec(v_pos2_2187_);
lean_dec(v_pos1_2185_);
return v___x_2194_;
}
else
{
uint8_t v___x_2195_; 
v___x_2195_ = l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(v_s1_2184_, v_s2_2186_, v_pos1_2185_, v_pos2_2187_, v___x_2189_);
lean_dec(v___x_2189_);
return v___x_2195_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_substrEq___boxed(lean_object* v_s1_2196_, lean_object* v_pos1_2197_, lean_object* v_s2_2198_, lean_object* v_pos2_2199_, lean_object* v_sz_2200_){
_start:
{
uint8_t v_res_2201_; lean_object* v_r_2202_; 
v_res_2201_ = l_String_Pos_Raw_substrEq(v_s1_2196_, v_pos1_2197_, v_s2_2198_, v_pos2_2199_, v_sz_2200_);
lean_dec(v_sz_2200_);
lean_dec_ref(v_s2_2198_);
lean_dec_ref(v_s1_2196_);
v_r_2202_ = lean_box(v_res_2201_);
return v_r_2202_;
}
}
LEAN_EXPORT uint8_t l_String_substrEq(lean_object* v_s1_2203_, lean_object* v_pos1_2204_, lean_object* v_s2_2205_, lean_object* v_pos2_2206_, lean_object* v_sz_2207_){
_start:
{
uint8_t v___x_2208_; 
v___x_2208_ = l_String_Pos_Raw_substrEq(v_s1_2203_, v_pos1_2204_, v_s2_2205_, v_pos2_2206_, v_sz_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_String_substrEq___boxed(lean_object* v_s1_2209_, lean_object* v_pos1_2210_, lean_object* v_s2_2211_, lean_object* v_pos2_2212_, lean_object* v_sz_2213_){
_start:
{
uint8_t v_res_2214_; lean_object* v_r_2215_; 
v_res_2214_ = l_String_substrEq(v_s1_2209_, v_pos1_2210_, v_s2_2211_, v_pos2_2212_, v_sz_2213_);
lean_dec(v_sz_2213_);
lean_dec_ref(v_s2_2211_);
lean_dec_ref(v_s1_2209_);
v_r_2215_ = lean_box(v_res_2214_);
return v_r_2215_;
}
}
lean_object* runtime_initialize_Init_Data_String_Decode(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Sublist(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Sublist(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1 = _init_l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1();
lean_mark_persistent(l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Decode(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_List_Sublist(uint8_t builtin);
lean_object* initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Sublist(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
